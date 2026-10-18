// ===== continuation @ rva a93f720 (image 18a93f720) =====

void FUN_18a93f720(void)

{
  return;
}



// ===== continuation @ rva a93f56d (image 18a93f56d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f56d(void)

{
  FUN_190ddfc90();
  (*_DAT_1818c94f8)();
  return;
}



// ===== continuation @ rva a93f700 (image 18a93f700) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f700(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818c9508)();
  return;
}



// ===== continuation @ rva a93f613 (image 18a93f613) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f613(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1818c9508)();
  return;
}



// ===== continuation @ rva a93f728 (image 18a93f728) =====

void FUN_18a93f728(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a93f688 (image 18a93f688) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f688(void)

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



// ===== continuation @ rva a93f5c4 (image 18a93f5c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f5c4(void)

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



// ===== continuation @ rva a93f660 (image 18a93f660) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f660(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c94b8)();
  return;
}



// ===== continuation @ rva a93f6dc (image 18a93f6dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f6dc(void)

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



// ===== continuation @ rva a93f5a0 (image 18a93f5a0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f5a0(void)

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



// ===== continuation @ rva a9ab94e (image 18a9ab94e) =====

void FUN_18a9ab94e(void)

{
  return;
}



// ===== continuation @ rva a98b4bf (image 18a98b4bf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a98b515 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a98b4bf(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a9a8f6b (image 18a9a8f6b) =====

void thunk_FUN_18a98d5dd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva a9914d5 (image 18a9914d5) =====

void thunk_FUN_18a98b647(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva a990330 (image 18a990330) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a990330(void)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_R12D;
  ulonglong unaff_R14;
  uint unaff_XMM6_Da;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int in_stack_000000c0;
  
  uVar2 = ((_DAT_183264340 ^ in_RAX) + (ulonglong)((uint)in_RAX & (uint)_DAT_183264340) * 2) *
          (unaff_R14 - _DAT_183264328);
  uVar2 = (uVar2 | _DAT_183264120) + (uVar2 & _DAT_183264120);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183264188 =
       func_0x00018a9abb60((in_RAX ^ unaff_R14 | uVar2) +
                           (ulonglong)((uint)(in_RAX ^ unaff_R14) & (uint)uVar2));
  uVar2 = (_DAT_183264188 & 0xffffffff) * (ulonglong)_DAT_1818da320 +
          ((_DAT_183264188 & 0xffffffff) * (ulonglong)_DAT_1818da330 +
           (_DAT_183264188 >> 0x20) * (ulonglong)_DAT_1818da320 << 0x20);
  uVar1 = (uint)unaff_R14;
  uVar4 = unaff_R12D & uVar1;
  uVar6 = unaff_R12D ^ uVar1;
  uVar5 = uVar1 ^ unaff_XMM6_Da;
  uVar2 = (uVar2 ^ unaff_R12D) << 7 | uVar2 >> 0x39;
  uVar3 = ((ulonglong)uVar5 * (ulonglong)_DAT_1818da3f0 + _DAT_1818da400 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_1818da3e0 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_1818da3d0 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_1818da3c0 +
          ((ulonglong)(unaff_R12D | uVar1) * (ulonglong)_DAT_1818da3b0 << 0x20) +
          (ulonglong)(unaff_R12D | uVar1) * (ulonglong)_DAT_1818da3a0 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_1818da390 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_1818da380 +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1818da370 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1818da360 +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_1818da350 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_1818da340 +
          (-(((ulonglong)uVar5 * (ulonglong)_DAT_1818da4c0 + _DAT_1818da4d0 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_1818da4b0) -
          (((ulonglong)uVar6 * (ulonglong)_DAT_1818da4a0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_1818da490 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_1818da480 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_1818da470 +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1818da460 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1818da450 +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_1818da440 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_1818da430)) + 0x92e840eb99441fe3;
  _DAT_183264130 = _DAT_183264378 ^ uVar2 ^ uVar3;
  _DAT_1832642b8 = (_DAT_1832642b8 ^ uVar2) + uVar3 ^ 0xa506c414a24fb5a4;
  _DAT_183264220 = (_DAT_183264220 * 0x4dd3055a414fe25f ^ _DAT_1832642b8) + uVar2 ^ _DAT_1832642b8;
  _DAT_183264268 = uVar3 & 0xffffffff;
  switch((int)uVar3 < in_stack_000000c0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a9aae27 (image 18a9aae27) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9aae27(void)

{
  undefined1 uVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x538))();
  (**(code **)(*unaff_RSI + 0x570))();
  (**(code **)(*unaff_RSI + 0x570))();
  uVar1 = FUN_190dc1be0(0x94a,&stack0x00000118);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a9ab9ba (image 18a9ab9ba) =====

void FUN_18a9ab9ba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva a991f99 (image 18a991f99) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a991f99(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000068;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000068 < 0 || iVar1 <= in_stack_00000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a992438 (image 18a992438) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a992470 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a992438(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a9925fe (image 18a9925fe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a992638 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a9925fe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a9925c0 (image 18a9925c0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a9925f6 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a9925c0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a948ca8 (image 18a948ca8) =====

void FUN_18a948ca8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar1 = (**(code **)(*unaff_R12 + 0x558))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00018a948cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818cc1d0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva a948c53 (image 18a948c53) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a948c8a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a948c53(void)

{
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R12 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a95f4b2 (image 18a95f4b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a95f4b2(longlong param_1)

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



// ===== continuation @ rva a95f35f (image 18a95f35f) =====

void FUN_18a95f35f(void)

{
  return;
}



// ===== continuation @ rva a948d21 (image 18a948d21) =====

void FUN_18a948d21(void)

{
  longlong unaff_RBP;
  undefined8 unaff_R12;
  uint unaff_R14D;
  
  *(undefined8 *)(unaff_RBP + 0x30) = unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x00018a948d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818cc370 + (ulonglong)(unaff_R14D >> 0x1f) * 8))
            ((ulonglong)(unaff_R14D >> 0x1f),&UNK_1818cc370,unaff_RBP + -0x3b);
  return;
}



// ===== continuation @ rva a95420b (image 18a95420b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a95420b(void)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar6;
  ulonglong uVar7;
  longlong *unaff_R12;
  undefined4 unaff_R14D;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 unaff_XMM6 [16];
  ulonglong unaff_XMM11_Qa;
  ulonglong unaff_XMM11_Qb;
  ulonglong unaff_XMM13_Qa;
  ulonglong unaff_XMM13_Qb;
  ulonglong unaff_XMM14_Qa;
  ulonglong unaff_XMM14_Qb;
  ulonglong unaff_XMM15_Qa;
  ulonglong unaff_XMM15_Qb;
  
  *(undefined4 *)(unaff_RBP + 0x78) = unaff_R14D;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_ESI;
  lVar3 = (**(code **)(*unaff_R12 + 0x6f0))();
  *(int *)(unaff_RBP + 0x58) = (int)*(char *)(lVar3 + *(int *)(unaff_RBP + 0x60));
  (**(code **)(*unaff_R12 + 0x6f8))();
  uVar6 = *(uint *)(unaff_RBP + 0x50);
  uVar1 = *(uint *)(unaff_RBP + 0x58);
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar1 ^ 0x84222325;
  auVar8._8_4_ = uVar6;
  auVar8._12_4_ = 0;
  auVar9 = pshufb(auVar8 ^ unaff_XMM6,_DAT_1800170c0);
  uVar7 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar7 + _DAT_183262a40;
  if (auVar9._4_4_ < 0) {
    uVar4 = _DAT_183262980 ^ uVar7;
  }
  _DAT_183262808 = func_0x00018a9717a0(SUB161(auVar8 ^ unaff_XMM6,5) ^ uVar4);
  uVar7 = (ulonglong)uVar1 * (ulonglong)uVar6 ^ _DAT_183262808;
  uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar7 ^
          (ulonglong)uVar6;
  uVar6 = uVar6 & uVar1;
  _DAT_183262950 = (ulonglong)uVar6;
  _DAT_1832628d0 = (_DAT_1832628d0 ^ uVar4) + _DAT_183262950 ^ 0x64f447d1d96826fc;
  _DAT_183262898 = (_DAT_183262898 * -0x4b99985c477cd175 ^ _DAT_1832628d0) + uVar4;
  _DAT_183262b00 = _DAT_183262898 ^ _DAT_1832628d0;
  *(uint *)(unaff_RBP + 0x50) = uVar6;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
  lVar5 = _DAT_183262b68 + 0xf8f4f18;
  lVar3 = _DAT_1832627a0 + 0x3b75f224;
  uVar4 = (_DAT_1832627a0 ^ _DAT_1818cc670) + lVar5;
  uVar7 = (_DAT_183262b68 ^ _UNK_1818cc678) + lVar3;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832627a0 ^ _DAT_1818cc670;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183262b68 ^ _UNK_1818cc678;
  *(int *)(unaff_RBP + 0x40) = (int)*(undefined8 *)(unaff_RBP + 0x50);
  _DAT_183262ab0 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - lVar3 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  _DAT_183262960 = (_DAT_183262960 ^ _DAT_183262978) + 0xbbfdfe3d ^ 0x9352ba3b6da8caca;
  _DAT_183262b30 = (_DAT_183262b30 * 0x5bd2088338b0ec15 ^ _DAT_183262960) + _DAT_183262978;
  _DAT_1832629c0 = _DAT_183262b30 ^ _DAT_183262960;
  _DAT_183262858 = 0xbbfdfe3d;
  uVar4 = (_DAT_183262b00 ^ unaff_XMM13_Qa) + _DAT_183262ab8 + 0x78cc9223;
  uVar7 = (_DAT_183262ab8 ^ unaff_XMM13_Qb) + _DAT_183262b00 + 0x2baabfa6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183262b00 ^ unaff_XMM13_Qa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183262ab8 ^ unaff_XMM13_Qb;
  _DAT_183262c00 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183262b00 + 0x2baabfa6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262ab8 + 0x78cc9223));
  uVar4 = (_DAT_183262c00 << 0x19 | _DAT_183262c00 >> 0x27) * 0x2ed0ac86eaa2f007;
  _DAT_183262738 = (_DAT_183262738 ^ uVar4) + 0xd7440ea0 ^ 0xf8bbdca84230c4fe;
  _DAT_1832627d0 = (_DAT_1832627d0 * 0x3d78694c5859c4b9 ^ _DAT_183262738) + uVar4;
  _DAT_183262718 = _DAT_1832627d0 ^ _DAT_183262738;
  _DAT_1832629b8 = 0xd7440ea0;
  uVar4 = (unaff_XMM14_Qa ^ 0xd7440ea0) + _DAT_183262710 + 0x8422239a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ unaff_XMM14_Qa ^ 0xd7440ea0;
  uVar7 = ((longlong)(&UNK_18b805358 + (_DAT_183262710 ^ unaff_XMM14_Qb)) * 0x2000 |
          (ulonglong)(&UNK_18b805358 + (_DAT_183262710 ^ unaff_XMM14_Qb)) >> 0x33) ^
          _DAT_183262710 ^ unaff_XMM14_Qb;
  _DAT_1832627d0 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - 0x18b805358 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262710 + 0x8422239a));
  uVar4 = (_DAT_1832627d0 ^ 0xb43c44bf) & 0x7fffffffffffffff;
  _DAT_183262860 = _DAT_1832629c8 ^ uVar4 ^ 0xb43c4577;
  _DAT_183262cc0 = (_DAT_183262cc0 ^ uVar4) + 0xb43c4577 ^ 0xdca4dc9e37d38abd;
  _DAT_183262a38 = (_DAT_183262a38 * -0x7fe18b0f2ca9623b ^ _DAT_183262cc0) + uVar4;
  _DAT_183262818 = _DAT_183262a38 ^ _DAT_183262cc0;
  _DAT_1832627f8 = 0xb43c4577;
  _DAT_183262b58 = func_0x00018a9717a0(_DAT_1832627c0 + 0xc5000aea003affU ^ 0x20);
  uVar4 = _DAT_183262b58 - (_DAT_183262b58 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = _DAT_183262b58 ^ 0xb43c4577 ^ (ulonglong)((uint)bVar2 + (uint)bVar2);
  _DAT_183262aa8 = _DAT_1832629b0 ^ uVar4 ^ 0x1000000bf;
  _DAT_1832628a0 = (_DAT_1832628a0 ^ uVar4) + 0x1000000bf ^ 0x4a795baa5aa40367;
  _DAT_183262980 = (_DAT_183262980 * -0x6eae8ddeec706fad ^ _DAT_1832628a0) + uVar4;
  _DAT_183262b38 = _DAT_183262980 ^ _DAT_1832628a0;
  _DAT_183262740 = 0xbf;
  _DAT_183262798 = func_0x00018a9717a0(_DAT_183262a60 ^ 0xffb2ffa5c600ad67);
  uVar4 = ((_DAT_183262798 ^ 0x3f9c96ff) << 0x2c | (_DAT_183262798 ^ 0x3f9c96ff) >> 0x14) ^ 0xbf;
  _DAT_183262b88 = _DAT_183262868 ^ uVar4 ^ 0x3f9c971b;
  _DAT_183262810 = (_DAT_183262810 ^ uVar4) + 0x3f9c971b ^ 0xb9f31c8e4b890c9d;
  _DAT_183262bd0 = (_DAT_183262bd0 * 0x4d5f24acf209b2b1 ^ _DAT_183262810) + uVar4;
  _DAT_183262770 = _DAT_183262bd0 ^ _DAT_183262810;
  _DAT_183262c48 = 0x3f9c971b;
  _DAT_183262868 = func_0x00018a9717a0(_DAT_1832627b8 ^ 0xd4ff8585ff5cbc);
  uVar4 = ((_DAT_183262868 ^ 0xffffffbf) & 0x7ff) << 0x34 | (_DAT_183262868 ^ 0xffffffbf) >> 0xc;
  _DAT_183262af0 = _DAT_1832629f8 ^ uVar4 ^ 0x1000000bf;
  _DAT_183262ce8 = (_DAT_183262ce8 ^ uVar4) + 0x1000000bf ^ 0x66a2b14cad1aba80;
  _DAT_183262748 = (_DAT_183262748 * -0x55abf3a381733277 ^ _DAT_183262ce8) + uVar4;
  _DAT_183262890 = _DAT_183262748 ^ _DAT_183262ce8;
  _DAT_183262cc8 = 0xbf;
  _DAT_183262818 = func_0x00018a9717a0(_DAT_183262be0 ^ 0xff9b00aecfff915d);
  uVar4 = _DAT_183262818 * 0x15abf34eee5f000 | _DAT_183262818 * 0x430015abf34eee5f >> 0x34;
  _DAT_183262868 = _DAT_183262bb8 ^ uVar4 ^ 0x73508769;
  _DAT_1832628b0 = (_DAT_1832628b0 ^ uVar4) + 0x73508769 ^ 0x5f673249106fa598;
  _DAT_183262770 = (_DAT_183262770 * -0x91db6fbd19209d3 ^ _DAT_1832628b0) + uVar4;
  _DAT_1832629c0 = _DAT_183262770 ^ _DAT_1832628b0;
  _DAT_1832628e0 = 0x73508769;
  _DAT_1832627b8 = func_0x00018a9717a0(_DAT_183262ad0 ^ 0xff32ff2797ff7676);
  uVar4 = _DAT_1832627b8 & 0xffffffffffe00000;
  _DAT_183262740 = _DAT_183262998 ^ uVar4 ^ 0x193420cdd;
  _DAT_1832627d0 = (_DAT_1832627d0 ^ uVar4) + 0x193420cdd ^ 0x9741e53c6e0b7a7b;
  _DAT_183262838 = (_DAT_183262838 * -0x3fb5c6fecf5c4a09 ^ _DAT_1832627d0) + uVar4;
  _DAT_1832628b8 = _DAT_183262838 ^ _DAT_1832627d0;
  _DAT_183262ce8 = 0x93420cdd;
  _DAT_1832627a8 = func_0x00018a9717a0(_DAT_1832629a0 ^ 0xff4d009778008a13);
  uVar4 = _DAT_1832627a8 ^ 0xfffdfebd;
  uVar7 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4;
  _DAT_183262c20 = (_DAT_183262c20 ^ uVar4) + 0x6cb9f09d ^ 0x785419eaba240946;
  _DAT_183262bd0 = (_DAT_183262bd0 * 0x4e843a12651edba7 ^ _DAT_183262c20) + uVar4;
  _DAT_183262b90 = _DAT_183262bd0 ^ _DAT_183262c20;
  _DAT_1832629c8 = 0x6cb9f09d;
  uVar4 = (_DAT_183262cc0 ^ unaff_XMM11_Qa) + _DAT_183262bd0 + 0x3fdfdd18;
  uVar7 = (_DAT_183262bd0 ^ unaff_XMM11_Qb) + _DAT_183262cc0 + 0xd7440ea0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183262cc0 ^ unaff_XMM11_Qa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183262bd0 ^ unaff_XMM11_Qb;
  _DAT_183262b20 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183262cc0 + 0xd7440ea0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262bd0 + 0x3fdfdd18));
  _DAT_183262c28 = (_DAT_183262c28 ^ _DAT_183262c88 & 0x7ffffffff) + 0x93440e20 ^ 0xde7b0562acb4d0bb
  ;
  _DAT_183262c88 =
       (_DAT_183262c88 * -0x68d42bb264d073a5 ^ _DAT_183262c28) + (_DAT_183262c88 & 0x7ffffffff);
  _DAT_183262ba0 = _DAT_183262c88 ^ _DAT_183262c28;
  _DAT_183262b80 = 0x93440e20;
  uVar4 = (~_DAT_183262bd0 + 0x93420cde) *
          ((_DAT_1832628f8 ^ 0x17602ff8) + (ulonglong)((uint)_DAT_1832628f8 & 0x17602ff8) * 2);
  uVar4 = (uVar4 | _DAT_183262760) + (uVar4 & _DAT_183262760);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183262738 = func_0x00018a9717a0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_183262ae0 = _DAT_183262738 ^ 0x54b4ebd0e3db7a14;
  uVar4 = _DAT_183262ae0 >> 1 | _DAT_183262ae0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_183262ae0 =
       (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       _DAT_183262ae0;
  uVar4 = _DAT_183262ae0 - (_DAT_183262ae0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_183262ae0 =
       (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
       _DAT_183262ae0;
  _DAT_183262878 = _DAT_183262878 ^ _DAT_183262ae0 ^ 0x9f096ab01601f5e2;
  _DAT_183262ac0 = (_DAT_183262ac0 * -0x3d28127fb7d4468b ^ _DAT_183262878) + _DAT_183262ae0;
  _DAT_183262c28 = _DAT_183262ac0 ^ _DAT_183262878;
  _DAT_183262cf8 = 0;
  uVar4 = (_DAT_183262b08 ^ 0x8422239a) + _DAT_183262888 + 0x8422239a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183262b08 ^ 0x8422239a;
  uVar7 = ((_DAT_183262888 + _DAT_183262b08) * 0x2000 | _DAT_183262888 + _DAT_183262b08 >> 0x33) ^
          _DAT_183262888;
  _DAT_183262c68 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183262b08 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262888 + 0x8422239a));
  uVar4 = _DAT_183262c68 >> 1 | _DAT_183262c68;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183262c68;
  _DAT_183262ac0 = _DAT_183262a98 ^ uVar4 ^ 0xbf;
  _DAT_183262710 = (_DAT_183262710 ^ uVar4) + 0xbf ^ 0x4db5962a092ad225;
  _DAT_183262738 = (_DAT_183262738 * 0x3a9051b1e1fe9fb3 ^ _DAT_183262710) + uVar4;
  _DAT_1832628a0 = _DAT_183262738 ^ _DAT_183262710;
  _DAT_1832629f8 = 0xbf;
  _DAT_183262b80 = func_0x00018a9717a0(_DAT_183262a90 ^ 0xffe1ff4098ffdf94);
  _DAT_183262b30 = (_DAT_183262b30 ^ _DAT_183262b80 ^ 0xbbfdfe3d) + 0x440201c2 ^ 0x4f4115664b2ec230;
  _DAT_183262858 =
       (_DAT_183262858 * -0x40740c90504ee4ff ^ _DAT_183262b30) + (_DAT_183262b80 ^ 0xbbfdfe3d);
  _DAT_183262c50 = _DAT_183262858 ^ _DAT_183262b30;
  _DAT_183262c98 = 0x440201c2;
  uVar4 = (_DAT_1832628f0 ^ unaff_XMM15_Qa) + _DAT_183262760 + 0x3fdfdd18;
  uVar7 = (_DAT_183262760 ^ unaff_XMM15_Qb) + _DAT_1832628f0 + 0x440201c2;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832628f0 ^ unaff_XMM15_Qa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183262760 ^ unaff_XMM15_Qb;
  _DAT_183262c18 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832628f0 + 0x440201c2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262760 + 0x3fdfdd18));
  _DAT_183262920 = _DAT_183262920 ^ _DAT_183262c18 ^ 0x31f0f0cee0f0e6f8 ^ 0x60105878a64f7d56;
  _DAT_183262998 =
       (_DAT_183262998 * -0x15561bc42a8752eb ^ _DAT_183262920) +
       (_DAT_183262c18 ^ 0x31f0f0cee0f0e6f8);
  _DAT_183262a50 = _DAT_183262998 ^ _DAT_183262920;
  _DAT_183262ce8 = 0;
  uVar4 = ((_DAT_183262b58 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183262b58 & 0x8422239a) * 2) *
          -_DAT_183262a28;
  uVar4 = (uVar4 | _DAT_183262cf0) + (uVar4 & _DAT_183262cf0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183262cb8 = func_0x00018a9717a0((uVar4 | 0x8422239a) + (ulonglong)((uint)uVar4 & 0x8422239a))
  ;
  uVar4 = (ulonglong)((uint)_DAT_183262cb8 & 0xbf) ^ 0xbf;
  _DAT_183262708 = (_DAT_183262708 ^ uVar4) + 0xbf ^ 0x7affbe4516146bfb;
  _DAT_183262b90 = (_DAT_183262b90 * 0x6ee5f3b18128eef5 ^ _DAT_183262708) + uVar4;
  _DAT_183262c00 = _DAT_183262b90 ^ _DAT_183262708;
  _DAT_183262758 = 0xbf;
  _DAT_183262ae0 = func_0x00018a9717a0(_DAT_183262c50 ^ 0xffdeff83dd0021d8);
  _DAT_183262950 = _DAT_183262950 ^ _DAT_183262ae0 ^ 0xa467eaa2d70af16e;
  _DAT_183262868 = (_DAT_183262868 * -0x592a4bee54a0af9 ^ _DAT_183262950) + _DAT_183262ae0;
  _DAT_183262728 = _DAT_183262868 ^ _DAT_183262950;
  _DAT_183262ce8 = 0;
  uVar4 = ((_DAT_1832629d0 ^ 0x8422239a) + (ulonglong)((uint)_DAT_1832629d0 & 0x8422239a) * 2) *
          -_DAT_183262c48;
  uVar4 = (uVar4 | _DAT_1832628e8) + (uVar4 & _DAT_1832628e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183262ad8 = func_0x00018a9717a0((uVar4 | 0x8422239a) + (ulonglong)((uint)uVar4 & 0x8422239a))
  ;
  _DAT_183262848 = _DAT_183262b48 ^ _DAT_183262ad8 ^ 0xbf;
  _DAT_1832627a8 = (_DAT_1832627a8 ^ _DAT_183262ad8) + 0xbf ^ 0xded2e1a06d616bba;
  _DAT_183262aa8 = (_DAT_183262aa8 * -0x50359927dec755d5 ^ _DAT_1832627a8) + _DAT_183262ad8;
  _DAT_183262c78 = _DAT_183262aa8 ^ _DAT_1832627a8;
  _DAT_183262c18 = 0xbf;
  switch(0xbf < (int)uVar6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a95f061 (image 18a95f061) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a95f061(void)

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



// ===== continuation @ rva a94ccd4 (image 18a94ccd4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a94ccd4(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong unaff_R14;
  ulonglong uVar2;
  
  uVar1 = (~in_RAX + 0xa9) * ((param_1 ^ 0x8422238a) + (ulonglong)((uint)param_1 & 0x8422238a) * 2);
  uVar1 = (uVar1 | _DAT_183262b28) + (uVar1 & _DAT_183262b28);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262cd8 = func_0x00018a9717a0((uVar1 | 0x84222322) + (ulonglong)((uint)uVar1 & 0x84222322))
  ;
  _DAT_1832628a8 = (_DAT_1832628a8 ^ _DAT_183262cd8 & 0x7fffffffff) + 0xaf ^ 0xfa5a318c8252f814;
  _DAT_183262838 =
       (_DAT_183262838 * 0x24bc103df3daddcd ^ _DAT_1832628a8) + (_DAT_183262cd8 & 0x7fffffffff);
  _DAT_1832628c0 = _DAT_183262838 ^ _DAT_1832628a8;
  _DAT_183262ac8 = 0xaf;
  uVar1 = (~_DAT_1832628b8 + 0xea) *
          ((_DAT_183262820 ^ 0x84222325) + (ulonglong)((uint)_DAT_183262820 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183262998) + (uVar1 & _DAT_183262998);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262a68 = func_0x00018a9717a0((uVar1 | 0x842223cc) + (ulonglong)((uint)uVar1 & 0x842223cc))
  ;
  _DAT_183262ab8 = (_DAT_183262ab8 ^ _DAT_183262b58) - 0xe9 ^ 0x84f0d870dbc6f91a;
  _DAT_183262b50 = (_DAT_183262b50 * -0x7b3a2ea491f97e41 ^ _DAT_183262ab8) + _DAT_183262b58;
  _DAT_1832629c0 = _DAT_183262b50 ^ _DAT_183262ab8;
  _DAT_1832629e0 = 0x17;
  uVar1 = (_DAT_183262740 ^ _DAT_180f833a0) + _DAT_183262a70 + 0x8422233c;
  uVar2 = (_DAT_183262a70 ^ _UNK_180f833a8) + _DAT_183262740 + 0x17;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183262740 ^ _DAT_180f833a0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183262a70 ^ _UNK_180f833a8;
  _DAT_183262740 =
       func_0x00018a9717a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183262740 + 0x17) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183262a70 + 0x8422233c));
  uVar1 = _DAT_183262740 ^ 0x19;
  _DAT_183262a70 = _DAT_183262aa0 ^ uVar1 ^ 0x30;
  _DAT_183262b78 = (_DAT_183262b78 ^ uVar1) + 0x30 ^ 0x5450eeb7b2bdeef;
  _DAT_183262918 = (_DAT_183262918 * -0x74056c77b3f333ef ^ _DAT_183262b78) + uVar1;
  _DAT_183262728 = _DAT_183262918 ^ _DAT_183262b78;
  _DAT_183262928 = 0x30;
  uVar1 = (~_DAT_1832627a8 + 0x12) *
          ((_DAT_1832627e8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832627e8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183262b18) + (uVar1 & _DAT_183262b18);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832627a0 = func_0x00018a9717a0((uVar1 | 0x84222334) + (ulonglong)((uint)uVar1 & 0x84222334))
  ;
  uVar1 = _DAT_1832627a0 >> 1 | (ulonglong)((_DAT_1832627a0 & 1) != 0) << 0x3f;
  _DAT_183262a50 = (_DAT_183262a50 ^ uVar1) - 0x11 ^ 0x94d8ad43ce17364d;
  _DAT_1832627b8 = (_DAT_1832627b8 * -0x1c74b4a0a8cf6573 ^ _DAT_183262a50) + uVar1;
  _DAT_1832628a8 = _DAT_1832627b8 ^ _DAT_183262a50;
  _DAT_183262af8 = 0xef;
  uVar1 = (~_DAT_183262a20 + 0x12) *
          ((_DAT_183262cc8 ^ 0x84222315) + (ulonglong)((uint)_DAT_183262cc8 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_183262a60) + (uVar1 & _DAT_183262a60);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262ca0 = func_0x00018a9717a0((uVar1 | 0x84222304) + (ulonglong)((uint)uVar1 & 0x84222304))
  ;
  uVar1 = _DAT_183262ca0 >> 1 | _DAT_183262ca0;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = 0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183262ca0;
  _DAT_183262740 = _DAT_183262890 ^ uVar1 ^ 0x41;
  _DAT_1832629c8 = (_DAT_1832629c8 ^ uVar1) + 0x41 ^ 0xb8a985ddb09020ed;
  _DAT_183262b20 = (_DAT_183262b20 * -0x64aae7534f16d569 ^ _DAT_1832629c8) + uVar1;
  _DAT_183262bd8 = _DAT_183262b20 ^ _DAT_1832629c8;
  _DAT_183262888 = 0x41;
  _DAT_183262c18 = func_0x00018a9717a0(_DAT_183262998 ^ 0x20ff838affe1a8);
  uVar1 = (_DAT_183262c18 & 0xffffffffffff8000) + 0x41;
  _DAT_183262ad8 = _DAT_183262af8 ^ uVar1 ^ 0x130;
  _DAT_183262a98 = (uVar1 ^ _DAT_183262a98) + 0x130 ^ 0x9803faee3e3f2495;
  _DAT_183262878 =
       (_DAT_183262c18 & 0xffffffffffff8000) +
       (_DAT_183262878 * -0xfebb95febd251cf ^ _DAT_183262a98) + 0x41;
  _DAT_1832629b0 = _DAT_183262a98 ^ _DAT_183262878;
  _DAT_183262768 = _DAT_1832629a8 ^ 0x130;
  _DAT_183262c70 = 0x30;
  _DAT_1832629b8 = func_0x00018a9717a0(_DAT_183262798 + 0xffe2ff847dffe1ffU ^ 0xdd);
  uVar1 = (ulonglong)(~(uint)_DAT_1832629b8 & 0x30);
  _DAT_1832629c8 = _DAT_183262910 ^ uVar1 ^ 199;
  _DAT_1832628e0 = (_DAT_1832628e0 ^ uVar1) + 199 ^ 0x46f9c601cabf355e;
  _DAT_183262af8 = (_DAT_183262af8 * -0x3ccb605f5e126443 ^ _DAT_1832628e0) + uVar1;
  _DAT_183262a80 = _DAT_183262af8 ^ _DAT_1832628e0;
  _DAT_183262840 = 199;
  uVar1 = (~_DAT_1832627a0 + 0x6a) *
          ((_DAT_183262b40 ^ 0x842223e2) + (ulonglong)((uint)_DAT_183262b40 & 0x842223e2) * 2);
  uVar1 = (uVar1 | _DAT_183262780) + (uVar1 & _DAT_183262780);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262718 = func_0x00018a9717a0((uVar1 | 0x8422238b) + (ulonglong)((uint)uVar1 & 0x8422238b))
  ;
  uVar1 = _DAT_183262718 ^ 0x519f;
  _DAT_183262c68 = _DAT_183262700 ^ uVar1 ^ 0x130;
  _DAT_183262768 = (_DAT_183262768 ^ uVar1) + 0x130 ^ 0x9dd8f3ed35216b83;
  _DAT_183262ab8 = (_DAT_183262ab8 * -0x1c3e5684016c9d0b ^ _DAT_183262768) + uVar1;
  _DAT_183262838 = _DAT_183262ab8 ^ _DAT_183262768;
  _DAT_183262850 = 0x30;
  uVar1 = (~_DAT_183262a78 + 0x2a) *
          ((_DAT_1832629c8 ^ 0x8422238a) + (ulonglong)((uint)_DAT_1832629c8 & 0x8422238a) * 2);
  uVar1 = (uVar1 | _DAT_183262c30) + (uVar1 & _DAT_183262c30);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832628a0 = func_0x00018a9717a0((uVar1 | 0x842223a3) + (ulonglong)((uint)uVar1 & 0x842223a3))
  ;
  uVar1 = _DAT_1832628a0 << 0x12 | _DAT_1832628a0 >> 0x2e;
  _DAT_1832629a0 = _DAT_183262b18 ^ uVar1 ^ 0xd8;
  _DAT_183262718 = (_DAT_183262718 ^ uVar1) + 0xd8 ^ 0x50305d91b6b73223;
  _DAT_183262858 = (_DAT_183262858 * 0x6b01a6b7a35c01ff ^ _DAT_183262718) + uVar1;
  _DAT_183262970 = _DAT_183262858 ^ _DAT_183262718;
  _DAT_183262788 = 0xd8;
  _DAT_183262b70 = func_0x00018a9717a0(_DAT_183262a18 ^ 0xffdcff7b5d002156);
  uVar1 = (_DAT_183262b70 ^ 0xaf) & 0x7fffffffffffffff;
  _DAT_1832629b8 = (_DAT_1832629b8 ^ uVar1) + 0x29 ^ 0x2eaf46e677d25dd5;
  _DAT_1832627c8 = (_DAT_1832627c8 * -0x1d4ee75398f42e2b ^ _DAT_1832629b8) + uVar1;
  _DAT_183262b80 = _DAT_1832627c8 ^ _DAT_1832629b8;
  _DAT_183262c80 = 0x29;
  uVar1 = (~_DAT_183262c38 + 0x53) *
          ((_DAT_183262b10 ^ 0x842223a3) + (ulonglong)((uint)_DAT_183262b10 & 0x842223a3) * 2);
  uVar1 = (uVar1 | _DAT_183262a70) + (uVar1 & _DAT_183262a70);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262708 = func_0x00018a9717a0((uVar1 | 0x842223f1) + (ulonglong)((uint)uVar1 & 0x842223f1))
  ;
  uVar1 = (ulonglong)(((uint)_DAT_183262708 ^ 0x1000) >> 5 & 0x86);
  _DAT_183262ba8 = _DAT_183262bd8 ^ uVar1 ^ 0xd8;
  _DAT_183262c08 = (_DAT_183262c08 ^ uVar1) + 0xd8 ^ 0xd70d26f864b09c13;
  _DAT_1832629c0 = (_DAT_1832629c0 * 0x3ea681332054646d ^ _DAT_183262c08) + uVar1;
  _DAT_183262a80 = _DAT_1832629c0 ^ _DAT_183262c08;
  _DAT_183262ac0 = 0xd8;
  uVar1 = (~_DAT_183262960 + 0xd9) *
          ((_DAT_183262968 ^ 0x842223fd) + (ulonglong)((uint)_DAT_183262968 & 0x842223fd) * 2);
  uVar1 = (uVar1 | _DAT_183262778) + (uVar1 & _DAT_183262778);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262778 = func_0x00018a9717a0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_1832629f0 = _DAT_1832629f0 ^ _DAT_183262778 ^ 0xf220f0ea2cf8bf85;
  _DAT_183262940 = (_DAT_183262940 * 0x7ed0d13c07ebb737 ^ _DAT_1832629f0) + _DAT_183262778;
  _DAT_1832628d0 = _DAT_183262940 ^ _DAT_1832629f0;
  _DAT_183262a70 = 0;
  _DAT_183262b18 = _DAT_183262778;
  _DAT_183262838 = func_0x00018a9717a0(_DAT_183262870 ^ 0xffe30083f5001d24);
  uVar1 = _DAT_183262838 ^ 0x30;
  _DAT_183262a60 = _DAT_183262b60 ^ uVar1 ^ 0x30;
  _DAT_1832629d8 = (_DAT_1832629d8 ^ uVar1) + 0x30 ^ 0x764ece0b1e71e112;
  _DAT_1832629c8 = (_DAT_1832629c8 * -0x425941ad86cc8847 ^ _DAT_1832629d8) + uVar1;
  _DAT_1832629f0 = _DAT_1832629c8 ^ _DAT_1832629d8;
  _DAT_183262830 = 0x30;
  uVar1 = (_DAT_183262938 ^ _DAT_1803738e0) + _DAT_1832629d0 + 0x8422238a;
  uVar2 = (_DAT_1832629d0 ^ _UNK_1803738e8) + _DAT_183262938 + 0xff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183262938 ^ _DAT_1803738e0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832629d0 ^ _UNK_1803738e8;
  _DAT_183262a68 =
       func_0x00018a9717a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183262938 + 0xff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832629d0 + 0x8422238a));
  _DAT_183262b60 = (_DAT_183262b60 ^ _DAT_183262a68 ^ 0x50) + 0x50 ^ 0x609bbfe25ab06856;
  _DAT_183262830 = (_DAT_183262830 * 0x1a2c98cb6a6c8f8f ^ _DAT_183262b60) + (_DAT_183262a68 ^ 0x50);
  _DAT_183262ab0 = _DAT_183262830 ^ _DAT_183262b60;
  _DAT_183262b50 = 0x50;
  _DAT_183262960 = func_0x00018a9717a0(_DAT_183262b38 + 0x22ff7cc60021ffU ^ 0xda);
  uVar1 = _DAT_183262960 >> 1 | _DAT_183262960;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (ulonglong)
          (~((uint)_DAT_183262960 ^
            (0x40 - (uint)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 8) & 0xaf) * -0x2584537ea1d21585;
  _DAT_183262ce0 = _DAT_183262ce0 ^ uVar1 ^ 0xcbf371328880766f;
  _DAT_183262b50 = (_DAT_183262b50 * 0x4579c2fcb115f1c7 ^ _DAT_183262ce0) + uVar1;
  _DAT_183262a78 = _DAT_183262b50 ^ _DAT_183262ce0;
  _DAT_183262c30 = 0;
  uVar1 = ((_DAT_183262b90 ^ 0x84222315) + (ulonglong)((uint)_DAT_183262b90 & 0x84222315) * 2) *
          -_DAT_183262940;
  uVar1 = (uVar1 | _DAT_183262c10) + (uVar1 & _DAT_183262c10);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832629b8 = func_0x00018a9717a0((uVar1 | 0x84222315) + (ulonglong)((uint)uVar1 & 0x84222315))
  ;
  _DAT_183262c28 = _DAT_183262710 ^ _DAT_1832629b8 ^ 0x30;
  _DAT_183262998 = (_DAT_183262998 ^ _DAT_1832629b8) + 0x30 ^ 0xa10fba65cb0c68f1;
  _DAT_183262a30 = (_DAT_183262a30 * -0x7d6c5cac2e14d823 ^ _DAT_183262998) + _DAT_1832629b8;
  _DAT_183262908 = _DAT_183262a30 ^ _DAT_183262998;
  _DAT_183262a08 = 0x30;
  uVar1 = ((_DAT_183262a60 ^ 0x84222315) + (ulonglong)((uint)_DAT_183262a60 & 0x84222315) * 2) *
          -_DAT_183262b20;
  uVar1 = (uVar1 | _DAT_183262970) + (uVar1 & _DAT_183262970);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262858 = func_0x00018a9717a0((uVar1 | 0x84222315) + (ulonglong)((uint)uVar1 & 0x84222315))
  ;
  uVar1 = _DAT_183262858 ^ 0x30;
  _DAT_183262a48 = _DAT_183262948 ^ uVar1 ^ 0x30;
  _DAT_1832627b8 = (_DAT_1832627b8 ^ uVar1) + 0x30 ^ 0x44c38f2cb20e1d07;
  _DAT_183262ab0 = (_DAT_183262ab0 * 0x41e3768a77098339 ^ _DAT_1832627b8) + uVar1;
  _DAT_183262a60 = _DAT_183262ab0 ^ _DAT_1832627b8;
  _DAT_183262c70 = 0x30;
  *(byte *)(unaff_R14 + -1) = *(byte *)(unaff_RBP + 0x80) | 0x30;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a94e23b (image 18a94e23b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a94e25e */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a94e23b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a95f286 (image 18a95f286) =====

undefined8 thunk_FUN_18a948c8d(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva a973bce (image 18a973bce) =====

void FUN_18a973bce(void)

{
  return;
}



// ===== continuation @ rva a973a25 (image 18a973a25) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a973a25(void)

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



// ===== continuation @ rva a977e12 (image 18a977e12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a977e12(void)

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



// ===== continuation @ rva a976fb9 (image 18a976fb9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a976fb9(void)

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



// ===== continuation @ rva a976f6b (image 18a976f6b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a976f6b(void)

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



// ===== continuation @ rva a974031 (image 18a974031) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a974031(void)

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



// ===== continuation @ rva a977e6c (image 18a977e6c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a977e6c(void)

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



// ===== continuation @ rva a97627f (image 18a97627f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a97627f(void)

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



// ===== continuation @ rva a97664c (image 18a97664c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97664c(void)

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



// ===== continuation @ rva a9762ed (image 18a9762ed) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9762ed(void)

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



// ===== continuation @ rva a97646a (image 18a97646a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18a97405e(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
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



// ===== continuation @ rva a9783e3 (image 18a9783e3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9783e3(void)

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



// ===== continuation @ rva a97838f (image 18a97838f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97838f(void)

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



// ===== continuation @ rva a979148 (image 18a979148) =====

void FUN_18a979148(void)

{
  return;
}



// ===== continuation @ rva a978c32 (image 18a978c32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a978c32(void)

{
  FUN_190ddce00();
  (*_DAT_1818d2d78)();
  return;
}



// ===== continuation @ rva a978886 (image 18a978886) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a978886(void)

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



// ===== continuation @ rva a979113 (image 18a979113) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a979113(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818d2e58)();
  return;
}



// ===== continuation @ rva a978e47 (image 18a978e47) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a978e47(void)

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



// ===== continuation @ rva a9790f8 (image 18a9790f8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9790f8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1818d2ed8)();
  return;
}



// ===== continuation @ rva a979156 (image 18a979156) =====

void FUN_18a979156(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a978a42 (image 18a978a42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a978a42(void)

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



// ===== continuation @ rva a9786dd (image 18a9786dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9786dd(void)

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



// ===== continuation @ rva a97870d (image 18a97870d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97870d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  FUN_190dd72e0();
  (*_DAT_1818d3038)();
  return;
}



// ===== continuation @ rva a9786ab (image 18a9786ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9786ab(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818d2c68)();
  return;
}



// ===== continuation @ rva a97bb9d (image 18a97bb9d) =====

void FUN_18a97bb9d(void)

{
  return;
}



// ===== continuation @ rva a9792c0 (image 18a9792c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9792c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1818d3808)();
  return;
}



// ===== continuation @ rva a97bbbc (image 18a97bbbc) =====

void FUN_18a97bbbc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a979fc0 (image 18a979fc0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a979fc0(void)

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



// ===== continuation @ rva a979a67 (image 18a979a67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a979a67(void)

{
  (*_DAT_1818d3d18)();
  return;
}



// ===== continuation @ rva a97badc (image 18a97badc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97badc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1818d3d48)();
  return;
}



// ===== continuation @ rva a97b83e (image 18a97b83e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97b83e(void)

{
  (*_DAT_1818d3f28)();
  return;
}



// ===== continuation @ rva a97b9cb (image 18a97b9cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97b9cb(void)

{
  (*_DAT_1818d3d18)();
  return;
}



// ===== continuation @ rva a97bb42 (image 18a97bb42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97bb42(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1818d3c78)();
  return;
}



// ===== continuation @ rva a97b12a (image 18a97b12a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97b12a(void)

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



// ===== continuation @ rva a97bbb1 (image 18a97bbb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97bbb1(void)

{
  (*_DAT_1818d3f08)();
  return;
}



// ===== continuation @ rva a97a2da (image 18a97a2da) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a97a2da(void)

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



// ===== continuation @ rva a97e581 (image 18a97e581) =====

void FUN_18a97e581(void)

{
  return;
}



// ===== continuation @ rva a97e3d8 (image 18a97e3d8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97e3d8(void)

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



// ===== continuation @ rva a9807cb (image 18a9807cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9807cb(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x570))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xc38,0x31);
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



// ===== continuation @ rva a9806a0 (image 18a9806a0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9806a0(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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



// ===== continuation @ rva a9823a4 (image 18a9823a4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18a983037(void)

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



// ===== continuation @ rva a9819d0 (image 18a9819d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9819d0(void)

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



// ===== continuation @ rva a9821f7 (image 18a9821f7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18a983037(void)

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



// ===== continuation @ rva a97fff9 (image 18a97fff9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97fff9(void)

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



// ===== continuation @ rva a97fdba (image 18a97fdba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a97fdba(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0x3a0))(in_stack_00000030,in_stack_00000038);
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



// ===== continuation @ rva a982ad7 (image 18a982ad7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a982ad7(void)

{
  char cVar1;
  longlong *in_RAX;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*in_RAX + 0x784,0x25);
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



// ===== continuation @ rva a98015a (image 18a98015a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98015a(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (*in_RAX)(in_stack_00000030);
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



// ===== continuation @ rva a987272 (image 18a987272) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a987272(void)

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



// ===== continuation @ rva a98721e (image 18a98721e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98721e(void)

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



// ===== continuation @ rva a9880e5 (image 18a9880e5) =====

void FUN_18a9880e5(void)

{
  return;
}



// ===== continuation @ rva a987620 (image 18a987620) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987620(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_1818d64b8)();
  return;
}



// ===== continuation @ rva a9873e6 (image 18a9873e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9873e6(void)

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



// ===== continuation @ rva a987392 (image 18a987392) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a987392(void)

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



// ===== continuation @ rva a9880f4 (image 18a9880f4) =====

void FUN_18a9880f4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a987ad4 (image 18a987ad4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a987ad4(void)

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



// ===== continuation @ rva a987d28 (image 18a987d28) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987d28(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1818d65a8)();
  return;
}



// ===== continuation @ rva a987cc2 (image 18a987cc2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987cc2(void)

{
  FUN_190dd72e0();
  (*_DAT_1818d63d8)();
  return;
}



// ===== continuation @ rva a987ab0 (image 18a987ab0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987ab0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1818d6078)();
  return;
}



// ===== continuation @ rva a987893 (image 18a987893) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987893(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x418))();
  (*_DAT_1818d61f8)();
  return;
}



// ===== continuation @ rva a9875a6 (image 18a9875a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9875a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1818d6218)();
  return;
}



// ===== continuation @ rva a98a206 (image 18a98a206) =====

void FUN_18a98a206(void)

{
  return;
}



// ===== continuation @ rva a98826c (image 18a98826c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98826c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1818d6678)();
  return;
}



// ===== continuation @ rva a988c7d (image 18a988c7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a988c7d(void)

{
  (*_DAT_1818d74b8)();
  return;
}



// ===== continuation @ rva a98aca4 (image 18a98aca4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98aca4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818d6cc8)();
  return;
}



// ===== continuation @ rva a989d98 (image 18a989d98) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a989d98(void)

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



// ===== continuation @ rva a98adaa (image 18a98adaa) =====

void FUN_18a98adaa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a989fbf (image 18a989fbf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a989fbf(void)

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



// ===== continuation @ rva a988ee0 (image 18a988ee0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a988ee0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1818d6fc8)();
  return;
}



// ===== continuation @ rva a9887d4 (image 18a9887d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9887d4(void)

{
  FUN_190de3220();
  (*_DAT_1818d6e78)();
  return;
}



// ===== continuation @ rva a989ef3 (image 18a989ef3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a989ef3(void)

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



// ===== continuation @ rva a98a3b6 (image 18a98a3b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98a3b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1818d7458)();
  return;
}



// ===== continuation @ rva a98a280 (image 18a98a280) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98a280(void)

{
  FUN_190dd72e0();
  (*_DAT_1818d72f8)();
  return;
}



// ===== continuation @ rva a98828b (image 18a98828b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98828b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000160;
  
  uStack0000000000000060 = in_stack_00000160;
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



// ===== continuation @ rva a98af88 (image 18a98af88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98af88(void)

{
  FUN_190dd72e0();
  (*_DAT_1818d76b8)();
  return;
}



// ===== continuation @ rva a98af15 (image 18a98af15) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98af15(void)

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



// ===== continuation @ rva a98b2f5 (image 18a98b2f5) =====

void FUN_18a98b2f5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a98af73 (image 18a98af73) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a98af73(void)

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



// ===== continuation @ rva a98b2eb (image 18a98b2eb) =====

void FUN_18a98b2eb(void)

{
  return;
}



// ===== continuation @ rva a98afd1 (image 18a98afd1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98afd1(void)

{
  FUN_190dd9df0();
  (*_DAT_1818d7688)();
  return;
}



// ===== continuation @ rva a98b26d (image 18a98b26d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98b26d(void)

{
  FUN_190dd9df0();
  (*_DAT_1818d76e8)();
  return;
}



// ===== continuation @ rva a98b2c4 (image 18a98b2c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98b2c4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x348))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818d76d8)();
  return;
}



// ===== continuation @ rva a98b19b (image 18a98b19b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a98b19b(void)

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



// ===== continuation @ rva a98b224 (image 18a98b224) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98b224(void)

{
  FUN_190dd72e0();
  (*_DAT_1818d75f8)();
  return;
}



// ===== continuation @ rva a98b1b1 (image 18a98b1b1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98b1b1(void)

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



// ===== continuation @ rva a98b24c (image 18a98b24c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a98b24c(void)

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



// ===== continuation @ rva a9abc88 (image 18a9abc88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abc88(void)

{
  FUN_190dd72e0();
  (*_DAT_1818db088)();
  return;
}



// ===== continuation @ rva a9abc15 (image 18a9abc15) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abc15(void)

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



// ===== continuation @ rva a9abfeb (image 18a9abfeb) =====

void FUN_18a9abfeb(void)

{
  return;
}



// ===== continuation @ rva a9abeea (image 18a9abeea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abeea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818db038)();
  return;
}



// ===== continuation @ rva a9abf24 (image 18a9abf24) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abf24(void)

{
  FUN_190dd72e0();
  (*_DAT_1818daf48)();
  return;
}



// ===== continuation @ rva a9abff5 (image 18a9abff5) =====

void FUN_18a9abff5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a9abc73 (image 18a9abc73) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9abc73(void)

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



// ===== continuation @ rva a9abe6c (image 18a9abe6c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9abe6c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1841196f0();
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



// ===== continuation @ rva a9abe1a (image 18a9abe1a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abe1a(void)

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



// ===== continuation @ rva a9abd8c (image 18a9abd8c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9abd8c(void)

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



// ===== continuation @ rva a9abf4c (image 18a9abf4c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9abf4c(void)

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



// ===== continuation @ rva a9abd28 (image 18a9abd28) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abd28(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818dafb8)();
  return;
}



// ===== continuation @ rva a9ac1dc (image 18a9ac1dc) =====

void FUN_18a9ac1dc(void)

{
  return;
}



// ===== continuation @ rva a9ac0fd (image 18a9ac0fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac0fd(void)

{
  FUN_190ddfc90();
  (*_DAT_1818db128)();
  return;
}



// ===== continuation @ rva a9ac1bc (image 18a9ac1bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac1bc(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818db0f8)();
  return;
}



// ===== continuation @ rva a9ac16a (image 18a9ac16a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac16a(void)

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



// ===== continuation @ rva a9ac154 (image 18a9ac154) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac154(void)

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



// ===== continuation @ rva a9ac1a3 (image 18a9ac1a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac1a3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1818db0f8)();
  return;
}



// ===== continuation @ rva a9ac130 (image 18a9ac130) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac130(void)

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



// ===== continuation @ rva a9ac24a (image 18a9ac24a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac24a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1818db158)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva a9ac256 (image 18a9ac256) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac256(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva a9ac273 (image 18a9ac273) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac273(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1818db168)();
  return;
}



// ===== continuation @ rva a9ac27c (image 18a9ac27c) =====

void FUN_18a9ac27c(void)

{
  return;
}



// ===== continuation @ rva a9ac3cc (image 18a9ac3cc) =====

void FUN_18a9ac3cc(void)

{
  return;
}



// ===== continuation @ rva a9ac2ed (image 18a9ac2ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac2ed(void)

{
  FUN_190ddfc90();
  (*_DAT_1818db1d8)();
  return;
}



// ===== continuation @ rva a9ac393 (image 18a9ac393) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac393(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1818db198)();
  return;
}



// ===== continuation @ rva a9ac3ac (image 18a9ac3ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac3ac(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818db1c8)();
  return;
}



// ===== continuation @ rva a9ac35a (image 18a9ac35a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac35a(void)

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



// ===== continuation @ rva a9ac344 (image 18a9ac344) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac344(void)

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



// ===== continuation @ rva a9ac3d4 (image 18a9ac3d4) =====

void FUN_18a9ac3d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a9ac320 (image 18a9ac320) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac320(void)

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



// ===== continuation @ rva a9b1642 (image 18a9b1642) =====

void FUN_18a9b1642(void)

{
  return;
}



// ===== continuation @ rva a9ac557 (image 18a9ac557) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac557(void)

{
  FUN_190ddce00();
  (*_DAT_1818dbb88)();
  return;
}



// ===== continuation @ rva a9b16ae (image 18a9b16ae) =====

void FUN_18a9b16ae(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a9b1261 (image 18a9b1261) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b1261(void)

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



// ===== continuation @ rva a9afaf2 (image 18a9afaf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9afaf2(void)

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



// ===== continuation @ rva a9b0bf7 (image 18a9b0bf7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b0bf7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1818db9d8)();
  return;
}



// ===== continuation @ rva a9b12f3 (image 18a9b12f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b12f3(void)

{
  (*_DAT_1818db8d8)();
  return;
}



// ===== continuation @ rva a9b1633 (image 18a9b1633) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b1633(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1818dbb68)();
  return;
}



// ===== continuation @ rva a9b10fe (image 18a9b10fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b10fe(void)

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



// ===== continuation @ rva a9b13bf (image 18a9b13bf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b13bf(void)

{
  (*_DAT_1818dbb18)();
  return;
}



// ===== continuation @ rva a9b106b (image 18a9b106b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b106b(void)

{
  (*_DAT_1818dbc48)();
  return;
}



// ===== continuation @ rva a9b0f92 (image 18a9b0f92) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b0f92(void)

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



// ===== continuation @ rva a9b5ede (image 18a9b5ede) =====

void FUN_18a9b5ede(void)

{
  return;
}



// ===== continuation @ rva a9b18c7 (image 18a9b18c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b18c7(void)

{
  FUN_190ddce00();
  (*_DAT_1818dd1f8)();
  return;
}



// ===== continuation @ rva a9b5f6b (image 18a9b5f6b) =====

void FUN_18a9b5f6b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a9b58f9 (image 18a9b58f9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b58f9(void)

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



// ===== continuation @ rva a9b4cba (image 18a9b4cba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b4cba(void)

{
  FUN_190dd72e0();
  (*_DAT_1818dcf08)();
  return;
}



// ===== continuation @ rva a9b4c3d (image 18a9b4c3d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b4c3d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818dd0b8)();
  return;
}



// ===== continuation @ rva a9b5401 (image 18a9b5401) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b5401(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1818dce58)();
  return;
}



// ===== continuation @ rva a9b50b9 (image 18a9b50b9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b50b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1818dce28)();
  return;
}



// ===== continuation @ rva a9b55cb (image 18a9b55cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b55cb(void)

{
  (*_DAT_1818dd3f8)();
  return;
}



// ===== continuation @ rva a9b56b5 (image 18a9b56b5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b56b5(void)

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



// ===== continuation @ rva a9b5c41 (image 18a9b5c41) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b5c41(void)

{
  (*_DAT_1818dd398)();
  return;
}



// ===== continuation @ rva a9b5f60 (image 18a9b5f60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b5f60(void)

{
  (*_DAT_1818dd408)();
  return;
}



// ===== continuation @ rva a9b4e01 (image 18a9b4e01) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b4e01(void)

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



// ===== continuation @ rva a9b9351 (image 18a9b9351) =====

void FUN_18a9b9351(void)

{
  return;
}



// ===== continuation @ rva a9b6154 (image 18a9b6154) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b6154(void)

{
  FUN_190ddce00();
  (*_DAT_1818de088)();
  return;
}



// ===== continuation @ rva a9b61ab (image 18a9b61ab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b61ab(void)

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



// ===== continuation @ rva a9b93bd (image 18a9b93bd) =====

void FUN_18a9b93bd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a9b621e (image 18a9b621e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b621e(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulonglong uVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  ulonglong uVar44;
  uint uVar46;
  undefined1 auVar45 [16];
  ulonglong uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulonglong uStack0000000000000040;
  
  uVar4 = _DAT_1818ddfe8;
  uVar6 = _DAT_1818ddfe0;
  uVar3 = _DAT_1818ddfe0 ^ 0x84222325 ^ in_RAX;
  lVar5 = (_DAT_1818ddfe0 ^ 0x84222325) + param_1;
  uVar22 = uVar3 + lVar5;
  uVar29 = (param_1 ^ 0x9d908be03f7c0a56) + in_RAX + 0x9d908be03f7c0a56;
  uVar3 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar3;
  uVar22 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ param_1 ^ 0x9d908be03f7c0a56;
  _DAT_183264f50 =
       func_0x00018a9b9450((uVar22 << 0x1d | uVar22 >> 0x23) - (in_RAX + 0x9d908be03f7c0a56) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar9 = uVar6 | 0x9d908be03f7c0a56;
  uVar3 = uVar6 ^ _DAT_183264f50 ^ uVar9;
  _DAT_183264f88 = (_DAT_183264f88 ^ uVar3) + uVar9 ^ 0xee9a42928e6444f4;
  _DAT_183264e38 = (_DAT_183264e38 * 0x7630252b4e98b175 ^ _DAT_183264f88) + uVar3;
  _DAT_183264e90 = _DAT_183264e38 ^ _DAT_183264f88;
  uVar3 = ((_DAT_183264d10 ^ uVar4 ^ 0x84222325) + ((uVar4 ^ 0x84222325) & _DAT_183264d10) * 2) *
          (0x506255210cacf65 - _DAT_183264f38);
  uVar3 = (uVar3 | _DAT_183265050) + (uVar3 & _DAT_183265050);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183264fc8 = uVar9;
  _DAT_183264f60 =
       func_0x00018a9b9450((uVar4 ^ 0x506255294e8ec40 | uVar3) +
                           (uVar3 & (uVar4 ^ 0x506255294e8ec40)));
  uVar3 = uVar4 * 0x506255210cacf65 ^ _DAT_183264f60;
  uVar3 = uVar3 << 2 | uVar3 >> 0x3e;
  uVar22 = uVar4 + 0x506255210cacf65 + (uVar4 & 0x506255210cacf65) * -2;
  _DAT_183264e28 = (_DAT_183264e28 ^ uVar3) + uVar22 ^ 0xf5d3280119eb9593;
  _DAT_183264d08 = (_DAT_183264d08 * -0x2a520c64669434a3 ^ _DAT_183264e28) + uVar3;
  _DAT_183264dc0 = _DAT_183264d08 ^ _DAT_183264e28;
  lVar5 = uVar6 * uVar6;
  uVar29 = lVar5 * -0x3daa1e38d021dbdf;
  auVar14._8_8_ = uVar29;
  auVar14._0_8_ = _DAT_1818de230;
  uVar8 = lVar5 * 0x3daa1e38d021dbdf;
  auVar11 = pshufb(auVar14 ^ _DAT_1818de240,_DAT_1800170c0);
  uVar6 = auVar11._8_8_ + auVar11._0_8_;
  uVar3 = uVar6 + _DAT_183264f38;
  if (auVar11._4_4_ < 0) {
    uVar3 = _DAT_183264f68 ^ uVar6;
  }
  _DAT_1832650a8 = uVar22;
  _DAT_183264e10 = func_0x00018a9b9450(SUB161(auVar14 ^ _DAT_1818de240,5) ^ uVar3);
  uVar10 = (uint)(uVar29 >> 0x20);
  auVar31._8_4_ = (int)uVar29;
  auVar31._0_8_ = uVar29;
  auVar31._12_4_ = uVar10;
  uVar39 = SUB164(auVar31 & _DAT_1818de250,0);
  uVar6 = SUB168(auVar31 & _DAT_1818de250,0);
  uVar21 = SUB164(auVar31 | _DAT_1818de250,0);
  uVar44 = SUB168(auVar31 | _DAT_1818de250,0);
  uVar30 = SUB164(_DAT_1818de250 ^ auVar31,0);
  uVar3 = SUB168(_DAT_1818de250 ^ auVar31,0);
  auVar45._8_4_ = 0xffffffff;
  auVar45._0_8_ = 0xffffffffffffffff;
  auVar45._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar31 ^ auVar45,0);
  uVar44 = (ulonglong)_DAT_1818de270 * (ulonglong)uVar30 +
           ((uVar3 >> 0x20) * (ulonglong)_DAT_1818de270 +
            (ulonglong)_DAT_1818de260 * (ulonglong)uVar30 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_1818de270 + uVar29 +
           ((uVar6 >> 0x20) * (ulonglong)_DAT_1818de270 +
            (ulonglong)uVar39 * (ulonglong)_DAT_1818de260 << 0x20) +
           (_DAT_1818de280 & 0xffffffff) * (ulonglong)uVar21 +
           ((_DAT_1818de290 & 0xffffffff) * (ulonglong)uVar21 +
            (uVar44 >> 0x20) * (_DAT_1818de280 & 0xffffffff) << 0x20) +
           (-((ulonglong)uVar20 * (ulonglong)_DAT_1818de340 +
             ((ulonglong)_DAT_1818de350 * (ulonglong)uVar20 +
              (SUB168(auVar31 ^ auVar45,0) >> 0x20) * (ulonglong)_DAT_1818de340 << 0x20)) -
           ((ulonglong)uVar30 * (ulonglong)_DAT_1818de320 +
            ((ulonglong)_DAT_1818de330 * (ulonglong)uVar30 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_1818de320 << 0x20) +
            (ulonglong)uVar21 * (ulonglong)_DAT_1818de300 +
            ((ulonglong)_DAT_1818de310 * (ulonglong)uVar21 +
             (uVar44 >> 0x20) * (ulonglong)_DAT_1818de300 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_1818de2e0 +
           ((ulonglong)_DAT_1818de2f0 * (ulonglong)uVar39 +
            (uVar6 >> 0x20) * (ulonglong)_DAT_1818de2e0 << 0x20) +
           (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de2c0 +
           ((ulonglong)_DAT_1818de2d0 * (uVar29 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de2c0 << 0x20))) + _DAT_1818de360;
  _DAT_183265088 = _DAT_183264ea8 ^ _DAT_183264e10 ^ uVar44;
  _DAT_183264df8 = (_DAT_183264df8 ^ _DAT_183264e10) + uVar44 ^ 0x95648ba7aed15b69;
  _DAT_183264f78 = (_DAT_183264f78 * -0x6ab680fa140838c5 ^ _DAT_183264df8) + _DAT_183264e10;
  _DAT_183264d38 = _DAT_183264f78 ^ _DAT_183264df8;
  uVar3 = uVar44 ^ 0x84222325 ^ _DAT_183264d28;
  lVar7 = (uVar44 ^ 0x84222325) + _DAT_183264d80;
  lVar5 = _DAT_183264d28 + lVar5 * 0x3daa1e38d021dbdf;
  uVar6 = uVar3 + lVar7;
  uVar29 = (uVar8 ^ _DAT_183264d80) + lVar5;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3;
  uVar6 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar8 ^ _DAT_183264d80;
  _DAT_183264f28 = uVar44;
  _DAT_183264e08 =
       func_0x00018a9b9450((uVar6 << 0x1d | uVar6 >> 0x23) - lVar5 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar3 = _DAT_183264e08 ^ uVar44;
  uVar39 = (uint)(uVar44 >> 0x20);
  auVar32._8_4_ = (int)uVar44;
  auVar32._0_8_ = uVar44;
  auVar32._12_4_ = uVar39;
  uVar10 = (uint)(uVar8 >> 0x20);
  auVar12._8_4_ = (int)uVar8;
  auVar12._0_8_ = uVar8;
  auVar12._12_4_ = uVar10;
  uStack0000000000000040 = uVar44 | uVar8;
  auVar11._8_8_ = _UNK_18001a718;
  auVar11._0_8_ = _DAT_18001a710;
  uVar30 = SUB164(auVar32 & auVar12,0);
  uVar34 = SUB168(auVar32 & auVar12,0);
  uVar20 = SUB164(auVar32 ^ auVar12,0);
  uVar21 = SUB164(auVar12 ^ auVar11,0);
  uVar29 = SUB168(auVar12 ^ auVar11,0);
  uVar6 = uVar44 ^ _DAT_18001a710;
  uVar8 = (((ulonglong)_DAT_1818de3b0 * (ulonglong)uVar21 +
            ((ulonglong)_DAT_1818de400 * (ulonglong)uVar21 +
             (uVar29 >> 0x20) * (ulonglong)_DAT_1818de3b0 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1818de3e0 +
            ((ulonglong)_DAT_1818de3f0 * (ulonglong)uVar20 +
             (SUB168(auVar32 ^ auVar12,0) >> 0x20) * (ulonglong)_DAT_1818de3e0 << 0x20) +
           (ulonglong)_DAT_1818de3c0 * (ulonglong)uVar30 +
           ((ulonglong)_DAT_1818de3d0 * (ulonglong)uVar30 +
            (uVar34 >> 0x20) * (ulonglong)_DAT_1818de3c0 << 0x20) +
           (ulonglong)_DAT_1818de390 * (uVar8 & 0xffffffff) +
           ((ulonglong)_DAT_1818de3a0 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de390 << 0x20) +
           (ulonglong)_DAT_1818de370 * (uVar44 & 0xffffffff) +
           ((ulonglong)_DAT_1818de380 * (uVar44 & 0xffffffff) +
            (ulonglong)uVar39 * (ulonglong)_DAT_1818de370 << 0x20)) -
          ((ulonglong)uVar21 * (_DAT_1818de4b0 & 0xffffffff) +
           ((ulonglong)_DAT_1818de4c0 * (ulonglong)uVar21 +
            (uVar29 >> 0x20) * (_DAT_1818de4b0 & 0xffffffff) << 0x20) +
           (uStack0000000000000040 & 0xffffffff) * (ulonglong)_DAT_1818de480 +
           ((uStack0000000000000040 >> 0x20) * (ulonglong)_DAT_1818de480 +
            (ulonglong)_DAT_1818de470 * (uStack0000000000000040 & 0xffffffff) << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1818de480 +
           ((uVar34 >> 0x20) * (ulonglong)_DAT_1818de480 +
            (ulonglong)uVar30 * (ulonglong)_DAT_1818de470 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818de450 +
           ((ulonglong)_DAT_1818de460 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de450 << 0x20) +
           (uVar44 & 0xffffffff) * (ulonglong)_DAT_1818de430 +
           ((ulonglong)_DAT_1818de440 * (uVar44 & 0xffffffff) +
            (ulonglong)uVar39 * (ulonglong)_DAT_1818de430 << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_1818de490 +
          ((ulonglong)_DAT_1818de4a0 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_DAT_1818de490 << 0x20))) + _DAT_1818de4d0;
  _DAT_183264e50 = _DAT_183264db8 ^ uVar3 ^ uVar8;
  _DAT_1832650c0 = (_DAT_1832650c0 ^ uVar3) + uVar8 ^ 0x347aef1deb1a77aa;
  _DAT_183264ee8 = (_DAT_183264ee8 * -0x1a52e5a8297b5dc1 ^ _DAT_1832650c0) + uVar3;
  _DAT_183265010 = _DAT_183264ee8 ^ _DAT_1832650c0;
  lVar5 = uVar4 * uVar4;
  uVar29 = lVar5 * -0x4797d5c1f6b66b64;
  auVar13._8_8_ = uVar29;
  auVar13._0_8_ = _DAT_18001b640;
  auVar14 = pshufb(auVar13 ^ _DAT_1818de4e0,_DAT_1800170c0);
  uVar6 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar6 + _DAT_183264d98;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_1832650b8 ^ uVar6;
  }
  _DAT_1832650f0 = uVar8;
  _DAT_183265020 = func_0x00018a9b9450(uVar3 ^ 0x11);
  uVar3 = _DAT_183265020 >> 1 | _DAT_183265020;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183265020;
  uVar6 = lVar5 * 0x4797d5c1f6b66b64;
  _DAT_1832650a8 = (_DAT_1832650a8 ^ uVar3) + lVar5 * 0x4797d5c1f6b66b64 ^ 0xe19242786a027dc6;
  _DAT_183264d98 = (_DAT_183264d98 * -0x76c822ae3699e5b9 ^ _DAT_1832650a8) + uVar3;
  _DAT_183264fd0 = _DAT_183264d98 ^ _DAT_1832650a8;
  uVar3 = uVar8 ^ 0x84222325 ^ _DAT_183264ee8;
  lVar7 = (uVar8 ^ 0x84222325) + _DAT_183265050;
  uVar44 = uVar3 + lVar7;
  uVar34 = (uVar29 ^ _DAT_183265050) + _DAT_183264ee8 + uVar29;
  uVar3 = (uVar44 * 0x2000 | uVar44 >> 0x33) ^ uVar3;
  uVar44 = (uVar34 * 0x2000 | uVar34 >> 0x33) ^ uVar29 ^ _DAT_183265050;
  _DAT_183264e98 = uVar6;
  _DAT_183264fb0 =
       func_0x00018a9b9450((uVar44 << 0x1d | uVar44 >> 0x23) - (_DAT_183264ee8 + uVar29) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar46 = (uint)(uVar8 >> 0x20);
  auVar33._8_4_ = (int)uVar8;
  auVar33._0_8_ = uVar8;
  auVar33._12_4_ = uVar46;
  uVar10 = (uint)(uVar29 >> 0x20);
  auVar40._8_4_ = (int)uVar29;
  auVar40._0_8_ = uVar29;
  auVar40._12_4_ = uVar10;
  auVar50._8_4_ = 0xffffffff;
  auVar50._0_8_ = 0xffffffffffffffff;
  auVar50._12_4_ = 0xffffffff;
  uVar30 = SUB164(auVar40 ^ auVar50,0);
  auVar48._8_4_ = 0xffffffff;
  auVar48._0_8_ = 0xffffffffffffffff;
  auVar48._12_4_ = 0xffffffff;
  uVar43 = SUB164(auVar33 & auVar40,0);
  uVar21 = SUB164(auVar33 | auVar40,0);
  uVar20 = SUB164(auVar33 ^ auVar40,0);
  uVar39 = SUB164(auVar33 ^ auVar50,0);
  uVar44 = (((ulonglong)uVar30 * (ulonglong)_DAT_1818de510 +
             ((SUB168(auVar40 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_1818de510 +
              (ulonglong)_DAT_1818de4f0 * (ulonglong)uVar30 << 0x20) +
             (ulonglong)_DAT_1818de500 * (uVar29 & 0xffffffff) +
             ((ulonglong)uVar10 * (ulonglong)_DAT_1818de500 +
              (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de4f0 << 0x20) + uVar8) -
           ((ulonglong)uVar39 * (ulonglong)_DAT_1818de580 +
            ((ulonglong)_DAT_1818de5f0 * (ulonglong)uVar39 +
             (SUB168(auVar33 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_1818de580 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1818de5d0 +
           ((ulonglong)_DAT_1818de5e0 * (ulonglong)uVar20 +
            (SUB168(auVar33 ^ auVar40,0) >> 0x20) * (ulonglong)_DAT_1818de5d0 << 0x20) +
           (ulonglong)uVar21 * (ulonglong)_DAT_1818de5b0 +
           ((ulonglong)_DAT_1818de5c0 * (ulonglong)uVar21 +
            (SUB168(auVar33 | auVar40,0) >> 0x20) * (ulonglong)_DAT_1818de5b0 << 0x20) +
           (ulonglong)uVar43 * (ulonglong)_DAT_1818de590 +
           ((ulonglong)_DAT_1818de5a0 * (ulonglong)uVar43 +
            (SUB168(auVar33 & auVar40,0) >> 0x20) * (ulonglong)_DAT_1818de590 << 0x20) +
           (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de560 +
           ((ulonglong)_DAT_1818de570 * (uVar29 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de560 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818de540 +
           ((ulonglong)_DAT_1818de550 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar46 * (ulonglong)_DAT_1818de540 << 0x20))) + _DAT_1818de600;
  _DAT_183264f30 = _DAT_183264d08 ^ _DAT_183265048 ^ uVar44;
  _DAT_183264df0 = (_DAT_183264df0 ^ _DAT_183265048) + uVar44 ^ 0x31ca57fba0d76488;
  _DAT_183264d48 = (_DAT_183264d48 * 0x69c8e6b4e497264b ^ _DAT_183264df0) + _DAT_183265048;
  _DAT_183265070 = _DAT_183264d48 ^ _DAT_183264df0;
  uVar3 = uVar44 ^ 0x84222325 ^ _DAT_183264de8;
  lVar7 = (uVar44 ^ 0x84222325) + _DAT_1832650d0;
  lVar5 = _DAT_183264de8 + lVar5 * 0x4797d5c1f6b66b64;
  uVar29 = uVar3 + lVar7;
  uVar8 = (uVar6 ^ _DAT_1832650d0) + lVar5;
  uVar3 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar3;
  uVar29 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar6 ^ _DAT_1832650d0;
  _DAT_183264e50 = uVar44;
  _DAT_183265028 =
       func_0x00018a9b9450((uVar29 << 0x1d | uVar29 >> 0x23) - lVar5 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar30 = (uint)(uVar44 >> 0x20);
  auVar35._8_4_ = (int)uVar44;
  auVar35._0_8_ = uVar44;
  auVar35._12_4_ = uVar30;
  uVar20 = (uint)(uVar6 >> 0x20);
  auVar23._8_4_ = (int)uVar6;
  auVar23._0_8_ = uVar6;
  auVar23._12_4_ = uVar20;
  uVar43 = SUB164(auVar35 & auVar23,0);
  uVar8 = SUB168(auVar35 & auVar23,0);
  uVar10 = SUB164(auVar35 | auVar23,0);
  uVar29 = SUB168(auVar35 | auVar23,0);
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar39 = SUB164(auVar35 ^ auVar48,0);
  uVar21 = SUB164(auVar23 ^ auVar1,0);
  uVar34 = SUB168(auVar23 ^ auVar1,0);
  uVar3 = (uVar44 * uVar6 ^ _DAT_183265028) & 0x1ffffffffff;
  uVar8 = (((ulonglong)_DAT_1818de690 * (ulonglong)uVar21 +
            ((ulonglong)_DAT_1818de6a0 * (ulonglong)uVar21 +
             (uVar34 >> 0x20) * (ulonglong)_DAT_1818de690 << 0x20) +
            (ulonglong)_DAT_1818de660 * (ulonglong)uVar10 +
            ((uVar29 >> 0x20) * (ulonglong)_DAT_1818de660 +
             (ulonglong)_DAT_1818de650 * (ulonglong)uVar10 << 0x20) +
            (ulonglong)uVar43 * (ulonglong)_DAT_1818de660 +
            ((uVar8 >> 0x20) * (ulonglong)_DAT_1818de660 +
             (ulonglong)uVar43 * (ulonglong)_DAT_1818de650 << 0x20) +
            (ulonglong)_DAT_1818de630 * (uVar6 & 0xffffffff) +
            ((ulonglong)_DAT_1818de640 * (uVar6 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_1818de630 << 0x20) +
            (ulonglong)_DAT_1818de610 * (uVar44 & 0xffffffff) +
            ((ulonglong)_DAT_1818de620 * (uVar44 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_1818de610 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_1818de670 +
           ((ulonglong)_DAT_1818de680 * (ulonglong)uVar39 +
            (SUB168(auVar35 ^ auVar48,0) >> 0x20) * (ulonglong)_DAT_1818de670 << 0x20)) -
          ((ulonglong)uVar21 * (_DAT_1818de710 & 0xffffffff) +
           ((ulonglong)_DAT_1818de740 * (ulonglong)uVar21 +
            (uVar34 >> 0x20) * (_DAT_1818de710 & 0xffffffff) << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_1818de730 +
          ((uVar29 >> 0x20) * (ulonglong)_DAT_1818de730 +
           (ulonglong)_DAT_1818de720 * (ulonglong)uVar10 << 0x20) +
          (ulonglong)uVar43 * (ulonglong)_DAT_1818de730 +
          ((uVar8 >> 0x20) * (ulonglong)_DAT_1818de730 +
           (ulonglong)uVar43 * (ulonglong)_DAT_1818de720 << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_1818de6f0 +
          ((ulonglong)_DAT_1818de700 * (uVar6 & 0xffffffff) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1818de6f0 << 0x20) +
          (uVar44 & 0xffffffff) * (ulonglong)_DAT_1818de6d0 +
          ((ulonglong)_DAT_1818de6e0 * (uVar44 & 0xffffffff) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1818de6d0 << 0x20))) + _DAT_1818de750;
  _DAT_183265020 = _DAT_183264f90 ^ uVar3 ^ uVar8;
  _DAT_183264f08 = (_DAT_183264f08 ^ uVar3) + uVar8 ^ 0xe2bcf60e8d47fade;
  _DAT_183264e88 = (_DAT_183264e88 * -0x25075463e975f1db ^ _DAT_183264f08) + uVar3;
  _DAT_183264e48 = _DAT_183264e88 ^ _DAT_183264f08;
  uVar29 = _DAT_1818ddfe0 * uVar4 * -0x5d238bb40a28dbda;
  uVar4 = _DAT_1818ddfe0 * uVar4 * 0x5d238bb40a28dbda;
  uVar6 = uVar8 ^ 0x84222325;
  uVar3 = ((_DAT_183264e10 ^ uVar6) + (uVar6 & _DAT_183264e10) * 2) * (uVar29 - _DAT_183264fa0);
  uVar3 = (uVar3 | _DAT_183264d90) + (uVar3 & _DAT_183264d90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183264fd8 = uVar8;
  _DAT_183264dc8 = func_0x00018a9b9450((uVar6 ^ uVar29 | uVar3) + (uVar3 & (uVar6 ^ uVar29)));
  uVar39 = (uint)(uVar8 >> 0x20);
  auVar36._8_4_ = (int)uVar8;
  auVar36._0_8_ = uVar8;
  auVar36._12_4_ = uVar39;
  uVar20 = (uint)(uVar29 >> 0x20);
  auVar24._8_4_ = (int)uVar29;
  auVar24._0_8_ = uVar29;
  auVar24._12_4_ = uVar20;
  uVar30 = SUB164(auVar36 & auVar24,0);
  uVar3 = SUB168(auVar36 & auVar24,0);
  uVar43 = SUB164(auVar36 | auVar24,0);
  uVar10 = SUB164(auVar36 ^ auVar24,0);
  uVar6 = SUB168(auVar36 ^ auVar24,0);
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  uVar46 = SUB164(auVar36 ^ auVar49,0);
  uVar21 = SUB164(auVar24 ^ auVar49,0);
  uVar29 = (((ulonglong)uVar46 * (ulonglong)_DAT_1818de7a0 +
             ((ulonglong)_DAT_1818de810 * (ulonglong)uVar46 +
              (SUB168(auVar36 ^ auVar49,0) >> 0x20) * (ulonglong)_DAT_1818de7a0 << 0x20) +
            (ulonglong)_DAT_1818de7f0 * (ulonglong)uVar10 +
            ((ulonglong)_DAT_1818de800 * (ulonglong)uVar10 +
             (uVar6 >> 0x20) * (ulonglong)_DAT_1818de7f0 << 0x20) +
            (ulonglong)uVar43 * (ulonglong)_DAT_1818de7d0 +
            ((ulonglong)_DAT_1818de7e0 * (ulonglong)uVar43 +
             (SUB168(auVar36 | auVar24,0) >> 0x20) * (ulonglong)_DAT_1818de7d0 << 0x20) +
            (ulonglong)_DAT_1818de7b0 * (ulonglong)uVar30 +
            ((ulonglong)_DAT_1818de7c0 * (ulonglong)uVar30 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_1818de7b0 << 0x20) +
            (ulonglong)_DAT_1818de780 * (uVar29 & 0xffffffff) +
            ((ulonglong)_DAT_1818de790 * (uVar29 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_1818de780 << 0x20) +
            (ulonglong)_DAT_1818de760 * (uVar8 & 0xffffffff) +
            ((ulonglong)_DAT_1818de770 * (uVar8 & 0xffffffff) +
             (ulonglong)uVar39 * (ulonglong)_DAT_1818de760 << 0x20)) -
           ((ulonglong)uVar21 * (ulonglong)_DAT_1818de880 +
            ((ulonglong)_DAT_1818de8d0 * (ulonglong)uVar21 +
             (SUB168(auVar24 ^ auVar49,0) >> 0x20) * (ulonglong)_DAT_1818de880 << 0x20) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de8b0 +
            ((ulonglong)_DAT_1818de8c0 * (ulonglong)uVar10 +
             (uVar6 >> 0x20) * (ulonglong)_DAT_1818de8b0 << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1818de890 +
           ((ulonglong)_DAT_1818de8a0 * (ulonglong)uVar30 +
            (uVar3 >> 0x20) * (ulonglong)_DAT_1818de890 << 0x20) +
           (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de860 +
           ((ulonglong)_DAT_1818de870 * (uVar29 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1818de860 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818de840 +
           ((ulonglong)_DAT_1818de850 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar39 * (ulonglong)_DAT_1818de840 << 0x20))) + _DAT_1818de8e0;
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = uVar29 ^ 0x84222325;
  auVar14 = pshufb(auVar15 ^ _DAT_1818de8f0,_DAT_1800170c0);
  uVar3 = _DAT_183264dc8 & 0x7ffffffffff;
  _DAT_183264f18 = _DAT_1832650e8 ^ uVar3 ^ uVar29;
  _DAT_183264d20 = (_DAT_183264d20 ^ uVar3) + uVar29 ^ 0x6c7797b6852c4031;
  _DAT_183264e08 = (_DAT_183264e08 * -0x24982db087666b4d ^ _DAT_183264d20) + uVar3;
  _DAT_183264f68 = _DAT_183264e08 ^ _DAT_183264d20;
  uVar6 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar6 + _DAT_183265098;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_183265038 ^ uVar6;
  }
  _DAT_183264f00 = uVar29;
  _DAT_183265020 = func_0x00018a9b9450(SUB161(auVar15 ^ _DAT_1818de8f0,5) ^ uVar3);
  uVar39 = (uint)(uVar29 >> 0x20);
  auVar37._8_4_ = (int)uVar29;
  auVar37._0_8_ = uVar29;
  auVar37._12_4_ = uVar39;
  uVar43 = (uint)(uVar4 >> 0x20);
  auVar25._8_4_ = (int)uVar4;
  auVar25._0_8_ = uVar4;
  auVar25._12_4_ = uVar43;
  uVar21 = SUB164(auVar37 & auVar25,0);
  uVar47 = SUB168(auVar37 & auVar25,0);
  uVar10 = SUB164(auVar37 | auVar25,0);
  uVar44 = SUB168(auVar37 | auVar25,0);
  uVar30 = SUB164(auVar37 ^ auVar25,0);
  uVar34 = SUB168(auVar37 ^ auVar25,0);
  auVar16._8_4_ = 0xffffffff;
  auVar16._0_8_ = 0xffffffffffffffff;
  auVar16._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar37 ^ auVar16,0);
  uVar46 = SUB164(auVar25 ^ auVar16,0);
  uVar8 = SUB168(auVar25 ^ auVar16,0);
  uVar6 = (uVar4 | uVar29) ^ _DAT_183265020;
  uVar3 = uVar6 >> 1 | uVar6;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar6;
  uVar8 = (((ulonglong)_DAT_1818de990 * (ulonglong)uVar46 +
            ((uVar8 >> 0x20) * (ulonglong)_DAT_1818de990 +
             (ulonglong)_DAT_1818de920 * (ulonglong)uVar46 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1818de980 +
            ((SUB168(auVar37 ^ auVar16,0) >> 0x20) * (ulonglong)_DAT_1818de980 +
             (ulonglong)_DAT_1818de900 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)_DAT_1818de950 * (ulonglong)uVar30 +
            ((uVar34 >> 0x20) * (ulonglong)_DAT_1818de950 +
             (ulonglong)_DAT_1818de940 * (ulonglong)uVar30 << 0x20) +
            (ulonglong)uVar21 * (ulonglong)_DAT_1818de950 +
            ((uVar47 >> 0x20) * (ulonglong)_DAT_1818de950 +
             (ulonglong)uVar21 * (ulonglong)_DAT_1818de940 << 0x20) +
            (ulonglong)_DAT_1818de930 * (uVar4 & 0xffffffff) +
            ((ulonglong)uVar43 * (ulonglong)_DAT_1818de930 +
             (uVar4 & 0xffffffff) * (ulonglong)_DAT_1818de920 << 0x20) +
            (ulonglong)_DAT_1818de910 * (uVar29 & 0xffffffff) +
            ((ulonglong)uVar39 * (ulonglong)_DAT_1818de910 +
             (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de900 << 0x20) +
           (ulonglong)_DAT_1818de960 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_1818de970 * (ulonglong)uVar10 +
            (uVar44 >> 0x20) * (ulonglong)_DAT_1818de960 << 0x20)) -
          ((ulonglong)uVar46 * (ulonglong)_DAT_1818dea00 +
           ((ulonglong)_DAT_1818dea70 * (ulonglong)uVar46 +
            (uVar8 >> 0x20) * (ulonglong)_DAT_1818dea00 << 0x20) +
          (ulonglong)uVar30 * (ulonglong)_DAT_1818dea50 +
          ((ulonglong)_DAT_1818dea60 * (ulonglong)uVar30 +
           (uVar34 >> 0x20) * (ulonglong)_DAT_1818dea50 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_1818dea30 +
          ((ulonglong)_DAT_1818dea40 * (ulonglong)uVar10 +
           (uVar44 >> 0x20) * (ulonglong)_DAT_1818dea30 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_1818dea10 +
          ((ulonglong)_DAT_1818dea20 * (ulonglong)uVar21 +
           (uVar47 >> 0x20) * (ulonglong)_DAT_1818dea10 << 0x20) +
          (uVar4 & 0xffffffff) * (ulonglong)_DAT_1818de9e0 +
          ((ulonglong)_DAT_1818de9f0 * (uVar4 & 0xffffffff) +
           (ulonglong)uVar43 * (ulonglong)_DAT_1818de9e0 << 0x20) +
          (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de9c0 +
          ((ulonglong)_DAT_1818de9d0 * (uVar29 & 0xffffffff) +
           (ulonglong)uVar39 * (ulonglong)_DAT_1818de9c0 << 0x20))) + _DAT_1818dea80;
  _DAT_183264eb0 = _DAT_183264f28 ^ uVar6 ^ uVar8;
  _DAT_183264d58 = (_DAT_183264d58 ^ uVar6) + uVar8 ^ 0xb99b22fe39fbd54e;
  _DAT_183264fb8 = (_DAT_183264fb8 * 0x75f1fb960ff15e5f ^ _DAT_183264d58) + uVar6;
  _DAT_183264fb0 = _DAT_183264fb8 ^ _DAT_183264d58;
  _DAT_183264e78 = _DAT_183264e30 ^ uVar8;
  uVar6 = uVar9 ^ 0x84222325;
  uVar3 = (uVar6 ^ _DAT_183265080) + _DAT_183264fb0 + uVar6;
  uVar4 = (uVar22 ^ _DAT_183264fb0) + _DAT_183265080 + uVar22;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_183265080;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar22 ^ _DAT_183264fb0;
  _DAT_183264d30 = uVar8;
  _DAT_183265018 =
       func_0x00018a9b9450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183265080 + uVar22) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183264fb0 + uVar6));
  uVar3 = uVar9 * uVar22 ^ _DAT_183265018;
  uVar4 = uVar9 ^ uVar22;
  _DAT_183264df8 = (_DAT_183264df8 ^ uVar3) + uVar4 ^ 0x7f10e4205bb801c3;
  _DAT_183264eb8 = (_DAT_183264eb8 * 0xd428bd392677125 ^ _DAT_183264df8) + uVar3;
  _DAT_183264f48 = _DAT_183264eb8 ^ _DAT_183264df8;
  uVar3 = (uVar6 ^ _DAT_183265060) + _DAT_183264e80 + uVar6;
  uVar29 = (uVar22 ^ _DAT_183264e80) + _DAT_183265060 + uVar22;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_183265060;
  uVar29 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar22 ^ _DAT_183264e80;
  _DAT_183264dd8 = uVar4;
  _DAT_183264ea0 =
       func_0x00018a9b9450((uVar29 << 0x1d | uVar29 >> 0x23) - (_DAT_183265060 + uVar22) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183264e80 + uVar6));
  uVar3 = (uVar9 | uVar22) ^ _DAT_183264ea0;
  uVar3 = uVar3 << 0x24 | uVar3 >> 0x1c;
  _DAT_183265010 = uVar22 & uVar9;
  _DAT_183264e20 = (_DAT_183264e20 ^ uVar3) + _DAT_183265010 ^ 0x23f72bc87461c155;
  _DAT_183264fd8 = (_DAT_183264fd8 * 0x7d175417a05428e9 ^ _DAT_183264e20) + uVar3;
  _DAT_183264d20 = _DAT_183264fd8 ^ _DAT_183264e20;
  uVar4 = (uVar9 + uVar22) - (_DAT_183265010 * 2 + uVar4);
  uVar3 = uVar8 ^ 0x84222325 ^ _DAT_183264d70;
  lVar5 = (uVar8 ^ 0x84222325) + _DAT_183264d78;
  uVar22 = uVar3 + lVar5;
  uVar29 = (uVar4 ^ _DAT_183264d78) + _DAT_183264d70 + uVar4;
  uVar3 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar3;
  uVar22 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar4 ^ _DAT_183264d78;
  _DAT_183264d40 =
       func_0x00018a9b9450((uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_183264d70 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar43 = (uint)(uVar8 >> 0x20);
  auVar17._8_4_ = (int)uVar8;
  auVar17._0_8_ = uVar8;
  auVar17._12_4_ = uVar43;
  uVar20 = (uint)(uVar4 >> 0x20);
  auVar38._8_4_ = (int)uVar4;
  auVar38._0_8_ = uVar4;
  auVar38._12_4_ = uVar20;
  uVar30 = SUB164(auVar17 & auVar38,0);
  uVar22 = SUB168(auVar17 & auVar38,0);
  uVar21 = SUB164(auVar17 | auVar38,0);
  uVar29 = SUB168(auVar17 | auVar38,0);
  uVar10 = SUB164(auVar17 ^ auVar38,0);
  uVar3 = SUB168(auVar17 ^ auVar38,0);
  auVar41._8_4_ = 0xffffffff;
  auVar41._0_8_ = 0xffffffffffffffff;
  auVar41._12_4_ = 0xffffffff;
  uVar39 = SUB164(auVar17 ^ auVar41,0);
  auVar26._8_8_ = _UNK_180101c98;
  auVar26._0_8_ = uVar6;
  uVar22 = (((ulonglong)_DAT_1818deaf0 * (ulonglong)uVar10 +
             ((ulonglong)_DAT_1818deb00 * (ulonglong)uVar10 +
              (uVar3 >> 0x20) * (ulonglong)_DAT_1818deaf0 << 0x20) +
             (ulonglong)_DAT_1818dead0 * (ulonglong)uVar21 +
             ((ulonglong)_DAT_1818deae0 * (ulonglong)uVar21 +
              (uVar29 >> 0x20) * (ulonglong)_DAT_1818dead0 << 0x20) +
            (ulonglong)_DAT_1818deab0 * (ulonglong)uVar30 +
            ((ulonglong)_DAT_1818deac0 * (ulonglong)uVar30 +
             (uVar22 >> 0x20) * (ulonglong)_DAT_1818deab0 << 0x20) +
            (ulonglong)_DAT_1818deaa0 * (uVar4 & 0xffffffff) +
            ((ulonglong)uVar20 * (ulonglong)_DAT_1818deaa0 +
             (ulonglong)_DAT_1818dea90 * (uVar4 & 0xffffffff) << 0x20) +
            (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818deaa0 +
            ((ulonglong)uVar43 * (ulonglong)_DAT_1818deaa0 +
             (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818dea90 << 0x20)) -
           ((ulonglong)uVar39 * (_DAT_1818deb70 & 0xffffffff) +
            ((ulonglong)_DAT_1818debe0 * (ulonglong)uVar39 +
             (SUB168(auVar17 ^ auVar41,0) >> 0x20) * (_DAT_1818deb70 & 0xffffffff) << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_1818debc0 +
           ((ulonglong)_DAT_1818debd0 * (ulonglong)uVar10 +
            (uVar3 >> 0x20) * (ulonglong)_DAT_1818debc0 << 0x20) +
           (ulonglong)uVar21 * (ulonglong)_DAT_1818deba0 +
           ((ulonglong)_DAT_1818debb0 * (ulonglong)uVar21 +
            (uVar29 >> 0x20) * (ulonglong)_DAT_1818deba0 << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1818deb80 +
           ((ulonglong)_DAT_1818deb90 * (ulonglong)uVar30 +
            (uVar22 >> 0x20) * (ulonglong)_DAT_1818deb80 << 0x20) +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_1818deb50 +
           ((ulonglong)_DAT_1818deb60 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1818deb50 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818deb30 +
           ((ulonglong)_DAT_1818deb40 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar43 * (ulonglong)_DAT_1818deb30 << 0x20))) - _DAT_1818deb70;
  auVar14 = pshufb(auVar26 ^ _DAT_1818debf0,_DAT_1800170c0);
  uVar3 = ((uVar8 | uVar4) ^ _DAT_183264d40) & 0xffffffffffffe000;
  _DAT_183265070 = _DAT_183264dc0 ^ uVar3 ^ uVar22;
  _DAT_183264e68 = (_DAT_183264e68 ^ uVar3) + uVar22 ^ 0xa9f11815a500b9f3;
  _DAT_183264dc8 = (_DAT_183264dc8 * 0x1e2bdce6be71c011 ^ _DAT_183264e68) + uVar3;
  _DAT_183265020 = _DAT_183264dc8 ^ _DAT_183264e68;
  uVar4 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar4 + _DAT_183264db8;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_183264f08 ^ uVar4;
  }
  _DAT_183264ee0 = uVar22;
  _DAT_183264f18 = func_0x00018a9b9450(SUB161(auVar26 ^ _DAT_1818debf0,5) ^ uVar3);
  uVar3 = ~_DAT_183264f18 << 0x2a | ~_DAT_183264f18 >> 0x16;
  _DAT_183265050 = ~uVar9;
  _DAT_183264fe8 = (_DAT_183264fe8 ^ uVar3) + _DAT_183265050 ^ 0xf14317eb7dd2e6ff;
  _DAT_183264e98 = (_DAT_183264e98 * -0x2a34d91ffba550e5 ^ _DAT_183264fe8) + uVar3;
  _DAT_183264f10 = _DAT_183264e98 ^ _DAT_183264fe8;
  uVar3 = (uVar6 ^ _DAT_183265080) + uVar6 + _DAT_183264db8;
  uVar4 = (_DAT_183265050 ^ _DAT_183264db8) + _DAT_183265050 + _DAT_183265080;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_183265080;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183265050 ^ _DAT_183264db8;
  _DAT_183264ed0 =
       func_0x00018a9b9450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183265050 + _DAT_183265080) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uVar6 + _DAT_183264db8));
  _DAT_183264d50 = _DAT_183264d50 ^ ~_DAT_183264ed0 ^ 0xce53bacc71d6ed68;
  _DAT_183264f00 = (_DAT_183264f00 * 0x1958d1bcb3cd5489 ^ _DAT_183264d50) + ~_DAT_183264ed0;
  _DAT_183264f10 = _DAT_183264f00 ^ _DAT_183264d50;
  _DAT_183264d00 = 0;
  uVar6 = uVar22 ^ 0x84222325;
  uVar3 = ((_DAT_183264ef8 ^ uVar6) + (uVar6 & _DAT_183264ef8) * 2) * -_DAT_183264ff8;
  uVar3 = (uVar3 | _DAT_183264df0) + (uVar3 & _DAT_183264df0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183264f10 = func_0x00018a9b9450((uVar3 | uVar6) + (uVar3 & uVar6));
  auVar14 = _DAT_1800170c0;
  uVar21 = (uint)(uVar22 >> 0x20);
  auVar18._8_4_ = (int)uVar22;
  auVar18._0_8_ = uVar22;
  auVar18._12_4_ = uVar21;
  uVar6 = auVar18._8_8_ >> 0x20;
  auVar41 = auVar18 ^ auVar41;
  uVar10 = auVar41._0_4_;
  uVar20 = auVar41._8_4_;
  uVar4 = auVar41._8_8_ >> 0x20;
  uVar3 = _DAT_183264f10 >> 1 | _DAT_183264f10;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_183264f10;
  auVar42._0_8_ =
       (((_DAT_1818dec40 & 0xffffffff) * (ulonglong)uVar10 +
         ((_DAT_1818dec70 & 0xffffffff) * (ulonglong)uVar10 +
          (auVar41._0_8_ >> 0x20) * (_DAT_1818dec40 & 0xffffffff) << 0x20) +
        (_DAT_1818dec50 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_DAT_1818dec60 & 0xffffffff) * (uVar22 & 0xffffffff) +
         (ulonglong)uVar21 * (_DAT_1818dec50 & 0xffffffff) << 0x20) +
        (_DAT_1818dec20 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_DAT_1818dec30 & 0xffffffff) * (uVar22 & 0xffffffff) +
         (ulonglong)uVar21 * (_DAT_1818dec20 & 0xffffffff) << 0x20) +
        (_DAT_1818dec00 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_DAT_1818dec10 & 0xffffffff) * (uVar22 & 0xffffffff) +
         (ulonglong)uVar21 * (_DAT_1818dec00 & 0xffffffff) << 0x20)) -
       ((ulonglong)uVar10 * (_DAT_1818decc0 & 0xffffffff) +
        ((_DAT_1818decd0 & 0xffffffff) * (ulonglong)uVar10 +
         (auVar41._0_8_ >> 0x20) * (_DAT_1818decc0 & 0xffffffff) << 0x20) +
       (uVar22 & 0xffffffff) * (ulonglong)_DAT_1818deca0 +
       ((_DAT_1818decb0 & 0xffffffff) * (uVar22 & 0xffffffff) +
        (ulonglong)uVar21 * (ulonglong)_DAT_1818deca0 << 0x20) +
       (_DAT_1818dec80 & 0xffffffff) * (uVar22 & 0xffffffff) +
       ((_DAT_1818dec90 & 0xffffffff) * (uVar22 & 0xffffffff) +
        (ulonglong)uVar21 * (_DAT_1818dec80 & 0xffffffff) << 0x20))) + _DAT_1818dece0;
  auVar42._8_8_ =
       (((_UNK_1818dec48 & 0xffffffff) * (ulonglong)uVar20 +
         ((_UNK_1818dec78 & 0xffffffff) * (ulonglong)uVar20 + uVar4 * (_UNK_1818dec48 & 0xffffffff)
         << 0x20) +
        (_UNK_1818dec58 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_UNK_1818dec68 & 0xffffffff) * (uVar22 & 0xffffffff) +
         uVar6 * (_UNK_1818dec58 & 0xffffffff) << 0x20) +
        (_UNK_1818dec28 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_UNK_1818dec38 & 0xffffffff) * (uVar22 & 0xffffffff) +
         uVar6 * (_UNK_1818dec28 & 0xffffffff) << 0x20) +
        (_UNK_1818dec08 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_UNK_1818dec18 & 0xffffffff) * (uVar22 & 0xffffffff) +
         uVar6 * (_UNK_1818dec08 & 0xffffffff) << 0x20)) -
       ((auVar41._8_8_ & 0xffffffff) * (_UNK_1818decc8 & 0xffffffff) +
        ((_UNK_1818decd8 & 0xffffffff) * (ulonglong)uVar20 + uVar4 * (_UNK_1818decc8 & 0xffffffff)
        << 0x20) +
       (auVar18._8_8_ & 0xffffffff) * (ulonglong)_UNK_1818deca8 +
       ((_UNK_1818decb8 & 0xffffffff) * (uVar22 & 0xffffffff) + uVar6 * _UNK_1818deca8 << 0x20) +
       (_UNK_1818dec88 & 0xffffffff) * (uVar22 & 0xffffffff) +
       ((_UNK_1818dec98 & 0xffffffff) * (uVar22 & 0xffffffff) +
        uVar6 * (_UNK_1818dec88 & 0xffffffff) << 0x20))) + _UNK_1818dece8;
  _DAT_183265098 = _DAT_183265068 ^ uVar3 ^ auVar42._0_8_;
  _DAT_183264e70 = (_DAT_183264e70 ^ uVar3) + auVar42._0_8_ ^ 0xe0b2596952e3e2a9;
  _DAT_183264f08 = (_DAT_183264f08 * -0x7d9b04d80596918d ^ _DAT_183264e70) + uVar3;
  _DAT_183264f78 = _DAT_183264f08 ^ _DAT_183264e70;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar42._0_8_ ^ 0x84222325;
  auVar11 = pshufb(auVar19 ^ _DAT_1818decf0,_DAT_1800170c0);
  uVar6 = auVar11._8_8_ + auVar11._0_8_;
  uVar3 = uVar6 + _DAT_183264f08;
  if (auVar11._4_4_ < 0) {
    uVar3 = _DAT_183264de8 ^ uVar6;
  }
  _DAT_183264e30 = auVar42._0_8_;
  _DAT_183264f70 = func_0x00018a9b9450(SUB161(auVar19 ^ _DAT_1818decf0,5) ^ uVar3);
  uVar3 = _DAT_183264f70 - (_DAT_183264f70 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183264f70;
  auVar27._8_4_ = 0xffffffff;
  auVar27._0_8_ = 0xffffffffffffffff;
  auVar27._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar27 ^ auVar42,0);
  uVar6 = (((ulonglong)_DAT_1818ded00 * (auVar42._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_1818ded30 * (auVar42._0_8_ & 0xffffffff) +
             (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1818ded00 << 0x20) +
           (ulonglong)_DAT_1818ded10 * (auVar42._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_1818ded20 * (auVar42._0_8_ & 0xffffffff) +
            (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1818ded10 << 0x20)) -
          ((ulonglong)uVar10 * (ulonglong)_DAT_1818ded80 +
           ((ulonglong)_DAT_1818ded90 * (ulonglong)uVar10 +
            (SUB168(auVar27 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_1818ded80 << 0x20) +
          (auVar42._0_8_ & 0xffffffff) * (ulonglong)_DAT_1818ded60 +
          ((ulonglong)_DAT_1818ded70 * (auVar42._0_8_ & 0xffffffff) +
           (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1818ded60 << 0x20) +
          (ulonglong)_DAT_1818ded40 * (auVar42._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_1818ded50 * (auVar42._0_8_ & 0xffffffff) +
           (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1818ded40 << 0x20))) + 0x33b7b856654e8b59;
  _DAT_1832650e0 = _DAT_183265090 ^ uVar3 ^ uVar6;
  _DAT_183264d58 = (_DAT_183264d58 ^ uVar3) + uVar6 ^ 0xebdc81f287460030;
  _DAT_183264de0 = (_DAT_183264de0 * 0x2fb05390223b0bab ^ _DAT_183264d58) + uVar3;
  _DAT_183264fb0 = _DAT_183264de0 ^ _DAT_183264d58;
  auVar28._8_8_ = uVar6;
  auVar28._0_8_ = unaff_RBX ^ 0x84222325;
  auVar14 = pshufb(auVar28 ^ _DAT_1818deda0,auVar14);
  uVar4 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar4 + _DAT_183264f38;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_183264fc8 ^ uVar4;
  }
  _DAT_183264e70 = uVar6;
  _DAT_183264f60 = func_0x00018a9b9450(SUB161(auVar28 ^ _DAT_1818deda0,5) ^ uVar3);
  _DAT_183264f70 = uVar6 ^ unaff_RBX;
  _DAT_183264ef8 = (_DAT_183264ef8 ^ _DAT_183264f60) + _DAT_183264f70 ^ 0xf15ba858b0b46c68;
  _DAT_183264f10 = (_DAT_183264f10 * 0x4f8cc1d08f256bc5 ^ _DAT_183264ef8) + _DAT_183264f60;
  _DAT_183264ee8 = _DAT_183264f10 ^ _DAT_183264ef8;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x2221,0x76);
  cVar2 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a9b9334 (image 18a9b9334) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b9334(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818de118)();
  return;
}



// ===== continuation @ rva a9b9209 (image 18a9b9209) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b9209(void)

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



// ===== continuation @ rva a9b9166 (image 18a9b9166) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b9166(void)

{
  char in_AL;
  longlong unaff_RBX;
  longlong unaff_R14;
  
  switch((unaff_R14 == 0 || unaff_RBX == 0) || in_AL != '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a9b6187 (image 18a9b6187) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b6187(void)

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



// ===== continuation @ rva a9b620a (image 18a9b620a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b620a(void)

{
  (*_DAT_1818de058)(_DAT_1832650b8);
  return;
}



// ===== continuation @ rva a9b926b (image 18a9b926b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b926b(void)

{
  FUN_190ddfc90();
  (*_DAT_1818de218)();
  return;
}



// ===== continuation @ rva a9bd0dd (image 18a9bd0dd) =====

void FUN_18a9bd0dd(void)

{
  return;
}



// ===== continuation @ rva a9b95fa (image 18a9b95fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b95fa(void)

{
  FUN_190ddce00();
  (*_DAT_1818eea08)();
  return;
}



// ===== continuation @ rva aa912d2 (image 18aa912d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa912d2(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x68))();
  (*_DAT_1818fc0c8)();
  return;
}



// ===== continuation @ rva a9c8bd7 (image 18a9c8bd7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9c8bd7(void)

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



// ===== continuation @ rva a9c7fbd (image 18a9c7fbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9c7fbd(void)

{
  (*_DAT_1818fd048)();
  return;
}



// ===== continuation @ rva aa912e5 (image 18aa912e5) =====

void FUN_18aa912e5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva aa47ef0 (image 18aa47ef0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aa47ef0(void)

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



// ===== continuation @ rva aa40521 (image 18aa40521) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018aa4054a */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18aa40521(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva aa204c4 (image 18aa204c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa204c4(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190ddfc90(in_stack_00000048,&stack0x00000058,*_DAT_18301ee50 + 0x509,*_DAT_18301ee50 + 0x4c9,
                0x19);
  (*_DAT_1818eaf88)();
  return;
}



// ===== continuation @ rva aa72987 (image 18aa72987) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa72987(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1818e3648)();
  return;
}



// ===== continuation @ rva aa6dede (image 18aa6dede) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aa6dede(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  
  FUN_184117d80(in_stack_00000048);
  cVar1 = (**(code **)(*in_stack_00000048 + 0x720))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aa50645 (image 18aa50645) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa50645(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x68))();
  (*_DAT_1818fc0c8)();
  return;
}



// ===== continuation @ rva aa48320 (image 18aa48320) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa48320(void)

{
  longlong *in_stack_00000048;
  
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000048 + 0x720))(in_stack_00000048);
  (*_DAT_1818f71c8)();
  return;
}



// ===== continuation @ rva a94866d (image 18a94866d) =====

void FUN_18a94866d(void)

{
  return;
}



// ===== continuation @ rva a93f8ef (image 18a93f8ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f8ef(void)

{
  FUN_190ddce00();
  (*_DAT_1818c95b8)();
  return;
}



// ===== continuation @ rva a94719d (image 18a94719d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a94719d(void)

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



// ===== continuation @ rva a948547 (image 18a948547) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a948547(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c9948)();
  return;
}



// ===== continuation @ rva a93f922 (image 18a93f922) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f922(void)

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



// ===== continuation @ rva a9486d9 (image 18a9486d9) =====

void FUN_18a9486d9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a947816 (image 18a947816) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a947816(void)

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



// ===== continuation @ rva a9473aa (image 18a9473aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9473aa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1818c9c48)();
  return;
}



// ===== continuation @ rva a94825b (image 18a94825b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a94825b(void)

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



// ===== continuation @ rva a947bf2 (image 18a947bf2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a947bf2(void)

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



// ===== continuation @ rva a947e21 (image 18a947e21) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a947e21(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818c9f18)();
  return;
}



// ===== continuation @ rva a948a8f (image 18a948a8f) =====

void FUN_18a948a8f(void)

{
  return;
}



// ===== continuation @ rva a94882f (image 18a94882f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a94882f(void)

{
  FUN_190ddfc90();
  (*_DAT_1818cbd08)();
  return;
}



// ===== continuation @ rva a948a42 (image 18a948a42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a948a42(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_1818cbd98)();
  return;
}



// ===== continuation @ rva a9489ee (image 18a9489ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9489ee(void)

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



// ===== continuation @ rva a948886 (image 18a948886) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a948886(void)

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



// ===== continuation @ rva a9489af (image 18a9489af) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9489af(void)

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



// ===== continuation @ rva a948a97 (image 18a948a97) =====

void FUN_18a948a97(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a948862 (image 18a948862) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a948862(void)

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



// ===== continuation @ rva a94895b (image 18a94895b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a94895b(void)

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



// ===== continuation @ rva a9488f0 (image 18a9488f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9488f0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1818cbdc8)();
  return;
}



// ===== continuation @ rva a94889c (image 18a94889c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a94889c(void)

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



// ===== continuation @ rva a9489d3 (image 18a9489d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9489d3(void)

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



// ===== continuation @ rva a93f430 (image 18a93f430) =====

void FUN_18a93f430(void)

{
  return;
}



// ===== continuation @ rva a93f27d (image 18a93f27d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f27d(void)

{
  FUN_190ddfc90();
  (*_DAT_1818c9418)();
  return;
}



// ===== continuation @ rva a93f438 (image 18a93f438) =====

void FUN_18a93f438(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a93f3ec (image 18a93f3ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f3ec(void)

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



// ===== continuation @ rva a93f370 (image 18a93f370) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f370(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c93b8)();
  return;
}



// ===== continuation @ rva a93f398 (image 18a93f398) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f398(void)

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



// ===== continuation @ rva a93f33c (image 18a93f33c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f33c(void)

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



// ===== continuation @ rva a93f2ea (image 18a93f2ea) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f2ea(void)

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



// ===== continuation @ rva a93f323 (image 18a93f323) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f323(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1818c9438)();
  return;
}



// ===== continuation @ rva a93f2d4 (image 18a93f2d4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f2d4(void)

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



// ===== continuation @ rva a93f410 (image 18a93f410) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f410(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818c9408)();
  return;
}



