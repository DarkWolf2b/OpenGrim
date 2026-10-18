// ===== continuation @ rva bf3e087 (image 18bf3e087) =====

void FUN_18bf3e087(void)

{
  return;
}



// ===== continuation @ rva bf3decd (image 18bf3decd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3decd(void)

{
  FUN_190ddfc90();
  (*_DAT_181d75698)();
  return;
}



// ===== continuation @ rva bf3e08f (image 18bf3e08f) =====

void FUN_18bf3e08f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3e060 (image 18bf3e060) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e060(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x348))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75678)();
  return;
}



// ===== continuation @ rva bf3df00 (image 18bf3df00) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3df00(void)

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



// ===== continuation @ rva bf3df73 (image 18bf3df73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3df73(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181d75678)();
  return;
}



// ===== continuation @ rva bf3dfe8 (image 18bf3dfe8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3dfe8(void)

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



// ===== continuation @ rva bf3df24 (image 18bf3df24) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3df24(void)

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



// ===== continuation @ rva bf3dfc0 (image 18bf3dfc0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3dfc0(void)

{
  FUN_190dd72e0();
  (*_DAT_181d756b8)();
  return;
}



// ===== continuation @ rva bfa9c6f (image 18bfa9c6f) =====

void FUN_18bfa9c6f(void)

{
  return;
}



// ===== continuation @ rva bf8e2db (image 18bf8e2db) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf8e331 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf8e2db(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bf93dc0 (image 18bf93dc0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf950d7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf93dc0(void)

{
  char cVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar2 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar2 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar2,2);
  uVar7 = (_DAT_1832e2248 ^ _DAT_181d87f70) + _DAT_1832e2058 + 0x84222325;
  uVar8 = (_DAT_1832e2058 ^ _UNK_181d87f78) + _DAT_1832e2248 + 0x36259804;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e2248 ^ _DAT_181d87f70;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e2058 ^ _UNK_181d87f78;
  _DAT_1832e1c58 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e2248 + 0x36259804) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e2058 + 0x84222325));
  uVar7 = _DAT_1832e1c58 >> 1 | _DAT_1832e1c58;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ _DAT_1832e1c58) * 0x66c81d07e66c4021;
  _DAT_1832e20b0 = (_DAT_1832e20b0 ^ uVar7) - 0x36259804 ^ 0xfe8eebf93ce0c03d;
  _DAT_1832e1cb0 = (_DAT_1832e1cb0 * -0x289326caf0275a11 ^ _DAT_1832e20b0) + uVar7;
  _DAT_1832e1c38 = _DAT_1832e1cb0 ^ _DAT_1832e20b0;
  _DAT_1832e1fe0 = 0xc9da67fc;
  _DAT_1832e1d50 = func_0x00018bfa9e50(_DAT_1832e1c00 ^ 0xff68ff8dba00044f);
  uVar7 = _DAT_1832e1d50 ^ 0x35ef726b03;
  _DAT_1832e1d60 = _DAT_1832e2288 ^ uVar7 ^ 0x36259903;
  _DAT_1832e1b10 = (_DAT_1832e1b10 ^ uVar7) + 0x36259903 ^ 0xbf89ba0624a859fa;
  _DAT_1832e1d68 = (_DAT_1832e1d68 * 0x5a3a2735c738ff2f ^ _DAT_1832e1b10) + uVar7;
  _DAT_1832e1bf8 = _DAT_1832e1d68 ^ _DAT_1832e1b10;
  _DAT_1832e1d98 = 0x36259903;
  uVar7 = (_DAT_1832e20a8 ^ _DAT_181d87f80) + _DAT_1832e2208 + 0xb207ba26;
  uVar8 = (_DAT_1832e2208 ^ _UNK_181d87f88) + _DAT_1832e20a8 + 0xc9da67fc;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e20a8 ^ _DAT_181d87f80;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e2208 ^ _UNK_181d87f88;
  _DAT_1832e1d60 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e20a8 + 0xc9da67fc) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e2208 + 0xb207ba26));
  uVar7 = (ulonglong)(((uint)_DAT_1832e1d60 ^ 0x22050803) & 0x36259903) * 0x6f044ee5d1df97e7;
  _DAT_1832e1b50 = _DAT_1832e1ed8 ^ uVar7 ^ 0x1000000ff;
  _DAT_1832e1ef8 = (_DAT_1832e1ef8 ^ uVar7) + 0x1000000ff ^ 0xe4deccd585aa491c;
  _DAT_1832e22c8 = (_DAT_1832e22c8 * 0x322f6c65a80471ff ^ _DAT_1832e1ef8) + uVar7;
  _DAT_1832e2078 = _DAT_1832e22c8 ^ _DAT_1832e1ef8;
  _DAT_1832e1b68 = 0xff;
  _DAT_1832e1be0 = func_0x00018bfa9e50(_DAT_1832e1b40 ^ 0x87ffe669fff142);
  uVar7 = _DAT_1832e1be0 - (_DAT_1832e1be0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1832e1be0;
  _DAT_1832e1c20 = (_DAT_1832e1c20 ^ uVar7) - 0xaed0ab4f ^ 0x51b469682cc04fa9;
  _DAT_1832e2118 = (_DAT_1832e2118 * 0x101040902790d6df ^ _DAT_1832e1c20) + uVar7;
  _DAT_1832e1f30 = _DAT_1832e2118 ^ _DAT_1832e1c20;
  _DAT_1832e1f18 = 0x512f54b1;
  uVar7 = (~_DAT_1832e2098 + 0x512f54b2) *
          ((_DAT_1832e2158 ^ 0x2af28f6b) + (ulonglong)((uint)_DAT_1832e2158 & 0x2af28f6b) * 2);
  uVar7 = (uVar7 | _DAT_1832e1dd8) + (uVar7 & _DAT_1832e1dd8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1d88 = func_0x00018bfa9e50((uVar7 | 0x7bdddbda) + (ulonglong)((uint)uVar7 & 0x7bdddbda))
  ;
  uVar7 = _DAT_1832e1d88 ^ 0xfffff8ff;
  _DAT_1832e1bf8 = _DAT_1832e2038 ^ uVar7 ^ 0x1000000ff;
  _DAT_1832e1c48 = (_DAT_1832e1d90 ^ uVar7) + 0x1000000ff ^ 0xb4c22cc2d4c3d80;
  _DAT_1832e1d90 = (_DAT_1832e1d90 * 0x21371efc983ec3c5 ^ _DAT_1832e1c48) + uVar7;
  _DAT_1832e1c48 = _DAT_1832e1d90 ^ _DAT_1832e1c48;
  _DAT_1832e1d78 = 0xff;
  uVar7 = (~_DAT_1832e1de0 + 0x5442542d) *
          ((_DAT_1832e1b48 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e1b48 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_1832e1d60) + (uVar7 & _DAT_1832e1d60);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e2080 = func_0x00018bfa9e50((uVar7 | 0xd0607709) + (ulonglong)((uint)uVar7 & 0xd0607709))
  ;
  uVar7 = (_DAT_1832e2080 & 0x3fffffffff) << 0x19 | _DAT_1832e2080 >> 0x27;
  _DAT_1832e1ba8 = (_DAT_1832e1ba8 ^ uVar7) - 0x5442542c ^ 0xa539ea979bbe4373;
  _DAT_1832e1fa8 = (_DAT_1832e1fa8 * -0x5be45d58f0c9ff1f ^ _DAT_1832e1ba8) + uVar7;
  _DAT_1832e1d20 = _DAT_1832e1fa8 ^ _DAT_1832e1ba8;
  _DAT_1832e1f70 = 0xabbdabd4;
  uVar7 = (_DAT_1832e1ee0 ^ _DAT_181d87f90) + _DAT_1832e1ca8 + 0x6bdddcda;
  uVar8 = (_DAT_1832e1ca8 ^ _UNK_181d87f98) + _DAT_1832e1ee0 + 0x11e42613;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e1ee0 ^ _DAT_181d87f90;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e1ca8 ^ _UNK_181d87f98;
  _DAT_1832e2278 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e1ee0 + 0x11e42613) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e1ca8 + 0x6bdddcda));
  uVar7 = _DAT_1832e2278 ^ 0xefffffff;
  _DAT_1832e1ec8 = _DAT_1832e2208 ^ uVar7 ^ 0x101e42612;
  _DAT_1832e22c0 = (_DAT_1832e22c0 ^ uVar7) + 0x101e42612 ^ 0x941d79a055ec1dbd;
  _DAT_1832e2150 = (_DAT_1832e2150 * 0x56ce51d3501b6a3f ^ _DAT_1832e22c0) + uVar7;
  _DAT_1832e1ce0 = _DAT_1832e2150 ^ _DAT_1832e22c0;
  _DAT_1832e21f8 = 0x1e42612;
  uVar7 = (~_DAT_1832e1bd0 + 0x11e42614) *
          ((_DAT_1832e2088 ^ 0x6bdddcda) + (ulonglong)((uint)_DAT_1832e2088 & 0x6bdddcda) * 2);
  uVar7 = (uVar7 | _DAT_1832e21c0) + (uVar7 & _DAT_1832e21c0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1bf0 = func_0x00018bfa9e50((uVar7 | 0x7a39fac9) + (ulonglong)((uint)uVar7 & 0x7a39fac9))
  ;
  uVar7 = (_DAT_1832e1bf0 ^ 0xffffffff) & 0x7fffffffffffffff ^ 0xefffffff;
  uVar8 = uVar7 >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar7;
  _DAT_1832e1c08 = (_DAT_1832e1c08 ^ uVar7) + 0xfe1bd9ec ^ 0x9460a53b3f77dce7;
  _DAT_1832e2138 = (_DAT_1832e2138 * -0x3d290eb055b350e7 ^ _DAT_1832e1c08) + uVar7;
  _DAT_1832e1cd0 = _DAT_1832e2138 ^ _DAT_1832e1c08;
  _DAT_1832e20c8 = 0xfe1bd9ec;
  uVar7 = (~_DAT_1832e20f8 + 0x11e42614) *
          ((_DAT_1832e1d08 ^ 0x6bdddcda) + (ulonglong)((uint)_DAT_1832e1d08 & 0x6bdddcda) * 2);
  uVar7 = (uVar7 | _DAT_1832e1d28) + (uVar7 & _DAT_1832e1d28);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1fd0 = func_0x00018bfa9e50((uVar7 | 0x7a39fac9) + (ulonglong)((uint)uVar7 & 0x7a39fac9))
  ;
  _DAT_1832e1ce8 =
       (_DAT_1832e1ce8 ^ _DAT_1832e1fd0 & 0xffffffffffff0000) + 0x1e42613 ^ 0x82964338d3459016;
  _DAT_1832e1dc0 =
       (_DAT_1832e1dc0 * -0x71f81b5de5dc8ae5 ^ _DAT_1832e1ce8) +
       (_DAT_1832e1fd0 & 0xffffffffffff0000);
  _DAT_1832e1fc8 = _DAT_1832e1dc0 ^ _DAT_1832e1ce8;
  _DAT_1832e1f60 = 0x1e42613;
  uVar7 = (_DAT_1832e1f70 ^ _DAT_181d87fa0) + _DAT_1832e20e8 + 0x7a39fac9;
  uVar8 = (_DAT_1832e20e8 ^ _UNK_181d87fa8) + _DAT_1832e1f70 + 0x3c84c26;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e1f70 ^ _DAT_181d87fa0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e20e8 ^ _UNK_181d87fa8;
  _DAT_1832e1b68 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e1f70 + 0x3c84c26) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e20e8 + 0x7a39fac9));
  _DAT_1832e20e0 = _DAT_1832e1ef8 ^ _DAT_1832e1b68 ^ 0x101e42612;
  _DAT_1832e1d08 = (_DAT_1832e1d08 ^ _DAT_1832e1b68) + 0x101e42612 ^ 0xb919947a40d86d8e;
  _DAT_1832e2108 = (_DAT_1832e2108 * -0x39c059fc688cb275 ^ _DAT_1832e1d08) + _DAT_1832e1b68;
  _DAT_1832e1b70 = _DAT_1832e2108 ^ _DAT_1832e1d08;
  _DAT_1832e20a0 = 0x1e42612;
  uVar7 = (_DAT_1832e1b60 ^ _DAT_181d87fb0) + _DAT_1832e1c38 + 0x85c60537;
  uVar8 = (_DAT_1832e1c38 ^ _UNK_181d87fb8) + _DAT_1832e1b60 + 0x1e42612;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e1b60 ^ _DAT_181d87fb0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e1c38 ^ _UNK_181d87fb8;
  _DAT_1832e2230 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e1b60 + 0x1e42612) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e1c38 + 0x85c60537));
  _DAT_1832e1ff8 = (_DAT_1832e2230 ^ 0x1e42612) << 0x1b | _DAT_1832e2230 >> 0x25;
  _DAT_1832e1d10 = _DAT_1832e1d10 ^ _DAT_1832e1ff8 ^ 0xb6b70adf94ca44dd;
  _DAT_1832e20a0 = (_DAT_1832e20a0 * 0x7224f96bb4b874e1 ^ _DAT_1832e1d10) + _DAT_1832e1ff8;
  _DAT_1832e1c78 = _DAT_1832e20a0 ^ _DAT_1832e1d10;
  _DAT_1832e22e8 = 0;
  uVar7 = ((_DAT_1832e22f0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1832e22f0 & 0x842223da) * 2) *
          -_DAT_1832e2018;
  uVar7 = (uVar7 | _DAT_1832e20b8) + (uVar7 & _DAT_1832e20b8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1ed0 = func_0x00018bfa9e50((uVar7 | 0x842223da) + (ulonglong)((uint)uVar7 & 0x842223da))
  ;
  uVar7 = _DAT_1832e1ed0 >> 1 | _DAT_1832e1ed0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1832e1ed0;
  uVar7 = uVar7 << 0x30 | uVar7 >> 0x10;
  _DAT_1832e2070 = _DAT_1832e1ec0 ^ uVar7 ^ 0xff;
  _DAT_1832e1e90 = (_DAT_1832e1e90 ^ uVar7) + 0xff ^ 0xebb989f6fa68afe8;
  _DAT_1832e1fd8 = (_DAT_1832e1c90 * -0x2bb8d9141539e00d ^ _DAT_1832e1e90) + uVar7 ^ _DAT_1832e1e90;
  _DAT_1832e1c90 = 0xff;
  _DAT_1832e21f0 = func_0x00018bfa9e50(_DAT_1832e1c50 + 0xffe0ff93daffddffU ^ 0x12);
  uVar7 = _DAT_1832e21f0 & 0xfffffffffffff000 ^ 0xffffffff;
  _DAT_1832e1f38 = (_DAT_1832e1f38 ^ uVar7) + 0x10000000 ^ 0x2a8f6b78e93ea7c;
  _DAT_1832e1c58 = (_DAT_1832e1c58 * 0x4763b622bed63ab7 ^ _DAT_1832e1f38) + uVar7;
  _DAT_1832e20d0 = _DAT_1832e1c58 ^ _DAT_1832e1f38;
  _DAT_1832e1bc0 = 0x10000000;
  uVar7 = (_DAT_1832e1b20 ^ _DAT_181d87fc0) + _DAT_1832e2030 + 0x6bdddcda;
  uVar8 = (_DAT_1832e2030 ^ _UNK_181d87fc8) + _DAT_1832e1b20 + 0x10000000;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e1b20 ^ _DAT_181d87fc0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e2030 ^ _UNK_181d87fc8;
  _DAT_1832e2230 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e1b20 + 0x10000000) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e2030 + 0x6bdddcda));
  _DAT_1832e1e20 = _DAT_1832e1e20 ^ _DAT_1832e2230 ^ 0x6d32fb8f06c3ccbc;
  _DAT_1832e1cb8 = (_DAT_1832e1cb8 * 0x49dc9fc3c4d633c3 ^ _DAT_1832e1e20) + _DAT_1832e2230;
  _DAT_1832e1be8 = _DAT_1832e1cb8 ^ _DAT_1832e1e20;
  _DAT_1832e2170 = 0;
  uVar7 = (~_DAT_1832e2238 + 0x2d966cef) *
          ((_DAT_1832e1ed8 ^ 0xa9b44fcb) + (ulonglong)((uint)_DAT_1832e1ed8 & 0xa9b44fcb) * 2);
  uVar7 = (uVar7 | _DAT_1832e2110) + (uVar7 & _DAT_1832e2110);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1b28 = func_0x00018bfa9e50((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_1832e2080 = _DAT_1832e2080 ^ _DAT_1832e1b28 ^ 0x81e3aafacd7c1aa ^ 0x1b559b985711b079;
  _DAT_1832e2198 =
       (_DAT_1832e2198 * 0x658b4c381758e683 ^ _DAT_1832e2080) + (_DAT_1832e1b28 ^ 0x81e3aafacd7c1aa)
  ;
  _DAT_1832e21f8 = _DAT_1832e2198 ^ _DAT_1832e2080;
  auVar3._8_8_ = _UNK_180122a38;
  auVar3._0_8_ = (ulonglong)(uint)(int)cVar1 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_181d87fd0,_DAT_1800170c0);
  _DAT_1832e2160 = 0;
  uVar8 = auVar4._8_8_ + auVar4._0_8_;
  uVar7 = uVar8 + _DAT_1832e21b0;
  if (auVar4._4_4_ < 0) {
    uVar7 = _DAT_1832e1d68 ^ uVar8;
  }
  _DAT_1832e1d40 = func_0x00018bfa9e50(SUB161(auVar3 ^ _DAT_181d87fd0,5) ^ uVar7);
  _DAT_1832e1b00 = (ulonglong)(uint)(int)cVar1 & 0xff;
  _DAT_1832e1ea8 = (_DAT_1832e1ea8 ^ _DAT_1832e1d40 ^ 0xff) + _DAT_1832e1b00 ^ 0x6d7f7815ad5e37e2;
  _DAT_1832e2130 = (_DAT_1832e2130 * 0x14add97040787d6b ^ _DAT_1832e1ea8) + (_DAT_1832e1d40 ^ 0xff);
  _DAT_1832e21f0 = _DAT_1832e2130 ^ _DAT_1832e1ea8;
  uVar8 = _DAT_1832e1b00 << 0x30;
  uVar7 = in_stack_00000050 ^ 0x84222325 ^ _DAT_1832e1ef8;
  lVar2 = (in_stack_00000050 ^ 0x84222325) + _DAT_1832e20c0;
  uVar5 = uVar7 + lVar2;
  uVar6 = (uVar8 ^ _DAT_1832e20c0) + _DAT_1832e1ef8 + uVar8;
  uVar7 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar7;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar8 ^ _DAT_1832e20c0;
  _DAT_1832e20d8 =
       func_0x00018bfa9e50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e1ef8 + uVar8) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar2);
  _DAT_1832e1bc0 = uVar8 | in_stack_00000050;
  in_stack_00000050 = in_stack_00000050 ^ _DAT_1832e20d8 ^ _DAT_1832e1bc0;
  _DAT_1832e1ca0 = (_DAT_1832e1ca0 ^ in_stack_00000050) + _DAT_1832e1bc0 ^ 0xeabbd5b2d8e2f826;
  _DAT_1832e22d0 = (_DAT_1832e22d0 * -0x4780b0fa95aadcad ^ _DAT_1832e1ca0) + in_stack_00000050;
  _DAT_1832e1c68 = _DAT_1832e22d0 ^ _DAT_1832e1ca0;
  (**(code **)(*unaff_RSI + 0x558))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bfa8ec1 (image 18bfa8ec1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfa8ec1(void)

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



// ===== continuation @ rva bf9111a (image 18bf9111a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf91131 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf9111a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bf91f1d (image 18bf91f1d) =====

void thunk_FUN_18bf8e463(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva bf8e81b (image 18bf8e81b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf8e871 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf8e81b(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000050;
  
  uStack0000000000000050 = 0xd;
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bf9f098 (image 18bf9f098) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf9f098(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 unaff_XMM10_Qb;
  ulonglong in_stack_00000058;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  _DAT_1832e21b0 = func_0x00018bfa9e50(_DAT_1832e2098 + 0x5e00208fffc9ffU ^ 0x6b);
  uVar5 = _DAT_1832e21b0 - (_DAT_1832e21b0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1832e21b0;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar4;
  _DAT_1832e22c8 = (_DAT_1832e22c8 ^ uVar4) + 0xa5689d55 ^ 0xa9fb120d5af87005;
  _DAT_1832e1d28 = (_DAT_1832e1d28 * 0x29494370749c63b1 ^ _DAT_1832e22c8) + uVar4;
  _DAT_1832e1ba8 = _DAT_1832e1d28 ^ _DAT_1832e22c8;
  _DAT_1832e1f78 = 0xa5689d55;
  uVar5 = (~_DAT_1832e1fa8 + 0x51616335) *
          ((_DAT_1832e2170 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e2170 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1832e22f0) + (uVar5 & _DAT_1832e22f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e1d20 = func_0x00018bfa9e50((uVar5 | 0xd5434011) + (ulonglong)((uint)uVar5 & 0xd5434011))
  ;
  _DAT_1832e2200 = (_DAT_1832e2200 ^ _DAT_1832e1e40) - 0x51616334 ^ 0xddc3652d2976ed82;
  _DAT_1832e20c0 = (_DAT_1832e20c0 * -0x7b63e282cbd7717f ^ _DAT_1832e2200) + _DAT_1832e1e40;
  _DAT_1832e1e70 = _DAT_1832e20c0 ^ _DAT_1832e2200;
  _DAT_1832e1f50 = 0xae9e9ccc;
  _DAT_1832e1ef8 = func_0x00018bfa9e50(_DAT_1832e1f78 + 0xffc000caeeff83ffU ^ 0xea);
  uVar4 = _DAT_1832e1ef8 * 0xc6f56bb8b694471;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ uVar4;
  _DAT_1832e21c0 = _DAT_1832e22b0 ^ uVar4 ^ 0x52606334;
  _DAT_1832e1b78 = (_DAT_1832e1b78 ^ uVar4) + 0x52606334 ^ 0x429f9fbbecc20146;
  _DAT_1832e1f98 = (_DAT_1832e1f98 * -0x3aa1829b0fe040bf ^ _DAT_1832e1b78) + uVar4;
  _DAT_1832e20f0 = _DAT_1832e1f98 ^ _DAT_1832e1b78;
  _DAT_1832e2008 = 0x52606334;
  uVar5 = (_DAT_1832e21c0 ^ _DAT_181d88380) + _DAT_1832e2258 + 0x84dd2325;
  uVar4 = (_DAT_1832e2258 ^ _UNK_181d88388) + _DAT_1832e21c0 + 0xd371fe27;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832e21c0 ^ _DAT_181d88380;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e2258 ^ _UNK_181d88388;
  _DAT_1832e1ee0 =
       func_0x00018bfa9e50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832e21c0 + 0xd371fe27) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e2258 + 0x84dd2325));
  uVar5 = _DAT_1832e1ee0 << 0x19 | _DAT_1832e1ee0 >> 0x27;
  _DAT_1832e1e70 = _DAT_1832e1bd8 ^ uVar5 ^ 0xd470fe27;
  _DAT_1832e1f18 = (_DAT_1832e1f18 ^ uVar5) + 0xd470fe27 ^ 0xa67c52febb1ab403;
  _DAT_1832e1d90 = (_DAT_1832e1d90 * -0x7b801508c23ded35 ^ _DAT_1832e1f18) + uVar5;
  _DAT_1832e1ca0 = _DAT_1832e1d90 ^ _DAT_1832e1f18;
  _DAT_1832e1cf0 = 0xd470fe27;
  uVar5 = (~_DAT_1832e1c90 + 0x2c8e01da) *
          ((_DAT_1832e1e58 ^ 0x5052dd02) + (ulonglong)((uint)_DAT_1832e1e58 & 0x5052dd02) * 2);
  uVar5 = (uVar5 | _DAT_1832e2100) + (uVar5 & _DAT_1832e2100);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e2188 = func_0x00018bfa9e50((uVar5 | 0x7cdcdcdb) + (ulonglong)((uint)uVar5 & 0x7cdcdcdb))
  ;
  uVar5 = _DAT_1832e2188 - (_DAT_1832e2188 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832e2188;
  _DAT_1832e1e50 = _DAT_1832e1ff0 ^ uVar5 ^ 0x100ff0000;
  _DAT_1832e2228 = (_DAT_1832e2228 ^ uVar5) + 0x100ff0000 ^ 0xa03d634f4ebd8b87;
  _DAT_1832e2248 = (_DAT_1832e2248 * 0x688d402f94001e6b ^ _DAT_1832e2228) + uVar5;
  _DAT_1832e1db0 = _DAT_1832e2248 ^ _DAT_1832e2228;
  _DAT_1832e1e30 = 0xff0000;
  uVar5 = (~_DAT_1832e1fd0 + 0xa5689d56) *
          ((_DAT_1832e1ff0 ^ 0xbf5dcc9e) + (ulonglong)((uint)_DAT_1832e1ff0 & 0xbf5dcc9e) * 2);
  uVar5 = (uVar5 | _DAT_1832e2028) + (uVar5 & _DAT_1832e2028);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e20b0 = func_0x00018bfa9e50((uVar5 | 0x1a3551cb) + (ulonglong)((uint)uVar5 & 0x1a3551cb))
  ;
  _DAT_1832e2038 = _DAT_1832e1ca8 ^ _DAT_1832e20b0 ^ 0xe0e88d10;
  _DAT_1832e1ce0 = (_DAT_1832e1ce0 ^ _DAT_1832e20b0) + 0xe0e88d10 ^ 0xcacf7616eb09440d;
  _DAT_1832e1e18 = (_DAT_1832e1e18 * -0x44aadbfec23680c3 ^ _DAT_1832e1ce0) + _DAT_1832e20b0;
  _DAT_1832e1c28 = _DAT_1832e1e18 ^ _DAT_1832e1ce0;
  _DAT_1832e1e90 = 0xe0e88d10;
  uVar5 = (_DAT_1832e1d70 ^ _DAT_181d88390) + _DAT_1832e1ee0 + 0xbf5dcc9e;
  uVar4 = (_DAT_1832e1ee0 ^ _UNK_181d88398) + _DAT_1832e1d70 + 0xa5689d55;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832e1d70 ^ _DAT_181d88390;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e1ee0 ^ _UNK_181d88398;
  _DAT_1832e1d68 =
       func_0x00018bfa9e50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832e1d70 + 0xa5689d55) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e1ee0 + 0xbf5dcc9e));
  uVar2 = ~(uint)_DAT_1832e1d68 & 0x3b7fefbb;
  uVar5 = (ulonglong)(uVar2 >> 4) | (ulonglong)uVar2 << 0x3c;
  _DAT_1832e2210 = (_DAT_1832e2210 ^ uVar5) + 0x21688d11 ^ 0xf7ed5bcc122868e5;
  _DAT_1832e1c38 = (_DAT_1832e1c38 * 0x44ab42633fc05043 ^ _DAT_1832e2210) + uVar5;
  _DAT_1832e1fd8 = _DAT_1832e1c38 ^ _DAT_1832e2210;
  _DAT_1832e1bd8 = 0x21688d11;
  _DAT_1832e1b58 = func_0x00018bfa9e50(_DAT_1832e1bc0 + 0xffc8ffd8d6ff63ff ^ 0x60);
  uVar5 = _DAT_1832e1b58 & 0x7fffffffffffffff;
  _DAT_1832e1f50 = _DAT_1832e20c0 ^ uVar5 ^ 0xe0e88d10;
  _DAT_1832e1da8 = (_DAT_1832e1da8 ^ uVar5) + 0xe0e88d10 ^ 0x266301944960fc8d;
  _DAT_1832e2078 = (_DAT_1832e2078 * 0x340debef4fdf137b ^ _DAT_1832e1da8) + uVar5;
  _DAT_1832e2278 = _DAT_1832e2078 ^ _DAT_1832e1da8;
  _DAT_1832e1e28 = 0xe0e88d10;
  uVar5 = (~_DAT_1832e1cb8 + 0xe0e88d11) *
          ((_DAT_1832e1fe0 ^ 0x64caae35) + (ulonglong)((uint)_DAT_1832e1fe0 & 0x64caae35) * 2);
  uVar5 = (uVar5 | _DAT_1832e1d98) + (uVar5 & _DAT_1832e1d98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e1d48 = func_0x00018bfa9e50((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1832e2210 = _DAT_1832e1d48 & 0xffffffffffe00000;
  _DAT_1832e1ce0 = _DAT_1832e1ce0 ^ _DAT_1832e2210 ^ 0x7139c1489a736c9f;
  _DAT_1832e1bc0 = (_DAT_1832e1bc0 * -0x53c69ce9a56de189 ^ _DAT_1832e1ce0) + _DAT_1832e2210;
  _DAT_1832e22b8 = _DAT_1832e1bc0 ^ _DAT_1832e1ce0;
  _DAT_1832e1bb0 = 0;
  uVar5 = (_DAT_1832e1c58 ^ _DAT_181d883a0) + _DAT_1832e2168 + 0xbf5dcc9e;
  uVar4 = (_DAT_1832e2168 ^ _UNK_181d883a8) + _DAT_1832e1c58 + 0xc4801044;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832e1c58 ^ _DAT_181d883a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e2168 ^ _UNK_181d883a8;
  _DAT_1832e2290 =
       func_0x00018bfa9e50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832e1c58 + 0xc4801044) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e2168 + 0xbf5dcc9e));
  _DAT_1832e2238 = _DAT_1832e2238 ^ _DAT_1832e2290 * 0x670054c96480d2ad ^ 0xf3c0de84d4f0fb53;
  _DAT_1832e1d88 =
       (_DAT_1832e1d88 * 0x634adcc036c34919 ^ _DAT_1832e2238) + _DAT_1832e2290 * 0x670054c96480d2ad;
  _DAT_1832e2280 = _DAT_1832e1d88 ^ _DAT_1832e2238;
  _DAT_1832e1e60 = 0;
  _DAT_1832e22b0 = func_0x00018bfa9e50(_DAT_1832e1e48 ^ 0x21008422ffe1ca);
  uVar5 = (_DAT_1832e22b0 ^ 0x3957e7aa) & 0x7fffffffffffffff;
  _DAT_1832e1cf8 = _DAT_1832e1cf8 ^ uVar5 ^ 0xd42a38d8347e01db;
  _DAT_1832e1b08 = (_DAT_1832e1b08 * 0x6407f3f504e08ff7 ^ _DAT_1832e1cf8) + uVar5;
  _DAT_1832e1e98 = _DAT_1832e1b08 ^ _DAT_1832e1cf8;
  _DAT_1832e2128 = 0;
  _DAT_1832e1ca0 = func_0x00018bfa9e50(_DAT_1832e1b00 ^ 0x20ff7bdaffc47a);
  uVar5 = ~(ulonglong)~(uint)_DAT_1832e1ca0 & (ulonglong)DAT_180416b10 & 0x7fffffff;
  _DAT_1832e1cd0 = _DAT_1832e1c70 ^ uVar5 ^ 0xff0000;
  _DAT_1832e1ff0 = (_DAT_1832e1ff0 ^ uVar5) + 0xff0000 ^ 0xa14cfe9010bc621d;
  _DAT_1832e1e40 = (_DAT_1832e1e40 * -0x66c8bad8942e9753 ^ _DAT_1832e1ff0) + uVar5;
  _DAT_1832e1e58 = _DAT_1832e1e40 ^ _DAT_1832e1ff0;
  auVar7._8_8_ = unaff_XMM10_Qb;
  auVar7._0_8_ = (ulonglong)(uint)(param_1 << 0x10) ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_181d883b0,_DAT_1800170c0);
  _DAT_1832e2268 = 0xff0000;
  uVar4 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar4 + _DAT_1832e1de8;
  if (auVar8._4_4_ < 0) {
    uVar5 = _DAT_1832e1d38 ^ uVar4;
  }
  _DAT_1832e1ca0 = func_0x00018bfa9e50(SUB161(auVar7 ^ _DAT_181d883b0,5) ^ uVar5);
  uVar5 = _DAT_1832e1ca0 * -0x79251971a46ae0f7 << 0x27 |
          _DAT_1832e1ca0 * -0x79251971a46ae0f7 >> 0x19;
  uVar6 = (ulonglong)(param_1 << 0x10 & 0xff0000);
  _DAT_1832e1b28 = (_DAT_1832e1b28 ^ uVar5) + uVar6 ^ 0xa58a815941a9cb7a;
  _DAT_1832e1e38 = (_DAT_1832e1e38 * 0xd6870dc026aedbf ^ _DAT_1832e1b28) + uVar5;
  _DAT_1832e22a8 = _DAT_1832e1e38 ^ _DAT_1832e1b28;
  uVar4 = in_stack_00000058 ^ 0x84222325;
  uVar5 = ((_DAT_1832e1d40 ^ uVar4) + (uVar4 & _DAT_1832e1d40) * 2) * (uVar6 - _DAT_1832e2128);
  uVar5 = (uVar5 | _DAT_1832e1f80) + (uVar5 & _DAT_1832e1f80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e2150 = uVar6;
  _DAT_1832e1f10 = func_0x00018bfa9e50((uVar4 ^ uVar6 | uVar5) + (uVar5 & (uVar4 ^ uVar6)));
  _DAT_1832e1fd8 = in_stack_00000058 | uVar6;
  _DAT_1832e2218 = (_DAT_1832e2218 ^ _DAT_1832e1f10) + _DAT_1832e1fd8 ^ 0xf4e94603c351a909;
  _DAT_1832e2280 = (_DAT_1832e2280 * 0xc31138406806b19 ^ _DAT_1832e2218) + _DAT_1832e1f10;
  _DAT_1832e1d18 = _DAT_1832e2280 ^ _DAT_1832e2218;
  iVar3 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar3 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bfa9019 (image 18bfa9019) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfa9019(void)

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



// ===== continuation @ rva bfa113f (image 18bfa113f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfa113f(uint param_1)

{
  undefined8 *unaff_RBX;
  longlong *unaff_RSI;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_XMM9_Qb;
  int iStack0000000000000058;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar1 = (~_DAT_1832e1c40 + 0xb9ce3772) *
          ((_DAT_1832e2078 ^ 0x75e03d26) + (ulonglong)((uint)_DAT_1832e2078 & 0x75e03d26) * 2);
  uVar1 = (uVar1 | _DAT_1832e2248) + (uVar1 & _DAT_1832e2248);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e21b8 = func_0x00018bfa9e50((uVar1 | 0xcc2e0a57) + (ulonglong)((uint)uVar1 & 0xcc2e0a57))
  ;
  uVar1 = _DAT_1832e21b8 - (_DAT_1832e21b8 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1832e21b8;
  _DAT_1832e1d98 = (_DAT_1832e1d98 ^ uVar1) + 0xf9ce3f73 ^ 0xbb1d92f1ea73df49;
  _DAT_1832e1ca0 = (_DAT_1832e1ca0 * -0x5e72ea803ce61b6f ^ _DAT_1832e1d98) + uVar1;
  _DAT_1832e21c8 = _DAT_1832e1ca0 ^ _DAT_1832e1d98;
  _DAT_1832e1dd8 = 0xf9ce3f73;
  uVar1 = (~_DAT_1832e1b08 + 0xcece6150) *
          ((_DAT_1832e1fa8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e1fa8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832e1f50) + (uVar1 & _DAT_1832e1f50);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1c70 = func_0x00018bfa9e50((uVar1 | 0x4aec426a) + (ulonglong)((uint)uVar1 & 0x4aec426a))
  ;
  _DAT_1832e2210 = _DAT_1832e1bb0 * 0x6e1c36dfb639e4f5;
  _DAT_1832e1d68 = _DAT_1832e1d68 - 0xcece614f ^ 0x291722d4fdde3870;
  _DAT_1832e1bb0 = _DAT_1832e2210 ^ _DAT_1832e1d68;
  _DAT_1832e1df0 = 0x31319eb1;
  uVar1 = (_DAT_1832e2090 ^ _DAT_181d88410) + _DAT_1832e1c78 + 0x4aec416b;
  uVar6 = (_DAT_1832e1c78 ^ _UNK_181d88418) + _DAT_1832e2090 + 0x31319eb1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e2090 ^ _DAT_181d88410;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832e1c78 ^ _UNK_181d88418;
  _DAT_1832e20e8 =
       func_0x00018bfa9e50((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832e2090 + 0x31319eb1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e1c78 + 0x4aec416b));
  uVar1 = _DAT_1832e20e8 ^ 0x27bd9684d28279a0;
  _DAT_1832e2248 = _DAT_1832e1ce8 ^ uVar1 ^ 0x1000000ff;
  _DAT_1832e1d30 = (_DAT_1832e1d30 ^ uVar1) + 0x1000000ff ^ 0x77e128bac90ccc29;
  _DAT_1832e1e18 = (_DAT_1832e1e18 * -0x7b21e4c75bec9993 ^ _DAT_1832e1d30) + uVar1;
  _DAT_1832e1fc8 = _DAT_1832e1e18 ^ _DAT_1832e1d30;
  _DAT_1832e1fb0 = 0xff;
  uVar1 = (~_DAT_1832e22a0 + 0x65c761bd) *
          ((_DAT_1832e1f38 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e1f38 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832e1c20) + (uVar1 & _DAT_1832e1c20);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1e38 = func_0x00018bfa9e50((uVar1 | 0xe1e54299) + (ulonglong)((uint)uVar1 & 0xe1e54299))
  ;
  uVar1 = _DAT_1832e1e38 << 0x2b | _DAT_1832e1e38 >> 0x15;
  _DAT_1832e1df8 = (_DAT_1832e1df8 ^ uVar1) - 0x65c761bc ^ 0x909793ff8b6e3a29;
  _DAT_1832e20f0 = (_DAT_1832e20f0 * 0x3cbdf5e7389b6671 ^ _DAT_1832e1df8) + uVar1;
  _DAT_1832e1e58 = _DAT_1832e20f0 ^ _DAT_1832e1df8;
  _DAT_1832e2270 = 0x9a389e44;
  _DAT_1832e2260 = func_0x00018bfa9e50(_DAT_1832e1c10 ^ 0x41ffe0a5ff9cb0);
  uVar1 = _DAT_1832e2260 ^ 0xff;
  _DAT_1832e1e18 = _DAT_1832e2258 ^ uVar1 ^ 0x65c762bb;
  _DAT_1832e1cc8 = (_DAT_1832e1cc8 ^ uVar1) + 0x65c762bb ^ 0x5ff979fb2debf6ac;
  _DAT_1832e1c10 = (_DAT_1832e1c10 * -0x2a24a9355ae2f287 ^ _DAT_1832e1cc8) + uVar1;
  _DAT_1832e1f50 = _DAT_1832e1c10 ^ _DAT_1832e1cc8;
  _DAT_1832e2258 = 0x65c762bb;
  _DAT_1832e1df8 = func_0x00018bfa9e50(_DAT_1832e21a0 + 0x5e00421bff79ff ^ 0x22);
  uVar1 = _DAT_1832e1df8 - (_DAT_1832e1df8 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832e1df8) << 0x1b | _DAT_1832e1df8 >> 0x25;
  _DAT_1832e1dc8 = (_DAT_1832e1dc8 ^ uVar1) - 0x46acc101 ^ 0x2e99049c0ec7848e;
  _DAT_1832e22d0 = (_DAT_1832e22d0 * 0x6321e818ce79224f ^ _DAT_1832e1dc8) + uVar1;
  _DAT_1832e2220 = _DAT_1832e22d0 ^ _DAT_1832e1dc8;
  _DAT_1832e1b48 = 0xb9533eff;
  _DAT_1832e1fa0 = func_0x00018bfa9e50(_DAT_1832e1be8 + 0x1dffc2b8ff81ff ^ 0xd3);
  uVar1 = (_DAT_1832e1fa0 ^ 0x46acc1ff) << 10 | _DAT_1832e1fa0 >> 0x36;
  _DAT_1832e2198 = _DAT_1832e21a0 ^ uVar1 ^ 0x46acc200;
  _DAT_1832e2278 = (_DAT_1832e2278 ^ uVar1) + 0x46acc200 ^ 0xe420b66ad892ad89;
  _DAT_1832e1dd0 = (_DAT_1832e1dd0 * -0x842fbf55be52b43 ^ _DAT_1832e2278) + uVar1;
  _DAT_1832e2008 = _DAT_1832e1dd0 ^ _DAT_1832e2278;
  _DAT_1832e1f78 = 0x46acc200;
  _DAT_1832e1d98 = func_0x00018bfa9e50(_DAT_1832e1b68 + 0xff2effe8da00daffU ^ 0x68);
  uVar1 = _DAT_1832e1d98 >> 1 | _DAT_1832e1d98;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (ulonglong)
          (~((uint)_DAT_1832e1d98 ^
            (0x40 - (uint)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x80) & 0x46acc200) * 0x7235c29ce25bd893;
  _DAT_1832e1e20 = _DAT_1832e2038 ^ uVar1 ^ 0x1000000ff;
  _DAT_1832e1b30 = (_DAT_1832e1b30 ^ uVar1) + 0x1000000ff ^ 0x8c116172ab362281;
  _DAT_1832e1d38 = (_DAT_1832e1d38 * -0xb2f066ac0f0127d ^ _DAT_1832e1b30) + uVar1;
  _DAT_1832e1cf0 = _DAT_1832e1d38 ^ _DAT_1832e1b30;
  _DAT_1832e1ea8 = 0xff;
  uVar1 = (~_DAT_1832e1fb0 + 0x97d41fbe) *
          ((_DAT_1832e1d98 ^ 0x7dec1c56) + (ulonglong)((uint)_DAT_1832e1d98 & 0x7dec1c56) * 2);
  uVar1 = (uVar1 | _DAT_1832e20d8) + (uVar1 & _DAT_1832e20d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1ed8 = func_0x00018bfa9e50((uVar1 | 0xea3803eb) + (ulonglong)((uint)uVar1 & 0xea3803eb))
  ;
  uVar1 = (_DAT_1832e1ed8 ^ 0xffde3fff) & 0x7ffffffffff;
  _DAT_1832e1cf0 = _DAT_1832e1e68 ^ uVar1 ^ 0x191a25f30;
  _DAT_1832e1e70 = (_DAT_1832e1e70 ^ uVar1) + 0x191a25f30 ^ 0xa373b6ac7065289a;
  _DAT_1832e1e90 = (_DAT_1832e1e90 * 0x263252c0afb08107 ^ _DAT_1832e1e70) + uVar1;
  _DAT_1832e1d40 = _DAT_1832e1e90 ^ _DAT_1832e1e70;
  _DAT_1832e2100 = 0x91a25f30;
  _DAT_1832e22c0 = func_0x00018bfa9e50(_DAT_1832e1f38 ^ 0xfffeffd916ffd76c);
  _DAT_1832e1f68 = (_DAT_1832e1f68 ^ _DAT_1832e22c0) + 0x6e1a20ce ^ 0x37b9a0d9b9726e76;
  _DAT_1832e1d70 = (_DAT_1832e1d70 * -0x71482daa0e2514bb ^ _DAT_1832e1f68) + _DAT_1832e22c0;
  _DAT_1832e1be8 = _DAT_1832e1d70 ^ _DAT_1832e1f68;
  _DAT_1832e22d0 = 0x6e1a20ce;
  uVar1 = (~_DAT_1832e1e10 + 0x97d41fbe) *
          ((_DAT_1832e1fc0 ^ 0x7dec1c56) + (ulonglong)((uint)_DAT_1832e1fc0 & 0x7dec1c56) * 2);
  uVar1 = (uVar1 | _DAT_1832e2058) + (uVar1 & _DAT_1832e2058);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1fb8 = func_0x00018bfa9e50((uVar1 | 0xea3803eb) + (ulonglong)((uint)uVar1 & 0xea3803eb))
  ;
  uVar1 = (_DAT_1832e1fb8 & 0xffffffff) * (_DAT_181d88420 & 0xffffffff) +
          ((ulonglong)_DAT_181d88430 * (_DAT_1832e1fb8 & 0xffffffff) +
           ((_DAT_1832e1fb8 & 0xffffffffffff) >> 0x20) * (_DAT_181d88420 & 0xffffffff) << 0x20) &
          0x7fffffffffffffff;
  _DAT_1832e1f10 = (_DAT_1832e1f10 ^ uVar1) + 0x91c41f31 ^ 0xc11708c4c1a0322e;
  _DAT_1832e22a8 = (_DAT_1832e22a8 * -0x2372fd653f29c34d ^ _DAT_1832e1f10) + uVar1;
  _DAT_1832e21e8 = _DAT_1832e22a8 ^ _DAT_1832e1f10;
  _DAT_1832e1e88 = 0x91c41f31;
  uVar1 = (~_DAT_1832e2088 + 0x23883e63) *
          ((_DAT_1832e1d18 ^ 0xea3803eb) + (ulonglong)((uint)_DAT_1832e1d18 & 0xea3803eb) * 2);
  uVar1 = (uVar1 | _DAT_1832e20b8) + (uVar1 & _DAT_1832e20b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e2048 = func_0x00018bfa9e50((uVar1 | 0xc9b03d89) + (ulonglong)((uint)uVar1 & 0xc9b03d89))
  ;
  uVar1 = _DAT_1832e2048 << 0x26 | _DAT_1832e2048 >> 0x1a;
  _DAT_1832e1b80 = _DAT_1832e1d08 ^ uVar1 ^ 0x91a25f30;
  _DAT_1832e21b8 = (_DAT_1832e21b8 ^ uVar1) + 0x91a25f30 ^ 0xff876211a50af5d9;
  _DAT_1832e1ba8 = (_DAT_1832e1ba8 * -0xb5ec11f9db5f65 ^ _DAT_1832e21b8) + uVar1;
  _DAT_1832e2010 = _DAT_1832e1ba8 ^ _DAT_1832e21b8;
  _DAT_1832e2230 = 0x91a25f30;
  _DAT_1832e2280 = func_0x00018bfa9e50(_DAT_1832e1fb8 ^ 0x22ff7c22ffdd45);
  _DAT_1832e1e30 = (ulonglong)(~(uint)_DAT_1832e2280 & 0x91a25f30);
  _DAT_1832e21a0 = _DAT_1832e21a0 ^ _DAT_1832e1e30 ^ 0x2db618eca3c37f53;
  _DAT_1832e1f78 = (_DAT_1832e1f78 * 0x777594b09b999ce5 ^ _DAT_1832e21a0) + _DAT_1832e1e30;
  _DAT_1832e2170 = _DAT_1832e1f78 ^ _DAT_1832e21a0;
  _DAT_1832e1cf8 = 0;
  uVar1 = (~_DAT_1832e1cb0 + 0x631c08d) *
          ((_DAT_1832e2160 ^ 0x7dec1c56) + (ulonglong)((uint)_DAT_1832e2160 & 0x7dec1c56) * 2);
  uVar1 = (uVar1 | _DAT_1832e2050) + (uVar1 & _DAT_1832e2050);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1f30 = func_0x00018bfa9e50((uVar1 | 0x7bdddcda) + (ulonglong)((uint)uVar1 & 0x7bdddcda))
  ;
  uVar1 = _DAT_1832e1f30 >> 1 | _DAT_1832e1f30;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           _DAT_1832e1f30 ^ 0xf9ce3f73) & 0x7fffffffffffffff;
  _DAT_1832e1d18 = _DAT_1832e1d18 ^ uVar1 ^ 0xf56f5a8466ccbae4;
  _DAT_1832e22e0 = (_DAT_1832e22e0 * -0x59d7db7ce0c64f93 ^ _DAT_1832e1d18) + uVar1;
  _DAT_1832e1d70 = _DAT_1832e22e0 ^ _DAT_1832e1d18;
  _DAT_1832e1d58 = 0;
  uVar1 = (_DAT_1832e1de0 ^ 0x842223da) + _DAT_1832e1b38 + 0x842223da;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e1de0 ^ 0x842223da;
  uVar6 = ((_DAT_1832e1b38 + _DAT_1832e1de0) * 0x2000 | _DAT_1832e1b38 + _DAT_1832e1de0 >> 0x33) ^
          _DAT_1832e1b38;
  _DAT_1832e1d70 =
       func_0x00018bfa9e50((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1832e1de0 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e1b38 + 0x842223da));
  uVar1 = _DAT_1832e1d70 * 0x4ccdd2c69e18e705 ^ 0xff;
  _DAT_1832e1d40 = _DAT_1832e1c60 ^ uVar1 ^ 0xff;
  _DAT_1832e2220 = (_DAT_1832e2220 ^ uVar1) + 0xff ^ 0x4feb46b49f6e2025;
  _DAT_1832e1e18 = (_DAT_1832e1e18 * 0x76759d6ccdbfe31d ^ _DAT_1832e2220) + uVar1;
  _DAT_1832e1d30 = _DAT_1832e1e18 ^ _DAT_1832e2220;
  _DAT_1832e1dc8 = 0xff;
  _DAT_1832e2160 = func_0x00018bfa9e50(_DAT_1832e1c90 ^ 0x23008424ffe166);
  uVar1 = (_DAT_1832e2160 << 0x21 | _DAT_1832e2160 >> 0x1f) ^ 0xf1c21e03;
  uVar6 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar1 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar1;
  _DAT_1832e1ec0 = _DAT_1832e1ec0 ^ uVar1 ^ 0x4db4d051d787f37f;
  _DAT_1832e2018 = (_DAT_1832e2018 * 0xb6b54f2d1e320e7 ^ _DAT_1832e1ec0) + uVar1;
  _DAT_1832e1d08 = _DAT_1832e2018 ^ _DAT_1832e1ec0;
  _DAT_1832e1be0 = 0;
  uVar1 = (_DAT_1832e20d8 ^ 0x842223da) + _DAT_1832e1e70 + 0x842223da;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e20d8 ^ 0x842223da;
  uVar6 = ((_DAT_1832e1e70 + _DAT_1832e20d8) * 0x2000 | _DAT_1832e1e70 + _DAT_1832e20d8 >> 0x33) ^
          _DAT_1832e1e70;
  _DAT_1832e1b58 =
       func_0x00018bfa9e50((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1832e20d8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e1e70 + 0x842223da));
  _DAT_1832e2228 = _DAT_1832e22e0 ^ _DAT_1832e1b58 ^ 0xff;
  _DAT_1832e20a8 = (_DAT_1832e20a8 ^ _DAT_1832e1b58) + 0xff ^ 0x32798b3cdc1ef098;
  _DAT_1832e2138 = (_DAT_1832e2138 * 0x4a2a1dcd749781a9 ^ _DAT_1832e20a8) + _DAT_1832e1b58;
  _DAT_1832e2140 = _DAT_1832e2138 ^ _DAT_1832e20a8;
  auVar3._8_8_ = unaff_XMM9_Qb;
  auVar3._0_8_ = (ulonglong)param_1 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_181d88440,_DAT_1800170c0);
  _DAT_1832e1ca0 = 0xff;
  uVar6 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar6 + _DAT_1832e1ef0;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_1832e1b80 ^ uVar6;
  }
  _DAT_1832e2048 = func_0x00018bfa9e50(SUB161(auVar3 ^ _DAT_181d88440,5) ^ uVar1);
  uVar1 = _DAT_1832e2048 ^ 0xff;
  uVar6 = uVar1 >> 1 | uVar1;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar1 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar1) * -0x6f3f48afcdcea497;
  uVar6 = (ulonglong)param_1 & 0xff;
  _DAT_1832e1e98 = (_DAT_1832e1e98 ^ uVar1) + uVar6 ^ 0x77c7d12073b400e1;
  _DAT_1832e1e58 = (_DAT_1832e1e58 * -0x36e46173e7bfd9e3 ^ _DAT_1832e1e98) + uVar1;
  _DAT_1832e2008 = _DAT_1832e1e58 ^ _DAT_1832e1e98;
  uVar1 = _iStack0000000000000058 ^ 0x84222325 ^ _DAT_1832e1bf8;
  lVar2 = (_iStack0000000000000058 ^ 0x84222325) + _DAT_1832e1b20;
  uVar5 = uVar1 + lVar2;
  uVar7 = (uVar6 ^ _DAT_1832e1b20) + _DAT_1832e1bf8 + uVar6;
  uVar1 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar1;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6 ^ _DAT_1832e1b20;
  _DAT_1832e21e8 = uVar6;
  _DAT_1832e22c0 =
       func_0x00018bfa9e50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e1bf8 + uVar6) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - lVar2);
  uVar1 = _DAT_1832e22c0 - (_DAT_1832e22c0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832e22c0;
  _DAT_1832e1f88 = (_DAT_1832e1f88 ^ uVar1) + (_iStack0000000000000058 | uVar6) ^ 0x90392bff179379d7
  ;
  _DAT_1832e20a8 = (_DAT_1832e20a8 * -0xb5580020b13f2e5 ^ _DAT_1832e1f88) + uVar1;
  _DAT_1832e22f8 = _DAT_1832e20a8 ^ _DAT_1832e1f88;
  _DAT_1832e1f08 = _iStack0000000000000058 | uVar6;
  iStack0000000000000058 = (int)*unaff_RBX;
  switch(iStack0000000000000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bf7b7e3 (image 18bf7b7e3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7b7e3(void)

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



// ===== continuation @ rva bf7b78f (image 18bf7b78f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7b78f(void)

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



// ===== continuation @ rva bf7c548 (image 18bf7c548) =====

void FUN_18bf7c548(void)

{
  return;
}



// ===== continuation @ rva bf7c16d (image 18bf7c16d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c16d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181d815a8)();
  return;
}



// ===== continuation @ rva bf7c0ea (image 18bf7c0ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c0ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_181d81208)();
  return;
}



// ===== continuation @ rva bf7c556 (image 18bf7c556) =====

void FUN_18bf7c556(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf7c247 (image 18bf7c247) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7c247(void)

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



// ===== continuation @ rva bf7bdac (image 18bf7bdac) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7bdac(void)

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



// ===== continuation @ rva bf7c513 (image 18bf7c513) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c513(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d814e8)();
  return;
}



// ===== continuation @ rva bf7c4bf (image 18bf7c4bf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c4bf(void)

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



// ===== continuation @ rva bf7bc2f (image 18bf7bc2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7bc2f(void)

{
  FUN_190ddfc90();
  (*_DAT_181d811f8)();
  return;
}



// ===== continuation @ rva bf7be42 (image 18bf7be42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7be42(void)

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



// ===== continuation @ rva bf7ef9d (image 18bf7ef9d) =====

void FUN_18bf7ef9d(void)

{
  return;
}



// ===== continuation @ rva bf7c6c0 (image 18bf7c6c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c6c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181d81ee8)();
  return;
}



// ===== continuation @ rva bf7efbc (image 18bf7efbc) =====

void FUN_18bf7efbc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf7ec12 (image 18bf7ec12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7ec12(void)

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



// ===== continuation @ rva bf7da07 (image 18bf7da07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7da07(void)

{
  FUN_190dd72e0();
  (*_DAT_181d81c38)();
  return;
}



// ===== continuation @ rva bf7e2fe (image 18bf7e2fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7e2fe(void)

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



// ===== continuation @ rva bf7db0e (image 18bf7db0e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7db0e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181d82248)();
  return;
}



// ===== continuation @ rva bf7dd6e (image 18bf7dd6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7dd6e(void)

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



// ===== continuation @ rva bf7ee3c (image 18bf7ee3c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7ee3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181d82498)();
  return;
}



// ===== continuation @ rva bf7e9d9 (image 18bf7e9d9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7e9d9(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bf7e9b5 (image 18bf7e9b5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7e9b5(void)

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



// ===== continuation @ rva bf815b6 (image 18bf815b6) =====

void FUN_18bf815b6(void)

{
  return;
}



// ===== continuation @ rva bf8141a (image 18bf8141a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8141a(void)

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



// ===== continuation @ rva bf83b5c (image 18bf83b5c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf83b5c(void)

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



// ===== continuation @ rva bf82c1e (image 18bf82c1e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf82c1e(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bf89e18 (image 18bf89e18) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf89e18(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(*unaff_RSI + 0x488))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bf8a0de (image 18bf8a0de) =====

undefined8 thunk_FUN_18bf8159f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva bf8a29a (image 18bf8a29a) =====

void FUN_18bf8a29a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva bf83e8e (image 18bf83e8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf83e8e(void)

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



// ===== continuation @ rva bf860fe (image 18bf860fe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf860fe(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined4 uStack00000000000000a4;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined2 uStack00000000000000c0;
  
  uStack00000000000000a4 = 0x49a740b4;
  rdtsc();
  uStack00000000000000b0 = 0x74007800690073;
  rdtsc();
  uStack00000000000000b8 = 0x65002f006f0077;
  rdtsc();
  uStack00000000000000c0 = 0x51;
  in_stack_00000050 =
       (**(code **)(*in_stack_00000030 + 0x518))(in_stack_00000030,&stack0x000000b0,9);
  FUN_190ddfc90(in_stack_00000030,&stack0x00000038,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xdad,
                0x43);
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



// ===== continuation @ rva bf8a572 (image 18bf8a572) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8a572(void)

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



// ===== continuation @ rva bf8a51e (image 18bf8a51e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8a51e(void)

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



// ===== continuation @ rva bf8b3e5 (image 18bf8b3e5) =====

void FUN_18bf8b3e5(void)

{
  return;
}



// ===== continuation @ rva bf8a661 (image 18bf8a661) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8a661(void)

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



// ===== continuation @ rva bf8b396 (image 18bf8b396) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8b396(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181d849f8)();
  return;
}



// ===== continuation @ rva bf8b3b1 (image 18bf8b3b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8b3b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d84938)();
  return;
}



// ===== continuation @ rva bf8ab1b (image 18bf8ab1b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8ab1b(void)

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



// ===== continuation @ rva bf8b3f4 (image 18bf8b3f4) =====

void FUN_18bf8b3f4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf8ab6f (image 18bf8ab6f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8ab6f(void)

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



// ===== continuation @ rva bf8afa2 (image 18bf8afa2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8afa2(void)

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



// ===== continuation @ rva bf8a6e6 (image 18bf8a6e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8a6e6(void)

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



// ===== continuation @ rva bf8a692 (image 18bf8a692) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8a692(void)

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



// ===== continuation @ rva bf8ad8c (image 18bf8ad8c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8ad8c(void)

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



// ===== continuation @ rva bf8d506 (image 18bf8d506) =====

void FUN_18bf8d506(void)

{
  return;
}



// ===== continuation @ rva bf8b56c (image 18bf8b56c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8b56c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181d85088)();
  return;
}



// ===== continuation @ rva bf8e0aa (image 18bf8e0aa) =====

void FUN_18bf8e0aa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf8c8e3 (image 18bf8c8e3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8c8e3(void)

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



// ===== continuation @ rva bf8dea1 (image 18bf8dea1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8dea1(void)

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



// ===== continuation @ rva bf8c36a (image 18bf8c36a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8c36a(void)

{
  (*_DAT_181d859a8)();
  return;
}



// ===== continuation @ rva bf8d4ab (image 18bf8d4ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8d4ab(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181d85078)();
  return;
}



// ===== continuation @ rva bf8d161 (image 18bf8d161) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8d161(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_181d84fe8)();
  return;
}



// ===== continuation @ rva bf8e044 (image 18bf8e044) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8e044(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181d85878)();
  return;
}



// ===== continuation @ rva bf8db3c (image 18bf8db3c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8db3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181d858e8)();
  return;
}



// ===== continuation @ rva bf8bdbc (image 18bf8bdbc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8bdbc(void)

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



// ===== continuation @ rva bf8b771 (image 18bf8b771) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8b771(void)

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



// ===== continuation @ rva bf3e1d6 (image 18bf3e1d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e1d6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d757c8)();
  return;
}



// ===== continuation @ rva bf3e163 (image 18bf3e163) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e163(void)

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



// ===== continuation @ rva bf3e29d (image 18bf3e29d) =====

void FUN_18bf3e29d(void)

{
  return;
}



// ===== continuation @ rva bf3e19c (image 18bf3e19c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e19c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75778)();
  return;
}



// ===== continuation @ rva bf3e2a5 (image 18bf3e2a5) =====

void FUN_18bf3e2a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3e1c1 (image 18bf3e1c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e1c1(void)

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



// ===== continuation @ rva bf3e21f (image 18bf3e21f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e21f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75798)();
  return;
}



// ===== continuation @ rva bf3e252 (image 18bf3e252) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e252(void)

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



// ===== continuation @ rva bf3e276 (image 18bf3e276) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e276(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x348))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d757d8)();
  return;
}



// ===== continuation @ rva bf3e1fe (image 18bf3e1fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e1fe(void)

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



// ===== continuation @ rva bf47644 (image 18bf47644) =====

void FUN_18bf47644(void)

{
  return;
}



// ===== continuation @ rva bf3f7fd (image 18bf3f7fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f7fd(void)

{
  FUN_190ddce00();
  (*_DAT_181d766d8)();
  return;
}



// ===== continuation @ rva bf470d1 (image 18bf470d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf470d1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181d771e8)();
  return;
}



// ===== continuation @ rva bf453a7 (image 18bf453a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf453a7(void)

{
  FUN_190dd9df0();
  (*_DAT_181d77528)();
  return;
}



// ===== continuation @ rva bf461b7 (image 18bf461b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf461b7(void)

{
  (*_DAT_181d770e8)();
  return;
}



// ===== continuation @ rva bf45f3a (image 18bf45f3a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf45f3a(void)

{
  (*_DAT_181d76f88)();
  return;
}



// ===== continuation @ rva bf45acc (image 18bf45acc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf45acc(void)

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



// ===== continuation @ rva bf4803e (image 18bf4803e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf4803e(void)

{
  FUN_190de3220();
  (*_DAT_181d779a8)();
  return;
}



// ===== continuation @ rva bf481a3 (image 18bf481a3) =====

void FUN_18bf481a3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf464dc (image 18bf464dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf464dc(void)

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



// ===== continuation @ rva bf43ba3 (image 18bf43ba3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf43ba3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181d76c48)();
  return;
}



// ===== continuation @ rva bf4709a (image 18bf4709a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf4709a(void)

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



// ===== continuation @ rva bfb2f3e (image 18bfb2f3e) =====

void FUN_18bfb2f3e(void)

{
  return;
}



// ===== continuation @ rva bfa9fad (image 18bfa9fad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfa9fad(void)

{
  FUN_190ddce00();
  (*_DAT_181d89ba8)();
  return;
}



// ===== continuation @ rva bfb2faa (image 18bfb2faa) =====

void FUN_18bfb2faa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bfb2a8e (image 18bfb2a8e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb2a8e(void)

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



// ===== continuation @ rva bfb0a5c (image 18bfb0a5c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb0a5c(void)

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



// ===== continuation @ rva bfadfdf (image 18bfadfdf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfadfdf(void)

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



// ===== continuation @ rva bfb25e1 (image 18bfb25e1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb25e1(void)

{
  (*_DAT_181d8a7f8)();
  return;
}



// ===== continuation @ rva bfaf1e5 (image 18bfaf1e5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfaf1e5(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xf47e,0x29b);
  (*_DAT_181d894c8)();
  return;
}



// ===== continuation @ rva bfaf15e (image 18bfaf15e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfaf15e(void)

{
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  (*_DAT_181d889f8)();
  return;
}



// ===== continuation @ rva bfb2f2d (image 18bfb2f2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb2f2d(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_181d89e38)();
  return;
}



// ===== continuation @ rva bfb15b3 (image 18bfb15b3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb15b3(void)

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



// ===== continuation @ rva bfb0d27 (image 18bfb0d27) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb0d27(void)

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



// ===== continuation @ rva bfb7334 (image 18bfb7334) =====

void FUN_18bfb7334(void)

{
  return;
}



// ===== continuation @ rva bfb31c4 (image 18bfb31c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb31c4(void)

{
  FUN_190ddce00();
  (*_DAT_181d8bf50)();
  return;
}



// ===== continuation @ rva bfb74f3 (image 18bfb74f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb74f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8be00)();
  return;
}



// ===== continuation @ rva bfb6d90 (image 18bfb6d90) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb6d90(void)

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



// ===== continuation @ rva bfb6021 (image 18bfb6021) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb6021(void)

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



// ===== continuation @ rva bfb68a8 (image 18bfb68a8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb68a8(void)

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



// ===== continuation @ rva bfb73a0 (image 18bfb73a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb73a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_181d8b650)();
  return;
}



// ===== continuation @ rva bfb6f6d (image 18bfb6f6d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb6f6d(void)

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



// ===== continuation @ rva bfb7519 (image 18bfb7519) =====

void FUN_18bfb7519(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bfb6f2e (image 18bfb6f2e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb6f2e(void)

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



// ===== continuation @ rva bfb6c1a (image 18bfb6c1a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb6c1a(void)

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



// ===== continuation @ rva bfb67c9 (image 18bfb67c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb67c9(void)

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



// ===== continuation @ rva bfba7f6 (image 18bfba7f6) =====

void FUN_18bfba7f6(void)

{
  return;
}



// ===== continuation @ rva bfb76d7 (image 18bfb76d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb76d7(void)

{
  FUN_190ddce00();
  (*_DAT_181d8cae8)();
  return;
}



// ===== continuation @ rva bfba15f (image 18bfba15f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfba15f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181d8cd78)();
  return;
}



// ===== continuation @ rva bfba5c9 (image 18bfba5c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfba5c9(void)

{
  (*_DAT_181d8d008)();
  return;
}



// ===== continuation @ rva bfba6a0 (image 18bfba6a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfba6a0(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8ceb8)();
  return;
}



// ===== continuation @ rva bfba623 (image 18bfba623) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfba623(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8d0b8)();
  return;
}



// ===== continuation @ rva bfbb0fc (image 18bfbb0fc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbb0fc(void)

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



// ===== continuation @ rva bfba1eb (image 18bfba1eb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfba1eb(void)

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



// ===== continuation @ rva bfba21b (image 18bfba21b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfba21b(void)

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



// ===== continuation @ rva bfb9f2e (image 18bfb9f2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb9f2e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8cbe8)();
  return;
}



// ===== continuation @ rva bfbb136 (image 18bfbb136) =====

void FUN_18bfbb136(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bfbad5d (image 18bfbad5d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbad5d(void)

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



// ===== continuation @ rva bfba891 (image 18bfba891) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfba891(void)

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



// ===== continuation @ rva bfc03e6 (image 18bfc03e6) =====

void FUN_18bfc03e6(void)

{
  return;
}



// ===== continuation @ rva bfbb321 (image 18bfbb321) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfbb321(void)

{
  FUN_190ddce00();
  (*_DAT_181d8df68)();
  return;
}



// ===== continuation @ rva bfc1610 (image 18bfc1610) =====

void FUN_18bfc1610(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bfc12fa (image 18bfc12fa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc12fa(void)

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



// ===== continuation @ rva bfbf228 (image 18bfbf228) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbf228(void)

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



// ===== continuation @ rva bfc0d18 (image 18bfc0d18) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc0d18(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181d8dea8)();
  return;
}



// ===== continuation @ rva bfc15bd (image 18bfc15bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc15bd(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x138))(in_stack_00000030);
  (*_DAT_181d8e8e8)();
  return;
}



// ===== continuation @ rva bfbff60 (image 18bfbff60) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbff60(void)

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



// ===== continuation @ rva bfbf2e0 (image 18bfbf2e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbf2e0(void)

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



// ===== continuation @ rva bfbf397 (image 18bfbf397) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfbf397(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8dee8)();
  return;
}



// ===== continuation @ rva bfbf31a (image 18bfbf31a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfbf31a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8e238)();
  return;
}



// ===== continuation @ rva bfc1010 (image 18bfc1010) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1010(void)

{
  (*_DAT_181d8e848)();
  return;
}



// ===== continuation @ rva bfc17a6 (image 18bfc17a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc17a6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8f8f8)();
  return;
}



// ===== continuation @ rva bfc1733 (image 18bfc1733) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1733(void)

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



// ===== continuation @ rva bfc1886 (image 18bfc1886) =====

void FUN_18bfc1886(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bfc17ce (image 18bfc17ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc17ce(void)

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



// ===== continuation @ rva bfc1822 (image 18bfc1822) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1822(void)

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



// ===== continuation @ rva bfc187e (image 18bfc187e) =====

void FUN_18bfc187e(void)

{
  return;
}



// ===== continuation @ rva bfc176c (image 18bfc176c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc176c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8f928)();
  return;
}



// ===== continuation @ rva bfc1791 (image 18bfc1791) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1791(void)

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



// ===== continuation @ rva bfc1846 (image 18bfc1846) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1846(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8f948)();
  return;
}



// ===== continuation @ rva bfc186d (image 18bfc186d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc186d(void)

{
  (*_DAT_181d8f968)();
  return;
}



// ===== continuation @ rva bfc19a6 (image 18bfc19a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc19a6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8fa58)();
  return;
}



// ===== continuation @ rva bfc1933 (image 18bfc1933) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1933(void)

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



// ===== continuation @ rva bfc1a7e (image 18bfc1a7e) =====

void FUN_18bfc1a7e(void)

{
  return;
}



// ===== continuation @ rva bfc19ef (image 18bfc19ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc19ef(void)

{
  FUN_190dd9df0();
  (*_DAT_181d8fa38)();
  return;
}



// ===== continuation @ rva bfc196c (image 18bfc196c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc196c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8fa08)();
  return;
}



// ===== continuation @ rva bfc1a86 (image 18bfc1a86) =====

void FUN_18bfc1a86(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bfc1991 (image 18bfc1991) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1991(void)

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



// ===== continuation @ rva bfc1a46 (image 18bfc1a46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1a46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8fa48)();
  return;
}



// ===== continuation @ rva bfc1a22 (image 18bfc1a22) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1a22(void)

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



// ===== continuation @ rva bfc1ba6 (image 18bfc1ba6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1ba6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8fb18)();
  return;
}



// ===== continuation @ rva bfc1b33 (image 18bfc1b33) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1b33(void)

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



// ===== continuation @ rva bfc1c86 (image 18bfc1c86) =====

void FUN_18bfc1c86(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bfc1b91 (image 18bfc1b91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1b91(void)

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



// ===== continuation @ rva bfc1c7e (image 18bfc1c7e) =====

void FUN_18bfc1c7e(void)

{
  return;
}



// ===== continuation @ rva bfc1b6c (image 18bfc1b6c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1b6c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8fab8)();
  return;
}



// ===== continuation @ rva bfc1bef (image 18bfc1bef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1bef(void)

{
  FUN_190dd9df0();
  (*_DAT_181d8faf8)();
  return;
}



// ===== continuation @ rva bfc1c22 (image 18bfc1c22) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1c22(void)

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



// ===== continuation @ rva bfc1c46 (image 18bfc1c46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1c46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d8fb28)();
  return;
}



// ===== continuation @ rva bfc1bce (image 18bfc1bce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1bce(void)

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



// ===== continuation @ rva bf3e3c6 (image 18bf3e3c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e3c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75898)();
  return;
}



// ===== continuation @ rva bf3e353 (image 18bf3e353) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e353(void)

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



// ===== continuation @ rva bf3e49e (image 18bf3e49e) =====

void FUN_18bf3e49e(void)

{
  return;
}



// ===== continuation @ rva bf3e466 (image 18bf3e466) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e466(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d758b8)();
  return;
}



// ===== continuation @ rva bf3e4a6 (image 18bf3e4a6) =====

void FUN_18bf3e4a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3e442 (image 18bf3e442) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e442(void)

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



// ===== continuation @ rva bf3e3b1 (image 18bf3e3b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e3b1(void)

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



// ===== continuation @ rva bf3e40f (image 18bf3e40f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e40f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75858)();
  return;
}



// ===== continuation @ rva bf3e3ee (image 18bf3e3ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e3ee(void)

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



// ===== continuation @ rva bf3e5c6 (image 18bf3e5c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e5c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75978)();
  return;
}



// ===== continuation @ rva bf3e553 (image 18bf3e553) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e553(void)

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



// ===== continuation @ rva bf3e6a6 (image 18bf3e6a6) =====

void FUN_18bf3e6a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3e69e (image 18bf3e69e) =====

void FUN_18bf3e69e(void)

{
  return;
}



// ===== continuation @ rva bf3e68d (image 18bf3e68d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e68d(void)

{
  (*_DAT_181d75918)();
  return;
}



// ===== continuation @ rva bf3e58c (image 18bf3e58c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e58c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75988)();
  return;
}



// ===== continuation @ rva bf3e642 (image 18bf3e642) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e642(void)

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



// ===== continuation @ rva bf3e60f (image 18bf3e60f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e60f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75958)();
  return;
}



// ===== continuation @ rva bf3e5ee (image 18bf3e5ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e5ee(void)

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



// ===== continuation @ rva bf3e7c6 (image 18bf3e7c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e7c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75a18)();
  return;
}



// ===== continuation @ rva bf3e753 (image 18bf3e753) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e753(void)

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



// ===== continuation @ rva bf3e89e (image 18bf3e89e) =====

void FUN_18bf3e89e(void)

{
  return;
}



// ===== continuation @ rva bf3e78c (image 18bf3e78c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e78c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75a58)();
  return;
}



// ===== continuation @ rva bf3e8a6 (image 18bf3e8a6) =====

void FUN_18bf3e8a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3e88d (image 18bf3e88d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e88d(void)

{
  (*_DAT_181d75a28)();
  return;
}



// ===== continuation @ rva bf3e7ee (image 18bf3e7ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e7ee(void)

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



// ===== continuation @ rva bf3e80f (image 18bf3e80f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e80f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75a78)();
  return;
}



// ===== continuation @ rva bf3e866 (image 18bf3e866) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e866(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75a08)();
  return;
}



// ===== continuation @ rva bf3e7b1 (image 18bf3e7b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e7b1(void)

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



// ===== continuation @ rva bf3e9c6 (image 18bf3e9c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e9c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75ae8)();
  return;
}



// ===== continuation @ rva bf3e953 (image 18bf3e953) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e953(void)

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



// ===== continuation @ rva bf3ea9e (image 18bf3ea9e) =====

void FUN_18bf3ea9e(void)

{
  return;
}



// ===== continuation @ rva bf3ea66 (image 18bf3ea66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ea66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75b18)();
  return;
}



// ===== continuation @ rva bf3eaa6 (image 18bf3eaa6) =====

void FUN_18bf3eaa6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3e9ee (image 18bf3e9ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e9ee(void)

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



// ===== continuation @ rva bf3ea0f (image 18bf3ea0f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ea0f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75b48)();
  return;
}



// ===== continuation @ rva bf3ea8d (image 18bf3ea8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ea8d(void)

{
  (*_DAT_181d75b08)();
  return;
}



// ===== continuation @ rva bf3e98c (image 18bf3e98c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e98c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75b58)();
  return;
}



// ===== continuation @ rva bf3ebc6 (image 18bf3ebc6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ebc6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75c18)();
  return;
}



// ===== continuation @ rva bf3eb53 (image 18bf3eb53) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3eb53(void)

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



// ===== continuation @ rva bf3eca6 (image 18bf3eca6) =====

void FUN_18bf3eca6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3ec8d (image 18bf3ec8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ec8d(void)

{
  (*_DAT_181d75be8)();
  return;
}



// ===== continuation @ rva bf3ec9e (image 18bf3ec9e) =====

void FUN_18bf3ec9e(void)

{
  return;
}



// ===== continuation @ rva bf3eb8c (image 18bf3eb8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3eb8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75c08)();
  return;
}



// ===== continuation @ rva bf3ec66 (image 18bf3ec66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ec66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75bb8)();
  return;
}



// ===== continuation @ rva bf3ebb1 (image 18bf3ebb1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3ebb1(void)

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



// ===== continuation @ rva bf3ebee (image 18bf3ebee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3ebee(void)

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



// ===== continuation @ rva bf3edc6 (image 18bf3edc6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3edc6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75d18)();
  return;
}



// ===== continuation @ rva bf3ed53 (image 18bf3ed53) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ed53(void)

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



// ===== continuation @ rva bf3ee9e (image 18bf3ee9e) =====

void FUN_18bf3ee9e(void)

{
  return;
}



// ===== continuation @ rva bf3ee66 (image 18bf3ee66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ee66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75cc8)();
  return;
}



// ===== continuation @ rva bf3eea6 (image 18bf3eea6) =====

void FUN_18bf3eea6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3ee0f (image 18bf3ee0f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ee0f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75ce8)();
  return;
}



// ===== continuation @ rva bf3ee8d (image 18bf3ee8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ee8d(void)

{
  (*_DAT_181d75ca8)();
  return;
}



// ===== continuation @ rva bf3edb1 (image 18bf3edb1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3edb1(void)

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



// ===== continuation @ rva bf3ee42 (image 18bf3ee42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3ee42(void)

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



// ===== continuation @ rva bf3ed8c (image 18bf3ed8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ed8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75cd8)();
  return;
}



// ===== continuation @ rva bf3efc6 (image 18bf3efc6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3efc6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75de8)();
  return;
}



// ===== continuation @ rva bf3ef53 (image 18bf3ef53) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ef53(void)

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



// ===== continuation @ rva bf3f09e (image 18bf3f09e) =====

void FUN_18bf3f09e(void)

{
  return;
}



// ===== continuation @ rva bf3ef8c (image 18bf3ef8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ef8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75df8)();
  return;
}



// ===== continuation @ rva bf3f0a6 (image 18bf3f0a6) =====

void FUN_18bf3f0a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3f042 (image 18bf3f042) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f042(void)

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



// ===== continuation @ rva bf3f066 (image 18bf3f066) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f066(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75dc8)();
  return;
}



// ===== continuation @ rva bf3f08d (image 18bf3f08d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f08d(void)

{
  (*_DAT_181d75da8)();
  return;
}



// ===== continuation @ rva bf3f00f (image 18bf3f00f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f00f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75d98)();
  return;
}



// ===== continuation @ rva bf3f1c6 (image 18bf3f1c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f1c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75eb8)();
  return;
}



// ===== continuation @ rva bf3f153 (image 18bf3f153) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f153(void)

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



// ===== continuation @ rva bf3f2a6 (image 18bf3f2a6) =====

void FUN_18bf3f2a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3f29e (image 18bf3f29e) =====

void FUN_18bf3f29e(void)

{
  return;
}



// ===== continuation @ rva bf3f242 (image 18bf3f242) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f242(void)

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



// ===== continuation @ rva bf3f28d (image 18bf3f28d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f28d(void)

{
  (*_DAT_181d75e58)();
  return;
}



// ===== continuation @ rva bf3f18c (image 18bf3f18c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f18c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75ec8)();
  return;
}



// ===== continuation @ rva bf3f266 (image 18bf3f266) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f266(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75e88)();
  return;
}



// ===== continuation @ rva bf3f1ee (image 18bf3f1ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f1ee(void)

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



// ===== continuation @ rva bf3f3c6 (image 18bf3f3c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f3c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75f68)();
  return;
}



// ===== continuation @ rva bf3f353 (image 18bf3f353) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f353(void)

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



// ===== continuation @ rva bf3f49e (image 18bf3f49e) =====

void FUN_18bf3f49e(void)

{
  return;
}



// ===== continuation @ rva bf3f40f (image 18bf3f40f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f40f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75fb8)();
  return;
}



// ===== continuation @ rva bf3f38c (image 18bf3f38c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f38c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75fa8)();
  return;
}



// ===== continuation @ rva bf3f4a6 (image 18bf3f4a6) =====

void FUN_18bf3f4a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3f3ee (image 18bf3f3ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f3ee(void)

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



// ===== continuation @ rva bf3f466 (image 18bf3f466) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f466(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d75f98)();
  return;
}



// ===== continuation @ rva bf3f48d (image 18bf3f48d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f48d(void)

{
  (*_DAT_181d75f88)();
  return;
}



// ===== continuation @ rva bf3f5c6 (image 18bf3f5c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f5c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d76058)();
  return;
}



// ===== continuation @ rva bf3f553 (image 18bf3f553) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f553(void)

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



// ===== continuation @ rva bf3f6a4 (image 18bf3f6a4) =====

void FUN_18bf3f6a4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf3f69c (image 18bf3f69c) =====

void FUN_18bf3f69c(void)

{
  return;
}



// ===== continuation @ rva bf3f642 (image 18bf3f642) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f642(void)

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



// ===== continuation @ rva bf3f666 (image 18bf3f666) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f666(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d76048)();
  return;
}



// ===== continuation @ rva bf3f68c (image 18bf3f68c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f68c(void)

{
  (*_DAT_181d76018)(0);
  return;
}



// ===== continuation @ rva bf3f5ee (image 18bf3f5ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f5ee(void)

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



// ===== continuation @ rva bf3f60f (image 18bf3f60f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f60f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d76028)();
  return;
}



// ===== continuation @ rva bf483f6 (image 18bf483f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf483f6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d78e08)();
  return;
}



// ===== continuation @ rva bf48383 (image 18bf48383) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf48383(void)

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



// ===== continuation @ rva bf484d4 (image 18bf484d4) =====

void FUN_18bf484d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bf484cc (image 18bf484cc) =====

void FUN_18bf484cc(void)

{
  return;
}



// ===== continuation @ rva bf4841e (image 18bf4841e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf4841e(void)

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



// ===== continuation @ rva bf48496 (image 18bf48496) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf48496(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d78e28)();
  return;
}



// ===== continuation @ rva bf484bc (image 18bf484bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf484bc(void)

{
  (*_DAT_181d78de8)(0);
  return;
}



// ===== continuation @ rva bf483e1 (image 18bf483e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf483e1(void)

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



// ===== continuation @ rva bf483bc (image 18bf483bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf483bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181d78e38)();
  return;
}



// ===== continuation @ rva bf486e6 (image 18bf486e6) =====

void FUN_18bf486e6(void)

{
  uint uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = (**(code **)(*unaff_RBX + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x10) = unaff_RBX;
                    /* WARNING: Could not recover jumptable at 0x00018bf48715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d79080 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva bf48693 (image 18bf48693) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf486c9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf48693(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bf5d98d (image 18bf5d98d) =====

undefined8 FUN_18bf5d98d(void)

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



// ===== continuation @ rva bf49ba0 (image 18bf49ba0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf49ba0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_R14;
  
  _DAT_1832e0760 = func_0x00018bf747d0(_DAT_1832e0bd0 + 0x5a23d98965664bc ^ 0x28);
  _DAT_1832e0740 =
       (_DAT_1832e0740 ^ _DAT_1832e0760 & 0x3ffffffffffffff) + 0xe3dff9376fed9ffb ^
       0x337c3ba9c4a02e6d;
  _DAT_1832e05c0 =
       (_DAT_1832e05c0 * -0x56f0a0051959f05b ^ _DAT_1832e0740) +
       (_DAT_1832e0760 & 0x3ffffffffffffff);
  _DAT_1832e0758 = _DAT_1832e05c0 ^ _DAT_1832e0740;
  _DAT_1832e09b8 = -0x1c2006c890126005;
  _DAT_1832e0898 = func_0x00018bf747d0(_DAT_1832e0cd8 + 0x9010717b74bbb98dU ^ 0xdf);
  uVar2 = _DAT_1832e0898 ^ 0x4d4085fd3d9f3b8a;
  uVar1 = uVar2 >> 1 | uVar2;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2)
          & 0xffffffffff000000;
  _DAT_1832e0910 = (_DAT_1832e0910 ^ uVar1) + 0xf691fc90fbe833b1 ^ 0xbc4f5e6e593af319;
  _DAT_1832e0a08 = (_DAT_1832e0a08 * -0x7b8da99026ee2193 ^ _DAT_1832e0910) + uVar1;
  _DAT_1832e05a0 = _DAT_1832e0a08 ^ _DAT_1832e0910;
  _DAT_1832e05f0 = 0xf691fc90fbe833b1;
  uVar1 = (_DAT_1832e0558 ^ _DAT_181d7a360) + _DAT_1832e0648 + 0x84222325;
  uVar2 = (_DAT_1832e0648 ^ _UNK_181d7a368) + _DAT_1832e0558 + 0x57dfeb63c3902d2c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0558 ^ _DAT_181d7a360;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0648 ^ _UNK_181d7a368;
  _DAT_1832e0a78 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0558 + 0x57dfeb63c3902d2c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0648 + 0x84222325));
  _DAT_1832e0610 = (_DAT_1832e0610 ^ _DAT_1832e0a78) + 0xa820149c3c6fd2d4 ^ 0x19e83e7f577063e2;
  _DAT_1832e07e8 = (_DAT_1832e07e8 * 0x5ddba7d8f249bbbf ^ _DAT_1832e0610) + _DAT_1832e0a78;
  _DAT_1832e0798 = _DAT_1832e07e8 ^ _DAT_1832e0610;
  _DAT_1832e0a80 = 0xa820149c3c6fd2d4;
  uVar1 = (_DAT_1832e0b90 ^ _DAT_181d7a370) + _DAT_1832e0be8 + 0x57dfeb6347b20e0f;
  uVar2 = (_DAT_1832e0be8 ^ _UNK_181d7a378) + _DAT_1832e0b90 + 0xa820149c3c6fd2d4;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0b90 ^ _DAT_181d7a370;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0be8 ^ _UNK_181d7a378;
  _DAT_1832e0630 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0b90 + 0xa820149c3c6fd2d4) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0be8 + 0x57dfeb6347b20e0f));
  uVar1 = _DAT_1832e0630 ^ 0xfffffffffffffffe;
  _DAT_1832e0958 = _DAT_1832e0b80 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0560 = (_DAT_1832e0560 ^ uVar1) - 2 ^ 0x2f209087ca4f208a;
  _DAT_1832e06f8 = (_DAT_1832e06f8 * 0x5a074bb4854e5b41 ^ _DAT_1832e0560) + uVar1;
  _DAT_1832e0c70 = _DAT_1832e06f8 ^ _DAT_1832e0560;
  _DAT_1832e07e0 = 0xfffffffffffffffe;
  _DAT_1832e08e8 = func_0x00018bf747d0(_DAT_1832e0bc8 + 0x242f99f9b716b0fe ^ 1);
  _DAT_1832e0c60 =
       (_DAT_1832e0c60 ^ _DAT_1832e08e8 ^ 0x19aebe49e73f3ed) + 0xfe65141b618c0c13 ^
       0x5438e239286921c4;
  _DAT_1832e0b08 =
       (_DAT_1832e0b08 * 0x7b589217e3e3e5fd ^ _DAT_1832e0c60) + (_DAT_1832e08e8 ^ 0x19aebe49e73f3ed)
  ;
  _DAT_1832e08b8 = _DAT_1832e0b08 ^ _DAT_1832e0c60;
  _DAT_1832e0798 = 0xfe65141b618c0c13;
  _DAT_1832e0990 = func_0x00018bf747d0(_DAT_1832e06f0 ^ 0xfc3ce7192230a278);
  uVar1 = (_DAT_1832e0990 ^ 0x19ae20080021261) & 0x19aebe49e73f3eb;
  _DAT_1832e0af8 = _DAT_1832e0620 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0858 = (_DAT_1832e0858 ^ uVar1) - 2 ^ 0x856ffcbebe042552;
  _DAT_1832e0ce8 = (_DAT_1832e0ce8 * 0x685950da2bdb1a0b ^ _DAT_1832e0858) + uVar1;
  _DAT_1832e08d0 = _DAT_1832e0ce8 ^ _DAT_1832e0858;
  _DAT_1832e0900 = 0xfffffffffffffffe;
  uVar1 = (~_DAT_1832e0570 + 0xb65093ac13a84659) *
          ((_DAT_1832e0cb0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e0cb0 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832e0c88) + (uVar1 & _DAT_1832e0c88);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0c90 = func_0x00018bf747d0((uVar1 | 0xb65093ac978a657d) + (uVar1 & 0xb65093ac978a657d));
  _DAT_1832e07a8 =
       (_DAT_1832e07a8 ^ _DAT_1832e0c90 ^ 0xb65093ac13a84658) + 0x49af6c53ec57b9a8 ^
       0x1a7a7fbc0210959a;
  _DAT_1832e09b8 =
       (_DAT_1832e09b8 * -0x325fd4d15d19313b ^ _DAT_1832e07a8) +
       (_DAT_1832e0c90 ^ 0xb65093ac13a84658);
  _DAT_1832e0ae0 = _DAT_1832e09b8 ^ _DAT_1832e07a8;
  _DAT_1832e0870 = 0x49af6c53ec57b9a8;
  _DAT_1832e0cc0 = func_0x00018bf747d0(_DAT_1832e0670 ^ 0xd38a655780a453d0);
  uVar1 = _DAT_1832e0cc0 ^ 0x49af6c53ec57b9a6;
  _DAT_1832e0608 = _DAT_1832e0978 ^ uVar1 ^ 0xb65093ac13a84656;
  _DAT_1832e08a0 = (_DAT_1832e08a0 ^ uVar1) + 0xb65093ac13a84656 ^ 0x31f03348c7d6f48b;
  _DAT_1832e09a8 = (_DAT_1832e09a8 * -0x6fd368bf17704f2f ^ _DAT_1832e08a0) + uVar1;
  _DAT_1832e0960 = _DAT_1832e09a8 ^ _DAT_1832e08a0;
  _DAT_1832e06b8 = 0xb65093ac13a84656;
  _DAT_1832e0800 = func_0x00018bf747d0(_DAT_1832e0ac0 ^ 0xbb5402e94476dd57);
  uVar1 = (_DAT_1832e0800 ^ 0xa937280ab07c4e70) << 2 | (_DAT_1832e0800 ^ 0xa937280ab07c4e70) >> 0x3e
  ;
  _DAT_1832e05f0 = _DAT_1832e0c48 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0960 = (_DAT_1832e0960 ^ uVar1) - 2 ^ 0xbc18787e0df3bbcb;
  _DAT_1832e0880 = (_DAT_1832e0880 * 0x6e7c6e960a8e767 ^ _DAT_1832e0960) + uVar1;
  _DAT_1832e0b18 = _DAT_1832e0880 ^ _DAT_1832e0960;
  _DAT_1832e0bd0 = 0xfffffffffffffffe;
  uVar1 = (~_DAT_1832e0758 + 0xf691fc90fbe833b2) *
          ((_DAT_1832e0548 ^ 0xe3dff937ebcfbcde) + (_DAT_1832e0548 & 0x63dff937ebcfbcde) * 2);
  uVar1 = (uVar1 | _DAT_1832e07f8) + (uVar1 & _DAT_1832e07f8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e09e0 = func_0x00018bf747d0((uVar1 | 0x154e05a710278f6f) + (uVar1 & 0x154e05a710278f6f));
  uVar1 = _DAT_1832e09e0 & 0xffffffffff;
  _DAT_1832e08c8 = _DAT_1832e0730 ^ uVar1 ^ 0xda71f5c86bd5d3ac;
  _DAT_1832e0c88 = (_DAT_1832e0c88 ^ uVar1) + 0xda71f5c86bd5d3ac ^ 0x12f749682b413f75;
  _DAT_1832e0758 = (_DAT_1832e0758 * -0x133b5730e779bf5f ^ _DAT_1832e0c88) + uVar1;
  _DAT_1832e07a0 = _DAT_1832e0758 ^ _DAT_1832e0c88;
  _DAT_1832e0a58 = 0xda71f5c86bd5d3ac;
  uVar1 = (~_DAT_1832e08e8 + 0xf691fc90fbe833b2) *
          ((_DAT_1832e09e8 ^ 0xe3dff937ebcfbcde) + (_DAT_1832e09e8 & 0x63dff937ebcfbcde) * 2);
  uVar1 = (uVar1 | _DAT_1832e0ba0) + (uVar1 & _DAT_1832e0ba0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0578 = func_0x00018bf747d0((uVar1 | 0x154e05a710278f6f) + (uVar1 & 0x154e05a710278f6f));
  _DAT_1832e0528 = (_DAT_1832e0528 ^ _DAT_1832e0aa8) + 0x154e05a79405ac4a ^ 0x582828dec07e6657;
  _DAT_1832e0530 = (_DAT_1832e0530 * 0x1092dc878600c8cd ^ _DAT_1832e0528) + _DAT_1832e0aa8;
  _DAT_1832e0c80 = _DAT_1832e0530 ^ _DAT_1832e0528;
  _DAT_1832e0b60 = 0x154e05a79405ac4a;
  _DAT_1832e0c80 = func_0x00018bf747d0(_DAT_1832e0918 + 0x647ece102b051eec ^ 0x4d);
  uVar1 = (_DAT_1832e0c80 ^ 0xf7dffdb7ffedbffb) << 0x29 |
          (_DAT_1832e0c80 ^ 0xf7dffdb7ffedbffb) >> 0x17;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar1;
  _DAT_1832e0930 = (_DAT_1832e0930 ^ uVar1) + 0xe291f8106be813b1 ^ 0xa3a44231c96add8c;
  _DAT_1832e0a88 = (_DAT_1832e0a88 * 0x6a496df43eb6a623 ^ _DAT_1832e0930) + uVar1;
  _DAT_1832e0a80 = _DAT_1832e0a88 ^ _DAT_1832e0930;
  _DAT_1832e0888 = 0xe291f8106be813b1;
  uVar1 = (_DAT_1832e0968 ^ _DAT_181d7a380) + _DAT_1832e0aa8 + 0x154e05a710278f6f;
  uVar2 = (_DAT_1832e0aa8 ^ _UNK_181d7a388) + _DAT_1832e0968 + 0xc523f020d7d02762;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0968 ^ _DAT_181d7a380;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0aa8 ^ _UNK_181d7a388;
  _DAT_1832e0830 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0968 + 0xc523f020d7d02762) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0aa8 + 0x154e05a710278f6f));
  uVar1 = (_DAT_1832e0830 ^ 0x3f5a7d7d5af6a) & 0x3ffffffffffff;
  _DAT_1832e08a8 = _DAT_1832e05c8 ^ uVar1 ^ 0xda71f5c86bd5d3ac;
  _DAT_1832e0520 = (_DAT_1832e0520 ^ uVar1) + 0xda71f5c86bd5d3ac ^ 0x14154e7c5b6277e9;
  _DAT_1832e05d0 = (_DAT_1832e05d0 * -0x7dbdefe9e7a9abf3 ^ _DAT_1832e0520) + uVar1;
  _DAT_1832e0ca8 = _DAT_1832e05d0 ^ _DAT_1832e0520;
  _DAT_1832e0860 = 0xda71f5c86bd5d3ac;
  uVar1 = (~_DAT_1832e09d0 + 0xda71f5c86bd5d3ad) *
          ((_DAT_1832e0680 ^ 0xda71f5c8eff7f089) + (_DAT_1832e0680 & 0x5a71f5c8eff7f089) * 2);
  uVar1 = (uVar1 | _DAT_1832e07b8) + (uVar1 & _DAT_1832e07b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e09e0 = func_0x00018bf747d0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_1832e0c60 = _DAT_1832e0c60 ^ _DAT_1832e09e0 ^ 0xbf0c5a72d0273898;
  _DAT_1832e06e8 = (_DAT_1832e06e8 * 0x6d151dfbbd029ce9 ^ _DAT_1832e0c60) + _DAT_1832e09e0;
  _DAT_1832e0ca8 = _DAT_1832e06e8 ^ _DAT_1832e0c60;
  _DAT_1832e0b30 = 0;
  uVar1 = (_DAT_1832e0bc8 ^ 0xffffffff7bdddcdb) + (_DAT_1832e0920 - 0x84222325);
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0bc8 ^ 0xffffffff7bdddcdb;
  uVar2 = ((_DAT_1832e0920 + _DAT_1832e0bc8) * 0x2000 | _DAT_1832e0920 + _DAT_1832e0bc8 >> 0x33) ^
          _DAT_1832e0920;
  _DAT_1832e0bd0 = _DAT_1832e09e0;
  _DAT_1832e0ab8 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1832e0bc8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0920 - 0x84222325));
  uVar1 = (_DAT_1832e0ab8 ^ 0xfffffffffffffffe) * 0x23660c92653fc763;
  _DAT_1832e05c8 = _DAT_1832e0cf8 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0b50 = (_DAT_1832e0b50 ^ uVar1) - 2 ^ 0x18c7a3d947fce60b;
  _DAT_1832e09f0 = (_DAT_1832e09f0 * 0x325498e176466905 ^ _DAT_1832e0b50) + uVar1;
  _DAT_1832e0cf8 = _DAT_1832e09f0 ^ _DAT_1832e0b50;
  _DAT_1832e0bf8 = 0xfffffffffffffffe;
  uVar1 = (_DAT_1832e0690 ^ _DAT_181d7a390) + _DAT_1832e0b28 + 0xe3dff937ebcfbcde;
  uVar2 = (_DAT_1832e0b28 ^ _UNK_181d7a398) + (_DAT_1832e0690 - 1);
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0690 ^ _DAT_181d7a390;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0b28 ^ _UNK_181d7a398;
  _DAT_1832e08f0 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0690 - 1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0b28 + 0xe3dff937ebcfbcde));
  _DAT_1832e0ad8 = (_DAT_1832e0ad8 ^ _DAT_1832e0908) + 0x1c2006c890126004 ^ 0x94b273ea9c62fb76;
  _DAT_1832e0608 = (_DAT_1832e0608 * 0x3a96336f747c6f01 ^ _DAT_1832e0ad8) + _DAT_1832e0908;
  _DAT_1832e0908 = _DAT_1832e0608 ^ _DAT_1832e0ad8;
  _DAT_1832e07c0 = _DAT_1832e0610 ^ 0x1c2006c890126004;
  _DAT_1832e0710 = 0x1c2006c890126004;
  _DAT_1832e0cf0 = func_0x00018bf747d0(_DAT_1832e0650 ^ 0x702444f8ba204310);
  _DAT_1832e0808 = _DAT_1832e0808 ^ _DAT_1832e0cf0 & 0xe3dff9376fed9ffb ^ 0x77f101a15fe0c54c;
  _DAT_1832e0630 =
       (_DAT_1832e0630 * 0x668c73da5e7f184f ^ _DAT_1832e0808) +
       (_DAT_1832e0cf0 & 0xe3dff9376fed9ffb);
  _DAT_1832e08e8 = _DAT_1832e0630 ^ _DAT_1832e0808;
  _DAT_1832e0aa8 = 0;
  _DAT_1832e0858 = func_0x00018bf747d0(_DAT_1832e09a0 ^ 0x63dbf28aa8a5cda2);
  _DAT_1832e0638 = _DAT_1832e0be8 ^ _DAT_1832e0858 ^ 0xfffffffffffffffe;
  _DAT_1832e0a78 = (_DAT_1832e0a78 ^ _DAT_1832e0858) - 2 ^ 0x9090284a6a6b71ad;
  _DAT_1832e0aa8 = (_DAT_1832e0aa8 * 0x4bd3d2faa82b2019 ^ _DAT_1832e0a78) + _DAT_1832e0858;
  _DAT_1832e0b78 = _DAT_1832e0aa8 ^ _DAT_1832e0a78;
  _DAT_1832e0650 = 0xfffffffffffffffe;
  uVar1 = ((_DAT_1832e09a0 ^ 0xffffffff7bdddcdb) + (_DAT_1832e09a0 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_1832e0b28;
  uVar1 = (uVar1 | _DAT_1832e05b8) + (uVar1 & _DAT_1832e05b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e09b8 = func_0x00018bf747d0((uVar1 | 0xffffffff7bdddcdb) + (uVar1 & 0xffffffff7bdddcdb));
  uVar1 = _DAT_1832e09b8 & 0x7fffffffffffffff;
  _DAT_1832e0620 = _DAT_1832e0a58 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0ac0 = (_DAT_1832e0ac0 ^ uVar1) - 2 ^ 0xedeb21fc5207af77;
  _DAT_1832e08e0 = (_DAT_1832e08e0 * 0xb5742b04874b623 ^ _DAT_1832e0ac0) + uVar1;
  _DAT_1832e0a28 = _DAT_1832e08e0 ^ _DAT_1832e0ac0;
  _DAT_1832e0510 = 0xfffffffffffffffe;
  *(longlong *)(unaff_RBP + 0xa0) = unaff_R14 + -2;
  *(longlong *)(unaff_RBP + 0x60) = unaff_RBP + -0x52 + unaff_R14;
  *(undefined1 *)(unaff_RBP + -0x52 + unaff_R14) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  _DAT_1832e0858 = func_0x00018bf747d0(_DAT_1832e0b90 ^ 0x7615d4b1b6138a01);
  _DAT_1832e0b08 = (_DAT_1832e0b08 ^ _DAT_1832e0858) + 0xf32d57fe56ff7ffb ^ 0x67b1035c7d17816e;
  _DAT_1832e0958 = (_DAT_1832e0958 * 0x47d2e358b5ad62db ^ _DAT_1832e0b08) + _DAT_1832e0858;
  _DAT_1832e0540 = _DAT_1832e0958 ^ _DAT_1832e0b08;
  _DAT_1832e06d0 = 0xf32d57fe56ff7ffb;
  uVar1 = (~_DAT_1832e0a98 + 0xea1d7caec02b533) *
          ((_DAT_1832e0c90 ^ 0x3a4a0ee42a3d7db6) + (_DAT_1832e0c90 & 0x3a4a0ee42a3d7db6) * 2);
  uVar1 = (uVar1 | _DAT_1832e0ab8) + (uVar1 & _DAT_1832e0ab8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0800 = func_0x00018bf747d0((uVar1 | 0x34ebd92ec63fc884) + (uVar1 & 0x34ebd92ec63fc884));
  uVar1 = _DAT_1832e0800 - (_DAT_1832e0800 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1832e0800;
  uVar1 = uVar2 >> 1 | uVar2;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar2;
  uVar1 = uVar2 << 1 | (ulonglong)((longlong)uVar2 < 0);
  _DAT_1832e0ca8 = (_DAT_1832e0ca8 ^ uVar1) + 0x34ebd92e421deba1 ^ 0x66787864e625312b;
  _DAT_1832e0950 = (_DAT_1832e0950 * 0x60a12a3ecfd85ccd ^ _DAT_1832e0ca8) + uVar1;
  _DAT_1832e0b80 = _DAT_1832e0950 ^ _DAT_1832e0ca8;
  _DAT_1832e0670 = 0x34ebd92e421deba1;
  uVar1 = (_DAT_1832e0580 ^ _DAT_181d7a3a0) + _DAT_1832e0548 + 0x84222325;
  uVar2 = (_DAT_1832e0548 ^ _UNK_181d7a3a8) + _DAT_1832e0580 + 0x7facbe2bd661f105;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0580 ^ _DAT_181d7a3a0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0548 ^ _UNK_181d7a3a8;
  _DAT_1832e09c8 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0580 + 0x7facbe2bd661f105) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0548 + 0x84222325));
  _DAT_1832e09d8 =
       (_DAT_1832e09d8 ^ _DAT_1832e09c8 & 0x3fffff000000) + 0x805341d4299e0efb ^ 0x837309145aa668da;
  _DAT_1832e0638 =
       (_DAT_1832e0638 * 0x6270fdb7b0afa19b ^ _DAT_1832e09d8) + (_DAT_1832e09c8 & 0x3fffff000000);
  _DAT_1832e0b68 = _DAT_1832e0638 ^ _DAT_1832e09d8;
  _DAT_1832e0510 = 0x805341d4299e0efb;
  uVar1 = (~_DAT_1832e05b0 + 0x7facbe2bd661f106) *
          ((_DAT_1832e05c0 ^ 0x84222330) + (ulonglong)((uint)_DAT_1832e05c0 & 0x84222330) * 2);
  uVar1 = (uVar1 | _DAT_1832e09d8) + (uVar1 & _DAT_1832e09d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0c50 = func_0x00018bf747d0((uVar1 | 0x7facbe2b5243d235) + (uVar1 & 0x7facbe2b5243d235));
  uVar1 = (_DAT_1832e0c50 ^ 0x792b99989608c000) & 0x7fffffffffffe000;
  _DAT_1832e0788 = _DAT_1832e09b8 ^ uVar1 ^ 0x7facbe2bd661f11a;
  _DAT_1832e0560 = (_DAT_1832e0560 ^ uVar1) + 0x7facbe2bd661f11a ^ 0x35627c1b65a0d946;
  _DAT_1832e0610 = (_DAT_1832e0610 * -0x2da7d755fe6eaf59 ^ _DAT_1832e0560) + uVar1;
  _DAT_1832e0638 = _DAT_1832e0610 ^ _DAT_1832e0560;
  _DAT_1832e0c60 = 0x7facbe2bd661f11a;
  _DAT_1832e0a80 = func_0x00018bf747d0(_DAT_1832e0860 ^ 0x2d335c9444d73457);
  uVar1 = _DAT_1832e0a80 ^ 0xfffffffffffffffb;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (ulonglong)
          ((uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          (uint)uVar1) << 0x2f | uVar1 >> 0x11;
  _DAT_1832e0550 = _DAT_1832e0b28 ^ uVar1 ^ 0x15;
  _DAT_1832e06d0 = (_DAT_1832e06d0 ^ uVar1) + 0x15 ^ 0x15d182524c5fc81;
  _DAT_1832e0870 = (_DAT_1832e0870 * 0x392838894489cec7 ^ _DAT_1832e06d0) + uVar1;
  _DAT_1832e06a0 = _DAT_1832e0870 ^ _DAT_1832e06d0;
  _DAT_1832e07e0 = 0x15;
  uVar1 = (_DAT_1832e06b8 ^ _DAT_181d7a3b0) + _DAT_1832e0870 + 0x84222325;
  uVar2 = (_DAT_1832e0870 ^ _UNK_181d7a3b8) + _DAT_1832e06b8 + 0x4402bb95c477659c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e06b8 ^ _DAT_181d7a3b0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0870 ^ _UNK_181d7a3b8;
  _DAT_1832e0630 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e06b8 + 0x4402bb95c477659c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0870 + 0x84222325));
  _DAT_1832e0810 =
       (_DAT_1832e0810 ^ _DAT_1832e0630 ^ 0x4402bb95c477659c) + 0xbbfd446a3b889a64 ^
       0x7586dd598519b70a;
  _DAT_1832e0618 =
       (_DAT_1832e0618 * 0x56bf81123bf3dcbb ^ _DAT_1832e0810) +
       (_DAT_1832e0630 ^ 0x4402bb95c477659c);
  _DAT_1832e0838 = _DAT_1832e0618 ^ _DAT_1832e0810;
  _DAT_1832e0a18 = -0x4402bb95c477659c;
  uVar1 = (~_DAT_1832e0958 + 0x4402bb95c477659d) *
          ((_DAT_1832e0898 ^ 0x84222330) + (ulonglong)((uint)_DAT_1832e0898 & 0x84222330) * 2);
  uVar1 = (uVar1 | _DAT_1832e07c8) + (uVar1 & _DAT_1832e07c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0c38 = func_0x00018bf747d0((uVar1 | 0x4402bb95405546ac) + (uVar1 & 0x4402bb95405546ac));
  uVar1 = _DAT_1832e0c38 * 0x63f3a1e8cab33b33;
  _DAT_1832e0b48 = _DAT_1832e0a28 ^ uVar1 ^ 0x4402bb95c47765b1;
  _DAT_1832e0578 = (_DAT_1832e0578 ^ uVar1) + 0x4402bb95c47765b1 ^ 0x4be0828ed0557812;
  _DAT_1832e0628 = (_DAT_1832e0628 * -0x2ff8174f8f58776b ^ _DAT_1832e0578) + uVar1;
  _DAT_1832e05c8 = _DAT_1832e0628 ^ _DAT_1832e0578;
  _DAT_1832e07a0 = 0x4402bb95c47765b1;
  uVar1 = (_DAT_1832e0580 ^ _DAT_181d7a3c0) + _DAT_1832e06e0 + 0x4402bb9540554694;
  uVar2 = (_DAT_1832e06e0 ^ _UNK_181d7a3c8) + _DAT_1832e0580 + 0xbbfd446a3b889a64;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0580 ^ _DAT_181d7a3c0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e06e0 ^ _UNK_181d7a3c8;
  _DAT_1832e0898 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0580 + 0xbbfd446a3b889a64) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e06e0 + 0x4402bb9540554694));
  uVar1 = _DAT_1832e0898 * -0x46266b1a32bedfbd;
  _DAT_1832e08f0 = _DAT_1832e08b0 ^ uVar1 ^ 0x15;
  _DAT_1832e0cd0 = (_DAT_1832e0cd0 ^ uVar1) + 0x15 ^ 0xfa0bbfa6114231df;
  _DAT_1832e09c0 = (_DAT_1832e09c0 * 0x491193aaf70847c7 ^ _DAT_1832e0cd0) + uVar1;
  _DAT_1832e0530 = _DAT_1832e09c0 ^ _DAT_1832e0cd0;
  _DAT_1832e0798 = 0x15;
  uVar1 = (~_DAT_1832e08f8 + 0x96fee7d7d4b0f8e7) *
          ((_DAT_1832e0930 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e0930 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832e0b50) + (uVar1 & _DAT_1832e0b50);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0ae0 = func_0x00018bf747d0((uVar1 | 0x96fee7d75092dbc3) + (uVar1 & 0x96fee7d75092dbc3));
  _DAT_1832e0c68 = _DAT_1832e0c68 + 0x690118282b4f071a ^ 0xc01472aa83fdd382;
  _DAT_1832e0b00 = _DAT_1832e0b38 * -0x20ccce18e4893a81;
  _DAT_1832e0b38 = _DAT_1832e0b00 ^ _DAT_1832e0c68;
  _DAT_1832e0a48 = _DAT_1832e0ae8 ^ 0x690118282b4f071a;
  _DAT_1832e0a60 = 0x690118282b4f071a;
  uVar1 = (~_DAT_1832e0530 + 0x96fee7d7d4b0f8e7) *
          ((_DAT_1832e05c8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1832e05c8 & 0x84222330) * 2);
  uVar1 = (uVar1 | _DAT_1832e0860) + (uVar1 & _DAT_1832e0860);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0860 = func_0x00018bf747d0((uVar1 | 0x96fee7d75092dbd6) + (uVar1 & 0x96fee7d75092dbd6));
  uVar1 = (_DAT_1832e0860 ^ 0xfee7d7d4b0f8e6) & 0xffffffffffffff;
  _DAT_1832e06c0 = _DAT_1832e0af0 ^ uVar1 ^ 0x96fee7d7d4b0f8fb;
  _DAT_1832e09d8 = (_DAT_1832e09d8 ^ uVar1) + 0x96fee7d7d4b0f8fb ^ 0x68e699a04975369e;
  _DAT_1832e0678 = (_DAT_1832e0678 * 0x71fb09225c45dcd5 ^ _DAT_1832e09d8) + uVar1;
  _DAT_1832e0730 = _DAT_1832e0678 ^ _DAT_1832e09d8;
  _DAT_1832e0720 = 0x96fee7d7d4b0f8fb;
  uVar1 = (_DAT_1832e0918 ^ _DAT_181d7a3d0) + _DAT_1832e09a8 + 0x96fee7d75092dbde;
  uVar2 = (_DAT_1832e09a8 ^ _UNK_181d7a3d8) + _DAT_1832e0918 + 0x690118282b4f071a;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0918 ^ _DAT_181d7a3d0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e09a8 ^ _UNK_181d7a3d8;
  _DAT_1832e0b30 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0918 + 0x690118282b4f071a) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e09a8 + 0x96fee7d75092dbde));
  uVar1 = _DAT_1832e0b30 & 0x3fffffffff ^ 0x690118282b4f071a;
  _DAT_1832e0af0 = _DAT_1832e0650 ^ uVar1 ^ 0x15;
  _DAT_1832e0580 = (_DAT_1832e0580 ^ uVar1) + 0x15 ^ 0xed38a56d1404d396;
  _DAT_1832e0c48 = (_DAT_1832e0c48 * -0x31b3f2204576ced3 ^ _DAT_1832e0580) + uVar1 ^ _DAT_1832e0580;
  _DAT_1832e0550 = 0x15;
  uVar1 = (~_DAT_1832e06c0 + 0x34ebd92e421deba2) *
          ((_DAT_1832e08d8 ^ 0xf32d57fed2dd5cde) + (_DAT_1832e08d8 & 0x732d57fed2dd5cde) * 2);
  uVar1 = (uVar1 | _DAT_1832e0640) + (uVar1 & _DAT_1832e0640);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0570 = func_0x00018bf747d0((uVar1 | 0xc7c68ed090c0b77f) + (uVar1 & 0xc7c68ed090c0b77f));
  uVar1 = (_DAT_1832e0570 ^ 0xdb7699e5db) & 0xffffffffff ^ 0xf32d57fe56ff7ffb;
  _DAT_1832e0840 = _DAT_1832e0a90 ^ uVar1 ^ 0x2819312c991d6b9c;
  _DAT_1832e0b60 = (_DAT_1832e0b60 ^ uVar1) + 0x2819312c991d6b9c ^ 0x6d0c763c5b651738;
  _DAT_1832e0850 = (_DAT_1832e0850 * -0x5521381e3ed3254d ^ _DAT_1832e0b60) + uVar1;
  _DAT_1832e0c38 = _DAT_1832e0850 ^ _DAT_1832e0b60;
  _DAT_1832e07b8 = _DAT_1832e0a08 ^ 0x2819312c991d6b9c;
  _DAT_1832e0928 = 0x2819312c991d6b9c;
  _DAT_1832e0850 = func_0x00018bf747d0(_DAT_1832e0a90 ^ uVar1 ^ 0x757775cf763d4e1);
  _DAT_1832e05b8 = (_DAT_1832e05b8 ^ _DAT_1832e0850) + 0xc7c68ed014e2945a ^ 0x8ebf9af02ee4b671;
  _DAT_1832e0ab8 = (_DAT_1832e0ab8 * 0x7cd8d3b828fef1f7 ^ _DAT_1832e05b8) + _DAT_1832e0850;
  _DAT_1832e05e0 = _DAT_1832e0ab8 ^ _DAT_1832e05b8;
  _DAT_1832e0b18 = 0xc7c68ed014e2945a;
  uVar1 = (~_DAT_1832e05c8 + 0x34ebd92e421deba2) *
          ((_DAT_1832e08c0 ^ 0xf32d57fed2dd5cde) + (_DAT_1832e08c0 & 0x732d57fed2dd5cde) * 2);
  uVar1 = (uVar1 | _DAT_1832e0a38) + (uVar1 & _DAT_1832e0a38);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0518 = func_0x00018bf747d0((uVar1 | 0xc7c68ed090c0b77f) + (uVar1 & 0xc7c68ed090c0b77f));
  uVar1 = (_DAT_1832e0518 ^ 0xc6564cdb7699e5db) * -0x20e86b730d3e9bc9 ^ 0x34ebd92e421deba1;
  _DAT_1832e07c8 = (_DAT_1832e07c8 ^ uVar1) + 0x3029512e421d6ba1 ^ 0x38c4fa9231deb9d4;
  _DAT_1832e0ae8 = (_DAT_1832e0ae8 * -0x4008c92466363cf5 ^ _DAT_1832e07c8) + uVar1;
  _DAT_1832e0828 = _DAT_1832e0ae8 ^ _DAT_1832e07c8;
  _DAT_1832e06a8 = 0x3029512e421d6ba1;
  uVar1 = (_DAT_1832e0890 ^ 0x84222330) + _DAT_1832e06d8 + 0x84222330;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0890 ^ 0x84222330;
  uVar2 = ((_DAT_1832e06d8 + _DAT_1832e0890) * 0x2000 | _DAT_1832e06d8 + _DAT_1832e0890 >> 0x33) ^
          _DAT_1832e06d8;
  _DAT_1832e07a0 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1832e0890 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e06d8 + 0x84222330));
  uVar1 = (_DAT_1832e07a0 ^ 0x15) * -0x5aec65b3bcca9ac7;
  _DAT_1832e0ad0 = _DAT_1832e0af0 ^ uVar1 ^ 0x15;
  _DAT_1832e0758 = (_DAT_1832e0758 ^ uVar1) + 0x15 ^ 0xbc4ad8a88466126b;
  _DAT_1832e0b60 = (_DAT_1832e0b60 * 0x46920acad74e26ab ^ _DAT_1832e0758) + uVar1;
  _DAT_1832e0520 = _DAT_1832e0b60 ^ _DAT_1832e0758;
  _DAT_1832e0c38 = 0x15;
  _DAT_1832e0718 = func_0x00018bf747d0(_DAT_1832e0968 ^ 0xdd5c45245af8cd1c);
  uVar1 = ~_DAT_1832e0718;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar1;
  _DAT_1832e0658 = _DAT_1832e0658 ^ uVar1 ^ 0xf3c47bef15cb1f19;
  _DAT_1832e0578 = (_DAT_1832e0578 * 0x1e941b1af334759b ^ _DAT_1832e0658) + uVar1;
  _DAT_1832e0608 = _DAT_1832e0578 ^ _DAT_1832e0658;
  _DAT_1832e0c30 = 0;
  uVar1 = (_DAT_1832e0c08 ^ 0x84222330) + _DAT_1832e0b28 + 0x84222330;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0c08 ^ 0x84222330;
  uVar2 = ((_DAT_1832e0b28 + _DAT_1832e0c08) * 0x2000 | _DAT_1832e0b28 + _DAT_1832e0c08 >> 0x33) ^
          _DAT_1832e0b28;
  _DAT_1832e0638 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1832e0c08 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0b28 + 0x84222330));
  uVar1 = (ulonglong)((uint)_DAT_1832e0638 ^ 0x15) << 0x24 | _DAT_1832e0638 >> 0x1c;
  _DAT_1832e0738 = _DAT_1832e0770 ^ uVar1 ^ 0x15;
  _DAT_1832e0538 = (_DAT_1832e0538 ^ uVar1) + 0x15 ^ 0x11684ec7abfe8536;
  _DAT_1832e0a18 = (_DAT_1832e0a18 * 0x55f365843e73afa5 ^ _DAT_1832e0538) + uVar1;
  _DAT_1832e0b40 = _DAT_1832e0a18 ^ _DAT_1832e0538;
  _DAT_1832e0a28 = 0x15;
  _DAT_1832e0c00 = func_0x00018bf747d0(_DAT_1832e0ce8 + 0xffdcff7be2ffe1ff ^ 0x9f);
  uVar1 = _DAT_1832e0c00 << 2 | _DAT_1832e0c00 >> 0x3e;
  _DAT_1832e0a30 = _DAT_1832e0a30 ^ uVar1 ^ 0xee7277c121906da;
  _DAT_1832e0648 = (_DAT_1832e0648 * 0x563df2ec91992309 ^ _DAT_1832e0a30) + uVar1;
  _DAT_1832e0710 = _DAT_1832e0648 ^ _DAT_1832e0a30;
  _DAT_1832e0a50 = 0;
  _DAT_1832e0760 = func_0x00018bf747d0(_DAT_1832e0ba8 + 0x21007c100021ffU ^ 0x12);
  uVar1 = _DAT_1832e0760 ^ 0x15;
  _DAT_1832e0600 = _DAT_1832e0748 ^ uVar1 ^ 0x15;
  _DAT_1832e0888 = (_DAT_1832e0888 ^ uVar1) + 0x15 ^ 0x3a11be80317855ea;
  _DAT_1832e0ca8 = (_DAT_1832e0ca8 * -0x384222389bdf0a47 ^ _DAT_1832e0888) + uVar1;
  _DAT_1832e06d8 = _DAT_1832e0ca8 ^ _DAT_1832e0888;
  _DAT_1832e0910 = 0x15;
  switch(*(longlong *)(unaff_RBP + 0xa0) == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bf5a63b (image 18bf5a63b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf5a63b(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  uint uVar6;
  undefined1 unaff_XMM8 [16];
  uint unaff_XMM10_Da;
  uint uVar7;
  uint uVar8;
  
  auVar4 = pshufb(in_XMM0,unaff_XMM8);
  uVar3 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar3 + _DAT_1832e0890;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_1832e0a78 ^ uVar3;
  }
  _DAT_1832e0cd0 = func_0x00018bf747d0(in_XMM0[5] ^ uVar2);
  uVar7 = unaff_ESI & unaff_XMM10_Da;
  uVar8 = unaff_ESI ^ unaff_XMM10_Da;
  uVar6 = unaff_ESI ^ (uint)DAT_18001a710;
  lVar5 = ((ulonglong)unaff_ESI * (ulonglong)_DAT_181d79b60 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_181d79b50;
  uVar2 = _DAT_1832e0cd0 & 0x1fffffffffff;
  uVar3 = ((((ulonglong)uVar6 * (ulonglong)_DAT_181d79b30 + _DAT_181d79b40 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_181d79b20 + lVar5 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_181d79b10 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_181d79b00 +
           ((ulonglong)(unaff_ESI | unaff_XMM10_Da) * (ulonglong)_DAT_181d79af0 << 0x20) +
           (ulonglong)(unaff_ESI | unaff_XMM10_Da) * (ulonglong)_DAT_181d79ae0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_181d79ad0 << 0x20 |
           (ulonglong)uVar7 * (ulonglong)_DAT_181d79ac0) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_181d79ab0 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_181d79aa0) -
          (((ulonglong)uVar6 * (ulonglong)_DAT_181d79be0 + _DAT_181d79bf0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_181d79bd0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_181d79bc0 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_181d79bb0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_181d79ba0 << 0x20 |
           (ulonglong)uVar7 * (ulonglong)_DAT_181d79b90) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_181d79b80 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_181d79b70 + lVar5)) + 0x1024df15351ce44a;
  _DAT_1832e0ac0 = _DAT_1832e0540 ^ uVar2 ^ uVar3;
  _DAT_1832e0550 = (_DAT_1832e0550 ^ uVar2) + uVar3 ^ 0xe69f53cf0fb4edce;
  _DAT_1832e0b40 = (_DAT_1832e0b40 * -0x6699a7e685973fd7 ^ _DAT_1832e0550) + uVar2;
  _DAT_1832e07d0 = _DAT_1832e0b40 ^ _DAT_1832e0550;
  _DAT_1832e0640 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar3;
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



// ===== continuation @ rva bf536f0 (image 18bf536f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf536f0(void)

{
  int iVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_R14D;
  
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x98);
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_R14D;
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bf523d3 (image 18bf523d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf523d3(void)

{
  undefined8 uVar1;
  longlong *unaff_RBX;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  undefined8 unaff_RDI;
  
  unaff_RBP[0x13] = unaff_RDI;
  uVar1 = (**(code **)(*unaff_RBX + 0x588))();
  *unaff_RBP = uVar1;
  unaff_RBP[-1] = uVar1;
  unaff_RBP[0xe] = uVar1;
  *(undefined4 *)(unaff_RBP + 0xe) = 0;
  *(int *)(unaff_RBP + 0xf) = unaff_ESI;
  *(int *)((longlong)unaff_RBP + 0x2c) = unaff_ESI;
  switch(0 < unaff_ESI) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bf48718 (image 18bf48718) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf4875d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf48718(void)

{
  undefined8 uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x30) = uVar1;
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bf4d339 (image 18bf4d339) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf4d387 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf4d339(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong lVar1;
  
  FUN_18414b520(unaff_RBP + -0x30,param_2,(unaff_RBP + -0x3b) - param_2);
  lVar1 = unaff_RBP + -0x30;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar1 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x10) + 0x70))
            (*(longlong **)(unaff_RBP + 0x10),*(undefined8 *)(unaff_RBP + 0x30),lVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bf4c0c4 (image 18bf4c0c4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf4d387 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf4c0c4(void)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x18) = 0xf;
  (**(code **)(**(longlong **)(unaff_RBP + 0x10) + 0x70))
            (*(longlong **)(unaff_RBP + 0x10),*(undefined8 *)(unaff_RBP + 0x98),unaff_RBP + -0x30);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bf4c118 (image 18bf4c118) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf4c118(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (in_RAX ^ _DAT_181d7a210) + param_1 + 0x84222329;
  uVar3 = (param_1 ^ _UNK_181d7a218) + in_RAX + 0x44;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ in_RAX ^ _DAT_181d7a210;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_1 ^ _UNK_181d7a218;
  _DAT_1832e0b60 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (in_RAX + 0x44) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (param_1 + 0x84222329));
  uVar2 = _DAT_1832e0b60 >> 1 | _DAT_1832e0b60;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1832e0b60) & 0x7fffffffffffffff;
  _DAT_1832e0790 = (_DAT_1832e0790 ^ uVar2) + 0x4c ^ 0x3468f45051117884;
  _DAT_1832e0598 = (_DAT_1832e0598 * -0xfa7c3dd236fd23 ^ _DAT_1832e0790) + uVar2;
  _DAT_1832e0950 = _DAT_1832e0598 ^ _DAT_1832e0790;
  _DAT_1832e0990 = 0x4c;
  uVar2 = (~_DAT_1832e0bf8 + 0xec) *
          ((_DAT_1832e07d8 ^ 0x84222312) + (ulonglong)((uint)_DAT_1832e07d8 & 0x84222312) * 2);
  uVar2 = (uVar2 | _DAT_1832e0768) + (uVar2 & _DAT_1832e0768);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e07e0 = func_0x00018bf747d0((uVar2 | 0x842223f9) + (ulonglong)((uint)uVar2 & 0x842223f9))
  ;
  uVar2 = _DAT_1832e07e0 << 0x1a | _DAT_1832e07e0 >> 0x26;
  _DAT_1832e0c98 = (_DAT_1832e0c98 ^ uVar2) + 0xdc ^ 0xb1e8d05a7975e5e6;
  _DAT_1832e0c38 = (_DAT_1832e0c38 * 0x401bfe14d4f3ff29 ^ _DAT_1832e0c98) + uVar2;
  _DAT_1832e0a28 = _DAT_1832e0c38 ^ _DAT_1832e0c98;
  _DAT_1832e0670 = 0xdc;
  uVar2 = (_DAT_1832e0a70 ^ _DAT_1805b4a60) + _DAT_1832e0b80 + 0x84222325;
  uVar3 = (_DAT_1832e0b80 ^ _UNK_1805b4a68) + _DAT_1832e0a70 + 0xc0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0a70 ^ _DAT_1805b4a60;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832e0b80 ^ _UNK_1805b4a68;
  _DAT_1832e0548 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0a70 + 0xc0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0b80 + 0x84222325));
  _DAT_1832e0760 = (_DAT_1832e0760 ^ _DAT_1832e0548 ^ 0xc0) - 0xc0 ^ 0xa2c7823234d45cc9;
  _DAT_1832e0750 = (_DAT_1832e0750 * -0x4916ab832adec851 ^ _DAT_1832e0760) + (_DAT_1832e0548 ^ 0xc0)
  ;
  _DAT_1832e0870 = _DAT_1832e0750 ^ _DAT_1832e0760;
  _DAT_1832e0800 = 0x40;
  uVar2 = (~_DAT_1832e09f0 + 0xc1) *
          ((_DAT_1832e0b50 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832e0b50 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_1832e0c10) + (uVar2 & _DAT_1832e0c10);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e0658 = func_0x00018bf747d0((uVar2 | 0x842223d5) + (ulonglong)((uint)uVar2 & 0x842223d5))
  ;
  _DAT_1832e0608 = _DAT_1832e06e8 ^ _DAT_1832e0658 ^ 0xf0;
  _DAT_1832e0848 = (_DAT_1832e0848 ^ _DAT_1832e0658) + 0xf0 ^ 0x9b0da5b70957e63e;
  _DAT_1832e0b68 = (_DAT_1832e0b68 * -0x3a87de7784fb64fd ^ _DAT_1832e0848) + _DAT_1832e0658;
  _DAT_1832e05e0 = _DAT_1832e0b68 ^ _DAT_1832e0848;
  _DAT_1832e0ae8 = 0xf0;
  _DAT_1832e0598 = func_0x00018bf747d0(_DAT_1832e0cb8 + 0x22ff838b0021ffU ^ 0xe9);
  uVar2 = _DAT_1832e0598 & 0xfffffffffe000000;
  _DAT_1832e0b78 = _DAT_1832e05f0 ^ uVar2 ^ 0x130;
  _DAT_1832e05a0 = (_DAT_1832e05a0 ^ uVar2) + 0x130 ^ 0x57dbf43e8aaca0d2;
  _DAT_1832e0830 = (_DAT_1832e0830 * -0x6bd7ec22539cd64d ^ _DAT_1832e05a0) + uVar2;
  _DAT_1832e0c18 = _DAT_1832e0830 ^ _DAT_1832e05a0;
  _DAT_1832e0c00 = 0x30;
  uVar2 = (_DAT_1832e0700 ^ _DAT_181c06d30) + _DAT_1832e0a38 + 0x84222325;
  uVar3 = (_DAT_1832e0a38 ^ _UNK_181c06d38) + _DAT_1832e0700 + 0x38;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0700 ^ _DAT_181c06d30;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832e0a38 ^ _UNK_181c06d38;
  _DAT_1832e0ca8 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0700 + 0x38) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0a38 + 0x84222325));
  _DAT_1832e0550 = (_DAT_1832e0550 ^ _DAT_1832e0ca8) - 0x38 ^ 0xfe85ce80e29f326d;
  _DAT_1832e0580 = (_DAT_1832e0580 * -0x3c60dffc83952f11 ^ _DAT_1832e0550) + _DAT_1832e0ca8;
  _DAT_1832e06a8 = _DAT_1832e0580 ^ _DAT_1832e0550;
  _DAT_1832e0a88 = 200;
  _DAT_1832e0500 = func_0x00018bf747d0(_DAT_1832e0960 + 0x1f00847b001dffU ^ 0x38);
  uVar2 = (ulonglong)(((uint)_DAT_1832e0500 ^ 0x28) & 0x68);
  _DAT_1832e07b0 = _DAT_1832e08e8 ^ uVar2 ^ 0x130;
  _DAT_1832e0c28 = (_DAT_1832e0c28 ^ uVar2) + 0x130 ^ 0xa035306244ce779d;
  _DAT_1832e07a8 = (_DAT_1832e07a8 * -0x184f84877664655 ^ _DAT_1832e0c28) + uVar2;
  _DAT_1832e0a30 = _DAT_1832e07a8 ^ _DAT_1832e0c28;
  _DAT_1832e07d0 = 0x30;
  _DAT_1832e0968 = func_0x00018bf747d0(_DAT_1832e0598 ^ 0x1d00849b001da5);
  uVar3 = _UNK_181d7a228;
  uVar2 = _DAT_181d7a220;
  uVar1 = _DAT_1832e0968 >> 1 | _DAT_1832e0968;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1832e0968;
  _DAT_1832e0c90 = _DAT_1832e06f0 ^ uVar1 ^ 0xe0;
  _DAT_1832e07e0 = (_DAT_1832e07e0 ^ uVar1) + 0xe0 ^ 0x44eb6ed62bc06d5f;
  _DAT_1832e0b18 = (_DAT_1832e0b18 * -0x66d8323c95e75881 ^ _DAT_1832e07e0) + uVar1;
  _DAT_1832e09a8 = _DAT_1832e0b18 ^ _DAT_1832e07e0;
  _DAT_1832e09e0 = 0xe0;
  uVar1 = (_DAT_1832e0680 ^ _DAT_181d7a220) + _DAT_1832e06f8 + 0x84222369;
  uVar4 = (_DAT_1832e06f8 ^ _UNK_181d7a228) + _DAT_1832e0680 + 0xdc;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0680 ^ _DAT_181d7a220;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e06f8 ^ _UNK_181d7a228;
  _DAT_1832e0c90 =
       func_0x00018bf747d0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832e0680 + 0xdc) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e06f8 + 0x84222369));
  uVar1 = _DAT_1832e0c90 ^ 0xdc;
  _DAT_1832e05f8 = _DAT_1832e09b0 ^ uVar1 ^ 0x128;
  _DAT_1832e0a20 = (_DAT_1832e0a20 ^ uVar1) + 0x128 ^ 0x2d0492e80b2382f1;
  _DAT_1832e0ba0 = (_DAT_1832e0ba0 * -0x7d18d7c67cd5cc81 ^ _DAT_1832e0a20) + uVar1;
  _DAT_1832e06c0 = _DAT_1832e0ba0 ^ _DAT_1832e0a20;
  _DAT_1832e06c8 = 0x28;
  uVar1 = (_DAT_1832e0758 ^ uVar2) + _DAT_1832e0638 + 0x84222369;
  uVar4 = (_DAT_1832e0638 ^ uVar3) + _DAT_1832e0758 + 0xdc;
  uVar2 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0758 ^ uVar2;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e0638 ^ uVar3;
  _DAT_1832e0928 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0758 + 0xdc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0638 + 0x84222369));
  uVar2 = _DAT_1832e0928 >> 1 | _DAT_1832e0928;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1832e0928;
  _DAT_1832e06d0 = (_DAT_1832e06d0 ^ uVar2) + 0x90 ^ 0x70c889efdf193466;
  _DAT_1832e06b0 = (_DAT_1832e06b0 * -0x3e3c3967f3dd3e0d ^ _DAT_1832e06d0) + uVar2;
  _DAT_1832e0aa8 = _DAT_1832e06b0 ^ _DAT_1832e06d0;
  _DAT_1832e0b68 = 0x90;
  _DAT_1832e0a80 = func_0x00018bf747d0(_DAT_1832e07f0 + 0x1f007c24ffddffU ^ 8);
  _DAT_1832e09f0 = _DAT_1832e09a0 ^ _DAT_1832e0a80 ^ 0x128;
  _DAT_1832e0678 = (_DAT_1832e0678 ^ _DAT_1832e0a80) + 0x128 ^ 0x745f18c58f29bc45;
  _DAT_1832e06d0 = (_DAT_1832e06d0 * -0x72fdbe9d4067713d ^ _DAT_1832e0678) + _DAT_1832e0a80;
  _DAT_1832e0b20 = _DAT_1832e06d0 ^ _DAT_1832e0678;
  _DAT_1832e0c20 = 0x28;
  uVar2 = (_DAT_1832e0cd8 ^ _DAT_180595f40) + _DAT_1832e0688 + 0x8422230d;
  uVar3 = (_DAT_1832e0688 ^ _UNK_180595f48) + _DAT_1832e0cd8 + 0x28;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0cd8 ^ _DAT_180595f40;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832e0688 ^ _UNK_180595f48;
  _DAT_1832e0bf8 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0cd8 + 0x28) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0688 + 0x8422230d));
  _DAT_1832e0638 = _DAT_1832e0638 ^ _DAT_1832e0bf8 & 0xffffffffffffffc0 ^ 0x17d424bdfd14a37c;
  _DAT_1832e0ac0 =
       (_DAT_1832e0ac0 * 0x4742d3dad4b262e7 ^ _DAT_1832e0638) +
       (_DAT_1832e0bf8 & 0xffffffffffffffc0);
  _DAT_1832e05b8 = _DAT_1832e0ac0 ^ _DAT_1832e0638;
  _DAT_1832e07e0 = 0;
  uVar2 = (~_DAT_1832e05f8 + 0x100) *
          ((_DAT_1832e0a90 ^ 0x84222369) + (ulonglong)((uint)_DAT_1832e0a90 & 0x84222369) * 2);
  uVar2 = (uVar2 | _DAT_1832e05f8) + (uVar2 & _DAT_1832e05f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e0548 = func_0x00018bf747d0((uVar2 | 0x84222396) + (ulonglong)((uint)uVar2 & 0x84222396))
  ;
  _DAT_1832e0998 =
       (_DAT_1832e0998 ^ _DAT_1832e0548 & 0x7fffffffffffffff) + 0xb3 ^ 0x7e3adb92aa45766b;
  _DAT_1832e06f0 =
       (_DAT_1832e06f0 * -0x114971a8a5b79875 ^ _DAT_1832e0998) +
       (_DAT_1832e0548 & 0x7fffffffffffffff);
  _DAT_1832e0708 = _DAT_1832e06f0 ^ _DAT_1832e0998;
  _DAT_1832e08c8 = 0xb3;
  uVar2 = (_DAT_1832e0540 ^ _DAT_181d7a230) + _DAT_1832e0aa0 + 0x84222369;
  uVar3 = (_DAT_1832e0aa0 ^ _UNK_181d7a238) + _DAT_1832e0540 + 0xb3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0540 ^ _DAT_181d7a230;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832e0aa0 ^ _UNK_181d7a238;
  _DAT_1832e0b60 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0540 + 0xb3) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0aa0 + 0x84222369));
  _DAT_1832e07a0 = _DAT_1832e07a0 ^ _DAT_1832e0b60 ^ 0x4c ^ 0xf5d7d4d8a3beecda;
  _DAT_1832e08c8 = (_DAT_1832e08c8 * -0x4b3d9311bd145a07 ^ _DAT_1832e07a0) + (_DAT_1832e0b60 ^ 0x4c)
  ;
  _DAT_1832e0be8 = _DAT_1832e08c8 ^ _DAT_1832e07a0;
  _DAT_1832e09b8 = 0;
  uVar2 = ((_DAT_1832e0b58 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832e0b58 & 0x84222315) * 2) *
          -_DAT_1832e0a40;
  uVar2 = (uVar2 | _DAT_1832e0c50) + (uVar2 & _DAT_1832e0c50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e06f0 = func_0x00018bf747d0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = ((_DAT_1832e06f0 << 0xc | _DAT_1832e06f0 >> 0x34) << 9 |
          (_DAT_1832e06f0 & 0xfffffffffffff) >> 0x2b) * -0x4d48bfe04277134d;
  _DAT_1832e05a0 = _DAT_1832e0628 ^ uVar2 ^ 0x30;
  _DAT_1832e0b70 = (_DAT_1832e0b70 ^ uVar2) + 0x30 ^ 0xdbfdc6f5b3b3e87f;
  _DAT_1832e0860 = (_DAT_1832e0860 * 0x798afa068efb530d ^ _DAT_1832e0b70) + uVar2;
  _DAT_1832e08d0 = _DAT_1832e0860 ^ _DAT_1832e0b70;
  _DAT_1832e0790 = 0x30;
  uVar2 = (_DAT_1832e06f8 ^ 0x84222315) + _DAT_1832e06f8 + 0x84222315;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e06f8 ^ 0x84222315;
  uVar3 = (_DAT_1832e06f8 << 0xe | (_DAT_1832e06f8 & 0x7fffffffffffffff) >> 0x32) ^ _DAT_1832e06f8;
  _DAT_1832e0c58 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1832e06f8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e06f8 + 0x84222315));
  uVar2 = _DAT_1832e0c58 - (_DAT_1832e0c58 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1832e0c58;
  _DAT_1832e0ca0 = _DAT_1832e0720 ^ uVar2 ^ 0x30;
  _DAT_1832e0970 = (_DAT_1832e0970 ^ uVar2) + 0x30 ^ 0x5f4f0808cecc8753;
  _DAT_1832e0510 = (_DAT_1832e0510 * 0x6b3e4f1962109197 ^ _DAT_1832e0970) + uVar2;
  _DAT_1832e06a0 = _DAT_1832e0510 ^ _DAT_1832e0970;
  _DAT_1832e0ab8 = 0x30;
  uVar3 = (ulonglong)*(byte *)(unaff_RBP + 0x98);
  uVar2 = (~_DAT_1832e0c38 + 0x31) *
          ((uVar3 ^ 0x84222325 ^ _DAT_1832e0b88) +
          (ulonglong)((uint)_DAT_1832e0b88 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_1832e0c20) + (uVar2 & _DAT_1832e0c20);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e0c30 =
       func_0x00018bf747d0((uVar3 ^ 0x84222315 | uVar2) +
                           (ulonglong)((uint)(uVar3 ^ 0x84222315) & (uint)uVar2));
  _DAT_1832e0770 = uVar3 | 0x30;
  _DAT_1832e0638 = (_DAT_1832e0638 ^ _DAT_1832e0c30) + _DAT_1832e0770 ^ 0xfed87298ab0bea5c;
  _DAT_1832e0728 = (_DAT_1832e0728 * -0x13750f41f0426263 ^ _DAT_1832e0638) + _DAT_1832e0c30;
  _DAT_1832e0b40 = _DAT_1832e0728 ^ _DAT_1832e0638;
  *(char *)(*(longlong *)(unaff_RBP + 0xa0) + -1) = (char)_DAT_1832e0770;
  switch(unaff_EDI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bf76f68 (image 18bf76f68) =====

void FUN_18bf76f68(void)

{
  return;
}



// ===== continuation @ rva bf76dbf (image 18bf76dbf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf76dbf(void)

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



// ===== continuation @ rva bf77a02 (image 18bf77a02) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18bf773f8(void)

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



// ===== continuation @ rva bf7999a (image 18bf7999a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7999a(void)

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



// ===== continuation @ rva bf79a2c (image 18bf79a2c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf79a2c(void)

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



// ===== continuation @ rva bf796ce (image 18bf796ce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf796ce(void)

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



// ===== continuation @ rva bf77c0b (image 18bf77c0b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf77c0b(void)

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



// ===== continuation @ rva bf7990a (image 18bf7990a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7990a(void)

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



// ===== continuation @ rva bf79612 (image 18bf79612) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf79612(void)

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



// ===== continuation @ rva bf77d5d (image 18bf77d5d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf77d5d(void)

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



// ===== continuation @ rva bf77855 (image 18bf77855) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf77855(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x488))();
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



// ===== continuation @ rva bf7862c (image 18bf7862c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18bf773f8(void)

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



