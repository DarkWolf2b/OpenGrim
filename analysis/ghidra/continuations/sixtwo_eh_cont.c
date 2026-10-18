// ===== continuation @ rva d317c29 (image 18d317c29) =====

void FUN_18d317c29(void)

{
  return;
}



// ===== continuation @ rva d2fc77b (image 18d2fc77b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d2fc7d1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d2fc77b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d3008b7 (image 18d3008b7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d30092b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d3008b7(undefined8 param_1,undefined4 param_2,int param_3)

{
  longlong *unaff_RSI;
  int iStack0000000000000048;
  int iStack0000000000000050;
  undefined4 uStack00000000000000b4;
  int iStack00000000000000b8;
  
  iStack0000000000000050 = param_3 + 8;
  iStack0000000000000048 = param_3;
  uStack00000000000000b4 = param_2;
  iStack00000000000000b8 = iStack0000000000000050;
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d317646 (image 18d317646) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d317646(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_000000c8;
  
  uStack0000000000000040 = in_stack_000000c8;
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



// ===== continuation @ rva d30fdd8 (image 18d30fdd8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d30fdd8(undefined4 param_1,uint param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uStack0000000000000048;
  undefined4 uStack00000000000000b4;
  
  auVar6._8_8_ = _UNK_1801a22d8;
  auVar6._0_8_ = (ulonglong)param_2 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_1821b0c70,_DAT_1800170c0);
  uVar3 = auVar7._8_8_ + auVar7._0_8_;
  uVar2 = uVar3 + _DAT_183356678;
  if (auVar7._4_4_ < 0) {
    uVar2 = _DAT_183356890 ^ uVar3;
  }
  uStack0000000000000048 = param_2;
  uStack00000000000000b4 = param_1;
  _DAT_183356638 = func_0x00018d317e10(SUB161(auVar6 ^ _DAT_1821b0c70,5) ^ uVar2);
  uVar4 = _DAT_1801a1250 ^ param_2;
  uVar10 = param_2 & _DAT_1801a1250;
  uVar8 = param_2 | _DAT_1801a1250;
  uVar2 = ((ulonglong)param_2 * 8 ^ _DAT_183356638) & 0xfffffffffc000000;
  lVar9 = ((ulonglong)_DAT_1821b0d10 * (ulonglong)param_2 << 0x20) +
          (ulonglong)_DAT_1821b0d00 * (ulonglong)param_2;
  lVar5 = ((ulonglong)uVar4 * (ulonglong)_DAT_1821b0d90 << 0x20) +
          (ulonglong)_DAT_1821b0d80 * (ulonglong)uVar4 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_1821b0d70 << 0x20) +
          (ulonglong)_DAT_1821b0d60 * (ulonglong)uVar8 +
          ((ulonglong)uVar10 * (ulonglong)_DAT_1821b0d50 << 0x20 |
          (ulonglong)_DAT_1821b0d40 * (ulonglong)uVar10) +
          ((ulonglong)param_2 * (ulonglong)_DAT_1821b0d30 << 0x20) +
          (ulonglong)_DAT_1821b0d20 * (ulonglong)param_2 + lVar9;
  _DAT_183356848 =
       ((((ulonglong)_DAT_1821b0cf0 * (ulonglong)uVar4 << 0x20) +
         (ulonglong)_DAT_1821b0ce0 * (ulonglong)uVar4 +
         ((ulonglong)_DAT_1821b0cd0 * (ulonglong)uVar8 << 0x20) +
         (ulonglong)_DAT_1821b0cc0 * (ulonglong)uVar8 +
         ((ulonglong)_DAT_1821b0cb0 * (ulonglong)uVar10 << 0x20 |
         (ulonglong)_DAT_1821b0ca0 * (ulonglong)uVar10) +
         ((ulonglong)_DAT_1821b0c90 * (ulonglong)param_2 << 0x20) +
         (ulonglong)_DAT_1821b0c80 * (ulonglong)param_2 + lVar9) - lVar5) + 0x62b516a981aadb0;
  _DAT_183356778 = _DAT_183356380 ^ uVar2 ^ _DAT_183356848;
  _DAT_183356400 = (_DAT_183356400 ^ uVar2) + _DAT_183356848 ^ 0x23dd4ba40b48eda9;
  _DAT_1833562d0 = (_DAT_1833562d0 * 0x23f11f78f9c78db9 ^ _DAT_183356400) + uVar2;
  _DAT_1833566d8 = _DAT_1833562d0 ^ _DAT_183356400;
  _DAT_183356848 = _DAT_183356848 & 0xffffffff;
  FUN_190dd72e0(lVar5,*_DAT_18301ee50 + 0x2e9,0x12);
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



// ===== continuation @ rva d317c95 (image 18d317c95) =====

void FUN_18d317c95(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva d2fcb2a (image 18d2fcb2a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d2fcb62 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d2fcb2a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1b0))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d2fcaec (image 18d2fcaec) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d2fcb22 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d2fcaec(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d30fc07 (image 18d30fc07) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d30fc07(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000050;
  undefined8 in_stack_000000b0;
  int in_stack_000000c0;
  undefined8 uStack0000000000000128;
  
  uStack0000000000000128 = in_stack_00000050;
  (**(code **)(*unaff_RSI + 0x6a0))();
  switch(in_stack_000000b0._4_4_ < in_stack_000000c0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d3175fb (image 18d3175fb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d3175fb(void)

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



// ===== continuation @ rva d2fe401 (image 18d2fe401) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d2fe418 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d2fe401(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d3002a3 (image 18d3002a3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d3002e9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d3002a3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d2c3516 (image 18d2c3516) =====

void FUN_18d2c3516(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x90) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x00018d2c3548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821a5a70 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva d2c34c3 (image 18d2c34c3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d2c34f9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d2c34c3(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d2d800e (image 18d2d800e) =====

undefined8 FUN_18d2d800e(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x2e8))();
  cVar1 = (**(code **)(*unaff_R15 + 0x720))();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x60);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== continuation @ rva d2d7f8a (image 18d2d7f8a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2d7f8a(void)

{
  char cVar1;
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R15 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2ccd41 (image 18d2ccd41) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2ccd41(ulonglong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  uint unaff_EDI;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar3 = (in_RAX ^ _DAT_1821a5c20) + param_1 + 0x1c0e229d;
  uVar6 = (param_1 ^ _UNK_1821a5c28) + in_RAX + 0x9001b4c1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ in_RAX ^ _DAT_1821a5c20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ param_1 ^ _UNK_1821a5c28;
  _DAT_183354940 =
       func_0x00018d2ed900((uVar6 << 0x1d | uVar6 >> 0x23) - (in_RAX + 0x9001b4c1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (param_1 + 0x1c0e229d));
  _DAT_183354b40 = (_DAT_183354b40 ^ _DAT_1833549e8) + 0x982db5f9 ^ 0x3b36608f19b00a8d;
  _DAT_183354c08 = (_DAT_183354c08 * 0x3077a5ae969b0f7 ^ _DAT_183354b40) + _DAT_1833549e8;
  _DAT_183354c00 = _DAT_183354c08 ^ _DAT_183354b40;
  _DAT_183354bf8 = 0x982db5f9;
  uVar3 = (~_DAT_183354978 + 0x230be957) *
          ((_DAT_183354ce0 ^ 0x2cb4823a) + (ulonglong)((uint)_DAT_183354ce0 & 0x2cb4823a) * 2);
  uVar3 = (uVar3 | _DAT_183354ae8) + (uVar3 & _DAT_183354ae8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354a58 = func_0x00018d2ed900((uVar3 | 0xfbf6b6c) + (ulonglong)((uint)uVar3 & 0xfbf6b6c));
  uVar3 = (_DAT_183354a58 ^ 0xa896a11f) & 0x1fffffffffff;
  _DAT_183354ca0 = (_DAT_183354ca0 ^ uVar3) + 0x8b9d4849 ^ 0x2d2056be46585795;
  _DAT_183354ac0 = (_DAT_183354ac0 * -0x3846c98bbd02adef ^ _DAT_183354ca0) + uVar3;
  _DAT_183354a40 = _DAT_183354ac0 ^ _DAT_183354ca0;
  _DAT_183354cf0 = 0x8b9d4849;
  uVar3 = (_DAT_183354a58 ^ _DAT_1821a5c30) + _DAT_183354b10 + 0x84222325;
  uVar6 = (_DAT_183354b10 ^ _UNK_1821a5c38) + _DAT_183354a58 + 0x5e76bac0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354a58 ^ _DAT_1821a5c30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183354b10 ^ _UNK_1821a5c38;
  _DAT_183354a90 =
       func_0x00018d2ed900((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183354a58 + 0x5e76bac0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354b10 + 0x84222325));
  uVar3 = _DAT_183354a90 << 0x35 | _DAT_183354a90 >> 0xb;
  _DAT_183354b40 = (_DAT_183354b40 ^ uVar3) - 0x5e76bac0 ^ 0x2abd105b225b2686;
  _DAT_183354a10 = (_DAT_183354a10 * -0x2d47e9344080cbb9 ^ _DAT_183354b40) + uVar3;
  _DAT_183354a98 = _DAT_183354a10 ^ _DAT_183354b40;
  _DAT_183354a48 = 0xa1894540;
  uVar3 = (_DAT_1821a5c40 ^ 0xa1894540) + _DAT_183354a88 + 0x7bdddcdb;
  uVar6 = (_DAT_183354a88 ^ _UNK_1821a5c48) + 0x100000000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1821a5c40 ^ 0xa1894540;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183354a88 ^ _UNK_1821a5c48;
  _DAT_183354940 =
       func_0x00018d2ed900((uVar6 << 0x1d | uVar6 >> 0x23) - 0x100000000 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354a88 + 0x7bdddcdb));
  uVar3 = (_DAT_183354940 ^ 0xff000000) & 0xffffffffff000000;
  uVar6 = uVar3 >> 1 | uVar3;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  _DAT_183354a38 = _DAT_183354b58 ^ uVar3 ^ 0x15e76babe;
  _DAT_183354a50 =
       (_DAT_183354a50 * -0x6a1aa0cb01459fc5 ^
       (_DAT_183354ab0 ^ uVar3) + 0x15e76babe ^ 0xbcffdea3f8bbb6a7) + uVar3;
  _DAT_183354a48 = _DAT_183354cf8 ^ 0x15e76babe;
  _DAT_183354ab0 = 0x5e76babe;
  uVar3 = (~_DAT_183354b20 + 0xa1894541) *
          ((_DAT_183354a50 ^ 0xda54999b) + (ulonglong)((uint)_DAT_183354a50 & 0xda54999b) * 2);
  uVar3 = (uVar3 | _DAT_183354a98) + (uVar3 & _DAT_183354a98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354a08 = func_0x00018d2ed900((uVar3 | 0x7bdddcdb) + (ulonglong)((uint)uVar3 & 0x7bdddcdb))
  ;
  uVar3 = (_DAT_183354a08 ^ 0xfffe0000) & 0x1ffffffe0000;
  _DAT_183354ac0 = _DAT_183354cf0 ^ uVar3 ^ 0xfffffffe;
  _DAT_183354b58 = (_DAT_183354b58 ^ uVar3) + 0xfffffffe ^ 0x79786d5f5f456bfc;
  _DAT_183354aa8 = (_DAT_183354aa8 * -0x44774b604a233149 ^ _DAT_183354b58) + uVar3;
  _DAT_183354cb8 = _DAT_183354aa8 ^ _DAT_183354b58;
  _DAT_183354a68 = 0xfffffffe;
  uVar3 = (~_DAT_183354c80 + 0xdb6850ca) *
          ((_DAT_183354c38 ^ 0x84222325) + (ulonglong)((uint)_DAT_183354c38 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183354b38) + (uVar3 & _DAT_183354b38);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354980 = func_0x00018d2ed900((uVar3 | 0x5f4a73ec) + (ulonglong)((uint)uVar3 & 0x5f4a73ec))
  ;
  uVar3 = (_DAT_183354980 << 0x35 | _DAT_183354980 >> 0xb) ^ 0xdb6850c9;
  _DAT_183354bb0 = (_DAT_183354bb0 ^ uVar3) - 0xdb6850c9 ^ 0xb9c84cb38011e73b;
  _DAT_183354a18 = (_DAT_183354a18 * 0x399960daa53a7453 ^ _DAT_183354bb0) + uVar3;
  _DAT_183354ae8 = _DAT_183354a18 ^ _DAT_183354bb0;
  _DAT_183354c90 = 0x2497af37;
  uVar3 = (_DAT_1833549c8 ^ _DAT_1821a5c50) + _DAT_183354cf8 + 0x84222325;
  uVar6 = (_DAT_183354cf8 ^ _UNK_1821a5c58) + _DAT_1833549c8 + 0xa2482c30;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833549c8 ^ _DAT_1821a5c50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183354cf8 ^ _UNK_1821a5c58;
  _DAT_183354ca8 =
       func_0x00018d2ed900((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833549c8 + 0xa2482c30) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354cf8 + 0x84222325));
  uVar3 = ((_DAT_183354ca8 ^ 0xa0000000) >> 0x1d) * -0x55b7c22a60000000;
  _DAT_183354bb8 = (_DAT_183354bb8 ^ uVar3) - 0xa2482c30 ^ 0xb4f0a997196b0e5f;
  _DAT_183354ab0 = (_DAT_183354ab0 * 0x5633924b8a7df19 ^ _DAT_183354bb8) + uVar3;
  _DAT_183354a10 = _DAT_183354ab0 ^ _DAT_183354bb8;
  _DAT_183354c58 = 0x5db7d3d0;
  uVar3 = (~_DAT_183354988 + 0xa2482c31) *
          ((_DAT_183354ca0 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_183354ca0 & 0x7bdddcdb) * 2);
  uVar3 = (uVar3 | _DAT_183354910) + (uVar3 & _DAT_183354910);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354b00 = func_0x00018d2ed900((uVar3 | 0xd995f0eb) + (ulonglong)((uint)uVar3 & 0xd995f0eb))
  ;
  uVar3 = (ulonglong)((uint)_DAT_183354b00 & 0xffffff80 ^ 0x5db7d3ce);
  _DAT_183354bb8 = _DAT_183354c30 ^ uVar3 ^ 0x1a2482c2e;
  _DAT_183354a88 = (_DAT_183354a88 ^ uVar3) + 0x1a2482c2e ^ 0x83670ab3f5243506;
  _DAT_183354a18 = (_DAT_183354a18 * -0x100a9eeb8e08d46b ^ _DAT_183354a88) + uVar3;
  _DAT_183354c10 = _DAT_183354a18 ^ _DAT_183354a88;
  _DAT_183354cf8 = 0xa2482c2e;
  uVar3 = (_DAT_183354bc0 ^ _DAT_1821a5c60) + _DAT_1833549a8 + 0x266a0f0b;
  uVar6 = (_DAT_1833549a8 ^ _UNK_1821a5c68) + _DAT_183354bc0 + 0x5db7d3d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354bc0 ^ _DAT_1821a5c60;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833549a8 ^ _UNK_1821a5c68;
  _DAT_183354b68 =
       func_0x00018d2ed900((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183354bc0 + 0x5db7d3d0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833549a8 + 0x266a0f0b));
  uVar3 = _DAT_183354b68 ^ 0xa2482c2e;
  _DAT_183354c20 = _DAT_183354cd0 ^ uVar3 ^ 0xfffffffe;
  _DAT_183354a10 = (_DAT_183354a10 ^ uVar3) + 0xfffffffe ^ 0x7ee87cc6f13d4aac;
  _DAT_183354c40 = (_DAT_183354c40 * -0x7490a285d1ccf277 ^ _DAT_183354a10) + uVar3;
  _DAT_183354a20 = _DAT_183354c40 ^ _DAT_183354a10;
  _DAT_183354938 = 0xfffffffe;
  uVar3 = (~_DAT_183354b08 + 0x8b9d484a) *
          ((_DAT_183354930 ^ 0x1c0f96dc) + (ulonglong)((uint)_DAT_183354930 & 0x1c0f96dc) * 2);
  uVar3 = (uVar3 | _DAT_183354908) + (uVar3 & _DAT_183354908);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354908 = func_0x00018d2ed900((uVar3 | 0x9792de95) + (ulonglong)((uint)uVar3 & 0x9792de95))
  ;
  _DAT_183354a50 = (_DAT_183354a50 ^ _DAT_183354908 ^ 0x982db5f9) + 0x13b0fdb0 ^ 0x9cbf2ade3cfc49b8;
  _DAT_183354b90 =
       (_DAT_183354b90 * -0x4b58b3ee78947ed5 ^ _DAT_183354a50) + (_DAT_183354908 ^ 0x982db5f9);
  _DAT_1833549a0 = _DAT_183354b90 ^ _DAT_183354a50;
  _DAT_183354c50 = 0x13b0fdb0;
  uVar3 = (~_DAT_1833549b0 + 0x101a0093) *
          ((_DAT_183354a20 ^ 0x9792de95) + (ulonglong)((uint)_DAT_183354a20 & 0x9792de95) * 2);
  uVar3 = (uVar3 | _DAT_183354a18) + (uVar3 & _DAT_183354a18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354b60 = func_0x00018d2ed900((uVar3 | 0x8788de07) + (ulonglong)((uint)uVar3 & 0x8788de07))
  ;
  uVar3 = (_DAT_183354b60 & 0x7fffffffffffffff ^ 0x101a0092) << 0x11 |
          (_DAT_183354b60 & 0x7fffffffffffffff) >> 0x2f;
  _DAT_183354b98 = _DAT_183354b38 ^ uVar3 ^ 0x23cafe42;
  _DAT_183354930 = (_DAT_183354930 ^ uVar3) + 0x23cafe42 ^ 0xb71e30d7f1113de2;
  _DAT_183354940 = (_DAT_183354940 * 0x4861d452b637d551 ^ _DAT_183354930) + uVar3;
  _DAT_1833549f0 = _DAT_183354940 ^ _DAT_183354930;
  _DAT_183354b50 = 0x23cafe42;
  _DAT_183354c08 = func_0x00018d2ed900(_DAT_183354a90 ^ 0xffdd007be4ffe1ec);
  _DAT_1833549e0 = _DAT_183354c08 << 0x2f | _DAT_183354c08 >> 0x11;
  _DAT_183354c30 = _DAT_183354c30 ^ _DAT_1833549e0 ^ 0x1accdbd09101a852;
  _DAT_183354c78 = (_DAT_183354c78 * 0x3de07c8f08a703b7 ^ _DAT_183354c30) + _DAT_1833549e0;
  _DAT_183354c00 = _DAT_183354c78 ^ _DAT_183354c30;
  _DAT_183354b20 = 0;
  uVar3 = (_DAT_183354af8 ^ 0x7bdddcdb) + _DAT_183354c60 + 0x7bdddcdb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354af8 ^ 0x7bdddcdb;
  uVar6 = ((_DAT_183354c60 + _DAT_183354af8) * 0x2000 | _DAT_183354c60 + _DAT_183354af8 >> 0x33) ^
          _DAT_183354c60;
  _DAT_183354948 =
       func_0x00018d2ed900((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183354af8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354c60 + 0x7bdddcdb));
  _DAT_183354b08 = _DAT_183354a10 ^ _DAT_183354948 ^ 0xfffffffe;
  _DAT_183354aa8 = (_DAT_183354aa8 ^ _DAT_183354948) + 0xfffffffe ^ 0x7f5bcf80e70a964b;
  _DAT_183354c08 = (_DAT_183354c08 * -0x14224aedce09d371 ^ _DAT_183354aa8) + _DAT_183354948;
  _DAT_183354af8 = _DAT_183354c08 ^ _DAT_183354aa8;
  _DAT_183354be8 = 0xfffffffe;
  uVar3 = (~_DAT_183354900 + 0x100000000) *
          ((_DAT_183354930 ^ 0x1c0f96dc) + (ulonglong)((uint)_DAT_183354930 & 0x1c0f96dc) * 2);
  uVar3 = (uVar3 | _DAT_183354c18) + (uVar3 & _DAT_183354c18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354978 = func_0x00018d2ed900((uVar3 | 0xe3f06923) + (ulonglong)((uint)uVar3 & 0xe3f06923))
  ;
  uVar6 = _DAT_183354978 ^ 0x982db5f867d24a07;
  uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar6) <<
          0x2b | uVar6 >> 0x15;
  uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  _DAT_183354af8 = (_DAT_183354af8 ^ uVar3) + 0x67d24a06 ^ 0xa56c5abea7b7cb6a;
  _DAT_183354b80 = (_DAT_183354b80 * -0x2883cb0efb6a3d85 ^ _DAT_183354af8) + uVar3;
  _DAT_183354cf0 = _DAT_183354b80 ^ _DAT_183354af8;
  _DAT_1833549c0 = 0x67d24a06;
  uVar3 = (_DAT_183354bd0 ^ _DAT_1821a5c70) + _DAT_1833549d8 + 0x1c0f96dc;
  uVar6 = (_DAT_1833549d8 ^ _UNK_1821a5c78) + _DAT_183354bd0 + 0x67d24a06;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354bd0 ^ _DAT_1821a5c70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833549d8 ^ _UNK_1821a5c78;
  _DAT_183354ae0 =
       func_0x00018d2ed900((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183354bd0 + 0x67d24a06) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833549d8 + 0x1c0f96dc));
  uVar3 = _DAT_183354ae0 >> 1 | _DAT_183354ae0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183354ae0;
  _DAT_183354b68 = _DAT_183354b68 ^ uVar3 ^ 0x1eb61db133955cfd;
  _DAT_183354a00 = (_DAT_183354a00 * 0x51bf9551e85b2b47 ^ _DAT_183354b68) + uVar3;
  _DAT_1833549c0 = _DAT_183354a00 ^ _DAT_183354b68;
  _DAT_183354ab0 = 0;
  uVar3 = (~_DAT_183354910 + 0x982c01b9) *
          ((_DAT_183354928 ^ 0x1c0e229d) + (ulonglong)((uint)_DAT_183354928 & 0x1c0e229d) * 2);
  uVar3 = (uVar3 | _DAT_183354c90) + (uVar3 & _DAT_183354c90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354c18 = func_0x00018d2ed900((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_183354a60 = _DAT_183354a60 ^ _DAT_183354c18 & 0x7fffffffffffffff ^ 0x606d71fb3ba8b3bf;
  _DAT_183354a18 =
       (_DAT_183354a18 * -0x6a29ce76512ca2c7 ^ _DAT_183354a60) +
       (_DAT_183354c18 & 0x7fffffffffffffff);
  _DAT_183354b40 = _DAT_183354a18 ^ _DAT_183354a60;
  auVar4._8_8_ = _UNK_180333d68;
  auVar4._0_8_ = (ulonglong)unaff_EDI ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_1821a5c80,_DAT_1800170c0);
  _DAT_183354a68 = 0;
  uVar6 = auVar5._8_8_ + auVar5._0_8_;
  uVar3 = uVar6 + _DAT_183354a00;
  if (auVar5._4_4_ < 0) {
    uVar3 = _DAT_183354af8 ^ uVar6;
  }
  _DAT_183354ba0 = func_0x00018d2ed900(SUB161(auVar4 ^ _DAT_1821a5c80,5) ^ uVar3);
  uVar3 = (_DAT_183354ba0 & 0x3ffffffffffffff) << 5 | _DAT_183354ba0 >> 0x3b;
  uVar2 = unaff_EDI ^ 0xffffffff;
  _DAT_183354cf0 =
       ((ulonglong)_DAT_1821a5c90 * (ulonglong)uVar2 + _DAT_1821a5cc0 << 0x20) +
       (ulonglong)_DAT_1821a5cb0 * (ulonglong)uVar2 +
       (ulonglong)unaff_EDI * (ulonglong)_DAT_1821a5ca0 +
       ((ulonglong)unaff_EDI * (ulonglong)_DAT_1821a5c90 << 0x20) +
       (-(((ulonglong)uVar2 * (ulonglong)_DAT_1821a5d80 + _DAT_1821a5d90 << 0x20) +
         (ulonglong)_DAT_1821a5d70 * (ulonglong)uVar2) -
       (((ulonglong)(_DAT_18011bc70 ^ unaff_EDI) * (ulonglong)_DAT_1821a5d60 << 0x20) +
        (ulonglong)_DAT_1821a5d50 * (ulonglong)(_DAT_18011bc70 ^ unaff_EDI) +
        ((ulonglong)(unaff_EDI | _DAT_18011bc70) * (ulonglong)_DAT_1821a5d40 << 0x20) +
        (ulonglong)_DAT_1821a5d30 * (ulonglong)(unaff_EDI | _DAT_18011bc70) +
       ((ulonglong)(unaff_EDI & _DAT_18011bc70) * (ulonglong)_DAT_1821a5d20 << 0x20) +
       (ulonglong)_DAT_1821a5d10 * (ulonglong)(unaff_EDI & _DAT_18011bc70) +
       ((ulonglong)unaff_EDI * (ulonglong)_DAT_1821a5d00 << 0x20) +
       (ulonglong)_DAT_1821a5cf0 * (ulonglong)unaff_EDI)) + 0x8e3cdd4ca5aec7ac;
  _DAT_183354ca0 = _DAT_1833549f0 ^ uVar3 ^ _DAT_183354cf0;
  _DAT_183354b10 = (_DAT_183354b10 ^ uVar3) + _DAT_183354cf0 ^ 0x1b09653cbb60f504;
  _DAT_183354948 = (_DAT_183354948 * 0x52d4ba7090f5a06f ^ _DAT_183354b10) + uVar3;
  _DAT_183354ab0 = _DAT_183354948 ^ _DAT_183354b10;
  *(int *)(unaff_RBP + -0xc) = (int)_DAT_183354cf0;
  _DAT_183354cf0 = _DAT_183354cf0 & 0xffffffff;
  *(undefined4 *)(unaff_RBP + 0x60) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x40);
  *(undefined4 *)(unaff_RBP + 0x70) = 0;
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x90) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x90),*(undefined8 *)(unaff_RBP + 0x40));
  switch(*(int *)(unaff_RBP + 0x70) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x70)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2c47d6 (image 18d2c47d6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2c47d6(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 unaff_XMM7 [16];
  uint unaff_XMM8_Da;
  uint uVar9;
  undefined1 auVar10 [16];
  uint unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  
  uVar3 = param_1 + in_RCX + param_2;
  uVar5 = param_4 + in_RAX + param_3;
  param_1 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_1;
  param_4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ param_4;
  _DAT_183354ae0 =
       func_0x00018d2ed900((param_4 << 0x1d | param_4 >> 0x23) - (in_RAX + param_3) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  _DAT_183354908 =
       (_DAT_183354908 ^ _DAT_183354ae0 ^ 0x63bdaa17d5501fca) + 0xff3fd7ffe539dfb7 ^
       0x66cad303123f025f;
  _DAT_183354be0 =
       (_DAT_183354be0 * 0x76b64d8522737171 ^ _DAT_183354908) +
       (_DAT_183354ae0 ^ 0x63bdaa17d5501fca);
  _DAT_183354b48 = _DAT_183354be0 ^ _DAT_183354908;
  _DAT_183354918 = 0xff3fd7ffe539dfb7;
  uVar3 = (_DAT_183354cc0 ^ _DAT_1821a6530) + _DAT_183354be8 + 0x36d1bc7f5810dd5c;
  uVar5 = (_DAT_183354be8 ^ _UNK_1821a6538) + _DAT_183354cc0 + 0xef99af6b9174612;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354cc0 ^ _DAT_1821a6530;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183354be8 ^ _UNK_1821a6538;
  _DAT_1833549e8 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183354cc0 + 0xef99af6b9174612) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354be8 + 0x36d1bc7f5810dd5c));
  uVar3 = _DAT_1833549e8 << 0x1d | _DAT_1833549e8 >> 0x23;
  _DAT_183354cd8 = (_DAT_183354cd8 ^ uVar3) + 0x382826896525b86b ^ 0xf7a225e933874b98;
  _DAT_183354af8 = (_DAT_183354af8 * 0x5f965caf590840dd ^ _DAT_183354cd8) + uVar3;
  _DAT_183354a40 = _DAT_183354af8 ^ _DAT_183354cd8;
  _DAT_183354960 = 0x382826896525b86b;
  uVar3 = (~_DAT_183354ae8 + 0x78af2ad66cfc5c44) *
          ((_DAT_183354a60 ^ 0x84222325) + (ulonglong)((uint)_DAT_183354a60 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1833549b8) + (uVar3 & _DAT_1833549b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354a88 = func_0x00018d2ed900((uVar3 | 0x78af2ad6e8de7f66) + (uVar3 & 0x78af2ad6e8de7f66));
  uVar3 = _DAT_183354a88 ^ 0x78af2ad66cfc5c43;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  _DAT_183354c60 = (_DAT_183354c60 ^ uVar3) + 0x8750d5299303a3bd ^ 0x4dc6d2d4df953451;
  _DAT_183354c50 = (_DAT_183354c50 * -0x6605f8f032b8eaff ^ _DAT_183354c60) + uVar3;
  _DAT_183354b50 = _DAT_183354c50 ^ _DAT_183354c60;
  _DAT_183354b10 = 0x8750d5299303a3bd;
  uVar3 = (_DAT_183354a08 ^ _DAT_1821a6540) + (_DAT_183354bf8 - 0x84222325);
  uVar5 = (_DAT_183354bf8 ^ _UNK_1821a6548) + _DAT_183354a08 + 0x78af2ad66cfc5c43;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354a08 ^ _DAT_1821a6540;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183354bf8 ^ _UNK_1821a6548;
  _DAT_183354cf0 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183354a08 + 0x78af2ad66cfc5c43) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354bf8 - 0x84222325));
  uVar3 = _DAT_183354cf0 & 0x7fffffffffffffff;
  _DAT_1833549d8 = _DAT_183354ba8 ^ uVar3 ^ 0x78af2ad66cfc5c41;
  _DAT_183354bd0 = (_DAT_183354bd0 ^ uVar3) + 0x78af2ad66cfc5c41 ^ 0xfc5bf11d06245c86;
  _DAT_1833549c0 = (_DAT_1833549c0 * 0x390104dd8ce4c583 ^ _DAT_183354bd0) + uVar3;
  _DAT_183354920 = _DAT_1833549c0 ^ _DAT_183354bd0;
  _DAT_183354cc0 = 0x78af2ad66cfc5c41;
  uVar3 = (_DAT_183354b90 ^ _DAT_1821a6550) + _DAT_183354a78 + 0x78af2ad6e8de7f64;
  uVar5 = (_DAT_183354a78 ^ _UNK_1821a6558) + _DAT_183354b90 + 0x8750d5299303a3bd;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354b90 ^ _DAT_1821a6550;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183354a78 ^ _UNK_1821a6558;
  _DAT_183354c40 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183354b90 + 0x8750d5299303a3bd) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354a78 + 0x78af2ad6e8de7f64));
  uVar3 = (_DAT_183354c40 ^ 0xfffffffffffffffd) * 0x2e9691acb42b3281;
  _DAT_183354a08 = _DAT_183354990 ^ uVar3 ^ 0xfffffffffffffffe;
  _DAT_183354cd8 = (_DAT_183354cd8 ^ uVar3) - 2 ^ 0x8826f51e32df7f99;
  _DAT_1833549f0 = (_DAT_1833549f0 * 0x62657b6fbfd47a33 ^ _DAT_183354cd8) + uVar3;
  _DAT_183354aa0 = _DAT_1833549f0 ^ _DAT_183354cd8;
  _DAT_183354c20 = 0xfffffffffffffffe;
  uVar3 = (~_DAT_183354b48 + 0x7ca5f8e3d981c8e4) *
          ((_DAT_183354c80 ^ 0xffffffff7bdddcdb) + (_DAT_183354c80 & 0x7fffffff7bdddcdb) * 2);
  uVar3 = (uVar3 | _DAT_183354c08) + (uVar3 & _DAT_183354c08);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833549f0 = func_0x00018d2ed900((uVar3 | 0x835a071ca25c1438) + (uVar3 & 0x835a071ca25c1438));
  uVar3 = _DAT_1833549f0 ^ 0x835a071c267e371c;
  _DAT_183354ce8 = _DAT_1833549b8 ^ uVar3 ^ 0x7ca5f8e3d981c8e1;
  _DAT_183354af8 = (_DAT_183354af8 ^ uVar3) + 0x7ca5f8e3d981c8e1 ^ 0x213278c9d93fa0e1;
  _DAT_183354cb0 = (_DAT_183354cb0 * 0x5af188fff7ac82f3 ^ _DAT_183354af8) + uVar3;
  _DAT_183354bc0 = _DAT_183354cb0 ^ _DAT_183354af8;
  _DAT_183354a80 = 0x7ca5f8e3d981c8e1;
  _DAT_183354a98 = func_0x00018d2ed900(_DAT_183354928 + 0x84bb9ec827a3bd4eU ^ 0xd1);
  _DAT_183354ad8 = _DAT_183354ac8 ^ _DAT_183354a98 ^ 0xfffffffffffffffe;
  _DAT_183354c00 = (_DAT_183354c00 ^ _DAT_183354a98) - 2 ^ 0x861d61837978af20;
  _DAT_183354b90 = (_DAT_183354b90 * 0x5181a22ee14998dd ^ _DAT_183354c00) + _DAT_183354a98;
  _DAT_183354aa0 = _DAT_183354b90 ^ _DAT_183354c00;
  _DAT_183354ce0 = 0xfffffffffffffffe;
  uVar3 = (_DAT_1833549f8 ^ _DAT_1821a6560) + _DAT_183354ae8 + unaff_RBX;
  uVar5 = (_DAT_183354ae8 ^ _UNK_1821a6568) + _DAT_1833549f8 + 0xfb47739bef89a94f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833549f8 ^ _DAT_1821a6560;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183354ae8 ^ _UNK_1821a6568;
  _DAT_183354c70 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833549f8 + 0xfb47739bef89a94f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354ae8 + unaff_RBX));
  _DAT_183354c98 = (_DAT_183354c98 ^ _DAT_183354c70) + 0x4b88c64107656b1 ^ 0x140efc0633351f1c;
  _DAT_183354a30 = (_DAT_183354a30 * 0x3f6e0ef0145c02a3 ^ _DAT_183354c98) + _DAT_183354c70;
  _DAT_183354cd8 = _DAT_183354a30 ^ _DAT_183354c98;
  _DAT_183354c80 = 0x4b88c64107656b1;
  _DAT_183354a80 = func_0x00018d2ed900(_DAT_183354a18 ^ 0xe3f2477373843382);
  uVar3 = (_DAT_183354a80 << 0x2f | _DAT_183354a80 >> 0x11) << 0xd | (_DAT_183354a80 & 0x1ffff) >> 4
  ;
  _DAT_183354c80 = _DAT_183354b28 ^ uVar3 ^ 0xfb47739bef89a94d;
  _DAT_183354cd8 = (_DAT_183354cd8 ^ uVar3) + 0xfb47739bef89a94d ^ 0xea7d1c4918749f9;
  _DAT_183354bb0 = (_DAT_183354bb0 * 0x196cbfb047d04d7d ^ _DAT_183354cd8) + uVar3;
  _DAT_183354c00 = _DAT_183354bb0 ^ _DAT_183354cd8;
  _DAT_183354940 = 0xfb47739bef89a94d;
  uVar3 = (~_DAT_183354958 + 0x4b88c64107656b2) *
          ((_DAT_183354c30 ^ 0xfb47739b6bab8a68) + (_DAT_183354c30 & 0x7b47739b6bab8a68) * 2);
  uVar3 = (uVar3 | _DAT_183354978) + (uVar3 & _DAT_183354978);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354c58 = func_0x00018d2ed900((uVar3 | 0xffffffff7bdddcd9) + (uVar3 & 0xffffffff7bdddcd9));
  uVar5 = _UNK_1821a6578;
  uVar3 = _DAT_1821a6570;
  _DAT_183354b10 = _DAT_183354910 ^ _DAT_183354c58 ^ 0xfffffffffffffffe;
  _DAT_183354a98 = (_DAT_183354a98 ^ _DAT_183354c58) - 2 ^ 0x1149faaf57a9cc7d;
  _DAT_183354960 = (_DAT_183354960 * -0x534e1f203b6c24ad ^ _DAT_183354a98) + _DAT_183354c58;
  _DAT_183354c10 = _DAT_183354960 ^ _DAT_183354a98;
  _DAT_1833549e8 = 0xfffffffffffffffe;
  uVar4 = (_DAT_183354ab0 ^ _DAT_1821a6570) + _DAT_1833549b0 + 0xff3fd7ff611bfc92;
  uVar6 = (_DAT_1833549b0 ^ _UNK_1821a6578) + _DAT_183354ab0 + 0x382826896525b86b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183354ab0 ^ _DAT_1821a6570;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833549b0 ^ _UNK_1821a6578;
  _DAT_183354cc8 =
       func_0x00018d2ed900((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183354ab0 + 0x382826896525b86b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833549b0 + 0xff3fd7ff611bfc92));
  uVar4 = _DAT_183354970 ^ 0x382826896525b86b;
  _DAT_183354c10 = _DAT_183354cd8 ^ uVar4 ^ 0x3767fe894a5f9822;
  _DAT_183354b58 = (_DAT_183354b58 ^ uVar4) + 0x3767fe894a5f9822 ^ 0x11a928077beee565;
  _DAT_183354ca0 = (_DAT_183354ca0 * -0x28b1dd5514f96b8d ^ _DAT_183354b58) + uVar4;
  _DAT_183354b78 = _DAT_183354ca0 ^ _DAT_183354b58;
  _DAT_183354c00 = 0x3767fe894a5f9822;
  uVar4 = (_DAT_183354b88 ^ uVar3) + _DAT_183354c38 + 0xff3fd7ff611bfc92;
  uVar6 = (_DAT_183354c38 ^ uVar5) + _DAT_183354b88 + 0x382826896525b86b;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183354b88 ^ uVar3;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183354c38 ^ uVar5;
  _DAT_183354b48 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183354b88 + 0x382826896525b86b) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354c38 + 0xff3fd7ff611bfc92));
  uVar3 = (_DAT_183354b48 >> 1 & 0xfffffffffffffc00 | (ulonglong)((_DAT_183354b48 & 1) != 0) << 0x3f
          ) ^ 0xff3fd7ffe539dfb7;
  _DAT_183354c60 = (_DAT_183354c60 ^ uVar3) + 0xc717f176801c67dc ^ 0x5c55e8db74c0c4b2;
  _DAT_183354b30 = (_DAT_183354b30 * -0x1895cba65db99391 ^ _DAT_183354c60) + uVar3;
  _DAT_183354b88 = _DAT_183354b30 ^ _DAT_183354c60;
  _DAT_183354c18 = 0xc717f176801c67dc;
  _DAT_183354978 = func_0x00018d2ed900(_DAT_183354c28 ^ 0x9bac3e316c3bfaa9);
  uVar3 = (_DAT_183354978 ^ 0xc8f1a94721d1a628) << 0x2c |
          (_DAT_183354978 ^ 0xc8f1a94721d1a628) >> 0x14;
  _DAT_183354cf8 = _DAT_183354ac8 ^ uVar3 ^ 0x3767fe894a5f9822;
  _DAT_183354b60 = (_DAT_183354b60 ^ uVar3) + 0x3767fe894a5f9822 ^ 0xbc307cc685813405;
  _DAT_183354b88 = (_DAT_183354b88 * -0x2e00c55192ac147b ^ _DAT_183354b60) + uVar3;
  _DAT_183354a20 = _DAT_183354b88 ^ _DAT_183354b60;
  _DAT_183354958 = 0x3767fe894a5f9822;
  uVar3 = (~_DAT_183354a00 + 0x3767fe894a5f9823) *
          ((_DAT_183354970 ^ 0x3767fe89ce7dbb07) + (_DAT_183354970 & 0x3767fe89ce7dbb07) * 2);
  uVar3 = (uVar3 | _DAT_183354a20) + (uVar3 & _DAT_183354a20);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833549a8 = func_0x00018d2ed900((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_183354ab8 = _DAT_1833549a8 ^ 0x692bb409eba46484;
  uVar3 = _DAT_183354ab8 >> 1 | _DAT_183354ab8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  _DAT_183354ab8 =
       (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
       _DAT_183354ab8;
  uVar3 = _DAT_183354ab8 >> 1 | _DAT_183354ab8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  _DAT_183354ab8 =
       0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
       _DAT_183354ab8;
  _DAT_183354b50 = _DAT_183354b50 ^ _DAT_183354ab8 ^ 0x1ef49b78c1bbcf7a;
  _DAT_183354b68 = (_DAT_183354b68 * -0x4f6c488fab63ce9f ^ _DAT_183354b50) + _DAT_183354ab8;
  _DAT_183354cb0 = _DAT_183354b68 ^ _DAT_183354b50;
  _DAT_1833549e8 = 0;
  uVar3 = ((_DAT_183354cb8 ^ 0xffffffff7bdddcdb) + (_DAT_183354cb8 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_183354a48;
  uVar3 = (uVar3 | _DAT_183354908) + (uVar3 & _DAT_183354908);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354a20 = func_0x00018d2ed900((uVar3 | 0xffffffff7bdddcdb) + (uVar3 & 0xffffffff7bdddcdb));
  uVar3 = _DAT_183354a20 - (_DAT_183354a20 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183354a20;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5) &
          0xfffffffffff;
  _DAT_183354a80 = _DAT_183354c28 ^ uVar3 ^ 0xfffffffffffffffe;
  _DAT_183354ae8 = (_DAT_183354ae8 ^ uVar3) - 2 ^ 0x18bd90eb0cee3f21;
  _DAT_183354a68 = (_DAT_183354a68 * 0x155528de850aada5 ^ _DAT_183354ae8) + uVar3;
  _DAT_183354b48 = _DAT_183354a68 ^ _DAT_183354ae8;
  _DAT_183354cb0 = 0xfffffffffffffffe;
  uVar3 = (_DAT_183354b70 ^ _DAT_1821a6580) + _DAT_183354be8 + 0xff3fd7ff611bfc92;
  uVar5 = (_DAT_183354be8 ^ _UNK_1821a6588) + _DAT_183354b70 + 0xc028001ac62048;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354b70 ^ _DAT_1821a6580;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183354be8 ^ _UNK_1821a6588;
  _DAT_183354c10 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183354b70 + 0xc028001ac62048) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354be8 + 0xff3fd7ff611bfc92));
  _DAT_183354a58 = _DAT_183354a58 ^ _DAT_183354c10 * -0x228df8e66025e8bd ^ 0xcdc129b24a02df46;
  _DAT_183354b50 =
       (_DAT_183354b50 * 0x28d9f76596116cf5 ^ _DAT_183354a58) + _DAT_183354c10 * -0x228df8e66025e8bd
  ;
  _DAT_183354bd8 = _DAT_183354b50 ^ _DAT_183354a58;
  _DAT_183354ba0 = 0;
  _DAT_1833549b8 = func_0x00018d2ed900(_DAT_1833549a8 + 0xffdf0083e3001dff ^ 0x8e);
  _DAT_183354a38 = _DAT_183354a38 ^ _DAT_1833549b8 ^ 0x3307e27236d44a20;
  _DAT_183354bd8 = (_DAT_183354bd8 * 0x6b8a2e1b250e90a5 ^ _DAT_183354a38) + _DAT_1833549b8;
  _DAT_183354c68 = _DAT_183354bd8 ^ _DAT_183354a38;
  _DAT_183354b58 = 0;
  uVar3 = *(ulonglong *)(unaff_RBP + 0x50) ^ 0x84222325;
  uVar3 = (~_DAT_183354ae8 - 1) * ((uVar3 ^ _DAT_183354b10) + (uVar3 & _DAT_183354b10) * 2);
  uVar3 = (uVar3 | _DAT_183354900) + (uVar3 & _DAT_183354900);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar5 = *(ulonglong *)(unaff_RBP + 0x50) ^ 0xffffffff7bdddcdb;
  _DAT_183354c30 = func_0x00018d2ed900((uVar5 | uVar3) + (uVar3 & uVar5));
  auVar1._4_4_ = unaff_XMM14_Db;
  auVar1._0_4_ = unaff_XMM14_Da;
  auVar1._8_4_ = unaff_XMM14_Dc;
  auVar1._12_4_ = unaff_XMM14_Dd;
  uVar2 = unaff_XMM14_Da | (uint)DAT_1800b8c60;
  uVar7 = SUB164(auVar1 & _DAT_1800b8c60,0);
  uVar5 = SUB168(auVar1 & _DAT_1800b8c60,0);
  auVar10._8_4_ = 0xffffffff;
  auVar10._0_8_ = 0xffffffffffffffff;
  auVar10._12_4_ = 0xffffffff;
  uVar9 = SUB164(auVar10 ^ unaff_XMM7,0);
  uVar3 = ~_DAT_183354c30 & 0xfffffffff8000000;
  uVar8 = SUB164(unaff_XMM7 ^ _DAT_1800b8c60,0);
  uVar4 = (((ulonglong)uVar9 * (ulonglong)_DAT_1821a65d0 +
            ((ulonglong)_DAT_1821a65f0 * (ulonglong)uVar9 +
             (SUB168(auVar10 ^ unaff_XMM7,0) >> 0x20) * (ulonglong)_DAT_1821a65d0 << 0x20) +
            ((ulonglong)_DAT_1821a65b0 * (ulonglong)uVar2 + _DAT_1821a65e0 << 0x20) +
            (ulonglong)_DAT_1821a65c0 * (ulonglong)uVar2 +
           (ulonglong)uVar7 * (ulonglong)_DAT_1821a65c0 +
           ((uVar5 >> 0x20) * (ulonglong)_DAT_1821a65c0 +
            (ulonglong)uVar7 * (ulonglong)_DAT_1821a65b0 << 0x20) +
           ((ulonglong)_DAT_1821a65a0 * (ulonglong)unaff_XMM14_Da +
            (ulonglong)_DAT_1821a6590 * (ulonglong)unaff_XMM8_Da << 0x20) +
           (ulonglong)unaff_XMM14_Da * (ulonglong)_DAT_1821a6590) -
          ((ulonglong)uVar8 * (ulonglong)_DAT_1821a6690 +
           ((ulonglong)_DAT_1821a66a0 * (ulonglong)uVar8 +
            (SUB168(unaff_XMM7 ^ _DAT_1800b8c60,0) >> 0x20) * (ulonglong)_DAT_1821a6690 << 0x20) +
           ((ulonglong)uVar2 * (ulonglong)_DAT_1821a6670 + _DAT_1821a6680 << 0x20) +
           (ulonglong)_DAT_1821a6660 * (ulonglong)uVar2 +
          (ulonglong)uVar7 * (ulonglong)_DAT_1821a6640 +
          ((ulonglong)_DAT_1821a6650 * (ulonglong)uVar7 +
           (uVar5 >> 0x20) * (ulonglong)_DAT_1821a6640 << 0x20) +
          ((ulonglong)(unaff_XMM14_Da * _DAT_1821a6630 + unaff_XMM8_Da * _DAT_1821a6620) << 0x20) +
          (ulonglong)unaff_XMM14_Da * (ulonglong)_DAT_1821a6620)) + 0x4bd0e32105f5dd9c;
  _DAT_183354ce8 = _DAT_183354b20 ^ uVar3 ^ uVar4;
  _DAT_183354b48 = (_DAT_183354b48 ^ uVar3) + uVar4 ^ 0x6f5e49fed9aadf41;
  _DAT_183354cc0 = (_DAT_183354cc0 * 0x110c8edaa4232299 ^ _DAT_183354b48) + uVar3;
  _DAT_1833549c8 = _DAT_183354cc0 ^ _DAT_183354b48;
  _DAT_183354ae0 = uVar4;
  *(ulonglong *)(unaff_RBP + 0x50) = uVar4 + unaff_RBP + -0x50;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar4) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  _DAT_183354cd8 = func_0x00018d2ed900(_DAT_183354c20 ^ 0xc3c18fd218fd4190);
  uVar3 = _DAT_183354cd8 & 0x7ffffffffffffff ^ 0x9aa39f46195442ca;
  _DAT_183354cf0 = (_DAT_183354cf0 ^ uVar3) + 0x9bb39fc7df77e2fe ^ 0xa343e460bbd7065;
  _DAT_183354a00 = (_DAT_183354a00 * 0x2e66f90914b3276b ^ _DAT_183354cf0) + uVar3;
  _DAT_183354c18 = _DAT_183354a00 ^ _DAT_183354cf0;
  _DAT_183354ba8 = 0x9bb39fc7df77e2fe;
  _DAT_183354b88 = func_0x00018d2ed900(_DAT_183354b30 ^ 0x283b947324bba059);
  _DAT_183354cd0 =
       (_DAT_183354cd0 ^ _DAT_183354b88 * 0x7dc7e9d50cec6cbb) + 0x4253b3c708bd98e8 ^
       0x8d6d18302c23e497;
  _DAT_183354c18 =
       (_DAT_183354c18 * -0x3b9b239af57e1c89 ^ _DAT_183354cd0) + _DAT_183354b88 * 0x7dc7e9d50cec6cbb
  ;
  _DAT_183354b58 = _DAT_183354c18 ^ _DAT_183354cd0;
  _DAT_183354ae0 = 0x4253b3c708bd98e8;
  _DAT_183354b38 = func_0x00018d2ed900(_DAT_183354938 + 0xf7c4946d183ba044U ^ 0xe4);
  _DAT_1833549f8 = _DAT_183354b38 & 0x7fffffffffffffff;
  _DAT_183354a40 = (_DAT_183354a40 ^ _DAT_1833549f8) + 0xbdac4c38f742672d ^ 0x2ebddbef59535b5e;
  _DAT_1833549f8 =
       ((_DAT_183354c38 ^ _DAT_1833549f8 ^ 0xbdac4c38f742672d) * 0xa8ae8f491b2e57d ^ _DAT_183354a40)
       + _DAT_1833549f8;
  _DAT_183354a10 = _DAT_1833549f8 ^ _DAT_183354a40;
  _DAT_183354c90 = 0xbdac4c38f742672d;
  _DAT_183354b60 = func_0x00018d2ed900(_DAT_183354ad0 + 0x1154e95b20ba5bd0U ^ 0xdd);
  uVar3 = _DAT_183354b60 ^ 0x52257c92e2eb5fe5;
  _DAT_183354ce0 = _DAT_183354a78 ^ uVar3 ^ 0x15;
  _DAT_183354a30 = (_DAT_183354a30 ^ uVar3) + 0x15 ^ 0x529a32027b8b3289;
  _DAT_183354ac0 = (_DAT_183354ac0 * -0x7c9487c0ad1fdedb ^ _DAT_183354a30) + uVar3;
  _DAT_183354c60 = _DAT_183354ac0 ^ _DAT_183354a30;
  _DAT_183354b50 = 0x15;
  uVar3 = (_DAT_183354948 ^ _DAT_1821a66b0) + _DAT_183354b78 + 0x84222325;
  uVar5 = (_DAT_183354b78 ^ _UNK_1821a66b8) + _DAT_183354948 + 0xe558b39804be60dc;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354948 ^ _DAT_1821a66b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183354b78 ^ _UNK_1821a66b8;
  _DAT_183354a78 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183354948 + 0xe558b39804be60dc) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354b78 + 0x84222325));
  uVar3 = _DAT_183354a78 ^ 0xe558b39804be60dc;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3) <<
          0x10 | uVar3 >> 0x30;
  _DAT_183354940 = (_DAT_183354940 ^ uVar3) + 0x1aa74c67fb419f24 ^ 0xa804e6bd7a7fcb25;
  _DAT_183354a28 = (_DAT_183354a28 * 0x1e82095cfc41f1f1 ^ _DAT_183354940) + uVar3;
  _DAT_183354be8 = _DAT_183354a28 ^ _DAT_183354940;
  _DAT_183354958 = 0x1aa74c67fb419f24;
  uVar3 = (_DAT_183354bb0 ^ _DAT_1821a66c0) + _DAT_183354b50 + 0x84222330;
  uVar5 = (_DAT_183354b50 ^ _UNK_1821a66c8) + _DAT_183354bb0 + 0xe558b39804be60dc;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354bb0 ^ _DAT_1821a66c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183354b50 ^ _UNK_1821a66c8;
  _DAT_183354af8 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183354bb0 + 0xe558b39804be60dc) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354b50 + 0x84222330));
  uVar5 = _DAT_183354af8 ^ 0xd046bb78639df20c;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar5;
  _DAT_183354a08 = _DAT_183354960 ^ uVar5 ^ 0xe558b39804be60f1;
  _DAT_183354a40 = (_DAT_183354a40 ^ uVar5) + 0xe558b39804be60f1 ^ 0x79bae31870e692cf;
  _DAT_183354a90 = (_DAT_183354a90 * -0x476af79b36de588d ^ _DAT_183354a40) + uVar5;
  _DAT_183354b18 = _DAT_183354a90 ^ _DAT_183354a40;
  _DAT_183354ae8 = 0xe558b39804be60f1;
  _DAT_183354bf8 = func_0x00018d2ed900(_DAT_183354980 ^ 0xd033fd6610c22cc5);
  uVar3 = _DAT_183354bf8 - (_DAT_183354bf8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = _DAT_183354bf8 ^ 0x1aa74c67fb419f24 ^
          (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3;
  _DAT_183354958 = _DAT_183354c10 ^ uVar3 ^ 0x15;
  _DAT_183354978 = (_DAT_183354978 ^ uVar3) + 0x15 ^ 0x5ad5d79c5b42c447;
  _DAT_183354a98 = (_DAT_183354a98 * -0x2edcf26470ad506b ^ _DAT_183354978) + uVar3;
  _DAT_183354978 = _DAT_183354a98 ^ _DAT_183354978;
  _DAT_183354970 = 0x15;
  _DAT_183354918 = func_0x00018d2ed900(_DAT_183354a78 + 0xea1769535b01553a ^ 0xf1);
  _DAT_183354a70 = (_DAT_183354a70 ^ _DAT_183354918) + 0x3806e1e9a677f508 ^ 0xfc88e291e431145c;
  _DAT_183354c18 = (_DAT_183354c18 * 0x764cccd8b38f0b49 ^ _DAT_183354a70) + _DAT_183354918;
  _DAT_183354a30 = _DAT_183354c18 ^ _DAT_183354a70;
  _DAT_183354c00 = 0x3806e1e9a677f508;
  uVar3 = (~_DAT_183354b20 + 0xc7f91e1659880af9) *
          ((_DAT_183354a00 ^ 0x84222330) + (ulonglong)((uint)_DAT_183354a00 & 0x84222330) * 2);
  uVar3 = (uVar3 | _DAT_183354b18) + (uVar3 & _DAT_183354b18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354c30 = func_0x00018d2ed900((uVar3 | 0xc7f91e16ddaa29c8) + (uVar3 & 0xc7f91e16ddaa29c8));
  uVar3 = _DAT_183354c30 & 0x7fffffffffffffff;
  _DAT_183354920 = _DAT_183354ce8 ^ uVar3 ^ 0xc7f91e1659880b0d;
  _DAT_183354c90 = (_DAT_183354c90 ^ uVar3) + 0xc7f91e1659880b0d ^ 0x762679af04b7d096;
  _DAT_183354968 = (_DAT_183354968 * -0x3379b933bbc8dca3 ^ _DAT_183354c90) + uVar3;
  _DAT_183354cb0 = _DAT_183354968 ^ _DAT_183354c90;
  _DAT_1833549f8 = 0xc7f91e1659880b0d;
  _DAT_183354a50 = func_0x00018d2ed900(_DAT_183354a98 ^ 0x295b2b3b20f2348f);
  uVar3 = _DAT_183354a50 ^ 0xffffffffffffff0d;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3)
          >> 0x15) * -0x142ccfa14c200000;
  _DAT_183354a00 = _DAT_183354ac0 ^ uVar3 ^ 0x15;
  _DAT_183354ac8 = (_DAT_183354ac8 ^ uVar3) + 0x15 ^ 0x9337b3a9798416b0;
  _DAT_183354b80 = (_DAT_183354b80 * 0xa2a188e2dca0f53 ^ _DAT_183354ac8) + uVar3 ^ _DAT_183354ac8;
  _DAT_183354c38 = 0x15;
  uVar3 = (~_DAT_183354950 + 0xa4cab62c2af3c848) *
          ((_DAT_183354a78 ^ 0x9bb39fc75b55c1db) + (_DAT_183354a78 & 0x1bb39fc75b55c1db) * 2);
  uVar3 = (uVar3 | _DAT_183354a30) + (uVar3 & _DAT_183354a30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354cc0 = func_0x00018d2ed900((uVar3 | 0x3f7929eb71a6099c) + (uVar3 & 0x3f7929eb71a6099c));
  uVar3 = (_DAT_183354cc0 ^ 0xeadc477119c7868c) << 0x32 |
          (_DAT_183354cc0 ^ 0xeadc477119c7868c) >> 0xe;
  _DAT_183354a18 = (_DAT_183354a18 ^ uVar3) + 0x3f7929ebf5842ab9 ^ 0x2b0220110cd9b48e;
  _DAT_183354ce0 = (_DAT_183354ce0 * 0x512ac4d49711017f ^ _DAT_183354a18) + uVar3;
  _DAT_183354900 = _DAT_183354ce0 ^ _DAT_183354a18;
  _DAT_183354b60 = 0x3f7929ebf5842ab9;
  uVar3 = (~_DAT_183354960 + 0x1052c0814e7808d) *
          ((_DAT_1833549c8 ^ 0x3f7929eb71a6099c) + (_DAT_1833549c8 & 0x3f7929eb71a6099c) * 2);
  uVar3 = (uVar3 | _DAT_183354b50) + (uVar3 & _DAT_183354b50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354a28 = func_0x00018d2ed900((uVar3 | 0x3e7c05e365418910) + (uVar3 & 0x3e7c05e365418910));
  uVar3 = (_DAT_183354a28 * -0x62acbaa4dfc3d84f & 0xffffff) << 0x27 |
          _DAT_183354a28 * -0x62acbaa4dfc3d84f >> 0x19;
  _DAT_183354988 = _DAT_183354c88 ^ uVar3 ^ 0x407e55f40a6bab45;
  _DAT_183354c40 = (_DAT_183354c40 ^ uVar3) + 0x407e55f40a6bab45 ^ 0x79a8a67b54b4b2ee;
  _DAT_1833549a0 = (_DAT_1833549a0 * 0x5ec938ca287c07a5 ^ _DAT_183354c40) + uVar3;
  _DAT_183354a18 = _DAT_1833549a0 ^ _DAT_183354c40;
  _DAT_183354958 = 0x407e55f40a6bab45;
  _DAT_183354910 = func_0x00018d2ed900(_DAT_183354c78 + 0x1f007c250021ffU ^ 0x10);
  _DAT_183354c40 = _DAT_183354910 & 0x7fffffffffffff;
  _DAT_183354c10 = _DAT_183354c10 ^ _DAT_183354c40 ^ 0xec8ccd8ab9963f83;
  _DAT_183354c50 = (_DAT_183354c50 * -0x79391ce62df87b43 ^ _DAT_183354c10) + _DAT_183354c40;
  _DAT_183354c18 = _DAT_183354c50 ^ _DAT_183354c10;
  _DAT_183354a60 = 0;
  uVar3 = (_DAT_183354b28 ^ 0x84222330) + _DAT_183354cb8 + 0x84222330;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354b28 ^ 0x84222330;
  uVar5 = ((_DAT_183354cb8 + _DAT_183354b28) * 0x2000 | _DAT_183354cb8 + _DAT_183354b28 >> 0x33) ^
          _DAT_183354cb8;
  _DAT_183354c90 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_183354b28 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354cb8 + 0x84222330));
  _DAT_183354908 = _DAT_183354a28 ^ _DAT_183354c90 ^ 0x15;
  _DAT_183354c70 = (_DAT_183354c70 ^ _DAT_183354c90) + 0x15 ^ 0x60d8bb122a9318ef;
  _DAT_183354a68 = (_DAT_183354a68 * 0x4cb3478cc73234d1 ^ _DAT_183354c70) + _DAT_183354c90;
  _DAT_183354b00 = _DAT_183354a68 ^ _DAT_183354c70;
  _DAT_183354970 = 0x15;
  uVar3 = (_DAT_183354cd8 ^ _DAT_1821a66d0) + _DAT_183354a80 + 0x9bb39fc75b55c1db;
  uVar5 = (_DAT_183354a80 ^ _UNK_1821a66d8) + _DAT_183354cd8 + 0x644c603820881d01;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183354cd8 ^ _DAT_1821a66d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183354a80 ^ _UNK_1821a66d8;
  _DAT_183354978 =
       func_0x00018d2ed900((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183354cd8 + 0x644c603820881d01) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183354a80 + 0x9bb39fc75b55c1db));
  uVar5 = _DAT_183354978 ^ 0x45abdfb8cb1ea8fe;
  uVar3 = uVar5 >> 1 | uVar5;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar5;
  _DAT_183354b08 = _DAT_183354b08 ^ uVar5 ^ 0x326622d0f6519cac;
  _DAT_183354b20 = (_DAT_183354b20 * 0x490ccc95f84fb4c3 ^ _DAT_183354b08) + uVar5;
  _DAT_183354ad8 = _DAT_183354b20 ^ _DAT_183354b08;
  _DAT_183354ba8 = 0;
  uVar3 = ((_DAT_183354c10 ^ 0x84222330) + (ulonglong)((uint)_DAT_183354c10 & 0x84222330) * 2) *
          -_DAT_1833549e8;
  uVar3 = (uVar3 | _DAT_183354aa0) + (uVar3 & _DAT_183354aa0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354ba0 = func_0x00018d2ed900((uVar3 | 0x84222330) + (ulonglong)((uint)uVar3 & 0x84222330))
  ;
  uVar3 = _DAT_183354ba0 & 0x1fffffffffff;
  _DAT_183354940 = _DAT_183354c20 ^ uVar3 ^ 0x15;
  _DAT_183354c10 = (_DAT_183354c10 ^ uVar3) + 0x15 ^ 0xdd0e851947da3836;
  _DAT_183354ce8 = (_DAT_183354ce8 * 0xb37aad88c1113cd ^ _DAT_183354c10) + uVar3;
  _DAT_183354c38 = _DAT_183354ce8 ^ _DAT_183354c10;
  _DAT_183354ce0 = 0x15;
  uVar3 = (~_DAT_183354b70 + 0x19139883cf37a2f7) *
          ((_DAT_183354aa0 ^ 0x191398834b1581d3) + (_DAT_183354aa0 & 0x191398834b1581d3) * 2);
  uVar3 = (uVar3 | _DAT_183354b78) + (uVar3 & _DAT_183354b78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183354cf8 = func_0x00018d2ed900((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_183354b98 = _DAT_183354b98 ^ _DAT_183354cf8 & 0x19139883cf37a2f6 ^ 0x76c3c8ae792e819b;
  _DAT_183354bc8 =
       (_DAT_183354bc8 * -0x1d46e305e043f4a3 ^ _DAT_183354b98) +
       (_DAT_183354cf8 & 0x19139883cf37a2f6);
  _DAT_183354918 = _DAT_183354bc8 ^ _DAT_183354b98;
  _DAT_183354ce0 = 0;
  _DAT_183354b48 = func_0x00018d2ed900(_DAT_1833549e8 + 0xffe2ff8430001dff ^ 0xe8);
  _DAT_183354968 = (_DAT_183354968 ^ _DAT_183354b48 ^ 0x15) + 0x15 ^ 0x86c0c10a0faaba88;
  _DAT_1833549e8 = (_DAT_1833549e8 * -0xb1f9071e7f0bf13 ^ _DAT_183354968) + (_DAT_183354b48 ^ 0x15);
  _DAT_183354ad8 = _DAT_1833549e8 ^ _DAT_183354968;
  _DAT_183354a18 = 0x15;
  switch(uVar4 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2d82c2 (image 18d2d82c2) =====

void FUN_18d2d82c2(void)

{
  return;
}



// ===== continuation @ rva d2d81df (image 18d2d81df) =====

undefined8 thunk_FUN_18d2c34fc(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva d2d7dd7 (image 18d2d7dd7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2d7dd7(void)

{
  int iVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2d8124 (image 18d2d8124) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2d8124(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2c8699 (image 18d2c8699) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2c8699(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  *(longlong *)(unaff_RBP + 0x50) = param_3;
  _DAT_183354a88 = func_0x00018d2ed900(_DAT_183354c60 ^ 0xd4b71d6b556a7db);
  uVar1 = (_DAT_183354a88 ^ 0x75ff7df7bfffc) & 0x7fffffffffffe;
  _DAT_183354a80 = (_DAT_183354a80 ^ uVar1) + 0xfdf75ff7df7bfffd ^ 0xb9ff14aff66d2a8e;
  _DAT_183354ca8 = (_DAT_183354ca8 * 0xd3b625977a56f1b ^ _DAT_183354a80) + uVar1;
  _DAT_183354b20 = _DAT_183354ca8 ^ _DAT_183354a80;
  _DAT_183354a90 = 0xfdf75ff7df7bfffd;
  uVar1 = (_DAT_183354ae0 ^ _DAT_1821a6880) + _DAT_183354900 + 0xa6b763bb1d6ac14b;
  uVar2 = (_DAT_183354900 ^ _UNK_1821a6888) + _DAT_183354ae0 + 0x430859a0deac68dd;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183354ae0 ^ _DAT_1821a6880;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183354900 ^ _UNK_1821a6888;
  _DAT_183354aa8 =
       func_0x00018d2ed900((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183354ae0 + 0x430859a0deac68dd) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183354900 + 0xa6b763bb1d6ac14b));
  _DAT_183354ab0 =
       (_DAT_183354ab0 ^ _DAT_183354aa8 ^ 0x4108180046a40891) + 0xe5bf3a1b47e48ab3 ^
       0x8bfbb7cfc74e401;
  _DAT_183354b70 =
       (_DAT_183354b70 * -0x1f9541db34c0ca83 ^ _DAT_183354ab0) +
       (_DAT_183354aa8 ^ 0x4108180046a40891);
  _DAT_183354a80 = _DAT_183354b70 ^ _DAT_183354ab0;
  _DAT_183354b30 = 0xe5bf3a1b47e48ab3;
  uVar1 = (_DAT_183354920 ^ _DAT_1821a6890) + _DAT_183354ba8 + 0xc597a42f465a179;
  uVar2 = (_DAT_183354ba8 ^ _UNK_1821a6898) + _DAT_183354920 + 0xf3a685bd8fb88da3;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183354920 ^ _DAT_1821a6890;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183354ba8 ^ _UNK_1821a6898;
  _DAT_183354a70 =
       func_0x00018d2ed900((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183354920 + 0xf3a685bd8fb88da3) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183354ba8 + 0xc597a42f465a179));
  uVar1 = _DAT_183354a70 ^ 0x8f51f47f674ac94;
  _DAT_183354918 = _DAT_183354928 ^ uVar1 ^ 0xfff;
  _DAT_183354be8 = (_DAT_183354be8 ^ uVar1) + 0xfff ^ 0x7e9120d25806c7f2;
  _DAT_183354af8 = (_DAT_183354af8 * 0x69ccf07ff890e3b1 ^ _DAT_183354be8) + uVar1;
  _DAT_1833549b8 = _DAT_183354af8 ^ _DAT_183354be8;
  _DAT_183354a18 = 0xfff;
  uVar1 = (_DAT_183354bd8 ^ _DAT_1821a68a0) + _DAT_183354c88 + 0x84222325;
  uVar2 = (_DAT_183354c88 ^ _UNK_1821a68a8) + _DAT_183354bd8 + 0x255fa2e02cf57690;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183354bd8 ^ _DAT_1821a68a0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183354c88 ^ _UNK_1821a68a8;
  _DAT_183354a98 =
       func_0x00018d2ed900((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183354bd8 + 0x255fa2e02cf57690) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183354c88 + 0x84222325));
  _DAT_183354990 =
       (_DAT_183354990 ^ _DAT_183354a98 & 0xffffffffffffc000) + 0xdaa05d1fd30a8970 ^
       0xfb390e0dfc76bbcc;
  _DAT_183354bd0 =
       (_DAT_183354bd0 * 0x64304cc30775dca1 ^ _DAT_183354990) +
       (_DAT_183354a98 & 0xffffffffffffc000);
  _DAT_1833549c8 = _DAT_183354bd0 ^ _DAT_183354990;
  _DAT_183354a30 = 0xdaa05d1fd30a8970;
  uVar1 = (_DAT_183354cf0 ^ _DAT_1821a68b0) + _DAT_183354be0 + 0x84222cda;
  uVar2 = (_DAT_183354be0 ^ _UNK_1821a68b8) + _DAT_183354cf0 + 0x255fa2e02cf57690;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183354cf0 ^ _DAT_1821a68b0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183354be0 ^ _UNK_1821a68b8;
  _DAT_183354a00 =
       func_0x00018d2ed900((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183354cf0 + 0x255fa2e02cf57690) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183354be0 + 0x84222cda));
  uVar1 = _DAT_183354a00 & 0x7fffffffffffffff;
  _DAT_183354bd0 = _DAT_183354ac8 ^ uVar1 ^ 0x255fa2e02cf5868f;
  _DAT_183354b70 = (_DAT_183354b70 ^ uVar1) + 0x255fa2e02cf5868f ^ 0x4f770482560b218;
  _DAT_183354cc8 = (_DAT_183354cc8 * 0x18c8f18ff277951d ^ _DAT_183354b70) + uVar1;
  _DAT_183354c28 = _DAT_183354cc8 ^ _DAT_183354b70;
  _DAT_183354b30 = 0x255fa2e02cf5868f;
  uVar1 = (~_DAT_183354a20 + 0xdaa05d1fd30a8971) *
          ((_DAT_183354958 ^ 0x255fa2e0a8d7a5aa) + (_DAT_183354958 & 0x255fa2e0a8d7a5aa) * 2);
  uVar1 = (uVar1 | _DAT_183354c00) + (uVar1 & _DAT_183354c00);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183354bb8 = func_0x00018d2ed900((uVar1 | 0xffffffff7bdd2cda) + (uVar1 & 0xffffffff7bdd2cda));
  uVar2 = _DAT_1833549d0 ^ 0x255fa2e02cf5868f;
  _DAT_183354bd0 = _DAT_1833549b8 ^ uVar2 ^ 0xfff;
  uVar1 = (_DAT_183354a48 ^ uVar2) + 0xfff;
  _DAT_183354a48 = uVar1 ^ 0xd4acf872c1a9f154;
  _DAT_183354c88 = (_DAT_183354c88 * 0x2ea47c2103d8b2ad ^ _DAT_183354a48) + uVar2;
  _DAT_183354b38 = _DAT_183354c88 ^ _DAT_183354a48;
  _DAT_183354ba8 = 0xfff;
  _DAT_183354ce0 = func_0x00018d2ed900(uVar1 ^ 0x20b76e4f00f5f6c6);
  uVar1 = (_DAT_183354ce0 << 0x36 | _DAT_183354ce0 >> 10) >> 0x1b | (_DAT_183354ce0 >> 10) << 0x25;
  _DAT_1833549e0 = (_DAT_1833549e0 ^ uVar1) + 0x8405383bed4f91c ^ 0x1d9db4c253be4f95;
  _DAT_1833549c8 = (_DAT_1833549c8 * -0x71e93609ba6ca911 ^ _DAT_1833549e0) + uVar1;
  _DAT_183354bb0 = _DAT_1833549c8 ^ _DAT_1833549e0;
  _DAT_183354ba8 = 0x8405383bed4f91c;
  uVar1 = (~_DAT_1833549a8 + 0xe5bf3a1b47e48ab4) *
          ((_DAT_183354a10 ^ 0xfdf75ff75b59dcd8) + (_DAT_183354a10 & 0x7df75ff75b59dcd8) * 2);
  uVar1 = (uVar1 | _DAT_183354970) + (uVar1 & _DAT_183354970);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183354b88 = func_0x00018d2ed900((uVar1 | 0x184865ec1cbd566b) + (uVar1 & 0x184865ec1cbd566b));
  uVar1 = _DAT_183354b88 & 0x3ffffffffff00000;
  _DAT_183354bd0 = _DAT_183354b78 ^ uVar1 ^ 0xe3b69a1327608ab0;
  _DAT_183354a48 = (_DAT_183354a48 ^ uVar1) + 0xe3b69a1327608ab0 ^ 0xbf034f0d9fa861f1;
  _DAT_183354c30 = (_DAT_183354c30 * 0x2f396ff285604c3f ^ _DAT_183354a48) + uVar1;
  _DAT_183354b18 = _DAT_183354c30 ^ _DAT_183354a48;
  _DAT_183354c58 = 0xe3b69a1327608ab0;
  _DAT_183354a28 = func_0x00018d2ed900(_DAT_183354ad8 + 0xba3cda91f8b11b2cU ^ 0xaf);
  uVar1 = _DAT_183354a28 ^ 0x9d1e31f435784ddc;
  _DAT_183354b58 = _DAT_1833549f8 ^ uVar1 ^ 0xe3b69a1327608ab0;
  _DAT_183354bc8 = (_DAT_183354bc8 ^ uVar1) + 0xe3b69a1327608ab0 ^ 0x8f69b98285bd15e4;
  _DAT_183354be0 = (_DAT_183354be0 * 0xe8ea4e51108f78d ^ _DAT_183354bc8) + uVar1;
  _DAT_183354ba8 = _DAT_183354be0 ^ _DAT_183354bc8;
  _DAT_183354b00 = 0xe3b69a1327608ab0;
  _DAT_183354cd0 = func_0x00018d2ed900(_DAT_183354cf0 ^ 0x23007bdd001dd3);
  _DAT_183354a90 =
       (_DAT_183354cd0 ^ 0xe3b69a1327608ab0) << 0x2c | (_DAT_183354cd0 ^ 0xe3b69a1327608ab0) >> 0x14
  ;
  _DAT_183354a50 = _DAT_183354a50 ^ _DAT_183354a90 ^ 0xef9bee517706d80b;
  _DAT_183354ca0 = (_DAT_183354ca0 * 0x1bc858526ef229c3 ^ _DAT_183354a50) + _DAT_183354a90;
  _DAT_183354998 = _DAT_183354ca0 ^ _DAT_183354a50;
  _DAT_183354c60 = 0;
  uVar1 = ~_DAT_183354a50 *
          ((_DAT_1833549a8 ^ 0xfdf75ff75b59dcd8) + (_DAT_1833549a8 & 0x7df75ff75b59dcd8) * 2);
  uVar1 = (uVar1 | _DAT_183354a30) + (uVar1 & _DAT_183354a30);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183354c80 = func_0x00018d2ed900((uVar1 | 0x208a008a4a62327) + (uVar1 & 0x208a008a4a62327));
  uVar1 = ~_DAT_183354c80 & 0x7fffffffffffffff ^ 0xfdf75ff7df7bfffd;
  _DAT_183354cc0 = (_DAT_183354cc0 ^ uVar1) + 0x208a00820840002 ^ 0xadcc1418767ad3fc;
  _DAT_183354bb0 = (_DAT_183354bb0 * -0x657579ae330fca5f ^ _DAT_183354cc0) + uVar1;
  _DAT_183354b78 = _DAT_183354bb0 ^ _DAT_183354cc0;
  _DAT_1833549b8 = 0x208a00820840002;
  uVar1 = (~_DAT_1833549d0 + 0x208a00820840003) *
          ((_DAT_183354ca8 ^ 0xfdf75ff75b59dcd8) + (_DAT_183354ca8 & 0x7df75ff75b59dcd8) * 2);
  uVar1 = (uVar1 | _DAT_1833549c0) + (uVar1 & _DAT_1833549c0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x00018d2ed900((uVar1 | 0xffffffff7bdddcda) + (uVar1 & 0xffffffff7bdddcda));
  _DAT_183354b70 = _DAT_183354b70 ^ ~uVar1 ^ 0xcd8630d0452eb491;
  _DAT_183354c90 = (uVar1 * 0x9dac9f6dcdfeca1 ^ _DAT_183354b70) + ~uVar1;
  _DAT_183354a10 = _DAT_183354c90 ^ _DAT_183354b70;
  _DAT_183354ba0 = 0;
  uVar1 = (~_DAT_183354a90 + 0xd5770e45c533d89e) *
          ((_DAT_183354930 ^ 0xd5770e454111fbb8) + (_DAT_183354930 & 0x55770e454111fbb8) * 2);
  uVar1 = (uVar1 | _DAT_183354cc0) + (uVar1 & _DAT_183354cc0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183354ae8 = func_0x00018d2ed900((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar2 = _DAT_183354ae8 ^ 0xd5770e45c533d89d;
  uVar1 = uVar2 >> 1 | uVar2;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar2;
  uVar1 = uVar2 << 0x20 | uVar2 >> 0x20;
  _DAT_183354c70 = _DAT_183354c70 ^ uVar1 ^ 0x6e7bff9d8196a08d;
  _DAT_183354b90 = (_DAT_183354b90 * -0x654a13ccadbf2661 ^ _DAT_183354c70) + uVar1;
  _DAT_183354998 = _DAT_183354b90 ^ _DAT_183354c70;
  _DAT_183354cc8 = 0;
  _DAT_183354b38 = func_0x00018d2ed900(_DAT_183354b58 + 0x240084c6001dff ^ 0xab);
  uVar1 = _DAT_183354b38 ^ 0xfff;
  _DAT_183354900 = _DAT_183354a18 ^ uVar1 ^ 0xfff;
  _DAT_183354af8 = (_DAT_183354af8 ^ uVar1) + 0xfff ^ 0x1734bfcfcfdfd723;
  _DAT_183354b30 = (_DAT_183354ca8 * 0x748e5328632c1707 ^ _DAT_183354af8) + uVar1 ^ _DAT_183354af8;
  _DAT_183354ca8 = 0xfff;
  switch(0xfff < param_3 + 1U) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2d7f70 (image 18d2d7f70) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2d7f70(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x68) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2efc6b (image 18d2efc6b) =====

void FUN_18d2efc6b(void)

{
  return;
}



// ===== continuation @ rva d2efac9 (image 18d2efac9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2efac9(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2f2e3a (image 18d2f2e3a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f2e3a(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (*in_RAX)(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2f1794 (image 18d2f1794) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f1794(void)

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



// ===== continuation @ rva d2f1538 (image 18d2f1538) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f1538(void)

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



// ===== continuation @ rva d2f27f7 (image 18d2f27f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f27f7(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2f386f (image 18d2f386f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f386f(void)

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



// ===== continuation @ rva d2f4641 (image 18d2f4641) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f4641(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x120))(in_stack_00000030);
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



// ===== continuation @ rva d2f446b (image 18d2f446b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f446b(void)

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



// ===== continuation @ rva d2f8380 (image 18d2f8380) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f8380(void)

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



// ===== continuation @ rva d2f833b (image 18d2f833b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f833b(void)

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



// ===== continuation @ rva d2f2a5d (image 18d2f2a5d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d2f47a9(void)

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



// ===== continuation @ rva d2f8a12 (image 18d2f8a12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f8a12(void)

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



// ===== continuation @ rva d2f89be (image 18d2f89be) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f89be(void)

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



// ===== continuation @ rva d2f9851 (image 18d2f9851) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f9851(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1821ad598)();
  return;
}



// ===== continuation @ rva d2f900f (image 18d2f900f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f900f(void)

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



// ===== continuation @ rva d2f9894 (image 18d2f9894) =====

void FUN_18d2f9894(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d2f8ab8 (image 18d2f8ab8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f8ab8(void)

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



// ===== continuation @ rva d2f8d25 (image 18d2f8d25) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f8d25(void)

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



// ===== continuation @ rva d2f9407 (image 18d2f9407) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2f9407(void)

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



// ===== continuation @ rva d2f8d7d (image 18d2f8d7d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f8d7d(void)

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



// ===== continuation @ rva d2f9875 (image 18d2f9875) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f9875(void)

{
  (*_DAT_1821ad728)();
  return;
}



// ===== continuation @ rva d2f9885 (image 18d2f9885) =====

void FUN_18d2f9885(void)

{
  return;
}



// ===== continuation @ rva d2f9629 (image 18d2f9629) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f9629(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1821ada68)();
  return;
}



// ===== continuation @ rva d2fb9a6 (image 18d2fb9a6) =====

void FUN_18d2fb9a6(void)

{
  return;
}



// ===== continuation @ rva d2f9a0c (image 18d2f9a0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f9a0c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1821ae9b8)();
  return;
}



// ===== continuation @ rva d2fc54a (image 18d2fc54a) =====

void FUN_18d2fc54a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d2fbb85 (image 18d2fbb85) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2fbb85(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000078;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000078 < 0 || iVar1 <= in_stack_00000078) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2fc4e4 (image 18d2fc4e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2fc4e4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1821adc38)();
  return;
}



// ===== continuation @ rva d2fc1a9 (image 18d2fc1a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2fc1a9(void)

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



// ===== continuation @ rva d2fb4cd (image 18d2fb4cd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2fb4cd(void)

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



// ===== continuation @ rva d2facdc (image 18d2facdc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2facdc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1821ae698)();
  return;
}



// ===== continuation @ rva d2fa428 (image 18d2fa428) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2fa428(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1821ae858)();
  return;
}



// ===== continuation @ rva d2f9cfc (image 18d2f9cfc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2f9cfc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1821ae758)();
  return;
}



// ===== continuation @ rva d2fa0c8 (image 18d2fa0c8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2fa0c8(void)

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



// ===== continuation @ rva d2fc246 (image 18d2fc246) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2fc246(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1821add78)();
  return;
}



// ===== continuation @ rva d2fbe35 (image 18d2fbe35) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2fbe35(void)

{
  FUN_190de3220();
  (*_DAT_1821ae1b8)();
  return;
}



// ===== continuation @ rva d2c1723 (image 18d2c1723) =====

void FUN_18d2c1723(void)

{
  return;
}



// ===== continuation @ rva d2bc9cd (image 18d2bc9cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2bc9cd(void)

{
  FUN_190ddce00();
  (*_DAT_1821a3848)();
  return;
}



// ===== continuation @ rva d2c2862 (image 18d2c2862) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2c2862(void)

{
  FUN_190de3220();
  (*_DAT_1821a37e8)();
  return;
}



// ===== continuation @ rva d2c320c (image 18d2c320c) =====

void FUN_18d2c320c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d2c0843 (image 18d2c0843) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2c0843(void)

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



// ===== continuation @ rva d2c1a13 (image 18d2c1a13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2c1a13(void)

{
  int in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d2c31c0 (image 18d2c31c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2c31c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_1821a4388)();
  return;
}



// ===== continuation @ rva d2c02ed (image 18d2c02ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2c02ed(void)

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



// ===== continuation @ rva d2c1ea8 (image 18d2c1ea8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2c1ea8(void)

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



// ===== continuation @ rva d2c3015 (image 18d2c3015) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2c3015(void)

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



// ===== continuation @ rva d2c066d (image 18d2c066d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2c066d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1821a3568)();
  return;
}



// ===== continuation @ rva d2c04c4 (image 18d2c04c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d2c04c4(void)

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



