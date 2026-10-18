// ===== continuation @ rva 47f1a57 (image 1847f1a57) =====

void FUN_1847f1a57(void)

{
  return;
}



// ===== continuation @ rva 47eaebf (image 1847eaebf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847eaebf(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
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



// ===== continuation @ rva 47ee469 (image 1847ee469) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847ee469(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
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



// ===== continuation @ rva 47f0f00 (image 1847f0f00) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847f0f00(void)

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



// ===== continuation @ rva 47ed4c7 (image 1847ed4c7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847ed4c7(void)

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



// ===== continuation @ rva 47f15d5 (image 1847f15d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847f15d5(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
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



// ===== continuation @ rva 47f00a6 (image 1847f00a6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847f00a6(void)

{
  char cVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  uint unaff_R15D;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_XMM9_Da;
  uint in_stack_00000040;
  
  uVar2 = (ulonglong)unaff_R15D ^ 0x84222325;
  uVar2 = (~_DAT_18307cf40 + 2) *
          ((_DAT_18307d050 ^ uVar2) + (ulonglong)((uint)_DAT_18307d050 & (uint)uVar2) * 2);
  uVar3 = (uVar2 | _DAT_18307d170) + (uVar2 & _DAT_18307d170);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar2 = (ulonglong)unaff_R15D ^ 0x84222324;
  _DAT_18307d2a0 = func_0x0001847f1c70((uVar2 | uVar3) + (ulonglong)((uint)uVar2 & (uint)uVar3));
  uVar5 = unaff_R15D & _DAT_18001a990;
  uVar6 = unaff_R15D ^ _DAT_18001a990;
  uVar7 = unaff_R15D ^ unaff_XMM9_Da;
  uVar3 = ((_DAT_18307d2a0 & 0xffffffff) * (ulonglong)_DAT_1802388d0 +
           ((_DAT_18307d2a0 & 0xffffffff) * (ulonglong)_DAT_1802388e0 +
            (_DAT_18307d2a0 >> 0x20) * (ulonglong)_DAT_1802388d0 << 0x20) ^ (ulonglong)unaff_R15D) &
          0x7fffffffffffffff;
  uVar2 = ((ulonglong)uVar7 * (ulonglong)_DAT_180238960 + _DAT_180238970 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_180238950 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_180238940 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_180238930 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180238920 << 0x20 |
          (ulonglong)uVar5 * (ulonglong)_DAT_180238910) +
          ((ulonglong)unaff_R15D * (ulonglong)_DAT_180238900 << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_1802388f0 +
          (-(((ulonglong)uVar7 * (ulonglong)_DAT_180238a30 + _DAT_180238a40 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_180238a20) -
          (((ulonglong)uVar6 * (ulonglong)_DAT_180238a10 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_180238a00 +
           ((ulonglong)(unaff_R15D | _DAT_18001a990) * (ulonglong)_DAT_1802389f0 << 0x20) +
           (ulonglong)(unaff_R15D | _DAT_18001a990) * (ulonglong)_DAT_1802389e0 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_1802389d0 << 0x20 |
          (ulonglong)uVar5 * (ulonglong)_DAT_1802389c0) +
          ((ulonglong)unaff_R15D * (ulonglong)_DAT_1802389b0 << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_1802389a0)) + 0x952bf0677501d42f;
  _DAT_18307cf38 = _DAT_18307d1f8 ^ uVar3 ^ uVar2;
  _DAT_18307d038 = (_DAT_18307d038 ^ uVar3) + uVar2 ^ 0x3ff09b6d3dd438e4;
  _DAT_18307d140 = (_DAT_18307d140 * 0x6dda8aa6f07f33b1 ^ _DAT_18307d038) + uVar3;
  _DAT_18307d0b8 = _DAT_18307d140 ^ _DAT_18307d038;
  _DAT_18307d288 = _DAT_18307cf58 ^ uVar2;
  uVar5 = (uint)uVar2;
  _DAT_18307d120 = uVar2 & 0xffffffff;
  uVar4 = (ulonglong)in_stack_00000040 ^ 0x84222325;
  uVar3 = ((_DAT_18307d1c8 ^ uVar4) + (ulonglong)((uint)_DAT_18307d1c8 & (uint)uVar4) * 2) *
          ((uVar2 & 0xffffffff) - _DAT_18307cfc8);
  uVar3 = (uVar3 | _DAT_18307cf48) + (uVar3 & _DAT_18307cf48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar4 = uVar4 ^ uVar2 & 0xffffffff;
  _DAT_18307d0f8 = func_0x0001847f1c70((uVar4 | uVar3) + (ulonglong)((uint)uVar4 & (uint)uVar3));
  uVar7 = in_stack_00000040 ^ unaff_XMM9_Da;
  uVar6 = uVar5 ^ unaff_XMM9_Da;
  uVar3 = _DAT_18307d0f8 & 0xffffffffffffff00;
  _DAT_18307cfb0 =
       ((((ulonglong)uVar6 * (ulonglong)_DAT_180238a70 + _DAT_180238ac0 << 0x20) +
         (ulonglong)uVar6 * (ulonglong)_DAT_180238ab0 +
        ((ulonglong)uVar7 * (ulonglong)_DAT_180238a50 + _DAT_180238aa0 << 0x20) +
        (ulonglong)uVar7 * (ulonglong)_DAT_180238a90 +
        (ulonglong)in_stack_00000040 * (ulonglong)_DAT_180238a60 +
        ((ulonglong)(in_stack_00000040 * _DAT_180238a50) << 0x20) +
        (uVar2 & 0xffffffff) * (ulonglong)_DAT_180238a80 +
        ((uVar2 & 0xffffffff) * (ulonglong)_DAT_180238a70 << 0x20)) -
       (((ulonglong)uVar6 * (ulonglong)_DAT_180238b90 + _DAT_180238ba0 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_180238b80 +
       ((ulonglong)uVar7 * (ulonglong)_DAT_180238b60 + _DAT_180238b70 << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_180238b50 +
       ((ulonglong)(in_stack_00000040 | uVar5) * (ulonglong)_DAT_180238b40 << 0x20) +
       (ulonglong)(in_stack_00000040 | uVar5) * (ulonglong)_DAT_180238b30 +
       ((ulonglong)(in_stack_00000040 & uVar5) * (ulonglong)_DAT_180238b40 << 0x20) +
       (ulonglong)(in_stack_00000040 & uVar5) * (ulonglong)_DAT_180238b30 +
       ((ulonglong)(in_stack_00000040 * _DAT_180238b00) << 0x20) +
       (ulonglong)in_stack_00000040 * (ulonglong)_DAT_180238af0 +
       ((uVar2 & 0xffffffff) * (ulonglong)_DAT_180238b20 << 0x20) +
       (uVar2 & 0xffffffff) * (ulonglong)_DAT_180238b10)) + 0xde0b112cd69a86fa;
  _DAT_18307d028 = _DAT_18307d278 ^ uVar3 ^ _DAT_18307cfb0;
  _DAT_18307d128 = (_DAT_18307d128 ^ uVar3) + _DAT_18307cfb0 ^ 0xeb30abec53a2e4d4;
  _DAT_18307d220 = (_DAT_18307d220 * 0x3c59914b0846f1b9 ^ _DAT_18307d128) + uVar3;
  _DAT_18307d248 = _DAT_18307d220 ^ _DAT_18307d128;
  _DAT_18307cfb0 = _DAT_18307cfb0 & 0xffffffff;
  FUN_190dd72e0((ulonglong)uVar6 * (ulonglong)_DAT_180238b80,*_DAT_18301ee50 + 0x2e9,0x12);
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



// ===== continuation @ rva 47f0efb (image 1847f0efb) =====

void thunk_FUN_1847eb041(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 47f0d39 (image 1847f0d39) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847f0d39(void)

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



// ===== continuation @ rva 47ed37d (image 1847ed37d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847ed37d(void)

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



// ===== continuation @ rva 484facb (image 18484facb) =====

void FUN_18484facb(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(longlong **)(unaff_RBP + 0x10) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018484fb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180251280 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 484fa76 (image 18484fa76) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018484faad */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18484fa76(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4865788 (image 184865788) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184865788(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x28) = uVar2;
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



// ===== continuation @ rva 485a980 (image 18485a980) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18485a980(void)

{
  int iVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  
  *(undefined4 *)(unaff_RBP + 0x90) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x88);
  *(undefined4 *)(unaff_RBP + 0x40) = unaff_EDI;
  *(undefined4 *)(unaff_RBP + 0xa0) = unaff_EDI;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0xa0) < 0 || iVar1 <= *(int *)(unaff_RBP + 0xa0)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4854432 (image 184854432) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184854871 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184854432(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar18;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 in_XMM0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar24;
  ulonglong uVar23;
  undefined1 unaff_XMM6 [16];
  uint uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  uint uVar28;
  
  auVar17 = pshufb(in_XMM0,_DAT_1800170c0);
  uVar13 = auVar17._8_8_ + auVar17._0_8_;
  uVar14 = uVar13 + _DAT_18307ef28;
  if (auVar17._4_4_ < 0) {
    uVar14 = _DAT_18307ee70 ^ uVar13;
  }
  _DAT_18307f040 = func_0x000184878c80(in_XMM0[5] ^ uVar14);
  uVar18 = (uint)(unaff_RBX >> 0x20);
  auVar19._8_4_ = (int)unaff_RBX;
  auVar19._0_8_ = unaff_RBX;
  auVar19._12_4_ = uVar18;
  uVar22 = unaff_XMM6._0_4_;
  uVar24 = unaff_XMM6._4_4_;
  auVar17._0_8_ = unaff_XMM6._0_8_;
  auVar17._8_4_ = uVar22;
  auVar17._12_4_ = uVar24;
  uVar5 = (ulonglong)_DAT_180252300;
  uVar14 = (ulonglong)_DAT_180252300;
  auVar27 = auVar19 ^ auVar17;
  *(undefined1 (*) [16])(unaff_RBP + 0x70) = unaff_XMM6;
  uVar12 = _DAT_180252370;
  uVar11 = _DAT_180252360;
  uVar6 = (ulonglong)_DAT_1802522f0;
  uVar13 = (ulonglong)_DAT_1802522f0;
  uVar1 = (ulonglong)_DAT_180252310;
  uVar23 = (unaff_RBX & 0xffffffff) * (ulonglong)uVar22 +
           ((unaff_RBX & 0xffffffff) * (ulonglong)uVar24 + (ulonglong)uVar18 * (ulonglong)uVar22 <<
           0x20);
  uVar7 = (ulonglong)_DAT_180252310;
  uVar2 = (ulonglong)_DAT_180252330;
  uVar28 = SUB164(auVar19 & auVar17,0);
  uVar3 = (ulonglong)_DAT_180252320;
  uVar26 = SUB168(auVar19 & auVar17,0);
  uVar8 = (ulonglong)_DAT_180252320;
  uVar4 = (ulonglong)_DAT_180252350;
  uVar25 = SUB164(auVar19 | auVar17,0);
  uVar9 = (ulonglong)_DAT_180252340;
  uVar10 = (ulonglong)_DAT_180252340;
  *(undefined1 (*) [16])(unaff_RBP + 0x50) = auVar27;
  lVar15 = (uVar23 & 0xffffffff) * (ulonglong)_DAT_180252380 +
           ((ulonglong)_DAT_180252390 * (uVar23 & 0xffffffff) +
            (uVar23 >> 0x20) * (ulonglong)_DAT_180252380 << 0x20);
  auVar21._8_4_ = 0xffffffff;
  auVar21._0_8_ = 0xffffffffffffffff;
  auVar21._12_4_ = 0xffffffff;
  auVar21 = auVar21 ^ *(undefined1 (*) [16])(unaff_RBP + 0x70);
  uVar20 = auVar21._0_4_;
  _DAT_18307ed78 =
       (((ulonglong)uVar11 * (ulonglong)auVar27._0_4_ +
         ((ulonglong)uVar12 * (ulonglong)auVar27._0_4_ + (auVar27._0_8_ >> 0x20) * (ulonglong)uVar11
         << 0x20) +
         uVar25 * uVar10 + (uVar4 * uVar25 + (SUB168(auVar19 | auVar17,0) >> 0x20) * uVar9 << 0x20)
         + uVar3 * uVar28 + (uVar2 * uVar28 + (uVar26 >> 0x20) * uVar8 << 0x20) +
           uVar1 * uVar22 + (uVar24 * uVar7 + uVar13 * uVar22 << 0x20) +
           uVar14 * (unaff_RBX & 0xffffffff) +
           (uVar18 * uVar5 + (unaff_RBX & 0xffffffff) * uVar6 << 0x20) + lVar15) -
       ((ulonglong)uVar20 * (_DAT_1802523e0 & 0xffffffff) +
        ((ulonglong)_DAT_180252430 * (ulonglong)uVar20 +
         (auVar21._0_8_ >> 0x20) * (_DAT_1802523e0 & 0xffffffff) << 0x20) +
        (ulonglong)*(uint *)(unaff_RBP + 0x50) * (ulonglong)_DAT_180252410 +
        ((ulonglong)_DAT_180252420 * (ulonglong)*(uint *)(unaff_RBP + 0x50) +
         (auVar27._0_8_ >> 0x20) * (ulonglong)_DAT_180252410 << 0x20) +
        (ulonglong)uVar28 * (ulonglong)_DAT_1802523f0 +
        ((ulonglong)_DAT_180252400 * (ulonglong)uVar28 +
         (uVar26 >> 0x20) * (ulonglong)_DAT_1802523f0 << 0x20) +
        ((ulonglong)uVar22 * (ulonglong)_DAT_1802523d0 +
         (ulonglong)uVar24 * (ulonglong)_DAT_1802523c0 << 0x20) +
        (ulonglong)uVar22 * (ulonglong)_DAT_1802523c0 +
        ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_1802523b0 +
         (ulonglong)uVar18 * (ulonglong)_DAT_1802523a0 << 0x20) +
        (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_1802523a0 + lVar15)) + 0x30de9071b3bfcb61;
  _DAT_18307ef50 = _DAT_18307ed78 ^ _DAT_18307f040;
  _DAT_18307edd0 = (_DAT_18307edd0 ^ _DAT_18307f040) + _DAT_18307ed78 ^ 0x673256cc64ce153f;
  _DAT_18307edf8 = (_DAT_18307edf8 * 0x6773e2c8c8d69f69 ^ _DAT_18307edd0) + _DAT_18307f040;
  _DAT_18307ee38 = _DAT_18307edf8 ^ _DAT_18307edd0;
  lVar15 = unaff_RBP + -0x30;
  uVar16 = FUN_18414b520(lVar15);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar15 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(*unaff_RSI + 0x70))(uVar16,*(undefined8 *)(unaff_RBP + 0x28),lVar15);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4865d12 (image 184865d12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184865d12(longlong param_1)

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



// ===== continuation @ rva 4865bbc (image 184865bbc) =====

void FUN_184865bbc(void)

{
  return;
}



// ===== continuation @ rva 48658b7 (image 1848658b7) =====

undefined8 thunk_FUN_18484fab0(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 485d8a2 (image 18485d8a2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18485d8a2(void)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong unaff_R12;
  int unaff_R14D;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  *(undefined4 *)(unaff_RBP + 0x38) = unaff_ESI;
  uVar6 = _DAT_18307f030;
  uVar13 = _DAT_18307ef80;
  uVar4 = _DAT_18307ed50;
  *(bool *)(unaff_RBP + 0x40) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar4 = (~uVar4 + 0x242a33e1) * ((uVar6 ^ 0x5fd38b94) + (ulonglong)((uint)uVar6 & 0x5fd38b94) * 2)
  ;
  uVar4 = (uVar4 | uVar13) + (uVar4 & uVar13);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307ee00 = func_0x000184878c80((uVar4 | 0x7bf9b874) + (ulonglong)((uint)uVar4 & 0x7bf9b874))
  ;
  _DAT_18307eeb8 = (_DAT_18307eeb8 ^ _DAT_18307ee00) + 0xfffbbbf1 ^ 0xb190776b40e02efe;
  _DAT_18307ef00 = (_DAT_18307ef00 * -0x6c38ef85b3c8669f ^ _DAT_18307eeb8) + _DAT_18307ee00;
  _DAT_18307edc8 = _DAT_18307ef00 ^ _DAT_18307eeb8;
  _DAT_18307eeb0 = 0xfffbbbf1;
  _DAT_18307f0d0 = func_0x000184878c80(_DAT_18307f0a0 + 0xff81ffa20cffcbff ^ 0x4b);
  _DAT_18307ee80 = (_DAT_18307ee80 ^ _DAT_18307f0d0) + 0x261ea13a ^ 0x78196350ec704ff2;
  _DAT_18307edb0 = (_DAT_18307edb0 * 0x5412ab4124dcd8cf ^ _DAT_18307ee80) + _DAT_18307f0d0;
  _DAT_18307f020 = _DAT_18307edb0 ^ _DAT_18307ee80;
  _DAT_18307eef8 = 0x261ea13a;
  uVar4 = (~_DAT_18307f048 + 0xdf838fe5) *
          ((_DAT_18307f0e0 ^ unaff_R12) + (ulonglong)((uint)_DAT_18307f0e0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18307f0b0) + (uVar4 & _DAT_18307f0b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x000184878c80((uVar4 | 0x5ba1acc1) + (ulonglong)((uint)uVar4 & 0x5ba1acc1));
  _DAT_18307f048 = (_DAT_18307f048 ^ uVar4 ^ 0xdf838fe4) - 0xdf838fe4 ^ 0x7b29078790a5bcec;
  _DAT_18307f068 = (uVar4 * 0xc97b4aaff8c54d ^ _DAT_18307f048) + (uVar4 ^ 0xdf838fe4);
  _DAT_18307ed18 = _DAT_18307f068 ^ _DAT_18307f048;
  _DAT_18307ee18 = 0x207c701c;
  uVar4 = (_DAT_18307edd8 ^ _DAT_180251ed0) + _DAT_18307ee90 + 0x84222ce5;
  uVar13 = (_DAT_18307ee90 ^ _UNK_180251ed8) + _DAT_18307edd8 + 0xdf838fe4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307edd8 ^ _DAT_180251ed0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307ee90 ^ _UNK_180251ed8;
  uVar4 = func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307edd8 + 0xdf838fe4) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307ee90 + 0x84222ce5));
  uVar4 = uVar4 << 0x34 | uVar4 >> 0xc;
  _DAT_18307ee38 = _DAT_18307ef70 ^ uVar4 ^ 0xdf839fa4;
  _DAT_18307eee0 = (_DAT_18307eee0 ^ uVar4) + 0xdf839fa4 ^ 0x7a87412aacb74a00;
  _DAT_18307efb0 = (_DAT_18307efb0 * -0x14128f2d31b2e201 ^ _DAT_18307eee0) + uVar4;
  _DAT_18307efc0 = _DAT_18307efb0 ^ _DAT_18307eee0;
  _DAT_18307eea0 = 0xdf839fa4;
  uVar4 = (_DAT_18307ef80 ^ _DAT_180251ee0) + _DAT_18307f0b0 + 0x5ba1bc81;
  uVar13 = (_DAT_18307f0b0 ^ _UNK_180251ee8) + _DAT_18307ef80 + 0x207c701c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307ef80 ^ _DAT_180251ee0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307f0b0 ^ _UNK_180251ee8;
  _DAT_18307edd8 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307ef80 + 0x207c701c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307f0b0 + 0x5ba1bc81));
  uVar4 = _DAT_18307edd8 ^ 0x207c6018;
  uVar13 = uVar4 >> 1 | uVar4;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar4;
  _DAT_18307ee08 = _DAT_18307ee20 ^ uVar4 ^ 0x100000fc0;
  _DAT_18307f0f0 = (_DAT_18307f0f0 ^ uVar4) + 0x100000fc0 ^ 0xa2394ac67ab24d1f;
  _DAT_18307ed28 = (_DAT_18307ed28 * 0x3800b0bf89405bc5 ^ _DAT_18307f0f0) + uVar4;
  _DAT_18307ed80 = _DAT_18307ed28 ^ _DAT_18307f0f0;
  _DAT_18307edf0 = 0xfc0;
  _DAT_18307ee18 = func_0x000184878c80(_DAT_18307efe0 + 0xffd3ffa862ff31ff ^ 0x8e);
  uVar4 = _DAT_18307ee18 >> 1 | _DAT_18307ee18;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_18307ee18;
  _DAT_18307f0e0 = _DAT_18307ee60 ^ uVar4 ^ 0x100000fc0;
  _DAT_18307ed78 = (_DAT_18307ed78 ^ uVar4) + 0x100000fc0 ^ 0xc375364e513ce204;
  _DAT_18307edf8 = (_DAT_18307edf8 * -0x6f0b2dc5738fd70d ^ _DAT_18307ed78) + uVar4;
  _DAT_18307efe0 = _DAT_18307edf8 ^ _DAT_18307ed78;
  _DAT_18307ee30 = 0xfc0;
  uVar4 = (~_DAT_18307eea0 + 0x261ea13b) *
          ((_DAT_18307ed70 ^ 0x7bd998d4) + (ulonglong)((uint)_DAT_18307ed70 & 0x7bd998d4) * 2);
  uVar4 = (uVar4 | _DAT_18307ef38) + (uVar4 & _DAT_18307ef38);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307f0e8 = func_0x000184878c80((uVar4 | 0x5dc739ee) + (ulonglong)((uint)uVar4 & 0x5dc739ee))
  ;
  uVar4 = _DAT_18307f0e8 >> 1 | _DAT_18307f0e8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18307f0e8;
  uVar4 = uVar4 << 0x25 | uVar4 >> 0x1b;
  _DAT_18307eee0 = _DAT_18307eda0 ^ uVar4 ^ 0x1261a5d2b;
  _DAT_18307edc8 = (_DAT_18307edc8 ^ uVar4) + 0x1261a5d2b ^ 0x9de9958b2dcdffa1;
  _DAT_18307ee70 = (_DAT_18307ee70 * -0x7608ecc940f9e8df ^ _DAT_18307edc8) + uVar4;
  _DAT_18307ef18 = _DAT_18307ee70 ^ _DAT_18307edc8;
  _DAT_18307ef50 = 0x261a5d2b;
  uVar4 = (~_DAT_18307ed60 + 0x261ea13b) *
          ((_DAT_18307ef88 ^ 0x7bd998d4) + (ulonglong)((uint)_DAT_18307ef88 & 0x7bd998d4) * 2);
  uVar4 = (uVar4 | _DAT_18307ef40) + (uVar4 & _DAT_18307ef40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307ef98 = func_0x000184878c80((uVar4 | 0x5dc739ee) + (ulonglong)((uint)uVar4 & 0x5dc739ee))
  ;
  uVar4 = _DAT_18307ef98 - (_DAT_18307ef98 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18307ef98;
  _DAT_18307efe0 = (_DAT_18307efe0 ^ uVar4) + 0xd9e51acb ^ 0x2b5d5fcffefa6f89;
  _DAT_18307ed48 = (_DAT_18307ed48 * -0x20c36ee61d15e3fb ^ _DAT_18307efe0) + uVar4;
  _DAT_18307ee20 = _DAT_18307ed48 ^ _DAT_18307efe0;
  _DAT_18307ef18 = 0xd9e51acb;
  _DAT_18307eff0 = func_0x000184878c80(_DAT_18307edf8 + 0x28ffa311ff3aff ^ 0xce);
  uVar4 = _DAT_18307eff0 >> 1 | _DAT_18307eff0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18307eff0;
  _DAT_18307f090 = (_DAT_18307f090 ^ uVar4) + 0x261aa130 ^ 0x49e3d7844850991e;
  _DAT_18307f088 = (_DAT_18307f088 * -0x776184fcb15f529f ^ _DAT_18307f090) + uVar4;
  _DAT_18307f0b8 = _DAT_18307f088 ^ _DAT_18307f090;
  _DAT_18307eed0 = 0x261aa130;
  uVar4 = (~_DAT_18307ed78 + 0x4c354261) *
          ((_DAT_18307eec8 ^ 0x5dc739ee) + (ulonglong)((uint)_DAT_18307eec8 & 0x5dc739ee) * 2);
  uVar4 = (uVar4 | _DAT_18307f0f0) + (uVar4 & _DAT_18307f0f0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307f030 = func_0x000184878c80((uVar4 | 0x11f27b8e) + (ulonglong)((uint)uVar4 & 0x11f27b8e))
  ;
  uVar4 = (_DAT_18307f030 ^ 0x40dd58e196d96220) * 0x3a69849f8cdfd85d & 0xfffffffffff00000;
  _DAT_18307ee58 = _DAT_18307f090 ^ uVar4 ^ 0x1261a5d2b;
  _DAT_18307ed10 = (_DAT_18307ed10 ^ uVar4) + 0x1261a5d2b ^ 0xae09c280b57e4c30;
  _DAT_18307ef58 = (_DAT_18307ef58 * -0x558ca26ee531d48f ^ _DAT_18307ed10) + uVar4;
  _DAT_18307ee50 = _DAT_18307ef58 ^ _DAT_18307ed10;
  _DAT_18307ee10 = 0x261a5d2b;
  uVar4 = (_DAT_18307f030 ^ _DAT_180251ef0) + _DAT_18307ee88 + 0xa2387e0e;
  uVar13 = (_DAT_18307ee88 ^ _UNK_180251ef8) + _DAT_18307f030 + 0x261a5d2b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307f030 ^ _DAT_180251ef0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307ee88 ^ _UNK_180251ef8;
  _DAT_18307efb0 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307f030 + 0x261a5d2b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307ee88 + 0xa2387e0e));
  _DAT_18307f070 =
       (((_DAT_18307efb0 ^ 0x500165fd2a44539) << 8 | (_DAT_18307efb0 ^ 0x500165fd2a44539) >> 0x38) ^
       0x261a5d2b) & 0x3fffffffffffff;
  _DAT_18307eff0 = _DAT_18307eff0 ^ _DAT_18307f070 ^ 0xe11aa9b07f17d22;
  _DAT_18307ef10 = (_DAT_18307ef10 * 0x5ea05e0c33ebed7b ^ _DAT_18307eff0) + _DAT_18307f070;
  _DAT_18307ef08 = _DAT_18307ef10 ^ _DAT_18307eff0;
  _DAT_18307edc8 = 0;
  uVar4 = (~_DAT_18307ef20 + 0x100000000) *
          ((_DAT_18307ed30 ^ 0x7bd998d4) + (ulonglong)((uint)_DAT_18307ed30 & 0x7bd998d4) * 2);
  uVar4 = (uVar4 | _DAT_18307efd8) + (uVar4 & _DAT_18307efd8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307ee98 = func_0x000184878c80((uVar4 | 0x8426672b) + (ulonglong)((uint)uVar4 & 0x8426672b))
  ;
  uVar4 = (_DAT_18307ee98 ^ 0xfffbbbf1) * -0x629fa7715a5a91b7;
  _DAT_18307ef28 = (_DAT_18307ef28 ^ uVar4) + 0x4440e ^ 0x9e0e822bd8c19a31;
  _DAT_18307ed10 = (_DAT_18307ed10 * 0x4844f98659e7197f ^ _DAT_18307ef28) + uVar4;
  _DAT_18307ed68 = _DAT_18307ed10 ^ _DAT_18307ef28;
  _DAT_18307f040 = 0x4440e;
  uVar4 = (_DAT_18307efb8 ^ _DAT_180251f00) + _DAT_18307ee28 + 0x7bd998d4;
  uVar13 = (_DAT_18307ee28 ^ _UNK_180251f08) + _DAT_18307efb8 + 0x4440e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307efb8 ^ _DAT_180251f00;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307ee28 ^ _UNK_180251f08;
  _DAT_18307ee48 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307efb8 + 0x4440e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307ee28 + 0x7bd998d4));
  uVar4 = (_DAT_18307ee48 ^ 0x443fbcd700f20) << 0x31 | (_DAT_18307ee48 ^ 0x443fbcd700f20) >> 0xf;
  _DAT_18307ee00 = _DAT_18307ee00 ^ uVar4 ^ 0x6a0fe06175cc6ee6;
  _DAT_18307ee18 = (_DAT_18307ee18 * 0x5f936ffcc018fc3 ^ _DAT_18307ee00) + uVar4;
  _DAT_18307ed08 = _DAT_18307ee18 ^ _DAT_18307ee00;
  _DAT_18307efe0 = 0;
  uVar4 = ((_DAT_18307f0e8 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_18307f0e8 & 0x84222ce5) * 2) *
          -_DAT_18307f070;
  uVar4 = (uVar4 | _DAT_18307ef20) + (uVar4 & _DAT_18307ef20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307efe0 = func_0x000184878c80((uVar4 | 0x84222ce5) + (ulonglong)((uint)uVar4 & 0x84222ce5))
  ;
  uVar4 = _DAT_18307efe0 & 0xffffffffffffffc0;
  _DAT_18307ef08 = _DAT_18307ed08 ^ uVar4 ^ 0xfc0;
  _DAT_18307eeb0 = (_DAT_18307eeb0 ^ uVar4) + 0xfc0 ^ 0x7f8d33e3fc61ceb4;
  _DAT_18307ed60 = (_DAT_18307ed60 * -0x6d08d74ec184da5f ^ _DAT_18307eeb0) + uVar4;
  _DAT_18307edf0 = _DAT_18307ed60 ^ _DAT_18307eeb0;
  _DAT_18307f088 = 0xfc0;
  uVar4 = (~_DAT_18307eec0 + 0xdbf1a8b2) *
          ((_DAT_18307ed08 ^ 0x5fd38b94) + (ulonglong)((uint)_DAT_18307ed08 & 0x5fd38b94) * 2);
  uVar4 = (uVar4 | _DAT_18307ed70) + (uVar4 & _DAT_18307ed70);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307f058 = func_0x000184878c80((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = (_DAT_18307f058 ^ 0xbcf75abde26aca61) * 0x646e713a563dfde1 ^ 0xdbf1a8b1;
  _DAT_18307edd8 = _DAT_18307edd8 ^ uVar4 ^ 0xa986596abc48c4f5;
  _DAT_18307ef90 = (_DAT_18307ef90 * 0x2844dfe81c0ed625 ^ _DAT_18307edd8) + uVar4;
  _DAT_18307ee40 = _DAT_18307ef90 ^ _DAT_18307edd8;
  _DAT_18307edc8 = 0;
  uVar4 = (_DAT_18307f0b8 ^ 0x84222ce5) + _DAT_18307eee8 + 0x84222ce5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307f0b8 ^ 0x84222ce5;
  uVar13 = ((_DAT_18307eee8 + _DAT_18307f0b8) * 0x2000 | _DAT_18307eee8 + _DAT_18307f0b8 >> 0x33) ^
           _DAT_18307eee8;
  _DAT_18307ed48 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_18307f0b8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307eee8 + 0x84222ce5));
  auVar11 = _DAT_1800170c0;
  uVar4 = (_DAT_18307ed48 ^ 0xfc0) * -0x455e7ac0711964ef ^ 0xfc0;
  _DAT_18307f040 = _DAT_18307f040 ^ uVar4 ^ 0xfc0;
  _DAT_18307efb0 = (_DAT_18307efb0 ^ uVar4) + 0xfc0 ^ 0xe1891a99cd6a4a38;
  _DAT_18307eec0 = (_DAT_18307eec0 * -0x7c16cdd1ccfda6d1 ^ _DAT_18307efb0) + uVar4;
  _DAT_18307ed58 = _DAT_18307eec0 ^ _DAT_18307efb0;
  _DAT_18307ede0 = 0xfc0;
  auVar9._8_8_ = _UNK_180144f68;
  auVar9._0_8_ = (ulonglong)(uint)(unaff_R14D << 6) ^ 0x84222325;
  auVar8 = pshufb(auVar9 ^ _DAT_180251f10,_DAT_1800170c0);
  uVar13 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar13 + _DAT_18307ed20;
  if (auVar8._4_4_ < 0) {
    uVar4 = _DAT_18307ed10 ^ uVar13;
  }
  _DAT_18307f050 = func_0x000184878c80(SUB161(auVar9 ^ _DAT_180251f10,5) ^ uVar4);
  uVar6 = (ulonglong)(unaff_R14D << 6 & 0xfc0);
  _DAT_18307ed28 = (_DAT_18307ed28 ^ _DAT_18307f050) + uVar6 ^ 0x99bc0413d3d5365f;
  _DAT_18307ef90 = (_DAT_18307ef90 * 0x6e080d5b5b800ef1 ^ _DAT_18307ed28) + _DAT_18307f050;
  _DAT_18307ed58 = _DAT_18307ef90 ^ _DAT_18307ed28;
  _DAT_18307f0d0 = _DAT_18307f0b8 ^ uVar6;
  _DAT_18307efc0 = uVar6;
  *(int *)(unaff_RBP + 0x70) = *(int *)(unaff_RBP + 0x70) << 0xc;
  _DAT_18307f0a8 = func_0x000184878c80(_DAT_18307ed80 ^ 0x4bffb697002cb8);
  _DAT_18307eed0 =
       (_DAT_18307eed0 ^ _DAT_18307f0a8 ^ 0xc36c2a485267c820) + 0xff777f8c ^ 0xb27856f5679f7d43;
  _DAT_18307f040 =
       (_DAT_18307f040 * 0x6750e78c6f43b743 ^ _DAT_18307eed0) +
       (_DAT_18307f0a8 ^ 0xc36c2a485267c820);
  _DAT_18307ee70 = _DAT_18307f040 ^ _DAT_18307eed0;
  _DAT_18307f090 = 0xff777f8c;
  _DAT_18307eee0 = func_0x000184878c80(_DAT_18307ee78 ^ 0xffc600189b0009bc);
  uVar4 = (ulonglong)(((uint)_DAT_18307eee0 ^ 0x8c901aa) & 0x1cd931ae) ^ 0xa3f1d4e6;
  _DAT_18307eed0 = (_DAT_18307eed0 ^ uVar4) + 0xbf28e548 ^ 0x306bc690ca3ad033;
  _DAT_18307edf8 = (_DAT_18307edf8 * 0x47166d56458efe65 ^ _DAT_18307eed0) + uVar4;
  _DAT_18307efc0 = _DAT_18307edf8 ^ _DAT_18307eed0;
  _DAT_18307ed18 = 0xbf28e548;
  _DAT_18307ed80 = func_0x000184878c80(_DAT_18307eda0 + 0xffa000caa4ffd3ff ^ 0xdc);
  uVar4 = _DAT_18307ed80 ^ 0x517e8380;
  uVar13 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar4;
  _DAT_18307ef38 = (_DAT_18307ef38 ^ uVar4) - 0x517e8380 ^ 0xe73429142fbf1895;
  _DAT_18307edd0 = (_DAT_18307edd0 * -0x14588f1d6c85f9e3 ^ _DAT_18307ef38) + uVar4;
  _DAT_18307edb0 = _DAT_18307edd0 ^ _DAT_18307ef38;
  _DAT_18307f0c0 = _DAT_18307ed18 ^ 0xffffffffae817c80;
  _DAT_18307f088 = 0xae817c80;
  _DAT_18307ef30 = func_0x000184878c80(_DAT_18307eee0 ^ 0xffd3ffb722ffd378);
  uVar4 = _DAT_18307ef30 ^ 0xae817c80;
  _DAT_18307edb0 = _DAT_18307ee48 ^ uVar4 ^ 0x10000f000;
  _DAT_18307ef08 = (_DAT_18307ef08 ^ uVar4) + 0x10000f000 ^ 0xc5384e3871b85d7e;
  _DAT_18307ef60 = (_DAT_18307ef60 * -0x10a84b315505427 ^ _DAT_18307ef08) + uVar4;
  _DAT_18307ed30 = _DAT_18307ef60 ^ _DAT_18307ef08;
  _DAT_18307efb8 = 0xf000;
  _DAT_18307edf0 = func_0x000184878c80(_DAT_18307ee40 ^ 0xff9400e6b9005584);
  _DAT_18307ef60 = _DAT_18307ef60 - 0x6f8cb76c ^ 0x7f905fa155c3acd4;
  _DAT_18307ed10 = _DAT_18307f068 * -0x1497d47a4ed9c0c1;
  _DAT_18307f068 = _DAT_18307ed10 ^ _DAT_18307ef60;
  _DAT_18307ee48 = 0x90734894;
  uVar4 = (_DAT_18307efc0 ^ _DAT_180251f20) + _DAT_18307ed48 + 0x8422d325;
  uVar13 = (_DAT_18307ed48 ^ _UNK_180251f28) + _DAT_18307efc0 + 0x6f8cb76c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307efc0 ^ _DAT_180251f20;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307ed48 ^ _UNK_180251f28;
  _DAT_18307ef08 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307efc0 + 0x6f8cb76c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307ed48 + 0x8422d325));
  uVar4 = _DAT_18307ef08 & 0xfffffffffffc0000;
  _DAT_18307ef20 = _DAT_18307ed60 ^ uVar4 ^ 0x6f8da76c;
  _DAT_18307f010 = (_DAT_18307f010 ^ uVar4) + 0x6f8da76c ^ 0xce1dbe829dac8053;
  _DAT_18307f0f8 = (_DAT_18307f0f8 * -0x643186349024f2db ^ _DAT_18307f010) + uVar4;
  _DAT_18307ef38 = _DAT_18307f0f8 ^ _DAT_18307f010;
  _DAT_18307f0a8 = 0x6f8da76c;
  uVar4 = (~_DAT_18307ee88 + 0x90734895) *
          ((_DAT_18307eef8 ^ 0xebaf8449) + (ulonglong)((uint)_DAT_18307eef8 & 0xebaf8449) * 2);
  uVar4 = (uVar4 | _DAT_18307eef0) + (uVar4 & _DAT_18307eef0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307ef78 = func_0x000184878c80((uVar4 | 0x7bdcccdd) + (ulonglong)((uint)uVar4 & 0x7bdcccdd))
  ;
  uVar4 = _DAT_18307ef78 ^ 0x6f8da76c;
  _DAT_18307ed08 = _DAT_18307ef60 ^ uVar4 ^ 0x10000f000;
  _DAT_18307ef28 = (_DAT_18307ef28 ^ uVar4) + 0x10000f000 ^ 0xbab4f12f15468dae;
  _DAT_18307ee30 = (_DAT_18307ee30 * 0xac236718fd031bf ^ _DAT_18307ef28) + uVar4;
  _DAT_18307f0f8 = _DAT_18307ee30 ^ _DAT_18307ef28;
  _DAT_18307f070 = 0xf000;
  uVar4 = (~_DAT_18307f0c0 + 0x78e46f21) *
          ((_DAT_18307eff8 ^ 0x84222325) + (ulonglong)((uint)_DAT_18307eff8 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18307edc8) + (uVar4 & _DAT_18307edc8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307efe8 = func_0x000184878c80((uVar4 | 0xfcc64c05) + (ulonglong)((uint)uVar4 & 0xfcc64c05))
  ;
  uVar4 = _DAT_18307efe8 << 0x20 | _DAT_18307efe8 >> 0x20;
  uVar13 = uVar4 >> 1 | uVar4;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ uVar4;
  _DAT_18307ee68 = (_DAT_18307ee68 ^ uVar4) - 0x78e46f20 ^ 0x1a86393bfbb7a447;
  _DAT_18307ee18 = (_DAT_18307ee18 * 0x5e3122d485953e47 ^ _DAT_18307ee68) + uVar4;
  _DAT_18307f040 = _DAT_18307ee18 ^ _DAT_18307ee68;
  _DAT_18307ef90 = 0x871b90e0;
  _DAT_18307ee28 = func_0x000184878c80(_DAT_18307efe8 + 0x9c007c0500c5ff ^ 0xbc);
  uVar4 = ((_DAT_18307ee28 ^ 0x7156282e0000) >> 0xc | _DAT_18307ee28 << 0x34) * 0x7fa5ff102f79388d;
  _DAT_18307ed88 = _DAT_18307eea8 ^ uVar4 ^ 0x78e55f20;
  _DAT_18307ee20 = (_DAT_18307ee20 ^ uVar4) + 0x78e55f20 ^ 0x685a71bc7c679b69;
  _DAT_18307f0d8 = (_DAT_18307f0d8 * 0x555a326430294c05 ^ _DAT_18307ee20) + uVar4;
  _DAT_18307ee10 = _DAT_18307f0d8 ^ _DAT_18307ee20;
  _DAT_18307eed0 = 0x78e55f20;
  uVar4 = func_0x000184878c80(_DAT_18307ef00 ^ 0xff9bff94a2ff53ac);
  _DAT_18307ee40 = _DAT_18307eda0 ^ uVar4 ^ 0x10000f000;
  _DAT_18307ef48 = 0xfc00b5987e7a8294;
  _DAT_18307ef90 = (_DAT_18307ef90 * 0x7b91d77e15bd704f ^ 0xfc00b5987e7a8294) + uVar4;
  _DAT_18307edd8 = _DAT_18307ef90 ^ 0xfc00b5987e7a8294;
  _DAT_18307ed30 = 0xf000;
  uVar4 = (~_DAT_18307ef68 + 0xbf28e549) *
          ((_DAT_18307edf0 ^ 0x7b555ca9) + (ulonglong)((uint)_DAT_18307edf0 & 0x7b555ca9) * 2);
  uVar4 = (uVar4 | _DAT_18307efd8) + (uVar4 & _DAT_18307efd8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307ee18 = func_0x000184878c80((uVar4 | 0xc47db9e1) + (ulonglong)((uint)uVar4 & 0xc47db9e1))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_18307ee18 & 0xff777f8c) ^ 0xbf28e548;
  _DAT_18307f098 = _DAT_18307f0b8 ^ uVar4 ^ 0x1bea064d4;
  _DAT_18307ed78 = (_DAT_18307ed78 ^ uVar4) + 0x1bea064d4 ^ 0x5d8f19b7e94a3db0;
  _DAT_18307ed28 = (_DAT_18307ed28 * 0x5d726c39fd17a369 ^ _DAT_18307ed78) + uVar4;
  _DAT_18307ee48 = _DAT_18307ed28 ^ _DAT_18307ed78;
  _DAT_18307efd0 = _DAT_18307ed68 ^ 0x1bea064d4;
  _DAT_18307ee30 = 0xbea064d4;
  uVar4 = (~_DAT_18307ed40 + 0xbf28e549) *
          ((_DAT_18307ef80 ^ 0x7b555ca9) + (ulonglong)((uint)_DAT_18307ef80 & 0x7b555ca9) * 2);
  uVar4 = (uVar4 | _DAT_18307ef40) + (uVar4 & _DAT_18307ef40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307f0d8 = func_0x000184878c80((uVar4 | 0xc47db9e1) + (ulonglong)((uint)uVar4 & 0xc47db9e1))
  ;
  uVar4 = (_DAT_18307f0d8 ^ 0xff777f8c) & 0x7fffffffffffffff;
  _DAT_18307f040 = (_DAT_18307f040 ^ uVar4) + 0xbf206508 ^ 0xefbd93820da5267f;
  _DAT_18307ee98 = (_DAT_18307ee98 * 0x3d356b13fd901019 ^ _DAT_18307f040) + uVar4;
  _DAT_18307ed80 = _DAT_18307ee98 ^ _DAT_18307f040;
  _DAT_18307efa8 = 0xbf206508;
  _DAT_18307eec8 = func_0x000184878c80(_DAT_18307ed78 ^ 0xffeeffb64effd2c9);
  uVar4 = _DAT_18307eec8 ^ 0x1f10c4;
  _DAT_18307f098 = _DAT_18307f088 ^ uVar4 ^ 0xbea064d4;
  _DAT_18307ed08 = (_DAT_18307ed08 ^ uVar4) + 0xbea064d4 ^ 0xc1cc26c03dbc66b2;
  _DAT_18307eef0 = (_DAT_18307eef0 * 0x2967260d0b2a1dfb ^ _DAT_18307ed08) + uVar4;
  _DAT_18307f028 = _DAT_18307eef0 ^ _DAT_18307ed08;
  _DAT_18307f060 = 0xbea064d4;
  uVar4 = (~_DAT_18307edb0 + 0xbea064d5) *
          ((_DAT_18307eec8 ^ 0x3a8247f1) + (ulonglong)((uint)_DAT_18307eec8 & 0x3a8247f1) * 2);
  uVar4 = (uVar4 | _DAT_18307ee38) + (uVar4 & _DAT_18307ee38);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307eda8 = func_0x000184878c80((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_18307eed0 = (ulonglong)(~(uint)_DAT_18307eda8 & 0xbea064d4);
  _DAT_18307f098 = _DAT_18307f098 ^ _DAT_18307eed0 ^ 0xcbe34472bfe35dad;
  _DAT_18307ed98 = (_DAT_18307ed98 * 0x3170a2879be19f3d ^ _DAT_18307f098) + _DAT_18307eed0;
  _DAT_18307ee98 = _DAT_18307ed98 ^ _DAT_18307f098;
  _DAT_18307ed90 = 0;
  _DAT_18307ee20 = func_0x000184878c80(_DAT_18307ed58 ^ 0xff9d00843200a9dc);
  _DAT_18307f040 = (_DAT_18307f040 ^ _DAT_18307ee20 & 0xfffc000000) + 0x888073 ^ 0x2977da3b7867ac93;
  _DAT_18307edd8 =
       (_DAT_18307edd8 * -0x3c0c0d4b749a557b ^ _DAT_18307f040) + (_DAT_18307ee20 & 0xfffc000000);
  _DAT_18307eea8 = _DAT_18307edd8 ^ _DAT_18307f040;
  _DAT_18307eee0 = 0x888073;
  uVar4 = (_DAT_18307ee30 ^ _DAT_180251f30) + _DAT_18307edd8 + 0x7b555ca9;
  uVar13 = (_DAT_18307edd8 ^ _UNK_180251f38) + _DAT_18307ee30 + 0x888073;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307ee30 ^ _DAT_180251f30;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307edd8 ^ _UNK_180251f38;
  _DAT_18307eee0 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307ee30 + 0x888073) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307edd8 + 0x7b555ca9));
  uVar4 = (_DAT_18307eee0 >> 0x31) << 0x35 |
          ((_DAT_18307eee0 ^ 0xffffffff) << 0xf | _DAT_18307eee0 >> 0x31) >> 0xb;
  _DAT_18307ef18 = _DAT_18307ef48 ^ uVar4 ^ 0x2e10ed1256bf5685;
  _DAT_18307ef48 = (_DAT_18307ef48 * 0x61c28c82ef1367b9 ^ _DAT_18307ef18) + uVar4;
  _DAT_18307ef18 = _DAT_18307ef48 ^ _DAT_18307ef18;
  _DAT_18307ef88 = 0;
  _DAT_18307ed80 = func_0x000184878c80(_DAT_18307efe8 + 0x30ff7bdb001dff ^ 0x4b);
  uVar4 = _DAT_18307ed80 & 0x7fffffffffffffff;
  _DAT_18307f0f0 = _DAT_18307ef00 ^ uVar4 ^ 0xf000;
  _DAT_18307ee70 = (_DAT_18307ee70 ^ uVar4) + 0xf000 ^ 0x463cee76fac87c0e;
  _DAT_18307eea8 = (_DAT_18307eea8 * 0x2219d4bb6090c3ff ^ _DAT_18307ee70) + uVar4;
  _DAT_18307ee48 = _DAT_18307eea8 ^ _DAT_18307ee70;
  _DAT_18307eff8 = 0xf000;
  uVar4 = (_DAT_18307f0a0 ^ _DAT_180251f40) + _DAT_18307ee90 + 0x5e471e2d;
  uVar13 = (_DAT_18307ee90 ^ _UNK_180251f48) + _DAT_18307f0a0 + 0xda653d08;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307f0a0 ^ _DAT_180251f40;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307ee90 ^ _UNK_180251f48;
  _DAT_18307f0c8 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307f0a0 + 0xda653d08) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307ee90 + 0x5e471e2d));
  uVar4 = (_DAT_18307f0c8 ^ 0xba5093fad6dcd040) * -0x5fd975fc3fd09e15;
  _DAT_18307f0e0 = _DAT_18307f0e0 ^ uVar4 ^ 0x7a791d8d94dfc2f8;
  _DAT_18307ef40 = (_DAT_18307ef40 * -0x6212c9da18a1f863 ^ _DAT_18307f0e0) + uVar4;
  _DAT_18307ed58 = _DAT_18307ef40 ^ _DAT_18307f0e0;
  _DAT_18307ee40 = 0;
  _DAT_18307ed00 = func_0x000184878c80(_DAT_18307ef98 + 0xff4eff841b0021ff ^ 0xe8);
  uVar4 = _DAT_18307ed00 << 0xd | _DAT_18307ed00 >> 0x33;
  _DAT_18307eda0 = _DAT_18307ef20 ^ uVar4 ^ 0xf000;
  _DAT_18307eeb0 = (_DAT_18307eeb0 ^ uVar4) + 0xf000 ^ 0xdbe7d171b383edb4;
  _DAT_18307eef0 = (_DAT_18307eef0 * 0x216c4f2c25f42581 ^ _DAT_18307eeb0) + uVar4;
  _DAT_18307f0a0 = _DAT_18307eef0 ^ _DAT_18307eeb0;
  _DAT_18307ee28 = 0xf000;
  uVar1 = *(uint *)(unaff_RBP + 0x70);
  auVar8._8_8_ = _UNK_180144ff8;
  auVar8._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar9 = pshufb(auVar8 ^ _DAT_180251f50,auVar11);
  uVar13 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar13 + _DAT_18307ed50;
  if (auVar9._4_4_ < 0) {
    uVar4 = _DAT_18307ee18 ^ uVar13;
  }
  _DAT_18307ef78 = func_0x000184878c80(SUB161(auVar8 ^ _DAT_180251f50,5) ^ uVar4);
  uVar13 = (ulonglong)uVar1 & 0xffff;
  _DAT_18307eea0 =
       (_DAT_18307eea0 ^ _DAT_18307ee10 & 0x7fffffffffffffff) + uVar13 ^ 0xb9a0c5c3089734da;
  _DAT_18307ef68 =
       (_DAT_18307ef68 * 0x39cc914b620699a1 ^ _DAT_18307eea0) +
       (_DAT_18307ee10 & 0x7fffffffffffffff);
  _DAT_18307ed20 = _DAT_18307ef68 ^ _DAT_18307eea0;
  uVar4 = uVar6 ^ 0x84222325 ^ _DAT_18307f0a8;
  lVar7 = (uVar6 ^ 0x84222325) + _DAT_18307ed60;
  uVar12 = uVar4 + lVar7;
  uVar14 = (uVar13 ^ _DAT_18307ed60) + _DAT_18307f0a8 + uVar13;
  uVar4 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar4;
  uVar12 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar13 ^ _DAT_18307ed60;
  _DAT_18307ee48 = uVar13;
  _DAT_18307ed58 =
       func_0x000184878c80((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18307f0a8 + uVar13) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar7);
  uVar6 = uVar6 | uVar13;
  _DAT_18307ee88 = (_DAT_18307ee88 ^ _DAT_18307ed58) + uVar6 ^ 0x4ccf0d17f35bbc6e;
  _DAT_18307eee8 = (_DAT_18307eee8 * 0x1c25bede6ba7a585 ^ _DAT_18307ee88) + _DAT_18307ed58;
  _DAT_18307eef0 = _DAT_18307eee8 ^ _DAT_18307ee88;
  plVar2 = *(longlong **)(unaff_RBP + 0x10);
  uVar3 = *(undefined8 *)(unaff_RBP + 0x88);
  _DAT_18307ed40 = uVar6;
  lVar7 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar3,0);
  *(int *)(unaff_RBP + 0x90) = (int)*(char *)(lVar7 + *(int *)(unaff_RBP + 0x98));
  (**(code **)(*plVar2 + 0x6f8))(plVar2,uVar3,lVar7,2);
  lVar5 = _DAT_18307edf8 + 0x1b493fb5;
  lVar7 = _DAT_18307ef08 + 0x69aa9cad;
  uVar4 = (_DAT_18307ef08 ^ _DAT_180251f60) + lVar5;
  uVar13 = (_DAT_18307edf8 ^ _UNK_180251f68) + lVar7;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307ef08 ^ _DAT_180251f60;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307edf8 ^ _UNK_180251f68;
  *(ulonglong *)(unaff_RBP + 0x70) = (ulonglong)*(uint *)(unaff_RBP + 0x90);
  _DAT_18307ef40 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - lVar7 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  _DAT_18307eec0 =
       (_DAT_18307eec0 ^ _DAT_18307ef40 & 0x7fffffffffffffff) + 0xffeb9cbd ^ 0x571428653f7f40c2;
  _DAT_18307ef30 =
       (_DAT_18307ef30 * 0x1bc72e33cc218019 ^ _DAT_18307eec0) +
       (_DAT_18307ef40 & 0x7fffffffffffffff);
  _DAT_18307f0a0 = _DAT_18307ef30 ^ _DAT_18307eec0;
  _DAT_18307f000 = 0xffeb9cbd;
  _DAT_18307f080 = func_0x000184878c80(_DAT_18307edf0 ^ 0x790030e7ffdb22);
  _DAT_18307ed90 = (_DAT_18307ed90 ^ _DAT_18307f080) + 0xd50eba0d ^ 0x25a02d0d4423fe81;
  _DAT_18307ef60 = (_DAT_18307ef60 * -0x2f6bfd3e7881d11f ^ _DAT_18307ed90) + _DAT_18307f080;
  _DAT_18307ef98 = _DAT_18307ef60 ^ _DAT_18307ed90;
  _DAT_18307eed0 = 0xd50eba0d;
  _DAT_18307ef90 = func_0x000184878c80(_DAT_18307eff0 ^ 0xff6e003f2500ef0e);
  _DAT_18307f0c0 =
       (_DAT_18307f0c0 ^ _DAT_18307ef90 & 0xfffffffffffffff0) - 0x45d2b100 ^ 0x7bb12d98e812d912;
  _DAT_18307ef20 =
       (_DAT_18307ef20 * -0x40cdd14fd445bab7 ^ _DAT_18307f0c0) +
       (_DAT_18307ef90 & 0xfffffffffffffff0);
  _DAT_18307ee40 = _DAT_18307ef20 ^ _DAT_18307f0c0;
  _DAT_18307edd8 = 0xba2d4f00;
  _DAT_18307ef08 = func_0x000184878c80(_DAT_18307efd0 ^ 0xff720040e5ff4f9f);
  uVar4 = _DAT_18307ef08 ^ 0x3f;
  _DAT_18307eda8 = _DAT_18307ef10 ^ uVar4 ^ 0x45d2b13f;
  _DAT_18307eea0 = (_DAT_18307eea0 ^ uVar4) + 0x45d2b13f ^ 0xa32cacbe9402c0c4;
  _DAT_18307f008 = (_DAT_18307f008 * 0x2c852c6dfdadc075 ^ _DAT_18307eea0) + uVar4;
  _DAT_18307f070 = _DAT_18307f008 ^ _DAT_18307eea0;
  _DAT_18307eee8 = 0x45d2b13f;
  uVar4 = (~_DAT_18307f000 + 0xd0cbce81) *
          ((_DAT_18307ed90 ^ 0x84222325) + (ulonglong)((uint)_DAT_18307ed90 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18307ed98) + (uVar4 & _DAT_18307ed98);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307edf0 = func_0x000184878c80((uVar4 | 0x54e9eda5) + (ulonglong)((uint)uVar4 & 0x54e9eda5))
  ;
  uVar4 = (_DAT_18307edf0 ^ 0xd0cbce80) * 0x10346130d5c2a935;
  _DAT_18307f0c8 = (_DAT_18307f0c8 ^ uVar4) - 0xd0cbce80 ^ 0xe489458e21d1e362;
  _DAT_18307ee68 = (_DAT_18307ee68 * 0x636b82fcd088d74d ^ _DAT_18307f0c8) + uVar4;
  _DAT_18307f058 = _DAT_18307ee68 ^ _DAT_18307f0c8;
  _DAT_18307eec8 = 0x2f343180;
  uVar4 = (_DAT_18307eeb8 ^ _DAT_180251f70) + _DAT_18307edd8 + 0x84222325;
  uVar13 = (_DAT_18307edd8 ^ _UNK_180251f78) + _DAT_18307eeb8 + 0x9edaf00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307eeb8 ^ _DAT_180251f70;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307edd8 ^ _UNK_180251f78;
  _DAT_18307eff0 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307eeb8 + 0x9edaf00) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307edd8 + 0x84222325));
  _DAT_18307efa0 = (_DAT_18307efa0 ^ _DAT_18307eff0) - 0x9edaf00 ^ 0x6848b5a2d137689a;
  _DAT_18307f040 = (_DAT_18307f040 * -0x12701ac1749a5f53 ^ _DAT_18307efa0) + _DAT_18307eff0;
  _DAT_18307eec0 = _DAT_18307f040 ^ _DAT_18307efa0;
  _DAT_18307eea0 = 0xf6125100;
  _DAT_18307f050 = func_0x000184878c80(_DAT_18307edf8 + 0x8c008cfa0034ff ^ 0x91);
  _DAT_18307f0c8 = _DAT_18307ed70 ^ _DAT_18307f050 ^ 0x9edaf3f;
  _DAT_18307eff8 = (_DAT_18307eff8 ^ _DAT_18307f050) + 0x9edaf3f ^ 0x8bffb0efbb6fca79;
  _DAT_18307f0e8 = (_DAT_18307f0e8 * 0x8041881c539864b ^ _DAT_18307eff8) + _DAT_18307f050;
  _DAT_18307eed0 = _DAT_18307f0e8 ^ _DAT_18307eff8;
  _DAT_18307efd8 = 0x9edaf3f;
  _DAT_18307edd8 = func_0x000184878c80(_DAT_18307f0d8 + 0x3009e8affc6ff ^ 0x2d);
  uVar13 = _UNK_180251f88;
  uVar4 = _DAT_180251f80;
  _DAT_18307efd0 = _DAT_18307ed18 ^ _DAT_18307edd8 ^ 0x1d4fa56ca;
  _DAT_18307ee48 = (_DAT_18307ee48 ^ _DAT_18307edd8) + 0x1d4fa56ca ^ 0xfb41c1e6de8807e9;
  _DAT_18307ef60 = (_DAT_18307ef60 * -0x230b52bfc4c55e2b ^ _DAT_18307ee48) + _DAT_18307edd8;
  _DAT_18307ef30 = _DAT_18307ef60 ^ _DAT_18307ee48;
  _DAT_18307f0e8 = 0xd4fa56ca;
  uVar12 = (_DAT_18307edd8 ^ _DAT_180251f80) + _DAT_18307ed70 + 0x7bc9bf98;
  uVar14 = (_DAT_18307ed70 ^ _UNK_180251f88) + _DAT_18307edd8 + 0xd50eba0d;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18307edd8 ^ _DAT_180251f80;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18307ed70 ^ _UNK_180251f88;
  _DAT_18307eee0 =
       func_0x000184878c80((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18307edd8 + 0xd50eba0d) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18307ed70 + 0x7bc9bf98));
  uVar12 = _DAT_18307eee0 ^ 0xd50eba0d;
  uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar12 = (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar12;
  _DAT_18307ee40 = (_DAT_18307ee40 ^ uVar12) + 0x2ae526b0 ^ 0xf6878e638b725353;
  _DAT_18307ee58 = (_DAT_18307ee58 * -0x59ad7da6868187a9 ^ _DAT_18307ee40) + uVar12;
  _DAT_18307eef0 = _DAT_18307ee58 ^ _DAT_18307ee40;
  _DAT_18307ee80 = _DAT_18307f088 ^ 0x2ae526b0;
  _DAT_18307ef10 = 0x2ae526b0;
  uVar12 = (_DAT_18307eed8 ^ uVar4) + _DAT_18307ef50 + 0x7bc9bf98;
  uVar14 = (_DAT_18307ef50 ^ uVar13) + _DAT_18307eed8 + 0xd50eba0d;
  uVar4 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18307eed8 ^ uVar4;
  uVar13 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18307ef50 ^ uVar13;
  _DAT_18307ef68 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307eed8 + 0xd50eba0d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307ef50 + 0x7bc9bf98));
  uVar4 = (_DAT_18307ef68 ^ 0xffe80000) & 0xfffffffffff80000;
  _DAT_18307f0e8 = (_DAT_18307f0e8 ^ uVar4) + 0xd50a980d ^ 0x319abcd8951c3fd4;
  _DAT_18307eee0 = (_DAT_18307eee0 * 0x66a0530284e6381b ^ _DAT_18307f0e8) + uVar4;
  _DAT_18307ed38 = _DAT_18307eee0 ^ _DAT_18307f0e8;
  _DAT_18307f000 = 0xd50a980d;
  _DAT_18307eed0 = func_0x000184878c80(_DAT_18307ee18 + 0x21007be3001dff ^ 1);
  _DAT_18307f0f8 =
       (_DAT_18307eed0 ^ 0xb12f948c2ff45764) << 0x33 | (_DAT_18307eed0 ^ 0xb12f948c2ff45764) >> 0xd;
  _DAT_18307ed70 = _DAT_18307ed70 ^ _DAT_18307f0f8 ^ 0x13d301629069c34a;
  _DAT_18307f058 = (_DAT_18307f058 * 0x1d71d3786ac64b3b ^ _DAT_18307ed70) + _DAT_18307f0f8;
  _DAT_18307ef30 = _DAT_18307f058 ^ _DAT_18307ed70;
  _DAT_18307f068 = _DAT_18307ef88;
  _DAT_18307ede8 = 0;
  uVar4 = (_DAT_18307ef10 ^ 0x8422231a) + _DAT_18307f078 + 0x8422231a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307ef10 ^ 0x8422231a;
  uVar13 = ((_DAT_18307f078 + _DAT_18307ef10) * 0x2000 | _DAT_18307f078 + _DAT_18307ef10 >> 0x33) ^
           _DAT_18307f078;
  _DAT_18307ef70 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_18307ef10 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307f078 + 0x8422231a));
  uVar4 = (ulonglong)(~(uint)_DAT_18307ef70 >> 0xd & 0x3f);
  _DAT_18307ede8 = _DAT_18307f090 ^ uVar4 ^ 0x3f;
  _DAT_18307f048 = (_DAT_18307f048 ^ uVar4) + 0x3f ^ 0xf2ee6d759f7eef15;
  _DAT_18307edd8 = (_DAT_18307edd8 * 0x574df51ee0d762e1 ^ _DAT_18307f048) + uVar4;
  _DAT_18307ee10 = _DAT_18307edd8 ^ _DAT_18307f048;
  _DAT_18307f0b8 = _DAT_18307ef30 ^ 0x3f;
  _DAT_18307efe0 = 0x3f;
  uVar4 = (_DAT_18307f020 ^ _DAT_180251f90) + _DAT_18307ee08 + 0x7bc9bf98;
  uVar13 = (_DAT_18307ee08 ^ _UNK_180251f98) + _DAT_18307f020 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307f020 ^ _DAT_180251f90;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307ee08 ^ _UNK_180251f98;
  _DAT_18307eed0 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307f020 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307ee08 + 0x7bc9bf98));
  uVar4 = _DAT_18307eed0 >> 1 | _DAT_18307eed0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ _DAT_18307eed0) * -0x23ef0f995effa56f;
  _DAT_18307ed68 = (_DAT_18307ed68 ^ uVar4) + 0x146342 ^ 0x69a9ec638d694280;
  _DAT_18307edf0 = (_DAT_18307edf0 * 0x23778c3dfb5d6ec1 ^ _DAT_18307ed68) + uVar4;
  _DAT_18307eff8 = _DAT_18307edf0 ^ _DAT_18307ed68;
  _DAT_18307eee8 = 0x146342;
  uVar4 = (_DAT_18307eef8 ^ _DAT_180251fa0) + _DAT_18307f008 + 0x7bc9bf98;
  uVar13 = (_DAT_18307f008 ^ _UNK_180251fa8) + _DAT_18307eef8 + 0x146342;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307eef8 ^ _DAT_180251fa0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18307f008 ^ _UNK_180251fa8;
  _DAT_18307f088 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18307eef8 + 0x146342) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307f008 + 0x7bc9bf98));
  _DAT_18307efd8 = _DAT_18307efd8 ^ _DAT_18307f088 ^ 0x1461a2571f7fba ^ 0x959823ec34814f22;
  _DAT_18307ee58 =
       (_DAT_18307ee58 * -0x31c0f3dd37ea3b3 ^ _DAT_18307efd8) + (_DAT_18307f088 ^ 0x1461a2571f7fba);
  _DAT_18307eef0 = 0;
  uVar4 = ((_DAT_18307f0f8 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18307f0f8 & 0x8422231a) * 2) *
          -_DAT_18307eee8;
  uVar4 = (uVar4 | _DAT_18307edc8) + (uVar4 & _DAT_18307edc8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307f060 = func_0x000184878c80((uVar4 | 0x8422231a) + (ulonglong)((uint)uVar4 & 0x8422231a))
  ;
  uVar4 = (_DAT_18307f060 ^ 0x3f) & 0x7fffffffffffffff;
  _DAT_18307f018 = _DAT_18307eee8 ^ uVar4 ^ 0x3f;
  _DAT_18307f068 = (_DAT_18307f068 ^ uVar4) + 0x3f ^ 0xba0478fa6adc3a99;
  _DAT_18307ee80 = (_DAT_18307ee80 * 0x709b39886e743005 ^ _DAT_18307f068) + uVar4;
  _DAT_18307eeb8 = _DAT_18307ee80 ^ _DAT_18307f068;
  _DAT_18307ef58 = 0x3f;
  uVar4 = (~_DAT_18307eef0 + 0x9f6b1c91) *
          ((_DAT_18307f0e0 ^ 0x1b493fb5) + (ulonglong)((uint)_DAT_18307f0e0 & 0x1b493fb5) * 2);
  uVar4 = (uVar4 | _DAT_18307ee58) + (uVar4 & _DAT_18307ee58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18307efb0 = func_0x000184878c80((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = (_DAT_18307efb0 ^ 0x9f6b1c90) * 0x51b5c7f3a8e79af5;
  uVar4 = (uVar4 << 0x24 | uVar4 >> 0x1c) >> 0x21 | (uVar4 >> 0x1c) << 0x1f;
  _DAT_18307f048 = _DAT_18307f048 ^ uVar4 ^ 0xf9867f80527b0411;
  _DAT_18307ed10 = (_DAT_18307ed10 * -0x9f2ecbd1cf09103 ^ _DAT_18307f048) + uVar4;
  _DAT_18307f048 = _DAT_18307ed10 ^ _DAT_18307f048;
  _DAT_18307ee78 = 0;
  uVar4 = (_DAT_18307ed18 ^ 0x8422231a) + _DAT_18307ef48 + 0x8422231a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18307ed18 ^ 0x8422231a;
  uVar13 = ((_DAT_18307ef48 + _DAT_18307ed18) * 0x2000 | _DAT_18307ef48 + _DAT_18307ed18 >> 0x33) ^
           _DAT_18307ef48;
  _DAT_18307ee00 =
       func_0x000184878c80((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_18307ed18 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18307ef48 + 0x8422231a));
  uVar4 = _DAT_18307ee00 >> 1 | _DAT_18307ee00;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18307ee00) & 0x7ffffffffffffff;
  _DAT_18307ed68 = _DAT_18307ed08 ^ uVar4 ^ 0x3f;
  _DAT_18307ee18 = (_DAT_18307ee18 ^ uVar4) + 0x3f ^ 0x24868b3efa89b5b8;
  _DAT_18307f0b8 = (_DAT_18307f0b8 * -0x46213242e1720adb ^ _DAT_18307ee18) + uVar4;
  _DAT_18307eeb8 = _DAT_18307f0b8 ^ _DAT_18307ee18;
  _DAT_18307ef58 = 0x3f;
  uVar4 = *(ulonglong *)(unaff_RBP + 0x70);
  auVar10._8_8_ = _UNK_180132e68;
  auVar10._0_8_ = uVar4 ^ 0x84222325;
  auVar11 = pshufb(auVar10 ^ _DAT_180251fb0,auVar11);
  uVar12 = auVar11._8_8_ + auVar11._0_8_;
  uVar13 = uVar12 + _DAT_18307ef28;
  if (auVar11._4_4_ < 0) {
    uVar13 = _DAT_18307ed68 ^ uVar12;
  }
  _DAT_18307f090 = func_0x000184878c80(SUB161(auVar10 ^ _DAT_180251fb0,5) ^ uVar13);
  uVar13 = (ulonglong)((uint)uVar4 & 0x3f);
  _DAT_18307f0f8 =
       (_DAT_18307f0f8 ^ _DAT_18307f090 & 0x7fffffffffffffff) + uVar13 ^ 0xab58f198fcd23e28;
  _DAT_18307f070 =
       (_DAT_18307f070 * 0xc7b8937fb633c2b ^ _DAT_18307f0f8) + (_DAT_18307f090 & 0x7fffffffffffffff)
  ;
  _DAT_18307ed58 = _DAT_18307f070 ^ _DAT_18307f0f8;
  uVar4 = uVar13 ^ 0x84222325 ^ _DAT_18307f038;
  lVar7 = (uVar13 ^ 0x84222325) + _DAT_18307efb8;
  uVar12 = uVar4 + lVar7;
  uVar14 = (uVar6 ^ _DAT_18307efb8) + _DAT_18307f038 + uVar6;
  uVar4 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar4;
  uVar12 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar6 ^ _DAT_18307efb8;
  _DAT_18307ee48 = uVar13;
  _DAT_18307ee40 =
       func_0x000184878c80((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18307f038 + uVar6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar7);
  uVar4 = (uVar13 * uVar6 ^ _DAT_18307ee40) * 0x40c94bcd98800a09;
  uVar6 = uVar6 | uVar13;
  _DAT_18307ef30 = (_DAT_18307ef30 ^ uVar4) + uVar6 ^ 0xbe6059f49c3539e8;
  _DAT_18307ef90 = (_DAT_18307ef90 * -0x24c167be2d9331ed ^ _DAT_18307ef30) + uVar4;
  _DAT_18307ef68 = _DAT_18307ef90 ^ _DAT_18307ef30;
  _DAT_18307ed68 = uVar6;
  *(undefined8 *)(unaff_RBP + 0x90) = *(undefined8 *)(unaff_RBP + 0x30);
  *(undefined4 *)(unaff_RBP + 0x98) = *(undefined4 *)(unaff_RBP + 0x50);
  *(int *)(unaff_RBP + 0xa0) = (int)uVar6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x40)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4865ae8 (image 184865ae8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184865ae8(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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



// ===== continuation @ rva 48612b0 (image 1848612b0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1848612b0(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  ulonglong unaff_R12;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint unaff_XMM6_Da;
  undefined8 unaff_XMM9_Qb;
  undefined1 unaff_XMM11 [16];
  
  *(undefined8 *)(unaff_RBP + 0x90) = *(undefined8 *)(unaff_RBP + 0x30);
  uVar1 = *(uint *)(unaff_RBP + 0x50);
  *(uint *)(unaff_RBP + 0x98) = uVar1;
  auVar4._8_8_ = unaff_XMM9_Qb;
  auVar4._0_8_ = uVar1 ^ unaff_R12;
  *(bool *)(unaff_RBP + 0x50) = *(longlong *)(unaff_RBP + 8) == 0;
  auVar5 = pshufb(auVar4 ^ unaff_XMM11,_DAT_1800170c0);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_18307f060;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_18307ef98 ^ uVar3;
  }
  _DAT_18307eeb8 = func_0x000184878c80(SUB161(auVar4 ^ unaff_XMM11,5) ^ uVar2);
  uVar6 = uVar1 ^ unaff_XMM6_Da;
  uVar2 = _DAT_18307eeb8 >> 1 | _DAT_18307eeb8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18307eeb8;
  _DAT_18307edb0 =
       ((((ulonglong)uVar6 * (ulonglong)_DAT_180251850 + _DAT_180251880 << 0x20) +
         (ulonglong)uVar6 * (ulonglong)_DAT_180251870 +
        (ulonglong)uVar1 * (ulonglong)_DAT_180251860 +
        ((ulonglong)uVar1 * (ulonglong)_DAT_180251850 << 0x20)) -
       (((ulonglong)uVar6 * (ulonglong)_DAT_1802518c0 + _DAT_1802518d0 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_1802518b0 +
       ((ulonglong)uVar1 * (ulonglong)_DAT_1802518c0 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_1802518b0)) + 0xded592105c082d63;
  _DAT_18307efd8 = (_DAT_18307efd8 ^ uVar2) + _DAT_18307edb0 ^ 0x395aad1dab3dfd51;
  _DAT_18307eff8 = (_DAT_18307eff8 * 0x70429c914b8ea5ab ^ _DAT_18307efd8) + uVar2;
  _DAT_18307ef78 = _DAT_18307eff8 ^ _DAT_18307efd8;
  *(int *)(unaff_RBP + 0x38) = (int)_DAT_18307edb0;
  _DAT_18307edb0 = _DAT_18307edb0 & 0xffffffff;
  uVar2 = (_DAT_18307f0b8 ^ _DAT_1802518e0) + _DAT_18307eeb0 + 0xde9e291e;
  uVar3 = (_DAT_18307eeb0 ^ _UNK_1802518e8) + _DAT_18307f0b8 + 0xa5e483a3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307f0b8 ^ _DAT_1802518e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18307eeb0 ^ _UNK_1802518e8;
  _DAT_18307efc8 =
       func_0x000184878c80((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18307f0b8 + 0xa5e483a3) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307eeb0 + 0xde9e291e));
  uVar2 = _DAT_18307efc8 << 0x14 | _DAT_18307efc8 >> 0x2c;
  _DAT_18307ee80 = (_DAT_18307ee80 ^ uVar2) + 0xff588998 ^ 0x7bc1c15d4c913a97;
  _DAT_18307efb8 = (_DAT_18307efb8 * 0x7ddd2d4b0e65fa17 ^ _DAT_18307ee80) + uVar2;
  _DAT_18307efa0 = _DAT_18307efb8 ^ _DAT_18307ee80;
  _DAT_18307efd8 = 0xff588998;
  uVar2 = (~_DAT_18307eff0 + 0xfef07ad1) *
          ((_DAT_18307ef88 ^ 0x84222325) + (ulonglong)((uint)_DAT_18307ef88 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18307ed18) + (uVar2 & _DAT_18307ed18);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18307f020 = func_0x000184878c80((uVar2 | 0x7ad259f5) + (ulonglong)((uint)uVar2 & 0x7ad259f5))
  ;
  uVar2 = _DAT_18307f020 << 0x3b | _DAT_18307f020 >> 5;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar2;
  _DAT_18307f0b8 = (_DAT_18307f0b8 ^ uVar2) - 0xfef07ad0 ^ 0x5cb8b145fe05b103;
  _DAT_18307eee0 = (_DAT_18307eee0 * 0x1947b91053947b51 ^ _DAT_18307f0b8) + uVar2;
  _DAT_18307f058 = _DAT_18307eee0 ^ _DAT_18307f0b8;
  _DAT_18307ed80 = 0x10f8530;
  uVar2 = (~_DAT_18307ee80 + 0xfef07ad1) *
          ((_DAT_18307edb0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_18307edb0 & 0x8422dcda) * 2);
  uVar2 = (uVar2 | _DAT_18307ede8) + (uVar2 & _DAT_18307ede8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18307ef10 = func_0x000184878c80((uVar2 | 0x7ad2a60a) + (ulonglong)((uint)uVar2 & 0x7ad2a60a))
  ;
  _DAT_18307efc0 = _DAT_18307f010 ^ _DAT_18307ef10 ^ 0xfef17acf;
  _DAT_18307ee28 = (_DAT_18307ee28 ^ _DAT_18307ef10) + 0xfef17acf ^ 0xfea3cc1e2abfa806;
  _DAT_18307ee60 = (_DAT_18307ee60 * -0x170c091e3a0b6b41 ^ _DAT_18307ee28) + _DAT_18307ef10;
  _DAT_18307ee08 = _DAT_18307ee60 ^ _DAT_18307ee28;
  _DAT_18307efd8 = 0xfef17acf;
  uVar2 = (_DAT_18307efd0 ^ _DAT_1802518f0) + _DAT_18307f0f0 + 0x84222325;
  uVar3 = (_DAT_18307f0f0 ^ _UNK_1802518f8) + _DAT_18307efd0 + 0x8bd1d3eb;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307efd0 ^ _DAT_1802518f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18307f0f0 ^ _UNK_1802518f8;
  _DAT_18307f0e8 =
       func_0x000184878c80((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18307efd0 + 0x8bd1d3eb) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307f0f0 + 0x84222325));
  uVar2 = _DAT_18307f0e8 >> 1 | _DAT_18307f0e8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_18307f0e8;
  _DAT_18307ef00 = (_DAT_18307ef00 ^ uVar2) - 0x8bd1d3eb ^ 0xc9ce6524618dd4d;
  _DAT_18307ed40 = (_DAT_18307ed40 * 0x1ffb7dd60a744c9b ^ _DAT_18307ef00) + uVar2;
  _DAT_18307eee8 = _DAT_18307ed40 ^ _DAT_18307ef00;
  _DAT_18307ee70 = 0x742e2c15;
  uVar2 = (_DAT_18307f050 ^ _DAT_180251900) + _DAT_18307f010 + 0x8422dcda;
  uVar3 = (_DAT_18307f010 ^ _UNK_180251908) + _DAT_18307f050 + 0x8bd1d3eb;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307f050 ^ _DAT_180251900;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18307f010 ^ _UNK_180251908;
  _DAT_18307ee30 =
       func_0x000184878c80((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18307f050 + 0x8bd1d3eb) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307f010 + 0x8422dcda));
  uVar2 = _DAT_18307ee30 ^ 0x8bd1d3eb;
  _DAT_18307f008 = _DAT_18307f0c8 ^ uVar2 ^ 0x8bd2d3ea;
  _DAT_18307f0d8 = (_DAT_18307f0d8 ^ uVar2) + 0x8bd2d3ea ^ 0x300281c0a538daa2;
  _DAT_18307f068 = (_DAT_18307f068 * 0x7ed3c37a4fc5a71f ^ _DAT_18307f0d8) + uVar2;
  _DAT_18307ef30 = _DAT_18307f068 ^ _DAT_18307f0d8;
  _DAT_18307f088 = 0x8bd2d3ea;
  uVar2 = (~_DAT_18307edd8 + 0x742e2c16) *
          ((_DAT_18307ef88 ^ 0xff0f0cf) + (ulonglong)((uint)_DAT_18307ef88 & 0xff0f0cf) * 2);
  uVar2 = (uVar2 | _DAT_18307ed38) + (uVar2 & _DAT_18307ed38);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18307ed68 = func_0x000184878c80((uVar2 | 0x7bdedcda) + (ulonglong)((uint)uVar2 & 0x7bdedcda))
  ;
  uVar2 = _DAT_18307ed68 * 0x4d91780d4bc5413b;
  _DAT_18307efa8 = _DAT_18307ed58 ^ uVar2 ^ 0x10000ffff;
  _DAT_18307ed20 = (_DAT_18307ed20 ^ uVar2) + 0x10000ffff ^ 0xf12f7cd58987da15;
  _DAT_18307f0b0 = (_DAT_18307f0b0 * -0x3f11506633ee21a9 ^ _DAT_18307ed20) + uVar2;
  _DAT_18307ed38 = _DAT_18307f0b0 ^ _DAT_18307ed20;
  _DAT_18307ed10 = 0xffff;
  uVar2 = (~_DAT_18307ef78 + 0xe710a55d) *
          ((_DAT_18307ee58 ^ 0x84222325) + (ulonglong)((uint)_DAT_18307ee58 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18307ef90) + (uVar2 & _DAT_18307ef90);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18307ee10 = func_0x000184878c80((uVar2 | 0x63328679) + (ulonglong)((uint)uVar2 & 0x63328679))
  ;
  uVar2 = (_DAT_18307ee10 ^ 0xe710a55c) & 0x1fffffffff;
  _DAT_18307ed88 = (_DAT_18307ed88 ^ uVar2) - 0xe710a55c ^ 0xf7b549d88733bb2c;
  _DAT_18307eec0 = (_DAT_18307eec0 * 0x35ded7f901513967 ^ _DAT_18307ed88) + uVar2;
  _DAT_18307f018 = _DAT_18307eec0 ^ _DAT_18307ed88;
  _DAT_18307eeb8 = 0x18ef5aa4;
  _DAT_18307ed28 = func_0x000184878c80(_DAT_18307f020 ^ 0xffa9005f7dffed34);
  uVar2 = _DAT_18307ed28 & 0x7fffffffffffffff;
  _DAT_18307ee40 = _DAT_18307ef58 ^ uVar2 ^ 0xe711a55b;
  _DAT_18307f0f8 = (_DAT_18307f0f8 ^ uVar2) + 0xe711a55b ^ 0xc0da88ed8664ec0e;
  _DAT_18307eee0 = (_DAT_18307eee0 * 0x741e080ebb2757fd ^ _DAT_18307f0f8) + uVar2;
  _DAT_18307ee78 = _DAT_18307eee0 ^ _DAT_18307f0f8;
  _DAT_18307f070 = 0xe711a55b;
  uVar2 = (~_DAT_18307efc8 + 0xff588999) *
          ((_DAT_18307f090 ^ 0xf33fccfa) + (ulonglong)((uint)_DAT_18307f090 & 0xf33fccfa) * 2);
  uVar2 = (uVar2 | _DAT_18307ef20) + (uVar2 & _DAT_18307ef20);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18307f0d8 = func_0x000184878c80((uVar2 | 0xc674562) + (ulonglong)((uint)uVar2 & 0xc674562));
  uVar2 = _DAT_18307f0d8 << 8 | (_DAT_18307f0d8 & 0x7fffffffffffffff) >> 0x38;
  _DAT_18307ee38 = _DAT_18307f0e0 ^ uVar2 ^ 0x176767977;
  _DAT_18307f0c0 = (_DAT_18307f0c0 ^ uVar2) + 0x176767977 ^ 0xa822f1020f8d23c5;
  _DAT_18307ee70 = (_DAT_18307ee70 * 0x2911a607cb32cf8f ^ _DAT_18307f0c0) + uVar2;
  _DAT_18307f028 = _DAT_18307ee70 ^ _DAT_18307f0c0;
  _DAT_18307ef68 = 0x76767977;
  _DAT_18307edb0 = func_0x000184878c80(_DAT_18307edb0 ^ 0xffbd000461ff9870);
  _DAT_18307eec8 = (_DAT_18307eec8 ^ _DAT_18307edb0 ^ 0x771defdf) + 0x88456647 ^ 0x785d958317c91a75;
  _DAT_18307efe0 =
       (_DAT_18307efe0 * 0x13be0ebc0b8036a5 ^ _DAT_18307eec8) + (_DAT_18307edb0 ^ 0x771defdf);
  _DAT_18307ef08 = _DAT_18307efe0 ^ _DAT_18307eec8;
  _DAT_18307ed08 = 0x88456647;
  uVar2 = (~_DAT_18307f098 + 0xff588999) *
          ((_DAT_18307ee80 ^ 0xf33fccfa) + (ulonglong)((uint)_DAT_18307ee80 & 0xf33fccfa) * 2);
  uVar2 = (uVar2 | _DAT_18307f088) + (uVar2 & _DAT_18307f088);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18307f0d8 = func_0x000184878c80((uVar2 | 0xc674562) + (ulonglong)((uint)uVar2 & 0xc674562));
  _DAT_18307f040 =
       (_DAT_18307f040 ^ _DAT_18307f0d8 & 0xfffffffffffff000) + 0x77188998 ^ 0x808164228bd06f4e;
  _DAT_18307eec8 =
       (_DAT_18307eec8 * -0x40be976a0fd77237 ^ _DAT_18307f040) +
       (_DAT_18307f0d8 & 0xfffffffffffff000);
  _DAT_18307ed60 = _DAT_18307eec8 ^ _DAT_18307f040;
  _DAT_18307edb0 = 0x77188998;
  _DAT_18307eea8 = func_0x000184878c80(_DAT_18307f080 ^ 0x32005e31ffb5c7);
  uVar2 = _DAT_18307eea8 * 0x580b06976a812d83;
  _DAT_18307ef30 = _DAT_18307f000 ^ uVar2 ^ 0x176767977;
  _DAT_18307eec8 = (_DAT_18307eec8 ^ uVar2) + 0x176767977 ^ 0x8fe83406ba5c5492;
  _DAT_18307f008 = (_DAT_18307f008 * -0x12634a1e9c24d9f9 ^ _DAT_18307eec8) + uVar2;
  _DAT_18307efd0 = _DAT_18307f008 ^ _DAT_18307eec8;
  _DAT_18307f0b0 = 0x76767977;
  uVar2 = (_DAT_18307f058 ^ _DAT_180251910) + _DAT_18307edb0 + 0xf33fccfa;
  uVar3 = (_DAT_18307edb0 ^ _UNK_180251918) + _DAT_18307f058 + 0x88e21020;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307f058 ^ _DAT_180251910;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18307edb0 ^ _UNK_180251918;
  _DAT_18307ee20 =
       func_0x000184878c80((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18307f058 + 0x88e21020) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307edb0 + 0xf33fccfa));
  uVar2 = _DAT_18307ee20 ^ 0x771defdf;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar2;
  _DAT_18307ef00 = _DAT_18307ef00 ^ uVar2 ^ 0x14047053f60a4d01;
  _DAT_18307eee0 = (_DAT_18307eee0 * -0x7dbf68840eb029e1 ^ _DAT_18307ef00) + uVar2;
  _DAT_18307ef30 = _DAT_18307eee0 ^ _DAT_18307ef00;
  _DAT_18307f0a8 = 0;
  uVar2 = (_DAT_18307f068 ^ 0x8422dcda) + _DAT_18307f080 + 0x8422dcda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307f068 ^ 0x8422dcda;
  uVar3 = ((_DAT_18307f080 + _DAT_18307f068) * 0x2000 | _DAT_18307f080 + _DAT_18307f068 >> 0x33) ^
          _DAT_18307f080;
  _DAT_18307eef8 =
       func_0x000184878c80((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_18307f068 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307f080 + 0x8422dcda));
  _DAT_18307efe0 = _DAT_18307f030 ^ _DAT_18307eef8 ^ 0xffff;
  _DAT_18307efe8 = (_DAT_18307efe8 ^ _DAT_18307eef8) + 0xffff ^ 0xc27058f2b3d530f4;
  _DAT_18307eff0 = (_DAT_18307eff0 * 0x2fe9cd8b62ef1023 ^ _DAT_18307efe8) + _DAT_18307eef8;
  _DAT_18307f000 = _DAT_18307eff0 ^ _DAT_18307efe8;
  _DAT_18307ef80 = 0xffff;
  uVar2 = (_DAT_18307ee38 ^ _DAT_180251920) + _DAT_18307ee38 + 0xf73b24b1;
  uVar3 = (_DAT_18307ee38 ^ _UNK_180251928) + _DAT_18307ee38 + 0x73190794;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307ee38 ^ _DAT_180251920;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18307ee38 ^ _UNK_180251928;
  _DAT_18307ee18 =
       func_0x000184878c80((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18307ee38 + 0x73190794) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307ee38 + 0xf73b24b1));
  uVar2 = (_DAT_18307ee18 ^ 0x73190794) * 0x202a4b745ab61fb7;
  _DAT_18307f0e8 = _DAT_18307f0e8 ^ uVar2 ^ 0xa728d569ddd17c7d;
  _DAT_18307ed58 = (_DAT_18307ed58 * 0x23d0336e40f940e1 ^ _DAT_18307f0e8) + uVar2;
  _DAT_18307ef28 = _DAT_18307ed58 ^ _DAT_18307f0e8;
  _DAT_18307f050 = 0;
  uVar2 = ((_DAT_18307ee10 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_18307ee10 & 0x8422dcda) * 2) *
          -_DAT_18307eda8;
  uVar2 = (uVar2 | _DAT_18307ee70) + (uVar2 & _DAT_18307ee70);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18307ee10 = func_0x000184878c80((uVar2 | 0x8422dcda) + (ulonglong)((uint)uVar2 & 0x8422dcda))
  ;
  uVar2 = _DAT_18307ee10 >> 1 | _DAT_18307ee10;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_18307ee10;
  uVar2 = (uVar2 ^ 0xffff) << 7 | uVar2 >> 0x39;
  _DAT_18307ed98 = _DAT_18307ee38 ^ uVar2 ^ 0xffff;
  _DAT_18307ef28 = (_DAT_18307ef28 ^ uVar2) + 0xffff ^ 0x956c8ae26ca1daca;
  _DAT_18307ee28 = (_DAT_18307ee28 * -0x691f43f3a235eaf5 ^ _DAT_18307ef28) + uVar2;
  _DAT_18307ee80 = _DAT_18307ee28 ^ _DAT_18307ef28;
  _DAT_18307f070 = 0xffff;
  *(uint *)(unaff_RBP + 0xa0) = *(uint *)(unaff_RBP + 0x70) & 0xffff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x50)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 485bd53 (image 18485bd53) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18485bd53(void)

{
  longlong unaff_RBP;
  ulonglong unaff_R12;
  ulonglong uVar1;
  ulonglong uVar2;
  uint unaff_XMM8_Da;
  
  uVar1 = (_DAT_18307f050 ^ 0xc2620d93) + _DAT_18307eeb8 + 0xc2620d93;
  uVar2 = (_DAT_18307eeb8 ^ 0x1946095a) + _DAT_18307f050 + 0x1946095a;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18307f050 ^ 0xc2620d93;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307eeb8 ^ 0x1946095a;
  _DAT_18307f050 =
       func_0x000184878c80((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307f050 + 0x1946095a) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18307eeb8 + 0xc2620d93));
  uVar1 = (_DAT_18307f050 ^ 0x5f462ffe) & 0x3ffffffffffffff;
  _DAT_18307f000 = (_DAT_18307f000 ^ uVar1) + 0x5f462ffe ^ 0x83c9166955072465;
  _DAT_18307ed28 = (_DAT_18307ed28 * 0x53582d85c26c6fed ^ _DAT_18307f000) + uVar1;
  _DAT_18307ef08 = _DAT_18307ed28 ^ _DAT_18307f000;
  _DAT_18307f0e8 = 0x5f462ffe;
  _DAT_18307f0f0 = func_0x000184878c80(_DAT_18307eeb8 ^ 0xdcffb24bffa2b5);
  uVar1 = (((_DAT_18307f0f0 ^ 0xf9d5e5ed) & 0xffffffff) * (_DAT_180251930 & 0xffffffff) +
           (((_DAT_18307f0f0 ^ 0xf9d5e5ed) & 0xffffffff) * (ulonglong)unaff_XMM8_Da +
            (_DAT_18307f0f0 >> 0x20) * (_DAT_180251930 & 0xffffffff) << 0x20) ^ 0x70d421cd) &
          0x7fffffffffffffff;
  _DAT_18307ed58 = (_DAT_18307ed58 ^ uVar1) + 0xc981c4e9 ^ 0xc31e9d54cdcee59e;
  _DAT_18307efd0 = (_DAT_18307efd0 * -0x5075917732f243d5 ^ _DAT_18307ed58) + uVar1;
  _DAT_18307f0c8 = _DAT_18307efd0 ^ _DAT_18307ed58;
  _DAT_18307ed90 = 0xc981c4e9;
  uVar1 = (~_DAT_18307eea0 + 0x99248569) *
          ((_DAT_18307ed50 ^ unaff_R12) + (ulonglong)((uint)_DAT_18307ed50 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_18307ee98) + (uVar1 & _DAT_18307ee98);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18307edc0 = func_0x000184878c80((uVar1 | 0x1d06a64d) + (ulonglong)((uint)uVar1 & 0x1d06a64d))
  ;
  uVar1 = (_DAT_18307edc0 ^ 0x99248568) & 0x3ffffffffff;
  _DAT_18307ed98 = (_DAT_18307ed98 ^ uVar1) - 0x99248568 ^ 0x5ca176c98fab8192;
  _DAT_18307ef90 = (_DAT_18307ef90 * 0xb2820e38f270f2d ^ _DAT_18307ed98) + uVar1;
  _DAT_18307ed10 = _DAT_18307ef90 ^ _DAT_18307ed98;
  _DAT_18307f050 = 0x66db7a98;
  uVar1 = (~_DAT_18307edc0 + 0x99248569) *
          ((_DAT_18307f0a8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18307f0a8 & 0x842223fa) * 2);
  uVar1 = (uVar1 | _DAT_18307ee48) + (uVar1 & _DAT_18307ee48);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18307ee88 = func_0x000184878c80((uVar1 | 0x1d06a692) + (ulonglong)((uint)uVar1 & 0x1d06a692))
  ;
  uVar1 = (_DAT_18307ee88 & 0xfffffffffffffff) >> 1 | _DAT_18307ee88 & 0xfffffffffffffff;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_18307ee88 & 0xfffffffffffffff) & 0xffffffffff800000;
  _DAT_18307ef70 = _DAT_18307ee60 ^ uVar1 ^ 0x99248647;
  _DAT_18307f0b0 = (_DAT_18307f0b0 ^ uVar1) + 0x99248647 ^ 0x6f30c89ebb5f4cce;
  _DAT_18307f008 = (_DAT_18307f008 * -0x28e013bf74180691 ^ _DAT_18307f0b0) + uVar1;
  _DAT_18307eff8 = _DAT_18307f008 ^ _DAT_18307f0b0;
  _DAT_18307f098 = 0x99248647;
  uVar1 = (_DAT_18307f0e8 ^ _DAT_180251950) + _DAT_18307eff8 + 0x1d06a562;
  uVar2 = (_DAT_18307eff8 ^ _UNK_180251958) + _DAT_18307f0e8 + 0x66db7a98;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18307f0e8 ^ _DAT_180251950;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307eff8 ^ _UNK_180251958;
  _DAT_18307ed40 =
       func_0x000184878c80((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307f0e8 + 0x66db7a98) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18307eff8 + 0x1d06a562));
  _DAT_18307f030 = _DAT_18307ef98 ^ _DAT_18307ed40 ^ 0x1000000df;
  _DAT_18307ed48 = (_DAT_18307ed48 ^ _DAT_18307ed40) + 0x1000000df ^ 0x9eaa1b32b328d147;
  _DAT_18307eff8 = (_DAT_18307eff8 * 0x3ea562f844499de5 ^ _DAT_18307ed48) + _DAT_18307ed40;
  _DAT_18307ed68 = _DAT_18307eff8 ^ _DAT_18307ed48;
  _DAT_18307ef68 = 0xdf;
  _DAT_18307f008 = func_0x000184878c80(_DAT_18307eeb8 ^ 0xff8fffbb19fff1d6);
  uVar1 = ((_DAT_18307f008 ^ 0xaf44e8b020) << 0xc | _DAT_18307f008 >> 0x34) * 0x69282a5c22161aab;
  _DAT_18307ef28 = _DAT_18307ed40 ^ uVar1 ^ 0xc934b4bf;
  _DAT_18307ef20 = (_DAT_18307ef20 ^ uVar1) + 0xc934b4bf ^ 0xe2e6e6566568271b;
  _DAT_18307eee8 = (_DAT_18307eee8 * 0x74946eeea4f32cff ^ _DAT_18307ef20) + uVar1;
  _DAT_18307ef70 = _DAT_18307eee8 ^ _DAT_18307ef20;
  _DAT_18307ee20 = 0xc934b4bf;
  uVar1 = (~_DAT_18307eff8 + 0x36cb4c21) *
          ((_DAT_18307eee8 ^ 0x4d16979a) + (ulonglong)((uint)_DAT_18307eee8 & 0x4d16979a) * 2);
  uVar1 = (uVar1 | _DAT_18307f0c0) + (uVar1 & _DAT_18307f0c0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18307ed38 = func_0x000184878c80((uVar1 | 0x7bdddbba) + (ulonglong)((uint)uVar1 & 0x7bdddbba))
  ;
  uVar1 = (_DAT_18307ed38 ^ 0x2b10e6c069b44be0) * -0x6cb6bc2852518805;
  _DAT_18307efe8 = _DAT_18307eea8 ^ uVar1 ^ 0x1000000df;
  _DAT_18307ede8 = (_DAT_18307ede8 ^ uVar1) + 0x1000000df ^ 0xbb28f4085e29ce64;
  _DAT_18307eed8 = (_DAT_18307eed8 * 0x2a3216fa8ad7ce0f ^ _DAT_18307ede8) + uVar1;
  _DAT_18307ee50 = _DAT_18307eed8 ^ _DAT_18307ede8;
  _DAT_18307ee58 = 0xdf;
  uVar1 = (_DAT_18307edb0 ^ _DAT_180251960) + _DAT_18307f068 + unaff_R12;
  uVar2 = (_DAT_18307f068 ^ _UNK_180251968) + _DAT_18307edb0 + 0x7b0bf078;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18307edb0 ^ _DAT_180251960;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307f068 ^ _UNK_180251968;
  _DAT_18307ef00 =
       func_0x000184878c80((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307edb0 + 0x7b0bf078) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18307f068 + unaff_R12));
  _DAT_18307ed30 = (_DAT_18307ed30 ^ _DAT_18307ef00) - 0x7b0bf078 ^ 0xe3a1f4bb480aa77c;
  _DAT_18307efb0 = (_DAT_18307efb0 * -0x4e13081c4e61d7b1 ^ _DAT_18307ed30) + _DAT_18307ef00;
  _DAT_18307f018 = _DAT_18307efb0 ^ _DAT_18307ed30;
  _DAT_18307ee08 = 0x84f40f88;
  _DAT_18307ed60 = func_0x000184878c80(_DAT_18307ee68 ^ 0xb1006e81ffe8b5);
  uVar1 = (_DAT_18307ed60 ^ 0x7b0bf0ff) & 0xffffffffffffff ^ 0xdf;
  _DAT_18307f0c0 = _DAT_18307eea8 ^ uVar1 ^ 0x7b0bf157;
  _DAT_18307ed80 = (_DAT_18307ed80 ^ uVar1) + 0x7b0bf157 ^ 0xa4f18aaa54094859;
  _DAT_18307eda0 = (_DAT_18307eda0 * -0x7c22c1a8af632c81 ^ _DAT_18307ed80) + uVar1;
  _DAT_18307ee10 = _DAT_18307eda0 ^ _DAT_18307ed80;
  _DAT_18307ef90 = 0x7b0bf157;
  uVar1 = (~_DAT_18307f0a0 + 0x84f40f89) *
          ((_DAT_18307f038 ^ 0xff29d272) + (ulonglong)((uint)_DAT_18307f038 & 0xff29d272) * 2);
  uVar1 = (uVar1 | _DAT_18307ed38) + (uVar1 & _DAT_18307ed38);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18307f010 = func_0x000184878c80((uVar1 | 0x7bddddfa) + (ulonglong)((uint)uVar1 & 0x7bddddfa))
  ;
  _DAT_18307edf0 =
       (_DAT_18307edf0 ^ _DAT_18307f010 * 0x7e4e11e2948439d3) + 0x1000000df ^ 0x4689dbbfbe7e1e;
  _DAT_18307f0a0 =
       (_DAT_18307f0a0 * -0xda31432363c8731 ^ _DAT_18307edf0) + _DAT_18307f010 * 0x7e4e11e2948439d3;
  _DAT_18307eed0 = _DAT_18307f0a0 ^ _DAT_18307edf0;
  _DAT_18307eeb8 = 0xdf;
  _DAT_18307efb0 = func_0x000184878c80(_DAT_18307ef30 ^ 0xff380011f1ff22fb);
  uVar1 = _DAT_18307efb0 - (_DAT_18307efb0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_18307efb0;
  _DAT_18307ede8 = _DAT_18307eda0 ^ uVar1 ^ 0x128c7f4e7;
  _DAT_18307f0f8 = (_DAT_18307f0f8 ^ uVar1) + 0x128c7f4e7 ^ 0x39d57902cbcf3ac2;
  _DAT_18307ef18 = (_DAT_18307ef18 * 0x6eb2e46676b816a3 ^ _DAT_18307f0f8) + uVar1;
  _DAT_18307f060 = _DAT_18307ef18 ^ _DAT_18307f0f8;
  _DAT_18307ef40 = 0x28c7f4e7;
  uVar1 = (_DAT_18307eea0 ^ _DAT_180251970) + _DAT_18307ed80 + 0xdb640cdb;
  uVar2 = (_DAT_18307ed80 ^ _UNK_180251978) + _DAT_18307eea0 + 0xc981c4e9;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18307eea0 ^ _DAT_180251970;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307ed80 ^ _UNK_180251978;
  _DAT_18307efc8 =
       func_0x000184878c80((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307eea0 + 0xc981c4e9) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18307ed80 + 0xdb640cdb));
  uVar1 = _DAT_18307efc8 ^ 0x4afe6755109e262e;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_18307eee8 = (_DAT_18307eee8 ^ uVar1) + 0x490004e8 ^ 0xf37ee025110337c6;
  _DAT_18307f018 = (_DAT_18307f018 * 0x1325508c69256db9 ^ _DAT_18307eee8) + uVar1;
  _DAT_18307efb8 = _DAT_18307f018 ^ _DAT_18307eee8;
  _DAT_18307eda8 = 0x490004e8;
  uVar1 = (_DAT_18307ee68 ^ _DAT_180251980) + _DAT_18307ed70 + 0x12e5c832;
  uVar2 = (_DAT_18307ed70 ^ _UNK_180251988) + _DAT_18307ee68 + 0x920009d0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18307ee68 ^ _DAT_180251980;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307ed70 ^ _UNK_180251988;
  _DAT_18307ed30 =
       func_0x000184878c80((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307ee68 + 0x920009d0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18307ed70 + 0x12e5c832));
  uVar1 = _DAT_18307ed30 * -0x4d0f6f84345863c7;
  _DAT_18307ed38 = _DAT_18307ef78 ^ uVar1 ^ 0x128c7f4e7;
  _DAT_18307eda8 = (_DAT_18307eda8 ^ uVar1) + 0x128c7f4e7 ^ 0x50c97fa70313d459;
  _DAT_18307ef48 = (_DAT_18307ef48 * -0x6c7bb766e066b1c1 ^ _DAT_18307eda8) + uVar1;
  _DAT_18307ed08 = _DAT_18307ef48 ^ _DAT_18307eda8;
  _DAT_18307eee8 = 0x28c7f4e7;
  uVar1 = (_DAT_18307ee10 ^ _DAT_180251990) + _DAT_18307f098 + 0xace5d7c2;
  uVar2 = (_DAT_18307f098 ^ _UNK_180251998) + _DAT_18307ee10 + 0x28c7f4e7;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18307ee10 ^ _DAT_180251990;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18307f098 ^ _UNK_180251998;
  _DAT_18307ef18 =
       func_0x000184878c80((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18307ee10 + 0x28c7f4e7) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18307f098 + 0xace5d7c2));
  _DAT_18307f0d8 = _DAT_18307ef18 ^ 0x28c7f4e7;
  _DAT_18307ed80 = _DAT_18307ed80 ^ _DAT_18307f0d8 ^ 0xbc2a388a3093ef40;
  _DAT_18307ef30 = (_DAT_18307ef30 * -0x196117f0415c8dbd ^ _DAT_18307ed80) + _DAT_18307f0d8;
  _DAT_18307ed00 = _DAT_18307ef30 ^ _DAT_18307ed80;
  _DAT_18307efe0 = _DAT_18307f060;
  _DAT_18307f060 = 0;
  uVar1 = (~_DAT_18307ed30 + 0x100000000) *
          ((_DAT_18307f088 ^ 0xdb640cdb) + (ulonglong)((uint)_DAT_18307f088 & 0xdb640cdb) * 2);
  uVar1 = (uVar1 | _DAT_18307eef0) + (uVar1 & _DAT_18307eef0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18307ed60 = func_0x000184878c80((uVar1 | 0x249bf324) + (ulonglong)((uint)uVar1 & 0x249bf324))
  ;
  uVar1 = _DAT_18307ed60 << 0x16 | _DAT_18307ed60 >> 0x2a;
  _DAT_18307eef8 = (_DAT_18307eef8 ^ uVar1) + 0xa0b9d001 ^ 0x2c2a85f756001d65;
  _DAT_18307f058 = (_DAT_18307f058 * 0x2f63b9e9a6d2d4a7 ^ _DAT_18307eef8) + uVar1;
  _DAT_18307f018 = _DAT_18307f058 ^ _DAT_18307eef8;
  _DAT_18307ee60 = 0xa0b9d001;
  uVar1 = (~_DAT_18307ed00 + 0xa0b9d002) *
          ((_DAT_18307ee30 ^ 0xdb640cdb) + (ulonglong)((uint)_DAT_18307ee30 & 0xdb640cdb) * 2);
  uVar1 = (uVar1 | _DAT_18307ed98) + (uVar1 & _DAT_18307ed98);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18307eda8 = func_0x000184878c80((uVar1 | 0x7bdddcda) + (ulonglong)((uint)uVar1 & 0x7bdddcda))
  ;
  uVar1 = (_DAT_18307eda8 * -0x45c9cac25a32a041 >> 0x14) * 0x45b6804535100000;
  _DAT_18307ed38 = _DAT_18307ed38 ^ uVar1 ^ 0x64099835b33814bc;
  _DAT_18307f030 = (_DAT_18307f030 * -0x62ee689a191e4129 ^ _DAT_18307ed38) + uVar1;
  _DAT_18307ef20 = _DAT_18307f030 ^ _DAT_18307ed38;
  _DAT_18307ee40 = 0;
  uVar1 = (~_DAT_18307ed20 + 0x46402eb7) *
          ((_DAT_18307ee30 ^ 0xc2620d93) + (ulonglong)((uint)_DAT_18307ee30 & 0xc2620d93) * 2);
  uVar1 = (uVar1 | _DAT_18307f0a8) + (uVar1 & _DAT_18307f0a8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18307ee98 = func_0x000184878c80((uVar1 | unaff_R12) + (ulonglong)((uint)uVar1 & 0x84222325));
  uVar1 = (ulonglong)(~(uint)_DAT_18307ee98 & 0x46402eb6);
  _DAT_18307ef58 = _DAT_18307ef58 ^ uVar1 ^ 0xbf25331108a1d553;
  _DAT_18307eda8 = (_DAT_18307eda8 * 0x7b15a96a9dbc7433 ^ _DAT_18307ef58) + uVar1;
  _DAT_18307ef88 = _DAT_18307eda8 ^ _DAT_18307ef58;
  _DAT_18307f038 = 0;
  uVar1 = (_DAT_18307f0a0 ^ 0x842223fa) + _DAT_18307f010 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18307f0a0 ^ 0x842223fa;
  uVar2 = ((_DAT_18307f010 + _DAT_18307f0a0) * 0x2000 | _DAT_18307f010 + _DAT_18307f0a0 >> 0x33) ^
          _DAT_18307f010;
  _DAT_18307f020 =
       func_0x000184878c80((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_18307f0a0 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18307f010 + 0x842223fa));
  uVar1 = (_DAT_18307f020 << 0x2b | _DAT_18307f020 >> 0x15) * 0x9433749f98969bd;
  _DAT_18307f068 = _DAT_18307ed88 ^ uVar1 ^ 0xdf;
  _DAT_18307ef48 = (_DAT_18307ef48 ^ uVar1) + 0xdf ^ 0xf13913507f2d98f3;
  _DAT_18307ee90 = (_DAT_18307ee90 * -0x2b640fb0c344eb27 ^ _DAT_18307ef48) + uVar1;
  _DAT_18307eec0 = _DAT_18307ee90 ^ _DAT_18307ef48;
  _DAT_18307ed50 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x70)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487b3ed (image 18487b3ed) =====

void FUN_18487b3ed(void)

{
  return;
}



// ===== continuation @ rva 487b244 (image 18487b244) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18487b244(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487f4fe (image 18487f4fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18487f4fe(void)

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



// ===== continuation @ rva 487d0b9 (image 18487d0b9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18487d0b9(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R13 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487ce60 (image 18487ce60) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18487ce60(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487d486 (image 18487d486) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18487d486(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R13 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487e6b6 (image 18487e6b6) =====

undefined8 FUN_18487e6b6(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 487b7cd (image 18487b7cd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18487b7cd(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487b59e (image 18487b59e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18487b59e(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddfc90();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487bee4 (image 18487bee4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18487bee4(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487ba9a (image 18487ba9a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18487ba9a(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487c154 (image 18487c154) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18487c154(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  cVar1 = (**(code **)(*unaff_R13 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 487fcb3 (image 18487fcb3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18487fcb3(void)

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



// ===== continuation @ rva 487fc5f (image 18487fc5f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18487fc5f(void)

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



// ===== continuation @ rva 4880a26 (image 184880a26) =====

void FUN_184880a26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 48805d4 (image 1848805d4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1848805d4(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4880a18 (image 184880a18) =====

void FUN_184880a18(void)

{
  return;
}



// ===== continuation @ rva 4880974 (image 184880974) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184880974(void)

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



// ===== continuation @ rva 48800a9 (image 1848800a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1848800a9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180258458)();
  return;
}



// ===== continuation @ rva 488065a (image 18488065a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18488065a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180258008)();
  return;
}



// ===== continuation @ rva 48805f4 (image 1848805f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1848805f4(void)

{
  FUN_190dd72e0();
  (*_DAT_180258438)();
  return;
}



// ===== continuation @ rva 48809e3 (image 1848809e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1848809e3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1802583e8)();
  return;
}



// ===== continuation @ rva 4880686 (image 184880686) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184880686(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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



// ===== continuation @ rva 4880868 (image 184880868) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184880868(void)

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



// ===== continuation @ rva 4880835 (image 184880835) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184880835(void)

{
  FUN_190de3220();
  (*_DAT_180258018)();
  return;
}



// ===== continuation @ rva 47eac7d (image 1847eac7d) =====

void FUN_1847eac7d(void)

{
  return;
}



// ===== continuation @ rva 47e83a0 (image 1847e83a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e83a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180236c98)();
  return;
}



// ===== continuation @ rva 47eac22 (image 1847eac22) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847eac22(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180236da8)();
  return;
}



// ===== continuation @ rva 47eabeb (image 1847eabeb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847eabeb(void)

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



// ===== continuation @ rva 47e950c (image 1847e950c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847e950c(void)

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



// ===== continuation @ rva 47eac91 (image 1847eac91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847eac91(void)

{
  (*_DAT_180236ff8)();
  return;
}



// ===== continuation @ rva 47ea54d (image 1847ea54d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847ea54d(void)

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



// ===== continuation @ rva 47e85a5 (image 1847e85a5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847e85a5(void)

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



// ===== continuation @ rva 47e8cea (image 1847e8cea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e8cea(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180237048)();
  return;
}



// ===== continuation @ rva 47e86ca (image 1847e86ca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e86ca(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_180236cd8)();
  return;
}



// ===== continuation @ rva 47e9131 (image 1847e9131) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e9131(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180236318)();
  return;
}



// ===== continuation @ rva 47e9e30 (image 1847e9e30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e9e30(void)

{
  (*_DAT_180237008)();
  return;
}



// ===== continuation @ rva 47d49fc (image 1847d49fc) =====

void FUN_1847d49fc(void)

{
  return;
}



// ===== continuation @ rva 47d4889 (image 1847d4889) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847d4889(void)

{
  FUN_190de3220();
  (*_DAT_180230b78)();
  return;
}



// ===== continuation @ rva 47d4a03 (image 1847d4a03) =====

void FUN_1847d4a03(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 47d48bc (image 1847d48bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847d48bc(void)

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



// ===== continuation @ rva 47d48e0 (image 1847d48e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847d48e0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1847d4a10();
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



// ===== continuation @ rva 47d49b5 (image 1847d49b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847d49b5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180230ba8)();
  return;
}



// ===== continuation @ rva 47d49d9 (image 1847d49d9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847d49d9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_180230bd8)();
    return;
  }
  (*_DAT_180230bd8)();
  return;
}



// ===== continuation @ rva 47d495e (image 1847d495e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847d495e(void)

{
  FUN_190de3220();
  (*_DAT_180230bc8)();
  return;
}



// ===== continuation @ rva 47d4991 (image 1847d4991) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847d4991(void)

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



// ===== continuation @ rva 47d49f4 (image 1847d49f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847d49f4(void)

{
  (*_DAT_180230bd8)();
  return;
}



// ===== continuation @ rva 47e1333 (image 1847e1333) =====

void FUN_1847e1333(void)

{
  return;
}



// ===== continuation @ rva 47d4ba5 (image 1847d4ba5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847d4ba5(void)

{
  FUN_190ddce00();
  (*_DAT_180231a08)();
  return;
}



// ===== continuation @ rva 47e8197 (image 1847e8197) =====

void FUN_1847e8197(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 47e46d7 (image 1847e46d7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847e46d7(void)

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



// ===== continuation @ rva 47e092b (image 1847e092b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e092b(void)

{
  (*_DAT_1802334e8)();
  return;
}



// ===== continuation @ rva 47e534e (image 1847e534e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e534e(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180231668)();
  return;
}



// ===== continuation @ rva 47dba6d (image 1847dba6d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847dba6d(void)

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



// ===== continuation @ rva 47e45cc (image 1847e45cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e45cc(void)

{
  (*_DAT_1802333c8)();
  return;
}



// ===== continuation @ rva 47dff12 (image 1847dff12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847dff12(void)

{
  FUN_190de3220();
  (*_DAT_180233488)();
  return;
}



// ===== continuation @ rva 47e4744 (image 1847e4744) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1847e4744(void)

{
  (*_DAT_180233088)();
  return;
}



// ===== continuation @ rva 47e395f (image 1847e395f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847e395f(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 47e01de (image 1847e01de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1847e01de(void)

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



// ===== continuation @ rva 4816aa8 (image 184816aa8) =====

void FUN_184816aa8(void)

{
  return;
}



// ===== continuation @ rva 480b03a (image 18480b03a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18480b03a(void)

{
  FUN_190ddce00();
  (*_DAT_18023e188)();
  return;
}



// ===== continuation @ rva 481dd0c (image 18481dd0c) =====

void FUN_18481dd0c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 481745a (image 18481745a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18481745a(void)

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



// ===== continuation @ rva 481a8f2 (image 18481a8f2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18481a8f2(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x784,0x25);
  (*_DAT_180240028)();
  return;
}



// ===== continuation @ rva 4810de6 (image 184810de6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184810de6(void)

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



// ===== continuation @ rva 481766b (image 18481766b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18481766b(void)

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



// ===== continuation @ rva 481a6cc (image 18481a6cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18481a6cc(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x784,0x25);
  (*_DAT_18023fc28)();
  return;
}



// ===== continuation @ rva 481a360 (image 18481a360) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18481a360(void)

{
  undefined8 in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x1bcf7,0x453);
  (*_DAT_18023e7a8)();
  return;
}



// ===== continuation @ rva 48194a2 (image 1848194a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1848194a2(void)

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



// ===== continuation @ rva 4815f11 (image 184815f11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184815f11(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000040;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x784,0x25);
  (*_DAT_18023f138)();
  return;
}



// ===== continuation @ rva 48109cc (image 1848109cc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1848109cc(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000040;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000040);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4817115 (image 184817115) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184817115(void)

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



// ===== continuation @ rva 482239c (image 18482239c) =====

void FUN_18482239c(void)

{
  return;
}



// ===== continuation @ rva 481df6c (image 18481df6c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18481df6c(void)

{
  FUN_190ddce00();
  (*_DAT_1802433e8)();
  return;
}



// ===== continuation @ rva 482190a (image 18482190a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18482190a(void)

{
  FUN_190dd72e0();
  (*_DAT_180243088)();
  return;
}



// ===== continuation @ rva 4821e1e (image 184821e1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184821e1e(void)

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



// ===== continuation @ rva 481e13c (image 18481e13c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18481e13c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117db0();
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



// ===== continuation @ rva 481e0e8 (image 18481e0e8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18481e0e8(void)

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



// ===== continuation @ rva 4822294 (image 184822294) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184822294(void)

{
  FUN_190dd72e0();
  (*_DAT_180243408)();
  return;
}



// ===== continuation @ rva 4821bd8 (image 184821bd8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184821bd8(void)

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



// ===== continuation @ rva 4822408 (image 184822408) =====

void FUN_184822408(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 481e082 (image 18481e082) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18481e082(void)

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



// ===== continuation @ rva 481e299 (image 18481e299) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18481e299(void)

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



// ===== continuation @ rva 482225e (image 18482225e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18482225e(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *unaff_RSI;
  
  uVar1 = FUN_190de6db0();
  cVar2 = (**(code **)(*unaff_RSI + 0x720))();
  uVar3 = 0;
  if (cVar2 == '\0') {
    uVar3 = uVar1;
  }
  (*_DAT_1802433c8)(uVar3);
  return;
}



// ===== continuation @ rva 4826238 (image 184826238) =====

void FUN_184826238(void)

{
  return;
}



// ===== continuation @ rva 48225f1 (image 1848225f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1848225f1(void)

{
  FUN_190ddce00();
  (*_DAT_180244458)();
  return;
}



// ===== continuation @ rva 48226a7 (image 1848226a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1848226a7(void)

{
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = 0x7dcae2a1b877;
  (*_DAT_180244398)();
  return;
}



// ===== continuation @ rva 4825d12 (image 184825d12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184825d12(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180244308)();
  return;
}



// ===== continuation @ rva 4822648 (image 184822648) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184822648(void)

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



// ===== continuation @ rva 4826057 (image 184826057) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184826057(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180244278)();
  return;
}



// ===== continuation @ rva 4825ea1 (image 184825ea1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184825ea1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xc0))();
  (*_DAT_1802442c8)();
  return;
}



// ===== continuation @ rva 48261ae (image 1848261ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1848261ae(void)

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



// ===== continuation @ rva 4826227 (image 184826227) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184826227(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1802442b8)();
  return;
}



// ===== continuation @ rva 4826086 (image 184826086) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184826086(void)

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



// ===== continuation @ rva 4825f1d (image 184825f1d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184825f1d(void)

{
  (*_DAT_180244498)();
  return;
}



// ===== continuation @ rva 484f778 (image 18484f778) =====

undefined8 FUN_18484f778(undefined8 param_1)

{
  return param_1;
}



// ===== continuation @ rva 4826460 (image 184826460) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184826460(void)

{
  FUN_190ddce00();
  (*_DAT_180248658)();
  return;
}



// ===== continuation @ rva 484f7e7 (image 18484f7e7) =====

void FUN_18484f7e7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4835195 (image 184835195) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184835195(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
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



// ===== continuation @ rva 484f765 (image 18484f765) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18484f765(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_18024a5a8)(0);
  return;
}



// ===== continuation @ rva 4848b8e (image 184848b8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184848b8e(void)

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



// ===== continuation @ rva 484e97f (image 18484e97f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18484e97f(void)

{
  (*_DAT_18024a8e8)();
  return;
}



// ===== continuation @ rva 4846f90 (image 184846f90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184846f90(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180246c18)();
  return;
}



// ===== continuation @ rva 483d8eb (image 18483d8eb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018483d90d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18483d8eb(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 483ca29 (image 18483ca29) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18483ca29(void)

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



// ===== continuation @ rva 4843427 (image 184843427) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184843427(void)

{
  (*_DAT_18024a528)();
  return;
}



