// ===== continuation @ rva 5f78e16 (image 185f78e16) =====

void FUN_185f78e16(void)

{
  return;
}



// ===== continuation @ rva 5f759af (image 185f759af) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f759af(void)

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



// ===== continuation @ rva 5f76c55 (image 185f76c55) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f76c55(void)

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



// ===== continuation @ rva 5f76e73 (image 185f76e73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f76e73(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_R14;
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_XMM10_Da;
  ulonglong uVar9;
  uint unaff_XMM12_Da;
  ulonglong uVar10;
  
  uVar3 = (param_1 ^ in_RAX) + param_1 + _DAT_18310a338;
  uVar4 = (_DAT_18310a338 ^ 1) + in_RAX + 1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_1 ^ in_RAX;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18310a338 ^ 1;
  _DAT_18310a6d8 =
       func_0x000185f79000((uVar4 << 0x1d | uVar4 >> 0x23) - (in_RAX + 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (param_1 + _DAT_18310a338));
  uVar1 = (uint)(unaff_R14 >> 0x20);
  auVar5._8_4_ = (uint)unaff_R14;
  auVar5._0_8_ = unaff_R14;
  auVar5._12_4_ = uVar1;
  uVar8 = (uint)unaff_R14 & (uint)DAT_18001a990;
  uVar9 = SUB168(auVar5 | _DAT_18001a990,0);
  uVar6 = SUB164(auVar5 | _DAT_18001a990,0);
  uVar10 = SUB168(auVar5 ^ _DAT_18001a990,0);
  uVar7 = SUB164(auVar5 ^ _DAT_18001a990,0);
  lVar2 = ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180734410 +
           (ulonglong)uVar1 * (ulonglong)_DAT_180734400 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180734400;
  uVar4 = unaff_R14 ^ _DAT_18001a710;
  uVar3 = (unaff_R14 ^ _DAT_18310a6d8) & 0x7fffffffffff0000;
  uVar3 = uVar3 << 10 | uVar3 >> 0x36;
  _DAT_18310a7d0 =
       (((ulonglong)uVar7 * (ulonglong)_DAT_1807343e0 +
         ((ulonglong)uVar7 * (ulonglong)_DAT_1807343f0 +
          (uVar10 >> 0x20) * (ulonglong)_DAT_1807343e0 << 0x20) + lVar2 +
        (ulonglong)uVar6 * (ulonglong)_DAT_1807343c0 +
        ((ulonglong)uVar6 * (ulonglong)_DAT_1807343d0 + (uVar9 >> 0x20) * (ulonglong)_DAT_1807343c0
        << 0x20) +
        ((ulonglong)uVar8 * (ulonglong)_DAT_1807343b0 << 0x20 |
        (ulonglong)uVar8 * (ulonglong)_DAT_1807343a0) +
        ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180734390 +
         (ulonglong)uVar1 * (ulonglong)_DAT_180734380 << 0x20) +
        (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180734380) -
       ((uVar4 & 0xffffffff) * (ulonglong)unaff_XMM10_Da +
        ((uVar4 >> 0x20) * (ulonglong)unaff_XMM10_Da +
         (uVar4 & 0xffffffff) * (ulonglong)_DAT_180734420 << 0x20) +
        (ulonglong)uVar7 * (ulonglong)unaff_XMM12_Da +
        ((uVar10 >> 0x20) * (ulonglong)unaff_XMM12_Da + (ulonglong)uVar7 * (ulonglong)_DAT_180734450
        << 0x20) +
        ((ulonglong)uVar8 * (ulonglong)_DAT_180734450 << 0x20 |
        (ulonglong)uVar8 * (ulonglong)unaff_XMM12_Da) +
        (unaff_R14 & 0xffffffff) * (ulonglong)unaff_XMM10_Da +
        ((ulonglong)uVar1 * (ulonglong)unaff_XMM10_Da +
         (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180734420 << 0x20) + lVar2 +
       (ulonglong)uVar6 * (ulonglong)_DAT_180734460 +
       ((ulonglong)uVar6 * (ulonglong)_DAT_180734470 + (uVar9 >> 0x20) * (ulonglong)_DAT_180734460
       << 0x20))) + 0x9dbb441193fb035;
  _DAT_18310a6e8 = _DAT_18310a5e8 ^ uVar3 ^ _DAT_18310a7d0;
  _DAT_18310a310 = (_DAT_18310a310 ^ uVar3) + _DAT_18310a7d0 ^ 0xfa44e5880b754214;
  _DAT_18310a400 = (_DAT_18310a400 * -0x42dcc01f19e10a47 ^ _DAT_18310a310) + uVar3;
  _DAT_18310a678 = _DAT_18310a400 ^ _DAT_18310a310;
  switch(_DAT_18310a7d0 == 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5f78529 (image 185f78529) =====

void thunk_FUN_185f773e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 5f78a30 (image 185f78a30) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f78a30(void)

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



// ===== continuation @ rva 5f789dc (image 185f789dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f789dc(void)

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



// ===== continuation @ rva 5f7850f (image 185f7850f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f7850f(void)

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



// ===== continuation @ rva 5f77c91 (image 185f77c91) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f77c91(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = in_stack_00000048;
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



// ===== continuation @ rva 5f4c459 (image 185f4c459) =====

void FUN_185f4c459(void)

{
  return;
}



// ===== continuation @ rva 5f4bf9d (image 185f4bf9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4bf9d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_18072dd38)();
  return;
}



// ===== continuation @ rva 5f4c438 (image 185f4c438) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4c438(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_18072de58)();
  return;
}



// ===== continuation @ rva 5f4c3d2 (image 185f4c3d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4c3d2(void)

{
  FUN_190dd72e0();
  (*_DAT_18072ddd8)();
  return;
}



// ===== continuation @ rva 5f4c06d (image 185f4c06d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4c06d(void)

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



// ===== continuation @ rva 5f4c0f7 (image 185f4c0f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4c0f7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_18072de78)();
  return;
}



// ===== continuation @ rva 5f4c091 (image 185f4c091) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4c091(void)

{
  FUN_190dd72e0();
  (*_DAT_18072dd58)();
  return;
}



// ===== continuation @ rva 5f4c34e (image 185f4c34e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4c34e(void)

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



// ===== continuation @ rva 5f4c1e7 (image 185f4c1e7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4c1e7(void)

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



// ===== continuation @ rva 5f4c461 (image 185f4c461) =====

void FUN_185f4c461(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5f4c188 (image 185f4c188) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4c188(void)

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



// ===== continuation @ rva 5f4c5e6 (image 185f4c5e6) =====

void FUN_185f4c5e6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x38) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x000185f4c615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18072e500 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 5f4c593 (image 185f4c593) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185f4c5c9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185f4c593(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5f61831 (image 185f61831) =====

undefined8 FUN_185f61831(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x70);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== continuation @ rva 5f514ad (image 185f514ad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185f514d0 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185f514ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5f61c22 (image 185f61c22) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f61c22(longlong param_1)

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



// ===== continuation @ rva 5f59570 (image 185f59570) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f59570(undefined4 param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar3;
  ulonglong unaff_R12;
  longlong *unaff_R15;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  
  *(undefined4 *)(unaff_RBP + 0x70) = param_1;
  (**(code **)(*unaff_R15 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x80) = 6;
  *(undefined8 *)(unaff_RBP + 0x70) = unaff_RBX;
  auVar5._8_8_ = _UNK_180019298;
  auVar5._0_8_ = unaff_EDI ^ unaff_R12;
  auVar6 = pshufb(auVar5 ^ _DAT_18072ed20,_DAT_1800170c0);
  uVar3 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar3 + _DAT_183109498;
  if (auVar6._4_4_ < 0) {
    uVar2 = _DAT_183109558 ^ uVar3;
  }
  _DAT_183109078 = func_0x000185f75840(SUB161(auVar5 ^ _DAT_18072ed20,5) ^ uVar2);
  uVar8 = unaff_EDI & _DAT_180017990;
  uVar7 = unaff_EDI | _DAT_180017990;
  uVar4 = unaff_EDI ^ _DAT_180017990;
  uVar2 = ((((ulonglong)uVar4 * (ulonglong)_DAT_18072eda0 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_18072ed90 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_18072ed80 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_18072ed70 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_18072ed60 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_18072ed50) +
           ((ulonglong)unaff_EDI * (ulonglong)_DAT_18072ed40 << 0x20) +
           (ulonglong)unaff_EDI * (ulonglong)_DAT_18072ed30) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_18072ee40 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_18072ee30 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_18072ee20 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_18072ee10 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_18072ee00 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_18072edf0) +
          ((ulonglong)(unaff_EDI * _DAT_18072ede0) << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_18072edd0)) + 0xd2a026f5dfc69532;
  _DAT_183109388 = _DAT_183109250 ^ _DAT_183109078 ^ uVar2;
  _DAT_183109450 = (_DAT_183109450 ^ _DAT_183109078) + uVar2 ^ 0x565b12f6ffbd7f2e;
  _DAT_183109558 = (_DAT_183109558 * 0x33a680a9e8c850af ^ _DAT_183109450) + _DAT_183109078;
  _DAT_183108f30 = _DAT_183109558 ^ _DAT_183109450;
  _DAT_1831092d8 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar2;
  iVar1 = (**(code **)(*unaff_R15 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5f50ff4 (image 185f50ff4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185f514d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185f50ff4(ulonglong param_1,longlong param_2,ulonglong param_3)

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
  uint uVar13;
  uint uVar14;
  longlong in_RAX;
  longlong in_RCX;
  ulonglong uVar15;
  ulonglong unaff_RBX;
  undefined1 (*pauVar16) [16];
  undefined1 (*unaff_RBP) [16];
  longlong *unaff_RSI;
  ulonglong unaff_RDI;
  uint uVar18;
  uint uVar19;
  undefined8 uVar17;
  ulonglong uVar20;
  ulonglong uVar22;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  undefined1 auVar26 [16];
  ulonglong uVar27;
  uint uVar28;
  
  uVar20 = param_1 + in_RAX + param_2;
  uVar22 = param_3 + in_RCX + unaff_RDI;
  param_1 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ param_1;
  param_3 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ param_3;
  _DAT_183108fe0 =
       func_0x000185f75840((param_3 << 0x1d | param_3 >> 0x23) - (in_RCX + unaff_RDI) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  uVar18 = (uint)(unaff_RBX >> 0x20);
  auVar26._8_4_ = (int)unaff_RBX;
  auVar26._0_8_ = unaff_RBX;
  auVar26._12_4_ = uVar18;
  uVar19 = (uint)(unaff_RDI >> 0x20);
  auVar24._8_4_ = (int)unaff_RDI;
  auVar24._0_8_ = unaff_RDI;
  auVar24._12_4_ = uVar19;
  uVar20 = (ulonglong)_DAT_18072f3c0;
  auVar21 = auVar26 ^ auVar24;
  auVar23._8_4_ = 0xffffffff;
  auVar23._0_8_ = 0xffffffffffffffff;
  auVar23._12_4_ = 0xffffffff;
  auVar23 = auVar23 ^ auVar24;
  uVar6 = (ulonglong)_DAT_18072f3b0;
  uVar22 = (ulonglong)_DAT_18072f3b0;
  uVar1 = (ulonglong)_DAT_18072f3e0;
  *(ulonglong *)unaff_RBP[4] = (ulonglong)uVar19;
  *(ulonglong *)(unaff_RBP[4] + 8) = auVar24._8_8_ >> 0x20;
  uVar13 = _DAT_18072f450;
  uVar12 = _DAT_18072f440;
  uVar7 = (ulonglong)_DAT_18072f3d0;
  uVar2 = (ulonglong)_DAT_18072f3d0;
  uVar3 = (ulonglong)_DAT_18072f410;
  uVar25 = SUB164(auVar26 & auVar24,0);
  uVar4 = (ulonglong)_DAT_18072f400;
  uVar27 = SUB168(auVar26 & auVar24,0);
  uVar8 = (ulonglong)_DAT_18072f400;
  uVar5 = (ulonglong)_DAT_18072f430;
  uVar28 = SUB164(auVar26 | auVar24,0);
  uVar9 = (ulonglong)_DAT_18072f420;
  uVar10 = (ulonglong)_DAT_18072f420;
  unaff_RBP[5] = auVar21;
  uVar14 = _DAT_18072f460;
  uVar11 = _DAT_18072f3f0;
  *unaff_RBP = auVar23;
  uVar15 = _DAT_183108fe0 & 0x1ffffffffffff;
  _DAT_183108f18 =
       (((ulonglong)uVar11 * (ulonglong)auVar23._0_4_ +
         ((ulonglong)uVar14 * (ulonglong)auVar23._0_4_ + (auVar23._0_8_ >> 0x20) * (ulonglong)uVar11
         << 0x20) +
        (ulonglong)uVar12 * (ulonglong)auVar21._0_4_ +
        ((ulonglong)uVar13 * (ulonglong)auVar21._0_4_ + (auVar21._0_8_ >> 0x20) * (ulonglong)uVar12
        << 0x20) +
        uVar28 * uVar10 + (uVar5 * uVar28 + (SUB168(auVar26 | auVar24,0) >> 0x20) * uVar9 << 0x20) +
        uVar4 * uVar25 + (uVar3 * uVar25 + (uVar27 >> 0x20) * uVar8 << 0x20) +
        (uVar1 * (unaff_RDI & 0xffffffff) + uVar2 * uVar19 << 0x20) +
        (unaff_RDI & 0xffffffff) * uVar7 +
        (uVar20 * (unaff_RBX & 0xffffffff) + uVar22 * uVar18 << 0x20) +
        (unaff_RBX & 0xffffffff) * uVar6) -
       ((ulonglong)*(uint *)*unaff_RBP * (_DAT_18072f4d0 & 0xffffffff) +
        ((ulonglong)_DAT_18072f520 * (ulonglong)*(uint *)*unaff_RBP +
         (auVar23._0_8_ >> 0x20) * (_DAT_18072f4d0 & 0xffffffff) << 0x20) +
        (ulonglong)*(uint *)unaff_RBP[5] * (ulonglong)_DAT_18072f500 +
        ((ulonglong)_DAT_18072f510 * (ulonglong)*(uint *)unaff_RBP[5] +
         (auVar21._0_8_ >> 0x20) * (ulonglong)_DAT_18072f500 << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_18072f4e0 +
       ((ulonglong)_DAT_18072f4f0 * (ulonglong)uVar25 + (uVar27 >> 0x20) * (ulonglong)_DAT_18072f4e0
       << 0x20) +
       ((unaff_RDI & 0xffffffff) * (ulonglong)_DAT_18072f4c0 +
        (ulonglong)*(uint *)unaff_RBP[4] * (ulonglong)_DAT_18072f4b0 << 0x20) +
       (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_18072f4b0 +
       ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_18072f4a0 +
        (ulonglong)uVar18 * (ulonglong)_DAT_18072f490 << 0x20) +
       (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_18072f490)) + 0xd2b7817694b4b8d6;
  _DAT_183109488 = _DAT_183108f18 ^ uVar15;
  _DAT_183109680 = (_DAT_183109680 ^ uVar15) + _DAT_183108f18 ^ 0xc69ae9cf4764777;
  _DAT_1831094d0 = (_DAT_1831094d0 * -0x4a0eb278639640b ^ _DAT_183109680) + uVar15;
  _DAT_183109230 = _DAT_1831094d0 ^ _DAT_183109680;
  pauVar16 = unaff_RBP + -3;
  uVar17 = FUN_18414b520(pauVar16);
  if (0xf < *(ulonglong *)(unaff_RBP[-2] + 8)) {
    pauVar16 = *(undefined1 (**) [16])unaff_RBP[-3];
  }
  (**(code **)(*unaff_RSI + 0x70))(uVar17,*(undefined8 *)unaff_RBP[1],pauVar16);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5f55161 (image 185f55161) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_185f55161(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong in_RAX;
  longlong in_RCX;
  longlong *unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 + in_RCX + param_2;
  uVar2 = param_4 + in_RAX + param_3;
  param_1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ param_1;
  param_4 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_4;
  _DAT_183109148 =
       func_0x000185f75840((param_4 << 0x1d | param_4 >> 0x23) - (in_RAX + param_3) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  _DAT_183109060 =
       (_DAT_183109060 ^ _DAT_183109148 & 0x7fffffffffffffff) + 0xff8f257e6ffbb293 ^
       0x88b52539a5b59f7d;
  _DAT_183109668 =
       (_DAT_183109668 * -0x5a279712c02ddf43 ^ _DAT_183109060) +
       (_DAT_183109148 & 0x7fffffffffffffff);
  _DAT_183109260 = _DAT_183109668 ^ _DAT_183109060;
  _DAT_183108f50 = _DAT_183108fb0 ^ 0xff8f257e6ffbb293;
  _DAT_1831096e8 = -0x70da8190044d6d;
  uVar1 = (~_DAT_183109688 + 0xc3eaa4adf729cfbd) *
          ((_DAT_183109590 ^ 0xf3f94983c7236e38) + (_DAT_183109590 & 0x73f94983c7236e38) * 2);
  uVar1 = (uVar1 | _DAT_1831090b8) + (uVar1 & _DAT_1831090b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831096f8 = func_0x000185f75840((uVar1 | 0x3013ed2e300aa184) + (uVar1 & 0x3013ed2e300aa184));
  uVar1 = _DAT_1831096f8 << 0x33 | _DAT_1831096f8 >> 0xd;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar1;
  _DAT_183109640 = (_DAT_183109640 ^ uVar1) + 0x3013ed2eb42882a1 ^ 0x4df1226cb9007098;
  _DAT_183108f18 = (_DAT_183108f18 * 0x3320e7e8e00e3877 ^ _DAT_183109640) + uVar1;
  _DAT_183108f28 = _DAT_183108f18 ^ _DAT_183109640;
  _DAT_183109090 = 0x3013ed2eb42882a1;
  uVar1 = func_0x000185f75840(_DAT_1831093e8 + 0x5069e8a520974091 ^ 0x34);
  _DAT_1831095e8 =
       (_DAT_1831095e8 ^ uVar1 ^ 0xbe78a9b06263c9c2) + 0x4187564f9d9c363e ^ 0x667f509d101ebbfe;
  _DAT_1831090c0 =
       (_DAT_1831090c0 * -0x4d5aaf27ca25f16b ^ _DAT_1831095e8) + (uVar1 ^ 0xbe78a9b06263c9c2);
  _DAT_183109660 = _DAT_1831090c0 ^ _DAT_1831095e8;
  _DAT_183109480 = 0x4187564f9d9c363e;
  uVar1 = (~_DAT_183109168 + 0x4187564f9d9c363f) *
          ((_DAT_183109450 ^ 0xbe78a9b0e641eacf) + (_DAT_183109450 & 0x3e78a9b0e641eacf) * 2);
  uVar1 = (uVar1 | _DAT_183109140) + (uVar1 & _DAT_183109140);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183109070 = func_0x000185f75840((uVar1 | 0xffffffff7bdddcf1) + (uVar1 & 0xffffffff7bdddcf1));
  uVar1 = (_DAT_183109070 ^ 0xefdd60526d5a42ac) -
          ((_DAT_183109070 ^ 0xefdd60526d5a42ac) >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (_DAT_183109070 ^ 0x51a5c9e20f398b46 ^
          (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7) << 0x11 |
          (_DAT_183109070 ^ 0x51a5c9e20f398b46) >> 0x2f;
  _DAT_183109550 = _DAT_183109268 ^ uVar1 ^ 0x28;
  _DAT_1831091e0 = (_DAT_1831091e0 ^ uVar1) + 0x28 ^ 0x9a383fc97f42617b;
  _DAT_1831091c0 = (_DAT_1831091c0 * -0x5b2347e0b270b36b ^ _DAT_1831091e0) + uVar1;
  _DAT_183109270 = _DAT_1831091c0 ^ _DAT_1831091e0;
  _DAT_183109548 = 0x28;
  _DAT_183108fb8 = func_0x000185f75840(_DAT_183109038 ^ 0x65e0d4b5a8ba7764);
  uVar1 = (_DAT_183108fb8 ^ 0x8f16209902d62238) * 0x5dc50e0a12f67cb1;
  _DAT_183108f00 = _DAT_183109218 ^ uVar1 ^ 0xfd2d5a6a39abc102;
  _DAT_1831094e8 = (_DAT_1831094e8 ^ uVar1) + 0xfd2d5a6a39abc102 ^ 0xab2dbdf045685c7d;
  _DAT_183109378 = (_DAT_183109378 * 0x690855e89c82cde7 ^ _DAT_1831094e8) + uVar1;
  _DAT_183109050 = _DAT_183109378 ^ _DAT_1831094e8;
  _DAT_1831092e8 = 0xfd2d5a6a39abc102;
  uVar1 = (~_DAT_183109388 + 0x6ea4fcd95e557ba8) *
          ((_DAT_183109020 ^ 0x8422230d) + (ulonglong)((uint)_DAT_183109020 & 0x8422230d) * 2);
  uVar1 = (uVar1 | _DAT_1831096f0) + (uVar1 & _DAT_1831096f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183109678 = func_0x000185f75840((uVar1 | 0x6ea4fcd9da7758aa) + (uVar1 & 0x6ea4fcd9da7758aa));
  uVar1 = _DAT_183109678 ^ 0x28;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar1;
  _DAT_183109598 = _DAT_183108fe0 ^ uVar1 ^ 0x6ea4fcd95e557bcf;
  _DAT_183109348 = (_DAT_183109348 ^ uVar1) + 0x6ea4fcd95e557bcf ^ 0xfc8148511cccfd6e;
  _DAT_183108f60 = (_DAT_183108f60 * -0x6239f6440bfa7dc9 ^ _DAT_183109348) + uVar1;
  _DAT_1831091e8 = _DAT_183108f60 ^ _DAT_183109348;
  _DAT_183109028 = 0x6ea4fcd95e557bcf;
  uVar1 = (~_DAT_183108f40 + 0x915b0326a1aa845a) *
          ((_DAT_183109358 ^ 0x6ea4fcd9da7758ea) + (_DAT_183109358 & 0x6ea4fcd9da7758ea) * 2);
  uVar1 = (uVar1 | _DAT_183108fe8) + (uVar1 & _DAT_183108fe8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183109128 = func_0x000185f75840((uVar1 | 0xffffffff7bdddcb3) + (uVar1 & 0xffffffff7bdddcb3));
  uVar1 = (_DAT_183109128 ^ 0xffffffffffffffdf) -
          ((_DAT_183109128 ^ 0xffffffffffffffdf) >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = _DAT_183109128 ^ 0x6ea4fcd95e557b86 ^
          (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2;
  _DAT_183109038 = _DAT_183109200 ^ uVar1 ^ 0x28;
  _DAT_1831091c0 = (_DAT_1831091c0 ^ uVar1) + 0x28 ^ 0x287f92c5ead98d61;
  _DAT_183109518 = (_DAT_183109518 * -0x7e05f21d20c9cdb3 ^ _DAT_1831091c0) + uVar1;
  _DAT_183109600 = _DAT_183109518 ^ _DAT_1831091c0;
  _DAT_183109500 = 0x28;
  uVar1 = (_DAT_1831090b8 ^ _DAT_18072f780) + _DAT_1831094f0 + 0xff8f257eebd991b6;
  uVar2 = (_DAT_1831094f0 ^ _UNK_18072f788) + _DAT_1831090b8 + 0x3013ed2eb42882a1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831090b8 ^ _DAT_18072f780;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831094f0 ^ _UNK_18072f788;
  _DAT_183109310 =
       func_0x000185f75840((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831090b8 + 0x3013ed2eb42882a1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831094f0 + 0xff8f257eebd991b6));
  uVar1 = _DAT_183109310 ^ 0xff8f257e6ffbb293;
  _DAT_1831090f0 = _DAT_183109000 ^ uVar1 ^ 0x2fa312ad24243534;
  _DAT_183109678 = (_DAT_183109678 ^ uVar1) + 0x2fa312ad24243534 ^ 0x9f4781a8eb92c845;
  _DAT_1831096c0 = (_DAT_1831096c0 * 0x78b6183cab78ed9b ^ _DAT_183109678) + uVar1;
  _DAT_183109448 = _DAT_1831096c0 ^ _DAT_183109678;
  _DAT_183109528 = 0x2fa312ad24243534;
  uVar1 = (~_DAT_1831096f8 + 0x3013ed2eb42882a2) *
          ((_DAT_183109440 ^ 0xff8f257eebd991b6) + (_DAT_183109440 & 0x7f8f257eebd991b6) * 2);
  uVar1 = (uVar1 | _DAT_1831095f0) + (uVar1 & _DAT_1831095f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183109170 = func_0x000185f75840((uVar1 | 0xcf9cc8505ff11317) + (uVar1 & 0xcf9cc8505ff11317));
  _DAT_183109378 = (_DAT_183109378 ^ _DAT_183109388) + 0xcf9cc850dbd33032 ^ 0x30a20bfefa80892f;
  _DAT_183109398 = (_DAT_183109398 * 0x4b1bc70da08e92f7 ^ _DAT_183109378) + _DAT_183109388;
  _DAT_183109138 = _DAT_183109398 ^ _DAT_183109378;
  _DAT_183109158 = 0xcf9cc850dbd33032;
  _DAT_183108fa0 = func_0x000185f75840(_DAT_1831094a8 ^ 0x1f007c22ffe1e9);
  _DAT_183109368 = _DAT_183108fa0 ^ 0x2fa312ad24243534;
  uVar1 = _DAT_183109368 - (_DAT_183109368 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  _DAT_183109368 =
       (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
       _DAT_183109368;
  _DAT_183109118 = _DAT_183109118 ^ _DAT_183109368 ^ 0xc0a300c1ab25ece0;
  _DAT_183108fb0 = (_DAT_183108fb0 * -0x176beed822996637 ^ _DAT_183109118) + _DAT_183109368;
  _DAT_183109220 = _DAT_183108fb0 ^ _DAT_183109118;
  _DAT_183108f70 = 0;
  _DAT_183108f18 = func_0x000185f75840(_DAT_183109488 + 0x7ed1f00bb9d625ffU ^ 0xfc);
  uVar1 = ((_DAT_183108f18 & 0xffffffff) * (ulonglong)_DAT_18072f7a0 +
           (_DAT_183108f18 >> 0x20) * (ulonglong)_DAT_18072f790 << 0x20) +
          (_DAT_183108f18 & 0xffffffff) * (ulonglong)_DAT_18072f790 & 0x7fffffffffffffff;
  _DAT_1831095c0 = (_DAT_1831095c0 ^ uVar1) + 0x70da8190044d6c ^ 0xfcc391a88c7ae656;
  _DAT_1831094f0 = (_DAT_1831094f0 * -0x580cafc3ddfbb693 ^ _DAT_1831095c0) + uVar1;
  _DAT_183109010 = _DAT_1831094f0 ^ _DAT_1831095c0;
  _DAT_183108fa8 = 0x70da8190044d6c;
  uVar1 = (_DAT_1831093e8 ^ _DAT_18072f7b0) + _DAT_1831091e8 + 0xff8f257eebd991b6;
  uVar2 = (_DAT_1831091e8 ^ _UNK_18072f7b8) + _DAT_1831093e8 + 0x70da8190044d6c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831093e8 ^ _DAT_18072f7b0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831091e8 ^ _UNK_18072f7b8;
  _DAT_183109468 =
       func_0x000185f75840((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831093e8 + 0x70da8190044d6c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831091e8 + 0xff8f257eebd991b6));
  uVar1 = (_DAT_183109468 ^ 0x77d8577a6d318000) & 0xffffffffffffe000;
  _DAT_1831096b8 = _DAT_1831096b8 ^ uVar1 ^ 0xfefcd05f5c180ba9;
  _DAT_1831096e8 = (_DAT_1831096e8 * -0x6697f2c4b7cd2cdd ^ _DAT_1831096b8) + uVar1;
  _DAT_183109438 = _DAT_1831096e8 ^ _DAT_1831096b8;
  _DAT_183109590 = 0;
  func_0x000180001044(unaff_RBP[10],*unaff_RBP + 0x28);
  return 0;
}



// ===== continuation @ rva 5f4bebf (image 185f4bebf) =====

void FUN_185f4bebf(void)

{
  return;
}



// ===== continuation @ rva 5f4bceb (image 185f4bceb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4bceb(void)

{
  FUN_190dd72e0();
  (*_DAT_18072dbb8)();
  return;
}



// ===== continuation @ rva 5f4be23 (image 185f4be23) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4be23(void)

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



// ===== continuation @ rva 5f4bdda (image 185f4bdda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4bdda(void)

{
  FUN_190dd72e0();
  (*_DAT_18072dc18)();
  return;
}



// ===== continuation @ rva 5f4bd95 (image 185f4bd95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4bd95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_18072dc48)();
  return;
}



// ===== continuation @ rva 5f4beb4 (image 185f4beb4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4beb4(void)

{
  (*_DAT_18072dc38)();
  return;
}



// ===== continuation @ rva 5f4bd1d (image 185f4bd1d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4bd1d(void)

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



// ===== continuation @ rva 5f4bd71 (image 185f4bd71) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4bd71(void)

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



// ===== continuation @ rva 5f4be97 (image 185f4be97) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4be97(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18072dbc8)();
  return;
}



// ===== continuation @ rva 5f4bbdb (image 185f4bbdb) =====

void FUN_185f4bbdb(void)

{
  return;
}



// ===== continuation @ rva 5f4b96a (image 185f4b96a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4b96a(void)

{
  FUN_190ddce00();
  (*_DAT_18072db08)();
  return;
}



// ===== continuation @ rva 5f4bb87 (image 185f4bb87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4bb87(void)

{
  FUN_190dd72e0();
  (*_DAT_18072db28)();
  return;
}



// ===== continuation @ rva 5f4bb2b (image 185f4bb2b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4bb2b(void)

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



// ===== continuation @ rva 5f4bad6 (image 185f4bad6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4bad6(void)

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



// ===== continuation @ rva 5f4bb13 (image 185f4bb13) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4bb13(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18072da38)();
  return;
}



// ===== continuation @ rva 5f4bbd0 (image 185f4bbd0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185f4bbd0(undefined8 param_1)

{
  undefined8 in_stack_00000030;
  
  (*_DAT_18072da58)(param_1,in_stack_00000030);
  return;
}



// ===== continuation @ rva 5f4bb5d (image 185f4bb5d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4bb5d(void)

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



// ===== continuation @ rva 5f4ba48 (image 185f4ba48) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185f4ba48(void)

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



