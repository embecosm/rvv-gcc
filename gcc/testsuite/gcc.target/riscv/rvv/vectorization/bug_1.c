/* { dg-do run } */
/* { dg-additional-options "-O2" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdio.h>

void functest(char * restrict c, char * restrict e, char a, char b)
{
	int i;
	for (i = 0; i < 64; ++i)
	{
		if (a > b)
		{
			e[i] = c[i];
		}
	}
}

int main()
{
	char a = 8;
	char b = 3;
  char c[64];
	char e[64];

	for (int i = 0; i < 64; i++)
		c[i] = i * 2 + 1;

	functest (c, e, a, b);

	for (int i = 0; i < 64; i++)
	{
		if (e[i] != c[i])
		  {
				printf("expec:%d,result:%d\n",c[i],e[i]);
				__builtin_abort ();
			}
	}

	return 0;
}
