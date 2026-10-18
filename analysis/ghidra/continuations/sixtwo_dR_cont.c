// ===== continuation @ rva da8a460 (image 18da8a460) =====

void FUN_18da8a460(void)

{
  return;
}



// ===== continuation @ rva da8a2ad (image 18da8a2ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da8a2ad(void)

{
  FUN_190ddfc90();
  (*_DAT_1823226e8)();
  return;
}



// ===== continuation @ rva da8a353 (image 18da8a353) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da8a353(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182322718)();
  return;
}



// ===== continuation @ rva da8a468 (image 18da8a468) =====

void FUN_18da8a468(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva da8a2e0 (image 18da8a2e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da8a2e0(void)

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



// ===== continuation @ rva da8a3e9 (image 18da8a3e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da8a3e9(void)

{
  FUN_190ddfc90();
  (*_DAT_182322758)();
  return;
}



// ===== continuation @ rva da8a304 (image 18da8a304) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da8a304(void)

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



// ===== continuation @ rva da8a3a0 (image 18da8a3a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da8a3a0(void)

{
  FUN_190dd72e0();
  (*_DAT_182322768)();
  return;
}



// ===== continuation @ rva daf23cf (image 18daf23cf) =====

void FUN_18daf23cf(void)

{
  return;
}



// ===== continuation @ rva dad811b (image 18dad811b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dad8171 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dad811b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dadaf6a (image 18dadaf6a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dadafdb */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dadaf6a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dae19cd (image 18dae19cd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dae19cd(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  longlong lVar4;
  uint unaff_R15D;
  uint uVar5;
  undefined8 extraout_XMM0_Qa;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  undefined1 auVar11 [16];
  ulonglong in_stack_00000058;
  undefined8 uStack0000000000000060;
  ulonglong uStack0000000000000098;
  uint uStack00000000000000a4;
  undefined4 uStack00000000000000b4;
  undefined8 uStack00000000000000b8;
  undefined4 uStack00000000000000c0;
  
  uStack0000000000000098 = in_stack_00000058 & 0xffffffff;
  uStack0000000000000060 = 0xff;
  uVar2 = (~_DAT_183377890 + 0x6d05efdb) *
          ((_DAT_183377ab8 ^ 0xa10a81f6) + (ulonglong)((uint)_DAT_183377ab8 & 0xa10a81f6) * 2);
  uVar2 = (uVar2 | _DAT_183377ac8) + (uVar2 & _DAT_183377ac8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uStack00000000000000a4 = unaff_R15D;
  uStack00000000000000b4 = param_3;
  uStack00000000000000b8 = param_1;
  uStack00000000000000c0 = param_2;
  _DAT_183377708 = func_0x00018daf25b0((uVar2 | 0xcc0f6e2c) + (ulonglong)((uint)uVar2 & 0xcc0f6e2c))
  ;
  uVar3 = _DAT_183377708 ^ 0xfd329efbc94067d;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  _DAT_183377918 = (_DAT_183377918 ^ uVar3) + 0x6d2defdb ^ 0x9e956e7eaf07a9fa;
  _DAT_183377858 = (_DAT_183377858 * -0x29695b83a23af597 ^ _DAT_183377918) + uVar3;
  _DAT_183377ac8 = _DAT_183377858 ^ _DAT_183377918;
  _DAT_183377ac0 = 0x6d2defdb;
  uVar2 = (~_DAT_183377958 + 0x6f6fbeea) *
          ((_DAT_183377a80 ^ 0x11301c2f) + (ulonglong)((uint)_DAT_183377a80 & 0x11301c2f) * 2);
  uVar2 = (uVar2 | _DAT_1833778e8) + (uVar2 & _DAT_1833778e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833779f0 = func_0x00018daf25b0((uVar2 | 0x7e5fa2c6) + (ulonglong)((uint)uVar2 & 0x7e5fa2c6))
  ;
  _DAT_183377a20 =
       (_DAT_183377a20 ^ _DAT_1833779f0 & 0xffffffffe0000000) + 0xfa7d81e3 ^ 0x5a7d156e28e42d55;
  _DAT_183377aa0 =
       (_DAT_183377aa0 * -0x564b1d6e680d8de1 ^ _DAT_183377a20) +
       (_DAT_1833779f0 & 0xffffffffe0000000);
  _DAT_1833777b8 = _DAT_183377aa0 ^ _DAT_183377a20;
  _DAT_183377770 = 0xfa7d81e3;
  uVar2 = (~_DAT_183377798 + 0xc37dadc4) *
          ((_DAT_183377798 ^ 0x84222325) + (ulonglong)((uint)_DAT_183377798 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183377a80) + (uVar2 & _DAT_183377a80);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183377a90 = func_0x00018daf25b0((uVar2 | 0x475f8ee6) + (ulonglong)((uint)uVar2 & 0x475f8ee6))
  ;
  _DAT_183377920 = (_DAT_183377920 ^ _DAT_183377a90) - 0xc37dadc3 ^ 0xd528ec711cd7477;
  _DAT_1833777b0 = (_DAT_1833777b0 * -0x4e9ece35a9d17f8f ^ _DAT_183377920) + _DAT_183377a90;
  _DAT_183377718 = _DAT_1833777b0 ^ _DAT_183377920;
  _DAT_183377aa0 = _DAT_183377768 ^ 0xffffffff3c82523d;
  _DAT_183377a88 = 0x3c82523d;
  uVar2 = (_DAT_1833777f0 ^ _DAT_1823341b0) + _DAT_183377a60 + 0x475f8de7;
  uVar3 = (_DAT_183377a60 ^ _UNK_1823341b8) + _DAT_1833777f0 + 0x3c82523d;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833777f0 ^ _DAT_1823341b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183377a60 ^ _UNK_1823341b8;
  _DAT_1833779f8 =
       func_0x00018daf25b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833777f0 + 0x3c82523d) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183377a60 + 0x475f8de7));
  uVar2 = _DAT_1833779f8 * -0x5745d5bf58e1419f;
  _DAT_183377af0 = _DAT_1833778e0 ^ uVar2 ^ 0x1000000ff;
  _DAT_183377790 = (_DAT_183377790 ^ uVar2) + 0x1000000ff ^ 0x33dec353e9e4dc16;
  _DAT_1833778a8 = (_DAT_1833778a8 * 0x76544d01a5da824d ^ _DAT_183377790) + uVar2;
  _DAT_1833778d8 = _DAT_1833778a8 ^ _DAT_183377790;
  _DAT_183377878 = 0xff;
  uVar2 = (_DAT_1833778e0 ^ _DAT_1823341c0) + _DAT_183377758 + 0x84222325;
  uVar3 = (_DAT_183377758 ^ _UNK_1823341c8) + _DAT_1833778e0 + 0x1c891228;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833778e0 ^ _DAT_1823341c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183377758 ^ _UNK_1823341c8;
  _DAT_183377850 =
       func_0x00018daf25b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833778e0 + 0x1c891228) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183377758 + 0x84222325));
  _DAT_183377748 = _DAT_183377748 - 0x1c891228 ^ 0x69dbf0b635fb1d85;
  _DAT_1833779a8 = _DAT_183377930 * 0x3edd1e3d1dab35ef;
  _DAT_183377930 = _DAT_1833779a8 ^ _DAT_183377748;
  _DAT_183377770 = 0xe376edd8;
  uVar2 = func_0x00018daf25b0(_DAT_183377ae0 ^ 0xff5afff9d5ff2c8f);
  uVar3 = uVar2 ^ 0xe376edd8;
  _DAT_183377a38 = _DAT_183377998 ^ uVar3 ^ 0x1000000ff;
  _DAT_183377ad8 = (uVar2 ^ uVar3) + 0x1000000ff ^ 0xcad03276daeba966;
  _DAT_183377a28 = (_DAT_183377a28 * -0xd713cbb562d2447 ^ _DAT_183377ad8) + uVar3;
  _DAT_183377ac0 = _DAT_183377a28 ^ _DAT_183377ad8;
  _DAT_183377a78 = 0xff;
  uVar2 = (_DAT_1833779b8 ^ _DAT_1823341d0) + _DAT_183377a20 + 0xe90fccfe;
  uVar3 = (_DAT_183377a20 ^ _UNK_1823341d8) + _DAT_1833779b8 + 0xfa7d81e3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833779b8 ^ _DAT_1823341d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183377a20 ^ _UNK_1823341d8;
  uVar2 = func_0x00018daf25b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833779b8 + 0xfa7d81e3) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183377a20 + 0xe90fccfe));
  uVar2 = uVar2 & 0xfffffffffffffc00 ^ 0x6d2defdb;
  _DAT_1833778c8 = _DAT_183377938 ^ uVar2 ^ 0x167ab71be;
  _DAT_1833779f8 = (_DAT_1833779f8 ^ uVar2) + 0x167ab71be ^ 0x9eb39e493ac3c0;
  _DAT_183377990 = (_DAT_183377990 * -0xdbc0c99b166d7ef ^ _DAT_1833779f8) + uVar2;
  _DAT_183377840 = _DAT_183377990 ^ _DAT_1833779f8;
  _DAT_183377ac8 = 0x67ab71be;
  _DAT_183377a68 = func_0x00018daf25b0(_DAT_183377950 + 0x4cfff31aff8dffU ^ 0x99);
  _DAT_183377ac8 =
       (_DAT_183377ac8 ^ _DAT_183377a68 & 0x7fffffffffffffff) + 0x97506e38 ^ 0x2aa9fdea32f178c2;
  _DAT_183377968 =
       (_DAT_183377968 * -0x2526b121125682eb ^ _DAT_183377ac8) +
       (_DAT_183377a68 & 0x7fffffffffffffff);
  _DAT_1833777f0 = _DAT_183377968 ^ _DAT_183377ac8;
  _DAT_183377ad8 = 0x97506e38;
  uVar2 = (~_DAT_183377a98 + 0xd05b0387) *
          ((_DAT_183377918 ^ 0x13724d1d) + (ulonglong)((uint)_DAT_183377918 & 0x13724d1d) * 2);
  uVar2 = (uVar2 | _DAT_1833779d0) + (uVar2 & _DAT_1833779d0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183377ad8 = func_0x00018daf25b0((uVar2 | 0xc3294e9b) + (ulonglong)((uint)uVar2 & 0xc3294e9b))
  ;
  uVar2 = _DAT_183377ad8 & 0x7fffffffffffffff ^ 0x97506e38;
  _DAT_1833778f8 = _DAT_1833778e8 ^ uVar2 ^ 0x167ab71be;
  _DAT_183377738 = (_DAT_183377738 ^ uVar2) + 0x167ab71be ^ 0xa13b574e8a5d498d;
  _DAT_183377a90 = (_DAT_183377a90 * 0xeb79d347b541b3b ^ _DAT_183377738) + uVar2;
  _DAT_183377808 = _DAT_183377a90 ^ _DAT_183377738;
  _DAT_183377800 = 0x67ab71be;
  _DAT_1833778b8 = func_0x00018daf25b0(_DAT_1833778f0 ^ 0x23007bdb00213f);
  _DAT_1833778c0 = _DAT_1833778c0 ^ _DAT_1833778b8 ^ 0xd3327c8aa047d92e;
  _DAT_1833779c8 = (_DAT_1833779c8 * -0x177f36f58b6589b1 ^ _DAT_1833778c0) + _DAT_1833778b8;
  _DAT_183377a90 = _DAT_1833779c8 ^ _DAT_1833778c0;
  _DAT_183377840 = 0;
  uVar2 = (_DAT_1833779f0 ^ _DAT_1823341e0) + _DAT_183377700 + 0xe90fccfe;
  uVar3 = (_DAT_183377700 ^ _UNK_1823341e8) + _DAT_1833779f0 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833779f0 ^ _DAT_1823341e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183377700 ^ _UNK_1823341e8;
  _DAT_183377938 = _DAT_1833778b8;
  _DAT_1833778f0 =
       func_0x00018daf25b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833779f0 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183377700 + 0xe90fccfe));
  _DAT_183377ad0 = (_DAT_183377ad0 ^ _DAT_1833778f0 ^ 0xffffffff) + 0x92d21024 ^ 0x824742b03c468189;
  _DAT_183377878 =
       (_DAT_183377878 * -0x2984a836435bea3b ^ _DAT_183377ad0) + (_DAT_1833778f0 ^ 0xffffffff);
  _DAT_183377960 = _DAT_183377878 ^ _DAT_183377ad0;
  _DAT_183377ab0 = 0x92d21024;
  uVar2 = (_DAT_183377918 ^ _DAT_1823341f0) + _DAT_183377720 + 0xe90fccfe;
  uVar3 = (_DAT_183377720 ^ _UNK_1823341f8) + _DAT_183377918 + 0x92d21024;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183377918 ^ _DAT_1823341f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183377720 ^ _UNK_1823341f8;
  _DAT_183377738 =
       func_0x00018daf25b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183377918 + 0x92d21024) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183377720 + 0xe90fccfe));
  _DAT_183377888 = _DAT_183377888 ^ _DAT_183377738 & 0xffffffffffff8000 ^ 0x90d24355d299856b;
  _DAT_183377868 =
       (_DAT_183377868 * -0x56590290bcfafd8b ^ _DAT_183377888) +
       (_DAT_183377738 & 0xffffffffffff8000);
  _DAT_1833777e0 = _DAT_183377868 ^ _DAT_183377888;
  _DAT_183377a40 = 0;
  _DAT_1833779f0 = func_0x00018daf25b0(_DAT_183377998 ^ 0xffdf0084a6001d94);
  uVar2 = _DAT_1833779f0 * 0x109a61145c28d86d;
  _DAT_183377838 = _DAT_183377860 ^ uVar2 ^ 0xff;
  _DAT_1833777c8 = (_DAT_1833777c8 ^ uVar2) + 0xff ^ 0xeb453832cc74ede1;
  _DAT_183377ad0 = (_DAT_183377ad0 * -0x76073459e8d1a39 ^ _DAT_1833777c8) + uVar2;
  _DAT_183377768 = _DAT_183377ad0 ^ _DAT_1833777c8;
  _DAT_183377830 = 0xff;
  uVar2 = (_DAT_183377ae0 ^ _DAT_182334200) + _DAT_183377838 + 0xa10a81f6;
  uVar3 = (_DAT_183377838 ^ _UNK_182334208) + _DAT_183377ae0 + 0x2528a2d3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183377ae0 ^ _DAT_182334200;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183377838 ^ _UNK_182334208;
  uVar2 = func_0x00018daf25b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183377ae0 + 0x2528a2d3) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183377838 + 0xa10a81f6));
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar2) &
          0x3fffffffffffff;
  _DAT_183377750 = uVar2 ^ uVar3 ^ 0x343a73c97586604f;
  _DAT_183377760 = (_DAT_183377760 * -0x1783ca2d3bf7d34d ^ _DAT_183377750) + uVar3;
  _DAT_183377860 = _DAT_183377760 ^ _DAT_183377750;
  _DAT_183377830 = 0;
  uVar2 = ((_DAT_1833778d8 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833778d8 & 0x842223da) * 2) *
          -_DAT_183377a10;
  uVar2 = (uVar2 | _DAT_183377880) + (uVar2 & _DAT_183377880);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183377900 = func_0x00018daf25b0((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  uVar2 = _DAT_183377900 >> 1 | _DAT_183377900;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183377900;
  _DAT_183377758 = _DAT_183377a70 ^ uVar2 ^ 0xff;
  _DAT_183377908 = (_DAT_183377908 ^ uVar2) + 0xff ^ 0xd92e469336ecde6d;
  _DAT_1833779a8 = (_DAT_1833779a8 * -0x2a6cd68aabf04a33 ^ _DAT_183377908) + uVar2;
  _DAT_183377818 = _DAT_1833779a8 ^ _DAT_183377908;
  _DAT_183377a50 = 0xff;
  uVar2 = CONCAT44(0,uStack00000000000000a4) ^ 0x84222325;
  uVar3 = uVar2 ^ _DAT_183377708;
  lVar4 = uVar2 + _DAT_183377718;
  uVar2 = uVar3 + lVar4;
  uVar7 = (_DAT_183377718 ^ 1) + _DAT_183377708 + 1;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar3;
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183377718 ^ 1;
  _DAT_183377a60 =
       func_0x00018daf25b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183377708 + 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = CONCAT44(0,uStack00000000000000a4);
  uVar8 = uStack00000000000000a4 & _DAT_18001a990;
  uVar6 = uStack00000000000000a4 | _DAT_18001a990;
  uVar5 = uStack00000000000000a4 ^ _DAT_18001a990;
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar11 ^ auVar9,0);
  uVar2 = _DAT_183377a60 - (_DAT_183377a60 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183377a60;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  _DAT_183377aa8 =
       (((ulonglong)uVar10 * (ulonglong)_DAT_182334250 +
         ((ulonglong)_DAT_1823342a0 * (ulonglong)uVar10 +
          (SUB168(auVar11 ^ auVar9,0) >> 0x20) * (ulonglong)_DAT_182334250 << 0x20) +
        ((ulonglong)_DAT_182334290 * (ulonglong)uVar5 << 0x20) +
        (ulonglong)_DAT_182334280 * (ulonglong)uVar5 +
        ((ulonglong)_DAT_182334270 * (ulonglong)uVar6 << 0x20) +
        (ulonglong)_DAT_182334260 * (ulonglong)uVar6 +
        ((ulonglong)_DAT_182334240 * (ulonglong)uVar8 << 0x20 |
        (ulonglong)_DAT_182334230 * (ulonglong)uVar8) +
        ((ulonglong)_DAT_182334220 * (ulonglong)uStack00000000000000a4 << 0x20) +
        (ulonglong)_DAT_182334210 * (ulonglong)uStack00000000000000a4) -
       (((ulonglong)uVar5 * (ulonglong)_DAT_182334340 << 0x20) +
        (ulonglong)_DAT_182334330 * (ulonglong)uVar5 +
        ((ulonglong)uVar6 * (ulonglong)_DAT_182334320 << 0x20) +
        (ulonglong)_DAT_182334310 * (ulonglong)uVar6 +
       ((ulonglong)uVar8 * (ulonglong)_DAT_182334300 << 0x20 |
       (ulonglong)_DAT_1823342f0 * (ulonglong)uVar8) +
       ((ulonglong)uStack00000000000000a4 * (ulonglong)_DAT_1823342e0 << 0x20) +
       (ulonglong)_DAT_1823342d0 * (ulonglong)uStack00000000000000a4)) + 0x8ab6347cde5c8ec1;
  _DAT_183377738 = _DAT_183377978 ^ uVar3 ^ _DAT_183377aa8;
  _DAT_183377768 = (_DAT_183377768 ^ uVar3) + _DAT_183377aa8 ^ 0x532091282099dc28;
  _DAT_183377880 = (_DAT_183377880 * -0x40d7568e514e8753 ^ _DAT_183377768) + uVar3;
  _DAT_1833777f8 = _DAT_183377880 ^ _DAT_183377768;
  uStack00000000000000a4 = (uint)_DAT_183377aa8;
  _DAT_183377aa8 = _DAT_183377aa8 & 0xffffffff;
  uStack0000000000000060 = *(undefined8 *)(unaff_RBX + 8);
  uStack0000000000000060 = (**(code **)(*unaff_RSI + 0x580))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa,uStack0000000000000060);
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dad8386 (image 18dad8386) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dad83c2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dad8386(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dad81f8 (image 18dad81f8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dad824c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dad81f8(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dada79b (image 18dada79b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dada7b2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dada79b(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva daf243b (image 18daf243b) =====

void FUN_18daf243b(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva dad9ecb (image 18dad9ecb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad9ecb(void)

{
  longlong *unaff_RSI;
  longlong in_stack_00000058;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000b3;
  
  uStack00000000000000b3 = in_stack_00000070;
  (**(code **)(*unaff_RSI + 0x680))();
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dad9e80 (image 18dad9e80) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dad9ec3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dad9e80(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dacf5e2 (image 18dacf5e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dacf5e2(void)

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



// ===== continuation @ rva dacf58e (image 18dacf58e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacf58e(void)

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



// ===== continuation @ rva dacfb24 (image 18dacfb24) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dacfb24(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_18419fe70();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dacfad0 (image 18dacfad0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacfad0(void)

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



// ===== continuation @ rva dad0464 (image 18dad0464) =====

void FUN_18dad0464(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dacf94d (image 18dacf94d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacf94d(void)

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



// ===== continuation @ rva dad0455 (image 18dad0455) =====

void FUN_18dad0455(void)

{
  return;
}



// ===== continuation @ rva dacf5c7 (image 18dacf5c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacf5c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18232f978)();
  return;
}



// ===== continuation @ rva dacfff8 (image 18dacfff8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacfff8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_18232f638)();
  return;
}



// ===== continuation @ rva dacf8f5 (image 18dacf8f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dacf8f5(void)

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



// ===== continuation @ rva dacff40 (image 18dacff40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacff40(void)

{
  FUN_190ddce00();
  (*_DAT_18232f898)();
  return;
}



// ===== continuation @ rva dad0421 (image 18dad0421) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad0421(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18232f4e8)();
  return;
}



// ===== continuation @ rva dacfdfc (image 18dacfdfc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dacfdfc(void)

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



// ===== continuation @ rva dad2576 (image 18dad2576) =====

void FUN_18dad2576(void)

{
  return;
}



// ===== continuation @ rva dad05dc (image 18dad05dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad05dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182330678)();
  return;
}



// ===== continuation @ rva dad30b4 (image 18dad30b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad30b4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823305f8)();
  return;
}



// ===== continuation @ rva dad1af1 (image 18dad1af1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad1af1(void)

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



// ===== continuation @ rva dad311a (image 18dad311a) =====

void FUN_18dad311a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dad2bc7 (image 18dad2bc7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad2bc7(void)

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



// ===== continuation @ rva dad202c (image 18dad202c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad202c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_182330648)();
  return;
}



// ===== continuation @ rva dad1e36 (image 18dad1e36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad1e36(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18232faf8)();
  return;
}



// ===== continuation @ rva dad2d4a (image 18dad2d4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad2d4a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823306f8)();
  return;
}



// ===== continuation @ rva dad2963 (image 18dad2963) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad2963(void)

{
  FUN_190de3220();
  (*_DAT_182330518)();
  return;
}



// ===== continuation @ rva dad2395 (image 18dad2395) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad2395(void)

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



// ===== continuation @ rva dad0f24 (image 18dad0f24) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad0f24(void)

{
  (*_DAT_1823307a8)();
  return;
}



// ===== continuation @ rva dad0d9c (image 18dad0d9c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad0d9c(void)

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



// ===== continuation @ rva da8decf (image 18da8decf) =====

void FUN_18da8decf(void)

{
  return;
}



// ===== continuation @ rva da8a652 (image 18da8a652) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da8a652(void)

{
  FUN_190ddce00();
  (*_DAT_1823247b8)();
  return;
}



// ===== continuation @ rva da92b50 (image 18da92b50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da92b50(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182324d88)();
  return;
}



// ===== continuation @ rva da8fa55 (image 18da8fa55) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da8fa55(void)

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



// ===== continuation @ rva da91eb0 (image 18da91eb0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da91eb0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x538))();
  FUN_184117d80();
  (*_DAT_182324f68)();
  return;
}



// ===== continuation @ rva da93fdb (image 18da93fdb) =====

void FUN_18da93fdb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva da8cf72 (image 18da8cf72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da8cf72(void)

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



// ===== continuation @ rva da91434 (image 18da91434) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da91434(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182322ab8)();
  return;
}



// ===== continuation @ rva da93c57 (image 18da93c57) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da93c57(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823246b8)();
  return;
}



// ===== continuation @ rva da93a54 (image 18da93a54) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da93a54(void)

{
  FUN_190de3220();
  (*_DAT_182323478)();
  return;
}



// ===== continuation @ rva da93fcc (image 18da93fcc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da93fcc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182324878)();
  return;
}



// ===== continuation @ rva da8d5a5 (image 18da8d5a5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da8d5a5(void)

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



// ===== continuation @ rva dad7e99 (image 18dad7e99) =====

void FUN_18dad7e99(void)

{
  return;
}



// ===== continuation @ rva dad3324 (image 18dad3324) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad3324(void)

{
  FUN_190ddce00();
  (*_DAT_182330c58)();
  return;
}



// ===== continuation @ rva dad7f05 (image 18dad7f05) =====

void FUN_18dad7f05(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dad6bf5 (image 18dad6bf5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad6bf5(void)

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



// ===== continuation @ rva dad7a60 (image 18dad7a60) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad7a60(void)

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



// ===== continuation @ rva dad7df2 (image 18dad7df2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad7df2(void)

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



// ===== continuation @ rva dad6e32 (image 18dad6e32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad6e32(void)

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



// ===== continuation @ rva dad6f2a (image 18dad6f2a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad6f2a(void)

{
  (*_DAT_182330d98)();
  return;
}



// ===== continuation @ rva dad6d72 (image 18dad6d72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad6d72(void)

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



// ===== continuation @ rva dad76ed (image 18dad76ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dad76ed(void)

{
  (*_DAT_182331178)();
  return;
}



// ===== continuation @ rva dad7561 (image 18dad7561) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dad7561(void)

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



// ===== continuation @ rva daf71cb (image 18daf71cb) =====

void FUN_18daf71cb(void)

{
  return;
}



// ===== continuation @ rva daf2707 (image 18daf2707) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daf2707(void)

{
  FUN_190ddce00();
  (*_DAT_182334f98)();
  return;
}



// ===== continuation @ rva daf7258 (image 18daf7258) =====

void FUN_18daf7258(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva daf6f66 (image 18daf6f66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18daf6f66(void)

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



// ===== continuation @ rva daf7120 (image 18daf7120) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18daf7120(void)

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



// ===== continuation @ rva daf618a (image 18daf618a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daf618a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182334d88)();
  return;
}



// ===== continuation @ rva daf6002 (image 18daf6002) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daf6002(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182334958)();
  return;
}



// ===== continuation @ rva daf6882 (image 18daf6882) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daf6882(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182334e78)();
  return;
}



// ===== continuation @ rva daf5b72 (image 18daf5b72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daf5b72(void)

{
  FUN_190dd72e0();
  (*_DAT_182334d28)();
  return;
}



// ===== continuation @ rva daf6256 (image 18daf6256) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daf6256(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823352c8)();
  return;
}



// ===== continuation @ rva daf58fb (image 18daf58fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daf58fb(void)

{
  FUN_190dd72e0();
  (*_DAT_182334ca8)();
  return;
}



// ===== continuation @ rva daf6153 (image 18daf6153) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18daf6153(void)

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



// ===== continuation @ rva daf5aba (image 18daf5aba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18daf5aba(void)

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



// ===== continuation @ rva dafaab6 (image 18dafaab6) =====

void FUN_18dafaab6(void)

{
  return;
}



// ===== continuation @ rva daf7414 (image 18daf7414) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daf7414(void)

{
  FUN_190ddce00();
  (*_DAT_1823362a8)();
  return;
}



// ===== continuation @ rva dafb29a (image 18dafb29a) =====

void FUN_18dafb29a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dafa5ce (image 18dafa5ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafa5ce(void)

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



// ===== continuation @ rva dafafcd (image 18dafafcd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafafcd(void)

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



// ===== continuation @ rva dafa2ee (image 18dafa2ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafa2ee(void)

{
  longlong in_stack_00000048;
  
  switch(in_stack_00000048 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dafaf62 (image 18dafaf62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafaf62(void)

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



// ===== continuation @ rva dafaa2d (image 18dafaa2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dafaa2d(void)

{
  (*_DAT_182336658)();
  return;
}



// ===== continuation @ rva dafb147 (image 18dafb147) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafb147(void)

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



// ===== continuation @ rva dafb287 (image 18dafb287) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dafb287(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_182336608)();
  return;
}



// ===== continuation @ rva dafa14d (image 18dafa14d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafa14d(void)

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



// ===== continuation @ rva dafcdd1 (image 18dafcdd1) =====

void FUN_18dafcdd1(void)

{
  return;
}



// ===== continuation @ rva dafb42e (image 18dafb42e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dafb42e(void)

{
  FUN_190ddce00();
  (*_DAT_1823370a8)();
  return;
}



// ===== continuation @ rva dafcdb1 (image 18dafcdb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dafcdb1(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823377b8)();
  return;
}



// ===== continuation @ rva dafbd3f (image 18dafbd3f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafbd3f(void)

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



// ===== continuation @ rva dafc03d (image 18dafc03d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dafc03d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182337928)();
  return;
}



// ===== continuation @ rva dafbfb8 (image 18dafbfb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafbfb8(void)

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



// ===== continuation @ rva dafb461 (image 18dafb461) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafb461(void)

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



// ===== continuation @ rva dafbc90 (image 18dafbc90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dafbc90(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x538))();
  FUN_184117d50();
  (*_DAT_182337148)();
  return;
}



// ===== continuation @ rva dafc9d6 (image 18dafc9d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafc9d6(void)

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



// ===== continuation @ rva dafb6f3 (image 18dafb6f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dafb6f3(void)

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



// ===== continuation @ rva db00a00 (image 18db00a00) =====

void FUN_18db00a00(void)

{
  return;
}



// ===== continuation @ rva dafcfca (image 18dafcfca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dafcfca(void)

{
  FUN_190ddce00();
  (*_DAT_182337fd8)();
  return;
}



// ===== continuation @ rva db00c95 (image 18db00c95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db00c95(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000028;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000028);
  FUN_190dd72e0(in_stack_00000028,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182338508)();
  return;
}



// ===== continuation @ rva db00319 (image 18db00319) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db00319(void)

{
  longlong in_RAX;
  longlong *in_stack_00000028;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000028);
  (**(code **)(*in_stack_00000028 + 0x78))(in_stack_00000028);
  (*_DAT_182337b48)();
  return;
}



// ===== continuation @ rva db0181b (image 18db0181b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db0181b(void)

{
  (*_DAT_182338a48)();
  return;
}



// ===== continuation @ rva db01749 (image 18db01749) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db01749(void)

{
  char cVar1;
  longlong *in_stack_00000028;
  
  cVar1 = (**(code **)(*in_stack_00000028 + 0x100))(in_stack_00000028);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db02c5e (image 18db02c5e) =====

void FUN_18db02c5e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva db00c5e (image 18db00c5e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db00c5e(void)

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



// ===== continuation @ rva db021e2 (image 18db021e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db021e2(void)

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



// ===== continuation @ rva db02c35 (image 18db02c35) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db02c35(void)

{
  longlong *in_stack_00000028;
  
  (**(code **)(*in_stack_00000028 + 0x1f8))(in_stack_00000028);
  (**(code **)(*in_stack_00000028 + 0x720))(in_stack_00000028);
  (*_DAT_182338ae8)();
  return;
}



// ===== continuation @ rva db0014b (image 18db0014b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db0014b(void)

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



// ===== continuation @ rva db02aae (image 18db02aae) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db02aae(void)

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



// ===== continuation @ rva db022fd (image 18db022fd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db022fd(void)

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



// ===== continuation @ rva db078b0 (image 18db078b0) =====

void FUN_18db078b0(void)

{
  return;
}



// ===== continuation @ rva db02eb1 (image 18db02eb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db02eb1(void)

{
  FUN_190ddce00();
  (*_DAT_18233b878)();
  return;
}



// ===== continuation @ rva db16d54 (image 18db16d54) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db16d54(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x68))();
  (*_DAT_18233df78)();
  return;
}



// ===== continuation @ rva db08e35 (image 18db08e35) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db08e35(void)

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



// ===== continuation @ rva db16d65 (image 18db16d65) =====

void FUN_18db16d65(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva db09da7 (image 18db09da7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db09da7(void)

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



// ===== continuation @ rva db130d5 (image 18db130d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db130d5(void)

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



// ===== continuation @ rva db14fcc (image 18db14fcc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db14fcc(void)

{
  (*_DAT_18233e2f8)();
  return;
}



// ===== continuation @ rva db1400a (image 18db1400a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1400a(void)

{
  char cVar1;
  longlong *in_stack_00000040;
  
  cVar1 = (**(code **)(*in_stack_00000040 + 0x100))(in_stack_00000040);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db07f83 (image 18db07f83) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db07f83(void)

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



// ===== continuation @ rva db0e03e (image 18db0e03e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db0e03e(void)

{
  (*_DAT_18233cdf8)();
  return;
}



// ===== continuation @ rva db087c4 (image 18db087c4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db087c4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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



// ===== continuation @ rva db1b0fb (image 18db1b0fb) =====

void FUN_18db1b0fb(void)

{
  return;
}



// ===== continuation @ rva db16fb7 (image 18db16fb7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db16fb7(void)

{
  FUN_190ddce00();
  (*_DAT_1823405f8)();
  return;
}



// ===== continuation @ rva db1b50c (image 18db1b50c) =====

void FUN_18db1b50c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva db1a284 (image 18db1a284) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1a284(void)

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



// ===== continuation @ rva db1a7c7 (image 18db1a7c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1a7c7(void)

{
  (*_DAT_1823403b8)();
  return;
}



// ===== continuation @ rva db1a6fc (image 18db1a6fc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1a6fc(void)

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



// ===== continuation @ rva db1a982 (image 18db1a982) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1a982(void)

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



// ===== continuation @ rva db1a1f1 (image 18db1a1f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1a1f1(void)

{
  char in_AL;
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0 && in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db1b365 (image 18db1b365) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1b365(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182340478)();
  return;
}



// ===== continuation @ rva db1a4c0 (image 18db1a4c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1a4c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_182340218)();
  return;
}



// ===== continuation @ rva db1ac10 (image 18db1ac10) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1ac10(void)

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



// ===== continuation @ rva db1fe05 (image 18db1fe05) =====

void FUN_18db1fe05(void)

{
  return;
}



// ===== continuation @ rva db1b6c4 (image 18db1b6c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1b6c4(void)

{
  FUN_190ddce00();
  (*_DAT_1823413b8)();
  return;
}



// ===== continuation @ rva db1ff97 (image 18db1ff97) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1ff97(void)

{
  (*_DAT_182341788)();
  return;
}



// ===== continuation @ rva db1f9eb (image 18db1f9eb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1f9eb(void)

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



// ===== continuation @ rva db1f458 (image 18db1f458) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1f458(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182341898)();
  return;
}



// ===== continuation @ rva db1ee9b (image 18db1ee9b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1ee9b(void)

{
  FUN_190dd72e0();
  (*_DAT_182341838)();
  return;
}



// ===== continuation @ rva db1fcbd (image 18db1fcbd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1fcbd(void)

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



// ===== continuation @ rva db1fadc (image 18db1fadc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1fadc(void)

{
  (*_DAT_182341ab8)();
  return;
}



// ===== continuation @ rva db1fbb3 (image 18db1fbb3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1fbb3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182341508)();
  return;
}



// ===== continuation @ rva db1f9bf (image 18db1f9bf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1f9bf(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182341358)();
  return;
}



// ===== continuation @ rva db1fe71 (image 18db1fe71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1fe71(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182341618)();
  return;
}



// ===== continuation @ rva db1ef98 (image 18db1ef98) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1ef98(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_182341a38)();
  return;
}



// ===== continuation @ rva db1ffa2 (image 18db1ffa2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db1ffa2(void)

{
  (*_DAT_1823419f8)();
  return;
}



// ===== continuation @ rva db1b6f7 (image 18db1b6f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db1b6f7(void)

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



// ===== continuation @ rva da941c8 (image 18da941c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da941c8(void)

{
  FUN_190dd72e0();
  (*_DAT_182325d58)();
  return;
}



// ===== continuation @ rva da94155 (image 18da94155) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da94155(void)

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



// ===== continuation @ rva da94717 (image 18da94717) =====

void FUN_18da94717(void)

{
  return;
}



// ===== continuation @ rva da94365 (image 18da94365) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da94365(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182325da8)();
  return;
}



// ===== continuation @ rva da94344 (image 18da94344) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da94344(void)

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



// ===== continuation @ rva da94721 (image 18da94721) =====

void FUN_18da94721(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva da9466b (image 18da9466b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da9466b(void)

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



// ===== continuation @ rva da946f7 (image 18da946f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da946f7(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182325bf8)();
  return;
}



// ===== continuation @ rva da9458f (image 18da9458f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da9458f(void)

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



// ===== continuation @ rva da941b3 (image 18da941b3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da941b3(void)

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



// ===== continuation @ rva da94436 (image 18da94436) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da94436(void)

{
  FUN_190dd9df0();
  (*_DAT_182325c18)();
  return;
}



// ===== continuation @ rva da94924 (image 18da94924) =====

void FUN_18da94924(void)

{
  return;
}



// ===== continuation @ rva da9483c (image 18da9483c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da9483c(void)

{
  FUN_190ddfc90();
  (*_DAT_182325e48)();
  return;
}



// ===== continuation @ rva da94893 (image 18da94893) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da94893(void)

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



// ===== continuation @ rva da948e2 (image 18da948e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da948e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182325e38)();
  return;
}



// ===== continuation @ rva da948fb (image 18da948fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da948fb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182325e58)();
  return;
}



// ===== continuation @ rva da9486f (image 18da9486f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da9486f(void)

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



// ===== continuation @ rva da9492c (image 18da9492c) =====

void FUN_18da9492c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva da948a9 (image 18da948a9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da948a9(void)

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



// ===== continuation @ rva da98981 (image 18da98981) =====

void FUN_18da98981(void)

{
  return;
}



// ===== continuation @ rva da94a74 (image 18da94a74) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da94a74(void)

{
  FUN_190ddce00();
  (*_DAT_1823262e8)();
  return;
}



// ===== continuation @ rva da99169 (image 18da99169) =====

void FUN_18da99169(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva da98b6c (image 18da98b6c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da98b6c(void)

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



// ===== continuation @ rva da987fb (image 18da987fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da987fb(void)

{
  (*_DAT_182326678)();
  return;
}



// ===== continuation @ rva da98720 (image 18da98720) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da98720(void)

{
  (*_DAT_182326678)();
  return;
}



// ===== continuation @ rva da985ee (image 18da985ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da985ee(void)

{
  (*_DAT_1823264a8)();
  return;
}



// ===== continuation @ rva da98b02 (image 18da98b02) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da98b02(void)

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



// ===== continuation @ rva da94aec (image 18da94aec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da94aec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_182326398)();
  return;
}



// ===== continuation @ rva da97df9 (image 18da97df9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da97df9(void)

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



// ===== continuation @ rva da99494 (image 18da99494) =====

void FUN_18da99494(void)

{
  return;
}



// ===== continuation @ rva da99282 (image 18da99282) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da99282(void)

{
  FUN_190ddce00();
  (*_DAT_1823273c8)();
  return;
}



// ===== continuation @ rva da9949c (image 18da9949c) =====

void FUN_18da9949c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva da993b6 (image 18da993b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da993b6(void)

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



// ===== continuation @ rva da99319 (image 18da99319) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da99319(void)

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



// ===== continuation @ rva da992b5 (image 18da992b5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da992b5(void)

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



// ===== continuation @ rva da99468 (image 18da99468) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da99468(void)

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



// ===== continuation @ rva da9933a (image 18da9933a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da9933a(void)

{
  FUN_190dd72e0();
  (*_DAT_182327468)();
  return;
}



// ===== continuation @ rva da99429 (image 18da99429) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da99429(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182327438)();
  return;
}



// ===== continuation @ rva da99489 (image 18da99489) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da99489(void)

{
  (*_DAT_182327438)();
  return;
}



// ===== continuation @ rva da99784 (image 18da99784) =====

void FUN_18da99784(void)

{
  return;
}



// ===== continuation @ rva da99572 (image 18da99572) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da99572(void)

{
  FUN_190ddce00();
  (*_DAT_1823274e8)();
  return;
}



// ===== continuation @ rva da9962a (image 18da9962a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da9962a(void)

{
  FUN_190dd72e0();
  (*_DAT_182327598)();
  return;
}



// ===== continuation @ rva da9978c (image 18da9978c) =====

void FUN_18da9978c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva da995a5 (image 18da995a5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da995a5(void)

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



// ===== continuation @ rva da99758 (image 18da99758) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da99758(void)

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



// ===== continuation @ rva da99734 (image 18da99734) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da99734(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_1823274f8)();
  return;
}



// ===== continuation @ rva da996e0 (image 18da996e0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da996e0(void)

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



// ===== continuation @ rva da99673 (image 18da99673) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da99673(void)

{
  FUN_190ddfc90();
  (*_DAT_182327528)();
  return;
}



// ===== continuation @ rva da996a6 (image 18da996a6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da996a6(void)

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



// ===== continuation @ rva da99779 (image 18da99779) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da99779(void)

{
  (*_DAT_182327578)();
  return;
}



// ===== continuation @ rva da9999b (image 18da9999b) =====

void FUN_18da9999b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018da999d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182327910 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva da99946 (image 18da99946) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018da9997d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18da99946(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva daa72da (image 18daa72da) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daa72da(undefined4 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong lVar4;
  uint unaff_R12D;
  longlong *unaff_R13;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined4 *)(unaff_RBP + 0x90) = param_1;
  (**(code **)(*unaff_R13 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0xa0) = 6;
  *(undefined8 *)(unaff_RBP + 0x90) = unaff_RBX;
  uVar2 = (ulonglong)unaff_R12D ^ 0x84222325;
  uVar3 = uVar2 ^ _DAT_1833762a8;
  lVar4 = uVar2 + _DAT_1833762a8;
  uVar2 = uVar3 + lVar4;
  uVar6 = (_DAT_1833762a8 ^ 2) + _DAT_1833762a8 + 2;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar3;
  uVar2 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833762a8 ^ 2;
  _DAT_1833761e0 =
       func_0x00018dac3db0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833762a8 + 2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar8 = unaff_R12D & _DAT_180017990;
  uVar7 = unaff_R12D | _DAT_180017990;
  uVar5 = unaff_R12D ^ _DAT_180017990;
  uVar2 = (_DAT_1833761e0 ^ unaff_R12D) & 0xfffffffffff80000;
  uVar3 = ((((ulonglong)uVar5 * (ulonglong)_DAT_182328500 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_1823284f0 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_1823284e0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_1823284d0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_1823284c0 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_1823284b0) +
           ((ulonglong)unaff_R12D * (ulonglong)_DAT_1823284a0 << 0x20) +
           (ulonglong)unaff_R12D * (ulonglong)_DAT_182328490) -
          (((ulonglong)uVar5 * (ulonglong)_DAT_1823285a0 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_182328590 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_182328580 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_182328570 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_182328560 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_182328550) +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_182328540 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_182328530)) + 0x1415c311ff460c5e;
  _DAT_183376158 = _DAT_1833761d0 ^ uVar2 ^ uVar3;
  _DAT_183376130 = (_DAT_183376130 ^ uVar2) + uVar3 ^ 0x82815b015023ef2b;
  _DAT_183376250 = (_DAT_183376250 * -0x6aa665e4a3d273df ^ _DAT_183376130) + uVar2;
  _DAT_183376228 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x98) = (int)uVar3;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x98) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x98)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva daa75fa (image 18daa75fa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daa75fa(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  ulonglong unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  int unaff_R15D;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint unaff_XMM15_Da;
  
  *(undefined4 *)(unaff_RBP + 0x5c) = unaff_ESI;
  uVar9 = _DAT_183376210;
  uVar6 = _DAT_183376168;
  *(bool *)(unaff_RBP + 0x60) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar6 = (~uVar9 + 0x7b06116f) * ((uVar6 ^ 0x43f725aa) + (ulonglong)((uint)uVar6 & 0x43f725aa) * 2)
  ;
  uVar6 = (uVar6 | _DAT_1833761d0) + (uVar6 & _DAT_1833761d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833762e0 = func_0x00018dac3db0((uVar6 | 0x38f134c4) + (ulonglong)((uint)uVar6 & 0x38f134c4))
  ;
  uVar6 = _DAT_1833762e0 << 0x20 | (_DAT_1833762e0 & 0xfffffffffffff) >> 0x20;
  _DAT_183376240 = (_DAT_183376240 ^ uVar6) + 0xbcd317e1 ^ 0xad3b68007883a4a1;
  _DAT_183376278 = (_DAT_183376278 * -0x22f285eed0373c7d ^ _DAT_183376240) + uVar6;
  _DAT_183376140 = _DAT_183376278 ^ _DAT_183376240;
  _DAT_183376158 = 0xbcd317e1;
  uVar6 = (~_DAT_183376138 + 0x1c3ee01) *
          ((_DAT_1833762b8 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1833762b8 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_1833761c8) + (uVar6 & _DAT_1833761c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833761c0 = func_0x00018dac3db0((uVar6 | 0x85e1cd25) + (ulonglong)((uint)uVar6 & 0x85e1cd25))
  ;
  uVar6 = _DAT_1833761c0 ^ 0x1c3ee00;
  uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar6) <<
          0x18 | _DAT_1833761c0 >> 0x28;
  _DAT_1833762f0 = (_DAT_1833762f0 ^ uVar6) - 0x1c3ee00 ^ 0x4afc7803e5706d3c;
  _DAT_183376148 = (_DAT_183376148 * 0x7265af1ef7dfa429 ^ _DAT_1833762f0) + uVar6;
  _DAT_183376228 = _DAT_183376148 ^ _DAT_1833762f0;
  _DAT_1833761f8 = 0xfe3c1200;
  uVar6 = (_DAT_183376218 ^ _DAT_1823285b0) + _DAT_183376290 + 0x84222ce5;
  uVar9 = (_DAT_183376290 ^ _UNK_1823285b8) + _DAT_183376218 + 0x1c3ee00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376218 ^ _DAT_1823285b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376290 ^ _UNK_1823285b8;
  _DAT_1833761e8 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183376218 + 0x1c3ee00) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376290 + 0x84222ce5));
  _DAT_1833762c8 = _DAT_183376230 ^ _DAT_1833762b0 ^ 0x1c3fdc0;
  _DAT_183376280 = (_DAT_183376280 ^ _DAT_1833762b0) + 0x1c3fdc0 ^ 0xd0daaa523c930b90;
  _DAT_183376240 =
       (_DAT_183376240 * 0x55cb35350cab1cfb ^ _DAT_183376280) + _DAT_1833762b0 ^ _DAT_183376280;
  _DAT_183376298 = 0x1c3fdc0;
  _DAT_1833762a0 = func_0x00018dac3db0(_DAT_183376128 + 0xffcb005becffdfff ^ 0xe0);
  _DAT_1833761c8 =
       (_DAT_1833762d8 ^ _DAT_1833762a0 & 0xffffffffff) - 0x20421416 ^ 0x154c84e5a955d424;
  _DAT_1833762d8 =
       (_DAT_1833762d8 * -0x2600badf51620883 ^ _DAT_1833761c8) + (_DAT_1833762a0 & 0xffffffffff);
  _DAT_1833761c8 = _DAT_1833762d8 ^ _DAT_1833761c8;
  _DAT_183376290 = 0xdfbdebea;
  uVar6 = (~_DAT_183376200 + 0x20421417) *
          ((_DAT_183376220 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_183376220 & 0x84222ce5) * 2);
  uVar6 = (uVar6 | _DAT_183376168) + (uVar6 & _DAT_183376168);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376130 = func_0x00018dac3db0((uVar6 | 0xa46038f3) + (ulonglong)((uint)uVar6 & 0xa46038f3))
  ;
  uVar6 = (ulonglong)(((uint)_DAT_183376130 ^ 0x540) & 0xfc0);
  _DAT_183376260 = _DAT_183376208 ^ uVar6 ^ 0x204223d6;
  _DAT_183376210 = (_DAT_183376210 ^ uVar6) + 0x204223d6 ^ 0xd3fc2750e85460de;
  _DAT_183376160 = (_DAT_183376160 * 0x70cd2fde8c555acd ^ _DAT_183376210) + uVar6;
  _DAT_1833762a8 = _DAT_183376160 ^ _DAT_183376210;
  _DAT_1833762e0 = 0x204223d6;
  uVar6 = (_DAT_1833761a0 ^ _DAT_1823285c0) + _DAT_183376288 + 0xa46000f3;
  uVar9 = (_DAT_183376288 ^ _UNK_1823285c8) + _DAT_1833761a0 + 0xdfbdebea;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833761a0 ^ _DAT_1823285c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376288 ^ _UNK_1823285c8;
  _DAT_1833762f0 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833761a0 + 0xdfbdebea) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376288 + 0xa46000f3));
  uVar6 = (ulonglong)(~(uint)_DAT_1833762f0 & 0x204223d6) ^ 0x204223d6;
  uVar6 = uVar6 >> 6 | uVar6 << 0x3a;
  _DAT_183376240 = _DAT_1833762c8 ^ uVar6 ^ 0x100000fc0;
  _DAT_183376298 = (_DAT_183376298 ^ uVar6) + 0x100000fc0 ^ 0xe728f47f0aa7c75f;
  _DAT_1833762d8 = (_DAT_1833762d8 * 0x701d2baf39d68cb ^ _DAT_183376298) + uVar6;
  _DAT_183376178 = _DAT_1833762d8 ^ _DAT_183376298;
  _DAT_1833761c0 = 0xfc0;
  uVar6 = (_DAT_1833762e8 ^ _DAT_1823285d0) + _DAT_183376190 + 0x84222325;
  uVar9 = (_DAT_183376190 ^ _UNK_1823285d8) + _DAT_1833762e8 + 0x61305170;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833762e8 ^ _DAT_1823285d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376190 ^ _UNK_1823285d8;
  uVar6 = func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833762e8 + 0x61305170) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376190 + 0x84222325));
  _DAT_183376158 = (uVar6 ^ uVar6 ^ 0x61305170) - 0x61305170 ^ 0x14f75610f912671d;
  _DAT_1833762c8 = (_DAT_1833762c8 * -0x403980e48c5f0b6d ^ _DAT_183376158) + (uVar6 ^ 0x61305170);
  _DAT_183376298 = _DAT_1833762c8 ^ _DAT_183376158;
  _DAT_183376218 = 0x9ecfae90;
  uVar6 = (~_DAT_1833762a0 + 0x61305171) *
          ((_DAT_1833761f8 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1833761f8 & 0x84222ce5) * 2);
  uVar6 = (uVar6 | _DAT_1833761d0) + (uVar6 & _DAT_1833761d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376258 = func_0x00018dac3db0((uVar6 | 0xe5127d95) + (ulonglong)((uint)uVar6 & 0xe5127d95))
  ;
  uVar6 = _DAT_183376258 - (_DAT_183376258 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183376258;
  _DAT_183376108 = _DAT_1833762e0 ^ uVar6 ^ 0x61306130;
  _DAT_183376180 = (_DAT_183376180 ^ uVar6) + 0x61306130 ^ 0x67a616c252fc624;
  _DAT_1833761f0 = (_DAT_1833761f0 * -0x3e9b714ff57d928f ^ _DAT_183376180) + uVar6;
  _DAT_183376158 = _DAT_1833761f0 ^ _DAT_183376180;
  _DAT_1833762a8 = 0x61306130;
  _DAT_183376278 = func_0x00018dac3db0(_DAT_183376110 + 0xff39ffbb280005ff ^ 0x6d);
  uVar6 = _DAT_183376278 * -0x53b5d2ee10e5a4dd;
  uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (~((uint)uVar6 ^
            (uint)((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5)) &
          0xfffbf29c);
  _DAT_183376120 = _DAT_1833762c0 ^ uVar6 ^ 0x1bccf0a7d;
  _DAT_183376160 = (_DAT_183376160 ^ uVar6) + 0x1bccf0a7d ^ 0xf58e3c16f1de9653;
  _DAT_183376260 = (_DAT_183376260 * -0x366903d1fb3e7dab ^ _DAT_183376160) + uVar6;
  _DAT_1833762a8 = _DAT_183376260 ^ _DAT_183376160;
  _DAT_183376190 = 0xbccf0a7d;
  uVar6 = (~_DAT_183376140 + 0xbcd317e2) *
          ((_DAT_1833762a0 ^ 0x7bd9d1b9) + (ulonglong)((uint)_DAT_1833762a0 & 0x7bd9d1b9) * 2);
  uVar6 = (uVar6 | _DAT_183376100) + (uVar6 & _DAT_183376100);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376228 = func_0x00018dac3db0((uVar6 | 0xc70ac658) + (ulonglong)((uint)uVar6 & 0xc70ac658))
  ;
  uVar6 = (_DAT_183376228 ^ 0xfffbf29c) * 0x574ded7a5773d8f;
  _DAT_183376110 = (_DAT_183376110 ^ uVar6) + 0x4328e57d ^ 0x39c5264f2f9a3675;
  _DAT_183376128 = (_DAT_183376128 * 0x643342e9a53f862f ^ _DAT_183376110) + uVar6;
  _DAT_1833762f8 = _DAT_183376128 ^ _DAT_183376110;
  _DAT_1833761a0 = 0x4328e57d;
  uVar6 = (_DAT_183376200 ^ _DAT_1823285e0) + _DAT_183376160 + 0x7bd9d1b9;
  uVar9 = (_DAT_183376160 ^ _UNK_1823285e8) + _DAT_183376200 + 0xbcd317e1;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376200 ^ _DAT_1823285e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376160 ^ _UNK_1823285e8;
  _DAT_1833761e8 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183376200 + 0xbcd317e1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376160 + 0x7bd9d1b9));
  uVar6 = (_DAT_1833761e8 ^ 0xbcd01ab4da2bcd80) << 0x2a |
          (_DAT_1833761e8 ^ 0xbcd01ab4da2bcd80) >> 0x16;
  _DAT_183376168 = (_DAT_183376168 ^ uVar6) + 0xbcd31280 ^ 0xbb767bfc1ca74211;
  _DAT_183376188 = (_DAT_183376188 * 0x12e67fc7ed497ebf ^ _DAT_183376168) + uVar6;
  _DAT_1833761f0 = _DAT_183376188 ^ _DAT_183376168;
  _DAT_183376148 = _DAT_1833761d0 ^ 0xbcd31280;
  _DAT_183376108 = 0xbcd31280;
  uVar6 = (~_DAT_183376180 + 0x79a62501) *
          ((_DAT_183376298 ^ 0xc70ac658) + (ulonglong)((uint)_DAT_183376298 & 0xc70ac658) * 2);
  uVar6 = (uVar6 | _DAT_183376210) + (uVar6 & _DAT_183376210);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833761f8 = func_0x00018dac3db0((uVar6 | 0xbeace358) + (ulonglong)((uint)uVar6 & 0xbeace358))
  ;
  uVar6 = (_DAT_1833761f8 ^ 0x7baee57d) * 0x6852fc101afec789 ^ 0x4328e57d;
  _DAT_1833762a0 = _DAT_183376268 ^ uVar6 ^ 0xbccf0a7d;
  _DAT_183376280 = (_DAT_183376280 ^ uVar6) + 0xbccf0a7d ^ 0x435cc1eddf83627a;
  _DAT_1833762c8 = (_DAT_1833762c8 * 0x5efc15574afdbf89 ^ _DAT_183376280) + uVar6;
  _DAT_183376110 = _DAT_1833762c8 ^ _DAT_183376280;
  _DAT_1833762d8 = 0xbccf0a7d;
  _DAT_1833762d8 = func_0x00018dac3db0(_DAT_1833762d0 ^ 0x1a0083c6001979);
  uVar6 = _DAT_1833762d8 ^ 0xffffffff;
  uVar9 = uVar6 >> 1 | uVar6;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  _DAT_183376250 = (_DAT_183376250 ^ uVar6) + 0x40d63 ^ 0xb56114c14fc26feb;
  _DAT_183376280 = (_DAT_183376280 * 0x2a5fd816e48093cb ^ _DAT_183376250) + uVar6;
  _DAT_1833761f0 = _DAT_183376280 ^ _DAT_183376250;
  _DAT_183376128 = 0x40d63;
  uVar6 = (_DAT_183376210 ^ 0x84222ce5) + _DAT_183376198 + 0x84222ce5;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376210 ^ 0x84222ce5;
  uVar9 = ((_DAT_183376198 + _DAT_183376210) * 0x2000 | _DAT_183376198 + _DAT_183376210 >> 0x33) ^
          _DAT_183376198;
  _DAT_1833762d8 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_183376210 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376198 + 0x84222ce5));
  uVar6 = _DAT_1833762d8 ^ 0xfc0;
  _DAT_183376128 = _DAT_1833761b0 ^ uVar6 ^ 0xfc0;
  _DAT_1833762f0 = (_DAT_1833762f0 ^ uVar6) + 0xfc0 ^ 0xf929a1b3c00a7a5a;
  _DAT_1833762e8 = (_DAT_1833762e8 * -0x524d82cb293c6d91 ^ _DAT_1833762f0) + uVar6;
  _DAT_1833761e8 = _DAT_1833762e8 ^ _DAT_1833762f0;
  _DAT_183376200 = 0xfc0;
  _DAT_1833761d0 = func_0x00018dac3db0(_DAT_183376158 + 0xffe2ff7bdaffddff ^ 0x9a);
  _DAT_183376148 = _DAT_183376148 ^ _DAT_1833761d0 ^ 0x8e22529164561390 ^ 0x57b81e4ae5804544;
  _DAT_183376200 =
       (_DAT_183376200 * -0x71c9adf517d45a41 ^ _DAT_183376148) +
       (_DAT_1833761d0 ^ 0x8e22529164561390);
  _DAT_1833762f8 = _DAT_183376200 ^ _DAT_183376148;
  _DAT_183376170 = 0;
  uVar6 = func_0x00018dac3db0(_DAT_183376158 ^ 0xffebff84e4ffe1de);
  auVar15 = _DAT_1800170c0;
  uVar6 = uVar6 << 0x37 | uVar6 >> 9;
  _DAT_1833761a0 = _DAT_183376268 ^ uVar6 ^ 0xfc0;
  _DAT_1833762e8 = (_DAT_1833762e8 ^ uVar6) + 0xfc0 ^ 0xf42bbd3a6bbbbbd0;
  _DAT_183376170 = (_DAT_183376170 * -0x74e0319a28c3e47f ^ _DAT_1833762e8) + uVar6;
  _DAT_1833762c8 = _DAT_183376170 ^ _DAT_1833762e8;
  _DAT_183376128 = 0xfc0;
  auVar12._8_8_ = _UNK_180144f68;
  auVar12._0_8_ = (ulonglong)(uint)(unaff_R15D << 6) ^ 0x84222325;
  auVar11 = pshufb(auVar12 ^ _DAT_1823285f0,_DAT_1800170c0);
  uVar9 = auVar11._8_8_ + auVar11._0_8_;
  uVar6 = uVar9 + _DAT_183376190;
  if (auVar11._4_4_ < 0) {
    uVar6 = _DAT_183376120 ^ uVar9;
  }
  _DAT_1833761d0 = func_0x00018dac3db0(SUB161(auVar12 ^ _DAT_1823285f0,5) ^ uVar6);
  uVar6 = _DAT_1833761d0 * -0x576fa22830192691 & 0xffffffffffff8000;
  _DAT_1833762a0 = (ulonglong)(unaff_R15D << 6 & 0xfc0);
  *(ulonglong *)(unaff_RBP + 0x10) = _DAT_1833762a0;
  _DAT_1833762e0 = (_DAT_1833762e0 ^ uVar6) + _DAT_1833762a0 ^ 0x671589c30cf18a55;
  _DAT_183376198 = (_DAT_183376198 * 0x3563fa9e6b0e91e7 ^ _DAT_1833762e0) + uVar6;
  _DAT_183376250 = _DAT_183376198 ^ _DAT_1833762e0;
  lVar8 = _DAT_1833761c0 + 0xeb8a4d47;
  lVar7 = _DAT_1833761e8 + 0x61e46ff1;
  uVar6 = (_DAT_1833761e8 ^ _DAT_182328600) + lVar8;
  uVar9 = (_DAT_1833761c0 ^ _UNK_182328608) + lVar7;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833761e8 ^ _DAT_182328600;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833761c0 ^ _UNK_182328608;
  *(int *)(unaff_RBP + 0x80) = *(int *)(unaff_RBP + 0x80) << 0xc;
  _DAT_183376138 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - lVar7 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar8);
  uVar6 = (_DAT_183376138 & 0x3ffffffff) >> 1 | _DAT_183376138 & 0x3ffffffff;
  uVar9 = uVar6 >> 2 | uVar6;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar6 = uVar6 >> 0x20 | uVar9 >> 0x10 | uVar9;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183376138 & 0x3ffffffff;
  _DAT_1833761b0 = (_DAT_1833761b0 ^ uVar6) + 0x6fec6ff3 ^ 0xde7ef8fe1e24a5f9;
  _DAT_1833761d8 = (_DAT_1833761d8 * 0x34b98321f14adf6b ^ _DAT_1833761b0) + uVar6;
  _DAT_1833761d0 = _DAT_1833761d8 ^ _DAT_1833761b0;
  _DAT_183376130 = 0x6fec6ff3;
  uVar6 = (~_DAT_183376200 + 0xc1b88cb8) *
          ((_DAT_1833761a8 ^ 0x5eaf44b2) + (ulonglong)((uint)_DAT_1833761a8 & 0x5eaf44b2) * 2);
  uVar6 = (uVar6 | _DAT_183376270) + (uVar6 & _DAT_183376270);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833762e0 = func_0x00018dac3db0((uVar6 | 0x9f17c805) + (ulonglong)((uint)uVar6 & 0x9f17c805))
  ;
  _DAT_1833762f0 =
       (_DAT_1833762f0 ^ _DAT_1833762e0 ^ 0xa56228dc01cec766) + 0x1b35eb20 ^ 0xad19c13d0bdc4d31;
  _DAT_183376170 =
       (_DAT_183376170 * 0x22a54b3eaf85d359 ^ _DAT_1833762f0) +
       (_DAT_1833762e0 ^ 0xa56228dc01cec766);
  _DAT_1833761a8 = _DAT_183376170 ^ _DAT_1833762f0;
  _DAT_183376218 = 0x1b35eb20;
  _DAT_183376270 = func_0x00018dac3db0(_DAT_1833762a8 ^ 0xaffcce4ffb621);
  uVar6 = _DAT_183376270 & 0xfffffffffffff800;
  uVar9 = uVar6 >> 1 | uVar6;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar6;
  _DAT_183376220 = (_DAT_183376220 ^ uVar6) - 0x59f53408 ^ 0x2c1e3f348c30ddd3;
  _DAT_1833761d0 = (_DAT_1833761d0 * -0x2d673699ef0bd291 ^ _DAT_183376220) + uVar6;
  _DAT_1833762d0 = _DAT_1833761d0 ^ _DAT_183376220;
  _DAT_183376260 = 0xa60acbf8;
  uVar6 = (_DAT_182328610 ^ 0xa60acbf8) + _DAT_183376148 + 0x8422d325;
  uVar9 = (_DAT_183376148 ^ _UNK_182328618) + 0x100000000;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_182328610 ^ 0xa60acbf8;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376148 ^ _UNK_182328618;
  _DAT_183376158 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - 0x100000000 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376148 + 0x8422d325));
  _DAT_1833761d8 = (_DAT_1833761d8 ^ _DAT_183376158 ^ 0x59f5f408) + 0x59f62408 ^ 0x5ae19d046107b9b3;
  _DAT_183376240 =
       (_DAT_183376240 * 0x657608f0a188a89f ^ _DAT_1833761d8) + (_DAT_183376158 ^ 0x59f5f408);
  _DAT_183376270 = _DAT_183376240 ^ _DAT_1833761d8;
  _DAT_183376130 = 0x59f62408;
  _DAT_183376100 = func_0x00018dac3db0(_DAT_1833761e8 ^ 0xfff10058baff3a17);
  uVar6 = (_DAT_183376100 ^ 0x3ce912e8) << 0xd |
          ((_DAT_183376100 ^ 0x3ce912e8) & 0x1ffffffffffffff) >> 0x33;
  _DAT_183376140 = (_DAT_183376140 ^ uVar6) - 0x3ce912e8 ^ 0x29ee810beb8d92b1;
  _DAT_1833761c8 = (_DAT_1833761c8 * -0x5280c73f1224161f ^ _DAT_183376140) + uVar6;
  _DAT_183376190 = _DAT_1833761c8 ^ _DAT_183376140;
  _DAT_183376200 = 0xc316ed18;
  _DAT_1833762d8 = func_0x00018dac3db0(_DAT_1833761e0 + 0xffbf00983cffcaff ^ 0xf1);
  _DAT_183376160 = _DAT_183376280 ^ _DAT_1833762d8 ^ 0x3cea02e8;
  _DAT_183376228 = (_DAT_183376228 ^ _DAT_1833762d8) + 0x3cea02e8 ^ 0x309177aaab023bfb;
  _DAT_183376130 = (_DAT_183376130 * -0x6d4dfcfee7c814a3 ^ _DAT_183376228) + _DAT_1833762d8;
  _DAT_183376158 = _DAT_183376130 ^ _DAT_183376228;
  _DAT_1833761b8 = 0x3cea02e8;
  _DAT_183376128 = func_0x00018dac3db0(_DAT_1833761c0 + 0xb4001a52ff25ff ^ 0x5a);
  uVar6 = (ulonglong)(~(uint)_DAT_183376128 & 0x3cea02e8);
  _DAT_1833761e8 = _DAT_183376250 ^ uVar6 ^ 0x10000f000;
  _DAT_1833762e0 = (_DAT_1833762e0 ^ uVar6) + 0x10000f000 ^ 0x7e5551fc94711d1a;
  _DAT_183376230 = (_DAT_183376230 * 0x7d86e744e2cbea5d ^ _DAT_1833762e0) + uVar6;
  _DAT_1833761a8 = _DAT_183376230 ^ _DAT_1833762e0;
  _DAT_1833761d8 = 0xf000;
  _DAT_183376108 = func_0x00018dac3db0(_DAT_183376288 ^ 0x6f003a1500c430);
  _DAT_183376230 =
       (_DAT_183376230 ^ _DAT_183376108 * 0x7c158d59ed21cc09) - 0x4ee7920a ^ 0x2d5cf24f17fdd201;
  _DAT_1833762a0 =
       (_DAT_1833762a0 * -0x7ae854c6ed0891af ^ _DAT_183376230) + _DAT_183376108 * 0x7c158d59ed21cc09
  ;
  _DAT_183376120 = _DAT_1833762a0 ^ _DAT_183376230;
  _DAT_1833762f0 = 0xb1186df6;
  uVar6 = (~_DAT_1833762a8 + 0x4ee7920b) *
          ((_DAT_183376220 ^ 0x8422d325) + (ulonglong)((uint)_DAT_183376220 & 0x8422d325) * 2);
  uVar6 = (uVar6 | _DAT_183376290) + (uVar6 & _DAT_183376290);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018dac3db0((uVar6 | 0xcac5412f) + (ulonglong)((uint)uVar6 & 0xcac5412f));
  uVar6 = uVar6 ^ 0x49f918e96000;
  _DAT_183376240 = _DAT_1833761b8 ^ uVar6 ^ 0x4ee8820a;
  _DAT_183376238 = (_DAT_183376238 ^ uVar6) + 0x4ee8820a ^ 0xba3d9bfb1c71871d;
  _DAT_1833761c0 = (_DAT_1833761c0 * 0x5cc1c0853f35560d ^ _DAT_183376238) + uVar6;
  _DAT_183376188 = _DAT_1833761c0 ^ _DAT_183376238;
  _DAT_1833761f8 = 0x4ee8820a;
  _DAT_183376228 = func_0x00018dac3db0(_DAT_1833762a0 ^ 0xff3bffabc7005138);
  uVar6 = _DAT_183376228 ^ 0x4ee8820a;
  uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6;
  _DAT_1833762f8 = _DAT_183376170 ^ uVar6 ^ 0x10000f000;
  _DAT_183376258 = (_DAT_183376258 ^ uVar6) + 0x10000f000 ^ 0xf5309646be6dca29;
  _DAT_1833762d0 = (_DAT_1833762d0 * 0x50daccf839ed80d7 ^ _DAT_183376258) + uVar6;
  _DAT_1833762c8 = _DAT_1833762d0 ^ _DAT_183376258;
  _DAT_183376298 = 0xf000;
  _DAT_183376200 = func_0x00018dac3db0(_DAT_183376150 + 0xff9aff90ce0018ff ^ 0x20);
  uVar6 = _DAT_183376200 ^ 0x6fec6ff3;
  _DAT_1833762e0 = _DAT_183376228 ^ uVar6 ^ 0x8b225b13;
  _DAT_1833761d0 = (_DAT_1833761d0 ^ uVar6) + 0x8b225b13 ^ 0xbcf4215b32674314;
  _DAT_183376198 = (_DAT_183376198 * 0x7e13516278bbdc0b ^ _DAT_1833761d0) + uVar6;
  _DAT_183376218 = _DAT_183376198 ^ _DAT_1833761d0;
  _DAT_183376148 = 0x8b225b13;
  uVar6 = (_DAT_1833762e8 ^ _DAT_182328620) + _DAT_1833761f8 + 0xebce4cd6;
  uVar9 = (_DAT_1833761f8 ^ _UNK_182328628) + _DAT_1833762e8 + 0x1b35eb20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833762e8 ^ _DAT_182328620;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833761f8 ^ _UNK_182328628;
  _DAT_183376228 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833762e8 + 0x1b35eb20) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833761f8 + 0xebce4cd6));
  uVar6 = (ulonglong)((uint)_DAT_183376228 & 0x6fec6ff3);
  _DAT_183376270 = (_DAT_183376270 ^ uVar6) + 0x74d984d3 ^ 0xc260a78167f2a604;
  _DAT_1833762b0 = (_DAT_1833762b0 * 0x3285c24952494f4b ^ _DAT_183376270) + uVar6;
  _DAT_183376248 = _DAT_1833762b0 ^ _DAT_183376270;
  _DAT_1833762c8 = 0x74d984d3;
  uVar6 = (~_DAT_1833762b8 + 0x1b35eb21) *
          ((_DAT_183376180 ^ 0xebce4cd6) + (ulonglong)((uint)_DAT_183376180 & 0xebce4cd6) * 2);
  uVar6 = (uVar6 | _DAT_183376268) + (uVar6 & _DAT_183376268);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376130 = func_0x00018dac3db0((uVar6 | 0xf0fba7f6) + (ulonglong)((uint)uVar6 & 0xf0fba7f6))
  ;
  uVar6 = (_DAT_183376130 ^ 0x8dd6a10f60) & 0x1ffffffffff;
  _DAT_1833762a8 = (_DAT_1833762a8 ^ uVar6) + 0xb246b20 ^ 0x9458811a05f65533;
  _DAT_1833761a0 = (_DAT_1833761a0 * -0xb581196536260c1 ^ _DAT_1833762a8) + uVar6;
  _DAT_1833762d8 = _DAT_1833761a0 ^ _DAT_1833762a8;
  _DAT_183376140 = 0xb246b20;
  uVar6 = (_DAT_1833762f8 ^ _DAT_182328630) + _DAT_1833762f8 + 0xf0fba7f6;
  uVar9 = (_DAT_1833762f8 ^ _UNK_182328638) + _DAT_1833762f8 + 0x1648d640;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833762f8 ^ _DAT_182328630;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833762f8 ^ _UNK_182328638;
  _DAT_1833762c0 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833762f8 + 0x1648d640) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833762f8 + 0xf0fba7f6));
  uVar6 = _DAT_1833762c0 << 0x3c | _DAT_1833762c0 >> 4;
  _DAT_1833761b0 = _DAT_183376258 ^ uVar6 ^ 0x8b225b13;
  _DAT_183376258 = (_DAT_183376258 ^ uVar6) + 0x8b225b13 ^ 0xbd91f74b3569e1ad;
  _DAT_183376228 = (_DAT_183376228 * -0x56aa76aa6ce76771 ^ _DAT_183376258) + uVar6;
  _DAT_1833762c8 = _DAT_183376228 ^ _DAT_183376258;
  _DAT_1833761b8 = 0x8b225b13;
  uVar6 = (~_DAT_183376260 + 0x8b225b14) *
          ((_DAT_1833761d8 ^ 0xf007836) + (ulonglong)((uint)_DAT_1833761d8 & 0xf007836) * 2);
  uVar6 = (uVar6 | _DAT_183376188) + (uVar6 & _DAT_183376188);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833762a0 = func_0x00018dac3db0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  _DAT_183376138 =
       (ulonglong)
       (~((int)_DAT_1833762a0 * -0x20000000 | (uint)(_DAT_1833762a0 * -0x6b016fbae7a51a21 >> 0x23))
       & 0x8b225b13);
  _DAT_1833761a8 = _DAT_1833761a8 ^ _DAT_183376138 ^ 0x1b2e8736159d11a6;
  _DAT_183376260 = (_DAT_183376260 * -0x4fd5d2328b364bf7 ^ _DAT_1833761a8) + _DAT_183376138;
  _DAT_183376218 = _DAT_183376260 ^ _DAT_1833761a8;
  _DAT_183376240 = 0;
  _DAT_183376150 = func_0x00018dac3db0(_DAT_183376108 + 0xffd3007bdaffddff ^ 0x1e);
  _DAT_183376200 = _DAT_183376260 ^ _DAT_183376150 ^ 0xf000;
  _DAT_1833762e0 = (_DAT_1833762e0 ^ _DAT_183376150) + 0xf000 ^ 0xa9d0e357c1d0d2c4;
  _DAT_1833762a8 = (_DAT_1833762a8 * 0x11e71e2e6b9ce143 ^ _DAT_1833762e0) + _DAT_183376150;
  _DAT_183376198 = _DAT_1833762a8 ^ _DAT_1833762e0;
  _DAT_1833761e8 = 0xf000;
  uVar6 = (_DAT_183376248 ^ _DAT_182328640) + _DAT_1833761a0 + 0xebce4cd6;
  uVar9 = (_DAT_1833761a0 ^ _UNK_182328648) + _DAT_183376248 + 0xffffffff;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376248 ^ _DAT_182328640;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833761a0 ^ _UNK_182328648;
  _DAT_183376268 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183376248 + 0xffffffff) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833761a0 + 0xebce4cd6));
  uVar6 = (ulonglong)(~(uint)_DAT_183376268 & 0x40000000);
  _DAT_1833762a0 = (_DAT_1833762a0 ^ uVar6) + 0x9013900c ^ 0x9a87594d6429639b;
  _DAT_1833761f0 = (_DAT_1833761f0 * -0x79a8766d7aa7be5b ^ _DAT_1833762a0) + uVar6;
  _DAT_1833762b0 = _DAT_1833761f0 ^ _DAT_1833762a0;
  _DAT_1833762d0 = 0x9013900c;
  uVar6 = (~_DAT_1833762e8 + 0x9013900d) *
          ((_DAT_183376150 ^ 0xebce4cd6) + (ulonglong)((uint)_DAT_183376150 & 0xebce4cd6) * 2);
  uVar6 = (uVar6 | _DAT_183376138) + (uVar6 & _DAT_183376138);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833762a8 = func_0x00018dac3db0((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda))
  ;
  uVar6 = _DAT_1833762a8 << 0x2e | (_DAT_1833762a8 & 0x7fffffffffffffff) >> 0x12;
  _DAT_1833761f8 = _DAT_1833761f8 ^ uVar6 ^ 0x67db94ccadd8152b;
  _DAT_183376288 = (_DAT_183376288 * -0x526d20ac1581ba3b ^ _DAT_1833761f8) + uVar6;
  _DAT_183376128 = _DAT_183376288 ^ _DAT_1833761f8;
  _DAT_183376170 = 0;
  uVar6 = ((_DAT_183376108 ^ 0x8422d325) + (ulonglong)((uint)_DAT_183376108 & 0x8422d325) * 2) *
          -_DAT_183376278;
  uVar6 = (uVar6 | _DAT_1833762c0) + (uVar6 & _DAT_1833762c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833761a0 = func_0x00018dac3db0((uVar6 | 0x8422d325) + (ulonglong)((uint)uVar6 & 0x8422d325))
  ;
  uVar6 = _DAT_1833761a0 & 0x7ffffffe000000;
  _DAT_1833761d0 = _DAT_183376108 ^ uVar6 ^ 0xf000;
  _DAT_1833761a8 = (_DAT_1833761a8 ^ uVar6) + 0xf000 ^ 0x548be612482744e4;
  _DAT_1833762c8 = (_DAT_1833762c8 * 0x7856858fb17684bb ^ _DAT_1833761a8) + uVar6;
  _DAT_1833762d0 = _DAT_1833762c8 ^ _DAT_1833761a8;
  _DAT_183376138 = 0xf000;
  uVar6 = ((_DAT_183376128 ^ 0x8422d325) + (ulonglong)((uint)_DAT_183376128 & 0x8422d325) * 2) *
          -_DAT_183376288;
  uVar6 = (uVar6 | _DAT_183376230) + (uVar6 & _DAT_183376230);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833761e8 = func_0x00018dac3db0((uVar6 | 0x8422d325) + (ulonglong)((uint)uVar6 & 0x8422d325))
  ;
  uVar6 = _DAT_1833761e8 - (_DAT_1833761e8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1833761e8;
  _DAT_183376290 = _DAT_1833762b8 ^ uVar6 ^ 0xf000;
  _DAT_183376108 = (_DAT_183376108 ^ uVar6) + 0xf000 ^ 0xda0ed251435328eb;
  _DAT_1833761c8 = (_DAT_1833761c8 * 0x1f67726a06d5aee7 ^ _DAT_183376108) + uVar6;
  _DAT_183376128 = _DAT_1833761c8 ^ _DAT_183376108;
  _DAT_183376208 = 0xf000;
  uVar1 = *(uint *)(unaff_RBP + 0x80);
  auVar11._8_8_ = _UNK_180144ff8;
  auVar11._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar12 = pshufb(auVar11 ^ _DAT_182328650,auVar15);
  uVar9 = auVar12._8_8_ + auVar12._0_8_;
  uVar6 = uVar9 + _DAT_1833762e0;
  if (auVar12._4_4_ < 0) {
    uVar6 = _DAT_183376150 ^ uVar9;
  }
  _DAT_183376110 = func_0x00018dac3db0(SUB161(auVar11 ^ _DAT_182328650,5) ^ uVar6);
  uVar6 = _DAT_183376110 >> 1 | _DAT_183376110;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183376110;
  uVar16 = (ulonglong)uVar1 & 0xffff;
  _DAT_183376138 = (_DAT_183376138 ^ uVar6) + uVar16 ^ 0x1ed74e416a746fa;
  _DAT_1833761b0 = (_DAT_1833761b0 * 0x12404a0eb837cb3b ^ _DAT_183376138) + uVar6;
  _DAT_183376210 = _DAT_1833761b0 ^ _DAT_183376138;
  uVar6 = *(ulonglong *)(unaff_RBP + 0x10);
  auVar14._4_4_ = 0;
  auVar14._0_4_ = (uint)uVar6 ^ 0x84222325;
  auVar14._8_8_ = uVar16;
  auVar15 = pshufb(auVar14 ^ _DAT_182328660,auVar15);
  uVar10 = auVar15._8_8_ + auVar15._0_8_;
  uVar9 = uVar10 + _DAT_1833761e0;
  if (auVar15._4_4_ < 0) {
    uVar9 = _DAT_183376140 ^ uVar10;
  }
  _DAT_1833761e8 = uVar16;
  _DAT_1833762a0 = func_0x00018dac3db0(SUB161(auVar14 ^ _DAT_182328660,5) ^ uVar9);
  _DAT_183376158 = uVar6 | uVar16;
  _DAT_183376260 = (_DAT_183376260 ^ _DAT_1833762a0) + _DAT_183376158 ^ 0x214098878508c5a0;
  _DAT_183376248 = (_DAT_183376248 * -0x4f23e0a6f3d262ff ^ _DAT_183376260) + _DAT_1833762a0;
  _DAT_1833762d0 = _DAT_183376248 ^ _DAT_183376260;
  *(int *)(unaff_RBP + 0x80) = (int)_DAT_183376158;
  plVar4 = *(longlong **)(unaff_RBP + 0x20);
  lVar7 = (**(code **)(*plVar4 + 0x6f0))(plVar4);
  *(int *)(unaff_RBP + 0x90) = (int)*(char *)(lVar7 + *(int *)(unaff_RBP + 0x98));
  (**(code **)(*plVar4 + 0x6f8))(plVar4);
  uVar1 = *(uint *)(unaff_RBP + 0x90);
  uVar6 = (_DAT_183376138 ^ _DAT_182328670) + _DAT_1833762a0 + 0xa48aacf1;
  uVar9 = (_DAT_1833762a0 ^ _UNK_182328678) + _DAT_183376138 + 0xb6962d0f;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376138 ^ _DAT_182328670;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833762a0 ^ _UNK_182328678;
  _DAT_183376168 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183376138 + 0xb6962d0f) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833762a0 + 0xa48aacf1));
  uVar6 = (_DAT_183376168 ^ 0x174afec48960b16c) * -0x20ca005568ba2669;
  _DAT_183376170 = (_DAT_183376170 ^ uVar6) + 0x963ea2db ^ 0x1278c73ac63fc706;
  _DAT_183376118 = (_DAT_183376118 * -0x5bbe786c4b207efd ^ _DAT_183376170) + uVar6;
  _DAT_183376240 = _DAT_183376118 ^ _DAT_183376170;
  _DAT_183376290 = 0x963ea2db;
  uVar6 = (_DAT_1833761a0 ^ _DAT_182328680) + _DAT_1833762a8 + 0x84222325;
  uVar9 = (_DAT_1833762a8 ^ _UNK_182328688) + _DAT_1833761a0 + 0xf35924d4;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833761a0 ^ _DAT_182328680;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833762a8 ^ _UNK_182328688;
  _DAT_1833762c8 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833761a0 + 0xf35924d4) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833762a8 + 0x84222325));
  uVar6 = (_DAT_1833762c8 << 0x2f | _DAT_1833762c8 >> 0x11) ^ 0xf35924d4;
  _DAT_183376290 = (_DAT_183376290 ^ uVar6) - 0xf35924d4 ^ 0x490cf8baf062b500;
  _DAT_183376258 = (_DAT_183376258 * 0x1d9e07d779db62cf ^ _DAT_183376290) + uVar6;
  _DAT_1833762a0 = _DAT_183376258 ^ _DAT_183376290;
  _DAT_183376200 = 0xca6db2c;
  uVar6 = (~_DAT_183376168 + 0xf35924d5) *
          ((_DAT_183376288 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183376288 & 0x8422231a) * 2);
  uVar6 = (uVar6 | _DAT_183376140) + (uVar6 & _DAT_183376140);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376128 = func_0x00018dac3db0((uVar6 | 0x777b07ce) + (ulonglong)((uint)uVar6 & 0x777b07ce))
  ;
  uVar9 = (_DAT_183376128 ^ 0xf3590000) & 0xffffffffffff0000;
  uVar6 = uVar9 + 0x3f;
  _DAT_183376290 = _DAT_1833761a0 ^ uVar6 ^ 0xf3592513;
  _DAT_1833762a0 = (uVar6 ^ _DAT_1833762a0) + 0xf3592513 ^ 0xa2675e6cf51376c;
  _DAT_1833762d0 = uVar9 + (_DAT_1833762d0 * 0x324607654e5e7935 ^ _DAT_1833762a0) + 0x3f;
  _DAT_183376120 = _DAT_1833762a0 ^ _DAT_1833762d0;
  _DAT_183376178 = 0xf3592513;
  _DAT_183376288 = func_0x00018dac3db0(_DAT_183376170 + 0xffb3006519ffdcff ^ 0x4e);
  _DAT_183376168 = _DAT_1833761c0 ^ _DAT_183376288 ^ 0x10000003f;
  _DAT_1833761e0 = (_DAT_1833761e0 ^ _DAT_183376288) + 0x10000003f ^ 0xaa550e281759a3de;
  _DAT_1833762b8 = (_DAT_1833762b8 * -0x611c3ed99dd0da5b ^ _DAT_1833761e0) + _DAT_183376288;
  _DAT_183376198 = _DAT_1833762b8 ^ _DAT_1833761e0;
  _DAT_183376278 = 0x3f;
  _DAT_183376158 = func_0x00018dac3db0(_DAT_183376280 ^ 0x20ffa612ffc913);
  uVar6 = _DAT_183376158 << 0xe | _DAT_183376158 >> 0x32;
  _DAT_183376280 = (_DAT_183376280 ^ uVar6) - 0xe21c0010 ^ 0x2aee669b2a517ac2;
  _DAT_183376218 = (_DAT_183376218 * 0x2c8c0d36d40392ad ^ _DAT_183376280) + uVar6;
  _DAT_183376250 = _DAT_183376218 ^ _DAT_183376280;
  _DAT_183376168 = 0x1de3fff0;
  _DAT_183376210 = func_0x00018dac3db0(_DAT_183376128 + 0x1effe1f5ffd9ff ^ 0x4e);
  uVar6 = _DAT_183376210 << 0x19 | _DAT_183376210 >> 0x27;
  _DAT_183376218 = _DAT_183376140 ^ uVar6 ^ 0xe21c004f;
  _DAT_183376180 = (_DAT_183376180 ^ uVar6) + 0xe21c004f ^ 0x7a1b37260d8215e6;
  _DAT_1833761d8 = (_DAT_1833761d8 * 0xc26d05f50b46ffb ^ _DAT_183376180) + uVar6;
  _DAT_183376230 = _DAT_1833761d8 ^ _DAT_183376180;
  _DAT_1833762f0 = 0xe21c004f;
  uVar6 = (~_DAT_183376100 + 0x1de3fff1) *
          ((_DAT_1833761a8 ^ 0x663e236a) + (ulonglong)((uint)_DAT_1833761a8 & 0x663e236a) * 2);
  uVar6 = (uVar6 | _DAT_183376110) + (uVar6 & _DAT_183376110);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018dac3db0((uVar6 | 0x7bdddc9a) + (ulonglong)((uint)uVar6 & 0x7bdddc9a));
  _DAT_183376268 = (uVar6 & 0x7fffffffffffffff) * -0x446d15a76d57aa71 & 0xffffffffffffff80;
  _DAT_1833761e0 = _DAT_183376298 ^ _DAT_183376268 ^ 0x10000003f;
  _DAT_183376110 = (_DAT_183376110 ^ _DAT_183376268) + 0x10000003f ^ 0x1b351c29576c8a4b;
  _DAT_183376268 = (uVar6 * -0x742a04edf9e03feb ^ _DAT_183376110) + _DAT_183376268;
  _DAT_183376288 = _DAT_183376268 ^ _DAT_183376110;
  _DAT_1833761b0 = 0x3f;
  uVar6 = (_DAT_1833761b8 ^ _DAT_182328690) + _DAT_183376250 + 0x84222325;
  uVar9 = (_DAT_183376250 ^ _UNK_182328698) + _DAT_1833761b8 + 0xf40e0df8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833761b8 ^ _DAT_182328690;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376250 ^ _UNK_182328698;
  _DAT_183376230 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833761b8 + 0xf40e0df8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376250 + 0x84222325));
  _DAT_1833761a0 =
       (_DAT_1833761a0 ^ _DAT_183376230 * -0x7abfdaa376af9223) - 0xf40e0df8 ^ 0x7a46635b1db2dac5;
  _DAT_183376268 =
       (_DAT_183376268 * 0x638974a28f4c9cbb ^ _DAT_1833761a0) + _DAT_183376230 * -0x7abfdaa376af9223
  ;
  _DAT_183376288 = _DAT_183376268 ^ _DAT_1833761a0;
  _DAT_183376148 = 0xbf1f208;
  _DAT_183376270 = func_0x00018dac3db0(_DAT_183376160 ^ 0xffd9ffaf21ffd366);
  uVar6 = _DAT_183376270 * 0x1d1305e6bb70a9ef;
  _DAT_183376290 = _DAT_1833761a0 ^ uVar6 ^ 0xf40e0e37;
  _DAT_183376250 = (_DAT_183376250 ^ uVar6) + 0xf40e0e37 ^ 0x7c3fc6d8d56d42f0;
  _DAT_183376170 = (_DAT_183376170 * 0x1b56a085887bcae3 ^ _DAT_183376250) + uVar6;
  _DAT_183376200 = _DAT_183376170 ^ _DAT_183376250;
  _DAT_1833761c0 = 0xf40e0e37;
  uVar6 = (~_DAT_183376218 + 0xbf1f209) *
          ((_DAT_1833762d8 ^ 0x702c2d12) + (ulonglong)((uint)_DAT_1833762d8 & 0x702c2d12) * 2);
  uVar6 = (uVar6 | _DAT_183376198) + (uVar6 & _DAT_183376198);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376238 = func_0x00018dac3db0((uVar6 | 0x7bdddf1a) + (ulonglong)((uint)uVar6 & 0x7bdddf1a))
  ;
  _DAT_183376160 = (_DAT_183376160 ^ _DAT_183376238 ^ 0xfffffe3f) + 0x10000003f ^ 0x9d93cd83593b4f5a
  ;
  _DAT_183376188 =
       (_DAT_183376188 * 0x3ac2fb94e6efb9a5 ^ _DAT_183376160) + (_DAT_183376238 ^ 0xfffffe3f);
  _DAT_183376190 = _DAT_183376188 ^ _DAT_183376160;
  _DAT_183376290 = 0x3f;
  _DAT_1833762a8 = func_0x00018dac3db0(_DAT_183376138 + 0x200b6a800e4ff ^ 0xde);
  uVar6 = _DAT_1833762a8 * -0x72d5ab66cc870da1 ^ 0xebfbbf96;
  _DAT_183376108 = (_DAT_183376108 ^ uVar6) + 0x7dc51d4d ^ 0xc1ccc13c0ccb5383;
  _DAT_183376180 = (_DAT_183376180 * 0xd8ce1caefa76cc9 ^ _DAT_183376108) + uVar6;
  _DAT_183376128 = _DAT_183376180 ^ _DAT_183376108;
  _DAT_183376208 = 0x7dc51d4d;
  uVar6 = (_DAT_183376148 ^ _DAT_1823286a0) + _DAT_183376220 + 0x6fd99cb3;
  uVar9 = (_DAT_183376220 ^ _UNK_1823286a8) + _DAT_183376148 + 0x963ea2db;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376148 ^ _DAT_1823286a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376220 ^ _UNK_1823286a8;
  _DAT_183376128 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183376148 + 0x963ea2db) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376220 + 0x6fd99cb3));
  uVar6 = _DAT_183376128 - (_DAT_183376128 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183376128;
  _DAT_183376238 = (_DAT_183376238 ^ uVar6) + 0x823aa292 ^ 0x9e5b5824db465c10;
  _DAT_1833762a8 = (_DAT_1833762a8 * -0x17349753b243d24b ^ _DAT_183376238) + uVar6;
  _DAT_1833761b8 = _DAT_1833762a8 ^ _DAT_183376238;
  _DAT_183376178 = 0x823aa292;
  uVar6 = (_DAT_183376190 ^ _DAT_1823286b0) + _DAT_183376278 + 0xf9e73e68;
  uVar9 = (_DAT_183376278 ^ _UNK_1823286b8) + _DAT_183376190 + 0x4754524;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376190 ^ _DAT_1823286b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376278 ^ _UNK_1823286b8;
  _DAT_183376220 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183376190 + 0x4754524) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376278 + 0xf9e73e68));
  uVar6 = _DAT_183376220 - (_DAT_183376220 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar5 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = ((uint)bVar5 + (uint)bVar5 ^ _DAT_183376220) & 0x7fffffffffffffff;
  _DAT_183376240 = _DAT_183376228 ^ uVar6 ^ 0x823a6271;
  _DAT_183376180 = (_DAT_183376180 ^ uVar6) + 0x823a6271 ^ 0x2a4b234e97336c9c;
  _DAT_183376108 = (_DAT_183376108 * 0x40d0ca0c114753b7 ^ _DAT_183376180) + uVar6;
  _DAT_183376278 = _DAT_183376108 ^ _DAT_183376180;
  _DAT_1833761d8 = 0x823a6271;
  uVar6 = (_DAT_183376230 ^ _DAT_1823286c0) + _DAT_183376208 + 0x6184154;
  uVar9 = (_DAT_183376208 ^ _UNK_1823286c8) + _DAT_183376230 + 0x823a6271;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376230 ^ _DAT_1823286c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183376208 ^ _UNK_1823286c8;
  _DAT_183376250 =
       func_0x00018dac3db0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183376230 + 0x823a6271) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376208 + 0x6184154));
  uVar6 = _DAT_183376250 >> 1 | _DAT_183376250;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  _DAT_183376170 =
       (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
       _DAT_183376250;
  _DAT_183376168 = _DAT_183376168 ^ _DAT_183376170 ^ 0xad993bb97e9dd5da;
  _DAT_1833761e0 = (_DAT_1833761e0 * -0x70a2f50ed08ee4eb ^ _DAT_183376168) + _DAT_183376170;
  _DAT_183376230 = _DAT_1833761e0 ^ _DAT_183376168;
  _DAT_183376298 = 0;
  uVar6 = ((_DAT_183376100 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183376100 & 0x8422231a) * 2) *
          -_DAT_183376178;
  uVar6 = (uVar6 | _DAT_1833761b0) + (uVar6 & _DAT_1833761b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376238 = func_0x00018dac3db0((uVar6 | 0x8422231a) + (ulonglong)((uint)uVar6 & 0x8422231a))
  ;
  uVar6 = _DAT_183376238 << 6 | (_DAT_183376238 & 0x7fffffffffffffff) >> 0x3a;
  _DAT_1833761d8 = (_DAT_1833761d8 ^ uVar6) + 0x3f ^ 0xe0c8f1b6dc188970;
  _DAT_183376110 = (_DAT_183376110 * -0x486c029fa1ef47e1 ^ _DAT_1833761d8) + uVar6;
  _DAT_183376138 = _DAT_183376110 ^ _DAT_1833761d8;
  _DAT_183376118 = 0x3f;
  _DAT_183376120 = func_0x00018dac3db0(_DAT_1833762c0 ^ 0xff9cff8fcbffdd90);
  _DAT_183376268 = (_DAT_183376268 ^ _DAT_183376120) + 0x14044069 ^ 0xecaa7395b46df02e;
  _DAT_183376130 = (_DAT_183376130 * 0x1094a3cd9b722899 ^ _DAT_183376268) + _DAT_183376120;
  _DAT_183376288 = _DAT_183376130 ^ _DAT_183376268;
  _DAT_183376118 = 0x14044069;
  uVar6 = (~_DAT_183376288 + 0xcaeb2307) *
          ((_DAT_183376250 ^ 0x4ec90023) + (ulonglong)((uint)_DAT_183376250 & 0x4ec90023) * 2);
  uVar6 = (uVar6 | _DAT_1833761e0) + (uVar6 & _DAT_1833761e0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833762e0 = func_0x00018dac3db0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  _DAT_183376168 = _DAT_183376168 ^ _DAT_1833762e0 * -0x1b5582d1de14f373 ^ 0x647648dac46c7139;
  _DAT_183376108 =
       (_DAT_183376108 * 0x2ac317ef5a2054ed ^ _DAT_183376168) + _DAT_1833762e0 * -0x1b5582d1de14f373
  ;
  _DAT_183376168 = _DAT_183376108 ^ _DAT_183376168;
  _DAT_1833762b0 = 0;
  _DAT_1833761d0 = func_0x00018dac3db0(_DAT_183376140 ^ 0x1cff8419ffe1c1);
  _DAT_183376268 = 0x3f;
  _DAT_183376238 = (_DAT_183376238 ^ _DAT_1833761d0) + 0x3f ^ 0xd07ebcf15a2aa831;
  _DAT_183376280 = (_DAT_183376280 * 0x4bfbaa28566a54d ^ _DAT_183376238) + _DAT_1833761d0;
  _DAT_183376128 = _DAT_183376280 ^ _DAT_183376238;
  _DAT_1833762d8 = 0x3f;
  uVar6 = (ulonglong)uVar1 ^ 0x84222325;
  uVar9 = uVar6 ^ _DAT_1833762c0;
  lVar7 = uVar6 + _DAT_1833762d0;
  uVar6 = uVar9 + lVar7;
  uVar16 = (_DAT_1833762d0 ^ 0x3f) + _DAT_1833762c0 + 0x3f;
  uVar9 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar9;
  uVar6 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1833762d0 ^ 0x3f;
  _DAT_183376100 =
       func_0x00018dac3db0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833762c0 + 0x3f) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar7);
  uVar6 = uVar1 ^ _DAT_183376100;
  _DAT_183376218 = (ulonglong)(uVar1 & 0x3f);
  _DAT_183376160 = (_DAT_183376160 ^ uVar6) + _DAT_183376218 ^ 0xb68aa4a50ae39eed;
  _DAT_183376250 = (_DAT_183376250 * -0x47a0011ae812599 ^ _DAT_183376160) + uVar6;
  _DAT_1833761e8 = _DAT_183376250 ^ _DAT_183376160;
  *(undefined8 *)(unaff_RBP + 0x90) = *(undefined8 *)(unaff_RBP + 0x18);
  uVar2 = *(uint *)(unaff_RBP + 0x30);
  *(uint *)(unaff_RBP + 0x98) = uVar2;
  uVar6 = (ulonglong)uVar2 ^ 0x84222325;
  uVar9 = uVar6 ^ _DAT_183376100;
  lVar7 = uVar6 + _DAT_183376190;
  uVar6 = uVar9 + lVar7;
  uVar16 = (_DAT_183376190 ^ 1) + _DAT_183376100 + 1;
  iVar3 = *(int *)(unaff_RBP + 0x80);
  uVar9 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar9;
  uVar6 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_183376190 ^ 1;
  uVar6 = func_0x00018dac3db0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376100 + 1) ^
                              (uVar9 << 0x1d | uVar9 >> 0x23) - lVar7);
  uVar6 = uVar6 & 0x1fffffffc00 ^ (ulonglong)uVar2;
  uVar18 = uVar2 & unaff_XMM15_Da;
  uVar13 = uVar2 | unaff_XMM15_Da;
  uVar17 = uVar2 ^ (uint)DAT_18001a710;
  lVar7 = ((ulonglong)uVar2 * (ulonglong)_DAT_182328760 << 0x20) +
          (ulonglong)uVar2 * (ulonglong)_DAT_182328750;
  _DAT_1833762a8 =
       ((((ulonglong)uVar17 * (ulonglong)_DAT_1823286d0 + _DAT_182328740 << 0x20) +
         (ulonglong)uVar17 * (ulonglong)_DAT_182328730 +
         ((ulonglong)(uVar2 ^ unaff_XMM15_Da) * (ulonglong)_DAT_182328700 << 0x20) +
         (ulonglong)(uVar2 ^ unaff_XMM15_Da) * (ulonglong)_DAT_1823286f0 +
         ((ulonglong)uVar18 * (ulonglong)_DAT_182328700 << 0x20 |
         (ulonglong)uVar18 * (ulonglong)_DAT_1823286f0) +
         (ulonglong)uVar2 * (ulonglong)_DAT_1823286e0 +
         ((ulonglong)uVar2 * (ulonglong)_DAT_1823286d0 << 0x20) + lVar7 +
        ((ulonglong)uVar13 * (ulonglong)_DAT_182328720 << 0x20) +
        (ulonglong)uVar13 * (ulonglong)_DAT_182328710) -
       (((ulonglong)uVar13 * (ulonglong)_DAT_1823287a0 << 0x20) +
        (ulonglong)uVar13 * (ulonglong)_DAT_182328790 +
        ((ulonglong)uVar18 * (ulonglong)_DAT_1823287a0 << 0x20 |
        (ulonglong)uVar18 * (ulonglong)_DAT_182328790) +
        ((ulonglong)uVar2 * (ulonglong)_DAT_182328780 << 0x20) +
        (ulonglong)uVar2 * (ulonglong)_DAT_182328770 + lVar7 +
       ((ulonglong)uVar17 * (ulonglong)_DAT_1823287c0 + _DAT_1823287d0 << 0x20) +
       (ulonglong)uVar17 * (ulonglong)_DAT_1823287b0)) + 0x99363ba622c6344d;
  _DAT_1833762d8 = _DAT_1833761a0 ^ uVar6 ^ _DAT_1833762a8;
  _DAT_183376100 = (_DAT_183376100 ^ uVar6) + _DAT_1833762a8 ^ 0xbf3ee5fd0599fc95;
  _DAT_183376170 = (_DAT_183376170 * 0x38636694bc168dff ^ _DAT_183376100) + uVar6;
  _DAT_1833761a0 = _DAT_183376170 ^ _DAT_183376100;
  _DAT_1833762a8 = _DAT_1833762a8 & 0xffffffff;
  *(uint *)(unaff_RBP + 0xa0) = (uVar1 & 0x3f) + iVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x60)) {
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
  }
}



// ===== continuation @ rva daaf7a0 (image 18daaf7a0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daaf7a0(void)

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



// ===== continuation @ rva da9d180 (image 18da9d180) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da9d180(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint unaff_EDI;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = unaff_EDI % 10;
  uVar1 = func_0x00018dac3db0(_DAT_183376188 ^ 0xffe0ff7c3c001dcc);
  _DAT_183376208 = (uVar1 ^ uVar1 ^ 0xb) + 0x7b ^ 0x99e744c6b3641d88;
  _DAT_1833761c8 = (_DAT_1833761c8 * 0x1eea32ce1f425263 ^ _DAT_183376208) + (uVar1 ^ 0xb);
  _DAT_183376180 = _DAT_1833761c8 ^ _DAT_183376208;
  _DAT_183376258 = 0x7b;
  uVar1 = (_DAT_183376108 ^ _DAT_18072f0d0) + _DAT_1833761f0 + 0x84222325;
  uVar4 = (_DAT_1833761f0 ^ _UNK_18072f0d8) + _DAT_183376108 + 0xf4;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183376108 ^ _DAT_18072f0d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833761f0 ^ _UNK_18072f0d8;
  _DAT_183376200 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376108 + 0xf4) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833761f0 + 0x84222325));
  uVar1 = (_DAT_183376200 ^ 0xf4) * -0x7429378fad7fd8a3;
  _DAT_183376248 = (_DAT_183376248 ^ uVar1) - 0xf4 ^ 0xbae7f1ab2df50e41;
  _DAT_183376240 = (_DAT_183376240 * 0x2b371e5ed447dd29 ^ _DAT_183376248) + uVar1;
  _DAT_1833762e0 = _DAT_183376240 ^ _DAT_183376248;
  _DAT_183376148 = 0xc;
  _DAT_183376210 = func_0x00018dac3db0(_DAT_1833762b0 ^ 0x1f007c1effe110);
  uVar1 = (ulonglong)(~(uint)_DAT_183376210 & 0x30);
  _DAT_183376270 = _DAT_1833761b8 ^ uVar1 ^ 0x124;
  _DAT_183376258 = (_DAT_183376258 ^ uVar1) + 0x124 ^ 0x49a3b4df521f89c9;
  _DAT_1833761b8 = (_DAT_1833761b8 * 0x2f73e46442ad18e1 ^ _DAT_183376258) + uVar1;
  _DAT_183376138 = _DAT_1833761b8 ^ _DAT_183376258;
  _DAT_1833761e0 = 0x24;
  uVar1 = (_DAT_183376288 ^ _DAT_181ab3960) + _DAT_1833762a0 + 0x84222315;
  uVar4 = (_DAT_1833762a0 ^ _UNK_181ab3968) + _DAT_183376288 + 0x44;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183376288 ^ _DAT_181ab3960;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833762a0 ^ _UNK_181ab3968;
  _DAT_1833762d0 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376288 + 0x44) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833762a0 + 0x84222315));
  _DAT_183376200 = _DAT_1833761c0 ^ _DAT_1833762d0 ^ 0x74;
  _DAT_1833761a0 = (_DAT_1833761a0 ^ _DAT_1833762d0) + 0x74 ^ 0x37dba2e2a29c69ad;
  _DAT_183376290 = (_DAT_183376290 * 0x398ba0c4354d244b ^ _DAT_1833761a0) + _DAT_1833762d0;
  _DAT_1833761e0 = _DAT_183376290 ^ _DAT_1833761a0;
  _DAT_1833762b8 = 0x74;
  uVar1 = (_DAT_1833762c8 ^ _DAT_180269f00) + _DAT_1833761d0 + 0x84222351;
  uVar4 = (_DAT_1833761d0 ^ _UNK_180269f08) + _DAT_1833762c8 + 0xbc;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833762c8 ^ _DAT_180269f00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833761d0 ^ _UNK_180269f08;
  _DAT_183376260 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833762c8 + 0xbc) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833761d0 + 0x84222351));
  uVar1 = ((_DAT_183376260 ^ 0x5530) << 0x15 | _DAT_183376260 >> 0x2b) ^ 0x74;
  _DAT_183376288 = _DAT_183376248 ^ uVar1 ^ 0x130;
  _DAT_183376168 = (_DAT_183376168 ^ uVar1) + 0x130 ^ 0xc69789d374cfa836;
  _DAT_183376130 = (_DAT_183376130 * -0x116b6592f273b7bd ^ _DAT_183376168) + uVar1;
  _DAT_1833762a0 = _DAT_183376130 ^ _DAT_183376168;
  _DAT_183376218 = 0x30;
  uVar1 = (_DAT_183376138 ^ _DAT_1823287e0) + _DAT_1833761f0 + 0x84222315;
  uVar4 = (_DAT_1833761f0 ^ _UNK_1823287e8) + _DAT_183376138 + 0xf9;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183376138 ^ _DAT_1823287e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833761f0 ^ _UNK_1823287e8;
  _DAT_183376290 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376138 + 0xf9) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833761f0 + 0x84222315));
  uVar1 = _DAT_183376290 ^ 0x30;
  _DAT_183376270 = _DAT_1833762d8 ^ uVar1 ^ 0x129;
  _DAT_1833762b8 = (_DAT_1833762b8 ^ uVar1) + 0x129 ^ 0x97593ca4e723624e;
  _DAT_183376288 = (_DAT_183376288 * 0x73b0ed6006137aeb ^ _DAT_1833762b8) + uVar1;
  _DAT_183376130 = _DAT_183376288 ^ _DAT_1833762b8;
  _DAT_1833761b8 = 0x29;
  uVar1 = (_DAT_183376150 ^ _DAT_1823287f0) + _DAT_1833761f0 + 0x8422235e;
  uVar4 = (_DAT_1833761f0 ^ _UNK_1823287f8) + _DAT_183376150 + 0x50;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183376150 ^ _DAT_1823287f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833761f0 ^ _UNK_1823287f8;
  _DAT_183376130 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376150 + 0x50) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833761f0 + 0x8422235e));
  uVar1 = _DAT_183376130 << 0x10 | _DAT_183376130 >> 0x30;
  _DAT_1833762f0 = (_DAT_1833762f0 ^ uVar1) + 0x2b ^ 0x20eb93ef47dbafae;
  _DAT_183376140 = (_DAT_183376140 * -0x3d933a1a81c0988f ^ _DAT_1833762f0) + uVar1;
  _DAT_183376258 = _DAT_183376140 ^ _DAT_1833762f0;
  _DAT_183376180 = 0x2b;
  uVar1 = (~_DAT_1833762d8 + 0x51) *
          ((_DAT_183376208 ^ 0x8422235e) + (ulonglong)((uint)_DAT_183376208 & 0x8422235e) * 2);
  uVar1 = (uVar1 | _DAT_183376258) + (uVar1 & _DAT_183376258);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183376288 = func_0x00018dac3db0((uVar1 | 0x8422230e) + (ulonglong)((uint)uVar1 & 0x8422230e))
  ;
  _DAT_1833761e0 =
       (_DAT_1833761e0 ^ _DAT_183376288 & 0xfffffffffffe0000) + 0x50 ^ 0xac960834406963da;
  _DAT_1833761e8 =
       (_DAT_1833761e8 * 0x7f80889b8477fb85 ^ _DAT_1833761e0) +
       (_DAT_183376288 & 0xfffffffffffe0000);
  _DAT_183376150 = _DAT_1833761e8 ^ _DAT_1833761e0;
  _DAT_183376258 = _DAT_1833761d0 ^ 0x50;
  _DAT_183376148 = 0x50;
  uVar1 = (_DAT_183376138 ^ _DAT_182328800) + 0x8422235e;
  uVar4 = (_UNK_182328808 ^ 0x50) + _DAT_183376138 + 0xa0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183376138 ^ _DAT_182328800;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _UNK_182328808 ^ 0x50;
  lVar2 = func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376138 + 0xa0) ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - 0x8422235e);
  uVar1 = lVar2 * -0x4256e8ad8b1acd1;
  _DAT_1833762c8 = (_DAT_183376150 ^ uVar1 ^ 0xcb ^ uVar1) + 0xcb ^ 0xc1233df10c5c9d71;
  _DAT_183376158 = (_DAT_183376158 * 0x1cf00aadba9ff331 ^ _DAT_1833762c8) + uVar1;
  _DAT_1833761c8 = _DAT_183376158 ^ _DAT_1833762c8;
  _DAT_183376118 = 0xcb;
  uVar1 = (_DAT_183376150 ^ _DAT_1810835a0) + _DAT_1833762e8 + 0x842223ee;
  uVar4 = (_DAT_1833762e8 ^ _UNK_1810835a8) + _DAT_183376150 + 0xcb;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183376150 ^ _DAT_1810835a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833762e8 ^ _UNK_1810835a8;
  _DAT_183376240 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376150 + 0xcb) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833762e8 + 0x842223ee));
  _DAT_1833761e8 = _DAT_183376240 ^ 0xcb;
  _DAT_1833762b0 = _DAT_1833762b0 ^ _DAT_1833761e8 ^ 0xb1d7b14bc122036;
  _DAT_1833762d0 = (_DAT_1833762d0 * -0x35dd38940dfdff45 ^ _DAT_1833762b0) + _DAT_1833761e8;
  _DAT_183376218 = _DAT_1833762d0 ^ _DAT_1833762b0;
  _DAT_183376110 = 0;
  uVar1 = (_DAT_1833762d0 ^ 0x84222315) + _DAT_183376180 + 0x84222315;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833762d0 ^ 0x84222315;
  uVar4 = ((_DAT_183376180 + _DAT_1833762d0) * 0x2000 | _DAT_183376180 + _DAT_1833762d0 >> 0x33) ^
          _DAT_183376180;
  uVar1 = func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1833762d0 ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183376180 + 0x84222315));
  uVar1 = uVar1 ^ 0x30;
  _DAT_183376258 = _DAT_183376168 ^ uVar1 ^ 0x30;
  _DAT_183376180 = (_DAT_183376180 ^ uVar1) + 0x30 ^ 0x61eada3583340617;
  _DAT_183376208 = (_DAT_183376208 * -0x7d51b8bac23e4b43 ^ _DAT_183376180) + uVar1;
  _DAT_183376148 = _DAT_183376208 ^ _DAT_183376180;
  _DAT_183376188 = 0x30;
  uVar1 = (~_DAT_1833762b8 + 0x100) *
          ((_DAT_183376148 ^ 0x8422235e) + (ulonglong)((uint)_DAT_183376148 & 0x8422235e) * 2);
  uVar1 = (uVar1 | _DAT_183376290) + (uVar1 & _DAT_183376290);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183376200 = func_0x00018dac3db0((uVar1 | 0x842223a1) + (ulonglong)((uint)uVar1 & 0x842223a1))
  ;
  _DAT_183376240 = (_DAT_183376240 ^ _DAT_183376148) + 0x84 ^ 0x9331a026b6349809;
  _DAT_183376108 = (_DAT_183376108 * -0x79b0f6299edb1215 ^ _DAT_183376240) + _DAT_183376148;
  _DAT_183376220 = _DAT_183376108 ^ _DAT_183376240;
  _DAT_183376148 = 0x84;
  uVar1 = (_DAT_183376278 ^ _DAT_1802b9bf0) + _DAT_183376160 + 0x8422235e;
  uVar4 = (_DAT_183376160 ^ _UNK_1802b9bf8) + _DAT_183376278 + 0x84;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183376278 ^ _DAT_1802b9bf0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183376160 ^ _UNK_1802b9bf8;
  _DAT_1833762a0 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376278 + 0x84) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183376160 + 0x8422235e));
  uVar1 = _DAT_1833762a0 ^ 0xff;
  uVar4 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar1 ^
          0x7b;
  _DAT_183376160 = _DAT_183376160 ^ uVar1 ^ 0x8a1371dd4cad99db;
  _DAT_183376240 = (_DAT_183376240 * -0x782f606b105e9f79 ^ _DAT_183376160) + uVar1;
  _DAT_1833761f0 = _DAT_183376240 ^ _DAT_183376160;
  _DAT_183376210 = 0;
  uVar1 = (_DAT_1833762d8 ^ 0x84222315) + _DAT_183376180 + 0x84222315;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833762d8 ^ 0x84222315;
  uVar4 = ((_DAT_183376180 + _DAT_1833762d8) * 0x2000 | _DAT_183376180 + _DAT_1833762d8 >> 0x33) ^
          _DAT_183376180;
  _DAT_183376200 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1833762d8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183376180 + 0x84222315));
  uVar1 = _DAT_183376200 << 9 | _DAT_183376200 >> 0x37 & 0xfffffffffffffff8;
  _DAT_183376198 = _DAT_1833762e8 ^ uVar1 ^ 0x30;
  _DAT_183376160 = (_DAT_183376160 ^ uVar1) + 0x30 ^ 0x150c6eea70d0aee7;
  _DAT_183376118 = (_DAT_183376118 * 0x492394efe71e1587 ^ _DAT_183376160) + uVar1;
  _DAT_183376160 = _DAT_183376118 ^ _DAT_183376160;
  _DAT_1833762d8 = 0x30;
  uVar1 = (_DAT_1833762f8 ^ 0x84222315) + _DAT_183376218 + 0x84222315;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833762f8 ^ 0x84222315;
  uVar4 = ((_DAT_183376218 + _DAT_1833762f8) * 0x2000 | _DAT_183376218 + _DAT_1833762f8 >> 0x33) ^
          _DAT_183376218;
  _DAT_183376248 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1833762f8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183376218 + 0x84222315));
  _DAT_183376218 = _DAT_1833761c0 ^ _DAT_1833761b8 ^ 0x30;
  _DAT_183376210 = (_DAT_183376210 ^ _DAT_1833761b8) + 0x30 ^ 0xb59e0d1b8996d00d;
  _DAT_183376150 = (_DAT_183376150 * 0x41bf1dd57d00bd59 ^ _DAT_183376210) + _DAT_1833761b8;
  _DAT_1833762a8 = _DAT_183376150 ^ _DAT_183376210;
  _DAT_1833762b8 = 0x30;
  uVar1 = (ulonglong)uVar3 ^ 0x84222325;
  uVar4 = uVar1 ^ _DAT_183376168;
  lVar2 = uVar1 + _DAT_183376168;
  uVar1 = uVar4 + lVar2;
  uVar5 = (_DAT_183376168 ^ 0x30) + _DAT_183376168 + 0x30;
  uVar4 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ uVar4;
  uVar1 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183376168 ^ 0x30;
  _DAT_183376158 =
       func_0x00018dac3db0((uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183376168 + 0x30) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  uVar1 = ((ulonglong)(uVar3 << 4) * 3 ^ _DAT_183376158) * -0x214c2ea39afb3e07;
  _DAT_183376190 = (ulonglong)uVar3 | 0x30;
  _DAT_1833761f8 = (_DAT_1833761f8 ^ uVar1) + _DAT_183376190 ^ 0xa2b9b9a48907d1f1;
  _DAT_1833761e8 = (_DAT_1833761e8 * -0x276453ef3d5ee201 ^ _DAT_1833761f8) + uVar1;
  _DAT_183376218 = _DAT_1833761e8 ^ _DAT_1833761f8;
  *(char *)(in_RAX + -1) = (char)_DAT_183376190;
  switch(unaff_EDI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva da9e2c8 (image 18da9e2c8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018da9e7c2 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18da9e2c8(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong unaff_RBP;
  ulonglong uVar15;
  ulonglong unaff_R15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  ulonglong uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar15 = uVar1 ^ 0x84222325 ^ _DAT_183376140;
  plVar2 = *(longlong **)(unaff_RBP + 0x20);
  lVar14 = (uVar1 ^ 0x84222325) + _DAT_183376238;
  uVar18 = uVar15 + lVar14;
  uVar20 = (unaff_R15 ^ _DAT_183376238) + _DAT_183376140 + unaff_R15;
  uVar15 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar15;
  uVar18 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ unaff_R15 ^ _DAT_183376238;
  _DAT_183376120 =
       func_0x00018dac3db0((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_183376140 + unaff_R15) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - lVar14);
  uVar10 = _DAT_182328ae0;
  uVar9 = _DAT_183376120 & uVar1;
  uVar19 = (uint)(uVar1 >> 0x20);
  auVar21._8_4_ = (int)uVar1;
  auVar21._0_8_ = uVar1;
  auVar21._12_4_ = uVar19;
  iVar16 = (int)unaff_R15;
  uVar17 = (uint)(unaff_R15 >> 0x20);
  uVar15 = (ulonglong)_DAT_182328ae0;
  auVar6._8_4_ = iVar16;
  auVar6._0_8_ = unaff_R15;
  auVar6._12_4_ = uVar17;
  auVar28._8_4_ = iVar16;
  auVar28._0_8_ = unaff_R15;
  auVar28._12_4_ = uVar17;
  auVar28 = auVar21 | auVar28;
  *(ulonglong *)(unaff_RBP + 0x60) = (ulonglong)uVar19;
  *(ulonglong *)(unaff_RBP + 0x68) = auVar21._8_8_ >> 0x20;
  uVar13 = _DAT_182328b20;
  uVar12 = _DAT_182328b10;
  uVar11 = _DAT_182328b00;
  uVar19 = _DAT_182328ad0;
  uVar20 = (ulonglong)_DAT_182328ad0;
  uVar27 = SUB164(auVar21 & auVar6,0);
  uVar3 = (ulonglong)_DAT_182328b00;
  uVar25 = SUB168(auVar21 & auVar6,0);
  uVar4 = (ulonglong)_DAT_182328b10;
  uVar5 = (ulonglong)_DAT_182328b10;
  uVar18 = (ulonglong)_DAT_182328b30;
  *(undefined1 (*) [16])(unaff_RBP + 0x30) = auVar28;
  auVar7._8_4_ = iVar16;
  auVar7._0_8_ = unaff_R15;
  auVar7._12_4_ = uVar17;
  uVar26 = SUB164(auVar21 ^ auVar7,0);
  uVar22 = SUB168(auVar21 ^ auVar7,0);
  auVar24._8_4_ = 0xffffffff;
  auVar24._0_8_ = 0xffffffffffffffff;
  auVar24._12_4_ = 0xffffffff;
  auVar8._8_4_ = iVar16;
  auVar8._0_8_ = unaff_R15;
  auVar8._12_4_ = uVar17;
  auVar24 = auVar24 ^ auVar8;
  uVar23 = auVar24._0_4_;
  *(ulonglong *)(unaff_RBP + 0x80) = auVar24._0_8_ >> 0x20;
  *(ulonglong *)(unaff_RBP + 0x88) = auVar24._8_8_ >> 0x20;
  _DAT_183376170 =
       (((ulonglong)_DAT_182328af0 * (ulonglong)uVar23 +
         ((auVar24._0_8_ >> 0x20) * (ulonglong)_DAT_182328af0 +
          (ulonglong)uVar19 * (ulonglong)uVar23 << 0x20) +
         (ulonglong)uVar12 * (ulonglong)uVar26 +
         ((uVar22 >> 0x20) * (ulonglong)uVar12 + (ulonglong)uVar11 * (ulonglong)uVar26 << 0x20) +
         uVar27 * uVar5 + ((uVar25 >> 0x20) * uVar4 + uVar27 * uVar3 << 0x20) +
         uVar15 * (unaff_R15 & 0xffffffff) + uVar1 +
         ((ulonglong)uVar17 * (ulonglong)uVar10 + (unaff_R15 & 0xffffffff) * uVar20 << 0x20) +
        (ulonglong)uVar13 * (ulonglong)auVar28._0_4_ +
        (uVar18 * auVar28._0_4_ + (auVar28._0_8_ >> 0x20) * (ulonglong)uVar13 << 0x20)) -
       ((ulonglong)uVar23 * (_DAT_182328ba0 & 0xffffffff) +
        ((ulonglong)_DAT_182328c10 * (ulonglong)uVar23 +
         (ulonglong)*(uint *)(unaff_RBP + 0x80) * (_DAT_182328ba0 & 0xffffffff) << 0x20) +
       (ulonglong)uVar26 * (ulonglong)_DAT_182328bf0 +
       ((ulonglong)_DAT_182328c00 * (ulonglong)uVar26 + (uVar22 >> 0x20) * (ulonglong)_DAT_182328bf0
       << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 0x30) * (ulonglong)_DAT_182328bd0 +
       ((ulonglong)_DAT_182328be0 * (ulonglong)*(uint *)(unaff_RBP + 0x30) +
        (auVar28._0_8_ >> 0x20) * (ulonglong)_DAT_182328bd0 << 0x20) +
       (ulonglong)uVar27 * (ulonglong)_DAT_182328bb0 +
       ((ulonglong)_DAT_182328bc0 * (ulonglong)uVar27 + (uVar25 >> 0x20) * (ulonglong)_DAT_182328bb0
       << 0x20) +
       ((ulonglong)(iVar16 * _DAT_182328b90 + uVar17 * _DAT_182328b80) << 0x20) +
       (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_182328b80 +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_182328b70 +
        (ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_182328b60 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_182328b60)) + 0x2a3721a7d9e2e15;
  _DAT_1833762e0 = _DAT_183376170 ^ uVar9;
  _DAT_183376210 = (_DAT_183376210 ^ uVar9) + _DAT_183376170 ^ 0x23e22d2fa5954aa1;
  _DAT_1833762c8 = (_DAT_1833762c8 * 0x202b3300c0da59e9 ^ _DAT_183376210) + uVar9;
  _DAT_183376240 = _DAT_1833762c8 ^ _DAT_183376210;
  lVar14 = unaff_RBP + -0x30;
  FUN_18414b520(lVar14);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar14 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(unaff_RBP + 0x48),lVar14);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva da99ba1 (image 18da99ba1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da99ba1(void)

{
  byte bVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar2;
  longlong unaff_R12;
  ulonglong unaff_R13;
  longlong unaff_R15;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM15_Da;
  
  uVar6 = (_DAT_183376278 ^ _DAT_180269ef0) + _DAT_183376290 + unaff_R15;
  uVar7 = (_DAT_183376290 ^ _UNK_180269ef8) + _DAT_183376278 + 0x44;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376278 ^ _DAT_180269ef0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376290 ^ _UNK_180269ef8;
  uVar6 = func_0x00018dac3db0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376278 + 0x44) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376290 + unaff_R15));
  uVar6 = (uVar6 ^ 0x44) << 0xf | uVar6 >> 0x31;
  _DAT_183376160 = (_DAT_183376160 ^ uVar6) - 0x44 ^ 0x4308e1278d58735d;
  _DAT_183376188 = (_DAT_183376188 * 0x40a018cdbf64408f ^ _DAT_183376160) + uVar6;
  _DAT_1833762e8 = _DAT_183376188 ^ _DAT_183376160;
  _DAT_183376260 = 0xbc;
  uVar6 = (_DAT_1833762d8 ^ _DAT_181ab3960) + _DAT_183376198 + 0x84222315;
  uVar7 = (_DAT_183376198 ^ _UNK_181ab3968) + _DAT_1833762d8 + 0x44;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833762d8 ^ _DAT_181ab3960;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376198 ^ _UNK_181ab3968;
  _DAT_183376150 =
       func_0x00018dac3db0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833762d8 + 0x44) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376198 + 0x84222315));
  uVar6 = _DAT_183376150 ^ 0xcf0;
  _DAT_183376118 = _DAT_1833762f8 ^ uVar6 ^ 0x74;
  _DAT_183376220 = (_DAT_183376220 ^ uVar6) + 0x74 ^ 0x58a99d807cfbc9bf;
  _DAT_1833762e8 = (_DAT_1833762e8 * 0x6b36311abf7dd44d ^ _DAT_183376220) + uVar6;
  _DAT_183376210 = _DAT_1833762e8 ^ _DAT_183376220;
  _DAT_183376218 = 0x74;
  uVar6 = (_DAT_183376110 ^ _DAT_180269f00) + _DAT_1833762c8 + 0x84222351;
  uVar7 = (_DAT_1833762c8 ^ _UNK_180269f08) + _DAT_183376110 + 0xbc;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376110 ^ _DAT_180269f00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833762c8 ^ _UNK_180269f08;
  _DAT_183376258 =
       func_0x00018dac3db0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376110 + 0xbc) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833762c8 + 0x84222351));
  uVar6 = _DAT_183376258 >> 1 | _DAT_183376258;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & unaff_R13);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38)) * 8 ^
          _DAT_183376258;
  _DAT_1833761a0 = _DAT_183376230 ^ uVar6 ^ 0x130;
  _DAT_183376108 = (_DAT_183376108 ^ uVar6) + 0x130 ^ 0xe63a5295eaa1132;
  _DAT_183376228 = (_DAT_183376228 * -0x425756d9fe1529dd ^ _DAT_183376108) + uVar6;
  _DAT_1833762d0 = _DAT_183376228 ^ _DAT_183376108;
  _DAT_183376260 = 0x30;
  _DAT_183376298 = func_0x00018dac3db0(0xffe0ff839cffde50);
  _DAT_1833762f8 =
       (_DAT_1833762f8 ^ _DAT_183376298 & 0xffffffffc0000000) - 0xc0 ^ 0xe91befe53015b016;
  _DAT_183376248 =
       (_DAT_183376248 * 0x15e3d709c9120673 ^ _DAT_1833762f8) +
       (_DAT_183376298 & 0xffffffffc0000000);
  _DAT_183376148 = _DAT_183376248 ^ _DAT_1833762f8;
  _DAT_183376158 = 0x40;
  uVar6 = (_DAT_183376258 ^ _DAT_18016dc10) + _DAT_1833761c0 + 0x84222315;
  uVar7 = (_DAT_1833761c0 ^ _UNK_18016dc18) + _DAT_183376258 + 0xc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376258 ^ _DAT_18016dc10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833761c0 ^ _UNK_18016dc18;
  _DAT_1833761b0 =
       func_0x00018dac3db0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376258 + 0xc0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833761c0 + 0x84222315));
  uVar6 = _DAT_1833761b0 << 0x20 | _DAT_1833761b0 >> 0x20 & 0xffffffffff000000;
  _DAT_1833762d0 = _DAT_183376220 ^ uVar6 ^ 0xf0;
  _DAT_183376140 = (_DAT_183376140 ^ uVar6) + 0xf0 ^ 0x9916c631888ad068;
  _DAT_1833761e8 = (_DAT_1833761e8 * 0x4f76433d2e7cce2f ^ _DAT_183376140) + uVar6;
  _DAT_1833761c8 = _DAT_1833761e8 ^ _DAT_183376140;
  _DAT_183376248 = 0xf0;
  uVar6 = (_DAT_1833761a8 ^ _DAT_1801f5f20) + _DAT_183376210 + 0x84222315;
  uVar7 = (_DAT_183376210 ^ _UNK_1801f5f28) + _DAT_1833761a8 + 0x54;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833761a8 ^ _DAT_1801f5f20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376210 ^ _UNK_1801f5f28;
  _DAT_183376158 =
       func_0x00018dac3db0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833761a8 + 0x54) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376210 + 0x84222315));
  uVar6 = _DAT_183376158 & 0x7fffffffffffffff;
  _DAT_183376260 = _DAT_183376160 ^ uVar6 ^ 0x84;
  _DAT_1833762f8 = (_DAT_1833762f8 ^ uVar6) + 0x84 ^ 0x17a09ef857c9a2b1;
  _DAT_183376160 = (_DAT_183376240 * 0x64e429f2936198a7 ^ _DAT_1833762f8) + uVar6 ^ _DAT_1833762f8;
  _DAT_183376240 = 0x84;
  _DAT_1833761b8 = func_0x00018dac3db0(_DAT_1833762e8 + 0xffe30083fd0021ff ^ 0xfb);
  uVar6 = _DAT_1833761b8 >> 1 & 0x3ffffffffff0000;
  _DAT_183376138 = (_DAT_1833762a8 ^ uVar6 ^ 0x130 ^ uVar6) + 0x130 ^ 0x4bc31cd83933f181;
  _DAT_183376130 = (_DAT_183376130 * 0x60b1d108953d4525 ^ _DAT_183376138) + uVar6;
  _DAT_183376258 = _DAT_183376130 ^ _DAT_183376138;
  _DAT_183376170 = 0x30;
  uVar6 = (_DAT_183376230 ^ _DAT_182328810) + _DAT_1833762c8 + 0x8422238e;
  uVar7 = (_DAT_1833762c8 ^ _UNK_182328818) + _DAT_183376230 + 0x73;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376230 ^ _DAT_182328810;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833762c8 ^ _UNK_182328818;
  _DAT_183376158 =
       func_0x00018dac3db0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376230 + 0x73) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833762c8 + 0x8422238e));
  _DAT_183376228 = (_DAT_183376228 ^ _DAT_183376158 ^ 0x4cd1) + 0xd8 ^ 0xbd554781a0672330;
  _DAT_1833761f8 =
       (_DAT_1833761f8 * -0x2a31c00baeaae661 ^ _DAT_183376228) + (_DAT_183376158 ^ 0x4cd1);
  _DAT_183376260 = _DAT_1833761f8 ^ _DAT_183376228;
  _DAT_183376200 = 0xd8;
  _DAT_1833762a0 = func_0x00018dac3db0(_DAT_1833762b0 + 0x1f007cb5001dffU ^ 0x72);
  uVar6 = _DAT_1833762a0 << 0x27 | _DAT_1833762a0 >> 0x19;
  _DAT_1833761f8 = (_DAT_1833761f8 ^ uVar6) + 0x23 ^ 0xc2e3d44f028b91d1;
  _DAT_1833762f8 = (_DAT_1833762f8 * 0x4d8c318377e727bf ^ _DAT_1833761f8) + uVar6;
  _DAT_183376220 = _DAT_1833762f8 ^ _DAT_1833761f8;
  _DAT_1833761e0 = 0x23;
  _DAT_1833762f0 = func_0x00018dac3db0(_DAT_1833761a0 + 0xffdeff7b6affddff ^ 7);
  uVar6 = _DAT_1833762f0 - (_DAT_1833762f0 >> 1 & unaff_R13);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38);
  uVar6 = ((uint)bVar1 + (uint)bVar1 ^ _DAT_1833762f0) & 0x7fffffffffffffff;
  _DAT_183376160 = _DAT_183376260 ^ uVar6 ^ 0x11e;
  _DAT_183376290 = (_DAT_183376290 ^ uVar6) + 0x11e ^ 0x39138dd20c90fc34;
  _DAT_183376120 = (_DAT_183376120 * 0x3566c26d7fbb27d7 ^ _DAT_183376290) + uVar6;
  _DAT_183376140 = _DAT_183376120 ^ _DAT_183376290;
  _DAT_183376240 = 0x1e;
  uVar6 = func_0x00018dac3db0(_DAT_183376250 + 0x230084130021ffU ^ 0x70);
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & unaff_R13);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38)) * 2 ^ uVar6;
  _DAT_183376298 = _DAT_1833762c0 ^ uVar6 ^ 0x30;
  _DAT_183376140 = (_DAT_183376268 ^ uVar6) + 0x30 ^ 0x187cff880f030536;
  _DAT_183376268 = (_DAT_183376268 * -0x1f296c6aa58572bd ^ _DAT_183376140) + uVar6;
  _DAT_183376140 = _DAT_183376268 ^ _DAT_183376140;
  _DAT_183376110 = 0x30;
  _DAT_183376228 = func_0x00018dac3db0(_DAT_1833761a0 + 0xffdf008425ffddff ^ 0xf4);
  _DAT_183376290 = _DAT_183376290 ^ _DAT_183376228 ^ 0xec90adf7785dd222;
  _DAT_1833761a0 = (_DAT_1833761a0 * -0x4e080fcac2d49faf ^ _DAT_183376290) + _DAT_183376228;
  _DAT_183376288 = _DAT_1833761a0 ^ _DAT_183376290;
  _DAT_1833762f8 = 0;
  uVar6 = (_DAT_1833762a0 ^ _DAT_182328820) + _DAT_183376260 + 0x8422238f;
  uVar7 = (_DAT_183376260 ^ _UNK_182328828) + _DAT_1833762a0 + 0xaa;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833762a0 ^ _DAT_182328820;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376260 ^ _UNK_182328828;
  _DAT_183376240 =
       func_0x00018dac3db0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833762a0 + 0xaa) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376260 + 0x8422238f));
  auVar5 = _DAT_1800170c0;
  _DAT_1833762f0 = _DAT_1833762f0 ^ _DAT_183376240 ^ 0xe6085bbdcd08afdb;
  _DAT_1833762d8 = (_DAT_1833762d8 * 0x5fa11839c7ce3cdb ^ _DAT_1833762f0) + _DAT_183376240;
  _DAT_1833761c0 = _DAT_1833762d8 ^ _DAT_1833762f0;
  _DAT_1833761e0 = 0;
  uVar7 = (ulonglong)*(byte *)(unaff_RBP + 0x30);
  auVar3._8_8_ = _UNK_180145388;
  auVar3._0_8_ = uVar7 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_182328830,_DAT_1800170c0);
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar6 = uVar2 + _DAT_183376270;
  if (auVar4._4_4_ < 0) {
    uVar6 = _DAT_183376128 ^ uVar2;
  }
  _DAT_183376270 = func_0x00018dac3db0(SUB161(auVar3 ^ _DAT_182328830,5) ^ uVar6);
  uVar6 = ~(_DAT_183376270 >> 3 & 0x1fffffff) & uVar7;
  uVar7 = uVar7 | 0x30;
  _DAT_1833761f0 = (_DAT_1833761f0 ^ uVar6) + uVar7 ^ 0x3c2058666eb5b27a;
  _DAT_1833761c0 = (_DAT_1833761c0 * -0x4871f5cd11d2b605 ^ _DAT_1833761f0) + uVar6;
  _DAT_183376290 = _DAT_1833761c0 ^ _DAT_1833761f0;
  auVar4._8_8_ = _UNK_180101c98;
  auVar4._0_8_ = unaff_RBX ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_182328840,auVar5);
  uVar2 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar2 + _DAT_183376100;
  if (auVar5._4_4_ < 0) {
    uVar6 = _DAT_183376138 ^ uVar2;
  }
  _DAT_1833762d8 = uVar7;
  _DAT_183376138 = func_0x00018dac3db0(SUB161(auVar4 ^ _DAT_182328840,5) ^ uVar6);
  uVar6 = unaff_RBX ^ _DAT_18001a710;
  _DAT_1833761b0 =
       (((uVar6 & 0xffffffff) * (ulonglong)unaff_XMM11_Da +
         ((uVar6 & 0xffffffff) * (ulonglong)_DAT_1823288a0 +
          (uVar6 >> 0x20) * (ulonglong)unaff_XMM11_Da << 0x20) +
        ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182328880 +
         (unaff_RBX >> 0x20) * (ulonglong)unaff_XMM10_Da << 0x20) +
        (unaff_RBX & 0xffffffff) * (ulonglong)unaff_XMM10_Da +
        ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182328860 +
         (unaff_RBX >> 0x20) * (ulonglong)unaff_XMM12_Da << 0x20) +
        (unaff_RBX & 0xffffffff) * (ulonglong)unaff_XMM12_Da) -
       (((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182328900 +
         (unaff_RBX >> 0x20) * (ulonglong)unaff_XMM13_Da << 0x20) +
        (unaff_RBX & 0xffffffff) * (ulonglong)unaff_XMM13_Da +
       ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_1823288e0 +
        (unaff_RBX >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
       (unaff_RBX & 0xffffffff) * (ulonglong)unaff_XMM15_Da)) + 0x7f133b669d979a48;
  _DAT_183376228 =
       (_DAT_183376228 ^ _DAT_183376138 * -0x3717c98e1cd0d497) + _DAT_1833761b0 ^ 0x274b0869cdc51f2a
  ;
  _DAT_183376110 =
       (_DAT_183376110 * 0x29b1697a5cb86bef ^ _DAT_183376228) + _DAT_183376138 * -0x3717c98e1cd0d497
  ;
  _DAT_183376140 = _DAT_183376110 ^ _DAT_183376228;
  *(char *)(unaff_RBP + -0x50 + _DAT_1833761b0) = (char)uVar7;
  switch(unaff_EDI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva daaf87c (image 18daaf87c) =====

void FUN_18daaf87c(void)

{
  return;
}



// ===== continuation @ rva daaf645 (image 18daaf645) =====

undefined8 thunk_FUN_18da99980(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva daaf7e2 (image 18daaf7e2) =====

undefined8 thunk_FUN_18da99980(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva daa4c69 (image 18daa4c69) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daa4c69(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_R12D;
  longlong *unaff_R13;
  uint uVar5;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  ulonglong unaff_XMM14_Qa;
  ulonglong unaff_XMM14_Qb;
  
  *(undefined4 *)(unaff_RBP + 0x60) = unaff_R12D;
  *(undefined4 *)(unaff_RBP + 0x30) = unaff_ESI;
  *(undefined4 *)(unaff_RBP + -0x10) = unaff_EDI;
  lVar2 = (**(code **)(*unaff_R13 + 0x6f0))();
  *(int *)(unaff_RBP + 0x98) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0xa0));
  (**(code **)(*unaff_R13 + 0x6f8))();
  uVar1 = *(uint *)(unaff_RBP + 0x90);
  uVar5 = *(uint *)(unaff_RBP + 0x98);
  uVar3 = (ulonglong)uVar5 ^ 0x84222325;
  uVar4 = uVar3 ^ uVar1;
  uVar3 = ((_DAT_183376168 ^ uVar3) + (ulonglong)((uint)_DAT_183376168 & (uint)uVar3) * 2) *
          (uVar1 - _DAT_183376220);
  uVar3 = (uVar3 | _DAT_183376208) + (uVar3 & _DAT_183376208);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833761d8 = func_0x00018dac3db0((uVar4 | uVar3) + (ulonglong)((uint)uVar4 & (uint)uVar3));
  uVar5 = uVar5 & uVar1;
  _DAT_183376130 = (ulonglong)uVar5;
  _DAT_183376270 = (_DAT_183376270 ^ _DAT_1833761d8) + _DAT_183376130 ^ 0x31cea2f1d187c649;
  _DAT_1833762d0 = (_DAT_1833762d0 * 0x5a128edf9a9cbae5 ^ _DAT_183376270) + _DAT_1833761d8;
  _DAT_183376178 = _DAT_1833762d0 ^ _DAT_183376270;
  *(uint *)(unaff_RBP + 0x90) = uVar5;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(int *)(unaff_RBP + 0x80) = (int)*(undefined8 *)(unaff_RBP + 0x90);
  uVar3 = (~_DAT_1833761e8 + 0x908388f8) *
          ((_DAT_1833762b8 ^ 0xbe06b976) + (ulonglong)((uint)_DAT_1833762b8 & 0xbe06b976) * 2);
  uVar3 = (uVar3 | _DAT_183376240) + (uVar3 & _DAT_183376240);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183376128 = func_0x00018dac3db0((uVar3 | 0x2e853181) + (ulonglong)((uint)uVar3 & 0x2e853181))
  ;
  _DAT_183376190 = (_DAT_183376190 ^ _DAT_183376128 ^ 0x2a241200) + 0xbaa79af7 ^ 0xdfafb43af6eb5b82;
  _DAT_183376210 =
       (_DAT_183376210 * 0x5733b568d42dfc3d ^ _DAT_183376190) + (_DAT_183376128 ^ 0x2a241200);
  _DAT_183376200 = _DAT_183376210 ^ _DAT_183376190;
  _DAT_183376260 = 0xbaa79af7;
  uVar3 = (_DAT_183376100 ^ unaff_XMM14_Qa) + _DAT_1833761e0 + 0xe4789208;
  uVar4 = (_DAT_1833761e0 ^ unaff_XMM14_Qb) + _DAT_183376100 + 0xd4e1e083;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183376100 ^ unaff_XMM14_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833761e0 ^ unaff_XMM14_Qb;
  _DAT_1833762c0 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376100 + 0xd4e1e083) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833761e0 + 0xe4789208));
  uVar3 = _DAT_1833762c0 ^ 0xf4fbf1af;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~((uint)uVar3 ^
            (uint)((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3)) &
          0x605ab12d);
  _DAT_1833762e0 = (_DAT_1833762e0 ^ uVar3) + 0xb4bb51ae ^ 0x63c3d65b7db2dace;
  _DAT_1833762a0 = (_DAT_1833762a0 * -0x39f7217b980e9e1 ^ _DAT_1833762e0) + uVar3;
  _DAT_183376288 = _DAT_1833762a0 ^ _DAT_1833762e0;
  _DAT_183376250 = 0xb4bb51ae;
  uVar3 = (~_DAT_1833762e0 + 0xabc3c05d) *
          ((_DAT_1833761b8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833761b8 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183376118) + (uVar3 & _DAT_183376118);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183376110 = func_0x00018dac3db0((uVar3 | 0x2fe1e379) + (ulonglong)((uint)uVar3 & 0x2fe1e379))
  ;
  uVar3 = _DAT_183376110 >> 1 | _DAT_183376110;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183376110;
  uVar3 = uVar4 & 0x7fffffffffffff;
  uVar4 = uVar3 - (uVar4 >> 1 & 0x15555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3;
  _DAT_183376298 = (_DAT_183376298 ^ uVar3) - 0xabc3c05c ^ 0xba32547feca70ac0;
  _DAT_183376238 = (_DAT_183376238 * 0x5e8fff94653d9427 ^ _DAT_183376298) + uVar3;
  _DAT_183376158 = _DAT_183376238 ^ _DAT_183376298;
  _DAT_1833762e8 = 0x543c3fa4;
  uVar3 = (~_DAT_1833762b8 + 0xabc3c05d) *
          ((_DAT_183376230 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183376230 & 0x8422239a) * 2);
  uVar3 = (uVar3 | _DAT_1833761f8) + (uVar3 & _DAT_1833761f8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183376100 = func_0x00018dac3db0((uVar3 | 0x2fe1e3c6) + (ulonglong)((uint)uVar3 & 0x2fe1e3c6))
  ;
  uVar3 = _DAT_183376100 ^ 0xbf;
  _DAT_183376258 = _DAT_1833762f8 ^ uVar3 ^ 0xabc3c11b;
  _DAT_183376218 = (_DAT_183376218 ^ uVar3) + 0xabc3c11b ^ 0x5bb4c718cfa2502a;
  _DAT_183376228 = (_DAT_183376228 * -0x750e0ebe2bd8fc2f ^ _DAT_183376218) + uVar3;
  _DAT_183376120 = _DAT_183376228 ^ _DAT_183376218;
  _DAT_183376208 = 0xabc3c11b;
  uVar3 = (_DAT_183376150 ^ _DAT_182327f70) + _DAT_1833762c8 + 0x2fe1e23e;
  uVar4 = (_DAT_1833762c8 ^ _UNK_182327f78) + _DAT_183376150 + 0x543c3fa4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183376150 ^ _DAT_182327f70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833762c8 ^ _UNK_182327f78;
  _DAT_183376118 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376150 + 0x543c3fa4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833762c8 + 0x2fe1e23e));
  uVar3 = (ulonglong)(((uint)_DAT_183376118 ^ 0xab828113) & 0xabc3c11b) << 0x20;
  _DAT_183376150 = _DAT_183376120 ^ uVar3 ^ 0x1000000bf;
  _DAT_1833761d0 = (_DAT_1833761d0 ^ uVar3) + 0x1000000bf ^ 0x3b18cf0a77eadcc4;
  _DAT_183376258 = (_DAT_183376258 * 0x7b29276c9b88988b ^ _DAT_1833761d0) + uVar3;
  _DAT_1833762a8 = _DAT_183376258 ^ _DAT_1833761d0;
  _DAT_1833761b0 = 0xbf;
  uVar3 = (_DAT_183376218 ^ _DAT_182327f80) + _DAT_183376258 + 0x3737af74;
  uVar4 = (_DAT_183376258 ^ _UNK_182327f88) + _DAT_183376218 + 0x4cea746e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183376218 ^ _DAT_182327f80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183376258 ^ _UNK_182327f88;
  _DAT_183376270 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376218 + 0x4cea746e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183376258 + 0x3737af74));
  uVar3 = _DAT_183376270 ^ 0xfffffc7f;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3;
  _DAT_1833761c0 = _DAT_183376210 ^ uVar3 ^ 0x1000000bf;
  _DAT_183376288 = (_DAT_183376288 ^ uVar3) + 0x1000000bf ^ 0xbb1cb48d7791ee8;
  _DAT_1833761b0 = (_DAT_1833761b0 * 0x5bd60c63b5fb0d77 ^ _DAT_183376288) + uVar3;
  _DAT_183376248 = _DAT_1833761b0 ^ _DAT_183376288;
  _DAT_1833761f8 = 0xbf;
  _DAT_1833762b8 = func_0x00018dac3db0(_DAT_183376170 ^ 0xffc6fffd63ffdd93);
  uVar3 = _DAT_1833762b8 << 0x3a | _DAT_1833762b8 >> 6;
  _DAT_1833762a0 = (_DAT_1833762a0 ^ uVar3) - 0x9b00e4b9 ^ 0xa08b02cebb018511;
  _DAT_183376220 = (_DAT_183376220 * 0x37e9c5cbcc14fd0d ^ _DAT_1833762a0) + uVar3;
  _DAT_1833762a0 = _DAT_183376220 ^ _DAT_1833762a0;
  _DAT_1833761c0 = 0x64ff1b47;
  uVar3 = (~_DAT_183376188 + 0x9b00e4ba) *
          ((_DAT_1833762c8 ^ 0x8422239a) + (ulonglong)((uint)_DAT_1833762c8 & 0x8422239a) * 2);
  uVar3 = (uVar3 | _DAT_183376110) + (uVar3 & _DAT_183376110);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183376180 = func_0x00018dac3db0((uVar3 | 0x1f22c723) + (ulonglong)((uint)uVar3 & 0x1f22c723))
  ;
  uVar3 = _DAT_183376180 ^ 0x73a5aaa6b8;
  _DAT_1833762f8 = _DAT_183376208 ^ uVar3 ^ 0x9b00e578;
  _DAT_1833761f8 = (_DAT_1833761f8 ^ uVar3) + 0x9b00e578 ^ 0xaa3e756ae59a2a42;
  _DAT_183376190 = (_DAT_183376190 * 0x3fcb27bdd358fbcd ^ _DAT_1833761f8) + uVar3;
  _DAT_1833761b8 = _DAT_183376190 ^ _DAT_1833761f8;
  _DAT_183376100 = 0x9b00e578;
  uVar3 = (_DAT_183376158 ^ unaff_XMM6_Qa) + _DAT_1833762b0 + 0x1f22c65d;
  uVar4 = (_DAT_1833762b0 ^ unaff_XMM6_Qb) + _DAT_183376158 + 0x64ff1b47;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183376158 ^ unaff_XMM6_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833762b0 ^ unaff_XMM6_Qb;
  _DAT_1833762f0 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376158 + 0x64ff1b47) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833762b0 + 0x1f22c65d));
  uVar3 = _DAT_1833762f0 ^ 0xffffff7f;
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
  _DAT_1833761d0 = _DAT_1833761a0 ^ uVar3 ^ 0x1000000bf;
  _DAT_183376210 = (_DAT_183376210 ^ uVar3) + 0x1000000bf ^ 0x2611d643989d5bd;
  _DAT_183376108 = (_DAT_183376108 * 0x7cfdca089d74a641 ^ _DAT_183376210) + uVar3;
  _DAT_183376158 = _DAT_183376108 ^ _DAT_183376210;
  _DAT_183376270 = 0xbf;
  _DAT_1833762d8 = func_0x00018dac3db0(_DAT_183376160 ^ 0x68008673fffd86);
  uVar3 = (((ulonglong)((uint)_DAT_1833762d8 ^ 0x5bff) << 0x15 | _DAT_1833762d8 >> 0x2b) ^
          0xb4bb51ae) & 0xfffffffff;
  _DAT_1833761e8 = _DAT_183376190 ^ uVar3 ^ 0x16f62eca5;
  _DAT_183376180 = (_DAT_183376180 ^ uVar3) + 0x16f62eca5 ^ 0xcef08524e33ac62c;
  _DAT_1833762e0 = (_DAT_1833762e0 * 0x75555b8630def117 ^ _DAT_183376180) + uVar3;
  _DAT_183376238 = _DAT_1833762e0 ^ _DAT_183376180;
  _DAT_183376100 = 0x6f62eca5;
  uVar3 = (_DAT_183376248 ^ unaff_XMM7_Qa) + _DAT_183376240 + 0x3e85b9d2;
  uVar4 = (_DAT_183376240 ^ unaff_XMM7_Qb) + _DAT_183376248 + 0xb4bb51ae;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183376248 ^ unaff_XMM7_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183376240 ^ unaff_XMM7_Qb;
  _DAT_1833761a8 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183376248 + 0xb4bb51ae) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183376240 + 0x3e85b9d2));
  uVar3 = _DAT_1833761a8 << 0x24 | _DAT_1833761a8 >> 0x1c;
  _DAT_183376110 = (_DAT_183376110 ^ uVar3) + 0xb0a310a6 ^ 0xd09e9f8104048c66;
  _DAT_1833761d8 = (_DAT_1833761d8 * -0x1d6fd8017f617ed3 ^ _DAT_183376110) + uVar3;
  _DAT_183376110 = _DAT_1833761d8 ^ _DAT_183376110;
  _DAT_1833761f0 = 0xb0a310a6;
  _DAT_1833762d8 = func_0x00018dac3db0(_DAT_1833762e0 + 0xffe1007be4ffe1ff ^ 0x23);
  _DAT_183376290 = (ulonglong)(~(uint)(_DAT_1833762d8 >> 0x12) & 0x6f62eca5);
  _DAT_1833761f8 = _DAT_1833761f8 ^ _DAT_183376290 ^ 0xe16ec3e7d6ed339b;
  _DAT_183376120 =
       (_DAT_183376120 * 0x3a911e2b6c5c0477 ^ _DAT_1833761f8) + _DAT_183376290 ^ _DAT_1833761f8;
  _DAT_183376108 = 0;
  _DAT_183376278 = func_0x00018dac3db0(_DAT_183376238 + 0x2300836a001dff ^ 0xb2);
  uVar3 = _DAT_183376278 & 0x7fffffffffffffff;
  _DAT_183376120 = _DAT_183376158 ^ uVar3 ^ 0xbf;
  _DAT_183376188 = (_DAT_183376188 ^ uVar3) + 0xbf ^ 0x40ac8a6d5fbf9ef2;
  _DAT_183376158 = (_DAT_183376158 * 0x69540df213f6ea13 ^ _DAT_183376188) + uVar3;
  _DAT_183376168 = _DAT_183376158 ^ _DAT_183376188;
  _DAT_183376258 = 0xbf;
  uVar3 = (~_DAT_1833761e8 + 0x45586509) *
          ((_DAT_183376178 ^ 0x3e85b9d2) + (ulonglong)((uint)_DAT_183376178 & 0x3e85b9d2) * 2);
  uVar3 = (uVar3 | _DAT_183376298) + (uVar3 & _DAT_183376298);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833762c0 = func_0x00018dac3db0((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda))
  ;
  _DAT_183376178 = _DAT_183376178 ^ _DAT_1833762c0 & 0x7fffffffffffffff ^ 0xafdae1598c5d3bac;
  _DAT_183376190 =
       (_DAT_183376190 * -0x34404cb39e9e186b ^ _DAT_183376178) +
       (_DAT_1833762c0 & 0x7fffffffffffffff);
  _DAT_183376270 = _DAT_183376190 ^ _DAT_183376178;
  _DAT_1833762f8 = 0;
  uVar3 = (_DAT_1833762b0 ^ unaff_XMM9_Qa) + _DAT_183376280 + 0xbe06b976;
  uVar4 = (_DAT_183376280 ^ unaff_XMM9_Qb) + _DAT_1833762b0 + 0x3a249a53;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833762b0 ^ unaff_XMM9_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183376280 ^ unaff_XMM9_Qb;
  _DAT_1833761a0 =
       func_0x00018dac3db0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833762b0 + 0x3a249a53) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183376280 + 0xbe06b976));
  uVar3 = (ulonglong)(~(uint)_DAT_1833761a0 & 0x3a249a53);
  _DAT_1833761b0 = _DAT_1833761b0 ^ uVar3 ^ 0xae7fe047019838e7;
  _DAT_183376218 = (_DAT_183376218 * -0x75252b183a5496db ^ _DAT_1833761b0) + uVar3;
  _DAT_183376270 = _DAT_183376218 ^ _DAT_1833761b0;
  _DAT_183376138 = 0;
  switch(0xbf < (int)uVar5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva daaf587 (image 18daaf587) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daaf587(void)

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



// ===== continuation @ rva dac6414 (image 18dac6414) =====

void FUN_18dac6414(void)

{
  return;
}



// ===== continuation @ rva dac6277 (image 18dac6277) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dac6277(void)

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



// ===== continuation @ rva dacacd7 (image 18dacacd7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacacd7(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RBP;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dacaaa0 (image 18dacaaa0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacaaa0(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RBP;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RBP + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dacf30e (image 18dacf30e) =====

void FUN_18dacf30e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva dac7ee5 (image 18dac7ee5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dac7ee5(void)

{
  int iVar1;
  longlong *unaff_RBP;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(*unaff_RBP + 0x558))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dac7c4f (image 18dac7c4f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dac7c4f(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva daceff0 (image 18daceff0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18daceff0(void)

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



// ===== continuation @ rva dacc73c (image 18dacc73c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacc73c(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_RBP;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint in_stack_00000030;
  int in_stack_00000040;
  undefined8 in_stack_00000070;
  longlong *in_stack_00000090;
  
  lVar4 = (**(code **)(*unaff_RBP + 0x6f0))();
  bVar1 = *(byte *)(lVar4 + in_stack_00000040);
  (**(code **)(*unaff_RBP + 0x6f8))(extraout_XMM0_Qa,in_stack_00000070,lVar4,2);
  uVar6 = (_DAT_183376e50 ^ _DAT_18232f340) + _DAT_183376e28 + 0xe413eb10;
  uVar7 = (_DAT_183376e28 ^ _UNK_18232f348) + _DAT_183376e50 + 0x74e2b948;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376e50 ^ _DAT_18232f340;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376e28 ^ _UNK_18232f348;
  _DAT_183376c20 =
       func_0x00018dacf4b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376e50 + 0x74e2b948) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376e28 + 0xe413eb10));
  _DAT_183376c78 =
       (_DAT_183376c78 ^ _DAT_183376c20 ^ 0x2bebc049ca789be8) + 0x74f3f97d ^ 0x1dd97fb3840c09c6;
  _DAT_183376920 =
       (_DAT_183376920 * 0x4d9239683a4e336d ^ _DAT_183376c78) +
       (_DAT_183376c20 ^ 0x2bebc049ca789be8);
  _DAT_1833768e0 = _DAT_183376920 ^ _DAT_183376c78;
  _DAT_183376df8 = 0x74f3f97d;
  uVar6 = (~_DAT_183376d00 + 0x1e610473) *
          ((_DAT_1833769c0 ^ 0x80124c72) + (ulonglong)((uint)_DAT_1833769c0 & 0x80124c72) * 2);
  uVar6 = (uVar6 | _DAT_183376ef0) + (uVar6 & _DAT_183376ef0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376c48 = func_0x00018dacf4b0((uVar6 | 0x9e734800) + (ulonglong)((uint)uVar6 & 0x9e734800))
  ;
  uVar6 = _DAT_183376c48 >> 1 | _DAT_183376c48;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (((uint)_DAT_183376c48 ^
           (0x40 - (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38)) * 0x10) & 0x4306f57);
  _DAT_183376958 = (_DAT_183376958 ^ uVar6) + 0x1a516b25 ^ 0x58b0f3a903f39183;
  _DAT_183376b78 = (_DAT_183376b78 * -0x7a9fdf26f1ee5511 ^ _DAT_183376958) + uVar6;
  _DAT_183376e48 = _DAT_183376b78 ^ _DAT_183376958;
  _DAT_183376e90 = 0x1a516b25;
  uVar6 = (_DAT_183376c78 ^ _DAT_18232f350) + _DAT_183376998 + 0x84222325;
  uVar7 = (_DAT_183376998 ^ _UNK_18232f358) + _DAT_183376c78 + 0x4091edeb;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376c78 ^ _DAT_18232f350;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376998 ^ _UNK_18232f358;
  _DAT_183376c08 =
       func_0x00018dacf4b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376c78 + 0x4091edeb) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376998 + 0x84222325));
  _DAT_183376758 =
       (_DAT_183376758 ^ _DAT_183376c08 & 0x3ffffffffffff) - 0x4091edeb ^ 0x58070a524d2c041c;
  _DAT_183376b60 =
       (_DAT_183376b60 * 0x1e50e806ae834bbb ^ _DAT_183376758) + (_DAT_183376c08 & 0x3ffffffffffff);
  _DAT_183376ce0 = _DAT_183376b60 ^ _DAT_183376758;
  _DAT_183376980 = 0xbf6e1215;
  uVar6 = (~_DAT_183376af8 + 0xbf6e1216) *
          ((_DAT_183376b38 ^ 0xc4b0cfce) + (ulonglong)((uint)_DAT_183376b38 & 0xc4b0cfce) * 2);
  uVar6 = (uVar6 | _DAT_183376d00) + (uVar6 & _DAT_183376d00);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376c68 = func_0x00018dacf4b0((uVar6 | 0x7bdedddb) + (ulonglong)((uint)uVar6 & 0x7bdedddb))
  ;
  _DAT_183376790 = _DAT_1833768e8 ^ _DAT_183376c68 ^ 0x10000ff00;
  _DAT_183376c80 = (_DAT_183376c80 ^ _DAT_183376c68) + 0x10000ff00 ^ 0x5a42acab44db2c18;
  _DAT_1833767d8 = (_DAT_1833767d8 * -0x10d8a69ff6f43579 ^ _DAT_183376c80) + _DAT_183376c68;
  _DAT_183376748 = _DAT_1833767d8 ^ _DAT_183376c80;
  _DAT_1833768b0 = 0xff00;
  uVar6 = (~_DAT_183376d48 + 0x3c2db2d3) *
          ((_DAT_183376b38 ^ 0x84222325) + (ulonglong)((uint)_DAT_183376b38 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183376e68) + (uVar6 & _DAT_183376e68);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376950 = func_0x00018dacf4b0((uVar6 | 0xb80f91f7) + (ulonglong)((uint)uVar6 & 0xb80f91f7))
  ;
  _DAT_1833769a0 =
       (_DAT_1833769a0 ^ _DAT_183376950 & 0x7fffffffff) - 0x3c2db2d2 ^ 0xcb3cf97622aff0a5;
  _DAT_183376aa8 =
       (_DAT_183376aa8 * -0x2171fea4786aec51 ^ _DAT_1833769a0) + (_DAT_183376950 & 0x7fffffffff);
  _DAT_183376838 = _DAT_183376aa8 ^ _DAT_1833769a0;
  _DAT_1833769d8 = 0xc3d24d2e;
  _DAT_183376c98 = func_0x00018dacf4b0(_DAT_183376860 ^ 0xffe600a70b000a7b);
  uVar6 = _DAT_183376c98 - (_DAT_183376c98 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar2 + (uint)bVar2 ^ _DAT_183376c98 ^ 0xff00;
  _DAT_183376770 = _DAT_183376bf8 ^ uVar6 ^ 0x3c2eb1d2;
  _DAT_183376a98 = (_DAT_183376a98 ^ uVar6) + 0x3c2eb1d2 ^ 0x1328a42eafac4036;
  _DAT_183376a58 = (_DAT_183376a58 * 0x6c0bd4a3a446ad27 ^ _DAT_183376a98) + uVar6;
  _DAT_183376768 = _DAT_183376a58 ^ _DAT_183376a98;
  _DAT_1833767c8 = 0x3c2eb1d2;
  uVar6 = (~_DAT_183376d80 + 0xe80054e3) *
          ((_DAT_183376d20 ^ 0x84222325) + (ulonglong)((uint)_DAT_183376d20 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183376908) + (uVar6 & _DAT_183376908);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833767b0 = func_0x00018dacf4b0((uVar6 | 0x6c2277c7) + (ulonglong)((uint)uVar6 & 0x6c2277c7))
  ;
  _DAT_183376c78 = (_DAT_183376c78 ^ _DAT_1833767b0) - 0xe80054e2 ^ 0x76f80a8edf56a963;
  _DAT_183376818 = (_DAT_183376818 * 0x7f88b6b5b5d19e7d ^ _DAT_183376c78) + _DAT_1833767b0;
  _DAT_183376970 = _DAT_183376818 ^ _DAT_183376c78;
  _DAT_183376c20 = _DAT_183376ea0 ^ 0xffffffff17ffab1e;
  _DAT_183376ea8 = 0x17ffab1e;
  uVar6 = (~_DAT_1833767b0 + 0xe80054e3) *
          ((_DAT_183376750 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183376750 & 0x8422dc25) * 2);
  uVar6 = (uVar6 | _DAT_183376940) + (uVar6 & _DAT_183376940);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376db8 = func_0x00018dacf4b0((uVar6 | 0x6c2288c7) + (ulonglong)((uint)uVar6 & 0x6c2288c7))
  ;
  uVar7 = _UNK_18232f368;
  uVar6 = _DAT_18232f360;
  uVar5 = (_DAT_183376db8 ^ 0xe718548de100) << 0x36 |
          ((_DAT_183376db8 ^ 0xe718548de100) & 0x7fffffffffffffff) >> 10;
  _DAT_183376b70 = _DAT_183376aa8 ^ uVar5 ^ 0xe80153e2;
  _DAT_183376eb8 = (_DAT_183376eb8 ^ uVar5) + 0xe80153e2 ^ 0x8a6da850df98b3cf;
  _DAT_183376d20 = (_DAT_183376d20 * -0xf18e16bb3d9b571 ^ _DAT_183376eb8) + uVar5;
  _DAT_183376de8 = _DAT_183376d20 ^ _DAT_183376eb8;
  _DAT_183376720 = 0xe80153e2;
  uVar5 = (_DAT_183376ab0 ^ _DAT_18232f360) + _DAT_183376e68 + 0xf0d1da58;
  uVar8 = (_DAT_183376e68 ^ _UNK_18232f368) + _DAT_183376ab0 + 0x1a516b25;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183376ab0 ^ _DAT_18232f360;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183376e68 ^ _UNK_18232f368;
  _DAT_183376de0 =
       func_0x00018dacf4b0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183376ab0 + 0x1a516b25) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183376e68 + 0xf0d1da58));
  uVar5 = (_DAT_183376de0 & 0xffffffffffc00000 ^ 0x1a516b25) << 0x18 | _DAT_183376de0 >> 0x28;
  _DAT_183376a38 = _DAT_183376b80 ^ uVar5 ^ 0x8f4564a2;
  _DAT_183376b30 = (_DAT_183376b30 ^ uVar5) + 0x8f4564a2 ^ 0xbba1882fe21d85a4;
  _DAT_183376960 = (_DAT_183376960 * 0x6f83e0f8bbefaa19 ^ _DAT_183376b30) + uVar5;
  _DAT_183376e30 = _DAT_183376960 ^ _DAT_183376b30;
  _DAT_183376b58 = _DAT_183376738 ^ 0x8f4564a2;
  _DAT_183376918 = 0x8f4564a2;
  uVar5 = (_DAT_183376a48 ^ uVar6) + _DAT_183376ec8 + 0xf0d1da58;
  uVar8 = (_DAT_183376ec8 ^ uVar7) + _DAT_183376a48 + 0x1a516b25;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183376a48 ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183376ec8 ^ uVar7;
  _DAT_183376930 =
       func_0x00018dacf4b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376a48 + 0x1a516b25) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376ec8 + 0xf0d1da58));
  uVar6 = (ulonglong)(~(((uint)((ulonglong)_DAT_183376930 >> 0x20) & 0x9e7f2fa0) >> 5) & 0x74f3f97d)
  ;
  _DAT_183376bc0 = (_DAT_183376bc0 ^ uVar6) + 0x10516925 ^ 0x1a0f75fd251fe567;
  _DAT_183376ae0 = (_DAT_183376ae0 * -0x17043a88b9efad93 ^ _DAT_183376bc0) + uVar6;
  _DAT_183376be8 = _DAT_183376ae0 ^ _DAT_183376bc0;
  _DAT_183376828 = _DAT_183376c00 ^ 0x10516925;
  _DAT_1833767c0 = 0x10516925;
  uVar6 = (_DAT_183376860 ^ _DAT_18232f370) + _DAT_183376c88 + 0xea80b17d;
  uVar7 = (_DAT_183376c88 ^ _UNK_18232f378) + _DAT_183376860 + 0x20a2d24a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376860 ^ _DAT_18232f370;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376c88 ^ _UNK_18232f378;
  _DAT_183376b48 =
       func_0x00018dacf4b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376860 + 0x20a2d24a) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376c88 + 0xea80b17d));
  uVar6 = _DAT_183376b48 & 0x7fffffffffffffff ^ 0x6ea29258;
  _DAT_183376918 = _DAT_183376cb8 ^ uVar6 ^ 0x8f4564a2;
  _DAT_183376d68 = (_DAT_183376d68 ^ uVar6) + 0x8f4564a2 ^ 0xe919d5f909aaa4c7;
  _DAT_183376c20 = (_DAT_183376c20 * -0x100f5a7f9bc07075 ^ _DAT_183376d68) + uVar6;
  _DAT_183376db8 = _DAT_183376c20 ^ _DAT_183376d68;
  _DAT_1833768a8 = 0x8f4564a2;
  uVar6 = (_DAT_183376d80 ^ _DAT_18232f380) + _DAT_183376b50 + 0xb674787;
  uVar7 = (_DAT_183376b50 ^ _UNK_18232f388) + _DAT_183376d80 + 0x8f4564a2;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183376d80 ^ _DAT_18232f380;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376b50 ^ _UNK_18232f388;
  uVar6 = func_0x00018dacf4b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183376d80 + 0x8f4564a2) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376b50 + 0xb674787));
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  _DAT_1833767a8 =
       (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^ uVar6
  ;
  _DAT_183376b00 = _DAT_183376b00 ^ _DAT_1833767a8 ^ 0x5020ef71e19bed9b;
  _DAT_183376938 = (uVar6 * 0x40c0b649a041a655 ^ _DAT_183376b00) + _DAT_1833767a8;
  _DAT_1833768f0 = _DAT_183376938 ^ _DAT_183376b00;
  _DAT_183376b20 = 0;
  _DAT_183376998 = func_0x00018dacf4b0(_DAT_183376c38 ^ 0xff340083e4ffe1ee);
  _DAT_183376960 = _DAT_183376de8 ^ _DAT_183376998 ^ 0xff00;
  _DAT_183376848 = (_DAT_183376848 ^ _DAT_183376998) + 0xff00 ^ 0xc70c3d3e93646e0a;
  _DAT_183376eb0 = (_DAT_183376eb0 * 0x799ee14f40262def ^ _DAT_183376848) + _DAT_183376998;
  _DAT_183376898 = _DAT_183376eb0 ^ _DAT_183376848;
  _DAT_183376ea0 = 0xff00;
  _DAT_183376b80 = func_0x00018dacf4b0(_DAT_183376820 + 0x440035d5ffaaff ^ 0xe0);
  _DAT_1833769c0 = _DAT_1833769c0 ^ _DAT_183376b80 & 0x3fffffffffff ^ 0x7093ab6b182f78a7;
  _DAT_183376820 =
       (_DAT_183376820 * 0xd337734148f2187 ^ _DAT_1833769c0) + (_DAT_183376b80 & 0x3fffffffffff);
  _DAT_183376c80 = _DAT_183376820 ^ _DAT_1833769c0;
  _DAT_183376b88 = 0;
  uVar6 = (_DAT_1833769a8 ^ 0x8422dc25) + _DAT_183376bd8 + 0x8422dc25;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833769a8 ^ 0x8422dc25;
  uVar7 = ((_DAT_183376bd8 + _DAT_1833769a8) * 0x2000 | _DAT_183376bd8 + _DAT_1833769a8 >> 0x33) ^
          _DAT_183376bd8;
  _DAT_183376b58 =
       func_0x00018dacf4b0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_1833769a8 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376bd8 + 0x8422dc25));
  uVar6 = (ulonglong)((uint)_DAT_183376b58 & 0xff00) << 0x29;
  _DAT_183376c68 = _DAT_1833768e8 ^ uVar6 ^ 0xff00;
  _DAT_1833769e8 = (_DAT_1833769e8 ^ uVar6) + 0xff00 ^ 0xe12f7ef3c4b958db;
  _DAT_183376ed8 = (_DAT_183376ed8 * -0x39038e2594c60b31 ^ _DAT_1833769e8) + uVar6;
  _DAT_183376990 = _DAT_183376ed8 ^ _DAT_1833769e8;
  _DAT_183376890 = 0xff00;
  uVar6 = (_DAT_1833769d8 ^ _DAT_18232f390) + _DAT_183376c60 + 0xe413eb10;
  uVar7 = (_DAT_183376c60 ^ _UNK_18232f398) + _DAT_1833769d8 + 0x6031c835;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833769d8 ^ _DAT_18232f390;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183376c60 ^ _UNK_18232f398;
  _DAT_183376e00 =
       func_0x00018dacf4b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833769d8 + 0x6031c835) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183376c60 + 0xe413eb10));
  uVar6 = (ulonglong)((uint)_DAT_183376e00 & 0x6031c835);
  _DAT_183376758 = _DAT_183376758 ^ uVar6 ^ 0x9d40ec8531150855;
  _DAT_183376920 = (_DAT_183376920 * -0x553d598a7901b90d ^ _DAT_183376758) + uVar6;
  _DAT_183376e58 = _DAT_183376920 ^ _DAT_183376758;
  _DAT_183376cb0 = 0;
  uVar6 = ((_DAT_183376ed0 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183376ed0 & 0x8422dc25) * 2) *
          -_DAT_183376970;
  uVar6 = (uVar6 | _DAT_1833767d0) + (uVar6 & _DAT_1833767d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183376830 = func_0x00018dacf4b0((uVar6 | 0x8422dc25) + (ulonglong)((uint)uVar6 & 0x8422dc25))
  ;
  uVar6 = _DAT_183376830 * -0xf8d6b8b4fd90d35 << 0x3d |
          (ulonglong)(_DAT_183376830 * -0xf8d6b8b4fd90d35) >> 3;
  _DAT_1833769e8 = _DAT_183376a20 ^ uVar6 ^ 0xff00;
  _DAT_183376ea0 = (_DAT_183376ea0 ^ uVar6) + 0xff00 ^ 0x1c2660d4fadd0608;
  _DAT_183376d90 = (_DAT_183376d90 * 0x569d940290bad95d ^ _DAT_183376ea0) + uVar6;
  _DAT_183376ca0 = _DAT_183376d90 ^ _DAT_183376ea0;
  _DAT_183376b58 = 0xff00;
  uVar5 = (ulonglong)bVar1 * 0x100;
  uVar7 = (ulonglong)in_stack_00000030 ^ 0x84222325;
  uVar6 = ((_DAT_1833768f8 ^ uVar7) + (ulonglong)((uint)_DAT_1833768f8 & (uint)uVar7) * 2) *
          (uVar5 - _DAT_183376798);
  uVar6 = (uVar6 | _DAT_1833767b0) + (uVar6 & _DAT_1833767b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar7 = uVar7 ^ uVar5;
  _DAT_183376b10 = func_0x00018dacf4b0((uVar7 | uVar6) + (ulonglong)((uint)uVar7 & (uint)uVar6));
  _DAT_1833768c0 = (ulonglong)(in_stack_00000030 | (uint)bVar1 << 8);
  uVar6 = _DAT_183376b10 ^ _DAT_1833768c0;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar6;
  _DAT_1833767f0 = (_DAT_1833767f0 ^ uVar6) + _DAT_1833768c0 ^ 0xddf37ade88ae34ea;
  _DAT_183376e60 = (_DAT_183376e60 * 0x50947861baa53e4b ^ _DAT_1833767f0) + uVar6;
  _DAT_183376d98 = _DAT_183376e60 ^ _DAT_1833767f0;
  iVar3 = (**(code **)(*in_stack_00000090 + 0x558))(in_stack_00000090,in_stack_00000070);
  switch(iVar3 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dacc6ed (image 18dacc6ed) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dacc6ed(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva dac96a3 (image 18dac96a3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dacad89(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x88))();
  FUN_190dd72e0();
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



// ===== continuation @ rva dac7259 (image 18dac7259) =====

undefined8 thunk_FUN_18dac73f7(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x70))();
  return 0;
}



