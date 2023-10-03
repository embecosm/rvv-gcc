#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "target.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"

/* We'd like to check that there's no flow control inside the loop
   except for nested HW loops and the final branch back to the loop latch.
   However, we can't do that becaue we are not being passed the loop
   structure.  */
bool
riscv_can_use_doloop_p (const widest_int &, const widest_int &,
			unsigned int loop_depth, bool entered_at_top)
{
  if (!TARGET_XCVHWLP)
    return false;
  if (loop_depth > 2)
    return false;
  if (!entered_at_top)
    return false;
  return true;
}

/* The only control flow allowed inside a HW loop is another HW loop,
   ebreak, and ecall.  */
const char *
riscv_invalid_within_doloop (const rtx_insn *insn)
{
  if (CALL_P (insn))
    return "Function call in the loop.";
  /* Alas, the jump at the end of the loop is considered part of the loop,
     and there's no good way here to distinguish it from interspersed control
     flow.  We have to leave it to the doloop_end expander to analyze the loop
     again.  */
#if 0
  if (JUMP_P (insn) && recog_memoized (const_cast <rtx_insn *> (insn)) != CODE_FOR_doloop_end_i)
    return "Jump in loop.";
#endif

  return NULL;
}

/* Determine if we can implement the loop setup MD_INSN with cv.setupi,
   considering the hardware loop starts at the labels in the LABEL_REFs
   START_REF and END_REF.  */

bool
hwloop_setupi_p (rtx md_insn, rtx start_ref, rtx end_ref)
{
  rtx_insn *insn = as_a <rtx_insn *> (md_insn);
  rtx_insn *start = label_ref_label (start_ref);
  rtx_insn *end = label_ref_label (end_ref);

  /* The the loop must directly follow the cv.setupi instruction.  */
  if (next_active_insn (insn) != next_active_insn (start))
    return false;

  /* Loops with >= 2K instructions can't be setup with cv.setupi .  */
  for (unsigned count = 0; insn != end; insn = NEXT_INSN (insn))
    {
      if (!active_insn_p (insn))
	continue;
      if (++count > 2047)
	return false;
    }
  return true;
}

void
add_label_op_ref (rtx_insn *insn, rtx label)
{
  if (GET_CODE (label) == LABEL_REF)
    label = label_ref_label (label);
  add_reg_note (insn, REG_LABEL_OPERAND, label);
  ++LABEL_NUSES (label);
}
