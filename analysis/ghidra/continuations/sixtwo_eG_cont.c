// ===== continuation @ rva c8a1a70 (image 18c8a1a70) =====

void FUN_18c8a1a70(void)

{
  return;
}



// ===== continuation @ rva c8a18bd (image 18c8a18bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a18bd(void)

{
  FUN_190ddfc90();
  (*_DAT_181f933a8)();
  return;
}



// ===== continuation @ rva c8a1a78 (image 18c8a1a78) =====

void FUN_18c8a1a78(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a1a2c (image 18c8a1a2c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1a2c(void)

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



// ===== continuation @ rva c8a19f9 (image 18c8a19f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a19f9(void)

{
  FUN_190ddfc90();
  (*_DAT_181f93308)();
  return;
}



// ===== continuation @ rva c8a19b0 (image 18c8a19b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a19b0(void)

{
  FUN_190dd72e0();
  (*_DAT_181f93338)();
  return;
}



// ===== continuation @ rva c8a19d8 (image 18c8a19d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a19d8(void)

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



// ===== continuation @ rva c8a1914 (image 18c8a1914) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1914(void)

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



// ===== continuation @ rva c8a197c (image 18c8a197c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a197c(void)

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



// ===== continuation @ rva c906020 (image 18c906020) =====

void FUN_18c906020(void)

{
  return;
}



// ===== continuation @ rva c8eb5bb (image 18c8eb5bb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c8eb611 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c8eb5bb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c9055e1 (image 18c9055e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c9055e1(void)

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



// ===== continuation @ rva c8f3cdf (image 18c8f3cdf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c8f4e72 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c8f3cdf(int param_1)

{
  ulonglong uVar1;
  longlong *unaff_RSI;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000050;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  _DAT_183321678 = func_0x00018c906200(_DAT_183321770 + 0xffab00652dffb3ff ^ 0xba);
  uVar1 = (_DAT_183321678 ^ 0x2425a4a5b3f1a736) * -0x2462b7c05ca4753d;
  _DAT_183321750 = (_DAT_183321750 ^ uVar1) + 0xfbfeeedf ^ 0x5db6098219914ede;
  _DAT_1833218a8 = (_DAT_1833218a8 * 0x5cb92ab3f597afeb ^ _DAT_183321750) + uVar1;
  _DAT_183321680 = _DAT_1833218a8 ^ _DAT_183321750;
  _DAT_183321848 = 0xfbfeeedf;
  uVar1 = (~_DAT_1833217a8 + 0xe58ca681) *
          ((_DAT_183321550 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_183321550 & 0x84dd2325) * 2);
  uVar1 = (uVar1 | _DAT_183321748) + (uVar1 & _DAT_183321748);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183321750 = func_0x00018c906200((uVar1 | 0x615185a5) + (ulonglong)((uint)uVar1 & 0x615185a5))
  ;
  uVar1 = _DAT_183321620 << 0x2f | _DAT_183321620 >> 0x11;
  _DAT_1833216d8 = _DAT_183321570 ^ uVar1 ^ 0xe68ba680;
  _DAT_183321848 = (_DAT_183321848 ^ uVar1) + 0xe68ba680 ^ 0xd3316db8081eb3b0;
  _DAT_183321628 = (_DAT_183321628 * 0x7bff810d438e59e1 ^ _DAT_183321848) + uVar1;
  _DAT_183321610 = _DAT_183321628 ^ _DAT_183321848;
  _DAT_183321540 = 0xe68ba680;
  _DAT_1833217b0 = func_0x00018c906200(_DAT_183321768 ^ 0xffdc0027e300392c);
  uVar1 = _DAT_1833217b0 - (_DAT_1833217b0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = _DAT_1833217b0 ^ 0xfcf8ff00 ^
          (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7;
  _DAT_1833215b8 = _DAT_183321880 ^ uVar1 ^ 0x100ff0000;
  _DAT_183321568 = (_DAT_183321568 ^ uVar1) + 0x100ff0000 ^ 0x8ee97663d4e1fed9;
  _DAT_183321880 = (_DAT_183321880 * 0x71e27d49035fd2cf ^ _DAT_183321568) + uVar1;
  _DAT_1833218b8 = _DAT_183321880 ^ _DAT_183321568;
  _DAT_183321650 = 0xff0000;
  uVar1 = (_DAT_1833215f8 ^ _DAT_181fa3db0) + _DAT_183321868 + 0x84222325;
  uVar6 = (_DAT_183321868 ^ _UNK_181fa3db8) + _DAT_1833215f8 + 0xa76628ef;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833215f8 ^ _DAT_181fa3db0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183321868 ^ _UNK_181fa3db8;
  _DAT_183321740 =
       func_0x00018c906200((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833215f8 + 0xa76628ef) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183321868 + 0x84222325));
  _DAT_183321750 = _DAT_183321750 - 0xa76628ef ^ 0x1ec2f0083c9e0c30;
  _DAT_183321508 = _DAT_1833216e0 * -0x3291446a8ec8cef3;
  _DAT_1833216e0 = _DAT_183321508 ^ _DAT_183321750;
  _DAT_1833215a0 = 0x5899d711;
  uVar1 = (~_DAT_183321720 + 0xa76628f0) *
          ((_DAT_1833216a8 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_1833216a8 & 0x84dd2325) * 2);
  uVar1 = (uVar1 | _DAT_183321798) + (uVar1 & _DAT_183321798);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833217a0 = func_0x00018c906200((uVar1 | 0x23bb0bca) + (ulonglong)((uint)uVar1 & 0x23bb0bca))
  ;
  uVar1 = _DAT_1833217a0 & 0x7fffffffffff;
  _DAT_1833215e0 = _DAT_1833217c0 ^ uVar1 ^ 0xa86528ef;
  _DAT_1833217c0 = (_DAT_1833217c0 ^ uVar1) + 0xa86528ef ^ 0xdaa709756f553a4;
  _DAT_183321648 = (_DAT_183321648 * 0x6895ec4c10ee9a5d ^ _DAT_1833217c0) + uVar1;
  _DAT_183321540 = _DAT_183321648 ^ _DAT_1833217c0;
  _DAT_183321878 = 0xa86528ef;
  uVar1 = (~_DAT_183321600 + 0x5899d712) *
          ((_DAT_183321818 ^ 0x2c470bca) + (ulonglong)((uint)_DAT_183321818 & 0x2c470bca) * 2);
  uVar1 = (uVar1 | _DAT_1833217d8) + (uVar1 & _DAT_1833217d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183321898 = func_0x00018c906200((uVar1 | 0x74dedcdb) + (ulonglong)((uint)uVar1 & 0x74dedcdb))
  ;
  uVar1 = _DAT_183321898 - (_DAT_183321898 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183321898;
  _DAT_1833216f0 = _DAT_183321810 ^ uVar1 ^ 0x100ff0000;
  _DAT_1833217a0 = (_DAT_1833217a0 ^ uVar1) + 0x100ff0000 ^ 0xd8f04b2192992783;
  _DAT_183321500 = (_DAT_183321500 * -0x3d1b70f18c870c35 ^ _DAT_1833217a0) + uVar1 ^ _DAT_1833217a0;
  _DAT_183321680 = 0xff0000;
  _DAT_1833216c0 = func_0x00018c906200(_DAT_1833218c8 ^ 0xff47004482ffc7fd);
  uVar1 = (_DAT_1833216c0 ^ 0xcf00e4b8) << 0x17 | _DAT_1833216c0 >> 0x29;
  _DAT_183321568 = _DAT_1833215e0 ^ uVar1 ^ 0xd0e4e4b8;
  _DAT_1833218f0 = (_DAT_1833218f0 ^ uVar1) + 0xd0e4e4b8 ^ 0x94aa176b38d8fdb1;
  _DAT_1833216b8 = (_DAT_1833216b8 * 0x4737c3e05f101c5f ^ _DAT_1833218f0) + uVar1;
  _DAT_183321898 = _DAT_1833216b8 ^ _DAT_1833218f0;
  _DAT_183321560 = 0xd0e4e4b8;
  uVar1 = (_DAT_183321500 ^ _DAT_181fa3dc0) + _DAT_183321858 + 0x54c6c79d;
  uVar6 = (_DAT_183321858 ^ _UNK_181fa3dc8) + _DAT_183321500 + 0x301a1b48;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183321500 ^ _DAT_181fa3dc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183321858 ^ _UNK_181fa3dc8;
  _DAT_183321748 =
       func_0x00018c906200((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183321500 + 0x301a1b48) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183321858 + 0x54c6c79d));
  uVar1 = _DAT_183321748 ^ 0xd0e4e4b8;
  _DAT_1833218a8 = _DAT_183321728 ^ uVar1 ^ 0x100ff0000;
  _DAT_183321600 = (_DAT_183321600 ^ uVar1) + 0x100ff0000 ^ 0x55ba82b101e46743;
  _DAT_183321558 = (_DAT_183321558 * -0x295c739282ebd5a1 ^ _DAT_183321600) + uVar1;
  _DAT_183321898 = _DAT_183321558 ^ _DAT_183321600;
  _DAT_1833216a8 = 0xff0000;
  uVar1 = (_DAT_183321740 ^ _DAT_181fa3dd0) + 0x80dbcdfa;
  uVar6 = (_UNK_181fa3dd8 ^ 0xff0000) + _DAT_183321740 + 0xb3caa4a3;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183321740 ^ _DAT_181fa3dd0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _UNK_181fa3dd8 ^ 0xff0000;
  _DAT_183321868 =
       func_0x00018c906200((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183321740 + 0xb3caa4a3) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - 0x80dbcdfa);
  uVar1 = _DAT_183321868 ^ 0xb0faba3e9e84575e;
  _DAT_183321628 = _DAT_183321770 ^ uVar1 ^ 0x1afc99382;
  _DAT_1833215b0 = (_DAT_1833215b0 ^ uVar1) + 0x1afc99382 ^ 0xd94741148374fab6;
  _DAT_183321638 = (_DAT_183321638 * -0x1de7cc67078f5e95 ^ _DAT_1833215b0) + uVar1;
  _DAT_183321528 = _DAT_183321638 ^ _DAT_1833215b0;
  _DAT_1833215c8 = 0xafc99382;
  _DAT_183321608 = func_0x00018c906200(_DAT_183321560 + 0xffa8ffcbc6fff1ffU ^ 0xa5);
  _DAT_1833215b0 =
       (_DAT_1833215b0 ^ _DAT_183321608 ^ 0xb0faba3e2d4ef3fd) + 0x48344a7c ^ 0x80433fce33957145;
  _DAT_1833217c8 =
       (_DAT_1833217c8 * 0x72527e1fabf0e9ef ^ _DAT_1833215b0) +
       (_DAT_183321608 ^ 0xb0faba3e2d4ef3fd);
  _DAT_183321538 = _DAT_1833217c8 ^ _DAT_1833215b0;
  _DAT_1833218b8 = 0x48344a7c;
  _DAT_1833215f0 = func_0x00018c906200(_DAT_1833215a0 ^ 0xff970044290015d2);
  _DAT_183321548 = (_DAT_183321548 ^ _DAT_1833215f0) + 0xb3caa483 ^ 0x597e9125eee82cac;
  _DAT_183321758 = (_DAT_183321758 * -0x6d7528f1314c0975 ^ _DAT_183321548) + _DAT_1833215f0;
  _DAT_1833215a0 = _DAT_183321758 ^ _DAT_183321548;
  _DAT_1833218f0 = 0xb3caa483;
  uVar1 = (~_DAT_183321860 + 0xafc99383) *
          ((_DAT_183321520 ^ 0x2bebb0a7) + (ulonglong)((uint)_DAT_183321520 & 0x2bebb0a7) * 2);
  uVar1 = (uVar1 | _DAT_1833218c8) + (uVar1 & _DAT_1833218c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833215c8 = func_0x00018c906200((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_183321838 = (_DAT_1833215c8 ^ 0xafc99382) & 0x7fffffffffffffff;
  _DAT_183321830 = _DAT_183321830 ^ _DAT_183321838 ^ 0x14c727321f946824;
  _DAT_1833217b0 = (_DAT_1833217b0 * 0x61a708e6bb74be1 ^ _DAT_183321830) + _DAT_183321838;
  _DAT_183321848 = _DAT_1833217b0 ^ _DAT_183321830;
  _DAT_183321648 = 0;
  uVar1 = ((_DAT_183321660 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_183321660 & 0x84dd2325) * 2) *
          -_DAT_183321600;
  uVar1 = (uVar1 | _DAT_183321710) + (uVar1 & _DAT_183321710);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833217b0 = func_0x00018c906200((uVar1 | 0x84dd2325) + (ulonglong)((uint)uVar1 & 0x84dd2325))
  ;
  uVar1 = _DAT_1833217b0 & 0x7fffffffffffffff;
  _DAT_1833218f8 = _DAT_1833218d8 ^ uVar1 ^ 0xff0000;
  _DAT_183321708 = (_DAT_183321708 ^ uVar1) + 0xff0000 ^ 0xfc166dd6222b84d2;
  _DAT_183321738 = (_DAT_183321738 * -0x5cce38b71a06dd1 ^ _DAT_183321708) + uVar1;
  _DAT_1833218c0 = _DAT_183321738 ^ _DAT_183321708;
  _DAT_1833215c8 = 0xff0000;
  _DAT_183321590 = func_0x00018c906200(_DAT_1833216b0 ^ 0xff43fffb59ff5ce9);
  _DAT_1833216a0 = _DAT_1833216a0 ^ _DAT_183321590 ^ 0xc536e3176ce3e270;
  _DAT_1833215a8 = (_DAT_1833215a8 * 0x5274c75c254dde73 ^ _DAT_1833216a0) + _DAT_183321590;
  _DAT_183321768 = _DAT_1833215a8 ^ _DAT_1833216a0;
  _DAT_183321520 = 0;
  uVar1 = (_DAT_183321788 ^ 0x84dd2325) + _DAT_1833215e8 + 0x84dd2325;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183321788 ^ 0x84dd2325;
  uVar6 = ((_DAT_1833215e8 + _DAT_183321788) * 0x2000 | _DAT_1833215e8 + _DAT_183321788 >> 0x33) ^
          _DAT_1833215e8;
  _DAT_1833217e8 =
       func_0x00018c906200((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183321788 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833215e8 + 0x84dd2325));
  uVar1 = _DAT_1833217e8 & 0xffffffffffffc000;
  _DAT_1833216d8 = _DAT_1833216c8 ^ uVar1 ^ 0xff0000;
  _DAT_1833218c8 = (_DAT_1833218c8 ^ uVar1) + 0xff0000 ^ 0xf0262f88cf80e4e5;
  _DAT_183321760 = (_DAT_183321760 * 0x199817550b840fb ^ _DAT_1833218c8) + uVar1;
  _DAT_183321630 = _DAT_183321760 ^ _DAT_1833218c8;
  _DAT_1833216e8 = 0xff0000;
  _DAT_1833215a0 = func_0x00018c906200(_DAT_1833217d0 + 0x1eff83e30021ffU ^ 0x43);
  _DAT_183321520 = _DAT_183321520 ^ _DAT_1833215a0 ^ 0xd2b46ade ^ 0x7c1ac4bf80eb34d4;
  _DAT_183321700 =
       (_DAT_183321700 * 0x11d95f435474b5e3 ^ _DAT_183321520) + (_DAT_1833215a0 ^ 0xd2b46ade);
  _DAT_183321538 = _DAT_183321700 ^ _DAT_183321520;
  _DAT_183321548 = 0;
  _DAT_183321740 = func_0x00018c906200(_DAT_183321688 ^ 0xffdcff841b00da8a);
  _DAT_183321788 = _DAT_183321840 ^ _DAT_183321740 ^ 0xff0000;
  _DAT_183321728 = (_DAT_183321728 ^ _DAT_183321740) + 0xff0000 ^ 0x23889a6b2845b9e7;
  _DAT_183321750 = (_DAT_183321750 * -0x136948c2b1c6bb21 ^ _DAT_183321728) + _DAT_183321740;
  _DAT_183321790 = _DAT_183321750 ^ _DAT_183321728;
  auVar3._8_8_ = _UNK_180131b48;
  auVar3._0_8_ = (ulonglong)(uint)(param_1 << 0x10) ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_181fa3de0,_DAT_1800170c0);
  _DAT_183321598 = 0xff0000;
  uVar6 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar6 + _DAT_1833218f0;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_183321700 ^ uVar6;
  }
  _DAT_183321898 = func_0x00018c906200(SUB161(auVar3 ^ _DAT_181fa3de0,5) ^ uVar1);
  uVar6 = (ulonglong)(param_1 << 0x10 & 0xff0000);
  _DAT_183321538 = (_DAT_183321538 ^ _DAT_183321898) + uVar6 ^ 0x247403354d8ee455;
  _DAT_183321698 = (_DAT_183321698 * -0x63ff9bea94be30bf ^ _DAT_183321538) + _DAT_183321898;
  _DAT_183321688 = _DAT_183321698 ^ _DAT_183321538;
  uVar1 = in_stack_00000050 ^ 0x84222325 ^ _DAT_183321618;
  lVar2 = (in_stack_00000050 ^ 0x84222325) + _DAT_183321670;
  uVar5 = uVar1 + lVar2;
  uVar7 = (uVar6 ^ _DAT_183321670) + _DAT_183321618 + uVar6;
  uVar1 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar1;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6 ^ _DAT_183321670;
  _DAT_1833216b8 = uVar6;
  _DAT_183321780 =
       func_0x00018c906200((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183321618 + uVar6) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - lVar2);
  uVar1 = ~(in_stack_00000050 * uVar6 ^ _DAT_183321780) & in_stack_00000050 & 0x1ffffffffff;
  _DAT_183321828 = in_stack_00000050 | uVar6;
  _DAT_183321688 = (_DAT_183321688 ^ uVar1) + _DAT_183321828 ^ 0x43c3d60a28308104;
  _DAT_183321680 = (_DAT_183321680 * -0x617da7434b4c86e3 ^ _DAT_183321688) + uVar1;
  _DAT_183321898 = _DAT_183321680 ^ _DAT_183321688;
  _DAT_183321590 = _DAT_1833216c0 ^ _DAT_183321828;
  (**(code **)(*unaff_RSI + 0x558))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c8f7a22 (image 18c8f7a22) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8f7a22(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000060;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000060 < 0 || iVar1 <= in_stack_00000060) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c90571f (image 18c90571f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c905757 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c90571f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c8f7a6d (image 18c8f7a6d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8f7a6d(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c905ae1 (image 18c905ae1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c905ae1(void)

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



// ===== continuation @ rva c905be7 (image 18c905be7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c905be7(void)

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



// ===== continuation @ rva c9052c2 (image 18c9052c2) =====

void thunk_FUN_18c8ed50d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva c8a1c8c (image 18c8a1c8c) =====

void FUN_18c8a1c8c(void)

{
  return;
}



// ===== continuation @ rva c8a1bad (image 18c8a1bad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1bad(void)

{
  FUN_190ddfc90();
  (*_DAT_181f93408)();
  return;
}



// ===== continuation @ rva c8a1c94 (image 18c8a1c94) =====

void FUN_18c8a1c94(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a1be0 (image 18c8a1be0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1be0(void)

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



// ===== continuation @ rva c8a1c6c (image 18c8a1c6c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1c6c(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f93418)();
  return;
}



// ===== continuation @ rva c8a1c53 (image 18c8a1c53) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1c53(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181f93428)();
  return;
}



// ===== continuation @ rva c8a1c04 (image 18c8a1c04) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1c04(void)

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



// ===== continuation @ rva c8a1c1a (image 18c8a1c1a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1c1a(void)

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



// ===== continuation @ rva c8a1cfa (image 18c8a1cfa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1cfa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181f93498)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva c8a1d06 (image 18c8a1d06) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1d06(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva c8abae9 (image 18c8abae9) =====

void FUN_18c8abae9(void)

{
  return;
}



// ===== continuation @ rva c8a7c62 (image 18c8a7c62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a7c62(void)

{
  FUN_190ddce00();
  (*_DAT_181f97978)();
  return;
}



// ===== continuation @ rva c8b1cb7 (image 18c8b1cb7) =====

void FUN_18c8b1cb7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8b0995 (image 18c8b0995) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8b0995(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181f96e88)();
  return;
}



// ===== continuation @ rva c8b1c99 (image 18c8b1c99) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8b1c99(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181f971b8)();
  return;
}



// ===== continuation @ rva c8ac397 (image 18c8ac397) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8ac397(void)

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



// ===== continuation @ rva c8ad597 (image 18c8ad597) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8ad597(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_181f97628)();
  return;
}



// ===== continuation @ rva c8addcb (image 18c8addcb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8addcb(void)

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



// ===== continuation @ rva c8af008 (image 18c8af008) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8af008(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181f97ac8)();
  return;
}



// ===== continuation @ rva c8aecc0 (image 18c8aecc0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8aecc0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181f95b78)();
  return;
}



// ===== continuation @ rva c8b05e2 (image 18c8b05e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8b05e2(void)

{
  (*_DAT_181f972e8)();
  return;
}



// ===== continuation @ rva c8af4fa (image 18c8af4fa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8af4fa(void)

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



// ===== continuation @ rva c90a800 (image 18c90a800) =====

void FUN_18c90a800(void)

{
  return;
}



// ===== continuation @ rva c90638d (image 18c90638d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c90638d(void)

{
  FUN_190ddce00();
  (*_DAT_181fa4898)();
  return;
}



// ===== continuation @ rva c91311b (image 18c91311b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91311b(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x68))();
  (*_DAT_181fa8298)();
  return;
}



// ===== continuation @ rva c90ccb8 (image 18c90ccb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c90ccb8(void)

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



// ===== continuation @ rva c91310a (image 18c91310a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91310a(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x68))();
  (*_DAT_181fa7d58)();
  return;
}



// ===== continuation @ rva c90b319 (image 18c90b319) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c90b319(void)

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



// ===== continuation @ rva c90ea77 (image 18c90ea77) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c90ea77(void)

{
  (*_DAT_181fa83c8)();
  return;
}



// ===== continuation @ rva c90f7f4 (image 18c90f7f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c90f7f4(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x78))(in_stack_00000050);
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181fa7108)();
  return;
}



// ===== continuation @ rva c90ebca (image 18c90ebca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c90ebca(void)

{
  undefined8 in_stack_00000050;
  
  FUN_190dd9df0(in_stack_00000050,&stack0x00000068,*_DAT_18301ee50 + 0xe5ff,*_DAT_18301ee50 + 0xb3fd
                ,0x8d6);
  (*_DAT_181fa7888)();
  return;
}



// ===== continuation @ rva c90e417 (image 18c90e417) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c90e417(void)

{
  undefined8 in_stack_00000050;
  
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0xb1,5);
  (*_DAT_181fa6888)();
  return;
}



// ===== continuation @ rva c90d0bc (image 18c90d0bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c90d0bc(void)

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



// ===== continuation @ rva c90f078 (image 18c90f078) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c90f078(void)

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



// ===== continuation @ rva c9107d6 (image 18c9107d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c9107d6(void)

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



// ===== continuation @ rva c9172a3 (image 18c9172a3) =====

void FUN_18c9172a3(void)

{
  return;
}



// ===== continuation @ rva c91334d (image 18c91334d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91334d(void)

{
  FUN_190ddce00();
  (*_DAT_181fa9be8)();
  return;
}



// ===== continuation @ rva c918a05 (image 18c918a05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c918a05(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181fa9ba8)();
  return;
}



// ===== continuation @ rva c917bdc (image 18c917bdc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c917bdc(void)

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



// ===== continuation @ rva c917e71 (image 18c917e71) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c917e71(void)

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



// ===== continuation @ rva c9175ad (image 18c9175ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c9175ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181fa8f28)();
  return;
}



// ===== continuation @ rva c917585 (image 18c917585) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c917585(void)

{
  int in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c918703 (image 18c918703) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c918703(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fa9cc8)();
  return;
}



// ===== continuation @ rva c918a14 (image 18c918a14) =====

void FUN_18c918a14(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c9186c7 (image 18c9186c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c9186c7(void)

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



// ===== continuation @ rva c917294 (image 18c917294) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c917294(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181fa9de8)();
  return;
}



// ===== continuation @ rva c917238 (image 18c917238) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c917238(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fa9928)();
  return;
}



// ===== continuation @ rva c9189f6 (image 18c9189f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c9189f6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181fa9ac8)();
  return;
}



// ===== continuation @ rva c917463 (image 18c917463) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c917463(void)

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



// ===== continuation @ rva c91dc9d (image 18c91dc9d) =====

void FUN_18c91dc9d(void)

{
  return;
}



// ===== continuation @ rva c918c04 (image 18c918c04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c918c04(void)

{
  FUN_190ddce00();
  (*_DAT_181faab38)();
  return;
}



// ===== continuation @ rva c91de50 (image 18c91de50) =====

void FUN_18c91de50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c91cf33 (image 18c91cf33) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91cf33(void)

{
  char cVar1;
  longlong *unaff_R15;
  
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



// ===== continuation @ rva c91de45 (image 18c91de45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91de45(void)

{
  (*_DAT_181fab438)();
  return;
}



// ===== continuation @ rva c91c318 (image 18c91c318) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91c318(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x88))();
  FUN_190dd72e0();
  (*_DAT_181faac88)();
  return;
}



// ===== continuation @ rva c91de3a (image 18c91de3a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91de3a(void)

{
  (*_DAT_181fab1e8)();
  return;
}



// ===== continuation @ rva c91d1e9 (image 18c91d1e9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91d1e9(void)

{
  char cVar1;
  longlong *unaff_R15;
  
  cVar1 = (**(code **)(*unaff_R15 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c91d8a9 (image 18c91d8a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91d8a9(void)

{
  (*_DAT_181fab2e8)();
  return;
}



// ===== continuation @ rva c91be9d (image 18c91be9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91be9d(void)

{
  FUN_190dd72e0();
  (*_DAT_181fab0f8)();
  return;
}



// ===== continuation @ rva c91be20 (image 18c91be20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91be20(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
  (*_DAT_181faa9a8)();
  return;
}



// ===== continuation @ rva c91bb6b (image 18c91bb6b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91bb6b(void)

{
  char cVar1;
  longlong *unaff_R15;
  
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



// ===== continuation @ rva c91d854 (image 18c91d854) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91d854(void)

{
  char cVar1;
  longlong *unaff_R15;
  
  cVar1 = (**(code **)(*unaff_R15 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c91dffc (image 18c91dffc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91dffc(void)

{
  FUN_190dd72e0();
  (*_DAT_181fac548)();
  return;
}



// ===== continuation @ rva c91df7e (image 18c91df7e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91df7e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fac348)();
  return;
}



// ===== continuation @ rva c91e7e3 (image 18c91e7e3) =====

void FUN_18c91e7e3(void)

{
  return;
}



// ===== continuation @ rva c91e61d (image 18c91e61d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91e61d(void)

{
  FUN_190de3220();
  (*_DAT_181fac448)();
  return;
}



// ===== continuation @ rva c91e7ed (image 18c91e7ed) =====

void FUN_18c91e7ed(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c91e410 (image 18c91e410) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91e410(void)

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



// ===== continuation @ rva c91e105 (image 18c91e105) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91e105(void)

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



// ===== continuation @ rva c91dfe7 (image 18c91dfe7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91dfe7(void)

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



// ===== continuation @ rva c91e3d6 (image 18c91e3d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91e3d6(void)

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



// ===== continuation @ rva c91e7ba (image 18c91e7ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91e7ba(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fac488)();
  return;
}



// ===== continuation @ rva c91e293 (image 18c91e293) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91e293(void)

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



// ===== continuation @ rva c91e966 (image 18c91e966) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91e966(void)

{
  FUN_190dd72e0();
  (*_DAT_181fac678)();
  return;
}



// ===== continuation @ rva c91e8f3 (image 18c91e8f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91e8f3(void)

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



// ===== continuation @ rva c91ea46 (image 18c91ea46) =====

void FUN_18c91ea46(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c91ea2d (image 18c91ea2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ea2d(void)

{
  (*_DAT_181fac6b8)();
  return;
}



// ===== continuation @ rva c91ea3e (image 18c91ea3e) =====

void FUN_18c91ea3e(void)

{
  return;
}



// ===== continuation @ rva c91e92c (image 18c91e92c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91e92c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fac698)();
  return;
}



// ===== continuation @ rva c91e9af (image 18c91e9af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91e9af(void)

{
  FUN_190dd9df0();
  (*_DAT_181fac668)();
  return;
}



// ===== continuation @ rva c91e9e2 (image 18c91e9e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91e9e2(void)

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



// ===== continuation @ rva c91e98e (image 18c91e98e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91e98e(void)

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



// ===== continuation @ rva c91ea06 (image 18c91ea06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ea06(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fac638)();
  return;
}



// ===== continuation @ rva c91e951 (image 18c91e951) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91e951(void)

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



// ===== continuation @ rva c91eb66 (image 18c91eb66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91eb66(void)

{
  FUN_190dd72e0();
  (*_DAT_181fac738)();
  return;
}



// ===== continuation @ rva c91eaf3 (image 18c91eaf3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91eaf3(void)

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



// ===== continuation @ rva c91ec46 (image 18c91ec46) =====

void FUN_18c91ec46(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c91ec2d (image 18c91ec2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ec2d(void)

{
  (*_DAT_181fac778)();
  return;
}



// ===== continuation @ rva c91ebe2 (image 18c91ebe2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91ebe2(void)

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



// ===== continuation @ rva c91eb8e (image 18c91eb8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91eb8e(void)

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



// ===== continuation @ rva c91eb51 (image 18c91eb51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91eb51(void)

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



// ===== continuation @ rva c91ec3e (image 18c91ec3e) =====

void FUN_18c91ec3e(void)

{
  return;
}



// ===== continuation @ rva c91ec06 (image 18c91ec06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ec06(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fac718)();
  return;
}



// ===== continuation @ rva c91eb2c (image 18c91eb2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91eb2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fac748)();
  return;
}



// ===== continuation @ rva c91ed66 (image 18c91ed66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ed66(void)

{
  FUN_190dd72e0();
  (*_DAT_181fac878)();
  return;
}



// ===== continuation @ rva c91ecf3 (image 18c91ecf3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ecf3(void)

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



// ===== continuation @ rva c91ee3e (image 18c91ee3e) =====

void FUN_18c91ee3e(void)

{
  return;
}



// ===== continuation @ rva c91ed2c (image 18c91ed2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ed2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fac858)();
  return;
}



// ===== continuation @ rva c91ee46 (image 18c91ee46) =====

void FUN_18c91ee46(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c91ede2 (image 18c91ede2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91ede2(void)

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



// ===== continuation @ rva c91ee06 (image 18c91ee06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ee06(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fac848)();
  return;
}



// ===== continuation @ rva c91ee2d (image 18c91ee2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c91ee2d(void)

{
  (*_DAT_181fac838)();
  return;
}



// ===== continuation @ rva c91ed51 (image 18c91ed51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c91ed51(void)

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



// ===== continuation @ rva c8a1de6 (image 18c8a1de6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1de6(void)

{
  FUN_190dd72e0();
  (*_DAT_181f934e8)();
  return;
}



// ===== continuation @ rva c8a1d73 (image 18c8a1d73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1d73(void)

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



// ===== continuation @ rva c8a1ec6 (image 18c8a1ec6) =====

void FUN_18c8a1ec6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a1ead (image 18c8a1ead) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1ead(void)

{
  (*_DAT_181f93538)();
  return;
}



// ===== continuation @ rva c8a1ebe (image 18c8a1ebe) =====

void FUN_18c8a1ebe(void)

{
  return;
}



// ===== continuation @ rva c8a1e2f (image 18c8a1e2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1e2f(void)

{
  FUN_190dd9df0();
  (*_DAT_181f934f8)();
  return;
}



// ===== continuation @ rva c8a1dac (image 18c8a1dac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1dac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f93508)();
  return;
}



// ===== continuation @ rva c8a1e0e (image 18c8a1e0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1e0e(void)

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



// ===== continuation @ rva c8a1e62 (image 18c8a1e62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1e62(void)

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



// ===== continuation @ rva c8a1dd1 (image 18c8a1dd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1dd1(void)

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



// ===== continuation @ rva c8a1fe6 (image 18c8a1fe6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1fe6(void)

{
  FUN_190dd72e0();
  (*_DAT_181f935a8)();
  return;
}



// ===== continuation @ rva c8a1f73 (image 18c8a1f73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1f73(void)

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



// ===== continuation @ rva c8a20c6 (image 18c8a20c6) =====

void FUN_18c8a20c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a2062 (image 18c8a2062) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a2062(void)

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



// ===== continuation @ rva c8a200e (image 18c8a200e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a200e(void)

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



// ===== continuation @ rva c8a20ad (image 18c8a20ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a20ad(void)

{
  (*_DAT_181f93618)();
  return;
}



// ===== continuation @ rva c8a1fd1 (image 18c8a1fd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a1fd1(void)

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



// ===== continuation @ rva c8a20be (image 18c8a20be) =====

void FUN_18c8a20be(void)

{
  return;
}



// ===== continuation @ rva c8a1fac (image 18c8a1fac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a1fac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f935c8)();
  return;
}



// ===== continuation @ rva c8a2086 (image 18c8a2086) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2086(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f935b8)();
  return;
}



// ===== continuation @ rva c8a21e6 (image 18c8a21e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a21e6(void)

{
  FUN_190dd72e0();
  (*_DAT_181f936b8)();
  return;
}



// ===== continuation @ rva c8a2173 (image 18c8a2173) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2173(void)

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



// ===== continuation @ rva c8a22c6 (image 18c8a22c6) =====

void FUN_18c8a22c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a21d1 (image 18c8a21d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a21d1(void)

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



// ===== continuation @ rva c8a2262 (image 18c8a2262) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a2262(void)

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



// ===== continuation @ rva c8a22ad (image 18c8a22ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a22ad(void)

{
  (*_DAT_181f936a8)();
  return;
}



// ===== continuation @ rva c8a22be (image 18c8a22be) =====

void FUN_18c8a22be(void)

{
  return;
}



// ===== continuation @ rva c8a220e (image 18c8a220e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a220e(void)

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



// ===== continuation @ rva c8a2286 (image 18c8a2286) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2286(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f93698)();
  return;
}



// ===== continuation @ rva c8a222f (image 18c8a222f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a222f(void)

{
  FUN_190dd9df0();
  (*_DAT_181f93688)();
  return;
}



// ===== continuation @ rva c8a23e6 (image 18c8a23e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a23e6(void)

{
  FUN_190dd72e0();
  (*_DAT_181f93788)();
  return;
}



// ===== continuation @ rva c8a2373 (image 18c8a2373) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2373(void)

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



// ===== continuation @ rva c8a24be (image 18c8a24be) =====

void FUN_18c8a24be(void)

{
  return;
}



// ===== continuation @ rva c8a242f (image 18c8a242f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a242f(void)

{
  FUN_190dd9df0();
  (*_DAT_181f937b8)();
  return;
}



// ===== continuation @ rva c8a24c6 (image 18c8a24c6) =====

void FUN_18c8a24c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a24ad (image 18c8a24ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a24ad(void)

{
  (*_DAT_181f937c8)();
  return;
}



// ===== continuation @ rva c8a23d1 (image 18c8a23d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a23d1(void)

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



// ===== continuation @ rva c8a240e (image 18c8a240e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a240e(void)

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



// ===== continuation @ rva c8a23ac (image 18c8a23ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a23ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f93778)();
  return;
}



// ===== continuation @ rva c8a2486 (image 18c8a2486) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2486(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f93768)();
  return;
}



// ===== continuation @ rva c8a2462 (image 18c8a2462) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a2462(void)

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



// ===== continuation @ rva c8a25e6 (image 18c8a25e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a25e6(void)

{
  FUN_190dd72e0();
  (*_DAT_181f93878)();
  return;
}



// ===== continuation @ rva c8a2573 (image 18c8a2573) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2573(void)

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



// ===== continuation @ rva c8a26bc (image 18c8a26bc) =====

void FUN_18c8a26bc(void)

{
  return;
}



// ===== continuation @ rva c8a25ac (image 18c8a25ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a25ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f93888)();
  return;
}



// ===== continuation @ rva c8a26c4 (image 18c8a26c4) =====

void FUN_18c8a26c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a2662 (image 18c8a2662) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a2662(void)

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



// ===== continuation @ rva c8a262f (image 18c8a262f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a262f(void)

{
  FUN_190dd9df0();
  (*_DAT_181f93848)();
  return;
}



// ===== continuation @ rva c8a260e (image 18c8a260e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a260e(void)

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



// ===== continuation @ rva c8a25d1 (image 18c8a25d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a25d1(void)

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



// ===== continuation @ rva c8a26ac (image 18c8a26ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a26ac(void)

{
  (*_DAT_181f93868)(0);
  return;
}



// ===== continuation @ rva c8a27e6 (image 18c8a27e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a27e6(void)

{
  FUN_190dd72e0();
  (*_DAT_181f93958)();
  return;
}



// ===== continuation @ rva c8a2773 (image 18c8a2773) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2773(void)

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



// ===== continuation @ rva c8a28c4 (image 18c8a28c4) =====

void FUN_18c8a28c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a28ac (image 18c8a28ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a28ac(void)

{
  (*_DAT_181f93928)(0);
  return;
}



// ===== continuation @ rva c8a28bc (image 18c8a28bc) =====

void FUN_18c8a28bc(void)

{
  return;
}



// ===== continuation @ rva c8a27d1 (image 18c8a27d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a27d1(void)

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



// ===== continuation @ rva c8a2862 (image 18c8a2862) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a2862(void)

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



// ===== continuation @ rva c8a280e (image 18c8a280e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a280e(void)

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



// ===== continuation @ rva c8a282f (image 18c8a282f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a282f(void)

{
  FUN_190dd9df0();
  (*_DAT_181f93948)();
  return;
}



// ===== continuation @ rva c8a2886 (image 18c8a2886) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2886(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f93918)();
  return;
}



// ===== continuation @ rva c8a29e6 (image 18c8a29e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a29e6(void)

{
  FUN_190dd72e0();
  (*_DAT_181f93a68)();
  return;
}



// ===== continuation @ rva c8a2973 (image 18c8a2973) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2973(void)

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



// ===== continuation @ rva c8a2ac4 (image 18c8a2ac4) =====

void FUN_18c8a2ac4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a29d1 (image 18c8a29d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a29d1(void)

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



// ===== continuation @ rva c8a2abc (image 18c8a2abc) =====

void FUN_18c8a2abc(void)

{
  return;
}



// ===== continuation @ rva c8a2a2f (image 18c8a2a2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2a2f(void)

{
  FUN_190dd9df0();
  (*_DAT_181f93a78)();
  return;
}



// ===== continuation @ rva c8a2aac (image 18c8a2aac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2aac(void)

{
  (*_DAT_181f93a08)(0);
  return;
}



// ===== continuation @ rva c8a29ac (image 18c8a29ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a29ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f939f8)();
  return;
}



// ===== continuation @ rva c8a2a86 (image 18c8a2a86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2a86(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f93a28)();
  return;
}



// ===== continuation @ rva c8a6e30 (image 18c8a6e30) =====

void FUN_18c8a6e30(void)

{
  return;
}



// ===== continuation @ rva c8a2c14 (image 18c8a2c14) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a2c14(void)

{
  FUN_190ddce00();
  (*_DAT_181f94328)();
  return;
}



// ===== continuation @ rva c8a7758 (image 18c8a7758) =====

void FUN_18c8a7758(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a7462 (image 18c8a7462) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a7462(void)

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



// ===== continuation @ rva c8a7631 (image 18c8a7631) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a7631(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1842a3a30();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c8a6863 (image 18c8a6863) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a6863(void)

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



// ===== continuation @ rva c8a67fd (image 18c8a67fd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a67fd(void)

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



// ===== continuation @ rva c8a675d (image 18c8a675d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a675d(void)

{
  (*_DAT_181f94068)();
  return;
}



// ===== continuation @ rva c8a774d (image 18c8a774d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a774d(void)

{
  (*_DAT_181f94338)();
  return;
}



// ===== continuation @ rva c8a73c2 (image 18c8a73c2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a73c2(void)

{
  (*_DAT_181f942f8)();
  return;
}



// ===== continuation @ rva c8a6bbb (image 18c8a6bbb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a6bbb(void)

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



// ===== continuation @ rva c8a7944 (image 18c8a7944) =====

void FUN_18c8a7944(void)

{
  return;
}



// ===== continuation @ rva c8a789d (image 18c8a789d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a789d(void)

{
  FUN_190ddce00();
  (*_DAT_181f95068)();
  return;
}



// ===== continuation @ rva c8a794c (image 18c8a794c) =====

void FUN_18c8a794c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a7932 (image 18c8a7932) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a7932(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f95058)();
  return;
}



// ===== continuation @ rva c8a78d0 (image 18c8a78d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a78d0(void)

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



// ===== continuation @ rva c8a7915 (image 18c8a7915) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a7915(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (*_DAT_181f95048)();
  return;
}



// ===== continuation @ rva c8a78f4 (image 18c8a78f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a78f4(void)

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



// ===== continuation @ rva c8a797a (image 18c8a797a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a797a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181f950c8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva c8a7986 (image 18c8a7986) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a7986(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva c8a79a3 (image 18c8a79a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a79a3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_181f950b8)();
  return;
}



// ===== continuation @ rva c8a79ac (image 18c8a79ac) =====

void FUN_18c8a79ac(void)

{
  return;
}



// ===== continuation @ rva c8a7acb (image 18c8a7acb) =====

void FUN_18c8a7acb(void)

{
  return;
}



// ===== continuation @ rva c8a7a19 (image 18c8a7a19) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a7a19(void)

{
  FUN_190ddce00();
  (*_DAT_181f95128)();
  return;
}



// ===== continuation @ rva c8a7ad2 (image 18c8a7ad2) =====

void FUN_18c8a7ad2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8a7aab (image 18c8a7aab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a7aab(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181f950f8)();
  return;
}



// ===== continuation @ rva c8a7a91 (image 18c8a7a91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a7a91(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181f950e8)();
  return;
}



// ===== continuation @ rva c8a7a70 (image 18c8a7a70) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a7a70(void)

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



// ===== continuation @ rva c8a7a4c (image 18c8a7a4c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a7a4c(void)

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



// ===== continuation @ rva c8a7b0a (image 18c8a7b0a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8a7b0a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181f95168)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva c8a7b16 (image 18c8a7b16) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8a7b16(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva c8b1fc8 (image 18c8b1fc8) =====

void FUN_18c8b1fc8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar1 = (**(code **)(*unaff_R12 + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(int *)(unaff_RBP + 0x4c) = (int)*(undefined8 *)(unaff_RBP + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00018c8b1ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181f98d00 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva c8b1f73 (image 18c8b1f73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c8b1faa */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c8b1f73(void)

{
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R12 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c8c6f42 (image 18c8c6f42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8c6f42(longlong param_1)

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



// ===== continuation @ rva c8bb5f8 (image 18c8bb5f8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8bb5f8(ulonglong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong *unaff_R12;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar9;
  uint uVar10;
  
  uVar4 = (in_RAX ^ _DAT_181f99160) + param_1 + 0x76dd4707;
  uVar8 = (param_1 ^ _UNK_181f99168) + in_RAX + 0xd280c6dc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ in_RAX ^ _DAT_181f99160;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ param_1 ^ _UNK_181f99168;
  _DAT_1833200a8 =
       func_0x00018c8dc5f0((uVar8 << 0x1d | uVar8 >> 0x23) - (in_RAX + 0xd280c6dc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (param_1 + 0x76dd4707));
  _DAT_1833202e0 = (_DAT_1833202e0 ^ _DAT_183320460) + 0xf2ffe6fe ^ 0x30d0a80d3bf3c283;
  _DAT_1833200c0 = (_DAT_1833200c0 * 0x92a07a571ec43c9 ^ _DAT_1833202e0) + _DAT_183320460;
  _DAT_183320170 = _DAT_1833200c0 ^ _DAT_1833202e0;
  _DAT_18331fda0 = 0xf2ffe6fe;
  _DAT_183320158 = func_0x00018c8dc5f0(_DAT_1833204e8 ^ 0x46003b5b0025ac);
  _DAT_1833200f0 = _DAT_1833200f0 - 0xc3086d80 ^ 0xc20bc133a5bdba40;
  _DAT_1833203b8 = _DAT_1833204e0 * -0x71943f42be2f9623;
  _DAT_1833204e0 = _DAT_1833203b8 ^ _DAT_1833200f0;
  _DAT_18331fe98 = 0x3cf79280;
  uVar4 = (~_DAT_1833203e0 + 0x3cf79281) *
          ((_DAT_183320340 ^ 0x472a4e5b) + (ulonglong)((uint)_DAT_183320340 & 0x472a4e5b) * 2);
  uVar4 = (uVar4 | _DAT_183320130) + (uVar4 & _DAT_183320130);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183320490 = func_0x00018c8dc5f0((uVar4 | 0x7bdddcdb) + (ulonglong)((uint)uVar4 & 0x7bdddcdb))
  ;
  uVar4 = (_DAT_183320490 ^ 0x37f3a9b00) & 0x3ffffffff;
  _DAT_1833202f0 = _DAT_18331fec8 ^ uVar4 ^ 0xfffffffe;
  _DAT_18331fff0 = (_DAT_18331fff0 ^ uVar4) + 0xfffffffe ^ 0xbbe11ef6111efe4b;
  _DAT_183320180 = (_DAT_183320180 * -0x68691cf43c0ad58b ^ _DAT_18331fff0) + uVar4;
  _DAT_183320458 = _DAT_183320180 ^ _DAT_18331fff0;
  _DAT_183320460 = 0xfffffffe;
  uVar4 = (_DAT_18331fe48 ^ _DAT_181f99170) + _DAT_183320080 + 0x84222325;
  uVar8 = (_DAT_183320080 ^ _UNK_181f99178) + _DAT_18331fe48 + 0xbb23f363;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18331fe48 ^ _DAT_181f99170;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183320080 ^ _UNK_181f99178;
  _DAT_183320028 =
       func_0x00018c8dc5f0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18331fe48 + 0xbb23f363) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183320080 + 0x84222325));
  uVar4 = ((_DAT_183320028 ^ 0xbb23f360) >> 5) * 0x6e95104931a21a20;
  uVar4 = uVar4 << 0x3a | uVar4 >> 6;
  _DAT_1833204f8 = (_DAT_1833204f8 ^ uVar4) - 0xbb23f363 ^ 0x78ed3fea9bf6d15;
  _DAT_183320210 = (_DAT_183320210 * -0x3a8dcf99fbeb99c3 ^ _DAT_1833204f8) + uVar4;
  _DAT_183320008 = _DAT_183320210 ^ _DAT_1833204f8;
  _DAT_183320068 = 0x44dc0c9d;
  uVar4 = (~_DAT_1833201e8 + 0xbb23f364) *
          ((_DAT_183320368 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_183320368 & 0x7bdddcdb) * 2);
  uVar4 = (uVar4 | _DAT_18331fdb8) + (uVar4 & _DAT_18331fdb8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18331fd88 = func_0x00018c8dc5f0((uVar4 | 0xc0fe2fb8) + (ulonglong)((uint)uVar4 & 0xc0fe2fb8))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_18331fd88 & 0xfffffe00);
  _DAT_183320430 = _DAT_183320018 ^ uVar4 ^ 0x1bb23f361;
  _DAT_1833204e8 = (_DAT_1833204e8 ^ uVar4) + 0x1bb23f361 ^ 0x197fb1045ddd3214;
  _DAT_1833201b0 = (_DAT_1833201b0 * 0xce4d25db99e5749 ^ _DAT_1833204e8) + uVar4;
  _DAT_18331fd98 = 0xbb23f361;
  uVar4 = (~_DAT_183320298 + 0x1e6e6e65) *
          ((_DAT_1833203c0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833203c0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183320358) + (uVar4 & _DAT_183320358);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183320120 = func_0x00018c8dc5f0((uVar4 | 0x9a4c4d41) + (ulonglong)((uint)uVar4 & 0x9a4c4d41))
  ;
  _DAT_18331fe28 = (_DAT_18331fe28 ^ _DAT_183320120) - 0x1e6e6e64 ^ 0x8701f675c20a88a3;
  _DAT_1833200d0 = (_DAT_1833200d0 * -0x59b48ea91884c2ff ^ _DAT_18331fe28) + _DAT_183320120;
  _DAT_183320428 = _DAT_1833200d0 ^ _DAT_18331fe28;
  _DAT_1833203c0 = 0xe191919c;
  _DAT_18331ff40 = func_0x00018c8dc5f0(_DAT_183320410 + 0x4dffa59b004cffU ^ 0xbd);
  uVar4 = (_DAT_18331ff40 ^ 0x63c3232338) & 0x1ffffffffff;
  _DAT_1833201f0 = _DAT_1833204e0 ^ uVar4 ^ 0x11e6e6e62;
  _DAT_18331ffd0 = (_DAT_18331ffd0 ^ uVar4) + 0x11e6e6e62 ^ 0xc0301c61e44ef518;
  _DAT_183320470 = (_DAT_183320470 * 0x5fbf025403e8bda3 ^ _DAT_18331ffd0) + uVar4;
  _DAT_1833200e8 = _DAT_183320470 ^ _DAT_18331ffd0;
  _DAT_183320278 = 0x1e6e6e62;
  _DAT_1833204f8 = func_0x00018c8dc5f0(_DAT_18331fff0 + 0xffdcff8bddff6eff ^ 2);
  uVar4 = _DAT_1833204f8 << 6 | _DAT_1833204f8 >> 0x3a;
  _DAT_183320408 = (_DAT_183320408 ^ uVar4) + 0x10914007 ^ 0x7392ff063a4de3f1;
  _DAT_1833204e0 = (_DAT_1833204e0 * 0x2372ac5408effab9 ^ _DAT_183320408) + uVar4;
  _DAT_183320298 = _DAT_1833204e0 ^ _DAT_183320408;
  _DAT_18331ff68 = 0x10914007;
  _DAT_183320428 = func_0x00018c8dc5f0(_DAT_1833204c0 ^ 0xffe10073ddffb0be);
  uVar2 = ~(uint)_DAT_183320428 & 0xf2ffe6fe;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          (ulonglong)uVar2;
  _DAT_18331fef8 = (_DAT_18331fef8 ^ uVar4) + 0xe26ea6f8 ^ 0x347ea83d5acfc84e;
  _DAT_1833202f0 = (_DAT_1833202f0 * 0x65dd0d55520d7c23 ^ _DAT_18331fef8) + uVar4;
  _DAT_1833202d8 = _DAT_1833202f0 ^ _DAT_18331fef8;
  _DAT_183320290 = 0xe26ea6f8;
  _DAT_183320490 = func_0x00018c8dc5f0(_DAT_183320450 + 0xffe3007c1d0021ffU ^ 0x48);
  _DAT_183320398 = (_DAT_183320490 ^ 0xd5000000) & 0xffffffffff000000 ^ 0xd56e8df7;
  uVar4 = _DAT_183320398 >> 1 | _DAT_183320398;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_183320398 =
       (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       _DAT_183320398;
  _DAT_183320168 = _DAT_183320168 ^ _DAT_183320398 ^ 0x187f09bc8e8fc944;
  _DAT_18331fd90 = (_DAT_18331fd90 * 0x1f70ad3f80128d57 ^ _DAT_183320168) + _DAT_183320398;
  _DAT_1833200c8 = _DAT_18331fd90 ^ _DAT_183320168;
  _DAT_183320060 = 0;
  uVar4 = ((_DAT_1833204e8 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_1833204e8 & 0x7bdddcdb) * 2) *
          -_DAT_18331fed0;
  uVar4 = (uVar4 | _DAT_183320058) + (uVar4 & _DAT_183320058);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833200e8 = func_0x00018c8dc5f0((uVar4 | 0x7bdddcdb) + (ulonglong)((uint)uVar4 & 0x7bdddcdb))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_1833200e8 & 0xfffffffe);
  _DAT_183320038 = _DAT_18331fe48 ^ uVar4 ^ 0xfffffffe;
  _DAT_18331fd40 = (_DAT_18331fd40 ^ uVar4) + 0xfffffffe ^ 0xef38fb5dfd8b1bc4;
  _DAT_1833201f0 = (_DAT_1833201f0 * 0x2e7b382f51dcbe05 ^ _DAT_18331fd40) + uVar4;
  _DAT_18331ffa8 = _DAT_1833201f0 ^ _DAT_18331fd40;
  _DAT_183320328 = 0xfffffffe;
  uVar4 = (_DAT_183320300 ^ _DAT_181f99180) + _DAT_18331ffe0 + 0x76ddc5db;
  uVar8 = (_DAT_18331ffe0 ^ _UNK_181f99188) + _DAT_183320300 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183320300 ^ _DAT_181f99180;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18331ffe0 ^ _UNK_181f99188;
  _DAT_1833200d0 =
       func_0x00018c8dc5f0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183320300 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18331ffe0 + 0x76ddc5db));
  uVar4 = _DAT_1833200d0 << 0x39 | _DAT_1833200d0 >> 7;
  _DAT_1833204d0 = (_DAT_1833204d0 ^ uVar4) + 0xd001901 ^ 0x6976eae805502106;
  _DAT_183320298 = (_DAT_183320298 * 0x430ab7d33b82aef3 ^ _DAT_1833204d0) + uVar4;
  _DAT_183320198 = _DAT_183320298 ^ _DAT_1833204d0;
  _DAT_183320208 = 0xd001901;
  uVar4 = (_DAT_1833201b8 ^ _DAT_181f99190) + _DAT_18331fdd0 + 0x76ddc5db;
  uVar8 = (_DAT_18331fdd0 ^ _UNK_181f99198) + _DAT_1833201b8 + 0xd001901;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833201b8 ^ _DAT_181f99190;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18331fdd0 ^ _UNK_181f99198;
  _DAT_183320380 =
       func_0x00018c8dc5f0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1833201b8 + 0xd001901) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18331fdd0 + 0x76ddc5db));
  _DAT_183320378 = _DAT_183320378 ^ _DAT_183320380 ^ 0xf2ffe6fe ^ 0x589e9567d6827004;
  _DAT_183320460 =
       (_DAT_183320460 * 0x2761db72c0c57e2d ^ _DAT_183320378) + (_DAT_183320380 ^ 0xf2ffe6fe);
  _DAT_183320390 = _DAT_183320460 ^ _DAT_183320378;
  _DAT_1833200c0 = 0;
  _DAT_18331ff50 = func_0x00018c8dc5f0(_DAT_1833204e8 ^ 0xffe2ff7c22ffe1fd);
  _DAT_18331ffb0 = _DAT_18331ffe0 ^ _DAT_18331ff50 ^ 0x3d504482205934e1;
  _DAT_18331ff58 = (_DAT_18331ff58 * 0x2500937b62348b2d ^ _DAT_18331ffb0) + _DAT_18331ff50;
  _DAT_18331ffb0 = _DAT_18331ff58 ^ _DAT_18331ffb0;
  _DAT_18331ffe0 = 0;
  _DAT_18331fd10 = func_0x00018c8dc5f0(_DAT_18331fe68 ^ 0xffc3ffe74affdc93);
  uVar4 = (ulonglong)(~(uint)_DAT_18331fd10 & 0xfffffffe);
  _DAT_1833200a8 = _DAT_18331feb8 ^ uVar4 ^ 0xfffffffe;
  _DAT_183320090 = (_DAT_183320090 ^ uVar4) + 0xfffffffe ^ 0x964430b7f07647;
  _DAT_183320128 = (_DAT_183320128 * -0x5a1882fa5812f4f9 ^ _DAT_183320090) + uVar4;
  _DAT_18331ff80 = _DAT_183320128 ^ _DAT_183320090;
  auVar6._8_8_ = _UNK_180333d68;
  auVar6._0_8_ = (ulonglong)unaff_EBX ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_181f991a0,_DAT_1800170c0);
  _DAT_18331fd38 = 0xfffffffe;
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar8 + _DAT_18331ff60;
  if (auVar7._4_4_ < 0) {
    uVar4 = _DAT_1833201b8 ^ uVar8;
  }
  _DAT_18331fff8 = func_0x00018c8dc5f0(SUB161(auVar6 ^ _DAT_181f991a0,5) ^ uVar4);
  uVar4 = _DAT_18331fff8 << 4 | _DAT_18331fff8 >> 0x3c;
  uVar3 = _DAT_18011bc70 ^ unaff_EBX;
  uVar10 = unaff_EBX & _DAT_18011bc70;
  uVar2 = unaff_EBX ^ 0xffffffff;
  lVar9 = ((ulonglong)_DAT_181f99270 * (ulonglong)unaff_EBX << 0x20) +
          (ulonglong)_DAT_181f99260 * (ulonglong)unaff_EBX;
  lVar5 = ((ulonglong)uVar2 * (ulonglong)_DAT_181f992f0 + _DAT_181f99300 << 0x20) +
          (ulonglong)_DAT_181f992e0 * (ulonglong)uVar2 +
          ((ulonglong)uVar3 * (ulonglong)_DAT_181f992d0 << 0x20) +
          (ulonglong)_DAT_181f992c0 * (ulonglong)uVar3 +
          ((ulonglong)uVar10 * (ulonglong)_DAT_181f992b0 << 0x20) +
          (ulonglong)_DAT_181f992a0 * (ulonglong)uVar10 +
          ((ulonglong)unaff_EBX * (ulonglong)_DAT_181f99290 << 0x20) +
          (ulonglong)_DAT_181f99280 * (ulonglong)unaff_EBX + lVar9;
  _DAT_18331fdc8 =
       ((((ulonglong)_DAT_181f99240 * (ulonglong)uVar2 + _DAT_181f99250 << 0x20) +
         (ulonglong)_DAT_181f99230 * (ulonglong)uVar2 + lVar9 +
        ((ulonglong)_DAT_181f99220 * (ulonglong)uVar3 << 0x20) +
        (ulonglong)_DAT_181f99210 * (ulonglong)uVar3 +
        ((ulonglong)(unaff_EBX | _DAT_18011bc70) * (ulonglong)_DAT_181f99200 << 0x20) +
        (ulonglong)_DAT_181f991f0 * (ulonglong)(unaff_EBX | _DAT_18011bc70) +
        ((ulonglong)_DAT_181f991e0 * (ulonglong)uVar10 << 0x20) +
        (ulonglong)_DAT_181f991d0 * (ulonglong)uVar10 +
        ((ulonglong)_DAT_181f991c0 * (ulonglong)unaff_EBX << 0x20) +
        (ulonglong)_DAT_181f991b0 * (ulonglong)unaff_EBX) - lVar5) + 0xf2babc898e01e4b7;
  _DAT_18331fe50 = _DAT_1833200a0 ^ uVar4 ^ _DAT_18331fdc8;
  _DAT_1833200b0 = (_DAT_1833200b0 ^ uVar4) + _DAT_18331fdc8 ^ 0x491461b55dc7b2cd;
  _DAT_183320180 = (_DAT_183320180 * 0xd03d3c9417af0ab ^ _DAT_1833200b0) + uVar4;
  _DAT_18331ff18 = _DAT_183320180 ^ _DAT_1833200b0;
  *(int *)(unaff_RBP + -0xc) = (int)_DAT_18331fdc8;
  _DAT_18331fdc8 = _DAT_18331fdc8 & 0xffffffff;
  *(longlong **)(unaff_RBP + 0x10) = unaff_R12;
  *(undefined4 *)(unaff_RBP + 0x60) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x30);
  *(undefined4 *)(unaff_RBP + 0x70) = 0;
  iVar1 = (**(code **)(*unaff_R12 + 0x558))(lVar5,*(undefined8 *)(unaff_RBP + 0x30));
  switch(*(int *)(unaff_RBP + 0x70) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x70)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c8beedd (image 18c8beedd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8beedd(void)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_R13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  uint uVar13;
  undefined1 unaff_XMM12 [16];
  
  *(bool *)(unaff_RBP + 0x12) = unaff_RBP[-1] == 0;
  _DAT_18331ffc0 = func_0x00018c8dc5f0(_DAT_183320130 + 0xffab00079fff5cff ^ 0x17);
  uVar5 = _DAT_18331ffc0 ^ 0x361035b8;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 0x20 ^ uVar5;
  uVar5 = uVar5 << 0x31 | uVar5 >> 0xf;
  _DAT_183320130 = (_DAT_183320130 ^ uVar5) + 0xbe917dfd ^ 0x9d308eff4ee21627;
  _DAT_18331ff70 = (_DAT_18331ff70 * -0x4bb61a6e785baffd ^ _DAT_183320130) + uVar5;
  _DAT_1833202d8 = _DAT_18331ff70 ^ _DAT_183320130;
  _DAT_18331fdc8 = 0xbe917dfd;
  uVar5 = (_DAT_183320310 ^ _DAT_181f998b0) + _DAT_18331fe08 + 0x84222325;
  uVar7 = (_DAT_18331fe08 ^ _UNK_181f998b8) + _DAT_183320310 + 0x6bf05400;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320310 ^ _DAT_181f998b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18331fe08 ^ _UNK_181f998b8;
  _DAT_183320498 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320310 + 0x6bf05400) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18331fe08 + 0x84222325));
  _DAT_183320388 =
       (_DAT_183320388 ^ _DAT_183320498 * -0x34d0e79d37abbbf1) - 0x6bf05400 ^ 0xeb11a73e267b971a;
  _DAT_1833201e0 =
       (_DAT_1833201e0 * 0x24c473c9c0a11c17 ^ _DAT_183320388) + _DAT_183320498 * -0x34d0e79d37abbbf1
  ;
  _DAT_1833204b8 = _DAT_1833201e0 ^ _DAT_183320388;
  _DAT_183320190 = 0x940fac00;
  _DAT_1833203c8 = func_0x00018c8dc5f0(_DAT_18331feb8 + 0x67ff545aff4dffU ^ 0x2d);
  uVar5 = _DAT_1833203c8 * 0x3ae7cf9d39f1cbed;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38) ^ uVar5;
  _DAT_1833200f0 = _DAT_183320328 ^ uVar5 ^ 0x6bf063c0;
  _DAT_18331ff48 = (_DAT_18331ff48 ^ uVar5) + 0x6bf063c0 ^ 0x40446ea529fac9c5;
  _DAT_18331ffc0 = (_DAT_18331ffc0 * -0x786962de821bda9d ^ _DAT_18331ff48) + uVar5;
  _DAT_18331ffa8 = _DAT_18331ffc0 ^ _DAT_18331ff48;
  _DAT_1833204a8 = 0x6bf063c0;
  uVar5 = (_DAT_183320300 ^ _DAT_181f998c0) + _DAT_1833200f8 + 0xefd240e5;
  uVar7 = (_DAT_1833200f8 ^ _UNK_181f998c8) + _DAT_183320300 + 0x940fac00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320300 ^ _DAT_181f998c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833200f8 ^ _UNK_181f998c8;
  _DAT_18331fd58 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320300 + 0x940fac00) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833200f8 + 0xefd240e5));
  uVar5 = _DAT_18331fd58 >> 1 | _DAT_18331fd58;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 8 ^
          _DAT_18331fd58;
  _DAT_18331fe70 = _DAT_18331fe08 ^ uVar5 ^ 0x100000fc0;
  _DAT_18331feb0 = (_DAT_18331feb0 ^ uVar5) + 0x100000fc0 ^ 0x19b634c875bc30ed;
  _DAT_183320190 = (_DAT_183320190 * 0x59166a1a5ee95aab ^ _DAT_18331feb0) + uVar5;
  _DAT_18331fe48 = 0xfc0;
  _DAT_18331fe08 = func_0x00018c8dc5f0(_DAT_18331ff10 ^ 0x50031bd00e502);
  uVar5 = _DAT_18331fe08 >> 0xf & 0xffffffffffff;
  _DAT_183320100 = (_DAT_183320100 ^ uVar5) - 0xd6d828e0 ^ 0x792f5134ae01f928;
  _DAT_18331fda0 = (_DAT_18331fda0 * 0x35676b8976506111 ^ _DAT_183320100) + uVar5;
  _DAT_1833203e0 = _DAT_18331fda0 ^ _DAT_183320100;
  _DAT_18331fd48 = 0x2927d720;
  _DAT_183320410 = func_0x00018c8dc5f0(_DAT_18331fe48 ^ 0xfffc004dfaff354e);
  uVar5 = _DAT_183320410 & 0x7fffffffffffffff;
  _DAT_18331ff20 = _DAT_183320480 ^ uVar5 ^ 0xd6d838a0;
  _DAT_183320248 = (_DAT_183320248 ^ uVar5) + 0xd6d838a0 ^ 0xb78e06fd45fc89b7;
  _DAT_18331fdb0 = (_DAT_18331fdb0 * -0x596bccf3a0287661 ^ _DAT_183320248) + uVar5;
  _DAT_1833203e8 = _DAT_18331fdb0 ^ _DAT_183320248;
  _DAT_18331ffa8 = 0xd6d838a0;
  uVar5 = (_DAT_1833200c0 ^ _DAT_181f998d0) + _DAT_1833203e8 + 0x52fa1b85;
  uVar7 = (_DAT_1833203e8 ^ _UNK_181f998d8) + _DAT_1833200c0 + 0x2927d720;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833200c0 ^ _DAT_181f998d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833203e8 ^ _UNK_181f998d8;
  _DAT_18331fed0 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833200c0 + 0x2927d720) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833203e8 + 0x52fa1b85));
  uVar5 = (ulonglong)((((uint)_DAT_18331fed0 ^ 0xd08838a) & 0xd6d838a) << 4);
  _DAT_18331ff70 = _DAT_1833202f8 ^ uVar5 ^ 0x100000fc0;
  _DAT_183320010 = (_DAT_183320010 ^ uVar5) + 0x100000fc0 ^ 0x79a4bed9c626f716;
  _DAT_18331fec0 = (_DAT_18331fec0 * 0x5d8acbe62844f19d ^ _DAT_183320010) + uVar5;
  _DAT_183320130 = _DAT_18331fec0 ^ _DAT_183320010;
  _DAT_18331ff28 = 0xfc0;
  uVar5 = (~_DAT_183320328 + 0x6fac4c79) *
          ((_DAT_18331fd60 ^ 0x84222325) + (ulonglong)((uint)_DAT_18331fd60 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_183320490) + (uVar5 & _DAT_183320490);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18331fea8 = func_0x00018c8dc5f0((uVar5 | 0xeb8e6f5d) + (ulonglong)((uint)uVar5 & 0xeb8e6f5d))
  ;
  _DAT_1833202e0 = (_DAT_1833202e0 ^ _DAT_18331fea8) - 0x6fac4c78 ^ 0xf4aa8754b60f8a0c;
  _DAT_183320270 = (_DAT_183320270 * 0x6d1559a75f37881b ^ _DAT_1833202e0) + _DAT_18331fea8;
  _DAT_183320360 = _DAT_183320270 ^ _DAT_1833202e0;
  _DAT_183320020 = 0x9053b388;
  uVar5 = (_DAT_183320260 ^ _DAT_181f998e0) + _DAT_18331ff80 + 0x84222ce5;
  uVar7 = (_DAT_18331ff80 ^ _UNK_181f998e8) + _DAT_183320260 + 0x6fac4c78;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320260 ^ _DAT_181f998e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18331ff80 ^ _UNK_181f998e8;
  _DAT_183320298 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320260 + 0x6fac4c78) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18331ff80 + 0x84222ce5));
  _DAT_18331fd40 = _DAT_183320378 ^ _DAT_183320298 ^ 0x6fac5c38;
  _DAT_1833200f0 = (_DAT_1833200f0 ^ _DAT_183320298) + 0x6fac5c38 ^ 0x257b2ae61f763379;
  _DAT_183320338 = (_DAT_183320338 * -0x31c26b1a4488bc37 ^ _DAT_1833200f0) + _DAT_183320298;
  _DAT_1833201e8 = _DAT_183320338 ^ _DAT_1833200f0;
  _DAT_183320028 = 0x6fac5c38;
  uVar5 = (~_DAT_18331fdb0 + 0x2f121734) *
          ((_DAT_183320078 ^ 0x3ab35ed8) + (ulonglong)((uint)_DAT_183320078 & 0x3ab35ed8) * 2);
  uVar5 = (uVar5 | _DAT_183320140) + (uVar5 & _DAT_183320140);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320478 = func_0x00018c8dc5f0((uVar5 | 0x15a149eb) + (ulonglong)((uint)uVar5 & 0x15a149eb))
  ;
  uVar5 = _DAT_183320478 ^ 0x2f121733;
  _DAT_1833200e8 = _DAT_183320060 ^ uVar5 ^ 0xeda39530;
  _DAT_183320398 = (_DAT_183320398 ^ uVar5) + 0xeda39530 ^ 0xb5aa5eb90269e3a9;
  _DAT_1833200c8 = (_DAT_1833200c8 * 0x3441be2c223aeff1 ^ _DAT_183320398) + uVar5;
  _DAT_183320118 = _DAT_1833200c8 ^ _DAT_183320398;
  _DAT_18331fd08 = 0xeda39530;
  uVar5 = (~_DAT_18331fd00 + 0x2f121734) *
          ((_DAT_18331fd48 ^ 0x3ab35ed8) + (ulonglong)((uint)_DAT_18331fd48 & 0x3ab35ed8) * 2);
  uVar5 = (uVar5 | _DAT_183320028) + (uVar5 & _DAT_183320028);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833204c8 = func_0x00018c8dc5f0((uVar5 | 0x15a149eb) + (ulonglong)((uint)uVar5 & 0x15a149eb))
  ;
  _DAT_183320280 =
       (_DAT_183320280 ^ _DAT_1833204c8 & 0xffffffff80000000) + 0x91836ace ^ 0x390a08b703782031;
  _DAT_18331fef0 =
       (_DAT_18331fef0 * -0x78a5aa20459df7f9 ^ _DAT_183320280) +
       (_DAT_1833204c8 & 0xffffffff80000000);
  _DAT_18331fda0 = _DAT_18331fef0 ^ _DAT_183320280;
  _DAT_1833201e0 = 0x91836ace;
  uVar5 = (~_DAT_183320118 + 0x2f121734) *
          ((_DAT_18331ffe0 ^ 0x3ab35ed8) + (ulonglong)((uint)_DAT_18331ffe0 & 0x3ab35ed8) * 2);
  uVar5 = (uVar5 | _DAT_1833202f8) + (uVar5 & _DAT_1833202f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18331fd48 = func_0x00018c8dc5f0((uVar5 | 0x15a149eb) + (ulonglong)((uint)uVar5 & 0x15a149eb))
  ;
  _DAT_183320080 = (_DAT_183320080 ^ _DAT_18331fd48 ^ 0x2f121733) + 0x2e101531 ^ 0xdfa8f73f8afd50ab;
  _DAT_18331fe30 =
       (_DAT_18331fe30 * 0x4fa373c641e12113 ^ _DAT_183320080) + (_DAT_18331fd48 ^ 0x2f121733);
  _DAT_18331fd20 = _DAT_18331fe30 ^ _DAT_183320080;
  _DAT_1833202f0 = 0x2e101531;
  uVar5 = (~_DAT_183320268 + 0xeda39531) *
          ((_DAT_183320340 ^ 0x6981b615) + (ulonglong)((uint)_DAT_183320340 & 0x6981b615) * 2);
  uVar5 = (uVar5 | _DAT_183320038) + (uVar5 & _DAT_183320038);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320260 = func_0x00018c8dc5f0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  uVar5 = (_DAT_183320260 ^ 0xdc984ac23210e900) << 0x29 |
          (_DAT_183320260 ^ 0xdc984ac23210e900) >> 0x17;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  _DAT_1833201d0 =
       uVar5 ^ 0xeda39530 ^
       (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 0x10;
  _DAT_183320188 = _DAT_183320188 ^ _DAT_1833201d0 ^ 0xee2a52850e88cbd6;
  _DAT_183320318 = (_DAT_183320318 * 0x3769b0ccd5a22829 ^ _DAT_183320188) + _DAT_1833201d0;
  _DAT_183320408 = _DAT_183320318 ^ _DAT_183320188;
  _DAT_18331fd18 = 0;
  _DAT_183320450 = func_0x00018c8dc5f0(_DAT_183320050 + 0xffa0ffbb26ffc3ff ^ 0x71);
  _DAT_18331fed8 = (_DAT_18331fed8 ^ _DAT_183320450 ^ 0xbe917dfd) + 0x416e8202 ^ 0xac31edfa8b3ba483;
  _DAT_183320238 =
       (_DAT_183320238 * 0x4c703e373ae154e7 ^ _DAT_18331fed8) + (_DAT_183320450 ^ 0xbe917dfd);
  _DAT_183320488 = _DAT_183320238 ^ _DAT_18331fed8;
  _DAT_18331fdc0 = _DAT_183320488 ^ 0x416e8202;
  _DAT_183320080 = 0x416e8202;
  uVar5 = (_DAT_183320078 ^ _DAT_181f998f0) + _DAT_183320100 + 0x3ab35ed8;
  uVar7 = (_DAT_183320100 ^ _UNK_181f998f8) + _DAT_183320078 + 0x416e8202;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320078 ^ _DAT_181f998f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183320100 ^ _UNK_181f998f8;
  _DAT_18331fda0 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320078 + 0x416e8202) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183320100 + 0x3ab35ed8));
  uVar5 = _DAT_18331fda0 >> 1 | _DAT_18331fda0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~((uint)_DAT_18331fda0 ^
            (0x40 - (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) *
            0x10) & 0xbe917dfd);
  _DAT_1833203e0 = _DAT_1833203e0 ^ uVar5 ^ 0x13fd690c715685f9;
  _DAT_18331fd78 = (_DAT_18331fd78 * 0x219fe2325163a9b5 ^ _DAT_1833203e0) + uVar5;
  _DAT_183320098 = _DAT_18331fd78 ^ _DAT_1833203e0;
  _DAT_183320420 = 0;
  _DAT_1833202b0 = func_0x00018c8dc5f0(_DAT_1833204e8 ^ 0x1bff7ce30021e7);
  uVar5 = _DAT_1833202b0 << 0x26 | _DAT_1833202b0 >> 0x1a;
  _DAT_183320208 = _DAT_18331ffc0 ^ uVar5 ^ 0xfc0;
  _DAT_1833202a8 = (_DAT_1833202a8 ^ uVar5) + 0xfc0 ^ 0x9fd47e05bda9b3ca;
  _DAT_183320238 = (_DAT_183320238 * 0x559a37667cd12f57 ^ _DAT_1833202a8) + uVar5;
  _DAT_183320448 = _DAT_183320238 ^ _DAT_1833202a8;
  _DAT_18331fe58 = 0xfc0;
  uVar5 = (~_DAT_1833200d0 + 0x361035b9) *
          ((_DAT_1833204c8 ^ 0xb232169d) + (ulonglong)((uint)_DAT_1833204c8 & 0xb232169d) * 2);
  uVar5 = (uVar5 | _DAT_18331ff38) + (uVar5 & _DAT_18331ff38);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320140 = func_0x00018c8dc5f0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_18331fd98 = _DAT_18331fd98 ^ _DAT_183320140 & 0x7fffffffffffffff ^ 0x8beabe6fc733e9bb;
  _DAT_18331ff00 =
       (_DAT_18331ff00 * 0x6ebb599e0822e7cd ^ _DAT_18331fd98) +
       (_DAT_183320140 & 0x7fffffffffffffff);
  _DAT_1833200e8 = _DAT_18331ff00 ^ _DAT_18331fd98;
  _DAT_1833201c8 = 0;
  uVar5 = ((_DAT_1833202a0 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1833202a0 & 0x84222ce5) * 2) *
          -_DAT_18331fea0;
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320068 = func_0x00018c8dc5f0((uVar5 | 0x84222ce5) + (ulonglong)((uint)uVar5 & 0x84222ce5))
  ;
  uVar5 = _DAT_183320068 & 0xfffffffffffff000;
  _DAT_18331fff8 = _DAT_183320318 ^ uVar5 ^ 0xfc0;
  _DAT_1833202b0 = (_DAT_1833202b0 ^ uVar5) + 0xfc0 ^ 0x18d235b1619f0149;
  _DAT_183320338 = (_DAT_183320338 * -0x6975dc60de71d5fb ^ _DAT_1833202b0) + uVar5;
  _DAT_18331fe68 = _DAT_183320338 ^ _DAT_1833202b0;
  _DAT_183320140 = 0xfc0;
  uVar7 = (ulonglong)unaff_ESI;
  uVar5 = (~_DAT_1833203a8 + 0xfc1) *
          ((uVar7 ^ 0x84222325 ^ _DAT_18331fe60) +
          (ulonglong)((uint)_DAT_18331fe60 & (uint)(uVar7 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | _DAT_183320030) + (uVar5 & _DAT_183320030);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320490 =
       func_0x00018c8dc5f0((uVar7 ^ 0x84222ce5 | uVar5) +
                           (ulonglong)((uint)(uVar7 ^ 0x84222ce5) & (uint)uVar5));
  uVar5 = (~_DAT_183320490 & uVar7) >> 0x18 | (~_DAT_183320490 & uVar7) << 0x28;
  uVar8 = (ulonglong)(unaff_ESI & 0xfc0);
  _DAT_183320040 = (_DAT_183320040 ^ uVar5) + uVar8 ^ 0x7135270fe6b202be;
  _DAT_18331fd38 = (_DAT_18331fd38 * 0x1df502b59c5ad77f ^ _DAT_183320040) + uVar5;
  _DAT_18331ffa8 = _DAT_18331fd38 ^ _DAT_183320040;
  uVar5 = (_DAT_18331ff00 ^ _DAT_181f99900) + _DAT_18331ff58 + 0x84222325;
  uVar7 = (_DAT_18331ff58 ^ _UNK_181f99908) + _DAT_18331ff00 + 0x5cff633c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18331ff00 ^ _DAT_181f99900;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18331ff58 ^ _UNK_181f99908;
  iVar1 = *(int *)(unaff_RBP + 10);
  _DAT_18331feb0 = uVar8;
  _DAT_18331ff68 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18331ff00 + 0x5cff633c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18331ff58 + 0x84222325));
  uVar5 = _DAT_18331ff68 - (_DAT_18331ff68 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38 ^ _DAT_18331ff68) &
          0xfffffffffffff;
  _DAT_18331fed0 = (_DAT_18331fed0 ^ uVar5) - 0x5cff633c ^ 0x54f8828d373360db;
  _DAT_18331ff90 = (_DAT_18331ff90 * 0x592b653583727137 ^ _DAT_18331fed0) + uVar5;
  _DAT_1833202c8 = _DAT_18331ff90 ^ _DAT_18331fed0;
  _DAT_183320160 = 0xa3009cc4;
  uVar5 = (_DAT_183320180 ^ _DAT_181f99910) + _DAT_183320120 + 0x8422d325;
  uVar7 = (_DAT_183320120 ^ _UNK_181f99918) + _DAT_183320180 + 0x5cff633c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320180 ^ _DAT_181f99910;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183320120 ^ _UNK_181f99918;
  _DAT_183320358 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320180 + 0x5cff633c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183320120 + 0x8422d325));
  uVar5 = _DAT_183320358 << 0x3a | _DAT_183320358 >> 6;
  _DAT_18331ff88 = _DAT_18331feb0 ^ uVar5 ^ 0x5d00533c;
  _DAT_1833202a8 = (_DAT_1833202a8 ^ uVar5) + 0x5d00533c ^ 0x6fc577f9f62f6371;
  _DAT_1833200c0 = (_DAT_1833200c0 * 0x15d033fe34d9efe1 ^ _DAT_1833202a8) + uVar5;
  _DAT_183320180 = _DAT_1833200c0 ^ _DAT_1833202a8;
  _DAT_18331fef0 = 0x5d00533c;
  uVar5 = (~_DAT_18331fd00 + 0xa3009cc5) *
          ((_DAT_18331feb0 ^ uVar5 ^ 0x84222325) +
          (ulonglong)((uint)_DAT_18331ff88 & 0xd9227019) * 2);
  uVar5 = (uVar5 | _DAT_1833204b0) + (uVar5 & _DAT_1833204b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320008 = func_0x00018c8dc5f0((uVar5 | 0x7a22ecdd) + (ulonglong)((uint)uVar5 & 0x7a22ecdd))
  ;
  uVar5 = _DAT_183320008 ^ 0x5d00533c;
  _DAT_18331ff48 = _DAT_18331fd18 ^ uVar5 ^ 0x10000f000;
  _DAT_18331fe60 = (_DAT_18331fe60 ^ uVar5) + 0x10000f000 ^ 0x81aaa5805b50af0e;
  _DAT_18331ff60 = (_DAT_18331ff60 * -0x18e3572e3fcb2d1f ^ _DAT_18331fe60) + uVar5;
  _DAT_18331fe20 = _DAT_18331ff60 ^ _DAT_18331fe60;
  _DAT_18331ff40 = _DAT_1833200e8 ^ 0x10000f000;
  _DAT_183320230 = 0xf000;
  _DAT_183320398 = func_0x00018c8dc5f0(_DAT_1833203d0 ^ 0xb001d25000025);
  uVar5 = _DAT_183320398 << 2 | _DAT_183320398 >> 0x3e;
  _DAT_1833203a0 = (_DAT_1833203a0 ^ uVar5) - 0xe7231600 ^ 0xb6d324c582ee5790;
  _DAT_18331ffc0 = (_DAT_18331ffc0 * -0x50bce2913dc48119 ^ _DAT_1833203a0) + uVar5;
  _DAT_1833200a0 = _DAT_18331ffc0 ^ _DAT_1833203a0;
  _DAT_183320050 = 0x18dcea00;
  uVar5 = (_DAT_18331fec8 ^ _DAT_181f99920) + _DAT_1833202f0 + 0x8422d325;
  uVar7 = (_DAT_1833202f0 ^ _UNK_181f99928) + _DAT_18331fec8 + 0xe7231600;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18331fec8 ^ _DAT_181f99920;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833202f0 ^ _UNK_181f99928;
  _DAT_183320228 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18331fec8 + 0xe7231600) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833202f0 + 0x8422d325));
  _DAT_18331fe78 = _DAT_18331fd20 ^ _DAT_18331ff50 ^ 0xe7240600;
  _DAT_183320080 = (_DAT_183320080 ^ _DAT_18331ff50) + 0xe7240600 ^ 0xd5ca235dad649558;
  _DAT_183320138 = (_DAT_183320138 * 0x340952d9fdd3a215 ^ _DAT_183320080) + _DAT_18331ff50;
  _DAT_1833200d0 = _DAT_183320138 ^ _DAT_183320080;
  _DAT_1833203c0 = 0xe7240600;
  _DAT_1833200a0 = func_0x00018c8dc5f0(_DAT_183320108 + 0x4c0049a4ff52ff ^ 0xea);
  uVar5 = _DAT_1833200a0 >> 1 | _DAT_1833200a0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 4 ^
          _DAT_1833200a0) & 0x1fffffffff;
  _DAT_18331fe00 = (_DAT_18331fe00 ^ uVar5) - 0xcdddef80 ^ 0x23885ee51231f3dd;
  _DAT_183320370 = (_DAT_183320370 * 0x7a62abbde5965f3f ^ _DAT_18331fe00) + uVar5;
  _DAT_1833204d8 = _DAT_183320370 ^ _DAT_18331fe00;
  _DAT_183320270 = 0x32221080;
  _DAT_1833204b8 = func_0x00018c8dc5f0(_DAT_183320348 + 0x48ff74c40062ff ^ 0x31);
  uVar5 = _DAT_1833204b8 & 0xfffffffff0000000;
  _DAT_183320268 = _DAT_1833204b0 ^ uVar5 ^ 0x12c3a1795;
  _DAT_1833203a0 = (_DAT_1833203a0 ^ uVar5) + 0x12c3a1795 ^ 0xd69a2e23a2497181;
  _DAT_183320460 = (_DAT_183320460 * -0x60d4b993a7a9387f ^ _DAT_1833203a0) + uVar5;
  _DAT_18331fdf0 = _DAT_183320460 ^ _DAT_1833203a0;
  _DAT_18331ffb8 = 0x2c3a1795;
  _DAT_18331fda0 = func_0x00018c8dc5f0(_DAT_18331fff0 + 0xffc8ff84c3ffa4ff ^ 0xa5);
  uVar4 = (uint)_DAT_18331fda0 & 0x9bbefffb;
  uVar5 = (ulonglong)(uVar4 >> 9) | (ulonglong)uVar4 << 0x37;
  _DAT_183320470 = (_DAT_183320470 ^ uVar5) + 0xbc5e861 ^ 0x61f9bb90be140b10;
  _DAT_1833201e0 = (_DAT_1833201e0 * -0x6305616ac5c2f8d1 ^ _DAT_183320470) + uVar5;
  _DAT_183320420 = _DAT_1833201e0 ^ _DAT_183320470;
  _DAT_1833200e0 = 0xbc5e861;
  uVar5 = (_DAT_183320050 ^ _DAT_181f99930) + _DAT_1833201d8 + 0x1f9cdcde;
  uVar7 = (_DAT_1833201d8 ^ _UNK_181f99938) + _DAT_183320050 + 0x907b179a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320050 ^ _DAT_181f99930;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833201d8 ^ _UNK_181f99938;
  _DAT_183320300 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320050 + 0x907b179a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833201d8 + 0x1f9cdcde));
  uVar5 = _DAT_183320300 ^ 0x57e6531e077e89fe;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38) ^ uVar5;
  _DAT_18331fdc8 = (_DAT_18331fdc8 ^ uVar5) + 0x903a179a ^ 0xeaad98a9a89e66f0;
  _DAT_183320068 = (_DAT_183320068 * -0x1e3afe497b221c3d ^ _DAT_18331fdc8) + uVar5;
  _DAT_183320428 = _DAT_183320068 ^ _DAT_18331fdc8;
  _DAT_183320460 = 0x903a179a;
  uVar5 = ((_DAT_18331fe78 ^ 0x8422d325) + (ulonglong)((uint)_DAT_18331fe78 & 0x8422d325) * 2) *
          -_DAT_1833203b8;
  uVar5 = (uVar5 | _DAT_18331ffa8) + (uVar5 & _DAT_18331ffa8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833204d8 = func_0x00018c8dc5f0((uVar5 | 0x8422d325) + (ulonglong)((uint)uVar5 & 0x8422d325))
  ;
  uVar5 = _DAT_1833202d8 & 0xffffffffffffe000;
  _DAT_1833201e0 = _DAT_1833204a8 ^ uVar5 ^ 0xf000;
  _DAT_1833202f0 = (_DAT_1833202f0 ^ uVar5) + 0xf000 ^ 0x6c7daa2326c5cb64;
  _DAT_18331fec0 = (_DAT_18331fec0 * 0x49a5b549a28c2edf ^ _DAT_1833202f0) + uVar5;
  _DAT_183320118 = _DAT_18331fec0 ^ _DAT_1833202f0;
  _DAT_1833204e0 = 0xf000;
  uVar5 = (~_DAT_18331fe48 + 0x100000000) *
          ((_DAT_18331fea0 ^ 0x1f9cdcde) + (ulonglong)((uint)_DAT_18331fea0 & 0x1f9cdcde) * 2);
  uVar5 = (uVar5 | _DAT_1833200f8) + (uVar5 & _DAT_1833200f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833201c8 = func_0x00018c8dc5f0((uVar5 | 0xe0632321) + (ulonglong)((uint)uVar5 & 0xe0632321))
  ;
  _DAT_1833203f8 = (_DAT_1833203f8 ^ _DAT_1833201c8 ^ 0x9bbefffb) + 0x64410004 ^ 0xda85aa81339a169f;
  _DAT_183320490 =
       (_DAT_183320490 * -0x208c48a2a24cec9 ^ _DAT_1833203f8) + (_DAT_1833201c8 ^ 0x9bbefffb);
  _DAT_18331ff90 = _DAT_183320490 ^ _DAT_1833203f8;
  _DAT_183320220 = 0x64410004;
  uVar5 = (~_DAT_18331fe58 + 0x64410005) *
          ((_DAT_1833202f0 ^ 0x1f9cdcde) + (ulonglong)((uint)_DAT_1833202f0 & 0x1f9cdcde) * 2);
  uVar5 = (uVar5 | _DAT_183320360) + (uVar5 & _DAT_183320360);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833200e8 = func_0x00018c8dc5f0((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda))
  ;
  _DAT_183320250 = _DAT_183320250 ^ _DAT_1833200e8 ^ 0x3c7e04dbc8dd14a3;
  _DAT_18331ffc0 = (_DAT_18331ffc0 * 0x786f910ecb4325af ^ _DAT_183320250) + _DAT_1833200e8;
  _DAT_1833201c8 = _DAT_18331ffc0 ^ _DAT_183320250;
  _DAT_18331fe90 = _DAT_18331fd68;
  _DAT_183320290 = 0;
  _DAT_183320238 = func_0x00018c8dc5f0(_DAT_183320138 + 0xffad007c1b0021ff ^ 0xe9);
  uVar5 = _DAT_183320238 ^ 0xf000;
  _DAT_18331ff98 = _DAT_183320300 ^ uVar5 ^ 0xf000;
  _DAT_1833201d0 = (_DAT_1833201d0 ^ uVar5) + 0xf000 ^ 0x3c5b41c5d26a2f14;
  _DAT_183320330 = (_DAT_183320330 * 0x76910ef50d821a2d ^ _DAT_1833201d0) + uVar5;
  _DAT_183320490 = _DAT_183320330 ^ _DAT_1833201d0;
  _DAT_183320098 = 0xf000;
  uVar5 = (_DAT_183320400 ^ _DAT_181f99940) + _DAT_18331ffe8 + 0x1f3ce8c7;
  uVar7 = (_DAT_18331ffe8 ^ _UNK_181f99948) + _DAT_183320400 + 0x9b1ecbe2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320400 ^ _DAT_181f99940;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18331ffe8 ^ _UNK_181f99948;
  _DAT_183320418 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320400 + 0x9b1ecbe2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18331ffe8 + 0x1f3ce8c7));
  uVar5 = ((_DAT_183320418 ^ 0x9b1ecbe2) << 0x32 | (_DAT_183320418 ^ 0x9b1ecbe2) >> 0xe) ^
          0x9b1ecbe2;
  _DAT_18331ffe0 = _DAT_18331ffe0 ^ uVar5 ^ 0xee86acc7879d5000;
  _DAT_18331fdd8 = (_DAT_18331fdd8 * 0x34cccef2befe6131 ^ _DAT_18331ffe0) + uVar5;
  _DAT_183320260 = _DAT_18331fdd8 ^ _DAT_18331ffe0;
  _DAT_183320108 = 0;
  uVar5 = (_DAT_183320348 ^ 0x8422d325) + _DAT_183320168 + 0x8422d325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320348 ^ 0x8422d325;
  uVar7 = ((_DAT_183320168 + _DAT_183320348) * 0x2000 | _DAT_183320168 + _DAT_183320348 >> 0x33) ^
          _DAT_183320168;
  _DAT_18331ff78 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183320348 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183320168 + 0x8422d325));
  uVar5 = _DAT_1833203c0 & 0x3fffffffff;
  _DAT_18331fd38 = _DAT_18331fef8 ^ uVar5 ^ 0xf000;
  _DAT_183320120 = (_DAT_183320120 ^ uVar5) + 0xf000 ^ 0xf170f14036681e50;
  _DAT_18331fef0 = (_DAT_18331fef0 * 0x6c78821934bad5b7 ^ _DAT_183320120) + uVar5;
  _DAT_18331fe90 = _DAT_18331fef0 ^ _DAT_183320120;
  _DAT_18331fe40 = 0xf000;
  auVar11._8_8_ = _UNK_180144ff8;
  auVar11._0_8_ = (ulonglong)(uint)(iVar1 << 0xc) ^ 0x84222325;
  auVar10 = pshufb(auVar11 ^ _DAT_181f99950,unaff_XMM12);
  uVar7 = auVar10._8_8_ + auVar10._0_8_;
  uVar5 = uVar7 + _DAT_183320250;
  if (auVar10._4_4_ < 0) {
    uVar5 = _DAT_18331fe70 ^ uVar7;
  }
  _DAT_1833200e8 = func_0x00018c8dc5f0(SUB161(auVar11 ^ _DAT_181f99950,5) ^ uVar5);
  uVar5 = (_DAT_1833200e8 & 0xffffffffffff8000) << 0x2a | _DAT_1833200e8 >> 0x16;
  uVar7 = (ulonglong)(uint)(iVar1 << 0xc) & 0xffff;
  _DAT_18331fd10 = (_DAT_18331fd10 ^ uVar5) + uVar7 ^ 0x10e4eaec333aecf8;
  _DAT_18331ff08 = (_DAT_18331ff08 * -0x78d3496e976d56c9 ^ _DAT_18331fd10) + uVar5;
  _DAT_18331fe08 = _DAT_18331ff08 ^ _DAT_18331fd10;
  uVar9 = uVar8 ^ 0x84222325;
  uVar5 = ((_DAT_1833202b8 ^ uVar9) + (ulonglong)((uint)_DAT_1833202b8 & (uint)uVar9) * 2) *
          (uVar7 - _DAT_183320400);
  uVar5 = (uVar5 | _DAT_18331fd10) + (uVar5 & _DAT_18331fd10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833201e0 = uVar7;
  uVar5 = func_0x00018c8dc5f0((uVar9 ^ uVar7 | uVar5) +
                              (ulonglong)((uint)(uVar9 ^ uVar7) & (uint)uVar5));
  uVar5 = (uVar8 * uVar7 ^ uVar5) << 6 | uVar5 >> 0x3a;
  uVar8 = uVar8 | uVar7;
  _DAT_18331fd18 = (_DAT_18331fd18 ^ uVar5) + uVar8 ^ 0x2a32eb8697ebec7e;
  _DAT_18331ff88 = (_DAT_18331ff88 * 0x733f81fe4392fd35 ^ _DAT_18331fd18) + uVar5;
  _DAT_18331fea8 = _DAT_18331ff88 ^ _DAT_18331fd18;
  plVar2 = (longlong *)unaff_RBP[2];
  uVar3 = unaff_RBP[6];
  _DAT_183320480 = uVar8;
  lVar6 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar3,0);
  *(int *)(unaff_RBP + 0xc) = (int)*(char *)(lVar6 + *(int *)(unaff_RBP + 0xd));
  (**(code **)(*plVar2 + 0x6f8))(plVar2,uVar3,lVar6,2);
  unaff_RBP[10] = (ulonglong)*(uint *)(unaff_RBP + 0xc);
  _DAT_183320050 = func_0x00018c8dc5f0(_DAT_183320180 ^ 0xff72000b82ff54a0);
  uVar5 = _DAT_183320050 << 0x3b | _DAT_183320050 >> 5;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 2 ^ uVar5) *
          -0x15420bc01e6e2919;
  _DAT_1833202b8 = (_DAT_1833202b8 ^ uVar5) + 0xba9fbfa1 ^ 0xc55d4ee92008b18b;
  _DAT_18331fdc0 = (_DAT_18331fdc0 * 0x759b447b94156559 ^ _DAT_1833202b8) + uVar5;
  _DAT_183320028 = _DAT_18331fdc0 ^ _DAT_1833202b8;
  _DAT_183320110 = 0xba9fbfa1;
  uVar5 = (_DAT_183320130 ^ _DAT_181f99960) + _DAT_18331fe50 + 0x4c954f3c;
  uVar7 = (_DAT_18331fe50 ^ _UNK_181f99968) + _DAT_183320130 + 0x80369353;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320130 ^ _DAT_181f99960;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18331fe50 ^ _UNK_181f99968;
  _DAT_18331fef0 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320130 + 0x80369353) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18331fe50 + 0x4c954f3c));
  uVar5 = ((_DAT_18331fef0 ^ 0x6486803fb3d0671b) << 0x30 |
          (_DAT_18331fef0 ^ 0x6486803fb3d0671b) >> 0x10) * 0x4f3f2a42a95da0f;
  _DAT_1833204d8 = (_DAT_1833204d8 ^ uVar5) + 0x4881ff4a ^ 0x8d2430b4c2b49467;
  _DAT_183320098 = (_DAT_183320098 * 0x6b7ff87262731459 ^ _DAT_1833204d8) + uVar5;
  _DAT_18331ff08 = _DAT_183320098 ^ _DAT_1833204d8;
  _DAT_183320038 = 0x4881ff4a;
  uVar5 = (~_DAT_1833204a0 + 0xc0340c26) *
          ((_DAT_1833202d0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1833202d0 & 0x8422231a) * 2);
  uVar5 = (uVar5 | _DAT_1833200c0) + (uVar5 & _DAT_1833200c0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320378 = func_0x00018c8dc5f0((uVar5 | 0x44162f3f) + (ulonglong)((uint)uVar5 & 0x44162f3f))
  ;
  uVar5 = _DAT_183320378 << 0xe | _DAT_183320378 >> 0x32;
  _DAT_1833201f8 = _DAT_1833201a8 ^ uVar5 ^ 0xc0340c64;
  _DAT_1833200e8 = (_DAT_1833200e8 ^ uVar5) + 0xc0340c64 ^ 0x15cf57e259fc0c40;
  _DAT_183320380 = (_DAT_183320380 * -0xf714e0abcf9e8cd ^ _DAT_1833200e8) + uVar5;
  _DAT_183320478 = _DAT_183320380 ^ _DAT_1833200e8;
  _DAT_183320250 = 0xc0340c64;
  uVar5 = (_DAT_183320240 ^ _DAT_181f99970) + _DAT_1833200a8 + 0x44162f41;
  uVar7 = (_DAT_1833200a8 ^ _UNK_181f99978) + _DAT_183320240 + 0x3fcbf3db;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183320240 ^ _DAT_181f99970;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833200a8 ^ _UNK_181f99978;
  _DAT_1833202d8 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183320240 + 0x3fcbf3db) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833200a8 + 0x44162f41));
  uVar5 = (_DAT_1833202d8 ^ 0x65ef684395858c) & 0x7fffffffffffff;
  _DAT_183320430 = _DAT_183320448 ^ uVar5 ^ 0x10000003f;
  _DAT_18331ff98 = (_DAT_18331ff98 ^ uVar5) + 0x10000003f ^ 0x14d8d2cd2091ce3a;
  _DAT_18331fff0 = (_DAT_18331fff0 * 0x401f052f4ca767e9 ^ _DAT_18331ff98) + uVar5;
  _DAT_1833200f8 = _DAT_18331fff0 ^ _DAT_18331ff98;
  _DAT_183320030 = 0x3f;
  uVar5 = (~_DAT_183320028 + 0x8c5f8a4a) *
          ((_DAT_1833200c8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833200c8 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1833200c8) + (uVar5 & _DAT_1833200c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18331fec8 = func_0x00018c8dc5f0((uVar5 | 0x87da96c) + (ulonglong)((uint)uVar5 & 0x87da96c));
  uVar5 = ((_DAT_18331fec8 << 3 | _DAT_18331fec8 >> 0x3d) << 0x1b |
          (_DAT_18331fec8 & 0x1fffffffffffffff) >> 0x22) ^ 0x8c5f8a49;
  _DAT_183320478 = (_DAT_183320478 ^ uVar5) - 0x8c5f8a49 ^ 0x7799f40ba48ba0eb;
  _DAT_183320370 = (_DAT_183320370 * -0x1f743f001c6bbe8f ^ _DAT_183320478) + uVar5;
  _DAT_183320320 = _DAT_183320370 ^ _DAT_183320478;
  _DAT_183320280 = 0x73a075b7;
  uVar5 = (~_DAT_18331fde0 + 0x73a075b8) *
          ((_DAT_183320268 ^ 0x87da9ad) + (ulonglong)((uint)_DAT_183320268 & 0x87da9ad) * 2);
  uVar5 = (uVar5 | _DAT_183320370) + (uVar5 & _DAT_183320370);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320060 = func_0x00018c8dc5f0((uVar5 | 0x7bdddc1a) + (ulonglong)((uint)uVar5 & 0x7bdddc1a))
  ;
  uVar7 = _DAT_183320060 ^ 0x3f66e77d23c3a5b0;
  uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38) << 6 ^ uVar7;
  uVar5 = uVar7 >> 1 | uVar7;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38) ^ uVar7;
  _DAT_183320000 = _DAT_183320418 ^ uVar7 ^ 0x10000003f;
  _DAT_1833204c0 = (_DAT_1833204c0 ^ uVar7) + 0x10000003f ^ 0xb2276d7551b52be6;
  _DAT_183320218 = (_DAT_183320218 * -0x6dc578e8ef807d7f ^ _DAT_1833204c0) + uVar7;
  _DAT_183320380 = _DAT_183320218 ^ _DAT_1833204c0;
  _DAT_183320010 = 0x3f;
  uVar5 = (_DAT_18331fff0 ^ _DAT_181f99980) + _DAT_1833200f8 + 0x8422231a;
  uVar7 = (_DAT_1833200f8 ^ _UNK_181f99988) + _DAT_18331fff0 + 0x5e0d7b28;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18331fff0 ^ _DAT_181f99980;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833200f8 ^ _UNK_181f99988;
  _DAT_183320178 =
       func_0x00018c8dc5f0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18331fff0 + 0x5e0d7b28) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833200f8 + 0x8422231a));
  uVar5 = _DAT_183320178 >> 0x12 ^ 0x5c954;
  uVar7 = uVar5 * 0x40000;
  uVar5 = uVar7 + (uVar5 & 0x2aaaaaaaaaaa) * -0x20000;
  uVar5 = (uVar5 & 0x3333333333300000) + (uVar5 >> 2 & 0x3333333333330000);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0000) * unaff_R13 >> 0x38 | uVar7) ^ 0x3f;
  _DAT_183320418 = _DAT_1833200d8 ^ uVar5 ^ 0x5e0d7b67;
  _DAT_183320108 = (_DAT_183320108 ^ uVar5) + 0x5e0d7b67 ^ 0x44fb4c54e1f50b97;
  _DAT_18331fd30 = (_DAT_18331fd30 * -0xd5ac8deb2160a59 ^ _DAT_183320108) + uVar5;
  _DAT_1833204d8 = _DAT_18331fd30 ^ _DAT_183320108;
  _DAT_18331fe30 = 0x5e0d7b67;
  uVar5 = (~_DAT_1833201b8 + 0xa1f284d9) *
          ((_DAT_18331ff38 ^ 0xda2f5842) + (ulonglong)((uint)_DAT_18331ff38 & 0xda2f5842) * 2);
  uVar5 = (uVar5 | _DAT_183320310) + (uVar5 & _DAT_183320310);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18331fd30 = func_0x00018c8dc5f0((uVar5 | 0x7bdddc9a) + (ulonglong)((uint)uVar5 & 0x7bdddc9a))
  ;
  uVar5 = (_DAT_18331fd30 ^ 0x3b7f9428bd5f3ae8) & 0x7fffffffffffffff ^ 0x5e0d7b67;
  _DAT_183320258 = _DAT_18331fe98 ^ uVar5 ^ 0x10000003f;
  _DAT_183320380 = (_DAT_183320380 ^ uVar5) + 0x10000003f ^ 0xe9eec87b95a1e930;
  _DAT_18331fe20 = (_DAT_18331fe20 * 0x25263cad29bd0fd9 ^ _DAT_183320380) + uVar5;
  _DAT_183320350 = _DAT_18331fe20 ^ _DAT_183320380;
  _DAT_18331ffb8 = 0x3f;
  _DAT_183320398 = func_0x00018c8dc5f0(_DAT_18331fd40 ^ 0x210032b5ffd317);
  uVar5 = _DAT_183320398 << 0xe | (_DAT_183320398 & 0x3ffffffffffffff) >> 0x32;
  _DAT_1833202c0 = _DAT_1833202e8 ^ uVar5 ^ 0x10321beeb;
  _DAT_183320458 = (_DAT_183320458 ^ uVar5) + 0x10321beeb ^ 0xde15d898ab98459f;
  _DAT_18331ff10 = (_DAT_18331ff10 * -0x6d2278f600de27d5 ^ _DAT_183320458) + uVar5;
  _DAT_18331fe50 = _DAT_18331ff10 ^ _DAT_183320458;
  _DAT_183320330 = 0x321beeb;
  _DAT_1833204a8 = func_0x00018c8dc5f0(_DAT_18331fd10 + 0xffdf006a3a000bff ^ 0xe0);
  _DAT_1833202f8 = (_DAT_1833202f8 ^ _DAT_1833204a8 ^ 0xba9fbfa1) + 0x881bf00 ^ 0xac0d052cc54daea9;
  _DAT_18331fe38 =
       (_DAT_18331fe38 * 0x5302441ce3a57c99 ^ _DAT_1833202f8) + (_DAT_1833204a8 ^ 0xba9fbfa1);
  _DAT_18331fdb8 = _DAT_18331fe38 ^ _DAT_1833202f8;
  _DAT_18331fec0 = 0x881bf00;
  _DAT_183320130 = func_0x00018c8dc5f0(_DAT_18331fdf0 + 0x1cffa33dfffcff ^ 0xf2);
  uVar5 = _DAT_183320130 ^ 0x10174fd541b4aa00;
  _DAT_1833201e0 = _DAT_18331fec8 ^ uVar5 ^ 0x10321beeb;
  _DAT_1833201c8 = (_DAT_1833201c8 ^ uVar5) + 0x10321beeb ^ 0xed8751549f96a7d1;
  _DAT_1833200d8 = (_DAT_1833200d8 * -0x4224a37f26e77275 ^ _DAT_1833201c8) + uVar5;
  _DAT_18331ffc0 = _DAT_1833200d8 ^ _DAT_1833201c8;
  _DAT_1833203a0 = 0x321beeb;
  uVar5 = (~_DAT_1833204c0 + 0x321beec) *
          ((_DAT_183320020 ^ 0x87039dce) + (ulonglong)((uint)_DAT_183320020 & 0x87039dce) * 2);
  uVar5 = (uVar5 | _DAT_1833201b8) + (uVar5 & _DAT_1833201b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18331fd18 = func_0x00018c8dc5f0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_183320140 = (ulonglong)((uint)(_DAT_18331fd18 >> 0x24) & 0x321beeb);
  _DAT_1833203a8 = _DAT_1833203a8 ^ _DAT_183320140 ^ 0x5c219ac3027b69cd;
  _DAT_18331feb0 = (_DAT_18331feb0 * 0x3fad4f3f64b41c7b ^ _DAT_1833203a8) + _DAT_183320140;
  _DAT_183320298 = _DAT_18331feb0 ^ _DAT_1833203a8;
  _DAT_18331ff18 = 0;
  _DAT_18331fd58 = func_0x00018c8dc5f0(_DAT_18331fdd0 ^ 0xffdf007c19ffe1d8);
  uVar5 = _DAT_18331fd58 - (_DAT_18331fd58 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38 ^ _DAT_18331fd58;
  _DAT_183320458 = _DAT_1833202e8 ^ uVar5 ^ 0x3f;
  _DAT_18331ff80 = (_DAT_18331ff80 ^ uVar5) + 0x3f ^ 0x8806fa6ae38b65ea;
  _DAT_1833204a8 = (_DAT_1833204a8 * 0x2752855035618cc9 ^ _DAT_18331ff80) + uVar5;
  _DAT_18331ffd0 = _DAT_1833204a8 ^ _DAT_18331ff80;
  _DAT_18331fff0 = 0x3f;
  uVar5 = (~_DAT_18331ff00 + 0x4560405f) *
          ((_DAT_183320180 ^ 0x3ebd9c84) + (ulonglong)((uint)_DAT_183320180 & 0x3ebd9c84) * 2);
  uVar5 = (uVar5 | _DAT_183320028) + (uVar5 & _DAT_183320028);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18331ff30 = func_0x00018c8dc5f0((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda))
  ;
  _DAT_1833204f0 = _DAT_1833204f0 ^ _DAT_18331ff30 ^ 0xf0e1240c4fa5e0b4;
  _DAT_183320130 = (_DAT_183320130 * 0x5e9e0eb78b089daf ^ _DAT_1833204f0) + _DAT_18331ff30;
  _DAT_183320158 = _DAT_183320130 ^ _DAT_1833204f0;
  _DAT_18331fd58 = 0;
  _DAT_1833204d8 = func_0x00018c8dc5f0(_DAT_1833203e0 + 0x22ff83f6001dff ^ 0x60);
  uVar5 = _DAT_1833204d8 * 0x509fd7562714ebdf;
  _DAT_18331ffb0 = _DAT_1833201e8 ^ uVar5 ^ 0x3f;
  _DAT_18331fd58 = (_DAT_18331fd58 ^ uVar5) + 0x3f ^ 0x31e5383de86bd975;
  _DAT_183320108 = (_DAT_183320108 * 0x703f1731816fa223 ^ _DAT_18331fd58) + uVar5;
  _DAT_1833201f0 = _DAT_183320108 ^ _DAT_18331fd58;
  _DAT_183320250 = 0x3f;
  uVar5 = (~_DAT_18331ff08 + 0xba16b702) *
          ((_DAT_183320418 ^ 0x3e349424) + (ulonglong)((uint)_DAT_183320418 & 0x3e349424) * 2);
  uVar5 = (uVar5 | _DAT_18331ff80) + (uVar5 & _DAT_18331ff80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183320148 = func_0x00018c8dc5f0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_183320148 & 0xba16b701);
  _DAT_18331fe28 = _DAT_18331fe28 ^ uVar5 ^ 0x95a6fc0406cb5031;
  _DAT_18331ffb0 = (_DAT_18331ffb0 * 0x3ecf10a766ae25f3 ^ _DAT_18331fe28) + uVar5;
  _DAT_183320130 = _DAT_18331ffb0 ^ _DAT_18331fe28;
  _DAT_1833201b8 = 0;
  uVar5 = ((_DAT_183320088 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183320088 & 0x8422231a) * 2) *
          -_DAT_183320118;
  uVar5 = (uVar5 | _DAT_18331ff80) + (uVar5 & _DAT_18331ff80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833201b0 = func_0x00018c8dc5f0((uVar5 | 0x8422231a) + (ulonglong)((uint)uVar5 & 0x8422231a))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_1833201b0 & 0x3f);
  _DAT_183320348 = _DAT_1833204a8 ^ uVar5 ^ 0x3f;
  _DAT_183320130 = (_DAT_183320130 ^ uVar5) + 0x3f ^ 0x60632c4a98f0aa1e;
  _DAT_183320228 = (_DAT_183320228 * 0x234f0e519c26e033 ^ _DAT_183320130) + uVar5;
  _DAT_183320240 = _DAT_183320228 ^ _DAT_183320130;
  _DAT_1833201c8 = 0x3f;
  uVar5 = unaff_RBP[10];
  uVar7 = uVar5 ^ 0x84222325 ^ _DAT_1833203d8;
  lVar6 = (uVar5 ^ 0x84222325) + _DAT_1833200d8;
  uVar9 = uVar7 + lVar6;
  uVar12 = (_DAT_1833200d8 ^ 0x3f) + _DAT_1833203d8 + 0x3f;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar7;
  uVar9 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833200d8 ^ 0x3f;
  _DAT_1833204d8 =
       func_0x00018c8dc5f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833203d8 + 0x3f) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar6);
  uVar7 = ((uVar5 | 0x30) ^ _DAT_1833204d8) & 0xfffffffffffffff0;
  uVar4 = (uint)uVar5 & 0x3f;
  uVar9 = (ulonglong)uVar4;
  _DAT_183320318 = (_DAT_183320318 ^ uVar7) + uVar9 ^ 0x4d375d06b22b8e8b;
  _DAT_183320040 = (_DAT_183320040 * -0x5c5d988e6976b011 ^ _DAT_183320318) + uVar7;
  _DAT_18331fec8 = _DAT_183320040 ^ _DAT_183320318;
  auVar10._4_4_ = 0;
  auVar10._0_4_ = uVar4 ^ 0x84222325;
  auVar10._8_8_ = uVar8;
  auVar11 = pshufb(auVar10 ^ _DAT_181f99990,unaff_XMM12);
  uVar7 = auVar11._8_8_ + auVar11._0_8_;
  uVar5 = uVar7 + _DAT_18331fff8;
  if (auVar11._4_4_ < 0) {
    uVar5 = _DAT_18331fd38 ^ uVar7;
  }
  _DAT_183320168 = uVar9;
  _DAT_183320120 = func_0x00018c8dc5f0(SUB161(auVar10 ^ _DAT_181f99990,5) ^ uVar5);
  uVar5 = _DAT_183320120 >> 1 | _DAT_183320120;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = uVar9 ^ (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 2 ^
                  _DAT_183320120;
  uVar8 = uVar8 | uVar9;
  _DAT_18331fd28 = (_DAT_18331fd28 ^ uVar5) + uVar8 ^ 0x97d1d52e6ab31b12;
  _DAT_18331ff50 = (_DAT_18331ff50 * -0x55426b99affc0c65 ^ _DAT_18331fd28) + uVar5;
  _DAT_1833200f0 = _DAT_18331ff50 ^ _DAT_18331fd28;
  _DAT_183320058 = uVar8;
  unaff_RBP[0xc] = *unaff_RBP;
  uVar4 = *(uint *)(unaff_RBP + 0x11);
  *(uint *)(unaff_RBP + 0xd) = uVar4;
  uVar5 = (ulonglong)uVar4 ^ 0x84222325;
  uVar5 = (~_DAT_18331fe20 + 2) *
          ((uVar5 ^ _DAT_183320450) + (ulonglong)((uint)_DAT_183320450 & (uint)uVar5) * 2);
  uVar5 = (uVar5 | _DAT_183320208) + (uVar5 & _DAT_183320208);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar7 = (ulonglong)uVar4 ^ 0x84222324;
  _DAT_18331fdf0 = func_0x00018c8dc5f0((uVar7 | uVar5) + (ulonglong)((uint)uVar7 & (uint)uVar5));
  uVar13 = uVar4 ^ 0xffffffff;
  uVar5 = _DAT_18331fdf0 & 0xffffffffc0000000;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 8 ^ uVar5;
  _DAT_18331fdc8 =
       ((ulonglong)uVar13 * (ulonglong)_DAT_181f999a0 + _DAT_181f999d0 << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_181f999c0 +
       (ulonglong)uVar4 * (ulonglong)_DAT_181f999b0 +
       ((ulonglong)uVar4 * (ulonglong)_DAT_181f999a0 << 0x20) +
       (-(((ulonglong)uVar13 * (ulonglong)_DAT_181f99a90 + _DAT_181f99aa0 << 0x20) +
         (ulonglong)uVar13 * (ulonglong)_DAT_181f99a80) -
       (((ulonglong)(uVar4 ^ _DAT_18001a990) * (ulonglong)_DAT_181f99a70 << 0x20) +
        (ulonglong)(uVar4 ^ _DAT_18001a990) * (ulonglong)_DAT_181f99a60 +
        ((ulonglong)(uVar4 | _DAT_18001a990) * (ulonglong)_DAT_181f99a50 << 0x20) +
        (ulonglong)(uVar4 | _DAT_18001a990) * (ulonglong)_DAT_181f99a40 +
       ((ulonglong)(uVar4 & _DAT_18001a990) * (ulonglong)_DAT_181f99a30 << 0x20 |
       (ulonglong)(uVar4 & _DAT_18001a990) * (ulonglong)_DAT_181f99a20) +
       ((ulonglong)uVar4 * (ulonglong)_DAT_181f99a10 << 0x20) +
       (ulonglong)uVar4 * (ulonglong)_DAT_181f99a00)) + 0x84b7093460e4a0e;
  _DAT_18331ff30 = _DAT_183320128 ^ uVar5 ^ _DAT_18331fdc8;
  _DAT_1833203e0 = (_DAT_1833203e0 ^ uVar5) + _DAT_18331fdc8 ^ 0xe6c9b08f6c3862fc;
  _DAT_183320480 = (_DAT_183320480 * -0xa15ec031d815ddb ^ _DAT_1833203e0) + uVar5;
  _DAT_18331fdc0 = _DAT_183320480 ^ _DAT_1833203e0;
  _DAT_18331fdc8 = _DAT_18331fdc8 & 0xffffffff;
  *(int *)(unaff_RBP + 0xe) = (int)uVar8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x12)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c8c6de7 (image 18c8c6de7) =====

void FUN_18c8c6de7(void)

{
  return;
}



// ===== continuation @ rva c8c6d93 (image 18c8c6d93) =====

undefined8 FUN_18c8c6d93(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva c8be8ce (image 18c8be8ce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8be8ce(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBP;
  longlong *unaff_R12;
  uint unaff_R14D;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint unaff_XMM11_Da;
  uint uVar6;
  uint unaff_XMM15_Da;
  
  uVar3 = param_1 + in_RAX + param_2;
  uVar4 = param_3 + in_RCX + 1;
  param_1 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_1;
  param_3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ param_3;
  _DAT_183320160 =
       func_0x00018c8dc5f0((param_3 << 0x1d | param_3 >> 0x23) - (in_RCX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  uVar6 = unaff_R14D & unaff_XMM11_Da;
  uVar5 = unaff_R14D | unaff_XMM11_Da;
  uVar2 = unaff_R14D ^ unaff_XMM11_Da;
  uVar3 = ((ulonglong)uVar2 * (ulonglong)_DAT_181f99700 << 0x20) +
          (ulonglong)uVar2 * (ulonglong)_DAT_181f996f0 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_181f996e0 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_181f996d0 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_181f996c0 << 0x20 |
          (ulonglong)uVar6 * (ulonglong)_DAT_181f996b0) +
          ((ulonglong)unaff_R14D * (ulonglong)_DAT_181f996a0 << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_181f99690 +
          (-(((ulonglong)(unaff_R14D ^ unaff_XMM15_Da) * (ulonglong)_DAT_181f99740 + _DAT_181f99790
             << 0x20) + (ulonglong)(unaff_R14D ^ unaff_XMM15_Da) * (ulonglong)_DAT_181f99730 +
            ((ulonglong)uVar2 * (ulonglong)_DAT_181f99760 << 0x20) +
            (ulonglong)uVar2 * (ulonglong)_DAT_181f99750 +
            ((ulonglong)uVar6 * (ulonglong)_DAT_181f99760 << 0x20 |
            (ulonglong)uVar6 * (ulonglong)_DAT_181f99750) +
            ((ulonglong)unaff_R14D * (ulonglong)_DAT_181f99740 << 0x20) +
            (ulonglong)unaff_R14D * (ulonglong)_DAT_181f99730) -
          (((ulonglong)uVar5 * (ulonglong)_DAT_181f99780 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_181f99770)) + 0xad25c127f4ea448d;
  _DAT_1833203e0 = _DAT_1833204b0 ^ _DAT_183320160 ^ uVar3;
  _DAT_183320218 = (_DAT_183320218 ^ _DAT_183320160) + uVar3 ^ 0x6566b0d9a9387297;
  _DAT_183320420 = (_DAT_183320420 * -0x2c53e8c6cf9db9d7 ^ _DAT_183320218) + _DAT_183320160;
  _DAT_183320040 = _DAT_183320420 ^ _DAT_183320218;
  _DAT_183320088 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x68) = (int)uVar3;
  iVar1 = (**(code **)(*unaff_R12 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c8c3e7c (image 18c8c3e7c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8c3e7c(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  ulonglong uVar5;
  longlong *unaff_R12;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  ulonglong unaff_XMM6_Qa;
  uint uVar9;
  uint uVar10;
  uint unaff_XMM11_Da;
  undefined1 unaff_XMM12 [16];
  uint unaff_XMM13_Da;
  
  *(undefined2 *)(unaff_RBP + 0x42) = *(undefined2 *)(unaff_RBP + 0x70);
  (**(code **)(*unaff_R12 + 0x688))();
  uVar1 = *(uint *)(unaff_RBP + 0x90);
  iVar2 = *(int *)(unaff_RBP + 0x4c);
  uVar5 = (ulonglong)uVar1;
  auVar6._8_8_ = _UNK_180062bf8;
  auVar6._0_8_ = uVar5 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_181f99ab0,unaff_XMM12);
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar4 + _DAT_18331ff08;
  if (auVar7._4_4_ < 0) {
    uVar3 = _DAT_18331fd60 ^ uVar4;
  }
  _DAT_183320270 = func_0x00018c8dc5f0(SUB161(auVar6 ^ _DAT_181f99ab0,5) ^ uVar3);
  uVar9 = uVar1 & unaff_XMM11_Da;
  uVar10 = uVar1 ^ unaff_XMM11_Da;
  lVar8 = ((ulonglong)uVar1 * (ulonglong)_DAT_181f99b50 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_181f99b40;
  uVar3 = _DAT_183320270 ^ uVar5;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  uVar4 = ((((uVar5 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_181f99b00 +
            (((uVar5 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_181f99b30 +
             (unaff_XMM6_Qa >> 0x20) * (ulonglong)_DAT_181f99b00 << 0x20) +
            ((ulonglong)uVar10 * (ulonglong)_DAT_181f99b20 << 0x20) +
            (ulonglong)uVar10 * (ulonglong)_DAT_181f99b10 +
            ((ulonglong)uVar9 * (ulonglong)_DAT_181f99af0 << 0x20 |
            (ulonglong)uVar9 * (ulonglong)_DAT_181f99ae0) +
            ((ulonglong)uVar1 * (ulonglong)_DAT_181f99ad0 << 0x20) +
            (ulonglong)uVar1 * (ulonglong)_DAT_181f99ac0 + lVar8) -
          (((ulonglong)uVar10 * (ulonglong)_DAT_181f99bd0 << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_181f99bc0 +
           ((ulonglong)(uVar1 | unaff_XMM11_Da) * (ulonglong)unaff_XMM13_Da << 0x20) +
           (ulonglong)(uVar1 | unaff_XMM11_Da) * (ulonglong)_DAT_181f99ba0 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_181f99b90 << 0x20 |
           (ulonglong)uVar9 * (ulonglong)_DAT_181f99b80) +
           ((ulonglong)uVar1 * (ulonglong)_DAT_181f99b70 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_DAT_181f99b60 + lVar8)) + 0x959d53f6ee53fdf7;
  _DAT_18331fe60 = _DAT_18331ff78 ^ uVar3 ^ uVar4;
  _DAT_1833201f0 = (_DAT_1833201f0 ^ uVar3) + uVar4 ^ 0x67698899ed8c58ba;
  _DAT_183320180 = (_DAT_183320180 * -0x63245ecaee372b9b ^ _DAT_1833201f0) + uVar3;
  _DAT_1833204c0 = _DAT_183320180 ^ _DAT_1833201f0;
  _DAT_18331fd80 = uVar4 & 0xffffffff;
  *(int *)(unaff_RBP + 0x60) = (int)uVar4;
  *(int *)(unaff_RBP + 0x68) = iVar2;
  switch((int)uVar4 < iVar2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c8c6bbe (image 18c8c6bbe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8c6bbe(void)

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



// ===== continuation @ rva c8c6bac (image 18c8c6bac) =====

undefined8 FUN_18c8c6bac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva c8dec91 (image 18c8dec91) =====

void FUN_18c8dec91(void)

{
  return;
}



// ===== continuation @ rva c8deae8 (image 18c8deae8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8deae8(void)

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



// ===== continuation @ rva c8e2d27 (image 18c8e2d27) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e2d27(void)

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



// ===== continuation @ rva c8df6b6 (image 18c8df6b6) =====

undefined8 thunk_FUN_18c8df377(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva c8df7cc (image 18c8df7cc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8df7cc(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *in_stack_00000030;
  int iStack0000000000000050;
  ulonglong uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  iStack0000000000000050 = 2;
  uStack0000000000000060 = 0x28;
  uStack0000000000000058 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_RSI >> 0x28);
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



// ===== continuation @ rva c8e30be (image 18c8e30be) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e30be(void)

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



// ===== continuation @ rva c8e39db (image 18c8e39db) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e39db(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x6f0))();
  (**(code **)(*in_stack_00000030 + 0x6f8))(in_stack_00000030);
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030);
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c8e3986 (image 18c8e3986) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e3986(void)

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



// ===== continuation @ rva c8e2d55 (image 18c8e2d55) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18c8e376c(void)

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



// ===== continuation @ rva c8e0bde (image 18c8e0bde) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e0bde(void)

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



// ===== continuation @ rva c8e7852 (image 18c8e7852) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e7852(void)

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



// ===== continuation @ rva c8e77fe (image 18c8e77fe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e77fe(void)

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



// ===== continuation @ rva c8e8691 (image 18c8e8691) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e8691(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fa0968)();
  return;
}



// ===== continuation @ rva c8e7f9b (image 18c8e7f9b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e7f9b(void)

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



// ===== continuation @ rva c8e8247 (image 18c8e8247) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e8247(void)

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



// ===== continuation @ rva c8e86c5 (image 18c8e86c5) =====

void FUN_18c8e86c5(void)

{
  return;
}



// ===== continuation @ rva c8e8039 (image 18c8e8039) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e8039(void)

{
  FUN_190de3220();
  (*_DAT_181fa09d8)();
  return;
}



// ===== continuation @ rva c8e86d4 (image 18c8e86d4) =====

void FUN_18c8e86d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8e85aa (image 18c8e85aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e85aa(void)

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



// ===== continuation @ rva c8e7dfb (image 18c8e7dfb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e7dfb(void)

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



// ===== continuation @ rva c8e7d79 (image 18c8e7d79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e7d79(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181fa0e08)();
  return;
}



// ===== continuation @ rva c8e86b5 (image 18c8e86b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e86b5(void)

{
  (*_DAT_181fa0e08)();
  return;
}



// ===== continuation @ rva c8ea7e6 (image 18c8ea7e6) =====

void FUN_18c8ea7e6(void)

{
  return;
}



// ===== continuation @ rva c8e884c (image 18c8e884c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e884c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181fa1c88)();
  return;
}



// ===== continuation @ rva c8ea29c (image 18c8ea29c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8ea29c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181fa1a28)();
  return;
}



// ===== continuation @ rva c8ea0a6 (image 18c8ea0a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8ea0a6(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fa1248)();
  return;
}



// ===== continuation @ rva c8e9bd8 (image 18c8e9bd8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e9bd8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181fa1ce8)();
  return;
}



// ===== continuation @ rva c8eafaf (image 18c8eafaf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8eafaf(void)

{
  (*_DAT_181fa1da8)();
  return;
}



// ===== continuation @ rva c8eb38a (image 18c8eb38a) =====

void FUN_18c8eb38a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c8ea759 (image 18c8ea759) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8ea759(void)

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



// ===== continuation @ rva c8eb284 (image 18c8eb284) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8eb284(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181fa1798)();
  return;
}



// ===== continuation @ rva c8e9fa2 (image 18c8e9fa2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8e9fa2(void)

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



// ===== continuation @ rva c8e8d93 (image 18c8e8d93) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c8e8d93(void)

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



// ===== continuation @ rva c8eb0e1 (image 18c8eb0e1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c8eb0e1(void)

{
  (*_DAT_181fa1da8)();
  return;
}



