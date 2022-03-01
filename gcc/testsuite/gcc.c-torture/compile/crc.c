int
f (int crc, int i)
{
  return __builtin_crc8s (crc, i, 0xa001);
}
