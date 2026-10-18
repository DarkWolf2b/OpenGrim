// ===== continuation @ rva e0113b7 (image 18e0113b7) =====

void FUN_18e0113b7(void)

{
  return;
}



// ===== continuation @ rva e0111fd (image 18e0111fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0111fd(void)

{
  FUN_190ddfc90();
  (*_DAT_18244ff88)();
  return;
}



// ===== continuation @ rva e0113bf (image 18e0113bf) =====

void FUN_18e0113bf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e0112bc (image 18e0112bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e0112bc(void)

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



// ===== continuation @ rva e011339 (image 18e011339) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e011339(void)

{
  FUN_190dd9df0();
  (*_DAT_18244ffb8)();
  return;
}



// ===== continuation @ rva e0112a3 (image 18e0112a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0112a3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18244ff58)();
  return;
}



// ===== continuation @ rva e011230 (image 18e011230) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e011230(void)

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



// ===== continuation @ rva e011318 (image 18e011318) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e011318(void)

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



// ===== continuation @ rva e0112f0 (image 18e0112f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0112f0(void)

{
  FUN_190dd72e0();
  (*_DAT_18244ff98)();
  return;
}



// ===== continuation @ rva e080d57 (image 18e080d57) =====

void FUN_18e080d57(void)

{
  return;
}



// ===== continuation @ rva e0643fb (image 18e0643fb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018e064451 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18e0643fb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva e06443a (image 18e06443a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018e064451 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18e06443a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva e06cc1e (image 18e06cc1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018e06dead */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18e06cc1e(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar7 = (_DAT_18339bd20 ^ _DAT_1824637f0) + _DAT_18339bf30 + 0x69f8e0db;
  uVar8 = (_DAT_18339bf30 ^ _UNK_1824637f8) + _DAT_18339bd20 + 0x8362d78d;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339bd20 ^ _DAT_1824637f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18339bf30 ^ _UNK_1824637f8;
  uVar4 = (ulonglong)(uint)(int)cVar1;
  _DAT_18339bb30 =
       func_0x00018e080f40((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18339bd20 + 0x8362d78d) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339bf30 + 0x69f8e0db));
  uVar7 = _DAT_18339bb30 - (_DAT_18339bb30 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18339bb30) & 0xfffffffffffffff;
  _DAT_18339be50 = (_DAT_18339be50 ^ uVar7) + 0xeffad7ff ^ 0xb4acfeb662f7b14a;
  _DAT_18339bfb8 = (_DAT_18339bfb8 * -0xc9b7835bc7233bd ^ _DAT_18339be50) + uVar7;
  _DAT_18339bfb0 = _DAT_18339bfb8 ^ _DAT_18339be50;
  _DAT_18339bd00 = 0xeffad7ff;
  _DAT_18339bfd0 = func_0x00018e080f40(_DAT_18339bc38 ^ 0xff920005a1003845);
  uVar7 = (_DAT_18339bfd0 ^ 0x119040) * 0x15ed8f0a83acfa13;
  _DAT_18339be00 = (_DAT_18339be00 ^ uVar7) + 0x8a599144 ^ 0x284f3531bbb970b2;
  _DAT_18339bf80 = (_DAT_18339bf80 * 0x1865878a5773e473 ^ _DAT_18339be00) + uVar7;
  _DAT_18339bda8 = 0x8a599144;
  _DAT_18339be70 = func_0x00018e080f40(_DAT_18339bfc8 + 0xffa5fff3cb000affU ^ 0x5f);
  _DAT_18339c068 =
       (_DAT_18339c068 ^ _DAT_18339be70 & 0x7fffffffffffffff) - 0x89378df8 ^ 0x24caf877672fb9bb;
  _DAT_18339bfa8 =
       (_DAT_18339bfa8 * 0x7cc09c2b24409ab1 ^ _DAT_18339c068) +
       (_DAT_18339be70 & 0x7fffffffffffffff);
  _DAT_18339bb68 = _DAT_18339bfa8 ^ _DAT_18339c068;
  _DAT_18339bc18 = _DAT_18339c098 ^ 0xffffffff76c87208;
  _DAT_18339bb98 = 0x76c87208;
  _DAT_18339bf98 = func_0x00018e080f40(_DAT_18339bd08 + 0xff5e0004e20014ffU ^ 0x5f);
  uVar7 = _DAT_18339bf98 ^ 0x89378df8;
  _DAT_18339bbf8 = _DAT_18339be20 ^ uVar7 ^ 0x89378ef7;
  _DAT_18339bfd8 = (_DAT_18339bfd8 ^ uVar7) + 0x89378ef7 ^ 0xe3ac41a018828dc;
  _DAT_18339bf20 = (_DAT_18339bf20 * -0x49148f83867f0fa3 ^ _DAT_18339bfd8) + uVar7;
  _DAT_18339bda8 = _DAT_18339bf20 ^ _DAT_18339bfd8;
  _DAT_18339bf08 = 0x89378ef7;
  _DAT_18339bef0 = func_0x00018e080f40(_DAT_18339c048 ^ 0xffb1002ada00525a);
  uVar7 = (_DAT_18339bef0 ^ 0x3fab0c6c925e75b8) & 0x7fffffffffffffff;
  _DAT_18339be80 = _DAT_18339bb30 ^ uVar7 ^ 0x1000000ff;
  _DAT_18339bc50 = (_DAT_18339bc50 ^ uVar7) + 0x1000000ff ^ 0x9852f072ebe4c021;
  _DAT_18339bf90 = (_DAT_18339bf90 * -0x63423e0ed9a9511b ^ _DAT_18339bc50) + uVar7;
  _DAT_18339bfe8 = _DAT_18339bf90 ^ _DAT_18339bc50;
  _DAT_18339bd00 = 0xff;
  uVar7 = (_DAT_18339bb78 ^ _DAT_182463800) + _DAT_18339bb08 + 0x84222325;
  uVar8 = (_DAT_18339bb08 ^ _UNK_182463808) + _DAT_18339bb78 + 0xe39dcf00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339bb78 ^ _DAT_182463800;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18339bb08 ^ _UNK_182463808;
  _DAT_18339beb8 =
       func_0x00018e080f40((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18339bb78 + 0xe39dcf00) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339bb08 + 0x84222325));
  _DAT_18339bc58 = (_DAT_18339bc58 ^ _DAT_18339beb8) - 0xe39dcf00 ^ 0x92b757553417c31;
  _DAT_18339be68 = (_DAT_18339be68 * 0x2190e941d6198245 ^ _DAT_18339bc58) + _DAT_18339beb8;
  _DAT_18339c030 = _DAT_18339be68 ^ _DAT_18339bc58;
  _DAT_18339bf48 = 0x1c623100;
  uVar7 = (_DAT_18339bba0 ^ _DAT_182463810) + _DAT_18339bcf8 + 0x842223da;
  uVar8 = (_DAT_18339bcf8 ^ _UNK_182463818) + _DAT_18339bba0 + 0xe39dcf00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339bba0 ^ _DAT_182463810;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18339bcf8 ^ _UNK_182463818;
  _DAT_18339bee0 =
       func_0x00018e080f40((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18339bba0 + 0xe39dcf00) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339bcf8 + 0x842223da));
  uVar7 = _DAT_18339bee0 & 0x3ffffffff;
  _DAT_18339bf30 = _DAT_18339c0f8 ^ uVar7 ^ 0xe39dcfff;
  _DAT_18339be80 = (_DAT_18339be80 ^ uVar7) + 0xe39dcfff ^ 0x3f8dec4603cd4bce;
  _DAT_18339bbe0 = (_DAT_18339bbe0 * 0x74accaa9c2ed37b ^ _DAT_18339be80) + uVar7;
  _DAT_18339c0e8 = _DAT_18339bbe0 ^ _DAT_18339be80;
  _DAT_18339bdb8 = 0xe39dcfff;
  uVar7 = (~_DAT_18339be70 + 0x2ab56aa1) *
          ((_DAT_18339bd78 ^ 0x5168b57a) + (ulonglong)((uint)_DAT_18339bd78 & 0x5168b57a) * 2);
  uVar7 = (uVar7 | _DAT_18339bf08) + (uVar7 & _DAT_18339bf08);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18339c060 = func_0x00018e080f40((uVar7 | 0x7bdddfda) + (ulonglong)((uint)uVar7 & 0x7bdddfda))
  ;
  uVar7 = (_DAT_18339c060 ^ 0x2ab56aa0) & 0x7fffffffffff;
  _DAT_18339c0e0 = _DAT_18339bc60 ^ uVar7 ^ 0x1000000ff;
  _DAT_18339bc70 = (_DAT_18339bc70 ^ uVar7) + 0x1000000ff ^ 0x3a935c49ae07ae54;
  _DAT_18339bb10 = (_DAT_18339bb10 * 0x4fed21ee964d3a7b ^ _DAT_18339bc70) + uVar7;
  _DAT_18339c080 = _DAT_18339bb10 ^ _DAT_18339bc70;
  _DAT_18339bfe0 = 0xff;
  uVar7 = (~_DAT_18339c090 + 0x8a599145) *
          ((_DAT_18339bf60 ^ 0x6bd8f4da) + (ulonglong)((uint)_DAT_18339bf60 & 0x6bd8f4da) * 2);
  uVar7 = (uVar7 | _DAT_18339bb98) + (uVar7 & _DAT_18339bb98);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18339c028 = func_0x00018e080f40((uVar7 | 0xe181659e) + (ulonglong)((uint)uVar7 & 0xe181659e))
  ;
  uVar7 = _DAT_18339c058 & 0x7fffffffffffffff;
  _DAT_18339c018 = _DAT_18339c0b8 ^ uVar7 ^ 0x17a546943;
  _DAT_18339bce0 = (_DAT_18339bce0 ^ uVar7) + 0x17a546943 ^ 0xefcaacd5594db598;
  _DAT_18339be48 = (_DAT_18339be48 * -0x39d9899257013e89 ^ _DAT_18339bce0) + uVar7;
  _DAT_18339bed8 = _DAT_18339be48 ^ _DAT_18339bce0;
  _DAT_18339bc60 = 0x7a546943;
  _DAT_18339bb00 = func_0x00018e080f40(_DAT_18339beb0 + 0xffa500619e007eff ^ 0xde);
  uVar7 = _DAT_18339bb00 - (_DAT_18339bb00 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_18339bb00;
  uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = uVar8 ^ 0xeffad7ff ^
          (ulonglong)
          ((uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2)
  ;
  _DAT_18339bbc0 = (_DAT_18339bbc0 ^ uVar7) + 0x65a346bb ^ 0xcbbeb72542bae942;
  _DAT_18339beb8 = (_DAT_18339beb8 * 0x1a8dd096d43f99e1 ^ _DAT_18339bbc0) + uVar7;
  _DAT_18339bf70 = _DAT_18339beb8 ^ _DAT_18339bbc0;
  _DAT_18339be78 = 0x65a346bb;
  _DAT_18339bc00 = func_0x00018e080f40(_DAT_18339bfd8 + 0xffdb005e79ff7eff ^ 0xd0);
  uVar7 = ((_DAT_18339bc00 ^ 0xeffbd7ff) & 0x1ffffffff) * 0xf92b4154eee6e75;
  _DAT_18339c0e0 = (_DAT_18339c0e0 ^ uVar7) + 0x8a589144 ^ 0xc4a5b216b126c43c;
  _DAT_18339bc08 = (_DAT_18339bc08 * -0x508c00b2d5a98a89 ^ _DAT_18339c0e0) + uVar7;
  _DAT_18339c048 = _DAT_18339bc08 ^ _DAT_18339c0e0;
  _DAT_18339bbf8 = 0x8a589144;
  uVar7 = (~_DAT_18339bdb0 + 0x14b12289) *
          ((_DAT_18339c000 ^ 0xe181659e) + (ulonglong)((uint)_DAT_18339c000 & 0xe181659e) * 2);
  uVar7 = (uVar7 | _DAT_18339c010) + (uVar7 & _DAT_18339c010);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18339bb88 = func_0x00018e080f40((uVar7 | 0xf5304716) + (ulonglong)((uint)uVar7 & 0xf5304716))
  ;
  uVar7 = _DAT_18339bb88 * 0x5c31d713028e7e77;
  _DAT_18339bd30 = _DAT_18339bcc8 ^ uVar7 ^ 0x7a546943;
  _DAT_18339bba8 = (_DAT_18339bba8 ^ uVar7) + 0x7a546943 ^ 0x5b7104dba5f0581e;
  _DAT_18339bfa0 = (_DAT_18339bfa0 * 0x687e273bb0cb70ab ^ _DAT_18339bba8) + uVar7;
  _DAT_18339be50 = _DAT_18339bfa0 ^ _DAT_18339bba8;
  _DAT_18339bd60 = 0x7a546943;
  uVar7 = (_DAT_18339bfe8 ^ _DAT_182463820) + _DAT_18339bdb0 + 0xfe764a66;
  uVar8 = (_DAT_18339bdb0 ^ _UNK_182463828) + _DAT_18339bfe8 + 0x7a546943;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339bfe8 ^ _DAT_182463820;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18339bdb0 ^ _UNK_182463828;
  _DAT_18339bca0 =
       func_0x00018e080f40((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18339bfe8 + 0x7a546943) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339bdb0 + 0xfe764a66));
  _DAT_18339bb78 = _DAT_18339bb78 ^ _DAT_18339bca0 ^ 0x55fe1e177447314c;
  _DAT_18339bb60 = (_DAT_18339bb60 * 0x2fc38541736764b ^ _DAT_18339bb78) + _DAT_18339bca0;
  _DAT_18339c0b0 = _DAT_18339bb60 ^ _DAT_18339bb78;
  _DAT_18339bc60 = 0;
  _DAT_18339bc90 = func_0x00018e080f40(_DAT_18339bd80 + 0xfff5008c23001cffU ^ 0xb4);
  uVar2 = ~(uint)_DAT_18339bc90 & 0xeffad7ff;
  uVar7 = (ulonglong)uVar2 << 0x2e | (ulonglong)(uVar2 >> 0x12);
  _DAT_18339bb20 = (_DAT_18339bb20 ^ uVar7) + 0x10052800 ^ 0x43ced7da39597fe8;
  _DAT_18339bb00 = (_DAT_18339bb00 * 0x50e8929c8f854677 ^ _DAT_18339bb20) + uVar7;
  _DAT_18339c000 = _DAT_18339bb00 ^ _DAT_18339bb20;
  _DAT_18339bce0 = 0x10052800;
  uVar7 = ((_DAT_18339be78 ^ 0x842223da) + (ulonglong)((uint)_DAT_18339be78 & 0x842223da) * 2) *
          -_DAT_18339be50;
  uVar7 = (uVar7 | _DAT_18339bce8) + (uVar7 & _DAT_18339bce8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18339be68 = func_0x00018e080f40((uVar7 | 0x842223da) + (ulonglong)((uint)uVar7 & 0x842223da))
  ;
  uVar7 = _DAT_18339be68 >> 1 | _DAT_18339be68;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_18339be68;
  _DAT_18339bd28 = _DAT_18339bf38 ^ uVar7 ^ 0xff;
  _DAT_18339bef8 = (_DAT_18339bef8 ^ uVar7) + 0xff ^ 0x2a2e751b67f1148e;
  _DAT_18339c0a0 = (_DAT_18339c0a0 * -0xd9185f63fc1bf57 ^ _DAT_18339bef8) + uVar7;
  _DAT_18339bc50 = _DAT_18339c0a0 ^ _DAT_18339bef8;
  _DAT_18339bff0 = 0xff;
  uVar7 = (~_DAT_18339bd40 + 0xeddac3ff) *
          ((_DAT_18339bf60 ^ 0x69f8e0db) + (ulonglong)((uint)_DAT_18339bf60 & 0x69f8e0db) * 2);
  uVar7 = (uVar7 | _DAT_18339c0d0) + (uVar7 & _DAT_18339c0d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18339bd88 = func_0x00018e080f40((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  uVar7 = (ulonglong)(~(uint)_DAT_18339bd88 & 0xeddac3fe);
  _DAT_18339bb80 = _DAT_18339bb80 ^ uVar7 ^ 0xb72b9a27b3423a4c;
  _DAT_18339be60 = (_DAT_18339be60 * -0xed1ea15747bce49 ^ _DAT_18339bb80) + uVar7;
  _DAT_18339bda8 = _DAT_18339be60 ^ _DAT_18339bb80;
  _DAT_18339be70 = 0;
  _DAT_18339bc38 = func_0x00018e080f40(_DAT_18339bd70 + 0xffe2ff84260021ffU ^ 0x32);
  _DAT_18339bc10 = _DAT_18339bd30 ^ _DAT_18339bf50 ^ 0xff;
  _DAT_18339c010 = (_DAT_18339c010 ^ _DAT_18339bf50) + 0xff ^ 0xe40011e46ef0fe60;
  _DAT_18339bf00 = (_DAT_18339bf00 * -0x6c2b0525e9c51f9d ^ _DAT_18339c010) + _DAT_18339bf50;
  _DAT_18339bb60 = _DAT_18339bf00 ^ _DAT_18339c010;
  _DAT_18339bdc8 = 0xff;
  uVar7 = (~_DAT_18339bd98 + 0x100) *
          ((uVar4 ^ 0x84222325 ^ _DAT_18339bed0) +
          (ulonglong)((uint)_DAT_18339bed0 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar7 = (uVar7 | _DAT_18339bd58) + (uVar7 & _DAT_18339bd58);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18339bd90 =
       func_0x00018e080f40((uVar4 ^ 0x842223da | uVar7) +
                           (ulonglong)((uint)(uVar4 ^ 0x842223da) & (uint)uVar7));
  _DAT_18339bc50 = uVar4 & 0xff;
  _DAT_18339bf70 = (_DAT_18339bf70 ^ _DAT_18339bd90 ^ 0xff) + _DAT_18339bc50 ^ 0x8ffda81ae149f74b;
  _DAT_18339bcf0 = (_DAT_18339bcf0 * 0x5d336bc84bd93203 ^ _DAT_18339bf70) + (_DAT_18339bd90 ^ 0xff);
  _DAT_18339bf10 = _DAT_18339bcf0 ^ _DAT_18339bf70;
  uVar4 = _DAT_18339bc50 << 0x20;
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_182463830,_DAT_1800170c0);
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar7 = uVar8 + _DAT_18339bdc0;
  if (auVar6._4_4_ < 0) {
    uVar7 = _DAT_18339bbf8 ^ uVar8;
  }
  _DAT_18339bc58 = func_0x00018e080f40(SUB161(auVar5 ^ _DAT_182463830,5) ^ uVar7);
  _DAT_18339c0f8 = uVar4 | in_stack_00000050;
  _DAT_18339bb88 =
       (_DAT_18339bb88 ^ _DAT_18339bc58 & 0x7fffffffffffffff) + _DAT_18339c0f8 ^ 0xdc6d60d45bf8c130;
  _DAT_18339beb0 =
       (_DAT_18339beb0 * -0x1ce960213cce6eb5 ^ _DAT_18339bb88) +
       (_DAT_18339bc58 & 0x7fffffffffffffff);
  _DAT_18339bfd8 = _DAT_18339beb0 ^ _DAT_18339bb88;
  (**(code **)(*unaff_RSI + 0x558))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva e08003f (image 18e08003f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08003f(void)

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



// ===== continuation @ rva e068396 (image 18e068396) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018e0683e7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18e068396(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva e07a028 (image 18e07a028) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e07a028(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar6 = (_DAT_18339bf08 ^ _DAT_182463d00) + _DAT_18339bc98 + 0x14207b19;
  uVar7 = (_DAT_18339bc98 ^ _UNK_182463d08) + _DAT_18339bf08 + 0xcaa2a7d2;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18339bf08 ^ _DAT_182463d00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339bc98 ^ _UNK_182463d08;
  _DAT_18339be60 =
       func_0x00018e080f40((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339bf08 + 0xcaa2a7d2) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18339bc98 + 0x14207b19));
  uVar6 = (ulonglong)(~(uint)_DAT_18339be60 & 0x9002583c);
  _DAT_18339bc10 = (_DAT_18339bc10 ^ uVar6) + 0xdaa2fffe ^ 0xada2496546c03671;
  _DAT_18339c038 = (_DAT_18339c038 * -0x6a365826997a25f1 ^ _DAT_18339bc10) + uVar6;
  _DAT_18339be20 = _DAT_18339c038 ^ _DAT_18339bc10;
  _DAT_18339bf48 = 0xdaa2fffe;
  uVar6 = (_DAT_18339c0d8 ^ _DAT_182463d10) + _DAT_18339bb18 + 0x84222325;
  uVar7 = (_DAT_18339bb18 ^ _UNK_182463d18) + _DAT_18339c0d8 + 0x7b7d7690;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18339c0d8 ^ _DAT_182463d10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339bb18 ^ _UNK_182463d18;
  _DAT_18339bb68 =
       func_0x00018e080f40((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339c0d8 + 0x7b7d7690) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18339bb18 + 0x84222325));
  uVar6 = (_DAT_18339bb68 ^ 0x7b7d7690) >> 1 & 0xffffffffffff;
  _DAT_18339bdd8 = (_DAT_18339bdd8 ^ uVar6) - 0x7b7d7690 ^ 0x586aa7c79c58164f;
  _DAT_18339bc60 = (_DAT_18339bc60 * 0x43cc25065c369305 ^ _DAT_18339bdd8) + uVar6;
  _DAT_18339bcd8 = _DAT_18339bc60 ^ _DAT_18339bdd8;
  _DAT_18339bd30 = 0x84828970;
  _DAT_18339bb68 = func_0x00018e080f40(_DAT_18339c078 + 0xffb3000f460028ffU ^ 0xe3);
  uVar6 = _DAT_18339bb68 << 0x2d | _DAT_18339bb68 >> 0x13 & 0xffffffffff800000;
  _DAT_18339bf00 = _DAT_18339bf58 ^ uVar6 ^ 0x7b7d778f;
  _DAT_18339bcf0 = (_DAT_18339bcf0 ^ uVar6) + 0x7b7d778f ^ 0x684340f1753f222f;
  _DAT_18339bda8 = (_DAT_18339bda8 * -0x32665f1dc47ad80b ^ _DAT_18339bcf0) + uVar6;
  _DAT_18339c088 = _DAT_18339bda8 ^ _DAT_18339bcf0;
  _DAT_18339bd68 = 0x7b7d778f;
  uVar6 = (_DAT_18339bfc8 ^ _DAT_182463d20) + _DAT_18339c080 + 0x842223da;
  uVar7 = (_DAT_18339c080 ^ _UNK_182463d28) + _DAT_18339bfc8 + 0x14a33be8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18339bfc8 ^ _DAT_182463d20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339c080 ^ _UNK_182463d28;
  _DAT_18339bc80 =
       func_0x00018e080f40((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339bfc8 + 0x14a33be8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18339c080 + 0x842223da));
  uVar6 = (ulonglong)(~((int)_DAT_18339bc80 * 0x7dafa32f) & 0xff);
  _DAT_18339bf60 = _DAT_18339bf98 ^ uVar6 ^ 0x14a33ce7;
  _DAT_18339be30 = (_DAT_18339be30 ^ uVar6) + 0x14a33ce7 ^ 0x8707eb61920107f2;
  _DAT_18339be90 = (_DAT_18339be90 * 0x1b36f29ec9e521af ^ _DAT_18339be30) + uVar6;
  _DAT_18339bbc0 = _DAT_18339be90 ^ _DAT_18339be30;
  _DAT_18339bf08 = 0x14a33ce7;
  _DAT_18339be50 = func_0x00018e080f40(_DAT_18339bcc8 ^ 0xff2aff96c5ffaa85);
  uVar6 = _DAT_18339be50 ^ 0x14a33ce7;
  _DAT_18339c0e8 = _DAT_18339be50 ^ uVar6 ^ 0x1000000ff;
  _DAT_18339bd78 = (_DAT_18339bd78 ^ uVar6) + 0x1000000ff ^ 0xde9d20c8f84df8b;
  _DAT_18339bc48 = (_DAT_18339bc48 * 0xf0c43a1221808cf ^ _DAT_18339bd78) + uVar6;
  _DAT_18339bf58 = _DAT_18339bc48 ^ _DAT_18339bd78;
  _DAT_18339bb30 = 0xff;
  _DAT_18339bb68 = func_0x00018e080f40(_DAT_18339c020 ^ 0x5aff73f9ff6c1a);
  uVar6 = _DAT_18339bb68 >> 1 | _DAT_18339bb68;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ _DAT_18339bb68) & 0x7fffffffffffffff;
  _DAT_18339c020 = _DAT_18339bc60 ^ uVar6 ^ 0x78919fdb;
  _DAT_18339bdc0 = (_DAT_18339bdc0 ^ uVar6) + 0x78919fdb ^ 0x4e46f05ed059ac02;
  _DAT_18339bb58 = (_DAT_18339bb58 * -0x376059f531b2a3c5 ^ _DAT_18339bdc0) + uVar6;
  _DAT_18339bc28 = _DAT_18339bb58 ^ _DAT_18339bdc0;
  _DAT_18339bf20 = 0x78919fdb;
  _DAT_18339c048 = func_0x00018e080f40(_DAT_18339c018 ^ 0xb2ffb545ffca0c);
  uVar6 = ((_DAT_18339c048 & 0x7ffff) << 0x11 | _DAT_18339c048 >> 0x2f) ^ 0x78919fdb;
  _DAT_18339beb0 = _DAT_18339bbc8 ^ uVar6 ^ 0x1000000ff;
  _DAT_18339bd40 = (_DAT_18339bd40 ^ uVar6) + 0x1000000ff ^ 0xda66434aac776d5a;
  _DAT_18339bd68 = (_DAT_18339bd68 * 0x3e1ffea3116476b7 ^ _DAT_18339bd40) + uVar6;
  _DAT_18339bcb8 = _DAT_18339bd68 ^ _DAT_18339bd40;
  _DAT_18339c040 = 0xff;
  uVar6 = (~_DAT_18339bf20 + 0xf83ecb1a) *
          ((_DAT_18339bfc0 ^ 0x5e80dcdb) + (ulonglong)((uint)_DAT_18339bfc0 & 0x5e80dcdb) * 2);
  uVar6 = (uVar6 | _DAT_18339bfe8) + (uVar6 & _DAT_18339bfe8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18339bf70 = func_0x00018e080f40((uVar6 | 0xa6be17c2) + (ulonglong)((uint)uVar6 & 0xa6be17c2))
  ;
  uVar6 = _DAT_18339bf70 * -0x5dd4d16b9ac4fdc7;
  _DAT_18339bbc0 = _DAT_18339bd40 ^ uVar6 ^ 0x1d2e1cb17;
  _DAT_18339bdb0 = (_DAT_18339bdb0 ^ uVar6) + 0x1d2e1cb17 ^ 0x2b8d417708f81e82;
  _DAT_18339bfa0 = (_DAT_18339bfa0 * 0x2c4c7d5273310b1 ^ _DAT_18339bdb0) + uVar6;
  _DAT_18339bec8 = _DAT_18339bfa0 ^ _DAT_18339bdb0;
  _DAT_18339bea8 = 0xd2e1cb17;
  uVar6 = (~_DAT_18339be88 + 0xf83ecb1a) *
          ((_DAT_18339bc50 ^ 0x5e80dcdb) + (ulonglong)((uint)_DAT_18339bc50 & 0x5e80dcdb) * 2);
  uVar6 = (uVar6 | _DAT_18339bfe0) + (uVar6 & _DAT_18339bfe0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18339c030 = func_0x00018e080f40((uVar6 | 0xa6be17c2) + (ulonglong)((uint)uVar6 & 0xa6be17c2))
  ;
  uVar6 = (ulonglong)(~(uint)_DAT_18339c030 & 0xdaa2fffe);
  _DAT_18339bc38 = (_DAT_18339bc38 ^ uVar6) + 0xd822cb18 ^ 0xb0ef36136579c5ab;
  _DAT_18339bc70 = (_DAT_18339bc70 * -0x1d3e1c959cc51fb1 ^ _DAT_18339bc38) + uVar6;
  _DAT_18339bba8 = _DAT_18339bc70 ^ _DAT_18339bc38;
  _DAT_18339bfa8 = 0xd822cb18;
  uVar6 = (~_DAT_18339bca8 + 0xb0459631) *
          ((_DAT_18339bd30 ^ 0xa6be17c2) + (ulonglong)((uint)_DAT_18339bd30 & 0xa6be17c2) * 2);
  uVar6 = (uVar6 | _DAT_18339bcb0) + (uVar6 & _DAT_18339bcb0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18339beb0 = func_0x00018e080f40((uVar6 | 0x16fb81f2) + (ulonglong)((uint)uVar6 & 0x16fb81f2))
  ;
  uVar6 = (_DAT_18339beb0 ^ 0xb2ddb6f7) << 0x2e | (_DAT_18339beb0 ^ 0xb2ddb6f7) >> 0x12;
  _DAT_18339bcf0 = _DAT_18339bcd8 ^ uVar6 ^ 0xd2e1cb17;
  _DAT_18339bb48 = (_DAT_18339bb48 ^ uVar6) + 0xd2e1cb17 ^ 0x47adb14e3c682406;
  _DAT_18339bf88 = (_DAT_18339bf88 * -0x6e4be63a24945bbb ^ _DAT_18339bb48) + uVar6;
  _DAT_18339be98 = _DAT_18339bf88 ^ _DAT_18339bb48;
  _DAT_18339bce8 = 0xd2e1cb17;
  uVar6 = (_DAT_18339bdd0 ^ _DAT_182463d30) + _DAT_18339bce0 + 0x56c3e832;
  uVar7 = (_DAT_18339bce0 ^ _UNK_182463d38) + _DAT_18339bdd0 + 0xd2e1cb17;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18339bdd0 ^ _DAT_182463d30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339bce0 ^ _UNK_182463d38;
  lVar3 = func_0x00018e080f40((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339bdd0 + 0xd2e1cb17) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18339bce0 + 0x56c3e832));
  _DAT_18339beb8 = lVar3 * -0x6b1bde03c1080a8f;
  _DAT_18339bd08 = _DAT_18339bd08 ^ _DAT_18339beb8 ^ 0xb58c65019d185f26;
  _DAT_18339bf08 = (_DAT_18339bf08 * -0x38f9ef62be687e7d ^ _DAT_18339bd08) + _DAT_18339beb8;
  _DAT_18339bb20 = _DAT_18339bf08 ^ _DAT_18339bd08;
  _DAT_18339bb30 = 0;
  _DAT_18339bf50 = func_0x00018e080f40(_DAT_18339bdc0 + 0xffe3007b25ffddff ^ 0x7c);
  uVar6 = _DAT_18339bf50 ^ 0xff;
  _DAT_18339bfe0 = _DAT_18339c000 ^ uVar6 ^ 0xff;
  _DAT_18339bd88 = (_DAT_18339bd88 ^ uVar6) + 0xff ^ 0x183659241a4806c;
  _DAT_18339bd30 = (_DAT_18339bd30 * 0x74d447cfd1bc76bb ^ _DAT_18339bd88) + uVar6;
  _DAT_18339c028 = _DAT_18339bd30 ^ _DAT_18339bd88;
  _DAT_18339bdf0 = 0xff;
  uVar6 = (_DAT_18339c020 ^ _DAT_182463d40) + _DAT_18339bc20 + 0x5e80dcdb;
  uVar7 = (_DAT_18339bc20 ^ _UNK_182463d48) + _DAT_18339c020 + 0xffffffff;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18339c020 ^ _DAT_182463d40;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18339bc20 ^ _UNK_182463d48;
  _DAT_18339bbd0 =
       func_0x00018e080f40((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18339c020 + 0xffffffff) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18339bc20 + 0x5e80dcdb));
  _DAT_18339bfb0 =
       (_DAT_18339bfb0 ^ _DAT_18339bbd0 & 0xfffffffffffffe00) + 0x255d0001 ^ 0x4f2794ffc6c25b2;
  _DAT_18339bee0 =
       (_DAT_18339bee0 * -0x3c8c8e77614d6599 ^ _DAT_18339bfb0) +
       (_DAT_18339bbd0 & 0xfffffffffffffe00);
  _DAT_18339bdd0 = _DAT_18339bee0 ^ _DAT_18339bfb0;
  _DAT_18339bd70 = 0x255d0001;
  _DAT_18339c0d8 = func_0x00018e080f40(_DAT_18339bdc8 + 0x4c006439ffb2ffU ^ 0x39);
  uVar6 = (_DAT_18339c0d8 ^ 0x1fe8fc378fe8fffe) * 0x4ec18b5efd4f0ed9 ^ 0xdaa2fffe;
  _DAT_18339be28 = _DAT_18339be28 ^ uVar6 ^ 0xdf3b65ac0028d8a9;
  _DAT_18339bfd0 = (_DAT_18339bfd0 * -0x26b3f58d592dc35d ^ _DAT_18339be28) + uVar6;
  _DAT_18339beb8 = _DAT_18339bfd0 ^ _DAT_18339be28;
  _DAT_18339bd00 = 0;
  uVar6 = (_DAT_18339bd98 ^ 0x842223da) + _DAT_18339c0d0 + 0x842223da;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18339bd98 ^ 0x842223da;
  uVar7 = ((_DAT_18339c0d0 + _DAT_18339bd98) * 0x2000 | _DAT_18339c0d0 + _DAT_18339bd98 >> 0x33) ^
          _DAT_18339c0d0;
  _DAT_18339c088 =
       func_0x00018e080f40((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_18339bd98 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18339c0d0 + 0x842223da));
  _DAT_18339be40 = _DAT_18339bf48 ^ _DAT_18339c088 ^ 0xff;
  _DAT_18339c0e8 = (_DAT_18339c0e8 ^ _DAT_18339c088) + 0xff ^ 0xa2ec190778086259;
  _DAT_18339bee0 = (_DAT_18339bee0 * 0x2ff29828e88d2d9f ^ _DAT_18339c0e8) + _DAT_18339c088;
  _DAT_18339be98 = _DAT_18339bee0 ^ _DAT_18339c0e8;
  _DAT_18339bc80 = 0xff;
  uVar6 = (_DAT_18339c018 ^ 0x842223da) + _DAT_18339bed0 + 0x842223da;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18339c018 ^ 0x842223da;
  uVar7 = ((_DAT_18339bed0 + _DAT_18339c018) * 0x2000 | _DAT_18339bed0 + _DAT_18339c018 >> 0x33) ^
          _DAT_18339bed0;
  _DAT_18339c098 =
       func_0x00018e080f40((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_18339c018 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18339bed0 + 0x842223da));
  uVar6 = _DAT_18339c098 >> 1 | _DAT_18339c098;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18339c098;
  uVar6 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar7;
  _DAT_18339bbb0 = _DAT_18339bcb0 ^ uVar7 ^ 0xff;
  _DAT_18339c050 = (_DAT_18339c050 ^ uVar7) + 0xff ^ 0x90faefc89fd7084d;
  _DAT_18339bd68 = (_DAT_18339bd68 * -0x674cd216458e9525 ^ _DAT_18339c050) + uVar7;
  _DAT_18339bdd0 = _DAT_18339bd68 ^ _DAT_18339c050;
  _DAT_18339bd78 = 0xff;
  uVar6 = (ulonglong)(uint)(int)cVar1 ^ 0x84222325;
  uVar7 = uVar6 ^ _DAT_18339c0f0;
  lVar3 = uVar6 + _DAT_18339bbc8;
  uVar6 = uVar7 + lVar3;
  uVar8 = (_DAT_18339bbc8 ^ 0xff) + _DAT_18339c0f0 + 0xff;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar7;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18339bbc8 ^ 0xff;
  _DAT_18339bca0 =
       func_0x00018e080f40((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18339c0f0 + 0xff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar3);
  _DAT_18339be80 = (ulonglong)(uint)(int)cVar1 & 0xff;
  _DAT_18339bdb0 =
       (_DAT_18339bdb0 ^ _DAT_18339bca0 & 0xfffffffffff) + _DAT_18339be80 ^ 0x12b8ea7c4cc101e8;
  _DAT_18339bb48 =
       (_DAT_18339bb48 * 0x5b3f1b220eb3dedd ^ _DAT_18339bdb0) + (_DAT_18339bca0 & 0xfffffffffff);
  _DAT_18339bc48 = _DAT_18339bb48 ^ _DAT_18339bdb0;
  uVar8 = _DAT_18339be80 << 0x30;
  auVar4._8_8_ = uVar8;
  auVar4._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_182463d50,_DAT_1800170c0);
  uVar7 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar7 + _DAT_18339bc10;
  if (auVar5._4_4_ < 0) {
    uVar6 = _DAT_18339bf88 ^ uVar7;
  }
  _DAT_18339bd68 = func_0x00018e080f40(SUB161(auVar4 ^ _DAT_182463d50,5) ^ uVar6);
  uVar6 = (_DAT_18339bd68 & 0xf) << 0x29 | _DAT_18339bd68 >> 0x17;
  _DAT_18339bd98 = uVar8 | in_stack_00000050;
  _DAT_18339bd70 = (_DAT_18339bd70 ^ uVar6) + _DAT_18339bd98 ^ 0x389e0be615f9270b;
  _DAT_18339bce8 = (_DAT_18339bce8 * 0x6be9395fa4001403 ^ _DAT_18339bd70) + uVar6;
  _DAT_18339bfa0 = _DAT_18339bce8 ^ _DAT_18339bd70;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa_00,in_stack_00000038);
  switch(iVar2 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e080b4a (image 18e080b4a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e080b4a(void)

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



// ===== continuation @ rva e067504 (image 18e067504) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018e06751b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18e067504(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva e080dc3 (image 18e080dc3) =====

void FUN_18e080dc3(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva e071bc2 (image 18e071bc2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e071bc2(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000aa;
  
  uStack00000000000000aa = in_stack_00000070;
  (**(code **)(*unaff_RSI + 0x680))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e080201 (image 18e080201) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e080201(void)

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



// ===== continuation @ rva e019584 (image 18e019584) =====

void FUN_18e019584(void)

{
  return;
}



// ===== continuation @ rva e01153d (image 18e01153d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01153d(void)

{
  FUN_190ddce00();
  (*_DAT_182451a38)();
  return;
}



// ===== continuation @ rva e01afa0 (image 18e01afa0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01afa0(void)

{
  (*_DAT_182452858)();
  return;
}



// ===== continuation @ rva e01b996 (image 18e01b996) =====

void FUN_18e01b996(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e016d71 (image 18e016d71) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e016d71(void)

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



// ===== continuation @ rva e01b979 (image 18e01b979) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01b979(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182452948)();
  return;
}



// ===== continuation @ rva e01ad13 (image 18e01ad13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01ad13(void)

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



// ===== continuation @ rva e01b79c (image 18e01b79c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01b79c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182450d98)();
  return;
}



// ===== continuation @ rva e017b21 (image 18e017b21) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e017b21(void)

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



// ===== continuation @ rva e016fd1 (image 18e016fd1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e016fd1(void)

{
  (*_DAT_182452938)();
  return;
}



// ===== continuation @ rva e01a366 (image 18e01a366) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01a366(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182452b08)();
  return;
}



// ===== continuation @ rva e019a27 (image 18e019a27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e019a27(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182451cf8)();
  return;
}



// ===== continuation @ rva e014f91 (image 18e014f91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e014f91(void)

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



// ===== continuation @ rva e0521fe (image 18e0521fe) =====

void FUN_18e0521fe(void)

{
  return;
}



// ===== continuation @ rva e04e767 (image 18e04e767) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04e767(void)

{
  FUN_190ddce00();
  (*_DAT_18245bcb8)();
  return;
}



// ===== continuation @ rva e052b14 (image 18e052b14) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e052b14(void)

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



// ===== continuation @ rva e051812 (image 18e051812) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e051812(void)

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



// ===== continuation @ rva e052b4e (image 18e052b4e) =====

void FUN_18e052b4e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e051aea (image 18e051aea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e051aea(void)

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



// ===== continuation @ rva e051dc6 (image 18e051dc6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e051dc6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_18245c168)();
  return;
}



// ===== continuation @ rva e0519e4 (image 18e0519e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0519e4(void)

{
  (*_DAT_18245b9f8)();
  return;
}



// ===== continuation @ rva e0522ff (image 18e0522ff) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e0522ff(void)

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



// ===== continuation @ rva e051d05 (image 18e051d05) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e051d05(void)

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



// ===== continuation @ rva e051abb (image 18e051abb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e051abb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_18245b9a8)();
  return;
}



// ===== continuation @ rva e0853c4 (image 18e0853c4) =====

void FUN_18e0853c4(void)

{
  return;
}



// ===== continuation @ rva e081097 (image 18e081097) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e081097(void)

{
  FUN_190ddce00();
  (*_DAT_182464b98)();
  return;
}



// ===== continuation @ rva e085be2 (image 18e085be2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e085be2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182464268)();
  return;
}



// ===== continuation @ rva e085628 (image 18e085628) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e085628(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182464808)();
  return;
}



// ===== continuation @ rva e085ea2 (image 18e085ea2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e085ea2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = param_2;
  FUN_190dd72e0();
  (*_DAT_182464208)();
  return;
}



// ===== continuation @ rva e084663 (image 18e084663) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e084663(void)

{
  (*_DAT_182464b38)();
  return;
}



// ===== continuation @ rva e0865a9 (image 18e0865a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0865a9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182464b38)();
  return;
}



// ===== continuation @ rva e0850e0 (image 18e0850e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e0850e0(void)

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



// ===== continuation @ rva e085040 (image 18e085040) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e085040(void)

{
  (*_DAT_1824648d8)();
  return;
}



// ===== continuation @ rva e0862c5 (image 18e0862c5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0862c5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182464468)();
  return;
}



// ===== continuation @ rva e085f47 (image 18e085f47) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e085f47(void)

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



// ===== continuation @ rva e085d14 (image 18e085d14) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e085d14(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182463f78)();
  return;
}



// ===== continuation @ rva e085744 (image 18e085744) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e085744(void)

{
  FUN_190dd72e0();
  (*_DAT_182464bb8)();
  return;
}



// ===== continuation @ rva e084a75 (image 18e084a75) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e084a75(void)

{
  (*_DAT_1824648d8)();
  return;
}



// ===== continuation @ rva e086746 (image 18e086746) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086746(void)

{
  FUN_190dd72e0();
  (*_DAT_182465998)();
  return;
}



// ===== continuation @ rva e0866d3 (image 18e0866d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0866d3(void)

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



// ===== continuation @ rva e086826 (image 18e086826) =====

void FUN_18e086826(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e0867c2 (image 18e0867c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e0867c2(void)

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



// ===== continuation @ rva e08680d (image 18e08680d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08680d(void)

{
  (*_DAT_182465968)();
  return;
}



// ===== continuation @ rva e08681e (image 18e08681e) =====

void FUN_18e08681e(void)

{
  return;
}



// ===== continuation @ rva e08670c (image 18e08670c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08670c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465988)();
  return;
}



// ===== continuation @ rva e08678f (image 18e08678f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08678f(void)

{
  FUN_190dd9df0();
  (*_DAT_182465938)();
  return;
}



// ===== continuation @ rva e086731 (image 18e086731) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086731(void)

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



// ===== continuation @ rva e08676e (image 18e08676e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e08676e(void)

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



// ===== continuation @ rva e086946 (image 18e086946) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086946(void)

{
  FUN_190dd72e0();
  (*_DAT_182465a98)();
  return;
}



// ===== continuation @ rva e0868d3 (image 18e0868d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0868d3(void)

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



// ===== continuation @ rva e086a26 (image 18e086a26) =====

void FUN_18e086a26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e086a1e (image 18e086a1e) =====

void FUN_18e086a1e(void)

{
  return;
}



// ===== continuation @ rva e0869e6 (image 18e0869e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0869e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465a38)();
  return;
}



// ===== continuation @ rva e086a0d (image 18e086a0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086a0d(void)

{
  (*_DAT_182465a18)();
  return;
}



// ===== continuation @ rva e086931 (image 18e086931) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086931(void)

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



// ===== continuation @ rva e08698f (image 18e08698f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08698f(void)

{
  FUN_190dd9df0();
  (*_DAT_182465a88)();
  return;
}



// ===== continuation @ rva e08690c (image 18e08690c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08690c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465a48)();
  return;
}



// ===== continuation @ rva e086b46 (image 18e086b46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086b46(void)

{
  FUN_190dd72e0();
  (*_DAT_182465af8)();
  return;
}



// ===== continuation @ rva e086ad3 (image 18e086ad3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086ad3(void)

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



// ===== continuation @ rva e086c26 (image 18e086c26) =====

void FUN_18e086c26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e086b6e (image 18e086b6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086b6e(void)

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



// ===== continuation @ rva e086c1e (image 18e086c1e) =====

void FUN_18e086c1e(void)

{
  return;
}



// ===== continuation @ rva e086b31 (image 18e086b31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086b31(void)

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



// ===== continuation @ rva e086be6 (image 18e086be6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086be6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465b38)();
  return;
}



// ===== continuation @ rva e086c0d (image 18e086c0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086c0d(void)

{
  (*_DAT_182465b78)();
  return;
}



// ===== continuation @ rva e086b0c (image 18e086b0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086b0c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465b18)();
  return;
}



// ===== continuation @ rva e086bc2 (image 18e086bc2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086bc2(void)

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



// ===== continuation @ rva e086d46 (image 18e086d46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086d46(void)

{
  FUN_190dd72e0();
  (*_DAT_182465be8)();
  return;
}



// ===== continuation @ rva e086cd3 (image 18e086cd3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086cd3(void)

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



// ===== continuation @ rva e086e26 (image 18e086e26) =====

void FUN_18e086e26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e086e1e (image 18e086e1e) =====

void FUN_18e086e1e(void)

{
  return;
}



// ===== continuation @ rva e086d6e (image 18e086d6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086d6e(void)

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



// ===== continuation @ rva e086d8f (image 18e086d8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086d8f(void)

{
  FUN_190dd9df0();
  (*_DAT_182465c28)();
  return;
}



// ===== continuation @ rva e086de6 (image 18e086de6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086de6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465c48)();
  return;
}



// ===== continuation @ rva e086d0c (image 18e086d0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086d0c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465c38)();
  return;
}



// ===== continuation @ rva e086dc2 (image 18e086dc2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086dc2(void)

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



// ===== continuation @ rva e086d31 (image 18e086d31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086d31(void)

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



// ===== continuation @ rva e086f46 (image 18e086f46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086f46(void)

{
  FUN_190dd72e0();
  (*_DAT_182465d18)();
  return;
}



// ===== continuation @ rva e086ed3 (image 18e086ed3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086ed3(void)

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



// ===== continuation @ rva e087026 (image 18e087026) =====

void FUN_18e087026(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e086f31 (image 18e086f31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086f31(void)

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



// ===== continuation @ rva e08700d (image 18e08700d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08700d(void)

{
  (*_DAT_182465d08)();
  return;
}



// ===== continuation @ rva e08701e (image 18e08701e) =====

void FUN_18e08701e(void)

{
  return;
}



// ===== continuation @ rva e086f8f (image 18e086f8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086f8f(void)

{
  FUN_190dd9df0();
  (*_DAT_182465d28)();
  return;
}



// ===== continuation @ rva e086fe6 (image 18e086fe6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e086fe6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465cc8)();
  return;
}



// ===== continuation @ rva e086f6e (image 18e086f6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e086f6e(void)

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



// ===== continuation @ rva e087146 (image 18e087146) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e087146(void)

{
  FUN_190dd72e0();
  (*_DAT_182465df8)();
  return;
}



// ===== continuation @ rva e0870d3 (image 18e0870d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0870d3(void)

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



// ===== continuation @ rva e087226 (image 18e087226) =====

void FUN_18e087226(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e087131 (image 18e087131) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e087131(void)

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



// ===== continuation @ rva e0871c2 (image 18e0871c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e0871c2(void)

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



// ===== continuation @ rva e08721e (image 18e08721e) =====

void FUN_18e08721e(void)

{
  return;
}



// ===== continuation @ rva e08710c (image 18e08710c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08710c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465d98)();
  return;
}



// ===== continuation @ rva e08720d (image 18e08720d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e08720d(void)

{
  (*_DAT_182465dc8)();
  return;
}



// ===== continuation @ rva e0871e6 (image 18e0871e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0871e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182465dd8)();
  return;
}



// ===== continuation @ rva e08716e (image 18e08716e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e08716e(void)

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



// ===== continuation @ rva e01bbe6 (image 18e01bbe6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bbe6(void)

{
  FUN_190dd72e0();
  (*_DAT_182453898)();
  return;
}



// ===== continuation @ rva e01bb73 (image 18e01bb73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bb73(void)

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



// ===== continuation @ rva e01bcc6 (image 18e01bcc6) =====

void FUN_18e01bcc6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e01bc0e (image 18e01bc0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01bc0e(void)

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



// ===== continuation @ rva e01bcbe (image 18e01bcbe) =====

void FUN_18e01bcbe(void)

{
  return;
}



// ===== continuation @ rva e01bbac (image 18e01bbac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bbac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1824538f8)();
  return;
}



// ===== continuation @ rva e01bcad (image 18e01bcad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bcad(void)

{
  (*_DAT_1824538c8)();
  return;
}



// ===== continuation @ rva e01bc62 (image 18e01bc62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01bc62(void)

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



// ===== continuation @ rva e01bbd1 (image 18e01bbd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01bbd1(void)

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



// ===== continuation @ rva e01bde6 (image 18e01bde6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bde6(void)

{
  FUN_190dd72e0();
  (*_DAT_1824539c8)();
  return;
}



// ===== continuation @ rva e01bd73 (image 18e01bd73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bd73(void)

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



// ===== continuation @ rva e01bec6 (image 18e01bec6) =====

void FUN_18e01bec6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e01bdd1 (image 18e01bdd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01bdd1(void)

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



// ===== continuation @ rva e01bebe (image 18e01bebe) =====

void FUN_18e01bebe(void)

{
  return;
}



// ===== continuation @ rva e01bdac (image 18e01bdac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bdac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182453978)();
  return;
}



// ===== continuation @ rva e01be62 (image 18e01be62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01be62(void)

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



// ===== continuation @ rva e01be2f (image 18e01be2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01be2f(void)

{
  FUN_190dd9df0();
  (*_DAT_1824539a8)();
  return;
}



// ===== continuation @ rva e01be0e (image 18e01be0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01be0e(void)

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



// ===== continuation @ rva e01bfe6 (image 18e01bfe6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bfe6(void)

{
  FUN_190dd72e0();
  (*_DAT_182453ab8)();
  return;
}



// ===== continuation @ rva e01bf73 (image 18e01bf73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bf73(void)

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



// ===== continuation @ rva e01c0c6 (image 18e01c0c6) =====

void FUN_18e01c0c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e01c0be (image 18e01c0be) =====

void FUN_18e01c0be(void)

{
  return;
}



// ===== continuation @ rva e01c0ad (image 18e01c0ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c0ad(void)

{
  (*_DAT_182453a58)();
  return;
}



// ===== continuation @ rva e01c02f (image 18e01c02f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c02f(void)

{
  FUN_190dd9df0();
  (*_DAT_182453a98)();
  return;
}



// ===== continuation @ rva e01c086 (image 18e01c086) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c086(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182453a68)();
  return;
}



// ===== continuation @ rva e01c062 (image 18e01c062) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c062(void)

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



// ===== continuation @ rva e01bfac (image 18e01bfac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01bfac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182453ad8)();
  return;
}



// ===== continuation @ rva e01c00e (image 18e01c00e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c00e(void)

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



// ===== continuation @ rva e01c1e6 (image 18e01c1e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c1e6(void)

{
  FUN_190dd72e0();
  (*_DAT_182453b98)();
  return;
}



// ===== continuation @ rva e01c173 (image 18e01c173) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c173(void)

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



// ===== continuation @ rva e01c2c6 (image 18e01c2c6) =====

void FUN_18e01c2c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e01c2be (image 18e01c2be) =====

void FUN_18e01c2be(void)

{
  return;
}



// ===== continuation @ rva e01c262 (image 18e01c262) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c262(void)

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



// ===== continuation @ rva e01c1d1 (image 18e01c1d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c1d1(void)

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



// ===== continuation @ rva e01c22f (image 18e01c22f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c22f(void)

{
  FUN_190dd9df0();
  (*_DAT_182453b58)();
  return;
}



// ===== continuation @ rva e01c286 (image 18e01c286) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c286(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182453ba8)();
  return;
}



// ===== continuation @ rva e01c20e (image 18e01c20e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c20e(void)

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



// ===== continuation @ rva e01c3e6 (image 18e01c3e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c3e6(void)

{
  FUN_190dd72e0();
  (*_DAT_182453c18)();
  return;
}



// ===== continuation @ rva e01c373 (image 18e01c373) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c373(void)

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



// ===== continuation @ rva e01c4c6 (image 18e01c4c6) =====

void FUN_18e01c4c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e01c40e (image 18e01c40e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c40e(void)

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



// ===== continuation @ rva e01c4be (image 18e01c4be) =====

void FUN_18e01c4be(void)

{
  return;
}



// ===== continuation @ rva e01c42f (image 18e01c42f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c42f(void)

{
  FUN_190dd9df0();
  (*_DAT_182453c58)();
  return;
}



// ===== continuation @ rva e01c486 (image 18e01c486) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c486(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182453c88)();
  return;
}



// ===== continuation @ rva e01c462 (image 18e01c462) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c462(void)

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



// ===== continuation @ rva e01c3ac (image 18e01c3ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c3ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182453c98)();
  return;
}



// ===== continuation @ rva e01c5e6 (image 18e01c5e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c5e6(void)

{
  FUN_190dd72e0();
  (*_DAT_182453d38)();
  return;
}



// ===== continuation @ rva e01c573 (image 18e01c573) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c573(void)

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



// ===== continuation @ rva e01c6c4 (image 18e01c6c4) =====

void FUN_18e01c6c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e01c6ac (image 18e01c6ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c6ac(void)

{
  (*_DAT_182453d28)(0);
  return;
}



// ===== continuation @ rva e01c5d1 (image 18e01c5d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c5d1(void)

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



// ===== continuation @ rva e01c6bc (image 18e01c6bc) =====

void FUN_18e01c6bc(void)

{
  return;
}



// ===== continuation @ rva e01c62f (image 18e01c62f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c62f(void)

{
  FUN_190dd9df0();
  (*_DAT_182453d78)();
  return;
}



// ===== continuation @ rva e01c60e (image 18e01c60e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e01c60e(void)

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



// ===== continuation @ rva e01c686 (image 18e01c686) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e01c686(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182453cf8)();
  return;
}



// ===== continuation @ rva e01c8d8 (image 18e01c8d8) =====

void FUN_18e01c8d8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018e01c908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1824543c0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva e01c883 (image 18e01c883) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018e01c8ba */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18e01c883(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva e031ce4 (image 18e031ce4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e031ce4(void)

{
  int iVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e03202f (image 18e03202f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e03202f(void)

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



// ===== continuation @ rva e032322 (image 18e032322) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e032322(longlong param_1)

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



// ===== continuation @ rva e02f6eb (image 18e02f6eb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e02f6eb(void)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar7;
  int unaff_EDI;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong unaff_XMM6_Qa;
  uint unaff_XMM8_Da;
  uint uVar14;
  uint uVar15;
  undefined1 unaff_XMM12 [16];
  
  *(undefined4 *)(unaff_RBP + 0x4c) = unaff_ESI;
  *(int *)(unaff_RBP + 0x68) = unaff_EDI << 6;
  uVar11 = _DAT_18339a820;
  uVar12 = _DAT_18339a530;
  uVar5 = _DAT_18339a530 ^ 0xb63b08d8;
  *(bool *)(unaff_RBP + 0x50) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar8 = uVar11 ^ 0xaef2c66;
  lVar4 = uVar11 + 0xb63b08d8;
  uVar11 = uVar5 + lVar4;
  uVar13 = uVar8 + uVar12 + 0xaef2c66;
  uVar5 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar5;
  uVar8 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar8;
  _DAT_18339a940 =
       func_0x00018e046a90((uVar8 << 0x1d | uVar8 >> 0x23) - (uVar12 + 0xaef2c66) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  _DAT_18339a650 = (_DAT_18339a650 ^ _DAT_18339a940) + 0x3aff2fff ^ 0x8516429477027191;
  _DAT_18339a658 = (_DAT_18339a658 * -0x212ca73aee8295ab ^ _DAT_18339a650) + _DAT_18339a940;
  _DAT_18339a640 = _DAT_18339a658 ^ _DAT_18339a650;
  _DAT_18339aa98 = 0x3aff2fff;
  uVar12 = (_DAT_18339a530 ^ _DAT_182454a90) + _DAT_18339a5d0 + 0xef368b79;
  uVar11 = (_DAT_18339a5d0 ^ _UNK_182454a98) + _DAT_18339a530 + 0x375e066b;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339a530 ^ _DAT_182454a90;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a5d0 ^ _UNK_182454a98;
  _DAT_18339a8f8 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339a530 + 0x375e066b) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a5d0 + 0xef368b79));
  uVar12 = (_DAT_18339a8f8 << 0x1c | _DAT_18339a8f8 >> 0x24) * -0x7c773f3133d93ddb;
  _DAT_18339a7c8 = (_DAT_18339a7c8 ^ uVar12) + 0x5c4aae37 ^ 0xfcc6c0db8a54a5a5;
  _DAT_18339a6d0 = (_DAT_18339a6d0 * 0x31026886382901 ^ _DAT_18339a7c8) + uVar12;
  _DAT_18339a850 = _DAT_18339a6d0 ^ _DAT_18339a7c8;
  _DAT_18339a5b8 = 0x5c4aae37;
  uVar12 = (~_DAT_18339a698 + 0x1f282c5b) *
           ((_DAT_18339a798 ^ 0x842224e5) + (ulonglong)((uint)_DAT_18339a798 & 0x842224e5) * 2);
  uVar12 = (uVar12 | _DAT_18339a648) + (uVar12 & _DAT_18339a648);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339a800 =
       func_0x00018e046a90((uVar12 | 0x9b0a08bf) + (ulonglong)((uint)uVar12 & 0x9b0a08bf));
  uVar11 = (_DAT_18339a800 ^ 0xf17757b980) << 2 | _DAT_18339a800 >> 0x3e;
  uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar11 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar11;
  _DAT_18339a608 = _DAT_18339a8b8 ^ uVar11 ^ 0x1f28341a;
  _DAT_18339aa00 = (_DAT_18339aa00 ^ uVar11) + 0x1f28341a ^ 0x655fcb8e285c955a;
  _DAT_18339a610 = (_DAT_18339a610 * 0x7d0cca0736fd91f3 ^ _DAT_18339aa00) + uVar11;
  _DAT_18339a8f8 = _DAT_18339a610 ^ _DAT_18339aa00;
  _DAT_18339a808 = 0x1f28341a;
  _DAT_18339a870 = func_0x00018e046a90(_DAT_18339a8d0 ^ 0x4400189900cc06);
  uVar12 = _DAT_18339a870 << 0x11 | _DAT_18339a870 >> 0x2f;
  _DAT_18339a7b0 = _DAT_18339a520 ^ uVar12 ^ 0x1000007c0;
  _DAT_18339a630 = (_DAT_18339a630 ^ uVar12) + 0x1000007c0 ^ 0xf4ced582ac0785d9;
  _DAT_18339a768 = (_DAT_18339a768 * 0x54962e60e9ac26ff ^ _DAT_18339a630) + uVar12;
  _DAT_18339a968 = _DAT_18339a768 ^ _DAT_18339a630;
  _DAT_18339a830 = 0x7c0;
  _DAT_18339a8c8 = func_0x00018e046a90(_DAT_18339a8f8 ^ 0xb4ff9b84ff8f8c);
  uVar12 = _DAT_18339a590 << 0x16 | _DAT_18339a590 >> 0x2a;
  _DAT_18339a858 = (_DAT_18339a858 ^ uVar12) - 0x6052eea0 ^ 0x4efdf686048e8ac0;
  _DAT_18339aaa0 = (_DAT_18339aaa0 * -0x5beefb3a076ac145 ^ _DAT_18339a858) + uVar12;
  _DAT_18339a6c8 = _DAT_18339aaa0 ^ _DAT_18339a858;
  _DAT_18339a568 = 0x9fad1160;
  uVar12 = (~_DAT_18339a8b0 + 0x6052eea1) *
           ((_DAT_18339a6c0 ^ 0x842224e5) + (ulonglong)((uint)_DAT_18339a6c0 & 0x842224e5) * 2);
  uVar12 = (uVar12 | _DAT_18339a5b8) + (uVar12 & _DAT_18339a5b8);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339aaf0 =
       func_0x00018e046a90((uVar12 | 0xe470ca45) + (ulonglong)((uint)uVar12 & 0xe470ca45));
  uVar12 = _DAT_18339aaf0 & 0x7fffffffffff;
  _DAT_18339a7f8 = _DAT_18339aa60 ^ uVar12 ^ 0x6052f660;
  _DAT_18339aaa0 = (_DAT_18339aaa0 ^ uVar12) + 0x6052f660 ^ 0x4e89681f259b67aa;
  _DAT_18339aa28 = (_DAT_18339aa28 * -0x2d3de40ef0cfb27b ^ _DAT_18339aaa0) + uVar12;
  _DAT_18339a718 = _DAT_18339aa28 ^ _DAT_18339aaa0;
  _DAT_18339a9f8 = 0x6052f660;
  _DAT_18339a6c0 = func_0x00018e046a90(_DAT_18339a930 + 0xbbffa8dd00b2ff ^ 0x9d);
  uVar12 = _DAT_18339a6c0 ^ 0xfffff760;
  _DAT_18339a528 = _DAT_18339a9e0 ^ uVar12 ^ 0x1000007c0;
  _DAT_18339a740 = (_DAT_18339a740 ^ uVar12) + 0x1000007c0 ^ 0x9cfb40f4d741888;
  _DAT_18339a5e0 = (_DAT_18339a5e0 * -0x3f01c54baa1b82ef ^ _DAT_18339a740) + uVar12;
  _DAT_18339a6a8 = _DAT_18339a5e0 ^ _DAT_18339a740;
  _DAT_18339aa28 = 0x7c0;
  uVar12 = (~_DAT_18339aa38 + 0x76d2ca5) *
           ((_DAT_18339aab0 ^ unaff_RBX) + (ulonglong)((uint)_DAT_18339aab0 & 0x84222325) * 2);
  uVar12 = (uVar12 | _DAT_18339a848) + (uVar12 & _DAT_18339a848);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339a7d8 =
       func_0x00018e046a90((uVar12 | 0x834f0f81) + (ulonglong)((uint)uVar12 & 0x834f0f81));
  _DAT_18339a880 =
       (_DAT_18339a880 ^ _DAT_18339a7d8 * 0x1bc2234fbdbebe51) - 0x76d2ca4 ^ 0x68fca57d57e809ce;
  _DAT_18339a970 =
       (_DAT_18339a970 * -0x14b112266aae5fa5 ^ _DAT_18339a880) + _DAT_18339a7d8 * 0x1bc2234fbdbebe51
  ;
  _DAT_18339a6f0 = _DAT_18339a970 ^ _DAT_18339a880;
  _DAT_18339a8a8 = 0xf892d35c;
  _DAT_18339a618 = func_0x00018e046a90(_DAT_18339a958 ^ 0x80080c0ffb689);
  uVar12 = _DAT_18339a618 * -0x7065d81973015849 ^ 0x7c0;
  _DAT_18339aae0 = _DAT_18339a520 ^ uVar12 ^ 0x76d3464;
  _DAT_18339a890 = (_DAT_18339a890 ^ uVar12) + 0x76d3464 ^ 0x52848e9149b55a82;
  _DAT_18339a8d0 = (_DAT_18339a8d0 * -0xa7878b8c75fb46b ^ _DAT_18339a890) + uVar12;
  _DAT_18339a908 = _DAT_18339a8d0 ^ _DAT_18339a890;
  _DAT_18339a5b8 = 0x76d3464;
  uVar12 = (_DAT_18339aa08 ^ _DAT_182454aa0) + _DAT_18339a5f8 + 0xe297a2ed;
  uVar11 = (_DAT_18339a5f8 ^ _UNK_182454aa8) + _DAT_18339aa08 + 0x30945c6e;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339aa08 ^ _DAT_182454aa0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a5f8 ^ _UNK_182454aa8;
  _DAT_18339aa70 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339aa08 + 0x30945c6e) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a5f8 + 0xe297a2ed));
  uVar12 = _DAT_18339aa70 - (_DAT_18339aa70 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar12 = (uint)bVar2 + (uint)bVar2 ^ _DAT_18339aa70;
  _DAT_18339a6b0 = _DAT_18339a598 ^ uVar12 ^ 0x9749de36;
  _DAT_18339a8d0 = (_DAT_18339a5f8 ^ uVar12) + 0x9749de36 ^ 0xe3e7396f1dcdec07;
  _DAT_18339a9c8 = (_DAT_18339a9c8 * 0x4d509a2057ddfb65 ^ _DAT_18339a8d0) + uVar12;
  _DAT_18339a8d0 = _DAT_18339a9c8 ^ _DAT_18339a8d0;
  _DAT_18339a5f8 = 0x9749de36;
  uVar12 = (_DAT_18339a558 ^ _DAT_182454ab0) + _DAT_18339a670 + 0x136bfd13;
  uVar11 = (_DAT_18339a670 ^ _UNK_182454ab8) + _DAT_18339a558 + 0x9749de36;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339a558 ^ _DAT_182454ab0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a670 ^ _UNK_182454ab8;
  _DAT_18339a588 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339a558 + 0x9749de36) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a670 + 0x136bfd13));
  _DAT_18339a9d8 =
       (_DAT_18339a588 << 0x1f | _DAT_18339a588 >> 0x21) << 0x12 |
       (_DAT_18339a588 & 0x1ffffffff) >> 0xf;
  _DAT_18339a740 = _DAT_18339a740 ^ _DAT_18339a9d8 ^ 0x48ed15215b951e79;
  _DAT_18339a638 = (_DAT_18339a638 * -0x60b3e5bc8492b605 ^ _DAT_18339a740) + _DAT_18339a9d8;
  _DAT_18339aae0 = _DAT_18339a638 ^ _DAT_18339a740;
  _DAT_18339a590 = 0;
  _DAT_18339aa20 = func_0x00018e046a90(_DAT_18339aaf8 ^ 0xffe4007b22ffdd48);
  uVar12 = _DAT_18339a518 << 0x31 | _DAT_18339a518 >> 0xf;
  _DAT_18339a510 = _DAT_18339a568 ^ uVar12 ^ 0x7c0;
  _DAT_18339a880 = (_DAT_18339a880 ^ uVar12) + 0x7c0 ^ 0xc217b3e71096b284;
  _DAT_18339a5d0 = (_DAT_18339a5d0 * 0x282aa785302beaf7 ^ _DAT_18339a880) + uVar12;
  _DAT_18339a7c0 = _DAT_18339a5d0 ^ _DAT_18339a880;
  _DAT_18339a5e0 = 0x7c0;
  _DAT_18339a900 = func_0x00018e046a90(_DAT_18339a5c0 ^ 0xffcbff96aa003245);
  uVar12 = (ulonglong)(((uint)_DAT_18339a900 ^ 0x2a000fff) & 0x3aff2fff);
  _DAT_18339a700 = _DAT_18339a700 ^ uVar12 ^ 0x6e9291da8976a84d;
  _DAT_18339a578 = (_DAT_18339a578 * 0x5dcc000a976d88e7 ^ _DAT_18339a700) + uVar12;
  _DAT_18339a738 = _DAT_18339a578 ^ _DAT_18339a700;
  _DAT_18339aa90 = 0;
  uVar12 = (_DAT_18339aa40 ^ 0x842224e5) + _DAT_18339a668 + 0x842224e5;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339aa40 ^ 0x842224e5;
  uVar11 = ((_DAT_18339a668 + _DAT_18339aa40) * 0x2000 | _DAT_18339a668 + _DAT_18339aa40 >> 0x33) ^
           _DAT_18339a668;
  _DAT_18339aa40 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_18339aa40 ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a668 + 0x842224e5));
  uVar12 = (_DAT_18339aa40 ^ 0x7c0) & 0x7fffffffffffff ^ 0x7c0;
  _DAT_18339a918 = _DAT_18339a568 ^ uVar12 ^ 0x7c0;
  _DAT_18339a928 = (_DAT_18339a928 ^ uVar12) + 0x7c0 ^ 0x329382b7dfd7c51;
  _DAT_18339a6b0 = (_DAT_18339a9b0 * 0x14f60abd3ec1daa7 ^ _DAT_18339a928) + uVar12 ^ _DAT_18339a928;
  _DAT_18339a9b0 = 0x7c0;
  uVar12 = (_DAT_18339a6c8 ^ _DAT_182454ac0) + _DAT_18339a838 + 0xb63b08d8;
  uVar11 = (_DAT_18339a838 ^ _UNK_182454ac8) + _DAT_18339a6c8 + 0x32192bfd;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339a6c8 ^ _DAT_182454ac0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a838 ^ _UNK_182454ac8;
  _DAT_18339a910 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339a6c8 + 0x32192bfd) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a838 + 0xb63b08d8));
  uVar12 = _DAT_18339a910 >> 1 | _DAT_18339a910;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           _DAT_18339a910;
  uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar11 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar11;
  _DAT_18339a528 = _DAT_18339a528 ^ uVar11 ^ 0xcc02bfb0f0a8f664;
  _DAT_18339a9b0 = (_DAT_18339a9b0 * 0x7e656d7a4e75c6f1 ^ _DAT_18339a528) + uVar11;
  _DAT_18339a538 = _DAT_18339a9b0 ^ _DAT_18339a528;
  _DAT_18339a7e8 = 0;
  uVar12 = (_DAT_18339aad8 ^ 0x842224e5) + _DAT_18339a9d8 + 0x842224e5;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339aad8 ^ 0x842224e5;
  uVar11 = ((_DAT_18339a9d8 + _DAT_18339aad8) * 0x2000 | _DAT_18339a9d8 + _DAT_18339aad8 >> 0x33) ^
           _DAT_18339a9d8;
  _DAT_18339aa28 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_18339aad8 ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a9d8 + 0x842224e5));
  _DAT_18339a800 = _DAT_18339a738 ^ _DAT_18339aa28 ^ 0x7c0;
  _DAT_18339a618 = (_DAT_18339a618 ^ _DAT_18339aa28) + 0x7c0 ^ 0x3bc3bbd7bfe9beaf;
  _DAT_18339a9d8 = (_DAT_18339a9d8 * -0x7d94e10878163751 ^ _DAT_18339a618) + _DAT_18339aa28;
  _DAT_18339a868 = _DAT_18339a9d8 ^ _DAT_18339a618;
  _DAT_18339a948 = 0x7c0;
  uVar7 = *(uint *)(unaff_RBP + 0x68) & 0x7c0;
  plVar1 = *(longlong **)(unaff_RBP + 0x20);
  lVar4 = (**(code **)(*plVar1 + 0x6f0))(plVar1);
  *(int *)(unaff_RBP + 0x70) = (int)*(char *)(lVar4 + *(int *)(unaff_RBP + 0x78));
  (**(code **)(*plVar1 + 0x6f8))(plVar1);
  lVar6 = _DAT_18339a8e0 + 0x541d69dd;
  lVar4 = _DAT_18339aa18 + 0xaa85f0e;
  uVar12 = (_DAT_18339aa18 ^ _DAT_182454ad0) + lVar6;
  uVar11 = (_DAT_18339a8e0 ^ _UNK_182454ad8) + lVar4;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339aa18 ^ _DAT_182454ad0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a8e0 ^ _UNK_182454ad8;
  *(ulonglong *)(unaff_RBP + 0x68) = (ulonglong)*(uint *)(unaff_RBP + 0x70);
  _DAT_18339a5d8 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - lVar4 ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - lVar6);
  uVar12 = _DAT_18339a5d8 - (_DAT_18339a5d8 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = ((((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
           _DAT_18339a5d8) * -0x2c99e0dd0f9437b9;
  _DAT_18339a908 = (_DAT_18339a908 ^ uVar12) + 0xdabf5ffe ^ 0x54a593c3445e91f6;
  _DAT_18339a5b8 = (_DAT_18339a5b8 * 0x62f15be571eed7f7 ^ _DAT_18339a908) + uVar12;
  _DAT_18339aa40 = _DAT_18339a5b8 ^ _DAT_18339a908;
  _DAT_18339aa48 = 0xdabf5ffe;
  _DAT_18339a708 = func_0x00018e046a90(_DAT_18339a540 ^ 0x28ffa0a9ffac22);
  uVar12 = _DAT_18339a708 ^ 0x24f1f8ff;
  uVar11 = uVar12 >> 1 | uVar12;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar12 = 0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           uVar12;
  _DAT_18339aa58 = _DAT_18339aa30 ^ uVar12 ^ 0x24f1f8ff;
  _DAT_18339a9f0 = (_DAT_18339a9f0 ^ uVar12) + 0x24f1f8ff ^ 0x7700ae86dcc00a12;
  _DAT_18339a8b8 = (_DAT_18339a8b8 * -0x53379b69b8d14725 ^ _DAT_18339a9f0) + uVar12;
  _DAT_18339a700 = _DAT_18339a8b8 ^ _DAT_18339a9f0;
  _DAT_18339a9b8 = 0x24f1f8ff;
  uVar12 = (_DAT_18339a5c0 ^ _DAT_182454ae0) + _DAT_18339a7f8 + 0xa0d3dbda;
  uVar11 = (_DAT_18339a7f8 ^ _UNK_182454ae8) + _DAT_18339a5c0 + 0xdb0e0740;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339a5c0 ^ _DAT_182454ae0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a7f8 ^ _UNK_182454ae8;
  _DAT_18339a968 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339a5c0 + 0xdb0e0740) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a7f8 + 0xa0d3dbda));
  uVar12 = _DAT_18339a968 ^ 0xffffffff;
  uVar11 = uVar12 >> 1 | uVar12;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar12 = (ulonglong)
           (~((uint)uVar12 ^
             (0x40 - (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                 >> 0x38)) * 0x80) & 0x24f1f8ff) ^ 0x24f1f8ff;
  _DAT_18339a810 = (_DAT_18339a810 ^ uVar12) + 0x10000003f ^ 0x19bcb745e2a97b67;
  _DAT_18339aad8 = (_DAT_18339aad8 * -0x21c7708341aa2929 ^ _DAT_18339a810) + uVar12;
  _DAT_18339a598 = _DAT_18339aad8 ^ _DAT_18339a810;
  _DAT_18339a860 = 0x3f;
  uVar12 = (_DAT_18339a7b0 ^ _DAT_182454af0) + _DAT_18339a920 + 0x84222325;
  uVar11 = (_DAT_18339a920 ^ _UNK_182454af8) + _DAT_18339a7b0 + 0xb664410c;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339a7b0 ^ _DAT_182454af0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a920 ^ _UNK_182454af8;
  _DAT_18339a630 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339a7b0 + 0xb664410c) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a920 + 0x84222325));
  uVar12 = (_DAT_18339a630 >> 0xc) * 0x4a0aba3bb9aff000;
  _DAT_18339a698 = (_DAT_18339a698 ^ uVar12) - 0xb664410c ^ 0xa05f4e199003d296;
  _DAT_18339a9b0 = (_DAT_18339a9b0 * -0x1814781790b229c5 ^ _DAT_18339a698) + uVar12;
  _DAT_18339aa78 = _DAT_18339a9b0 ^ _DAT_18339a698;
  _DAT_18339a898 = 0x499bbef4;
  uVar12 = func_0x00018e046a90(_DAT_18339a550 + 0xffa2001211ffc1ff ^ 0xe9);
  uVar11 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  _DAT_18339a820 =
       ((((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar12) &
       0x3fffffffffff;
  _DAT_18339a840 = _DAT_18339a700 ^ _DAT_18339a820 ^ 0xb664414b;
  _DAT_18339a698 = (_DAT_18339a698 ^ _DAT_18339a820) + 0xb664414b ^ 0xd9d2f413db9b71e5;
  _DAT_18339a820 = (uVar12 * -0xd02ad927bf77995 ^ _DAT_18339a698) + _DAT_18339a820;
  _DAT_18339a7e0 = _DAT_18339a820 ^ _DAT_18339a698;
  _DAT_18339a9e8 = 0xb664414b;
  uVar12 = (~_DAT_18339a528 + 0x499bbef5) *
           ((_DAT_18339aad8 ^ 0x3246626e) + (ulonglong)((uint)_DAT_18339aad8 & 0x3246626e) * 2);
  uVar12 = (uVar12 | _DAT_18339a810) + (uVar12 & _DAT_18339a810);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339aa38 =
       func_0x00018e046a90((uVar12 | 0x7bdddc9a) + (ulonglong)((uint)uVar12 & 0x7bdddc9a));
  uVar12 = _DAT_18339aa38 * 0x36640afaa68801cd;
  _DAT_18339a768 = _DAT_18339a948 ^ uVar12 ^ 0x10000003f;
  _DAT_18339a810 = (_DAT_18339a810 ^ uVar12) + 0x10000003f ^ 0x6fb9a3d9a6b30b79;
  _DAT_18339a760 = (_DAT_18339a760 * 0x5f2f21266da0a52f ^ _DAT_18339a810) + uVar12;
  _DAT_18339a740 = _DAT_18339a760 ^ _DAT_18339a810;
  _DAT_18339a830 = 0x3f;
  uVar12 = (_DAT_18339a750 ^ _DAT_182454b00) + _DAT_18339a860 + 0x8422231a;
  uVar11 = (_DAT_18339a860 ^ _UNK_182454b08) + _DAT_18339a750 + 0xdc0bfde0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339a750 ^ _DAT_182454b00;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a860 ^ _UNK_182454b08;
  _DAT_18339aad8 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339a750 + 0xdc0bfde0) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a860 + 0x8422231a));
  uVar12 = _DAT_18339aad8 ^ 0x3f;
  _DAT_18339a960 = _DAT_18339a838 ^ uVar12 ^ 0xdc0bfe1f;
  _DAT_18339a7c0 = (_DAT_18339a7c0 ^ uVar12) + 0xdc0bfe1f ^ 0x75493549dcf2cfd3;
  _DAT_18339aa40 = (_DAT_18339aa40 * -0x72c0afadc324f1f1 ^ _DAT_18339a7c0) + uVar12;
  _DAT_18339a7b0 = _DAT_18339aa40 ^ _DAT_18339a7c0;
  _DAT_18339a720 = 0xdc0bfe1f;
  uVar12 = (~_DAT_18339aa98 + 0x23f40221) *
           ((_DAT_18339a708 ^ 0x5829dd3a) + (ulonglong)((uint)_DAT_18339a708 & 0x5829dd3a) * 2);
  uVar12 = (uVar12 | _DAT_18339a928) + (uVar12 & _DAT_18339a928);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339a6c8 =
       func_0x00018e046a90((uVar12 | 0x7bdddf1a) + (ulonglong)((uint)uVar12 & 0x7bdddf1a));
  uVar12 = _DAT_18339a6c8 ^ 0x23f40220;
  _DAT_18339a8d8 = _DAT_18339a8e0 ^ uVar12 ^ 0x10000003f;
  _DAT_18339a6b8 = (_DAT_18339a6b8 ^ uVar12) + 0x10000003f ^ 0xd1cac1e20cc479c5;
  _DAT_18339a898 = (_DAT_18339a898 * 0x4133a3f7f5d2fedb ^ _DAT_18339a6b8) + uVar12;
  _DAT_18339a9b0 = _DAT_18339a898 ^ _DAT_18339a6b8;
  _DAT_18339aaf0 = 0x3f;
  uVar12 = (~_DAT_18339a500 + 0xd8dfa733) *
           ((_DAT_18339aa58 ^ 0x5e9d7cdb) + (ulonglong)((uint)_DAT_18339aa58 & 0x5e9d7cdb) * 2);
  uVar12 = (uVar12 | _DAT_18339a9c0) + (uVar12 & _DAT_18339a9c0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339a7c0 =
       func_0x00018e046a90((uVar12 | 0x8642dbe9) + (ulonglong)((uint)uVar12 & 0x8642dbe9));
  uVar12 = (_DAT_18339a7c0 ^ 0xdafffffe) & 0x1ffffffffffffff;
  _DAT_18339a690 = _DAT_18339a8b8 ^ uVar12 ^ 0x1b39f0730;
  _DAT_18339a818 = (_DAT_18339a818 ^ uVar12) + 0x1b39f0730 ^ 0x22accc96e0c36bbc;
  _DAT_18339a838 = (_DAT_18339a838 * 0x18c670449edb97d1 ^ _DAT_18339a818) + uVar12;
  _DAT_18339aa08 = _DAT_18339a838 ^ _DAT_18339a818;
  _DAT_18339a860 = 0xb39f0730;
  uVar12 = (_DAT_18339a5a0 ^ _DAT_182454b10) + _DAT_18339a8c8 + 0x5e9d7cdb;
  uVar11 = (_DAT_18339a8c8 ^ _UNK_182454b18) + _DAT_18339a5a0 + 0xd8dfa732;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18339a5a0 ^ _DAT_182454b10;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18339a8c8 ^ _UNK_182454b18;
  _DAT_18339a730 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339a5a0 + 0xd8dfa732) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18339a8c8 + 0x5e9d7cdb));
  uVar12 = (_DAT_18339a730 ^ 0xdafffffe) & 0x7fffffffffffffff;
  _DAT_18339a550 = (_DAT_18339a550 ^ uVar12) + 0xd89f0732 ^ 0xbaa769071fe7f8a9;
  _DAT_18339a888 = (_DAT_18339a888 * -0x704913786fe72c11 ^ _DAT_18339a550) + uVar12;
  _DAT_18339aaa0 = _DAT_18339a888 ^ _DAT_18339a550;
  _DAT_18339a998 = 0xd89f0732;
  _DAT_18339a5f8 = func_0x00018e046a90(_DAT_18339a538 ^ 0xaaffc972ffcb4e);
  uVar12 = (~_DAT_18339a5f8 & 0x260f8cc) << 0x23;
  _DAT_18339a988 = _DAT_18339aaa8 ^ uVar12 ^ 0xb39f0730;
  _DAT_18339a580 = (_DAT_18339a580 ^ uVar12) + 0xb39f0730 ^ 0xa4aad21825fa030b;
  _DAT_18339a518 = (_DAT_18339a518 * -0xa842f770a588df3 ^ _DAT_18339a580) + uVar12;
  _DAT_18339a528 = _DAT_18339a518 ^ _DAT_18339a580;
  _DAT_18339a938 = 0xb39f0730;
  _DAT_18339a958 = func_0x00018e046a90(_DAT_18339a610 + 0xff7cff5edbffe1ff ^ 0x2b);
  _DAT_18339a978 =
       (_DAT_18339a978 ^ _DAT_18339a958 * -0x3331eaa65a6e32e3) + 0x2540a001 ^ 0xd1b336fb7e0f07fb;
  _DAT_18339a980 =
       (_DAT_18339a980 * -0x33fc5685fe35bd67 ^ _DAT_18339a978) +
       _DAT_18339a958 * -0x3331eaa65a6e32e3;
  _DAT_18339a808 = _DAT_18339a980 ^ _DAT_18339a978;
  _DAT_18339aab0 = _DAT_18339a7a8 ^ 0x2540a001;
  _DAT_18339aad8 = 0x2540a001;
  uVar12 = ((_DAT_18339a750 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18339a750 & 0x8422231a) * 2) *
           -_DAT_18339aa70;
  uVar12 = (uVar12 | _DAT_18339a780) + (uVar12 & _DAT_18339a780);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339aae8 =
       func_0x00018e046a90((uVar12 | 0x8422231a) + (ulonglong)((uint)uVar12 & 0x8422231a));
  uVar12 = _DAT_18339aae8 ^ 0x3f;
  _DAT_18339a620 = _DAT_18339a7b0 ^ uVar12 ^ 0x3f;
  _DAT_18339a8b8 = (_DAT_18339a8b8 ^ uVar12) + 0x3f ^ 0x12365479f329758d;
  _DAT_18339a720 = (_DAT_18339a720 * 0x41b5b1c030c822d7 ^ _DAT_18339a8b8) + uVar12;
  _DAT_18339a718 = _DAT_18339a720 ^ _DAT_18339a8b8;
  _DAT_18339a518 = 0x3f;
  _DAT_18339a928 = func_0x00018e046a90(_DAT_18339a8d8 + 0xffdf0083e4ffddff ^ 0xdf);
  uVar3 = (uint)_DAT_18339a928 & 0xd03f4af8;
  uVar12 = (ulonglong)uVar3 << 0x2e | (ulonglong)(uVar3 >> 0x12);
  _DAT_18339aa60 = _DAT_18339aa60 ^ uVar12 ^ 0xe80dffa0e2e0b097;
  _DAT_18339a728 = (_DAT_18339a728 * 0x4f20f56f1ddea039 ^ _DAT_18339aa60) + uVar12;
  _DAT_18339a5c0 = _DAT_18339a728 ^ _DAT_18339aa60;
  _DAT_18339aab0 = 0;
  uVar12 = ((_DAT_18339a7a0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18339a7a0 & 0x8422231a) * 2) *
           -_DAT_18339a548;
  uVar12 = (uVar12 | _DAT_18339a6d0) + (uVar12 & _DAT_18339a6d0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339a650 =
       func_0x00018e046a90((uVar12 | 0x8422231a) + (ulonglong)((uint)uVar12 & 0x8422231a));
  uVar12 = _DAT_18339a650 >> 1 | _DAT_18339a650;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = ((ulonglong)
            (0x40 - (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
            ) << 5 ^ _DAT_18339a650) & 0x1fffffffff;
  _DAT_18339a5c8 = _DAT_18339aa30 ^ uVar12 ^ 0x3f;
  _DAT_18339a7f8 = (_DAT_18339a7f8 ^ uVar12) + 0x3f ^ 0xd6adae3e46e53aa9;
  _DAT_18339a728 = (_DAT_18339a728 * -0x5e3e15aa697a0a6b ^ _DAT_18339a7f8) + uVar12;
  _DAT_18339a6f8 = _DAT_18339a728 ^ _DAT_18339a7f8;
  _DAT_18339a990 = 0x3f;
  uVar12 = *(ulonglong *)(unaff_RBP + 0x68);
  uVar11 = uVar12 ^ 0x84222325;
  uVar5 = uVar11 ^ _DAT_18339a998;
  lVar4 = uVar11 + _DAT_18339a980;
  uVar11 = uVar5 + lVar4;
  uVar8 = (_DAT_18339a980 ^ 0x3f) + _DAT_18339a998 + 0x3f;
  uVar5 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar5;
  uVar11 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18339a980 ^ 0x3f;
  _DAT_18339a890 =
       func_0x00018e046a90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18339a998 + 0x3f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar11 = (_DAT_18339a890 << 0x32 | _DAT_18339a890 >> 0xe) ^ 0x3f;
  uVar3 = (uint)uVar12 & 0x3f;
  _DAT_18339a7c0 = (ulonglong)uVar3;
  _DAT_18339a8e8 = (_DAT_18339a8e8 ^ uVar11) + _DAT_18339a7c0 ^ 0x22203821459a5859;
  _DAT_18339a660 = (_DAT_18339a660 * -0x30a3dbb998d7388b ^ _DAT_18339a8e8) + uVar11;
  _DAT_18339a9f0 = _DAT_18339a660 ^ _DAT_18339a8e8;
  auVar9._4_4_ = 0;
  auVar9._0_4_ = uVar3 ^ 0x84222325;
  auVar9._8_4_ = uVar7;
  auVar9._12_4_ = 0;
  auVar10 = pshufb(auVar9 ^ _DAT_182454b20,unaff_XMM12);
  uVar11 = auVar10._8_8_ + auVar10._0_8_;
  uVar12 = uVar11 + _DAT_18339a570;
  if (auVar10._4_4_ < 0) {
    uVar12 = _DAT_18339a810 ^ uVar11;
  }
  _DAT_18339a5c8 = func_0x00018e046a90(SUB161(auVar9 ^ _DAT_182454b20,5) ^ uVar12);
  uVar12 = (_DAT_18339a5c8 & 0x3fffffffffffffff) * -0x2537f8e5d30319b7;
  uVar3 = uVar3 | uVar7;
  _DAT_18339a8d8 = (ulonglong)uVar3;
  _DAT_18339a910 = (_DAT_18339a910 ^ uVar12) + _DAT_18339a8d8 ^ 0xe53cf673e419e1bb;
  _DAT_18339aa38 = (_DAT_18339aa38 * -0x5fc5e8afbcadeb4d ^ _DAT_18339a910) + uVar12;
  _DAT_18339aa98 = _DAT_18339aa38 ^ _DAT_18339a910;
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x38);
  uVar7 = *(uint *)(unaff_RBP + 0x60);
  *(uint *)(unaff_RBP + 0x78) = uVar7;
  uVar11 = (ulonglong)uVar7;
  uVar12 = (~_DAT_18339a938 + 2) *
           ((uVar11 ^ 0x84222325 ^ _DAT_18339a670) +
           (ulonglong)((uint)_DAT_18339a670 & (uint)(uVar11 ^ 0x84222325)) * 2);
  uVar12 = (uVar12 | _DAT_18339a6d0) + (uVar12 & _DAT_18339a6d0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18339a930 =
       func_0x00018e046a90((uVar11 ^ 0x84222324 | uVar12) +
                           (ulonglong)((uint)(uVar11 ^ 0x84222324) & (uint)uVar12));
  uVar14 = uVar7 & unaff_XMM8_Da;
  uVar15 = uVar7 ^ unaff_XMM8_Da;
  lVar4 = ((ulonglong)uVar7 * (ulonglong)_DAT_182454bb0 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_182454ba0;
  uVar12 = (_DAT_18339a930 ^ uVar11) * -0x6d7976b987420857;
  _DAT_18339a868 =
       ((((uVar11 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_182454b70 +
         ((unaff_XMM6_Qa >> 0x20) * (ulonglong)_DAT_182454b70 +
          ((uVar11 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_182454b30 << 0x20) +
         ((ulonglong)uVar15 * (ulonglong)_DAT_182454b60 << 0x20) +
         (ulonglong)uVar15 * (ulonglong)_DAT_182454b50 +
         ((ulonglong)uVar14 * (ulonglong)_DAT_182454b60 << 0x20 |
         (ulonglong)uVar14 * (ulonglong)_DAT_182454b50) +
         (ulonglong)uVar7 * (ulonglong)_DAT_182454b40 +
         ((ulonglong)uVar7 * (ulonglong)_DAT_182454b30 << 0x20) + lVar4 +
        ((ulonglong)(uVar7 | unaff_XMM8_Da) * (ulonglong)_DAT_182454b90 << 0x20) +
        (ulonglong)(uVar7 | unaff_XMM8_Da) * (ulonglong)_DAT_182454b80) -
       (((ulonglong)uVar15 * (ulonglong)_DAT_182454c10 << 0x20) +
        (ulonglong)uVar15 * (ulonglong)_DAT_182454c00 + lVar4 +
       ((ulonglong)uVar14 * (ulonglong)_DAT_182454bf0 << 0x20 |
       (ulonglong)uVar14 * (ulonglong)_DAT_182454be0) +
       ((ulonglong)uVar7 * (ulonglong)_DAT_182454bd0 << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_182454bc0)) + 0xd868b528a8eedd72;
  _DAT_18339a6b8 = _DAT_18339a918 ^ uVar12 ^ _DAT_18339a868;
  _DAT_18339a9d8 = (_DAT_18339a9d8 ^ uVar12) + _DAT_18339a868 ^ 0x20b08fdf0f8e94ba;
  _DAT_18339a5e0 = (_DAT_18339a5e0 * -0xfd19786dcd89dbf ^ _DAT_18339a9d8) + uVar12;
  _DAT_18339a5b8 = _DAT_18339a5e0 ^ _DAT_18339a9d8;
  _DAT_18339a868 = _DAT_18339a868 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x80) = uVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x50)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e031fdc (image 18e031fdc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e031fdc(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva e031d9a (image 18e031d9a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e031d9a(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x30) = uVar2;
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



// ===== continuation @ rva e027f30 (image 18e027f30) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e027f30(void)

{
  int iVar1;
  longlong unaff_RBP;
  undefined8 unaff_R12;
  longlong *unaff_R13;
  undefined4 unaff_R15D;
  
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_R12;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_R15D;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e02a0ee (image 18e02a0ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e02a0ee(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar3;
  longlong *unaff_R13;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  uint unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  uint uVar5;
  undefined1 unaff_XMM12 [16];
  
  auVar4 = pshufb(in_XMM0,unaff_XMM12);
  uVar3 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar3 + _DAT_18339a8a0;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_18339a9c0 ^ uVar3;
  }
  _DAT_18339a730 = func_0x00018e046a90(in_XMM0[5] ^ uVar2);
  uVar5 = unaff_ESI ^ unaff_XMM6_Da;
  uVar2 = _DAT_18339a730 >> 1 | _DAT_18339a730;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18339a730;
  uVar2 = ((ulonglong)uVar5 * (ulonglong)_DAT_182454c30 + _DAT_182454c60 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_182454c50 +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_182454c40 +
          ((ulonglong)unaff_ESI * (ulonglong)_DAT_182454c30 << 0x20) +
          (-(((ulonglong)uVar5 * (ulonglong)_DAT_182454ca0 + _DAT_182454cf0 << 0x20) +
             (ulonglong)uVar5 * (ulonglong)_DAT_182454c90 +
            ((ulonglong)(unaff_ESI ^ unaff_XMM8_Da) * (ulonglong)_DAT_182454cc0 << 0x20) +
            (ulonglong)(unaff_ESI ^ unaff_XMM8_Da) * (ulonglong)_DAT_182454cb0 +
            ((ulonglong)(unaff_ESI & unaff_XMM8_Da) * (ulonglong)_DAT_182454cc0 << 0x20 |
            (ulonglong)(unaff_ESI & unaff_XMM8_Da) * (ulonglong)_DAT_182454cb0) +
            ((ulonglong)unaff_ESI * (ulonglong)_DAT_182454ca0 << 0x20) +
            (ulonglong)unaff_ESI * (ulonglong)_DAT_182454c90) -
          (((ulonglong)(unaff_ESI | unaff_XMM8_Da) * (ulonglong)_DAT_182454ce0 << 0x20) +
          (ulonglong)(unaff_ESI | unaff_XMM8_Da) * (ulonglong)_DAT_182454cd0)) + 0x339db0a24b662122;
  _DAT_18339a910 = _DAT_18339a970 ^ uVar3 ^ uVar2;
  _DAT_18339a9d0 = (_DAT_18339a9d0 ^ uVar3) + uVar2 ^ 0x2988b5b729e09f42;
  _DAT_18339a7d8 = (_DAT_18339a7d8 * -0x1100284b79a10f41 ^ _DAT_18339a9d0) + uVar3;
  _DAT_18339a8d8 = _DAT_18339a7d8 ^ _DAT_18339a9d0;
  _DAT_18339a708 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar2;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e031d72 (image 18e031d72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e031d72(void)

{
  longlong unaff_RBP;
  int unaff_R15D;
  
  *(int *)(unaff_RBP + 0x70) = unaff_R15D + 1;
  *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + -0x10);
  switch(unaff_R15D + 1 < *(int *)(unaff_RBP + -0x10)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e02a0c7 (image 18e02a0c7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e02a0c7(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar3;
  undefined8 unaff_R12;
  longlong *unaff_R13;
  uint unaff_R15D;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  uint uVar6;
  undefined1 unaff_XMM12 [16];
  
  *(undefined8 *)(unaff_RBP + 0x70) = unaff_R12;
  auVar4._8_8_ = _UNK_180062bf8;
  auVar4._0_8_ = unaff_R15D ^ unaff_RBX;
  auVar5 = pshufb(auVar4 ^ _DAT_182454c20,unaff_XMM12);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_18339a8a0;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_18339a9c0 ^ uVar3;
  }
  _DAT_18339a730 = func_0x00018e046a90(SUB161(auVar4 ^ _DAT_182454c20,5) ^ uVar2);
  uVar6 = unaff_R15D ^ unaff_XMM6_Da;
  uVar2 = _DAT_18339a730 >> 1 | _DAT_18339a730;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18339a730;
  uVar2 = ((ulonglong)uVar6 * (ulonglong)_DAT_182454c30 + _DAT_182454c60 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_182454c50 +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_182454c40 +
          ((ulonglong)unaff_R15D * (ulonglong)_DAT_182454c30 << 0x20) +
          (-(((ulonglong)uVar6 * (ulonglong)_DAT_182454ca0 + _DAT_182454cf0 << 0x20) +
             (ulonglong)uVar6 * (ulonglong)_DAT_182454c90 +
            ((ulonglong)(unaff_R15D ^ unaff_XMM8_Da) * (ulonglong)_DAT_182454cc0 << 0x20) +
            (ulonglong)(unaff_R15D ^ unaff_XMM8_Da) * (ulonglong)_DAT_182454cb0 +
            ((ulonglong)(unaff_R15D & unaff_XMM8_Da) * (ulonglong)_DAT_182454cc0 << 0x20 |
            (ulonglong)(unaff_R15D & unaff_XMM8_Da) * (ulonglong)_DAT_182454cb0) +
            ((ulonglong)unaff_R15D * (ulonglong)_DAT_182454ca0 << 0x20) +
            (ulonglong)unaff_R15D * (ulonglong)_DAT_182454c90) -
          (((ulonglong)(unaff_R15D | unaff_XMM8_Da) * (ulonglong)_DAT_182454ce0 << 0x20) +
          (ulonglong)(unaff_R15D | unaff_XMM8_Da) * (ulonglong)_DAT_182454cd0)) + 0x339db0a24b662122
  ;
  _DAT_18339a910 = _DAT_18339a970 ^ uVar3 ^ uVar2;
  _DAT_18339a9d0 = (_DAT_18339a9d0 ^ uVar3) + uVar2 ^ 0x2988b5b729e09f42;
  _DAT_18339a7d8 = (_DAT_18339a7d8 * -0x1100284b79a10f41 ^ _DAT_18339a9d0) + uVar3;
  _DAT_18339a8d8 = _DAT_18339a7d8 ^ _DAT_18339a9d0;
  _DAT_18339a708 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar2;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e048fc6 (image 18e048fc6) =====

void FUN_18e048fc6(void)

{
  return;
}



// ===== continuation @ rva e048e1d (image 18e048e1d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e048e1d(void)

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



// ===== continuation @ rva e04d5ac (image 18e04d5ac) =====

void FUN_18e04d5ac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva e04d3a9 (image 18e04d3a9) =====

undefined8 thunk_FUN_18e04c2af(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva e04d51b (image 18e04d51b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e04d51b(void)

{
  int iVar1;
  longlong *unaff_R12;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(*unaff_R12 + 0x558))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e04d4df (image 18e04d4df) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04d4df(void)

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



// ===== continuation @ rva e04a632 (image 18e04a632) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04a632(void)

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



// ===== continuation @ rva e04a39c (image 18e04a39c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04a39c(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190de3220();
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



// ===== continuation @ rva e04bcf6 (image 18e04bcf6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e04bcf6(void)

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



// ===== continuation @ rva e04a6f1 (image 18e04a6f1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18e049456(void)

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



// ===== continuation @ rva e049c3c (image 18e049c3c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e049c3c(void)

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



// ===== continuation @ rva e0497a0 (image 18e0497a0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0497a0(void)

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



// ===== continuation @ rva e04d843 (image 18e04d843) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e04d843(void)

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



// ===== continuation @ rva e04d7ef (image 18e04d7ef) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04d7ef(void)

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



// ===== continuation @ rva e04e5a8 (image 18e04e5a8) =====

void FUN_18e04e5a8(void)

{
  return;
}



// ===== continuation @ rva e04da96 (image 18e04da96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04da96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18245b898)();
  return;
}



// ===== continuation @ rva e04d8cc (image 18e04d8cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04d8cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_18245b838)();
  return;
}



// ===== continuation @ rva e04d86a (image 18e04d86a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04d86a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18245b518)();
  return;
}



// ===== continuation @ rva e04dd87 (image 18e04dd87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04dd87(void)

{
  FUN_190dd72e0();
  (*_DAT_18245b928)();
  return;
}



// ===== continuation @ rva e04e573 (image 18e04e573) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04e573(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18245b608)();
  return;
}



// ===== continuation @ rva e04defa (image 18e04defa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e04defa(void)

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



// ===== continuation @ rva e04e5b6 (image 18e04e5b6) =====

void FUN_18e04e5b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e04de54 (image 18e04de54) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e04de54(void)

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



// ===== continuation @ rva e04e0c5 (image 18e04e0c5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e04e0c5(void)

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



// ===== continuation @ rva e04e092 (image 18e04e092) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e04e092(void)

{
  FUN_190ddce00();
  (*_DAT_18245b498)();
  return;
}



// ===== continuation @ rva e0555cd (image 18e0555cd) =====

void FUN_18e0555cd(void)

{
  return;
}



// ===== continuation @ rva e052cf0 (image 18e052cf0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e052cf0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18245d798)();
  return;
}



// ===== continuation @ rva e053ae5 (image 18e053ae5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e053ae5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18245d0f8)();
  return;
}



// ===== continuation @ rva e055147 (image 18e055147) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e055147(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18245d7a8)();
  return;
}



// ===== continuation @ rva e054dd0 (image 18e054dd0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e054dd0(void)

{
  FUN_190dd72e0();
  (*_DAT_18245d408)();
  return;
}



// ===== continuation @ rva e055572 (image 18e055572) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e055572(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18245d328)();
  return;
}



// ===== continuation @ rva e052ef5 (image 18e052ef5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e052ef5(void)

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



// ===== continuation @ rva e0555ec (image 18e0555ec) =====

void FUN_18e0555ec(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e053aa2 (image 18e053aa2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e053aa2(void)

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



// ===== continuation @ rva e054088 (image 18e054088) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e054088(void)

{
  FUN_190ddfc90();
  (*_DAT_18245d2d8)();
  return;
}



// ===== continuation @ rva e0550d6 (image 18e0550d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0550d6(void)

{
  (*_DAT_18245d818)();
  return;
}



// ===== continuation @ rva e054abf (image 18e054abf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e054abf(void)

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



// ===== continuation @ rva e057cd3 (image 18e057cd3) =====

void FUN_18e057cd3(void)

{
  return;
}



// ===== continuation @ rva e057b37 (image 18e057b37) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e057b37(void)

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



// ===== continuation @ rva e059f2e (image 18e059f2e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e059f2e(void)

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



// ===== continuation @ rva e059e03 (image 18e059e03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e059e03(void)

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



// ===== continuation @ rva e058978 (image 18e058978) =====

undefined8 thunk_FUN_18e058cdf(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva e0602c8 (image 18e0602c8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0602c8(void)

{
  char cVar1;
  longlong *unaff_R14;
  
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



// ===== continuation @ rva e05ab32 (image 18e05ab32) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e05ab32(void)

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



// ===== continuation @ rva e05a7e8 (image 18e05a7e8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e05a7e8(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0x488))(in_stack_00000030,in_stack_00000038);
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



// ===== continuation @ rva e059878 (image 18e059878) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e059878(void)

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



// ===== continuation @ rva e059d9f (image 18e059d9f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e059d9f(void)

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



// ===== continuation @ rva e05b0b9 (image 18e05b0b9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e05b0b9(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_RAX + 0x78))(in_stack_00000030);
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



// ===== continuation @ rva e05a93c (image 18e05a93c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e05a93c(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000030);
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



// ===== continuation @ rva e060692 (image 18e060692) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e060692(void)

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



// ===== continuation @ rva e06063e (image 18e06063e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e06063e(void)

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



// ===== continuation @ rva e0609e3 (image 18e0609e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0609e3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_18245fe68)();
  return;
}



// ===== continuation @ rva e06097d (image 18e06097d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e06097d(void)

{
  FUN_190dd72e0();
  (*_DAT_18245fd28)();
  return;
}



// ===== continuation @ rva e061514 (image 18e061514) =====

void FUN_18e061514(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e060fa0 (image 18e060fa0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e060fa0(void)

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



// ===== continuation @ rva e0612e0 (image 18e0612e0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0612e0(void)

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



// ===== continuation @ rva e0614d1 (image 18e0614d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0614d1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1824601d8)();
  return;
}



// ===== continuation @ rva e060d23 (image 18e060d23) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e060d23(void)

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



// ===== continuation @ rva e061174 (image 18e061174) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e061174(void)

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



// ===== continuation @ rva e061505 (image 18e061505) =====

void FUN_18e061505(void)

{
  return;
}



// ===== continuation @ rva e061226 (image 18e061226) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e061226(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_182460058)();
  return;
}



// ===== continuation @ rva e061323 (image 18e061323) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e061323(void)

{
  FUN_190de3220();
  (*_DAT_18245fef8)();
  return;
}



// ===== continuation @ rva e063626 (image 18e063626) =====

void FUN_18e063626(void)

{
  return;
}



// ===== continuation @ rva e06168c (image 18e06168c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e06168c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1824609e8)();
  return;
}



// ===== continuation @ rva e064164 (image 18e064164) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e064164(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182460b28)();
  return;
}



// ===== continuation @ rva e062f73 (image 18e062f73) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e062f73(void)

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



// ===== continuation @ rva e06229d (image 18e06229d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e06229d(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182460ae8)();
  return;
}



// ===== continuation @ rva e061b86 (image 18e061b86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e061b86(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_182460538)();
  return;
}



// ===== continuation @ rva e0635cb (image 18e0635cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e0635cb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182460ff8)();
  return;
}



// ===== continuation @ rva e063281 (image 18e063281) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e063281(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_182460b18)();
  return;
}



// ===== continuation @ rva e061a11 (image 18e061a11) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e061a11(void)

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



// ===== continuation @ rva e0641ca (image 18e0641ca) =====

void FUN_18e0641ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e061891 (image 18e061891) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e061891(void)

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



// ===== continuation @ rva e062996 (image 18e062996) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e062996(void)

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



// ===== continuation @ rva e0617f4 (image 18e0617f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e0617f4(void)

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



