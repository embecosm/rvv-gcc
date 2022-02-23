;;Lower code size implementation, and for variable polynoms.
;;Gets unrolled if not optimizing for size, but still compact.
;;
;;static
;;u16 crcu16_1(u16 data, u16 crc, u16 xor_val)
;;{
;;  unsigned long tmp = data ^ crc;
;;  if (!tmp)
;;    return tmp;
;;  for (int i = 0; i < 16; i++)
;;    {
;;#if 1 /* Using ROR.  */
;;      tmp = (tmp >> 1) | (tmp << (sizeof (tmp) * (8 /*CHAR_BIT*/) - 1));
;;      if ((long)tmp < 0)
;;#else /* For base instruction set.  */
;;      long tmp2 = tmp & 1;
;;      tmp >>= 1;
;;      if (tmp2)
;;#endif
;;        tmp ^= xor_val;
;;    }
;;  return tmp;
;;}
;;
;;u16 crcu16 (u16 data, u16 crc)
;;{
;;  u16 xor_val;
;;#if 0
;;  xor_val = 0xa001;
;;#else /* Avoid unwanted constant propagation.  */
;;  asm ("" : "=r" (xor_val) : "0" (0xa001));
;;#endif
;;  return crcu16_1 (data, crc, xor_val);
;;}

;; First mode is for the data that is being processed, the second is for
;; input crc, polynom and output crc.

(define_expand "crcqihi4"
  [(set (match_operand:HI 0)
	(umod:HI ;; Actually not umod, but crc.
	  (xor:HI (match_operand:HI 1) (zero_extend:HI (match_operand:QI 2)))
		  (match_operand:HI 3)))] ;; op3: polynom
  ""
{
  /* Use speed optimized CRC computation for constant polynom.  */
  expand_crc_lookup (operands, QImode);
  DONE;
})

(define_expand "crchihi4<mode>"
  [(set (match_dup 5) (and:P (match_dup 4) (const_int 255)))
   (set (match_dup 5)
	(plus:P (ashift:P (match_dup 5) (const_int 1)) (match_operand 3)))
   (set (match_dup 6)
	(zero_extend:P (mem:QI (plus:P (match_dup 5) (match_dup 8)))))
   (set (match_dup 7) (lshiftrt:P (match_dup 4) (const_int 8)))
   (set (match_dup 7) (and:P (match_dup 7) (const_int 255)));; ? needed???
   (set (match_dup 5)
	(zero_extend:P (mem:QI (plus:P (match_dup 5) (match_dup 9)))))
   (set (match_dup 6) (xor:P (match_dup 6) (match_dup 7)))
   (set (match_dup 6)
	(plus:P (ashift:P (match_dup 6) (const_int 1)) (match_dup 3)))
   (set (match_dup 6) (zero_extend:P (mem:HI (match_dup 6))))
   (set (match_operand:HI 0) (xor:P (match_dup 5) (match_dup 6)))]
  ""
{
  operands[3]
    = force_reg (Pmode, print_crc_table (16, 8, INTVAL (operands[3]) & 65535));
  operands[8] = GEN_INT (TARGET_BIG_ENDIAN != 0);
  operands[9] = GEN_INT (TARGET_BIG_ENDIAN == 0);
  operands[1] = simplify_gen_subreg (word_mode, operands[1], HImode, 0);
  operands[2] = simplify_gen_subreg (word_mode, operands[2], HImode, 0);
  operands[0] = simplify_gen_subreg (word_mode, operands[0], HImode, 0);
  operands[4] = gen_rtx_XOR (Pmode, operands[1], operands[2]);
  operands[4] = force_reg (Pmode, operands[4]);
  operands[5] = gen_reg_rtx (Pmode);
  operands[6] = gen_reg_rtx (Pmode);
  operands[7] = gen_reg_rtx (Pmode);
})

(define_expand "crchihi4"
  [(set (match_operand:HI 0)
	(umod:HI ;; Actually not umod, but crc.
	  (xor:HI (match_operand:HI 1) (match_operand:HI 2))
		  (match_operand:HI 3)))] ;; op3: polynom
  ""
{
  /* Use speed optimized CRC computation for constant polynom.  */
  if (!TARGET_SMALL_MEMORY
      || (CONST_INT_P (operands[1]) && CONST_INT_P (operands[2])))
    expand_crc_lookup (operands, HImode);
  else if (word_mode == SImode)
    emit_insn (gen_crchihi4si (operands[0],
			       operands[1], operands[2], operands[3]));
  else
    emit_insn (gen_crchihi4di (operands[0],
			       operands[1], operands[2], operands[3]));
  DONE;
})

(define_expand "index_hi"
  [(set (match_dup 0) (match_operand 2))]
  ""
{
  /* Preferrably use sh1add.  */
  rtx doubled = gen_rtx_ASHIFT (Pmode, operands[2], const1_rtx);
  if (!TARGET_ZBA)
    force_reg (Pmode, doubled);
  operands[2] = gen_rtx_PLUS (Pmode, doubled, operands[1]);
})

(define_expand "crcsihi4"
  [(set (match_operand:HI 0)
	(umod:HI ;; Actually not umod, but crc.
	  (xor:SI (match_operand:HI 1) (match_operand:SI 2))
		  (match_operand:HI 3)))] ;; op3: polynom
  ""
{
  /* Use speed optimized CRC computation for constant polynom.  */
  if (CONST_INT_P (operands[1]) && CONST_INT_P (operands[2]))
    {
      expand_crc_lookup (operands, HImode);
      DONE;
    }
  rtx tab
    = force_reg (Pmode, print_crc_table (16, 8, INTVAL (operands[3]) & 65535));
  rtx addr = gen_reg_rtx (Pmode);
  rtx lo_ad = plus_constant (Pmode, addr, TARGET_BIG_ENDIAN != 0);
  rtx hi_ad = plus_constant (Pmode, addr, TARGET_BIG_ENDIAN == 0);
  operands[1] = simplify_gen_subreg (word_mode, operands[1], HImode, 0);
  operands[2] = simplify_gen_subreg (word_mode, operands[2], SImode, 0);
  rtx crc_in = force_reg (Pmode, gen_rtx_XOR (Pmode, operands[1], operands[2]));
  rtx ix = force_reg (Pmode, gen_rtx_AND (Pmode, crc_in, GEN_INT (255)));

  rtx lo, hi;
  rtx old_hi = NULL_RTX;
  for (int i = 0; i < 3; i++)
    {
      emit_insn (gen_index_hi (addr, tab, ix));
      lo = force_reg (Pmode, (gen_rtx_ZERO_EXTEND
			       (Pmode, gen_rtx_MEM (QImode, lo_ad))));
      hi = force_reg (Pmode, (gen_rtx_ZERO_EXTEND
			       (Pmode, gen_rtx_MEM (QImode, hi_ad))));
      switch (i)
	{
	case 0: case 2:
	  crc_in = gen_rtx_LSHIFTRT (Pmode, crc_in, GEN_INT (8));
	  break;
	case 1:
	  crc_in = gen_rtx_LSHIFTRT (Pmode, operands[2], GEN_INT (16));
	  break;
	default:
	  gcc_unreachable ();
	}
      crc_in = force_reg (Pmode, crc_in);
      ix = force_reg (Pmode, gen_rtx_AND (Pmode, crc_in, GEN_INT (255)));
      if (old_hi)
	ix = force_reg (Pmode, gen_rtx_XOR (Pmode, ix, old_hi));
      ix = force_reg (Pmode, gen_rtx_XOR (Pmode, ix, lo));
      old_hi = hi;
    }
  emit_insn (gen_index_hi (addr, tab, ix));
  lo = force_reg (Pmode, (gen_rtx_ZERO_EXTEND
			   (Pmode, gen_rtx_MEM (HImode, addr))));
  operands[0] = simplify_gen_subreg (word_mode, operands[0], HImode, 0);
  emit_move_insn (operands[0], gen_rtx_XOR (Pmode, lo, old_hi));
  DONE;
})
