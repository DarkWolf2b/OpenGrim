// ===== continuation @ rva 507d089 (image 18507d089) =====

void FUN_18507d089(void)

{
  return;
}



// ===== continuation @ rva 5056fcb (image 185056fcb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185057021 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185056fcb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 505bfc8 (image 18505bfc8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018505c019 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18505bfc8(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5057470 (image 185057470) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001850574a7 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185057470(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x500))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5059396 (image 185059396) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001850593de */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185059396(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000040;
  
  uStack0000000000000040 = 5;
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5059c41 (image 185059c41) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185059c41(void)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_000000a0;
  ulonglong uStack0000000000000118;
  undefined8 uStack0000000000000120;
  
  uStack0000000000000118 = in_stack_00000040;
  uStack0000000000000120 = in_stack_00000048;
  _DAT_1830ba430 = func_0x00018507d270(_DAT_1830ba4e0 ^ 0x5545a722c334785d);
  _DAT_1830ba4b8 =
       (_DAT_1830ba4b8 ^ ~_DAT_1830ba430 & 0x3bbfd069e59cc9b0) + 0x7bffddffe7bdedf8 ^
       0x90e78d7d6c72bdb;
  _DAT_1830ba4c0 =
       (_DAT_1830ba4c0 * -0x478b85b9b5995899 ^ _DAT_1830ba4b8) +
       (~_DAT_1830ba430 & 0x3bbfd069e59cc9b0);
  _DAT_1830ba390 = _DAT_1830ba4c0 ^ _DAT_1830ba4b8;
  _DAT_1830ba468 = 0x7bffddffe7bdedf8;
  uVar7 = (_DAT_1830ba320 ^ _DAT_180416180) + _DAT_1830ba330 + 0x3c0931cf6fe96118;
  uVar8 = (_DAT_1830ba330 ^ _UNK_180416188) + _DAT_1830ba320 + 0xae7f979de8b8be1d;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830ba320 ^ _DAT_180416180;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1830ba330 ^ _UNK_180416188;
  _DAT_1830ba408 =
       func_0x00018507d270((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1830ba320 + 0xae7f979de8b8be1d) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1830ba330 + 0x3c0931cf6fe96118));
  _DAT_1830ba400 = (_DAT_1830ba400 ^ _DAT_1830ba408) + 0x9276a6520373fc20 ^ 0x1b7fdb1e54e379f2;
  _DAT_1830ba348 = (_DAT_1830ba348 * 0x6f1ef4f56708c3df ^ _DAT_1830ba400) + _DAT_1830ba408;
  _DAT_1830ba3d0 = _DAT_1830ba348 ^ _DAT_1830ba400;
  _DAT_1830ba430 = 0x9276a6520373fc20;
  uVar7 = (~_DAT_1830ba340 + 0x24b591fc3eb7a401) *
          ((_DAT_1830ba350 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830ba350 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_1830ba3a8) + (uVar7 & _DAT_1830ba3a8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1830ba338 = func_0x00018507d270((uVar7 | 0x24b591fcba958725) + (uVar7 & 0x24b591fcba958725));
  _DAT_1830ba4f0 = (_DAT_1830ba4f0 ^ _DAT_1830ba338) + 0xdb4a6e03c1485c00 ^ 0x512f572f0f08fc62;
  _DAT_1830ba3b0 = (_DAT_1830ba3b0 * -0x2e2968cadd1b695f ^ _DAT_1830ba4f0) + _DAT_1830ba338;
  _DAT_1830ba3b8 = _DAT_1830ba3b0 ^ _DAT_1830ba4f0;
  _DAT_1830ba388 = -0x24b591fc3eb7a400;
  _DAT_1830ba430 = func_0x00018507d270(_DAT_1830ba420 ^ 0x8c286cc2aa91290e);
  _DAT_1830ba4d0 = _DAT_1830ba378 ^ _DAT_1830ba430 ^ 0x24b591fd3eb7a3ff;
  _DAT_1830ba428 = (_DAT_1830ba428 ^ _DAT_1830ba430) + 0x24b591fd3eb7a3ff ^ 0x7cd6dd3466d5f3c9;
  _DAT_1830ba3d8 = (_DAT_1830ba3d8 * 0x5eea8a6b7a41ed87 ^ _DAT_1830ba428) + _DAT_1830ba430;
  _DAT_1830ba440 = _DAT_1830ba3d8 ^ _DAT_1830ba428;
  _DAT_1830ba4c8 = 0x24b591fd3eb7a3ff;
  uVar7 = func_0x00018507d270(_DAT_1830ba488 ^ 0x894b3947baa1d378);
  _DAT_1830ba3e8 = uVar7 & 0x3ffffffffffffff;
  _DAT_1830ba380 = _DAT_1830ba480 ^ _DAT_1830ba3e8 ^ 0xffffffff;
  _DAT_1830ba398 = (_DAT_1830ba398 ^ _DAT_1830ba3e8) + 0xffffffff ^ 0xff50c42c37b0746;
  _DAT_1830ba3e8 = (uVar7 * 0x13d3b216192a8bfd ^ _DAT_1830ba398) + _DAT_1830ba3e8;
  _DAT_1830ba4c8 = _DAT_1830ba3e8 ^ _DAT_1830ba398;
  _DAT_1830ba428 = 0xffffffff;
  _DAT_1830ba350 = func_0x00018507d270(_DAT_1830ba338 ^ 0xeb86d68c76507923);
  _DAT_1830ba310 =
       (_DAT_1830ba310 ^ _DAT_1830ba350 ^ 0xe2d9b075105ca85f) + 0x1d264f8aefa357a1 ^
       0xab434ce581bed5a5;
  _DAT_1830ba380 =
       (_DAT_1830ba380 * 0x28e92a489cef5fd5 ^ _DAT_1830ba310) +
       (_DAT_1830ba350 ^ 0xe2d9b075105ca85f);
  _DAT_1830ba410 = _DAT_1830ba380 ^ _DAT_1830ba310;
  _DAT_1830ba4b0 = 0x1d264f8aefa357a1;
  _DAT_1830ba300 = func_0x00018507d270(_DAT_1830ba388 + 0x86877b847362b263U ^ 0xb6);
  _DAT_1830ba378 =
       (_DAT_1830ba378 ^ _DAT_1830ba300 * 0x5a637f47beca0d79) + 0x63631a44e728a350 ^
       0xcdb69dccf722292e;
  _DAT_1830ba4b0 =
       (_DAT_1830ba4b0 * 0x49f026fd89403131 ^ _DAT_1830ba378) + _DAT_1830ba300 * 0x5a637f47beca0d79;
  _DAT_1830ba468 = _DAT_1830ba4b0 ^ _DAT_1830ba378;
  _DAT_1830ba348 = _DAT_1830ba460 ^ 0x63631a44e728a350;
  _DAT_1830ba4f0 = 0x63631a44e728a350;
  uVar7 = (~_DAT_1830ba4b8 + 0x63631a44e728a351) *
          ((_DAT_1830ba478 ^ 0x9c9ce5bc9cf57f8a) + (_DAT_1830ba478 & 0x1c9ce5bc9cf57f8a) * 2);
  uVar7 = (uVar7 | _DAT_1830ba4f8) + (uVar7 & _DAT_1830ba4f8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1830ba3d8 = func_0x00018507d270((uVar7 | 0xfffffff87bdddcda) + (uVar7 & 0xfffffff87bdddcda));
  uVar7 = _DAT_1830ba3d8 ^ 0xfffffffcffffffff;
  _DAT_1830ba390 = _DAT_1830ba4e8 ^ uVar7 ^ 0xffffffff;
  _DAT_1830ba3e8 = (_DAT_1830ba3e8 ^ uVar7) + 0xffffffff ^ 0x7cf6b3d086a77577;
  _DAT_1830ba380 = (_DAT_1830ba380 * 0x12385163ce17f5d ^ _DAT_1830ba3e8) + uVar7 ^ _DAT_1830ba3e8;
  _DAT_1830ba340 = 0xffffffff;
  _DAT_1830ba3f8 = func_0x00018507d270(_DAT_1830ba358 ^ 0x92ed789fc4a99c3a);
  uVar7 = ((_DAT_1830ba3f8 ^ 0x9276a65200000000) & 0xffffffffc0000000) << 0xc |
          (_DAT_1830ba3f8 ^ 0x9276a65200000000) >> 0x34;
  _DAT_1830ba300 = (_DAT_1830ba300 ^ uVar7) + 0xe9897bade4ce11d8 ^ 0xb8d48ea92acba8c7;
  _DAT_1830ba3e8 = (_DAT_1830ba3e8 * -0x56ce57d1d4c7dd6b ^ _DAT_1830ba300) + uVar7;
  _DAT_1830ba3c0 = _DAT_1830ba3e8 ^ _DAT_1830ba300;
  _DAT_1830ba3b0 = 0xe9897bade4ce11d8;
  uVar7 = (_DAT_1830ba3a8 ^ _DAT_180416190) + _DAT_1830ba308 + 0x7bffddff639fcedd;
  uVar8 = (_DAT_1830ba308 ^ _UNK_180416198) + _DAT_1830ba3a8 + 0x9276a6520373fc20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830ba3a8 ^ _DAT_180416190;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1830ba308 ^ _UNK_180416198;
  _DAT_1830ba4e0 =
       func_0x00018507d270((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1830ba3a8 + 0x9276a6520373fc20) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1830ba308 + 0x7bffddff639fcedd));
  _DAT_1830ba478 =
       (_DAT_1830ba478 ^ ~_DAT_1830ba4e0 & 0x7bffddffe7bdedf8) + 0x127684520331ec20 ^
       0x4df7153f913466e1;
  _DAT_1830ba408 =
       (_DAT_1830ba408 * -0x1e13b7c823c22d03 ^ _DAT_1830ba478) +
       (~_DAT_1830ba4e0 & 0x7bffddffe7bdedf8);
  _DAT_1830ba310 = _DAT_1830ba408 ^ _DAT_1830ba478;
  _DAT_1830ba468 = 0x127684520331ec20;
  uVar7 = (~_DAT_1830ba470 + 0x24ed08a40663d841) *
          ((_DAT_1830ba410 ^ 0xe9897bad60ec32fd) + (_DAT_1830ba410 & 0x69897bad60ec32fd) * 2);
  uVar7 = (uVar7 | _DAT_1830ba330) + (uVar7 & _DAT_1830ba330);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1830ba328 = func_0x00018507d270((uVar7 | 0xcd647309668feabd) + (uVar7 & 0xcd647309668feabd));
  _DAT_1830ba340 = _DAT_1830ba370 ^ _DAT_1830ba328 ^ 0xe768451eb31ea18;
  _DAT_1830ba398 = (_DAT_1830ba398 ^ _DAT_1830ba328) + 0xe768451eb31ea18 ^ 0xac0180a444a21004;
  _DAT_1830ba4e8 = (_DAT_1830ba4e8 * -0x7c236e090462eb57 ^ _DAT_1830ba398) + _DAT_1830ba328;
  _DAT_1830ba4f8 = _DAT_1830ba4e8 ^ _DAT_1830ba398;
  _DAT_1830ba4c0 = 0xe768451eb31ea18;
  uVar7 = (_DAT_1830ba410 ^ _DAT_1804161a0) + _DAT_1830ba3d0 + 0xe7684516f13c93d;
  uVar8 = (_DAT_1830ba3d0 ^ _UNK_1804161a8) + _DAT_1830ba410 + 0xe768451eb31ea18;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830ba410 ^ _DAT_1804161a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1830ba3d0 ^ _UNK_1804161a8;
  _DAT_1830ba3c0 =
       func_0x00018507d270((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1830ba410 + 0xe768451eb31ea18) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1830ba3d0 + 0xe7684516f13c93d));
  _DAT_1830ba438 = 0xb4a99edd1c6f102a;
  _DAT_1830ba458 =
       (_DAT_1830ba458 * -0x1dc2ecd099455dcf ^ 0xb4a99edd1c6f102a) +
       ((_DAT_1830ba3c0 ^ 0x953390b3833fe240) << 0x16 |
       (_DAT_1830ba3c0 ^ 0x953390b3833fe240) >> 0x2a) * -0x2ce2273070cf6af5;
  _DAT_1830ba360 = _DAT_1830ba458 ^ 0xb4a99edd1c6f102a;
  _DAT_1830ba408 = 0;
  uVar7 = ((_DAT_1830ba420 ^ 0x7bdddcda) + (ulonglong)((uint)_DAT_1830ba420 & 0x7bdddcda) * 2) *
          -_DAT_1830ba440;
  uVar7 = (uVar7 | _DAT_1830ba370) + (uVar7 & _DAT_1830ba370);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1830ba3f8 = func_0x00018507d270((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  uVar7 = (_DAT_1830ba3f8 << 0xf | _DAT_1830ba3f8 >> 0x31) << 0x30 |
          (_DAT_1830ba3f8 & 0x1ffffffffffff) >> 1;
  _DAT_1830ba4b0 = _DAT_1830ba300 ^ uVar7 ^ 0xffffffff;
  _DAT_1830ba4d0 = (_DAT_1830ba4d0 ^ uVar7) + 0xffffffff ^ 0x65a63f4738e6f745;
  _DAT_1830ba3a0 = (_DAT_1830ba3a0 * 0x1b4e4eaede3675c9 ^ _DAT_1830ba4d0) + uVar7 ^ _DAT_1830ba4d0;
  _DAT_1830ba368 = 0xffffffff;
  uVar7 = (_DAT_1830ba390 ^ _DAT_1804161b0) + _DAT_1830ba3b8 + 0x7bffddff639fcedd;
  uVar8 = (_DAT_1830ba3b8 ^ _UNK_1804161b8) + (_DAT_1830ba390 - 1);
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830ba390 ^ _DAT_1804161b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1830ba3b8 ^ _UNK_1804161b8;
  _DAT_1830ba4f0 =
       func_0x00018507d270((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1830ba390 - 1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1830ba3b8 + 0x7bffddff639fcedd));
  uVar7 = _DAT_1830ba4f0 << 0x17 | _DAT_1830ba4f0 >> 0x29;
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = ~((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar7) &
          0x7bffddffe7bdedf8;
  _DAT_1830ba448 = (_DAT_1830ba448 ^ uVar7) + 0x8400220018421207 ^ 0x584055db91ac85e7;
  _DAT_1830ba390 = (_DAT_1830ba390 * -0x6304b9c7f8ae4b53 ^ _DAT_1830ba448) + uVar7;
  _DAT_1830ba358 = _DAT_1830ba390 ^ _DAT_1830ba448;
  _DAT_1830ba308 = 0x8400220018421207;
  uVar7 = (~_DAT_1830ba410 + 0x8400220018421208) *
          ((_DAT_1830ba4b0 ^ 0x7bffddff639fcedd) + (_DAT_1830ba4b0 & 0x7bffddff639fcedd) * 2);
  uVar7 = (uVar7 | _DAT_1830ba398) + (uVar7 & _DAT_1830ba398);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1830ba4f8 = func_0x00018507d270((uVar7 | 0xffffffff7bdddcda) + (uVar7 & 0xffffffff7bdddcda));
  uVar7 = (_DAT_1830ba4f8 ^ 0xb4e98d914adcf1c8) & 0x7fffffffffffffff;
  _DAT_1830ba458 = _DAT_1830ba458 ^ uVar7 ^ 0x75ebc3c71cc147be;
  _DAT_1830ba320 = (_DAT_1830ba320 * 0x16169787837c7a75 ^ _DAT_1830ba458) + uVar7;
  _DAT_1830ba410 = _DAT_1830ba320 ^ _DAT_1830ba458;
  _DAT_1830ba3a0 = 0;
  _DAT_1830ba318 = func_0x00018507d270(_DAT_1830ba330 ^ 0xa400144600bc2a);
  _DAT_1830ba3a0 = _DAT_1830ba368 ^ _DAT_1830ba318 ^ 0xffffffff;
  _DAT_1830ba328 = (_DAT_1830ba328 ^ _DAT_1830ba318) + 0xffffffff ^ 0xec3edead1d7824ee;
  _DAT_1830ba318 = (_DAT_1830ba318 * -0x693439c4cb978625 ^ _DAT_1830ba328) + _DAT_1830ba318;
  _DAT_1830ba458 = _DAT_1830ba318 ^ _DAT_1830ba328;
  _DAT_1830ba300 = 0xffffffff;
  uVar7 = (_DAT_1830ba3f0 ^ _DAT_1804161c0) + _DAT_1830ba368 + 0x3bbfd06961beea95;
  uVar8 = (_DAT_1830ba368 ^ _UNK_1804161c8) + _DAT_1830ba3f0 + 0x3bbfd069e59cc9b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830ba3f0 ^ _DAT_1804161c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1830ba368 ^ _UNK_1804161c8;
  _DAT_1830ba480 =
       func_0x00018507d270((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1830ba3f0 + 0x3bbfd069e59cc9b0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1830ba368 + 0x3bbfd06961beea95));
  uVar7 = _DAT_1830ba480 - (_DAT_1830ba480 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar1 + (uint)bVar1 ^ _DAT_1830ba480;
  uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8;
  _DAT_1830ba410 = _DAT_1830ba410 ^ uVar8 ^ 0x4827a89472fa9237;
  _DAT_1830ba310 = (_DAT_1830ba310 * 0x32b5c5b6a0f9051b ^ _DAT_1830ba410) + uVar8;
  _DAT_1830ba3d8 = _DAT_1830ba310 ^ _DAT_1830ba410;
  _DAT_1830ba408 = 0;
  uVar7 = ((_DAT_1830ba310 ^ 0x7bdddcda) + (ulonglong)((uint)_DAT_1830ba310 & 0x7bdddcda) * 2) *
          -_DAT_1830ba450;
  uVar7 = (uVar7 | _DAT_1830ba3b8) + (uVar7 & _DAT_1830ba3b8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1830ba440 = func_0x00018507d270((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  uVar7 = uStack0000000000000118;
  uVar8 = ((_DAT_1830ba440 & 0x7ff) << 0x34 | _DAT_1830ba440 >> 0xc) ^ 0xffffffff;
  _DAT_1830ba3e0 = (_DAT_1830ba3e0 ^ uVar8) + 0xffffffff ^ 0xebdee18e36e922c7;
  _DAT_1830ba320 = (_DAT_1830ba320 * -0x6402cfb653e3e46b ^ _DAT_1830ba3e0) + uVar8;
  _DAT_1830ba310 = _DAT_1830ba320 ^ _DAT_1830ba3e0;
  _DAT_1830ba4d0 = 0xffffffff;
  auVar5._8_8_ = _UNK_1802126f8;
  auVar5._0_8_ = uStack0000000000000118 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_1804161d0,_DAT_1800170c0);
  uVar2 = auVar6._8_8_ + auVar6._0_8_;
  uVar8 = uVar2 + _DAT_1830ba430;
  if (auVar6._4_4_ < 0) {
    uVar8 = _DAT_1830ba320 ^ uVar2;
  }
  _DAT_1830ba4b8 = func_0x00018507d270(SUB161(auVar5 ^ _DAT_1804161d0,5) ^ uVar8);
  uVar8 = _DAT_1830ba4b8 << 0x3c | _DAT_1830ba4b8 >> 4;
  _DAT_1830ba3b8 = uVar7 & 0xffffffff;
  _DAT_1830ba3e0 = (_DAT_1830ba3e0 ^ uVar8) + _DAT_1830ba3b8 ^ 0xb7f4c8015064c1a5;
  _DAT_1830ba458 = (_DAT_1830ba458 * 0x63e02b8ec2981649 ^ _DAT_1830ba3e0) + uVar8;
  _DAT_1830ba3d0 = _DAT_1830ba458 ^ _DAT_1830ba3e0;
  bVar4 = _DAT_1830ba3b8 == 0;
  uVar7 = (ulonglong)in_stack_000000a0 ^ 0x84222325 ^ _DAT_1830ba4c0;
  lVar3 = ((ulonglong)in_stack_000000a0 ^ 0x84222325) + _DAT_1830ba4e0;
  uVar8 = uVar7 + lVar3;
  uVar2 = (_DAT_1830ba4e0 ^ 1) + _DAT_1830ba4c0 + 1;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uVar8 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830ba4e0 ^ 1;
  _DAT_1830ba428 =
       func_0x00018507d270((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1830ba4c0 + 1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar3);
  uVar10 = in_stack_000000a0 & _DAT_18001a990;
  uVar9 = in_stack_000000a0 | _DAT_18001a990;
  uVar11 = in_stack_000000a0 ^ _DAT_18001a990;
  lVar3 = ((ulonglong)in_stack_000000a0 * (ulonglong)_DAT_180416270 << 0x20) +
          (ulonglong)in_stack_000000a0 * (ulonglong)_DAT_180416260;
  uVar7 = _DAT_1830ba428 * 0x3498db53912917fc | _DAT_1830ba428 * -0x32d9c92b1bb5ba01 >> 0x3e;
  uVar8 = ((((ulonglong)uVar11 * (ulonglong)_DAT_180416250 << 0x20) +
            (ulonglong)uVar11 * (ulonglong)_DAT_180416240 +
            ((ulonglong)uVar9 * (ulonglong)_DAT_180416230 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_180416220 +
            ((ulonglong)uVar10 * (ulonglong)_DAT_180416210 << 0x20 |
            (ulonglong)uVar10 * (ulonglong)_DAT_180416200) +
            ((ulonglong)in_stack_000000a0 * (ulonglong)_DAT_1804161f0 << 0x20) +
            (ulonglong)in_stack_000000a0 * (ulonglong)_DAT_1804161e0 + lVar3) -
          (((ulonglong)uVar11 * (ulonglong)_DAT_1804162f0 << 0x20) +
           (ulonglong)uVar11 * (ulonglong)_DAT_1804162e0 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_1804162d0 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_1804162c0 +
           ((ulonglong)uVar10 * (ulonglong)_DAT_1804162b0 << 0x20 |
           (ulonglong)uVar10 * (ulonglong)_DAT_1804162a0) +
           ((ulonglong)in_stack_000000a0 * (ulonglong)_DAT_180416290 << 0x20) +
           (ulonglong)in_stack_000000a0 * (ulonglong)_DAT_180416280 + lVar3)) + 0xfaf728fc8ddc6291;
  _DAT_1830ba330 = _DAT_1830ba3c8 ^ uVar7 ^ uVar8;
  _DAT_1830ba4c0 = (_DAT_1830ba4c0 ^ uVar7) + uVar8 ^ 0x10eea5b5c265bf5;
  _DAT_1830ba4c8 = (_DAT_1830ba4c8 * 0x70e460952235ed7f ^ _DAT_1830ba4c0) + uVar7;
  _DAT_1830ba3d0 = _DAT_1830ba4c8 ^ _DAT_1830ba4c0;
  _DAT_1830ba368 = uVar8 & 0xffffffff;
  switch(bVar4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 507397f (image 18507397f) =====

void thunk_FUN_185058f2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 5057510 (image 185057510) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185057566 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185057510(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000058 = 0xd;
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 507422b (image 18507422b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18507422b(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005c24 (image 185005c24) =====

void FUN_185005c24(void)

{
  return;
}



// ===== continuation @ rva 5005b7d (image 185005b7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005b7d(void)

{
  FUN_190ddce00();
  (*_DAT_1804034b8)();
  return;
}



// ===== continuation @ rva 5005c2c (image 185005c2c) =====

void FUN_185005c2c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5005bb0 (image 185005bb0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005bb0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005bf5 (image 185005bf5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005bf5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d8))();
  (*_DAT_1804034f8)();
  return;
}



// ===== continuation @ rva 5005bd4 (image 185005bd4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005bd4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005c12 (image 185005c12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005c12(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1804034e8)();
  return;
}



// ===== continuation @ rva 5005c5a (image 185005c5a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005c5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180403528)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 5005c66 (image 185005c66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005c66(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005c83 (image 185005c83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005c83(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_180403538)();
  return;
}



// ===== continuation @ rva 5005c8c (image 185005c8c) =====

void FUN_185005c8c(void)

{
  return;
}



// ===== continuation @ rva 5005daa (image 185005daa) =====

void FUN_185005daa(void)

{
  return;
}



// ===== continuation @ rva 5005cfa (image 185005cfa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005cfa(void)

{
  FUN_190ddce00();
  (*_DAT_180403578)();
  return;
}



// ===== continuation @ rva 5005db2 (image 185005db2) =====

void FUN_185005db2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5005d8c (image 185005d8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005d8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180403558)(0);
  return;
}



// ===== continuation @ rva 5005d2d (image 185005d2d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005d2d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005d51 (image 185005d51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005d51(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005d72 (image 185005d72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005d72(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x490))();
  (*_DAT_180403568)();
  return;
}



// ===== continuation @ rva 5005dea (image 185005dea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005dea(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1804035c8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 5005df6 (image 185005df6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005df6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005e13 (image 185005e13) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005e13(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1804035d8)();
  return;
}



// ===== continuation @ rva 5005e1c (image 185005e1c) =====

void FUN_185005e1c(void)

{
  return;
}



// ===== continuation @ rva 5005f1f (image 185005f1f) =====

void FUN_185005f1f(void)

{
  return;
}



// ===== continuation @ rva 5005e8a (image 185005e8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005e8a(void)

{
  FUN_190de3220();
  (*_DAT_180403608)();
  return;
}



// ===== continuation @ rva 5005ee1 (image 185005ee1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005ee1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_18436c0d0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005f27 (image 185005f27) =====

void FUN_185005f27(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5005ebd (image 185005ebd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005ebd(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005f14 (image 185005f14) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005f14(void)

{
  (*_DAT_180403618)();
  return;
}



// ===== continuation @ rva 5005f8a (image 185005f8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185005f8a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180403658)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 5005f96 (image 185005f96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185005f96(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5005fbd (image 185005fbd) =====

undefined4 * FUN_185005fbd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 5005fbc (image 185005fbc) =====

void FUN_185005fbc(void)

{
  return;
}



// ===== continuation @ rva 5006166 (image 185006166) =====

void FUN_185006166(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x000185006195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180403990 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 5006113 (image 185006113) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185006149 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185006113(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 50077b5 (image 1850077b5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850077b5(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar3;
  
  uVar3 = (~param_1 + 0x22f3bab273653ff3) * ((param_2 ^ param_3) + param_4);
  uVar3 = (uVar3 | in_RAX) + (uVar3 & in_RAX);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8318 = func_0x00018502ebb0((uVar3 | 0x1a58db5f58f65ec) + (uVar3 & 0x1a58db5f58f65ec));
  uVar2 = _DAT_1830b8318 ^ 0xd97ab4513ffa2134;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar2 = (uint)bVar1 + (uint)bVar1 ^ uVar2;
  _DAT_1830b81c0 = (_DAT_1830b81c0 ^ uVar2) + 0x23f7bfb773ed7ffb ^ 0x4377f6a9702dda98;
  _DAT_1830b8288 = (_DAT_1830b8288 * -0x6ec1882aabe65e1b ^ _DAT_1830b81c0) + uVar2;
  _DAT_1830b83c0 = _DAT_1830b8288 ^ _DAT_1830b81c0;
  _DAT_1830b8148 = 0x23f7bfb773ed7ffb;
  uVar3 = (_DAT_1830b8038 ^ _DAT_1804048f0) + _DAT_1830b8538 + 0x4f119c545ba5528b;
  uVar2 = (_DAT_1830b8538 ^ _UNK_1804048f8) + _DAT_1830b8038 + 0xaf5f90591166a20c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8038 ^ _DAT_1804048f0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8538 ^ _UNK_1804048f8;
  _DAT_1830b8088 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8038 + 0xaf5f90591166a20c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b8538 + 0x4f119c545ba5528b));
  uVar3 = (_DAT_1830b8088 ^ 0xce047d70099d7028) & 0x7fffffffffffffff;
  _DAT_1830b7fc0 = (_DAT_1830b7fc0 ^ uVar3) + 0xe04e0c0dcee1d3a2 ^ 0x13c17e9a533d903a;
  _DAT_1830b81d8 = (_DAT_1830b81d8 * -0x324afb3588004faf ^ _DAT_1830b7fc0) + uVar3;
  _DAT_1830b8638 = _DAT_1830b81d8 ^ _DAT_1830b7fc0;
  _DAT_1830b8340 = 0xe04e0c0dcee1d3a2;
  uVar3 = (~_DAT_1830b8610 + 0x800c221ade7ffc17) *
          ((_DAT_1830b8330 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830b8330 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830b8120) + (uVar3 & _DAT_1830b8120);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8340 = func_0x00018502ebb0((uVar3 | 0x800c221a5a5ddf33) + (uVar3 & 0x800c221a5a5ddf33));
  uVar3 = (_DAT_1830b8340 ^ 0x800c221ade7ffc16) << 0x1d |
          (_DAT_1830b8340 ^ 0x800c221ade7ffc16) >> 0x23;
  _DAT_1830b8148 = (_DAT_1830b8148 ^ uVar3) + 0x7ff3dde5218003ea ^ 0xdb9358df206b630e;
  _DAT_1830b8410 = (_DAT_1830b8410 * 0x54ef7486b5590a65 ^ _DAT_1830b8148) + uVar3;
  _DAT_1830b8210 = _DAT_1830b8410 ^ _DAT_1830b8148;
  _DAT_1830b7f98 = 0x7ff3dde5218003ea;
  _DAT_1830b7f48 = func_0x00018502ebb0(_DAT_1830b82f0 + 0xa4e072a532525e3c ^ 0x3a);
  uVar3 = _DAT_1830b7f48 & 0xfffffffffffffff;
  _DAT_1830b8648 = _DAT_1830b82a0 ^ uVar3 ^ 0x800c221ade7ffc14;
  _DAT_1830b8590 = (_DAT_1830b8590 ^ uVar3) + 0x800c221ade7ffc14 ^ 0xd900b3428fdea37b;
  _DAT_1830b84a8 = (_DAT_1830b84a8 * 0x65516f8be9c5f9e9 ^ _DAT_1830b8590) + uVar3;
  _DAT_1830b8410 = _DAT_1830b84a8 ^ _DAT_1830b8590;
  _DAT_1830b81a0 = 0x800c221ade7ffc14;
  _DAT_1830b8480 = func_0x00018502ebb0(_DAT_1830b8360 + 0x4baf3a0e0922d3b4 ^ 0x8c);
  uVar3 = _DAT_1830b8480 << 0x28 | _DAT_1830b8480 >> 0x18;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar3;
  _DAT_1830b8500 = _DAT_1830b7fd0 ^ uVar3 ^ 0x4a211a0205f22cd2;
  _DAT_1830b7fc8 = (_DAT_1830b7fc8 ^ uVar3) + 0x4a211a0205f22cd2 ^ 0xe145bf61ff6a8c8;
  _DAT_1830b86a0 = (_DAT_1830b86a0 * 0x2c20b1f644594659 ^ _DAT_1830b7fc8) + uVar3;
  _DAT_1830b8380 = _DAT_1830b86a0 ^ _DAT_1830b7fc8;
  _DAT_1830b8528 = 0x4a211a0205f22cd2;
  _DAT_1830b8680 = func_0x00018502ebb0(_DAT_1830b85c0 + 0x18d46b58340ed3daU ^ 7);
  _DAT_1830b8260 = _DAT_1830b8660 ^ _DAT_1830b8680 ^ 0xfffffffffffffffe;
  _DAT_1830b8560 = (_DAT_1830b8560 ^ _DAT_1830b8680) - 2 ^ 0xa99a7f9403c33030;
  _DAT_1830b80a0 = (_DAT_1830b80a0 * -0x74c6c27f6c0fc2a7 ^ _DAT_1830b8560) + _DAT_1830b8680;
  _DAT_1830b8120 = _DAT_1830b80a0 ^ _DAT_1830b8560;
  _DAT_1830b8470 = 0xfffffffffffffffe;
  uVar3 = (~_DAT_1830b86f8 + 0xa1dab4731dbda495) *
          ((_DAT_1830b8170 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830b8170 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830b82d8) + (uVar3 & _DAT_1830b82d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8228 = func_0x00018502ebb0((uVar3 | 0xa1dab473999f87b1) + (uVar3 & 0xa1dab473999f87b1));
  uVar3 = _DAT_1830b8228 - (_DAT_1830b8228 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1830b8228;
  _DAT_1830b84e0 = (_DAT_1830b84e0 ^ uVar3) + 0x5e254b8ce2425b6c ^ 0xea459ceb8c885c5e;
  _DAT_1830b8590 = (_DAT_1830b8590 * -0x258c66099ad5f233 ^ _DAT_1830b84e0) + uVar3;
  _DAT_1830b83b8 = _DAT_1830b8590 ^ _DAT_1830b84e0;
  _DAT_1830b8378 = 0x5e254b8ce2425b6c;
  uVar3 = (_DAT_1830b86d0 ^ _DAT_180404900) + _DAT_1830b7f68 + 0xa1dab473999f87b7;
  uVar2 = (_DAT_1830b7f68 ^ _UNK_180404908) + _DAT_1830b86d0 + 0x5e254b8ce2425b6c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b86d0 ^ _DAT_180404900;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b7f68 ^ _UNK_180404908;
  _DAT_1830b8310 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b86d0 + 0x5e254b8ce2425b6c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b7f68 + 0xa1dab473999f87b7));
  uVar3 = _DAT_1830b8310 ^ 0x5e254b8ce2425b6c;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  _DAT_1830b85a8 = _DAT_1830b8498 ^ uVar3 ^ 0xfffffffffffffffe;
  _DAT_1830b8270 = (_DAT_1830b8270 ^ uVar3) - 2 ^ 0x4359fb9dadc6569a;
  _DAT_1830b8640 = (_DAT_1830b8640 * -0x5d42f5511c531177 ^ _DAT_1830b8270) + uVar3;
  _DAT_1830b80b0 = _DAT_1830b8640 ^ _DAT_1830b8270;
  _DAT_1830b8350 = 0xfffffffffffffffe;
  _DAT_1830b8080 = func_0x00018502ebb0(_DAT_1830b85e8 ^ 0x8670a7369c732d93);
  _DAT_1830b8590 = _DAT_1830b8250 ^ _DAT_1830b8080 ^ 0x445cbc542cf539d;
  _DAT_1830b85e0 = (_DAT_1830b85e0 ^ _DAT_1830b8080) + 0x445cbc542cf539d ^ 0x6dacef596f922d4d;
  _DAT_1830b85a8 = (_DAT_1830b85a8 * -0x6124f3a50b09179 ^ _DAT_1830b85e0) + _DAT_1830b8080;
  _DAT_1830b82b0 = _DAT_1830b85a8 ^ _DAT_1830b85e0;
  _DAT_1830b8560 = 0x445cbc542cf539d;
  uVar3 = (~_DAT_1830b8138 + 0xe04e0c0dcee1d3a3) *
          ((_DAT_1830b8470 ^ 0x23f7bfb7f7cf5cde) + (_DAT_1830b8470 & 0x23f7bfb7f7cf5cde) * 2);
  uVar3 = (uVar3 | _DAT_1830b84f0) + (uVar3 & _DAT_1830b84f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b83d0 = func_0x00018502ebb0((uVar3 | 0xc3b9b3ba392e8f7c) + (uVar3 & 0xc3b9b3ba392e8f7c));
  uVar2 = _DAT_1830b83d0 * -0x450f25b0bd7401fb;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2;
  _DAT_1830b85c8 = (_DAT_1830b85c8 ^ uVar2) + 0xc3b9b3babd0cac59 ^ 0x48d2d93923c684de;
  _DAT_1830b8638 = (_DAT_1830b8638 * 0x3b7a4f38e69464d7 ^ _DAT_1830b85c8) + uVar2;
  _DAT_1830b7f48 = _DAT_1830b8638 ^ _DAT_1830b85c8;
  _DAT_1830b81f0 = 0xc3b9b3babd0cac59;
  _DAT_1830b8298 = func_0x00018502ebb0(_DAT_1830b7fb8 ^ 0x767d6729446ed6d9);
  _DAT_1830b7f20 =
       (_DAT_1830b7f20 ^ _DAT_1830b8298 & 0x3fffffffff) + 0x20460c0542e153a2 ^ 0x689c06f1c2e295a8;
  _DAT_1830b8380 =
       (_DAT_1830b8380 * 0x39a57103a46438e3 ^ _DAT_1830b7f20) + (_DAT_1830b8298 & 0x3fffffffff);
  _DAT_1830b8350 = _DAT_1830b8380 ^ _DAT_1830b7f20;
  _DAT_1830b86d0 = 0x20460c0542e153a2;
  _DAT_1830b8200 = func_0x00018502ebb0(_DAT_1830b8668 + 0x8fe8337438942480 ^ 0xf4);
  uVar3 = (_DAT_1830b8200 ^ 0xc3bdbbbabdceaf5c) & 0xfffffffffffffffc;
  _DAT_1830b8590 = _DAT_1830b8478 ^ uVar3 ^ 0x445cbc542cf539d;
  _DAT_1830b8008 = (_DAT_1830b8008 ^ uVar3) + 0x445cbc542cf539d ^ 0xaf521c4c6f9ba89b;
  _DAT_1830b8320 = (_DAT_1830b8320 * 0x22d6cd8fddf3eee1 ^ _DAT_1830b8008) + uVar3;
  _DAT_1830b7ff8 = _DAT_1830b8320 ^ _DAT_1830b8008;
  _DAT_1830b8378 = 0x445cbc542cf539d;
  _DAT_1830b82d8 = func_0x00018502ebb0(_DAT_1830b8108 ^ 0xb7a2f7f7debfd02d);
  uVar3 = (_DAT_1830b82d8 ^ 0xdc0840488c000000) & 0xfffffffffc000000;
  _DAT_1830b8330 = (_DAT_1830b8330 ^ uVar3) + 0xdc0840488c128004 ^ 0x80adb727b1c9277c;
  _DAT_1830b84a0 = (_DAT_1830b84a0 * 0x9101846770a8cb1 ^ _DAT_1830b8330) + uVar3;
  _DAT_1830b83a0 = _DAT_1830b84a0 ^ _DAT_1830b8330;
  _DAT_1830b8138 = -0x23f7bfb773ed7ffc;
  uVar3 = (~_DAT_1830b8508 + 0xdc0840488c128005) *
          ((_DAT_1830b8590 ^ 0x23f7bfb7f7cf5cde) + (_DAT_1830b8590 & 0x23f7bfb7f7cf5cde) * 2);
  uVar3 = (uVar3 | _DAT_1830b8318) + (uVar3 & _DAT_1830b8318);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8170 = func_0x00018502ebb0((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uVar3 = _DAT_1830b8170 << 0x27 | _DAT_1830b8170 >> 0x19;
  _DAT_1830b8680 = _DAT_1830b8680 ^ uVar3 ^ 0x5b788f8b45dce36e;
  _DAT_1830b8210 = (_DAT_1830b8210 * 0x1eb97e3d431a20cd ^ _DAT_1830b8680) + uVar3;
  _DAT_1830b8038 = _DAT_1830b8210 ^ _DAT_1830b8680;
  _DAT_1830b8248 = 0;
  uVar3 = ((_DAT_1830b7fd0 ^ 0xffffffff7bdddcdb) + (_DAT_1830b7fd0 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_1830b82a8;
  uVar3 = (uVar3 | _DAT_1830b8140) + (uVar3 & _DAT_1830b8140);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8330 = func_0x00018502ebb0((uVar3 | 0xffffffff7bdddcdb) + (uVar3 & 0xffffffff7bdddcdb));
  _DAT_1830b83b0 = _DAT_1830b8130 ^ _DAT_1830b8330 ^ 0xfffffffffffffffe;
  _DAT_1830b8090 = (_DAT_1830b8090 ^ _DAT_1830b8330) - 2 ^ 0xea84871f920c2d25;
  _DAT_1830b7f68 = (_DAT_1830b7f68 * 0x26d5fa9fdc4d3397 ^ _DAT_1830b8090) + _DAT_1830b8330;
  _DAT_1830b84a0 = _DAT_1830b7f68 ^ _DAT_1830b8090;
  _DAT_1830b8528 = 0xfffffffffffffffe;
  _DAT_1830b8310 = func_0x00018502ebb0(_DAT_1830b8288 ^ 0x9c2b948939ecc33a);
  uVar3 = _DAT_1830b8310 >> 1 | _DAT_1830b8310;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1830b8310;
  _DAT_1830b8590 = _DAT_1830b80d8 ^ uVar3 ^ 0xfffffffffffffffe;
  _DAT_1830b8218 = (_DAT_1830b8218 ^ uVar3) - 2 ^ 0x3639a04f4b0bc556;
  _DAT_1830b85d8 = (_DAT_1830b85d8 * -0x1a48bda90406bdcb ^ _DAT_1830b8218) + uVar3;
  _DAT_1830b8108 = _DAT_1830b85d8 ^ _DAT_1830b8218;
  _DAT_1830b83e0 = 0xfffffffffffffffe;
  *(longlong *)(unaff_RBP + 0x90) = unaff_RDI + -2;
  *(longlong *)(unaff_RBP + 0x88) = unaff_RBP + -0x52 + unaff_RDI;
  *(undefined1 *)(unaff_RBP + -0x52 + unaff_RDI) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar3 = (~_DAT_1830b81a8 + 0xc57f9a5f50cd8e79) *
          ((_DAT_1830b8628 ^ 0xb8d76a312f9fc628) + (_DAT_1830b8628 & 0x38d76a312f9fc628) * 2);
  uVar3 = (uVar3 | _DAT_1830b8350) + (uVar3 & _DAT_1830b8350);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8178 = func_0x00018502ebb0((uVar3 | 0x7da8f06e7f524850) + (uVar3 & 0x7da8f06e7f524850));
  uVar2 = _DAT_1830b8178 ^ 0x4b08050351799418;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar2;
  _DAT_1830b8270 = (_DAT_1830b8270 ^ uVar2) + 0xfdfffa7ffbfdef7d ^ 0xec971cf3ab51e2a8;
  _DAT_1830b8668 = (_DAT_1830b8668 * -0x400942954f37ce3b ^ _DAT_1830b8270) + uVar2;
  _DAT_1830b8318 = _DAT_1830b8668 ^ _DAT_1830b8270;
  _DAT_1830b8118 = _DAT_1830b8588 ^ 0xfdfffa7ffbfdef7d;
  _DAT_1830b8580 = 0xfdfffa7ffbfdef7d;
  uVar3 = (_DAT_1830b8588 ^ _DAT_180404910) + _DAT_1830b8300 + 0x19fdece7a3c04d0a;
  uVar2 = (_DAT_1830b8300 ^ _UNK_180404918) + _DAT_1830b8588 + 0x38d34ca28facb7d2;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8588 ^ _DAT_180404910;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8300 ^ _UNK_180404918;
  _DAT_1830b7f50 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8588 + 0x38d34ca28facb7d2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b8300 + 0x19fdece7a3c04d0a));
  _DAT_1830b84b8 =
       (_DAT_1830b84b8 ^ _DAT_1830b7f50 ^ 0x38d34ca28facb7d2) + 0x212ea045a84ed9fd ^
       0xd1041208d1ea055f;
  _DAT_1830b8530 =
       (_DAT_1830b8530 * -0x1e908f85b5eeb177 ^ _DAT_1830b84b8) +
       (_DAT_1830b7f50 ^ 0x38d34ca28facb7d2);
  _DAT_1830b8288 = _DAT_1830b8530 ^ _DAT_1830b84b8;
  _DAT_1830b82f0 = 0x212ea045a84ed9fd;
  uVar3 = (_DAT_1830b8298 ^ _DAT_180404920) + _DAT_1830b7f20 + 0x84222325;
  uVar2 = (_DAT_1830b7f20 ^ _UNK_180404928) + _DAT_1830b8298 + 0x98d1e734ea9af122;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8298 ^ _DAT_180404920;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b7f20 ^ _UNK_180404928;
  _DAT_1830b8218 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8298 + 0x98d1e734ea9af122) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b7f20 + 0x84222325));
  uVar3 = (_DAT_1830b8218 & 0x7fffffffffffffff) * 0x5bf94e1e0cb2755b;
  _DAT_1830b8360 = (_DAT_1830b8360 ^ uVar3) + 0x672e18cb15650ede ^ 0x2130e127a4a8620;
  _DAT_1830b7fe0 = (_DAT_1830b7fe0 * 0x31eb872ce79b9141 ^ _DAT_1830b8360) + uVar3;
  _DAT_1830b8260 = _DAT_1830b7fe0 ^ _DAT_1830b8360;
  _DAT_1830b8348 = 0x672e18cb15650ede;
  _DAT_1830b7f88 = func_0x00018502ebb0(_DAT_1830b8010 + 0x50dc7982d8b1fd05 ^ 0xe4);
  _DAT_1830b8098 = (_DAT_1830b8098 ^ _DAT_1830b7f30) + 0xf576294ef9d0f833 ^ 0x74cb29e0bc957c9a;
  _DAT_1830b8110 = (_DAT_1830b8110 * 0x1b988a2701fce8c5 ^ _DAT_1830b8098) + _DAT_1830b7f30;
  _DAT_1830b8550 = _DAT_1830b8110 ^ _DAT_1830b8098;
  _DAT_1830b8198 = 0xf576294ef9d0f833;
  uVar3 = (~_DAT_1830b84f0 + 0xf576294ef9d0f834) *
          ((_DAT_1830b85d0 ^ 0xa89d6b1820d24c7) + (_DAT_1830b85d0 & 0xa89d6b1820d24c7) * 2);
  uVar3 = (uVar3 | _DAT_1830b8328) + (uVar3 & _DAT_1830b8328);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8578 = func_0x00018502ebb0((uVar3 | 0xffffffff7bdddcf4) + (uVar3 & 0xffffffff7bdddcf4));
  uVar3 = _DAT_1830b8578 ^ 0xfffffffffffffff3;
  _DAT_1830b82c8 = _DAT_1830b8698 ^ uVar3 ^ 0x15;
  _DAT_1830b8080 = (_DAT_1830b8080 ^ uVar3) + 0x15 ^ 0xdf98781abf54c0fb;
  _DAT_1830b86f0 = (_DAT_1830b86f0 * 0x23a2dd58978a48c9 ^ _DAT_1830b8080) + uVar3;
  _DAT_1830b80a0 = _DAT_1830b86f0 ^ _DAT_1830b8080;
  _DAT_1830b84c8 = 0x15;
  uVar3 = (~_DAT_1830b8670 + 0x8ec1cd866720d7ec) *
          ((_DAT_1830b8698 ^ uVar3 ^ 0x84222330) +
          (ulonglong)((uint)_DAT_1830b82c8 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830b86b0) + (uVar3 & _DAT_1830b86b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8308 = func_0x00018502ebb0((uVar3 | 0x8ec1cd86e302f4ce) + (uVar3 & 0x8ec1cd86e302f4ce));
  _DAT_1830b7fe8 = (_DAT_1830b7fe8 ^ _DAT_1830b8308) + 0x713e327998df2815 ^ 0x3bb2dc5c7c4c8e2c;
  _DAT_1830b7f80 = (_DAT_1830b7f80 * -0x70f6ce67ed26ca9d ^ _DAT_1830b7fe8) + _DAT_1830b8308;
  _DAT_1830b8518 = _DAT_1830b7f80 ^ _DAT_1830b7fe8;
  _DAT_1830b85b0 = 0x713e327998df2815;
  uVar3 = (_DAT_1830b8018 ^ _DAT_180404930) + _DAT_1830b7f68 + 0x84222330;
  uVar2 = (_DAT_1830b7f68 ^ _UNK_180404938) + _DAT_1830b8018 + 0x8ec1cd866720d7eb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8018 ^ _DAT_180404930;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b7f68 ^ _UNK_180404938;
  _DAT_1830b8020 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8018 + 0x8ec1cd866720d7eb) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b7f68 + 0x84222330));
  uVar3 = (_DAT_1830b8020 ^ 0x8ec1cd8664000000) & 0xfffffffffc000000;
  _DAT_1830b8598 = _DAT_1830b84a8 ^ uVar3 ^ 0x8ec1cd866720d800;
  _DAT_1830b8418 = (_DAT_1830b8418 ^ uVar3) + 0x8ec1cd866720d800 ^ 0x1125428351cfe7c4;
  _DAT_1830b82f0 = (_DAT_1830b82f0 * 0xf768369fe87261f ^ _DAT_1830b8418) + uVar3;
  _DAT_1830b8690 = _DAT_1830b82f0 ^ _DAT_1830b8418;
  _DAT_1830b84d0 = 0x8ec1cd866720d800;
  _DAT_1830b8220 = func_0x00018502ebb0(_DAT_1830b8150 ^ 0xbdd394850f59ab96);
  uVar3 = _DAT_1830b8220 & 0x7fffffffffff8000 ^ 0x8ec1cd866720d800;
  _DAT_1830b8078 = _DAT_1830b8100 ^ uVar3 ^ 0x15;
  _DAT_1830b8198 = (_DAT_1830b8198 ^ uVar3) + 0x15 ^ 0x869a6e7fa80750b8;
  _DAT_1830b7f90 = (_DAT_1830b7f90 * -0x47efae8bed03231f ^ _DAT_1830b8198) + uVar3;
  _DAT_1830b8420 = _DAT_1830b7f90 ^ _DAT_1830b8198;
  _DAT_1830b8178 = 0x15;
  uVar3 = (_DAT_1830b8010 ^ _DAT_180404940) + _DAT_1830b8630 + 0xfdfffa7f7fdfcc58;
  uVar2 = (_DAT_1830b8630 ^ _UNK_180404948) + _DAT_1830b8010 + 0x212ea045a84ed9fd;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8010 ^ _DAT_180404940;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8630 ^ _UNK_180404948;
  _DAT_1830b8270 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8010 + 0x212ea045a84ed9fd) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b8630 + 0xfdfffa7f7fdfcc58));
  uVar3 = (_DAT_1830b8270 ^ 0x184426504a0ca389) << 0x14 |
          (_DAT_1830b8270 ^ 0x184426504a0ca389) >> 0x2c;
  _DAT_1830b8610 = (_DAT_1830b8610 ^ uVar3) + 0x212ea045a84cc97d ^ 0x5689d6143a36b10e;
  _DAT_1830b8070 = (_DAT_1830b8070 * 0x568b7b47742e5819 ^ _DAT_1830b8610) + uVar3;
  _DAT_1830b8470 = _DAT_1830b8070 ^ _DAT_1830b8610;
  _DAT_1830b86a8 = 0x212ea045a84cc97d;
  uVar3 = (~_DAT_1830b81d0 + 0x425d408b509992fb) *
          ((_DAT_1830b8450 ^ 0xdcd15a3ad79115a5) + (_DAT_1830b8450 & 0x5cd15a3ad79115a5) * 2);
  uVar3 = (uVar3 | _DAT_1830b8198) + (uVar3 & _DAT_1830b8198);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b86f8 = func_0x00018502ebb0((uVar3 | 0x9e8c1ab18708875f) + (uVar3 & 0x9e8c1ab18708875f));
  uVar3 = _DAT_1830b86f8 ^ 0xdcd15a3a53b33680;
  _DAT_1830b83e8 = _DAT_1830b7f80 ^ uVar3 ^ 0x1f2e9ac5a44cc97a;
  _DAT_1830b8058 = (_DAT_1830b8058 ^ uVar3) + 0x1f2e9ac5a44cc97a ^ 0xa759e9cfe6f635e1;
  _DAT_1830b8198 = (_DAT_1830b8198 * -0x475604776a2b8e59 ^ _DAT_1830b8058) + uVar3;
  _DAT_1830b8140 = _DAT_1830b8198 ^ _DAT_1830b8058;
  _DAT_1830b7f00 = 0x1f2e9ac5a44cc97a;
  uVar3 = (_DAT_1830b8230 ^ _DAT_180404950) + _DAT_1830b83d8 + 0x1f2e9ac5206eea5f;
  uVar2 = (_DAT_1830b83d8 ^ _UNK_180404958) + _DAT_1830b8230 + 0x1f2e9ac5a44cc97a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8230 ^ _DAT_180404950;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b83d8 ^ _UNK_180404958;
  _DAT_1830b7fe8 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8230 + 0x1f2e9ac5a44cc97a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b83d8 + 0x1f2e9ac5206eea5f));
  _DAT_1830b8388 = _DAT_1830b7fe8 ^ 0x9ddf56f08f00ce24;
  uVar3 = _DAT_1830b8388 - (_DAT_1830b8388 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  _DAT_1830b8388 = (uint)bVar1 + (uint)bVar1 ^ _DAT_1830b8388;
  _DAT_1830b8238 = _DAT_1830b8238 ^ _DAT_1830b8388 ^ 0x8764b6fbfd4d95cc;
  _DAT_1830b84c8 = (_DAT_1830b84c8 * 0x16eefb5a64aba1e5 ^ _DAT_1830b8238) + _DAT_1830b8388;
  _DAT_1830b82a0 = _DAT_1830b84c8 ^ _DAT_1830b8238;
  _DAT_1830b83d0 = 0;
  uVar3 = ((_DAT_1830b8198 ^ 0x84222330) + (ulonglong)((uint)_DAT_1830b8198 & 0x84222330) * 2) *
          -_DAT_1830b86d0;
  uVar3 = (uVar3 | _DAT_1830b84e0) + (uVar3 & _DAT_1830b84e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b82b0 = func_0x00018502ebb0((uVar3 | 0x84222330) + (ulonglong)((uint)uVar3 & 0x84222330))
  ;
  uVar3 = (_DAT_1830b82b0 ^ 0x14) & 0xfffffffffffffffe;
  _DAT_1830b8228 = _DAT_1830b85b0 ^ uVar3 ^ 0x15;
  _DAT_1830b7f00 = (_DAT_1830b7f00 ^ uVar3) + 0x15 ^ 0xe86507886b18d31b;
  _DAT_1830b8448 = (_DAT_1830b8448 * -0x3ddca7a1e287a493 ^ _DAT_1830b7f00) + uVar3;
  _DAT_1830b7fa8 = _DAT_1830b8448 ^ _DAT_1830b7f00;
  _DAT_1830b83b8 = 0x15;
  uVar3 = ~_DAT_1830b7f30 *
          ((_DAT_1830b8338 ^ 0xfdfffa7f7fdfcc58) + (_DAT_1830b8338 & 0x7dfffa7f7fdfcc58) * 2);
  uVar3 = (uVar3 | _DAT_1830b85f8) + (uVar3 & _DAT_1830b85f8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8480 = func_0x00018502ebb0((uVar3 | 0x2000580802033a7) + (uVar3 & 0x2000580802033a7));
  uVar3 = _DAT_1830b8480 - (_DAT_1830b8480 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1830b8480;
  _DAT_1830b8530 = (_DAT_1830b8530 ^ uVar3) + 0x200058004021082 ^ 0xd4b90bbbf7ee81b3;
  _DAT_1830b86c8 = (_DAT_1830b86c8 * 0x38e4103df31a37d5 ^ _DAT_1830b8530) + uVar3;
  _DAT_1830b7fb8 = _DAT_1830b86c8 ^ _DAT_1830b8530;
  _DAT_1830b8260 = 0x200058004021082;
  uVar3 = (_DAT_1830b8598 ^ _DAT_180404960) + _DAT_1830b8450 + 0xfdfffa7f7fdfcc58;
  uVar2 = (_DAT_1830b8450 ^ _UNK_180404968) + _DAT_1830b8598 + 0x200058004021082;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8598 ^ _DAT_180404960;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8450 ^ _UNK_180404968;
  _DAT_1830b83a8 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8598 + 0x200058004021082) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b8450 + 0xfdfffa7f7fdfcc58));
  uVar3 = (_DAT_1830b83a8 ^ 0x677ace77df8) & 0xfffffffffff;
  _DAT_1830b8410 = _DAT_1830b8410 ^ uVar3 ^ 0x42f867785e713812;
  _DAT_1830b85b8 = (_DAT_1830b85b8 * -0x33d0033f3becdc2f ^ _DAT_1830b8410) + uVar3;
  _DAT_1830b8500 = _DAT_1830b85b8 ^ _DAT_1830b8410;
  _DAT_1830b8360 = 0;
  uVar3 = ((_DAT_1830b83d0 ^ 0x84222330) + (ulonglong)((uint)_DAT_1830b83d0 & 0x84222330) * 2) *
          -_DAT_1830b8468;
  uVar3 = (uVar3 | _DAT_1830b86b8) + (uVar3 & _DAT_1830b86b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b80e8 = func_0x00018502ebb0((uVar3 | 0x84222330) + (ulonglong)((uint)uVar3 & 0x84222330))
  ;
  uVar3 = (ulonglong)((~(uint)_DAT_1830b80e8 & 0x15) << 0x12);
  _DAT_1830b85e8 = _DAT_1830b8608 ^ uVar3 ^ 0x15;
  _DAT_1830b82f8 = (_DAT_1830b82f8 ^ uVar3) + 0x15 ^ 0xe476b0fcb8c91fee;
  _DAT_1830b8450 = (_DAT_1830b8450 * -0x192f1a3a55a81fc7 ^ _DAT_1830b82f8) + uVar3;
  _DAT_1830b7f28 = _DAT_1830b8450 ^ _DAT_1830b82f8;
  _DAT_1830b80f0 = 0x15;
  uVar3 = (~_DAT_1830b8048 + 0xb8d76a31abbde50e) *
          ((_DAT_1830b81c0 ^ 0xb8d76a312f9fc628) + (_DAT_1830b81c0 & 0x38d76a312f9fc628) * 2);
  uVar3 = (uVar3 | _DAT_1830b84d8) + (uVar3 & _DAT_1830b84d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b86b8 = func_0x00018502ebb0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar3 = _DAT_1830b86b8 >> 1 | _DAT_1830b86b8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1830b86b8;
  _DAT_1830b7f00 = _DAT_1830b7f00 ^ uVar3 ^ 0x58ecccb1c900ff96;
  _DAT_1830b8138 = (_DAT_1830b8138 * 0xb82fe93ea0b269 ^ _DAT_1830b7f00) + uVar3;
  _DAT_1830b8618 = _DAT_1830b8138 ^ _DAT_1830b7f00;
  _DAT_1830b8208 = 0;
  switch(*(longlong *)(unaff_RBP + 0x90) == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5011c58 (image 185011c58) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185011c58(void)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (in_RAX ^ _DAT_180403f80) + _DAT_1830b8410 + 0x84222325;
  uVar2 = (_DAT_1830b8410 ^ _UNK_180403f88) + in_RAX + 0xe8635585;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ in_RAX ^ _DAT_180403f80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8410 ^ _UNK_180403f88;
  _DAT_1830b86f8 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (in_RAX + 0xe8635585) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1830b8410 + 0x84222325));
  _DAT_1830b7f48 =
       (_DAT_1830b7f48 ^ _DAT_1830b86f8 & 0xffffffffff000000) - 0xe8635585 ^ 0xc05f9bb161083956;
  _DAT_1830b80f8 =
       (_DAT_1830b80f8 * 0x3a9891e9f99eebd9 ^ _DAT_1830b7f48) +
       (_DAT_1830b86f8 & 0xffffffffff000000);
  _DAT_1830b8338 = _DAT_1830b80f8 ^ _DAT_1830b7f48;
  _DAT_1830b86e8 = 0x179caa7b;
  _DAT_1830b83e8 = func_0x00018502ebb0(_DAT_1830b8600 + 0x2dffd4610040ffU ^ 0x4a);
  uVar1 = (_DAT_1830b83e8 ^ 0xe8620000) & 0xfffffffffffe0000;
  _DAT_1830b8208 = _DAT_1830b8160 ^ uVar1 ^ 0xe8635664;
  _DAT_1830b84e0 = (_DAT_1830b84e0 ^ uVar1) + 0xe8635664 ^ 0x24d8f8bad7851998;
  _DAT_1830b85f8 = (_DAT_1830b85f8 * 0x51884693f29cd051 ^ _DAT_1830b84e0) + uVar1;
  _DAT_1830b83d0 = _DAT_1830b85f8 ^ _DAT_1830b84e0;
  _DAT_1830b80f0 = 0xe8635664;
  _DAT_1830b8040 = func_0x00018502ebb0(_DAT_1830b85f8 ^ 0xcd00791600c4a5);
  uVar1 = (_DAT_1830b8040 ^ 0xfffffe7f) & 0xffffffffffff;
  uVar2 = uVar1 - (((_DAT_1830b8040 ^ 0xfffffe7f) & 0xffffffffffff) >> 1 & 0x555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar1;
  _DAT_1830b8558 = _DAT_1830b8318 ^ uVar1 ^ 0x1000000df;
  _DAT_1830b80b8 = (_DAT_1830b80b8 ^ uVar1) + 0x1000000df ^ 0x6243f001c4161a51;
  _DAT_1830b8400 = (_DAT_1830b8400 * 0x134cea9a97c425bd ^ _DAT_1830b80b8) + uVar1;
  _DAT_1830b8598 = _DAT_1830b8400 ^ _DAT_1830b80b8;
  _DAT_1830b85d8 = 0xdf;
  uVar1 = (~_DAT_1830b8458 + 0x9f6bef01) *
          ((_DAT_1830b81b8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1830b81b8 & 0x842223fa) * 2);
  uVar1 = (uVar1 | _DAT_1830b86a0) + (uVar1 & _DAT_1830b86a0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830b81f0 = func_0x00018502ebb0((uVar1 | 0x1b49ccfa) + (ulonglong)((uint)uVar1 & 0x1b49ccfa))
  ;
  uVar1 = _DAT_1830b81f0 ^ 0x9f6bef00;
  _DAT_1830b8188 = _DAT_1830b82a0 ^ uVar1 ^ 0x9f6befdf;
  _DAT_1830b8280 = (_DAT_1830b8280 ^ uVar1) + 0x9f6befdf ^ 0x31e21ab514c376d4;
  _DAT_1830b8570 = (_DAT_1830b8570 * -0x620e259ff173e3c1 ^ _DAT_1830b8280) + uVar1;
  _DAT_1830b86a8 = _DAT_1830b8570 ^ _DAT_1830b8280;
  _DAT_1830b85a8 = 0x9f6befdf;
  uVar1 = (~_DAT_1830b7f00 + 0x76551851) *
          ((_DAT_1830b8138 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830b8138 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1830b8368) + (uVar1 & _DAT_1830b8368);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830b8390 = func_0x00018502ebb0((uVar1 | 0xf2773b75) + (ulonglong)((uint)uVar1 & 0xf2773b75))
  ;
  uVar1 = (_DAT_1830b8390 ^ 0x76551850) * 0x1511aa075e0ec321;
  _DAT_1830b86e8 = (_DAT_1830b86e8 ^ uVar1) - 0x76551850 ^ 0xfee614bb5623b572;
  _DAT_1830b84d8 = (_DAT_1830b84d8 * 0x302c11273796813b ^ _DAT_1830b86e8) + uVar1;
  _DAT_1830b8698 = _DAT_1830b84d8 ^ _DAT_1830b86e8;
  _DAT_1830b80f8 = 0x89aae7b0;
  uVar1 = (_DAT_1830b7ff8 ^ _DAT_180403f90) + _DAT_1830b83b8 + 0x842223fa;
  uVar2 = (_DAT_1830b83b8 ^ _UNK_180403f98) + _DAT_1830b7ff8 + 0x76551850;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1830b7ff8 ^ _DAT_180403f90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b83b8 ^ _UNK_180403f98;
  _DAT_1830b7f90 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b7ff8 + 0x76551850) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1830b83b8 + 0x842223fa));
  uVar1 = _DAT_1830b7f90 >> 1 | _DAT_1830b7f90;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = 0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1830b7f90;
  _DAT_1830b7f08 = _DAT_1830b81d8 ^ uVar1 ^ 0x7655192f;
  _DAT_1830b83a0 = (_DAT_1830b83a0 ^ uVar1) + 0x7655192f ^ 0x84b221521dcf944e;
  _DAT_1830b7f40 = (_DAT_1830b7f40 * -0x2ada43251259aa87 ^ _DAT_1830b83a0) + uVar1;
  _DAT_1830b8030 = _DAT_1830b7f40 ^ _DAT_1830b83a0;
  _DAT_1830b8390 = 0x7655192f;
  _DAT_1830b8270 = func_0x00018502ebb0(_DAT_1830b83c8 ^ 0xa4ff9aba003ad2);
  uVar1 = _DAT_1830b8270 << 7 | _DAT_1830b8270 >> 0x39;
  _DAT_1830b7f60 = _DAT_1830b7f88 ^ uVar1 ^ 0x1000000df;
  _DAT_1830b84d0 = (_DAT_1830b84d0 ^ uVar1) + 0x1000000df ^ 0x2839dd850bb14c28;
  _DAT_1830b8028 = (_DAT_1830b8028 * -0x2d65a3ffc6c58dcf ^ _DAT_1830b84d0) + uVar1;
  _DAT_1830b8648 = _DAT_1830b8028 ^ _DAT_1830b84d0;
  _DAT_1830b8030 = 0xdf;
  uVar1 = (_DAT_1830b83f0 ^ _DAT_180403fa0) + _DAT_1830b81e0 + 0x37d94cc2;
  uVar2 = (_DAT_1830b81e0 ^ _UNK_180403fa8) + _DAT_1830b83f0 + 0x5aa178b3;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1830b83f0 ^ _DAT_180403fa0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b81e0 ^ _UNK_180403fa8;
  _DAT_1830b8448 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b83f0 + 0x5aa178b3) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1830b81e0 + 0x37d94cc2));
  uVar1 = _DAT_1830b8448 - (_DAT_1830b8448 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1830b8448;
  _DAT_1830b8128 = _DAT_1830b85f8 ^ uVar1 ^ 0x10e9ce89a;
  _DAT_1830b82a8 = (_DAT_1830b82a8 ^ uVar1) + 0x10e9ce89a ^ 0x88d294f62146aa6f;
  _DAT_1830b7f50 = (_DAT_1830b7f50 * 0x26818f7fe72536c5 ^ _DAT_1830b82a8) + uVar1;
  _DAT_1830b8378 = _DAT_1830b7f50 ^ _DAT_1830b82a8;
  _DAT_1830b85f8 = 0xe9ce89a;
  uVar1 = (~_DAT_1830b8498 + 0x2542d147) *
          ((_DAT_1830b7f58 ^ 0x6d783471) + (ulonglong)((uint)_DAT_1830b7f58 & 0x6d783471) * 2);
  uVar1 = (uVar1 | _DAT_1830b80f0) + (uVar1 & _DAT_1830b80f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830b8440 = func_0x00018502ebb0((uVar1 | 0x483ae537) + (ulonglong)((uint)uVar1 & 0x483ae537))
  ;
  uVar1 = _DAT_1830b8440 ^ 0xe95a1754;
  _DAT_1830b8500 = _DAT_1830b8238 ^ uVar1 ^ 0x10e9ce89a;
  _DAT_1830b7fd0 = (_DAT_1830b7fd0 ^ uVar1) + 0x10e9ce89a ^ 0x6484d2f6564255a0;
  _DAT_1830b84b0 = (_DAT_1830b84b0 * -0x2a9dae54bee8c2b7 ^ _DAT_1830b7fd0) + uVar1 ^ _DAT_1830b7fd0;
  _DAT_1830b85b0 = 0xe9ce89a;
  uVar1 = (~_DAT_1830b8520 + 0xe9ce89b) *
          ((_DAT_1830b83e8 ^ 0x8abecbbf) + (ulonglong)((uint)_DAT_1830b83e8 & 0x8abecbbf) * 2);
  uVar1 = (uVar1 | _DAT_1830b7f08) + (uVar1 & _DAT_1830b7f08);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830b8090 = func_0x00018502ebb0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = (_DAT_1830b8090 & 0xffffffffffff8000) - (_DAT_1830b8090 >> 1 & 0x5555555555554000);
  uVar1 = (uVar1 & 0x3333333333330000) + (uVar1 >> 2 & 0x3333333333333000);
  _DAT_1830b8410 =
       (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0300) * 0x101010101010101 >> 0x38) << 6 |
       _DAT_1830b8090 & 0xffffffffffff8000;
  _DAT_1830b84f8 = _DAT_1830b84f8 ^ _DAT_1830b8410 ^ 0xf3e99ebe97d727e0;
  _DAT_1830b8028 = (_DAT_1830b8028 * -0x3fa712a7307db371 ^ _DAT_1830b84f8) + _DAT_1830b8410;
  _DAT_1830b81b8 = _DAT_1830b8028 ^ _DAT_1830b84f8;
  _DAT_1830b8660 = 0;
  _DAT_1830b82e8 = func_0x00018502ebb0(_DAT_1830b8340 ^ 0xffdd008466002189);
  _DAT_1830b8660 = _DAT_1830b7f40 ^ _DAT_1830b82e8 ^ 0xdf;
  _DAT_1830b85f8 = (_DAT_1830b85f8 ^ _DAT_1830b82e8) + 0xdf ^ 0xfea5bd388a48199c;
  _DAT_1830b82d0 = (_DAT_1830b82d0 * -0x6c66b170d3dd6b23 ^ _DAT_1830b85f8) + _DAT_1830b82e8;
  _DAT_1830b8328 = _DAT_1830b82d0 ^ _DAT_1830b85f8;
  _DAT_1830b7f68 = 0xdf;
  uVar1 = (~_DAT_1830b86d8 + 0x4c049019) *
          ((_DAT_1830b7fc0 ^ 0x37d94cc2) + (ulonglong)((uint)_DAT_1830b7fc0 & 0x37d94cc2) * 2);
  uVar1 = (uVar1 | _DAT_1830b8538) + (uVar1 & _DAT_1830b8538);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830b85f0 = func_0x00018502ebb0((uVar1 | 0x7bdddcda) + (ulonglong)((uint)uVar1 & 0x7bdddcda))
  ;
  _DAT_1830b85c0 = _DAT_1830b85c0 ^ _DAT_1830b85f0 & 0xfffffffffffffe00 ^ 0xd854f2b63d9e342a;
  _DAT_1830b8630 =
       (_DAT_1830b8630 * -0x479cc158bd327187 ^ _DAT_1830b85c0) +
       (_DAT_1830b85f0 & 0xfffffffffffffe00);
  _DAT_1830b86b0 = _DAT_1830b8630 ^ _DAT_1830b85c0;
  _DAT_1830b7f78 = 0;
  _DAT_1830b81b0 = func_0x00018502ebb0(_DAT_1830b7f90 ^ 0xffe0ff7cd5ffe1c2);
  uVar1 = _DAT_1830b81b0 ^ 0xdf;
  _DAT_1830b8668 = _DAT_1830b84a8 ^ uVar1 ^ 0xdf;
  _DAT_1830b7fe8 = (_DAT_1830b7fe8 ^ uVar1) + 0xdf ^ 0xab50a4d67ad0de5c;
  _DAT_1830b8250 = (_DAT_1830b8250 * -0x1816e8c56fbdf091 ^ _DAT_1830b7fe8) + uVar1;
  _DAT_1830b8098 = _DAT_1830b8250 ^ _DAT_1830b7fe8;
  _DAT_1830b84f8 = 0xdf;
  uVar1 = (_DAT_1830b8450 ^ _DAT_180403fb0) + _DAT_1830b8668 + 0x15db4882;
  uVar2 = (_DAT_1830b8668 ^ _UNK_180403fb8) + _DAT_1830b8450 + 0x91f96ba7;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1830b8450 ^ _DAT_180403fb0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8668 ^ _UNK_180403fb8;
  _DAT_1830b8010 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8450 + 0x91f96ba7) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1830b8668 + 0x15db4882));
  uVar1 = _DAT_1830b8010 ^ 0x533c7ef5c62306f1;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar1;
  _DAT_1830b83f0 = _DAT_1830b83f0 ^ uVar1 ^ 0xd966daed66637617;
  _DAT_1830b8350 = (_DAT_1830b8350 * -0x5d5c74083b55d243 ^ _DAT_1830b83f0) + uVar1;
  _DAT_1830b81a8 = _DAT_1830b8350 ^ _DAT_1830b83f0;
  _DAT_1830b80a8 = 0;
  uVar1 = ((_DAT_1830b85d8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1830b85d8 & 0x842223fa) * 2) *
          -_DAT_1830b8478;
  uVar1 = (uVar1 | _DAT_1830b7fe0) + (uVar1 & _DAT_1830b7fe0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830b86b8 = func_0x00018502ebb0((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  uVar1 = (ulonglong)((uint)_DAT_1830b86b8 & 0xdf) << 0x29;
  _DAT_1830b85c0 = _DAT_1830b8130 ^ uVar1 ^ 0xdf;
  _DAT_1830b8490 = (_DAT_1830b8490 ^ uVar1) + 0xdf ^ 0x18b980a7c9dd5897;
  _DAT_1830b8128 = (_DAT_1830b8128 * -0xaf136b391631fc3 ^ _DAT_1830b8490) + uVar1;
  _DAT_1830b8418 = _DAT_1830b8128 ^ _DAT_1830b8490;
  _DAT_1830b8538 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5006270 (image 185006270) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185006270(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong in_R9;
  longlong unaff_R12;
  uint unaff_R14D;
  ulonglong unaff_R15;
  uint uVar5;
  uint uVar6;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  ulonglong uVar7;
  uint unaff_XMM14_Da;
  
  *(uint *)(unaff_RBP + 0x88) = unaff_R14D;
  *(uint *)(unaff_RBP + 0x80) = unaff_R14D;
  *(char *)(unaff_RBP + 0x90) =
       (char)unaff_R14D + (char)(uint)((ulonglong)unaff_R14D * in_R9 >> 0x23) * -10;
  _DAT_1830b7f40 = func_0x00018502ebb0(_DAT_1830b8400 + 0xffe1007c49001dffU ^ 0xc);
  uVar3 = _DAT_1830b7f40 ^ 0x4d;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_RBX);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R15) * unaff_R12 >> 0x38)) * 2 ^ uVar3;
  uVar3 = uVar3 << 0x27 | uVar3 >> 0x19;
  _DAT_1830b83a8 = (_DAT_1830b83a8 ^ uVar3) + 0xef ^ 0x5ff1c3db1d9f19f6;
  _DAT_1830b84f0 = (_DAT_1830b84f0 * 0x1d0ba6efc7759169 ^ _DAT_1830b83a8) + uVar3;
  _DAT_1830b8028 = _DAT_1830b84f0 ^ _DAT_1830b83a8;
  _DAT_1830b8668 = 0xef;
  _DAT_1830b8230 = func_0x00018502ebb0(_DAT_1830b85f0 ^ 0xffe0ff83c7001d24);
  _DAT_1830b8650 =
       (_DAT_1830b8650 ^ _DAT_1830b8230 & 0x7fffffffffffffff) + 0xe2 ^ 0xad37c3cb32cb430f;
  _DAT_1830b85c0 =
       (_DAT_1830b85c0 * -0x7d9f9bf44ad26bd9 ^ _DAT_1830b8650) +
       (_DAT_1830b8230 & 0x7fffffffffffffff);
  _DAT_1830b83e8 = _DAT_1830b85c0 ^ _DAT_1830b8650;
  _DAT_1830b8118 = 0xe2;
  uVar3 = (~_DAT_1830b83b0 + 0xcb) *
          ((_DAT_1830b7fb0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830b7fb0 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830b82d8) + (uVar3 & _DAT_1830b82d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8518 = func_0x00018502ebb0((uVar3 | 0x842223ef) + (ulonglong)((uint)uVar3 & 0x842223ef))
  ;
  _DAT_1830b8678 = (_DAT_1830b8678 ^ _DAT_1830b8518 & 0x1ffffffffffff) - 0xca ^ 0xf3c913ef13c67c9e;
  _DAT_1830b81e0 =
       (_DAT_1830b81e0 * -0x1698c8509f7fa34b ^ _DAT_1830b8678) + (_DAT_1830b8518 & 0x1ffffffffffff);
  _DAT_1830b8248 = _DAT_1830b81e0 ^ _DAT_1830b8678;
  _DAT_1830b86d0 = 0x36;
  uVar3 = (_DAT_1830b8128 ^ _DAT_180404800) + _DAT_1830b82b0 + 0x84222315;
  uVar4 = (_DAT_1830b82b0 ^ _UNK_180404808) + _DAT_1830b8128 + 0xca;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8128 ^ _DAT_180404800;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830b82b0 ^ _UNK_180404808;
  _DAT_1830b85f8 =
       func_0x00018502ebb0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830b8128 + 0xca) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b82b0 + 0x84222315));
  uVar3 = ((_DAT_1830b85f8 ^ 0x25e0) << 0x1f | _DAT_1830b85f8 >> 0x21) << 0x16 |
          ((_DAT_1830b85f8 ^ 0x25e0) & 0x1ffffffff) >> 0xb;
  _DAT_1830b8640 = _DAT_1830b8080 ^ uVar3 ^ 0xfa;
  _DAT_1830b7f38 = (_DAT_1830b7f38 ^ uVar3) + 0xfa ^ 0xfe8997db9ebde34e;
  _DAT_1830b86a0 = (_DAT_1830b86a0 * 0x5aaa9dd51c7dc1cb ^ _DAT_1830b7f38) + uVar3;
  _DAT_1830b82b0 = _DAT_1830b86a0 ^ _DAT_1830b7f38;
  _DAT_1830b8170 = 0xfa;
  uVar3 = (~_DAT_1830b8448 + 0xe9) *
          ((_DAT_1830b8508 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830b8508 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830b8570) + (uVar3 & _DAT_1830b8570);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b80b8 = func_0x00018502ebb0((uVar3 | 0x842223cd) + (ulonglong)((uint)uVar3 & 0x842223cd))
  ;
  uVar3 = (_DAT_1830b80b8 ^ 0xe8) & 0x7fffffffffffffff;
  _DAT_1830b80a0 = (_DAT_1830b80a0 ^ uVar3) - 0xe8 ^ 0xf5cb48f575305407;
  _DAT_1830b8228 = (_DAT_1830b8228 * 0x4086ff8447b84ec9 ^ _DAT_1830b80a0) + uVar3;
  _DAT_1830b8438 = _DAT_1830b8228 ^ _DAT_1830b80a0;
  _DAT_1830b8660 = 0x18;
  _DAT_1830b8488 = func_0x00018502ebb0(_DAT_1830b83a8 + 0xffdd0084acffe1ff ^ 0xf3);
  uVar3 = (_DAT_1830b8488 ^ 0xf8) * -0x62ef51b60355a30f & 0xfffffffffc000000;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_RBX);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R15) * unaff_R12 >> 0x38)) * 8 ^ uVar3;
  _DAT_1830b8228 = _DAT_1830b8588 ^ uVar3 ^ 0x118;
  _DAT_1830b8590 = (_DAT_1830b8590 ^ uVar3) + 0x118 ^ 0x74d6369965f0b2fa;
  _DAT_1830b7f80 = (_DAT_1830b7f80 * 0x593b01fa6ab21e71 ^ _DAT_1830b8590) + uVar3;
  _DAT_1830b8450 = _DAT_1830b7f80 ^ _DAT_1830b8590;
  _DAT_1830b8018 = 0x18;
  _DAT_1830b8558 = func_0x00018502ebb0(_DAT_1830b7f20 + 0x1cff8480ffe1ffU ^ 0x83);
  uVar3 = _DAT_1830b8558 << 0x1e | (_DAT_1830b8558 & 0x7fffffffffffffff) >> 0x22;
  _DAT_1830b8418 = (_DAT_1830b8418 ^ uVar3) - 0x9a ^ 0xf7e27c315536df6e;
  _DAT_1830b8088 = (_DAT_1830b8088 * 0x27d2bba013f620ab ^ _DAT_1830b8418) + uVar3;
  _DAT_1830b8210 = _DAT_1830b8088 ^ _DAT_1830b8418;
  _DAT_1830b8490 = 0x66;
  uVar3 = (~_DAT_1830b81f8 + 0xe3) *
          ((_DAT_1830b8120 ^ 0x842223ca) + (ulonglong)((uint)_DAT_1830b8120 & 0x842223ca) * 2);
  uVar3 = (uVar3 | _DAT_1830b8268) + (uVar3 & _DAT_1830b8268);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8658 = func_0x00018502ebb0((uVar3 | 0x84222328) + (ulonglong)((uint)uVar3 & 0x84222328))
  ;
  uVar3 = ((_DAT_1830b8658 ^ 0xef) << 0x1d | _DAT_1830b8658 >> 0x23) * -0x167e42bbc35528d9;
  _DAT_1830b8440 = _DAT_1830b8598 ^ uVar3 ^ 0x1d1;
  _DAT_1830b8258 = (_DAT_1830b8258 ^ uVar3) + 0x1d1 ^ 0xda28b9952465d196;
  _DAT_1830b82a0 = (_DAT_1830b83c0 * 0x45226a710b6a7e0b ^ _DAT_1830b8258) + uVar3 ^ _DAT_1830b8258;
  _DAT_1830b83c0 = 0xd1;
  uVar3 = (_DAT_1830b8120 ^ _DAT_180404810) + _DAT_1830b83b0 + 0x842223ca;
  uVar4 = (_DAT_1830b83b0 ^ _UNK_180404818) + _DAT_1830b8120 + 0xe2;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8120 ^ _DAT_180404810;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830b83b0 ^ _UNK_180404818;
  _DAT_1830b8418 =
       func_0x00018502ebb0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830b8120 + 0xe2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b83b0 + 0x842223ca));
  uVar3 = (_DAT_1830b8418 ^ 0xd2fe) * -0x62b8055b758f4207;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_RBX);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R15) * unaff_R12 >> 0x38)) * 0x80 ^ uVar3;
  _DAT_1830b86e8 = (_DAT_1830b86e8 ^ uVar3) + 0xd ^ 0x732b43887f6b047f;
  _DAT_1830b80d0 = (_DAT_1830b80d0 * 0x4ffe21972ed14539 ^ _DAT_1830b86e8) + uVar3;
  _DAT_1830b84e8 = _DAT_1830b80d0 ^ _DAT_1830b86e8;
  _DAT_1830b8048 = _DAT_1830b83a0 ^ 0xd;
  _DAT_1830b8330 = 0xd;
  uVar3 = (~_DAT_1830b81b8 + 0xe3) *
          ((_DAT_1830b8500 ^ 0x842223ca) + (ulonglong)((uint)_DAT_1830b8500 & 0x842223ca) * 2);
  uVar3 = (uVar3 | _DAT_1830b8550) + (uVar3 & _DAT_1830b8550);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b84f8 = func_0x00018502ebb0((uVar3 | 0x84222328) + (ulonglong)((uint)uVar3 & 0x84222328))
  ;
  uVar3 = _DAT_1830b84f8 << 0x21 | (_DAT_1830b84f8 & 0x7fffffffffffffff) >> 0x1f;
  _DAT_1830b84c0 = (_DAT_1830b84c0 ^ uVar3) + 0xe2 ^ 0x105f05b873a851dc;
  _DAT_1830b81d0 = (_DAT_1830b81d0 * 0x4d9b5625c472ebcf ^ _DAT_1830b84c0) + uVar3;
  _DAT_1830b82e8 = _DAT_1830b81d0 ^ _DAT_1830b84c0;
  _DAT_1830b85d0 = 0xe2;
  _DAT_1830b7fc8 = func_0x00018502ebb0(_DAT_1830b8220 ^ 0x1cff7c2bffe162);
  uVar3 = (_DAT_1830b7fc8 ^ 0xc4) << 0x2b | _DAT_1830b7fc8 >> 0x15;
  _DAT_1830b8460 = _DAT_1830b8460 ^ uVar3 ^ 0xd1;
  _DAT_1830b84f8 = (_DAT_1830b84f8 ^ uVar3) + 0xd1 ^ 0xd9033f8cf5436e22;
  _DAT_1830b84b0 = (_DAT_1830b84b0 * -0x5094c94055bf0795 ^ _DAT_1830b84f8) + uVar3;
  _DAT_1830b86b8 = _DAT_1830b84b0 ^ _DAT_1830b84f8;
  _DAT_1830b8658 = 0xd1;
  _DAT_1830b7f90 = func_0x00018502ebb0(_DAT_1830b8450 + 0xffe0ff7bdb0021ff ^ 0x5b);
  _DAT_1830b8598 = (_DAT_1830b7f90 ^ 0xaaa1) & 0x7fffffffffffffff;
  _DAT_1830b7f58 = _DAT_1830b7f58 ^ _DAT_1830b8598 ^ 0xa0af2a0c14f6ef74;
  _DAT_1830b8548 = (_DAT_1830b8548 * -0x830678b9df5344d ^ _DAT_1830b7f58) + _DAT_1830b8598;
  _DAT_1830b8200 = _DAT_1830b8548 ^ _DAT_1830b7f58;
  _DAT_1830b82c0 = 0;
  _DAT_1830b8248 = func_0x00018502ebb0(_DAT_1830b84f0 + 0x20ff7c0d001dff ^ 0x89);
  uVar3 = _DAT_1830b8248 << 0x17 | _DAT_1830b8248 >> 0x29;
  _DAT_1830b84c0 = _DAT_1830b86f0 ^ uVar3 ^ 0x30;
  _DAT_1830b8418 = (_DAT_1830b8418 ^ uVar3) + 0x30 ^ 0x5018bd5035e3a7e0;
  _DAT_1830b8408 = (_DAT_1830b8408 * 0xec6f2f783fe1231 ^ _DAT_1830b8418) + uVar3;
  _DAT_1830b84a0 = _DAT_1830b8408 ^ _DAT_1830b8418;
  _DAT_1830b8120 = 0x30;
  uVar3 = (_DAT_1830b8348 ^ _DAT_180404820) + _DAT_1830b7fe8 + 0x842223ca;
  uVar4 = (_DAT_1830b7fe8 ^ _UNK_180404828) + _DAT_1830b8348 + 0x10;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8348 ^ _DAT_180404820;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830b7fe8 ^ _UNK_180404828;
  _DAT_1830b81b0 =
       func_0x00018502ebb0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830b8348 + 0x10) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b7fe8 + 0x842223ca));
  uVar3 = _DAT_1830b81b0 >> 3 & 0x1fffffffffff;
  _DAT_1830b86a8 = _DAT_1830b86a8 ^ uVar3 ^ 0x1da56c0948c745e;
  _DAT_1830b7f00 = (_DAT_1830b7f00 * -0x6ee0ab8f1dd9dd1b ^ _DAT_1830b86a8) + uVar3;
  _DAT_1830b8068 = _DAT_1830b7f00 ^ _DAT_1830b86a8;
  _DAT_1830b8028 = 0;
  uVar3 = ((_DAT_1830b8488 ^ 0x84222315) + (ulonglong)((uint)_DAT_1830b8488 & 0x84222315) * 2) *
          -_DAT_1830b8290;
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8670 = func_0x00018502ebb0((uVar3 | 0x84222315) + (ulonglong)((uint)uVar3 & 0x84222315))
  ;
  uVar3 = (_DAT_1830b8670 ^ 0x30) << 0x14 | _DAT_1830b8670 >> 0x2c;
  _DAT_1830b8410 = _DAT_1830b8270 ^ uVar3 ^ 0x30;
  _DAT_1830b8250 = (_DAT_1830b8250 ^ uVar3) + 0x30 ^ 0x842681138e9a2d46;
  _DAT_1830b8388 = (_DAT_1830b8388 * 0x48759424bfc7cf17 ^ _DAT_1830b8250) + uVar3;
  _DAT_1830b85d8 = _DAT_1830b8388 ^ _DAT_1830b8250;
  _DAT_1830b81b0 = 0x30;
  uVar3 = (_DAT_1830b80d8 ^ _DAT_180404830) + _DAT_1830b7f50 + 0x84222368;
  uVar4 = (_DAT_1830b7f50 ^ _UNK_180404838) + _DAT_1830b80d8 + 0x4d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b80d8 ^ _DAT_180404830;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830b7f50 ^ _UNK_180404838;
  _DAT_1830b86a0 =
       func_0x00018502ebb0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830b80d8 + 0x4d) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b7f50 + 0x84222368));
  uVar3 = _DAT_1830b86a0 << 0x2f | (_DAT_1830b86a0 & 0x7fffffffffffffff) >> 0x11;
  _DAT_1830b8440 = _DAT_1830b8440 ^ uVar3 ^ 0xec1e62fc926312d3;
  _DAT_1830b8060 = (_DAT_1830b8060 * 0x2b99f682e799755b ^ _DAT_1830b8440) + uVar3;
  _DAT_1830b84a0 = _DAT_1830b8060 ^ _DAT_1830b8440;
  _DAT_1830b8190 = 0;
  uVar3 = ((_DAT_1830b84a0 ^ 0x84222315) + (ulonglong)((uint)_DAT_1830b84a0 & 0x84222315) * 2) *
          -_DAT_1830b8170;
  uVar3 = (uVar3 | _DAT_1830b8408) + (uVar3 & _DAT_1830b8408);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b83a0 = func_0x00018502ebb0((uVar3 | 0x84222315) + (ulonglong)((uint)uVar3 & 0x84222315))
  ;
  uVar3 = _DAT_1830b83a0 >> 1 | _DAT_1830b83a0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_R15) * unaff_R12 >> 0x38)) * 0x40 ^ _DAT_1830b83a0
          ^ 0x30;
  _DAT_1830b84e8 = _DAT_1830b8530 ^ uVar3 ^ 0x30;
  _DAT_1830b82a8 = (_DAT_1830b82a8 ^ uVar3) + 0x30 ^ 0xd8d19c611e43b930;
  _DAT_1830b82a0 = (_DAT_1830b82a0 * -0x519dc2357d25a431 ^ _DAT_1830b82a8) + uVar3;
  _DAT_1830b81f8 = _DAT_1830b82a0 ^ _DAT_1830b82a8;
  _DAT_1830b8080 = 0x30;
  uVar3 = ~_DAT_1830b7f90 *
          ((in_RAX ^ 0x84222325 ^ _DAT_1830b8130) + ((in_RAX ^ 0x84222325) & _DAT_1830b8130) * 2);
  uVar3 = (uVar3 | _DAT_1830b8580) + (uVar3 & _DAT_1830b8580);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  bVar1 = *(byte *)(unaff_RBP + 0x90);
  _DAT_1830b8140 =
       func_0x00018502ebb0((in_RAX ^ 0xffffffff7bdddcda | uVar3) +
                           (uVar3 & (in_RAX ^ 0xffffffff7bdddcda)));
  uVar5 = (uint)(in_RAX >> 0x20);
  uVar7 = (ulonglong)uVar5;
  auVar2._8_4_ = (int)in_RAX;
  auVar2._0_8_ = in_RAX;
  auVar2._12_4_ = uVar5;
  uVar6 = SUB164(auVar2 ^ _DAT_18001a710,0);
  uVar4 = SUB168(auVar2 ^ _DAT_18001a710,0);
  uVar3 = _DAT_1830b8140 * 0x1a66600b0534ed95 << 0x26 |
          (ulonglong)(_DAT_1830b8140 * 0x1a66600b0534ed95) >> 0x1a;
  _DAT_1830b8560 =
       (((ulonglong)uVar6 * (ulonglong)_DAT_180404880 +
         ((uVar4 >> 0x20) * (ulonglong)_DAT_180404880 + (ulonglong)uVar6 * (ulonglong)_DAT_180404840
         << 0x20) +
         (ulonglong)uVar6 * (ulonglong)unaff_XMM14_Da +
         ((uVar4 >> 0x20) * (ulonglong)unaff_XMM14_Da + (ulonglong)uVar6 * (ulonglong)_DAT_180404860
         << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM14_Da +
        (uVar7 * unaff_XMM14_Da + (in_RAX & 0xffffffff) * (ulonglong)_DAT_180404860 << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)_DAT_180404850 +
        ((ulonglong)uVar5 * (ulonglong)_DAT_180404850 +
         (in_RAX & 0xffffffff) * (ulonglong)_DAT_180404840 << 0x20)) -
       ((ulonglong)uVar6 * (ulonglong)unaff_XMM9_Da +
        ((uVar4 >> 0x20) * (ulonglong)unaff_XMM9_Da + (ulonglong)uVar6 * (ulonglong)unaff_XMM8_Da <<
        0x20) + (ulonglong)uVar6 * (ulonglong)unaff_XMM7_Da +
                ((uVar4 >> 0x20) * (ulonglong)unaff_XMM7_Da +
                 (ulonglong)uVar6 * (ulonglong)unaff_XMM10_Da << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM7_Da +
       (uVar7 * unaff_XMM7_Da + (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM10_Da << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM9_Da +
       (uVar7 * unaff_XMM9_Da + (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM8_Da << 0x20))) +
       0x1df908b815d20fbe;
  _DAT_1830b7f00 = _DAT_1830b7fa0 ^ uVar3 ^ _DAT_1830b8560;
  _DAT_1830b8590 = (_DAT_1830b8590 ^ uVar3) + _DAT_1830b8560 ^ 0xdc28efee6536ce1;
  _DAT_1830b8400 = (_DAT_1830b8400 * 0x16d31aa269466151 ^ _DAT_1830b8590) + uVar3;
  *(byte *)(unaff_RBP + -0x50 + _DAT_1830b8560) = bVar1 | 0x30;
  switch(*(uint *)(unaff_RBP + 0x80) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 500778a (image 18500778a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18500778a(void)

{
  byte bVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = (~_DAT_1830b8680 + 0x22f3bab273653ff3) *
          ((_DAT_1830b8298 ^ 0x2356370786ea5a1e) + (_DAT_1830b8298 & 0x2356370786ea5a1e) * 2);
  uVar3 = (uVar3 | _DAT_1830b81a0) + (uVar3 & _DAT_1830b81a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8318 = func_0x00018502ebb0((uVar3 | 0x1a58db5f58f65ec) + (uVar3 & 0x1a58db5f58f65ec));
  uVar2 = _DAT_1830b8318 ^ 0xd97ab4513ffa2134;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar2 = (uint)bVar1 + (uint)bVar1 ^ uVar2;
  _DAT_1830b81c0 = (_DAT_1830b81c0 ^ uVar2) + 0x23f7bfb773ed7ffb ^ 0x4377f6a9702dda98;
  _DAT_1830b8288 = (_DAT_1830b8288 * -0x6ec1882aabe65e1b ^ _DAT_1830b81c0) + uVar2;
  _DAT_1830b83c0 = _DAT_1830b8288 ^ _DAT_1830b81c0;
  _DAT_1830b8148 = 0x23f7bfb773ed7ffb;
  uVar3 = (_DAT_1830b8038 ^ _DAT_1804048f0) + _DAT_1830b8538 + 0x4f119c545ba5528b;
  uVar2 = (_DAT_1830b8538 ^ _UNK_1804048f8) + _DAT_1830b8038 + 0xaf5f90591166a20c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8038 ^ _DAT_1804048f0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8538 ^ _UNK_1804048f8;
  _DAT_1830b8088 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8038 + 0xaf5f90591166a20c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b8538 + 0x4f119c545ba5528b));
  uVar3 = (_DAT_1830b8088 ^ 0xce047d70099d7028) & 0x7fffffffffffffff;
  _DAT_1830b7fc0 = (_DAT_1830b7fc0 ^ uVar3) + 0xe04e0c0dcee1d3a2 ^ 0x13c17e9a533d903a;
  _DAT_1830b81d8 = (_DAT_1830b81d8 * -0x324afb3588004faf ^ _DAT_1830b7fc0) + uVar3;
  _DAT_1830b8638 = _DAT_1830b81d8 ^ _DAT_1830b7fc0;
  _DAT_1830b8340 = 0xe04e0c0dcee1d3a2;
  uVar3 = (~_DAT_1830b8610 + 0x800c221ade7ffc17) *
          ((_DAT_1830b8330 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830b8330 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830b8120) + (uVar3 & _DAT_1830b8120);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8340 = func_0x00018502ebb0((uVar3 | 0x800c221a5a5ddf33) + (uVar3 & 0x800c221a5a5ddf33));
  uVar3 = (_DAT_1830b8340 ^ 0x800c221ade7ffc16) << 0x1d |
          (_DAT_1830b8340 ^ 0x800c221ade7ffc16) >> 0x23;
  _DAT_1830b8148 = (_DAT_1830b8148 ^ uVar3) + 0x7ff3dde5218003ea ^ 0xdb9358df206b630e;
  _DAT_1830b8410 = (_DAT_1830b8410 * 0x54ef7486b5590a65 ^ _DAT_1830b8148) + uVar3;
  _DAT_1830b8210 = _DAT_1830b8410 ^ _DAT_1830b8148;
  _DAT_1830b7f98 = 0x7ff3dde5218003ea;
  _DAT_1830b7f48 = func_0x00018502ebb0(_DAT_1830b82f0 + 0xa4e072a532525e3c ^ 0x3a);
  uVar3 = _DAT_1830b7f48 & 0xfffffffffffffff;
  _DAT_1830b8648 = _DAT_1830b82a0 ^ uVar3 ^ 0x800c221ade7ffc14;
  _DAT_1830b8590 = (_DAT_1830b8590 ^ uVar3) + 0x800c221ade7ffc14 ^ 0xd900b3428fdea37b;
  _DAT_1830b84a8 = (_DAT_1830b84a8 * 0x65516f8be9c5f9e9 ^ _DAT_1830b8590) + uVar3;
  _DAT_1830b8410 = _DAT_1830b84a8 ^ _DAT_1830b8590;
  _DAT_1830b81a0 = 0x800c221ade7ffc14;
  _DAT_1830b8480 = func_0x00018502ebb0(_DAT_1830b8360 + 0x4baf3a0e0922d3b4 ^ 0x8c);
  uVar3 = _DAT_1830b8480 << 0x28 | _DAT_1830b8480 >> 0x18;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar3;
  _DAT_1830b8500 = _DAT_1830b7fd0 ^ uVar3 ^ 0x4a211a0205f22cd2;
  _DAT_1830b7fc8 = (_DAT_1830b7fc8 ^ uVar3) + 0x4a211a0205f22cd2 ^ 0xe145bf61ff6a8c8;
  _DAT_1830b86a0 = (_DAT_1830b86a0 * 0x2c20b1f644594659 ^ _DAT_1830b7fc8) + uVar3;
  _DAT_1830b8380 = _DAT_1830b86a0 ^ _DAT_1830b7fc8;
  _DAT_1830b8528 = 0x4a211a0205f22cd2;
  _DAT_1830b8680 = func_0x00018502ebb0(_DAT_1830b85c0 + 0x18d46b58340ed3daU ^ 7);
  _DAT_1830b8260 = _DAT_1830b8660 ^ _DAT_1830b8680 ^ 0xfffffffffffffffe;
  _DAT_1830b8560 = (_DAT_1830b8560 ^ _DAT_1830b8680) - 2 ^ 0xa99a7f9403c33030;
  _DAT_1830b80a0 = (_DAT_1830b80a0 * -0x74c6c27f6c0fc2a7 ^ _DAT_1830b8560) + _DAT_1830b8680;
  _DAT_1830b8120 = _DAT_1830b80a0 ^ _DAT_1830b8560;
  _DAT_1830b8470 = 0xfffffffffffffffe;
  uVar3 = (~_DAT_1830b86f8 + 0xa1dab4731dbda495) *
          ((_DAT_1830b8170 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830b8170 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830b82d8) + (uVar3 & _DAT_1830b82d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8228 = func_0x00018502ebb0((uVar3 | 0xa1dab473999f87b1) + (uVar3 & 0xa1dab473999f87b1));
  uVar3 = _DAT_1830b8228 - (_DAT_1830b8228 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1830b8228;
  _DAT_1830b84e0 = (_DAT_1830b84e0 ^ uVar3) + 0x5e254b8ce2425b6c ^ 0xea459ceb8c885c5e;
  _DAT_1830b8590 = (_DAT_1830b8590 * -0x258c66099ad5f233 ^ _DAT_1830b84e0) + uVar3;
  _DAT_1830b83b8 = _DAT_1830b8590 ^ _DAT_1830b84e0;
  _DAT_1830b8378 = 0x5e254b8ce2425b6c;
  uVar3 = (_DAT_1830b86d0 ^ _DAT_180404900) + _DAT_1830b7f68 + 0xa1dab473999f87b7;
  uVar2 = (_DAT_1830b7f68 ^ _UNK_180404908) + _DAT_1830b86d0 + 0x5e254b8ce2425b6c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b86d0 ^ _DAT_180404900;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b7f68 ^ _UNK_180404908;
  _DAT_1830b8310 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b86d0 + 0x5e254b8ce2425b6c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b7f68 + 0xa1dab473999f87b7));
  uVar3 = _DAT_1830b8310 ^ 0x5e254b8ce2425b6c;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  _DAT_1830b85a8 = _DAT_1830b8498 ^ uVar3 ^ 0xfffffffffffffffe;
  _DAT_1830b8270 = (_DAT_1830b8270 ^ uVar3) - 2 ^ 0x4359fb9dadc6569a;
  _DAT_1830b8640 = (_DAT_1830b8640 * -0x5d42f5511c531177 ^ _DAT_1830b8270) + uVar3;
  _DAT_1830b80b0 = _DAT_1830b8640 ^ _DAT_1830b8270;
  _DAT_1830b8350 = 0xfffffffffffffffe;
  _DAT_1830b8080 = func_0x00018502ebb0(_DAT_1830b85e8 ^ 0x8670a7369c732d93);
  _DAT_1830b8590 = _DAT_1830b8250 ^ _DAT_1830b8080 ^ 0x445cbc542cf539d;
  _DAT_1830b85e0 = (_DAT_1830b85e0 ^ _DAT_1830b8080) + 0x445cbc542cf539d ^ 0x6dacef596f922d4d;
  _DAT_1830b85a8 = (_DAT_1830b85a8 * -0x6124f3a50b09179 ^ _DAT_1830b85e0) + _DAT_1830b8080;
  _DAT_1830b82b0 = _DAT_1830b85a8 ^ _DAT_1830b85e0;
  _DAT_1830b8560 = 0x445cbc542cf539d;
  uVar3 = (~_DAT_1830b8138 + 0xe04e0c0dcee1d3a3) *
          ((_DAT_1830b8470 ^ 0x23f7bfb7f7cf5cde) + (_DAT_1830b8470 & 0x23f7bfb7f7cf5cde) * 2);
  uVar3 = (uVar3 | _DAT_1830b84f0) + (uVar3 & _DAT_1830b84f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b83d0 = func_0x00018502ebb0((uVar3 | 0xc3b9b3ba392e8f7c) + (uVar3 & 0xc3b9b3ba392e8f7c));
  uVar2 = _DAT_1830b83d0 * -0x450f25b0bd7401fb;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2;
  _DAT_1830b85c8 = (_DAT_1830b85c8 ^ uVar2) + 0xc3b9b3babd0cac59 ^ 0x48d2d93923c684de;
  _DAT_1830b8638 = (_DAT_1830b8638 * 0x3b7a4f38e69464d7 ^ _DAT_1830b85c8) + uVar2;
  _DAT_1830b7f48 = _DAT_1830b8638 ^ _DAT_1830b85c8;
  _DAT_1830b81f0 = 0xc3b9b3babd0cac59;
  _DAT_1830b8298 = func_0x00018502ebb0(_DAT_1830b7fb8 ^ 0x767d6729446ed6d9);
  _DAT_1830b7f20 =
       (_DAT_1830b7f20 ^ _DAT_1830b8298 & 0x3fffffffff) + 0x20460c0542e153a2 ^ 0x689c06f1c2e295a8;
  _DAT_1830b8380 =
       (_DAT_1830b8380 * 0x39a57103a46438e3 ^ _DAT_1830b7f20) + (_DAT_1830b8298 & 0x3fffffffff);
  _DAT_1830b8350 = _DAT_1830b8380 ^ _DAT_1830b7f20;
  _DAT_1830b86d0 = 0x20460c0542e153a2;
  _DAT_1830b8200 = func_0x00018502ebb0(_DAT_1830b8668 + 0x8fe8337438942480 ^ 0xf4);
  uVar3 = (_DAT_1830b8200 ^ 0xc3bdbbbabdceaf5c) & 0xfffffffffffffffc;
  _DAT_1830b8590 = _DAT_1830b8478 ^ uVar3 ^ 0x445cbc542cf539d;
  _DAT_1830b8008 = (_DAT_1830b8008 ^ uVar3) + 0x445cbc542cf539d ^ 0xaf521c4c6f9ba89b;
  _DAT_1830b8320 = (_DAT_1830b8320 * 0x22d6cd8fddf3eee1 ^ _DAT_1830b8008) + uVar3;
  _DAT_1830b7ff8 = _DAT_1830b8320 ^ _DAT_1830b8008;
  _DAT_1830b8378 = 0x445cbc542cf539d;
  _DAT_1830b82d8 = func_0x00018502ebb0(_DAT_1830b8108 ^ 0xb7a2f7f7debfd02d);
  uVar3 = (_DAT_1830b82d8 ^ 0xdc0840488c000000) & 0xfffffffffc000000;
  _DAT_1830b8330 = (_DAT_1830b8330 ^ uVar3) + 0xdc0840488c128004 ^ 0x80adb727b1c9277c;
  _DAT_1830b84a0 = (_DAT_1830b84a0 * 0x9101846770a8cb1 ^ _DAT_1830b8330) + uVar3;
  _DAT_1830b83a0 = _DAT_1830b84a0 ^ _DAT_1830b8330;
  _DAT_1830b8138 = -0x23f7bfb773ed7ffc;
  uVar3 = (~_DAT_1830b8508 + 0xdc0840488c128005) *
          ((_DAT_1830b8590 ^ 0x23f7bfb7f7cf5cde) + (_DAT_1830b8590 & 0x23f7bfb7f7cf5cde) * 2);
  uVar3 = (uVar3 | _DAT_1830b8318) + (uVar3 & _DAT_1830b8318);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8170 = func_0x00018502ebb0((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uVar3 = _DAT_1830b8170 << 0x27 | _DAT_1830b8170 >> 0x19;
  _DAT_1830b8680 = _DAT_1830b8680 ^ uVar3 ^ 0x5b788f8b45dce36e;
  _DAT_1830b8210 = (_DAT_1830b8210 * 0x1eb97e3d431a20cd ^ _DAT_1830b8680) + uVar3;
  _DAT_1830b8038 = _DAT_1830b8210 ^ _DAT_1830b8680;
  _DAT_1830b8248 = 0;
  uVar3 = ((_DAT_1830b7fd0 ^ 0xffffffff7bdddcdb) + (_DAT_1830b7fd0 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_1830b82a8;
  uVar3 = (uVar3 | _DAT_1830b8140) + (uVar3 & _DAT_1830b8140);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8330 = func_0x00018502ebb0((uVar3 | 0xffffffff7bdddcdb) + (uVar3 & 0xffffffff7bdddcdb));
  _DAT_1830b83b0 = _DAT_1830b8130 ^ _DAT_1830b8330 ^ 0xfffffffffffffffe;
  _DAT_1830b8090 = (_DAT_1830b8090 ^ _DAT_1830b8330) - 2 ^ 0xea84871f920c2d25;
  _DAT_1830b7f68 = (_DAT_1830b7f68 * 0x26d5fa9fdc4d3397 ^ _DAT_1830b8090) + _DAT_1830b8330;
  _DAT_1830b84a0 = _DAT_1830b7f68 ^ _DAT_1830b8090;
  _DAT_1830b8528 = 0xfffffffffffffffe;
  _DAT_1830b8310 = func_0x00018502ebb0(_DAT_1830b8288 ^ 0x9c2b948939ecc33a);
  uVar3 = _DAT_1830b8310 >> 1 | _DAT_1830b8310;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1830b8310;
  _DAT_1830b8590 = _DAT_1830b80d8 ^ uVar3 ^ 0xfffffffffffffffe;
  _DAT_1830b8218 = (_DAT_1830b8218 ^ uVar3) - 2 ^ 0x3639a04f4b0bc556;
  _DAT_1830b85d8 = (_DAT_1830b85d8 * -0x1a48bda90406bdcb ^ _DAT_1830b8218) + uVar3;
  _DAT_1830b8108 = _DAT_1830b85d8 ^ _DAT_1830b8218;
  _DAT_1830b83e0 = 0xfffffffffffffffe;
  *(longlong *)(unaff_RBP + 0x90) = unaff_RSI + -2;
  *(longlong *)(unaff_RBP + 0x88) = unaff_RBP + -0x52 + unaff_RSI;
  *(undefined1 *)(unaff_RBP + -0x52 + unaff_RSI) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar3 = (~_DAT_1830b81a8 + 0xc57f9a5f50cd8e79) *
          ((_DAT_1830b8628 ^ 0xb8d76a312f9fc628) + (_DAT_1830b8628 & 0x38d76a312f9fc628) * 2);
  uVar3 = (uVar3 | _DAT_1830b8350) + (uVar3 & _DAT_1830b8350);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8178 = func_0x00018502ebb0((uVar3 | 0x7da8f06e7f524850) + (uVar3 & 0x7da8f06e7f524850));
  uVar2 = _DAT_1830b8178 ^ 0x4b08050351799418;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar2;
  _DAT_1830b8270 = (_DAT_1830b8270 ^ uVar2) + 0xfdfffa7ffbfdef7d ^ 0xec971cf3ab51e2a8;
  _DAT_1830b8668 = (_DAT_1830b8668 * -0x400942954f37ce3b ^ _DAT_1830b8270) + uVar2;
  _DAT_1830b8318 = _DAT_1830b8668 ^ _DAT_1830b8270;
  _DAT_1830b8118 = _DAT_1830b8588 ^ 0xfdfffa7ffbfdef7d;
  _DAT_1830b8580 = 0xfdfffa7ffbfdef7d;
  uVar3 = (_DAT_1830b8588 ^ _DAT_180404910) + _DAT_1830b8300 + 0x19fdece7a3c04d0a;
  uVar2 = (_DAT_1830b8300 ^ _UNK_180404918) + _DAT_1830b8588 + 0x38d34ca28facb7d2;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8588 ^ _DAT_180404910;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8300 ^ _UNK_180404918;
  _DAT_1830b7f50 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8588 + 0x38d34ca28facb7d2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b8300 + 0x19fdece7a3c04d0a));
  _DAT_1830b84b8 =
       (_DAT_1830b84b8 ^ _DAT_1830b7f50 ^ 0x38d34ca28facb7d2) + 0x212ea045a84ed9fd ^
       0xd1041208d1ea055f;
  _DAT_1830b8530 =
       (_DAT_1830b8530 * -0x1e908f85b5eeb177 ^ _DAT_1830b84b8) +
       (_DAT_1830b7f50 ^ 0x38d34ca28facb7d2);
  _DAT_1830b8288 = _DAT_1830b8530 ^ _DAT_1830b84b8;
  _DAT_1830b82f0 = 0x212ea045a84ed9fd;
  uVar3 = (_DAT_1830b8298 ^ _DAT_180404920) + _DAT_1830b7f20 + 0x84222325;
  uVar2 = (_DAT_1830b7f20 ^ _UNK_180404928) + _DAT_1830b8298 + 0x98d1e734ea9af122;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8298 ^ _DAT_180404920;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b7f20 ^ _UNK_180404928;
  _DAT_1830b8218 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8298 + 0x98d1e734ea9af122) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b7f20 + 0x84222325));
  uVar3 = (_DAT_1830b8218 & 0x7fffffffffffffff) * 0x5bf94e1e0cb2755b;
  _DAT_1830b8360 = (_DAT_1830b8360 ^ uVar3) + 0x672e18cb15650ede ^ 0x2130e127a4a8620;
  _DAT_1830b7fe0 = (_DAT_1830b7fe0 * 0x31eb872ce79b9141 ^ _DAT_1830b8360) + uVar3;
  _DAT_1830b8260 = _DAT_1830b7fe0 ^ _DAT_1830b8360;
  _DAT_1830b8348 = 0x672e18cb15650ede;
  _DAT_1830b7f88 = func_0x00018502ebb0(_DAT_1830b8010 + 0x50dc7982d8b1fd05 ^ 0xe4);
  _DAT_1830b8098 = (_DAT_1830b8098 ^ _DAT_1830b7f30) + 0xf576294ef9d0f833 ^ 0x74cb29e0bc957c9a;
  _DAT_1830b8110 = (_DAT_1830b8110 * 0x1b988a2701fce8c5 ^ _DAT_1830b8098) + _DAT_1830b7f30;
  _DAT_1830b8550 = _DAT_1830b8110 ^ _DAT_1830b8098;
  _DAT_1830b8198 = 0xf576294ef9d0f833;
  uVar3 = (~_DAT_1830b84f0 + 0xf576294ef9d0f834) *
          ((_DAT_1830b85d0 ^ 0xa89d6b1820d24c7) + (_DAT_1830b85d0 & 0xa89d6b1820d24c7) * 2);
  uVar3 = (uVar3 | _DAT_1830b8328) + (uVar3 & _DAT_1830b8328);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8578 = func_0x00018502ebb0((uVar3 | 0xffffffff7bdddcf4) + (uVar3 & 0xffffffff7bdddcf4));
  uVar3 = _DAT_1830b8578 ^ 0xfffffffffffffff3;
  _DAT_1830b82c8 = _DAT_1830b8698 ^ uVar3 ^ 0x15;
  _DAT_1830b8080 = (_DAT_1830b8080 ^ uVar3) + 0x15 ^ 0xdf98781abf54c0fb;
  _DAT_1830b86f0 = (_DAT_1830b86f0 * 0x23a2dd58978a48c9 ^ _DAT_1830b8080) + uVar3;
  _DAT_1830b80a0 = _DAT_1830b86f0 ^ _DAT_1830b8080;
  _DAT_1830b84c8 = 0x15;
  uVar3 = (~_DAT_1830b8670 + 0x8ec1cd866720d7ec) *
          ((_DAT_1830b8698 ^ uVar3 ^ 0x84222330) +
          (ulonglong)((uint)_DAT_1830b82c8 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830b86b0) + (uVar3 & _DAT_1830b86b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8308 = func_0x00018502ebb0((uVar3 | 0x8ec1cd86e302f4ce) + (uVar3 & 0x8ec1cd86e302f4ce));
  _DAT_1830b7fe8 = (_DAT_1830b7fe8 ^ _DAT_1830b8308) + 0x713e327998df2815 ^ 0x3bb2dc5c7c4c8e2c;
  _DAT_1830b7f80 = (_DAT_1830b7f80 * -0x70f6ce67ed26ca9d ^ _DAT_1830b7fe8) + _DAT_1830b8308;
  _DAT_1830b8518 = _DAT_1830b7f80 ^ _DAT_1830b7fe8;
  _DAT_1830b85b0 = 0x713e327998df2815;
  uVar3 = (_DAT_1830b8018 ^ _DAT_180404930) + _DAT_1830b7f68 + 0x84222330;
  uVar2 = (_DAT_1830b7f68 ^ _UNK_180404938) + _DAT_1830b8018 + 0x8ec1cd866720d7eb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8018 ^ _DAT_180404930;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b7f68 ^ _UNK_180404938;
  _DAT_1830b8020 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8018 + 0x8ec1cd866720d7eb) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b7f68 + 0x84222330));
  uVar3 = (_DAT_1830b8020 ^ 0x8ec1cd8664000000) & 0xfffffffffc000000;
  _DAT_1830b8598 = _DAT_1830b84a8 ^ uVar3 ^ 0x8ec1cd866720d800;
  _DAT_1830b8418 = (_DAT_1830b8418 ^ uVar3) + 0x8ec1cd866720d800 ^ 0x1125428351cfe7c4;
  _DAT_1830b82f0 = (_DAT_1830b82f0 * 0xf768369fe87261f ^ _DAT_1830b8418) + uVar3;
  _DAT_1830b8690 = _DAT_1830b82f0 ^ _DAT_1830b8418;
  _DAT_1830b84d0 = 0x8ec1cd866720d800;
  _DAT_1830b8220 = func_0x00018502ebb0(_DAT_1830b8150 ^ 0xbdd394850f59ab96);
  uVar3 = _DAT_1830b8220 & 0x7fffffffffff8000 ^ 0x8ec1cd866720d800;
  _DAT_1830b8078 = _DAT_1830b8100 ^ uVar3 ^ 0x15;
  _DAT_1830b8198 = (_DAT_1830b8198 ^ uVar3) + 0x15 ^ 0x869a6e7fa80750b8;
  _DAT_1830b7f90 = (_DAT_1830b7f90 * -0x47efae8bed03231f ^ _DAT_1830b8198) + uVar3;
  _DAT_1830b8420 = _DAT_1830b7f90 ^ _DAT_1830b8198;
  _DAT_1830b8178 = 0x15;
  uVar3 = (_DAT_1830b8010 ^ _DAT_180404940) + _DAT_1830b8630 + 0xfdfffa7f7fdfcc58;
  uVar2 = (_DAT_1830b8630 ^ _UNK_180404948) + _DAT_1830b8010 + 0x212ea045a84ed9fd;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8010 ^ _DAT_180404940;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8630 ^ _UNK_180404948;
  _DAT_1830b8270 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8010 + 0x212ea045a84ed9fd) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b8630 + 0xfdfffa7f7fdfcc58));
  uVar3 = (_DAT_1830b8270 ^ 0x184426504a0ca389) << 0x14 |
          (_DAT_1830b8270 ^ 0x184426504a0ca389) >> 0x2c;
  _DAT_1830b8610 = (_DAT_1830b8610 ^ uVar3) + 0x212ea045a84cc97d ^ 0x5689d6143a36b10e;
  _DAT_1830b8070 = (_DAT_1830b8070 * 0x568b7b47742e5819 ^ _DAT_1830b8610) + uVar3;
  _DAT_1830b8470 = _DAT_1830b8070 ^ _DAT_1830b8610;
  _DAT_1830b86a8 = 0x212ea045a84cc97d;
  uVar3 = (~_DAT_1830b81d0 + 0x425d408b509992fb) *
          ((_DAT_1830b8450 ^ 0xdcd15a3ad79115a5) + (_DAT_1830b8450 & 0x5cd15a3ad79115a5) * 2);
  uVar3 = (uVar3 | _DAT_1830b8198) + (uVar3 & _DAT_1830b8198);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b86f8 = func_0x00018502ebb0((uVar3 | 0x9e8c1ab18708875f) + (uVar3 & 0x9e8c1ab18708875f));
  uVar3 = _DAT_1830b86f8 ^ 0xdcd15a3a53b33680;
  _DAT_1830b83e8 = _DAT_1830b7f80 ^ uVar3 ^ 0x1f2e9ac5a44cc97a;
  _DAT_1830b8058 = (_DAT_1830b8058 ^ uVar3) + 0x1f2e9ac5a44cc97a ^ 0xa759e9cfe6f635e1;
  _DAT_1830b8198 = (_DAT_1830b8198 * -0x475604776a2b8e59 ^ _DAT_1830b8058) + uVar3;
  _DAT_1830b8140 = _DAT_1830b8198 ^ _DAT_1830b8058;
  _DAT_1830b7f00 = 0x1f2e9ac5a44cc97a;
  uVar3 = (_DAT_1830b8230 ^ _DAT_180404950) + _DAT_1830b83d8 + 0x1f2e9ac5206eea5f;
  uVar2 = (_DAT_1830b83d8 ^ _UNK_180404958) + _DAT_1830b8230 + 0x1f2e9ac5a44cc97a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8230 ^ _DAT_180404950;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b83d8 ^ _UNK_180404958;
  _DAT_1830b7fe8 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8230 + 0x1f2e9ac5a44cc97a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b83d8 + 0x1f2e9ac5206eea5f));
  _DAT_1830b8388 = _DAT_1830b7fe8 ^ 0x9ddf56f08f00ce24;
  uVar3 = _DAT_1830b8388 - (_DAT_1830b8388 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  _DAT_1830b8388 = (uint)bVar1 + (uint)bVar1 ^ _DAT_1830b8388;
  _DAT_1830b8238 = _DAT_1830b8238 ^ _DAT_1830b8388 ^ 0x8764b6fbfd4d95cc;
  _DAT_1830b84c8 = (_DAT_1830b84c8 * 0x16eefb5a64aba1e5 ^ _DAT_1830b8238) + _DAT_1830b8388;
  _DAT_1830b82a0 = _DAT_1830b84c8 ^ _DAT_1830b8238;
  _DAT_1830b83d0 = 0;
  uVar3 = ((_DAT_1830b8198 ^ 0x84222330) + (ulonglong)((uint)_DAT_1830b8198 & 0x84222330) * 2) *
          -_DAT_1830b86d0;
  uVar3 = (uVar3 | _DAT_1830b84e0) + (uVar3 & _DAT_1830b84e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b82b0 = func_0x00018502ebb0((uVar3 | 0x84222330) + (ulonglong)((uint)uVar3 & 0x84222330))
  ;
  uVar3 = (_DAT_1830b82b0 ^ 0x14) & 0xfffffffffffffffe;
  _DAT_1830b8228 = _DAT_1830b85b0 ^ uVar3 ^ 0x15;
  _DAT_1830b7f00 = (_DAT_1830b7f00 ^ uVar3) + 0x15 ^ 0xe86507886b18d31b;
  _DAT_1830b8448 = (_DAT_1830b8448 * -0x3ddca7a1e287a493 ^ _DAT_1830b7f00) + uVar3;
  _DAT_1830b7fa8 = _DAT_1830b8448 ^ _DAT_1830b7f00;
  _DAT_1830b83b8 = 0x15;
  uVar3 = ~_DAT_1830b7f30 *
          ((_DAT_1830b8338 ^ 0xfdfffa7f7fdfcc58) + (_DAT_1830b8338 & 0x7dfffa7f7fdfcc58) * 2);
  uVar3 = (uVar3 | _DAT_1830b85f8) + (uVar3 & _DAT_1830b85f8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b8480 = func_0x00018502ebb0((uVar3 | 0x2000580802033a7) + (uVar3 & 0x2000580802033a7));
  uVar3 = _DAT_1830b8480 - (_DAT_1830b8480 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1830b8480;
  _DAT_1830b8530 = (_DAT_1830b8530 ^ uVar3) + 0x200058004021082 ^ 0xd4b90bbbf7ee81b3;
  _DAT_1830b86c8 = (_DAT_1830b86c8 * 0x38e4103df31a37d5 ^ _DAT_1830b8530) + uVar3;
  _DAT_1830b7fb8 = _DAT_1830b86c8 ^ _DAT_1830b8530;
  _DAT_1830b8260 = 0x200058004021082;
  uVar3 = (_DAT_1830b8598 ^ _DAT_180404960) + _DAT_1830b8450 + 0xfdfffa7f7fdfcc58;
  uVar2 = (_DAT_1830b8450 ^ _UNK_180404968) + _DAT_1830b8598 + 0x200058004021082;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830b8598 ^ _DAT_180404960;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8450 ^ _UNK_180404968;
  _DAT_1830b83a8 =
       func_0x00018502ebb0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8598 + 0x200058004021082) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830b8450 + 0xfdfffa7f7fdfcc58));
  uVar3 = (_DAT_1830b83a8 ^ 0x677ace77df8) & 0xfffffffffff;
  _DAT_1830b8410 = _DAT_1830b8410 ^ uVar3 ^ 0x42f867785e713812;
  _DAT_1830b85b8 = (_DAT_1830b85b8 * -0x33d0033f3becdc2f ^ _DAT_1830b8410) + uVar3;
  _DAT_1830b8500 = _DAT_1830b85b8 ^ _DAT_1830b8410;
  _DAT_1830b8360 = 0;
  uVar3 = ((_DAT_1830b83d0 ^ 0x84222330) + (ulonglong)((uint)_DAT_1830b83d0 & 0x84222330) * 2) *
          -_DAT_1830b8468;
  uVar3 = (uVar3 | _DAT_1830b86b8) + (uVar3 & _DAT_1830b86b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b80e8 = func_0x00018502ebb0((uVar3 | 0x84222330) + (ulonglong)((uint)uVar3 & 0x84222330))
  ;
  uVar3 = (ulonglong)((~(uint)_DAT_1830b80e8 & 0x15) << 0x12);
  _DAT_1830b85e8 = _DAT_1830b8608 ^ uVar3 ^ 0x15;
  _DAT_1830b82f8 = (_DAT_1830b82f8 ^ uVar3) + 0x15 ^ 0xe476b0fcb8c91fee;
  _DAT_1830b8450 = (_DAT_1830b8450 * -0x192f1a3a55a81fc7 ^ _DAT_1830b82f8) + uVar3;
  _DAT_1830b7f28 = _DAT_1830b8450 ^ _DAT_1830b82f8;
  _DAT_1830b80f0 = 0x15;
  uVar3 = (~_DAT_1830b8048 + 0xb8d76a31abbde50e) *
          ((_DAT_1830b81c0 ^ 0xb8d76a312f9fc628) + (_DAT_1830b81c0 & 0x38d76a312f9fc628) * 2);
  uVar3 = (uVar3 | _DAT_1830b84d8) + (uVar3 & _DAT_1830b84d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830b86b8 = func_0x00018502ebb0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar3 = _DAT_1830b86b8 >> 1 | _DAT_1830b86b8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1830b86b8;
  _DAT_1830b7f00 = _DAT_1830b7f00 ^ uVar3 ^ 0x58ecccb1c900ff96;
  _DAT_1830b8138 = (_DAT_1830b8138 * 0xb82fe93ea0b269 ^ _DAT_1830b7f00) + uVar3;
  _DAT_1830b8618 = _DAT_1830b8138 ^ _DAT_1830b7f00;
  _DAT_1830b8208 = 0;
  switch(*(longlong *)(unaff_RBP + 0x90) == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 501b0b5 (image 18501b0b5) =====

void FUN_18501b0b5(void)

{
  return;
}



// ===== continuation @ rva 500614c (image 18500614c) =====

undefined8 FUN_18500614c(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva 501b202 (image 18501b202) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18501b202(longlong param_1)

{
  switch(0xf < *(ulonglong *)(param_1 + 0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 500ff3b (image 18500ff3b) =====

undefined8 FUN_18500ff3b(void)

{
  func_0x000180001044();
  return 0;
}



// ===== continuation @ rva 500c847 (image 18500c847) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18500c847(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  
  *(undefined8 *)(unaff_RBP + -0x10) = unaff_XMM15_Qa;
  *(undefined8 *)(unaff_RBP + -8) = unaff_XMM15_Qb;
  *(undefined8 *)(unaff_RBP + 0x30) = unaff_XMM14_Qa;
  *(undefined8 *)(unaff_RBP + 0x38) = unaff_XMM14_Qb;
  *(undefined8 *)(unaff_RBP + 0x20) = unaff_XMM8_Qa;
  *(undefined8 *)(unaff_RBP + 0x28) = unaff_XMM8_Qb;
  *(undefined8 *)(unaff_RBP + 0x90) = *(undefined8 *)(param_3 + -8);
  uVar2 = (~_DAT_1830b7f38 + 0x7f6558bf5d6101f6) *
          ((_DAT_1830b8668 ^ 0x49e92922ed760175) + (_DAT_1830b8668 & 0x49e92922ed760175) * 2);
  uVar2 = (uVar2 | _DAT_1830b8580) + (uVar2 & _DAT_1830b8580);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8130 = func_0x00018502ebb0((uVar2 | 0x368c719db0170080) + (uVar2 & 0x368c719db0170080));
  _DAT_1830b8300 =
       (_DAT_1830b8300 ^ ~_DAT_1830b8130 & 0x49e9292269540000) + 0x7fed79bf7d7523f5 ^
       0x511dba077525fc60;
  _DAT_1830b8188 =
       (_DAT_1830b8188 * 0x446826146c22d9f ^ _DAT_1830b8300) +
       (~_DAT_1830b8130 & 0x49e9292269540000);
  _DAT_1830b8468 = _DAT_1830b8188 ^ _DAT_1830b8300;
  _DAT_1830b8680 = 0x7fed79bf7d7523f5;
  uVar2 = (~_DAT_1830b8500 + 0xc04777047c39106e) *
          ((_DAT_1830b8548 ^ 0xf69332c746b8f26e) + (_DAT_1830b8548 & 0x769332c746b8f26e) * 2);
  uVar2 = (uVar2 | _DAT_1830b8688) + (uVar2 & _DAT_1830b8688);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8420 = func_0x00018502ebb0((uVar2 | 0x36d445c33a81e203) + (uVar2 & 0x36d445c33a81e203));
  uVar2 = (_DAT_1830b8420 ^ 0x8e188f3c76b2ccef) & 0x7fffffffffffffff;
  _DAT_1830b8158 = (_DAT_1830b8158 ^ uVar2) + 0x36d445c3bea3c126 ^ 0x267389d26995b921;
  _DAT_1830b84a8 = (_DAT_1830b84a8 * 0x1d344033c3c8f971 ^ _DAT_1830b8158) + uVar2;
  _DAT_1830b8268 = _DAT_1830b84a8 ^ _DAT_1830b8158;
  _DAT_1830b8100 = 0x36d445c3bea3c126;
  _DAT_1830b8470 = func_0x00018502ebb0(_DAT_1830b7fe8 ^ 0x99880d66da53659f);
  uVar2 = (_DAT_1830b8470 & 0x7fffffffffffffff) * -0x42d0f02e4456a5ad;
  _DAT_1830b8050 = (_DAT_1830b8050 ^ uVar2) + 0x28cd0c14e07b5500 ^ 0xf6af2867c885ae39;
  _DAT_1830b83d0 = (_DAT_1830b83d0 * 0x388f013f2a52f193 ^ _DAT_1830b8050) + uVar2;
  _DAT_1830b8058 = _DAT_1830b83d0 ^ _DAT_1830b8050;
  _DAT_1830b8250 = 0x28cd0c14e07b5500;
  uVar2 = (_DAT_1830b8130 ^ _DAT_180404ae0) + (_DAT_1830b86a0 - 0x84222323);
  uVar5 = (_DAT_1830b86a0 ^ _UNK_180404ae8) + _DAT_1830b8130 + 0xd732f3eb1f84ab00;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8130 ^ _DAT_180404ae0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830b86a0 ^ _UNK_180404ae8;
  _DAT_1830b8470 =
       func_0x00018502ebb0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830b8130 + 0xd732f3eb1f84ab00) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b86a0 - 0x84222323));
  uVar2 = (_DAT_1830b8470 ^ 0x466860a703daa800) << 8 | (_DAT_1830b8470 ^ 0x466860a703daa800) >> 0x38
  ;
  _DAT_1830b80d0 = _DAT_1830b8618 ^ uVar2 ^ 0xd732f3eb1f84aaf8;
  _DAT_1830b8330 = (_DAT_1830b8330 ^ uVar2) + 0xd732f3eb1f84aaf8 ^ 0xb0619d2179cbe7a6;
  _DAT_1830b8638 = (_DAT_1830b8638 * 0x69e1d412b5a6f8dd ^ _DAT_1830b8330) + uVar2;
  _DAT_1830b85b8 = _DAT_1830b8638 ^ _DAT_1830b8330;
  _DAT_1830b80b8 = 0xd732f3eb1f84aaf8;
  uVar2 = (~_DAT_1830b8390 + 0x28cd0c14e07b5501) *
          ((_DAT_1830b8520 ^ 0xd732f3eb9ba689dd) + (_DAT_1830b8520 & 0x5732f3eb9ba689dd) * 2);
  uVar2 = (uVar2 | _DAT_1830b83b8) + (uVar2 & _DAT_1830b83b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b82d0 = func_0x00018502ebb0((uVar2 | 0xffffffff7bdddcdd) + (uVar2 & 0xffffffff7bdddcdd));
  uVar2 = _DAT_1830b82d0 - (_DAT_1830b82d0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1830b82d0;
  _DAT_1830b85e8 = _DAT_1830b8228 ^ uVar2 ^ 0xfffffffffffffff8;
  _DAT_1830b8668 = (_DAT_1830b8668 ^ uVar2) - 8 ^ 0xffda55a9fdc2259f;
  _DAT_1830b8420 = (_DAT_1830b8420 * -0x7819eb5d224db24f ^ _DAT_1830b8668) + uVar2;
  _DAT_1830b8330 = _DAT_1830b8420 ^ _DAT_1830b8668;
  _DAT_1830b7f80 = 0xfffffffffffffff8;
  uVar2 = (~_DAT_1830b8010 + 0x87829dc3888113cc) *
          ((_DAT_1830b8490 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830b8490 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_1830b83f0) + (uVar2 & _DAT_1830b83f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8480 = func_0x00018502ebb0((uVar2 | 0x87829dc30ca330ee) + (uVar2 & 0x87829dc30ca330ee));
  _DAT_1830b7f48 = (_DAT_1830b7f48 ^ _DAT_1830b8480) + 0x787d623c777eec35 ^ 0xc5df32a18abb6f2a;
  _DAT_1830b81d8 = (_DAT_1830b81d8 * -0x4d8e1a4db37c53c5 ^ _DAT_1830b7f48) + _DAT_1830b8480;
  _DAT_1830b8308 = _DAT_1830b81d8 ^ _DAT_1830b7f48;
  _DAT_1830b8468 = 0x787d623c777eec35;
  _DAT_1830b8610 = func_0x00018502ebb0(_DAT_1830b84c0 + 0x343f6d52ee2253c7U ^ 0x4b);
  uVar2 = _DAT_1830b8610 << 0x39 | (_DAT_1830b8610 & 0x7fffffffffffffff) >> 7;
  _DAT_1830b86a8 = _DAT_1830b8270 ^ uVar2 ^ 0x87829dc3888113c3;
  _DAT_1830b8328 = (_DAT_1830b8328 ^ uVar2) + 0x87829dc3888113c3 ^ 0xec3769c14c3e18fe;
  _DAT_1830b8068 = (_DAT_1830b8068 * 0x3e45479da7044757 ^ _DAT_1830b8328) + uVar2;
  _DAT_1830b83b8 = _DAT_1830b8068 ^ _DAT_1830b8328;
  _DAT_1830b8250 = 0x87829dc3888113c3;
  uVar2 = (_DAT_1830b8418 ^ _DAT_180404af0) + _DAT_1830b85d8 + 0x87829dc30ca330e6;
  uVar5 = (_DAT_1830b85d8 ^ _UNK_180404af8) + _DAT_1830b8418 + 0x787d623c777eec35;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8418 ^ _DAT_180404af0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830b85d8 ^ _UNK_180404af8;
  _DAT_1830b84f0 =
       func_0x00018502ebb0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830b8418 + 0x787d623c777eec35) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b85d8 + 0x87829dc30ca330e6));
  uVar2 = _DAT_1830b84f0 << 0x24 | (_DAT_1830b84f0 & 0x7fffffffffffffff) >> 0x1c;
  _DAT_1830b8260 = _DAT_1830b8158 ^ uVar2 ^ 0xfffffffffffffff8;
  _DAT_1830b7f58 = (_DAT_1830b7f58 ^ uVar2) - 8 ^ 0x648910d322f8df15;
  _DAT_1830b84b0 = (_DAT_1830b84b0 * -0x1d2d5403f1eee1f7 ^ _DAT_1830b7f58) + uVar2;
  _DAT_1830b85f8 = _DAT_1830b84b0 ^ _DAT_1830b7f58;
  _DAT_1830b8228 = 0xfffffffffffffff8;
  _DAT_1830b82e8 = func_0x00018502ebb0(_DAT_1830b8128 ^ 0x631319301b28593e);
  uVar2 = (_DAT_1830b82e8 & 0xfffffffffffffffe) - (_DAT_1830b82e8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_1830b82e8 & 0xfffffffffffffffe;
  _DAT_1830b8048 = (_DAT_1830b8048 ^ uVar2) + 0x33c6261b2b7b2200 ^ 0x40058070857ac16d;
  _DAT_1830b8530 = (_DAT_1830b8530 * -0x1cbf7e4f866bca71 ^ _DAT_1830b8048) + uVar2;
  _DAT_1830b8170 = _DAT_1830b8530 ^ _DAT_1830b8048;
  _DAT_1830b7f58 = 0x33c6261b2b7b2200;
  uVar2 = (~_DAT_1830b7fd8 + 0x36d445c3bea3c127) *
          ((_DAT_1830b8620 ^ 0x7fed79bff95700d0) + (_DAT_1830b8620 & 0x7fed79bff95700d0) * 2);
  uVar2 = (uVar2 | _DAT_1830b7f88) + (uVar2 & _DAT_1830b7f88);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8068 = func_0x00018502ebb0((uVar2 | 0x49393c7c47f4c1f6) + (uVar2 & 0x49393c7c47f4c1f6));
  uVar2 = ~_DAT_1830b8068 & 0x7fed79bf7d7523f5;
  _DAT_1830b8350 = _DAT_1830b8238 ^ uVar2 ^ 0xb6c1bf833c18e51b;
  _DAT_1830b7fa0 = (_DAT_1830b7fa0 ^ uVar2) + 0xb6c1bf833c18e51b ^ 0xb2799a6635a132b8;
  _DAT_1830b82d8 = (_DAT_1830b82d8 * -0x1a605b4745b680df ^ _DAT_1830b7fa0) + uVar2;
  _DAT_1830b80e0 = _DAT_1830b82d8 ^ _DAT_1830b7fa0;
  _DAT_1830b81f8 = 0xb6c1bf833c18e51b;
  _DAT_1830b84e8 = func_0x00018502ebb0(_DAT_1830b8608 + 0xe43f173949fbec38 ^ 0xdd);
  uVar2 = _DAT_1830b85e0 << 9 | _DAT_1830b85e0 >> 0x37;
  _DAT_1830b8120 = (_DAT_1830b8120 ^ uVar2) + 0x49393c7cc3d6e2d3 ^ 0xcb2f7abf34b59dc0;
  _DAT_1830b8678 = (_DAT_1830b8678 * -0x496b18954ae672af ^ _DAT_1830b8120) + uVar2;
  _DAT_1830b8210 = _DAT_1830b8678 ^ _DAT_1830b8120;
  _DAT_1830b7fa0 = 0x49393c7cc3d6e2d3;
  _DAT_1830b7fe8 = func_0x00018502ebb0(_DAT_1830b80a0 + 0xab40c6ba4e1cf448U ^ 0xaf);
  uVar2 = (_DAT_1830b7fe8 ^ 0x7ffd7dfffff7e3f7) << 0x1c |
          (_DAT_1830b7fe8 ^ 0x7ffd7dfffff7e3f7) >> 0x24;
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar2;
  uVar2 = uVar2 << 0x16 | uVar2 >> 0x2a;
  _DAT_1830b8620 = (_DAT_1830b8620 ^ uVar2) + 0x36c441833c210124 ^ 0x78af63c251337a42;
  _DAT_1830b8050 = (_DAT_1830b8050 * 0x75551486c5a6ebb1 ^ _DAT_1830b8620) + uVar2;
  _DAT_1830b8330 = _DAT_1830b8050 ^ _DAT_1830b8620;
  _DAT_1830b83b8 = 0x36c441833c210124;
  uVar2 = (_DAT_1830b8220 ^ _DAT_180404b00) + _DAT_1830b8098 + 0x49393c7c47f4c1f6;
  uVar5 = (_DAT_1830b8098 ^ _UNK_180404b08) + _DAT_1830b8220 + 0x6d88830678420248;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8220 ^ _DAT_180404b00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830b8098 ^ _UNK_180404b08;
  _DAT_1830b85c0 =
       func_0x00018502ebb0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830b8220 + 0x6d88830678420248) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8098 + 0x49393c7c47f4c1f6));
  uVar2 = _DAT_1830b85c0 ^ 0x49393c7cc3d6e2d3;
  _DAT_1830b8118 = _DAT_1830b8538 ^ uVar2 ^ 0xb6c1bf833c18e51b;
  _DAT_1830b8650 = (_DAT_1830b8650 ^ uVar2) + 0xb6c1bf833c18e51b ^ 0x1744ae2aa06bf86b;
  _DAT_1830b8320 = (_DAT_1830b8320 * 0x2f3ec50fb89ae92d ^ _DAT_1830b8650) + uVar2;
  _DAT_1830b8260 = _DAT_1830b8320 ^ _DAT_1830b8650;
  _DAT_1830b8310 = 0xb6c1bf833c18e51b;
  uVar2 = ((_DAT_1830b8168 ^ 0xffffffff7bdddcdd) + (_DAT_1830b8168 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_1830b80b0;
  uVar2 = (uVar2 | _DAT_1830b83e0) + (uVar2 & _DAT_1830b83e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b83a8 = func_0x00018502ebb0((uVar2 | 0xffffffff7bdddcdd) + (uVar2 & 0xffffffff7bdddcdd));
  uVar2 = ~_DAT_1830b83a8 & 0xfffffffffffffff8;
  _DAT_1830b83d0 = _DAT_1830b8028 ^ uVar2 ^ 0xfffffffffffffff8;
  _DAT_1830b8660 = (_DAT_1830b8660 ^ uVar2) - 8 ^ 0xbb2028c497ee12d6;
  _DAT_1830b81e0 = (_DAT_1830b81e0 * -0xde7853929d2ca7f ^ _DAT_1830b8660) + uVar2;
  _DAT_1830b8188 = _DAT_1830b81e0 ^ _DAT_1830b8660;
  _DAT_1830b8560 = 0xfffffffffffffff8;
  uVar2 = (~_DAT_1830b8140 + 0x80128640828adc0b) *
          ((_DAT_1830b83f8 ^ 0x7fed79bff95700d0) + (_DAT_1830b83f8 & 0x7fed79bff95700d0) * 2);
  uVar2 = (uVar2 | _DAT_1830b8088) + (uVar2 & _DAT_1830b8088);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8120 = func_0x00018502ebb0((uVar2 | 0xffffffff7bdddcda) + (uVar2 & 0xffffffff7bdddcda));
  _DAT_1830b8460 = _DAT_1830b8460 ^ _DAT_1830b8120 & 0xffffffff80000000 ^ 0x7d276354364790d0;
  _DAT_1830b82e8 =
       (_DAT_1830b82e8 * 0x559f42566c7e6261 ^ _DAT_1830b8460) +
       (_DAT_1830b8120 & 0xffffffff80000000);
  _DAT_1830b8610 = _DAT_1830b82e8 ^ _DAT_1830b8460;
  _DAT_1830b7fc8 = _DAT_1830b8538;
  _DAT_1830b80f0 = 0;
  uVar2 = ((_DAT_1830b7f68 ^ 0xffffffff7bdddcdd) + (_DAT_1830b7f68 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_1830b81a0;
  uVar2 = (uVar2 | _DAT_1830b8418) + (uVar2 & _DAT_1830b8418);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8340 = func_0x00018502ebb0((uVar2 | 0xffffffff7bdddcdd) + (uVar2 & 0xffffffff7bdddcdd));
  uVar2 = _DAT_1830b8340 << 0x31 | _DAT_1830b8340 >> 0xf;
  _DAT_1830b8128 = _DAT_1830b8660 ^ uVar2 ^ 0xfffffffffffffff8;
  _DAT_1830b8420 = (_DAT_1830b8420 ^ uVar2) - 8 ^ 0x225fb7d28cef9d66;
  _DAT_1830b7fb8 = (_DAT_1830b7fb8 * -0x33f029758bd7ce7 ^ _DAT_1830b8420) + uVar2;
  _DAT_1830b8628 = _DAT_1830b7fb8 ^ _DAT_1830b8420;
  _DAT_1830b83f0 = 0xfffffffffffffff8;
  uVar2 = (~_DAT_1830b8618 + 0x49e9292269542251) *
          ((_DAT_1830b8160 ^ 0x49e92922ed760175) + (_DAT_1830b8160 & 0x49e92922ed760175) * 2);
  uVar2 = (uVar2 | _DAT_1830b8620) + (uVar2 & _DAT_1830b8620);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b82f8 = func_0x00018502ebb0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar2 = (_DAT_1830b82f8 ^ 0xdd0c29195900) & 0x3ffffffffffff;
  _DAT_1830b8520 = _DAT_1830b8520 ^ uVar2 ^ 0x79857647d1917700;
  _DAT_1830b85f0 = (_DAT_1830b85f0 * 0x17270d78fad05fb ^ _DAT_1830b8520) + uVar2;
  _DAT_1830b84b0 = _DAT_1830b85f0 ^ _DAT_1830b8520;
  _DAT_1830b83a8 = 0;
  uVar2 = func_0x00018502ebb0(_DAT_1830b80d0 + 0xc44bece7c3cf4ac2 ^ 0xe7);
  uVar2 = uVar2 ^ 0xfffffffffffffff8;
  _DAT_1830b8510 = _DAT_1830b86f0 ^ uVar2 ^ 0xfffffffffffffff8;
  _DAT_1830b81e8 = (_DAT_1830b81e8 ^ uVar2) - 8 ^ 0xf77cb12d06600c49;
  _DAT_1830b7f60 = (_DAT_1830b7f60 * -0x504ab38815e2d7f3 ^ _DAT_1830b81e8) + uVar2;
  _DAT_1830b7f00 = _DAT_1830b7f60 ^ _DAT_1830b81e8;
  _DAT_1830b7f28 = 0xfffffffffffffff8;
  uVar2 = *(ulonglong *)(unaff_RBP + 0x88);
  uVar5 = uVar2 ^ 0x84222325 ^ _DAT_1830b83d0;
  lVar3 = (uVar2 ^ 0x84222325) + _DAT_1830b8280;
  uVar7 = uVar5 + lVar3;
  uVar8 = (_DAT_1830b8280 ^ 0xfffffffffffffff8) + (_DAT_1830b83d0 - 8);
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1830b8280 ^ 0xfffffffffffffff8;
  _DAT_1830b86a0 =
       func_0x00018502ebb0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1830b83d0 - 8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar4 = (uint)(uVar2 >> 0x20);
  auVar11._8_4_ = (uint)uVar2;
  auVar11._0_8_ = uVar2;
  auVar11._12_4_ = uVar4;
  uVar9 = (uint)uVar2 | (uint)DAT_1800627b0;
  uVar10 = SUB164(auVar11 & _DAT_1800627b0,0);
  uVar8 = SUB168(auVar11 & _DAT_1800627b0,0);
  uVar6 = SUB164(_DAT_1800627b0 ^ auVar11,0);
  uVar7 = SUB168(_DAT_1800627b0 ^ auVar11,0);
  uVar5 = (uVar2 | 0xfffffffffffffff8) ^ _DAT_1830b86a0;
  _DAT_1830b80f8 =
       (((ulonglong)_DAT_180404b80 * (ulonglong)uVar6 +
         ((ulonglong)_DAT_180404b90 * (ulonglong)uVar6 + (uVar7 >> 0x20) * (ulonglong)_DAT_180404b80
         << 0x20) +
         ((ulonglong)_DAT_180404b60 * (ulonglong)uVar9 + _DAT_180404b70 << 0x20) +
         (ulonglong)_DAT_180404b50 * (ulonglong)uVar9 +
        (ulonglong)_DAT_180404b30 * (ulonglong)uVar10 +
        ((ulonglong)_DAT_180404b40 * (ulonglong)uVar10 + (uVar8 >> 0x20) * (ulonglong)_DAT_180404b30
        << 0x20) +
        ((ulonglong)_DAT_180404b20 * (uVar2 & 0xffffffff) +
         (ulonglong)_DAT_180404b10 * (ulonglong)uVar4 << 0x20) +
        (uVar2 & 0xffffffff) * (ulonglong)_DAT_180404b10) -
       ((ulonglong)uVar6 * (ulonglong)_DAT_180404c30 +
        ((ulonglong)_DAT_180404c40 * (ulonglong)uVar6 + (uVar7 >> 0x20) * (ulonglong)_DAT_180404c30
        << 0x20) +
        ((ulonglong)uVar9 * (ulonglong)_DAT_180404c10 + _DAT_180404c20 << 0x20) +
        (ulonglong)_DAT_180404c00 * (ulonglong)uVar9 +
       (ulonglong)uVar10 * (ulonglong)_DAT_180404be0 +
       ((ulonglong)_DAT_180404bf0 * (ulonglong)uVar10 + (uVar8 >> 0x20) * (ulonglong)_DAT_180404be0
       << 0x20) +
       ((uVar2 & 0xffffffff) * (ulonglong)_DAT_180404bd0 +
        (ulonglong)uVar4 * (ulonglong)_DAT_180404bc0 << 0x20) +
       (uVar2 & 0xffffffff) * (ulonglong)_DAT_180404bc0)) + 0xf5a1c833375716f8;
  _DAT_1830b7f78 = _DAT_1830b8608 ^ uVar5 ^ _DAT_1830b80f8;
  _DAT_1830b8520 = (_DAT_1830b8520 ^ uVar5) + _DAT_1830b80f8 ^ 0x97a0eb6526cc7f70;
  _DAT_1830b81a0 = (_DAT_1830b81a0 * 0x510a8232860b2cfb ^ _DAT_1830b8520) + uVar5;
  _DAT_1830b8470 = _DAT_1830b81a0 ^ _DAT_1830b8520;
  uVar7 = _DAT_1830b80f8 - *(longlong *)(unaff_RBP + 0x90);
  uVar2 = (~_DAT_1830b84d8 + 0x4656bf0e3b76888e) *
          ((_DAT_1830b8140 ^ 0xe4412787f6e91c02) + (_DAT_1830b8140 & 0x64412787f6e91c02) * 2);
  uVar2 = (uVar2 | _DAT_1830b7f30) + (uVar2 & _DAT_1830b7f30);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b85d8 = func_0x00018502ebb0((uVar2 | 0xa2179889cd9f948f) + (uVar2 & 0xa2179889cd9f948f));
  _DAT_1830b81f8 =
       (_DAT_1830b81f8 ^ _DAT_1830b85d8 ^ 0x755d2f723eb3bf5c) + 0xe657bf8f7bffbfaf ^
       0xfd9485876994f07;
  _DAT_1830b8340 =
       (_DAT_1830b8340 * 0x7cac17bc3ea691ab ^ _DAT_1830b81f8) +
       (_DAT_1830b85d8 ^ 0x755d2f723eb3bf5c);
  _DAT_1830b81d0 = _DAT_1830b8340 ^ _DAT_1830b81f8;
  _DAT_1830b8488 = 0xe657bf8f7bffbfaf;
  _DAT_1830b8158 = func_0x00018502ebb0(_DAT_1830b8098 + 0xd37b15fe7c67f615 ^ 0xbd);
  _DAT_1830b8348 =
       (_DAT_1830b8348 ^ _DAT_1830b8158 ^ 0x17fffff7bebeffaf) + 0x163ee8d59a34a6a9 ^
       0xe0731ae6f32625ff;
  _DAT_1830b8148 =
       (_DAT_1830b8148 * -0x60dfc147bf346811 ^ _DAT_1830b8348) +
       (_DAT_1830b8158 ^ 0x17fffff7bebeffaf);
  _DAT_1830b8448 = _DAT_1830b8148 ^ _DAT_1830b8348;
  _DAT_1830b8028 = 0x163ee8d59a34a6a9;
  uVar2 = (_DAT_1830b8208 ^ _DAT_180404c50) + _DAT_1830b8580 + 0x84222325;
  uVar5 = (_DAT_1830b8580 ^ _UNK_180404c58) + _DAT_1830b8208 + 0x1f48a32afbd3e663;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8208 ^ _DAT_180404c50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830b8580 ^ _UNK_180404c58;
  _DAT_1830b8170 =
       func_0x00018502ebb0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830b8208 + 0x1f48a32afbd3e663) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8580 + 0x84222325));
  uVar2 = (_DAT_1830b8170 & 0x3fffffffffffff) - (_DAT_1830b8170 >> 1 & 0x15555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1830b8170 & 0x3fffffffffffff;
  _DAT_1830b8300 = (_DAT_1830b8300 ^ uVar2) + 0xe0b75cd5042c199d ^ 0x785a12227a7ccb08;
  _DAT_1830b8188 = (_DAT_1830b8188 * 0x38120c71e0929e2f ^ _DAT_1830b8300) + uVar2;
  _DAT_1830b82d0 = _DAT_1830b8188 ^ _DAT_1830b8300;
  _DAT_1830b85f0 = _DAT_1830b86a0 ^ 0xe0b75cd5042c199d;
  _DAT_1830b81a0 = 0xe0b75cd5042c199d;
  uVar2 = (~_DAT_1830b81e0 + 0x1f48a32afbd3e664) *
          ((_DAT_1830b7f98 ^ 0x84222305) + (ulonglong)((uint)_DAT_1830b7f98 & 0x84222305) * 2);
  uVar2 = (uVar2 | _DAT_1830b86c8) + (uVar2 & _DAT_1830b86c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8298 = func_0x00018502ebb0((uVar2 | 0x1f48a32a7ff1c566) + (uVar2 & 0x1f48a32a7ff1c566));
  _DAT_1830b8340 = _DAT_1830b8260 ^ _DAT_1830b8298 ^ 0x1f48a32afbd3e683;
  _DAT_1830b7fe0 = (_DAT_1830b7fe0 ^ _DAT_1830b8298) + 0x1f48a32afbd3e683 ^ 0xe6612241f2a22560;
  _DAT_1830b8150 = (_DAT_1830b8150 * 0x3a8b3b82d45043c5 ^ _DAT_1830b7fe0) + _DAT_1830b8298;
  _DAT_1830b8440 = _DAT_1830b8150 ^ _DAT_1830b7fe0;
  _DAT_1830b8608 = 0x1f48a32afbd3e683;
  _DAT_1830b8130 = func_0x00018502ebb0(_DAT_1830b8368 ^ 0xb3cb6b24d4e04236);
  uVar2 = _DAT_1830b8130 & 0x7fffffffffffffff;
  _DAT_1830b85a8 = _DAT_1830b81e0 ^ uVar2 ^ 0x20;
  _DAT_1830b8378 = (_DAT_1830b8378 ^ uVar2) + 0x20 ^ 0xd58824ba42d1a7f8;
  _DAT_1830b86f8 = (_DAT_1830b86f8 * -0x2d7422b27b7d5331 ^ _DAT_1830b8378) + uVar2;
  _DAT_1830b8168 = _DAT_1830b86f8 ^ _DAT_1830b8378;
  _DAT_1830b8410 = 0x20;
  _DAT_1830b7fe0 = func_0x00018502ebb0(_DAT_1830b8328 + 0xd77b7fdfed41fa32 ^ 0xb3);
  uVar2 = _DAT_1830b7fe0 << 0xd | _DAT_1830b7fe0 >> 0x33;
  uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar2;
  _DAT_1830b8630 = (_DAT_1830b8630 ^ uVar2) + 0x2c7f3dd01bd058d0 ^ 0x44f4b1293c9fd8dd;
  _DAT_1830b7f98 = (_DAT_1830b7f98 * -0x54f2a268b176d217 ^ _DAT_1830b8630) + uVar2;
  _DAT_1830b8628 = _DAT_1830b7f98 ^ _DAT_1830b8630;
  _DAT_1830b85d0 = 0x2c7f3dd01bd058d0;
  _DAT_1830b84e8 = func_0x00018502ebb0(_DAT_1830b8100 + 0x217b7f9ff4be0c2eU ^ 0x58);
  uVar2 = _DAT_1830b84e8 & 0x7fffffffffffffff;
  _DAT_1830b8310 = _DAT_1830b8580 ^ uVar2 ^ 0xd380c22fe42fa750;
  _DAT_1830b8218 = (_DAT_1830b8218 ^ uVar2) + 0xd380c22fe42fa750 ^ 0xf525b0912300099a;
  _DAT_1830b81f8 = (_DAT_1830b81f8 * -0x762366d8fd01a215 ^ _DAT_1830b8218) + uVar2;
  _DAT_1830b83b8 = _DAT_1830b81f8 ^ _DAT_1830b8218;
  _DAT_1830b8688 = 0xd380c22fe42fa750;
  uVar2 = (_DAT_1830b83c0 ^ _DAT_180404c60) + _DAT_1830b8590 + 0xd380c22f600d8475;
  uVar5 = (_DAT_1830b8590 ^ _UNK_180404c68) + _DAT_1830b83c0 + 0x2c7f3dd01bd058d0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b83c0 ^ _DAT_180404c60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830b8590 ^ _UNK_180404c68;
  _DAT_1830b7fa8 =
       func_0x00018502ebb0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830b83c0 + 0x2c7f3dd01bd058d0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8590 + 0xd380c22f600d8475));
  uVar2 = _DAT_1830b7fa8 ^ 0x2c7f3dd01bd058d0;
  _DAT_1830b8130 = _DAT_1830b7f38 ^ uVar2 ^ 0x20;
  _DAT_1830b86d8 = (_DAT_1830b86d8 ^ uVar2) + 0x20 ^ 0xd1ee1eeb7f4c30a1;
  _DAT_1830b8230 = (_DAT_1830b8230 * 0x9c8fc5fc464cbfd ^ _DAT_1830b86d8) + uVar2;
  _DAT_1830b8598 = _DAT_1830b8230 ^ _DAT_1830b86d8;
  _DAT_1830b8148 = _DAT_1830b8200 ^ 0x20;
  _DAT_1830b8300 = 0x20;
  _DAT_1830b85b0 = func_0x00018502ebb0(_DAT_1830b8590 + 0x2d0ac5d3d5253672 ^ 0x9e);
  _DAT_1830b8358 =
       (_DAT_1830b8358 ^ _DAT_1830b85b0 & 0x7ffffffff) + 0x8a2519280723c282 ^ 0xd496a78962d29237;
  _DAT_1830b8668 =
       (_DAT_1830b8668 * 0x49b726d89d790eb9 ^ _DAT_1830b8358) + (_DAT_1830b85b0 & 0x7ffffffff);
  _DAT_1830b8328 = _DAT_1830b8668 ^ _DAT_1830b8358;
  _DAT_1830b8460 = 0x8a2519280723c282;
  uVar2 = (~_DAT_1830b82b0 + 0x75dae6d7f8dc3d7f) *
          ((_DAT_1830b8360 ^ 0x84222305) + (ulonglong)((uint)_DAT_1830b8360 & 0x84222305) * 2);
  uVar2 = (uVar2 | _DAT_1830b81a8) + (uVar2 & _DAT_1830b81a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8338 = func_0x00018502ebb0((uVar2 | 0x75dae6d77cfe1e7b) + (uVar2 & 0x75dae6d77cfe1e7b));
  uVar2 = (ulonglong)(~(uint)_DAT_1830b8338 & 0x20) ^ 0x20;
  _DAT_1830b8240 = _DAT_1830b8188 ^ uVar2 ^ 0x75dae6d7f8dc3d9e;
  _DAT_1830b86e8 = (_DAT_1830b86e8 ^ uVar2) + 0x75dae6d7f8dc3d9e ^ 0xab0e3bef14a7b238;
  _DAT_1830b8480 = (_DAT_1830b8480 * -0x4a761542f2cea133 ^ _DAT_1830b86e8) + uVar2;
  _DAT_1830b8370 = _DAT_1830b8480 ^ _DAT_1830b86e8;
  _DAT_1830b8120 = 0x75dae6d7f8dc3d9e;
  _DAT_1830b8180 = func_0x00018502ebb0(_DAT_1830b8418 ^ 0x7a241a86f7f5c2e6);
  uVar2 = _DAT_1830b8180 ^ 0x75dae6d7f8dc3d1c;
  _DAT_1830b8608 = _DAT_1830b82d0 ^ uVar2 ^ 0x20;
  _DAT_1830b8370 = (_DAT_1830b8370 ^ uVar2) + 0x20 ^ 0x90d6b1f17fcfd7d7;
  _DAT_1830b8550 = (_DAT_1830b8550 * -0x43e50d333157828b ^ _DAT_1830b8370) + uVar2;
  _DAT_1830b8138 = _DAT_1830b8550 ^ _DAT_1830b8370;
  _DAT_1830b7f08 = _DAT_1830b8338 ^ 0x20;
  _DAT_1830b8320 = 0x20;
  _DAT_1830b82a8 = func_0x00018502ebb0(_DAT_1830b85e0 + 0xca35d71b1eabd62f ^ 1);
  uVar2 = (_DAT_1830b82a8 ^ 0xe657bf8f7bffbfaf) << 0x2c |
          (_DAT_1830b82a8 ^ 0xe657bf8f7bffbfaf) >> 0x14;
  _DAT_1830b82e0 = (_DAT_1830b82e0 ^ uVar2) + 0xf069575ae1cb1906 ^ 0x6e37a8e2c814a819;
  _DAT_1830b8338 = (_DAT_1830b8338 * 0x50829ff7820cfd7d ^ _DAT_1830b82e0) + uVar2;
  _DAT_1830b8478 = _DAT_1830b8338 ^ _DAT_1830b82e0;
  _DAT_1830b8418 = 0xf069575ae1cb1906;
  uVar2 = (~_DAT_1830b8538 + 0x163ee8d59a34a6aa) *
          ((_DAT_1830b80c8 ^ 0xe657bf8fffdd9c8a) + (_DAT_1830b80c8 & 0x6657bf8fffdd9c8a) * 2);
  uVar2 = (uVar2 | _DAT_1830b8450) + (uVar2 & _DAT_1830b8450);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8270 = func_0x00018502ebb0((uVar2 | 0xf069575a65e93a23) + (uVar2 & 0xf069575a65e93a23));
  _DAT_1830b85b0 =
       (_DAT_1830b85b0 ^ _DAT_1830b8270 ^ 0xf069575ae1cb1906) + 0x616a8851a34a6a9 ^
       0xc992164637b35cfa;
  _DAT_1830b82d0 =
       (_DAT_1830b82d0 * 0xe97af42fe177375 ^ _DAT_1830b85b0) + (_DAT_1830b8270 ^ 0xf069575ae1cb1906)
  ;
  _DAT_1830b8168 = _DAT_1830b82d0 ^ _DAT_1830b85b0;
  _DAT_1830b7f00 = 0x616a8851a34a6a9;
  uVar2 = (_DAT_1830b8600 ^ _DAT_180404c70) + _DAT_1830b80a8 + 0xf069575a65e93a23;
  uVar5 = (_DAT_1830b80a8 ^ _UNK_180404c78) + _DAT_1830b8600 + 0xc2d510a34694d52;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8600 ^ _DAT_180404c70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830b80a8 ^ _UNK_180404c78;
  _DAT_1830b8678 =
       func_0x00018502ebb0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830b8600 + 0xc2d510a34694d52) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b80a8 + 0xf069575a65e93a23));
  uVar2 = _DAT_1830b8678 - (_DAT_1830b8678 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar2 = _DAT_1830b8678 ^ 0xf069575ae1cb1906 ^ (ulonglong)((uint)bVar1 + (uint)bVar1);
  _DAT_1830b8260 = _DAT_1830b7ff0 ^ uVar2 ^ 0xfc96a86516346658;
  _DAT_1830b8180 = (_DAT_1830b8180 ^ uVar2) + 0xfc96a86516346658 ^ 0xa90395288c95f673;
  _DAT_1830b8108 = (_DAT_1830b8108 * -0x78df5d1c5cd65391 ^ _DAT_1830b8180) + uVar2;
  _DAT_1830b84b0 = _DAT_1830b8108 ^ _DAT_1830b8180;
  _DAT_1830b8188 = 0xfc96a86516346658;
  _DAT_1830b84c0 = func_0x00018502ebb0(_DAT_1830b8128 ^ 0x22ff8402ffe19d);
  uVar2 = (ulonglong)(~(uint)((ulonglong)_DAT_1830b84c0 >> 0x20) & 0x20);
  _DAT_1830b82c0 = _DAT_1830b8398 ^ uVar2 ^ 0x20;
  _DAT_1830b7f50 = (_DAT_1830b7f50 ^ uVar2) + 0x20 ^ 0x7a03d31ed59c3478;
  _DAT_1830b8338 = (_DAT_1830b8338 * 0x46a845c6c3e2dbaf ^ _DAT_1830b7f50) + uVar2;
  _DAT_1830b82f8 = _DAT_1830b8338 ^ _DAT_1830b7f50;
  _DAT_1830b8490 = 0x20;
  uVar2 = (_DAT_1830b8038 ^ _DAT_180404c80) + _DAT_1830b8200 + 0xe657bf8fffdd9c8a;
  uVar5 = (_DAT_1830b8200 ^ _UNK_180404c88) + (_DAT_1830b8038 - 1);
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830b8038 ^ _DAT_180404c80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830b8200 ^ _UNK_180404c88;
  _DAT_1830b8378 =
       func_0x00018502ebb0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830b8038 - 1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830b8200 + 0xe657bf8fffdd9c8a));
  uVar2 = ~((_DAT_1830b8378 ^ 0x19a8407084004051) & 0x7fffffffffffffff) & 0xe657bf8f7bffbfaf;
  _DAT_1830b83b8 = (_DAT_1830b7f90 ^ uVar2) + 0x19a8407084004050 ^ 0xda8035bc685b34b0;
  _DAT_1830b7f90 = (_DAT_1830b7f90 * 0x6e487f9124a63495 ^ _DAT_1830b83b8) + uVar2;
  _DAT_1830b83b8 = _DAT_1830b7f90 ^ _DAT_1830b83b8;
  _DAT_1830b7f98 = 0x19a8407084004050;
  uVar2 = (~_DAT_1830b8198 + 0x19a8407084004051) *
          ((_DAT_1830b7f40 ^ 0xe657bf8fffdd9c8a) + (_DAT_1830b7f40 & 0x6657bf8fffdd9c8a) * 2);
  uVar2 = (uVar2 | _DAT_1830b8368) + (uVar2 & _DAT_1830b8368);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b8280 = func_0x00018502ebb0((uVar2 | 0xffffffff7bdddcda) + (uVar2 & 0xffffffff7bdddcda));
  uVar2 = (_DAT_1830b8280 & 0x7fffffffffffffff ^ 0xe657bf8f7bffbfaf) * 0x49b2da6434090cc5;
  _DAT_1830b8228 = _DAT_1830b8228 ^ uVar2 ^ 0x9dca6e702724c692;
  _DAT_1830b7f78 = (_DAT_1830b7f78 * 0x283ad711e48eedbb ^ _DAT_1830b8228) + uVar2;
  _DAT_1830b86c0 = _DAT_1830b7f78 ^ _DAT_1830b8228;
  _DAT_1830b81b8 = 0;
  uVar2 = ((_DAT_1830b82e8 ^ 0x84222305) + (ulonglong)((uint)_DAT_1830b82e8 & 0x84222305) * 2) *
          -_DAT_1830b8648;
  uVar2 = (uVar2 | _DAT_1830b8488) + (uVar2 & _DAT_1830b8488);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830b7f68 = func_0x00018502ebb0((uVar2 | 0x84222305) + (ulonglong)((uint)uVar2 & 0x84222305))
  ;
  uVar2 = _DAT_1830b7f68 ^ 0x20;
  _DAT_1830b8578 = _DAT_1830b8190 ^ uVar2 ^ 0x20;
  _DAT_1830b8448 = (_DAT_1830b8448 ^ uVar2) + 0x20 ^ 0xf050bbf30e467ab6;
  _DAT_1830b8420 = (_DAT_1830b8420 * -0x7541c2b5d0ed1749 ^ _DAT_1830b8448) + uVar2;
  _DAT_1830b80f8 = _DAT_1830b8420 ^ _DAT_1830b8448;
  _DAT_1830b81f0 = 0x20;
  _DAT_1830b8060 = func_0x00018502ebb0(_DAT_1830b85c8 + 0xffe0ff7bfb0021ffU ^ 0xe);
  uVar2 = (ulonglong)(~(uint)_DAT_1830b86b0 & 0x20);
  _DAT_1830b82f0 = _DAT_1830b8170 ^ uVar2 ^ 0x20;
  _DAT_1830b83e8 = (_DAT_1830b83e8 ^ uVar2) + 0x20 ^ 0x75a8ce6c5dee20b6;
  _DAT_1830b8020 = (_DAT_1830b8020 * -0x3beaeff40f3493 ^ _DAT_1830b83e8) + uVar2;
  _DAT_1830b83c0 = _DAT_1830b8020 ^ _DAT_1830b83e8;
  _DAT_1830b8390 = _DAT_1830b8330 ^ 0x20;
  _DAT_1830b8618 = 0x20;
  switch(uVar7 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 501ae7b (image 18501ae7b) =====

undefined8 FUN_18501ae7b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 504413a (image 18504413a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18504413a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18040ec18)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 5044146 (image 185044146) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185044146(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504416d (image 18504416d) =====

undefined4 * FUN_18504416d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 5044163 (image 185044163) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185044163(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_18040ec38)();
  return;
}



// ===== continuation @ rva 504416c (image 18504416c) =====

void FUN_18504416c(void)

{
  return;
}



// ===== continuation @ rva 5044223 (image 185044223) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185044223(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50441cf (image 1850441cf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850441cf(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5044f96 (image 185044f96) =====

void FUN_185044f96(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5044588 (image 185044588) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185044588(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50448da (image 1850448da) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1850448da(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 503fddb (image 18503fddb) =====

void FUN_18503fddb(void)

{
  return;
}



// ===== continuation @ rva 503fc1b (image 18503fc1b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18503fc1b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5041ffc (image 185041ffc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_185040214(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50408cc (image 1850408cc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_185040214(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50438c7 (image 1850438c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1850438c7(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  cVar1 = (**(code **)(*unaff_R14 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5043bcc (image 185043bcc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185043bcc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5043b82 (image 185043b82) =====

undefined8 thunk_FUN_185040395(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 5041f3e (image 185041f3e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_185040214(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5042411 (image 185042411) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185042411(void)

{
  char cVar1;
  code *in_RAX;
  
  cVar1 = (*in_RAX)();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5044395 (image 185044395) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185044395(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5044341 (image 185044341) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185044341(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5044a22 (image 185044a22) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185044a22(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000068 = 0;
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5044f88 (image 185044f88) =====

void FUN_185044f88(void)

{
  return;
}



// ===== continuation @ rva 5044e8d (image 185044e8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185044e8d(void)

{
  FUN_190ddfc90();
  (*_DAT_18040f0c8)();
  return;
}



// ===== continuation @ rva 5044f38 (image 185044f38) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185044f38(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18040ed68)();
  return;
}



// ===== continuation @ rva 50447b9 (image 1850447b9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850447b9(void)

{
  FUN_190de3220();
  (*_DAT_18040eef8)();
  return;
}



// ===== continuation @ rva 50479dd (image 1850479dd) =====

void FUN_1850479dd(void)

{
  return;
}



// ===== continuation @ rva 5045100 (image 185045100) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185045100(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18040f438)();
  return;
}



// ===== continuation @ rva 504670e (image 18504670e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18504670e(void)

{
  (*_DAT_18040ff48)();
  return;
}



// ===== continuation @ rva 5047982 (image 185047982) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185047982(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18040f658)();
  return;
}



// ===== continuation @ rva 5047309 (image 185047309) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185047309(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50479fc (image 1850479fc) =====

void FUN_1850479fc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5045cd1 (image 185045cd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185045cd1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50463ec (image 1850463ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850463ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18040ffb8)();
  return;
}



// ===== continuation @ rva 5045bcb (image 185045bcb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185045bcb(void)

{
  (*_DAT_18040ffc8)();
  return;
}



// ===== continuation @ rva 5046c30 (image 185046c30) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185046c30(void)

{
  longlong in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5045b73 (image 185045b73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185045b73(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18040f928)();
  return;
}



// ===== continuation @ rva 5045544 (image 185045544) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185045544(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_18040fcb8)();
  return;
}



// ===== continuation @ rva 504a46c (image 18504a46c) =====

void FUN_18504a46c(void)

{
  return;
}



// ===== continuation @ rva 504a2d5 (image 18504a2d5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18504a2d5(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R14 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504e47f (image 18504e47f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18504ef65(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x88))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504a30f (image 18504a30f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18504a30f(void)

{
  char cVar1;
  code *in_RAX;
  
  cVar1 = (*in_RAX)();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504ac84 (image 18504ac84) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18504ac84(void)

{
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504b409 (image 18504b409) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18504b409(void)

{
  int iVar1;
  char unaff_SIL;
  undefined4 unaff_00000034;
  longlong *in_stack_00000030;
  int iStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  iStack0000000000000050 = 7;
  uStack0000000000000058 = CONCAT44(unaff_00000034,(int)unaff_SIL);
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504c590 (image 18504c590) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18504c590(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504c2ee (image 18504c2ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18504c2ee(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504ead8 (image 18504ead8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18504ead8(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504ef09 (image 18504ef09) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18504ef09(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 504ee45 (image 18504ee45) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18504ee45(void)

{
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5053262 (image 185053262) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185053262(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 505320e (image 18505320e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18505320e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50540d5 (image 1850540d5) =====

void FUN_1850540d5(void)

{
  return;
}



// ===== continuation @ rva 5053596 (image 185053596) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185053596(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180412508)();
  return;
}



// ===== continuation @ rva 5053f92 (image 185053f92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185053f92(void)

{
  FUN_190dd72e0();
  (*_DAT_180412228)();
  return;
}



// ===== continuation @ rva 5053cfb (image 185053cfb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185053cfb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180412588)();
  return;
}



// ===== continuation @ rva 50540a1 (image 1850540a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850540a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180412398)();
  return;
}



// ===== continuation @ rva 5053444 (image 185053444) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185053444(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5053d95 (image 185053d95) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185053d95(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50540e4 (image 1850540e4) =====

void FUN_1850540e4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 50539ab (image 1850539ab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1850539ab(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 505396b (image 18505396b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18505396b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50561f6 (image 1850561f6) =====

void FUN_1850561f6(void)

{
  return;
}



// ===== continuation @ rva 505425c (image 18505425c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18505425c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180412de8)();
  return;
}



// ===== continuation @ rva 5055865 (image 185055865) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185055865(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184194800();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50549c0 (image 1850549c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850549c0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180412ed8)();
  return;
}



// ===== continuation @ rva 5055261 (image 185055261) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185055261(void)

{
  longlong in_stack_00000068;
  
  switch(in_stack_00000068 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5056d9a (image 185056d9a) =====

void FUN_185056d9a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5055414 (image 185055414) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185055414(void)

{
  char in_AL;
  
  switch(in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5056d34 (image 185056d34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185056d34(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180412eb8)();
  return;
}



// ===== continuation @ rva 5055f1f (image 185055f1f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185055f1f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50560fe (image 1850560fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1850560fe(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5054ed0 (image 185054ed0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185054ed0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180413038)();
  return;
}



// ===== continuation @ rva 50547c4 (image 1850547c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850547c4(void)

{
  FUN_190de3220();
  (*_DAT_1804130e8)();
  return;
}



// ===== continuation @ rva 50568fe (image 1850568fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850568fe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180412d28)();
  return;
}



// ===== continuation @ rva 5056455 (image 185056455) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185056455(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180412858)();
  return;
}



// ===== continuation @ rva 4fdbeb0 (image 184fdbeb0) =====

void FUN_184fdbeb0(void)

{
  return;
}



// ===== continuation @ rva 4fceec7 (image 184fceec7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fceec7(void)

{
  FUN_190ddce00();
  (*_DAT_1803f41a8)();
  return;
}



// ===== continuation @ rva 4fdbe9d (image 184fdbe9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fdbe9d(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_1803f4f68)();
  return;
}



// ===== continuation @ rva 4fdbc8c (image 184fdbc8c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184fdbc8c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fd5c1d (image 184fd5c1d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fd5c1d(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x299,0xf);
  (*_DAT_1803f4ad8)();
  return;
}



// ===== continuation @ rva 4fdbf1c (image 184fdbf1c) =====

void FUN_184fdbf1c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4fdbd5d (image 184fdbd5d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184fdbd5d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fd53e6 (image 184fd53e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fd53e6(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x570))();
  (*_DAT_1803f4778)();
  return;
}



// ===== continuation @ rva 4fda676 (image 184fda676) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fda676(void)

{
  FUN_190dd72e0();
  (*_DAT_1803f4dc8)();
  return;
}



// ===== continuation @ rva 4fd5a23 (image 184fd5a23) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184fd5a23(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fd57f4 (image 184fd57f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184fd57f4(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fe4d48 (image 184fe4d48) =====

void FUN_184fe4d48(void)

{
  return;
}



// ===== continuation @ rva 4fdc16d (image 184fdc16d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fdc16d(void)

{
  FUN_190ddce00();
  (*_DAT_1803f8078)();
  return;
}



// ===== continuation @ rva 4fe4db4 (image 184fe4db4) =====

void FUN_184fe4db4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4fe343c (image 184fe343c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184fe343c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fe03f0 (image 184fe03f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe03f0(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x568))(in_stack_00000030);
  rdtsc();
  (*_DAT_1803f8a58)();
  return;
}



// ===== continuation @ rva 4fe153e (image 184fe153e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe153e(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
  (*_DAT_1803f9428)();
  return;
}



// ===== continuation @ rva 4fe0ff6 (image 184fe0ff6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe0ff6(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x138))(in_stack_00000030);
  (*_DAT_1803f7728)();
  return;
}



// ===== continuation @ rva 4fe31a6 (image 184fe31a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe31a6(void)

{
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  (*_DAT_1803f8a98)();
  return;
}



// ===== continuation @ rva 4fe41e6 (image 184fe41e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe41e6(void)

{
  (*_DAT_1803f8cd8)();
  return;
}



// ===== continuation @ rva 4fe3974 (image 184fe3974) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184fe3974(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fe2a22 (image 184fe2a22) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe2a22(void)

{
  (*_DAT_1803f9828)();
  return;
}



// ===== continuation @ rva 4fe41c6 (image 184fe41c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe41c6(void)

{
  (*_DAT_1803f93f8)();
  return;
}



// ===== continuation @ rva 4fe335d (image 184fe335d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184fe335d(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fe1de4 (image 184fe1de4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe1de4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 503d86c (image 18503d86c) =====

void FUN_18503d86c(void)

{
  return;
}



// ===== continuation @ rva 502ed36 (image 18502ed36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18502ed36(void)

{
  FUN_190ddce00();
  (*_DAT_18040ae48)();
  return;
}



// ===== continuation @ rva 503d84a (image 18503d84a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18503d84a(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_18040af28)();
  return;
}



// ===== continuation @ rva 503653d (image 18503653d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18503653d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50399a5 (image 1850399a5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850399a5(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18040b0a8)();
  return;
}



// ===== continuation @ rva 5036dc2 (image 185036dc2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185036dc2(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190de3220(in_stack_00000038,&stack0x00000048,*_DAT_18301ee50 + 0x42e,*_DAT_18301ee50 + 0x441,
                0x14);
  (*_DAT_18040b448)();
  return;
}



// ===== continuation @ rva 503d7ce (image 18503d7ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18503d7ce(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5037672 (image 185037672) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185037672(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5039312 (image 185039312) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185039312(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180409b98)();
  return;
}



// ===== continuation @ rva 5036a4c (image 185036a4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185036a4c(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_184117d50(in_stack_00000038,in_stack_00000040);
  (**(code **)(*in_stack_00000038 + 0x570))(in_stack_00000038);
  (*_DAT_18040b998)();
  return;
}



// ===== continuation @ rva 5039fcd (image 185039fcd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185039fcd(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 503c86d (image 18503c86d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18503c86d(void)

{
  (*_DAT_18040aad8)();
  return;
}



// ===== continuation @ rva 503b67f (image 18503b67f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18503b67f(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5082c64 (image 185082c64) =====

void FUN_185082c64(void)

{
  return;
}



// ===== continuation @ rva 507d3c4 (image 18507d3c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18507d3c4(void)

{
  FUN_190ddce00();
  (*_DAT_180417488)();
  return;
}



// ===== continuation @ rva 5082d41 (image 185082d41) =====

void FUN_185082d41(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 508273e (image 18508273e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18508273e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5082775 (image 185082775) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185082775(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5082037 (image 185082037) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185082037(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1804175c8)();
  return;
}



// ===== continuation @ rva 5081d30 (image 185081d30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185081d30(void)

{
  (*_DAT_180417bd8)();
  return;
}



// ===== continuation @ rva 508137c (image 18508137c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18508137c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5081328 (image 185081328) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185081328(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5081537 (image 185081537) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185081537(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508196b (image 18508196b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18508196b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5082566 (image 185082566) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185082566(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180417af8)();
  return;
}



// ===== continuation @ rva 50823ed (image 1850823ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850823ed(void)

{
  FUN_190de3220();
  (*_DAT_180417d48)();
  return;
}



// ===== continuation @ rva 5082b95 (image 185082b95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185082b95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180417698)();
  return;
}



// ===== continuation @ rva 50865b4 (image 1850865b4) =====

void FUN_1850865b4(void)

{
  return;
}



// ===== continuation @ rva 5082f78 (image 185082f78) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185082f78(void)

{
  FUN_190ddce00();
  (*_DAT_180419d78)();
  return;
}



// ===== continuation @ rva 508935e (image 18508935e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18508935e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_180419388)();
  return;
}



// ===== continuation @ rva 5086bfc (image 185086bfc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185086bfc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5087ee8 (image 185087ee8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185087ee8(void)

{
  FUN_190dd9df0();
  (*_DAT_1804195b8)();
  return;
}



// ===== continuation @ rva 5087e6b (image 185087e6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185087e6b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180419e88)();
  return;
}



// ===== continuation @ rva 508796f (image 18508796f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18508796f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508938d (image 18508938d) =====

void FUN_18508938d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5086ee1 (image 185086ee1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185086ee1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508554d (image 18508554d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18508554d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18041a018)();
  return;
}



// ===== continuation @ rva 5085252 (image 185085252) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185085252(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180419fc8)();
  return;
}



// ===== continuation @ rva 5088598 (image 185088598) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185088598(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50867ad (image 1850867ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850867ad(void)

{
  (*_DAT_18041a118)();
  return;
}



// ===== continuation @ rva 508e406 (image 18508e406) =====

void FUN_18508e406(void)

{
  return;
}



// ===== continuation @ rva 50895a4 (image 1850895a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850895a4(void)

{
  FUN_190ddce00();
  (*_DAT_18041b358)();
  return;
}



// ===== continuation @ rva 508e472 (image 18508e472) =====

void FUN_18508e472(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 508c67d (image 18508c67d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18508c67d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508dc19 (image 18508dc19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18508dc19(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508e3e2 (image 18508e3e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18508e3e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18041b3e8)();
  return;
}



// ===== continuation @ rva 508e0a0 (image 18508e0a0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18508e0a0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508e34e (image 18508e34e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18508e34e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508cb82 (image 18508cb82) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18508cb82(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508d6c7 (image 18508d6c7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18508d6c7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 508e1f5 (image 18508e1f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18508e1f5(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5093430 (image 185093430) =====

void FUN_185093430(void)

{
  return;
}



// ===== continuation @ rva 508e69c (image 18508e69c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18508e69c(void)

{
  FUN_190ddce00();
  (*_DAT_18041c398)();
  return;
}



// ===== continuation @ rva 5093505 (image 185093505) =====

void FUN_185093505(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5093182 (image 185093182) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185093182(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  (*_DAT_18041c5a8)();
  return;
}



// ===== continuation @ rva 50932f3 (image 1850932f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850932f3(void)

{
  FUN_190ddfc90();
  (*_DAT_18041c378)();
  return;
}



// ===== continuation @ rva 5092add (image 185092add) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185092add(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5091422 (image 185091422) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185091422(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18041cad8)();
  return;
}



// ===== continuation @ rva 5093219 (image 185093219) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185093219(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50933f7 (image 1850933f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850933f7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18041c7d8)();
  return;
}



// ===== continuation @ rva 50932d2 (image 1850932d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1850932d2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5091db1 (image 185091db1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185091db1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50936f6 (image 1850936f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850936f6(void)

{
  FUN_190dd72e0();
  (*_DAT_18041d988)();
  return;
}



// ===== continuation @ rva 5093683 (image 185093683) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185093683(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50937d6 (image 1850937d6) =====

void FUN_1850937d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 50936e1 (image 1850936e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1850936e1(void)

{
  char in_AL;
  
  switch(in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50937ce (image 1850937ce) =====

void FUN_1850937ce(void)

{
  return;
}



// ===== continuation @ rva 509371e (image 18509371e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18509371e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50937bd (image 1850937bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850937bd(void)

{
  (*_DAT_18041d968)();
  return;
}



// ===== continuation @ rva 5093772 (image 185093772) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185093772(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 509373f (image 18509373f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18509373f(void)

{
  FUN_190dd9df0();
  (*_DAT_18041d9a8)();
  return;
}



// ===== continuation @ rva 50938f6 (image 1850938f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850938f6(void)

{
  FUN_190dd72e0();
  (*_DAT_18041dab8)();
  return;
}



// ===== continuation @ rva 5093883 (image 185093883) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185093883(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50939ce (image 1850939ce) =====

void FUN_1850939ce(void)

{
  return;
}



// ===== continuation @ rva 5093996 (image 185093996) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185093996(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18041da78)();
  return;
}



// ===== continuation @ rva 50938bc (image 1850938bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850938bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18041da88)();
  return;
}



// ===== continuation @ rva 50939d6 (image 1850939d6) =====

void FUN_1850939d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 50939bd (image 1850939bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850939bd(void)

{
  (*_DAT_18041da58)();
  return;
}



// ===== continuation @ rva 50938e1 (image 1850938e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1850938e1(void)

{
  char in_AL;
  
  switch(in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5093972 (image 185093972) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185093972(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5095297 (image 185095297) =====

void FUN_185095297(void)

{
  return;
}



// ===== continuation @ rva 5093afa (image 185093afa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185093afa(void)

{
  FUN_190de3220();
  (*_DAT_18041de28)();
  return;
}



// ===== continuation @ rva 5093b9c (image 185093b9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185093b9c(void)

{
  undefined8 in_stack_00000090;
  undefined8 uStack0000000000000098;
  
  uStack0000000000000098 = in_stack_00000090;
  FUN_190dd72e0();
  (*_DAT_18041e128)();
  return;
}



// ===== continuation @ rva 5094cc4 (image 185094cc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185094cc4(void)

{
  FUN_190de3220();
  (*_DAT_18041e1d8)();
  return;
}



// ===== continuation @ rva 5094e17 (image 185094e17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185094e17(void)

{
  FUN_190ddfc90();
  (*_DAT_18041dc28)();
  return;
}



// ===== continuation @ rva 5094e6e (image 185094e6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185094e6e(void)

{
  longlong in_stack_00000090;
  
  switch(in_stack_00000090 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50949cd (image 1850949cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850949cd(void)

{
  FUN_190ddfc90();
  (*_DAT_18041e0b8)();
  return;
}



// ===== continuation @ rva 509436c (image 18509436c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18509436c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_18041de98)();
  return;
}



// ===== continuation @ rva 5094309 (image 185094309) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185094309(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_18041dcf8)();
  return;
}



// ===== continuation @ rva 4feb666 (image 184feb666) =====

void FUN_184feb666(void)

{
  return;
}



// ===== continuation @ rva 4fe4fbc (image 184fe4fbc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fe4fbc(void)

{
  FUN_190ddce00();
  (*_DAT_1803fa3b8)();
  return;
}



// ===== continuation @ rva 4feb470 (image 184feb470) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184feb470(void)

{
  FUN_190dd72e0();
  (*_DAT_1803fa2d8)();
  return;
}



// ===== continuation @ rva 4feaacd (image 184feaacd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184feaacd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x538))();
  FUN_184117d80();
  (*_DAT_1803fa518)();
  return;
}



// ===== continuation @ rva 4feaa76 (image 184feaa76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184feaa76(void)

{
  FUN_190ddfc90();
  (*_DAT_1803fa688)();
  return;
}



// ===== continuation @ rva 4feb65e (image 184feb65e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184feb65e(void)

{
  (*_DAT_1803fa5d8)();
  return;
}



// ===== continuation @ rva 4feb584 (image 184feb584) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184feb584(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4feb1b8 (image 184feb1b8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184feb1b8(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4feabe8 (image 184feabe8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184feabe8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1803fa4b8)();
  return;
}



// ===== continuation @ rva 4feab27 (image 184feab27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184feab27(void)

{
  FUN_190dd72e0();
  (*_DAT_1803fa578)();
  return;
}



// ===== continuation @ rva 4ff2dc6 (image 184ff2dc6) =====

void FUN_184ff2dc6(void)

{
  return;
}



// ===== continuation @ rva 4feb905 (image 184feb905) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184feb905(void)

{
  FUN_190ddce00();
  (*_DAT_1803fd5b8)();
  return;
}



// ===== continuation @ rva 4ff2e63 (image 184ff2e63) =====

void FUN_184ff2e63(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4ff03e0 (image 184ff03e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184ff03e0(void)

{
  char in_AL;
  
  switch(in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff27d2 (image 184ff27d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184ff27d2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fefd2d (image 184fefd2d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184fefd2d(void)

{
  char in_AL;
  
  switch(in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4feea1a (image 184feea1a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184feea1a(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4feeb0e (image 184feeb0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184feeb0e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4fef03d (image 184fef03d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184fef03d(void)

{
  FUN_190dd72e0();
  (*_DAT_1803fd278)();
  return;
}



// ===== continuation @ rva 4ff1f9a (image 184ff1f9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184ff1f9a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff9a24 (image 184ff9a24) =====

void FUN_184ff9a24(void)

{
  return;
}



// ===== continuation @ rva 4ff309f (image 184ff309f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff309f(void)

{
  FUN_190ddce00();
  (*_DAT_1803fe318)();
  return;
}



// ===== continuation @ rva 4ff981f (image 184ff981f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff981f(void)

{
  FUN_190dd72e0();
  (*_DAT_1803fe3f8)();
  return;
}



// ===== continuation @ rva 4ff9a90 (image 184ff9a90) =====

void FUN_184ff9a90(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4ff944d (image 184ff944d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184ff944d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff98bf (image 184ff98bf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff98bf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1803fe458)();
  return;
}



// ===== continuation @ rva 4ff8cc7 (image 184ff8cc7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff8cc7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1803fe1c8)();
  return;
}



// ===== continuation @ rva 4ff9792 (image 184ff9792) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff9792(void)

{
  FUN_190ddfc90();
  (*_DAT_1803fe268)();
  return;
}



// ===== continuation @ rva 4ff3155 (image 184ff3155) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff3155(void)

{
  (*_DAT_1803fe2c8)();
  return;
}



// ===== continuation @ rva 4ff8ce7 (image 184ff8ce7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff8ce7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff9c5b (image 184ff9c5b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff9c5b(void)

{
  FUN_190dd72e0();
  (*_DAT_1803ffc98)();
  return;
}



// ===== continuation @ rva 4ff9be8 (image 184ff9be8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff9be8(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff9e87 (image 184ff9e87) =====

void FUN_184ff9e87(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4ff9cd7 (image 184ff9cd7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184ff9cd7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff9e7d (image 184ff9e7d) =====

void FUN_184ff9e7d(void)

{
  return;
}



// ===== continuation @ rva 4ff9de1 (image 184ff9de1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184ff9de1(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff9c83 (image 184ff9c83) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184ff9c83(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff9e49 (image 184ff9e49) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff9e49(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1803ffd78)();
  return;
}



// ===== continuation @ rva 4ff9df7 (image 184ff9df7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff9df7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4ff9ca4 (image 184ff9ca4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ff9ca4(void)

{
  FUN_190dd9df0();
  (*_DAT_1803ffc78)();
  return;
}



// ===== continuation @ rva 4ff9dbd (image 184ff9dbd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184ff9dbd(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50056f3 (image 1850056f3) =====

void FUN_1850056f3(void)

{
  return;
}



// ===== continuation @ rva 4ffa015 (image 184ffa015) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184ffa015(void)

{
  FUN_190ddce00();
  (*_DAT_180401198)();
  return;
}



// ===== continuation @ rva 500587d (image 18500587d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18500587d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180400e38)();
  return;
}



// ===== continuation @ rva 5002664 (image 185002664) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185002664(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 500367a (image 18500367a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18500367a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1803ffe28)();
  return;
}



// ===== continuation @ rva 5001697 (image 185001697) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185001697(void)

{
  FUN_190dd72e0();
  (*_DAT_1804002e8)();
  return;
}



// ===== continuation @ rva 5005a0a (image 185005a0a) =====

void FUN_185005a0a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 50036a9 (image 1850036a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1850036a9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50023b6 (image 1850023b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850023b6(void)

{
  (*_DAT_1804015a8)();
  return;
}



// ===== continuation @ rva 5002280 (image 185002280) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185002280(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5001796 (image 185001796) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185001796(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 50057e3 (image 1850057e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1850057e3(void)

{
  (*_DAT_1804018b8)();
  return;
}



// ===== continuation @ rva 5000d48 (image 185000d48) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185000d48(void)

{
  char in_AL;
  
  switch(in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



