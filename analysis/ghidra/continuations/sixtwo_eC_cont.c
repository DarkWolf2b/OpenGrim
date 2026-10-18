// ===== continuation @ rva cbe309e (image 18cbe309e) =====

void FUN_18cbe309e(void)

{
  return;
}



// ===== continuation @ rva cbdfa04 (image 18cbdfa04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbdfa04(void)

{
  FUN_190ddce00();
  (*_DAT_18202eb08)();
  return;
}



// ===== continuation @ rva cbe4557 (image 18cbe4557) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe4557(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_18202ea88)();
  return;
}



// ===== continuation @ rva cbe295f (image 18cbe295f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe295f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_18202e988)();
  return;
}



// ===== continuation @ rva cbe3022 (image 18cbe3022) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbe3022(void)

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



// ===== continuation @ rva cbe27ad (image 18cbe27ad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbe27ad(void)

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



// ===== continuation @ rva cbe2fcb (image 18cbe2fcb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe2fcb(void)

{
  FUN_190ddfc90();
  (*_DAT_18202e8b8)();
  return;
}



// ===== continuation @ rva cbe4723 (image 18cbe4723) =====

void FUN_18cbe4723(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cbe261f (image 18cbe261f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbe261f(void)

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



// ===== continuation @ rva cbe42ad (image 18cbe42ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe42ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18202f418)();
  return;
}



// ===== continuation @ rva cbe370c (image 18cbe370c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe370c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_18202f108)();
  return;
}



// ===== continuation @ rva cbdf6cb (image 18cbdf6cb) =====

void FUN_18cbdf6cb(void)

{
  return;
}



// ===== continuation @ rva cbc2e2b (image 18cbc2e2b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cbc2e81 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cbc2e2b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cbcee6f (image 18cbcee6f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbcee6f(uint param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  ulonglong uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  ulonglong in_stack_00000050;
  ulonglong in_stack_00000058;
  undefined8 uStack0000000000000060;
  ulonglong uStack00000000000000a0;
  uint uStack00000000000000b8;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined4 uStack00000000000000d0;
  
  uStack00000000000000a0 = in_stack_00000058 & 0xffffffff;
  uStack0000000000000060 = 0xff;
  uStack00000000000000b8 = param_1;
  uStack00000000000000c0 = param_4;
  uStack00000000000000c8 = param_2;
  uStack00000000000000d0 = param_3;
  _DAT_183331e18 = func_0x00018cbdf8b0(_DAT_183331d60 + 0x420017b0000cff ^ 0x41);
  uVar4 = _DAT_183331e18 - (_DAT_183331e18 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_183331e18 ^
          0x4ffaad25;
  _DAT_183331d78 = (_DAT_183331d78 ^ uVar4) + 0x9c31e555 ^ 0xa5da3ff84d020f57;
  _DAT_183331f30 = (_DAT_183331f30 * -0x7fcbed4f9e0ecc03 ^ _DAT_183331d78) + uVar4;
  _DAT_183331ba0 = _DAT_183331f30 ^ _DAT_183331d78;
  _DAT_183331fc0 = _DAT_183332020 ^ 0x9c31e555;
  _DAT_183331e50 = 0x9c31e555;
  uVar4 = (~_DAT_183331e38 + 0xa1d468de) *
          ((_DAT_183331da8 ^ 0x84222325) + (ulonglong)((uint)_DAT_183331da8 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183331b48) + (uVar4 & _DAT_183331b48);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331de0 = func_0x00018cbdf8b0((uVar4 | 0x25f64bf8) + (ulonglong)((uint)uVar4 & 0x25f64bf8))
  ;
  uVar4 = (_DAT_183331de0 & 0x1ffffffffff) * -0x6753d3b52fd75c29;
  _DAT_183331cd0 = (_DAT_183331cd0 ^ uVar4) - 0xa1d468dd ^ 0x4aece8cff1d6ae50;
  _DAT_183331cf8 = (_DAT_183331cf8 * 0x1b523a7e3e1c1f39 ^ _DAT_183331cd0) + uVar4;
  _DAT_183331f18 = _DAT_183331cf8 ^ _DAT_183331cd0;
  _DAT_183331b70 = 0x5e2b9723;
  uVar4 = (_DAT_183331bd8 ^ _DAT_18202e170) + _DAT_183331b78 + 0x842223da;
  uVar9 = (_DAT_183331b78 ^ _UNK_18202e178) + _DAT_183331bd8 + 0xa1d468dd;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183331bd8 ^ _DAT_18202e170;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183331b78 ^ _UNK_18202e178;
  _DAT_183331d18 =
       func_0x00018cbdf8b0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183331bd8 + 0xa1d468dd) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183331b78 + 0x842223da));
  uVar4 = _DAT_183331d18 & 0xfffffffff0000000;
  _DAT_183331ed8 = _DAT_183332048 ^ uVar4 ^ 0xa1d469dc;
  _DAT_183331db8 = (_DAT_183331db8 ^ uVar4) + 0xa1d469dc ^ 0x8ae24b4d61f821e3;
  _DAT_183331fa8 = (_DAT_183331fa8 * -0x17c9031be45cca61 ^ _DAT_183331db8) + uVar4;
  _DAT_183331b58 = _DAT_183331fa8 ^ _DAT_183331db8;
  _DAT_183331c28 = 0xa1d469dc;
  uVar4 = (~_DAT_183331f00 + 0x2b088734) *
          ((_DAT_183331cb0 ^ 0x842223da) + (ulonglong)((uint)_DAT_183331cb0 & 0x842223da) * 2);
  uVar4 = (uVar4 | _DAT_183331b68) + (uVar4 & _DAT_183331b68);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331f80 = func_0x00018cbdf8b0((uVar4 | 0xaf2aa4e9) + (ulonglong)((uint)uVar4 & 0xaf2aa4e9))
  ;
  _DAT_183331e98 = _DAT_183331db8 ^ _DAT_183331d58 ^ 0x2b088832;
  _DAT_183332008 = (_DAT_183332008 ^ _DAT_183331d58) + 0x2b088832 ^ 0x9f34553b1195b690;
  _DAT_183331cf8 = (_DAT_183331cf8 * 0x241886dff8641919 ^ _DAT_183332008) + _DAT_183331d58;
  _DAT_183331ce8 = _DAT_183331cf8 ^ _DAT_183332008;
  _DAT_183331c58 = 0x2b088832;
  uVar4 = (_DAT_183331d50 ^ _DAT_18202e180) + _DAT_183331d48 + 0xaf2aab17;
  uVar9 = (_DAT_183331d48 ^ _UNK_18202e188) + _DAT_183331d50 + 0xd4f778cd;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183331d50 ^ _DAT_18202e180;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183331d48 ^ _UNK_18202e188;
  _DAT_183331e70 =
       func_0x00018cbdf8b0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183331d50 + 0xd4f778cd) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183331d48 + 0xaf2aab17));
  uVar4 = _DAT_183331e70 ^ 0xfffff8ff;
  _DAT_183331c70 = _DAT_183331d48 ^ uVar4 ^ 0x1000000ff;
  _DAT_183331fd0 = (_DAT_183331fd0 ^ uVar4) + 0x1000000ff ^ 0x9bad8a910f0a20f;
  _DAT_183332090 = (_DAT_183332090 * -0x33015ab7368873db ^ _DAT_183331fd0) + uVar4;
  _DAT_183331db0 = _DAT_183332090 ^ _DAT_183331fd0;
  _DAT_183332060 = 0xff;
  uVar4 = (~_DAT_183331bc0 + 0x991097) *
          ((_DAT_183331f70 ^ 0x84222325) + (ulonglong)((uint)_DAT_183331f70 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183331d30) + (uVar4 & _DAT_183331d30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331f08 = func_0x00018cbdf8b0((uVar4 | 0x84bb33b3) + (ulonglong)((uint)uVar4 & 0x84bb33b3))
  ;
  _DAT_1833320b8 = _DAT_1833320b8 - 0x991096 ^ 0x317c51a6964960f7;
  _DAT_183331f38 = _DAT_183331b50 * -0x12ac33c1a0ccc2ad;
  _DAT_183331b50 = _DAT_183331f38 ^ _DAT_1833320b8;
  _DAT_183331e30 = 0xff66ef6a;
  _DAT_183331c20 = func_0x00018cbdf8b0(_DAT_183331db0 + 0x3100844400baff ^ 0x7e);
  _DAT_183331f78 = _DAT_183331bc0 ^ _DAT_183331c20 ^ 0x991195;
  _DAT_183331ca8 = (_DAT_183331ca8 ^ _DAT_183331c20) + 0x991195 ^ 0xb8556b7a7854a4ef;
  _DAT_183331e90 = (_DAT_183331e90 * -0x63a0bd42e7bcaf61 ^ _DAT_183331ca8) + _DAT_183331c20;
  _DAT_1833320b8 = _DAT_183331e90 ^ _DAT_183331ca8;
  _DAT_183331c98 = 0x991195;
  _DAT_183331d48 = func_0x00018cbdf8b0(_DAT_183331e70 + 0xd3001849ff24ff ^ 0x33);
  uVar4 = _DAT_183331d48 ^ 0x98b60f932962b2;
  _DAT_183331de8 = _DAT_183332048 ^ uVar4 ^ 0x1000000ff;
  _DAT_183332090 = (_DAT_183332090 ^ uVar4) + 0x1000000ff ^ 0x76a5de2da20105a5;
  _DAT_183331de0 = (_DAT_183331de0 * -0x8e0f74a619552cb ^ _DAT_183332090) + uVar4;
  _DAT_183332000 = _DAT_183331de0 ^ _DAT_183332090;
  _DAT_183331c48 = 0xff;
  uVar4 = (_DAT_183332030 ^ _DAT_18202e190) + _DAT_183332070 + 0x5ddb5cde;
  uVar9 = (_DAT_183332070 ^ _UNK_18202e198) + _DAT_183332030 + 0x9c31e555;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183332030 ^ _DAT_18202e190;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183332070 ^ _UNK_18202e198;
  _DAT_183331e88 =
       func_0x00018cbdf8b0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183332030 + 0x9c31e555) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183332070 + 0x5ddb5cde));
  _DAT_183331f90 = (_DAT_183331f90 ^ _DAT_183331e88) + 0x45c89aae ^ 0xa71dbb148a396ba4;
  _DAT_183331f30 = (_DAT_183331f30 * -0x1cfbd28e683c642f ^ _DAT_183331f90) + _DAT_183331e88;
  _DAT_183331ea8 = _DAT_183331f30 ^ _DAT_183331f90;
  _DAT_183331d20 = 0x45c89aae;
  uVar4 = (~_DAT_183331d90 + 0x9c31e556) *
          ((_DAT_183331cd8 ^ 0x5ddb5cde) + (ulonglong)((uint)_DAT_183331cd8 & 0x5ddb5cde) * 2);
  uVar4 = (uVar4 | _DAT_183331b58) + (uVar4 & _DAT_183331b58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331d60 = func_0x00018cbdf8b0((uVar4 | 0xc1eab98b) + (ulonglong)((uint)uVar4 & 0xc1eab98b))
  ;
  _DAT_183332078 =
       (_DAT_183332078 ^ _DAT_183331d60 ^ 0x84fe8603dba77aac) + 0x98316551 ^ 0xe180072b3469b987;
  _DAT_183331ca0 =
       (_DAT_183331ca0 * 0x6302f7c15f6be0d ^ _DAT_183332078) + (_DAT_183331d60 ^ 0x84fe8603dba77aac)
  ;
  _DAT_183331db8 = _DAT_183331ca0 ^ _DAT_183332078;
  _DAT_183331b90 = 0x98316551;
  _DAT_183331ec8 = func_0x00018cbdf8b0(_DAT_183331b70 + 0x510050d8ff87ffU ^ 0x1e);
  uVar4 = (_DAT_183331ec8 ^ 0x75eadaae) * -0x6b345b3bdb1043df;
  _DAT_183331f38 = _DAT_183331f30 ^ uVar4 ^ 0x762b6550;
  _DAT_183331fb8 = (_DAT_183331fb8 ^ uVar4) + 0x762b6550 ^ 0xe717493ddf3529ee;
  _DAT_183331b90 = (_DAT_183331b90 * 0x16c5350d1bf7f617 ^ _DAT_183331fb8) + uVar4;
  _DAT_183331c58 = _DAT_183331b90 ^ _DAT_183331fb8;
  _DAT_183331dd8 = 0x762b6550;
  _DAT_183332020 = func_0x00018cbdf8b0(_DAT_183331e40 ^ 0xffe30084b60021c4);
  uVar4 = (ulonglong)((uint)_DAT_183332020 ^ 0xff) << 0x29 | _DAT_183332020 >> 0x17;
  _DAT_183331cf0 = _DAT_183331e00 ^ uVar4 ^ 0xff;
  _DAT_183331bb0 = (_DAT_183331bb0 ^ uVar4) + 0xff ^ 0x88b607b0ef68fffb;
  _DAT_183331fe8 = (_DAT_183331fe8 * 0x5272e97460f3a513 ^ _DAT_183331bb0) + uVar4;
  _DAT_183331c70 = _DAT_183331fe8 ^ _DAT_183331bb0;
  _DAT_183331fe0 = 0xff;
  _DAT_183331f98 = func_0x00018cbdf8b0(_DAT_183331e48 ^ 0x9f00621effe3af);
  uVar4 = (_DAT_183331f98 ^ 0xd9f97ffafffffffe) << 10 |
          (_DAT_183331f98 ^ 0xd9f97ffafffffffe) >> 0x36;
  _DAT_183332048 = (_DAT_183332048 ^ uVar4) + 0x26068004 ^ 0xf7306c1914df36c1;
  _DAT_183332088 = (_DAT_183332088 * 0x1d9a50d4e96be781 ^ _DAT_183332048) + uVar4;
  _DAT_183332000 = _DAT_183332088 ^ _DAT_183332048;
  _DAT_183331b40 = 0x26068004;
  _DAT_183332048 = func_0x00018cbdf8b0(_DAT_183331c50 + 0xabffd535ff4affU ^ 0x5c);
  uVar4 = (_DAT_183332048 << 0x1b | _DAT_183332048 >> 0x25) ^ 0xd9f97ffb;
  uVar4 = uVar4 << 0x2e | uVar4 >> 0x12;
  _DAT_183331c08 = _DAT_183331c08 ^ uVar4 ^ 0x589204f8050ee3e5;
  _DAT_183332088 = (_DAT_183332088 * 0x49ded33fa77fe77 ^ _DAT_183331c08) + uVar4;
  _DAT_183332098 = _DAT_183332088 ^ _DAT_183331c08;
  _DAT_183331df0 = 0;
  _DAT_183331cc0 = func_0x00018cbdf8b0(_DAT_183331fe8 ^ 0x22ff7bd6001de6);
  uVar4 = _DAT_183331cc0 * -0x4cae48ff6aefd66d & 0xfffffffffffff800;
  _DAT_183331f80 = _DAT_183332080 ^ uVar4 ^ 0xff;
  _DAT_183331d88 = (_DAT_183331d88 ^ uVar4) + 0xff ^ 0x11f780f96172145;
  _DAT_183331f20 = (_DAT_183331f20 * 0x11b8970ea98b2b7d ^ _DAT_183331d88) + uVar4;
  _DAT_183331c48 = _DAT_183331f20 ^ _DAT_183331d88;
  _DAT_183331db8 = 0xff;
  uVar4 = (_DAT_183331e70 ^ _DAT_18202e1a0) + _DAT_183331cf8 + 0x94e35cdc;
  uVar9 = (_DAT_183331cf8 ^ _UNK_18202e1a8) + _DAT_183331e70 + 0x10c17ff9;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183331e70 ^ _DAT_18202e1a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183331cf8 ^ _UNK_18202e1a8;
  _DAT_183331ea8 =
       func_0x00018cbdf8b0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183331e70 + 0x10c17ff9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183331cf8 + 0x94e35cdc));
  _DAT_183331c70 = _DAT_183331c70 ^ _DAT_183331ea8 ^ 0xff3a8aed20aac6a3;
  _DAT_183331ee0 = (_DAT_183331ee0 * -0x262a578433e43083 ^ _DAT_183331c70) + _DAT_183331ea8;
  _DAT_183332050 = _DAT_183331ee0 ^ _DAT_183331c70;
  _DAT_183331d40 = 0;
  uVar4 = ((_DAT_183331fe0 ^ 0x842223da) + (ulonglong)((uint)_DAT_183331fe0 & 0x842223da) * 2) *
          -_DAT_183331fb0;
  uVar4 = (uVar4 | _DAT_183331b30) + (uVar4 & _DAT_183331b30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar1 = func_0x00018cbdf8b0((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da));
  uVar1 = ~uVar1 & 0xff;
  uVar3 = uVar1 >> 1 | uVar1;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uVar4 * 8 ^ (ulonglong)uVar1) << 0x29 | (uVar4 & 0x1fffffffffffffff) >> 0x14;
  _DAT_183331ea0 = _DAT_183331fe8 ^ uVar4 ^ 0xff;
  _DAT_183331c18 = (_DAT_183331c18 ^ uVar4) + 0xff ^ 0x48a2b33178f9f207;
  _DAT_183332078 = (_DAT_183332078 * 0x4d52d88b9e5c82ed ^ _DAT_183331c18) + uVar4;
  _DAT_183331cc0 = _DAT_183332078 ^ _DAT_183331c18;
  _DAT_183331b18 = 0xff;
  uVar9 = uStack00000000000000a0 & 0xff;
  auVar6._8_8_ = uVar9;
  auVar6._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_18202e1b0,_DAT_1800170c0);
  uVar5 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar5 + _DAT_183331c98;
  if (auVar7._4_4_ < 0) {
    uVar4 = _DAT_1833320b0 ^ uVar5;
  }
  _DAT_183331d30 = func_0x00018cbdf8b0(SUB161(auVar6 ^ _DAT_18202e1b0,5) ^ uVar4);
  uVar1 = uStack00000000000000b8;
  uVar4 = in_stack_00000050 * uVar9 ^ _DAT_183331d30;
  uVar4 = uVar4 << 0x3b | uVar4 >> 5;
  _DAT_183331e40 = in_stack_00000050 | uVar9;
  _DAT_183332000 = (_DAT_183332000 ^ uVar4) + _DAT_183331e40 ^ 0xbb09a1b7b33ebdfa;
  _DAT_183331fe0 = (_DAT_183331fe0 * 0x2257dc599349d0f3 ^ _DAT_183332000) + uVar4;
  _DAT_183332008 = _DAT_183331fe0 ^ _DAT_183332000;
  uVar9 = CONCAT44(0,uStack00000000000000b8);
  uVar4 = (~_DAT_1833320c8 + 2) *
          ((uVar9 ^ 0x84222325 ^ _DAT_183331b90) +
          (ulonglong)((uint)_DAT_183331b90 & (uint)(uVar9 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | _DAT_183331b48) + (uVar4 & _DAT_183331b48);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331f58 =
       func_0x00018cbdf8b0((uVar9 ^ 0x84222324 | uVar4) +
                           (ulonglong)((uint)(uVar9 ^ 0x84222324) & (uint)uVar4));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar9;
  uVar10 = uVar1 & _DAT_18001a990;
  uVar8 = uVar1 | _DAT_18001a990;
  uVar3 = uVar1 ^ _DAT_18001a990;
  uVar4 = ((_DAT_183331f58 ^ uVar9) & 0x3ffffffffffff) << 0xd | _DAT_183331f58 >> 0x33;
  auVar12._8_4_ = 0xffffffff;
  auVar12._0_8_ = 0xffffffffffffffff;
  auVar12._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar12 ^ auVar7,0);
  _DAT_183331d50 =
       ((ulonglong)_DAT_18202e1d0 * (ulonglong)uVar3 << 0x20) +
       (ulonglong)_DAT_18202e1c0 * (ulonglong)uVar3 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_18202e1d0 << 0x20 |
       (ulonglong)uVar10 * (ulonglong)_DAT_18202e1c0) + uVar9 +
       ((ulonglong)_DAT_18202e1f0 * (ulonglong)uVar8 << 0x20) +
       (ulonglong)_DAT_18202e1e0 * (ulonglong)uVar8 +
       (-((ulonglong)uVar11 * (_DAT_18202e260 & 0xffffffff) +
         ((ulonglong)_DAT_18202e2b0 * (ulonglong)uVar11 +
          (SUB168(auVar12 ^ auVar7,0) >> 0x20) * (_DAT_18202e260 & 0xffffffff) << 0x20)) -
       (((ulonglong)uVar3 * (ulonglong)_DAT_18202e2a0 << 0x20) +
        (ulonglong)_DAT_18202e290 * (ulonglong)uVar3 +
        ((ulonglong)uVar8 * (ulonglong)_DAT_18202e280 << 0x20) +
        (ulonglong)_DAT_18202e270 * (ulonglong)uVar8 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_18202e250 << 0x20 |
       (ulonglong)_DAT_18202e240 * (ulonglong)uVar10) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_18202e230 << 0x20) +
       (ulonglong)_DAT_18202e220 * (ulonglong)uVar1)) + 0xd37a973385386b1a;
  _DAT_183331b48 = _DAT_183331c98 ^ uVar4 ^ _DAT_183331d50;
  _DAT_183331f90 = (_DAT_183331f90 ^ uVar4) + _DAT_183331d50 ^ 0xb8f6515ef9287da2;
  _DAT_183331ee0 = (_DAT_183331ee0 * -0x343084678ce90a0d ^ _DAT_183331f90) + uVar4;
  _DAT_183331c00 = _DAT_183331ee0 ^ _DAT_183331f90;
  uStack00000000000000b8 = (uint)_DAT_183331d50;
  _DAT_183331d50 = _DAT_183331d50 & 0xffffffff;
  uStack0000000000000060 = *(undefined8 *)(unaff_RBX + 8);
  uStack0000000000000060 = (**(code **)(*unaff_RSI + 0x580))();
  iVar2 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa,uStack0000000000000060);
  switch(iVar2 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cbc6849 (image 18cbc6849) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbc6849(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint unaff_XMM9_Da;
  ulonglong unaff_XMM14_Qa;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_000000b8;
  longlong in_stack_000000d0;
  uint in_stack_00000118;
  
  uStack0000000000000040 = in_stack_000000b8;
  uVar3 = (ulonglong)in_stack_00000118;
  auVar5._8_8_ = _UNK_180062bf8;
  auVar5._0_8_ = uVar3 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_18202dcb0,_DAT_1800170c0);
  uVar2 = auVar6._8_8_ + auVar6._0_8_;
  uVar1 = uVar2 + _DAT_183331c30;
  if (auVar6._4_4_ < 0) {
    uVar1 = _DAT_183331bb0 ^ uVar2;
  }
  _DAT_183331b80 = func_0x00018cbdf8b0(SUB161(auVar5 ^ _DAT_18202dcb0,5) ^ uVar1);
  uVar7 = in_stack_00000118 & (uint)_DAT_18001a990;
  uVar4 = in_stack_00000118 | (uint)_DAT_18001a990;
  _DAT_183331d88 = (_DAT_183331b80 ^ uVar3) << 0x12 | _DAT_183331b80 >> 0x2e;
  uVar1 = ((uVar3 ^ unaff_XMM14_Qa) & 0xffffffff) * (ulonglong)_DAT_18202dd00 +
          (((uVar3 ^ unaff_XMM14_Qa) & 0xffffffff) * (ulonglong)_DAT_18202dd10 +
           (unaff_XMM14_Qa >> 0x20) * (ulonglong)_DAT_18202dd00 << 0x20) +
          ((ulonglong)uVar4 * (ulonglong)_DAT_18202dcf0 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_18202dce0 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_18202dcf0 << 0x20 |
          (ulonglong)uVar7 * (ulonglong)_DAT_18202dce0) +
          ((ulonglong)in_stack_00000118 * (ulonglong)_DAT_18202dcd0 << 0x20) +
          (ulonglong)in_stack_00000118 * (ulonglong)_DAT_18202dcc0 +
          (-(((uVar3 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)unaff_XMM9_Da +
            ((_DAT_18001a990 >> 0x20) * (ulonglong)unaff_XMM9_Da +
             ((uVar3 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)_DAT_18202dd50 << 0x20)) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_18202dd70 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_18202dd60 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_18202dd50 << 0x20 |
          (ulonglong)uVar7 * (ulonglong)unaff_XMM9_Da))) + 0x6811386ce3bbb8e3;
  _DAT_183331c90 = (_DAT_183331c90 ^ _DAT_183331d88) + uVar1 ^ 0xd5a747fad9f32096;
  _DAT_183331d88 =
       ((_DAT_183331d30 ^ _DAT_183331d88 ^ uVar1) * -0x1a43d757eb241919 ^ _DAT_183331c90) +
       _DAT_183331d88;
  _DAT_183331f20 = _DAT_183331d88 ^ _DAT_183331c90;
  _DAT_183331ca0 = uVar1 & 0xffffffff;
  switch(in_stack_000000d0 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cbc5603 (image 18cbc5603) =====

void thunk_FUN_18cbc2fb3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva cbc4d95 (image 18cbc4d95) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cbc4dac */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cbc4d95(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cbc2e6a (image 18cbc2e6a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cbc2e81 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cbc2e6a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cbdee46 (image 18cbdee46) =====

void thunk_FUN_18cbc568b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva cbc5c80 (image 18cbc5c80) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cbc635a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cbc5c80(void)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_stack_00000040;
  undefined4 uStack00000000000000c8;
  undefined4 uStack0000000000000118;
  
  uStack00000000000000c8 = in_stack_00000040;
  uStack0000000000000118 = 0;
  uVar2 = (~_DAT_183332098 + 2) *
          ((_DAT_183332098 ^ 0x7bdddcda) + (ulonglong)((uint)_DAT_183332098 & 0x7bdddcda) * 2);
  uVar2 = (uVar2 | _DAT_183331f18) + (uVar2 & _DAT_183331f18);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183331ff8 = func_0x00018cbdf8b0((uVar2 | 0x7bdddcdb) + (ulonglong)((uint)uVar2 & 0x7bdddcdb))
  ;
  uVar7 = _DAT_18001a990 ^ 0xffffffff;
  lVar5 = ((ulonglong)_DAT_18202db00 * 0xffffffff << 0x20) + (ulonglong)_DAT_18202daf0 * 0xffffffff;
  uVar2 = (_DAT_183331ff8 ^ 0xfffffffe) & 0x7fffffffffffffff;
  uVar3 = ((((ulonglong)uVar7 * (ulonglong)_DAT_18202dae0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_18202dad0 +
            ((ulonglong)_DAT_18202dac0 * 0xffffffff << 0x20) +
            (ulonglong)_DAT_18202dab0 * 0xffffffff +
            ((ulonglong)_DAT_18001a990 * (ulonglong)_DAT_18202daa0 << 0x20 |
            (ulonglong)_DAT_18001a990 * (ulonglong)_DAT_18202da90) +
            ((ulonglong)_DAT_18202da80 * 0xffffffff << 0x20) +
            (ulonglong)_DAT_18202da70 * 0xffffffff + lVar5) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_18202db80 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_18202db70 +
           ((ulonglong)_DAT_18202db60 * 0xffffffff << 0x20) + (ulonglong)_DAT_18202db50 * 0xffffffff
           + ((ulonglong)_DAT_18001a990 * (ulonglong)_DAT_18202db40 << 0x20 |
             (ulonglong)_DAT_18001a990 * (ulonglong)_DAT_18202db30) +
             ((ulonglong)_DAT_18202db20 * 0xffffffff << 0x20) +
             (ulonglong)_DAT_18202db10 * 0xffffffff + lVar5)) + 0xb767cc952f64972d;
  _DAT_183331f50 = _DAT_183331c08 ^ uVar2 ^ uVar3;
  _DAT_183331cf8 = (_DAT_183331cf8 ^ uVar2) + uVar3 ^ 0x940a3549ff765259;
  _DAT_183331e48 = (_DAT_183331e48 * -0x45c24e57f7961311 ^ _DAT_183331cf8) + uVar2;
  _DAT_183331d18 = _DAT_183331e48 ^ _DAT_183331cf8;
  _DAT_183331db0 = uVar3 & 0xffffffff;
  uVar4 = uVar3 & 0xffffffff;
  uVar2 = ((_DAT_183331e70 ^ 0x84222335) + (ulonglong)((uint)_DAT_183331e70 & 0x84222335) * 2) *
          (uVar4 - _DAT_1833320c8);
  uVar2 = (uVar2 | _DAT_1833320b0) + (uVar2 & _DAT_1833320b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183331b28 =
       func_0x00018cbdf8b0((uVar4 ^ 0x84222335 | uVar2) +
                           (ulonglong)((uint)(uVar4 ^ 0x84222335) & (uint)uVar2));
  uVar8 = (uint)uVar3 & 0x10;
  uVar9 = (uint)uVar3 | 0x10;
  uVar2 = (uVar3 & 0xffffffff) * 0x10;
  lVar6 = (uVar2 & 0xffffffff) * (ulonglong)_DAT_18202dc10 +
          ((uVar2 & 0xffffffff) * (ulonglong)_DAT_18202dc20 +
           ((uVar3 & 0xffffffff) >> 0x1c) * (ulonglong)_DAT_18202dc10 << 0x20);
  auVar1._8_4_ = 0xffffffff;
  auVar1._0_8_ = 0xffffffffffffffff;
  auVar1._12_4_ = 0xffffffff;
  uVar7 = SUB164(ZEXT816(0x10) ^ auVar1,0);
  lVar5 = (ulonglong)uVar7 * (ulonglong)_DAT_18202dc70 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_18202dca0 +
           (SUB168(ZEXT816(0x10) ^ auVar1,0) >> 0x20) * (ulonglong)_DAT_18202dc70 << 0x20) +
          ((ulonglong)uVar9 * (ulonglong)_DAT_18202dc90 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_18202dc80 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_18202dc90 << 0x20) +
          (ulonglong)uVar8 * (ulonglong)_DAT_18202dc80 +
          ((ulonglong)_DAT_18202dc40 << 0x24) + (ulonglong)_DAT_18202dc30 * 0x10 +
          ((uVar3 & 0xffffffff) * (ulonglong)_DAT_18202dc60 << 0x20) +
          (uVar3 & 0xffffffff) * (ulonglong)_DAT_18202dc50 + lVar6;
  uVar2 = _DAT_183331b28 & 0x7fffffffffffff80;
  _DAT_1833320f0 =
       (((uVar4 ^ 0x10) * (ulonglong)_DAT_18202dbf0 +
         ((uVar4 ^ 0x10) * (ulonglong)_DAT_18202dc00 << 0x20) +
         ((ulonglong)uVar9 * (ulonglong)_DAT_18202dbe0 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)_DAT_18202dbd0 +
         ((ulonglong)uVar8 * (ulonglong)_DAT_18202dbc0 << 0x20) +
         (ulonglong)uVar8 * (ulonglong)_DAT_18202dbb0 +
         ((uVar3 & 0xffffffff) * (ulonglong)_DAT_18202dba0 << 0x20) +
         (uVar3 & 0xffffffff) * (ulonglong)_DAT_18202db90 +
         ((ulonglong)_DAT_18202dba0 << 0x24) + (ulonglong)_DAT_18202db90 * 0x10 + lVar6) - lVar5) +
       0xd77da2ac3a3e945c;
  _DAT_183331ef8 = _DAT_183331ea8 ^ uVar2 ^ _DAT_1833320f0;
  _DAT_183331eb0 = (_DAT_183331eb0 ^ uVar2) + _DAT_1833320f0 ^ 0x2671fa1d9c7654d5;
  _DAT_183332010 = (_DAT_183332010 * -0x3e7df879b586d4c9 ^ _DAT_183331eb0) + uVar2;
  _DAT_183331b40 = _DAT_183332010 ^ _DAT_183331eb0;
  _DAT_1833320f0 = _DAT_1833320f0 & 0xffffffff;
  FUN_190dd72e0(lVar5,*_DAT_18301ee50 + 0x2e9,0x12);
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cb755cc (image 18cb755cc) =====

void FUN_18cb755cc(void)

{
  return;
}



// ===== continuation @ rva cb713d4 (image 18cb713d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb713d4(void)

{
  FUN_190ddce00();
  (*_DAT_18201b788)();
  return;
}



// ===== continuation @ rva cb752f3 (image 18cb752f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb752f3(void)

{
  (*_DAT_18201bb18)();
  return;
}



// ===== continuation @ rva cb751cd (image 18cb751cd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb751cd(void)

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



// ===== continuation @ rva cb757d3 (image 18cb757d3) =====

void FUN_18cb757d3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cb757c1 (image 18cb757c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb757c1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18201b8c8)();
  return;
}



// ===== continuation @ rva cb75314 (image 18cb75314) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb75314(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18201b898)();
  return;
}



// ===== continuation @ rva cb7502f (image 18cb7502f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb7502f(void)

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



// ===== continuation @ rva cb755bd (image 18cb755bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb755bd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_18201b8c8)();
  return;
}



// ===== continuation @ rva cb74cea (image 18cb74cea) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb74cea(void)

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



// ===== continuation @ rva cb74bb5 (image 18cb74bb5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb74bb5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18201bcb8)();
  return;
}



// ===== continuation @ rva cb74eea (image 18cb74eea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb74eea(void)

{
  (*_DAT_18201bb18)();
  return;
}



// ===== continuation @ rva cb74e55 (image 18cb74e55) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb74e55(void)

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



// ===== continuation @ rva cb75546 (image 18cb75546) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb75546(void)

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



// ===== continuation @ rva cb7944f (image 18cb7944f) =====

void FUN_18cb7944f(void)

{
  return;
}



// ===== continuation @ rva cb75994 (image 18cb75994) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb75994(void)

{
  FUN_190ddce00();
  (*_DAT_18201db98)();
  return;
}



// ===== continuation @ rva cb7856e (image 18cb7856e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7856e(void)

{
  (*_DAT_18201d8c8)();
  return;
}



// ===== continuation @ rva cb785d4 (image 18cb785d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb785d4(void)

{
  (*_DAT_18201db08)();
  return;
}



// ===== continuation @ rva cb7a6a9 (image 18cb7a6a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7a6a9(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x1f8))();
  (**(code **)(*unaff_R15 + 0x720))();
  (*_DAT_18201d988)();
  return;
}



// ===== continuation @ rva cb79e77 (image 18cb79e77) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb79e77(void)

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



// ===== continuation @ rva cb78f9c (image 18cb78f9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb78f9c(void)

{
  FUN_190dd9df0();
  (*_DAT_18201d428)();
  return;
}



// ===== continuation @ rva cb79fd3 (image 18cb79fd3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb79fd3(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  (*_DAT_18201d9f8)();
  return;
}



// ===== continuation @ rva cb79c03 (image 18cb79c03) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb79c03(undefined8 param_1)

{
  longlong *unaff_R15;
  undefined8 in_stack_00000048;
  
  (**(code **)(*unaff_R15 + 0x338))(param_1,in_stack_00000048);
  (*_DAT_18201d5f8)();
  return;
}



// ===== continuation @ rva cb78a24 (image 18cb78a24) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb78a24(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18201d358)();
  return;
}



// ===== continuation @ rva cb786d8 (image 18cb786d8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb786d8(void)

{
  FUN_190dd9df0();
  (*_DAT_18201cd78)();
  return;
}



// ===== continuation @ rva cbe8b09 (image 18cbe8b09) =====

void FUN_18cbe8b09(void)

{
  return;
}



// ===== continuation @ rva cbe4917 (image 18cbe4917) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe4917(void)

{
  FUN_190ddce00();
  (*_DAT_182030218)();
  return;
}



// ===== continuation @ rva cbe7d44 (image 18cbe7d44) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe7d44(void)

{
  (*_DAT_182030a58)();
  return;
}



// ===== continuation @ rva cbe8242 (image 18cbe8242) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe8242(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1820309d8)();
  return;
}



// ===== continuation @ rva cbe80c9 (image 18cbe80c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe80c9(void)

{
  FUN_190de3220();
  (*_DAT_182030848)();
  return;
}



// ===== continuation @ rva cbe8ea9 (image 18cbe8ea9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe8ea9(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182030398)();
  return;
}



// ===== continuation @ rva cbe7680 (image 18cbe7680) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe7680(void)

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



// ===== continuation @ rva cbe891d (image 18cbe891d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe891d(void)

{
  (*_DAT_1820304a8)();
  return;
}



// ===== continuation @ rva cbe8f0c (image 18cbe8f0c) =====

void FUN_18cbe8f0c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cbe78bd (image 18cbe78bd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbe78bd(void)

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



// ===== continuation @ rva cbe8b92 (image 18cbe8b92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe8b92(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = param_2;
  FUN_190dd72e0();
  (*_DAT_182030438)();
  return;
}



// ===== continuation @ rva cbe7a0b (image 18cbe7a0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe7a0b(void)

{
  (*_DAT_1820303a8)();
  return;
}



// ===== continuation @ rva cbe8c13 (image 18cbe8c13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbe8c13(void)

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



// ===== continuation @ rva cbecdea (image 18cbecdea) =====

void FUN_18cbecdea(void)

{
  return;
}



// ===== continuation @ rva cbe90c4 (image 18cbe90c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbe90c4(void)

{
  FUN_190ddce00();
  (*_DAT_182031748)();
  return;
}



// ===== continuation @ rva cbecf07 (image 18cbecf07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbecf07(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1820319a8)();
  return;
}



// ===== continuation @ rva cbec0ba (image 18cbec0ba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbec0ba(void)

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



// ===== continuation @ rva cbec492 (image 18cbec492) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbec492(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182031648)();
  return;
}



// ===== continuation @ rva cbec014 (image 18cbec014) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbec014(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_182031bc8)();
  return;
}



// ===== continuation @ rva cbec421 (image 18cbec421) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbec421(void)

{
  (*_DAT_182031c18)();
  return;
}



// ===== continuation @ rva cbec853 (image 18cbec853) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbec853(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_182031888)();
  return;
}



// ===== continuation @ rva cbec7d2 (image 18cbec7d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbec7d2(void)

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



// ===== continuation @ rva cbecf6a (image 18cbecf6a) =====

void FUN_18cbecf6a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cbec735 (image 18cbec735) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbec735(void)

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



// ===== continuation @ rva cbec6f2 (image 18cbec6f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbec6f2(void)

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



// ===== continuation @ rva cbf1cc4 (image 18cbf1cc4) =====

void FUN_18cbf1cc4(void)

{
  return;
}



// ===== continuation @ rva cbed124 (image 18cbed124) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbed124(void)

{
  FUN_190ddce00();
  (*_DAT_1820327b8)();
  return;
}



// ===== continuation @ rva cbf1de1 (image 18cbf1de1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf1de1(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182032e58)();
  return;
}



// ===== continuation @ rva cbf174c (image 18cbf174c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf174c(void)

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



// ===== continuation @ rva cbf17a4 (image 18cbf17a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf17a4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182032d58)();
  return;
}



// ===== continuation @ rva cbf1186 (image 18cbf1186) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf1186(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1820327f8)();
  return;
}



// ===== continuation @ rva cbf0de7 (image 18cbf0de7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf0de7(void)

{
  FUN_190dd72e0();
  (*_DAT_182032cd8)();
  return;
}



// ===== continuation @ rva cbf13fe (image 18cbf13fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbf13fe(void)

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



// ===== continuation @ rva cbf13cf (image 18cbf13cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf13cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182032798)();
  return;
}



// ===== continuation @ rva cbf1126 (image 18cbf1126) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf1126(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182032a38)();
  return;
}



// ===== continuation @ rva cbf1e44 (image 18cbf1e44) =====

void FUN_18cbf1e44(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cbed157 (image 18cbed157) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbed157(void)

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



// ===== continuation @ rva cbf1ad8 (image 18cbf1ad8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf1ad8(void)

{
  (*_DAT_182032d48)();
  return;
}



// ===== continuation @ rva cbf5d92 (image 18cbf5d92) =====

void FUN_18cbf5d92(void)

{
  return;
}



// ===== continuation @ rva cbf2004 (image 18cbf2004) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf2004(void)

{
  FUN_190ddce00();
  (*_DAT_1820345c8)();
  return;
}



// ===== continuation @ rva cbf56d5 (image 18cbf56d5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf56d5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182034008)();
  return;
}



// ===== continuation @ rva cbf542c (image 18cbf542c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf542c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182034448)();
  return;
}



// ===== continuation @ rva cbf7415 (image 18cbf7415) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf7415(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182034408)();
  return;
}



// ===== continuation @ rva cbf6930 (image 18cbf6930) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf6930(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_182033f28)();
  return;
}



// ===== continuation @ rva cbf6ca3 (image 18cbf6ca3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf6ca3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182033ff8)();
  return;
}



// ===== continuation @ rva cbf67a6 (image 18cbf67a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf67a6(void)

{
  FUN_190de3220();
  (*_DAT_1820341d8)();
  return;
}



// ===== continuation @ rva cbf207c (image 18cbf207c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf207c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_182033ef8)();
  return;
}



// ===== continuation @ rva cbf5c0c (image 18cbf5c0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf5c0c(void)

{
  (*_DAT_182034308)();
  return;
}



// ===== continuation @ rva cbf76cc (image 18cbf76cc) =====

void FUN_18cbf76cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cbf5213 (image 18cbf5213) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf5213(void)

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



// ===== continuation @ rva cbf7263 (image 18cbf7263) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf7263(void)

{
  (*_DAT_182034cd8)();
  return;
}



// ===== continuation @ rva cbfb23f (image 18cbfb23f) =====

void FUN_18cbfb23f(void)

{
  return;
}



// ===== continuation @ rva cbf78ae (image 18cbf78ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbf78ae(void)

{
  FUN_190ddce00();
  (*_DAT_182038c08)();
  return;
}



// ===== continuation @ rva cc05f4a (image 18cc05f4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc05f4a(void)

{
  FUN_190dd72e0();
  (*_DAT_182038b98)();
  return;
}



// ===== continuation @ rva cc05ecd (image 18cc05ecd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc05ecd(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1820370a8)();
  return;
}



// ===== continuation @ rva cc06677 (image 18cc06677) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc06677(void)

{
  (*_DAT_182038f08)();
  return;
}



// ===== continuation @ rva cbfb334 (image 18cbfb334) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbfb334(void)

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



// ===== continuation @ rva cc05bad (image 18cc05bad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc05bad(void)

{
  (*_DAT_182038cd8)();
  return;
}



// ===== continuation @ rva cc029d4 (image 18cc029d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc029d4(void)

{
  (*_DAT_1820387e8)();
  return;
}



// ===== continuation @ rva cbfface (image 18cbfface) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbfface(void)

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



// ===== continuation @ rva cc035e1 (image 18cc035e1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc035e1(void)

{
  FUN_190ddfc90();
  (*_DAT_1820373a8)();
  return;
}



// ===== continuation @ rva cc010f3 (image 18cc010f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc010f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1820360d8)();
  return;
}



// ===== continuation @ rva cc00f7a (image 18cc00f7a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc00f7a(void)

{
  FUN_190de3220();
  (*_DAT_1820371e8)();
  return;
}



// ===== continuation @ rva cc0c6a0 (image 18cc0c6a0) =====

void FUN_18cc0c6a0(void)

{
  return;
}



// ===== continuation @ rva cc068bd (image 18cc068bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc068bd(void)

{
  FUN_190ddce00();
  (*_DAT_18203aae8)();
  return;
}



// ===== continuation @ rva cc0c717 (image 18cc0c717) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0c717(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18203b048)();
  return;
}



// ===== continuation @ rva cc0a7d2 (image 18cc0a7d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cc0a7d2(void)

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



// ===== continuation @ rva cc0c1db (image 18cc0c1db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0c1db(void)

{
  (*_DAT_18203b478)();
  return;
}



// ===== continuation @ rva cc0c118 (image 18cc0c118) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cc0c118(void)

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



// ===== continuation @ rva cc0c853 (image 18cc0c853) =====

void FUN_18cc0c853(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cc09dcc (image 18cc09dcc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cc09dcc(void)

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



// ===== continuation @ rva cc0be55 (image 18cc0be55) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0be55(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18203b798)();
  return;
}



// ===== continuation @ rva cc0aff3 (image 18cc0aff3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0aff3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18203acf8)();
  return;
}



// ===== continuation @ rva cc0ae6b (image 18cc0ae6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0ae6b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_18203af08)();
  return;
}



// ===== continuation @ rva cc0c832 (image 18cc0c832) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0c832(void)

{
  (*_DAT_18203b828)();
  return;
}



// ===== continuation @ rva cc0c3af (image 18cc0c3af) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cc0c3af(void)

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



// ===== continuation @ rva cc0b668 (image 18cc0b668) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0b668(void)

{
  (*_DAT_18203b8c8)();
  return;
}



// ===== continuation @ rva cc112f9 (image 18cc112f9) =====

void FUN_18cc112f9(void)

{
  return;
}



// ===== continuation @ rva cc0ca14 (image 18cc0ca14) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0ca14(void)

{
  FUN_190ddce00();
  (*_DAT_18203d048)();
  return;
}



// ===== continuation @ rva cc110de (image 18cc110de) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc110de(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18203c828)();
  return;
}



// ===== continuation @ rva cc0fc4b (image 18cc0fc4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc0fc4b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18203cdb8)();
  return;
}



// ===== continuation @ rva cc114ac (image 18cc114ac) =====

void FUN_18cc114ac(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cc10e97 (image 18cc10e97) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc10e97(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18203c588)();
  return;
}



// ===== continuation @ rva cc10f58 (image 18cc10f58) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc10f58(void)

{
  (*_DAT_18203cfc8)();
  return;
}



// ===== continuation @ rva cc11496 (image 18cc11496) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc11496(void)

{
  (*_DAT_18203cd58)();
  return;
}



// ===== continuation @ rva cc113c8 (image 18cc113c8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cc113c8(void)

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



// ===== continuation @ rva cc10609 (image 18cc10609) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc10609(void)

{
  (*_DAT_18203ce18)();
  return;
}



// ===== continuation @ rva cc105ca (image 18cc105ca) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cc105ca(void)

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



// ===== continuation @ rva cc108f5 (image 18cc108f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc108f5(void)

{
  (*_DAT_18203cd58)();
  return;
}



// ===== continuation @ rva cc1078d (image 18cc1078d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cc1078d(void)

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



// ===== continuation @ rva cc1148b (image 18cc1148b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cc1148b(void)

{
  (*_DAT_18203ce18)();
  return;
}



// ===== continuation @ rva cc10b00 (image 18cc10b00) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cc10b00(void)

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



// ===== continuation @ rva cb7ea60 (image 18cb7ea60) =====

void FUN_18cb7ea60(void)

{
  return;
}



// ===== continuation @ rva cb7a8e8 (image 18cb7a8e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7a8e8(void)

{
  FUN_190ddce00();
  (*_DAT_18201f080)();
  return;
}



// ===== continuation @ rva cb7fa76 (image 18cb7fa76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7fa76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18201f1d0)();
  return;
}



// ===== continuation @ rva cb7f609 (image 18cb7f609) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7f609(void)

{
  FUN_190dd72e0();
  (*_DAT_18201ecc0)();
  return;
}



// ===== continuation @ rva cb8081e (image 18cb8081e) =====

void FUN_18cb8081e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cb7e9a9 (image 18cb7e9a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb7e9a9(void)

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



// ===== continuation @ rva cb8070b (image 18cb8070b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb8070b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_18201ebd0)();
  return;
}



// ===== continuation @ rva cb7f508 (image 18cb7f508) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb7f508(void)

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



// ===== continuation @ rva cb7dfce (image 18cb7dfce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7dfce(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18201eef0)();
  return;
}



// ===== continuation @ rva cb7dc38 (image 18cb7dc38) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7dc38(void)

{
  FUN_190dd72e0();
  (*_DAT_18201e8b0)();
  return;
}



// ===== continuation @ rva cb7fe78 (image 18cb7fe78) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7fe78(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18201ef80)(0);
  return;
}



// ===== continuation @ rva cb80571 (image 18cb80571) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb80571(void)

{
  (*_DAT_18201f440)();
  return;
}



// ===== continuation @ rva cb8036a (image 18cb8036a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb8036a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18201e710)();
  return;
}



// ===== continuation @ rva cb7f2d3 (image 18cb7f2d3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb7f2d3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (*_DAT_18201f420)();
  return;
}



// ===== continuation @ rva cb80af8 (image 18cb80af8) =====

void FUN_18cb80af8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00018cb80b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182020848 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva cb80aa3 (image 18cb80aa3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cb80ada */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cb80aa3(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cb91b40 (image 18cb91b40) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb91b40(void)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  uint unaff_XMM6_Da;
  
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x28);
  *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x50);
  *(int *)(unaff_RBP + 0x30) = *(int *)(unaff_RBP + 0x50) + 1;
  uVar4 = _DAT_183330a90;
  *(bool *)(unaff_RBP + 0x50) = *(longlong *)(unaff_RBP + 0x10) == 0;
  uVar3 = uVar4 ^ _DAT_182020c50;
  lVar2 = uVar4 + 0x33820abb;
  uVar4 = uVar3 + _DAT_183330980 + 0xcf70134e;
  uVar5 = (_DAT_183330980 ^ _UNK_182020c58) + lVar2;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183330980 ^ _UNK_182020c58;
  _DAT_183330968 =
       func_0x00018cba9a70((uVar4 << 0x1d | uVar4 >> 0x23) - lVar2 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183330980 + 0xcf70134e));
  uVar4 = _DAT_183330968 ^ 0x4b52306b;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar4;
  _DAT_183330948 = (_DAT_183330948 ^ uVar4) + 0x7bd23afb ^ 0x19bce8ecaa46ea68;
  _DAT_183330ab0 = (_DAT_183330ab0 * 0x20f3b718c1461b85 ^ _DAT_183330948) + uVar4;
  _DAT_183330918 = _DAT_183330ab0 ^ _DAT_183330948;
  _DAT_183330af8 = 0x7bd23afb;
  uVar4 = (~_DAT_183330998 + 0xe85a4bb8) *
          ((_DAT_183330ae0 ^ 0x84222325) + (ulonglong)((uint)_DAT_183330ae0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183330940) + (uVar4 & _DAT_183330940);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183330918 = func_0x00018cba9a70((uVar4 | 0x6c786892) + (ulonglong)((uint)uVar4 & 0x6c786892))
  ;
  _DAT_183330a90 =
       (_DAT_183330a90 ^ _DAT_183330918 & 0x7fffffffffffffff) - 0xe85a4bb7 ^ 0x66def945d781bb7a;
  _DAT_183330a38 =
       (_DAT_183330a38 * -0x51fdcb713057475 ^ _DAT_183330a90) +
       (_DAT_183330918 & 0x7fffffffffffffff);
  _DAT_183330950 = _DAT_183330a38 ^ _DAT_183330a90;
  _DAT_183330980 = 0x17a5b449;
  _DAT_183330a30 = func_0x00018cba9a70(_DAT_183330a00 + 0x8affa42cff97ff ^ 0xf9);
  _DAT_1833309a8 = _DAT_183330a18 ^ _DAT_183330a30 ^ 0xe85b4bb6;
  _DAT_183330930 = (_DAT_183330930 ^ _DAT_183330a30) + 0xe85b4bb6 ^ 0x4af76ec76a611813;
  _DAT_183330950 = (_DAT_183330950 * -0x39d075ca1fdfdb2d ^ _DAT_183330930) + _DAT_183330a30;
  _DAT_183330988 = _DAT_183330950 ^ _DAT_183330930;
  _DAT_183330a20 = 0xe85b4bb6;
  uVar4 = (~_DAT_183330a08 + 0x17a5b44a) *
          ((_DAT_183330a80 ^ 0x6c796893) + (ulonglong)((uint)_DAT_183330a80 & 0x6c796893) * 2);
  uVar4 = (uVar4 | _DAT_1833309a0) + (uVar4 & _DAT_1833309a0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183330938 = func_0x00018cba9a70((uVar4 | 0x7bdcdcda) + (ulonglong)((uint)uVar4 & 0x7bdcdcda))
  ;
  uVar4 = _DAT_183330938 & 0x7fffffffffffffff;
  _DAT_1833309b8 = _DAT_183330a88 ^ uVar4;
  _DAT_183330950 = _DAT_1833309b8 ^ 0x10000ffff;
  _DAT_1833309d8 = (_DAT_1833309d8 ^ uVar4) + 0x10000ffff ^ 0xea3091f87c171cfc;
  _DAT_183330a00 = (_DAT_183330a00 * -0x4fa813f7ea69b2d1 ^ _DAT_1833309d8) + uVar4;
  _DAT_183330a30 = 0xffff;
  _DAT_183330928 = func_0x00018cba9a70(_DAT_183330ac0 ^ 0xffd1ffdfb800b8e2);
  uVar4 = _DAT_183330928 - (_DAT_183330928 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ _DAT_183330928;
  _DAT_1833309e0 = (_DAT_1833309e0 ^ uVar4) - 0x649b116d ^ 0x7ce5f907aed2c3a4;
  _DAT_183330a60 = (_DAT_183330a60 * 0x53117ed68640bf17 ^ _DAT_1833309e0) + uVar4;
  _DAT_183330938 = _DAT_183330a60 ^ _DAT_1833309e0;
  _DAT_1833309b0 = 0x9b64ee93;
  _DAT_1833309e0 = func_0x00018cba9a70(_DAT_183330a78 ^ 0xff42ff2070ff4689);
  uVar4 = (_DAT_1833309e0 & 0x1fffffffffffff) - (_DAT_1833309e0 >> 1 & 0x5555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1833309e0) & 0xfffffffffffff;
  _DAT_183330a50 = (_DAT_183330a50 ^ uVar4) + 0x649c116c ^ 0xc8e34561d8c752dc;
  _DAT_183330ac0 = (_DAT_183330ac0 * 0x3d9156db66089061 ^ _DAT_183330a50) + uVar4;
  _DAT_1833309b0 = _DAT_183330ac0 ^ _DAT_183330a50;
  _DAT_183330938 = 0x649c116c;
  _DAT_183330a80 = func_0x00018cba9a70(_DAT_183330908 ^ 0xff33ffea45ffa54a);
  _DAT_183330a90 = _DAT_183330af0 ^ _DAT_183330a80 ^ 0x10000ffff;
  _DAT_183330978 = (_DAT_183330978 ^ _DAT_183330a80) + 0x10000ffff ^ 0x7c6c4af70068eaa9;
  _DAT_183330948 = (_DAT_183330948 * -0x6b27431362340db9 ^ _DAT_183330978) + _DAT_183330a80;
  _DAT_183330950 = _DAT_183330948 ^ _DAT_183330978;
  _DAT_183330940 = 0xffff;
  uVar4 = (_DAT_183330988 ^ _DAT_182020c60) + _DAT_183330ad8 + 0x84222325;
  uVar3 = (_DAT_183330ad8 ^ _UNK_182020c68) + _DAT_183330988 + 0x21bd52eb;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183330988 ^ _DAT_182020c60;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183330ad8 ^ _UNK_182020c68;
  _DAT_183330ad8 =
       func_0x00018cba9a70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183330988 + 0x21bd52eb) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183330ad8 + 0x84222325));
  _DAT_1833309b0 = (_DAT_1833309b0 ^ _DAT_183330ad8) - 0x21bd52eb ^ 0x8c460ce9138728e5;
  _DAT_183330908 = (_DAT_183330908 * -0x10b4b552caf982a3 ^ _DAT_1833309b0) + _DAT_183330ad8;
  _DAT_183330af0 = _DAT_183330908 ^ _DAT_1833309b0;
  _DAT_183330998 = 0xde42ad15;
  uVar4 = (_DAT_183330940 ^ _DAT_182020c70) + _DAT_183330a38 + 0x8422dcda;
  uVar3 = (_DAT_183330a38 ^ _UNK_182020c78) + _DAT_183330940 + 0x21bd52eb;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183330940 ^ _DAT_182020c70;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183330a38 ^ _UNK_182020c78;
  _DAT_183330ab0 =
       func_0x00018cba9a70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183330940 + 0x21bd52eb) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183330a38 + 0x8422dcda));
  uVar4 = (_DAT_183330ab0 & 0xffffffff) * (ulonglong)unaff_XMM6_Da +
          ((_DAT_183330ab0 & 0xffffffff) * (ulonglong)_DAT_182020c90 +
           (_DAT_183330ab0 >> 0x20) * (ulonglong)unaff_XMM6_Da << 0x20) & 0x7ffffffffffffc00;
  _DAT_1833309f8 = _DAT_183330918 ^ uVar4 ^ 0x21be52ea;
  _DAT_183330910 = (_DAT_183330910 ^ uVar4) + 0x21be52ea ^ 0x1c091f791d97bede;
  _DAT_183330af8 = (_DAT_183330af8 * -0x5baf1d5b03c7d089 ^ _DAT_183330910) + uVar4;
  _DAT_183330950 = _DAT_183330af8 ^ _DAT_183330910;
  _DAT_183330938 = 0x21be52ea;
  _DAT_183330970 = func_0x00018cba9a70(_DAT_1833309b0 ^ 0xff33ffc83a002dd2);
  _DAT_1833309a0 = _DAT_183330ae0 ^ _DAT_183330970 ^ 0x10000ffff;
  _DAT_1833309c0 = (_DAT_183330ac0 ^ _DAT_183330970) + 0x10000ffff ^ 0x7d978c5e003ab4ea;
  _DAT_183330ac0 = (_DAT_183330ac0 * -0x5d4619e456988fcb ^ _DAT_1833309c0) + _DAT_183330970;
  _DAT_1833309c0 = _DAT_183330ac0 ^ _DAT_1833309c0;
  _DAT_183330a70 = 0xffff;
  _DAT_183330920 = func_0x00018cba9a70(_DAT_183330a30 ^ 0x830026c2005919);
  uVar4 = _DAT_183330920 >> 1 | _DAT_183330920;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
           ^ _DAT_183330920 ^ 0x7bd23afb) * -0x6e47ab01683dee7f;
  _DAT_183330a40 = _DAT_1833309e0 ^ uVar4 ^ 0x92691fdb;
  _DAT_183330960 = (_DAT_183330960 ^ uVar4) + 0x92691fdb ^ 0xabbf3cfe70299d84;
  _DAT_183330ae8 = (_DAT_183330ae8 * 0x54636245a1910ea3 ^ _DAT_183330960) + uVar4;
  _DAT_183330978 = _DAT_183330ae8 ^ _DAT_183330960;
  _DAT_183330a80 = 0x92691fdb;
  _DAT_183330ae8 = func_0x00018cba9a70(_DAT_1833309e8 ^ 0x4bff34c9ffbd2b);
  uVar4 = _DAT_183330ae8 << 10 | _DAT_183330ae8 >> 0x36;
  _DAT_183330a30 = _DAT_183330960 ^ uVar4 ^ 0x92691fdb;
  _DAT_183330a88 = (_DAT_183330a88 ^ uVar4) + 0x92691fdb ^ 0x5b897edd2322688d;
  _DAT_183330ab8 = (_DAT_183330ab8 * 0x3753d185c2935b ^ _DAT_183330a88) + uVar4;
  _DAT_183330ac0 = _DAT_183330ab8 ^ _DAT_183330a88;
  _DAT_183330a18 = 0x92691fdb;
  uVar4 = (_DAT_183330938 ^ _DAT_182020ca0) + _DAT_183330a48 + 0x164b3cfe;
  uVar3 = (_DAT_183330a48 ^ _UNK_182020ca8) + _DAT_183330938 + 0x92691fdb;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183330938 ^ _DAT_182020ca0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183330a48 ^ _UNK_182020ca8;
  _DAT_183330980 =
       func_0x00018cba9a70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183330938 + 0x92691fdb) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183330a48 + 0x164b3cfe));
  _DAT_183330ab0 = (ulonglong)((uint)_DAT_183330980 & 0x92691fdb);
  _DAT_183330a40 = _DAT_183330a40 ^ _DAT_183330ab0 ^ 0x716664185773c69e;
  _DAT_1833309f0 = (_DAT_1833309f0 * -0x60c80c0a7256b297 ^ _DAT_183330a40) + _DAT_183330ab0;
  _DAT_183330938 = _DAT_1833309f0 ^ _DAT_183330a40;
  _DAT_183330af8 = 0;
  uVar4 = ((_DAT_183330a18 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183330a18 & 0x8422dcda) * 2) *
          -_DAT_1833309f8;
  uVar4 = (uVar4 | _DAT_183330ad0) + (uVar4 & _DAT_183330ad0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183330a00 = func_0x00018cba9a70((uVar4 | 0x8422dcda) + (ulonglong)((uint)uVar4 & 0x8422dcda))
  ;
  uVar4 = _DAT_183330a00 & 0x1fffffffffffff;
  _DAT_183330a78 = _DAT_183330a08 ^ uVar4 ^ 0xffff;
  _DAT_183330928 = (_DAT_183330928 ^ uVar4) + 0xffff ^ 0xe100e70f05f9de1b;
  _DAT_183330a88 = (_DAT_183330a88 * -0x473e1ac333c9bedd ^ _DAT_183330928) + uVar4;
  _DAT_183330af8 = _DAT_183330a88 ^ _DAT_183330928;
  _DAT_183330a80 = 0xffff;
  uVar4 = (~_DAT_183330aa0 + 0x100000000) *
          ((_DAT_183330938 ^ 0xfff019de) + (ulonglong)((uint)_DAT_183330938 & 0xfff019de) * 2);
  uVar4 = (uVar4 | _DAT_183330940) + (uVar4 & _DAT_183330940);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x00018cba9a70((uVar4 | 0xfe621) + (ulonglong)((uint)uVar4 & 0xfe621));
  _DAT_183330a58 = uVar4 << 0xd | uVar4 >> 0x33;
  _DAT_183330a68 = (_DAT_183330a68 ^ _DAT_183330a58) + 0x842dc504 ^ 0x837d31446cbf0670;
  _DAT_183330a58 = (uVar4 * 0x2ce6c13fca8fdf07 ^ _DAT_183330a68) + _DAT_183330a58;
  _DAT_183330958 = _DAT_183330a58 ^ _DAT_183330a68;
  _DAT_183330a98 = 0x842dc504;
  uVar4 = (~_DAT_183330a58 + 0x842dc505) *
          ((_DAT_1833309a0 ^ 0xfff019de) + (ulonglong)((uint)_DAT_1833309a0 & 0xfff019de) * 2);
  uVar4 = (uVar4 | _DAT_183330908) + (uVar4 & _DAT_183330908);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833309b0 = func_0x00018cba9a70((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda))
  ;
  uVar4 = _DAT_1833309b0 << 0x24 | _DAT_1833309b0 >> 0x1c & 0xffffffffff800000;
  _DAT_1833309e0 = _DAT_1833309e0 ^ uVar4 ^ 0xe46c53425a9e6de;
  _DAT_183330ac8 = (_DAT_183330ac8 * -0x60bef6cacb5cc6b3 ^ _DAT_1833309e0) + uVar4;
  _DAT_183330a08 = _DAT_183330ac8 ^ _DAT_1833309e0;
  _DAT_183330a20 = 0;
  uVar4 = ((_DAT_183330938 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183330938 & 0x8422dcda) * 2) *
          -_DAT_1833309d8;
  uVar4 = (uVar4 | _DAT_183330910) + (uVar4 & _DAT_183330910);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183330a40 = func_0x00018cba9a70((uVar4 | 0x8422dcda) + (ulonglong)((uint)uVar4 & 0x8422dcda))
  ;
  uVar4 = (_DAT_183330a40 ^ 0xffff) * -0x19a805c54ae91c79;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  _DAT_183330a38 = _DAT_183330a08 ^ uVar4 ^ 0xffff;
  _DAT_183330908 = (_DAT_183330908 ^ uVar4) + 0xffff ^ 0x9497c5124711386d;
  _DAT_183330988 = (_DAT_183330988 * -0x49836191a2f89465 ^ _DAT_183330908) + uVar4;
  _DAT_183330980 = _DAT_183330988 ^ _DAT_183330908;
  _DAT_183330ad0 = 0xffff;
  _DAT_183330ac0 = func_0x00018cba9a70(_DAT_183330aa0 ^ 0x22ff7c24ffe140);
  uVar4 = _DAT_183330ac0 >> 1 | _DAT_183330ac0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183330ac0;
  _DAT_183330938 = _DAT_183330938 ^ uVar4 ^ 0x7de0bc5f865b1cdf;
  _DAT_183330a40 = (_DAT_183330a40 * 0x6d11a3200718345d ^ _DAT_183330938) + uVar4;
  _DAT_183330978 = _DAT_183330a40 ^ _DAT_183330938;
  _DAT_183330a10 = 0;
  _DAT_183330ab0 = func_0x00018cba9a70(_DAT_183330a50 ^ 0x53ff84d9ffddf7);
  uVar4 = _DAT_183330ab0 & 0x7fffffffffffffff;
  _DAT_183330958 = _DAT_1833309e8 ^ uVar4 ^ 0xffff;
  _DAT_1833309b0 = (_DAT_1833309b0 ^ uVar4) + 0xffff ^ 0x699854bb5cadaed9;
  _DAT_183330a18 = (_DAT_183330a18 * 0x3d46360708be2bc7 ^ _DAT_1833309b0) + uVar4;
  _DAT_1833309c0 = _DAT_183330a18 ^ _DAT_1833309b0;
  _DAT_183330a38 = 0xffff;
  uVar3 = (ulonglong)*(uint *)(unaff_RBP + 0x40);
  uVar4 = (~_DAT_183330a80 + 0x10000) *
          ((uVar3 ^ 0x84222325 ^ _DAT_183330a30) +
          (ulonglong)((uint)_DAT_183330a30 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | _DAT_183330958) + (uVar4 & _DAT_183330958);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183330968 =
       func_0x00018cba9a70((uVar3 ^ 0x8422dcda | uVar4) +
                           (ulonglong)((uint)(uVar3 ^ 0x8422dcda) & (uint)uVar4));
  _DAT_183330a48 = uVar3 & 0xffff;
  _DAT_183330920 =
       (_DAT_183330920 ^ _DAT_183330968 & 0xffffffffffff8000) + _DAT_183330a48 ^ 0xbf936f6e70fe463d;
  _DAT_183330a50 =
       (_DAT_183330a50 * 0x74fb22a1722e7a41 ^ _DAT_183330920) +
       (_DAT_183330968 & 0xffffffffffff8000);
  _DAT_183330908 = _DAT_183330a50 ^ _DAT_183330920;
  *(int *)(unaff_RBP + 0x80) = (int)_DAT_183330a48;
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



// ===== continuation @ rva cb8cb68 (image 18cb8cb68) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb8cb68(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  _DAT_183330938 = func_0x00018cba9a70(_DAT_183330980 ^ 0x64ffa810000a60);
  uVar1 = (_DAT_183330938 ^ 0x6e39ffd7) & 0x7fffffffffffffff;
  _DAT_183330900 = (_DAT_183330900 ^ uVar1) + 0x2c199e15 ^ 0x206aff212d769a72;
  _DAT_183330a88 = (_DAT_183330a88 * 0x37d14e9318f936ff ^ _DAT_183330900) + uVar1;
  _DAT_1833309c0 = _DAT_183330a88 ^ _DAT_183330900;
  _DAT_1833309a8 = 0x2c199e15;
  uVar1 = (_DAT_1833309d0 ^ _DAT_182020cb0) + _DAT_183330a48 + 0x84222325;
  uVar2 = (_DAT_183330a48 ^ _UNK_182020cb8) + _DAT_1833309d0 + 0x907ee400;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833309d0 ^ _DAT_182020cb0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183330a48 ^ _UNK_182020cb8;
  _DAT_183330a38 =
       func_0x00018cba9a70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833309d0 + 0x907ee400) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183330a48 + 0x84222325));
  _DAT_1833309a8 = _DAT_1833309a8 - 0x907ee400 ^ 0x8a36ed63759983ef;
  _DAT_1833309b0 = _DAT_183330928 * 0x77cc3e1b56081387;
  _DAT_183330928 = _DAT_1833309b0 ^ _DAT_1833309a8;
  _DAT_183330940 = 0x6f811c00;
  _DAT_1833309d8 = func_0x00018cba9a70(_DAT_183330918 + 0xcaffaa9a0024ff ^ 0xfc);
  uVar1 = _DAT_1833309d8 >> 1 | _DAT_1833309d8;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & unaff_RBX);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1833309d8;
  _DAT_183330ab0 = _DAT_183330980 ^ uVar1 ^ 0x1000000df;
  _DAT_183330a70 = (_DAT_183330a70 ^ uVar1) + 0x1000000df ^ 0xde62ee87f8914c09;
  _DAT_183330a68 = (_DAT_183330a68 * 0x1fa9e950702c72cf ^ _DAT_183330a70) + uVar1 ^ _DAT_183330a70;
  _DAT_1833309a8 = 0xdf;
  _DAT_183330998 = func_0x00018cba9a70(_DAT_183330958 + 0xff5600105effb5ff ^ 9);
  uVar1 = (_DAT_183330998 ^ 0x97fcf5c4) & 0x7fffffffffffffff;
  uVar2 = ((_DAT_183330998 ^ 0x97fcf5c4) & 0x7fffffffffffffff) >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & unaff_RBX);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar1;
  _DAT_183330a88 = (_DAT_183330a88 ^ uVar1) - 0x97fcf5c4 ^ 0x2825ea043938a3ba;
  _DAT_183330910 = (_DAT_183330910 * 0x6dbb93efc6af04f ^ _DAT_183330a88) + uVar1;
  _DAT_183330a30 = _DAT_183330910 ^ _DAT_183330a88;
  _DAT_183330a00 = 0x68030a3c;
  _DAT_183330ab0 = func_0x00018cba9a70(_DAT_183330998 + 0x430057b9ff5cff ^ 0xfb);
  uVar1 = (ulonglong)(((uint)_DAT_183330ab0 ^ 0x97fcf483) & 0x97fcf6a3);
  _DAT_183330aa8 = _DAT_183330ac0 ^ uVar1 ^ 0x1000000df;
  _DAT_183330ac0 = (_DAT_183330ac0 ^ uVar1) + 0x1000000df ^ 0xe0b50326603d3010;
  _DAT_183330a08 = (_DAT_183330a08 * -0xfafaf55f754215 ^ _DAT_183330ac0) + uVar1;
  _DAT_183330950 = _DAT_183330a08 ^ _DAT_183330ac0;
  _DAT_183330ae8 = 0xdf;
  uVar1 = (_DAT_1833309b8 ^ _DAT_182020cc0) + _DAT_183330a00 + 0x84222325;
  uVar2 = (_DAT_183330a00 ^ _UNK_182020cc8) + _DAT_1833309b8 + 0xec4d4040;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833309b8 ^ _DAT_182020cc0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183330a00 ^ _UNK_182020cc8;
  _DAT_183330998 =
       func_0x00018cba9a70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833309b8 + 0xec4d4040) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183330a00 + 0x84222325));
  uVar1 = _DAT_183330998 << 0x35 | _DAT_183330998 >> 0xb;
  _DAT_183330a10 = (_DAT_183330a10 ^ uVar1) - 0xec4d4040 ^ 0x3183f3a82cf4ddc3;
  _DAT_1833309a0 = (_DAT_1833309a0 * -0x2beb1ed226052589 ^ _DAT_183330a10) + uVar1;
  _DAT_183330ab8 = _DAT_1833309a0 ^ _DAT_183330a10;
  _DAT_1833309b8 = 0x13b2bfc0;
  uVar1 = (_DAT_183330a28 ^ _DAT_182020cd0) + _DAT_183330a50 + 0x686f623a;
  uVar2 = (_DAT_183330a50 ^ _UNK_182020cd8) + _DAT_183330a28 + 0x13b2bfc0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183330a28 ^ _DAT_182020cd0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183330a50 ^ _UNK_182020cd8;
  _DAT_183330968 =
       func_0x00018cba9a70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183330a28 + 0x13b2bfc0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183330a50 + 0x686f623a));
  uVar1 = _DAT_183330968 >> 1 | _DAT_183330968;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & unaff_RBX);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = 0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183330968;
  _DAT_1833309a8 = _DAT_183330a40 ^ uVar1 ^ 0x1000000df;
  _DAT_1833309c8 = (_DAT_1833309c8 ^ uVar1) + 0x1000000df ^ 0x12d17abf019bc216;
  _DAT_183330958 = (_DAT_183330958 * 0x5c3035f03e04c12f ^ _DAT_1833309c8) + uVar1;
  _DAT_183330a30 = _DAT_183330958 ^ _DAT_1833309c8;
  _DAT_183330988 = 0xdf;
  _DAT_183330ad0 = func_0x00018cba9a70(_DAT_183330ac8 ^ 0x3fffea32ffe370);
  _DAT_183330a40 = _DAT_183330ae8 ^ _DAT_183330ad0 ^ 0xeaf99bfa;
  _DAT_183330ab0 = (_DAT_183330ab0 ^ _DAT_183330ad0) + 0xeaf99bfa ^ 0x7059535eb0a34723;
  _DAT_183330908 = (_DAT_183330908 * 0xf666c9fb56571af ^ _DAT_183330ab0) + _DAT_183330ad0;
  _DAT_183330aa0 = _DAT_183330908 ^ _DAT_183330ab0;
  _DAT_183330a30 = 0xeaf99bfa;
  _DAT_183330a68 = func_0x00018cba9a70(_DAT_183330930 + 0x3ffff6b500e3ffU ^ 100);
  uVar1 = _DAT_183330a68 >> 1 | _DAT_183330a68;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & unaff_RBX);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           _DAT_183330a68 ^ 0x2c199e15) & 0x7fffffffffffffff;
  _DAT_183330a08 = (_DAT_183330a08 ^ uVar1) + 0x92c663f0 ^ 0xed4e328bdee4c989;
  _DAT_183330ad0 = (_DAT_183330ad0 * 0x21ebd64201228515 ^ _DAT_183330a08) + uVar1;
  _DAT_183330ac0 = _DAT_183330ad0 ^ _DAT_183330a08;
  _DAT_183330a60 = 0x92c663f0;
  _DAT_183330900 = func_0x00018cba9a70(_DAT_183330a58 ^ 0x3fffedacff23e0);
  _DAT_183330aa0 = (_DAT_183330aa0 ^ _DAT_183330900) + 0x2c199c05 ^ 0x34661216b233f2e6;
  _DAT_183330920 = (_DAT_183330920 * 0x17fda3e4a0d16cbd ^ _DAT_183330aa0) + _DAT_183330900;
  _DAT_183330ad8 = _DAT_183330920 ^ _DAT_183330aa0;
  _DAT_1833309d0 = 0x2c199c05;
  uVar1 = (_DAT_1833309d8 ^ _DAT_182020ce0) + _DAT_183330a28 + 0x16e440d5;
  uVar2 = (_DAT_183330a28 ^ _UNK_182020ce8) + _DAT_1833309d8 + 0x5833380a;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833309d8 ^ _DAT_182020ce0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183330a28 ^ _UNK_182020ce8;
  _DAT_183330ab8 =
       func_0x00018cba9a70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833309d8 + 0x5833380a) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183330a28 + 0x16e440d5));
  uVar1 = _DAT_183330ab8 ^ 0x3291900118aa0490;
  _DAT_183330a00 = _DAT_183330940 ^ uVar1 ^ 0xeaf99bfa;
  _DAT_183330a60 = (_DAT_183330a60 ^ uVar1) + 0xeaf99bfa ^ 0x495f405e3615b2f1;
  _DAT_183330ac0 = (_DAT_183330ac0 * 0x359a5c04ae8633a5 ^ _DAT_183330a60) + uVar1;
  _DAT_183330948 = _DAT_183330ac0 ^ _DAT_183330a60;
  _DAT_183330ae8 = 0xeaf99bfa;
  uVar1 = (_DAT_183330a50 ^ 0x842223fa) + _DAT_183330968 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183330a50 ^ 0x842223fa;
  uVar2 = ((_DAT_183330968 + _DAT_183330a50) * 0x2000 | _DAT_183330968 + _DAT_183330a50 >> 0x33) ^
          _DAT_183330968;
  _DAT_183330af8 =
       func_0x00018cba9a70((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183330a50 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183330968 + 0x842223fa));
  _DAT_183330978 = _DAT_183330a18 ^ _DAT_183330af8 ^ 0xdf;
  _DAT_183330918 = (_DAT_183330918 ^ _DAT_183330af8) + 0xdf ^ 0x81e0b46d2bb4577c;
  _DAT_183330ab0 = (_DAT_183330ab0 * 0x1b3551ad0d62ee59 ^ _DAT_183330918) + _DAT_183330af8;
  _DAT_183330920 = _DAT_183330ab0 ^ _DAT_183330918;
  _DAT_1833309f8 = 0xdf;
  uVar1 = (~_DAT_183330ac8 + 0x100000000) *
          ((_DAT_183330ac8 ^ 0x3afddec0) + (ulonglong)((uint)_DAT_183330ac8 & 0x3afddec0) * 2);
  uVar1 = (uVar1 | _DAT_183330920) + (uVar1 & _DAT_183330920);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183330a18 = func_0x00018cba9a70((uVar1 | 0xc502213f) + (ulonglong)((uint)uVar1 & 0xc502213f))
  ;
  uVar1 = (_DAT_183330a18 ^ 0xbedffde5) & 0x3ffffffff;
  _DAT_183330988 = (_DAT_183330988 ^ uVar1) + 0x4120021a ^ 0xd07100f01fb49697;
  _DAT_1833309b0 = (_DAT_1833309b0 * 0x79594c0b0a1e651 ^ _DAT_183330988) + uVar1;
  _DAT_183330908 = _DAT_1833309b0 ^ _DAT_183330988;
  _DAT_183330a40 = 0x4120021a;
  _DAT_1833309a8 = func_0x00018cba9a70(_DAT_1833309b0 ^ 0xffe0ff84c5ffe172);
  _DAT_183330968 = _DAT_183330958 ^ _DAT_1833309a8 ^ 0xdf;
  _DAT_1833309b8 = (_DAT_1833309b8 ^ _DAT_1833309a8) + 0xdf ^ 0x196336bed2e2f2e8;
  _DAT_183330950 = (_DAT_183330950 * -0x6862bea87286ee89 ^ _DAT_1833309b8) + _DAT_1833309a8;
  _DAT_183330a78 = _DAT_183330950 ^ _DAT_1833309b8;
  _DAT_183330aa8 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x40)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cb965aa (image 18cb965aa) =====

void FUN_18cb965aa(void)

{
  return;
}



// ===== continuation @ rva cb964cd (image 18cb964cd) =====

undefined8 thunk_FUN_18cb80add(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva cb95e59 (image 18cb95e59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb95e59(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x68) + 0x558))(*(longlong **)(unaff_RBP + 0x68))
  ;
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cb96402 (image 18cb96402) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb96402(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x68);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50,0);
  cVar2 = (**(code **)(*plVar1 + 0x720))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cb963b6 (image 18cb963b6) =====

undefined8 thunk_FUN_18cb80add(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva cb8b760 (image 18cb8b760) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb8b760(void)

{
  undefined4 in_EAX;
  int iVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  
  *(undefined4 *)(unaff_RBP + 0x50) = in_EAX;
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + -0x10);
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_EDI;
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



// ===== continuation @ rva cb95e8c (image 18cb95e8c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb95e8c(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  ulonglong uVar7;
  ulonglong unaff_R12;
  longlong *unaff_R13;
  uint uVar8;
  longlong lVar9;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  uint uVar10;
  uint uVar11;
  
  *(undefined2 *)(unaff_RBP + 0x3c) = *(undefined2 *)(unaff_RBP + 0x80);
  lVar9 = unaff_RBP + 0x3c;
  (**(code **)(*unaff_R13 + 0x688))();
  uVar3 = _DAT_182021400;
  uVar1 = *(uint *)(unaff_RBP + 0x30);
  uVar4 = uVar1 ^ unaff_R12;
  lVar2 = (ulonglong)((uint)_DAT_183330a78 & (uint)uVar4) * 2;
  uVar5 = (~_DAT_183330af8 + 2) * ((_DAT_183330a78 ^ uVar4) + lVar2);
  uVar7 = (uVar5 | _DAT_183330a68) + (uVar5 & _DAT_183330a68);
  uVar5 = uVar7 * 0x2000 ^ uVar7;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar6 = uVar4 ^ 1 | uVar5;
  _DAT_183330978 =
       func_0x00018cba9a70(uVar6 + ((uint)(uVar4 ^ 1) & (uint)uVar5),uVar6,uVar7,lVar2,lVar9);
  uVar10 = uVar1 & unaff_XMM7_Da;
  uVar8 = uVar1 | unaff_XMM7_Da;
  uVar11 = uVar1 ^ unaff_XMM7_Da;
  lVar9 = ((ulonglong)uVar1 * (ulonglong)uVar3 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_1820213f0;
  uVar4 = (_DAT_183330978 ^ uVar1) << 0x1a | _DAT_183330978 >> 0x26;
  uVar5 = ((((ulonglong)uVar11 * (ulonglong)_DAT_1820213e0 << 0x20) +
            (ulonglong)uVar11 * (ulonglong)_DAT_1820213d0 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_1820213c0 << 0x20) +
            (ulonglong)uVar8 * (ulonglong)_DAT_1820213b0 +
            ((ulonglong)uVar10 * (ulonglong)_DAT_1820213a0 << 0x20 |
            (ulonglong)uVar10 * (ulonglong)_DAT_182021390) +
            ((ulonglong)uVar1 * (ulonglong)_DAT_182021380 << 0x20) +
            (ulonglong)uVar1 * (ulonglong)unaff_XMM6_Da + lVar9) -
          (((ulonglong)uVar11 * (ulonglong)_DAT_182021480 << 0x20) +
           (ulonglong)uVar11 * (ulonglong)_DAT_182021470 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_182021460 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_182021450 +
           ((ulonglong)uVar10 * (ulonglong)_DAT_182021440 << 0x20 |
           (ulonglong)uVar10 * (ulonglong)_DAT_182021430) +
           ((ulonglong)uVar1 * (ulonglong)_DAT_182021420 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_DAT_182021410 + lVar9)) + 0x88554f1c27506b45;
  _DAT_183330a70 = _DAT_1833309a0 ^ uVar4 ^ uVar5;
  _DAT_183330ae8 = (_DAT_183330970 ^ uVar4) + uVar5 ^ 0xfe2d10d5837c8edb;
  _DAT_183330940 = (_DAT_183330940 * 0x1001d0d418cffde3 ^ _DAT_183330ae8) + uVar4;
  _DAT_183330ae8 = _DAT_183330940 ^ _DAT_183330ae8;
  _DAT_183330970 = uVar5 & 0xffffffff;
  *(int *)(unaff_RBP + 0x70) = (int)uVar5;
  *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x1c);
  switch((int)uVar5 < *(int *)(unaff_RBP + 0x1c)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cb96444 (image 18cb96444) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb96444(void)

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



// ===== continuation @ rva cb8a979 (image 18cb8a979) =====

undefined8 FUN_18cb8a979(void)

{
  func_0x000180001044();
  return 0;
}



// ===== continuation @ rva cbabdca (image 18cbabdca) =====

void FUN_18cbabdca(void)

{
  return;
}



// ===== continuation @ rva cbabc23 (image 18cbabc23) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbabc23(void)

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



// ===== continuation @ rva cbae6d5 (image 18cbae6d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbae6d5(void)

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



// ===== continuation @ rva cbad401 (image 18cbad401) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbad401(void)

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



// ===== continuation @ rva cbac1d4 (image 18cbac1d4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbac1d4(void)

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



// ===== continuation @ rva cbaf7ee (image 18cbaf7ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbaf7ee(void)

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



// ===== continuation @ rva cbaf549 (image 18cbaf549) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbaf549(void)

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



// ===== continuation @ rva cbaf6ce (image 18cbaf6ce) =====

undefined8 thunk_FUN_18cbaf0a7(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva cbaeafb (image 18cbaeafb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbaeafb(void)

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



// ===== continuation @ rva cbb0633 (image 18cbb0633) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbb0633(void)

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



// ===== continuation @ rva cbb05df (image 18cbb05df) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb05df(void)

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



// ===== continuation @ rva cbb1398 (image 18cbb1398) =====

void FUN_18cbb1398(void)

{
  return;
}



// ===== continuation @ rva cbb120c (image 18cbb120c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb120c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1820270b8)();
  return;
}



// ===== continuation @ rva cbb095d (image 18cbb095d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb095d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  FUN_190dd72e0();
  (*_DAT_1820273a8)();
  return;
}



// ===== continuation @ rva cbb08fb (image 18cbb08fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb08fb(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182027188)();
  return;
}



// ===== continuation @ rva cbb10b8 (image 18cbb10b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb10b8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_1820272a8)();
  return;
}



// ===== continuation @ rva cbb0e0f (image 18cbb0e0f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb0e0f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1820274a8)();
  return;
}



// ===== continuation @ rva cbb0ed9 (image 18cbb0ed9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbb0ed9(void)

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



// ===== continuation @ rva cbb078a (image 18cbb078a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb078a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182027488)();
  return;
}



// ===== continuation @ rva cbb11b5 (image 18cbb11b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb11b5(void)

{
  FUN_190de3220();
  (*_DAT_182027368)();
  return;
}



// ===== continuation @ rva cbb3ded (image 18cbb3ded) =====

void FUN_18cbb3ded(void)

{
  return;
}



// ===== continuation @ rva cbb1510 (image 18cbb1510) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb1510(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182027d68)();
  return;
}



// ===== continuation @ rva cbb2421 (image 18cbb2421) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb2421(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000b0;
  undefined2 uStack00000000000000b4;
  undefined4 uStack00000000000000e4;
  
  uStack00000000000000e4 = 0xab5c2bca;
  uVar1 = rdtsc();
  uStack00000000000000b0 = 0x690073;
  uStack00000000000000b4 = 0x78;
  (*_DAT_182027b18)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



// ===== continuation @ rva cbb2118 (image 18cbb2118) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb2118(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182027b48)();
  return;
}



// ===== continuation @ rva cbb1aad (image 18cbb1aad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb1aad(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x538))();
  FUN_184117d50();
  (*_DAT_182028388)();
  return;
}



// ===== continuation @ rva cbb3cf2 (image 18cbb3cf2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb3cf2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1820275f8)();
  return;
}



// ===== continuation @ rva cbb2259 (image 18cbb2259) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb2259(void)

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



// ===== continuation @ rva cbb3b4f (image 18cbb3b4f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb3b4f(void)

{
  (*_DAT_182028318)();
  return;
}



// ===== continuation @ rva cbb1a95 (image 18cbb1a95) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbb1a95(void)

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



// ===== continuation @ rva cbb1fe6 (image 18cbb1fe6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb1fe6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1820282d8)();
  return;
}



// ===== continuation @ rva cbb19bd (image 18cbb19bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb19bd(void)

{
  FUN_190de3220();
  (*_DAT_1820277d8)();
  return;
}



// ===== continuation @ rva cbb30b9 (image 18cbb30b9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb30b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182027e18)();
  return;
}



// ===== continuation @ rva cbb2e02 (image 18cbb2e02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb2e02(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000060;
  
  uStack0000000000000060 = 0;
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_182028068)();
  return;
}



// ===== continuation @ rva cbb6106 (image 18cbb6106) =====

void FUN_18cbb6106(void)

{
  return;
}



// ===== continuation @ rva cbb5f62 (image 18cbb5f62) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb5f62(void)

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



// ===== continuation @ rva cbb9498 (image 18cbb9498) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbb9498(void)

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



// ===== continuation @ rva cbbc333 (image 18cbbc333) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbbc333(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *unaff_R12;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  uint in_stack_00000030;
  int in_stack_00000040;
  
  lVar3 = (**(code **)(*unaff_R12 + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000040);
  (**(code **)(*unaff_R12 + 0x6f8))();
  uVar4 = (~_DAT_183331890 + 0x6d1eeb26) *
          ((_DAT_183331720 ^ 0x19edc14a) + (ulonglong)((uint)_DAT_183331720 & 0x19edc14a) * 2);
  uVar4 = (uVar4 | _DAT_183331590) + (uVar4 & _DAT_183331590);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331990 = func_0x00018cbbef90((uVar4 | 0x74f32a6f) + (ulonglong)((uint)uVar4 & 0x74f32a6f))
  ;
  _DAT_183331a88 =
       (_DAT_183331a88 ^ _DAT_183331990 ^ 0x434492baf2267d64) + 0xf0d1094a ^ 0x95d18581e4f81b89;
  _DAT_1833317e0 =
       (_DAT_1833317e0 * -0x43e184bca1eb1c35 ^ _DAT_183331a88) +
       (_DAT_183331990 ^ 0x434492baf2267d64);
  _DAT_183331a98 = _DAT_1833317e0 ^ _DAT_183331a88;
  _DAT_1833317c8 = 0xf0d1094a;
  uVar4 = (_DAT_1833318d0 ^ _DAT_18202a3b0) + _DAT_183331728 + 0x84222325;
  uVar9 = (_DAT_183331728 ^ _UNK_18202a3b8) + _DAT_1833318d0 + 0x113b9796;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833318d0 ^ _DAT_18202a3b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183331728 ^ _UNK_18202a3b8;
  _DAT_183331500 =
       func_0x00018cbbef90((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833318d0 + 0x113b9796) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183331728 + 0x84222325));
  _DAT_183331ac0 = (_DAT_183331ac0 ^ _DAT_183331500) - 0x113b9796 ^ 0x237742c250271a24;
  _DAT_1833318d0 = (_DAT_1833318d0 * 0x7be98ac73b107bd ^ _DAT_183331ac0) + _DAT_183331500;
  _DAT_1833316c0 = _DAT_1833318d0 ^ _DAT_183331ac0;
  _DAT_183331968 = 0xeec4686a;
  uVar4 = (~_DAT_1833315d8 + 0xeec4686b) *
          ((_DAT_183331778 ^ 0x951eb5b3) + (ulonglong)((uint)_DAT_183331778 & 0x951eb5b3) * 2);
  uVar4 = (uVar4 | _DAT_183331ad0) + (uVar4 & _DAT_183331ad0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833317f0 = func_0x00018cbbef90((uVar4 | 0x7bdaddd9) + (ulonglong)((uint)uVar4 & 0x7bdaddd9))
  ;
  uVar4 = _DAT_1833317f0 & 0xfffffffffffffff0;
  _DAT_183331658 = _DAT_183331570 ^ uVar4 ^ 0x10000ff00;
  _DAT_183331518 = (_DAT_183331518 ^ uVar4) + 0x10000ff00 ^ 0x1fa08c0f7baf2958;
  _DAT_1833319a8 = (_DAT_1833319a8 * -0x43bf992b12b5ef6d ^ _DAT_183331518) + uVar4;
  _DAT_1833316f8 = _DAT_1833319a8 ^ _DAT_183331518;
  _DAT_183331a00 = 0xff00;
  uVar4 = (_DAT_183331638 ^ _DAT_18202a3c0) + _DAT_1833319f0 + 0x84222325;
  uVar9 = (_DAT_1833319f0 ^ _UNK_18202a3c8) + _DAT_183331638 + 0xcfc1c1e9;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183331638 ^ _DAT_18202a3c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833319f0 ^ _UNK_18202a3c8;
  _DAT_183331590 =
       func_0x00018cbbef90((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183331638 + 0xcfc1c1e9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833319f0 + 0x84222325));
  _DAT_183331ad8 = (_DAT_183331ad8 ^ _DAT_183331590) - 0xcfc1c1e9 ^ 0x911524203182a4df;
  _DAT_183331740 = (_DAT_183331740 * 0x149519531fb21e67 ^ _DAT_183331ad8) + _DAT_183331590;
  _DAT_183331998 = _DAT_183331740 ^ _DAT_183331ad8;
  _DAT_183331a30 = 0x303e3e17;
  uVar4 = (_DAT_1833319b8 ^ _DAT_18202a3d0) + _DAT_1833315d0 + 0x8422dc25;
  uVar9 = (_DAT_1833315d0 ^ _UNK_18202a3d8) + _DAT_1833319b8 + 0xcfc1c1e9;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833319b8 ^ _DAT_18202a3d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833315d0 ^ _UNK_18202a3d8;
  _DAT_183331808 =
       func_0x00018cbbef90((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833319b8 + 0xcfc1c1e9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833315d0 + 0x8422dc25));
  uVar4 = _DAT_183331808 ^ 0xcef200271700;
  _DAT_183331620 = _DAT_183331740 ^ uVar4 ^ 0xcfc2c0e9;
  _DAT_183331790 = (_DAT_183331790 ^ uVar4) + 0xcfc2c0e9 ^ 0x78be92112c14c5ad;
  _DAT_183331720 = (_DAT_183331720 * 0x6bb8ba88d05d6931 ^ _DAT_183331790) + uVar4;
  _DAT_183331750 = _DAT_183331720 ^ _DAT_183331790;
  _DAT_183331700 = 0xcfc2c0e9;
  _DAT_183331540 = func_0x00018cbbef90(_DAT_183331698 + 0x3b0056c9005dffU ^ 0xbd);
  uVar4 = (ulonglong)(~((uint)_DAT_183331540 ^ 0x3da5c2ef) & 0xcfc2c0e9);
  _DAT_183331a10 = _DAT_1833318a8 ^ uVar4 ^ 0x10000ff00;
  _DAT_183331968 = (_DAT_183331968 ^ uVar4) + 0x10000ff00 ^ 0x37500b27176ab858;
  _DAT_183331618 = (_DAT_183331618 * 0x68e1e26f2f3610d7 ^ _DAT_183331968) + uVar4;
  _DAT_183331978 = _DAT_183331618 ^ _DAT_183331968;
  _DAT_1833317c0 = 0xff00;
  _DAT_183331748 = func_0x00018cbbef90(_DAT_183331640 ^ 0x56000504ffe7b6);
  uVar4 = _DAT_183331748 << 0x21 | (_DAT_183331748 & 0x7fffffffffffffff) >> 0x1f;
  _DAT_183331958 = (_DAT_183331958 ^ uVar4) - 0x830a7d1e ^ 0xb9c917c38544ea3a;
  _DAT_1833318a8 = (_DAT_1833318a8 * -0x75935bb06f69b245 ^ _DAT_183331958) + uVar4;
  _DAT_183331860 = _DAT_1833318a8 ^ _DAT_183331958;
  _DAT_1833315d8 = _DAT_1833319c8 ^ 0xffffffff7cf582e2;
  _DAT_183331a00 = 0x7cf582e2;
  uVar4 = (_DAT_183331af8 ^ _DAT_18202a3e0) + _DAT_183331ad0 + 0x8422dc25;
  uVar9 = (_DAT_183331ad0 ^ _UNK_18202a3e8) + _DAT_183331af8 + 0x830a7d1e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183331af8 ^ _DAT_18202a3e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183331ad0 ^ _UNK_18202a3e8;
  _DAT_183331a58 =
       func_0x00018cbbef90((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183331af8 + 0x830a7d1e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183331ad0 + 0x8422dc25));
  uVar4 = (ulonglong)(~(uint)_DAT_183331a58 & 0xff00) ^ 0x830a7d1e;
  _DAT_1833315e0 = _DAT_183331ae0 ^ uVar4 ^ 0x830b7c1e;
  _DAT_1833317b0 = (_DAT_1833317b0 ^ uVar4) + 0x830b7c1e ^ 0xba027dd34f9ee20e;
  _DAT_183331630 = (_DAT_183331630 * 0x391bc2a2bf2caae5 ^ _DAT_1833317b0) + uVar4;
  _DAT_183331998 = _DAT_183331630 ^ _DAT_1833317b0;
  _DAT_183331a50 = 0x830b7c1e;
  _DAT_183331590 = func_0x00018cbbef90(_DAT_1833318e8 + 0x3aff88b7004bffU ^ 0xcd);
  uVar4 = _DAT_183331590 - (_DAT_183331590 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183331590;
  _DAT_183331988 = _DAT_1833317d0 ^ uVar4 ^ 0x10000ff00;
  _DAT_183331ab8 = (_DAT_183331ab8 ^ uVar4) + 0x10000ff00 ^ 0x803ed37ff12fbb50;
  _DAT_1833315f0 = (_DAT_1833315f0 * 0xbb279ab75e7f40d ^ _DAT_183331ab8) + uVar4;
  _DAT_1833319e0 = _DAT_1833315f0 ^ _DAT_183331ab8;
  _DAT_183331ae8 = 0xff00;
  _DAT_183331628 = func_0x00018cbbef90(_DAT_1833319e0 ^ 0xff590015b00022d8);
  uVar4 = _DAT_183331628 & 0xfffffffffff80000;
  _DAT_1833318a8 = _DAT_183331aa8 ^ uVar4 ^ 0x14f5dfc89;
  _DAT_183331828 = (_DAT_183331828 ^ uVar4) + 0x14f5dfc89 ^ 0x15e1067e33246f06;
  _DAT_183331998 = (_DAT_183331998 * -0x490cc67cfe712d07 ^ _DAT_183331828) + uVar4;
  _DAT_1833319e0 = _DAT_183331998 ^ _DAT_183331828;
  _DAT_183331ac0 = 0x4f5dfc89;
  _DAT_183331a08 = func_0x00018cbbef90(_DAT_183331860 + 0x28ffe6300020ff ^ 0xa9);
  _DAT_183331710 =
       (_DAT_183331710 ^ _DAT_183331a08 * 0x671e75e0d721c773) + 0xae5dfa75 ^ 0xedb56155a28f9075;
  _DAT_183331af0 =
       (_DAT_183331af0 * -0x3d24cd28e15f980f ^ _DAT_183331710) + _DAT_183331a08 * 0x671e75e0d721c773
  ;
  _DAT_183331880 = _DAT_183331af0 ^ _DAT_183331710;
  _DAT_183331a30 = 0xae5dfa75;
  uVar4 = (_DAT_1833316b8 ^ _DAT_18202a3f0) + _DAT_1833317d8 + 0xcb7fdfac;
  uVar9 = (_DAT_1833317d8 ^ _UNK_18202a3f8) + _DAT_1833316b8 + 0x4f5dfc89;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833316b8 ^ _DAT_18202a3f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1833317d8 ^ _UNK_18202a3f8;
  _DAT_183331798 =
       func_0x00018cbbef90((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833316b8 + 0x4f5dfc89) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833317d8 + 0xcb7fdfac));
  _DAT_1833317c0 = (ulonglong)(((uint)_DAT_183331798 ^ 0x4d55fc88) & 0x4f5dfc89);
  _DAT_183331ab8 = _DAT_183331ab8 ^ _DAT_1833317c0 ^ 0xc5d7868cf79c0a0b;
  _DAT_183331988 = (_DAT_183331988 * 0x156fd8d2c951c4e1 ^ _DAT_183331ab8) + _DAT_1833317c0;
  _DAT_183331a10 = _DAT_183331988 ^ _DAT_183331ab8;
  _DAT_1833318f8 = 0;
  uVar4 = (_DAT_183331ac0 ^ 0x8422dc25) + _DAT_183331568 + 0x8422dc25;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183331ac0 ^ 0x8422dc25;
  uVar9 = ((_DAT_183331568 + _DAT_183331ac0) * 0x2000 | _DAT_183331568 + _DAT_183331ac0 >> 0x33) ^
          _DAT_183331568;
  _DAT_183331690 =
       func_0x00018cbbef90((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_183331ac0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183331568 + 0x8422dc25));
  uVar4 = _DAT_183331690 & 0x7ffffffffffff ^ 0xff00;
  _DAT_1833315b0 = _DAT_183331788 ^ uVar4 ^ 0xff00;
  _DAT_183331858 = (_DAT_183331858 ^ uVar4) + 0xff00 ^ 0x627483192144ebce;
  _DAT_183331ae8 = (_DAT_183331ae8 * 0x4d4dfb4a5202a1c3 ^ _DAT_183331858) + uVar4;
  _DAT_183331938 = _DAT_183331ae8 ^ _DAT_183331858;
  _DAT_183331a90 = 0xff00;
  uVar4 = (~_DAT_183331960 + 0x100000000) *
          ((_DAT_183331808 ^ 0xdaaed01a) + (ulonglong)((uint)_DAT_183331808 & 0xdaaed01a) * 2);
  uVar4 = (uVar4 | _DAT_183331518) + (uVar4 & _DAT_183331518);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331688 = func_0x00018cbbef90((uVar4 | 0x25512fe5) + (ulonglong)((uint)uVar4 & 0x25512fe5))
  ;
  _DAT_183331a00 = (_DAT_183331a00 ^ _DAT_183331688 ^ 0x5e8cf33f) + 0xa1730cc0 ^ 0xcef9c9adb0c8352e;
  _DAT_183331800 =
       (_DAT_183331800 * 0x34b002f57ff16ac5 ^ _DAT_183331a00) + (_DAT_183331688 ^ 0x5e8cf33f);
  _DAT_183331540 = _DAT_183331800 ^ _DAT_183331a00;
  _DAT_183331870 = 0xa1730cc0;
  uVar4 = (~_DAT_183331518 + 0xa1730cc1) *
          ((_DAT_1833319b8 ^ 0xdaaed01a) + (ulonglong)((uint)_DAT_1833319b8 & 0xdaaed01a) * 2);
  uVar4 = (uVar4 | _DAT_1833319a8) + (uVar4 & _DAT_1833319a8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331a10 = func_0x00018cbbef90((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda))
  ;
  uVar4 = _DAT_183331a10 << 0xb | _DAT_183331a10 >> 0x35;
  _DAT_183331ab8 = _DAT_183331ab8 ^ uVar4 ^ 0x3c485ce86fece637;
  _DAT_1833316d8 = (_DAT_1833316d8 * 0x45608c828c0c48df ^ _DAT_183331ab8) + uVar4;
  _DAT_183331ad8 = _DAT_1833316d8 ^ _DAT_183331ab8;
  _DAT_1833317e0 = 0;
  uVar4 = ((_DAT_183331a38 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183331a38 & 0x8422dc25) * 2) *
          -_DAT_183331ae8;
  uVar4 = (uVar4 | _DAT_183331768) + (uVar4 & _DAT_183331768);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331880 = func_0x00018cbbef90((uVar4 | 0x8422dc25) + (ulonglong)((uint)uVar4 & 0x8422dc25))
  ;
  uVar4 = (_DAT_183331880 ^ 0xff00) & 0xfffffffffffff;
  _DAT_1833318c8 = _DAT_183331a78 ^ uVar4 ^ 0xff00;
  _DAT_183331800 = (_DAT_183331800 ^ uVar4) + 0xff00 ^ 0xf208f65caf94c840;
  _DAT_183331630 = (_DAT_183331630 * 0x2d55a69c09528c13 ^ _DAT_183331800) + uVar4;
  _DAT_183331a08 = _DAT_183331630 ^ _DAT_183331800;
  _DAT_183331798 = 0xff00;
  _DAT_183331570 = func_0x00018cbbef90(_DAT_183331730 + 0x1f007be3001dffU ^ 0x35);
  uVar4 = (ulonglong)(((uint)_DAT_183331570 ^ 0x4004221e) & 0x508cf31f) ^ 0x508cf31f;
  _DAT_183331a30 = _DAT_183331a30 ^ uVar4 ^ 0xab5e59cfc50d8cd5;
  _DAT_1833316b8 = (_DAT_1833316b8 * 0x3054fd5c1603e3e3 ^ _DAT_183331a30) + uVar4;
  _DAT_183331778 = _DAT_1833316b8 ^ _DAT_183331a30;
  _DAT_1833318d0 = 0;
  uVar4 = ((_DAT_1833315c0 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_1833315c0 & 0x8422dc25) * 2) *
          -_DAT_183331580;
  uVar4 = (uVar4 | _DAT_183331910) + (uVar4 & _DAT_183331910);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183331878 = func_0x00018cbbef90((uVar4 | 0x8422dc25) + (ulonglong)((uint)uVar4 & 0x8422dc25))
  ;
  uVar4 = _DAT_183331878 & 0xfffffffffffe0000;
  _DAT_183331648 = _DAT_183331a58 ^ uVar4 ^ 0xff00;
  _DAT_1833316f0 = (_DAT_1833316f0 ^ uVar4) + 0xff00 ^ 0x74f40880b1c4b488;
  _DAT_1833319a8 = (_DAT_1833319a8 * -0x55ce60fd5c731cc1 ^ _DAT_1833316f0) + uVar4;
  _DAT_183331a58 = _DAT_1833319a8 ^ _DAT_1833316f0;
  uVar9 = (ulonglong)(uint)((int)cVar1 << 8);
  auVar6._8_8_ = _UNK_180131998;
  auVar6._0_8_ = uVar9 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_18202a400,_DAT_1800170c0);
  _DAT_183331808 = 0xff00;
  uVar5 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar5 + _DAT_183331630;
  if (auVar7._4_4_ < 0) {
    uVar4 = _DAT_183331890 ^ uVar5;
  }
  _DAT_183331a20 = func_0x00018cbbef90(SUB161(auVar6 ^ _DAT_18202a400,5) ^ uVar4);
  uVar4 = uVar9 ^ _DAT_183331a20 & 0x7fffffffffffffff;
  uVar9 = uVar9 & 0xffff;
  _DAT_183331840 = (_DAT_183331840 ^ uVar4) + uVar9 ^ 0xc66b79c1e5040925;
  _DAT_1833316f8 = (_DAT_1833316f8 * 0x6ca033b063970469 ^ _DAT_183331840) + uVar4;
  _DAT_183331950 = _DAT_1833316f8 ^ _DAT_183331840;
  uVar4 = (ulonglong)in_stack_00000030 ^ 0x84222325;
  uVar5 = uVar4 ^ _DAT_183331900;
  lVar3 = uVar4 + _DAT_1833315b8;
  uVar4 = uVar5 + lVar3;
  uVar8 = (uVar9 ^ _DAT_1833315b8) + _DAT_183331900 + uVar9;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar9 ^ _DAT_1833315b8;
  _DAT_183331500 = uVar9;
  _DAT_183331688 =
       func_0x00018cbbef90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183331900 + uVar9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar4 = _DAT_183331688 << 0x2f & 0x3fffffffffffffff | _DAT_183331688 >> 0x11;
  uVar5 = (_DAT_183331688 << 0x2f & 0x3fffffffffffffff | _DAT_183331688 >> 0x11) >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar4;
  _DAT_183331878 = in_stack_00000030 | uVar9;
  _DAT_183331600 = (_DAT_183331600 ^ uVar4) + _DAT_183331878 ^ 0xd1ccd96e823bca0c;
  _DAT_183331690 = (_DAT_183331690 * 0x61045b6f66fbe67 ^ _DAT_183331600) + uVar4;
  _DAT_183331958 = _DAT_183331690 ^ _DAT_183331600;
  iVar2 = (**(code **)(*unaff_R12 + 0x558))();
  switch(iVar2 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cbbc2e4 (image 18cbbc2e4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbbc2e4(void)

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



// ===== continuation @ rva cbbe9d6 (image 18cbbe9d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbbe9d6(void)

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



// ===== continuation @ rva cbb86f7 (image 18cbb86f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbb86f7(void)

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



// ===== continuation @ rva cbb8d64 (image 18cbb8d64) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbb8d64(void)

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



// ===== continuation @ rva cbb8edc (image 18cbb8edc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbb8edc(void)

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



// ===== continuation @ rva cbb96ea (image 18cbb96ea) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbb96ea(void)

{
  char cVar1;
  code *in_RAX;
  longlong *unaff_R12;
  
  (*in_RAX)();
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



// ===== continuation @ rva cbbf0c2 (image 18cbbf0c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbbf0c2(void)

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



// ===== continuation @ rva cbbf06e (image 18cbbf06e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbbf06e(void)

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



// ===== continuation @ rva cbbff44 (image 18cbbff44) =====

void FUN_18cbbff44(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cbbf38d (image 18cbbf38d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbbf38d(void)

{
  int in_EAX;
  int in_stack_00000048;
  
  switch(in_stack_00000048 < 0 || in_EAX <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cbbff35 (image 18cbbff35) =====

void FUN_18cbbff35(void)

{
  return;
}



// ===== continuation @ rva cbbfcd9 (image 18cbbfcd9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbbfcd9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18202a748)();
  return;
}



// ===== continuation @ rva cbbfd10 (image 18cbbfd10) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbbfd10(void)

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



// ===== continuation @ rva cbbf66b (image 18cbbf66b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbbf66b(void)

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



// ===== continuation @ rva cbbf595 (image 18cbbf595) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbbf595(void)

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



// ===== continuation @ rva cbbfa20 (image 18cbbfa20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbbfa20(void)

{
  FUN_190ddce00();
  (*_DAT_18202a5b8)();
  return;
}



// ===== continuation @ rva cbbf2c8 (image 18cbbf2c8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbbf2c8(void)

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



// ===== continuation @ rva cbc2056 (image 18cbc2056) =====

void FUN_18cbc2056(void)

{
  return;
}



// ===== continuation @ rva cbc00bc (image 18cbc00bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbc00bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18202aad8)();
  return;
}



// ===== continuation @ rva cbc2b94 (image 18cbc2b94) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbc2b94(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18202b058)();
  return;
}



// ===== continuation @ rva cbc0e93 (image 18cbc0e93) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbc0e93(void)

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



// ===== continuation @ rva cbc08d2 (image 18cbc08d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbc08d2(void)

{
  (*_DAT_18202b988)();
  return;
}



// ===== continuation @ rva cbc2bfa (image 18cbc2bfa) =====

void FUN_18cbc2bfa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cbc2520 (image 18cbc2520) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbc2520(void)

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



// ===== continuation @ rva cbc0c9b (image 18cbc0c9b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbc0c9b(void)

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



// ===== continuation @ rva cbc0acd (image 18cbc0acd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbc0acd(void)

{
  (*_DAT_18202b988)();
  return;
}



// ===== continuation @ rva cbc28bf (image 18cbc28bf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cbc28bf(void)

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



// ===== continuation @ rva cbc00db (image 18cbc00db) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cbc00db(void)

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



