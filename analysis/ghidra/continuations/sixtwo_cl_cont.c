// ===== continuation @ rva e1a40c7 (image 18e1a40c7) =====

void FUN_18e1a40c7(void)

{
  return;
}



// ===== continuation @ rva e1a3dad (image 18e1a3dad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a3dad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1824a2278)();
  return;
}



// ===== continuation @ rva e1a40cf (image 18e1a40cf) =====

void FUN_18e1a40cf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e1a4068 (image 18e1a4068) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a4068(void)

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



// ===== continuation @ rva e1a3dca (image 18e1a3dca) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a3dca(void)

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



// ===== continuation @ rva e1a3f3f (image 18e1a3f3f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a3f3f(void)

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



// ===== continuation @ rva e1a40a6 (image 18e1a40a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a40a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1824a2368)();
  return;
}



// ===== continuation @ rva e1a3f98 (image 18e1a3f98) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a3f98(void)

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



// ===== continuation @ rva e1a3e3f (image 18e1a3e3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a3e3f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1824a22c8)();
  return;
}



// ===== continuation @ rva e1a3e59 (image 18e1a3e59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a3e59(void)

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



// ===== continuation @ rva e1a4248 (image 18e1a4248) =====

void FUN_18e1a4248(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00018e1a4275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1824a2940 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva e1a41f3 (image 18e1a41f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018e1a422a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18e1a41f3(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva e1b139c (image 18e1b139c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1b139c(void)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar14;
  
  *(undefined4 *)((longlong)unaff_RBP + -4) = unaff_EDI;
  *(int *)(unaff_RBP + 3) = unaff_ESI << 6;
  uVar10 = _DAT_1833a3968;
  uVar7 = _DAT_1833a38f8;
  uVar8 = _DAT_1833a38f8 ^ 0x764aa84b;
  *(bool *)(unaff_RBP + 0xb) = *unaff_RBP == 0;
  uVar9 = uVar10 ^ 0xbf7f9a79;
  lVar6 = uVar10 + 0x764aa84b;
  uVar10 = uVar8 + lVar6;
  uVar13 = uVar9 + uVar7 + 0xbf7f9a79;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar8;
  uVar9 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar9;
  _DAT_1833a38b0 =
       func_0x00018e1ce110((uVar9 << 0x1d | uVar9 >> 0x23) - (uVar7 + 0xbf7f9a79) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar6);
  _DAT_1833a3980 = (_DAT_1833a3980 ^ _DAT_1833a38b0 ^ 0xb2688a68) + 0xff7f9b7f ^ 0xf8bead68f8822f86;
  _DAT_1833a3920 =
       (_DAT_1833a3920 * -0x57043279b5390b8f ^ _DAT_1833a3980) + (_DAT_1833a38b0 ^ 0xb2688a68);
  _DAT_1833a3a88 = _DAT_1833a3920 ^ _DAT_1833a3980;
  _DAT_1833a3818 = 0xff7f9b7f;
  _DAT_1833a3860 = func_0x00018e1ce110(_DAT_1833a3908 ^ 0xff5f0000b2ffc2b0);
  uVar3 = ~(uint)_DAT_1833a3860 & 0x13f84c60;
  uVar7 = (ulonglong)(uVar3 >> 9) | (ulonglong)uVar3 << 0x37;
  _DAT_1833a3810 = (_DAT_1833a3810 ^ uVar7) + 0x876182e8 ^ 0x3e8eafb93845431f;
  _DAT_1833a37b0 = (_DAT_1833a37b0 * -0x21ab11c1091c403d ^ _DAT_1833a3810) + uVar7;
  _DAT_1833a3938 = _DAT_1833a37b0 ^ _DAT_1833a3810;
  _DAT_1833a37f0 = _DAT_1833a3a80 ^ 0x876182e8;
  _DAT_1833a3878 = 0x876182e8;
  uVar7 = (~_DAT_1833a3738 + 0x7401d535) *
          ((_DAT_1833a3868 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1833a3868 & 0x84222ce5) * 2);
  uVar7 = (uVar7 | _DAT_1833a39d0) + (uVar7 & _DAT_1833a39d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3970 = func_0x00018e1ce110((uVar7 | 0xf023f9d1) + (ulonglong)((uint)uVar7 & 0xf023f9d1))
  ;
  uVar7 = _DAT_1833a3970 ^ 0x7231cddfcc0;
  _DAT_1833a3898 = _DAT_1833a3a88 ^ uVar7 ^ 0x7401e4f4;
  _DAT_1833a3868 = (_DAT_1833a3868 ^ uVar7) + 0x7401e4f4 ^ 0xfd45757c02db6350;
  _DAT_1833a3740 = (_DAT_1833a3740 * -0x1bd8d0e882fd94f ^ _DAT_1833a3868) + uVar7;
  _DAT_1833a3750 = _DAT_1833a3740 ^ _DAT_1833a3868;
  _DAT_1833a39d8 = 0x7401e4f4;
  uVar7 = (~_DAT_1833a3718 + 0x6a4f8401) *
          ((_DAT_1833a3a20 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833a3a20 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_1833a38e8) + (uVar7 & _DAT_1833a38e8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a37d0 = func_0x00018e1ce110((uVar7 | 0xee6da725) + (ulonglong)((uint)uVar7 & 0xee6da725))
  ;
  uVar7 = (_DAT_1833a37d0 ^ 0x6a4f8400) << 0x31 | (_DAT_1833a37d0 ^ 0x6a4f8400) >> 0xf;
  uVar10 = uVar7 >> 1 | uVar7;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  _DAT_1833a3838 = (_DAT_1833a3838 ^ uVar7) - 0x6a4f8400 ^ 0x9bfd2d8aa3b74502;
  _DAT_1833a3718 = (_DAT_1833a3718 * 0x6b0ead12002a8819 ^ _DAT_1833a3838) + uVar7;
  _DAT_1833a3720 = _DAT_1833a3718 ^ _DAT_1833a3838;
  _DAT_1833a3ad8 = 0x95b07c00;
  uVar7 = (~_DAT_1833a3938 + 0x6a4f8401) *
          ((_DAT_1833a3820 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1833a3820 & 0x84222ce5) * 2);
  uVar7 = (uVar7 | _DAT_1833a39b8) + (uVar7 & _DAT_1833a39b8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3950 = func_0x00018e1ce110((uVar7 | 0xee6da8e5) + (ulonglong)((uint)uVar7 & 0xee6da8e5))
  ;
  _DAT_1833a3890 = _DAT_1833a39c8 ^ _DAT_1833a3950 ^ 0x6a4f93c0;
  _DAT_1833a3908 = (_DAT_1833a3908 ^ _DAT_1833a3950) + 0x6a4f93c0 ^ 0x613354c9feb2b801;
  _DAT_1833a39b8 = (_DAT_1833a39b8 * 0x6eee074c05a0b415 ^ _DAT_1833a3908) + _DAT_1833a3950;
  _DAT_1833a3948 = _DAT_1833a39b8 ^ _DAT_1833a3908;
  _DAT_1833a3840 = 0x6a4f93c0;
  _DAT_1833a3858 = func_0x00018e1ce110(_DAT_1833a3990 + 0xbff7262ff68ff ^ 0xf5);
  uVar7 = _DAT_1833a3858 - (_DAT_1833a3858 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1833a3858;
  _DAT_1833a3740 = (_DAT_1833a3740 ^ uVar7) - 0x198b2f80 ^ 0x51c596a514c45343;
  _DAT_1833a3af0 = (_DAT_1833a3af0 * 0x2e03bd8c4cdaf2c5 ^ _DAT_1833a3740) + uVar7;
  _DAT_1833a3700 = _DAT_1833a3af0 ^ _DAT_1833a3740;
  _DAT_1833a3aa8 = _DAT_1833a3918 ^ 0xffffffffe674d080;
  _DAT_1833a39f8 = 0xe674d080;
  _DAT_1833a3830 = func_0x00018e1ce110(_DAT_1833a39e0 + 0x1007ae4ff58ffU ^ 0x92);
  uVar7 = _DAT_1833a3830 ^ 0x198b2fc0;
  _DAT_1833a3a88 = _DAT_1833a38f0 ^ uVar7 ^ 0x198b3f40;
  _DAT_1833a3898 = (_DAT_1833a3898 ^ uVar7) + 0x198b3f40 ^ 0xb4e75e6417bfc4f7;
  _DAT_1833a3ad8 = (_DAT_1833a3ad8 * -0x68e736a9e0c2b8ff ^ _DAT_1833a3898) + uVar7;
  _DAT_1833a3788 = _DAT_1833a3ad8 ^ _DAT_1833a3898;
  _DAT_1833a38f0 = 0x198b3f40;
  _DAT_1833a38d8 = func_0x00018e1ce110(_DAT_1833a39b8 + 0x34003462ffccff ^ 0x9b);
  uVar7 = (_DAT_1833a38d8 ^ 0xffffffc0) & 0x1ffffffff;
  _DAT_1833a3848 = _DAT_1833a3890 ^ uVar7 ^ 0x100000fc0;
  _DAT_1833a3960 = (_DAT_1833a3960 ^ uVar7) + 0x100000fc0 ^ 0xf8dbcb70b327f1eb;
  _DAT_1833a3780 = (_DAT_1833a3780 * 0x13d2f5730c64ab1d ^ _DAT_1833a3960) + uVar7;
  _DAT_1833a3a18 = _DAT_1833a3780 ^ _DAT_1833a3960;
  _DAT_1833a3a00 = _DAT_1833a3ac8 ^ 0x100000fc0;
  _DAT_1833a3908 = 0xfc0;
  uVar7 = (~_DAT_1833a3a30 + 0x876182e9) *
          ((_DAT_1833a3a38 ^ 0x7b5db85a) + (ulonglong)((uint)_DAT_1833a3a38 & 0x7b5db85a) * 2);
  uVar7 = (uVar7 | _DAT_1833a3890) + (uVar7 & _DAT_1833a3890);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a37b0 = func_0x00018e1ce110((uVar7 | 0xfc3c3ab2) + (ulonglong)((uint)uVar7 & 0xfc3c3ab2))
  ;
  uVar7 = _DAT_1833a37b0 - (_DAT_1833a37b0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
           _DAT_1833a37b0;
  uVar7 = uVar10 >> 1 | uVar10;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
           ^ uVar10;
  _DAT_1833a3778 = _DAT_1833a3ad0 ^ uVar10 ^ 0x186e11e67;
  _DAT_1833a3730 = (ulonglong)(&UNK_186e11e67 + (_DAT_1833a3730 ^ uVar10)) ^ 0x28926d5788af193e;
  _DAT_1833a3868 = (_DAT_1833a3868 * 0x651c6310f7780897 ^ _DAT_1833a3730) + uVar10;
  _DAT_1833a3940 = _DAT_1833a3868 ^ _DAT_1833a3730;
  _DAT_1833a3748 = 0x86e11e67;
  uVar7 = (~_DAT_1833a39b8 + 0x876182e9) *
          ((_DAT_1833a3728 ^ 0x7b5db85a) + (ulonglong)((uint)_DAT_1833a3728 & 0x7b5db85a) * 2);
  uVar7 = (uVar7 | _DAT_1833a39d0) + (uVar7 & _DAT_1833a39d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3848 = func_0x00018e1ce110((uVar7 | 0xfc3c3ab2) + (ulonglong)((uint)uVar7 & 0xfc3c3ab2))
  ;
  uVar7 = (_DAT_1833a3848 & 0x1ffffffff) * 0x200000;
  _DAT_1833a3908 = (_DAT_1833a3908 ^ uVar7) + 0x781e1997 ^ 0x8a6697ec7c531a5b;
  _DAT_1833a3ae0 = (_DAT_1833a3ae0 * 0x1e2d0ddfa59baf73 ^ _DAT_1833a3908) + uVar7;
  _DAT_1833a3808 = _DAT_1833a3ae0 ^ _DAT_1833a3908;
  _DAT_1833a3720 = 0x781e1997;
  uVar7 = (~_DAT_1833a3ae0 + 0xec304d1) *
          ((_DAT_1833a3938 ^ 0xfc3c3ab2) + (ulonglong)((uint)_DAT_1833a3938 & 0xfc3c3ab2) * 2);
  uVar7 = (uVar7 | _DAT_1833a3ad8) + (uVar7 & _DAT_1833a3ad8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a39c0 = func_0x00018e1ce110((uVar7 | 0xf2ff3e62) + (ulonglong)((uint)uVar7 & 0xf2ff3e62))
  ;
  uVar7 = _DAT_1833a39c0 ^ 0x781e1997;
  _DAT_1833a3ab8 = _DAT_1833a38b0 ^ uVar7 ^ 0x86e11e67;
  _DAT_1833a3a70 = (_DAT_1833a3a70 ^ uVar7) + 0x86e11e67 ^ 0x294c25dd386f0ff0;
  _DAT_1833a3858 = (_DAT_1833a3858 * -0x5271f91f2e3d0041 ^ _DAT_1833a3a70) + uVar7;
  _DAT_1833a3aa0 = _DAT_1833a3858 ^ _DAT_1833a3a70;
  _DAT_1833a3828 = 0x86e11e67;
  _DAT_1833a3a58 = func_0x00018e1ce110(_DAT_1833a3978 ^ 0x1cff83e500213d);
  _DAT_1833a3ad8 = _DAT_1833a3a58 << 0x33 | _DAT_1833a3a58 >> 0xd;
  _DAT_1833a3ad0 = _DAT_1833a3ad0 ^ _DAT_1833a3ad8 ^ 0xcbe4ddae2b87bea2;
  _DAT_1833a3a68 = (_DAT_1833a3a68 * 0x3d6c4ce710dd3a9d ^ _DAT_1833a3ad0) + _DAT_1833a3ad8;
  _DAT_1833a37b0 = _DAT_1833a3a68 ^ _DAT_1833a3ad0;
  _DAT_1833a3a40 = 0;
  uVar7 = (_DAT_1833a3838 ^ _DAT_1824a2ea0) + _DAT_1833a39f8 + 0x7b5db85a;
  uVar10 = (_DAT_1833a39f8 ^ _UNK_1824a2ea8) + _DAT_1833a3838 + 0xffffffff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3838 ^ _DAT_1824a2ea0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833a39f8 ^ _UNK_1824a2ea8;
  _DAT_1833a37e8 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a3838 + 0xffffffff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a39f8 + 0x7b5db85a));
  uVar7 = (_DAT_1833a37e8 ^ 0xff7f9b7e00806481) * -0x3a46a5f818c3873d;
  _DAT_1833a3920 = (_DAT_1833a3920 ^ uVar7) + 0x806480 ^ 0x48cdc06d8b2cb7d4;
  _DAT_1833a3808 = (_DAT_1833a3808 * 0x1219e70e5c355c61 ^ _DAT_1833a3920) + uVar7;
  _DAT_1833a3918 = _DAT_1833a3808 ^ _DAT_1833a3920;
  _DAT_1833a3948 = 0x806480;
  _DAT_1833a3970 = func_0x00018e1ce110(_DAT_1833a3700 + 0x5400685a004aff ^ 0xfa);
  _DAT_1833a3778 = _DAT_1833a3778 ^ _DAT_1833a3970 & 0xffffffffff ^ 0xfa28608421a594;
  _DAT_1833a3a10 =
       (_DAT_1833a3a10 * 0x31d6539bd6805de1 ^ _DAT_1833a3778) + (_DAT_1833a3970 & 0xffffffffff);
  _DAT_1833a37b0 = _DAT_1833a3a10 ^ _DAT_1833a3778;
  _DAT_1833a3988 = 0;
  uVar7 = ((_DAT_1833a37a8 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1833a37a8 & 0x84222ce5) * 2) *
          -_DAT_1833a39b0;
  uVar7 = (uVar7 | _DAT_1833a3ac8) + (uVar7 & _DAT_1833a3ac8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3770 = func_0x00018e1ce110((uVar7 | 0x84222ce5) + (ulonglong)((uint)uVar7 & 0x84222ce5))
  ;
  uVar7 = _DAT_1833a3770 >> 1 | _DAT_1833a3770;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1833a3770;
  _DAT_1833a3750 = _DAT_1833a37a8 ^ uVar7 ^ 0xfc0;
  _DAT_1833a3838 = (_DAT_1833a3838 ^ uVar7) + 0xfc0 ^ 0x3ae315cb25e86df2;
  _DAT_1833a3898 = (_DAT_1833a3898 * 0x66873d8d713eaf93 ^ _DAT_1833a3838) + uVar7;
  _DAT_1833a37c8 = _DAT_1833a3898 ^ _DAT_1833a3838;
  _DAT_1833a39e8 = 0xfc0;
  uVar7 = (~_DAT_1833a3840 + 0xf2688b6f) *
          ((_DAT_1833a39d8 ^ 0x764aa84b) + (ulonglong)((uint)_DAT_1833a39d8 & 0x764aa84b) * 2);
  uVar7 = (uVar7 | _DAT_1833a39f0) + (uVar7 & _DAT_1833a39f0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3740 = func_0x00018e1ce110((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_1833a3860 = _DAT_1833a3860 ^ _DAT_1833a3740 ^ 0x87a0fa2f280b5ac1;
  _DAT_1833a3788 = (_DAT_1833a3788 * 0x57a0b89e0eb0f1db ^ _DAT_1833a3860) + _DAT_1833a3740;
  _DAT_1833a3798 = _DAT_1833a3788 ^ _DAT_1833a3860;
  _DAT_1833a3868 = 0;
  uVar7 = ((_DAT_1833a3808 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1833a3808 & 0x84222ce5) * 2) *
          -_DAT_1833a38a0;
  uVar7 = (uVar7 | _DAT_1833a3a98) + (uVar7 & _DAT_1833a3a98);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3788 = func_0x00018e1ce110((uVar7 | 0x84222ce5) + (ulonglong)((uint)uVar7 & 0x84222ce5))
  ;
  uVar7 = (ulonglong)(~(uint)_DAT_1833a3788 & 0xfc0);
  _DAT_1833a3718 = _DAT_1833a39a0 ^ uVar7 ^ 0xfc0;
  _DAT_1833a3a38 = (_DAT_1833a3a38 ^ uVar7) + 0xfc0 ^ 0x2c5729d77e23dd2f;
  _DAT_1833a3a68 = (_DAT_1833a3a68 * 0x4efeb914c3a16947 ^ _DAT_1833a3a38) + uVar7;
  _DAT_1833a3728 = _DAT_1833a3a68 ^ _DAT_1833a3a38;
  _DAT_1833a38a0 = _DAT_1833a37a8 ^ 0xfc0;
  _DAT_1833a3840 = 0xfc0;
  *(uint *)(unaff_RBP + 3) = *(uint *)(unaff_RBP + 3) & 0xfc0;
  uVar3 = *(uint *)(unaff_RBP + 0xc);
  _DAT_1833a3848 = func_0x00018e1ce110(_DAT_1833a38b8 ^ 0x1400266800c728);
  uVar7 = ((_DAT_1833a3848 & 0xffffffff) * (ulonglong)_DAT_1824a2ec0 +
           (_DAT_1833a3848 >> 0x20) * (ulonglong)_DAT_1824a2eb0 << 0x20) +
          (_DAT_1833a3848 & 0xffffffff) * (ulonglong)_DAT_1824a2eb0 & 0x7fffffffffffffff;
  _DAT_1833a3800 = (_DAT_1833a3800 ^ uVar7) + 0xfefb0ffd ^ 0xf452fbcee303b9bd;
  _DAT_1833a38f0 = (_DAT_1833a38f0 * 0x7628e5a13c9ebb1f ^ _DAT_1833a3800) + uVar7;
  _DAT_1833a3a38 = _DAT_1833a38f0 ^ _DAT_1833a3800;
  _DAT_1833a38b8 = 0xfefb0ffd;
  uVar7 = (_DAT_1833a38a8 ^ _DAT_1824a2ed0) + _DAT_1833a39d8 + 0x7b975f9a;
  uVar10 = (_DAT_1833a39d8 ^ _UNK_1824a2ed8) + _DAT_1833a38a8 + 0xb59908e5;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a38a8 ^ _DAT_1824a2ed0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833a39d8 ^ _UNK_1824a2ed8;
  _DAT_1833a3760 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a38a8 + 0xb59908e5) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a39d8 + 0x7b975f9a));
  uVar7 = (ulonglong)(~(uint)_DAT_1833a3760 & 0xffb57cbf);
  _DAT_1833a3798 = (_DAT_1833a3798 ^ uVar7) + 0x4a2c745a ^ 0x45861a434e611c6e;
  _DAT_1833a3a48 = (_DAT_1833a3a48 * -0x5286b7e6275afd6b ^ _DAT_1833a3798) + uVar7;
  _DAT_1833a3720 = _DAT_1833a3a48 ^ _DAT_1833a3798;
  _DAT_1833a3988 = 0x4a2c745a;
  _DAT_1833a3a28 = func_0x00018e1ce110(_DAT_1833a3750 + 0x4effb9c0000eff ^ 7);
  uVar7 = _DAT_1833a3a28 * 0x5f19a9f163737e23 & 0x7ffffffffff;
  _DAT_1833a3800 = _DAT_1833a3a08 ^ uVar7 ^ 0x42147465;
  _DAT_1833a39f8 = (_DAT_1833a39f8 ^ uVar7) + 0x42147465 ^ 0x3f13e4c7a85ee169;
  _DAT_1833a3780 = (_DAT_1833a3780 * -0x5776d6951954e439 ^ _DAT_1833a39f8) + uVar7;
  _DAT_1833a3908 = _DAT_1833a3780 ^ _DAT_1833a39f8;
  _DAT_1833a3990 = 0x42147465;
  uVar7 = (_DAT_1833a39c0 ^ _DAT_1824a2ee0) + _DAT_1833a3780 + 0x84222325;
  uVar10 = (_DAT_1833a3780 ^ _UNK_1824a2ee8) + _DAT_1833a39c0 + 0xf5604605;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a39c0 ^ _DAT_1824a2ee0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833a3780 ^ _UNK_1824a2ee8;
  _DAT_1833a3a60 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a39c0 + 0xf5604605) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3780 + 0x84222325));
  uVar7 = (_DAT_1833a3a60 ^ 0xf5604605) & 0x7fffffffffffffff;
  _DAT_1833a37b8 = (_DAT_1833a37b8 ^ uVar7) - 0xf5604605 ^ 0x539310806bafe598;
  _DAT_1833a3948 = (_DAT_1833a3948 * -0x350f8d88d83b01c5 ^ _DAT_1833a37b8) + uVar7;
  _DAT_1833a3aa8 = _DAT_1833a3948 ^ _DAT_1833a37b8;
  _DAT_1833a3a98 = 0xa9fb9fb;
  uVar7 = (~_DAT_1833a3a40 + 0xf5604606) *
          ((_DAT_1833a3838 ^ 0x8422d325) + (ulonglong)((uint)_DAT_1833a3838 & 0x8422d325) * 2);
  uVar7 = (uVar7 | _DAT_1833a3740) + (uVar7 & _DAT_1833a3740);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a39b0 = func_0x00018e1ce110((uVar7 | 0x71429520) + (ulonglong)((uint)uVar7 & 0x71429520))
  ;
  uVar7 = _DAT_1833a39b0 ^ 0xf560f605;
  _DAT_1833a38c0 = _DAT_1833a3790 ^ uVar7 ^ 0xf5613605;
  _DAT_1833a3888 = (_DAT_1833a3888 ^ uVar7) + 0xf5613605 ^ 0xc35429223f243581;
  _DAT_1833a37a0 = (_DAT_1833a37a0 * -0x2027609ebbf45059 ^ _DAT_1833a3888) + uVar7;
  _DAT_1833a3a20 = _DAT_1833a37a0 ^ _DAT_1833a3888;
  _DAT_1833a3930 = 0xf5613605;
  uVar7 = (_DAT_1833a3700 ^ _DAT_1824a2ef0) + _DAT_1833a3960 + 0x71431520;
  uVar10 = (_DAT_1833a3960 ^ _UNK_1824a2ef8) + _DAT_1833a3700 + 0xa9fb9fb;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3700 ^ _DAT_1824a2ef0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833a3960 ^ _UNK_1824a2ef8;
  _DAT_1833a3838 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a3700 + 0xa9fb9fb) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3960 + 0x71431520));
  uVar7 = ((_DAT_1833a3838 ^ 0xffffbfff) << 3 | _DAT_1833a3838 >> 0x3d) ^ 0xf5613605;
  _DAT_1833a3a18 = _DAT_1833a3a38 ^ uVar7 ^ 0x10000f000;
  _DAT_1833a3888 = (_DAT_1833a3888 ^ uVar7) + 0x10000f000 ^ 0x2d19d928e59f021e;
  _DAT_1833a3858 = (_DAT_1833a3858 * -0x7b7d9c24f158c11d ^ _DAT_1833a3888) + uVar7;
  _DAT_1833a3960 = _DAT_1833a3858 ^ _DAT_1833a3888;
  _DAT_1833a3a38 = 0xf000;
  uVar7 = (_DAT_1833a39f0 ^ _DAT_1824a2f00) + _DAT_1833a3878 + 0x84222325;
  uVar10 = (_DAT_1833a3878 ^ _UNK_1824a2f08) + _DAT_1833a39f0 + 0x932bc4ae;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a39f0 ^ _DAT_1824a2f00;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833a3878 ^ _UNK_1824a2f08;
  _DAT_1833a3a98 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a39f0 + 0x932bc4ae) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3878 + 0x84222325));
  _DAT_1833a3a58 = (_DAT_1833a3a58 ^ _DAT_1833a3a98) - 0x932bc4ae ^ 0x8f1cbba37649be3e;
  _DAT_1833a3980 = (_DAT_1833a3980 * -0x5ad0c19c52773717 ^ _DAT_1833a3a58) + _DAT_1833a3a98;
  _DAT_1833a39d8 = _DAT_1833a3980 ^ _DAT_1833a3a58;
  _DAT_1833a3a00 = 0x6cd43b52;
  uVar7 = (~_DAT_1833a3948 + 0x932bc4af) *
          ((_DAT_1833a3ac0 ^ 0x8422d325) + (ulonglong)((uint)_DAT_1833a3ac0 & 0x8422d325) * 2);
  uVar7 = (uVar7 | _DAT_1833a3940) + (uVar7 & _DAT_1833a3940);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a39b8 = func_0x00018e1ce110((uVar7 | 0x1709178b) + (ulonglong)((uint)uVar7 & 0x1709178b))
  ;
  uVar7 = (ulonglong)(~(uint)_DAT_1833a39b8 & 0xf000);
  _DAT_1833a3a18 = _DAT_1833a3760 ^ uVar7 ^ 0x932cb4ae;
  _DAT_1833a3aa8 = (_DAT_1833a3aa8 ^ uVar7) + 0x932cb4ae ^ 0x3f12d000d08ebf81;
  _DAT_1833a3720 = (_DAT_1833a3720 * -0x1f3c695c710bf89d ^ _DAT_1833a3aa8) + uVar7;
  _DAT_1833a3a00 = _DAT_1833a3720 ^ _DAT_1833a3aa8;
  _DAT_1833a3a58 = 0x932cb4ae;
  uVar7 = (~_DAT_1833a3ad8 + 0x6cd43b53) *
          ((_DAT_1833a39c8 ^ 0x170e978b) + (ulonglong)((uint)_DAT_1833a39c8 & 0x170e978b) * 2);
  uVar7 = (uVar7 | _DAT_1833a39f8) + (uVar7 & _DAT_1833a39f8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3ab0 = func_0x00018e1ce110((uVar7 | 0x7bdaacd9) + (ulonglong)((uint)uVar7 & 0x7bdaacd9))
  ;
  uVar7 = (_DAT_1833a3ab0 ^ 0xfffcbffe) * -0x5c0e5103d2509367;
  uVar10 = uVar7 >> 1 | uVar7;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar7;
  _DAT_1833a3838 = _DAT_1833a3908 ^ uVar7 ^ 0x10000f000;
  _DAT_1833a3738 = (_DAT_1833a3738 ^ uVar7) + 0x10000f000 ^ 0xe91291bb0fb38819;
  _DAT_1833a3718 = (_DAT_1833a3718 * 0x160620d2a04fc583 ^ _DAT_1833a3738) + uVar7;
  _DAT_1833a3868 = _DAT_1833a3718 ^ _DAT_1833a3738;
  _DAT_1833a3990 = 0xf000;
  _DAT_1833a39c0 = func_0x00018e1ce110(_DAT_1833a3858 ^ 0xffc8000f81ffaa64);
  uVar7 = (_DAT_1833a39c0 ^ 0xfec00000) & 0xffffffffffc00000;
  _DAT_1833a37f0 = _DAT_1833a37a0 ^ uVar7 ^ 0x149278457;
  _DAT_1833a3a08 = (_DAT_1833a3a08 ^ uVar7) + 0x149278457 ^ 0xa6bc6d7ecf7954d4;
  _DAT_1833a39f0 = (_DAT_1833a39f0 * -0x7cea0dc48b522e9b ^ _DAT_1833a3a08) + uVar7;
  _DAT_1833a3740 = _DAT_1833a39f0 ^ _DAT_1833a3a08;
  _DAT_1833a38c0 = 0x49278457;
  _DAT_1833a3ac8 = func_0x00018e1ce110(_DAT_1833a3778 ^ 0x5800108200ec0d);
  uVar7 = (_DAT_1833a3ac8 ^ 0xb4d30ba5) & 0x1fffffffff;
  _DAT_1833a3af8 = (_DAT_1833a3af8 ^ uVar7) + 0xb4d77ba7 ^ 0xd10e7b8ebf55c20a;
  _DAT_1833a3ab8 = (_DAT_1833a3ab8 * 0x3eaf95e097b870fb ^ _DAT_1833a3af8) + uVar7;
  _DAT_1833a3758 = _DAT_1833a3ab8 ^ _DAT_1833a3af8;
  _DAT_1833a3838 = _DAT_1833a3970 ^ 0xb4d77ba7;
  _DAT_1833a38a0 = 0xb4d77ba7;
  _DAT_1833a3960 = func_0x00018e1ce110(_DAT_1833a3a40 + 0xffa7ffcf7dffeaff ^ 0xe7);
  uVar7 = (_DAT_1833a3960 ^ 0xfeff7fff) << 0x31 | (_DAT_1833a3960 ^ 0xfeff7fff) >> 0xf;
  _DAT_1833a39c8 = (_DAT_1833a39c8 ^ uVar7) + 0x4a280458 ^ 0xefc8ec5f4fc35634;
  _DAT_1833a38c8 = (_DAT_1833a38c8 * 0x2dbfe8b13611f5c7 ^ _DAT_1833a39c8) + uVar7;
  _DAT_1833a3918 = _DAT_1833a38c8 ^ _DAT_1833a39c8;
  _DAT_1833a3908 = 0x4a280458;
  uVar7 = (_DAT_1833a3958 ^ _DAT_1824a2f10) + _DAT_1833a3a50 + 0x30f55882;
  uVar10 = (_DAT_1833a3a50 ^ _UNK_1824a2f18) + _DAT_1833a3958 + 0x945008b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3958 ^ _DAT_1824a2f10;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833a3a50 ^ _UNK_1824a2f18;
  _DAT_1833a38d8 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a3958 + 0x945008b0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3a50 + 0x30f55882));
  uVar7 = _DAT_1833a38d8 >> 1 | _DAT_1833a38d8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1833a38d8;
  uVar7 = uVar7 << 0x1d | uVar7 >> 0x23;
  _DAT_1833a39f8 = (_DAT_1833a39b8 ^ uVar7 ^ 0x149278457 ^ uVar7) + 0x149278457 ^ 0xba1636f480569918
  ;
  _DAT_1833a3ad0 = (_DAT_1833a3ad0 * -0x1e313c1d111a6717 ^ _DAT_1833a39f8) + uVar7;
  _DAT_1833a3a30 = _DAT_1833a3ad0 ^ _DAT_1833a39f8;
  _DAT_1833a3a88 = 0x49278457;
  _DAT_1833a3830 = func_0x00018e1ce110(_DAT_1833a3758 + 0x1d008424ffddff ^ 0xe6);
  _DAT_1833a3ab0 = _DAT_1833a3ab0 ^ _DAT_1833a3830 ^ 0x55bdd7ea6c3183cb;
  _DAT_1833a3970 = (_DAT_1833a3970 * -0x4b352115c53a1a45 ^ _DAT_1833a3ab0) + _DAT_1833a3830;
  _DAT_1833a38e8 = _DAT_1833a3970 ^ _DAT_1833a3ab0;
  _DAT_1833a3818 = 0;
  uVar7 = (_DAT_1833a3a38 ^ 0x8422d325) + _DAT_1833a3810 + 0x8422d325;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3a38 ^ 0x8422d325;
  uVar10 = ((_DAT_1833a3810 + _DAT_1833a3a38) * 0x2000 | _DAT_1833a3810 + _DAT_1833a3a38 >> 0x33) ^
           _DAT_1833a3810;
  _DAT_1833a3998 = _DAT_1833a3830;
  _DAT_1833a3a68 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_1833a3a38 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3810 + 0x8422d325));
  uVar7 = (ulonglong)(~(uint)_DAT_1833a3a68 & 0xf000);
  _DAT_1833a3768 = _DAT_1833a3a80 ^ uVar7 ^ 0xf000;
  _DAT_1833a3870 = (_DAT_1833a3870 ^ uVar7) + 0xf000 ^ 0xbe89cd7537544fd1;
  _DAT_1833a3800 = (_DAT_1833a3800 * -0x270bd30bb51f0301 ^ _DAT_1833a3870) + uVar7;
  _DAT_1833a3ad8 = _DAT_1833a3800 ^ _DAT_1833a3870;
  _DAT_1833a37e0 = 0xf000;
  uVar7 = (~_DAT_1833a38d0 + 0x100000000) *
          ((_DAT_1833a3960 ^ 0x7ad92cd8) + (ulonglong)((uint)_DAT_1833a3960 & 0x7ad92cd8) * 2);
  uVar7 = (uVar7 | _DAT_1833a37a0) + (uVar7 & _DAT_1833a37a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3a08 = func_0x00018e1ce110((uVar7 | 0x8526d327) + (ulonglong)((uint)uVar7 & 0x8526d327))
  ;
  _DAT_1833a3818 =
       (_DAT_1833a3818 ^ _DAT_1833a3a08 & 0x7fffffffffffffff) + 0x104f002 ^ 0x818569316c4659f2;
  _DAT_1833a3a40 =
       (_DAT_1833a3a40 * 0x422774dbe5963a77 ^ _DAT_1833a3818) +
       (_DAT_1833a3a08 & 0x7fffffffffffffff);
  _DAT_1833a3998 = _DAT_1833a3a40 ^ _DAT_1833a3818;
  _DAT_1833a3710 = 0x104f002;
  uVar7 = (~_DAT_1833a37e0 + 0x104f003) *
          ((_DAT_1833a39d0 ^ 0x7ad92cd8) + (ulonglong)((uint)_DAT_1833a39d0 & 0x7ad92cd8) * 2);
  uVar7 = (uVar7 | _DAT_1833a3a78) + (uVar7 & _DAT_1833a3a78);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3890 = func_0x00018e1ce110((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  uVar7 = _DAT_1833a3890 << 0x2d | _DAT_1833a3890 >> 0x13;
  _DAT_1833a37e0 = _DAT_1833a37e0 ^ uVar7 ^ 0xc99a06927c7f3cac;
  _DAT_1833a38f0 = (_DAT_1833a38f0 * 0x30fe3b902f9580f ^ _DAT_1833a37e0) + uVar7;
  _DAT_1833a3748 = _DAT_1833a38f0 ^ _DAT_1833a37e0;
  _DAT_1833a3aa8 = 0;
  uVar7 = (_DAT_1833a3a50 ^ 0x8422d325) + _DAT_1833a39c0 + 0x8422d325;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3a50 ^ 0x8422d325;
  uVar10 = ((_DAT_1833a39c0 + _DAT_1833a3a50) * 0x2000 | _DAT_1833a39c0 + _DAT_1833a3a50 >> 0x33) ^
           _DAT_1833a39c0;
  _DAT_1833a3798 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_1833a3a50 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a39c0 + 0x8422d325));
  uVar7 = _DAT_1833a3798 & 0x7fffffffffffffff;
  _DAT_1833a3a60 = _DAT_1833a3900 ^ uVar7 ^ 0xf000;
  _DAT_1833a3780 = (_DAT_1833a3780 ^ uVar7) + 0xf000 ^ 0xadbdcc61bca84ef6;
  _DAT_1833a37a8 = (_DAT_1833a37a8 * 0x44c188a38387938d ^ _DAT_1833a3780) + uVar7;
  _DAT_1833a3710 = _DAT_1833a37a8 ^ _DAT_1833a3780;
  _DAT_1833a3880 = 0xf000;
  uVar7 = (_DAT_1833a3728 ^ _DAT_1824a2f20) + _DAT_1833a39f8 + 0xf07926e4;
  uVar10 = (_DAT_1833a39f8 ^ _UNK_1824a2f28) + _DAT_1833a3728 + 0x745b05c1;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3728 ^ _DAT_1824a2f20;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833a39f8 ^ _UNK_1824a2f28;
  _DAT_1833a3968 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a3728 + 0x745b05c1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a39f8 + 0xf07926e4));
  uVar7 = _DAT_1833a3968 >> 1 | _DAT_1833a3968;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_1833a3968;
  _DAT_1833a3998 = _DAT_1833a3998 ^ uVar7 ^ 0x5315d1478ecae18f;
  _DAT_1833a38b0 = (_DAT_1833a38b0 * -0x5a8ffbb3a0107999 ^ _DAT_1833a3998) + uVar7;
  _DAT_1833a38c8 = _DAT_1833a38b0 ^ _DAT_1833a3998;
  _DAT_1833a3a48 = _DAT_1833a3938;
  _DAT_1833a3ae8 = 0;
  uVar7 = (_DAT_1833a3708 ^ 0x8422d325) + _DAT_1833a3ad0 + 0x8422d325;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3708 ^ 0x8422d325;
  uVar10 = ((_DAT_1833a3ad0 + _DAT_1833a3708) * 0x2000 | _DAT_1833a3ad0 + _DAT_1833a3708 >> 0x33) ^
           _DAT_1833a3ad0;
  _DAT_1833a38d8 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_1833a3708 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3ad0 + 0x8422d325));
  _DAT_1833a3748 =
       (_DAT_1833a3748 ^ _DAT_1833a38d8 & 0x7fffffffffffffff) + 0xf000 ^ 0xddcc35bb8b8e1fa8;
  _DAT_1833a3a70 =
       (_DAT_1833a3a70 * -0x2debdbae96eb3f1 ^ _DAT_1833a3748) +
       (_DAT_1833a38d8 & 0x7fffffffffffffff);
  _DAT_1833a3778 = _DAT_1833a3a70 ^ _DAT_1833a3748;
  _DAT_1833a3af8 = _DAT_1833a3898 ^ 0xf000;
  _DAT_1833a3830 = 0xf000;
  *(uint *)(unaff_RBP + 0xc) = (uVar3 & 0xf) * 0x1000 + (int)unaff_RBP[3];
  plVar1 = (longlong *)unaff_RBP[10];
  lVar6 = unaff_RBP[9];
  lVar4 = (**(code **)(*plVar1 + 0x6f0))(plVar1,lVar6,0);
  *(int *)(unaff_RBP + 0xe) = (int)*(char *)(lVar4 + (int)unaff_RBP[0xf]);
  (**(code **)(*plVar1 + 0x6f8))(plVar1,lVar6,lVar4,2);
  lVar4 = _DAT_1833a3a70 + 0x64be809a;
  lVar6 = _DAT_1833a3870 + 0x1c62e505;
  uVar7 = (_DAT_1833a3870 ^ _DAT_1824a2f30) + lVar4;
  uVar10 = (_DAT_1833a3a70 ^ _UNK_1824a2f38) + lVar6;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3870 ^ _DAT_1824a2f30;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833a3a70 ^ _UNK_1824a2f38;
  unaff_RBP[3] = (ulonglong)*(uint *)(unaff_RBP + 0xe);
  _DAT_1833a3a98 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - lVar6 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar4);
  uVar7 = _DAT_1833a3a98 << 0x31 | (_DAT_1833a3a98 & 0x7fffffffff) >> 0xf;
  _DAT_1833a37e8 = (_DAT_1833a37e8 ^ uVar7) + 0xfcfee7bf ^ 0x62192c41bfd177ac;
  _DAT_1833a3980 = (_DAT_1833a3980 * 0x4f4ead39df900181 ^ _DAT_1833a37e8) + uVar7;
  _DAT_1833a39f8 = _DAT_1833a3980 ^ _DAT_1833a37e8;
  _DAT_1833a3a08 = 0xfcfee7bf;
  uVar7 = (~_DAT_1833a3900 + 0x61aa2221) *
          ((_DAT_1833a3ae0 ^ 0x2cba7f98) + (ulonglong)((uint)_DAT_1833a3ae0 & 0x2cba7f98) * 2);
  uVar7 = (uVar7 | _DAT_1833a3a48) + (uVar7 & _DAT_1833a3a48);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3728 = func_0x00018e1ce110((uVar7 | 0x4d105db8) + (ulonglong)((uint)uVar7 & 0x4d105db8))
  ;
  _DAT_1833a3708 = (_DAT_1833a3a00 ^ _DAT_1833a3728) + 0xc9327e9d ^ 0xe21fc8d7d831e080;
  _DAT_1833a3a00 = (_DAT_1833a3a00 * 0x42c4421aec6c3301 ^ _DAT_1833a3708) + _DAT_1833a3728;
  _DAT_1833a3708 = _DAT_1833a3a00 ^ _DAT_1833a3708;
  _DAT_1833a3ac0 = _DAT_1833a3750 ^ 0xc9327e9d;
  _DAT_1833a37c8 = 0xc9327e9d;
  _DAT_1833a3a40 = func_0x00018e1ce110(_DAT_1833a3978 + 0xff80fffd4dff6fff ^ 9);
  _DAT_1833a3858 = _DAT_1833a39b8 ^ 0x99b2a2ab;
  _DAT_1833a3900 = _DAT_1833a3900 + 0x99b2a2ab ^ 0x88090d19077d2c24;
  _DAT_1833a3888 = _DAT_1833a3720 * 0x64e2b02f4b0eeb91;
  _DAT_1833a3720 = _DAT_1833a3888 ^ _DAT_1833a3900;
  _DAT_1833a3ad0 = 0x99b2a2ab;
  uVar7 = (~_DAT_1833a3a20 + 0x664d5d95) *
          ((_DAT_1833a39f0 ^ 0x1d90818e) + (ulonglong)((uint)_DAT_1833a39f0 & 0x1d90818e) * 2);
  uVar7 = (uVar7 | _DAT_1833a37a0) + (uVar7 & _DAT_1833a37a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3900 = func_0x00018e1ce110((uVar7 | 0x7bdddc1a) + (ulonglong)((uint)uVar7 & 0x7bdddc1a))
  ;
  uVar7 = _DAT_1833a3900 >> 1 | _DAT_1833a3900;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           _DAT_1833a3900 ^ 0x99b2a2ab) & 0x7fffffffffffffff;
  _DAT_1833a39e8 = _DAT_1833a38c0 ^ uVar7 ^ 0x10000003f;
  _DAT_1833a3ae8 = (_DAT_1833a3ae8 ^ uVar7) + 0x10000003f ^ 0xce251ccff9e021de;
  _DAT_1833a3888 = (_DAT_1833a3888 * 0x32aa73aea0f1960d ^ _DAT_1833a3ae8) + uVar7;
  _DAT_1833a3738 = _DAT_1833a3888 ^ _DAT_1833a3ae8;
  _DAT_1833a3950 = 0x3f;
  _DAT_1833a37f0 = func_0x00018e1ce110(_DAT_1833a3778 ^ 0x1d009a81ff6bde);
  _DAT_1833a3a58 = (_DAT_1833a3a58 ^ _DAT_1833a37f0 ^ 0x22b606a7) - 0x22b606a7 ^ 0x155a5da6ae8092cd;
  _DAT_1833a37c8 =
       (_DAT_1833a37c8 * -0x7a1de09e4f66b9dd ^ _DAT_1833a3a58) + (_DAT_1833a37f0 ^ 0x22b606a7);
  _DAT_1833a3970 = _DAT_1833a37c8 ^ _DAT_1833a3a58;
  _DAT_1833a3960 = 0xdd49f959;
  _DAT_1833a3978 = func_0x00018e1ce110(_DAT_1833a3950 ^ 0xffd6ffd155ff97ce);
  _DAT_1833a3aa8 = (_DAT_1833a3aa8 ^ _DAT_1833a3978 ^ 0xf59a1a5f) - 0xf59a1a5f ^ 0x2e1e7d644f8f7b2d;
  _DAT_1833a3a18 =
       (_DAT_1833a3a18 * -0x20dc02b0b9876619 ^ _DAT_1833a3aa8) + (_DAT_1833a3978 ^ 0xf59a1a5f);
  _DAT_1833a3a68 = _DAT_1833a3a18 ^ _DAT_1833a3aa8;
  _DAT_1833a3800 = 0xa65e5a1;
  uVar7 = (~_DAT_1833a39a0 + 0xf59a1a60) *
          ((_DAT_1833a3a40 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1833a3a40 & 0x8422231a) * 2);
  uVar7 = (uVar7 | _DAT_1833a3960) + (uVar7 & _DAT_1833a3960);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a39b0 = func_0x00018e1ce110((uVar7 | 0x71b83945) + (ulonglong)((uint)uVar7 & 0x71b83945))
  ;
  _DAT_1833a3a58 = (_DAT_1833a3a58 ^ _DAT_1833a39b0 ^ 0x3f) + 0xf59a1a9e ^ 0x1586fcbd55716726;
  _DAT_1833a39c0 = (_DAT_1833a39c0 * 0x796895e58fe4fca1 ^ _DAT_1833a3a58) + (_DAT_1833a39b0 ^ 0x3f);
  _DAT_1833a39e8 = _DAT_1833a39c0 ^ _DAT_1833a3a58;
  _DAT_1833a3858 = 0xf59a1a9e;
  uVar7 = (~_DAT_1833a3850 + 0xa65e5a2) *
          ((_DAT_1833a3840 ^ 0x71b839bb) + (ulonglong)((uint)_DAT_1833a3840 & 0x71b839bb) * 2);
  uVar7 = (uVar7 | _DAT_1833a3a38) + (uVar7 & _DAT_1833a3a38);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3868 = func_0x00018e1ce110((uVar7 | 0x7bdddc1a) + (ulonglong)((uint)uVar7 & 0x7bdddc1a))
  ;
  uVar10 = _UNK_1824a2f48;
  uVar7 = _DAT_1824a2f40;
  uVar8 = _DAT_1833a3868 ^ 0x9f9c723fc10135e;
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (ulonglong)((uint)bVar2 + (uint)bVar2 ^ (uint)uVar8) << 0x20 | uVar8 >> 0x20;
  _DAT_1833a3950 = _DAT_1833a3aa8 ^ uVar8 ^ 0x10000003f;
  _DAT_1833a37a8 = (_DAT_1833a37a8 ^ uVar8) + 0x10000003f ^ 0xe07a4096ae3eb8c9;
  _DAT_1833a3880 = (_DAT_1833a3880 * -0x4e95a46e0ca077c7 ^ _DAT_1833a37a8) + uVar8;
  _DAT_1833a3820 = _DAT_1833a3880 ^ _DAT_1833a37a8;
  _DAT_1833a3888 = 0x3f;
  uVar8 = (_DAT_1833a3958 ^ _DAT_1824a2f40) + _DAT_1833a3ac0 + 0x78dcc49a;
  uVar9 = (_DAT_1833a3ac0 ^ _UNK_1824a2f48) + _DAT_1833a3958 + 0xc9327e9d;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833a3958 ^ _DAT_1824a2f40;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833a3ac0 ^ _UNK_1824a2f48;
  _DAT_1833a37b0 =
       func_0x00018e1ce110((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833a3958 + 0xc9327e9d) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1833a3ac0 + 0x78dcc49a));
  uVar8 = (_DAT_1833a37b0 << 0x24 | _DAT_1833a37b0 >> 0x1c) ^ 0xc9327e9d;
  _DAT_1833a3988 = _DAT_1833a3a48 ^ uVar8 ^ 0x1c631665c;
  _DAT_1833a3ab0 = (_DAT_1833a3ab0 ^ uVar8) + 0x1c631665c ^ 0x62cf636d26e5208f;
  _DAT_1833a3848 = (_DAT_1833a3848 * -0x818e810b256d9bd ^ _DAT_1833a3ab0) + uVar8;
  _DAT_1833a38b8 = _DAT_1833a3848 ^ _DAT_1833a3ab0;
  _DAT_1833a3ae0 = 0xc631665c;
  uVar8 = _DAT_1833a3a68 ^ uVar7;
  uVar9 = _DAT_1833a3708 ^ uVar10;
  uVar13 = uVar8 + _DAT_1833a3708 + 0x78dcc49a;
  uVar14 = uVar9 + _DAT_1833a3a68 + 0xc9327e9d;
  uVar8 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar8;
  uVar9 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar9;
  uVar8 = func_0x00018e1ce110((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833a3a68 + 0xc9327e9d) ^
                              (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1833a3708 + 0x78dcc49a));
  uVar9 = uVar8 ^ 0xfdfeffbf;
  uVar13 = uVar9 >> 1 | uVar9;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar9 = ((0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar9) & 0xfffffffffffffff0;
  _DAT_1833a3938 = (uVar8 ^ uVar9) + 0x35cc9922 ^ 0x90c3a385fdd30fab;
  _DAT_1833a37c0 = (_DAT_1833a37c0 * -0x39fee75ba292312d ^ _DAT_1833a3938) + uVar9;
  _DAT_1833a3788 = _DAT_1833a37c0 ^ _DAT_1833a3938;
  _DAT_1833a3920 = 0x35cc9922;
  uVar7 = _DAT_1833a39d0 ^ uVar7;
  uVar10 = _DAT_1833a3a40 ^ uVar10;
  uVar8 = uVar7 + _DAT_1833a3a40 + 0x78dcc49a;
  uVar9 = uVar10 + _DAT_1833a39d0 + 0xc9327e9d;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uVar10 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar10;
  _DAT_1833a3ad0 =
       func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a39d0 + 0xc9327e9d) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3a40 + 0x78dcc49a));
  uVar7 = (_DAT_1833a3ad0 ^ 0xfc800000) & 0xffffffffff800000 ^ 0xfcfee7bf;
  _DAT_1833a37f0 = (_DAT_1833a37f0 ^ uVar7) + 0xc832669d ^ 0x12f947916a929cfe;
  _DAT_1833a3ac8 = (_DAT_1833a3ac8 * 0x603246c1b102c8f9 ^ _DAT_1833a37f0) + uVar7;
  _DAT_1833a3708 = _DAT_1833a3ac8 ^ _DAT_1833a37f0;
  _DAT_1833a38b8 = 0xc832669d;
  uVar7 = (~_DAT_1833a3ab0 + 0x9064cd3b) *
          ((_DAT_1833a3a58 ^ 0xb1eeba07) + (ulonglong)((uint)_DAT_1833a3a58 & 0xb1eeba07) * 2);
  uVar7 = (uVar7 | _DAT_1833a38c0) + (uVar7 & _DAT_1833a38c0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3878 = func_0x00018e1ce110((uVar7 | 0x218a773d) + (ulonglong)((uint)uVar7 & 0x218a773d))
  ;
  uVar7 = (_DAT_1833a3878 ^ 0x35cc9922) & 0xfffffffffffffffe;
  _DAT_1833a37c0 = _DAT_1833a37c8 ^ uVar7 ^ 0xc631665c;
  _DAT_1833a3830 = (_DAT_1833a3830 ^ uVar7) + 0xc631665c ^ 0x9db85a7801f357f1;
  _DAT_1833a3a98 = (_DAT_1833a3a98 * 0x5077f9e6aabf9fe1 ^ _DAT_1833a3830) + uVar7;
  _DAT_1833a3928 = _DAT_1833a3a98 ^ _DAT_1833a3830;
  _DAT_1833a39a8 = 0xc631665c;
  uVar7 = ((_DAT_1833a39b0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1833a39b0 & 0x8422231a) * 2) *
          -_DAT_1833a3960;
  uVar7 = (uVar7 | _DAT_1833a3a18) + (uVar7 & _DAT_1833a3a18);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar7 = func_0x00018e1ce110((uVar7 | 0x8422231a) + (ulonglong)((uint)uVar7 & 0x8422231a));
  _DAT_1833a3ae8 = uVar7 << 0x24 | uVar7 >> 0x1c & 0xfffffffffffff800;
  _DAT_1833a37d0 = _DAT_1833a3a48 ^ _DAT_1833a3ae8 ^ 0x3f;
  _DAT_1833a3918 = (_DAT_1833a3918 ^ _DAT_1833a3ae8) + 0x3f ^ 0xa79f3691c5e5e227;
  _DAT_1833a3ae8 = (uVar7 * 0x1d7cc04206f6cf03 ^ _DAT_1833a3918) + _DAT_1833a3ae8;
  _DAT_1833a39a0 = _DAT_1833a3ae8 ^ _DAT_1833a3918;
  _DAT_1833a3a08 = 0x3f;
  _DAT_1833a3a68 = func_0x00018e1ce110(_DAT_1833a3998 ^ 0x21007c15ffe10d);
  uVar7 = _DAT_1833a37d0 ^ 0x3f;
  _DAT_1833a3720 = _DAT_1833a39d0 ^ uVar7 ^ 0x3f;
  _DAT_1833a3898 = (_DAT_1833a3898 ^ uVar7) + 0x3f ^ 0x18fbc08c756e7641;
  _DAT_1833a3a08 = (_DAT_1833a3a08 * 0x40811d9c9a3ebf87 ^ _DAT_1833a3898) + uVar7;
  _DAT_1833a38b8 = _DAT_1833a3a08 ^ _DAT_1833a3898;
  _DAT_1833a37a0 = 0x3f;
  uVar7 = (_DAT_1833a3ad0 ^ _DAT_1824a2f50) + 0x64be80d9;
  uVar10 = (_UNK_1824a2f58 ^ 0x3f) + _DAT_1833a3ad0 + 0xe09ca3bf;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3ad0 ^ _DAT_1824a2f50;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _UNK_1824a2f58 ^ 0x3f;
  uVar7 = func_0x00018e1ce110((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833a3ad0 + 0xe09ca3bf) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - 0x64be80d9);
  _DAT_1833a39a0 = _DAT_1833a39a0 ^ uVar7 ^ 0xe09ca3bf ^ 0xbc0975774326538b;
  _DAT_1833a3a98 = (_DAT_1833a3a98 * -0x5850c37eebe9d627 ^ _DAT_1833a39a0) + (uVar7 ^ 0xe09ca3bf);
  _DAT_1833a3a88 = _DAT_1833a3a98 ^ _DAT_1833a39a0;
  _DAT_1833a3708 = 0;
  uVar7 = unaff_RBP[3];
  auVar11._8_8_ = _UNK_180132e68;
  auVar11._0_8_ = uVar7 ^ 0x84222325;
  auVar12 = pshufb(auVar11 ^ _DAT_1824a2f60,_DAT_1800170c0);
  uVar8 = auVar12._8_8_ + auVar12._0_8_;
  uVar10 = uVar8 + _DAT_1833a3768;
  if (auVar12._4_4_ < 0) {
    uVar10 = _DAT_1833a3990 ^ uVar8;
  }
  _DAT_1833a37f0 = func_0x00018e1ce110(SUB161(auVar11 ^ _DAT_1824a2f60,5) ^ uVar10);
  uVar5 = (uint)uVar7 & 0x3f;
  _DAT_1833a3920 = (ulonglong)uVar5;
  _DAT_1833a39b0 = (_DAT_1833a39b0 ^ _DAT_1833a37f0) + _DAT_1833a3920 ^ 0x41b5d29ba2f5b3c7;
  _DAT_1833a38e0 = (_DAT_1833a38e0 * -0x66ff05f0a5856a9f ^ _DAT_1833a39b0) + _DAT_1833a37f0;
  _DAT_1833a3970 = _DAT_1833a38e0 ^ _DAT_1833a39b0;
  uVar3 = *(uint *)(unaff_RBP + 0xc);
  uVar10 = _DAT_1833a3920 ^ 0x84222325;
  uVar7 = ((_DAT_1833a39e8 ^ uVar10) + (ulonglong)((uint)_DAT_1833a39e8 & (uint)uVar10) * 2) *
          ((ulonglong)uVar3 - _DAT_1833a39a8);
  uVar7 = (uVar7 | _DAT_1833a3868) + (uVar7 & _DAT_1833a3868);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar10 = uVar10 ^ uVar3;
  _DAT_1833a37c8 = func_0x00018e1ce110((uVar10 | uVar7) + (ulonglong)((uint)uVar10 & (uint)uVar7));
  uVar7 = _DAT_1833a37c8 << 0x1b | _DAT_1833a37c8 >> 0x25;
  uVar5 = uVar5 | uVar3;
  _DAT_1833a3738 = (ulonglong)uVar5;
  _DAT_1833a3a98 = (_DAT_1833a3a98 ^ uVar7) + _DAT_1833a3738 ^ 0xe1613993a21d5f34;
  _DAT_1833a37e0 = (_DAT_1833a37e0 * -0x74f80ddbdac9470b ^ _DAT_1833a3a98) + uVar7;
  _DAT_1833a3a38 = _DAT_1833a37e0 ^ _DAT_1833a3a98;
  unaff_RBP[0xe] = unaff_RBP[2];
  *(int *)(unaff_RBP + 0xf) = (int)unaff_RBP[4];
  *(uint *)(unaff_RBP + 0x10) = uVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[0xb]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e1b8a61 (image 18e1b8a61) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1b8a61(void)

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



// ===== continuation @ rva e1aa408 (image 18e1aa408) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1aa408(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R14;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar11;
  undefined1 auVar10 [16];
  ulonglong uVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  
  _DAT_1833a37d0 = func_0x00018e1ce110(_DAT_1833a38e0 + 0x83707828afc845be ^ 0x22);
  uVar5 = (_DAT_1833a37d0 ^ 0xffef3503c1ecceea) << 0x15 |
          (_DAT_1833a37d0 ^ 0xffef3503c1ecceea) >> 0x2b;
  _DAT_1833a3820 = (_DAT_1833a3820 ^ uVar5) + 0x43af7dcfedffb3ff ^ 0xd05f68ceda89b7a0;
  _DAT_1833a3a50 = (_DAT_1833a3a50 * 0x4b2a7a794a5edb7 ^ _DAT_1833a3820) + uVar5;
  _DAT_1833a37b0 = _DAT_1833a3a50 ^ _DAT_1833a3820;
  _DAT_1833a3800 = 0x43af7dcfedffb3ff;
  uVar5 = (_DAT_1833a3880 ^ _DAT_1824a3280) + (_DAT_1833a38f0 - 0x84222323);
  uVar11 = (_DAT_1833a38f0 ^ _UNK_1824a3288) + _DAT_1833a3880 + 0x54643682d45c9b65;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a3880 ^ _DAT_1824a3280;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1833a38f0 ^ _UNK_1824a3288;
  _DAT_1833a38b0 =
       func_0x00018e1ce110((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833a3880 + 0x54643682d45c9b65)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a38f0 - 0x84222323));
  uVar5 = _DAT_1833a38b0 ^ 0xfffffffffffffff8;
  _DAT_1833a37e8 = _DAT_1833a3810 ^ uVar5 ^ 0x54643682d45c9b5d;
  _DAT_1833a3a88 = (_DAT_1833a3a88 ^ uVar5) + 0x54643682d45c9b5d ^ 0xd3d8f63a93c6da74;
  _DAT_1833a3a80 = (_DAT_1833a3a80 * -0x658a591437ac2c11 ^ _DAT_1833a3a88) + uVar5;
  _DAT_1833a3890 = _DAT_1833a3a80 ^ _DAT_1833a3a88;
  _DAT_1833a3a78 = _DAT_1833a38c0 ^ 0x54643682d45c9b5d;
  _DAT_1833a38a8 = 0x54643682d45c9b5d;
  _DAT_1833a3a88 = func_0x00018e1ce110(_DAT_1833a38d8 + 0x20c3ef25de12d5c2 ^ 9);
  uVar5 = (_DAT_1833a3a88 ^ 0xab9bc97d2ba3649b) << 0x32 |
          (_DAT_1833a3a88 ^ 0xab9bc97d2ba3649b) >> 0xe;
  _DAT_1833a39c8 = _DAT_1833a3878 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a37f0 = (_DAT_1833a37f0 ^ uVar5) - 8 ^ 0xf1d272c98b08fa20;
  _DAT_1833a3a48 = (_DAT_1833a3a48 * 0x7327e3591c59b799 ^ _DAT_1833a37f0) + uVar5;
  _DAT_1833a3758 = _DAT_1833a3a48 ^ _DAT_1833a37f0;
  _DAT_1833a3a60 = 0xfffffffffffffff8;
  uVar5 = (_DAT_1833a3aa0 ^ _DAT_1824a3290) + _DAT_1833a3700 + 0x84222325;
  uVar11 = (_DAT_1833a3700 ^ _UNK_1824a3298) + _DAT_1833a3aa0 + 0xa8da507d637ad084;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a3aa0 ^ _DAT_1824a3290;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1833a3700 ^ _UNK_1824a3298;
  _DAT_1833a3a18 =
       func_0x00018e1ce110((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833a3aa0 + 0xa8da507d637ad084)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3700 + 0x84222325));
  uVar5 = _DAT_1833a3a18 - (_DAT_1833a3a18 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  uVar11 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
           _DAT_1833a3a18;
  uVar5 = uVar11 & 0x7fffffffffffffff;
  uVar11 = (uVar11 & 0x7fffffffffffffff) >> 1 | uVar5;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & unaff_RBX) + (uVar11 >> 2 & unaff_RBX);
  uVar5 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar5;
  _DAT_1833a3aa0 = (_DAT_1833a3aa0 ^ uVar5) + 0x5725af829c852f7c ^ 0xb9319bc80837ac60;
  _DAT_1833a3a38 = (_DAT_1833a3a38 * 0x778c08d07263fbbb ^ _DAT_1833a3aa0) + uVar5;
  _DAT_1833a3928 = _DAT_1833a3a38 ^ _DAT_1833a3aa0;
  _DAT_1833a3968 = 0x5725af829c852f7c;
  _DAT_1833a3928 = func_0x00018e1ce110(_DAT_1833a39f0 + 0x820c1d07d69f5b32 ^ 0x67);
  _DAT_1833a3990 = _DAT_1833a37e0 ^ _DAT_1833a3928 ^ 0xa8da507d637ad07c;
  _DAT_1833a3828 = (_DAT_1833a3828 ^ _DAT_1833a3928) + 0xa8da507d637ad07c ^ 0xb4df10ecf666cbe9;
  _DAT_1833a37d8 = (_DAT_1833a37d8 * 0x437bf080f7713e5d ^ _DAT_1833a3828) + _DAT_1833a3928;
  _DAT_1833a3980 = _DAT_1833a37d8 ^ _DAT_1833a3828;
  _DAT_1833a3988 = 0xa8da507d637ad07c;
  uVar5 = (~_DAT_1833a3af0 + 0x5725af829c852f7d) *
          ((_DAT_1833a3820 ^ 0xa8da507de758f359) + (_DAT_1833a3820 & 0x28da507de758f359) * 2);
  uVar5 = (uVar5 | _DAT_1833a3990) + (uVar5 & _DAT_1833a3990);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3790 = func_0x00018e1ce110((uVar5 | 0xffffffff7bdddc25) + (uVar5 & 0xffffffff7bdddc25));
  uVar5 = ~(_DAT_1833a3790 << 0x1c | _DAT_1833a3790 >> 0x24) & 0xa8da507d637ad07c;
  _DAT_1833a3980 = _DAT_1833a3798 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a3720 = (_DAT_1833a3720 ^ uVar5) - 8 ^ 0x3df7a72d0202974b;
  _DAT_1833a3898 = (_DAT_1833a3898 * -0x72c30037e590ad8d ^ _DAT_1833a3720) + uVar5;
  _DAT_1833a3a68 = _DAT_1833a3898 ^ _DAT_1833a3720;
  _DAT_1833a37f8 = 0xfffffffffffffff8;
  uVar5 = (_DAT_1833a38d0 ^ _DAT_1824a32a0) + _DAT_1833a3a80 + 0x84222325;
  uVar11 = (_DAT_1833a3a80 ^ _UNK_1824a32a8) + _DAT_1833a38d0 + 0x260f1aa8b9cb7682;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a38d0 ^ _DAT_1824a32a0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1833a3a80 ^ _UNK_1824a32a8;
  _DAT_1833a3ae8 =
       func_0x00018e1ce110((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833a38d0 + 0x260f1aa8b9cb7682)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3a80 + 0x84222325));
  _DAT_1833a3968 = (_DAT_1833a3968 ^ _DAT_1833a3ad8) + 0xd9f0e5574634897e ^ 0x9e08d2aaa53d7e4c;
  _DAT_1833a38c8 = (_DAT_1833a38c8 * 0x51c4b28a9238a4c3 ^ _DAT_1833a3968) + _DAT_1833a3ad8;
  _DAT_1833a3a00 = _DAT_1833a38c8 ^ _DAT_1833a3968;
  _DAT_1833a37f8 = 0xd9f0e5574634897e;
  uVar5 = (~_DAT_1833a3998 + 0x260f1aa8b9cb7683) *
          ((_DAT_1833a39e8 ^ 0xffffffff7bdddcdd) + (_DAT_1833a39e8 & 0x7fffffff7bdddcdd) * 2);
  uVar5 = (uVar5 | _DAT_1833a3af8) + (uVar5 & _DAT_1833a3af8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3a10 = func_0x00018e1ce110((uVar5 | 0xd9f0e557c216aa5f) + (uVar5 & 0xd9f0e557c216aa5f));
  uVar5 = _DAT_1833a3a10 & 0xffffffffff800000;
  _DAT_1833a37b8 = _DAT_1833a3938 ^ uVar5 ^ 0x260f1aa8b9cb767a;
  _DAT_1833a3aa8 = (_DAT_1833a3aa8 ^ uVar5) + 0x260f1aa8b9cb767a ^ 0xf5c06911590ec25;
  _DAT_1833a3980 = (_DAT_1833a3980 * 0x438c06bc64d039e9 ^ _DAT_1833a3aa8) + uVar5;
  _DAT_1833a3a68 = _DAT_1833a3980 ^ _DAT_1833a3aa8;
  _DAT_1833a3728 = 0x260f1aa8b9cb767a;
  _DAT_1833a3a78 = func_0x00018e1ce110(_DAT_1833a39f0 ^ 0xd5d444c4e0202b42);
  uVar5 = (_DAT_1833a3a78 ^ 0xd94835007898ec76) & 0x7fffffffffffffff;
  _DAT_1833a3a60 = _DAT_1833a39f0 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a3948 = (_DAT_1833a3948 ^ uVar5) - 8 ^ 0xc005acd05a85a0f4;
  _DAT_1833a38b8 = (_DAT_1833a38b8 * 0x73cd1a0b678073c1 ^ _DAT_1833a3948) + uVar5;
  _DAT_1833a3ad0 = _DAT_1833a38b8 ^ _DAT_1833a3948;
  _DAT_1833a39c8 = -8;
  uVar5 = (~_DAT_1833a38e0 + 0x75e3220e4143fbaf) *
          ((_DAT_1833a39b8 ^ 0x43af7dcf69dd90da) + (_DAT_1833a39b8 & 0x43af7dcf69dd90da) * 2);
  uVar5 = (uVar5 | _DAT_1833a3700) + (uVar5 & _DAT_1833a3700);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3a58 = func_0x00018e1ce110((uVar5 | 0x364c5fc1289e6b74) + (uVar5 & 0x364c5fc1289e6b74));
  uVar5 = _DAT_1833a3a58 & 0xffffffffc0000000;
  _DAT_1833a3780 = _DAT_1833a3a80 ^ uVar5 ^ 0xb9929fde2f43afad;
  _DAT_1833a3a48 = (_DAT_1833a3a48 ^ uVar5) + 0xb9929fde2f43afad ^ 0xc22662cce99eb3ab;
  _DAT_1833a3700 = (_DAT_1833a3700 * 0x5407742bd84c5ceb ^ _DAT_1833a3a48) + uVar5;
  _DAT_1833a3910 = _DAT_1833a3700 ^ _DAT_1833a3a48;
  _DAT_1833a3a38 = 0xb9929fde2f43afad;
  _DAT_1833a3a58 = func_0x00018e1ce110(_DAT_1833a3978 ^ 0xc098c418543572c3);
  _DAT_1833a3898 = (_DAT_1833a3898 ^ _DAT_1833a3a58) + 0x364c5fc1acbc4851 ^ 0x4ea02bdd0a0acb10;
  _DAT_1833a39b8 = (_DAT_1833a39b8 * 0x7e75f8814a9febb7 ^ _DAT_1833a3898) + _DAT_1833a3a58;
  _DAT_1833a37e0 = _DAT_1833a39b8 ^ _DAT_1833a3898;
  _DAT_1833a3a68 = 0x364c5fc1acbc4851;
  uVar5 = (~_DAT_1833a3a78 + 0x8346401c8287675d) *
          ((_DAT_1833a3ab0 ^ 0x364c5fc1289e6b74) + (_DAT_1833a3ab0 & 0x364c5fc1289e6b74) * 2);
  uVar5 = (uVar5 | _DAT_1833a3880) + (uVar5 & _DAT_1833a3880);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3790 = func_0x00018e1ce110((uVar5 | 0xb50a1fddaa190c28) + (uVar5 & 0xb50a1fddaa190c28));
  _DAT_1833a3a38 = _DAT_1833a39e8 ^ _DAT_1833a3790 ^ 0xb9929fde2f43afad;
  _DAT_1833a37b8 = (_DAT_1833a37b8 ^ _DAT_1833a3790) + 0xb9929fde2f43afad ^ 0x9aede1c5c9ed46c7;
  _DAT_1833a39c8 = (_DAT_1833a39c8 * -0x5d072865021f7d0f ^ _DAT_1833a37b8) + _DAT_1833a3790;
  _DAT_1833a3728 = _DAT_1833a39c8 ^ _DAT_1833a37b8;
  _DAT_1833a38e0 = 0xb9929fde2f43afad;
  uVar5 = func_0x00018e1ce110(_DAT_1833a3a58 + 0xffe300841b001dff ^ 0xed);
  _DAT_1833a3998 = uVar5 << 2 | uVar5 >> 0x3e;
  _DAT_1833a3760 = _DAT_1833a3760 ^ _DAT_1833a3998 ^ 0x24c647e244fc0999;
  _DAT_1833a3a28 = (_DAT_1833a3a28 * -0x109bf406646b6b05 ^ _DAT_1833a3760) + _DAT_1833a3998;
  _DAT_1833a38f0 = _DAT_1833a3a28 ^ _DAT_1833a3760;
  _DAT_1833a3a90 = _DAT_1833a39a0;
  _DAT_1833a37a0 = 0;
  uVar5 = (_DAT_1833a39a8 ^ 0xffffffff7bdddcdd) + (_DAT_1833a3820 - 0x84222323);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a39a8 ^ 0xffffffff7bdddcdd;
  uVar11 = ((_DAT_1833a3820 + _DAT_1833a39a8) * 0x2000 | _DAT_1833a3820 + _DAT_1833a39a8 >> 0x33) ^
           _DAT_1833a3820;
  _DAT_1833a3af0 =
       func_0x00018e1ce110((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_1833a39a8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3820 - 0x84222323));
  uVar5 = _DAT_1833a3af0 * -0x5912b2d80707fb63;
  _DAT_1833a3a20 = _DAT_1833a39e0 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a38e8 = (_DAT_1833a38e8 ^ uVar5) - 8 ^ 0x32f0406d2e8ca0ac;
  _DAT_1833a3758 = (_DAT_1833a3758 * 0x6e0703d2ba2f01f3 ^ _DAT_1833a38e8) + uVar5;
  _DAT_1833a3778 = _DAT_1833a3758 ^ _DAT_1833a38e8;
  _DAT_1833a3980 = 0xfffffffffffffff8;
  _DAT_1833a3ae0 = func_0x00018e1ce110(_DAT_1833a3940 ^ 0x2fa3506a257e1e72);
  uVar5 = (_DAT_1833a3ae0 & 0x7fffffffffffffff) * 0x291ebcbd6189a331;
  _DAT_1833a3780 = (_DAT_1833a3780 ^ uVar5) + 0xbc50823012004c00 ^ 0x227c7ea538b403f3;
  _DAT_1833a3808 = (_DAT_1833a3808 * -0x370fd2cd0e271d6f ^ _DAT_1833a3780) + uVar5;
  _DAT_1833a38b0 = _DAT_1833a3808 ^ _DAT_1833a3780;
  _DAT_1833a38a8 = 0xbc50823012004c00;
  _DAT_1833a3968 = func_0x00018e1ce110(_DAT_1833a3888 + 0xc14cb8c9498d3d12 ^ 0x46);
  _DAT_1833a37b0 = _DAT_1833a37b0 ^ _DAT_1833a3968 ^ 0xbc50823012004c00 ^ 0x224ce1c83b82778e;
  _DAT_1833a3958 =
       (_DAT_1833a3958 * 0x40f8ad1031501169 ^ _DAT_1833a37b0) +
       (_DAT_1833a3968 ^ 0xbc50823012004c00);
  _DAT_1833a3720 = _DAT_1833a3958 ^ _DAT_1833a37b0;
  _DAT_1833a3988 = 0;
  uVar5 = ((_DAT_1833a3878 ^ 0xffffffff7bdddcdd) + (_DAT_1833a3878 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_1833a39e0;
  uVar5 = (uVar5 | _DAT_1833a3810) + (uVar5 & _DAT_1833a3810);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3870 = func_0x00018e1ce110((uVar5 | 0xffffffff7bdddcdd) + (uVar5 & 0xffffffff7bdddcdd));
  uVar5 = ~_DAT_1833a3870 & 0xfffffffffffffff8;
  _DAT_1833a3748 = _DAT_1833a3af8 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a3848 = (_DAT_1833a3848 ^ uVar5) - 8 ^ 0xe09900cd456dba82;
  _DAT_1833a3a78 = (_DAT_1833a3a78 * 0x4bbf3f7fb7bcca19 ^ _DAT_1833a3848) + uVar5;
  _DAT_1833a3788 = _DAT_1833a3a78 ^ _DAT_1833a3848;
  _DAT_1833a3720 = -8;
  _DAT_1833a3ad0 = func_0x00018e1ce110(_DAT_1833a39c0 + 0x68ac3567440dacc6U ^ 6);
  uVar5 = _DAT_1833a3ad0 - (_DAT_1833a3ad0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1833a3ad0;
  _DAT_1833a3a78 = _DAT_1833a3898 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a3890 = (_DAT_1833a3890 ^ uVar5) - 8 ^ 0x31946fe07f8f8aaf;
  _DAT_1833a3a18 = (_DAT_1833a3a18 * -0x66dc4221b9b9b4a9 ^ _DAT_1833a3890) + uVar5;
  _DAT_1833a3af0 = _DAT_1833a3a18 ^ _DAT_1833a3890;
  _DAT_1833a3ab0 = 0xfffffffffffffff8;
  uVar5 = *(ulonglong *)(unaff_RBP + 0x60);
  uVar11 = (~_DAT_1833a3a58 - 7) *
           ((uVar5 ^ 0x84222325 ^ _DAT_1833a3758) + ((uVar5 ^ 0x84222325) & _DAT_1833a3758) * 2);
  uVar11 = (uVar11 | _DAT_1833a39a0) + (uVar11 & _DAT_1833a39a0);
  uVar11 = uVar11 * 0x2000 ^ uVar11;
  uVar11 = uVar11 >> 7 ^ uVar11;
  uVar11 = uVar11 << 0x11 ^ uVar11;
  _DAT_1833a3758 =
       func_0x00018e1ce110((uVar5 ^ 0xffffffff7bdddcdd | uVar11) +
                           (uVar11 & (uVar5 ^ 0xffffffff7bdddcdd)));
  uVar8 = (uint)(uVar5 >> 0x20);
  auVar13._8_4_ = (uint)uVar5;
  auVar13._0_8_ = uVar5;
  auVar13._12_4_ = uVar8;
  uVar9 = SUB164(auVar13 & _DAT_1800627b0,0);
  uVar11 = SUB168(auVar13 & _DAT_1800627b0,0);
  uVar17 = (uint)uVar5 | (uint)DAT_1800627b0;
  uVar14 = SUB164(auVar13 ^ _DAT_18001a710,0);
  uVar16 = SUB164(auVar13 ^ _DAT_1800627b0,0);
  uVar22 = ((ulonglong)_DAT_1824a32d0 * (ulonglong)uVar17 + _DAT_1824a3300 << 0x20) +
           (ulonglong)_DAT_1824a32e0 * (ulonglong)uVar17 +
           (ulonglong)uVar9 * (ulonglong)_DAT_1824a32e0 +
           ((uVar11 >> 0x20) * (ulonglong)_DAT_1824a32e0 +
            (ulonglong)uVar9 * (ulonglong)_DAT_1824a32d0 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_1824a32b0 +
           ((ulonglong)_DAT_1824a32c0 * (uVar5 & 0xffffffff) +
            (ulonglong)_DAT_1824a32b0 * (ulonglong)uVar8 << 0x20) +
           (ulonglong)uVar14 * (ulonglong)_DAT_1824a32f0 +
           ((ulonglong)_DAT_1824a3310 * (ulonglong)uVar14 +
            (SUB168(auVar13 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_1824a32f0 << 0x20) +
           (-((ulonglong)uVar16 * (_DAT_1824a3350 & 0xffffffff) +
              ((SUB168(auVar13 ^ _DAT_1800627b0,0) >> 0x20) * (_DAT_1824a3350 & 0xffffffff) +
               (ulonglong)_DAT_1824a3340 * (ulonglong)uVar16 << 0x20) +
             (ulonglong)uVar9 * (_DAT_1824a3350 & 0xffffffff) +
             ((uVar11 >> 0x20) * (_DAT_1824a3350 & 0xffffffff) +
              (ulonglong)uVar9 * (ulonglong)_DAT_1824a3340 << 0x20)) -
           (((ulonglong)uVar17 * (ulonglong)_DAT_1824a3370 + _DAT_1824a3380 << 0x20) +
           (ulonglong)_DAT_1824a3360 * (ulonglong)uVar17)) + _DAT_1824a3390;
  _DAT_1833a3980 = _DAT_1833a38e0 ^ _DAT_1833a3758 ^ uVar22;
  _DAT_1833a3810 = (_DAT_1833a3af8 ^ _DAT_1833a3758) + uVar22 ^ 0x60a01dbba6de77b9;
  _DAT_1833a3af8 = (_DAT_1833a3af8 * 0x759b4c3f38843c7b ^ _DAT_1833a3810) + _DAT_1833a3758;
  _DAT_1833a3810 = _DAT_1833a3af8 ^ _DAT_1833a3810;
  uVar11 = uVar22 ^ 0x84222325;
  uVar5 = ((_DAT_1833a3798 ^ uVar11) + (uVar11 & _DAT_1833a3798) * 2) * (unaff_R14 - uVar22);
  uVar5 = (uVar5 | _DAT_1833a3888) + (uVar5 & _DAT_1833a3888);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3710 = uVar22;
  _DAT_1833a38a0 =
       func_0x00018e1ce110((uVar11 ^ unaff_R14 | uVar5) + (uVar5 & (uVar11 ^ unaff_R14)));
  uVar23 = (uint)(uVar22 >> 0x20);
  auVar15._8_4_ = (int)uVar22;
  auVar15._0_8_ = uVar22;
  auVar15._12_4_ = uVar23;
  *(ulonglong *)(unaff_RBP + 0x38) = unaff_R14;
  uVar9 = (uint)(unaff_R14 >> 0x20);
  auVar10._8_4_ = (int)unaff_R14;
  auVar10._0_8_ = unaff_R14;
  auVar10._12_4_ = uVar9;
  uVar4 = (ulonglong)_DAT_1824a33b0;
  uVar5 = (ulonglong)_DAT_1824a33b0;
  auVar13 = auVar15 & auVar10;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = auVar15 ^ _DAT_18001a710;
  uVar17 = _DAT_1824a33f0;
  uVar16 = _DAT_1824a33e0;
  uVar14 = _DAT_1824a33c0;
  uVar8 = _DAT_1824a33a0;
  uVar11 = (ulonglong)_DAT_1824a33d0;
  uVar7 = (ulonglong)_DAT_1824a33a0;
  uVar12 = (ulonglong)_DAT_1824a33c0;
  uVar1 = (ulonglong)_DAT_1824a33d0;
  uVar26 = auVar13._0_4_;
  uVar2 = (ulonglong)_DAT_1824a33e0;
  *(ulonglong *)(unaff_RBP + 0x20) = auVar13._0_8_ >> 0x20;
  *(ulonglong *)(unaff_RBP + 0x28) = auVar13._8_8_ >> 0x20;
  uVar20 = SUB164(auVar15 | auVar10,0);
  uVar21 = SUB164(auVar15 ^ auVar10,0);
  uVar25 = SUB168(auVar15 ^ auVar10,0);
  uVar3 = *(ulonglong *)(unaff_RBP + 0x60);
  auVar19._8_4_ = 0xffffffff;
  auVar19._0_8_ = 0xffffffffffffffff;
  auVar19._12_4_ = 0xffffffff;
  uVar18 = SUB164(auVar19 ^ auVar10,0);
  uVar24 = SUB168(auVar19 ^ auVar10,0);
  uVar6 = _DAT_1833a38a0 * 0x2cb9aaa05f407239;
  uVar6 = (uVar6 << 0x2a | uVar6 >> 0x16) >> 3 | (uVar6 >> 0x16) << 0x3d;
  uVar7 = (((ulonglong)_DAT_1824a3430 * (ulonglong)uVar18 +
            ((uVar24 >> 0x20) * (ulonglong)_DAT_1824a3430 + (ulonglong)uVar14 * (ulonglong)uVar18 <<
            0x20) + (ulonglong)_DAT_1824a3420 * (uVar3 & 0xffffffff) +
                    ((uVar3 >> 0x20) * (ulonglong)_DAT_1824a3420 +
                     (ulonglong)uVar8 * (uVar3 & 0xffffffff) << 0x20) +
                    (ulonglong)uVar17 * (ulonglong)uVar21 +
                    ((uVar25 >> 0x20) * (ulonglong)uVar17 + (ulonglong)uVar16 * (ulonglong)uVar21 <<
                    0x20) + (ulonglong)uVar26 * (ulonglong)uVar17 +
                            ((auVar13._0_8_ >> 0x20) * (ulonglong)uVar17 + uVar26 * uVar2 << 0x20) +
                            uVar11 * (unaff_R14 & 0xffffffff) +
                            (uVar9 * uVar1 + (unaff_R14 & 0xffffffff) * uVar12 << 0x20) +
                            uVar5 * (uVar22 & 0xffffffff) +
                            (uVar23 * uVar4 + (uVar22 & 0xffffffff) * uVar7 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1824a3400 +
           ((ulonglong)_DAT_1824a3410 * (ulonglong)uVar20 +
            (SUB168(auVar15 | auVar10,0) >> 0x20) * (ulonglong)_DAT_1824a3400 << 0x20)) -
          ((ulonglong)uVar18 * (_DAT_1824a3500 & 0xffffffff) +
           ((ulonglong)_DAT_1824a3510 * (ulonglong)uVar18 +
            (uVar24 >> 0x20) * (_DAT_1824a3500 & 0xffffffff) << 0x20) +
          (ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_1824a34e0 +
          ((ulonglong)_DAT_1824a34f0 * (ulonglong)*(uint *)(unaff_RBP + 0x60) +
           (uVar3 >> 0x20) * (ulonglong)_DAT_1824a34e0 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_1824a34c0 +
          ((ulonglong)_DAT_1824a34d0 * (ulonglong)uVar21 +
           (uVar25 >> 0x20) * (ulonglong)_DAT_1824a34c0 << 0x20) +
          (ulonglong)uVar26 * (ulonglong)_DAT_1824a34a0 +
          ((ulonglong)_DAT_1824a34b0 * (ulonglong)uVar26 +
           (ulonglong)*(uint *)(unaff_RBP + 0x20) * (ulonglong)_DAT_1824a34a0 << 0x20) +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1824a3490 +
           (ulonglong)uVar9 * (ulonglong)_DAT_1824a3480 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1824a3480 +
          (uVar22 & 0xffffffff) * (ulonglong)_DAT_1824a3460 +
          ((ulonglong)_DAT_1824a3470 * (uVar22 & 0xffffffff) +
           (ulonglong)uVar23 * (ulonglong)_DAT_1824a3460 << 0x20))) + 0xceb755a3a11e05c6;
  _DAT_1833a3a58 = uVar7 ^ uVar6;
  _DAT_1833a3758 = (_DAT_1833a3758 ^ uVar6) + uVar7 ^ 0x6194cc1dd1ea5450;
  _DAT_1833a3968 = (_DAT_1833a3968 * 0x53f924260110e9f7 ^ _DAT_1833a3758) + uVar6;
  _DAT_1833a39c8 = _DAT_1833a3968 ^ _DAT_1833a3758;
  uVar5 = (~_DAT_1833a3af0 + 0x84a0f9357b9f180f) *
          ((_DAT_1833a3a50 ^ 0x87d3e4b80190a649) + (_DAT_1833a3a50 & 0x7d3e4b80190a649) * 2);
  uVar5 = (uVar5 | _DAT_1833a3a00) + (uVar5 & _DAT_1833a3a00);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3900 = uVar7;
  uVar5 = func_0x00018e1ce110((uVar5 | 0x3731d8d7a0fbe47) + (uVar5 & 0x3731d8d7a0fbe47));
  _DAT_1833a3800 =
       (_DAT_1833a3800 ^ uVar5 & 0x87d3e4b885b2856c) + 0x3731d8dfe2d9d62 ^ 0xc6bd585d24dcac0;
  _DAT_1833a37a0 =
       (_DAT_1833a37a0 * 0x243fee3f4a4b48e9 ^ _DAT_1833a3800) + (uVar5 & 0x87d3e4b885b2856c);
  _DAT_1833a3750 = _DAT_1833a37a0 ^ _DAT_1833a3800;
  _DAT_1833a39b0 = 0x3731d8dfe2d9d62;
  _DAT_1833a3948 = func_0x00018e1ce110(_DAT_1833a3890 + 0x2fe375e9dab6fbf7 ^ 0x5e);
  uVar5 = _DAT_1833a3948 >> 1 | _DAT_1833a3948;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1833a3948;
  _DAT_1833a37f0 = (_DAT_1833a37f0 ^ uVar5) + 0xf76506cf11c1c000 ^ 0xc73aa4800afb7ef9;
  _DAT_1833a38e0 = (_DAT_1833a38e0 * -0x71c8de19cce16cb ^ _DAT_1833a37f0) + uVar5;
  _DAT_1833a3a50 = _DAT_1833a38e0 ^ _DAT_1833a37f0;
  _DAT_1833a3728 = -0x89af930ee3e4000;
  _DAT_1833a3920 = func_0x00018e1ce110(_DAT_1833a3978 ^ 0x9fa062f8fdb7439f);
  uVar5 = _DAT_1833a3920 - (_DAT_1833a3920 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_1833a3920;
  _DAT_1833a3708 = _DAT_1833a3998 ^ uVar5 ^ 0x20;
  _DAT_1833a3770 = (_DAT_1833a3770 ^ uVar5) + 0x20 ^ 0x334b660d2dfbb61;
  _DAT_1833a39b8 = (_DAT_1833a39b8 * 0x21184b14ac8fb6af ^ _DAT_1833a3770) + uVar5;
  _DAT_1833a3960 = _DAT_1833a39b8 ^ _DAT_1833a3770;
  _DAT_1833a3808 = 0x20;
  uVar5 = (~_DAT_1833a38e8 + 0xe18ee4e0dc3f8981) *
          ((_DAT_1833a3740 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833a3740 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1833a38c8) + (uVar5 & _DAT_1833a38c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3878 = func_0x00018e1ce110((uVar5 | 0xe18ee4e0581daaa5) + (uVar5 & 0xe18ee4e0581daaa5));
  _DAT_1833a3800 = (_DAT_1833a3800 ^ _DAT_1833a3878) + 0x1e711b1f23c07680 ^ 0xc159d2188b997d65;
  _DAT_1833a3ad0 = (_DAT_1833a3ad0 * 0xd130633dabb1c65 ^ _DAT_1833a3800) + _DAT_1833a3878;
  _DAT_1833a3a90 = _DAT_1833a3ad0 ^ _DAT_1833a3800;
  _DAT_1833a3a40 = 0x1e711b1f23c07680;
  uVar5 = (~_DAT_1833a38c0 + 0xe18ee4e0dc3f8981) *
          ((_DAT_1833a3a20 ^ 0x84222305) + (ulonglong)((uint)_DAT_1833a3a20 & 0x84222305) * 2);
  uVar5 = (uVar5 | _DAT_1833a3808) + (uVar5 & _DAT_1833a3808);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3a40 = func_0x00018e1ce110((uVar5 | 0xe18ee4e0581daa85) + (uVar5 & 0xe18ee4e0581daa85));
  uVar5 = _DAT_1833a3a40 & 0xffffffffc0000000;
  _DAT_1833a37b0 = _DAT_1833a3768 ^ uVar5 ^ 0xe18ee4e0dc3f89a0;
  _DAT_1833a3aa0 = (_DAT_1833a3aa0 ^ uVar5) + 0xe18ee4e0dc3f89a0 ^ 0x152547465cdb53af;
  _DAT_1833a3940 = (_DAT_1833a3940 * -0x5c1ab2705e85a407 ^ _DAT_1833a3aa0) + uVar5;
  _DAT_1833a3a78 = _DAT_1833a3940 ^ _DAT_1833a3aa0;
  _DAT_1833a3ac8 = 0xe18ee4e0dc3f89a0;
  _DAT_1833a38b0 = func_0x00018e1ce110(_DAT_1833a39d8 ^ 0xcec32a97052b54e7);
  _DAT_1833a3a30 = _DAT_1833a38d8 ^ _DAT_1833a38b0 ^ 0x20;
  _DAT_1833a38d8 = (_DAT_1833a38d8 ^ _DAT_1833a38b0) + 0x20 ^ 0x3189c01998510187;
  _DAT_1833a38f0 = (_DAT_1833a38f0 * 0x5ee01e8e66bb4105 ^ _DAT_1833a38d8) + _DAT_1833a38b0;
  _DAT_1833a3748 = _DAT_1833a38f0 ^ _DAT_1833a38d8;
  _DAT_1833a39d8 = 0x20;
  uVar5 = (~_DAT_1833a3ab0 + 0x60bb1938a75f9a01) *
          ((_DAT_1833a3a88 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833a3a88 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1833a3aa0) + (uVar5 & _DAT_1833a3aa0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3ae8 = func_0x00018e1ce110((uVar5 | 0x60bb1938237db925) + (uVar5 & 0x60bb1938237db925));
  _DAT_1833a37c8 = _DAT_1833a37c8 + 0x9f44e6c758a06600 ^ 0x5a1187b40cc6955e;
  _DAT_1833a3908 = _DAT_1833a3a58 * 0x6959fa2894cd58af;
  _DAT_1833a3a58 = _DAT_1833a3908 ^ _DAT_1833a37c8;
  _DAT_1833a37f0 = 0x9f44e6c758a06600;
  uVar5 = (_DAT_1833a38c8 ^ _DAT_1824a3520) + _DAT_1833a3768 + 0x60bb1938237db905;
  uVar11 = (_DAT_1833a3768 ^ _UNK_1824a3528) + _DAT_1833a38c8 + 0x9f44e6c758a06600;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a38c8 ^ _DAT_1824a3520;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1833a3768 ^ _UNK_1824a3528;
  _DAT_1833a3968 =
       func_0x00018e1ce110((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833a38c8 + 0x9f44e6c758a06600)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3768 + 0x60bb1938237db905)
                          );
  uVar11 = _UNK_1824a3538;
  uVar5 = _DAT_1824a3530;
  uVar4 = ((_DAT_1833a3968 ^ 0x81479a0060280000) << 0x20 |
          (_DAT_1833a3968 ^ 0x81479a0060280000) >> 0x20) & 0x60bb1938a75f9a20;
  _DAT_1833a38d0 = _DAT_1833a3848 ^ uVar4 ^ 0x20;
  _DAT_1833a3818 = (_DAT_1833a3818 ^ uVar4) + 0x20 ^ 0x561066b67f024231;
  _DAT_1833a3728 = (_DAT_1833a3728 * 0x5afd965f74cbc713 ^ _DAT_1833a3818) + uVar4;
  _DAT_1833a3a60 = _DAT_1833a3728 ^ _DAT_1833a3818;
  _DAT_1833a3788 = 0x20;
  uVar4 = (_DAT_1833a3898 ^ _DAT_1824a3530) + _DAT_1833a3ad0 + 0xbff3fd4553d9edc7;
  uVar12 = (_DAT_1833a3ad0 ^ _UNK_1824a3538) + _DAT_1833a3898 + 0x3731d8dfe2d9d62;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a3898 ^ _DAT_1824a3530;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833a3ad0 ^ _UNK_1824a3538;
  uVar4 = func_0x00018e1ce110((uVar12 << 0x1d | uVar12 >> 0x23) -
                              (_DAT_1833a3898 + 0x3731d8dfe2d9d62) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) -
                              (_DAT_1833a3ad0 + 0xbff3fd4553d9edc7));
  uVar4 = (uVar4 ^ 0xbff3fdcdffffdfe2) << 0x2e | (uVar4 ^ 0xbff3fdcdffffdfe2) >> 0x12;
  _DAT_1833a3920 = _DAT_1833a3970 ^ uVar4 ^ 0xc3671ad3d6296c44;
  _DAT_1833a3968 = (_DAT_1833a3968 ^ uVar4) + 0xc3671ad3d6296c44 ^ 0x2d1018065981286c;
  _DAT_1833a3978 = (_DAT_1833a3978 * -0x27b15a03eab774cb ^ _DAT_1833a3968) + uVar4;
  _DAT_1833a3758 = _DAT_1833a3978 ^ _DAT_1833a3968;
  _DAT_1833a37a0 = _DAT_1833a39e0 ^ 0xc3671ad3d6296c44;
  _DAT_1833a38b8 = 0xc3671ad3d6296c44;
  _DAT_1833a3770 = func_0x00018e1ce110(_DAT_1833a3a10 + 0x48707f5b9a1fb493);
  _DAT_1833a3ab8 =
       (_DAT_1833a3ab8 ^ _DAT_1833a3770 & 0x7fffffffffffffff) + 0xbc80e0c829d65380 ^
       0x207831077c60e1a;
  _DAT_1833a38f8 =
       (_DAT_1833a38f8 * 0x40cff0ff90d83be5 ^ _DAT_1833a3ab8) +
       (_DAT_1833a3770 & 0x7fffffffffffffff);
  _DAT_1833a3998 = _DAT_1833a38f8 ^ _DAT_1833a3ab8;
  _DAT_1833a3840 = 0xbc80e0c829d65380;
  uVar4 = (_DAT_1833a3948 ^ uVar5) + _DAT_1833a39d0 + 0xbff3fd4553d9edc7;
  uVar12 = (_DAT_1833a39d0 ^ uVar11) + _DAT_1833a3948 + 0x3731d8dfe2d9d62;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a3948 ^ uVar5;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833a39d0 ^ uVar11;
  _DAT_1833a3908 =
       func_0x00018e1ce110((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833a3948 + 0x3731d8dfe2d9d62)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a39d0 + 0xbff3fd4553d9edc7)
                          );
  _DAT_1833a3788 = (_DAT_1833a3788 ^ _DAT_1833a38d0) + 0x3731d05d6298c62 ^ 0xb853e42e7c9b92ee;
  _DAT_1833a3768 = (_DAT_1833a3768 * 0x7790e4102aa8c3c3 ^ _DAT_1833a3788) + _DAT_1833a38d0;
  _DAT_1833a39f0 = _DAT_1833a3768 ^ _DAT_1833a3788;
  _DAT_1833a3a20 = 0x3731d05d6298c62;
  uVar5 = (~_DAT_1833a3a68 + 0x6e63a0bac5318c5) *
          ((_DAT_1833a3878 ^ 0xbc80e0c8adf470a5) + (_DAT_1833a3878 & 0x3c80e0c8adf470a5) * 2);
  uVar5 = (uVar5 | _DAT_1833a3788) + (uVar5 & _DAT_1833a3788);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a39b8 = func_0x00018e1ce110((uVar5 | 0xba66dac301a76861) + (uVar5 & 0xba66dac301a76861));
  uVar5 = (_DAT_1833a39b8 & 0xffffffff) * (_DAT_1824a3540 & 0xffffffff) +
          ((ulonglong)_DAT_1824a3550 * (_DAT_1833a39b8 & 0xffffffff) +
           (_DAT_1833a39b8 >> 0x20) * (_DAT_1824a3540 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  _DAT_1833a3770 = _DAT_1833a3778 ^ uVar5 ^ 0xc3671ad3d6296c44;
  _DAT_1833a3aa0 = (_DAT_1833a3aa0 ^ uVar5) + 0xc3671ad3d6296c44 ^ 0xb501035d0f26036c;
  _DAT_1833a3778 = (_DAT_1833a3778 * -0x548836d6c5ddfafd ^ _DAT_1833a3aa0) + uVar5;
  _DAT_1833a3820 = _DAT_1833a3778 ^ _DAT_1833a3aa0;
  _DAT_1833a3760 = 0xc3671ad3d6296c44;
  uVar5 = (~_DAT_1833a3978 + 0xc3671ad3d6296c45) *
          ((_DAT_1833a3798 ^ 0xc3671ad3520b4f61) + (_DAT_1833a3798 & 0x43671ad3520b4f61) * 2);
  uVar5 = (uVar5 | _DAT_1833a39f0) + (uVar5 & _DAT_1833a39f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a37f0 = func_0x00018e1ce110((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  uVar5 = _DAT_1833a37f0 >> 1 | _DAT_1833a37f0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  _DAT_1833a38a0 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
       _DAT_1833a37f0;
  _DAT_1833a3a30 = _DAT_1833a3a30 ^ _DAT_1833a38a0 ^ 0x3fcac6b0ced6602c;
  _DAT_1833a3848 = (_DAT_1833a3848 * 0x44bcfa6c89d8040f ^ _DAT_1833a3a30) + _DAT_1833a38a0;
  _DAT_1833a3978 = _DAT_1833a3848 ^ _DAT_1833a3a30;
  _DAT_1833a3758 = 0;
  uVar5 = (_DAT_1833a3750 ^ _DAT_1824a3560) + _DAT_1833a3968 + 0xbff3fd4553d9edc7;
  uVar11 = (_DAT_1833a3968 ^ _UNK_1824a3568) + _DAT_1833a3750 + 0x400c02ba2804311d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a3750 ^ _DAT_1824a3560;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1833a3968 ^ _UNK_1824a3568;
  _DAT_1833a3890 =
       func_0x00018e1ce110((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833a3750 + 0x400c02ba2804311d)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3968 + 0xbff3fd4553d9edc7)
                          );
  _DAT_1833a3968 = _DAT_1833a3968 ^ _DAT_1833a3890 ^ 0x4dc6030ad523dc55;
  _DAT_1833a3978 = (_DAT_1833a3978 * 0x5265dcfb21b6e3ff ^ _DAT_1833a3968) + _DAT_1833a3890;
  _DAT_1833a39b0 = _DAT_1833a3978 ^ _DAT_1833a3968;
  _DAT_1833a3af8 = 0;
  uVar5 = (~_DAT_1833a3770 + 0x2cf35c45d7bace61) *
          ((_DAT_1833a3890 ^ 0x2cf35c455398ed45) + (_DAT_1833a3890 & 0x2cf35c455398ed45) * 2);
  uVar5 = (uVar5 | _DAT_1833a3840) + (uVar5 & _DAT_1833a3840);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a38c8 = func_0x00018e1ce110((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1833a3758 = _DAT_1833a3758 ^ _DAT_1833a38c8 ^ 0xeb67ef4752309aa4;
  _DAT_1833a3738 = (_DAT_1833a3738 * -0x4c4534ba72cbfeaf ^ _DAT_1833a3758) + _DAT_1833a38c8;
  _DAT_1833a38d8 = _DAT_1833a3738 ^ _DAT_1833a3758;
  _DAT_1833a3a28 = 0;
  uVar5 = ((_DAT_1833a3a08 ^ 0x84222305) + (ulonglong)((uint)_DAT_1833a3a08 & 0x84222305) * 2) *
          -_DAT_1833a39e0;
  uVar5 = (uVar5 | _DAT_1833a39d0) + (uVar5 & _DAT_1833a39d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a38b0 = func_0x00018e1ce110((uVar5 | 0x84222305) + (ulonglong)((uint)uVar5 & 0x84222305))
  ;
  _DAT_1833a39b8 = _DAT_1833a3aa8 ^ _DAT_1833a38b0 ^ 0x20;
  _DAT_1833a3728 = (_DAT_1833a3728 ^ _DAT_1833a38b0) + 0x20 ^ 0x27493420da4dd8ba;
  _DAT_1833a3720 = (_DAT_1833a3720 * 0x1a2cc50b2c964d63 ^ _DAT_1833a3728) + _DAT_1833a38b0;
  _DAT_1833a37f0 = _DAT_1833a3720 ^ _DAT_1833a3728;
  _DAT_1833a3a68 = 0x20;
  switch(uVar7 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e1b8b29 (image 18e1b8b29) =====

void FUN_18e1b8b29(void)

{
  return;
}



// ===== continuation @ rva e1b87dd (image 18e1b87dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1b87dd(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x78) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e1a442b (image 18e1a442b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a442b(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong unaff_R12;
  uint unaff_R13D;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  
  _DAT_1833a39d0 = func_0x00018e1ce110(_DAT_1833a3790 + 0x1eff7bb7001dffU ^ 0x8a);
  _DAT_1833a3a78 =
       (_DAT_1833a3a78 ^ _DAT_1833a39d0 & 0xffffffffc0000000) + 0xff ^ 0x473e8a656b463558;
  _DAT_1833a3a58 =
       (_DAT_1833a3a58 * -0x655c0b3014fb5959 ^ _DAT_1833a3a78) +
       (_DAT_1833a39d0 & 0xffffffffc0000000);
  _DAT_1833a3900 = _DAT_1833a3a58 ^ _DAT_1833a3a78;
  _DAT_1833a3870 = 0xff;
  _DAT_1833a3908 = func_0x00018e1ce110(_DAT_1833a38a8 ^ 0x22ff846bffe101);
  _DAT_1833a3af0 = _DAT_1833a39d0 * 0x7a9cfdd5a62778b7;
  _DAT_1833a39d0 = _DAT_1833a3af0 ^ _DAT_1833a39d0 + 0xd1 ^ 0xd5f0ba6c8ef20e8d;
  _DAT_1833a3830 = 0xd1;
  _DAT_1833a37a8 = func_0x00018e1ce110(_DAT_1833a3758 ^ 0xffe1008476ffe179);
  uVar1 = (_DAT_1833a37a8 ^ 0x4f47) * 0x48bc8f3b66f2f5d3;
  _DAT_1833a38b0 = _DAT_1833a38d0 ^ uVar1 ^ 0x130;
  _DAT_1833a3750 = (_DAT_1833a3750 ^ uVar1) + 0x130 ^ 0x2ec133b8533f4edf;
  _DAT_1833a3788 = (_DAT_1833a3788 * -0x2952c71331ff3785 ^ _DAT_1833a3750) + uVar1;
  _DAT_1833a3970 = _DAT_1833a3788 ^ _DAT_1833a3750;
  _DAT_1833a3810 = 0x30;
  uVar1 = (~_DAT_1833a3940 + 0x81) *
          ((_DAT_1833a3a98 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1833a3a98 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1833a3af0) + (uVar1 & _DAT_1833a3af0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a3970 = func_0x00018e1ce110((uVar1 | 0x842223a5) + (ulonglong)((uint)uVar1 & 0x842223a5))
  ;
  _DAT_1833a3760 = (_DAT_1833a3760 ^ _DAT_1833a3a68) - 0x80 ^ 0x8fd5e8001be99d87;
  _DAT_1833a37c8 = (_DAT_1833a37c8 * 0xb53861a7a80d7ef ^ _DAT_1833a3760) + _DAT_1833a3a68;
  _DAT_1833a3958 = _DAT_1833a37c8 ^ _DAT_1833a3760;
  _DAT_1833a39e0 = 0x80;
  _DAT_1833a3870 = func_0x00018e1ce110(_DAT_1833a3870 + 0x1cff836d0021ff ^ 0x98);
  uVar1 = _DAT_1833a3870 ^ 0x1800;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_1833a3848 = _DAT_1833a37a8 ^ uVar1 ^ 0xb0;
  _DAT_1833a3930 = (_DAT_1833a3930 ^ uVar1) + 0xb0 ^ 0xb43498f4bcc45e8e;
  _DAT_1833a3710 = (_DAT_1833a3710 * -0x76e12352ae4b02bf ^ _DAT_1833a3930) + uVar1;
  _DAT_1833a38e8 = _DAT_1833a3710 ^ _DAT_1833a3930;
  _DAT_1833a3a70 = 0xb0;
  _DAT_1833a3a78 = func_0x00018e1ce110(_DAT_1833a3918 + 0xffe0ff7b93001dffU ^ 0xb9);
  _DAT_1833a3aa8 = (_DAT_1833a3aa8 ^ _DAT_1833a3a78) - 0x98 ^ 0xd8ef3a6a253648ef;
  _DAT_1833a3a68 = (_DAT_1833a3a68 * -0x7db15f5585bf3f33 ^ _DAT_1833a3aa8) + _DAT_1833a3a78;
  _DAT_1833a38b0 = _DAT_1833a3a68 ^ _DAT_1833a3aa8;
  _DAT_1833a38d0 = 0x68;
  uVar1 = (_DAT_1833a37d0 ^ unaff_XMM6_Qa) + _DAT_1833a3898 + unaff_R12;
  uVar2 = (_DAT_1833a3898 ^ unaff_XMM6_Qb) + _DAT_1833a37d0 + 0x98;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a37d0 ^ unaff_XMM6_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a3898 ^ unaff_XMM6_Qb;
  uVar1 = func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a37d0 + 0x98) ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a3898 + unaff_R12));
  uVar1 = uVar1 ^ 0x30;
  _DAT_1833a3980 = _DAT_1833a39c0 ^ uVar1 ^ 200;
  _DAT_1833a39f0 = (_DAT_1833a39f0 ^ uVar1) + 200 ^ 0xcdf31aead4b0909a;
  _DAT_1833a38e8 = (_DAT_1833a38e8 * 0x1ef423cf37e4a0a1 ^ _DAT_1833a39f0) + uVar1;
  _DAT_1833a39b8 = _DAT_1833a38e8 ^ _DAT_1833a39f0;
  _DAT_1833a37e8 = 200;
  uVar1 = (_DAT_1833a3a50 ^ unaff_XMM7_Qa) + _DAT_1833a3848 + 0x842223ed;
  uVar2 = (_DAT_1833a3848 ^ unaff_XMM7_Qb) + _DAT_1833a3a50 + 0x68;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a3a50 ^ unaff_XMM7_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a3848 ^ unaff_XMM7_Qb;
  _DAT_1833a3760 =
       func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a3a50 + 0x68) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a3848 + 0x842223ed));
  uVar1 = _DAT_1833a3760 ^ 200;
  _DAT_1833a3a50 = _DAT_1833a39a0 ^ uVar1 ^ 0x130;
  _DAT_1833a3aa0 = (_DAT_1833a3aa0 ^ uVar1) + 0x130 ^ 0xb7917adadbdc361d;
  _DAT_1833a3860 = (_DAT_1833a3860 * -0xd5a10e9c0d74df5 ^ _DAT_1833a3aa0) + uVar1;
  _DAT_1833a37f8 = _DAT_1833a3860 ^ _DAT_1833a3aa0;
  _DAT_1833a3798 = 0x30;
  uVar1 = (_DAT_1833a3a18 ^ unaff_XMM8_Qa) + _DAT_1833a38b0 + 0x842223da;
  uVar2 = (_DAT_1833a38b0 ^ unaff_XMM8_Qb) + _DAT_1833a3a18 + 0xd1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a3a18 ^ unaff_XMM8_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a38b0 ^ unaff_XMM8_Qb;
  _DAT_1833a3840 =
       func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a3a18 + 0xd1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a38b0 + 0x842223da));
  uVar1 = (ulonglong)(~(uint)(_DAT_1833a3840 >> 0x1f) & 0xff);
  _DAT_1833a3a40 = (_DAT_1833a3a40 ^ uVar1) + 0x2e ^ 0x4ccae96d58fda542;
  _DAT_1833a3988 = (_DAT_1833a3988 * 0x39ecf78d0eea005d ^ _DAT_1833a3a40) + uVar1;
  _DAT_1833a38a8 = _DAT_1833a3988 ^ _DAT_1833a3a40;
  _DAT_1833a3728 = _DAT_1833a37e8 ^ 0x2e;
  _DAT_1833a3810 = 0x2e;
  uVar1 = (~_DAT_1833a3898 + 0xd2) *
          ((_DAT_1833a3af0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a3af0 & 0x842223da) * 2);
  uVar1 = (uVar1 | _DAT_1833a37c8) + (uVar1 & _DAT_1833a37c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a3a00 = func_0x00018e1ce110((uVar1 | 0x8422230b) + (ulonglong)((uint)uVar1 & 0x8422230b))
  ;
  _DAT_1833a37b8 = (_DAT_1833a37b8 ^ _DAT_1833a3a00 ^ 0xd1) + 0xd1 ^ 0x76415ce20cf2c830;
  _DAT_1833a37a8 = (_DAT_1833a37a8 * -0x19c3a5f97430cd8f ^ _DAT_1833a37b8) + (_DAT_1833a3a00 ^ 0xd1)
  ;
  _DAT_1833a3808 = _DAT_1833a37a8 ^ _DAT_1833a37b8;
  _DAT_1833a3a98 = 0xd1;
  uVar1 = (_DAT_1833a39f0 ^ unaff_XMM9_Qa) + _DAT_1833a39f8 + 0x8422230b;
  uVar2 = (_DAT_1833a39f8 ^ unaff_XMM9_Qb) + _DAT_1833a39f0 + 0xa2;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a39f0 ^ unaff_XMM9_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a39f8 ^ unaff_XMM9_Qb;
  _DAT_1833a3a18 =
       func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a39f0 + 0xa2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a39f8 + 0x8422230b));
  uVar1 = _DAT_1833a3a18 ^ 0xa2;
  _DAT_1833a3760 = _DAT_1833a3930 ^ uVar1 ^ 0xd0;
  _DAT_1833a3ae0 = (_DAT_1833a3ae0 ^ uVar1) + 0xd0 ^ 0x1b9e865d4a3f0beb;
  _DAT_1833a3738 = (_DAT_1833a3738 * 0x259cf4a3a28130cb ^ _DAT_1833a3ae0) + uVar1;
  _DAT_1833a3770 = _DAT_1833a3738 ^ _DAT_1833a3ae0;
  _DAT_1833a3948 = 0xd0;
  uVar1 = ((_DAT_1833a3988 ^ unaff_R12) + (ulonglong)((uint)_DAT_1833a3988 & 0x84222315) * 2) *
          -_DAT_1833a39a8;
  uVar1 = (uVar1 | _DAT_1833a3a40) + (uVar1 & _DAT_1833a3a40);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a3858 = func_0x00018e1ce110((uVar1 | unaff_R12) + (ulonglong)((uint)uVar1 & 0x84222315));
  _DAT_1833a37a8 = _DAT_1833a3898 ^ _DAT_1833a3858 ^ 0x30;
  _DAT_1833a37c8 = (_DAT_1833a37c8 ^ _DAT_1833a3858) + 0x30 ^ 0x45099974b72ee152;
  _DAT_1833a3928 = (_DAT_1833a3928 * 0x617b3a1441784d41 ^ _DAT_1833a37c8) + _DAT_1833a3858;
  _DAT_1833a3850 = _DAT_1833a3928 ^ _DAT_1833a37c8;
  _DAT_1833a3ae8 = 0x30;
  _DAT_1833a3870 = func_0x00018e1ce110(_DAT_1833a3718 ^ 0x1f007be2ffdd28);
  _DAT_1833a3ae0 = _DAT_1833a3ae0 ^ _DAT_1833a3870 & 0xfffffffffffffff ^ 0x133cbc712361d782;
  _DAT_1833a3808 =
       (_DAT_1833a3808 * -0x332c9c1401572ab7 ^ _DAT_1833a3ae0) +
       (_DAT_1833a3870 & 0xfffffffffffffff);
  _DAT_1833a3810 = _DAT_1833a3808 ^ _DAT_1833a3ae0;
  _DAT_1833a3998 = 0;
  uVar1 = ((_DAT_1833a3768 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a3768 & 0x842223da) * 2) *
          -_DAT_1833a38f0;
  uVar1 = (uVar1 | _DAT_1833a38a8) + (uVar1 & _DAT_1833a38a8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a3708 = func_0x00018e1ce110((uVar1 | 0x842223da) + (ulonglong)((uint)uVar1 & 0x842223da))
  ;
  uVar1 = (_DAT_1833a3708 ^ 0xff) << 0x39 | (_DAT_1833a3708 ^ 0xff) >> 7;
  _DAT_1833a3730 = _DAT_1833a3730 ^ uVar1 ^ 0x10db596063d1c05;
  _DAT_1833a38b8 = (_DAT_1833a38b8 * 0x21d5e3df84f6a96f ^ _DAT_1833a3730) + uVar1;
  _DAT_1833a3700 = _DAT_1833a38b8 ^ _DAT_1833a3730;
  _DAT_1833a3728 = 0;
  uVar1 = (_DAT_1833a3828 ^ unaff_R12) + _DAT_1833a3808 + unaff_R12;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a3828 ^ unaff_R12;
  uVar2 = ((_DAT_1833a3808 + _DAT_1833a3828) * 0x2000 | _DAT_1833a3808 + _DAT_1833a3828 >> 0x33) ^
          _DAT_1833a3808;
  _DAT_1833a37a8 =
       func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1833a3828 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a3808 + unaff_R12));
  uVar1 = _DAT_1833a37a8 ^ 0x30;
  _DAT_1833a3a00 = _DAT_1833a3908 ^ uVar1 ^ 0x30;
  _DAT_1833a3af0 = (_DAT_1833a3af0 ^ uVar1) + 0x30 ^ 0x31557626f718599b;
  _DAT_1833a3958 = (_DAT_1833a3958 * -0x13d38b450f1ce92f ^ _DAT_1833a3af0) + uVar1;
  _DAT_1833a3ae8 = _DAT_1833a3958 ^ _DAT_1833a3af0;
  _DAT_1833a3808 = _DAT_1833a37f0 ^ 0x30;
  _DAT_1833a3928 = 0x30;
  _DAT_1833a37c0 = func_0x00018e1ce110(_DAT_1833a39e0 ^ 0xffe0ff8423001d28);
  uVar1 = (_DAT_1833a37c0 << 9 | _DAT_1833a37c0 >> 0x37) * 0x2d3cad6255c6861b ^ 0xb;
  _DAT_1833a3710 = _DAT_1833a3710 ^ uVar1 ^ 0x5ec14cc7ea9b3276;
  _DAT_1833a3718 = (_DAT_1833a3718 * 0xe583e115f654439 ^ _DAT_1833a3710) + uVar1;
  _DAT_1833a3950 = _DAT_1833a3718 ^ _DAT_1833a3710;
  _DAT_1833a3978 = 0;
  uVar1 = (_DAT_1833a3840 ^ unaff_R12) + _DAT_1833a3a68 + unaff_R12;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a3840 ^ unaff_R12;
  uVar2 = ((_DAT_1833a3a68 + _DAT_1833a3840) * 0x2000 | _DAT_1833a3a68 + _DAT_1833a3840 >> 0x33) ^
          _DAT_1833a3a68;
  uVar1 = func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1833a3840 ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a3a68 + unaff_R12));
  uVar2 = (uVar1 & 0x7fffffffffffffff) >> 1 | uVar1 & 0x7fffffffffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ uVar1 & 0x7fffffffffffffff) * -0xf78964b44a3539f;
  _DAT_1833a3af8 = _DAT_1833a3880 ^ uVar2 ^ 0x30;
  _DAT_1833a39c0 = (uVar1 ^ uVar2) + 0x30 ^ 0xaf54515e62d7543c;
  _DAT_1833a3838 = (_DAT_1833a3838 * -0x14ef1fbfe10074b9 ^ _DAT_1833a39c0) + uVar2;
  _DAT_1833a38a8 = _DAT_1833a3838 ^ _DAT_1833a39c0;
  _DAT_1833a3a08 = 0x30;
  uVar1 = (ulonglong)param_1 & 0xff;
  uVar2 = (~_DAT_1833a3978 + 0x31) *
          ((uVar1 ^ 0x84222325 ^ _DAT_1833a3af8) +
          (ulonglong)((uint)_DAT_1833a3af8 & (uint)(uVar1 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_1833a3a58) + (uVar2 & _DAT_1833a3a58);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833a37c0 =
       func_0x00018e1ce110((uVar1 ^ unaff_R12 | uVar2) +
                           (ulonglong)((uint)(uVar1 ^ unaff_R12) & (uint)uVar2));
  _DAT_1833a3750 = uVar1 | 0x30;
  _DAT_1833a37d0 =
       (_DAT_1833a38c0 ^ _DAT_1833a37c0 & 0x7fffffffffffffff) + _DAT_1833a3750 ^ 0x5b6e0211cfad6d54;
  _DAT_1833a38c0 =
       (_DAT_1833a38c0 * 0x20f250fcf505255 ^ _DAT_1833a37d0) + (_DAT_1833a37c0 & 0x7fffffffffffffff)
  ;
  _DAT_1833a37d0 = _DAT_1833a38c0 ^ _DAT_1833a37d0;
  *(char *)(unaff_RBP + -0x51 + unaff_RBX) = (char)_DAT_1833a3750;
  switch(unaff_R13D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e1adffb (image 18e1adffb) =====

undefined8 FUN_18e1adffb(void)

{
  func_0x000180001044();
  return 0;
}



// ===== continuation @ rva e1aa400 (image 18e1aa400) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1aa400(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar12;
  undefined1 auVar11 [16];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  
  uVar7 = *(ulonglong *)(*(longlong *)(unaff_RBP + 0x60) + -8);
  _DAT_1833a37d0 = func_0x00018e1ce110(_DAT_1833a38e0 + 0x83707828afc845be ^ 0x22);
  uVar5 = (_DAT_1833a37d0 ^ 0xffef3503c1ecceea) << 0x15 |
          (_DAT_1833a37d0 ^ 0xffef3503c1ecceea) >> 0x2b;
  _DAT_1833a3820 = (_DAT_1833a3820 ^ uVar5) + 0x43af7dcfedffb3ff ^ 0xd05f68ceda89b7a0;
  _DAT_1833a3a50 = (_DAT_1833a3a50 * 0x4b2a7a794a5edb7 ^ _DAT_1833a3820) + uVar5;
  _DAT_1833a37b0 = _DAT_1833a3a50 ^ _DAT_1833a3820;
  _DAT_1833a3800 = 0x43af7dcfedffb3ff;
  uVar5 = (_DAT_1833a3880 ^ _DAT_1824a3280) + (_DAT_1833a38f0 - 0x84222323);
  uVar12 = (_DAT_1833a38f0 ^ _UNK_1824a3288) + _DAT_1833a3880 + 0x54643682d45c9b65;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a3880 ^ _DAT_1824a3280;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833a38f0 ^ _UNK_1824a3288;
  _DAT_1833a38b0 =
       func_0x00018e1ce110((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833a3880 + 0x54643682d45c9b65)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a38f0 - 0x84222323));
  uVar5 = _DAT_1833a38b0 ^ 0xfffffffffffffff8;
  _DAT_1833a37e8 = _DAT_1833a3810 ^ uVar5 ^ 0x54643682d45c9b5d;
  _DAT_1833a3a88 = (_DAT_1833a3a88 ^ uVar5) + 0x54643682d45c9b5d ^ 0xd3d8f63a93c6da74;
  _DAT_1833a3a80 = (_DAT_1833a3a80 * -0x658a591437ac2c11 ^ _DAT_1833a3a88) + uVar5;
  _DAT_1833a3890 = _DAT_1833a3a80 ^ _DAT_1833a3a88;
  _DAT_1833a3a78 = _DAT_1833a38c0 ^ 0x54643682d45c9b5d;
  _DAT_1833a38a8 = 0x54643682d45c9b5d;
  _DAT_1833a3a88 = func_0x00018e1ce110(_DAT_1833a38d8 + 0x20c3ef25de12d5c2 ^ 9);
  uVar5 = (_DAT_1833a3a88 ^ 0xab9bc97d2ba3649b) << 0x32 |
          (_DAT_1833a3a88 ^ 0xab9bc97d2ba3649b) >> 0xe;
  _DAT_1833a39c8 = _DAT_1833a3878 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a37f0 = (_DAT_1833a37f0 ^ uVar5) - 8 ^ 0xf1d272c98b08fa20;
  _DAT_1833a3a48 = (_DAT_1833a3a48 * 0x7327e3591c59b799 ^ _DAT_1833a37f0) + uVar5;
  _DAT_1833a3758 = _DAT_1833a3a48 ^ _DAT_1833a37f0;
  _DAT_1833a3a60 = 0xfffffffffffffff8;
  uVar5 = (_DAT_1833a3aa0 ^ _DAT_1824a3290) + _DAT_1833a3700 + 0x84222325;
  uVar12 = (_DAT_1833a3700 ^ _UNK_1824a3298) + _DAT_1833a3aa0 + 0xa8da507d637ad084;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a3aa0 ^ _DAT_1824a3290;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833a3700 ^ _UNK_1824a3298;
  _DAT_1833a3a18 =
       func_0x00018e1ce110((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833a3aa0 + 0xa8da507d637ad084)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3700 + 0x84222325));
  uVar5 = _DAT_1833a3a18 - (_DAT_1833a3a18 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  uVar12 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
           _DAT_1833a3a18;
  uVar5 = uVar12 & 0x7fffffffffffffff;
  uVar12 = (uVar12 & 0x7fffffffffffffff) >> 1 | uVar5;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & unaff_RBX) + (uVar12 >> 2 & unaff_RBX);
  uVar5 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar5;
  _DAT_1833a3aa0 = (_DAT_1833a3aa0 ^ uVar5) + 0x5725af829c852f7c ^ 0xb9319bc80837ac60;
  _DAT_1833a3a38 = (_DAT_1833a3a38 * 0x778c08d07263fbbb ^ _DAT_1833a3aa0) + uVar5;
  _DAT_1833a3928 = _DAT_1833a3a38 ^ _DAT_1833a3aa0;
  _DAT_1833a3968 = 0x5725af829c852f7c;
  _DAT_1833a3928 = func_0x00018e1ce110(_DAT_1833a39f0 + 0x820c1d07d69f5b32 ^ 0x67);
  _DAT_1833a3990 = _DAT_1833a37e0 ^ _DAT_1833a3928 ^ 0xa8da507d637ad07c;
  _DAT_1833a3828 = (_DAT_1833a3828 ^ _DAT_1833a3928) + 0xa8da507d637ad07c ^ 0xb4df10ecf666cbe9;
  _DAT_1833a37d8 = (_DAT_1833a37d8 * 0x437bf080f7713e5d ^ _DAT_1833a3828) + _DAT_1833a3928;
  _DAT_1833a3980 = _DAT_1833a37d8 ^ _DAT_1833a3828;
  _DAT_1833a3988 = 0xa8da507d637ad07c;
  uVar5 = (~_DAT_1833a3af0 + 0x5725af829c852f7d) *
          ((_DAT_1833a3820 ^ 0xa8da507de758f359) + (_DAT_1833a3820 & 0x28da507de758f359) * 2);
  uVar5 = (uVar5 | _DAT_1833a3990) + (uVar5 & _DAT_1833a3990);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3790 = func_0x00018e1ce110((uVar5 | 0xffffffff7bdddc25) + (uVar5 & 0xffffffff7bdddc25));
  uVar5 = ~(_DAT_1833a3790 << 0x1c | _DAT_1833a3790 >> 0x24) & 0xa8da507d637ad07c;
  _DAT_1833a3980 = _DAT_1833a3798 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a3720 = (_DAT_1833a3720 ^ uVar5) - 8 ^ 0x3df7a72d0202974b;
  _DAT_1833a3898 = (_DAT_1833a3898 * -0x72c30037e590ad8d ^ _DAT_1833a3720) + uVar5;
  _DAT_1833a3a68 = _DAT_1833a3898 ^ _DAT_1833a3720;
  _DAT_1833a37f8 = 0xfffffffffffffff8;
  uVar5 = (_DAT_1833a38d0 ^ _DAT_1824a32a0) + _DAT_1833a3a80 + 0x84222325;
  uVar12 = (_DAT_1833a3a80 ^ _UNK_1824a32a8) + _DAT_1833a38d0 + 0x260f1aa8b9cb7682;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a38d0 ^ _DAT_1824a32a0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833a3a80 ^ _UNK_1824a32a8;
  _DAT_1833a3ae8 =
       func_0x00018e1ce110((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833a38d0 + 0x260f1aa8b9cb7682)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3a80 + 0x84222325));
  _DAT_1833a3968 = (_DAT_1833a3968 ^ _DAT_1833a3ad8) + 0xd9f0e5574634897e ^ 0x9e08d2aaa53d7e4c;
  _DAT_1833a38c8 = (_DAT_1833a38c8 * 0x51c4b28a9238a4c3 ^ _DAT_1833a3968) + _DAT_1833a3ad8;
  _DAT_1833a3a00 = _DAT_1833a38c8 ^ _DAT_1833a3968;
  _DAT_1833a37f8 = 0xd9f0e5574634897e;
  uVar5 = (~_DAT_1833a3998 + 0x260f1aa8b9cb7683) *
          ((_DAT_1833a39e8 ^ 0xffffffff7bdddcdd) + (_DAT_1833a39e8 & 0x7fffffff7bdddcdd) * 2);
  uVar5 = (uVar5 | _DAT_1833a3af8) + (uVar5 & _DAT_1833a3af8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3a10 = func_0x00018e1ce110((uVar5 | 0xd9f0e557c216aa5f) + (uVar5 & 0xd9f0e557c216aa5f));
  uVar5 = _DAT_1833a3a10 & 0xffffffffff800000;
  _DAT_1833a37b8 = _DAT_1833a3938 ^ uVar5 ^ 0x260f1aa8b9cb767a;
  _DAT_1833a3aa8 = (_DAT_1833a3aa8 ^ uVar5) + 0x260f1aa8b9cb767a ^ 0xf5c06911590ec25;
  _DAT_1833a3980 = (_DAT_1833a3980 * 0x438c06bc64d039e9 ^ _DAT_1833a3aa8) + uVar5;
  _DAT_1833a3a68 = _DAT_1833a3980 ^ _DAT_1833a3aa8;
  _DAT_1833a3728 = 0x260f1aa8b9cb767a;
  _DAT_1833a3a78 = func_0x00018e1ce110(_DAT_1833a39f0 ^ 0xd5d444c4e0202b42);
  uVar5 = (_DAT_1833a3a78 ^ 0xd94835007898ec76) & 0x7fffffffffffffff;
  _DAT_1833a3a60 = _DAT_1833a39f0 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a3948 = (_DAT_1833a3948 ^ uVar5) - 8 ^ 0xc005acd05a85a0f4;
  _DAT_1833a38b8 = (_DAT_1833a38b8 * 0x73cd1a0b678073c1 ^ _DAT_1833a3948) + uVar5;
  _DAT_1833a3ad0 = _DAT_1833a38b8 ^ _DAT_1833a3948;
  _DAT_1833a39c8 = -8;
  uVar5 = (~_DAT_1833a38e0 + 0x75e3220e4143fbaf) *
          ((_DAT_1833a39b8 ^ 0x43af7dcf69dd90da) + (_DAT_1833a39b8 & 0x43af7dcf69dd90da) * 2);
  uVar5 = (uVar5 | _DAT_1833a3700) + (uVar5 & _DAT_1833a3700);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3a58 = func_0x00018e1ce110((uVar5 | 0x364c5fc1289e6b74) + (uVar5 & 0x364c5fc1289e6b74));
  uVar5 = _DAT_1833a3a58 & 0xffffffffc0000000;
  _DAT_1833a3780 = _DAT_1833a3a80 ^ uVar5 ^ 0xb9929fde2f43afad;
  _DAT_1833a3a48 = (_DAT_1833a3a48 ^ uVar5) + 0xb9929fde2f43afad ^ 0xc22662cce99eb3ab;
  _DAT_1833a3700 = (_DAT_1833a3700 * 0x5407742bd84c5ceb ^ _DAT_1833a3a48) + uVar5;
  _DAT_1833a3910 = _DAT_1833a3700 ^ _DAT_1833a3a48;
  _DAT_1833a3a38 = 0xb9929fde2f43afad;
  _DAT_1833a3a58 = func_0x00018e1ce110(_DAT_1833a3978 ^ 0xc098c418543572c3);
  _DAT_1833a3898 = (_DAT_1833a3898 ^ _DAT_1833a3a58) + 0x364c5fc1acbc4851 ^ 0x4ea02bdd0a0acb10;
  _DAT_1833a39b8 = (_DAT_1833a39b8 * 0x7e75f8814a9febb7 ^ _DAT_1833a3898) + _DAT_1833a3a58;
  _DAT_1833a37e0 = _DAT_1833a39b8 ^ _DAT_1833a3898;
  _DAT_1833a3a68 = 0x364c5fc1acbc4851;
  uVar5 = (~_DAT_1833a3a78 + 0x8346401c8287675d) *
          ((_DAT_1833a3ab0 ^ 0x364c5fc1289e6b74) + (_DAT_1833a3ab0 & 0x364c5fc1289e6b74) * 2);
  uVar5 = (uVar5 | _DAT_1833a3880) + (uVar5 & _DAT_1833a3880);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3790 = func_0x00018e1ce110((uVar5 | 0xb50a1fddaa190c28) + (uVar5 & 0xb50a1fddaa190c28));
  _DAT_1833a3a38 = _DAT_1833a39e8 ^ _DAT_1833a3790 ^ 0xb9929fde2f43afad;
  _DAT_1833a37b8 = (_DAT_1833a37b8 ^ _DAT_1833a3790) + 0xb9929fde2f43afad ^ 0x9aede1c5c9ed46c7;
  _DAT_1833a39c8 = (_DAT_1833a39c8 * -0x5d072865021f7d0f ^ _DAT_1833a37b8) + _DAT_1833a3790;
  _DAT_1833a3728 = _DAT_1833a39c8 ^ _DAT_1833a37b8;
  _DAT_1833a38e0 = 0xb9929fde2f43afad;
  uVar5 = func_0x00018e1ce110(_DAT_1833a3a58 + 0xffe300841b001dff ^ 0xed);
  _DAT_1833a3998 = uVar5 << 2 | uVar5 >> 0x3e;
  _DAT_1833a3760 = _DAT_1833a3760 ^ _DAT_1833a3998 ^ 0x24c647e244fc0999;
  _DAT_1833a3a28 = (_DAT_1833a3a28 * -0x109bf406646b6b05 ^ _DAT_1833a3760) + _DAT_1833a3998;
  _DAT_1833a38f0 = _DAT_1833a3a28 ^ _DAT_1833a3760;
  _DAT_1833a3a90 = _DAT_1833a39a0;
  _DAT_1833a37a0 = 0;
  uVar5 = (_DAT_1833a39a8 ^ 0xffffffff7bdddcdd) + (_DAT_1833a3820 - 0x84222323);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a39a8 ^ 0xffffffff7bdddcdd;
  uVar12 = ((_DAT_1833a3820 + _DAT_1833a39a8) * 0x2000 | _DAT_1833a3820 + _DAT_1833a39a8 >> 0x33) ^
           _DAT_1833a3820;
  _DAT_1833a3af0 =
       func_0x00018e1ce110((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_1833a39a8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3820 - 0x84222323));
  uVar5 = _DAT_1833a3af0 * -0x5912b2d80707fb63;
  _DAT_1833a3a20 = _DAT_1833a39e0 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a38e8 = (_DAT_1833a38e8 ^ uVar5) - 8 ^ 0x32f0406d2e8ca0ac;
  _DAT_1833a3758 = (_DAT_1833a3758 * 0x6e0703d2ba2f01f3 ^ _DAT_1833a38e8) + uVar5;
  _DAT_1833a3778 = _DAT_1833a3758 ^ _DAT_1833a38e8;
  _DAT_1833a3980 = 0xfffffffffffffff8;
  _DAT_1833a3ae0 = func_0x00018e1ce110(_DAT_1833a3940 ^ 0x2fa3506a257e1e72);
  uVar5 = (_DAT_1833a3ae0 & 0x7fffffffffffffff) * 0x291ebcbd6189a331;
  _DAT_1833a3780 = (_DAT_1833a3780 ^ uVar5) + 0xbc50823012004c00 ^ 0x227c7ea538b403f3;
  _DAT_1833a3808 = (_DAT_1833a3808 * -0x370fd2cd0e271d6f ^ _DAT_1833a3780) + uVar5;
  _DAT_1833a38b0 = _DAT_1833a3808 ^ _DAT_1833a3780;
  _DAT_1833a38a8 = 0xbc50823012004c00;
  _DAT_1833a3968 = func_0x00018e1ce110(_DAT_1833a3888 + 0xc14cb8c9498d3d12 ^ 0x46);
  _DAT_1833a37b0 = _DAT_1833a37b0 ^ _DAT_1833a3968 ^ 0xbc50823012004c00 ^ 0x224ce1c83b82778e;
  _DAT_1833a3958 =
       (_DAT_1833a3958 * 0x40f8ad1031501169 ^ _DAT_1833a37b0) +
       (_DAT_1833a3968 ^ 0xbc50823012004c00);
  _DAT_1833a3720 = _DAT_1833a3958 ^ _DAT_1833a37b0;
  _DAT_1833a3988 = 0;
  uVar5 = ((_DAT_1833a3878 ^ 0xffffffff7bdddcdd) + (_DAT_1833a3878 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_1833a39e0;
  uVar5 = (uVar5 | _DAT_1833a3810) + (uVar5 & _DAT_1833a3810);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3870 = func_0x00018e1ce110((uVar5 | 0xffffffff7bdddcdd) + (uVar5 & 0xffffffff7bdddcdd));
  uVar5 = ~_DAT_1833a3870 & 0xfffffffffffffff8;
  _DAT_1833a3748 = _DAT_1833a3af8 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a3848 = (_DAT_1833a3848 ^ uVar5) - 8 ^ 0xe09900cd456dba82;
  _DAT_1833a3a78 = (_DAT_1833a3a78 * 0x4bbf3f7fb7bcca19 ^ _DAT_1833a3848) + uVar5;
  _DAT_1833a3788 = _DAT_1833a3a78 ^ _DAT_1833a3848;
  _DAT_1833a3720 = -8;
  _DAT_1833a3ad0 = func_0x00018e1ce110(_DAT_1833a39c0 + 0x68ac3567440dacc6U ^ 6);
  uVar5 = _DAT_1833a3ad0 - (_DAT_1833a3ad0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1833a3ad0;
  _DAT_1833a3a78 = _DAT_1833a3898 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1833a3890 = (_DAT_1833a3890 ^ uVar5) - 8 ^ 0x31946fe07f8f8aaf;
  _DAT_1833a3a18 = (_DAT_1833a3a18 * -0x66dc4221b9b9b4a9 ^ _DAT_1833a3890) + uVar5;
  _DAT_1833a3af0 = _DAT_1833a3a18 ^ _DAT_1833a3890;
  _DAT_1833a3ab0 = 0xfffffffffffffff8;
  uVar5 = *(ulonglong *)(unaff_RBP + 0x60);
  uVar12 = (~_DAT_1833a3a58 - 7) *
           ((uVar5 ^ 0x84222325 ^ _DAT_1833a3758) + ((uVar5 ^ 0x84222325) & _DAT_1833a3758) * 2);
  uVar12 = (uVar12 | _DAT_1833a39a0) + (uVar12 & _DAT_1833a39a0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1833a3758 =
       func_0x00018e1ce110((uVar5 ^ 0xffffffff7bdddcdd | uVar12) +
                           (uVar12 & (uVar5 ^ 0xffffffff7bdddcdd)));
  uVar9 = (uint)(uVar5 >> 0x20);
  auVar14._8_4_ = (uint)uVar5;
  auVar14._0_8_ = uVar5;
  auVar14._12_4_ = uVar9;
  uVar10 = SUB164(auVar14 & _DAT_1800627b0,0);
  uVar12 = SUB168(auVar14 & _DAT_1800627b0,0);
  uVar18 = (uint)uVar5 | (uint)DAT_1800627b0;
  uVar15 = SUB164(auVar14 ^ _DAT_18001a710,0);
  uVar17 = SUB164(auVar14 ^ _DAT_1800627b0,0);
  uVar23 = ((ulonglong)_DAT_1824a32d0 * (ulonglong)uVar18 + _DAT_1824a3300 << 0x20) +
           (ulonglong)_DAT_1824a32e0 * (ulonglong)uVar18 +
           (ulonglong)uVar10 * (ulonglong)_DAT_1824a32e0 +
           ((uVar12 >> 0x20) * (ulonglong)_DAT_1824a32e0 +
            (ulonglong)uVar10 * (ulonglong)_DAT_1824a32d0 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_1824a32b0 +
           ((ulonglong)_DAT_1824a32c0 * (uVar5 & 0xffffffff) +
            (ulonglong)_DAT_1824a32b0 * (ulonglong)uVar9 << 0x20) +
           (ulonglong)uVar15 * (ulonglong)_DAT_1824a32f0 +
           ((ulonglong)_DAT_1824a3310 * (ulonglong)uVar15 +
            (SUB168(auVar14 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_1824a32f0 << 0x20) +
           (-((ulonglong)uVar17 * (_DAT_1824a3350 & 0xffffffff) +
              ((SUB168(auVar14 ^ _DAT_1800627b0,0) >> 0x20) * (_DAT_1824a3350 & 0xffffffff) +
               (ulonglong)_DAT_1824a3340 * (ulonglong)uVar17 << 0x20) +
             (ulonglong)uVar10 * (_DAT_1824a3350 & 0xffffffff) +
             ((uVar12 >> 0x20) * (_DAT_1824a3350 & 0xffffffff) +
              (ulonglong)uVar10 * (ulonglong)_DAT_1824a3340 << 0x20)) -
           (((ulonglong)uVar18 * (ulonglong)_DAT_1824a3370 + _DAT_1824a3380 << 0x20) +
           (ulonglong)_DAT_1824a3360 * (ulonglong)uVar18)) + _DAT_1824a3390;
  _DAT_1833a3980 = _DAT_1833a38e0 ^ _DAT_1833a3758 ^ uVar23;
  _DAT_1833a3810 = (_DAT_1833a3af8 ^ _DAT_1833a3758) + uVar23 ^ 0x60a01dbba6de77b9;
  _DAT_1833a3af8 = (_DAT_1833a3af8 * 0x759b4c3f38843c7b ^ _DAT_1833a3810) + _DAT_1833a3758;
  _DAT_1833a3810 = _DAT_1833a3af8 ^ _DAT_1833a3810;
  uVar12 = uVar23 ^ 0x84222325;
  uVar5 = ((_DAT_1833a3798 ^ uVar12) + (uVar12 & _DAT_1833a3798) * 2) * (uVar7 - uVar23);
  uVar5 = (uVar5 | _DAT_1833a3888) + (uVar5 & _DAT_1833a3888);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833a3710 = uVar23;
  _DAT_1833a38a0 = func_0x00018e1ce110((uVar12 ^ uVar7 | uVar5) + (uVar5 & (uVar12 ^ uVar7)));
  uVar24 = (uint)(uVar23 >> 0x20);
  auVar16._8_4_ = (int)uVar23;
  auVar16._0_8_ = uVar23;
  auVar16._12_4_ = uVar24;
  *(ulonglong *)(unaff_RBP + 0x38) = uVar7;
  uVar10 = (uint)(uVar7 >> 0x20);
  auVar11._8_4_ = (int)uVar7;
  auVar11._0_8_ = uVar7;
  auVar11._12_4_ = uVar10;
  uVar8 = (ulonglong)_DAT_1824a33b0;
  uVar5 = (ulonglong)_DAT_1824a33b0;
  auVar14 = auVar16 & auVar11;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = auVar16 ^ _DAT_18001a710;
  uVar18 = _DAT_1824a33f0;
  uVar17 = _DAT_1824a33e0;
  uVar15 = _DAT_1824a33c0;
  uVar9 = _DAT_1824a33a0;
  uVar12 = (ulonglong)_DAT_1824a33d0;
  uVar13 = (ulonglong)_DAT_1824a33a0;
  uVar1 = (ulonglong)_DAT_1824a33c0;
  uVar2 = (ulonglong)_DAT_1824a33d0;
  uVar27 = auVar14._0_4_;
  uVar3 = (ulonglong)_DAT_1824a33e0;
  *(ulonglong *)(unaff_RBP + 0x20) = auVar14._0_8_ >> 0x20;
  *(ulonglong *)(unaff_RBP + 0x28) = auVar14._8_8_ >> 0x20;
  uVar21 = SUB164(auVar16 | auVar11,0);
  uVar22 = SUB164(auVar16 ^ auVar11,0);
  uVar26 = SUB168(auVar16 ^ auVar11,0);
  uVar4 = *(ulonglong *)(unaff_RBP + 0x60);
  auVar20._8_4_ = 0xffffffff;
  auVar20._0_8_ = 0xffffffffffffffff;
  auVar20._12_4_ = 0xffffffff;
  uVar19 = SUB164(auVar20 ^ auVar11,0);
  uVar25 = SUB168(auVar20 ^ auVar11,0);
  uVar6 = _DAT_1833a38a0 * 0x2cb9aaa05f407239;
  uVar6 = (uVar6 << 0x2a | uVar6 >> 0x16) >> 3 | (uVar6 >> 0x16) << 0x3d;
  uVar8 = (((ulonglong)_DAT_1824a3430 * (ulonglong)uVar19 +
            ((uVar25 >> 0x20) * (ulonglong)_DAT_1824a3430 + (ulonglong)uVar15 * (ulonglong)uVar19 <<
            0x20) + (ulonglong)_DAT_1824a3420 * (uVar4 & 0xffffffff) +
                    ((uVar4 >> 0x20) * (ulonglong)_DAT_1824a3420 +
                     (ulonglong)uVar9 * (uVar4 & 0xffffffff) << 0x20) +
                    (ulonglong)uVar18 * (ulonglong)uVar22 +
                    ((uVar26 >> 0x20) * (ulonglong)uVar18 + (ulonglong)uVar17 * (ulonglong)uVar22 <<
                    0x20) + (ulonglong)uVar27 * (ulonglong)uVar18 +
                            ((auVar14._0_8_ >> 0x20) * (ulonglong)uVar18 + uVar27 * uVar3 << 0x20) +
                            uVar12 * (uVar7 & 0xffffffff) +
                            (uVar10 * uVar2 + (uVar7 & 0xffffffff) * uVar1 << 0x20) +
                            uVar5 * (uVar23 & 0xffffffff) +
                            (uVar24 * uVar8 + (uVar23 & 0xffffffff) * uVar13 << 0x20) +
           (ulonglong)uVar21 * (ulonglong)_DAT_1824a3400 +
           ((ulonglong)_DAT_1824a3410 * (ulonglong)uVar21 +
            (SUB168(auVar16 | auVar11,0) >> 0x20) * (ulonglong)_DAT_1824a3400 << 0x20)) -
          ((ulonglong)uVar19 * (_DAT_1824a3500 & 0xffffffff) +
           ((ulonglong)_DAT_1824a3510 * (ulonglong)uVar19 +
            (uVar25 >> 0x20) * (_DAT_1824a3500 & 0xffffffff) << 0x20) +
          (ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_1824a34e0 +
          ((ulonglong)_DAT_1824a34f0 * (ulonglong)*(uint *)(unaff_RBP + 0x60) +
           (uVar4 >> 0x20) * (ulonglong)_DAT_1824a34e0 << 0x20) +
          (ulonglong)uVar22 * (ulonglong)_DAT_1824a34c0 +
          ((ulonglong)_DAT_1824a34d0 * (ulonglong)uVar22 +
           (uVar26 >> 0x20) * (ulonglong)_DAT_1824a34c0 << 0x20) +
          (ulonglong)uVar27 * (ulonglong)_DAT_1824a34a0 +
          ((ulonglong)_DAT_1824a34b0 * (ulonglong)uVar27 +
           (ulonglong)*(uint *)(unaff_RBP + 0x20) * (ulonglong)_DAT_1824a34a0 << 0x20) +
          ((uVar7 & 0xffffffff) * (ulonglong)_DAT_1824a3490 +
           (ulonglong)uVar10 * (ulonglong)_DAT_1824a3480 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_1824a3480 +
          (uVar23 & 0xffffffff) * (ulonglong)_DAT_1824a3460 +
          ((ulonglong)_DAT_1824a3470 * (uVar23 & 0xffffffff) +
           (ulonglong)uVar24 * (ulonglong)_DAT_1824a3460 << 0x20))) + 0xceb755a3a11e05c6;
  _DAT_1833a3a58 = uVar8 ^ uVar6;
  _DAT_1833a3758 = (_DAT_1833a3758 ^ uVar6) + uVar8 ^ 0x6194cc1dd1ea5450;
  _DAT_1833a3968 = (_DAT_1833a3968 * 0x53f924260110e9f7 ^ _DAT_1833a3758) + uVar6;
  _DAT_1833a39c8 = _DAT_1833a3968 ^ _DAT_1833a3758;
  uVar7 = (~_DAT_1833a3af0 + 0x84a0f9357b9f180f) *
          ((_DAT_1833a3a50 ^ 0x87d3e4b80190a649) + (_DAT_1833a3a50 & 0x7d3e4b80190a649) * 2);
  uVar7 = (uVar7 | _DAT_1833a3a00) + (uVar7 & _DAT_1833a3a00);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3900 = uVar8;
  uVar7 = func_0x00018e1ce110((uVar7 | 0x3731d8d7a0fbe47) + (uVar7 & 0x3731d8d7a0fbe47));
  _DAT_1833a3800 =
       (_DAT_1833a3800 ^ uVar7 & 0x87d3e4b885b2856c) + 0x3731d8dfe2d9d62 ^ 0xc6bd585d24dcac0;
  _DAT_1833a37a0 =
       (_DAT_1833a37a0 * 0x243fee3f4a4b48e9 ^ _DAT_1833a3800) + (uVar7 & 0x87d3e4b885b2856c);
  _DAT_1833a3750 = _DAT_1833a37a0 ^ _DAT_1833a3800;
  _DAT_1833a39b0 = 0x3731d8dfe2d9d62;
  _DAT_1833a3948 = func_0x00018e1ce110(_DAT_1833a3890 + 0x2fe375e9dab6fbf7 ^ 0x5e);
  uVar7 = _DAT_1833a3948 >> 1 | _DAT_1833a3948;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_RBX) + (uVar7 >> 2 & unaff_RBX);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1833a3948;
  _DAT_1833a37f0 = (_DAT_1833a37f0 ^ uVar7) + 0xf76506cf11c1c000 ^ 0xc73aa4800afb7ef9;
  _DAT_1833a38e0 = (_DAT_1833a38e0 * -0x71c8de19cce16cb ^ _DAT_1833a37f0) + uVar7;
  _DAT_1833a3a50 = _DAT_1833a38e0 ^ _DAT_1833a37f0;
  _DAT_1833a3728 = -0x89af930ee3e4000;
  _DAT_1833a3920 = func_0x00018e1ce110(_DAT_1833a3978 ^ 0x9fa062f8fdb7439f);
  uVar7 = _DAT_1833a3920 - (_DAT_1833a3920 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_RBX) + (uVar7 >> 2 & unaff_RBX);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_1833a3920;
  _DAT_1833a3708 = _DAT_1833a3998 ^ uVar7 ^ 0x20;
  _DAT_1833a3770 = (_DAT_1833a3770 ^ uVar7) + 0x20 ^ 0x334b660d2dfbb61;
  _DAT_1833a39b8 = (_DAT_1833a39b8 * 0x21184b14ac8fb6af ^ _DAT_1833a3770) + uVar7;
  _DAT_1833a3960 = _DAT_1833a39b8 ^ _DAT_1833a3770;
  _DAT_1833a3808 = 0x20;
  uVar7 = (~_DAT_1833a38e8 + 0xe18ee4e0dc3f8981) *
          ((_DAT_1833a3740 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833a3740 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_1833a38c8) + (uVar7 & _DAT_1833a38c8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3878 = func_0x00018e1ce110((uVar7 | 0xe18ee4e0581daaa5) + (uVar7 & 0xe18ee4e0581daaa5));
  _DAT_1833a3800 = (_DAT_1833a3800 ^ _DAT_1833a3878) + 0x1e711b1f23c07680 ^ 0xc159d2188b997d65;
  _DAT_1833a3ad0 = (_DAT_1833a3ad0 * 0xd130633dabb1c65 ^ _DAT_1833a3800) + _DAT_1833a3878;
  _DAT_1833a3a90 = _DAT_1833a3ad0 ^ _DAT_1833a3800;
  _DAT_1833a3a40 = 0x1e711b1f23c07680;
  uVar7 = (~_DAT_1833a38c0 + 0xe18ee4e0dc3f8981) *
          ((_DAT_1833a3a20 ^ 0x84222305) + (ulonglong)((uint)_DAT_1833a3a20 & 0x84222305) * 2);
  uVar7 = (uVar7 | _DAT_1833a3808) + (uVar7 & _DAT_1833a3808);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3a40 = func_0x00018e1ce110((uVar7 | 0xe18ee4e0581daa85) + (uVar7 & 0xe18ee4e0581daa85));
  uVar7 = _DAT_1833a3a40 & 0xffffffffc0000000;
  _DAT_1833a37b0 = _DAT_1833a3768 ^ uVar7 ^ 0xe18ee4e0dc3f89a0;
  _DAT_1833a3aa0 = (_DAT_1833a3aa0 ^ uVar7) + 0xe18ee4e0dc3f89a0 ^ 0x152547465cdb53af;
  _DAT_1833a3940 = (_DAT_1833a3940 * -0x5c1ab2705e85a407 ^ _DAT_1833a3aa0) + uVar7;
  _DAT_1833a3a78 = _DAT_1833a3940 ^ _DAT_1833a3aa0;
  _DAT_1833a3ac8 = 0xe18ee4e0dc3f89a0;
  _DAT_1833a38b0 = func_0x00018e1ce110(_DAT_1833a39d8 ^ 0xcec32a97052b54e7);
  _DAT_1833a3a30 = _DAT_1833a38d8 ^ _DAT_1833a38b0 ^ 0x20;
  _DAT_1833a38d8 = (_DAT_1833a38d8 ^ _DAT_1833a38b0) + 0x20 ^ 0x3189c01998510187;
  _DAT_1833a38f0 = (_DAT_1833a38f0 * 0x5ee01e8e66bb4105 ^ _DAT_1833a38d8) + _DAT_1833a38b0;
  _DAT_1833a3748 = _DAT_1833a38f0 ^ _DAT_1833a38d8;
  _DAT_1833a39d8 = 0x20;
  uVar7 = (~_DAT_1833a3ab0 + 0x60bb1938a75f9a01) *
          ((_DAT_1833a3a88 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833a3a88 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_1833a3aa0) + (uVar7 & _DAT_1833a3aa0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a3ae8 = func_0x00018e1ce110((uVar7 | 0x60bb1938237db925) + (uVar7 & 0x60bb1938237db925));
  _DAT_1833a37c8 = _DAT_1833a37c8 + 0x9f44e6c758a06600 ^ 0x5a1187b40cc6955e;
  _DAT_1833a3908 = _DAT_1833a3a58 * 0x6959fa2894cd58af;
  _DAT_1833a3a58 = _DAT_1833a3908 ^ _DAT_1833a37c8;
  _DAT_1833a37f0 = 0x9f44e6c758a06600;
  uVar7 = (_DAT_1833a38c8 ^ _DAT_1824a3520) + _DAT_1833a3768 + 0x60bb1938237db905;
  uVar5 = (_DAT_1833a3768 ^ _UNK_1824a3528) + _DAT_1833a38c8 + 0x9f44e6c758a06600;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a38c8 ^ _DAT_1824a3520;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a3768 ^ _UNK_1824a3528;
  _DAT_1833a3968 =
       func_0x00018e1ce110((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a38c8 + 0x9f44e6c758a06600) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3768 + 0x60bb1938237db905));
  uVar5 = _UNK_1824a3538;
  uVar7 = _DAT_1824a3530;
  uVar12 = ((_DAT_1833a3968 ^ 0x81479a0060280000) << 0x20 |
           (_DAT_1833a3968 ^ 0x81479a0060280000) >> 0x20) & 0x60bb1938a75f9a20;
  _DAT_1833a38d0 = _DAT_1833a3848 ^ uVar12 ^ 0x20;
  _DAT_1833a3818 = (_DAT_1833a3818 ^ uVar12) + 0x20 ^ 0x561066b67f024231;
  _DAT_1833a3728 = (_DAT_1833a3728 * 0x5afd965f74cbc713 ^ _DAT_1833a3818) + uVar12;
  _DAT_1833a3a60 = _DAT_1833a3728 ^ _DAT_1833a3818;
  _DAT_1833a3788 = 0x20;
  uVar12 = (_DAT_1833a3898 ^ _DAT_1824a3530) + _DAT_1833a3ad0 + 0xbff3fd4553d9edc7;
  uVar13 = (_DAT_1833a3ad0 ^ _UNK_1824a3538) + _DAT_1833a3898 + 0x3731d8dfe2d9d62;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833a3898 ^ _DAT_1824a3530;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1833a3ad0 ^ _UNK_1824a3538;
  uVar12 = func_0x00018e1ce110((uVar13 << 0x1d | uVar13 >> 0x23) -
                               (_DAT_1833a3898 + 0x3731d8dfe2d9d62) ^
                               (uVar12 << 0x1d | uVar12 >> 0x23) -
                               (_DAT_1833a3ad0 + 0xbff3fd4553d9edc7));
  uVar12 = (uVar12 ^ 0xbff3fdcdffffdfe2) << 0x2e | (uVar12 ^ 0xbff3fdcdffffdfe2) >> 0x12;
  _DAT_1833a3920 = _DAT_1833a3970 ^ uVar12 ^ 0xc3671ad3d6296c44;
  _DAT_1833a3968 = (_DAT_1833a3968 ^ uVar12) + 0xc3671ad3d6296c44 ^ 0x2d1018065981286c;
  _DAT_1833a3978 = (_DAT_1833a3978 * -0x27b15a03eab774cb ^ _DAT_1833a3968) + uVar12;
  _DAT_1833a3758 = _DAT_1833a3978 ^ _DAT_1833a3968;
  _DAT_1833a37a0 = _DAT_1833a39e0 ^ 0xc3671ad3d6296c44;
  _DAT_1833a38b8 = 0xc3671ad3d6296c44;
  _DAT_1833a3770 = func_0x00018e1ce110(_DAT_1833a3a10 + 0x48707f5b9a1fb493);
  _DAT_1833a3ab8 =
       (_DAT_1833a3ab8 ^ _DAT_1833a3770 & 0x7fffffffffffffff) + 0xbc80e0c829d65380 ^
       0x207831077c60e1a;
  _DAT_1833a38f8 =
       (_DAT_1833a38f8 * 0x40cff0ff90d83be5 ^ _DAT_1833a3ab8) +
       (_DAT_1833a3770 & 0x7fffffffffffffff);
  _DAT_1833a3998 = _DAT_1833a38f8 ^ _DAT_1833a3ab8;
  _DAT_1833a3840 = 0xbc80e0c829d65380;
  uVar12 = (_DAT_1833a3948 ^ uVar7) + _DAT_1833a39d0 + 0xbff3fd4553d9edc7;
  uVar13 = (_DAT_1833a39d0 ^ uVar5) + _DAT_1833a3948 + 0x3731d8dfe2d9d62;
  uVar7 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833a3948 ^ uVar7;
  uVar5 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1833a39d0 ^ uVar5;
  _DAT_1833a3908 =
       func_0x00018e1ce110((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3948 + 0x3731d8dfe2d9d62) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a39d0 + 0xbff3fd4553d9edc7));
  _DAT_1833a3788 = (_DAT_1833a3788 ^ _DAT_1833a38d0) + 0x3731d05d6298c62 ^ 0xb853e42e7c9b92ee;
  _DAT_1833a3768 = (_DAT_1833a3768 * 0x7790e4102aa8c3c3 ^ _DAT_1833a3788) + _DAT_1833a38d0;
  _DAT_1833a39f0 = _DAT_1833a3768 ^ _DAT_1833a3788;
  _DAT_1833a3a20 = 0x3731d05d6298c62;
  uVar7 = (~_DAT_1833a3a68 + 0x6e63a0bac5318c5) *
          ((_DAT_1833a3878 ^ 0xbc80e0c8adf470a5) + (_DAT_1833a3878 & 0x3c80e0c8adf470a5) * 2);
  uVar7 = (uVar7 | _DAT_1833a3788) + (uVar7 & _DAT_1833a3788);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a39b8 = func_0x00018e1ce110((uVar7 | 0xba66dac301a76861) + (uVar7 & 0xba66dac301a76861));
  uVar7 = (_DAT_1833a39b8 & 0xffffffff) * (_DAT_1824a3540 & 0xffffffff) +
          ((ulonglong)_DAT_1824a3550 * (_DAT_1833a39b8 & 0xffffffff) +
           (_DAT_1833a39b8 >> 0x20) * (_DAT_1824a3540 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  _DAT_1833a3770 = _DAT_1833a3778 ^ uVar7 ^ 0xc3671ad3d6296c44;
  _DAT_1833a3aa0 = (_DAT_1833a3aa0 ^ uVar7) + 0xc3671ad3d6296c44 ^ 0xb501035d0f26036c;
  _DAT_1833a3778 = (_DAT_1833a3778 * -0x548836d6c5ddfafd ^ _DAT_1833a3aa0) + uVar7;
  _DAT_1833a3820 = _DAT_1833a3778 ^ _DAT_1833a3aa0;
  _DAT_1833a3760 = 0xc3671ad3d6296c44;
  uVar7 = (~_DAT_1833a3978 + 0xc3671ad3d6296c45) *
          ((_DAT_1833a3798 ^ 0xc3671ad3520b4f61) + (_DAT_1833a3798 & 0x43671ad3520b4f61) * 2);
  uVar7 = (uVar7 | _DAT_1833a39f0) + (uVar7 & _DAT_1833a39f0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a37f0 = func_0x00018e1ce110((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  uVar7 = _DAT_1833a37f0 >> 1 | _DAT_1833a37f0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_RBX) + (uVar7 >> 2 & unaff_RBX);
  _DAT_1833a38a0 =
       (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
       _DAT_1833a37f0;
  _DAT_1833a3a30 = _DAT_1833a3a30 ^ _DAT_1833a38a0 ^ 0x3fcac6b0ced6602c;
  _DAT_1833a3848 = (_DAT_1833a3848 * 0x44bcfa6c89d8040f ^ _DAT_1833a3a30) + _DAT_1833a38a0;
  _DAT_1833a3978 = _DAT_1833a3848 ^ _DAT_1833a3a30;
  _DAT_1833a3758 = 0;
  uVar7 = (_DAT_1833a3750 ^ _DAT_1824a3560) + _DAT_1833a3968 + 0xbff3fd4553d9edc7;
  uVar5 = (_DAT_1833a3968 ^ _UNK_1824a3568) + _DAT_1833a3750 + 0x400c02ba2804311d;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3750 ^ _DAT_1824a3560;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833a3968 ^ _UNK_1824a3568;
  _DAT_1833a3890 =
       func_0x00018e1ce110((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833a3750 + 0x400c02ba2804311d) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3968 + 0xbff3fd4553d9edc7));
  _DAT_1833a3968 = _DAT_1833a3968 ^ _DAT_1833a3890 ^ 0x4dc6030ad523dc55;
  _DAT_1833a3978 = (_DAT_1833a3978 * 0x5265dcfb21b6e3ff ^ _DAT_1833a3968) + _DAT_1833a3890;
  _DAT_1833a39b0 = _DAT_1833a3978 ^ _DAT_1833a3968;
  _DAT_1833a3af8 = 0;
  uVar7 = (~_DAT_1833a3770 + 0x2cf35c45d7bace61) *
          ((_DAT_1833a3890 ^ 0x2cf35c455398ed45) + (_DAT_1833a3890 & 0x2cf35c455398ed45) * 2);
  uVar7 = (uVar7 | _DAT_1833a3840) + (uVar7 & _DAT_1833a3840);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a38c8 = func_0x00018e1ce110((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_1833a3758 = _DAT_1833a3758 ^ _DAT_1833a38c8 ^ 0xeb67ef4752309aa4;
  _DAT_1833a3738 = (_DAT_1833a3738 * -0x4c4534ba72cbfeaf ^ _DAT_1833a3758) + _DAT_1833a38c8;
  _DAT_1833a38d8 = _DAT_1833a3738 ^ _DAT_1833a3758;
  _DAT_1833a3a28 = 0;
  uVar7 = ((_DAT_1833a3a08 ^ 0x84222305) + (ulonglong)((uint)_DAT_1833a3a08 & 0x84222305) * 2) *
          -_DAT_1833a39e0;
  uVar7 = (uVar7 | _DAT_1833a39d0) + (uVar7 & _DAT_1833a39d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833a38b0 = func_0x00018e1ce110((uVar7 | 0x84222305) + (ulonglong)((uint)uVar7 & 0x84222305))
  ;
  _DAT_1833a39b8 = _DAT_1833a3aa8 ^ _DAT_1833a38b0 ^ 0x20;
  _DAT_1833a3728 = (_DAT_1833a3728 ^ _DAT_1833a38b0) + 0x20 ^ 0x27493420da4dd8ba;
  _DAT_1833a3720 = (_DAT_1833a3720 * 0x1a2cc50b2c964d63 ^ _DAT_1833a3728) + _DAT_1833a38b0;
  _DAT_1833a37f0 = _DAT_1833a3720 ^ _DAT_1833a3728;
  _DAT_1833a3a68 = 0x20;
  switch(uVar8 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e1b4c2f (image 18e1b4c2f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1b4c2f(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
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



// ===== continuation @ rva e1b8aa8 (image 18e1b8aa8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1b8aa8(void)

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



// ===== continuation @ rva e1a4410 (image 18e1a4410) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a4410(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong in_R9;
  ulonglong unaff_R12;
  uint unaff_R13D;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  
  *(uint *)(unaff_RBP + 0x60) = unaff_R13D;
  _DAT_1833a39d0 = func_0x00018e1ce110(_DAT_1833a3790 + 0x1eff7bb7001dffU ^ 0x8a);
  _DAT_1833a3a78 =
       (_DAT_1833a3a78 ^ _DAT_1833a39d0 & 0xffffffffc0000000) + 0xff ^ 0x473e8a656b463558;
  _DAT_1833a3a58 =
       (_DAT_1833a3a58 * -0x655c0b3014fb5959 ^ _DAT_1833a3a78) +
       (_DAT_1833a39d0 & 0xffffffffc0000000);
  _DAT_1833a3900 = _DAT_1833a3a58 ^ _DAT_1833a3a78;
  _DAT_1833a3870 = 0xff;
  _DAT_1833a3908 = func_0x00018e1ce110(_DAT_1833a38a8 ^ 0x22ff846bffe101);
  _DAT_1833a3af0 = _DAT_1833a39d0 * 0x7a9cfdd5a62778b7;
  _DAT_1833a39d0 = _DAT_1833a3af0 ^ _DAT_1833a39d0 + 0xd1 ^ 0xd5f0ba6c8ef20e8d;
  _DAT_1833a3830 = 0xd1;
  _DAT_1833a37a8 = func_0x00018e1ce110(_DAT_1833a3758 ^ 0xffe1008476ffe179);
  uVar1 = (_DAT_1833a37a8 ^ 0x4f47) * 0x48bc8f3b66f2f5d3;
  _DAT_1833a38b0 = _DAT_1833a38d0 ^ uVar1 ^ 0x130;
  _DAT_1833a3750 = (_DAT_1833a3750 ^ uVar1) + 0x130 ^ 0x2ec133b8533f4edf;
  _DAT_1833a3788 = (_DAT_1833a3788 * -0x2952c71331ff3785 ^ _DAT_1833a3750) + uVar1;
  _DAT_1833a3970 = _DAT_1833a3788 ^ _DAT_1833a3750;
  _DAT_1833a3810 = 0x30;
  uVar1 = (~_DAT_1833a3940 + 0x81) *
          ((_DAT_1833a3a98 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1833a3a98 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1833a3af0) + (uVar1 & _DAT_1833a3af0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a3970 = func_0x00018e1ce110((uVar1 | 0x842223a5) + (ulonglong)((uint)uVar1 & 0x842223a5))
  ;
  _DAT_1833a3760 = (_DAT_1833a3760 ^ _DAT_1833a3a68) - 0x80 ^ 0x8fd5e8001be99d87;
  _DAT_1833a37c8 = (_DAT_1833a37c8 * 0xb53861a7a80d7ef ^ _DAT_1833a3760) + _DAT_1833a3a68;
  _DAT_1833a3958 = _DAT_1833a37c8 ^ _DAT_1833a3760;
  _DAT_1833a39e0 = 0x80;
  _DAT_1833a3870 = func_0x00018e1ce110(_DAT_1833a3870 + 0x1cff836d0021ff ^ 0x98);
  uVar1 = _DAT_1833a3870 ^ 0x1800;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_1833a3848 = _DAT_1833a37a8 ^ uVar1 ^ 0xb0;
  _DAT_1833a3930 = (_DAT_1833a3930 ^ uVar1) + 0xb0 ^ 0xb43498f4bcc45e8e;
  _DAT_1833a3710 = (_DAT_1833a3710 * -0x76e12352ae4b02bf ^ _DAT_1833a3930) + uVar1;
  _DAT_1833a38e8 = _DAT_1833a3710 ^ _DAT_1833a3930;
  _DAT_1833a3a70 = 0xb0;
  _DAT_1833a3a78 = func_0x00018e1ce110(_DAT_1833a3918 + 0xffe0ff7b93001dffU ^ 0xb9);
  _DAT_1833a3aa8 = (_DAT_1833a3aa8 ^ _DAT_1833a3a78) - 0x98 ^ 0xd8ef3a6a253648ef;
  _DAT_1833a3a68 = (_DAT_1833a3a68 * -0x7db15f5585bf3f33 ^ _DAT_1833a3aa8) + _DAT_1833a3a78;
  _DAT_1833a38b0 = _DAT_1833a3a68 ^ _DAT_1833a3aa8;
  _DAT_1833a38d0 = 0x68;
  uVar1 = (_DAT_1833a37d0 ^ unaff_XMM6_Qa) + _DAT_1833a3898 + unaff_R12;
  uVar2 = (_DAT_1833a3898 ^ unaff_XMM6_Qb) + _DAT_1833a37d0 + 0x98;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a37d0 ^ unaff_XMM6_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a3898 ^ unaff_XMM6_Qb;
  uVar1 = func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a37d0 + 0x98) ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a3898 + unaff_R12));
  uVar1 = uVar1 ^ 0x30;
  _DAT_1833a3980 = _DAT_1833a39c0 ^ uVar1 ^ 200;
  _DAT_1833a39f0 = (_DAT_1833a39f0 ^ uVar1) + 200 ^ 0xcdf31aead4b0909a;
  _DAT_1833a38e8 = (_DAT_1833a38e8 * 0x1ef423cf37e4a0a1 ^ _DAT_1833a39f0) + uVar1;
  _DAT_1833a39b8 = _DAT_1833a38e8 ^ _DAT_1833a39f0;
  _DAT_1833a37e8 = 200;
  uVar1 = (_DAT_1833a3a50 ^ unaff_XMM7_Qa) + _DAT_1833a3848 + 0x842223ed;
  uVar2 = (_DAT_1833a3848 ^ unaff_XMM7_Qb) + _DAT_1833a3a50 + 0x68;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a3a50 ^ unaff_XMM7_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a3848 ^ unaff_XMM7_Qb;
  _DAT_1833a3760 =
       func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a3a50 + 0x68) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a3848 + 0x842223ed));
  uVar1 = _DAT_1833a3760 ^ 200;
  _DAT_1833a3a50 = _DAT_1833a39a0 ^ uVar1 ^ 0x130;
  _DAT_1833a3aa0 = (_DAT_1833a3aa0 ^ uVar1) + 0x130 ^ 0xb7917adadbdc361d;
  _DAT_1833a3860 = (_DAT_1833a3860 * -0xd5a10e9c0d74df5 ^ _DAT_1833a3aa0) + uVar1;
  _DAT_1833a37f8 = _DAT_1833a3860 ^ _DAT_1833a3aa0;
  _DAT_1833a3798 = 0x30;
  uVar1 = (_DAT_1833a3a18 ^ unaff_XMM8_Qa) + _DAT_1833a38b0 + 0x842223da;
  uVar2 = (_DAT_1833a38b0 ^ unaff_XMM8_Qb) + _DAT_1833a3a18 + 0xd1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a3a18 ^ unaff_XMM8_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a38b0 ^ unaff_XMM8_Qb;
  _DAT_1833a3840 =
       func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a3a18 + 0xd1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a38b0 + 0x842223da));
  uVar1 = (ulonglong)(~(uint)(_DAT_1833a3840 >> 0x1f) & 0xff);
  _DAT_1833a3a40 = (_DAT_1833a3a40 ^ uVar1) + 0x2e ^ 0x4ccae96d58fda542;
  _DAT_1833a3988 = (_DAT_1833a3988 * 0x39ecf78d0eea005d ^ _DAT_1833a3a40) + uVar1;
  _DAT_1833a38a8 = _DAT_1833a3988 ^ _DAT_1833a3a40;
  _DAT_1833a3728 = _DAT_1833a37e8 ^ 0x2e;
  _DAT_1833a3810 = 0x2e;
  uVar1 = (~_DAT_1833a3898 + 0xd2) *
          ((_DAT_1833a3af0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a3af0 & 0x842223da) * 2);
  uVar1 = (uVar1 | _DAT_1833a37c8) + (uVar1 & _DAT_1833a37c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a3a00 = func_0x00018e1ce110((uVar1 | 0x8422230b) + (ulonglong)((uint)uVar1 & 0x8422230b))
  ;
  _DAT_1833a37b8 = (_DAT_1833a37b8 ^ _DAT_1833a3a00 ^ 0xd1) + 0xd1 ^ 0x76415ce20cf2c830;
  _DAT_1833a37a8 = (_DAT_1833a37a8 * -0x19c3a5f97430cd8f ^ _DAT_1833a37b8) + (_DAT_1833a3a00 ^ 0xd1)
  ;
  _DAT_1833a3808 = _DAT_1833a37a8 ^ _DAT_1833a37b8;
  _DAT_1833a3a98 = 0xd1;
  uVar1 = (_DAT_1833a39f0 ^ unaff_XMM9_Qa) + _DAT_1833a39f8 + 0x8422230b;
  uVar2 = (_DAT_1833a39f8 ^ unaff_XMM9_Qb) + _DAT_1833a39f0 + 0xa2;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a39f0 ^ unaff_XMM9_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a39f8 ^ unaff_XMM9_Qb;
  _DAT_1833a3a18 =
       func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a39f0 + 0xa2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a39f8 + 0x8422230b));
  uVar1 = _DAT_1833a3a18 ^ 0xa2;
  _DAT_1833a3760 = _DAT_1833a3930 ^ uVar1 ^ 0xd0;
  _DAT_1833a3ae0 = (_DAT_1833a3ae0 ^ uVar1) + 0xd0 ^ 0x1b9e865d4a3f0beb;
  _DAT_1833a3738 = (_DAT_1833a3738 * 0x259cf4a3a28130cb ^ _DAT_1833a3ae0) + uVar1;
  _DAT_1833a3770 = _DAT_1833a3738 ^ _DAT_1833a3ae0;
  _DAT_1833a3948 = 0xd0;
  uVar1 = ((_DAT_1833a3988 ^ unaff_R12) + (ulonglong)((uint)_DAT_1833a3988 & 0x84222315) * 2) *
          -_DAT_1833a39a8;
  uVar1 = (uVar1 | _DAT_1833a3a40) + (uVar1 & _DAT_1833a3a40);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a3858 = func_0x00018e1ce110((uVar1 | unaff_R12) + (ulonglong)((uint)uVar1 & 0x84222315));
  _DAT_1833a37a8 = _DAT_1833a3898 ^ _DAT_1833a3858 ^ 0x30;
  _DAT_1833a37c8 = (_DAT_1833a37c8 ^ _DAT_1833a3858) + 0x30 ^ 0x45099974b72ee152;
  _DAT_1833a3928 = (_DAT_1833a3928 * 0x617b3a1441784d41 ^ _DAT_1833a37c8) + _DAT_1833a3858;
  _DAT_1833a3850 = _DAT_1833a3928 ^ _DAT_1833a37c8;
  _DAT_1833a3ae8 = 0x30;
  _DAT_1833a3870 = func_0x00018e1ce110(_DAT_1833a3718 ^ 0x1f007be2ffdd28);
  _DAT_1833a3ae0 = _DAT_1833a3ae0 ^ _DAT_1833a3870 & 0xfffffffffffffff ^ 0x133cbc712361d782;
  _DAT_1833a3808 =
       (_DAT_1833a3808 * -0x332c9c1401572ab7 ^ _DAT_1833a3ae0) +
       (_DAT_1833a3870 & 0xfffffffffffffff);
  _DAT_1833a3810 = _DAT_1833a3808 ^ _DAT_1833a3ae0;
  _DAT_1833a3998 = 0;
  uVar1 = ((_DAT_1833a3768 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a3768 & 0x842223da) * 2) *
          -_DAT_1833a38f0;
  uVar1 = (uVar1 | _DAT_1833a38a8) + (uVar1 & _DAT_1833a38a8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a3708 = func_0x00018e1ce110((uVar1 | 0x842223da) + (ulonglong)((uint)uVar1 & 0x842223da))
  ;
  uVar1 = (_DAT_1833a3708 ^ 0xff) << 0x39 | (_DAT_1833a3708 ^ 0xff) >> 7;
  _DAT_1833a3730 = _DAT_1833a3730 ^ uVar1 ^ 0x10db596063d1c05;
  _DAT_1833a38b8 = (_DAT_1833a38b8 * 0x21d5e3df84f6a96f ^ _DAT_1833a3730) + uVar1;
  _DAT_1833a3700 = _DAT_1833a38b8 ^ _DAT_1833a3730;
  _DAT_1833a3728 = 0;
  uVar1 = (_DAT_1833a3828 ^ unaff_R12) + _DAT_1833a3808 + unaff_R12;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a3828 ^ unaff_R12;
  uVar2 = ((_DAT_1833a3808 + _DAT_1833a3828) * 0x2000 | _DAT_1833a3808 + _DAT_1833a3828 >> 0x33) ^
          _DAT_1833a3808;
  _DAT_1833a37a8 =
       func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1833a3828 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a3808 + unaff_R12));
  uVar1 = _DAT_1833a37a8 ^ 0x30;
  _DAT_1833a3a00 = _DAT_1833a3908 ^ uVar1 ^ 0x30;
  _DAT_1833a3af0 = (_DAT_1833a3af0 ^ uVar1) + 0x30 ^ 0x31557626f718599b;
  _DAT_1833a3958 = (_DAT_1833a3958 * -0x13d38b450f1ce92f ^ _DAT_1833a3af0) + uVar1;
  _DAT_1833a3ae8 = _DAT_1833a3958 ^ _DAT_1833a3af0;
  _DAT_1833a3808 = _DAT_1833a37f0 ^ 0x30;
  _DAT_1833a3928 = 0x30;
  _DAT_1833a37c0 = func_0x00018e1ce110(_DAT_1833a39e0 ^ 0xffe0ff8423001d28);
  uVar1 = (_DAT_1833a37c0 << 9 | _DAT_1833a37c0 >> 0x37) * 0x2d3cad6255c6861b ^ 0xb;
  _DAT_1833a3710 = _DAT_1833a3710 ^ uVar1 ^ 0x5ec14cc7ea9b3276;
  _DAT_1833a3718 = (_DAT_1833a3718 * 0xe583e115f654439 ^ _DAT_1833a3710) + uVar1;
  _DAT_1833a3950 = _DAT_1833a3718 ^ _DAT_1833a3710;
  _DAT_1833a3978 = 0;
  uVar1 = (_DAT_1833a3840 ^ unaff_R12) + _DAT_1833a3a68 + unaff_R12;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833a3840 ^ unaff_R12;
  uVar2 = ((_DAT_1833a3a68 + _DAT_1833a3840) * 0x2000 | _DAT_1833a3a68 + _DAT_1833a3840 >> 0x33) ^
          _DAT_1833a3a68;
  uVar1 = func_0x00018e1ce110((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1833a3840 ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833a3a68 + unaff_R12));
  uVar2 = (uVar1 & 0x7fffffffffffffff) >> 1 | uVar1 & 0x7fffffffffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ uVar1 & 0x7fffffffffffffff) * -0xf78964b44a3539f;
  _DAT_1833a3af8 = _DAT_1833a3880 ^ uVar2 ^ 0x30;
  _DAT_1833a39c0 = (uVar1 ^ uVar2) + 0x30 ^ 0xaf54515e62d7543c;
  _DAT_1833a3838 = (_DAT_1833a3838 * -0x14ef1fbfe10074b9 ^ _DAT_1833a39c0) + uVar2;
  _DAT_1833a38a8 = _DAT_1833a3838 ^ _DAT_1833a39c0;
  _DAT_1833a3a08 = 0x30;
  uVar2 = (ulonglong)(unaff_R13D + (uint)((ulonglong)unaff_R13D * in_R9 >> 0x23) * -10 & 0xff);
  uVar1 = (~_DAT_1833a3978 + 0x31) *
          ((uVar2 ^ 0x84222325 ^ _DAT_1833a3af8) +
          (ulonglong)((uint)_DAT_1833a3af8 & (uint)(uVar2 ^ 0x84222325)) * 2);
  uVar1 = (uVar1 | _DAT_1833a3a58) + (uVar1 & _DAT_1833a3a58);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833a37c0 =
       func_0x00018e1ce110((uVar2 ^ unaff_R12 | uVar1) +
                           (ulonglong)((uint)(uVar2 ^ unaff_R12) & (uint)uVar1));
  _DAT_1833a3750 = uVar2 | 0x30;
  _DAT_1833a37d0 =
       (_DAT_1833a38c0 ^ _DAT_1833a37c0 & 0x7fffffffffffffff) + _DAT_1833a3750 ^ 0x5b6e0211cfad6d54;
  _DAT_1833a38c0 =
       (_DAT_1833a38c0 * 0x20f250fcf505255 ^ _DAT_1833a37d0) + (_DAT_1833a37c0 & 0x7fffffffffffffff)
  ;
  _DAT_1833a37d0 = _DAT_1833a38c0 ^ _DAT_1833a37d0;
  *(char *)(unaff_RBP + -0x51 + in_RAX) = (char)_DAT_1833a3750;
  switch(unaff_R13D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e1d1e6b (image 18e1d1e6b) =====

void FUN_18e1d1e6b(void)

{
  return;
}



// ===== continuation @ rva e1ce27f (image 18e1ce27f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1ce27f(void)

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



// ===== continuation @ rva e1d0398 (image 18e1d0398) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1d0398(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack00000000000000f4;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined2 uStack0000000000000160;
  
  uStack00000000000000f4 = 0x6672a4d3;
  rdtsc();
  uStack0000000000000120 = 0x15008b0009000b;
  rdtsc();
  uStack0000000000000128 = 0xcb00f100cb006b;
  rdtsc();
  uStack0000000000000130 = 0x100f60013002c;
  rdtsc();
  uStack0000000000000138 = 0x450044000e00e9;
  rdtsc();
  uStack0000000000000140 = 0x1c00e2008e0010;
  rdtsc();
  uStack0000000000000148 = 0x2007f0062002f;
  rdtsc();
  uStack0000000000000150 = 0x820002007b00a9;
  rdtsc();
  uStack0000000000000158 = 0x600ba00e6003d;
  rdtsc();
  uStack0000000000000160 = 0xf7;
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190de6cb0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva e1d16c4 (image 18e1d16c4) =====

void thunk_FUN_18e1ce401(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva e1d10f5 (image 18e1d10f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1d10f5(void)

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



// ===== continuation @ rva e1d0fb5 (image 18e1d0fb5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1d0fb5(void)

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



// ===== continuation @ rva e1ce33f (image 18e1ce33f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1ce33f(void)

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



// ===== continuation @ rva e1d1b9c (image 18e1d1b9c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1d1b9c(void)

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



// ===== continuation @ rva e1d1b51 (image 18e1d1b51) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1d1b51(void)

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



// ===== continuation @ rva e1d1bc7 (image 18e1d1bc7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1d1bc7(void)

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



// ===== continuation @ rva e1a3ccf (image 18e1a3ccf) =====

void FUN_18e1a3ccf(void)

{
  return;
}



// ===== continuation @ rva e1a3afb (image 18e1a3afb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a3afb(void)

{
  FUN_190dd72e0();
  (*_DAT_1824a21e8)();
  return;
}



// ===== continuation @ rva e1a3b4e (image 18e1a3b4e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a3b4e(void)

{
  FUN_190de3220();
  (*_DAT_1824a2168)();
  return;
}



// ===== continuation @ rva e1a3cc4 (image 18e1a3cc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a3cc4(void)

{
  (*_DAT_1824a21d8)();
  return;
}



// ===== continuation @ rva e1a3b81 (image 18e1a3b81) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a3b81(void)

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



// ===== continuation @ rva e1a3c33 (image 18e1a3c33) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a3c33(void)

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



// ===== continuation @ rva e1a3bea (image 18e1a3bea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a3bea(void)

{
  FUN_190dd72e0();
  (*_DAT_1824a2198)();
  return;
}



// ===== continuation @ rva e1a3cd7 (image 18e1a3cd7) =====

void FUN_18e1a3cd7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e1a3c12 (image 18e1a3c12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a3c12(void)

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



// ===== continuation @ rva e1a3c86 (image 18e1a3c86) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a3c86(void)

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



// ===== continuation @ rva e1a3ba5 (image 18e1a3ba5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a3ba5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1824a21f8)();
  return;
}



// ===== continuation @ rva e1a39eb (image 18e1a39eb) =====

void FUN_18e1a39eb(void)

{
  return;
}



// ===== continuation @ rva e1a377a (image 18e1a377a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a377a(void)

{
  FUN_190ddce00();
  (*_DAT_1824a20e8)();
  return;
}



// ===== continuation @ rva e1a39f3 (image 18e1a39f3) =====

void FUN_18e1a39f3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva e1a3858 (image 18e1a3858) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a3858(void)

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



// ===== continuation @ rva e1a38ac (image 18e1a38ac) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a38ac(void)

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



// ===== continuation @ rva e1a380c (image 18e1a380c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a380c(void)

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



// ===== continuation @ rva e1a39e0 (image 18e1a39e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1a39e0(undefined8 param_1)

{
  undefined8 in_stack_00000030;
  
  (*_DAT_1824a20a8)(param_1,in_stack_00000030);
  return;
}



// ===== continuation @ rva e1a396d (image 18e1a396d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a396d(void)

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



// ===== continuation @ rva e1a37d1 (image 18e1a37d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1a37d1(void)

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



