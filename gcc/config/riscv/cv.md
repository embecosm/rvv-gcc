;; ??? The manual is unclear what the hardware loops actually do.
;; We are just guessing here.
;; FIXME: add padding between inner and outer loop if necessary.
(define_insn "doloop_end_i"
  [(set (pc)
	(if_then_else
	  (ne (match_operand:SI 0 "nonimmediate_operand" "+xcvl0c,xcvl1c")
	      (const_int 1))
	  (label_ref (match_operand 1 "" ""))
	  (pc)))
   (set (match_dup 0)
	(plus:SI (match_dup 0)
		 (const_int -1)))
   (use (match_operand:SI 2 "" "xcvl0s,xcvl1s"))
   (use (match_operand:SI 3 "" "xcvl0e,xcvl1e"))
   (use (match_operand:SI 4 "" "X,X"))]
  "TARGET_XCVHWLP"
{
  output_asm_insn ("%4:", operands);
  if (TARGET_RVC)
    asm_fprintf (asm_out_file, ".option rvc\n");
  return "";
}
  [(set_attr "type" "branch")
   (set_attr "length" "0")]
)

(define_expand "doloop_end"
  [(match_operand:SI 0 "nonimmediate_operand" "")
   (match_operand 1 "" "")
   (match_operand 2 "" "")]
  "TARGET_XCVHWLP"
{
  if (GET_MODE (operands[0]) != SImode)
    FAIL;

  rtx_insn *start_label = as_a<rtx_insn *> (operands[1]);

  /* A HW loop must contain at least three insns.  If there are less than
     two insns in the loop, we must add two or more nops, which is worse
     than just using a normal loop with separate decrement and
     branch instructions.  */
  unsigned n_insns = 0;
  /* We must not set the counter register inside the loop, except for the
     increment that'll be folded into the doloop_end.  But that is already
    taken care of by loop_optimize, which creates a new register just for
    counting.  */

  /* If nesting HW loops, the inner loop must be using
     lpspart0, lpend0, lpcount0 .  It's OK if we have more than one inner
     loop, as long as they are not nested into each other; we have already
     checked the nesting depth in riscv_can_use_doloop_p.  */
  bool inner_loop_p = false;
  rtx_insn *bb_last = NULL;
  rtx_insn *bb_succ = NULL;
  for (rtx_insn *insn = start_label; ;
       insn = (insn == bb_last ? bb_succ : NEXT_INSN (insn)))
    {
      if (!insn)
	FAIL;

      /* For: int f (int i, int j) { while (--j) i = (i << 1) - 13; return i; }
	 we get passed a start label that's actually after the final branch.  */

      if (NOTE_INSN_BASIC_BLOCK_P (insn))
	{
	  basic_block bb = NOTE_BASIC_BLOCK (insn);
	  bb_last = BB_END (bb);
	  if (single_succ_p (bb))
	    bb_succ = BB_HEAD (single_succ (bb));
	  else if (recog_memoized (bb_last) == CODE_FOR_doloop_end_i)
	    bb_succ = BB_HEAD (FALLTHRU_EDGE (bb)->dest);
	  else if (bb_last == operands[2])
	    bb_succ = NULL;
	  else
	    FAIL;
	}

      if (NONJUMP_INSN_P (insn))
	n_insns++;
      else if (JUMP_P (insn))
	{
	  if (recog_memoized (insn) == CODE_FOR_doloop_end_i)
	    inner_loop_p = true;
	  else if (insn != operands[2])
	    FAIL;
	  else
	    break;
	}
    }
  /* We have counted in the counter decrement, so we need three insns for the
     cost of the HW loop to be amortized.  */
  if (n_insns < 3)
    FAIL;

  rtx start = gen_rtx_REG (SImode, LPSTART0_REGNUM + (inner_loop_p ? 3 : 0));
  rtx end = gen_rtx_REG (SImode, LPEND0_REGNUM + (inner_loop_p ?  3 : 0));
  rtx ref = gen_rtx_LABEL_REF (SImode, gen_label_rtx ());
  rtx_insn *jump
    = emit_jump_insn (gen_doloop_end_i (operands[0], operands[1],
					start, end, ref));
  add_label_op_ref (jump, ref);
  DONE;
})

; FIXME: should do something about large loops.  We could always split,
; but that'd be wasteful if the loop starts immediately and the end offset
; fits into u12, and we just need to put the loop counter into a general
; purpose register.  Maybe disallow immediate loop count alternatives if
; the loop size is too large for short, but OK for u12 immediate.
; Wrap end label in unspec or not to allow pattern to distinguish loop length?
; Or should we always allocate a scatch when using a loop count immediate, and
; leave the final decision to the assembler (or even linker with relaxation)?
(define_insn_and_split "doloop_begin_i"
  [(set (match_operand:SI 0 "lpstart_reg_op" "=xcvl0s,xcvl1s,xcvl0s,xcvl1s")
	(match_operand:SI 1))
   (set (match_operand:SI 2 "lpend_reg_op" "=xcvl0s,xcvl1s,xcvl0e,xcvl1e")
	(match_operand:SI 3))
   (set (match_operand:SI 4 "register_operand" "=xcvl0s,xcvl1s,xcvl0c,xcvl1c")
	(match_operand:SI 5 "nonmemory_operand" "xcvu12,xcvu12,r,r"))]
  "TARGET_XCVHWLP"
{
  unsigned loopnum = REGNO (operands[0]) - LPSTART0_REGNUM;
  operands[0] = GEN_INT (loopnum);
  if (TARGET_RVC)
    asm_fprintf (asm_out_file, ".balign 4\n"
			       ".option norvc\n");
  if ((which_alternative & 1) == 0)
    return "cv.setupi %0, %5, %3";
  else
    return "cv.setup %0, %5, %3";
}
  "&& GET_CODE (operands[1]) == LABEL_REF
   && !hwloop_setupi_p (insn, operands[1], operands[3])"
  [(set (match_dup 0) (match_dup 1))
   (set (match_dup 2) (match_dup 3))
   (set (match_dup 4) (match_dup 5))]
  ""
  [(set_attr "move_type" "move")
   (set_attr "length" "4")]
)

(define_expand "doloop_begin"
  [(use (match_operand 0 "register_operand"))
   (use (match_operand 1 ""))]
  "TARGET_XCVHWLP"
{
  rtx pat = PATTERN (operands[1]);
  /* ??? cleanup_cfg, called from pass_rtl_loop_done::execute, deletes
     loop latches without updating LABEL_REFS in non-jump instructions
     even when marked with marked with REG_LABEL_OPEREND notes.  */
#if 0
  rtx start_label_ref
    = XEXP (SET_SRC (XVECEXP (pat, 0, 0)), 1);
#else
  rtx lst = gen_rtx_INSN_LIST (VOIDmode, operands[1], NULL_RTX);
  rtx start_label_ref
    = gen_rtx_UNSPEC (SImode, gen_rtvec (1, lst), UNSPEC_LOOPBUG);
#endif
  rtx start_reg = XEXP (XVECEXP (pat, 0, 2), 0);
  rtx end_reg = XEXP (XVECEXP (pat, 0, 3), 0);
  rtx end_label_ref = XEXP (XVECEXP (pat, 0, 4), 0);
  rtx_insn *insn = emit_insn (gen_doloop_begin_i (start_reg, start_label_ref,
						  end_reg, end_label_ref,
						  operands[0], operands[0]));
  //add_label_op_ref (insn, start_label_ref);
  add_label_op_ref (insn, end_label_ref);
  DONE;
})

;; Although cv.start / cv.end / cv.count could be seen as move instructions
;; and therefore belonging to movsi_internal, that is problematic because
;; using them outside loopsetup contexts might confuse the HW loop logic
;; of the processor.  We might model this with UNSPEC_VOLATILEs, but
;; that'd likely get too much into the way of optimizations.
(define_insn "*cv_start"
  [(set (match_operand:SI 0 "lpstart_reg_op" "=xcvl0s,xcvl1s,xcvl0s,xcvl1s")
	(match_operand:SI 1 "register_operand" "i,i,r,r"))]
  "TARGET_XCV"
{
  operands[0] = GEN_INT (REGNO (operands[0]) == LPSTART0_REGNUM ? 0 : 1);
  return REG_P (operands[1]) ? "cv.start %0,%1" : "cv.starti %0, %1";
}
  [(set_attr "move_type" "move")])

(define_insn "*cv_end"
  [(set (match_operand:SI 0 "lpend_reg_op" "=xcvl0e,xcvl1e,xcvl0e,xcvl1e")
	(match_operand:SI 1 "register_operand" "i,i,r,r"))]
  "TARGET_XCV"
{
  operands[0] = GEN_INT (REGNO (operands[0]) == LPEND0_REGNUM ? 0 : 1);
  return REG_P (operands[1]) ? "cv.end %0,%1" : "cv.endi %0, %1";
}
  [(set_attr "move_type" "move")])

(define_insn "*cv_count"
  [(set (match_operand:SI 0 "lpcount_reg_op" "=xcvl0c,xcvl1c,xcvl0c,xcvl1c")
	(match_operand:SI 1 "register_operand" "i,i,r,r"))]
  "TARGET_XCV"
{
  operands[0] = GEN_INT (REGNO (operands[0]) == LPCOUNT0_REGNUM ? 0 : 1);
  return REG_P (operands[1]) ? "cv.count %0,%1" : "cv.counti %0, %1";
}
  [(set_attr "move_type" "move")])
