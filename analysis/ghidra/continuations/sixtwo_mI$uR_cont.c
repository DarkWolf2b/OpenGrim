// ===== continuation @ rva 6eed4e3 (image 186eed4e3) =====

void FUN_186eed4e3(void)

{
  return;
}



// ===== continuation @ rva 6ee964f (image 186ee964f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee964f(void)

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



// ===== continuation @ rva 6eec8e9 (image 186eec8e9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eec8e9(void)

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



// ===== continuation @ rva 6eebd2d (image 186eebd2d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eebd2d(void)

{
  char cVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  uint unaff_R12D;
  uint unaff_R14D;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong unaff_XMM8_Qa;
  uint uVar12;
  
  uVar4 = (ulonglong)unaff_R14D;
  uVar3 = uVar4 ^ 0x84222325 ^ _DAT_183173858;
  lVar2 = (uVar4 ^ 0x84222325) + _DAT_183173b78;
  uVar7 = uVar3 + lVar2;
  uVar8 = (_DAT_183173b78 ^ 1) + _DAT_183173858 + 1;
  uVar3 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar3;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183173b78 ^ 1;
  _DAT_183173740 =
       func_0x000186eed6c0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183173858 + 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar10 = unaff_R14D & (uint)_DAT_18001a990;
  uVar11 = unaff_R14D | (uint)_DAT_18001a990;
  uVar3 = (_DAT_183173740 ^ uVar4) * 0xac863186a9411f9;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  uVar7 = ((uVar4 ^ unaff_XMM8_Qa) & 0xffffffff) * (ulonglong)_DAT_180a952d0 +
          (((uVar4 ^ unaff_XMM8_Qa) & 0xffffffff) * (ulonglong)_DAT_180a952e0 +
           (unaff_XMM8_Qa >> 0x20) * (ulonglong)_DAT_180a952d0 << 0x20) +
          ((ulonglong)uVar11 * (ulonglong)_DAT_180a952c0 << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_DAT_180a952b0 +
          ((ulonglong)uVar10 * (ulonglong)_DAT_180a952c0 << 0x20 |
          (ulonglong)uVar10 * (ulonglong)_DAT_180a952b0) +
          ((ulonglong)unaff_R14D * (ulonglong)_DAT_180a952a0 << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_180a95290 +
          (-(((uVar4 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)_DAT_180a95370 +
            (((uVar4 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)_DAT_180a95380 +
             (_DAT_18001a990 >> 0x20) * (ulonglong)_DAT_180a95370 << 0x20)) -
          (((ulonglong)uVar11 * (ulonglong)_DAT_180a95360 << 0x20) +
           (ulonglong)uVar11 * (ulonglong)_DAT_180a95350 +
          ((ulonglong)uVar10 * (ulonglong)_DAT_180a95340 << 0x20 |
          (ulonglong)uVar10 * (ulonglong)_DAT_180a95330) +
          ((ulonglong)unaff_R14D * (ulonglong)_DAT_180a95320 << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_180a95310)) + 0x1a6145fd9da3ce2c;
  _DAT_183173770 = _DAT_183173cd8 ^ uVar3 ^ uVar7;
  _DAT_183173ee8 = (_DAT_183173ee8 ^ uVar3) + uVar7 ^ 0xaac2a2b3437e2e1d;
  _DAT_183173988 = (_DAT_183173988 * 0x320e2adf607d65f ^ _DAT_183173ee8) + uVar3;
  _DAT_183173ea0 = _DAT_183173988 ^ _DAT_183173ee8;
  uVar10 = (uint)uVar7;
  _DAT_183173de8 = uVar7 & 0xffffffff;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = unaff_R12D ^ 0x84222325;
  auVar5._8_4_ = uVar10;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ _DAT_180a95390,_DAT_1800170c0);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar4 + _DAT_183173ed8;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_183173a20 ^ uVar4;
  }
  _DAT_183173760 = func_0x000186eed6c0(SUB161(auVar5 ^ _DAT_180a95390,5) ^ uVar3);
  uVar3 = (_DAT_183173760 << 1 | (ulonglong)(_DAT_183173760 < 0)) ^ (ulonglong)unaff_R12D;
  uVar12 = unaff_R12D & uVar10;
  uVar11 = unaff_R12D | uVar10;
  uVar10 = unaff_R12D ^ uVar10;
  uVar4 = (ulonglong)unaff_R12D * (uVar7 & 0xffffffff);
  uVar8 = unaff_R12D ^ unaff_XMM8_Qa;
  lVar9 = (uVar4 & 0xffffffff) * (ulonglong)_DAT_180a95460 +
          ((uVar4 & 0xffffffff) * (ulonglong)_DAT_180a95470 +
           (uVar4 >> 0x20) * (ulonglong)_DAT_180a95460 << 0x20);
  lVar2 = ((ulonglong)uVar10 * (ulonglong)_DAT_180a954f0 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_180a954e0 +
          ((ulonglong)uVar11 * (ulonglong)_DAT_180a954d0 << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_DAT_180a954c0 +
          ((ulonglong)uVar12 * (ulonglong)_DAT_180a954b0 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_DAT_180a954a0 +
          ((uVar7 & 0xffffffff) * (ulonglong)_DAT_180a95490 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_180a95480 +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_180a95490 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_180a95480 + lVar9;
  _DAT_183173a98 =
       (((uVar8 & 0xffffffff) * (ulonglong)_DAT_180a953e0 +
         ((uVar8 & 0xffffffff) * (ulonglong)_DAT_180a95450 +
          (unaff_XMM8_Qa >> 0x20) * (ulonglong)_DAT_180a953e0 << 0x20) + lVar9 +
        ((ulonglong)uVar10 * (ulonglong)_DAT_180a95440 << 0x20) +
        (ulonglong)uVar10 * (ulonglong)_DAT_180a95430 +
        ((ulonglong)uVar11 * (ulonglong)_DAT_180a95420 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)_DAT_180a95410 +
        ((ulonglong)uVar12 * (ulonglong)_DAT_180a95400 << 0x20) +
        (ulonglong)uVar12 * (ulonglong)_DAT_180a953f0 +
        ((uVar7 & 0xffffffff) * (ulonglong)_DAT_180a953d0 << 0x20) +
        (uVar7 & 0xffffffff) * (ulonglong)_DAT_180a953c0 +
        ((ulonglong)unaff_R12D * (ulonglong)_DAT_180a953b0 << 0x20) +
        (ulonglong)unaff_R12D * (ulonglong)_DAT_180a953a0) - lVar2) + 0x801d6bed3da58313;
  _DAT_1831737a8 = _DAT_1831737b8 ^ uVar3 ^ _DAT_183173a98;
  _DAT_183173c58 = (_DAT_183173c58 ^ uVar3) + _DAT_183173a98 ^ 0x5f7a098b1723697d;
  _DAT_183173c68 = (_DAT_183173c68 * -0xfe6bba0966072fb ^ _DAT_183173c58) + uVar3;
  _DAT_183173ee0 = _DAT_183173c68 ^ _DAT_183173c58;
  _DAT_183173a98 = _DAT_183173a98 & 0xffffffff;
  FUN_190dd72e0(lVar2,*_DAT_18301ee50 + 0x2e9,0x12);
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



// ===== continuation @ rva 6eec983 (image 186eec983) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eec983(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint unaff_XMM8_Da;
  longlong in_stack_000000e8;
  
  auVar4 = pshufb(in_XMM0 ^ _DAT_180a95500,_DAT_1800170c0);
  uVar3 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar3 + _DAT_183173ae8;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_1831737b8 ^ uVar3;
  }
  _DAT_1831737a8 = func_0x000186eed6c0(SUB161(in_XMM0 ^ _DAT_180a95500,5) ^ uVar2);
  uVar1 = (uint)unaff_RBP;
  uVar5 = uVar1 & _DAT_18001a990;
  uVar6 = uVar1 ^ unaff_XMM8_Da;
  uVar2 = _DAT_1831737a8 ^ unaff_RBP;
  uVar3 = ((ulonglong)uVar6 * (ulonglong)_DAT_180a95580 + _DAT_180a95590 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_180a95570 +
          ((ulonglong)(uVar1 ^ _DAT_18001a990) * (ulonglong)_DAT_180a95560 << 0x20) +
          (ulonglong)(uVar1 ^ _DAT_18001a990) * (ulonglong)_DAT_180a95550 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180a95540 << 0x20 |
          (ulonglong)uVar5 * (ulonglong)_DAT_180a95530) +
          ((unaff_RBP & 0xffffffff) * (ulonglong)_DAT_180a95520 << 0x20) +
          (unaff_RBP & 0xffffffff) * (ulonglong)_DAT_180a95510 +
          (-(((ulonglong)(uVar1 | _DAT_18001a990) * (ulonglong)_DAT_180a955f0 << 0x20) +
             (ulonglong)(uVar1 | _DAT_18001a990) * (ulonglong)_DAT_180a955e0 +
             ((ulonglong)uVar5 * (ulonglong)_DAT_180a955f0 << 0x20 |
             (ulonglong)uVar5 * (ulonglong)_DAT_180a955e0) +
            ((unaff_RBP & 0xffffffff) * (ulonglong)_DAT_180a955d0 << 0x20) +
            (unaff_RBP & 0xffffffff) * (ulonglong)_DAT_180a955c0) -
          (((ulonglong)uVar6 * (ulonglong)_DAT_180a95610 + _DAT_180a95620 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_180a95600)) + 0x5e23f8ee1aa3e9f2;
  _DAT_1831737d0 = _DAT_183173ed8 ^ uVar2 ^ uVar3;
  _DAT_183173a60 = (_DAT_183173a60 ^ uVar2) + uVar3 ^ 0xdcecd4f3fc1c5120;
  _DAT_183173b08 = (_DAT_183173b08 * 0x4f5c49d083175eff ^ _DAT_183173a60) + uVar2;
  _DAT_183173ed0 = _DAT_183173b08 ^ _DAT_183173a60;
  _DAT_183173e38 = uVar3 & 0xffffffff;
  switch(in_stack_000000e8 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6ee9cb8 (image 186ee9cb8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee9cb8(void)

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



// ===== continuation @ rva 6eeb8c4 (image 186eeb8c4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eeb8c4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (**(code **)(*unaff_RSI + 0x580))();
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



// ===== continuation @ rva 6ee96a8 (image 186ee96a8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee96a8(void)

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



// ===== continuation @ rva 6eed45d (image 186eed45d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eed45d(void)

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



// ===== continuation @ rva 6eed9e6 (image 186eed9e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eed9e6(void)

{
  FUN_190dd72e0();
  (*_DAT_180a958b8)();
  return;
}



// ===== continuation @ rva 6eed973 (image 186eed973) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eed973(void)

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



// ===== continuation @ rva 6eedac6 (image 186eedac6) =====

void FUN_186eedac6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6eeda0e (image 186eeda0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eeda0e(void)

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



// ===== continuation @ rva 6eedabe (image 186eedabe) =====

void FUN_186eedabe(void)

{
  return;
}



// ===== continuation @ rva 6eed9ac (image 186eed9ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eed9ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a95938)();
  return;
}



// ===== continuation @ rva 6eeda86 (image 186eeda86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eeda86(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a95918)();
  return;
}



// ===== continuation @ rva 6eeda2f (image 186eeda2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eeda2f(void)

{
  FUN_190dd9df0();
  (*_DAT_180a95908)();
  return;
}



// ===== continuation @ rva 6eeda62 (image 186eeda62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eeda62(void)

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



// ===== continuation @ rva 6eedaad (image 186eedaad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedaad(void)

{
  (*_DAT_180a95928)();
  return;
}



// ===== continuation @ rva 6eedbeb (image 186eedbeb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedbeb(void)

{
  FUN_190dd72e0();
  (*_DAT_180a95a08)();
  return;
}



// ===== continuation @ rva 6eedb78 (image 186eedb78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedb78(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6eedccd (image 186eedccd) =====

void FUN_186eedccd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6eedc67 (image 186eedc67) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eedc67(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6eedcc3 (image 186eedcc3) =====

void FUN_186eedcc3(void)

{
  return;
}



// ===== continuation @ rva 6eedc8b (image 186eedc8b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedc8b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_180a959f8)();
  return;
}



// ===== continuation @ rva 6eedbb1 (image 186eedbb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedbb1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_180a959e8)();
  return;
}



// ===== continuation @ rva 6eedc34 (image 186eedc34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedc34(void)

{
  FUN_190dd9df0();
  (*_DAT_180a95998)();
  return;
}



// ===== continuation @ rva 6eedbd6 (image 186eedbd6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eedbd6(void)

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



// ===== continuation @ rva 6eedcb2 (image 186eedcb2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedcb2(void)

{
  (*_DAT_180a95a18)();
  return;
}



// ===== continuation @ rva 6eeddeb (image 186eeddeb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eeddeb(void)

{
  FUN_190dd72e0();
  (*_DAT_180a95a78)();
  return;
}



// ===== continuation @ rva 6eedd78 (image 186eedd78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedd78(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6eedecd (image 186eedecd) =====

void FUN_186eedecd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6eede13 (image 186eede13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eede13(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6eedec3 (image 186eedec3) =====

void FUN_186eedec3(void)

{
  return;
}



// ===== continuation @ rva 6eeddb1 (image 186eeddb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eeddb1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_180a95aa8)();
  return;
}



// ===== continuation @ rva 6eeddd6 (image 186eeddd6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eeddd6(void)

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



// ===== continuation @ rva 6eede34 (image 186eede34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eede34(void)

{
  FUN_190dd9df0();
  (*_DAT_180a95ae8)();
  return;
}



// ===== continuation @ rva 6eedeb2 (image 186eedeb2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eedeb2(void)

{
  (*_DAT_180a95af8)();
  return;
}



// ===== continuation @ rva 6eede8b (image 186eede8b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eede8b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_180a95ac8)();
  return;
}



// ===== continuation @ rva 6eee0d6 (image 186eee0d6) =====

void FUN_186eee0d6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(int *)(unaff_RBP + -8) = (int)*(undefined8 *)(unaff_RBP + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000186eee104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a95e10 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 6eee083 (image 186eee083) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186eee0b9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186eee083(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6efe900 (image 186efe900) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186efe900(void)

{
  longlong lVar1;
  longlong *unaff_RBP;
  ulonglong unaff_R12;
  longlong unaff_R15;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  unaff_RBP[0xc] = unaff_RBP[7];
  *(int *)(unaff_RBP + 0xd) = (int)unaff_RBP[8];
  *(int *)((longlong)unaff_RBP + 0x5c) = (int)unaff_RBP[8] + 1;
  uVar2 = _DAT_183174090;
  *(bool *)(unaff_RBP + 8) = *unaff_RBP == 0;
  uVar4 = uVar2 ^ _DAT_180a963f0;
  lVar1 = uVar2 + 0xe35a7b9b;
  uVar2 = uVar4 + _DAT_1831740b8 + 0x49ad0a43;
  uVar3 = (_DAT_1831740b8 ^ _UNK_180a963f8) + lVar1;
  uVar4 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar4;
  uVar2 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1831740b8 ^ _UNK_180a963f8;
  _DAT_183174090 =
       func_0x000186f16060((uVar2 << 0x1d | uVar2 >> 0x23) - lVar1 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831740b8 + 0x49ad0a43));
  uVar2 = _DAT_183174090 ^ 0xefdf7bff;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_R12) * unaff_R15 >> 0x38)) * 0x40 ^ uVar2;
  _DAT_183173f60 = (_DAT_183173f60 ^ uVar2) + 0xefdf7bff ^ 0xd79685ff4e244aaa;
  _DAT_183174048 = (_DAT_183174048 * 0x2547de374a5a0655 ^ _DAT_183173f60) + uVar2;
  _DAT_1831740b0 = _DAT_183174048 ^ _DAT_183173f60;
  _DAT_1831740b8 = _DAT_183173fa0 ^ 0xefdf7bff;
  _DAT_183174020 = 0xefdf7bff;
  uVar2 = (_DAT_183174088 ^ _DAT_180a96400) + _DAT_1831740c0 + 0x84222325;
  uVar3 = (_DAT_1831740c0 ^ _UNK_180a96408) + _DAT_183174088 + 0x6be31254;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183174088 ^ _DAT_180a96400;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1831740c0 ^ _UNK_180a96408;
  _DAT_183173f18 =
       func_0x000186f16060((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183174088 + 0x6be31254) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831740c0 + 0x84222325));
  _DAT_1831740a0 =
       (_DAT_1831740a0 ^ _DAT_183173f18 & 0x7fffffffffffffff) - 0x6be31254 ^ 0x93c5f5906057c1a1;
  _DAT_183174028 =
       (_DAT_183174028 * -0x12bd1118e768de3b ^ _DAT_1831740a0) +
       (_DAT_183173f18 & 0x7fffffffffffffff);
  _DAT_183173f20 = _DAT_183174028 ^ _DAT_1831740a0;
  _DAT_183174018 = 0x941cedac;
  uVar2 = (~_DAT_1831740c0 + 0x6be31255) *
          ((_DAT_1831740d8 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1831740d8 & 0x8422dcda) * 2);
  uVar2 = (uVar2 | _DAT_183173fe8) + (uVar2 & _DAT_183173fe8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173f60 = func_0x000186f16060((uVar2 | 0xefc1ce8e) + (ulonglong)((uint)uVar2 & 0xefc1ce8e))
  ;
  uVar2 = _DAT_183173f60 & 0xffff;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 - ((uint)(uVar3 >> 1) & 0x55555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_R12) * unaff_R15 >> 0x38)) * 0x40 ^ uVar2;
  _DAT_183173fb0 = _DAT_183173f38 ^ uVar2 ^ 0x6be41253;
  _DAT_183173fd8 = (_DAT_183173fd8 ^ uVar2) + 0x6be41253 ^ 0xf4a423439deed7a3;
  _DAT_183173f18 = (_DAT_183173f18 * -0x1fcb6ba060272e43 ^ _DAT_183173fd8) + uVar2;
  _DAT_183174090 = _DAT_183173f18 ^ _DAT_183173fd8;
  _DAT_183173f68 = 0x6be41253;
  _DAT_1831740d8 = func_0x000186f16060(_DAT_183174030 ^ 0x5efa002b09);
  uVar2 = _DAT_1831740d8 >> 1 | _DAT_1831740d8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & unaff_R12) * unaff_R15 >> 0x38)) * 0x80 ^ _DAT_1831740d8
          ) & 0x7fffffffffffffff;
  _DAT_1831740c0 = _DAT_1831740e0 ^ uVar2 ^ 0x654fdc1f;
  _DAT_1831740a8 = (_DAT_1831740a8 ^ uVar2) + 0x654fdc1f ^ 0x10c36dd2a53886d;
  _DAT_183173f60 = (_DAT_183173f60 * -0x4bd7abe09bc476e1 ^ _DAT_1831740a8) + uVar2;
  _DAT_183174038 = _DAT_183173f60 ^ _DAT_1831740a8;
  _DAT_183174010 = 0x654fdc1f;
  _DAT_183173fe0 = func_0x000186f16060(_DAT_183173fd8 + 0x33ffc926002bff ^ 0x32);
  uVar2 = ((_DAT_183173fe0 & 0x1fffff) << 0x25 | _DAT_183173fe0 >> 0x1b) * 0x4657c5aee4088851;
  _DAT_1831740d0 = _DAT_183174018 ^ uVar2 ^ 0x10000ffff;
  _DAT_183173f88 = (_DAT_183173f88 ^ uVar2) + 0x10000ffff ^ 0xa3cc5a739ad94165;
  _DAT_183173f40 = (_DAT_183173f40 * -0x41537d41dbb21df ^ _DAT_183173f88) + uVar2;
  _DAT_183173f18 = _DAT_183173f40 ^ _DAT_183173f88;
  _DAT_1831740c0 = 0xffff;
  uVar2 = (~_DAT_183173f68 + 0xcfc234b1) *
          ((_DAT_183173fd0 ^ 0x84222325) + (ulonglong)((uint)_DAT_183173fd0 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183173f90) + (uVar2 & _DAT_183173f90);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173fc8 = func_0x000186f16060((uVar2 | 0x4be01795) + (ulonglong)((uint)uVar2 & 0x4be01795))
  ;
  _DAT_183173f28 =
       (_DAT_183173f28 ^ _DAT_183173fc8 & 0xffffffffffffff80) - 0xcfc234b0 ^ 0x9614ae65c7db02c6;
  _DAT_183173f38 =
       (_DAT_183173f38 * -0x30f19a3303838605 ^ _DAT_183173f28) +
       (_DAT_183173fc8 & 0xffffffffffffff80);
  _DAT_183173fe8 = _DAT_183173f38 ^ _DAT_183173f28;
  _DAT_183173fd0 = 0x303dcb50;
  uVar2 = (~_DAT_183173f60 + 0xcfc234b1) *
          ((_DAT_1831740a8 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1831740a8 & 0x8422dcda) * 2);
  uVar2 = (uVar2 | _DAT_1831740e8) + (uVar2 & _DAT_1831740e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173f80 = func_0x000186f16060((uVar2 | 0x4be0e86a) + (ulonglong)((uint)uVar2 & 0x4be0e86a))
  ;
  uVar2 = _DAT_183173f80 << 0x38 | _DAT_183173f80 >> 8;
  _DAT_183173f78 = _DAT_183174058 ^ uVar2 ^ 0xcfc334af;
  _DAT_183174028 = (_DAT_183174028 ^ uVar2) + 0xcfc334af ^ 0x37a9d70df0836331;
  _DAT_183174050 = (_DAT_183174050 * 0x9b28caec1f2a3c7 ^ _DAT_183174028) + uVar2;
  _DAT_183174018 = _DAT_183174050 ^ _DAT_183174028;
  _DAT_183174088 = 0xcfc334af;
  uVar2 = (~_DAT_183173fe0 + 0x303dcb51) *
          ((_DAT_1831740f8 ^ 0x4be1178a) + (ulonglong)((uint)_DAT_1831740f8 & 0x4be1178a) * 2);
  uVar2 = (uVar2 | _DAT_183173f90) + (uVar2 & _DAT_183173f90);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173fe8 = func_0x000186f16060((uVar2 | 0x7bdcdcda) + (ulonglong)((uint)uVar2 & 0x7bdcdcda))
  ;
  uVar2 = _DAT_183173fe8 ^ 0xcfc234af;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & unaff_R12) * unaff_R15 >> 0x38) << 3 ^ uVar2;
  _DAT_183174010 = _DAT_183173fb0 ^ uVar2 ^ 0x10000ffff;
  _DAT_1831740a0 = (_DAT_183174080 ^ uVar2) + 0x10000ffff ^ 0xca66f3a354e73c86;
  _DAT_1831740e0 = (_DAT_1831740e0 * 0x6cfc093e879e7ff ^ _DAT_1831740a0) + uVar2;
  _DAT_1831740a0 = _DAT_1831740e0 ^ _DAT_1831740a0;
  _DAT_183174080 = 0xffff;
  _DAT_183174038 = func_0x000186f16060(_DAT_183173f98 ^ 0xac000c05ffd766);
  uVar2 = _DAT_183174038 & 0xfffffffffffffff8;
  _DAT_183174060 = _DAT_183173fb0 ^ uVar2 ^ 0x157a568db;
  _DAT_183174050 = (_DAT_183174050 ^ uVar2) + 0x157a568db ^ 0x657391d6b92ba529;
  _DAT_183174020 = (_DAT_183174020 * 0x18ded64a8e0d174f ^ _DAT_183174050) + uVar2;
  _DAT_183174040 = _DAT_183174020 ^ _DAT_183174050;
  _DAT_183173fc8 = 0x57a568db;
  uVar2 = (_DAT_183173f08 ^ _DAT_180a96410) + _DAT_183174010 + 0x6bfd58da;
  uVar3 = (_DAT_183174010 ^ _UNK_180a96418) + _DAT_183173f08 + 0x67c5ecdc;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183173f08 ^ _DAT_180a96410;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183174010 ^ _UNK_180a96418;
  _DAT_183173fb0 =
       func_0x000186f16060((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183173f08 + 0x67c5ecdc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183174010 + 0x6bfd58da));
  _DAT_183173fc8 =
       (_DAT_183173fc8 ^ _DAT_183173fb0 * 0x3fa98b0a4050e49) + 0x881a9723 ^ 0xcadfe04d661d804;
  _DAT_183174000 =
       (_DAT_183174000 * 0x5b48cebf66f00347 ^ _DAT_183173fc8) + _DAT_183173fb0 * 0x3fa98b0a4050e49;
  _DAT_183173f18 = _DAT_183174000 ^ _DAT_183173fc8;
  _DAT_1831740a8 = 0x881a9723;
  uVar2 = (_DAT_1831740d0 ^ _DAT_180a96420) + _DAT_183173fc0 + 0xc38b406;
  uVar3 = (_DAT_183173fc0 ^ _UNK_180a96428) + _DAT_1831740d0 + 0xcf8ad1b8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831740d0 ^ _DAT_180a96420;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183173fc0 ^ _UNK_180a96428;
  _DAT_183173f98 =
       func_0x000186f16060((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831740d0 + 0xcf8ad1b8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183173fc0 + 0xc38b406));
  uVar2 = (_DAT_183173f98 ^ 0xcf8ad1b8) * 0x2a0a9881873ab475;
  _DAT_183173f70 = _DAT_183173f90 ^ uVar2 ^ 0x157a568db;
  _DAT_183174090 = (_DAT_183174090 ^ uVar2) + 0x157a568db ^ 0xb34fa6530ae6bcd8;
  _DAT_183173f00 = (_DAT_183173f00 * 0x3f1585c248100c23 ^ _DAT_183174090) + uVar2;
  _DAT_183173f40 = _DAT_183173f00 ^ _DAT_183174090;
  _DAT_183174098 = 0x57a568db;
  _DAT_183174028 = func_0x000186f16060(_DAT_183173f78 + 0xffdcff83e2ffe1ff ^ 0x6f);
  _DAT_183173f50 = (_DAT_183174028 ^ 0x54000000) & 0xfffffffffc000000;
  _DAT_183173f88 = _DAT_183173f88 ^ _DAT_183173f50 ^ 0xcfca38583e598ca7;
  _DAT_1831740f0 = (_DAT_1831740f0 * -0x2953f9998bc0e13d ^ _DAT_183173f88) + _DAT_183173f50;
  _DAT_183174010 = _DAT_1831740f0 ^ _DAT_183173f88;
  _DAT_1831740f8 = 0;
  uVar2 = ((_DAT_1831740f0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1831740f0 & 0x8422dcda) * 2) *
          -_DAT_1831740f0;
  uVar2 = (uVar2 | _DAT_183174028) + (uVar2 & _DAT_183174028);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173f58 = func_0x000186f16060((uVar2 | 0x8422dcda) + (ulonglong)((uint)uVar2 & 0x8422dcda))
  ;
  uVar2 = _DAT_183173f58 * -0x20915b775f2eaced;
  _DAT_183174070 = _DAT_183174050 ^ uVar2 ^ 0xffff;
  _DAT_183174020 = (_DAT_183174020 ^ uVar2) + 0xffff ^ 0x88b06f60c3252a3c;
  _DAT_183174000 = (_DAT_183174000 * -0x72fddd066d1e0ed9 ^ _DAT_183174020) + uVar2;
  _DAT_183173f30 = _DAT_183174000 ^ _DAT_183174020;
  _DAT_183173f48 = 0xffff;
  uVar2 = (_DAT_183173f80 ^ _DAT_180a96430) + _DAT_183174088 + 0x6bfd58da;
  uVar3 = (_DAT_183174088 ^ _UNK_180a96438) + _DAT_183173f80 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183173f80 ^ _DAT_180a96430;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183174088 ^ _UNK_180a96438;
  _DAT_183173f48 =
       func_0x000186f16060((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183173f80 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183174088 + 0x6bfd58da));
  uVar2 = (_DAT_183173f48 ^ 0xffffffff) & 0x1ffffffffffff;
  _DAT_183174030 = (_DAT_183174030 ^ uVar2) + 0x10208400 ^ 0x42c214142d3655b2;
  _DAT_183173ff0 = (_DAT_183173ff0 * -0x7c5dc8cc3fe1a539 ^ _DAT_183174030) + uVar2;
  _DAT_183173fc0 = _DAT_183173ff0 ^ _DAT_183174030;
  _DAT_183174068 = 0x10208400;
  _DAT_183173f88 = func_0x000186f16060(_DAT_183173fb8 ^ 0xa40004aa002a4b);
  _DAT_183173fe0 = _DAT_183173fe0 ^ _DAT_183173f88 & 0xfffffffffff80000 ^ 0x3db14d86cccaa25e;
  _DAT_1831740e0 =
       (_DAT_1831740e0 * -0x478f429156eeef8f ^ _DAT_183173fe0) +
       (_DAT_183173f88 & 0xfffffffffff80000);
  _DAT_183173f98 = _DAT_1831740e0 ^ _DAT_183173fe0;
  _DAT_183174010 = 0;
  uVar2 = (_DAT_1831740f0 ^ 0x8422dcda) + _DAT_183173fe8 + 0x8422dcda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831740f0 ^ 0x8422dcda;
  uVar3 = ((_DAT_183173fe8 + _DAT_1831740f0) * 0x2000 | _DAT_183173fe8 + _DAT_1831740f0 >> 0x33) ^
          _DAT_183173fe8;
  _DAT_183173fb8 =
       func_0x000186f16060((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1831740f0 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183173fe8 + 0x8422dcda));
  uVar2 = _DAT_183173fb8 ^ 0xffff;
  _DAT_1831740b0 = _DAT_1831740c8 ^ uVar2 ^ 0xffff;
  _DAT_1831740f8 = (_DAT_1831740f8 ^ uVar2) + 0xffff ^ 0x795c32911a8f71f3;
  _DAT_1831740a0 = (_DAT_1831740a0 * 0x4e32eda78b2cb6e7 ^ _DAT_1831740f8) + uVar2;
  _DAT_183173f70 = _DAT_1831740a0 ^ _DAT_1831740f8;
  _DAT_183174088 = 0xffff;
  _DAT_183174090 = func_0x000186f16060(_DAT_183174030 ^ 0xffe1007be2ffdd1a);
  _DAT_183173f80 = _DAT_183173f80 ^ _DAT_183174090 ^ 0xa50e985ca2a5d4a4 ^ 0x8c0193b980fb0e16;
  _DAT_183174010 =
       (_DAT_183174010 * -0x2a0497e941b15f91 ^ _DAT_183173f80) +
       (_DAT_183174090 ^ 0xa50e985ca2a5d4a4);
  _DAT_183174058 = _DAT_183174010 ^ _DAT_183173f80;
  _DAT_183174070 = 0;
  uVar2 = ((_DAT_183174098 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183174098 & 0x8422dcda) * 2) *
          -_DAT_1831740e0;
  uVar2 = (uVar2 | _DAT_183173f08) + (uVar2 & _DAT_183173f08);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183174008 = func_0x000186f16060((uVar2 | 0x8422dcda) + (ulonglong)((uint)uVar2 & 0x8422dcda))
  ;
  uVar2 = _DAT_183174008 << 0x15 | _DAT_183174008 >> 0x2b;
  _DAT_1831740f8 = _DAT_1831740b8 ^ uVar2 ^ 0xffff;
  _DAT_183173fb8 = (_DAT_183173fb8 ^ uVar2) + 0xffff ^ 0x577dcff748cbd7ce;
  _DAT_183173f70 = (_DAT_183173f70 * 0x214de2aaa66ec2bf ^ _DAT_183173fb8) + uVar2;
  _DAT_1831740a8 = _DAT_183173f70 ^ _DAT_183173fb8;
  _DAT_183174070 = 0xffff;
  *(uint *)(unaff_RBP + 0xe) = *(uint *)(unaff_RBP + 0x12) & 0xffff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[8]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6ef9c23 (image 186ef9c23) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ef9c23(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong unaff_R13;
  ulonglong uVar2;
  
  uVar1 = (~_DAT_183173fc0 + 0xc6e3eb8) *
          ((_DAT_183174090 ^ 0xb4213907) + (ulonglong)((uint)_DAT_183174090 & 0xb4213907) * 2);
  uVar1 = (uVar1 | _DAT_183174048) + (uVar1 & _DAT_183174048);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183174080 = func_0x000186f16060((uVar1 | 0xb84f07b0) + (ulonglong)((uint)uVar1 & 0xb84f07b0))
  ;
  _DAT_183173f20 =
       (_DAT_183173f20 ^ _DAT_183174090 & 0x7fffffffffffffff) + 0x3c6d2495 ^ 0xa81d7bd7588c909d;
  _DAT_183173f90 =
       (_DAT_183173f90 * 0x6570d935c96f67 ^ _DAT_183173f20) + (_DAT_183174090 & 0x7fffffffffffffff);
  _DAT_183173f70 = _DAT_183173f90 ^ _DAT_183173f20;
  _DAT_183174000 = 0x3c6d2495;
  uVar1 = (_DAT_183173f20 ^ _DAT_180a96440) + _DAT_183173f38 + unaff_R13;
  uVar2 = (_DAT_183173f38 ^ _UNK_180a96448) + _DAT_183173f20 + 0xcc88fdd0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183173f20 ^ _DAT_180a96440;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183173f38 ^ _UNK_180a96448;
  _DAT_183174058 =
       func_0x000186f16060((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183173f20 + 0xcc88fdd0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183173f38 + unaff_R13));
  _DAT_183174020 = _DAT_183174020 - 0xcc88fdd0 ^ 0x670bd53adced9fbd;
  _DAT_183173f70 = _DAT_183174048 * 0x621f1852f8188961;
  _DAT_183174048 = _DAT_183173f70 ^ _DAT_183174020;
  _DAT_183174068 = 0x33770230;
  uVar1 = (_DAT_183173fd0 ^ _DAT_180a96450) + _DAT_1831740c0 + 0x48aadd8a;
  uVar2 = (_DAT_1831740c0 ^ _UNK_180a96458) + _DAT_183173fd0 + 0x33770230;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183173fd0 ^ _DAT_180a96450;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831740c0 ^ _UNK_180a96458;
  _DAT_183174048 =
       func_0x000186f16060((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183173fd0 + 0x33770230) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831740c0 + 0x48aadd8a));
  uVar1 = ((_DAT_183174048 ^ 0x291e602aac061ed0) << 0x2b |
          (_DAT_183174048 ^ 0x291e602aac061ed0) >> 0x15) ^ 0xcc88feaf;
  uVar1 = uVar1 << 0x22 | uVar1 >> 0x1e;
  uVar2 = _DAT_1831740a8 ^ uVar1;
  _DAT_183173f08 = uVar2 ^ 0x1000000df;
  _DAT_183174078 = (_DAT_183174078 ^ uVar1) + 0x1000000df ^ 0x98e4c9d887ffbe50;
  _DAT_1831740e0 = (_DAT_1831740e0 * 0x2f5ee58cc03e29f9 ^ _DAT_183174078) + uVar1;
  _DAT_183173fb0 = _DAT_1831740e0 ^ _DAT_183174078;
  _DAT_1831740a8 = 0xdf;
  _DAT_183173f70 = func_0x000186f16060(uVar2 ^ 0xb002009009bf1);
  uVar1 = (_DAT_183173f70 & 0xfffffffffffffff) >> 1 | _DAT_183173f70 & 0xfffffffffffffff;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = 0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183173f70 & 0xfffffffffffffff;
  uVar1 = uVar1 << 0x30 | uVar1 >> 0x10;
  _DAT_183173fc0 = (_DAT_183173fc0 ^ uVar1) - 0xa386363c ^ 0xf57acecd56f5884;
  _DAT_183173f40 = (_DAT_183173f40 * -0x6dc381a3faa0d595 ^ _DAT_183173fc0) + uVar1;
  _DAT_183174088 = _DAT_183173f40 ^ _DAT_183173fc0;
  _DAT_183174040 = 0x5c79c9c4;
  _DAT_1831740d0 = func_0x000186f16060(_DAT_1831740f0 + 0xffecffe0b9ffa3ff ^ 0x2e);
  _DAT_183174060 =
       (_DAT_183173f08 ^ _DAT_1831740d0 ^ 0xa386371b ^ _DAT_1831740d0) + 0xa386371b ^
       0x7fbc3b323f9e7555;
  _DAT_1831740b8 = (_DAT_1831740b8 * -0x738ec914aae52f61 ^ _DAT_183174060) + _DAT_1831740d0;
  _DAT_183174008 = _DAT_1831740b8 ^ _DAT_183174060;
  _DAT_1831740f0 = 0xa386371b;
  uVar1 = (~_DAT_183174070 + 0x5c79c9c5) *
          ((_DAT_1831740e8 ^ 0x27a4143e) + (ulonglong)((uint)_DAT_1831740e8 & 0x27a4143e) * 2);
  uVar1 = (uVar1 | _DAT_1831740b0) + (uVar1 & _DAT_1831740b0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831740d8 = func_0x000186f16060((uVar1 | 0x7bddddfa) + (ulonglong)((uint)uVar1 & 0x7bddddfa))
  ;
  uVar1 = (_DAT_1831740d8 ^ 0xa386371b) * 0x6cea9a8cdef9313b;
  _DAT_183173fb8 = _DAT_183173f18 ^ uVar1 ^ 0x1000000df;
  _DAT_183174068 = (_DAT_183174068 ^ uVar1) + 0x1000000df ^ 0x946b031e38e91476;
  _DAT_183173f58 = (_DAT_183173f58 * 0x5e4673a8becb1639 ^ _DAT_183174068) + uVar1;
  _DAT_183173fa0 = _DAT_183173f58 ^ _DAT_183174068;
  _DAT_183173fe0 = 0xdf;
  _DAT_183174090 = func_0x000186f16060(_DAT_183173f70 ^ 0xff7c001c5cffd94d);
  uVar1 = _DAT_183174090 >> 1 | _DAT_183174090;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183174090;
  _DAT_183174088 = (_DAT_183174088 ^ uVar1) - 0xb8f8a780 ^ 0xc0c8f62d63d31b92;
  _DAT_183174050 = (_DAT_183174050 * -0x11379cc8870da9c7 ^ _DAT_183174088) + uVar1;
  _DAT_183173fa0 = _DAT_183174050 ^ _DAT_183174088;
  _DAT_183173fe0 = 0x47075880;
  _DAT_183173f68 = func_0x000186f16060(_DAT_1831740d0 + 0x7c003bf5ff35ff ^ 0x25);
  uVar1 = _DAT_183173f68 << 0x35 | _DAT_183173f68 >> 0xb;
  _DAT_183173f80 = _DAT_1831740b0 ^ uVar1 ^ 0xb8f8a85f;
  _DAT_183173fa8 = (_DAT_183173fa8 ^ uVar1) + 0xb8f8a85f ^ 0x848cc4d92167c8aa;
  _DAT_183173fb8 = (_DAT_183173fb8 * -0x5eb789b71541f9ed ^ _DAT_183173fa8) + uVar1;
  _DAT_183173f40 = _DAT_183173fb8 ^ _DAT_183173fa8;
  _DAT_183173f48 = 0xb8f8a85f;
  uVar1 = (_DAT_183174008 ^ _DAT_180a96460) + _DAT_1831740e0 + 0x3cda8b7a;
  uVar2 = (_DAT_1831740e0 ^ _UNK_180a96468) + _DAT_183174008 + 0x47075880;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183174008 ^ _DAT_180a96460;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831740e0 ^ _UNK_180a96468;
  _DAT_183173fc0 =
       func_0x000186f16060((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183174008 + 0x47075880) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831740e0 + 0x3cda8b7a));
  uVar1 = _DAT_183173fc0 * 0x2af493750033c9ed & 0xfffffffffffffe00;
  _DAT_1831740d8 = _DAT_183174018 ^ uVar1 ^ 0x1000000df;
  _DAT_183173fa0 = (_DAT_183173fa0 ^ uVar1) + 0x1000000df ^ 0x96d4c3e5188c527a;
  _DAT_183173f40 = (_DAT_183173f40 * -0x705d486856a94d67 ^ _DAT_183173fa0) + uVar1;
  _DAT_183173fb0 = _DAT_183173f40 ^ _DAT_183173fa0;
  _DAT_183173f68 = 0xdf;
  uVar1 = (~_DAT_183174008 + 0x3c6d2496) *
          ((_DAT_183174038 ^ 0x575dde4a) + (ulonglong)((uint)_DAT_183174038 & 0x575dde4a) * 2);
  uVar1 = (uVar1 | _DAT_183174090) + (uVar1 & _DAT_183174090);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183173f48 = func_0x000186f16060((uVar1 | 0x6b30fadf) + (ulonglong)((uint)uVar1 & 0x6b30fadf))
  ;
  uVar1 = _DAT_183173f48 ^ 0x2c000090;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_183173fb8 = (_DAT_183173fb8 ^ uVar1) + 0xef12d9fa ^ 0x98ca95358bb3026c;
  _DAT_183174010 = (_DAT_183174010 * 0x7196ad43c98ec39b ^ _DAT_183173fb8) + uVar1 ^ _DAT_183173fb8;
  _DAT_183174050 = 0xef12d9fa;
  _DAT_183173f40 = func_0x000186f16060(_DAT_183173f98 ^ 0xff91ffb5ab0015d2);
  uVar1 = (_DAT_183173f40 ^ 0xef12d9fa) & 0x7ffffffff;
  _DAT_1831740c0 = _DAT_183173fe8 ^ uVar1 ^ 0x10fed2204;
  _DAT_183173fb8 = (_DAT_183173fb8 ^ uVar1) + 0x10fed2204 ^ 0x609612bfed0374c4;
  _DAT_1831740f8 = (_DAT_1831740f8 * 0x6f87fdee0e659503 ^ _DAT_183173fb8) + uVar1;
  _DAT_183173ff8 = _DAT_1831740f8 ^ _DAT_183173fb8;
  _DAT_183173f00 = 0xfed2204;
  uVar1 = (~_DAT_183174018 + 0xfed2205) *
          ((_DAT_183173f40 ^ 0x8bcf0121) + (ulonglong)((uint)_DAT_183173f40 & 0x8bcf0121) * 2);
  uVar1 = (uVar1 | _DAT_183173fd0) + (uVar1 & _DAT_183173fd0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183174020 = func_0x000186f16060((uVar1 | unaff_R13) + (ulonglong)((uint)uVar1 & 0x84222325));
  _DAT_183173fc0 = _DAT_183174020 * -0x203a4d801948421f;
  _DAT_183174098 = _DAT_183174098 ^ _DAT_183173fc0 ^ 0x754482b37296b537;
  _DAT_1831740c8 = (_DAT_1831740c8 * -0x278f3013efad27ef ^ _DAT_183174098) + _DAT_183173fc0;
  _DAT_183173f70 = _DAT_1831740c8 ^ _DAT_183174098;
  _DAT_1831740b8 = 0;
  uVar1 = ((_DAT_1831740d0 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1831740d0 & 0x842223fa) * 2) *
          -_DAT_183173f80;
  uVar1 = (uVar1 | _DAT_183173f58) + (uVar1 & _DAT_183173f58);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183173f80 = func_0x000186f16060((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  uVar1 = _DAT_183173f80 << 0x2e | _DAT_183173f80 >> 0x12;
  _DAT_1831740b0 = _DAT_183173fc0 ^ uVar1 ^ 0xdf;
  _DAT_183173f18 = (_DAT_183173f18 ^ uVar1) + 0xdf ^ 0xdead5e2bd72d8707;
  _DAT_1831740b8 = (_DAT_1831740b8 * -0x55606cad9b736d2f ^ _DAT_183173f18) + uVar1;
  _DAT_1831740c0 = _DAT_1831740b8 ^ _DAT_183173f18;
  _DAT_183173f60 = 0xdf;
  uVar1 = (_DAT_183173fd0 ^ _DAT_180a96470) + _DAT_183174018 + 0x575dde4a;
  uVar2 = (_DAT_183174018 ^ _UNK_180a96478) + _DAT_183173fd0 + 0x2c800290;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183173fd0 ^ _DAT_180a96470;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183174018 ^ _UNK_180a96478;
  _DAT_183173fc0 =
       func_0x000186f16060((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183173fd0 + 0x2c800290) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183174018 + 0x575dde4a));
  uVar1 = (ulonglong)(~(uint)_DAT_183173fc0 & 0xd37ffd6f);
  _DAT_183174010 = _DAT_183174010 ^ uVar1 ^ 0xcec0450b77f859a7;
  _DAT_183173f48 = (_DAT_183173f48 * -0x3ce2f6dee5906e2b ^ _DAT_183174010) + uVar1;
  _DAT_1831740e8 = _DAT_183173f48 ^ _DAT_183174010;
  _DAT_183173fa0 = 0;
  _DAT_183173f08 = func_0x000186f16060(_DAT_1831740f0 + 0x2300844a0021ff ^ 0xcc);
  uVar1 = _DAT_183173f08 & 0xffffffffff800000;
  _DAT_183174030 = _DAT_183173f50 ^ uVar1 ^ 0xdf;
  uVar2 = (_DAT_183173ff0 ^ uVar1) + 0xdf;
  _DAT_183173ff0 = uVar2 ^ 0x3aea5c3bd6ad3690;
  _DAT_183173f90 = (_DAT_183173f90 * 0x258f07ab70834541 ^ _DAT_183173ff0) + uVar1;
  _DAT_183173ff8 = _DAT_183173f90 ^ _DAT_183173ff0;
  _DAT_1831740a8 = 0xdf;
  _DAT_183173f00 = func_0x000186f16060(uVar2 ^ 0x3acb5c47f3ad2b94);
  _DAT_183173fe8 = _DAT_183173fe8 ^ _DAT_183173f00 ^ 0xce016482191a7477;
  _DAT_183174078 = (_DAT_183174078 * -0x102f382206309c1b ^ _DAT_183173fe8) + _DAT_183173f00;
  _DAT_1831740f0 = _DAT_183174078 ^ _DAT_183173fe8;
  _DAT_183173f30 = 0;
  uVar1 = ((_DAT_183174068 ^ 0x842223fa) + (ulonglong)((uint)_DAT_183174068 & 0x842223fa) * 2) *
          -_DAT_183173f58;
  uVar1 = (uVar1 | _DAT_183173f98) + (uVar1 & _DAT_183173f98);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183173f80 = func_0x000186f16060((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  uVar1 = (ulonglong)(~(uint)_DAT_183173f80 & 0xdf);
  _DAT_183173f48 = _DAT_183173f48 ^ uVar1 ^ 0xdf;
  _DAT_183173fe0 = (_DAT_183173fe0 ^ uVar1) + 0xdf ^ 0x9756baa9a512677d;
  _DAT_183174068 = (_DAT_183174068 * -0x75a5fbc733ebc2d9 ^ _DAT_183173fe0) + uVar1;
  _DAT_183173fd0 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6effba1 (image 186effba1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186effba1(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  ulonglong uVar7;
  longlong *unaff_R15;
  uint uVar8;
  longlong lVar9;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint uVar10;
  uint uVar11;
  uint unaff_XMM15_Da;
  
  *(undefined2 *)(unaff_RBP + 0x32) = *(undefined2 *)(unaff_RBP + 0x70);
  lVar9 = unaff_RBP + 0x32;
  (**(code **)(*unaff_R15 + 0x688))();
  uVar1 = *(uint *)(unaff_RBP + 0x20);
  uVar4 = (ulonglong)uVar1 ^ 0x84222325;
  lVar3 = (ulonglong)((uint)_DAT_183173f70 & (uint)uVar4) * 2;
  iVar2 = *(int *)(unaff_RBP + -8);
  uVar4 = (~_DAT_183174070 + 2) * ((_DAT_183173f70 ^ uVar4) + lVar3);
  uVar7 = (uVar4 | _DAT_183173f28) + (uVar4 & _DAT_183173f28);
  uVar5 = uVar7 * 0x2000 ^ uVar7;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar4 = (ulonglong)uVar1 ^ 0x84222324;
  uVar6 = uVar4 | uVar5;
  _DAT_183174040 = func_0x000186f16060(uVar6 + ((uint)uVar4 & (uint)uVar5),uVar6,uVar7,lVar3,lVar9);
  uVar10 = uVar1 & unaff_XMM8_Da;
  uVar11 = uVar1 ^ unaff_XMM8_Da;
  lVar9 = ((ulonglong)uVar1 * (ulonglong)_DAT_180a96ad0 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_180a96ac0;
  uVar8 = uVar1 ^ (uint)DAT_18001a710;
  uVar4 = _DAT_183174040 ^ uVar1 ^ 1;
  uVar5 = ((((ulonglong)uVar11 * (ulonglong)_DAT_180a96ab0 << 0x20) +
            (ulonglong)uVar11 * (ulonglong)_DAT_180a96aa0 +
            ((ulonglong)(uVar1 | unaff_XMM8_Da) * (ulonglong)_DAT_180a96a90 << 0x20) +
            (ulonglong)(uVar1 | unaff_XMM8_Da) * (ulonglong)_DAT_180a96a80 +
            ((ulonglong)uVar10 * (ulonglong)_DAT_180a96a70 << 0x20 |
            (ulonglong)uVar10 * (ulonglong)_DAT_180a96a60) +
            ((ulonglong)uVar1 * (ulonglong)_DAT_180a96a50 << 0x20) +
            (ulonglong)uVar1 * (ulonglong)_DAT_180a96a40 + lVar9) -
          (((ulonglong)uVar8 * (ulonglong)_DAT_180a96b50 + _DAT_180a96b60 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180a96b40 +
           ((ulonglong)uVar11 * (ulonglong)_DAT_180a96b30 << 0x20) +
           (ulonglong)uVar11 * (ulonglong)unaff_XMM10_Da +
           ((ulonglong)uVar10 * (ulonglong)unaff_XMM15_Da << 0x20 |
           (ulonglong)uVar10 * (ulonglong)unaff_XMM9_Da) +
           ((ulonglong)uVar1 * (ulonglong)_DAT_180a96af0 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)unaff_XMM7_Da + lVar9)) + 0xe8d161f756ae60d;
  _DAT_183174098 = _DAT_183173fa0 ^ uVar4 ^ uVar5;
  _DAT_183174020 = (_DAT_183174020 ^ uVar4) + uVar5 ^ 0x1362db52d8a9a934;
  _DAT_183174048 = (_DAT_183174048 * 0x3b69113d28c858cb ^ _DAT_183174020) + uVar4;
  _DAT_183174088 = _DAT_183174048 ^ _DAT_183174020;
  _DAT_1831740b8 = uVar5 & 0xffffffff;
  *(int *)(unaff_RBP + 0x60) = (int)uVar5;
  *(int *)(unaff_RBP + 0x68) = iVar2;
  switch((int)uVar5 < iVar2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6f0221c (image 186f0221c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f0221c(void)

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



// ===== continuation @ rva 6ef4560 (image 186ef4560) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ef4560(void)

{
  byte bVar1;
  longlong lVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  ulonglong unaff_R14;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  
  _DAT_183173f28 = func_0x000186f16060(_DAT_1831740e8 ^ 0xc487f2418a3a63e2);
  _DAT_183173f40 =
       (_DAT_183173f40 ^ _DAT_183173f28 ^ 0x6f48e70f49885db3) + 0x7f5affcfcb89ffb3 ^
       0x5abe196689cf9c5f;
  _DAT_183173f80 =
       (_DAT_183173f80 * 0x28a4f8b38089c065 ^ _DAT_183173f40) +
       (_DAT_183173f28 ^ 0x6f48e70f49885db3);
  _DAT_183173fe8 = _DAT_183173f80 ^ _DAT_183173f40;
  _DAT_1831740a8 = 0x7f5affcfcb89ffb3;
  _DAT_183173fc0 = func_0x000186f16060(_DAT_183174038 ^ 0x3dc1b94b0e59edfe);
  _DAT_183173f98 = _DAT_183173f98 + 0xf501953acfe01e29 ^ 0xe922365b7fa3b6b7;
  _DAT_183174088 = _DAT_183173fb8 * -0x6fca275ca230c103;
  _DAT_183173fb8 = _DAT_183174088 ^ _DAT_183173f98;
  _DAT_1831740e8 = -0xafe6ac5301fe1d7;
  _DAT_1831740c8 = func_0x000186f16060(_DAT_1831740f8 + 0x6bb3bf5a3c8b4314 ^ 0x45);
  _DAT_183173f20 = _DAT_1831740c8 ^ 0xf501953acfe01e20;
  _DAT_183174000 = (_DAT_183174000 ^ _DAT_183173f20) - 8 ^ 0x2113912cbd040065;
  _DAT_183173f20 =
       ((_DAT_183174098 ^ _DAT_183173f20 ^ 0xfffffffffffffff8) * -0x2fc2f67bb6c47707 ^
       _DAT_183174000) + _DAT_183173f20;
  _DAT_183173fd8 = _DAT_183173f20 ^ _DAT_183174000;
  _DAT_183174068 = 0xfffffffffffffff8;
  uVar7 = (_DAT_1831740c0 ^ _DAT_180a971c0) + _DAT_183173fe0 + 0x84222325;
  uVar8 = (_DAT_183173fe0 ^ _UNK_180a971c8) + _DAT_1831740c0 + 0xdb8eca63f49e8fb3;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831740c0 ^ _DAT_180a971c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183173fe0 ^ _UNK_180a971c8;
  _DAT_183174028 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831740c0 + 0xdb8eca63f49e8fb3) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183173fe0 + 0x84222325));
  _DAT_183174070 =
       (_DAT_183174070 ^ _DAT_183174028 & 0xffffffffffff) + 0x2471359c0b61704d ^ 0x398261753084e7b7;
  _DAT_183173f18 =
       (_DAT_183173f18 * -0x66c8ac4522b94569 ^ _DAT_183174070) + (_DAT_183174028 & 0xffffffffffff);
  _DAT_183174078 = _DAT_183173f18 ^ _DAT_183174070;
  _DAT_1831740f8 = 0x2471359c0b61704d;
  _DAT_183174010 = func_0x000186f16060(_DAT_183173fc8 ^ 0x744cce8ee5d4be9c);
  uVar7 = _DAT_183174010 * -0x1a5bdff838ffd9ad;
  _DAT_183174000 = _DAT_183173fd8 ^ uVar7 ^ 0xdb8eca63f49e8fab;
  _DAT_183174018 = (_DAT_183174018 ^ uVar7) + 0xdb8eca63f49e8fab ^ 0xf62ff31de3791e24;
  _DAT_183173f68 = (_DAT_183173f68 * 0x44f192958ce0624f ^ _DAT_183174018) + uVar7;
  _DAT_183173fb0 = _DAT_183173f68 ^ _DAT_183174018;
  _DAT_1831740b8 = 0xdb8eca63f49e8fab;
  uVar7 = (_DAT_183174068 ^ _DAT_180a971d0) + _DAT_183173fa0 + 0xdb8eca6370bcac8e;
  uVar8 = (_DAT_183173fa0 ^ _UNK_180a971d8) + _DAT_183174068 + 0x2471359c0b61704d;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183174068 ^ _DAT_180a971d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183173fa0 ^ _UNK_180a971d8;
  _DAT_1831740f8 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183174068 + 0x2471359c0b61704d) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183173fa0 + 0xdb8eca6370bcac8e));
  uVar7 = (_DAT_1831740f8 ^ 0xffffffffffffffef) << 0x11 |
          ((_DAT_1831740f8 ^ 0xffffffffffffffef) & 0x7fffffffffffffff) >> 0x2f;
  _DAT_183174058 = _DAT_183173fe0 ^ uVar7 ^ 0xfffffffffffffff8;
  _DAT_183173f50 = (_DAT_183173f50 ^ uVar7) - 8 ^ 0x7e16b2f8e271b5b4;
  _DAT_1831740e8 = (_DAT_1831740e8 * 0x7e5efd676cc1b653 ^ _DAT_183173f50) + uVar7;
  _DAT_183174060 = _DAT_1831740e8 ^ _DAT_183173f50;
  _DAT_1831740b8 = 0xfffffffffffffff8;
  uVar7 = (~_DAT_183174000 + 0x24b67d97b1709339) *
          ((_DAT_183174008 ^ 0xffffffff7bdddcdd) + (_DAT_183174008 & 0x7fffffff7bdddcdd) * 2);
  uVar7 = (uVar7 | _DAT_183174020) + (uVar7 & _DAT_183174020);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831740c8 = func_0x000186f16060((uVar7 | 0xdb498268caad4fe5) + (uVar7 & 0xdb498268caad4fe5));
  uVar8 = _DAT_1831740c8 ^ 0xda4c1342747b6640;
  uVar7 = uVar8 >> 1 | uVar8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar8) & 0x7fffffffffffffff;
  _DAT_183173fe8 = _DAT_183173fd8 ^ uVar7 ^ 0x24b67d97b1709330;
  _DAT_183174038 = (_DAT_183174038 ^ uVar7) + 0x24b67d97b1709330 ^ 0x8397eb1a9eb8b990;
  _DAT_183173f90 = (_DAT_183173f90 * 0xb5ff625db7506eb ^ _DAT_183174038) + uVar7;
  _DAT_183174080 = _DAT_183173f90 ^ _DAT_183174038;
  _DAT_183173ff0 = 0x24b67d97b1709330;
  uVar7 = (~_DAT_183173fd0 + 0xdb4982684e8f6cc9) *
          ((_DAT_1831740a8 ^ 0x24b67d973552b015) + (_DAT_1831740a8 & 0x24b67d973552b015) * 2);
  uVar7 = (uVar7 | _DAT_183173f98) + (uVar7 & _DAT_183173f98);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183174060 = func_0x000186f16060((uVar7 | 0xffffffff7bdddcdd) + (uVar7 & 0xffffffff7bdddcdd));
  uVar7 = _DAT_183174060 & 0x1fffffffff;
  _DAT_1831740a0 = _DAT_183174048 ^ uVar7 ^ 0xfffffffffffffff8;
  _DAT_1831740b0 = (_DAT_1831740b0 ^ uVar7) - 8 ^ 0xcc5d2e416a81d335;
  _DAT_183174008 = (_DAT_183174008 * 0x53622d4a9d96ad05 ^ _DAT_1831740b0) + uVar7;
  _DAT_183173fb0 = _DAT_183174008 ^ _DAT_1831740b0;
  _DAT_183174050 = -8;
  uVar7 = (_DAT_183173f10 ^ _DAT_180a971e0) + _DAT_183174070 + 0x7f5affcf4fabdc96;
  uVar8 = (_DAT_183174070 ^ _UNK_180a971e8) + _DAT_183173f10 + 0x567eabd8e9463092;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183173f10 ^ _DAT_180a971e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183174070 ^ _UNK_180a971e8;
  _DAT_183173fd8 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183173f10 + 0x567eabd8e9463092) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183174070 + 0x7f5affcf4fabdc96));
  uVar7 = (_DAT_183173fd8 >> 0x1e) * 0x3059611ac0000000;
  _DAT_183173fe8 = (_DAT_183173fe8 ^ uVar7) + 0x2924541722cfcf21 ^ 0xc35e486b3c3525c0;
  _DAT_183173f18 = (_DAT_183173f18 * -0x1a67c4450c91961f ^ _DAT_183173fe8) + uVar7;
  _DAT_1831740b8 = _DAT_183173f18 ^ _DAT_183173fe8;
  _DAT_183174068 = 0x2924541722cfcf21;
  _DAT_183173f08 = func_0x000186f16060(_DAT_183173ff8 + 0xbe4239e03ac6ce8 ^ 0xa2);
  uVar7 = ~(_DAT_183173f08 * 2) >> 1 & 0x7f5affcfcb89ffb3;
  _DAT_183174000 = (_DAT_183174000 ^ uVar7) + 0x565aabc8c9003092 ^ 0x71a5e3b915ee003b;
  _DAT_183173f50 = (_DAT_183173f50 * -0x46a7ff5c18665e31 ^ _DAT_183174000) + uVar7;
  _DAT_183174010 = _DAT_183173f50 ^ _DAT_183174000;
  _DAT_183173fe8 = _DAT_183173f90 ^ 0x565aabc8c9003092;
  _DAT_183173f20 = 0x565aabc8c9003092;
  uVar7 = (~_DAT_1831740d0 + 0xacb5579192006125) *
          ((_DAT_183174060 ^ 0x29245417a6edec04) + (_DAT_183174060 & 0x29245417a6edec04) * 2);
  uVar7 = (uVar7 | _DAT_183174018) + (uVar7 & _DAT_183174018);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831740c0 = func_0x000186f16060((uVar7 | 0x8591038634ed8d20) + (uVar7 & 0x8591038634ed8d20));
  uVar7 = _DAT_1831740c0 ^ 0x2924541722cfcf21;
  _DAT_183173f68 = _DAT_183173fe8 ^ uVar7 ^ 0xd5d9aba8b4d03045;
  _DAT_183173f50 = (_DAT_183173f50 ^ uVar7) + 0xd5d9aba8b4d03045 ^ 0x289e1bb18dbe6de1;
  _DAT_183173f20 = (_DAT_183173f20 * 0x4f2d77b0c7203bf ^ _DAT_183173f50) + uVar7;
  _DAT_183173f70 = _DAT_183173f20 ^ _DAT_183173f50;
  _DAT_183174088 = 0xd5d9aba8b4d03045;
  _DAT_183173ff0 = func_0x000186f16060(_DAT_1831740f0 + 0x22ff7c23001dff ^ 0xde);
  _DAT_183174070 = (_DAT_183173ff0 ^ 0x38139f299) & 0x3ffffffff ^ 0xd5d9aba8b4d03045;
  _DAT_183174060 = _DAT_183174060 ^ _DAT_183174070 ^ 0xd264c6635aaf022;
  _DAT_1831740a0 = (_DAT_1831740a0 * 0x5b24ed00fb513e11 ^ _DAT_183174060) + _DAT_183174070;
  _DAT_183174030 = _DAT_1831740a0 ^ _DAT_183174060;
  _DAT_183173f98 = 0;
  uVar7 = ((_DAT_183174028 ^ 0xffffffff7bdddcdd) + (_DAT_183174028 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_183174008;
  uVar7 = (uVar7 | _DAT_183173f58) + (uVar7 & _DAT_183173f58);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831740e0 = func_0x000186f16060((uVar7 | 0xffffffff7bdddcdd) + (uVar7 & 0xffffffff7bdddcdd));
  uVar7 = _DAT_1831740e0 * 0xf008ce0eff4d519 ^ 0xfffffffffffffff8;
  _DAT_183173fb8 = _DAT_183173f80 ^ uVar7 ^ 0xfffffffffffffff8;
  _DAT_183173ff8 = (_DAT_183173ff8 ^ uVar7) - 8 ^ 0x4282054a9189d905;
  _DAT_1831740d0 = (_DAT_1831740d0 * -0x1c6ccb2b208a8859 ^ _DAT_183173ff8) + uVar7;
  _DAT_183173f20 = _DAT_1831740d0 ^ _DAT_183173ff8;
  _DAT_183173f00 = 0xfffffffffffffff8;
  _DAT_1831740d8 = func_0x000186f16060(_DAT_183173f50 + 0x101f5c9068ffd47f ^ 0x66);
  uVar7 = (_DAT_1831740d8 ^ 0x80a500303476004d) >> 1 | _DAT_1831740d8 ^ 0x80a500303476004d;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = _DAT_1831740d8 ^ 0xfffffffffffffffe ^
          (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8;
  _DAT_183174010 = (_DAT_183174010 ^ uVar7) + 0x80a500303476004c ^ 0x650243fd50458fbc;
  _DAT_1831740c8 = (_DAT_1831740c8 * -0x2f78d0635ba0d1db ^ _DAT_183174010) + uVar7;
  _DAT_183173fe8 = _DAT_1831740c8 ^ _DAT_183174010;
  _DAT_183174028 = 0x80a500303476004c;
  uVar7 = (_DAT_183173fc0 ^ _DAT_180a971f0) + _DAT_183173f68 + 0x6f48e70fcdaa7e96;
  uVar8 = (_DAT_183173f68 ^ _UNK_180a971f8) + _DAT_183173fc0 + 0x6f48e70f49885db3;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183173fc0 ^ _DAT_180a971f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183173f68 ^ _UNK_180a971f8;
  _DAT_183173f88 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183173fc0 + 0x6f48e70f49885db3) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183173f68 + 0x6f48e70fcdaa7e96));
  _DAT_183174090 = _DAT_183174090 ^ _DAT_183173f88 ^ 0xbae3130dc67b8b29 ^ 0x6081a2defee9abf4;
  _DAT_183174018 =
       (_DAT_183174018 * -0x6042551ca5076b65 ^ _DAT_183174090) +
       (_DAT_183173f88 ^ 0xbae3130dc67b8b29);
  _DAT_1831740a8 = _DAT_183174018 ^ _DAT_183174090;
  _DAT_183174060 = 0;
  _DAT_183173f78 = func_0x000186f16060(_DAT_1831740d0 ^ 0xed4c04c4bd4a22e3);
  _DAT_183174040 = _DAT_183174000 ^ _DAT_183173f78 * 0x46a4c9fe5af74075 ^ 0xfffffffffffffff8;
  _DAT_183173f88 = (_DAT_183173f88 ^ _DAT_183173f78 * 0x46a4c9fe5af74075) - 8 ^ 0x711a6b124bb8ea07;
  _DAT_1831740e8 = _DAT_1831740c0 ^ 0xfffffffffffffff8;
  _DAT_183173f98 = 0xfffffffffffffff8;
  uVar3 = *(longlong *)(unaff_RBP + 0x40) - 8;
  uVar8 = uVar3 ^ 0x84222325;
  uVar7 = ((_DAT_183173ff0 ^ uVar8) + (uVar8 & _DAT_183173ff0) * 2) * (unaff_R14 - _DAT_183173fd8);
  uVar7 = (uVar7 | _DAT_1831740a0) + (uVar7 & _DAT_1831740a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831740a8 = func_0x000186f16060((uVar8 ^ unaff_R14 | uVar7) + (uVar7 & (uVar8 ^ unaff_R14)));
  *(ulonglong *)(unaff_RBP + 0x40) = uVar3;
  *(undefined8 *)(unaff_RBP + 0x48) = 0;
  uVar4 = (uint)(uVar3 >> 0x20);
  auVar11._8_4_ = (int)uVar3;
  auVar11._0_8_ = uVar3;
  auVar11._12_4_ = uVar4;
  *(ulonglong *)(unaff_RBP + 0x38) = unaff_R14;
  uVar5 = (uint)(unaff_R14 >> 0x20);
  auVar9._8_4_ = (int)unaff_R14;
  auVar9._0_8_ = unaff_R14;
  auVar9._12_4_ = uVar5;
  uVar10 = SUB164(auVar11 & auVar9,0);
  uVar13 = SUB168(auVar11 & auVar9,0);
  uVar6 = SUB164(auVar11 | auVar9,0);
  uVar14 = SUB168(auVar11 | auVar9,0);
  uVar12 = SUB164(auVar11 ^ auVar9,0);
  uVar8 = SUB168(auVar11 ^ auVar9,0);
  auVar16._8_4_ = 0xffffffff;
  auVar16._0_8_ = 0xffffffffffffffff;
  auVar16._12_4_ = 0xffffffff;
  auVar16 = auVar16 ^ *(undefined1 (*) [16])(unaff_RBP + 0x40);
  uVar15 = auVar16._0_4_;
  uVar7 = _DAT_1831740a8 * -0x77bd089416ad7997;
  uVar3 = (((ulonglong)_DAT_180a97270 * (ulonglong)uVar12 +
            ((ulonglong)_DAT_180a97280 * (ulonglong)uVar12 +
             (uVar8 >> 0x20) * (ulonglong)_DAT_180a97270 << 0x20) +
            (ulonglong)_DAT_180a97250 * (ulonglong)uVar6 +
            ((ulonglong)_DAT_180a97260 * (ulonglong)uVar6 +
             (uVar14 >> 0x20) * (ulonglong)_DAT_180a97250 << 0x20) +
           (ulonglong)_DAT_180a97230 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_180a97240 * (ulonglong)uVar10 +
            (uVar13 >> 0x20) * (ulonglong)_DAT_180a97230 << 0x20) +
           (ulonglong)_DAT_180a97220 * (unaff_R14 & 0xffffffff) +
           ((ulonglong)uVar5 * (ulonglong)_DAT_180a97220 +
            (ulonglong)_DAT_180a97200 * (unaff_R14 & 0xffffffff) << 0x20) +
           (ulonglong)_DAT_180a97210 * (uVar3 & 0xffffffff) +
           ((ulonglong)uVar4 * (ulonglong)_DAT_180a97210 +
            (uVar3 & 0xffffffff) * (ulonglong)_DAT_180a97200 << 0x20)) -
          ((ulonglong)uVar15 * (_DAT_180a972f0 & 0xffffffff) +
           ((ulonglong)_DAT_180a97360 * (ulonglong)uVar15 +
            (auVar16._0_8_ >> 0x20) * (_DAT_180a972f0 & 0xffffffff) << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_DAT_180a97340 +
          ((ulonglong)_DAT_180a97350 * (ulonglong)uVar12 +
           (uVar8 >> 0x20) * (ulonglong)_DAT_180a97340 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_180a97320 +
          ((ulonglong)_DAT_180a97330 * (ulonglong)uVar6 +
           (uVar14 >> 0x20) * (ulonglong)_DAT_180a97320 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_180a97300 +
          ((ulonglong)_DAT_180a97310 * (ulonglong)uVar10 +
           (uVar13 >> 0x20) * (ulonglong)_DAT_180a97300 << 0x20) +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a972e0 +
           (ulonglong)uVar5 * (ulonglong)_DAT_180a972d0 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a972d0 +
          ((uVar3 & 0xffffffff) * (ulonglong)_DAT_180a972c0 +
           (ulonglong)uVar4 * (ulonglong)_DAT_180a972b0 << 0x20) +
          (uVar3 & 0xffffffff) * (ulonglong)_DAT_180a972b0)) + 0xf288af6871345166;
  _DAT_183173fc8 = uVar3 ^ uVar7;
  _DAT_183173f20 = (_DAT_183173f20 ^ uVar7) + uVar3 ^ 0xe20a987a5fc75a93;
  _DAT_183174050 = (_DAT_183174050 * 0x3be17251a4e1b9db ^ _DAT_183173f20) + uVar7;
  _DAT_1831740f0 = _DAT_183174050 ^ _DAT_183173f20;
  _DAT_183173f38 = uVar3;
  _DAT_183174000 = func_0x000186f16060(_DAT_183173f40 ^ 0xc05a96e8cf3a7692);
  _DAT_1831740f8 =
       (_DAT_1831740f8 ^ _DAT_183174000 ^ 0x61795e483d3f2420) + 0x6df95e5fbdbfbef4 ^
       0x9bbca91bcdee7b;
  _DAT_183174020 =
       (_DAT_183174020 * -0x4d1e5650ad94b2ab ^ _DAT_1831740f8) +
       (_DAT_183174000 ^ 0x61795e483d3f2420);
  _DAT_183173fa0 = _DAT_183174020 ^ _DAT_1831740f8;
  _DAT_183173f00 = 0x6df95e5fbdbfbef4;
  uVar7 = (~_DAT_183173fd0 + 0x952dec7d8a1b529f) *
          ((_DAT_183174078 ^ 0xe00814ac6cde1ad9) + (_DAT_183174078 & 0x600814ac6cde1ad9) * 2);
  uVar7 = (uVar7 | _DAT_183174038) + (uVar7 & _DAT_183174038);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183173f98 = func_0x000186f16060((uVar7 | 0x7525f8d1e6c54847) + (uVar7 & 0x7525f8d1e6c54847));
  uVar7 = _DAT_183173f98 - (_DAT_183173f98 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar1 + (uint)bVar1 ^ _DAT_183173f98;
  _DAT_183173ff0 = (_DAT_183173ff0 ^ uVar7) + 0x7525f8d162e76b62 ^ 0xf2a09e5ea661dfb0;
  _DAT_183173f08 = (_DAT_183173f08 * -0x67ea6fd9a0c66815 ^ _DAT_183173ff0) + uVar7;
  _DAT_183173f68 = _DAT_183173f08 ^ _DAT_183173ff0;
  _DAT_183174078 = 0x7525f8d162e76b62;
  _DAT_183173f68 = func_0x000186f16060(_DAT_183174070 + 0x827ef470dcc8f2fb ^ 2);
  _DAT_183174068 = (_DAT_183174068 ^ _DAT_183173f68) + 0xfbebc460c4ce6000 ^ 0x4ad3ccefeba8142d;
  _DAT_183173f90 =
       (_DAT_183173f90 * -0x15b4b4b3b75b5aa9 ^ _DAT_183174068) + _DAT_183173f68 ^ _DAT_183174068;
  _DAT_1831740f0 = -0x4143b9f3b31a000;
  uVar7 = (_DAT_183174010 ^ _DAT_180a97370) + _DAT_1831740e8 + 0x84222305;
  uVar8 = (_DAT_1831740e8 ^ _UNK_180a97378) + _DAT_183174010 + 0x4143b9f3b31a000;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183174010 ^ _DAT_180a97370;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831740e8 ^ _UNK_180a97378;
  _DAT_1831740a0 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183174010 + 0x4143b9f3b31a000) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831740e8 + 0x84222305));
  uVar7 = _DAT_1831740a0 ^ 0x828773e766340000;
  _DAT_183174058 = _DAT_183173fd8 ^ uVar7 ^ 0x4143b9f3b31a020;
  _DAT_1831740d8 = (_DAT_1831740d8 ^ uVar7) + 0x4143b9f3b31a020 ^ 0xa41d0d052bddf0a1;
  _DAT_183173fb8 = (_DAT_183173fb8 * -0x5619d06d76180e83 ^ _DAT_1831740d8) + uVar7;
  _DAT_183174078 = _DAT_183173fb8 ^ _DAT_1831740d8;
  _DAT_183173fc8 = 0x4143b9f3b31a020;
  _DAT_183173f78 = func_0x000186f16060(_DAT_1831740f8 + 0x439e4d06fa093532 ^ 4);
  uVar7 = _DAT_183173f78 - (_DAT_183173f78 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183173f78;
  _DAT_183173f20 = _DAT_183173fc8 ^ uVar7 ^ 0x20;
  _DAT_183173f30 = (_DAT_183173f30 ^ uVar7) + 0x20 ^ 0x94ad8eb608fd9d43;
  _DAT_183173fa8 = (_DAT_183173fa8 * 0x5be1dae7df17579b ^ _DAT_183173f30) + uVar7;
  _DAT_1831740b0 = _DAT_183173fa8 ^ _DAT_183173f30;
  _DAT_183173f90 = 0x20;
  uVar7 = (_DAT_183174078 ^ _DAT_180a97380) + _DAT_183173fa0 + 0x84222305;
  uVar8 = (_DAT_183173fa0 ^ _UNK_180a97388) + _DAT_183174078 + 0x8b039265b6af4b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183174078 ^ _DAT_180a97380;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183173fa0 ^ _UNK_180a97388;
  _DAT_183174080 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183174078 + 0x8b039265b6af4b0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183173fa0 + 0x84222305));
  uVar7 = (ulonglong)(~(uint)_DAT_183174080 & 0x20);
  _DAT_1831740d0 = _DAT_183173f68 ^ uVar7 ^ 0x8b039265b6af4d0;
  _DAT_183174090 = (_DAT_183174000 ^ uVar7) + 0x8b039265b6af4d0 ^ 0xde9d5805b7043ca5;
  _DAT_183174000 = (_DAT_183174000 * -0x7e12341264d735cf ^ _DAT_183174090) + uVar7;
  _DAT_183174090 = _DAT_183174000 ^ _DAT_183174090;
  _DAT_183173f48 = 0x8b039265b6af4d0;
  uVar7 = (_DAT_183173f38 ^ _DAT_180a97390) + _DAT_183174000 + 0x8b03926df48d7f5;
  uVar8 = (_DAT_183174000 ^ _UNK_180a97398) + _DAT_183173f38 + 0xf74fc6d9a4950b50;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183173f38 ^ _DAT_180a97390;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183174000 ^ _UNK_180a97398;
  _DAT_1831740a8 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183173f38 + 0xf74fc6d9a4950b50) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183174000 + 0x8b03926df48d7f5));
  uVar7 = ~_DAT_1831740a8 & 0xffffffffffffe000;
  uVar8 = uVar7 >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  _DAT_183174068 = _DAT_183173fb8 ^ uVar7 ^ 0x20;
  _DAT_183173f78 = (_DAT_183173f78 ^ uVar7) + 0x20 ^ 0x8da8e0d5e3907e60;
  _DAT_183173f48 = (_DAT_183173f48 * 0xc2276e0a1068289 ^ _DAT_183173f78) + uVar7;
  _DAT_1831740f8 = _DAT_183173f48 ^ _DAT_183173f78;
  _DAT_183174060 = 0x20;
  _DAT_183174078 = func_0x000186f16060(_DAT_183174040 + 0x5370f5429abcb347 ^ 0x6d);
  uVar7 = _DAT_183174078 - (_DAT_183174078 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183174078) << 0x14 | _DAT_183174078 >> 0x2c;
  _DAT_1831740f8 = (_DAT_1831740f8 ^ uVar7) + 0xb7c8224b388e4f80 ^ 0x4fda7a133c8d41a0;
  _DAT_183173fb0 = (_DAT_183173fb0 * -0x3255ed323de8277 ^ _DAT_1831740f8) + uVar7;
  _DAT_1831740b8 = _DAT_183173fb0 ^ _DAT_1831740f8;
  _DAT_1831740c0 = 0xb7c8224b388e4f80;
  _DAT_183173f50 = func_0x000186f16060(_DAT_183174060 ^ 0x8b8f35438553325d);
  _DAT_1831740e0 = _DAT_1831740d0 ^ _DAT_183173f50 ^ 0x4837ddb4c771b0a0;
  _DAT_183174080 = (_DAT_183174080 ^ _DAT_183173f50) + 0x4837ddb4c771b0a0 ^ 0xf50e5c9e4fb2c009;
  _DAT_183174078 = (_DAT_183174078 * -0x1909e9839edc6d47 ^ _DAT_183174080) + _DAT_183173f50;
  _DAT_183173fa0 = _DAT_183174078 ^ _DAT_183174080;
  _DAT_183174030 = 0x4837ddb4c771b0a0;
  _DAT_183173fc0 = func_0x000186f16060(_DAT_183173fa8 ^ 0x76ee54286ea25633);
  uVar7 = _DAT_183173fc0 << 0x20 | _DAT_183173fc0 >> 0x20;
  _DAT_183174010 = _DAT_1831740b8 ^ uVar7 ^ 0xe31f573120a72a56;
  _DAT_183174028 = (_DAT_183174070 ^ uVar7) + 0xe31f573120a72a56 ^ 0xcfe007855db00dcf;
  _DAT_183174070 = (_DAT_183174070 * -0x4ba5b60eff130457 ^ _DAT_183174028) + uVar7;
  _DAT_183174028 = _DAT_183174070 ^ _DAT_183174028;
  _DAT_183173f08 = 0xe31f573120a72a56;
  uVar7 = (_DAT_183173f80 ^ _DAT_180a973a0) + _DAT_183174090 + 0x18dca68e5b7af6b3;
  uVar8 = (_DAT_183174090 ^ _UNK_180a973a8) + _DAT_183173f80 + 0xca42b0a2414e54c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183173f80 ^ _DAT_180a973a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183174090 ^ _UNK_180a973a8;
  _DAT_183174020 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183173f80 + 0xca42b0a2414e54c0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183174090 + 0x18dca68e5b7af6b3));
  uVar7 = _DAT_183174020 ^ 0xe81bb0a8d2696880;
  _DAT_1831740d8 = _DAT_183173f28 ^ uVar7 ^ 0xe31f573120a72a56;
  _DAT_183174030 = (_DAT_183174030 ^ uVar7) + 0xe31f573120a72a56 ^ 0xba8f727a9301a118;
  _DAT_183173f98 = (_DAT_183173f98 * -0x7876087edaf42b1f ^ _DAT_183174030) + uVar7;
  _DAT_183174080 = _DAT_183173f98 ^ _DAT_183174030;
  _DAT_183173f60 = 0xe31f573120a72a56;
  uVar7 = (_DAT_183173fe0 ^ 0x84222305) + _DAT_183174080 + 0x84222305;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183173fe0 ^ 0x84222305;
  uVar8 = ((_DAT_183174080 + _DAT_183173fe0) * 0x2000 | _DAT_183174080 + _DAT_183173fe0 >> 0x33) ^
          _DAT_183174080;
  _DAT_183174078 =
       func_0x000186f16060((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_183173fe0 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183174080 + 0x84222305));
  uVar7 = _DAT_183174078 * 0x52b942955d5a275b;
  _DAT_1831740a0 = _DAT_183173f18 ^ uVar7 ^ 0x20;
  _DAT_183174018 = (_DAT_183174018 ^ uVar7) + 0x20 ^ 0x9d0c8c3f3b1ad2f;
  _DAT_183174048 = (_DAT_183174048 * -0x3083d49656f6c4a7 ^ _DAT_183174018) + uVar7;
  _DAT_1831740f8 = _DAT_183174048 ^ _DAT_183174018;
  _DAT_183173ff0 = 0x20;
  uVar7 = (~_DAT_1831740d0 + 0x9206a1a04240410c) *
          ((_DAT_183173fb8 ^ 0x6df95e5f399d9dd1) + (_DAT_183173fb8 & 0x6df95e5f399d9dd1) * 2);
  uVar7 = (uVar7 | _DAT_183174048) + (uVar7 & _DAT_183174048);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183174080 = func_0x000186f16060((uVar7 | 0xffffffff7bdddcda) + (uVar7 & 0xffffffff7bdddcda));
  uVar7 = ~_DAT_183174080 & 0x6df95e5fbdbfbef4 | 0x14;
  _DAT_183173fc8 = _DAT_183173fc8 ^ uVar7 ^ 0x9e9847f6f30746d6;
  _DAT_183173f28 = (_DAT_183173f28 * -0x3486033641ea870d ^ _DAT_183173fc8) + uVar7;
  _DAT_183174008 = _DAT_183173f28 ^ _DAT_183173fc8;
  _DAT_183174050 = 0;
  _DAT_183173fc8 = func_0x000186f16060(_DAT_183173fa8 ^ 0xffdd0083fd001d52);
  uVar7 = _DAT_183173fc8 ^ 0x20;
  _DAT_183173fa8 = (_DAT_183173f00 ^ uVar7 ^ 0x20 ^ uVar7) + 0x20 ^ 0x35494bbe9dfdbffd;
  _DAT_183173f80 = (_DAT_183173f80 * 0x6bcd2fac821362cf ^ _DAT_183173fa8) + uVar7;
  _DAT_1831740d8 = _DAT_183173f80 ^ _DAT_183173fa8;
  _DAT_183174068 = 0x20;
  _DAT_183173f50 = func_0x000186f16060(_DAT_1831740a8 ^ 0x2300841affddb8);
  _DAT_183173fe8 = _DAT_183173fe8 ^ ~_DAT_183173f50 & 0x61795e483d3f2420 ^ 0xa6dbbccec1f25adc;
  _DAT_1831740f0 =
       (_DAT_1831740f0 * -0x3c70790de43d58eb ^ _DAT_183173fe8) +
       (~_DAT_183173f50 & 0x61795e483d3f2420);
  _DAT_183174098 = _DAT_1831740f0 ^ _DAT_183173fe8;
  _DAT_183173f00 = 0;
  uVar7 = ((_DAT_1831740b8 ^ 0x84222305) + (ulonglong)((uint)_DAT_1831740b8 & 0x84222305) * 2) *
          -_DAT_183173fc8;
  uVar7 = (uVar7 | _DAT_183173f60) + (uVar7 & _DAT_183173f60);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  lVar2 = func_0x000186f16060((uVar7 | 0x84222305) + (ulonglong)((uint)uVar7 & 0x84222305));
  _DAT_183174018 = (_DAT_183174018 * 0x4385ba51404a3653 ^ 0x4bf46c7d4f3fddbc) + lVar2;
  _DAT_183173fa0 = 0x4bf46c7d4f3fddbc;
  _DAT_183173f50 = _DAT_183174018 ^ 0x4bf46c7d4f3fddbc;
  _DAT_183173fc8 = 0x20;
  switch(uVar3 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6ef2e43 (image 186ef2e43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ef2e43(void)

{
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  switch(0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6ef8a2b (image 186ef8a2b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ef8a2b(undefined4 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint uVar3;
  ulonglong uVar4;
  longlong *unaff_R15;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 unaff_XMM6 [16];
  ulonglong unaff_XMM11_Qa;
  ulonglong unaff_XMM11_Qb;
  undefined1 unaff_XMM14 [16];
  
  *(undefined4 *)(unaff_RBP + 0x68) = param_1;
  (**(code **)(*unaff_R15 + 0x6f8))();
  uVar3 = *(uint *)(unaff_RBP + 0x60);
  uVar1 = *(uint *)(unaff_RBP + 0x68);
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar1 ^ 0x84222325;
  auVar5._8_4_ = uVar3;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ unaff_XMM6,unaff_XMM14);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar4 + _DAT_183174098;
  if (auVar6._4_4_ < 0) {
    uVar2 = _DAT_183174058 ^ uVar4;
  }
  _DAT_183174098 = func_0x000186f16060(SUB161(auVar5 ^ unaff_XMM6,5) ^ uVar2);
  uVar2 = _DAT_183173fe0 << 0x28 | _DAT_183173fe0 >> 0x18;
  uVar3 = uVar3 & uVar1;
  _DAT_183173fb0 = (ulonglong)uVar3;
  _DAT_183174030 = (_DAT_183174030 ^ uVar2) + _DAT_183173fb0 ^ 0x6e44b30241041fb0;
  _DAT_183173fa0 = (_DAT_183173fa0 * -0x4e07885dba1e96c7 ^ _DAT_183174030) + uVar2;
  _DAT_1831740e8 = _DAT_183173fa0 ^ _DAT_183174030;
  *(uint *)(unaff_RBP + 0x60) = uVar3;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(int *)(unaff_RBP + 0x90) = (int)*(undefined8 *)(unaff_RBP + 0x60);
  uVar2 = (~_DAT_183173f78 + 0xa4b4ca95) *
          ((_DAT_183173f68 ^ 0xc0fdf774) + (ulonglong)((uint)_DAT_183173f68 & 0xc0fdf774) * 2);
  uVar2 = (uVar2 | _DAT_183173f50) + (uVar2 & _DAT_183173f50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173f28 = func_0x000186f16060((uVar2 | 0x64493de0) + (ulonglong)((uint)uVar2 & 0x64493de0))
  ;
  uVar2 = _DAT_183173f28 * -0x3a0cc1e7e50f9a47;
  uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar2;
  _DAT_183173ff0 = (_DAT_183173ff0 ^ uVar2) + 0xe4ffded5 ^ 0xdcbf4eb559c5980b;
  _DAT_183173fb0 = (_DAT_183173fb0 * -0x2cd9f5e52baf0507 ^ _DAT_183173ff0) + uVar2;
  _DAT_183174010 = _DAT_183173fb0 ^ _DAT_183173ff0;
  _DAT_183173f20 = 0xe4ffded5;
  uVar2 = (~_DAT_183173f88 + 0x7829111f) *
          ((_DAT_183174038 ^ 0x6433a889) + (ulonglong)((uint)_DAT_183174038 & 0x6433a889) * 2);
  uVar2 = (uVar2 | _DAT_183173ff8) + (uVar2 & _DAT_183173ff8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183174038 = func_0x000186f16060((uVar2 | 0x1c1ab997) + (ulonglong)((uint)uVar2 & 0x1c1ab997))
  ;
  _DAT_183173fd0 = (_DAT_183173fd0 ^ _DAT_183174038 ^ 0xf8399bbe) + 0x98389ab2 ^ 0x79280c5061189c6d;
  _DAT_183173f10 =
       (_DAT_183173f10 * 0x7cb09c0339162363 ^ _DAT_183173fd0) + (_DAT_183174038 ^ 0xf8399bbe);
  _DAT_183174018 = _DAT_183173f10 ^ _DAT_183173fd0;
  _DAT_1831740f8 = 0x98389ab2;
  uVar2 = (~_DAT_183173f70 + 0xf30c52b3) *
          ((_DAT_183174040 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183174040 & 0x8422239a) * 2);
  uVar2 = (uVar2 | _DAT_183173fb8) + (uVar2 & _DAT_183173fb8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x000186f16060((uVar2 | 0x772e7128) + (ulonglong)((uint)uVar2 & 0x772e7128));
  uVar2 = (uVar2 ^ 0xb5a53de07c) & 0x7fffffffffffffff;
  _DAT_183173fa0 = _DAT_183173fc8 ^ uVar2 ^ 0xf30c5371;
  _DAT_183173f58 = (_DAT_183173f58 ^ uVar2) + 0xf30c5371 ^ 0xc8ed3fd550d537e;
  _DAT_1831740c8 = (_DAT_1831740c8 * 0x506a5858ecfa020d ^ _DAT_183173f58) + uVar2;
  _DAT_183173f20 = _DAT_1831740c8 ^ _DAT_183173f58;
  _DAT_1831740c0 = 0xf30c5371;
  _DAT_183173f58 = func_0x000186f16060(_DAT_183173f98 ^ 0xd2ffd6ea002ae1);
  uVar2 = (_DAT_183173f58 ^ 0xc4bed25ee946420) * -0x2176256c403d7d11;
  _DAT_183173f60 = _DAT_183174040 ^ uVar2 ^ 0x1000000bf;
  _DAT_183173f88 = (_DAT_183173f88 ^ uVar2) + 0x1000000bf ^ 0x1dc23353b7dcd3f6;
  _DAT_1831740e0 = (_DAT_1831740e0 * -0x3520b4c52ffaf8a1 ^ _DAT_183173f88) + uVar2;
  _DAT_183174090 = _DAT_1831740e0 ^ _DAT_183173f88;
  _DAT_1831740c8 = 0xbf;
  _DAT_1831740c0 = func_0x000186f16060(_DAT_1831740d0 ^ 0xffd2ffcf12ffab02);
  uVar2 = _DAT_1831740c0 - (_DAT_1831740c0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1831740c0;
  _DAT_183173f80 = (_DAT_183173f80 ^ uVar2) - 0xcb761610 ^ 0x8a6a359ffc117645;
  _DAT_1831740e0 = (_DAT_1831740e0 * 0x59e4f59f5c8fe3cb ^ _DAT_183173f80) + uVar2;
  _DAT_183174068 = _DAT_1831740e0 ^ _DAT_183173f80;
  _DAT_183173f48 = 0x3489e9f0;
  _DAT_183173f98 = func_0x000186f16060(_DAT_1831740c0 ^ 0xffa6ffcaaaff5f14);
  _DAT_183173fd8 = (_DAT_183173fd8 ^ 0xb3827870) - 0xb3827870 ^ 0x75e6ceb93099fd77;
  _DAT_183173fe8 = (_DAT_183173fe8 * -0x3992167ec6f2769f ^ _DAT_183173fd8) + 0xb3827870;
  _DAT_183174050 = _DAT_183173fe8 ^ _DAT_183173fd8;
  _DAT_1831740d0 = 0x4c7d8790;
  uVar2 = (~_DAT_183173f30 + 0xb3827871) *
          ((_DAT_183174020 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183174020 & 0x8422239a) * 2);
  uVar2 = (uVar2 | _DAT_183174030) + (uVar2 & _DAT_183174030);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173f18 = func_0x000186f16060((uVar2 | 0x37a05bea) + (ulonglong)((uint)uVar2 & 0x37a05bea))
  ;
  uVar2 = (_DAT_183173f18 & 0x7fffffffffffffff) -
          ((_DAT_183173f18 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (_DAT_183173f18 & 0x7fffffffffffffff) >> 0x2d |
          ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183173f18 & 0x7fffffffffffffff) << 0x13;
  _DAT_183173fa8 = _DAT_183173fc8 ^ uVar2 ^ 0xb382792f;
  _DAT_183174070 = (_DAT_183173f90 ^ uVar2) + 0xb382792f ^ 0x55a39c006f2f04fa;
  _DAT_183173f90 = (_DAT_183173f90 * 0x25f489fddc2dc1b3 ^ _DAT_183174070) + uVar2;
  _DAT_183174070 = _DAT_183173f90 ^ _DAT_183174070;
  _DAT_183174050 = 0xb382792f;
  uVar2 = (~_DAT_183173fc0 + 0x4c7d8791) *
          ((_DAT_1831740d0 ^ 0x37a05a0a) + (ulonglong)((uint)_DAT_1831740d0 & 0x37a05a0a) * 2);
  uVar2 = (uVar2 | _DAT_183173f98) + (uVar2 & _DAT_183173f98);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183174080 = func_0x000186f16060((uVar2 | 0x7bdddd9a) + (ulonglong)((uint)uVar2 & 0x7bdddd9a))
  ;
  _DAT_183173f78 = _DAT_183173f20 ^ _DAT_183174080 ^ 0x1000000bf;
  _DAT_1831740d8 = (_DAT_1831740d8 ^ _DAT_183174080) + 0x1000000bf ^ 0x4a780940e103665b;
  _DAT_183173f88 = (_DAT_183173f88 * -0x459855da8435d875 ^ _DAT_1831740d8) + _DAT_183174080;
  _DAT_1831740f8 = _DAT_183173f88 ^ _DAT_1831740d8;
  _DAT_1831740f0 = _DAT_183174028 ^ 0x1000000bf;
  _DAT_183174020 = 0xbf;
  uVar2 = (~_DAT_183173f08 + 0x98389ab3) *
          ((_DAT_1831740a8 ^ 0x60ddfdf0) + (ulonglong)((uint)_DAT_1831740a8 & 0x60ddfdf0) * 2);
  uVar2 = (uVar2 | _DAT_183174088) + (uVar2 & _DAT_183174088);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183174000 = func_0x000186f16060((uVar2 | 0xf8e56742) + (ulonglong)((uint)uVar2 & 0xf8e56742))
  ;
  _DAT_1831740e8 = _DAT_183173f80 ^ _DAT_183174068 ^ 0x17d387987;
  _DAT_183173f00 = (_DAT_183173f00 ^ _DAT_183174068) + 0x17d387987 ^ 0xe0efea08c6aae9e9;
  _DAT_183174090 = (_DAT_183174090 * -0x3b081980dc177353 ^ _DAT_183173f00) + _DAT_183174068;
  _DAT_183173f78 = _DAT_183174090 ^ _DAT_183173f00;
  _DAT_183173f70 = 0x7d387987;
  _DAT_183174068 = func_0x000186f16060(_DAT_183174058 ^ 0xff9eff47c200a456);
  uVar2 = (_DAT_183174068 ^ 0x882a8ea85c8d121a) << 0x1f |
          (_DAT_183174068 ^ 0x882a8ea85c8d121a) >> 0x21;
  _DAT_183173f18 = (_DAT_183173f18 ^ uVar2) + 0x7cc74467 ^ 0x6e38a6f72ee19f99;
  _DAT_183173f50 = (_DAT_183173f50 * -0x2d835b71107eaa9f ^ _DAT_183173f18) + uVar2;
  _DAT_1831740e8 = _DAT_183173f50 ^ _DAT_183173f18;
  _DAT_183174078 = 0x7cc74467;
  _DAT_183173fe0 = func_0x000186f16060(_DAT_183174040 + 0xffd1ffa821ff6bff ^ 0xdf);
  uVar2 = _DAT_183173fe0 - (_DAT_183173fe0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_183173fe0;
  uVar2 = uVar4 >> 1 | uVar4;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar4 ^ 0x713520;
  _DAT_183173ff0 = _DAT_183173fa0 ^ uVar2 ^ 0x7d387987;
  _DAT_183174040 = (_DAT_183174040 ^ uVar2) + 0x7d387987 ^ 0xfb351ced2489d7f8;
  _DAT_183173f28 = (_DAT_183173f28 * 0x8d2293f16afd5bf ^ _DAT_183174040) + uVar2;
  _DAT_183174038 = _DAT_183173f28 ^ _DAT_183174040;
  _DAT_1831740c0 = 0x7d387987;
  uVar2 = (~_DAT_183174000 + 0x7d387988) *
          ((_DAT_1831740a8 ^ 0xf91a5aa2) + (ulonglong)((uint)_DAT_1831740a8 & 0xf91a5aa2) * 2);
  uVar2 = (uVar2 | _DAT_183174030) + (uVar2 & _DAT_183174030);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173ff0 = func_0x000186f16060((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar2 = _DAT_183173ff0 >> 1 | _DAT_183173ff0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_183174050 =
       (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
       _DAT_183173ff0;
  _DAT_183173fb0 = _DAT_183173fb0 ^ _DAT_183174050 ^ 0x99f3080c61e2c4b6;
  _DAT_183173f50 = (_DAT_183173f50 * -0x30bbe61717f06bf5 ^ _DAT_183173fb0) + _DAT_183174050;
  _DAT_183173f00 = _DAT_183173f50 ^ _DAT_183173fb0;
  _DAT_183173f90 = 0;
  uVar2 = ((_DAT_183174008 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183174008 & 0x8422239a) * 2) *
          -_DAT_183174020;
  uVar2 = (uVar2 | _DAT_183174018) + (uVar2 & _DAT_183174018);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831740e8 = func_0x000186f16060((uVar2 | 0x8422239a) + (ulonglong)((uint)uVar2 & 0x8422239a))
  ;
  uVar2 = _DAT_1831740e8 << 0x1f | _DAT_1831740e8 >> 0x21;
  _DAT_183173fa0 = _DAT_183174058 ^ uVar2 ^ 0xbf;
  _DAT_183173fd0 = (_DAT_183173fd0 ^ uVar2) + 0xbf ^ 0x934c7399e1c77265;
  _DAT_183173fc0 = (_DAT_183173fc0 * -0x290da6301c36bd7 ^ _DAT_183173fd0) + uVar2;
  _DAT_183173f20 = _DAT_183173fc0 ^ _DAT_183173fd0;
  _DAT_183174028 = 0xbf;
  uVar2 = (_DAT_183173fe8 ^ unaff_XMM11_Qa) + _DAT_183173f28 + 0x60ddfdf0;
  uVar4 = (_DAT_183173f28 ^ unaff_XMM11_Qb) + _DAT_183173fe8 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183173fe8 ^ unaff_XMM11_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183173f28 ^ unaff_XMM11_Qb;
  _DAT_183173fa8 =
       func_0x000186f16060((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183173fe8 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183173f28 + 0x60ddfdf0));
  uVar2 = _DAT_183173fa8 ^ 0xffffffff;
  uVar4 = uVar2 >> 1 | uVar2;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2;
  _DAT_183173f80 = (_DAT_183173f80 ^ uVar2) + 0x1b00212a ^ 0xf9511bf9165fe73a;
  _DAT_183173f10 = (_DAT_183173f10 * 0x7105f2d9368bc93d ^ _DAT_183173f80) + uVar2;
  _DAT_1831740f0 = _DAT_183173f10 ^ _DAT_183173f80;
  _DAT_1831740f8 = 0x1b00212a;
  uVar2 = ((_DAT_183173f50 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183173f50 & 0x8422239a) * 2) *
          -_DAT_1831740e8;
  uVar2 = (uVar2 | _DAT_183173f88) + (uVar2 & _DAT_183173f88);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173f18 = func_0x000186f16060((uVar2 | 0x8422239a) + (ulonglong)((uint)uVar2 & 0x8422239a))
  ;
  uVar2 = _DAT_183173f18 << 0x20 | _DAT_183173f18 >> 0x20 & 0xfffffffffffe0000;
  _DAT_183173f80 = _DAT_1831740d0 ^ uVar2 ^ 0xbf;
  _DAT_1831740e0 = (_DAT_1831740e0 ^ uVar2) + 0xbf ^ 0x4f5b73fb0cf32054;
  _DAT_1831740c8 = (_DAT_1831740c8 * 0x3342e6fce04759a5 ^ _DAT_1831740e0) + uVar2;
  _DAT_183174078 = _DAT_1831740c8 ^ _DAT_1831740e0;
  _DAT_183173fa0 = 0xbf;
  uVar2 = (~_DAT_183173fa8 + 0x44dfd452) *
          ((_DAT_1831740b8 ^ 0xc0fdf774) + (ulonglong)((uint)_DAT_1831740b8 & 0xc0fdf774) * 2);
  uVar2 = (uVar2 | _DAT_183174078) + (uVar2 & _DAT_183174078);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183173fd8 = func_0x000186f16060((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar2 = (_DAT_183173fd8 ^ 0x1287ac7e9d3441a1) << 0x34 |
          (_DAT_183173fd8 ^ 0x1287ac7e9d3441a1) >> 0xc;
  _DAT_183173f30 = _DAT_183173f30 ^ uVar2 ^ 0x8927f205c579a1f1;
  _DAT_1831740b8 = (_DAT_1831740b8 * -0x22d2c1b6845ce9f3 ^ _DAT_183173f30) + uVar2;
  _DAT_1831740f8 = _DAT_1831740b8 ^ _DAT_183173f30;
  _DAT_183174008 = 0;
  switch(0xbf < (int)uVar3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6f0243f (image 186f0243f) =====

void FUN_186f0243f(void)

{
  return;
}



// ===== continuation @ rva 6f023e7 (image 186f023e7) =====

undefined8 FUN_186f023e7(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva 6efafdf (image 186efafdf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186efafdf(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  longlong *unaff_R15;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 unaff_XMM11 [16];
  uint uVar8;
  uint uVar9;
  
  lVar2 = (**(code **)(*unaff_R15 + 0x6f0))();
  *(int *)(unaff_RBP + 0x60) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x68));
  (**(code **)(*unaff_R15 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x70) = 6;
  *(undefined8 *)(unaff_RBP + 0x60) = unaff_R12;
  auVar5._8_8_ = _UNK_180019298;
  auVar5._0_8_ = unaff_R14 ^ unaff_R13;
  auVar6 = pshufb(auVar5 ^ _DAT_180a967b0,unaff_XMM11);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar4 + _DAT_183173fb0;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_1831740d0 ^ uVar4;
  }
  _DAT_1831740a0 = func_0x000186f16060(SUB161(auVar5 ^ _DAT_180a967b0,5) ^ uVar3);
  uVar9 = (uint)unaff_R14;
  uVar8 = uVar9 & _DAT_180017990;
  uVar7 = uVar9 | _DAT_180017990;
  uVar9 = uVar9 ^ _DAT_180017990;
  lVar2 = ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a96850 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a96840;
  uVar3 = (_DAT_1831740a0 ^ unaff_R14) & 0x7ffffffc0000;
  uVar4 = ((((ulonglong)uVar9 * (ulonglong)_DAT_180a96830 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_180a96820 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_180a96810 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_180a96800 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_180a967f0 << 0x20 |
            (ulonglong)uVar8 * (ulonglong)_DAT_180a967e0) +
            ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a967d0 << 0x20) +
            (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a967c0 + lVar2) -
          (((ulonglong)uVar9 * (ulonglong)_DAT_180a968d0 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_180a968c0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_180a968b0 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180a968a0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_180a96890 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_180a96880) +
           ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a96870 << 0x20) +
           (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a96860 + lVar2)) + 0x29a19f26b3b837c2;
  _DAT_183173f78 = _DAT_183173f90 ^ uVar3 ^ uVar4;
  _DAT_1831740f0 = (_DAT_1831740f0 ^ uVar3) + uVar4 ^ 0xfa006ee251129947;
  _DAT_183174068 = (_DAT_183174068 * 0x6b6e786a8654f217 ^ _DAT_1831740f0) + uVar3;
  _DAT_183174070 = _DAT_183174068 ^ _DAT_1831740f0;
  _DAT_183174020 = uVar4 & 0xffffffff;
  *(int *)(unaff_RBP + 0x68) = (int)uVar4;
  iVar1 = (**(code **)(*unaff_R15 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6f02327 (image 186f02327) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f02327(void)

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



// ===== continuation @ rva 6f1cb2a (image 186f1cb2a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1cb2a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180a9cf98)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 6f1cb36 (image 186f1cb36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1cb36(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 6f1cb5d (image 186f1cb5d) =====

undefined4 * FUN_186f1cb5d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 6f1cb5c (image 186f1cb5c) =====

void FUN_186f1cb5c(void)

{
  return;
}



// ===== continuation @ rva 6f1cb53 (image 186f1cb53) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1cb53(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_180a9cfa8)();
  return;
}



// ===== continuation @ rva 6f1cc13 (image 186f1cc13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1cc13(void)

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



// ===== continuation @ rva 6f1cbbf (image 186f1cbbf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1cbbf(void)

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



// ===== continuation @ rva 6f1d943 (image 186f1d943) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1d943(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a9d268)();
  return;
}



// ===== continuation @ rva 6f1d272 (image 186f1d272) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1d272(void)

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



// ===== continuation @ rva 6f1d57c (image 186f1d57c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1d57c(void)

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



// ===== continuation @ rva 6f1d978 (image 186f1d978) =====

void FUN_186f1d978(void)

{
  return;
}



// ===== continuation @ rva 6f187e0 (image 186f187e0) =====

void FUN_186f187e0(void)

{
  return;
}



// ===== continuation @ rva 6f18620 (image 186f18620) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f18620(void)

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



// ===== continuation @ rva 6f18c81 (image 186f18c81) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f18c81(void)

{
  char cVar1;
  longlong *unaff_R14;
  undefined4 uStack0000000000000094;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  
  uStack0000000000000094 = 0x4ead0ff6;
  rdtsc();
  uStack00000000000000c0 = 0x74007800690073;
  rdtsc();
  uStack00000000000000c8 = 0x6d002f006f0077;
  rdtsc();
  uStack00000000000000d0 = 0x52007500240049;
  (**(code **)(*unaff_R14 + 0x518))();
  FUN_190ddfc90();
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



// ===== continuation @ rva 6f1b7f5 (image 186f1b7f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1b7f5(void)

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



// ===== continuation @ rva 6f1b10b (image 186f1b10b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_186f18c09(void)

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



// ===== continuation @ rva 6f1958c (image 186f1958c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1958c(void)

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



// ===== continuation @ rva 6f1bb48 (image 186f1bb48) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1bb48(void)

{
  int iVar1;
  longlong *unaff_R13;
  undefined4 uStack0000000000000038;
  int iStack0000000000000050;
  
  uStack0000000000000038 = 2;
  iStack0000000000000050 = 2;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6f1baf9 (image 186f1baf9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1baf9(void)

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



// ===== continuation @ rva 6f198ad (image 186f198ad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_186f18c09(void)

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



// ===== continuation @ rva 6f1c971 (image 186f1c971) =====

void FUN_186f1c971(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 6f1d200 (image 186f1d200) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1d200(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180a9d498)();
  return;
}



// ===== continuation @ rva 6f1ce81 (image 186f1ce81) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1ce81(void)

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



// ===== continuation @ rva 6f1ce2d (image 186f1ce2d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1ce2d(void)

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



// ===== continuation @ rva 6f1d834 (image 186f1d834) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1d834(void)

{
  FUN_190dd72e0();
  (*_DAT_180a9d418)();
  return;
}



// ===== continuation @ rva 6f1cf78 (image 186f1cf78) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186f1cf78(void)

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



// ===== continuation @ rva 6f1d05f (image 186f1d05f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f1d05f(void)

{
  FUN_190ddfc90();
  (*_DAT_180a9d4a8)();
  return;
}



// ===== continuation @ rva 6ee9405 (image 186ee9405) =====

void FUN_186ee9405(void)

{
  return;
}



// ===== continuation @ rva 6ee6b20 (image 186ee6b20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee6b20(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180a93fa8)();
  return;
}



// ===== continuation @ rva 6ee9419 (image 186ee9419) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee9419(void)

{
  (*_DAT_180a94458)();
  return;
}



// ===== continuation @ rva 6ee8eb8 (image 186ee8eb8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee8eb8(void)

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



// ===== continuation @ rva 6ee823c (image 186ee823c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee823c(void)

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



// ===== continuation @ rva 6ee91d8 (image 186ee91d8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee91d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a93968)();
  return;
}



// ===== continuation @ rva 6ee8d9b (image 186ee8d9b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee8d9b(void)

{
  FUN_190dd72e0();
  (*_DAT_180a93be8)();
  return;
}



// ===== continuation @ rva 6ee8ba8 (image 186ee8ba8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee8ba8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180a93f88)();
  return;
}



// ===== continuation @ rva 6ee892e (image 186ee892e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee892e(void)

{
  FUN_190dd72e0();
  (*_DAT_180a93838)();
  return;
}



// ===== continuation @ rva 6ee746a (image 186ee746a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee746a(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a94088)();
  return;
}



// ===== continuation @ rva 6ee6e4a (image 186ee6e4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee6e4a(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_180a93a18)();
  return;
}



// ===== continuation @ rva 6ee9424 (image 186ee9424) =====

void FUN_186ee9424(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6ee8045 (image 186ee8045) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee8045(void)

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



// ===== continuation @ rva 6ee8e88 (image 186ee8e88) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee8e88(void)

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



// ===== continuation @ rva 6eed7e6 (image 186eed7e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eed7e6(void)

{
  FUN_190dd72e0();
  (*_DAT_180a957f8)();
  return;
}



// ===== continuation @ rva 6eed773 (image 186eed773) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eed773(void)

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



// ===== continuation @ rva 6eed8c6 (image 186eed8c6) =====

void FUN_186eed8c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6eed7d1 (image 186eed7d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eed7d1(void)

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



// ===== continuation @ rva 6eed8be (image 186eed8be) =====

void FUN_186eed8be(void)

{
  return;
}



// ===== continuation @ rva 6eed7ac (image 186eed7ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eed7ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a957d8)();
  return;
}



// ===== continuation @ rva 6eed80e (image 186eed80e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186eed80e(void)

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



// ===== continuation @ rva 6eed8ad (image 186eed8ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eed8ad(void)

{
  (*_DAT_180a95828)();
  return;
}



// ===== continuation @ rva 6eed886 (image 186eed886) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186eed886(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a95808)();
  return;
}



// ===== continuation @ rva 6edcf96 (image 186edcf96) =====

void FUN_186edcf96(void)

{
  return;
}



// ===== continuation @ rva 6ed5e42 (image 186ed5e42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ed5e42(void)

{
  FUN_190ddce00();
  (*_DAT_180a8ebb8)();
  return;
}



// ===== continuation @ rva 6edd002 (image 186edd002) =====

void FUN_186edd002(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6edc335 (image 186edc335) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186edc335(void)

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



// ===== continuation @ rva 6edc761 (image 186edc761) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186edc761(void)

{
  FUN_190dd72e0();
  (*_DAT_180a8efd8)();
  return;
}



// ===== continuation @ rva 6edc028 (image 186edc028) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186edc028(void)

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



// ===== continuation @ rva 6edc4b6 (image 186edc4b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186edc4b6(void)

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



// ===== continuation @ rva 6edc866 (image 186edc866) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186edc866(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180a8ead8)();
  return;
}



// ===== continuation @ rva 6edc0d5 (image 186edc0d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186edc0d5(void)

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



// ===== continuation @ rva 6edce6f (image 186edce6f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186edce6f(void)

{
  longlong in_stack_000000d0;
  
  switch(in_stack_000000d0 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6ee68fb (image 186ee68fb) =====

void FUN_186ee68fb(void)

{
  return;
}



// ===== continuation @ rva 6edd1e5 (image 186edd1e5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186edd1e5(void)

{
  FUN_190ddce00();
  (*_DAT_180a90cf8)();
  return;
}



// ===== continuation @ rva 6ee4f95 (image 186ee4f95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee4f95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a914b8)();
  return;
}



// ===== continuation @ rva 6ee0650 (image 186ee0650) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee0650(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_180a90c08)();
  return;
}



// ===== continuation @ rva 6ee68a3 (image 186ee68a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee68a3(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a913e8)();
  return;
}



// ===== continuation @ rva 6ee480e (image 186ee480e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee480e(void)

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



// ===== continuation @ rva 6ee6972 (image 186ee6972) =====

void FUN_186ee6972(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6ee4c9d (image 186ee4c9d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee4c9d(void)

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



// ===== continuation @ rva 6ee65c7 (image 186ee65c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee65c7(void)

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



// ===== continuation @ rva 6ee4dd1 (image 186ee4dd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee4dd1(void)

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



// ===== continuation @ rva 6ee64cc (image 186ee64cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ee64cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a90eb8)();
  return;
}



// ===== continuation @ rva 6ee4bd5 (image 186ee4bd5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee4bd5(void)

{
  longlong in_stack_000000e0;
  
  switch(in_stack_000000e0 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6ee514f (image 186ee514f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ee514f(void)

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



