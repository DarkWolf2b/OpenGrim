// ===== continuation @ rva 9f2d79a (image 189f2d79a) =====

void FUN_189f2d79a(void)

{
  return;
}



// ===== continuation @ rva 9f2950f (image 189f2950f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f2950f(void)

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



// ===== continuation @ rva 9f2c2dc (image 189f2c2dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189f2c2dc(void)

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



// ===== continuation @ rva 9f295cf (image 189f295cf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189f295cf(void)

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



// ===== continuation @ rva 9f2c6c7 (image 189f2c6c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189f2c6c7(void)

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



// ===== continuation @ rva 9f2ad9e (image 189f2ad9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189f2ad9e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
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



// ===== continuation @ rva 9f2cab4 (image 189f2cab4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f2cab4(void)

{
  longlong *unaff_RSI;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R12;
  ulonglong unaff_R14;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  undefined1 unaff_XMM9 [16];
  uint unaff_XMM10_Da;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 in_stack_000000c8;
  
  (**(code **)(*unaff_RSI + 0x570))();
  uVar8 = (uint)unaff_R12;
  auVar3._4_4_ = 0;
  auVar3._0_4_ = uVar8 ^ 0x84222325;
  auVar3._8_8_ = unaff_R14;
  auVar4 = pshufb(auVar3 ^ _DAT_1815924e0,unaff_XMM9);
  uVar1 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar1 + _DAT_183253ee0;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_183254128 ^ uVar1;
  }
  _DAT_183253e30 = func_0x000189f2d980(SUB161(auVar3 ^ _DAT_1815924e0,5) ^ uVar2);
  uVar2 = unaff_R14 * unaff_R12 ^ _DAT_183253e30 ^ unaff_R12;
  uVar2 = (uVar2 << 2 | uVar2 >> 0x3e) ^ unaff_R12;
  uVar5 = (uint)unaff_R14;
  uVar6 = uVar8 & uVar5;
  uVar7 = uVar8 | uVar5;
  uVar9 = uVar8 ^ uVar5;
  uVar8 = uVar8 ^ unaff_XMM10_Da;
  uVar1 = ((ulonglong)uVar8 * (ulonglong)_DAT_1815925a0 + _DAT_1815925b0 << 0x20) +
          (ulonglong)uVar8 * (ulonglong)_DAT_181592590 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_181592580 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_181592570 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_181592560 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_181592550 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_181592540 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_181592530 +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_181592520 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_181592510 +
          (unaff_R12 & 0xffffffff) * (ulonglong)_DAT_1815924f0 +
          ((unaff_R12 & 0xffffffff) * (ulonglong)_DAT_181592500 << 0x20) +
          (-(((ulonglong)uVar8 * (ulonglong)_DAT_181592690 + _DAT_1815926a0 << 0x20) +
            (ulonglong)uVar8 * (ulonglong)_DAT_181592680) -
          (((ulonglong)uVar9 * (ulonglong)_DAT_181592670 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_181592660 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_181592650 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_181592640 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_181592630 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_181592620 +
          ((ulonglong)(uVar5 * _DAT_181592610) << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_181592600 +
          (unaff_R12 & 0xffffffff) * (ulonglong)_DAT_1815925e0 +
          ((unaff_R12 & 0xffffffff) * (ulonglong)_DAT_1815925f0 << 0x20))) + 0x21542c1c3528e188;
  _DAT_183254218 = _DAT_183253f40 ^ uVar2 ^ uVar1;
  _DAT_183254120 = (_DAT_183254120 ^ uVar2) + uVar1 ^ 0xb7c5f4d20d3285c6;
  _DAT_1832540a8 = (_DAT_1832540a8 * 0x238c6443c38e19d3 ^ _DAT_183254120) + uVar2;
  _DAT_1832541f0 = _DAT_1832540a8 ^ _DAT_183254120;
  _DAT_1832542d8 = uVar1 & 0xffffffff;
  switch((int)uVar1 < in_stack_000000c8._4_4_) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9f2d0b4 (image 189f2d0b4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f2d0b4(void)

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



// ===== continuation @ rva 9f2d4cb (image 189f2d4cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f2d4cb(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
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



// ===== continuation @ rva 9f2d485 (image 189f2d485) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f2d485(void)

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



// ===== continuation @ rva 9f2b8f0 (image 189f2b8f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189f2b8f0(void)

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



// ===== continuation @ rva 9effa27 (image 189effa27) =====

void FUN_189effa27(void)

{
  return;
}



// ===== continuation @ rva 9eff70d (image 189eff70d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff70d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_18158b988)();
  return;
}



// ===== continuation @ rva 9eff77e (image 189eff77e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff77e(void)

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



// ===== continuation @ rva 9eff79f (image 189eff79f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff79f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_18158ba28)();
  return;
}



// ===== continuation @ rva 9effa2f (image 189effa2f) =====

void FUN_189effa2f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9eff72a (image 189eff72a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff72a(void)

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



// ===== continuation @ rva 9eff829 (image 189eff829) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff829(void)

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



// ===== continuation @ rva 9eff9e9 (image 189eff9e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff9e9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18158b9c8)();
  return;
}



// ===== continuation @ rva 9eff84a (image 189eff84a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff84a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18158ba88)();
  return;
}



// ===== continuation @ rva 9effa06 (image 189effa06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189effa06(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_18158ba88)();
  return;
}



// ===== continuation @ rva 9effba9 (image 189effba9) =====

void FUN_189effba9(void)

{
  uint uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = (**(code **)(*unaff_RBX + 0x558))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000189effbdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18158be20 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 9effb56 (image 189effb56) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189effb8c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189effb56(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9f120c0 (image 189f120c0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f120c0(void)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  
  uVar2 = *(undefined8 *)(unaff_RBP + 0x30);
  *(undefined8 *)(unaff_RBP + 0x80) = uVar2;
  uVar1 = *(uint *)(unaff_RBP + 0xb0);
  uVar6 = (ulonglong)uVar1 ^ 0x84222325 ^ _DAT_183253288;
  plVar3 = *(longlong **)(unaff_RBP + 0x40);
  lVar5 = ((ulonglong)uVar1 ^ 0x84222325) + _DAT_183252f30;
  uVar7 = uVar6 + lVar5;
  uVar8 = (_DAT_183252f30 ^ 1) + _DAT_183253288 + 1;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183252f30 ^ 1;
  _DAT_183252f88 =
       func_0x000189f293a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183253288 + 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar5);
  uVar6 = _DAT_183252f88 - (_DAT_183252f88 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ~(ulonglong)
           ((uint)_DAT_183252f88 ^
           (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) &
          (ulonglong)uVar1;
  uVar7 = ((((ulonglong)(uVar1 ^ unaff_XMM8_Da) * (ulonglong)_DAT_18158c6e0 << 0x20) +
            (ulonglong)(uVar1 ^ unaff_XMM8_Da) * (ulonglong)_DAT_18158c6d0 +
            ((ulonglong)(uVar1 & unaff_XMM8_Da) * (ulonglong)_DAT_18158c6e0 << 0x20 |
            (ulonglong)(uVar1 & unaff_XMM8_Da) * (ulonglong)_DAT_18158c6d0) + (ulonglong)uVar1 +
           ((ulonglong)(uVar1 | unaff_XMM8_Da) * (ulonglong)_DAT_18158c700 << 0x20) +
           (ulonglong)(uVar1 | unaff_XMM8_Da) * (ulonglong)_DAT_18158c6f0) -
          (((ulonglong)(uVar1 ^ unaff_XMM6_Da) * (ulonglong)_DAT_18158c740 + _DAT_18158c750 << 0x20)
           + (ulonglong)(uVar1 ^ unaff_XMM6_Da) * (ulonglong)_DAT_18158c730 +
          ((ulonglong)uVar1 * (ulonglong)_DAT_18158c740 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_18158c730)) + 0xb40814dc4cdedc46;
  _DAT_183252fc8 = _DAT_183252f88 ^ uVar6 ^ uVar7;
  _DAT_183253098 = (_DAT_183253098 ^ uVar6) + uVar7 ^ 0x39d0cf88d9fdc62a;
  _DAT_1832532a0 = (_DAT_1832532a0 * -0x403cc691a2920a37 ^ _DAT_183253098) + uVar6;
  _DAT_1832532c0 = _DAT_1832532a0 ^ _DAT_183253098;
  _DAT_183253050 = uVar7 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar7;
  iVar4 = (**(code **)(*plVar3 + 0x558))(plVar3,uVar2);
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar4 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9f0ce73 (image 189f0ce73) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189f0ce73(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x90) = 2;
  switch(*(int *)(unaff_RBP + 0xb0) < *(int *)(unaff_RBP + -0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9f0cedc (image 189f0cedc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f0cedc(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong in_RAX;
  longlong in_RCX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_XMM6_Da;
  uint uVar4;
  uint unaff_XMM8_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM14_Da;
  
  uVar2 = param_1 + in_RAX + param_2;
  uVar3 = param_3 + in_RCX + 1;
  param_1 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_1;
  param_3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_3;
  _DAT_1832530c8 =
       func_0x000189f293a0((param_3 << 0x1d | param_3 >> 0x23) - (in_RCX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  uVar4 = unaff_ESI ^ unaff_XMM6_Da;
  uVar2 = _DAT_1832530c8 << 0x30 | _DAT_1832530c8 >> 0x10;
  uVar3 = ((((ulonglong)uVar4 * (ulonglong)_DAT_18158c940 + _DAT_18158c9b0 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_18158c9a0 +
            ((ulonglong)(unaff_ESI ^ unaff_XMM8_Da) * (ulonglong)_DAT_18158c970 << 0x20) +
            (ulonglong)(unaff_ESI ^ unaff_XMM8_Da) * (ulonglong)_DAT_18158c960 +
            ((ulonglong)(unaff_ESI & unaff_XMM8_Da) * (ulonglong)_DAT_18158c970 << 0x20 |
            (ulonglong)(unaff_ESI & unaff_XMM8_Da) * (ulonglong)_DAT_18158c960) +
            (ulonglong)unaff_ESI * (ulonglong)_DAT_18158c950 +
            ((ulonglong)unaff_ESI * (ulonglong)_DAT_18158c940 << 0x20) +
           ((ulonglong)(unaff_ESI | unaff_XMM8_Da) * (ulonglong)_DAT_18158c990 << 0x20) +
           (ulonglong)(unaff_ESI | unaff_XMM8_Da) * (ulonglong)_DAT_18158c980) -
          (((ulonglong)uVar4 * (ulonglong)unaff_XMM11_Da + _DAT_18158ca00 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)unaff_XMM14_Da +
          ((ulonglong)unaff_ESI * (ulonglong)unaff_XMM11_Da << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)unaff_XMM14_Da)) + 0xdf83643180114f83;
  _DAT_183252f30 = _DAT_183253278 ^ uVar2 ^ uVar3;
  _DAT_183253230 = (_DAT_183253230 ^ uVar2) + uVar3 ^ 0xb8a279eabe7b73d4;
  _DAT_183252f50 = (_DAT_183252f50 * -0x584f48a0e2caa547 ^ _DAT_183253230) + uVar2;
  _DAT_183253248 = _DAT_183252f50 ^ _DAT_183253230;
  _DAT_183253128 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar3;
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9f151f3 (image 189f151f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f151f3(void)

{
  char cVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  undefined8 unaff_R12;
  longlong *unaff_R14;
  
  *(undefined8 *)(unaff_RBP + 0x90) = unaff_R12;
  *(undefined4 *)(unaff_RBP + 0x98) = 0;
  *(undefined4 *)(unaff_RBP + 0xa0) = unaff_EDI;
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



// ===== continuation @ rva 9f1560f (image 189f1560f) =====

void FUN_189f1560f(void)

{
  code *pcVar1;
  
  FUN_18000544c(0,0,0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9f083ff (image 189f083ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_189f083ff(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *unaff_RBP;
  longlong unaff_R12;
  uint uVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined1 auVar8 [16];
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  auVar8 = *(undefined1 (*) [16])(unaff_RBP + 0xc);
  uVar3 = *unaff_RBP;
  _DAT_1832530d0 = func_0x000189f293a0(_DAT_183253158 ^ 0xe52662aff7590c09);
  _DAT_183253060 =
       (_DAT_183253060 ^ _DAT_1832530d0 & 0xfffffffffffffff0) + 0xfbffef1f7dde9ffd ^
       0x1e4e4b4e55bfb998;
  _DAT_183253250 =
       (_DAT_183253250 * 0x1d1abf62e94fae1f ^ _DAT_183253060) +
       (_DAT_1832530d0 & 0xfffffffffffffff0);
  _DAT_183253048 = _DAT_183253250 ^ _DAT_183253060;
  _DAT_183253278 = 0xfbffef1f7dde9ffd;
  _DAT_183252f50 = func_0x000189f293a0(_DAT_183253080 + 0xcecd9de570887926 ^ 0xec);
  uVar4 = (_DAT_183252f50 ^ 0x27e97dbeaf77d5) & 0x3fffffffffffff;
  _DAT_183253170 = (_DAT_183253170 ^ uVar4) + 0x6ba28831aead11d5 ^ 0x1906ec7b589a6a3d;
  _DAT_183253258 = (_DAT_183253258 * -0x74ed5e289c16f6c9 ^ _DAT_183253170) + uVar4;
  _DAT_183253270 = _DAT_183253258 ^ _DAT_183253170;
  _DAT_1832532f0 = 0x6ba28831aead11d5;
  uVar4 = (~_DAT_183253278 + 0x683b5fe238e44301) *
          ((_DAT_183253208 ^ 0x8422230d) + (ulonglong)((uint)_DAT_183253208 & 0x8422230d) * 2);
  uVar4 = (uVar4 | _DAT_183253270) + (uVar4 & _DAT_183253270);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183252ff8 = func_0x000189f293a0((uVar4 | 0x683b5fe2bcc6600d) + (uVar4 & 0x683b5fe2bcc6600d));
  uVar4 = ((_DAT_183252ff8 ^ 0x683b5fe238e44328) << 0x1b |
          (_DAT_183252ff8 ^ 0x683b5fe238e44328) >> 0x25) ^ 0x28;
  _DAT_183252f30 = _DAT_183252fb0 ^ uVar4 ^ 0x683b5fe238e44328;
  _DAT_1832531f8 = (_DAT_1832531f8 ^ uVar4) + 0x683b5fe238e44328 ^ 0xa93e43f4b91b11e7;
  _DAT_183252f00 = (_DAT_183252f00 * 0x52fb2e0e659eac43 ^ _DAT_1832531f8) + uVar4;
  _DAT_183252f40 = _DAT_183252f00 ^ _DAT_1832531f8;
  _DAT_183252ff0 = 0x683b5fe238e44328;
  uVar4 = (_DAT_183252f38 ^ _DAT_18158d390) + _DAT_183253050 + 0x683b5fe2bcc6600d;
  uVar9 = (_DAT_183253050 ^ _UNK_18158d398) + _DAT_183252f38 + 0x97c4a01dc71bbd00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183252f38 ^ _DAT_18158d390;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183253050 ^ _UNK_18158d398;
  _DAT_183253140 =
       func_0x000189f293a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183252f38 + 0x97c4a01dc71bbd00) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183253050 + 0x683b5fe2bcc6600d));
  uVar4 = _DAT_183253140 & 0x7fffffffffffffff;
  _DAT_183253120 = _DAT_183253080 ^ uVar4 ^ 0x28;
  _DAT_1832532f0 = (_DAT_1832532f0 ^ uVar4) + 0x28 ^ 0xbf1f2a5ec9c74e09;
  _DAT_183252fd0 = (_DAT_183252fd0 * 0x1493820e2ce3ed9b ^ _DAT_1832532f0) + uVar4;
  _DAT_183253128 = _DAT_183252fd0 ^ _DAT_1832532f0;
  _DAT_183253080 = 0x28;
  uVar4 = (~_DAT_183253128 + 0xbce9310554fee001) *
          ((_DAT_183253028 ^ 0x84222325) + (ulonglong)((uint)_DAT_183253028 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183253298) + (uVar4 & _DAT_183253298);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832532f8 = func_0x000189f293a0((uVar4 | 0xbce93105d0dcc325) + (uVar4 & 0xbce93105d0dcc325));
  _DAT_183252fd0 =
       (_DAT_183252fd0 ^ _DAT_1832532f8 ^ 0xbce9310554fee000) + 0x4316cefaab012000 ^
       0x8180c0e798c12a9;
  _DAT_183253170 =
       (_DAT_183253170 * 0x676cc22783c9a37f ^ _DAT_183252fd0) +
       (_DAT_1832532f8 ^ 0xbce9310554fee000);
  _DAT_183253258 = _DAT_183253170 ^ _DAT_183252fd0;
  _DAT_183252f98 = 0x4316cefaab012000;
  uVar4 = (_DAT_183253298 ^ _DAT_18158d3a0) + _DAT_183253048 + 0x8422230d;
  uVar9 = (_DAT_183253048 ^ _UNK_18158d3a8) + _DAT_183253298 + 0xbce9310554fee000;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183253298 ^ _DAT_18158d3a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183253048 ^ _UNK_18158d3a8;
  _DAT_183253198 =
       func_0x000189f293a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183253298 + 0xbce9310554fee000) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183253048 + 0x8422230d));
  uVar4 = (ulonglong)((uint)_DAT_183253198 & 0x28);
  _DAT_183253218 = _DAT_183253158 ^ uVar4 ^ 0xbce9310554fee028;
  _DAT_183252fd8 = (_DAT_183252fd8 ^ uVar4) + 0xbce9310554fee028 ^ 0x817053d2bf667ec9;
  _DAT_1832531c8 = (_DAT_1832531c8 * 0x7ff211334f2110ab ^ _DAT_183252fd8) + uVar4;
  _DAT_1832531a8 = _DAT_1832531c8 ^ _DAT_183252fd8;
  _DAT_1832531d8 = 0xbce9310554fee028;
  uVar4 = (_DAT_183253078 ^ _DAT_18158d3b0) + _DAT_183253050 + 0xbce93105d0dcc30d;
  uVar9 = (_DAT_183253050 ^ _UNK_18158d3b8) + _DAT_183253078 + 0x4316cefaab012000;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183253078 ^ _DAT_18158d3b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183253050 ^ _UNK_18158d3b8;
  _DAT_1832531c0 =
       func_0x000189f293a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183253078 + 0x4316cefaab012000) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183253050 + 0xbce93105d0dcc30d));
  uVar4 = _DAT_1832531c0 ^ 0x74a676c20d3e028;
  _DAT_1832532f8 = _DAT_1832530b8 ^ uVar4 ^ 0x28;
  _DAT_1832530a8 = (_DAT_1832530a8 ^ uVar4) + 0x28 ^ 0xa474a727ec5a2a7;
  _DAT_183253258 = (_DAT_183253258 * 0x43b3f945a08ddde7 ^ _DAT_1832530a8) + uVar4;
  _DAT_1832532e0 = _DAT_183253258 ^ _DAT_1832530a8;
  _DAT_183252fb8 = 0x28;
  _DAT_183253130 = func_0x000189f293a0(_DAT_183252f80 + 0xd1487eaee513493fU ^ 0x7a);
  _DAT_183253158 = _DAT_183253128 * 0x60b9d8a50f76b16d;
  _DAT_1832531f8 = _DAT_1832531f8 + 0x3f7de289aaab0600 ^ 0xe189de6dc59effa2;
  _DAT_183253128 = _DAT_183253158 ^ _DAT_1832531f8;
  _DAT_183252f80 = 0x3f7de289aaab0600;
  uVar4 = (~_DAT_183252fe8 + 0xc0821d765554fa01) *
          ((_DAT_1832531e8 ^ 0x8422230d) + (ulonglong)((uint)_DAT_1832531e8 & 0x8422230d) * 2);
  uVar4 = (uVar4 | _DAT_183253030) + (uVar4 & _DAT_183253030);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183252f48 = func_0x000189f293a0((uVar4 | 0xc0821d76d176d90d) + (uVar4 & 0xc0821d76d176d90d));
  uVar4 = _DAT_183252f48 << 0x26 | _DAT_183252f48 >> 0x1a;
  _DAT_183253088 = _DAT_1832531f8 ^ uVar4 ^ 0xc0821d765554fa28;
  _DAT_183252fb8 = (_DAT_183253038 ^ uVar4) + 0xc0821d765554fa28 ^ 0xe0dec070901789f7;
  _DAT_183253280 = (_DAT_183253280 * 0x47fdc09859adfbbf ^ _DAT_183252fb8) + uVar4;
  _DAT_183252fb8 = _DAT_183253280 ^ _DAT_183252fb8;
  _DAT_183253038 = -0x3f7de289aaab05d8;
  uVar4 = (~_DAT_183252f40 + 0x3f7de289aaab0601) *
          ((_DAT_1832530c0 ^ 0xc0821d76d176d90d) + (_DAT_1832530c0 & 0x40821d76d176d90d) * 2);
  uVar4 = (uVar4 | _DAT_183252fc8) + (uVar4 & _DAT_183252fc8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183252f88 = func_0x000189f293a0((uVar4 | 0xffffffff7bdddf0d) + (uVar4 & 0xffffffff7bdddf0d));
  uVar9 = _DAT_183252f88 ^ 0xfc3f6349a694f000;
  uVar4 = uVar9 >> 1 | uVar9;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38)) * 8 ^ uVar9;
  uVar4 = uVar9 >> 1 | uVar9;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38)) * 0x10 ^ uVar9)
          & 0x1ffffffffff;
  _DAT_183253240 = _DAT_1832530f0 ^ uVar4 ^ 0x28;
  _DAT_183253090 = (_DAT_183253090 ^ uVar4) + 0x28 ^ 0x14a51b9fa148627;
  _DAT_1832530e0 = (_DAT_1832530e0 * 0x55b53886a08a3ec7 ^ _DAT_183253090) + uVar4;
  _DAT_183252fd0 = _DAT_1832530e0 ^ _DAT_183253090;
  _DAT_183252f28 = _DAT_1832531c0 ^ 0x28;
  _DAT_1832530a0 = 0x28;
  uVar4 = (~_DAT_183253048 + 0x6ba28831aead11d6) *
          ((_DAT_183253128 ^ 0xfbffef1ff9fcbcd8) + (_DAT_183253128 & 0x7bffef1ff9fcbcd8) * 2);
  uVar4 = (uVar4 | _DAT_183252fc0) + (uVar4 & _DAT_183252fc0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183253100 = func_0x000189f293a0((uVar4 | 0x905d672e5751ad0d) + (uVar4 & 0x905d672e5751ad0d));
  uVar4 = _DAT_183253100 >> 1 | _DAT_183253100;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38)) * 0x40 ^
          _DAT_183253100;
  _DAT_183252ff8 = (_DAT_183252ff8 ^ uVar4) + 0x905d672ed3738e28 ^ 0x793b526224dba3ad;
  _DAT_183253200 = (_DAT_183253200 * -0x1f58121445c26451 ^ _DAT_183252ff8) + uVar4;
  _DAT_183253248 = _DAT_183253200 ^ _DAT_183252ff8;
  _DAT_183252f48 = 0x905d672ed3738e28;
  uVar4 = (_DAT_183253198 ^ _DAT_18158d3c0) + _DAT_183253130 + 0xfbffef1ff9fcbcd8;
  uVar9 = (_DAT_183253130 ^ _UNK_18158d3c8) + _DAT_183253198 + 0x6ba28831aead11d5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183253198 ^ _DAT_18158d3c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183253130 ^ _UNK_18158d3c8;
  _DAT_183252f18 =
       func_0x000189f293a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183253198 + 0x6ba28831aead11d5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183253130 + 0xfbffef1ff9fcbcd8));
  _DAT_183252fa8 = (_DAT_183252fa8 ^ _DAT_183252f18) + 0x6ba288112c8c11d5 ^ 0x20eea3006c649018;
  _DAT_1832530e8 = (_DAT_1832530e8 * -0x2edaa359965559b3 ^ _DAT_183252fa8) + _DAT_183252f18;
  _DAT_183253200 = _DAT_1832530e8 ^ _DAT_183252fa8;
  _DAT_183253160 = 0x6ba288112c8c11d5;
  _DAT_183253278 = func_0x000189f293a0(_DAT_183253280 ^ 0xb7207f15ef0c9fc);
  uVar4 = _DAT_183253278 << 0x1c | _DAT_183253278 >> 0x24;
  _DAT_183252f28 = _DAT_1832532c8 ^ uVar4 ^ 0x67a277512c8bb1d2;
  _DAT_183253270 = (_DAT_183253270 ^ uVar4) + 0x67a277512c8bb1d2 ^ 0x44ab02c2f09dbce4;
  _DAT_1832532a0 = (_DAT_1832532a0 * -0x8e841568072fde5 ^ _DAT_183253270) + uVar4;
  _DAT_1832532c0 = _DAT_1832532a0 ^ _DAT_183253270;
  _DAT_183253138 = 0x67a277512c8bb1d2;
  uVar4 = ((_DAT_183253248 ^ 0x8422230d) + (ulonglong)((uint)_DAT_183253248 & 0x8422230d) * 2) *
          -_DAT_1832530e0;
  uVar4 = (uVar4 | _DAT_183252ff8) + (uVar4 & _DAT_183252ff8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183252fa8 = func_0x000189f293a0((uVar4 | 0x8422230d) + (ulonglong)((uint)uVar4 & 0x8422230d))
  ;
  _DAT_1832530e8 = _DAT_1832531c8 ^ _DAT_183252fa8 ^ 0x28;
  _DAT_183253040 = (_DAT_183253040 ^ _DAT_183252fa8) + 0x28 ^ 0xd195efe07992c035;
  _DAT_1832532c0 =
       (_DAT_1832530a0 * 0x53e863f7f34d30dd ^ _DAT_183253040) + _DAT_183252fa8 ^ _DAT_183253040;
  _DAT_1832530a0 = 0x28;
  _DAT_183253200 = func_0x000189f293a0(_DAT_1832532f8 ^ 0x1bbc934a2674b362);
  uVar9 = _DAT_183253200 & 0x1ffffffff0000000;
  uVar4 = uVar9 >> 1 | uVar9;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38)) * 0x80 ^ uVar9;
  _DAT_183253150 = _DAT_183253150 ^ uVar9 ^ 0x4d39f5e056c9c1dc;
  _DAT_183253188 = (_DAT_183253188 * -0x2ac7c1e408f834f3 ^ _DAT_183253150) + uVar9;
  _DAT_183253180 = _DAT_183253188 ^ _DAT_183253150;
  _DAT_1832532a8 = 0;
  _DAT_183253210 = func_0x000189f293a0(_DAT_183253100 + 0x1d007c02ffddff ^ 0x82);
  uVar4 = _DAT_183253210 & 0x1ffffffffffffff;
  _DAT_1832531e0 = _DAT_183253270 ^ uVar4 ^ 0x28;
  _DAT_183253098 = (_DAT_183253098 ^ uVar4) + 0x28 ^ 0x459cfec3dd3a0ac5;
  _DAT_183252f98 = (_DAT_183252f98 * -0x723a69ce817ae70f ^ _DAT_183253098) + uVar4;
  _DAT_183253250 = _DAT_183252f98 ^ _DAT_183253098;
  _DAT_183253130 = 0x28;
  uVar4 = (_DAT_1832532f0 ^ _DAT_18158d3d0) + _DAT_1832530d8 + 0xfb82650ef8eabdcd;
  uVar9 = (_DAT_1832530d8 ^ _UNK_18158d3d8) + _DAT_1832532f0 + 0xfb82650e7cc89ee8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832532f0 ^ _DAT_18158d3d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832530d8 ^ _UNK_18158d3d8;
  _DAT_183253278 =
       func_0x000189f293a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1832532f0 + 0xfb82650e7cc89ee8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832530d8 + 0xfb82650ef8eabdcd));
  uVar4 = _DAT_183253278 << 0x20 | _DAT_183253278 >> 0x20;
  _DAT_183252f90 = _DAT_183252f90 ^ uVar4 ^ 0x760c888981d27b71;
  _DAT_183253288 = (_DAT_183253288 * 0x57fdb1ec70ec9b6b ^ _DAT_183252f90) + uVar4;
  _DAT_1832530f8 = _DAT_183253288 ^ _DAT_183252f90;
  _DAT_183253140 = 0;
  uVar4 = ((_DAT_183253040 ^ 0x8422230d) + (ulonglong)((uint)_DAT_183253040 & 0x8422230d) * 2) *
          -_DAT_183253290;
  uVar4 = (uVar4 | _DAT_183253048) + (uVar4 & _DAT_183253048);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183252f98 = func_0x000189f293a0((uVar4 | 0x8422230d) + (ulonglong)((uint)uVar4 & 0x8422230d))
  ;
  uVar4 = _DAT_183252f98 & 0xfffffffffffffffc;
  _DAT_183253100 = _DAT_183253018 ^ uVar4 ^ 0x28;
  _DAT_1832532d8 = (_DAT_1832532d8 ^ uVar4) + 0x28 ^ 0x40bcc6ac9d328bff;
  _DAT_183253130 = (_DAT_183253130 * -0x19a2ea350a351e1d ^ _DAT_1832532d8) + uVar4;
  _DAT_183252f68 = _DAT_183253130 ^ _DAT_1832532d8;
  _DAT_183252f80 = 0x28;
  uVar4 = *(ulonglong *)(unaff_RBP + 0x1e) ^ 0x84222325 ^ _DAT_183253138;
  lVar5 = (*(ulonglong *)(unaff_RBP + 0x1e) ^ 0x84222325) + _DAT_183253088;
  uVar9 = uVar4 + lVar5;
  uVar10 = (_DAT_183253088 ^ 0x28) + _DAT_183253138 + 0x28;
  uVar4 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar4;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183253088 ^ 0x28;
  _DAT_183253188 =
       func_0x000189f293a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183253138 + 0x28) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar4 = _DAT_183253188 & 0xfffffffffff;
  uVar2 = auVar8._0_4_;
  uVar11 = uVar2 & (uint)DAT_180063540;
  auVar8 = auVar8 | _DAT_180063540;
  auVar13._8_4_ = 0xffffffff;
  auVar13._0_8_ = 0xffffffffffffffff;
  auVar13._12_4_ = 0xffffffff;
  auVar1 = *(undefined1 (*) [16])(unaff_RBP + 4);
  uVar7 = auVar8._0_4_;
  uVar12 = SUB164(auVar13 ^ auVar1,0);
  uVar6 = SUB164(_DAT_180063540 ^ auVar1,0);
  _DAT_1832531b0 =
       (ulonglong)uVar12 * (ulonglong)_DAT_18158d420 +
       ((ulonglong)_DAT_18158d430 * (ulonglong)uVar12 +
        (SUB168(auVar13 ^ auVar1,0) >> 0x20) * (ulonglong)_DAT_18158d420 << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_18158d400 +
       ((auVar8._0_8_ >> 0x20) * (ulonglong)_DAT_18158d400 +
        (ulonglong)_DAT_18158d410 * (ulonglong)uVar7 << 0x20) +
       ((ulonglong)uVar11 * (ulonglong)_DAT_18158d410 << 0x20 |
       (ulonglong)uVar11 * (ulonglong)_DAT_18158d400) + (ulonglong)uVar2 * (ulonglong)_DAT_18158d3e0
       + ((ulonglong)_DAT_18158d3f0 * (ulonglong)uVar2 +
          (ulonglong)_DAT_18158d3e0 * (ulonglong)uVar3 << 0x20) +
       (-((ulonglong)uVar6 * (ulonglong)_DAT_18158d4a0 +
         ((ulonglong)_DAT_18158d4b0 * (ulonglong)uVar6 +
          (SUB168(_DAT_180063540 ^ auVar1,0) >> 0x20) * (ulonglong)_DAT_18158d4a0 << 0x20)) -
       (((ulonglong)uVar11 * (ulonglong)_DAT_18158d490 << 0x20) +
        (ulonglong)_DAT_18158d480 * (ulonglong)uVar11 +
       ((ulonglong)auVar1._0_4_ * (ulonglong)_DAT_18158d470 +
        (ulonglong)unaff_RBP[0x10] * (ulonglong)_DAT_18158d460 << 0x20) +
       (ulonglong)auVar1._0_4_ * (ulonglong)_DAT_18158d460)) + 0x27688009e012b6d0;
  _DAT_1832531e0 = _DAT_183253058 ^ uVar4 ^ _DAT_1832531b0;
  _DAT_1832530a0 = (_DAT_1832530a0 ^ uVar4) + _DAT_1832531b0 ^ 0xf15ae80ab13d7aed;
  _DAT_183253038 = (_DAT_183253038 * -0x6f1d5e8134ffdd8d ^ _DAT_1832530a0) + uVar4;
  _DAT_183253290 = _DAT_183253038 ^ _DAT_1832530a0;
  func_0x000180001044(*(undefined8 *)(unaff_RBP + 0x2c),_DAT_1832531b0);
  return 0;
}



// ===== continuation @ rva 9f1532a (image 189f1532a) =====

undefined8 FUN_189f1532a(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x80);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== continuation @ rva 9f09972 (image 189f09972) =====

undefined8 FUN_189f09972(void)

{
  func_0x000180001044();
  return 0;
}



// ===== continuation @ rva 9f05f78 (image 189f05f78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189f05f78(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *unaff_RBP;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined1 auVar9 [16];
  uint uVar11;
  undefined1 auVar12 [16];
  uint uVar14;
  undefined1 auVar13 [16];
  longlong lVar15;
  uint uVar16;
  undefined8 unaff_XMM11_Qa;
  ulonglong uVar17;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  ulonglong uVar18;
  undefined8 unaff_XMM14_Qb;
  uint uVar19;
  undefined1 auVar20 [16];
  
  *unaff_RBP = unaff_XMM14_Qa;
  unaff_RBP[1] = unaff_XMM14_Qb;
  unaff_RBP[6] = unaff_XMM13_Qa;
  unaff_RBP[7] = unaff_XMM13_Qb;
  unaff_RBP[8] = unaff_XMM12_Qa;
  unaff_RBP[9] = unaff_XMM12_Qb;
  unaff_RBP[2] = unaff_XMM11_Qa;
  unaff_RBP[3] = unaff_XMM11_Qb;
  unaff_RBP[0x16] = *(undefined8 *)(unaff_RBP[0xc] + -8);
  uVar6 = (_DAT_1832532f8 ^ _DAT_18158d1b0) + _DAT_183253030 + 0x6afd775b7280ae5a;
  uVar8 = (_DAT_183253030 ^ _UNK_18158d1b8) + _DAT_1832532f8 + 0x18cd104f94982a75;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832532f8 ^ _DAT_18158d1b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183253030 ^ _UNK_18158d1b8;
  _DAT_183252f50 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832532f8 + 0x18cd104f94982a75) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183253030 + 0x6afd775b7280ae5a));
  _DAT_183253068 =
       (_DAT_183253068 ^ _DAT_183252f50 ^ 0x7afd775ff6baaf7f) + 0x7afd775ff6baaf7f ^
       0xa3732887b1244547;
  _DAT_183252fa0 =
       (_DAT_183252fa0 * -0x2474c2516df7a075 ^ _DAT_183253068) +
       (_DAT_183252f50 ^ 0x7afd775ff6baaf7f);
  _DAT_183253170 = _DAT_183252fa0 ^ _DAT_183253068;
  _DAT_183253218 = 0x7afd775ff6baaf7f;
  uVar6 = (~_DAT_183253048 + 0xf6fae167e903ec3c) *
          ((_DAT_183253148 ^ 0x924007dc036cb66f) + (_DAT_183253148 & 0x124007dc036cb66f) * 2);
  uVar6 = (uVar6 | _DAT_183252f60) + (uVar6 & _DAT_183252f60);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183253248 = func_0x000189f293a0((uVar6 | 0x64bae6bbea6f5a54) + (uVar6 & 0x64bae6bbea6f5a54));
  _DAT_1832530d8 = (_DAT_1832530d8 ^ _DAT_183253230) + 0x64bae6bb6e4d7971 ^ 0xa45c7f90852774b7;
  _DAT_183253268 = (_DAT_183253268 * -0x22f3dde19543611f ^ _DAT_1832530d8) + _DAT_183253230;
  _DAT_1832532c8 = _DAT_183253268 ^ _DAT_1832530d8;
  _DAT_1832531c8 = _DAT_183253230 ^ 0x64bae6bb6e4d7971;
  _DAT_183253210 = 0x64bae6bb6e4d7971;
  _DAT_1832530e8 = func_0x000189f293a0(_DAT_183253250 ^ 0xe5da23d0662b58ff);
  uVar6 = _DAT_1832530e8 >> 1 | _DAT_1832530e8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_1832530e8;
  uVar6 = uVar8 >> 1 | uVar8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar8;
  _DAT_183253218 = (_DAT_183253218 ^ uVar8) + 0x6993c2054bbaf67d ^ 0x643d75a33ba63429;
  _DAT_1832532c0 = (_DAT_1832532c0 * -0x55475f78bbf6a30b ^ _DAT_183253218) + uVar8;
  _DAT_1832530b0 = _DAT_1832532c0 ^ _DAT_183253218;
  _DAT_183253028 = 0x6993c2054bbaf67d;
  uVar6 = (_DAT_183253228 ^ _DAT_18158d1c0) + _DAT_183252fe0 + 0x966c3dfa30672a5e;
  uVar8 = (_DAT_183252fe0 ^ _UNK_18158d1c8) + _DAT_183253228 + 0x6993c2054bbaf67d;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183253228 ^ _DAT_18158d1c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183252fe0 ^ _UNK_18158d1c8;
  _DAT_183253110 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183253228 + 0x6993c2054bbaf67d) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183252fe0 + 0x966c3dfa30672a5e));
  uVar6 = _DAT_183253110 >> 1 | _DAT_183253110;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183253110;
  uVar6 = uVar8 >> 1 | uVar8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar8;
  _DAT_183253108 = _DAT_1832531f0 ^ uVar8 ^ 0xfffffffffffffff8;
  _DAT_1832532f8 = (_DAT_1832532f8 ^ uVar8) - 8 ^ 0xf5489dbd4fc7f4ef;
  _DAT_183253070 = (_DAT_183253070 * -0x46ecacfc943bf7f5 ^ _DAT_1832532f8) + uVar8;
  _DAT_183253018 = _DAT_183253070 ^ _DAT_1832532f8;
  _DAT_183253240 = 0xfffffffffffffff8;
  _DAT_183252f00 = func_0x000189f293a0(_DAT_183252fe0 + 0x526eabd5a6db32f ^ 0x5e);
  uVar8 = _DAT_183252f00 * -0x2102ea3dc23ba7a9;
  uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar8) *
          -0x594c8930472c6b81;
  _DAT_1832531a0 = (_DAT_1832531a0 ^ uVar6) + 0xcfca50f43c623708 ^ 0x245eef8bc129d122;
  _DAT_1832530b0 = (_DAT_1832530b0 * 0x5076a6d1c2dc7cf7 ^ _DAT_1832531a0) + uVar6;
  _DAT_183253218 = _DAT_1832530b0 ^ _DAT_1832531a0;
  _DAT_183253210 = 0xcfca50f43c623708;
  uVar6 = (~_DAT_1832531b0 + 0x3035af0bc39dc8f9) *
          ((_DAT_1832532a8 ^ 0xffffffff7bdddcdd) + (_DAT_1832532a8 & 0x7fffffff7bdddcdd) * 2);
  uVar6 = (uVar6 | _DAT_1832532c0) + (uVar6 & _DAT_1832532c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183253010 = func_0x000189f293a0((uVar6 | 0xcfca50f4b8401425) + (uVar6 & 0xcfca50f4b8401425));
  uVar6 = (_DAT_183253010 ^ 0x7e5287a1e311b840) & 0x7ffffffffffffe00;
  _DAT_1832531a0 = _DAT_183253130 ^ uVar6 ^ 0x3035af0bc39dc8f0;
  _DAT_1832530d0 = (_DAT_1832530d0 ^ uVar6) + 0x3035af0bc39dc8f0 ^ 0x6b979da20549c4bb;
  _DAT_1832531d0 = (_DAT_1832531d0 * -0x577e5ca8f5649dcd ^ _DAT_1832530d0) + uVar6;
  _DAT_183253070 = _DAT_1832531d0 ^ _DAT_1832530d0;
  _DAT_183253200 = 0x3035af0bc39dc8f0;
  uVar6 = (_DAT_183253168 ^ _DAT_18158d1d0) + _DAT_183253028 + 0x84222325;
  uVar8 = (_DAT_183253028 ^ _UNK_18158d1d8) + _DAT_183253168 + 0x48772cf6d027ee70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183253168 ^ _DAT_18158d1d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183253028 ^ _UNK_18158d1d8;
  _DAT_1832532b0 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183253168 + 0x48772cf6d027ee70) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183253028 + 0x84222325));
  uVar6 = _DAT_1832532b0 - (_DAT_1832532b0 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1832532b0;
  _DAT_183253078 = (_DAT_183253078 ^ uVar6) + 0xb788d3092fd81190 ^ 0xd4d36512a9d241c;
  _DAT_1832531b0 = (_DAT_1832531b0 * -0x4f3e33cb4a0de837 ^ _DAT_183253078) + uVar6;
  _DAT_1832532c0 = _DAT_1832531b0 ^ _DAT_183253078;
  _DAT_183253118 = 0xb788d3092fd81190;
  _DAT_1832532b8 = func_0x000189f293a0(_DAT_183252f38 + 0xf70d87695bcd26ae ^ 0xd0);
  uVar8 = _UNK_18158d1e8;
  uVar6 = _DAT_18158d1e0;
  uVar3 = ((_DAT_1832532b8 ^ 0xbc4698497ec08c80) & 0xffffffffffffffc0) << 0x1f |
          (_DAT_1832532b8 ^ 0xbc4698497ec08c80) >> 0x21;
  _DAT_1832532d0 = _DAT_183253000 ^ uVar3 ^ 0x48772cf6d027ee68;
  _DAT_183252f20 = (_DAT_183252f20 ^ uVar3) + 0x48772cf6d027ee68 ^ 0x4ea3c7aed6c6260c;
  _DAT_1832530d0 = (_DAT_1832530d0 * -0x5ba52edf3daf2eb3 ^ _DAT_183252f20) + uVar3;
  _DAT_1832532c8 = _DAT_1832530d0 ^ _DAT_183252f20;
  _DAT_183253170 = 0x48772cf6d027ee68;
  uVar3 = (_DAT_183252f98 ^ _DAT_18158d1e0) + _DAT_183253268 + 0x7afd775f72988c5a;
  uVar10 = (_DAT_183253268 ^ _UNK_18158d1e8) + _DAT_183252f98 + 0x64bae6bb6e4d7971;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183252f98 ^ _DAT_18158d1e0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183253268 ^ _UNK_18158d1e8;
  _DAT_183252fb0 =
       func_0x000189f293a0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183252f98 + 0x64bae6bb6e4d7971)
                           ^ (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183253268 + 0x7afd775f72988c5a)
                          );
  uVar3 = _DAT_183252fb0 ^ 0x64bae6bb6e4d7971;
  uVar10 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar3 = ~((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3)
          & 0x7afd775ff6baaf7f;
  _DAT_1832531d0 = _DAT_1832530d8 ^ uVar3 ^ 0xdfb85e1b650828f0;
  _DAT_183252f60 = (_DAT_183252f60 ^ uVar3) + 0xdfb85e1b650828f0 ^ 0x9f83c561d70ec642;
  _DAT_1832530a0 = (_DAT_1832530a0 * -0xc1198eb809cf2eb ^ _DAT_183252f60) + uVar3;
  _DAT_183252fb8 = _DAT_1832530a0 ^ _DAT_183252f60;
  _DAT_183253038 = 0xdfb85e1b650828f0;
  _DAT_183252fd0 = func_0x000189f293a0(_DAT_1832531b0 + 0x5ccd3ce41670b31d ^ 0xb);
  _DAT_183252f98 = (_DAT_183252f98 ^ _DAT_183252fd0) + 0x1e4791e498f7d60e ^ 0x78c7355a93636b97;
  _DAT_1832530b8 = (_DAT_1832530b8 * 0x7ff9e23baef9ad53 ^ _DAT_183252f98) + _DAT_183252fd0;
  _DAT_183253028 = _DAT_1832530b8 ^ _DAT_183252f98;
  _DAT_1832531c8 = 0x1e4791e498f7d60e;
  uVar3 = (_DAT_1832532c8 ^ uVar6) + _DAT_183252f18 + 0x7afd775f72988c5a;
  uVar10 = (_DAT_183252f18 ^ uVar8) + _DAT_1832532c8 + 0x64bae6bb6e4d7971;
  uVar6 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832532c8 ^ uVar6;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183252f18 ^ uVar8;
  _DAT_183253068 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832532c8 + 0x64bae6bb6e4d7971) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183252f18 + 0x7afd775f72988c5a));
  _DAT_183253270 =
       (_DAT_183253270 ^ ~_DAT_183253068 & 0x7afd775ff6baaf7f) + 0x60b8661b66082971 ^
       0x36dee96b1c51a3d5;
  _DAT_183253098 =
       (_DAT_183253098 * 0x385c0a146974b6e7 ^ _DAT_183253270) +
       (~_DAT_183253068 & 0x7afd775ff6baaf7f);
  _DAT_1832532b8 = _DAT_183253098 ^ _DAT_183253270;
  _DAT_183253040 = 0x60b8661b66082971;
  uVar6 = (~_DAT_1832532f0 + 0xc170cc36cc1052e3) *
          ((_DAT_183253108 ^ 0x1e4791e41cd5f52b) + (_DAT_183253108 & 0x1e4791e41cd5f52b) * 2);
  uVar6 = (uVar6 | _DAT_183253018) + (uVar6 & _DAT_183253018);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183253230 = func_0x000189f293a0((uVar6 | 0xdf375dd2d0c5a7c9) + (uVar6 & 0xdf375dd2d0c5a7c9));
  uVar6 = ~_DAT_183253230 & 0x1e4791e498f7d60e;
  _DAT_1832530d8 = _DAT_1832532b8 ^ uVar6 ^ 0xdfb85e1b650828f0;
  _DAT_183253240 = (_DAT_183253240 ^ uVar6) + 0xdfb85e1b650828f0 ^ 0x1dd2f1b87ce057e3;
  _DAT_1832530d0 = (_DAT_1832530d0 * 0x7dda845ef6f9c533 ^ _DAT_183253240) + uVar6;
  _DAT_183252ff8 = _DAT_1832530d0 ^ _DAT_183253240;
  _DAT_183253020 = -0x2047a1e49af7d710;
  uVar6 = (_DAT_183252fb8 ^ _DAT_18158d1f0) + _DAT_183253198 + 0x7afd775f72988c5a;
  uVar8 = (_DAT_183253198 ^ _UNK_18158d1f8) + (_DAT_183252fb8 - 1);
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183252fb8 ^ _DAT_18158d1f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183253198 ^ _UNK_18158d1f8;
  _DAT_183252f98 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183252fb8 - 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183253198 + 0x7afd775f72988c5a));
  _DAT_183253170 = (_DAT_183253170 ^ ~_DAT_183252f98) + 0x850288a009455080 ^ 0xf0524399983b2fb2;
  _DAT_183253160 = (_DAT_183253160 * 0x25661d06a2ef18c7 ^ _DAT_183253170) + ~_DAT_183252f98;
  _DAT_183252fd0 = _DAT_183253160 ^ _DAT_183253170;
  _DAT_183253000 = 0x850288a009455080;
  _DAT_1832530c0 = func_0x000189f293a0(_DAT_183252f60 ^ 0xf7cb58cbc6fbd40d);
  uVar6 = ((_DAT_1832530c0 ^ 0xfc7ae4f2786a6f00) & 0xffffffffffffff00) << 0x2d |
          (_DAT_1832530c0 ^ 0xfc7ae4f2786a6f00) >> 0x13;
  _DAT_183252f18 = _DAT_183252f18 ^ uVar6 ^ 0x1c37f391d785da44;
  _DAT_183253060 = (_DAT_183253060 * 0x9c64e225dbf7f09 ^ _DAT_183252f18) + uVar6;
  _DAT_1832532a8 = _DAT_183253060 ^ _DAT_183252f18;
  _DAT_183252fd8 = 0;
  uVar6 = (~_DAT_1832531d0 + 0x6afd775bf6a28d80) *
          ((_DAT_1832532d8 ^ 0x6afd775b7280ae5a) + (_DAT_1832532d8 & 0x6afd775b7280ae5a) * 2);
  uVar6 = (uVar6 | _DAT_183253008) + (uVar6 & _DAT_183253008);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  func_0x000189f293a0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  _DAT_183253098 = _DAT_183253098 ^ _DAT_183253088 ^ 0x6d642c2adcc6fb9d;
  _DAT_183252f90 = (_DAT_183252f90 * -0x7880c3dadaced99 ^ _DAT_183253098) + _DAT_183253088;
  _DAT_183252f78 = _DAT_183252f90 ^ _DAT_183253098;
  _DAT_1832532e8 = _DAT_183252fc0;
  _DAT_1832531b8 = 0;
  uVar6 = ((_DAT_183252f38 ^ 0xffffffff7bdddcdd) + (_DAT_183252f38 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_1832530f0;
  uVar6 = (uVar6 | _DAT_1832530c8) + (uVar6 & _DAT_1832530c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183253160 = func_0x000189f293a0((uVar6 | 0xffffffff7bdddcdd) + (uVar6 & 0xffffffff7bdddcdd));
  uVar6 = ~(_DAT_183253160 << 0x1a | _DAT_183253160 >> 0x26) & 0xfffffffffffffff8;
  _DAT_183253238 = _DAT_183253148 ^ uVar6 ^ 0xfffffffffffffff8;
  _DAT_183253030 = (_DAT_183253030 ^ uVar6) - 8 ^ 0x6d3f9f3224600cf8;
  _DAT_1832530b0 = (_DAT_1832530b0 * 0x4200adaed4f25b7d ^ _DAT_183253030) + uVar6;
  _DAT_183252f28 = _DAT_1832530b0 ^ _DAT_183253030;
  _DAT_1832530c0 = 0xfffffffffffffff8;
  uVar5 = unaff_RBP[0xc] - 8;
  uVar3 = uVar5 ^ 0x84222325;
  uVar6 = unaff_RBP[0x16];
  uVar8 = ((_DAT_1832531d8 ^ uVar3) + (uVar3 & _DAT_1832531d8) * 2) * (uVar6 - _DAT_183252f90);
  uVar8 = (uVar8 | _DAT_183253288) + (uVar8 & _DAT_183253288);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_183252f80 = func_0x000189f293a0((uVar3 ^ uVar6 | uVar8) + (uVar8 & (uVar3 ^ uVar6)));
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar5;
  uVar14 = (uint)(uVar5 >> 0x20);
  auVar12._8_4_ = (int)uVar5;
  auVar12._0_8_ = uVar5;
  auVar12._12_4_ = uVar14;
  uVar7 = (uint)(uVar6 >> 0x20);
  auVar9._8_4_ = (int)uVar6;
  auVar9._0_8_ = uVar6;
  auVar9._12_4_ = uVar7;
  uVar8 = (ulonglong)_DAT_18158d210;
  auVar20._8_4_ = 0xffffffff;
  auVar20._0_8_ = 0xffffffffffffffff;
  auVar20._12_4_ = 0xffffffff;
  uVar1 = (ulonglong)_DAT_18158d200;
  uVar3 = (ulonglong)_DAT_18158d200;
  uVar10 = (ulonglong)_DAT_18158d230;
  *(undefined1 (*) [16])(unaff_RBP + 0xc) = auVar12 | auVar9;
  uVar16 = SUB164(auVar12 & auVar9,0);
  uVar18 = SUB168(auVar12 & auVar9,0);
  uVar11 = SUB164(auVar12 ^ auVar9,0);
  uVar17 = SUB168(auVar12 ^ auVar9,0);
  uVar19 = SUB164(auVar20 ^ auVar13,0);
  uVar4 = _DAT_183252f80 & 0x7fffffffffffffff;
  uVar2 = unaff_RBP[0xc];
  lVar15 = ((ulonglong)uVar19 * (ulonglong)_DAT_18158d240 +
            ((ulonglong)_DAT_18158d290 * (ulonglong)uVar19 +
             (SUB168(auVar20 ^ auVar13,0) >> 0x20) * (ulonglong)_DAT_18158d240 << 0x20) +
            (ulonglong)_DAT_18158d270 * (ulonglong)uVar11 +
            ((ulonglong)_DAT_18158d280 * (ulonglong)uVar11 +
             (uVar17 >> 0x20) * (ulonglong)_DAT_18158d270 << 0x20) +
           (ulonglong)_DAT_18158d250 * (ulonglong)uVar16 +
           ((ulonglong)_DAT_18158d260 * (ulonglong)uVar16 +
            (uVar18 >> 0x20) * (ulonglong)_DAT_18158d250 << 0x20) +
           (uVar10 * (uVar6 & 0xffffffff) + (ulonglong)_DAT_18158d220 * (ulonglong)uVar7 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_18158d220 +
           (uVar8 * (uVar5 & 0xffffffff) + uVar3 * uVar14 << 0x20) + (uVar5 & 0xffffffff) * uVar1) -
           ((ulonglong)uVar11 * (ulonglong)_DAT_18158d320 +
            ((ulonglong)_DAT_18158d330 * (ulonglong)uVar11 +
             (uVar17 >> 0x20) * (ulonglong)_DAT_18158d320 << 0x20) +
            (uVar2 & 0xffffffff) * (ulonglong)_DAT_18158d300 +
            ((ulonglong)_DAT_18158d310 * (uVar2 & 0xffffffff) +
             (uVar2 >> 0x20) * (ulonglong)_DAT_18158d300 << 0x20) +
           (ulonglong)uVar16 * (ulonglong)_DAT_18158d2e0 +
           ((ulonglong)_DAT_18158d2f0 * (ulonglong)uVar16 +
            (uVar18 >> 0x20) * (ulonglong)_DAT_18158d2e0 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_18158d2d0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_18158d2d0 +
            (ulonglong)_DAT_18158d2c0 * (uVar6 & 0xffffffff) << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_18158d2d0 +
           ((ulonglong)uVar14 * (ulonglong)_DAT_18158d2d0 +
            (uVar5 & 0xffffffff) * (ulonglong)_DAT_18158d2c0 << 0x20));
  uVar3 = lVar15 + 0x5328ad8dff635e41;
  _DAT_183253068 = uVar3 ^ uVar4;
  _DAT_1832530f8 = (_DAT_1832530f8 ^ uVar4) + uVar3 ^ 0xedc49c5d35160836;
  _DAT_1832530b0 = (_DAT_183253110 * -0x447cf6d3d36bcb1d ^ _DAT_1832530f8) + uVar4 ^ _DAT_1832530f8;
  _DAT_183253110 = _DAT_183252fb8 ^ uVar3;
  lVar15 = lVar15 + -0x5b3c0155d0b8119e;
  uVar6 = (_DAT_183253260 ^ _DAT_18158d340) + lVar15;
  uVar8 = (uVar3 ^ _UNK_18158d348) + _DAT_183253260 + 0xe931a71be052881e;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183253260 ^ _DAT_18158d340;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar3 ^ _UNK_18158d348;
  _DAT_1832532e0 = uVar3;
  _DAT_183253050 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183253260 + 0xe931a71be052881e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar15);
  _DAT_183253140 =
       (_DAT_183253140 ^ _DAT_183253050 & 0x519b511cabc6b304) + 0xf9bbf71febd6bb1e ^
       0x22f76c148aba382b;
  _DAT_1832531c0 =
       (_DAT_1832531c0 * 0x132127a3c281c92d ^ _DAT_183253140) +
       (_DAT_183253050 & 0x519b511cabc6b304);
  _DAT_1832532b0 = _DAT_1832531c0 ^ _DAT_183253140;
  _DAT_1832531d0 = 0xf9bbf71febd6bb1e;
  uVar6 = (_DAT_183253150 ^ _DAT_18158d350) + _DAT_183252fe0 + 0x23022d71fca9787c;
  uVar8 = (_DAT_183252fe0 ^ _UNK_18158d358) + _DAT_183253150 + 0x7cbb658c6a0829d8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183253150 ^ _DAT_18158d350;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183252fe0 ^ _UNK_18158d358;
  _DAT_1832532d0 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183253150 + 0x7cbb658c6a0829d8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183252fe0 + 0x23022d71fca9787c));
  _DAT_183252f60 =
       (_DAT_183252f60 ^ _DAT_1832532d0 ^ 0x23022d71788b5b59) + 0x5fb948fd12837281 ^
       0x1236da1c618f76fc;
  _DAT_1832531a0 =
       (_DAT_1832531a0 * 0x2d20b0c019d0cba3 ^ _DAT_183252f60) +
       (_DAT_1832532d0 ^ 0x23022d71788b5b59);
  _DAT_183253018 = _DAT_1832531a0 ^ _DAT_183252f60;
  _DAT_183252f80 = 0x5fb948fd12837281;
  _DAT_183253250 = func_0x000189f293a0(_DAT_183253160 + 0x3658b3f7cad7d13d ^ 0x8f);
  _DAT_183253060 = (_DAT_183253060 ^ _DAT_183253250) + 0xbda3c7b5830c8510 ^ 0x7a06c45d9c2b337a;
  _DAT_1832532f0 = (_DAT_1832532f0 * 0x6634e745b48ef343 ^ _DAT_183253060) + _DAT_183253250;
  _DAT_183253038 = _DAT_1832532f0 ^ _DAT_183253060;
  _DAT_183253100 = 0xbda3c7b5830c8510;
  uVar6 = (_DAT_1832531d8 ^ _DAT_18158d360) + _DAT_183253028 + 0x84222305;
  uVar8 = (_DAT_183253028 ^ _UNK_18158d368) + _DAT_1832531d8 + 0x425c384a7cf37af0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832531d8 ^ _DAT_18158d360;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183253028 ^ _UNK_18158d368;
  _DAT_183252fa8 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832531d8 + 0x425c384a7cf37af0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183253028 + 0x84222305));
  uVar6 = _DAT_183252fa8 ^ 0x4b87094f9e6f5e00;
  _DAT_183252fa0 = _DAT_1832530c0 ^ uVar6 ^ 0x425c384a7cf37b10;
  _DAT_183253278 = (_DAT_183253278 ^ uVar6) + 0x425c384a7cf37b10 ^ 0x63b1a27c109af33d;
  _DAT_183253170 = (_DAT_183253170 * -0x693a3c38b8656ed ^ _DAT_183253278) + uVar6;
  _DAT_1832530f8 = _DAT_183253170 ^ _DAT_183253278;
  _DAT_183253190 = 0x425c384a7cf37b10;
  uVar6 = (~_DAT_183252f20 + 0xafee8d55d25def02) *
          ((_DAT_183253168 ^ 0x84222325) + (ulonglong)((uint)_DAT_183253168 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183253230) + (uVar6 & _DAT_183253230);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1832530b8 = func_0x000189f293a0((uVar6 | 0xafee8d55567fcc24) + (uVar6 & 0xafee8d55567fcc24));
  _DAT_183252fd8 = (_DAT_183252fd8 ^ _DAT_1832530b8) + 0x501172aa2da210ff ^ 0xc5cbd3e4f171937;
  _DAT_183253120 = (_DAT_183253120 * 0x493acb4a87f724dd ^ _DAT_183252fd8) + _DAT_1832530b8;
  _DAT_1832530a0 = _DAT_183253120 ^ _DAT_183252fd8;
  _DAT_1832530e8 = 0x501172aa2da210ff;
  _DAT_183253070 = func_0x000189f293a0(_DAT_1832530d8 ^ 0xcb34e9b5fb8d00bd);
  _DAT_183253000 = _DAT_183252f00 ^ _DAT_183253070 ^ 0xafee8d55d25def21;
  _DAT_183252fe8 = (_DAT_183252fe8 ^ _DAT_183253070) + 0xafee8d55d25def21 ^ 0xb5401abe8c521d5d;
  _DAT_183253018 = (_DAT_183253018 * -0x4465a56f8fc5253b ^ _DAT_183252fe8) + _DAT_183253070;
  _DAT_183252ff8 = _DAT_183253018 ^ _DAT_183252fe8;
  _DAT_183253080 = 0xafee8d55d25def21;
  _DAT_183252f20 = func_0x000189f293a0(_DAT_183253010 ^ 0x7b3ce287a96eca59);
  uVar6 = ~_DAT_183252f20 * -0x3b379b69cbd7090d & 0xfffffffffe000000;
  _DAT_183253240 = _DAT_1832532c8 ^ uVar6 ^ 0x20;
  _DAT_1832531c8 = (_DAT_1832531c8 ^ uVar6) + 0x20 ^ 0x2cec23e80460a055;
  _DAT_183252f10 = (_DAT_183252f10 * -0x35e030250a1dfdc1 ^ _DAT_1832531c8) + uVar6;
  _DAT_183253010 = _DAT_183252f10 ^ _DAT_1832531c8;
  _DAT_183252fb0 = 0x20;
  uVar6 = (~_DAT_183253190 + 0xe55931c783755419) *
          ((_DAT_183252f28 ^ 0x84222305) + (ulonglong)((uint)_DAT_183252f28 & 0x84222305) * 2);
  uVar6 = (uVar6 | _DAT_183252f68) + (uVar6 & _DAT_183252f68);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183252ff8 = func_0x000189f293a0((uVar6 | 0xe55931c70757771d) + (uVar6 & 0xe55931c70757771d));
  uVar6 = (_DAT_183252ff8 ^ 0xab2638f06eaa8300) * -0x1ac6461910c9fc85;
  uVar8 = uVar6 >> 1 | uVar6;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar6 ^ 0x20;
  _DAT_183253158 = _DAT_183253260 ^ uVar6 ^ 0xe55931c783755438;
  _DAT_183252fb8 = (_DAT_183252fb8 ^ uVar6) + 0xe55931c783755438 ^ 0xe31b325c67e81729;
  _DAT_183253020 = (_DAT_183253020 * -0x9ad754e8d9ae4fb ^ _DAT_183252fb8) + uVar6;
  _DAT_183253180 = _DAT_183253020 ^ _DAT_183252fb8;
  _DAT_183253018 = 0xe55931c783755438;
  _DAT_1832530e8 = func_0x000189f293a0(_DAT_183252f50 ^ 0x23c49d788dd1dda4);
  uVar6 = _DAT_1832530e8 ^ 0xbb57be2e84b0eef8;
  _DAT_183253018 = _DAT_1832532b0 ^ uVar6 ^ 0x20;
  _DAT_183253160 = (_DAT_183253160 ^ uVar6) + 0x20 ^ 0x7ec5e1c37480aee7;
  _DAT_1832530d8 = (_DAT_1832530d8 * -0x204290b7f9029a79 ^ _DAT_183253160) + uVar6;
  _DAT_1832532f8 = _DAT_1832530d8 ^ _DAT_183253160;
  _DAT_183253240 = 0x20;
  uVar6 = (_DAT_183253180 ^ _DAT_18158d370) + _DAT_183253088 + 0xf9bbf71f6ff4983b;
  uVar8 = (_DAT_183253088 ^ _UNK_18158d378) + _DAT_183253180 + 0x5fb948fd12837281;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183253180 ^ _DAT_18158d370;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183253088 ^ _UNK_18158d378;
  _DAT_183253248 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183253180 + 0x5fb948fd12837281) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183253088 + 0xf9bbf71f6ff4983b));
  uVar6 = _DAT_183253248 ^ 0xa002b702e954891e;
  _DAT_183253128 = _DAT_183253170 ^ uVar6 ^ 0x5975401cfe5a2d9f;
  _DAT_183252fd0 = (_DAT_183252fd0 ^ uVar6) + 0x5975401cfe5a2d9f ^ 0xa0be427b0a9a7d84;
  _DAT_1832530c0 = (_DAT_1832530c0 * 0x3ce5c944bfccf209 ^ _DAT_183252fd0) + uVar6;
  _DAT_1832530e8 = _DAT_1832530c0 ^ _DAT_183252fd0;
  _DAT_1832530a8 = 0x5975401cfe5a2d9f;
  _DAT_183253178 = func_0x000189f293a0(_DAT_183252fe0 + 0xa11601ca797d2fa1 ^ 0x5e);
  uVar6 = (_DAT_183253178 ^ 0xffbbfffffbd7fb9f) << 0x26 |
          (_DAT_183253178 ^ 0xffbbfffffbd7fb9f) >> 0x1a;
  _DAT_183253230 = (_DAT_183253230 ^ uVar6) + 0xa602bfe2f955c99f ^ 0x6c98db4942e62a6d;
  _DAT_183253128 = (_DAT_183253128 * 0x5b6b732f4621c2f ^ _DAT_183253230) + uVar6;
  _DAT_1832531c0 = _DAT_183253128 ^ _DAT_183253230;
  _DAT_183253210 = 0xa602bfe2f955c99f;
  _DAT_183252f30 = func_0x000189f293a0(_DAT_183252fc8 + 0xe166018376a52e65U ^ 0xb2);
  uVar6 = (_DAT_183252f30 ^ 0xffbbfffffbd7fb9f) * 0x4f74aff7e963f111;
  uVar6 = uVar6 << 0x31 | uVar6 >> 0xf;
  _DAT_1832532d0 = (_DAT_1832532d0 ^ uVar6) + 0x59b9401d02823200 ^ 0xb2bd1b0210806f13;
  _DAT_183253268 = (_DAT_183253268 * -0x7c21ae90395148b1 ^ _DAT_1832532d0) + uVar6;
  _DAT_1832531a0 = _DAT_183253268 ^ _DAT_1832532d0;
  _DAT_1832531f0 = 0x59b9401d02823200;
  _DAT_183252f58 = func_0x000189f293a0(_DAT_183252fb8 ^ 0x488630179a391330);
  _DAT_1832530f0 = _DAT_183253100 ^ _DAT_183252f58 ^ 0x5975401cfe5a2d9f;
  _DAT_1832531e0 = (_DAT_1832531e0 ^ _DAT_183252f58) + 0x5975401cfe5a2d9f ^ 0x21e173d76795a46e;
  _DAT_183253200 = (_DAT_183253200 * -0x7f23a0aae093a7b5 ^ _DAT_1832531e0) + _DAT_183252f58;
  _DAT_183253298 = _DAT_183253200 ^ _DAT_1832531e0;
  _DAT_183253158 = 0x5975401cfe5a2d9f;
  uVar6 = (_DAT_183253098 ^ _DAT_18158d380) + _DAT_183252f58 + 0x5975401c7a780eba;
  uVar8 = (_DAT_183252f58 ^ _UNK_18158d388) + _DAT_183253098 + 0x5975401cfe5a2d9f;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183253098 ^ _DAT_18158d380;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183252f58 ^ _UNK_18158d388;
  _DAT_183252fe8 =
       func_0x000189f293a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183253098 + 0x5975401cfe5a2d9f) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183252f58 + 0x5975401c7a780eba));
  _DAT_183253040 = _DAT_183252fe8 << 0x2c | _DAT_183252fe8 >> 0x14;
  _DAT_183252fa0 = _DAT_183252fa0 ^ _DAT_183253040 ^ 0x975791ddcfd11ea8;
  _DAT_1832530b0 = (_DAT_1832530b0 * 0x4fbe975ede5f3655 ^ _DAT_183252fa0) + _DAT_183253040;
  _DAT_183253018 = _DAT_1832530b0 ^ _DAT_183252fa0;
  _DAT_1832531e8 = 0;
  uVar6 = ((_DAT_183253068 ^ 0x84222305) + (ulonglong)((uint)_DAT_183253068 & 0x84222305) * 2) *
          -_DAT_1832531b8;
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183252f58 = func_0x000189f293a0((uVar6 | 0x84222305) + (ulonglong)((uint)uVar6 & 0x84222305))
  ;
  uVar6 = _DAT_183252f58 >> 1 | _DAT_183252f58;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183252f58) & 0xffffffff80000000;
  _DAT_183252f78 = _DAT_183253290 ^ uVar6 ^ 0x20;
  _DAT_183253248 = (_DAT_183253248 ^ uVar6) + 0x20 ^ 0xb29adbac99acd147;
  _DAT_183253088 = (_DAT_183253088 * 0x4eca23284751666d ^ _DAT_183253248) + uVar6;
  _DAT_183252f68 = _DAT_183253088 ^ _DAT_183253248;
  _DAT_183253030 = 0x20;
  switch(uVar3 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9f155ad (image 189f155ad) =====

void FUN_189f155ad(void)

{
  return;
}



// ===== continuation @ rva 9effb8f (image 189effb8f) =====

undefined8 FUN_189effb8f(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva 9eff62f (image 189eff62f) =====

void FUN_189eff62f(void)

{
  return;
}



// ===== continuation @ rva 9eff45b (image 189eff45b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff45b(void)

{
  FUN_190dd72e0();
  (*_DAT_18158b878)();
  return;
}



// ===== continuation @ rva 9eff637 (image 189eff637) =====

void FUN_189eff637(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9eff572 (image 189eff572) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff572(void)

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



// ===== continuation @ rva 9eff529 (image 189eff529) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff529(void)

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



// ===== continuation @ rva 9eff607 (image 189eff607) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff607(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18158b8d8)();
  return;
}



// ===== continuation @ rva 9eff624 (image 189eff624) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff624(void)

{
  (*_DAT_18158b8b8)();
  return;
}



// ===== continuation @ rva 9eff48d (image 189eff48d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff48d(void)

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



// ===== continuation @ rva 9eff4e1 (image 189eff4e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff4e1(void)

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



// ===== continuation @ rva 9eff5e6 (image 189eff5e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff5e6(void)

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



// ===== continuation @ rva 9eff4ae (image 189eff4ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff4ae(void)

{
  FUN_190de3220();
  (*_DAT_18158b888)();
  return;
}



// ===== continuation @ rva 9eff34b (image 189eff34b) =====

void FUN_189eff34b(void)

{
  return;
}



// ===== continuation @ rva 9eff0da (image 189eff0da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff0da(void)

{
  FUN_190ddce00();
  (*_DAT_18158b798)();
  return;
}



// ===== continuation @ rva 9eff340 (image 189eff340) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff340(undefined8 param_1)

{
  undefined8 in_stack_00000030;
  
  (*_DAT_18158b758)(param_1,in_stack_00000030);
  return;
}



// ===== continuation @ rva 9eff31f (image 189eff31f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff31f(void)

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



// ===== continuation @ rva 9eff2f7 (image 189eff2f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff2f7(void)

{
  FUN_190dd72e0();
  (*_DAT_18158b6f8)();
  return;
}



// ===== continuation @ rva 9eff29b (image 189eff29b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff29b(void)

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



// ===== continuation @ rva 9eff246 (image 189eff246) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eff246(void)

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



// ===== continuation @ rva 9eff2cd (image 189eff2cd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff2cd(void)

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



// ===== continuation @ rva 9eff353 (image 189eff353) =====

void FUN_189eff353(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9eff20c (image 189eff20c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff20c(void)

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



// ===== continuation @ rva 9eff16c (image 189eff16c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189eff16c(void)

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



