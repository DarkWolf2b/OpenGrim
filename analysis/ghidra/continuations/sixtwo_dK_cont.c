// ===== continuation @ rva dd51347 (image 18dd51347) =====

void FUN_18dd51347(void)

{
  return;
}



// ===== continuation @ rva dd5118d (image 18dd5118d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5118d(void)

{
  FUN_190ddfc90();
  (*_DAT_1823b1458)();
  return;
}



// ===== continuation @ rva dd51280 (image 18dd51280) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd51280(void)

{
  FUN_190dd72e0();
  (*_DAT_1823b14e8)();
  return;
}



// ===== continuation @ rva dd5134f (image 18dd5134f) =====

void FUN_18dd5134f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd511c0 (image 18dd511c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd511c0(void)

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



// ===== continuation @ rva dd51233 (image 18dd51233) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd51233(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823b14c8)();
  return;
}



// ===== continuation @ rva dd512fc (image 18dd512fc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd512fc(void)

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



// ===== continuation @ rva dd512c9 (image 18dd512c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd512c9(void)

{
  FUN_190dd9df0();
  (*_DAT_1823b1478)();
  return;
}



// ===== continuation @ rva dd51320 (image 18dd51320) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd51320(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b14d8)();
  return;
}



// ===== continuation @ rva dd511e4 (image 18dd511e4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd511e4(void)

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



// ===== continuation @ rva dd80d74 (image 18dd80d74) =====

void FUN_18dd80d74(void)

{
  return;
}



// ===== continuation @ rva dd66fcb (image 18dd66fcb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd67021 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd66fcb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dd6925f (image 18dd6925f) =====

void FUN_18dd6925f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva dd80411 (image 18dd80411) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd80411(void)

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



// ===== continuation @ rva dd794af (image 18dd794af) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd794af(undefined4 param_1,int param_2)

{
  char cVar1;
  longlong *unaff_RSI;
  int iStack0000000000000048;
  int iStack0000000000000050;
  undefined4 uStack00000000000000bc;
  int iStack00000000000000c0;
  
  iStack0000000000000050 = param_2 + 8;
  iStack0000000000000048 = param_2;
  uStack00000000000000bc = param_1;
  iStack00000000000000c0 = iStack0000000000000050;
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



// ===== continuation @ rva dd68cea (image 18dd68cea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd68cea(void)

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



// ===== continuation @ rva dd691dc (image 18dd691dc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd69214 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd691dc(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dd797c8 (image 18dd797c8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd797c8(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 unaff_XMM7_Qb;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar6 = (_DAT_183387c30 ^ _DAT_1823b8a40) + _DAT_183387dd8 + 0x667b6108;
  uVar8 = (_DAT_183387dd8 ^ _UNK_1823b8a48) + _DAT_183387c30 + 0xbb9282e;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183387c30 ^ _DAT_1823b8a40;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183387dd8 ^ _UNK_1823b8a48;
  _DAT_183387970 =
       func_0x00018dd80f50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183387c30 + 0xbb9282e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183387dd8 + 0x667b6108));
  _DAT_183387dc0 =
       (_DAT_183387dc0 ^ _DAT_183387970 & 0x7fffffffffffffff) + 0xebf96a2f ^ 0x89b4370525770e2d;
  _DAT_183387920 =
       (_DAT_183387920 * -0x77de96bc77ecc3cb ^ _DAT_183387dc0) +
       (_DAT_183387970 & 0x7fffffffffffffff);
  _DAT_183387c90 = _DAT_183387920 ^ _DAT_183387dc0;
  _DAT_183387c78 = 0xebf96a2f;
  _DAT_183387b48 = func_0x00018dd80f50(_DAT_183387d80 ^ 0xff8dffa3b1005b86);
  uVar6 = (_DAT_183387b48 ^ 0x58a2276cff48c280) << 0x29 |
          (_DAT_183387b48 ^ 0x58a2276cff48c280) >> 0x17;
  _DAT_183387b90 = (_DAT_183387b90 ^ uVar6) + 0x20feb174 ^ 0x8e0f3eb921b8ee3d;
  _DAT_183387ac0 = (_DAT_183387ac0 * -0xb89d7f69bb42c7f ^ _DAT_183387b90) + uVar6;
  _DAT_183387d08 = _DAT_183387ac0 ^ _DAT_183387b90;
  _DAT_183387c48 = 0x20feb174;
  uVar6 = (_DAT_183387d88 ^ _DAT_1823b8a50) + _DAT_183387e98 + 0x84222325;
  uVar8 = (_DAT_183387e98 ^ _UNK_1823b8a58) + _DAT_183387d88 + 0x2b52d6f8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183387d88 ^ _DAT_1823b8a50;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183387e98 ^ _UNK_1823b8a58;
  _DAT_183387d20 =
       func_0x00018dd80f50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183387d88 + 0x2b52d6f8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183387e98 + 0x84222325));
  _DAT_1833879b8 = (_DAT_1833879b8 ^ _DAT_183387d20) - 0x2b52d6f8 ^ 0x1aaf9c7366fc4f26;
  _DAT_183387bf8 = (_DAT_183387bf8 * -0x73dbcde2556f150b ^ _DAT_1833879b8) + _DAT_183387d20;
  _DAT_183387b68 = _DAT_183387bf8 ^ _DAT_1833879b8;
  _DAT_183387998 = 0xd4ad2908;
  uVar6 = (~_DAT_183387bd8 + 0x2b52d6f9) *
          ((_DAT_183387cb0 ^ 0x842223da) + (ulonglong)((uint)_DAT_183387cb0 & 0x842223da) * 2);
  uVar6 = (uVar6 | _DAT_183387cc8) + (uVar6 & _DAT_183387cc8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183387b30 = func_0x00018dd80f50((uVar6 | 0xaf70f522) + (ulonglong)((uint)uVar6 & 0xaf70f522))
  ;
  uVar6 = (ulonglong)((uint)_DAT_183387b30 & 0xc0) ^ 0xff;
  _DAT_183387940 = _DAT_183387c40 ^ uVar6 ^ 0x2b52d7f7;
  _DAT_183387b00 = (_DAT_183387b00 ^ uVar6) + 0x2b52d7f7 ^ 0x39dd2c414896efe7;
  _DAT_183387e88 = (_DAT_183387e88 * -0x1c91a539e9288447 ^ _DAT_183387b00) + uVar6;
  _DAT_183387b88 = _DAT_183387e88 ^ _DAT_183387b00;
  _DAT_183387e10 = 0x2b52d7f7;
  _DAT_183387aa8 = func_0x00018dd80f50(_DAT_183387ee8 + 0x32ff845600ccffU ^ 0x30);
  _DAT_183387d20 = _DAT_183387ba0 ^ _DAT_183387dd0 ^ 0x1000000ff;
  _DAT_183387b58 = (_DAT_183387b58 ^ _DAT_183387dd0) + 0x1000000ff ^ 0xf9bdadb0879feb1e;
  _DAT_183387c90 = (_DAT_183387c90 * -0xea68bd73e60c8f3 ^ _DAT_183387b58) + _DAT_183387dd0;
  _DAT_183387e68 = _DAT_183387c90 ^ _DAT_183387b58;
  _DAT_183387a70 = _DAT_183387a20 ^ 0x1000000ff;
  _DAT_183387bf8 = 0xff;
  uVar6 = (_DAT_183387e58 ^ _DAT_1823b8a60) + _DAT_183387a70 + 0x842223da;
  uVar8 = (_DAT_183387a70 ^ _UNK_1823b8a68) + _DAT_183387e58 + 0x1cd30640;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183387e58 ^ _DAT_1823b8a60;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183387a70 ^ _UNK_1823b8a68;
  _DAT_183387c40 =
       func_0x00018dd80f50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183387e58 + 0x1cd30640) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183387a70 + 0x842223da));
  uVar6 = _DAT_183387c40 ^ 0xff;
  _DAT_183387af0 = _DAT_183387b10 ^ uVar6 ^ 0x1cd3073f;
  _DAT_183387e40 = (_DAT_183387e40 ^ uVar6) + 0x1cd3073f ^ 0x1aeebb7d5941a251;
  _DAT_183387d78 = (_DAT_183387d78 * 0x2092dabb35e49337 ^ _DAT_183387e40) + uVar6;
  _DAT_183387a98 = _DAT_183387d78 ^ _DAT_183387e40;
  _DAT_183387988 = 0x1cd3073f;
  _DAT_183387e48 = func_0x00018dd80f50(_DAT_183387ba8 ^ 0xcb0029a9ff2c13);
  uVar6 = _DAT_183387e48 >> 1 | _DAT_183387e48;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183387e48;
  _DAT_183387c40 = _DAT_183387a28 ^ uVar6 ^ 0x1000000ff;
  _DAT_183387b08 = (_DAT_183387b08 ^ uVar6) + 0x1000000ff ^ 0xdd9928029c40443b;
  _DAT_183387960 = (_DAT_183387960 * 0x15fc03a2ca574035 ^ _DAT_183387b08) + uVar6;
  _DAT_183387eb0 = _DAT_183387960 ^ _DAT_183387b08;
  _DAT_183387de0 = 0xff;
  uVar6 = (_DAT_183387b00 ^ _DAT_1823b8a70) + _DAT_183387948 + 0x842223da;
  uVar8 = (_DAT_183387948 ^ _UNK_1823b8a78) + _DAT_183387b00 + 0xd8c2f638;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183387b00 ^ _DAT_1823b8a70;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183387948 ^ _UNK_1823b8a78;
  _DAT_183387aa8 =
       func_0x00018dd80f50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183387b00 + 0xd8c2f638) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183387948 + 0x842223da));
  uVar6 = (_DAT_183387aa8 ^ 0xff) >> 1 | (ulonglong)(((_DAT_183387aa8 ^ 0xff) & 1) != 0) << 0x3f;
  _DAT_183387d68 = _DAT_183387ca8 ^ uVar6 ^ 0xd8c2f737;
  _DAT_183387ca8 = (_DAT_183387ca8 ^ uVar6) + 0xd8c2f737 ^ 0x1f3ba5e9bc121604;
  _DAT_183387950 = (_DAT_183387950 * 0x22acfb677408ff19 ^ _DAT_183387ca8) + uVar6;
  _DAT_183387e60 = _DAT_183387950 ^ _DAT_183387ca8;
  _DAT_183387ac8 = 0xd8c2f737;
  uVar6 = (~_DAT_183387b90 + 0x273d09c9) *
          ((_DAT_183387ce0 ^ 0x5ce0d412) + (ulonglong)((uint)_DAT_183387ce0 & 0x5ce0d412) * 2);
  uVar6 = (uVar6 | _DAT_183387eb8) + (uVar6 & _DAT_183387eb8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183387a30 = func_0x00018dd80f50((uVar6 | 0x7bddddda) + (ulonglong)((uint)uVar6 & 0x7bddddda))
  ;
  uVar6 = (_DAT_183387a30 ^ 0x213962667c1d11f8) << 2 | _DAT_183387a30 >> 0x3e;
  _DAT_1833879d8 = _DAT_183387b10 ^ uVar6 ^ 0x1000000ff;
  _DAT_183387b88 = (_DAT_183387b88 ^ uVar6) + 0x1000000ff ^ 0xce79b304bc9bf4ab;
  _DAT_183387ec0 = (_DAT_183387ec0 * -0x4aedcc47f9235633 ^ _DAT_183387b88) + uVar6;
  _DAT_183387bc8 = _DAT_183387ec0 ^ _DAT_183387b88;
  _DAT_183387b60 = 0xff;
  uVar6 = (_DAT_183387e18 ^ _DAT_1823b8a80) + _DAT_183387d98 + 0x6fdb490a;
  uVar8 = (_DAT_183387d98 ^ _UNK_1823b8a88) + _DAT_183387e18 + 0x20feb174;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183387e18 ^ _DAT_1823b8a80;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183387d98 ^ _UNK_1823b8a88;
  _DAT_183387da0 =
       func_0x00018dd80f50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183387e18 + 0x20feb174) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183387d98 + 0x6fdb490a));
  uVar6 = _DAT_183387da0 ^ 0xebf96a2f;
  _DAT_183387dd8 = _DAT_183387ae0 ^ uVar6 ^ 0x10cf81ba3;
  _DAT_183387e18 = (_DAT_183387e18 ^ uVar6) + 0x10cf81ba3 ^ 0x1602e6fc138983ae;
  _DAT_183387c50 = (_DAT_183387c50 * -0x2f4a0b720454d085 ^ _DAT_183387e18) + uVar6;
  _DAT_183387dc8 = _DAT_183387c50 ^ _DAT_183387e18;
  _DAT_183387eb8 = 0xcf81ba3;
  uVar6 = (~_DAT_183387b00 + 0x20feb175) *
          ((_DAT_183387be8 ^ 0x6fdb490a) + (ulonglong)((uint)_DAT_183387be8 & 0x6fdb490a) * 2);
  uVar6 = (uVar6 | _DAT_183387960) + (uVar6 & _DAT_183387960);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183387e00 = func_0x00018dd80f50((uVar6 | 0x4f25f87e) + (ulonglong)((uint)uVar6 & 0x4f25f87e))
  ;
  _DAT_1833879b0 = (_DAT_1833879b0 ^ _DAT_183387d80) + 0xcb07db5b ^ 0xdcdfa3baddbcf084;
  _DAT_183387ab0 = (_DAT_183387ab0 * -0xce47fe9b182dded ^ _DAT_1833879b0) + _DAT_183387d80;
  _DAT_183387ef8 = _DAT_183387ab0 ^ _DAT_1833879b0;
  _DAT_183387ac8 = 0xcb07db5b;
  uVar6 = (~_DAT_183387b68 + 0x41f04049) *
          ((_DAT_183387be8 ^ 0x4f25f87e) + (ulonglong)((uint)_DAT_183387be8 & 0x4f25f87e) * 2);
  uVar6 = (uVar6 | _DAT_183387cc0) + (uVar6 & _DAT_183387cc0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183387d58 = func_0x00018dd80f50((uVar6 | 0xed5b836) + (ulonglong)((uint)uVar6 & 0xed5b836));
  uVar6 = _DAT_183387d58 >> 1 | _DAT_183387d58;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_183387d58;
  _DAT_183387bf8 = _DAT_183387d20 ^ uVar6 ^ 0x10cf81ba3;
  _DAT_183387970 = (_DAT_183387970 ^ uVar6) + 0x10cf81ba3 ^ 0x389b03da4245ce9a;
  _DAT_183387be8 = (_DAT_183387be8 * -0x77146dadac393c39 ^ _DAT_183387970) + uVar6;
  _DAT_183387cc8 = _DAT_183387be8 ^ _DAT_183387970;
  _DAT_183387a00 = 0xcf81ba3;
  uVar6 = (_DAT_183387bc8 ^ _DAT_1823b8a90) + _DAT_183387ea8 + 0x88da3886;
  uVar8 = (_DAT_183387ea8 ^ _UNK_1823b8a98) + _DAT_183387bc8 + 0xcf81ba3;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183387bc8 ^ _DAT_1823b8a90;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183387ea8 ^ _UNK_1823b8a98;
  _DAT_183387a58 =
       func_0x00018dd80f50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183387bc8 + 0xcf81ba3) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183387ea8 + 0x88da3886));
  _DAT_183387cf0 = _DAT_183387a58 << 3 | _DAT_183387a58 >> 0x3d;
  _DAT_183387bc8 = _DAT_183387bc8 ^ _DAT_183387cf0 ^ 0x67b97f6f32642a41;
  _DAT_183387e60 = (_DAT_183387e60 * -0x252bb8fb616b0951 ^ _DAT_183387bc8) + _DAT_183387cf0;
  _DAT_183387de8 = _DAT_183387e60 ^ _DAT_183387bc8;
  _DAT_183387b00 = 0;
  _DAT_183387a18 = func_0x00018dd80f50(_DAT_183387958 + 0x22ff83a5ffe1ff ^ 0xe0);
  uVar6 = _DAT_183387a18 >> 1 | _DAT_183387a18;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ _DAT_183387a18) * -0x2230047c57fdcb7b;
  _DAT_183387bf0 = _DAT_183387b40 ^ uVar6 ^ 0xff;
  _DAT_183387950 = (_DAT_183387950 ^ uVar6) + 0xff ^ 0x8c4a877d2fe75b97;
  _DAT_183387e88 = (_DAT_183387e88 * -0x6dc76bb4fc337311 ^ _DAT_183387950) + uVar6;
  _DAT_183387978 = _DAT_183387e88 ^ _DAT_183387950;
  _DAT_183387c28 = 0xff;
  uVar6 = (_DAT_183387b68 ^ _DAT_1823b8aa0) + _DAT_1833879a8 + 0x6fdb490a;
  uVar8 = (_DAT_1833879a8 ^ _UNK_1823b8aa8) + _DAT_183387b68 + 0xffffffff;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183387b68 ^ _DAT_1823b8aa0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833879a8 ^ _UNK_1823b8aa8;
  _DAT_183387ee8 =
       func_0x00018dd80f50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183387b68 + 0xffffffff) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833879a8 + 0x6fdb490a));
  _DAT_183387948 =
       (_DAT_183387948 ^ _DAT_183387ee8 * -0x6c7f04527b2deaad) + 0x140695d0 ^ 0xfc2c92579d4eba94;
  _DAT_183387e48 =
       (_DAT_183387e48 * 0x652d065a91128659 ^ _DAT_183387948) + _DAT_183387ee8 * -0x6c7f04527b2deaad
  ;
  _DAT_183387cb0 = _DAT_183387e48 ^ _DAT_183387948;
  _DAT_1833879f8 = 0x140695d0;
  uVar6 = (_DAT_183387900 ^ _DAT_1823b8ab0) + _DAT_183387c38 + 0x6fdb490a;
  uVar8 = (_DAT_183387c38 ^ _UNK_1823b8ab8) + _DAT_183387900 + 0x140695d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183387900 ^ _DAT_1823b8ab0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183387c38 ^ _UNK_1823b8ab8;
  _DAT_183387a20 =
       func_0x00018dd80f50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183387900 + 0x140695d0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183387c38 + 0x6fdb490a));
  _DAT_183387cc8 = _DAT_183387cc8 ^ _DAT_183387a20 ^ 0x12758e3c0e8da130 ^ 0x4c5c321a387d593c;
  _DAT_183387df8 =
       (_DAT_183387df8 * -0x4cc8a8dcbb298879 ^ _DAT_183387cc8) +
       (_DAT_183387a20 ^ 0x12758e3c0e8da130);
  _DAT_183387c20 = _DAT_183387df8 ^ _DAT_183387cc8;
  _DAT_183387c90 = 0;
  _DAT_1833879e0 = func_0x00018dd80f50(_DAT_183387ec8 ^ 0x1f0084a6001d5f);
  uVar6 = _DAT_1833879e0 & 0xffffffffff800000;
  _DAT_183387920 = _DAT_183387d30 ^ uVar6 ^ 0xff;
  _DAT_183387e50 = (_DAT_183387e50 ^ uVar6) + 0xff ^ 0xcad6c888fedf7f8c;
  _DAT_1833879f0 = (_DAT_1833879f0 * 0x63a3ece12f176695 ^ _DAT_183387e50) + uVar6;
  _DAT_183387950 = _DAT_1833879f0 ^ _DAT_183387e50;
  _DAT_183387e08 = 0xff;
  uVar6 = ((_DAT_183387ed0 ^ 0x842223da) + (ulonglong)((uint)_DAT_183387ed0 & 0x842223da) * 2) *
          -_DAT_183387c88;
  uVar6 = (uVar6 | _DAT_183387be8) + (uVar6 & _DAT_183387be8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183387ab0 = func_0x00018dd80f50((uVar6 | 0x842223da) + (ulonglong)((uint)uVar6 & 0x842223da))
  ;
  uVar6 = (ulonglong)(~(uint)_DAT_183387ab0 & 0xff);
  _DAT_183387a68 = _DAT_183387970 ^ uVar6 ^ 0xff;
  _DAT_183387ea0 = (_DAT_183387ea0 ^ uVar6) + 0xff ^ 0x2d3ef4ec017c0fc8;
  _DAT_183387e08 = (_DAT_183387e08 * -0x3d9327c799f258d9 ^ _DAT_183387ea0) + uVar6;
  _DAT_183387938 = _DAT_183387e08 ^ _DAT_183387ea0;
  auVar4._8_8_ = unaff_XMM7_Qb;
  auVar4._0_8_ = (ulonglong)(uint)(int)cVar1 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_1823b8ac0,_DAT_1800170c0);
  _DAT_183387e88 = 0xff;
  uVar8 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar8 + _DAT_183387d30;
  if (auVar5._4_4_ < 0) {
    uVar6 = _DAT_183387b68 ^ uVar8;
  }
  _DAT_183387e00 = func_0x00018dd80f50(SUB161(auVar4 ^ _DAT_1823b8ac0,5) ^ uVar6);
  uVar6 = _DAT_183387e00 - (_DAT_183387e00 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183387e00;
  _DAT_183387c88 = (ulonglong)(uint)(int)cVar1 & 0xff;
  _DAT_183387958 = (_DAT_183387958 ^ uVar6) + _DAT_183387c88 ^ 0x3d072eacbb5a7afe;
  _DAT_183387c48 = (_DAT_183387c48 * 0x44f60d6de5e6880b ^ _DAT_183387958) + uVar6;
  _DAT_183387a80 = _DAT_183387c48 ^ _DAT_183387958;
  uVar8 = _DAT_183387c88 << 0x30;
  uVar6 = in_stack_00000050 ^ 0x84222325 ^ _DAT_183387990;
  lVar3 = (in_stack_00000050 ^ 0x84222325) + _DAT_183387958;
  uVar7 = uVar6 + lVar3;
  uVar9 = (uVar8 ^ _DAT_183387958) + _DAT_183387990 + uVar8;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8 ^ _DAT_183387958;
  _DAT_183387b98 =
       func_0x00018dd80f50((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183387990 + uVar8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar3);
  _DAT_183387a28 = uVar8 | in_stack_00000050;
  _DAT_183387ee0 =
       (_DAT_183387ee0 ^ _DAT_183387b98 & 0x7fffffffffffffff) + _DAT_183387a28 ^ 0x2d57c546e0e68918;
  _DAT_183387c50 =
       (_DAT_183387c50 * -0x3486c041dd9e95d ^ _DAT_183387ee0) +
       (_DAT_183387b98 & 0x7fffffffffffffff);
  _DAT_183387990 = _DAT_183387c50 ^ _DAT_183387ee0;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar2 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dd80b67 (image 18dd80b67) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd80b67(void)

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



// ===== continuation @ rva dd692b8 (image 18dd692b8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd692fe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd692b8(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dd6e146 (image 18dd6e146) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd6f449 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd6e146(int param_1)

{
  longlong *unaff_RSI;
  ulonglong uVar1;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 in_stack_00000038;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar1 = (~_DAT_183387b40 + 0xe9ec5737) *
          ((_DAT_183387aa0 ^ 0x7eb36cbd) + (ulonglong)((uint)_DAT_183387aa0 & 0x7eb36cbd) * 2);
  uVar1 = (uVar1 | _DAT_183387c00) + (uVar1 & _DAT_183387c00);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183387978 = func_0x00018dd80f50((uVar1 | 0x975f3b8b) + (ulonglong)((uint)uVar1 & 0x975f3b8b))
  ;
  uVar1 = (_DAT_183387978 ^ 0xe4f594c2f4d37210) << 0x15 |
          (_DAT_183387978 ^ 0xe4f594c2f4d37210) >> 0x2b;
  _DAT_183387e30 = (_DAT_183387e30 ^ uVar1) + 0x137d18ae ^ 0xb3b9bcf46230e42d;
  _DAT_183387e08 = (_DAT_183387e08 * -0x6f3a5cc7986ec4db ^ _DAT_183387e30) + uVar1;
  _DAT_183387a80 = _DAT_183387e08 ^ _DAT_183387e30;
  _DAT_183387da8 = 0x137d18ae;
  uVar1 = (~_DAT_183387e60 + 0xd8bc6571) *
          ((_DAT_183387978 ^ 0x84222325) + (ulonglong)((uint)_DAT_183387978 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183387ee0) + (uVar1 & _DAT_183387ee0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183387e98 = func_0x00018dd80f50((uVar1 | 0x5c9e4655) + (ulonglong)((uint)uVar1 & 0x5c9e4655))
  ;
  uVar1 = (_DAT_183387e98 ^ 0xd8bc4000) & 0xffffffffffffc000;
  _DAT_183387d40 = (_DAT_183387d40 ^ uVar1) - 0xd8bc6570 ^ 0x94b4cee41c9b775b;
  _DAT_183387b88 = (_DAT_183387b88 * 0x465071fc72f05fa5 ^ _DAT_183387d40) + uVar1;
  _DAT_183387cf0 = _DAT_183387b88 ^ _DAT_183387d40;
  _DAT_183387cc0 = 0x27439a90;
  _DAT_183387e50 = func_0x00018dd80f50(_DAT_183387ab0 ^ 0xffb3fff6c4ff49d2);
  uVar1 = ((_DAT_183387e50 ^ 0x21650bf4d0be6f00) & 0x7ffffffffffff) << 0xc |
          (_DAT_183387e50 ^ 0x21650bf4d0be6f00) >> 0x34;
  _DAT_183387a00 = _DAT_1833879e0 ^ uVar1 ^ 0x100ff0000;
  _DAT_183387d48 = (_DAT_183387d48 ^ uVar1) + 0x100ff0000 ^ 0x6a40c75d11243929;
  _DAT_183387bc0 = (_DAT_183387bc0 * -0x6b518cba6e938421 ^ _DAT_183387d48) + uVar1;
  _DAT_183387a58 = _DAT_183387bc0 ^ _DAT_183387d48;
  _DAT_183387df0 = 0xff0000;
  _DAT_183387a30 = func_0x00018dd80f50(_DAT_183387bb0 + 0xff6400159affa2ff ^ 0x43);
  uVar1 = _DAT_183387a30 - (_DAT_183387a30 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183387a30;
  _DAT_183387ba0 = _DAT_183387a60 ^ uVar1 ^ 0x6f77bf80;
  _DAT_183387b18 = (_DAT_183387b18 ^ uVar1) + 0x6f77bf80 ^ 0x88a6b05508329874;
  _DAT_183387ee8 = (_DAT_183387ee8 * 0x1b4115aa83375283 ^ _DAT_183387b18) + uVar1;
  _DAT_183387e98 = _DAT_183387ee8 ^ _DAT_183387b18;
  _DAT_183387980 = 0x6f77bf80;
  uVar1 = (~_DAT_183387bb0 + 0x91874081) *
          ((_DAT_183387d00 ^ 0xeb559ca5) + (ulonglong)((uint)_DAT_183387d00 & 0xeb559ca5) * 2);
  uVar1 = (uVar1 | _DAT_183387958) + (uVar1 & _DAT_183387958);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183387af8 = func_0x00018dd80f50((uVar1 | 0x7ad2dc25) + (ulonglong)((uint)uVar1 & 0x7ad2dc25))
  ;
  uVar1 = (_DAT_183387af8 ^ 0x3f5db7b3283fc000) & 0x7fffffffffffffff ^ 0x6f77bf80;
  _DAT_1833879e8 = _DAT_183387e88 ^ uVar1 ^ 0x100ff0000;
  _DAT_1833879c0 = (_DAT_1833879c0 ^ uVar1) + 0x100ff0000 ^ 0xde4244123d0f2c31;
  _DAT_1833879d8 = (_DAT_1833879d8 * -0x75211736f7e0611f ^ _DAT_1833879c0) + uVar1;
  _DAT_183387ac0 = _DAT_1833879d8 ^ _DAT_1833879c0;
  _DAT_1833879d0 = 0xff0000;
  uVar1 = (_DAT_183387d50 ^ _DAT_1823b8620) + _DAT_183387918 + 0x84dd2325;
  uVar4 = (_DAT_183387918 ^ _UNK_1823b8628) + _DAT_183387d50 + 0xcfc47068;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183387d50 ^ _DAT_1823b8620;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183387918 ^ _UNK_1823b8628;
  _DAT_183387c80 =
       func_0x00018dd80f50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183387d50 + 0xcfc47068) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183387918 + 0x84dd2325));
  uVar1 = (ulonglong)(~(uint)_DAT_183387c80 & 0xff0000) * 0x2f909150df56157d;
  _DAT_1833879e8 = _DAT_183387ef0 ^ uVar1 ^ 0xd0c37068;
  _DAT_183387e38 = (_DAT_183387e38 ^ uVar1) + 0xd0c37068 ^ 0xa0ecdd04f646f6b5;
  _DAT_183387990 = (_DAT_183387990 * 0x2ff26362b33aa169 ^ _DAT_183387e38) + uVar1;
  _DAT_183387c20 = _DAT_183387990 ^ _DAT_183387e38;
  _DAT_183387ea0 = 0xd0c37068;
  uVar1 = (~_DAT_183387d98 + 0x303b8f99) *
          ((_DAT_183387e48 ^ 0x54e1534d) + (ulonglong)((uint)_DAT_183387e48 & 0x54e1534d) * 2);
  uVar1 = (uVar1 | _DAT_183387cb8) + (uVar1 & _DAT_183387cb8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183387bf8 = func_0x00018dd80f50((uVar1 | 0x64dadcd5) + (ulonglong)((uint)uVar1 & 0x64dadcd5))
  ;
  uVar1 = (_DAT_183387bf8 ^ 0xf0fbfff8) & 0x7fffffffffffffff;
  _DAT_183387ed8 = _DAT_183387df8 ^ uVar1 ^ 0x100ff0000;
  _DAT_183387dc0 = (_DAT_183387dc0 ^ uVar1) + 0x100ff0000 ^ 0x38d9ed3bfa014350;
  _DAT_183387a78 = (_DAT_183387a78 * -0x5086ee2f6cd46375 ^ _DAT_183387dc0) + uVar1;
  _DAT_183387928 = _DAT_183387a78 ^ _DAT_183387dc0;
  _DAT_183387e38 = 0xff0000;
  uVar1 = (~_DAT_183387d68 + 0x137d18af) *
          ((_DAT_183387ab0 ^ 0x7bbddeda) + (ulonglong)((uint)_DAT_183387ab0 & 0x7bbddeda) * 2);
  uVar1 = (uVar1 | _DAT_183387c48) + (uVar1 & _DAT_183387c48);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183387c50 = func_0x00018dd80f50((uVar1 | 0x68c0c674) + (ulonglong)((uint)uVar1 & 0x68c0c674))
  ;
  uVar1 = (ulonglong)(~(uint)_DAT_183387c50 & 0xff9ffdff) << 0x20;
  _DAT_183387938 = _DAT_183387aa0 ^ uVar1 ^ 0x1131d16ad;
  _DAT_183387d90 = (_DAT_183387d90 ^ uVar1) + 0x1131d16ad ^ 0x341888eb60947404;
  _DAT_183387928 = (_DAT_183387928 * -0x520f647c9cc6da83 ^ _DAT_183387d90) + uVar1;
  _DAT_183387dd0 = _DAT_183387928 ^ _DAT_183387d90;
  _DAT_1833879f8 = 0x131d16ad;
  uVar1 = (_DAT_183387cb0 ^ _DAT_1823b8630) + _DAT_183387c08 + 0x7bbddeda;
  uVar4 = (_DAT_183387c08 ^ _UNK_1823b8638) + _DAT_183387cb0 + 0x137d18ae;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183387cb0 ^ _DAT_1823b8630;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183387c08 ^ _UNK_1823b8638;
  _DAT_183387920 =
       func_0x00018dd80f50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183387cb0 + 0x137d18ae) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183387c08 + 0x7bbddeda));
  _DAT_183387ee8 = (_DAT_183387ee8 ^ _DAT_183387920) + 0xece2e551 ^ 0x46b6a49cda4d44b9;
  _DAT_183387a40 = (_DAT_183387a40 * -0x1cc7bd5b9c5f1c2b ^ _DAT_183387ee8) + _DAT_183387920;
  _DAT_183387bf8 = _DAT_183387a40 ^ _DAT_183387ee8;
  _DAT_183387ae0 = 0xece2e551;
  _DAT_183387c58 = func_0x00018dd80f50(_DAT_183387c40 ^ 0xff46002793ffbf33);
  _DAT_183387e80 =
       (_DAT_183387e80 ^ _DAT_183387c58 & 0x7ffffffffffff) + 0x131d18ae ^ 0x2384ca75c6d6c9dd;
  _DAT_183387a48 =
       (_DAT_183387a48 * -0x6a6ea806ee06d21f ^ _DAT_183387e80) + (_DAT_183387c58 & 0x7ffffffffffff);
  _DAT_183387d20 = _DAT_183387a48 ^ _DAT_183387e80;
  _DAT_183387a68 = 0x131d18ae;
  uVar1 = (_DAT_183387b10 ^ _DAT_1823b8640) + _DAT_183387cb8 + 0x68c0c674;
  uVar4 = (_DAT_183387cb8 ^ _UNK_1823b8648) + _DAT_183387b10 + 0x263a315c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183387b10 ^ _DAT_1823b8640;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183387cb8 ^ _UNK_1823b8648;
  _DAT_183387978 =
       func_0x00018dd80f50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183387b10 + 0x263a315c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183387cb8 + 0x68c0c674));
  uVar4 = _DAT_183387978 ^ 0x235f871e89c8ea1c;
  uVar1 = uVar4 >> 1 | uVar4;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar4 ^ 0x263a315c;
  _DAT_183387c30 = _DAT_183387b20 ^ uVar1 ^ 0x1131d16ad;
  _DAT_1833879d8 = (_DAT_1833879d8 ^ uVar1) + 0x1131d16ad ^ 0x6c2fe3fb1298928a;
  _DAT_183387ba8 = (_DAT_183387ba8 * -0x5591a5de8f0c1e9b ^ _DAT_1833879d8) + uVar1;
  _DAT_183387af0 = _DAT_183387ba8 ^ _DAT_1833879d8;
  _DAT_183387988 = 0x131d16ad;
  _DAT_183387ee8 = func_0x00018dd80f50(_DAT_183387918 ^ 0x1eff8424ffe196);
  _DAT_1833879c0 = _DAT_183387ee8 ^ 0x131d16ad;
  _DAT_183387928 = _DAT_183387928 ^ _DAT_1833879c0 ^ 0x86f6ed4d8de637bf;
  _DAT_183387a28 = (_DAT_183387a28 * -0x15b9138c3b9191f5 ^ _DAT_183387928) + _DAT_1833879c0;
  _DAT_183387bc0 = _DAT_183387a28 ^ _DAT_183387928;
  _DAT_183387c20 = 0;
  _DAT_183387b50 = func_0x00018dd80f50(_DAT_183387a50 + 0xffe10083dcff2affU ^ 0x97);
  uVar1 = (_DAT_183387b50 ^ 0xff0000) & 0x7fffffffffffffff;
  _DAT_183387db8 = _DAT_183387ab0 ^ uVar1 ^ 0xff0000;
  _DAT_183387be8 = (_DAT_183387be8 ^ uVar1) + 0xff0000 ^ 0xc1f99528bda30b38;
  _DAT_183387d38 = (_DAT_183387d38 * -0x155e589644f65aa3 ^ _DAT_183387be8) + uVar1;
  _DAT_1833879b0 = _DAT_183387d38 ^ _DAT_183387be8;
  _DAT_183387a38 = 0xff0000;
  uVar1 = (_DAT_183387c90 ^ _DAT_1823b8650) + _DAT_183387b98 + 0x7bbddeda;
  uVar4 = (_DAT_183387b98 ^ _UNK_1823b8658) + _DAT_183387c90 + 0xffffffff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183387c90 ^ _DAT_1823b8650;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183387b98 ^ _UNK_1823b8658;
  _DAT_183387e18 =
       func_0x00018dd80f50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183387c90 + 0xffffffff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183387b98 + 0x7bbddeda));
  uVar1 = (_DAT_183387e18 ^ 0xffffffff) & 0x1fffffffff ^ 0xffffffff;
  uVar4 = uVar1 - (uVar1 >> 1 & 0x555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar1;
  _DAT_183387c38 = (_DAT_183387c38 ^ uVar1) + 0x600200 ^ 0x9ba4ddf7641097e8;
  _DAT_183387dd0 = (_DAT_183387dd0 * 0x6adee91a71071627 ^ _DAT_183387c38) + uVar1;
  _DAT_1833879c0 = _DAT_183387dd0 ^ _DAT_183387c38;
  _DAT_183387a08 = 0x600200;
  _DAT_183387ad8 = func_0x00018dd80f50(_DAT_183387ab8 ^ 0xffd4001bd9ff321a);
  uVar1 = _DAT_183387ad8 << 0x29 | _DAT_183387ad8 >> 0x17;
  _DAT_183387da0 = _DAT_183387da0 ^ uVar1 ^ 0x27a940fe3be529ec;
  _DAT_183387e70 = (_DAT_183387e70 * -0x6ee8c8e7c363a219 ^ _DAT_183387da0) + uVar1;
  _DAT_183387a28 = _DAT_183387e70 ^ _DAT_183387da0;
  _DAT_183387a98 = 0;
  _DAT_183387b78 = func_0x00018dd80f50(_DAT_1833879e8 ^ 0x1f0083e2ffaa38);
  _DAT_183387d78 = _DAT_183387df0 ^ _DAT_183387b78 ^ 0xff0000;
  _DAT_183387ea8 = (_DAT_183387ea8 ^ _DAT_183387b78) + 0xff0000 ^ 0x4aafa89e0143a3d9;
  _DAT_183387978 = (_DAT_183387978 * -0x4004a02dcacd34a7 ^ _DAT_183387ea8) + _DAT_183387b78;
  _DAT_183387c48 = _DAT_183387978 ^ _DAT_183387ea8;
  _DAT_183387cb8 = 0xff0000;
  uVar1 = (_DAT_183387d18 ^ _DAT_1823b8660) + _DAT_183387d80 + 0x7f35f62a;
  uVar4 = (_DAT_183387d80 ^ _UNK_1823b8668) + _DAT_183387d18 + 0xfb17d50f;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183387d18 ^ _DAT_1823b8660;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183387d80 ^ _UNK_1823b8668;
  _DAT_183387aa8 =
       func_0x00018dd80f50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183387d18 + 0xfb17d50f) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183387d80 + 0x7f35f62a));
  uVar1 = (_DAT_183387aa8 << 0x3c | _DAT_183387aa8 >> 4) ^ 0xfb17d50f;
  _DAT_183387ab8 = _DAT_183387ab8 ^ uVar1 ^ 0x9d297ad806068554;
  _DAT_183387978 = (_DAT_183387978 * -0x77651ca4e47c32d9 ^ _DAT_183387ab8) + uVar1;
  _DAT_183387988 = _DAT_183387978 ^ _DAT_183387ab8;
  _DAT_183387e18 = 0;
  _DAT_183387938 = func_0x00018dd80f50(_DAT_183387cd8 + 0x23008423005cffU ^ 0x2b);
  uVar1 = _DAT_183387938 >> 1 | _DAT_183387938;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183387938;
  _DAT_183387a38 = _DAT_183387a38 ^ uVar1 ^ 0xff0000;
  _DAT_1833879f0 = (_DAT_1833879f0 ^ uVar1) + 0xff0000 ^ 0xe498636f74702e7b;
  _DAT_183387910 = (_DAT_183387910 * -0x254e557b5e4f2ffd ^ _DAT_1833879f0) + uVar1;
  _DAT_183387ee0 = _DAT_183387910 ^ _DAT_1833879f0;
  auVar2._8_8_ = _UNK_180131b48;
  auVar2._0_8_ = (ulonglong)(uint)(param_1 << 0x10) ^ 0x84222325;
  auVar3 = pshufb(auVar2 ^ _DAT_1823b8670,_DAT_1800170c0);
  _DAT_183387cd0 = 0xff0000;
  uVar4 = auVar3._8_8_ + auVar3._0_8_;
  uVar1 = uVar4 + _DAT_183387da0;
  if (auVar3._4_4_ < 0) {
    uVar1 = _DAT_183387b58 ^ uVar4;
  }
  _DAT_183387c80 = func_0x00018dd80f50(SUB161(auVar2 ^ _DAT_1823b8670,5) ^ uVar1);
  _DAT_183387a88 = (ulonglong)(param_1 << 0x10 & 0xff0000);
  _DAT_183387c38 = (_DAT_183387c38 ^ _DAT_183387c80) + _DAT_183387a88 ^ 0x3d40bbb90ed71572;
  _DAT_183387e98 = (_DAT_183387e98 * 0x39bd8f0bc7e79ab1 ^ _DAT_183387c38) + _DAT_183387c80;
  _DAT_183387d78 = _DAT_183387e98 ^ _DAT_183387c38;
  (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa,in_stack_00000038);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dd55e00 (image 18dd55e00) =====

void FUN_18dd55e00(void)

{
  return;
}



// ===== continuation @ rva dd514c4 (image 18dd514c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd514c4(void)

{
  FUN_190ddce00();
  (*_DAT_1823b1818)();
  return;
}



// ===== continuation @ rva dd56e13 (image 18dd56e13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd56e13(void)

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



// ===== continuation @ rva dd56391 (image 18dd56391) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd56391(void)

{
  (*_DAT_1823b2698)();
  return;
}



// ===== continuation @ rva dd54cce (image 18dd54cce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd54cce(void)

{
  (*_DAT_1823b1e78)();
  return;
}



// ===== continuation @ rva dd57385 (image 18dd57385) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57385(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823b2628)();
  return;
}



// ===== continuation @ rva dd5724c (image 18dd5724c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5724c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1823b2488)();
  return;
}



// ===== continuation @ rva dd5587e (image 18dd5587e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5587e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823b1b18)();
  return;
}



// ===== continuation @ rva dd5540d (image 18dd5540d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5540d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1823b1848)();
  return;
}



// ===== continuation @ rva dd56d1a (image 18dd56d1a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd56d1a(void)

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



// ===== continuation @ rva dd56cc8 (image 18dd56cc8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd56cc8(void)

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



// ===== continuation @ rva dd8555f (image 18dd8555f) =====

void FUN_18dd8555f(void)

{
  return;
}



// ===== continuation @ rva dd810a4 (image 18dd810a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd810a4(void)

{
  FUN_190ddce00();
  (*_DAT_1823b91f8)();
  return;
}



// ===== continuation @ rva dd8554e (image 18dd8554e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8554e(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_1823b9408)();
  return;
}



// ===== continuation @ rva dd849de (image 18dd849de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd849de(void)

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



// ===== continuation @ rva dd85379 (image 18dd85379) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd85379(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1823b9538)();
  return;
}



// ===== continuation @ rva dd841cd (image 18dd841cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd841cd(void)

{
  longlong in_RAX;
  longlong *in_stack_00000030;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000030);
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  (*_DAT_1823b9648)();
  return;
}



// ===== continuation @ rva dd855cb (image 18dd855cb) =====

void FUN_18dd855cb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd843fb (image 18dd843fb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd843fb(void)

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



// ===== continuation @ rva dd847d1 (image 18dd847d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd847d1(void)

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



// ===== continuation @ rva dd847a2 (image 18dd847a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd847a2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823b8d08)();
  return;
}



// ===== continuation @ rva dd844b8 (image 18dd844b8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd844b8(void)

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



// ===== continuation @ rva dd84f37 (image 18dd84f37) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd84f37(void)

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



// ===== continuation @ rva dd84da2 (image 18dd84da2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd84da2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_1823b9008)();
  return;
}



// ===== continuation @ rva dd89e42 (image 18dd89e42) =====

void FUN_18dd89e42(void)

{
  return;
}



// ===== continuation @ rva dd857b7 (image 18dd857b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd857b7(void)

{
  FUN_190ddce00();
  (*_DAT_1823bad98)();
  return;
}



// ===== continuation @ rva dd89b65 (image 18dd89b65) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd89b65(void)

{
  (*_DAT_1823babb8)();
  return;
}



// ===== continuation @ rva dd88f9a (image 18dd88f9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd88f9a(void)

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



// ===== continuation @ rva dd89a5d (image 18dd89a5d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd89a5d(void)

{
  (*_DAT_1823baff8)();
  return;
}



// ===== continuation @ rva dd8b7ee (image 18dd8b7ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8b7ee(void)

{
  (*_DAT_1823babc8)();
  return;
}



// ===== continuation @ rva dd8b12d (image 18dd8b12d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8b12d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823babd8)();
  return;
}



// ===== continuation @ rva dd8a99e (image 18dd8a99e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8a99e(void)

{
  FUN_190ddfc90();
  (*_DAT_1823ba998)();
  return;
}



// ===== continuation @ rva dd8b808 (image 18dd8b808) =====

void FUN_18dd8b808(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd8aeea (image 18dd8aeea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8aeea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823baf68)();
  return;
}



// ===== continuation @ rva dd8b7f9 (image 18dd8b7f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8b7f9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1823bb1b8)();
  return;
}



// ===== continuation @ rva dd8a306 (image 18dd8a306) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd8a306(void)

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



// ===== continuation @ rva dd8a3fe (image 18dd8a3fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8a3fe(void)

{
  (*_DAT_1823badc8)();
  return;
}



// ===== continuation @ rva dd8f023 (image 18dd8f023) =====

void FUN_18dd8f023(void)

{
  return;
}



// ===== continuation @ rva dd8b9b7 (image 18dd8b9b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8b9b7(void)

{
  FUN_190ddce00();
  (*_DAT_1823bd3d8)();
  return;
}



// ===== continuation @ rva dd96ea4 (image 18dd96ea4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd96ea4(void)

{
  FUN_190dd72e0();
  (*_DAT_1823bce78)();
  return;
}



// ===== continuation @ rva dd99f9d (image 18dd99f9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd99f9d(void)

{
  (*_DAT_1823c0e88)();
  return;
}



// ===== continuation @ rva dd8c6d4 (image 18dd8c6d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8c6d4(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823bf028)();
  return;
}



// ===== continuation @ rva dd8c3aa (image 18dd8c3aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8c3aa(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_1823c0688)();
  return;
}



// ===== continuation @ rva dd9b143 (image 18dd9b143) =====

void FUN_18dd9b143(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd8d5e0 (image 18dd8d5e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd8d5e0(void)

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



// ===== continuation @ rva dd90643 (image 18dd90643) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd90643(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823be178)();
  return;
}



// ===== continuation @ rva dd90257 (image 18dd90257) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd90257(void)

{
  int in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dd95bcb (image 18dd95bcb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd95bcb(void)

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



// ===== continuation @ rva dd9b134 (image 18dd9b134) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9b134(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1823c13c8)();
  return;
}



// ===== continuation @ rva dd8e9bc (image 18dd8e9bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd8e9bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823c1398)();
  return;
}



// ===== continuation @ rva dd9c6cb (image 18dd9c6cb) =====

void FUN_18dd9c6cb(void)

{
  return;
}



// ===== continuation @ rva dd9b318 (image 18dd9b318) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9b318(void)

{
  FUN_190ddce00();
  (*_DAT_1823c29f8)();
  return;
}



// ===== continuation @ rva dd9bb82 (image 18dd9bb82) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9bb82(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823c21e8)();
  return;
}



// ===== continuation @ rva dd9b43b (image 18dd9b43b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9b43b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823c22e8)();
  return;
}



// ===== continuation @ rva dd9d422 (image 18dd9d422) =====

void FUN_18dd9d422(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd9c187 (image 18dd9c187) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9c187(void)

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



// ===== continuation @ rva dd9c5a9 (image 18dd9c5a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9c5a9(void)

{
  FUN_190de3220();
  (*_DAT_1823c2088)();
  return;
}



// ===== continuation @ rva dd9d386 (image 18dd9d386) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9d386(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823c2a98)();
  return;
}



// ===== continuation @ rva dd9ccea (image 18dd9ccea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9ccea(void)

{
  (*_DAT_1823c2b78)();
  return;
}



// ===== continuation @ rva dd9c4b7 (image 18dd9c4b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9c4b7(void)

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



// ===== continuation @ rva dd9c28a (image 18dd9c28a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9c28a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823c2108)();
  return;
}



// ===== continuation @ rva dd9b911 (image 18dd9b911) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9b911(void)

{
  FUN_190dd9df0();
  (*_DAT_1823c2718)();
  return;
}



// ===== continuation @ rva dd9e313 (image 18dd9e313) =====

void FUN_18dd9e313(void)

{
  return;
}



// ===== continuation @ rva dd9d59a (image 18dd9d59a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9d59a(void)

{
  FUN_190ddce00();
  (*_DAT_1823c30e8)();
  return;
}



// ===== continuation @ rva dd9e0e1 (image 18dd9e0e1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e0e1(void)

{
  FUN_190dd72e0();
  (*_DAT_1823c2df8)();
  return;
}



// ===== continuation @ rva dd9d6e3 (image 18dd9d6e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9d6e3(void)

{
  FUN_190dd72e0();
  (*_DAT_1823c2d08)();
  return;
}



// ===== continuation @ rva dd9d666 (image 18dd9d666) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9d666(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823c31a8)();
  return;
}



// ===== continuation @ rva dd9db02 (image 18dd9db02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9db02(void)

{
  FUN_190dd72e0();
  (*_DAT_1823c2ff8)();
  return;
}



// ===== continuation @ rva dd9db4b (image 18dd9db4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9db4b(void)

{
  FUN_190dd9df0();
  (*_DAT_1823c2fa8)();
  return;
}



// ===== continuation @ rva dd9e2d6 (image 18dd9e2d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e2d6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823c3108)();
  return;
}



// ===== continuation @ rva dd9df6b (image 18dd9df6b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9df6b(void)

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



// ===== continuation @ rva dd9dfc5 (image 18dd9dfc5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9dfc5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823c30f8)();
  return;
}



// ===== continuation @ rva dd9e466 (image 18dd9e466) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e466(void)

{
  FUN_190dd72e0();
  (*_DAT_1823c3288)();
  return;
}



// ===== continuation @ rva dd9e3f3 (image 18dd9e3f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e3f3(void)

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



// ===== continuation @ rva dd9e53e (image 18dd9e53e) =====

void FUN_18dd9e53e(void)

{
  return;
}



// ===== continuation @ rva dd9e506 (image 18dd9e506) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e506(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823c3298)();
  return;
}



// ===== continuation @ rva dd9e42c (image 18dd9e42c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e42c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823c3258)();
  return;
}



// ===== continuation @ rva dd9e546 (image 18dd9e546) =====

void FUN_18dd9e546(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd9e4e2 (image 18dd9e4e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9e4e2(void)

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



// ===== continuation @ rva dd9e451 (image 18dd9e451) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9e451(void)

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



// ===== continuation @ rva dd9e4af (image 18dd9e4af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e4af(void)

{
  FUN_190dd9df0();
  (*_DAT_1823c3248)();
  return;
}



// ===== continuation @ rva dd9e666 (image 18dd9e666) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e666(void)

{
  FUN_190dd72e0();
  (*_DAT_1823c3338)();
  return;
}



// ===== continuation @ rva dd9e5f3 (image 18dd9e5f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e5f3(void)

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



// ===== continuation @ rva dd9e746 (image 18dd9e746) =====

void FUN_18dd9e746(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd9e6e2 (image 18dd9e6e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9e6e2(void)

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



// ===== continuation @ rva dd9e73e (image 18dd9e73e) =====

void FUN_18dd9e73e(void)

{
  return;
}



// ===== continuation @ rva dd9e62c (image 18dd9e62c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e62c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823c3348)();
  return;
}



// ===== continuation @ rva dd9e706 (image 18dd9e706) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e706(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823c3378)();
  return;
}



// ===== continuation @ rva dd9e68e (image 18dd9e68e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9e68e(void)

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



// ===== continuation @ rva dd9e651 (image 18dd9e651) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9e651(void)

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



// ===== continuation @ rva dd9e6af (image 18dd9e6af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e6af(void)

{
  FUN_190dd9df0();
  (*_DAT_1823c32f8)();
  return;
}



// ===== continuation @ rva dd9e866 (image 18dd9e866) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e866(void)

{
  FUN_190dd72e0();
  (*_DAT_1823c33e8)();
  return;
}



// ===== continuation @ rva dd9e7f3 (image 18dd9e7f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e7f3(void)

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



// ===== continuation @ rva dd9e93e (image 18dd9e93e) =====

void FUN_18dd9e93e(void)

{
  return;
}



// ===== continuation @ rva dd9e906 (image 18dd9e906) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e906(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823c33f8)();
  return;
}



// ===== continuation @ rva dd9e946 (image 18dd9e946) =====

void FUN_18dd9e946(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd9e88e (image 18dd9e88e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9e88e(void)

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



// ===== continuation @ rva dd9e92d (image 18dd9e92d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e92d(void)

{
  (*_DAT_1823c3448)();
  return;
}



// ===== continuation @ rva dd9e82c (image 18dd9e82c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e82c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823c3438)();
  return;
}



// ===== continuation @ rva dd9e8af (image 18dd9e8af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd9e8af(void)

{
  FUN_190dd9df0();
  (*_DAT_1823c3458)();
  return;
}



// ===== continuation @ rva dd9e851 (image 18dd9e851) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd9e851(void)

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



// ===== continuation @ rva dd575b6 (image 18dd575b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd575b6(void)

{
  FUN_190dd72e0();
  (*_DAT_1823b3528)();
  return;
}



// ===== continuation @ rva dd57543 (image 18dd57543) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57543(void)

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



// ===== continuation @ rva dd5768e (image 18dd5768e) =====

void FUN_18dd5768e(void)

{
  return;
}



// ===== continuation @ rva dd575ff (image 18dd575ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd575ff(void)

{
  FUN_190dd9df0();
  (*_DAT_1823b3508)();
  return;
}



// ===== continuation @ rva dd57696 (image 18dd57696) =====

void FUN_18dd57696(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd5767d (image 18dd5767d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5767d(void)

{
  (*_DAT_1823b34e8)();
  return;
}



// ===== continuation @ rva dd5757c (image 18dd5757c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5757c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b3548)();
  return;
}



// ===== continuation @ rva dd57632 (image 18dd57632) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd57632(void)

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



// ===== continuation @ rva dd57656 (image 18dd57656) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57656(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b34d8)();
  return;
}



// ===== continuation @ rva dd575de (image 18dd575de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd575de(void)

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



// ===== continuation @ rva dd577b6 (image 18dd577b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd577b6(void)

{
  FUN_190dd72e0();
  (*_DAT_1823b35d8)();
  return;
}



// ===== continuation @ rva dd57743 (image 18dd57743) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57743(void)

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



// ===== continuation @ rva dd5788e (image 18dd5788e) =====

void FUN_18dd5788e(void)

{
  return;
}



// ===== continuation @ rva dd577ff (image 18dd577ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd577ff(void)

{
  FUN_190dd9df0();
  (*_DAT_1823b35b8)();
  return;
}



// ===== continuation @ rva dd57896 (image 18dd57896) =====

void FUN_18dd57896(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd57832 (image 18dd57832) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd57832(void)

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



// ===== continuation @ rva dd57856 (image 18dd57856) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57856(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b35e8)();
  return;
}



// ===== continuation @ rva dd577de (image 18dd577de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd577de(void)

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



// ===== continuation @ rva dd5787d (image 18dd5787d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5787d(void)

{
  (*_DAT_1823b3628)();
  return;
}



// ===== continuation @ rva dd5777c (image 18dd5777c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5777c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b3618)();
  return;
}



// ===== continuation @ rva dd579c1 (image 18dd579c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd579c1(void)

{
  FUN_190dd72e0();
  (*_DAT_1823b36e8)();
  return;
}



// ===== continuation @ rva dd57948 (image 18dd57948) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57948(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dd57a9e (image 18dd57a9e) =====

void FUN_18dd57a9e(void)

{
  return;
}



// ===== continuation @ rva dd57984 (image 18dd57984) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57984(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b36d8)();
  return;
}



// ===== continuation @ rva dd57aab (image 18dd57aab) =====

void FUN_18dd57aab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd57a8e (image 18dd57a8e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57a8e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_1823b36c8)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva dd57a67 (image 18dd57a67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd57a67(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b3698)();
  return;
}



// ===== continuation @ rva dd579a9 (image 18dd579a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd579a9(void)

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



// ===== continuation @ rva dd579e9 (image 18dd579e9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd579e9(void)

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



// ===== continuation @ rva dd5a54f (image 18dd5a54f) =====

void FUN_18dd5a54f(void)

{
  return;
}



// ===== continuation @ rva dd5a3b3 (image 18dd5a3b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5a3b3(void)

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



// ===== continuation @ rva dd5cda4 (image 18dd5cda4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dd5f05e(void)

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



// ===== continuation @ rva dd62ac2 (image 18dd62ac2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd62ac2(void)

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



// ===== continuation @ rva dd5d83b (image 18dd5d83b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dd5f05e(void)

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



// ===== continuation @ rva dd5eec2 (image 18dd5eec2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd5eec2(void)

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



// ===== continuation @ rva dd62f89 (image 18dd62f89) =====

void FUN_18dd62f89(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva dd5e90d (image 18dd5e90d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dd5f05e(void)

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



// ===== continuation @ rva dd5e1e8 (image 18dd5e1e8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd5e1e8(void)

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



// ===== continuation @ rva dd63262 (image 18dd63262) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd63262(void)

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



// ===== continuation @ rva dd6320e (image 18dd6320e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd6320e(void)

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



// ===== continuation @ rva dd640d5 (image 18dd640d5) =====

void FUN_18dd640d5(void)

{
  return;
}



// ===== continuation @ rva dd63c17 (image 18dd63c17) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd63c17(void)

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



// ===== continuation @ rva dd63bc0 (image 18dd63bc0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd63bc0(void)

{
  FUN_190ddce00();
  (*_DAT_1823b59a8)();
  return;
}



// ===== continuation @ rva dd632eb (image 18dd632eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd632eb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_1823b5998)();
  return;
}



// ===== continuation @ rva dd63289 (image 18dd63289) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd63289(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b5898)();
  return;
}



// ===== continuation @ rva dd640a1 (image 18dd640a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd640a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823b5d78)();
  return;
}



// ===== continuation @ rva dd632bb (image 18dd632bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd632bb(void)

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



// ===== continuation @ rva dd640e4 (image 18dd640e4) =====

void FUN_18dd640e4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd63f71 (image 18dd63f71) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd63f71(void)

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



// ===== continuation @ rva dd6362c (image 18dd6362c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd6362c(void)

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



// ===== continuation @ rva dd6352d (image 18dd6352d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd6352d(void)

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



// ===== continuation @ rva dd661f6 (image 18dd661f6) =====

void FUN_18dd661f6(void)

{
  return;
}



// ===== continuation @ rva dd6425c (image 18dd6425c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd6425c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1823b62e8)();
  return;
}



// ===== continuation @ rva dd652bd (image 18dd652bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd652bd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823b6ad8)();
  return;
}



// ===== continuation @ rva dd66d9a (image 18dd66d9a) =====

void FUN_18dd66d9a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd65468 (image 18dd65468) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd65468(void)

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



// ===== continuation @ rva dd64461 (image 18dd64461) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd64461(void)

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



// ===== continuation @ rva dd66d34 (image 18dd66d34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd66d34(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823b6bf8)();
  return;
}



// ===== continuation @ rva dd65faf (image 18dd65faf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd65faf(void)

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



// ===== continuation @ rva dd6617e (image 18dd6617e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd6617e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823b6778)();
  return;
}



// ===== continuation @ rva dd66964 (image 18dd66964) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd66964(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823b68a8)();
  return;
}



// ===== continuation @ rva dd66597 (image 18dd66597) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd66597(void)

{
  FUN_190dd72e0();
  (*_DAT_1823b6258)();
  return;
}



// ===== continuation @ rva dd646cb (image 18dd646cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd646cb(void)

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



