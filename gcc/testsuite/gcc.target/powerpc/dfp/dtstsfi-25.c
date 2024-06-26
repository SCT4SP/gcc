/* { dg-do compile } */
/* { dg-require-effective-target powerpc_vsx_ok } */
/* { dg-options "-mdejagnu-cpu=power9 -mvsx" } */

/* This test should succeed on both 32- and 64-bit configurations.  */
#include <altivec.h>

int doTestBCDSignificance (_Decimal128 *p)
{
  _Decimal128 source = *p;

  return __builtin_dfp_dtstsfi_gt (5, source);
}

/* { dg-final { scan-assembler	   "dtstsfiq" } } */

