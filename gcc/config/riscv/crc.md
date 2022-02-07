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

(define_expand "riscv_crcqihi4"
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

(define_expand "riscv_crchihi4"
  [(pc)]
)
