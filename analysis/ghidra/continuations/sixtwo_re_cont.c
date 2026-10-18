// ===== continuation @ rva 4c44d22 (image 184c44d22) =====

void FUN_184c44d22(void)

{
  return;
}



// ===== continuation @ rva 4c1492f (image 184c1492f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184c14985 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184c1492f(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4c44d8e (image 184c44d8e) =====

void FUN_184c44d8e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 4c17e41 (image 184c17e41) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184c17e58 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184c17e41(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4c17d51 (image 184c17d51) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184c17dab */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184c17d51(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = in_stack_00000048;
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4c44891 (image 184c44891) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c44891(void)

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



// ===== continuation @ rva 4c2a986 (image 184c2a986) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c2a986(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  _DAT_183097c58 = func_0x000184c44f60(_DAT_183097c60 + 0x60ffb0560015ff ^ 0x34);
  _DAT_183097ba8 = (_DAT_183097ba8 ^ _DAT_183097c58) + 0x7d57c2df ^ 0x81fb639144cd7e1c;
  _DAT_183097cb0 = (_DAT_183097cb0 * -0x675b8ae40b997ad3 ^ _DAT_183097ba8) + _DAT_183097c58;
  _DAT_183097b80 = _DAT_183097cb0 ^ _DAT_183097ba8;
  _DAT_183097be8 = 0x7d57c2df;
  uVar4 = (_DAT_183097c98 ^ _DAT_18031efc0) + _DAT_183097c58 + 0x3226ebe3;
  uVar6 = (_DAT_183097c58 ^ _UNK_18031efc8) + _DAT_183097c98 + 0x13a992a8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183097c98 ^ _DAT_18031efc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183097c58 ^ _UNK_18031efc8;
  _DAT_183097b38 =
       func_0x000184c44f60((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183097c98 + 0x13a992a8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183097c58 + 0x3226ebe3));
  _DAT_183097bd8 =
       (_DAT_183097bd8 ^ _DAT_183097b38 & 0x7ffffffffffff) + 0xa5ad5a6e ^ 0xf8b7f17073ac984c;
  _DAT_183097b68 =
       (_DAT_183097b68 * 0xbaa8927037fb51 ^ _DAT_183097bd8) + (_DAT_183097b38 & 0x7ffffffffffff);
  _DAT_183097bc8 = _DAT_183097b68 ^ _DAT_183097bd8;
  _DAT_183097bb0 = 0xa5ad5a6e;
  _DAT_183097cd0 = func_0x000184c44f60(_DAT_183097bd0 + 0xff560002ccffb4ff ^ 0x56);
  _DAT_183097ca0 = (_DAT_183097ca0 ^ _DAT_183097cd0) - 0x81ff9dd2 ^ 0x1e39368fc401a01;
  _DAT_183097bd0 = (_DAT_183097bd0 * -0x602a6c336f58073d ^ _DAT_183097ca0) + _DAT_183097cd0;
  _DAT_183097cc0 = _DAT_183097bd0 ^ _DAT_183097ca0;
  _DAT_183097c00 = 0x7e00622e;
  _DAT_183097be0 = func_0x000184c44f60(_DAT_183097c60 ^ 0xff95fffb07ff32ed);
  uVar4 = _DAT_183097be0 >> 1 | _DAT_183097be0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_183097be0;
  _DAT_183097ca0 = _DAT_183097ca0 ^ uVar4 ^ 0x81ff9ed1;
  _DAT_183097ce8 = (_DAT_183097ce8 ^ uVar4) + 0x81ff9ed1 ^ 0x78dab37a92907680;
  _DAT_183097b90 = (_DAT_183097b90 * -0x1b5e2cefce5286f1 ^ _DAT_183097ce8) + uVar4;
  _DAT_183097c38 = _DAT_183097b90 ^ _DAT_183097ce8;
  _DAT_183097c50 = 0x81ff9ed1;
  uVar4 = (~_DAT_183097c58 + 0x91a5835d) *
          ((_DAT_183097b50 ^ 0x84222325) + (ulonglong)((uint)_DAT_183097b50 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183097ce8) + (uVar4 & _DAT_183097ce8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183097ba8 = func_0x000184c44f60((uVar4 | 0x1587a079) + (ulonglong)((uint)uVar4 & 0x1587a079))
  ;
  _DAT_183097b48 = _DAT_183097b48 - 0x91a5835c ^ 0x99dea223520da8ae;
  _DAT_183097b50 = _DAT_183097c38 * -0x11bf8e8b0d5e144b;
  _DAT_183097c38 = _DAT_183097b50 ^ _DAT_183097b48;
  _DAT_183097c88 = _DAT_183097be8 ^ 0xffffffff6e5a7ca4;
  _DAT_183097b70 = 0x6e5a7ca4;
  uVar4 = (_DAT_183097b00 ^ _DAT_18031efd0) + _DAT_183097b00 + 0x842223da;
  uVar6 = (_DAT_183097b00 ^ _UNK_18031efd8) + _DAT_183097b00 + 0x91a5835c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183097b00 ^ _DAT_18031efd0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183097b00 ^ _UNK_18031efd8;
  _DAT_183097b40 =
       func_0x000184c44f60((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183097b00 + 0x91a5835c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183097b00 + 0x842223da));
  uVar4 = ((_DAT_183097b40 ^ 0x9113ddd8a4) << 0x33 | (_DAT_183097b40 ^ 0x9113ddd8a4) >> 0xd) *
          -0x13719ec63a2d718d;
  uVar6 = uVar4 >> 1 | uVar4;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4;
  _DAT_183097c20 = _DAT_183097c18 ^ uVar4 ^ 0x91a5845b;
  _DAT_183097b68 = (_DAT_183097b68 ^ uVar4) + 0x91a5845b ^ 0x97e8ef760a953353;
  _DAT_183097ce8 = (_DAT_183097ce8 * -0x34c129872db210bf ^ _DAT_183097b68) + uVar4;
  _DAT_183097c80 = _DAT_183097ce8 ^ _DAT_183097b68;
  _DAT_183097c28 = 0x91a5845b;
  uVar4 = (~_DAT_183097ce0 + 0x6e5a7ca5) *
          ((_DAT_183097c00 ^ 0x1587a77e) + (ulonglong)((uint)_DAT_183097c00 & 0x1587a77e) * 2);
  uVar4 = (uVar4 | _DAT_183097b20) + (uVar4 & _DAT_183097b20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183097c48 = func_0x000184c44f60((uVar4 | 0x7bdddbda) + (ulonglong)((uint)uVar4 & 0x7bdddbda))
  ;
  uVar4 = _DAT_183097c48 - (_DAT_183097c48 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183097c48;
  _DAT_183097be8 = _DAT_183097b30 ^ uVar4 ^ 0x1000000ff;
  _DAT_183097ba0 = (_DAT_183097ba0 ^ uVar4) + 0x1000000ff ^ 0x7668f3c3196b8222;
  _DAT_183097b68 = (_DAT_183097b68 * -0x69adad718be7db21 ^ _DAT_183097ba0) + uVar4;
  _DAT_183097c30 = _DAT_183097b68 ^ _DAT_183097ba0;
  _DAT_183097c08 = 0xff;
  _DAT_183097c58 = func_0x000184c44f60(_DAT_183097cb8 ^ 0xff4b00052a00da23);
  _DAT_183097b70 = _DAT_183097be8 ^ _DAT_183097c58 ^ 0x1000000ff;
  _DAT_183097c60 = (_DAT_183097c60 ^ _DAT_183097c58) + 0x1000000ff ^ 0x7ac5eef4a2566d70;
  _DAT_183097b50 = (_DAT_183097b50 * 0xa058497579a7c6b ^ _DAT_183097c60) + _DAT_183097c58;
  _DAT_183097cf8 = _DAT_183097b50 ^ _DAT_183097c60;
  _DAT_183097c40 = 0xff;
  uVar4 = (_DAT_183097be0 ^ _DAT_18031efe0) + _DAT_183097c00 + 0xf975e1fa;
  uVar6 = (_DAT_183097c00 ^ _UNK_18031efe8) + _DAT_183097be0 + 0xa5ad5a6e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183097be0 ^ _DAT_18031efe0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183097c00 ^ _UNK_18031efe8;
  _DAT_183097ca0 =
       func_0x000184c44f60((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183097be0 + 0xa5ad5a6e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183097c00 + 0xf975e1fa));
  uVar4 = _DAT_183097ca0 ^ 0xfdffdaff;
  uVar4 = (uVar4 << 0x29 | uVar4 >> 0x17) << 0x10 | (uVar4 & 0x7fffff) >> 7;
  _DAT_183097c78 = _DAT_183097b80 ^ uVar4 ^ 0x123051d4d;
  _DAT_183097b18 = (_DAT_183097b18 ^ uVar4) + 0x123051d4d ^ 0xdeb9ae79588f80de;
  _DAT_183097c48 = (_DAT_183097c48 * 0x41dff7b4e391e0dd ^ _DAT_183097b18) + uVar4;
  _DAT_183097b80 = _DAT_183097c48 ^ _DAT_183097b18;
  _DAT_183097b88 = 0x23051d4d;
  _DAT_183097c10 = func_0x000184c44f60(_DAT_183097c30 + 0xff4b00238bff57ff ^ 0x93);
  uVar4 = (_DAT_183097c10 ^ 0xa5ad5a6e) << 0x19 | _DAT_183097c10 >> 0x27;
  _DAT_183097bd0 = (_DAT_183097bd0 ^ uVar4) + 0xd8fa98b1 ^ 0x2c11b16fa97c65dc;
  _DAT_183097ba0 = (_DAT_183097ba0 * 0x6d41e6dfa46e2b3 ^ _DAT_183097bd0) + uVar4;
  _DAT_183097b88 = _DAT_183097ba0 ^ _DAT_183097bd0;
  _DAT_183097ba8 = 0xd8fa98b1;
  uVar4 = (~_DAT_183097c98 + 0xa5ad5a6f) *
          ((_DAT_183097c48 ^ 0xf975e1fa) + (ulonglong)((uint)_DAT_183097c48 & 0xf975e1fa) * 2);
  uVar4 = (uVar4 | _DAT_183097ca0) + (uVar4 & _DAT_183097ca0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183097bb8 = func_0x000184c44f60((uVar4 | 0x5cd8bb94) + (ulonglong)((uint)uVar4 & 0x5cd8bb94))
  ;
  uVar4 = _DAT_183097bb8 >> 1 | _DAT_183097bb8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183097bb8;
  _DAT_183097b80 = (_DAT_183097b80 ^ uVar4) + 0x2505424e ^ 0xe9cfdd71501e071e;
  _DAT_183097bd8 = (_DAT_183097bd8 * -0x68ac1cd1d86358f7 ^ _DAT_183097b80) + uVar4;
  _DAT_183097cf0 = _DAT_183097bd8 ^ _DAT_183097b80;
  _DAT_183097c38 = 0x2505424e;
  uVar4 = (_DAT_183097b68 ^ _DAT_18031eff0) + _DAT_183097c88 + 0x5cd8bb94;
  uVar6 = (_DAT_183097c88 ^ _UNK_18031eff8) + _DAT_183097b68 + 0x4a0a849c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183097b68 ^ _DAT_18031eff0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183097c88 ^ _UNK_18031eff8;
  _DAT_183097ce8 =
       func_0x000184c44f60((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183097b68 + 0x4a0a849c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183097c88 + 0x5cd8bb94));
  uVar4 = _DAT_183097ce8 & 0xffffffffe0000000;
  _DAT_183097bc0 = _DAT_183097c20 ^ uVar4 ^ 0x123051d4d;
  _DAT_183097c70 = (_DAT_183097c70 ^ uVar4) + 0x123051d4d ^ 0x5d11b930797b65e3;
  _DAT_183097c18 = (_DAT_183097c18 * 0x4dec06b7a725b1e3 ^ _DAT_183097c70) + uVar4;
  _DAT_183097bc8 = _DAT_183097c18 ^ _DAT_183097c70;
  _DAT_183097b08 = 0x23051d4d;
  uVar4 = ((_DAT_183097c18 ^ 0x842223da) + (ulonglong)((uint)_DAT_183097c18 & 0x842223da) * 2) *
          -_DAT_183097b50;
  uVar4 = (uVar4 | _DAT_183097b50) + (uVar4 & _DAT_183097b50);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183097bc8 = func_0x000184c44f60((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  uVar4 = _DAT_183097bc8 ^ 0xff;
  _DAT_183097c00 = _DAT_183097cc0 ^ uVar4 ^ 0xff;
  _DAT_183097cf8 = (_DAT_183097cf8 ^ uVar4) + 0xff ^ 0xb91edaf539a2562;
  _DAT_183097cc0 = (_DAT_183097cc0 * 0xb72b0c447f83405 ^ _DAT_183097cf8) + uVar4;
  _DAT_183097c50 = _DAT_183097cc0 ^ _DAT_183097cf8;
  _DAT_183097be8 = 0xff;
  uVar4 = (_DAT_183097b48 ^ _DAT_18031f000) + _DAT_183097b80 + 0xf975e1fa;
  uVar6 = (_DAT_183097b80 ^ _UNK_18031f008) + _DAT_183097b48 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183097b48 ^ _DAT_18031f000;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183097b80 ^ _UNK_18031f008;
  uVar4 = func_0x000184c44f60((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183097b48 + 0xffffffff) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183097b80 + 0xf975e1fa));
  _DAT_183097c58 = (_DAT_183097c58 ^ uVar4 ^ 0x7d57c2defffffffe) + 0x82a83d20 ^ 0xdf7b0098726e2089;
  _DAT_183097b30 =
       (_DAT_183097b30 * 0x6b5bf8f2e9277101 ^ _DAT_183097c58) + (uVar4 ^ 0x7d57c2defffffffe);
  _DAT_183097b18 = _DAT_183097b30 ^ _DAT_183097c58;
  _DAT_183097b08 = 0x82a83d20;
  _DAT_183097b48 = func_0x000184c44f60(_DAT_183097b10 ^ 0xffb4002bca00d4f6);
  uVar4 = _DAT_183097b48 >> 1 | _DAT_183097b48;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183097b48;
  uVar4 = uVar6 >> 1 | uVar6;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar6;
  _DAT_183097b18 = _DAT_183097b18 ^ uVar6 ^ 0x3dbfdafda068cb9b;
  _DAT_183097b10 = (_DAT_183097b10 * 0x64baabaf1f03338b ^ _DAT_183097b18) + uVar6;
  _DAT_183097cd0 = _DAT_183097b10 ^ _DAT_183097b18;
  _DAT_183097cd8 = 0;
  _DAT_183097c18 = func_0x000184c44f60(_DAT_183097c88 ^ 0x20ff8455ffe104);
  uVar4 = _DAT_183097c18 ^ 0xff;
  _DAT_183097b28 = _DAT_183097c80 ^ uVar4 ^ 0xff;
  _DAT_183097ba8 = (_DAT_183097ba8 ^ uVar4) + 0xff ^ 0xe00e8740e1d37021;
  _DAT_183097ca8 = (_DAT_183097ca8 * 0x776010abed058c21 ^ _DAT_183097ba8) + uVar4;
  _DAT_183097c50 = _DAT_183097ca8 ^ _DAT_183097ba8;
  _DAT_183097cc0 = 0xff;
  _DAT_183097c58 = func_0x000184c44f60(_DAT_183097c20 ^ 0x1f008425001d0b);
  _DAT_183097c98 = _DAT_183097c98 ^ _DAT_183097c58 ^ 0x695742c9 ^ 0x2d8d255eacc03f26;
  _DAT_183097b70 =
       (_DAT_183097b70 * -0x2b6d03795b58a403 ^ _DAT_183097c98) + (_DAT_183097c58 ^ 0x695742c9);
  _DAT_183097b68 = _DAT_183097b70 ^ _DAT_183097c98;
  _DAT_183097b40 = 0;
  _DAT_183097cf0 = func_0x000184c44f60(_DAT_183097bd8 ^ 0xffe0ff7b55ffddde);
  uVar4 = (ulonglong)(~(uint)_DAT_183097cf0 & 0xff);
  _DAT_183097c00 = _DAT_183097b00 ^ uVar4 ^ 0xff;
  _DAT_183097bf8 = (_DAT_183097bb8 ^ uVar4) + 0xff ^ 0x55cf1e9c1c5f7c19;
  _DAT_183097bb8 = (_DAT_183097bb8 * -0x5a8518ba8f318505 ^ _DAT_183097bf8) + uVar4;
  _DAT_183097bf8 = _DAT_183097bb8 ^ _DAT_183097bf8;
  auVar8._8_8_ = unaff_XMM9_Qb;
  auVar8._0_8_ = (ulonglong)(uint)(int)cVar1 ^ 0x84222325;
  auVar9 = pshufb(auVar8 ^ _DAT_18031f010,_DAT_1800170c0);
  _DAT_183097b70 = 0xff;
  uVar6 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar6 + _DAT_183097b10;
  if (auVar9._4_4_ < 0) {
    uVar4 = _DAT_183097b58 ^ uVar6;
  }
  _DAT_183097c60 = func_0x000184c44f60(SUB161(auVar8 ^ _DAT_18031f010,5) ^ uVar4);
  _DAT_183097b60 = (ulonglong)(uint)(int)cVar1 & 0xff;
  _DAT_183097c78 =
       (_DAT_183097c78 ^ _DAT_183097c60 & 0x7fffffffffffffff) + _DAT_183097b60 ^ 0xd9df79ba1260133a;
  _DAT_183097c10 =
       (_DAT_183097c10 * 0x3710147853a03609 ^ _DAT_183097c78) +
       (_DAT_183097c60 & 0x7fffffffffffffff);
  _DAT_183097c38 = _DAT_183097c10 ^ _DAT_183097c78;
  uVar6 = _DAT_183097b60 << 0x28;
  uVar4 = in_stack_00000050 ^ 0x84222325 ^ _DAT_183097c78;
  lVar3 = (in_stack_00000050 ^ 0x84222325) + _DAT_183097ca8;
  uVar5 = uVar4 + lVar3;
  uVar7 = (uVar6 ^ _DAT_183097ca8) + _DAT_183097c78 + uVar6;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6 ^ _DAT_183097ca8;
  _DAT_183097ba0 =
       func_0x000184c44f60((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183097c78 + uVar6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  _DAT_183097b38 = uVar6 | in_stack_00000050;
  _DAT_183097cb0 =
       (_DAT_183097cb0 ^ in_stack_00000050 ^ _DAT_183097ba0) + _DAT_183097b38 ^ 0x5e08165c2bb1771d;
  _DAT_183097c48 =
       (_DAT_183097c48 * -0x3199e83f253e4a17 ^ _DAT_183097cb0) +
       (in_stack_00000050 ^ _DAT_183097ba0);
  _DAT_183097be0 = _DAT_183097c48 ^ _DAT_183097cb0;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar2 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4c345b0 (image 184c345b0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184c345f3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184c345b0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4c447b0 (image 184c447b0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c447b0(void)

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



// ===== continuation @ rva 4c22057 (image 184c22057) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184c22091 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184c22057(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4c3008d (image 184c3008d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184c300c3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184c3008d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4bb872b (image 184bb872b) =====

void FUN_184bb872b(void)

{
  return;
}



// ===== continuation @ rva 4bb5104 (image 184bb5104) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb5104(void)

{
  FUN_190ddce00();
  (*_DAT_180307b08)();
  return;
}



// ===== continuation @ rva 4bb871c (image 184bb871c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb871c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180307998)();
  return;
}



// ===== continuation @ rva 4bb7f77 (image 184bb7f77) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb7f77(void)

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



// ===== continuation @ rva 4bb8477 (image 184bb8477) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8477(void)

{
  (*_DAT_180307c08)();
  return;
}



// ===== continuation @ rva 4bb79a2 (image 184bb79a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb79a2(void)

{
  FUN_190dd9df0();
  (*_DAT_180307918)();
  return;
}



// ===== continuation @ rva 4bb8797 (image 184bb8797) =====

void FUN_184bb8797(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bb84b1 (image 184bb84b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb84b1(void)

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



// ===== continuation @ rva 4bb820f (image 184bb820f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb820f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1803078f8)();
  return;
}



// ===== continuation @ rva 4bb8096 (image 184bb8096) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8096(void)

{
  FUN_190de3220();
  (*_DAT_180307988)();
  return;
}



// ===== continuation @ rva 4bb857d (image 184bb857d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb857d(void)

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



// ===== continuation @ rva 4bb8609 (image 184bb8609) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8609(void)

{
  FUN_190de3220();
  (*_DAT_180307b88)();
  return;
}



// ===== continuation @ rva 4b628af (image 184b628af) =====

void FUN_184b628af(void)

{
  return;
}



// ===== continuation @ rva 4b606a7 (image 184b606a7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b606a7(void)

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



// ===== continuation @ rva 4b63ec3 (image 184b63ec3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b63ec3(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + -8) = uVar2;
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4b63c1b (image 184b63c1b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b63c1b(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  *(undefined8 *)(unaff_RBP + -0x10) = in_RAX;
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4b64e1a (image 184b64e1a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b64e1a(void)

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



// ===== continuation @ rva 4b63dbe (image 184b63dbe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b63dbe(void)

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



// ===== continuation @ rva 4b64f49 (image 184b64f49) =====

void FUN_184b64f49(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 4b643fd (image 184b643fd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b643fd(void)

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



// ===== continuation @ rva 4b63be4 (image 184b63be4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b63be4(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + -0x10) = uVar2;
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4b86f8b (image 184b86f8b) =====

void FUN_184b86f8b(void)

{
  return;
}



// ===== continuation @ rva 4b7e2f0 (image 184b7e2f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b7e2f0(void)

{
  FUN_190ddce00();
  (*_DAT_1802fc0a8)();
  return;
}



// ===== continuation @ rva 4b86ff7 (image 184b86ff7) =====

void FUN_184b86ff7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4b86d73 (image 184b86d73) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b86d73(void)

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



// ===== continuation @ rva 4b863b7 (image 184b863b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b863b7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1802fb6c8)();
  return;
}



// ===== continuation @ rva 4b8625b (image 184b8625b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b8625b(void)

{
  FUN_190dd72e0();
  (*_DAT_1802fb488)();
  return;
}



// ===== continuation @ rva 4b84526 (image 184b84526) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b84526(void)

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



// ===== continuation @ rva 4b8383f (image 184b8383f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b8383f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1802fc348)();
  return;
}



// ===== continuation @ rva 4b81e05 (image 184b81e05) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b81e05(void)

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



// ===== continuation @ rva 4b81d3f (image 184b81d3f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b81d3f(void)

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



// ===== continuation @ rva 4b86f7a (image 184b86f7a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b86f7a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1802fbf18)();
  return;
}



// ===== continuation @ rva 4b83b52 (image 184b83b52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b83b52(void)

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



// ===== continuation @ rva 4b8515e (image 184b8515e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b8515e(void)

{
  (*_DAT_1802fc3b8)();
  return;
}



// ===== continuation @ rva 4b84943 (image 184b84943) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b84943(void)

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



// ===== continuation @ rva 4bbe453 (image 184bbe453) =====

void FUN_184bbe453(void)

{
  return;
}



// ===== continuation @ rva 4bb9434 (image 184bb9434) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb9434(void)

{
  FUN_190ddce00();
  (*_DAT_180309238)();
  return;
}



// ===== continuation @ rva 4bbe4d0 (image 184bbe4d0) =====

void FUN_184bbe4d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bbcbd9 (image 184bbcbd9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbcbd9(void)

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



// ===== continuation @ rva 4bbcb5d (image 184bbcb5d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbcb5d(void)

{
  FUN_190dd72e0();
  (*_DAT_180309b38)();
  return;
}



// ===== continuation @ rva 4bbcae0 (image 184bbcae0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbcae0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180309798)();
  return;
}



// ===== continuation @ rva 4bbc59f (image 184bbc59f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbc59f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x198))();
  (*_DAT_180309458)();
  return;
}



// ===== continuation @ rva 4bbc203 (image 184bbc203) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbc203(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180309768)();
  return;
}



// ===== continuation @ rva 4bbe442 (image 184bbe442) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe442(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1803097d8)();
  return;
}



// ===== continuation @ rva 4bbdc28 (image 184bbdc28) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbdc28(void)

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



// ===== continuation @ rva 4bbd168 (image 184bbd168) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbd168(void)

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



// ===== continuation @ rva 4bb9501 (image 184bb9501) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb9501(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar29;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar47;
  undefined1 auVar48 [16];
  ulonglong uVar50;
  undefined1 auVar49 [16];
  uint uVar52;
  undefined1 auVar51 [16];
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  undefined1 auVar56 [16];
  ulonglong uVar58;
  undefined1 auVar57 [16];
  ulonglong in_stack_00000030;
  undefined1 in_stack_00000060 [16];
  undefined1 in_stack_00000070 [16];
  ulonglong uStack0000000000000090;
  ulonglong uStack0000000000000098;
  
  uVar32 = _DAT_180308c88;
  uVar30 = _DAT_180308c80;
  auVar18 = _DAT_1800170c0;
  uStack0000000000000098 = in_stack_00000030;
  auVar17._8_8_ = 0x7da70a2736a79e58;
  auVar17._0_8_ = _DAT_180308c88 ^ 0x84222325;
  uStack0000000000000090 = _DAT_180308c80 | 0xc4a01dbf597ace1b;
  auVar16 = pshufb(auVar17 ^ _DAT_180309bc0,_DAT_1800170c0);
  uVar10 = auVar16._8_8_ + auVar16._0_8_;
  uVar9 = uVar10 + _DAT_1830957a0;
  if (auVar16._4_4_ < 0) {
    uVar9 = _DAT_183095cf0 ^ uVar10;
  }
  _DAT_183095840 = func_0x000184bbe540(SUB161(auVar17 ^ _DAT_180309bc0,5) ^ uVar9);
  uVar9 = (uVar32 ^ ((uVar32 | 0x7da70a2736a79e58) ^ _DAT_183095840) & 0x7fffffffff) *
          -0x7ffeb081a8dcdf3d;
  uVar10 = uVar32 ^ 0x7da70a2736a79e58;
  _DAT_183095dd0 = (_DAT_183095dd0 ^ uVar9) + uVar10 ^ 0x348756e15e7e152d;
  _DAT_183095e20 = (_DAT_183095e20 * 0x240ef37592fa4241 ^ _DAT_183095dd0) + uVar9;
  _DAT_183095860 = _DAT_183095e20 ^ _DAT_183095dd0;
  lVar8 = uVar30 * uVar30;
  uVar13 = lVar8 * 0x511e1c65415467e3;
  uVar30 = (_DAT_183095c48 ^ 0x84222325) + _DAT_183095840 + 0x84222325;
  uVar9 = (uVar13 ^ _DAT_183095840) + _DAT_183095c48 + uVar13;
  uVar30 = (uVar30 * 0x2000 | uVar30 >> 0x33) ^ _DAT_183095c48 ^ 0x84222325;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar13 ^ _DAT_183095840;
  _DAT_1830957f8 = uVar10;
  _DAT_183095d20 =
       func_0x000184bbe540((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183095c48 + uVar13) ^
                           (uVar30 << 0x1d | uVar30 >> 0x23) - (_DAT_183095840 + 0x84222325));
  uVar14 = lVar8 * -0x511e1c65415467e3;
  _DAT_183095a00 =
       (_DAT_183095a00 ^ _DAT_183095d20) + lVar8 * -0x511e1c65415467e3 ^ 0x1104523b71a33b09;
  _DAT_183095c98 = (_DAT_183095c98 * -0x2ae09256d1a96ea9 ^ _DAT_183095a00) + _DAT_183095d20;
  _DAT_183095928 = _DAT_183095c98 ^ _DAT_183095a00;
  auVar16._8_8_ = uVar13;
  auVar16._0_8_ = _DAT_180309bd0;
  auVar17 = pshufb(auVar16 ^ _DAT_180309be0,auVar18);
  uVar9 = auVar17._8_8_ + auVar17._0_8_;
  uVar30 = uVar9 + _DAT_183095aa0;
  if (auVar17._4_4_ < 0) {
    uVar30 = _DAT_183095d50 ^ uVar9;
  }
  _DAT_183095d60 = uVar14;
  _DAT_183095930 = func_0x000184bbe540(SUB161(auVar16 ^ _DAT_180309be0,5) ^ uVar30);
  uVar15 = (uint)(uVar13 >> 0x20);
  auVar45._8_4_ = (int)uVar13;
  auVar45._0_8_ = uVar13;
  auVar45._12_4_ = uVar15;
  auVar48 = auVar45 & _DAT_180309bf0;
  auVar17 = auVar45 ^ _DAT_180309bf0;
  auVar34._8_4_ = 0xffffffff;
  auVar34._0_8_ = 0xffffffffffffffff;
  auVar34._12_4_ = 0xffffffff;
  auVar34 = auVar45 ^ auVar34;
  uVar33 = auVar48._0_4_;
  uVar9 = auVar48._8_8_;
  uVar29 = auVar17._0_4_;
  uVar31 = auVar17._8_4_;
  uVar53 = auVar17._8_8_ >> 0x20;
  uVar30 = _DAT_183095930 << 1 | (ulonglong)(_DAT_183095930 < 0);
  auVar16 = auVar45 | _DAT_180309bf0;
  auVar51._0_8_ =
       (ulonglong)auVar34._0_4_ * (ulonglong)_DAT_180309c60 +
       ((_DAT_180309c70 & 0xffffffff) * (ulonglong)auVar34._0_4_ +
        (auVar34._0_8_ >> 0x20) * (ulonglong)_DAT_180309c60 << 0x20) +
       (_DAT_180309c40 & 0xffffffff) * (ulonglong)uVar29 +
       ((_DAT_180309c50 & 0xffffffff) * (ulonglong)uVar29 +
        (auVar17._0_8_ >> 0x20) * (_DAT_180309c40 & 0xffffffff) << 0x20) +
       (_DAT_180309c20 & 0xffffffff) * (ulonglong)uVar33 +
       ((_DAT_180309c30 & 0xffffffff) * (ulonglong)uVar33 +
        (auVar48._0_8_ >> 0x20) * (_DAT_180309c20 & 0xffffffff) << 0x20) +
       (_DAT_180309c00 & 0xffffffff) * (uVar13 & 0xffffffff) +
       ((_DAT_180309c10 & 0xffffffff) * (uVar13 & 0xffffffff) +
        (ulonglong)uVar15 * (_DAT_180309c00 & 0xffffffff) << 0x20) +
       (-((ulonglong)uVar29 * (ulonglong)_DAT_180309cb0 +
          ((auVar17._0_8_ >> 0x20) * (ulonglong)_DAT_180309cb0 +
           (_DAT_180309ca0 & 0xffffffff) * (ulonglong)uVar29 << 0x20) +
         (ulonglong)uVar33 * (ulonglong)_DAT_180309cb0 +
         ((auVar48._0_8_ >> 0x20) * (ulonglong)_DAT_180309cb0 +
          (ulonglong)uVar33 * (_DAT_180309ca0 & 0xffffffff) << 0x20)) -
       ((ulonglong)auVar16._0_4_ * (ulonglong)_DAT_180309cc0 +
       ((_DAT_180309cd0 & 0xffffffff) * (ulonglong)auVar16._0_4_ +
        (auVar16._0_8_ >> 0x20) * (ulonglong)_DAT_180309cc0 << 0x20))) + _DAT_180309ce0;
  auVar51._8_8_ =
       (auVar34._8_8_ & 0xffffffff) * (ulonglong)_UNK_180309c68 +
       ((_UNK_180309c78 & 0xffffffff) * (ulonglong)auVar34._8_4_ +
        (auVar34._8_8_ >> 0x20) * (ulonglong)_UNK_180309c68 << 0x20) +
       (_UNK_180309c48 & 0xffffffff) * (ulonglong)uVar31 +
       ((_UNK_180309c58 & 0xffffffff) * (ulonglong)uVar31 + uVar53 * (_UNK_180309c48 & 0xffffffff)
       << 0x20) +
       (_UNK_180309c28 & 0xffffffff) * (ulonglong)auVar48._8_4_ +
       ((_UNK_180309c38 & 0xffffffff) * (ulonglong)auVar48._8_4_ +
        (uVar9 >> 0x20) * (_UNK_180309c28 & 0xffffffff) << 0x20) +
       (_UNK_180309c08 & 0xffffffff) * (uVar13 & 0xffffffff) +
       ((_UNK_180309c18 & 0xffffffff) * (uVar13 & 0xffffffff) +
        (auVar45._8_8_ >> 0x20) * (_UNK_180309c08 & 0xffffffff) << 0x20) +
       (-((auVar17._8_8_ & 0xffffffff) * (ulonglong)_UNK_180309cb8 +
          (uVar53 * _UNK_180309cb8 + (_UNK_180309ca8 & 0xffffffff) * (ulonglong)uVar31 << 0x20) +
         (uVar9 & 0xffffffff) * (ulonglong)_UNK_180309cb8 +
         ((uVar9 >> 0x20) * (ulonglong)_UNK_180309cb8 +
          (uVar9 & 0xffffffff) * (_UNK_180309ca8 & 0xffffffff) << 0x20)) -
       ((auVar16._8_8_ & 0xffffffff) * (ulonglong)_UNK_180309cc8 +
       ((_UNK_180309cd8 & 0xffffffff) * (ulonglong)auVar16._8_4_ +
        (auVar16._8_8_ >> 0x20) * (ulonglong)_UNK_180309cc8 << 0x20))) + _UNK_180309ce8;
  _DAT_183095d88 = _DAT_183095cb8 ^ uVar30 ^ auVar51._0_8_;
  _DAT_183095dc8 = (_DAT_183095dc8 ^ uVar30) + auVar51._0_8_ ^ 0xe7cf2716d737b7a7;
  _DAT_183095a98 = (_DAT_183095a98 * 0x129474ef02855eaf ^ _DAT_183095dc8) + uVar30;
  _DAT_183095d58 = _DAT_183095a98 ^ _DAT_183095dc8;
  auVar48._8_8_ = uVar14;
  auVar48._0_8_ = auVar51._0_8_ ^ 0x84222325;
  auVar18 = pshufb(auVar48 ^ _DAT_180309cf0,auVar18);
  uVar9 = auVar18._8_8_ + auVar18._0_8_;
  uVar30 = uVar9 + _DAT_183095dc0;
  if (auVar18._4_4_ < 0) {
    uVar30 = _DAT_183095ea8 ^ uVar9;
  }
  _DAT_183095c88 = auVar51._0_8_;
  _DAT_183095c58 = func_0x000184bbe540(SUB161(auVar48 ^ _DAT_180309cf0,5) ^ uVar30);
  in_stack_00000060._8_8_ = 0;
  in_stack_00000060._0_8_ = uVar14;
  uVar30 = (uVar14 | auVar51._0_8_) ^ _DAT_183095c58 ^ uVar14;
  uVar52 = (uint)(auVar51._0_8_ >> 0x20);
  auVar36._8_4_ = (int)auVar51._0_8_;
  auVar36._0_8_ = auVar51._0_8_;
  auVar36._12_4_ = uVar52;
  uVar33 = (uint)(uVar14 >> 0x20);
  auVar35._8_4_ = (int)uVar14;
  auVar35._0_8_ = uVar14;
  auVar35._12_4_ = uVar33;
  uVar9 = (auVar51._0_8_ & 0xffffffff) * (uVar14 & 0xffffffff) +
          ((ulonglong)uVar52 * (uVar14 & 0xffffffff) +
           (auVar51._0_8_ & 0xffffffff) * (ulonglong)uVar33 << 0x20);
  uVar31 = SUB164(auVar36 & auVar35,0);
  uVar15 = SUB164(auVar36 | auVar35,0);
  uVar47 = SUB164(auVar51 ^ in_stack_00000060,0);
  uVar30 = uVar30 << 0xd | uVar30 >> 0x33;
  lVar8 = (uVar9 & 0xffffffff) * (ulonglong)_DAT_180309d80 +
          ((ulonglong)_DAT_180309d90 * (uVar9 & 0xffffffff) +
           (uVar9 >> 0x20) * (ulonglong)_DAT_180309d80 << 0x20);
  auVar42._8_4_ = 0xffffffff;
  auVar42._0_8_ = 0xffffffffffffffff;
  auVar42._12_4_ = 0xffffffff;
  uVar29 = SUB164(auVar36 ^ auVar42,0);
  uVar39 = SUB164(in_stack_00000060 ^ auVar42,0);
  uVar9 = (((ulonglong)uVar47 * (ulonglong)_DAT_180309d60 +
            ((ulonglong)_DAT_180309d70 * (ulonglong)uVar47 +
             (SUB168(auVar51 ^ in_stack_00000060,0) >> 0x20) * (ulonglong)_DAT_180309d60 << 0x20) +
            (ulonglong)uVar15 * (ulonglong)_DAT_180309d40 +
            ((ulonglong)_DAT_180309d50 * (ulonglong)uVar15 +
             (SUB168(auVar36 | auVar35,0) >> 0x20) * (ulonglong)_DAT_180309d40 << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_180309d20 +
            ((ulonglong)_DAT_180309d30 * (ulonglong)uVar31 +
             (SUB168(auVar36 & auVar35,0) >> 0x20) * (ulonglong)_DAT_180309d20 << 0x20) +
            (ulonglong)_DAT_180309d10 * (uVar14 & 0xffffffff) +
            ((ulonglong)uVar33 * (ulonglong)_DAT_180309d10 +
             (ulonglong)_DAT_180309d00 * (uVar14 & 0xffffffff) << 0x20) +
            (auVar51._0_8_ & 0xffffffff) * (ulonglong)_DAT_180309d10 +
            ((ulonglong)uVar52 * (ulonglong)_DAT_180309d10 +
             (auVar51._0_8_ & 0xffffffff) * (ulonglong)_DAT_180309d00 << 0x20) + lVar8) -
          ((ulonglong)uVar39 * (ulonglong)_DAT_180309dd0 +
           ((SUB168(in_stack_00000060 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_180309dd0 +
            (ulonglong)_DAT_180309dc0 * (ulonglong)uVar39 << 0x20) +
           (uVar14 & 0xffffffff) * (ulonglong)_DAT_180309dd0 +
           ((ulonglong)uVar33 * (ulonglong)_DAT_180309dd0 +
            (uVar14 & 0xffffffff) * (ulonglong)_DAT_180309dc0 << 0x20) +
           (auVar51._0_8_ & 0xffffffff) * (ulonglong)_DAT_180309db0 +
           ((ulonglong)uVar52 * (ulonglong)_DAT_180309db0 +
            (auVar51._0_8_ & 0xffffffff) * (ulonglong)_DAT_180309da0 << 0x20) +
           (ulonglong)uVar29 * (ulonglong)_DAT_180309db0 +
           ((SUB168(auVar36 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_180309db0 +
            (ulonglong)_DAT_180309da0 * (ulonglong)uVar29 << 0x20) + lVar8)) + 0x16239b8a432a19e6;
  _DAT_183095ad0 = _DAT_183095b90 ^ uVar30 ^ uVar9;
  _DAT_183095920 = (_DAT_183095920 ^ uVar30) + uVar9 ^ 0x117911013952712f;
  _DAT_183095a78 = (_DAT_183095a78 * 0x5501b10d1f1c25e5 ^ _DAT_183095920) + uVar30;
  _DAT_183095cc0 = _DAT_183095a78 ^ _DAT_183095920;
  _DAT_1830958d8 = _DAT_183095ce0 ^ uVar9;
  lVar8 = uVar32 * uVar32;
  uVar14 = lVar8 * -0x1c058f65f90058f4;
  uVar30 = (_DAT_183095d78 ^ 0x84222325) + _DAT_183095e68 + 0x84222325;
  uVar13 = (uVar14 ^ _DAT_183095e68) + _DAT_183095d78 + uVar14;
  uVar30 = (uVar30 * 0x2000 | uVar30 >> 0x33) ^ _DAT_183095d78 ^ 0x84222325;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar14 ^ _DAT_183095e68;
  _DAT_183095ce0 = uVar9;
  _DAT_183095a70 =
       func_0x000184bbe540((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183095d78 + uVar14) ^
                           (uVar30 << 0x1d | uVar30 >> 0x23) - (_DAT_183095e68 + 0x84222325));
  uVar30 = _DAT_183095a70 >> 1 | _DAT_183095a70;
  uVar30 = uVar30 >> 2 | uVar30;
  uVar30 = uVar30 >> 4 | uVar30;
  uVar30 = uVar30 >> 8 | uVar30;
  uVar30 = uVar30 >> 0x10 | uVar30;
  uVar30 = uVar30 >> 0x20 | uVar30;
  uVar30 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
  uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
  uVar30 = (0x40 - (((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           _DAT_183095a70;
  uVar13 = lVar8 * 0x1c058f65f90058f4;
  _DAT_183095a68 = (_DAT_183095a68 ^ uVar30) + lVar8 * 0x1c058f65f90058f4 ^ 0xa367e8a6c0593494;
  _DAT_183095778 = (_DAT_183095778 * 0x68b9fc0204b0fdf1 ^ _DAT_183095a68) + uVar30;
  _DAT_183095df0 = _DAT_183095778 ^ _DAT_183095a68;
  uVar9 = uVar9 + uVar14;
  uVar30 = uVar9 ^ 0x84222325 ^ _DAT_183095ad0;
  lVar11 = (uVar9 ^ 0x84222325) + _DAT_1830958a0;
  lVar8 = _DAT_183095ad0 + lVar8 * 0x1c058f65f90058f4;
  uVar14 = uVar30 + lVar11;
  uVar53 = (uVar13 ^ _DAT_1830958a0) + lVar8;
  uVar30 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar30;
  uVar14 = (uVar53 * 0x2000 | uVar53 >> 0x33) ^ uVar13 ^ _DAT_1830958a0;
  _DAT_183095ee0 = uVar13;
  _DAT_183095c68 =
       func_0x000184bbe540((uVar14 << 0x1d | uVar14 >> 0x23) - lVar8 ^
                           (uVar30 << 0x1d | uVar30 >> 0x23) - lVar11);
  uVar15 = (uint)(uVar9 >> 0x20);
  in_stack_00000070._8_4_ = (int)uVar9;
  in_stack_00000070._0_8_ = uVar9;
  in_stack_00000070._12_4_ = uVar15;
  uVar29 = (uint)(uVar13 >> 0x20);
  in_stack_00000060._8_4_ = (int)uVar13;
  in_stack_00000060._0_8_ = uVar13;
  in_stack_00000060._12_4_ = uVar29;
  uVar12 = in_stack_00000070._8_8_;
  uVar53 = uVar12 >> 0x20;
  auVar16 = in_stack_00000070 & in_stack_00000060;
  auVar17 = in_stack_00000070 | in_stack_00000060;
  uVar54 = in_stack_00000060._8_8_;
  uVar55 = (uVar12 & 0xffffffff) * (uVar13 & 0xffffffff) +
           (uVar53 * (uVar13 & 0xffffffff) + (uVar12 & 0xffffffff) * (uVar54 >> 0x20) << 0x20);
  uVar50 = auVar16._8_8_;
  auVar18._8_4_ = 0xffffffff;
  auVar18._0_8_ = 0xffffffffffffffff;
  auVar18._12_4_ = 0xffffffff;
  auVar18 = in_stack_00000070 ^ auVar18;
  uVar31 = auVar18._0_4_;
  uVar33 = auVar18._8_4_;
  uVar14 = auVar18._8_8_ >> 0x20;
  uVar30 = (uVar9 * uVar13 ^ _DAT_183095c68) & 0xfffffffff0000000;
  lVar8 = (uVar55 & 0xffffffff) * (ulonglong)_UNK_180309e68 +
          ((_UNK_180309e78 & 0xffffffff) * (uVar55 & 0xffffffff) +
           (uVar55 >> 0x20) * (ulonglong)_UNK_180309e68 << 0x20);
  uVar55 = uVar13 ^ _DAT_18001a710;
  uVar58 = uVar54 ^ _UNK_18001a718;
  uVar55 = (((_DAT_180309e20 & 0xffffffff) * (ulonglong)uVar31 +
             ((_DAT_180309e50 & 0xffffffff) * (ulonglong)uVar31 +
              (auVar18._0_8_ >> 0x20) * (_DAT_180309e20 & 0xffffffff) << 0x20) +
            (ulonglong)auVar17._0_4_ * (ulonglong)_DAT_180309e40 +
            ((auVar17._0_8_ >> 0x20) * (ulonglong)_DAT_180309e40 +
             (_DAT_180309e30 & 0xffffffff) * (ulonglong)auVar17._0_4_ << 0x20) +
            (ulonglong)auVar16._0_4_ * (ulonglong)_DAT_180309e40 +
            ((auVar16._0_8_ >> 0x20) * (ulonglong)_DAT_180309e40 +
             (ulonglong)auVar16._0_4_ * (_DAT_180309e30 & 0xffffffff) << 0x20) +
            (_DAT_180309e00 & 0xffffffff) * (uVar13 & 0xffffffff) +
            ((_DAT_180309e10 & 0xffffffff) * (uVar13 & 0xffffffff) +
             (ulonglong)uVar29 * (_DAT_180309e00 & 0xffffffff) << 0x20) +
            (_DAT_180309de0 & 0xffffffff) * (uVar9 & 0xffffffff) +
            ((_DAT_180309df0 & 0xffffffff) * (uVar9 & 0xffffffff) +
             (ulonglong)uVar15 * (_DAT_180309de0 & 0xffffffff) << 0x20)) -
           ((uVar55 & 0xffffffff) * (ulonglong)_DAT_180309eb0 +
            ((uVar55 >> 0x20) * (ulonglong)_DAT_180309eb0 +
             (_DAT_180309ea0 & 0xffffffff) * (uVar55 & 0xffffffff) << 0x20) +
            (uVar13 & 0xffffffff) * (ulonglong)_DAT_180309eb0 +
            ((ulonglong)uVar29 * (ulonglong)_DAT_180309eb0 +
             (uVar13 & 0xffffffff) * (_DAT_180309ea0 & 0xffffffff) << 0x20) +
            (uVar9 & 0xffffffff) * (ulonglong)_DAT_180309e90 +
            ((ulonglong)uVar15 * (ulonglong)_DAT_180309e90 +
             (uVar9 & 0xffffffff) * (_DAT_180309e80 & 0xffffffff) << 0x20) +
           (ulonglong)uVar31 * (ulonglong)_DAT_180309e90 +
           ((auVar18._0_8_ >> 0x20) * (ulonglong)_DAT_180309e90 +
            (_DAT_180309e80 & 0xffffffff) * (ulonglong)uVar31 << 0x20))) + _DAT_180309ec0;
  lVar11 = (((_UNK_180309e28 & 0xffffffff) * (ulonglong)uVar33 +
             ((_UNK_180309e58 & 0xffffffff) * (ulonglong)uVar33 +
              uVar14 * (_UNK_180309e28 & 0xffffffff) << 0x20) +
             (auVar17._8_8_ & 0xffffffff) * (ulonglong)_UNK_180309e48 +
             ((auVar17._8_8_ >> 0x20) * (ulonglong)_UNK_180309e48 +
              (_UNK_180309e38 & 0xffffffff) * (ulonglong)auVar17._8_4_ << 0x20) +
             (uVar50 & 0xffffffff) * (ulonglong)_UNK_180309e48 +
             ((uVar50 >> 0x20) * (ulonglong)_UNK_180309e48 +
              (uVar50 & 0xffffffff) * (_UNK_180309e38 & 0xffffffff) << 0x20) +
             (_UNK_180309e08 & 0xffffffff) * (uVar13 & 0xffffffff) +
             ((_UNK_180309e18 & 0xffffffff) * (uVar13 & 0xffffffff) +
              (uVar54 >> 0x20) * (_UNK_180309e08 & 0xffffffff) << 0x20) +
             (_UNK_180309de8 & 0xffffffff) * (uVar9 & 0xffffffff) +
             ((_UNK_180309df8 & 0xffffffff) * (uVar9 & 0xffffffff) +
              uVar53 * (_UNK_180309de8 & 0xffffffff) << 0x20) + lVar8) -
           ((uVar58 & 0xffffffff) * (ulonglong)_UNK_180309eb8 +
            ((uVar58 >> 0x20) * (ulonglong)_UNK_180309eb8 +
             (_UNK_180309ea8 & 0xffffffff) * (uVar58 & 0xffffffff) << 0x20) +
            (uVar54 & 0xffffffff) * (ulonglong)_UNK_180309eb8 +
            ((uVar54 >> 0x20) * (ulonglong)_UNK_180309eb8 +
             (uVar54 & 0xffffffff) * (_UNK_180309ea8 & 0xffffffff) << 0x20) +
            (uVar12 & 0xffffffff) * (ulonglong)_UNK_180309e98 +
            (uVar53 * _UNK_180309e98 + (uVar12 & 0xffffffff) * (_UNK_180309e88 & 0xffffffff) << 0x20
            ) + (auVar18._8_8_ & 0xffffffff) * (ulonglong)_UNK_180309e98 +
                (uVar14 * _UNK_180309e98 + (_UNK_180309e88 & 0xffffffff) * (ulonglong)uVar33 << 0x20
                ) + lVar8)) + _UNK_180309ec8;
  _DAT_183095938 = _DAT_1830959e0 ^ uVar30 ^ uVar55;
  _DAT_183095770 = (_DAT_183095770 ^ uVar30) + uVar55 ^ 0xed80ef22ace343c7;
  _DAT_183095bc8 = (_DAT_183095bc8 * -0x3a941a320b4595c5 ^ _DAT_183095770) + uVar30;
  _DAT_183095a38 = _DAT_183095bc8 ^ _DAT_183095770;
  lVar8 = uVar32 * _DAT_180308c80;
  uVar9 = lVar8 * -0x5d68caf30d84934;
  uVar30 = (_DAT_183095828 ^ 0x84222325) + _DAT_183095a20 + 0x84222325;
  uVar32 = (uVar9 ^ _DAT_183095a20) + _DAT_183095828 + uVar9;
  uVar30 = (uVar30 * 0x2000 | uVar30 >> 0x33) ^ _DAT_183095828 ^ 0x84222325;
  uVar32 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar9 ^ _DAT_183095a20;
  _DAT_183095ad8 = uVar55;
  _DAT_183095708 =
       func_0x000184bbe540((uVar32 << 0x1d | uVar32 >> 0x23) - (_DAT_183095828 + uVar9) ^
                           (uVar30 << 0x1d | uVar30 >> 0x23) - (_DAT_183095a20 + 0x84222325));
  uVar30 = _DAT_183095708 << 0x20 | _DAT_183095708 >> 0x20;
  uVar13 = lVar8 * 0x5d68caf30d84934;
  _DAT_183095778 = (_DAT_183095778 ^ uVar30) + lVar8 * 0x5d68caf30d84934 ^ 0xe77563a41024d7a2;
  _DAT_183095850 = (_DAT_183095850 * 0x5b3bbbd45c691463 ^ _DAT_183095778) + uVar30;
  _DAT_1830957d0 = _DAT_183095850 ^ _DAT_183095778;
  auVar19._8_8_ = uVar9;
  auVar19._0_8_ = uVar55 ^ 0x84222325;
  auVar18 = pshufb(auVar19 ^ _DAT_180309ed0,_DAT_1800170c0);
  uVar32 = auVar18._8_8_ + auVar18._0_8_;
  uVar30 = uVar32 + _DAT_183095d78;
  if (auVar18._4_4_ < 0) {
    uVar30 = _DAT_183095ab8 ^ uVar32;
  }
  _DAT_183095960 = uVar13;
  _DAT_183095a08 = func_0x000184bbe540(SUB161(auVar19 ^ _DAT_180309ed0,5) ^ uVar30);
  in_stack_00000060._0_8_ = ~(uVar9 * uVar55 ^ _DAT_183095a08) & uVar55;
  in_stack_00000060._8_8_ = lVar11;
  uVar39 = (uint)(uVar55 >> 0x20);
  auVar43._8_4_ = (int)uVar55;
  auVar43._0_8_ = uVar55;
  auVar43._12_4_ = uVar39;
  uVar33 = (uint)(uVar9 >> 0x20);
  auVar37._8_4_ = (int)uVar9;
  auVar37._0_8_ = uVar9;
  auVar37._12_4_ = uVar33;
  in_stack_00000070 = auVar43 ^ auVar37;
  uVar31 = SUB164(auVar43 & auVar37,0);
  uVar32 = SUB168(auVar43 & auVar37,0);
  uVar29 = SUB164(auVar43 | auVar37,0);
  uVar14 = SUB168(auVar43 | auVar37,0);
  uVar15 = in_stack_00000070._0_4_;
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar47 = SUB164(auVar37 ^ auVar2,0);
  uVar30 = SUB168(auVar37 ^ auVar2,0);
  uVar9 = (((ulonglong)_DAT_180309f20 * (ulonglong)uVar47 +
            ((ulonglong)_DAT_180309f90 * (ulonglong)uVar47 +
             (uVar30 >> 0x20) * (ulonglong)_DAT_180309f20 << 0x20) +
           (ulonglong)_DAT_180309f70 * (ulonglong)uVar15 +
           ((ulonglong)_DAT_180309f80 * (ulonglong)uVar15 +
            (in_stack_00000070._0_8_ >> 0x20) * (ulonglong)_DAT_180309f70 << 0x20) +
           (ulonglong)_DAT_180309f50 * (ulonglong)uVar29 +
           ((ulonglong)_DAT_180309f60 * (ulonglong)uVar29 +
            (uVar14 >> 0x20) * (ulonglong)_DAT_180309f50 << 0x20) +
           (ulonglong)_DAT_180309f30 * (ulonglong)uVar31 +
           ((ulonglong)_DAT_180309f40 * (ulonglong)uVar31 +
            (uVar32 >> 0x20) * (ulonglong)_DAT_180309f30 << 0x20) +
           (ulonglong)_DAT_180309f00 * (uVar9 & 0xffffffff) +
           ((ulonglong)_DAT_180309f10 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar33 * (ulonglong)_DAT_180309f00 << 0x20) +
           (ulonglong)_DAT_180309ee0 * (uVar55 & 0xffffffff) +
           ((ulonglong)_DAT_180309ef0 * (uVar55 & 0xffffffff) +
            (ulonglong)uVar39 * (ulonglong)_DAT_180309ee0 << 0x20)) -
          ((ulonglong)uVar47 * (_DAT_18030a000 & 0xffffffff) +
           ((ulonglong)_DAT_18030a070 * (ulonglong)uVar47 +
            (uVar30 >> 0x20) * (_DAT_18030a000 & 0xffffffff) << 0x20) +
          (ulonglong)uVar15 * (ulonglong)_DAT_18030a050 +
          ((ulonglong)_DAT_18030a060 * (ulonglong)uVar15 +
           (in_stack_00000070._0_8_ >> 0x20) * (ulonglong)_DAT_18030a050 << 0x20) +
          (ulonglong)uVar29 * (ulonglong)_DAT_18030a030 +
          ((ulonglong)_DAT_18030a040 * (ulonglong)uVar29 +
           (uVar14 >> 0x20) * (ulonglong)_DAT_18030a030 << 0x20) +
          (ulonglong)uVar31 * (ulonglong)_DAT_18030a010 +
          ((ulonglong)_DAT_18030a020 * (ulonglong)uVar31 +
           (uVar32 >> 0x20) * (ulonglong)_DAT_18030a010 << 0x20) +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_180309fe0 +
          ((ulonglong)_DAT_180309ff0 * (uVar9 & 0xffffffff) +
           (ulonglong)uVar33 * (ulonglong)_DAT_180309fe0 << 0x20) +
          (uVar55 & 0xffffffff) * (ulonglong)_DAT_180309fc0 +
          ((ulonglong)_DAT_180309fd0 * (uVar55 & 0xffffffff) +
           (ulonglong)uVar39 * (ulonglong)_DAT_180309fc0 << 0x20))) + _DAT_18030a080;
  auVar20._8_8_ = uVar13;
  auVar20._0_8_ = uVar9 ^ 0x84222325;
  auVar18 = pshufb(auVar20 ^ _DAT_18030a090,_DAT_1800170c0);
  _DAT_183095c40 = _DAT_183095a28 ^ in_stack_00000060._0_8_ ^ uVar9;
  _DAT_183095ea8 = (_DAT_183095ea8 ^ in_stack_00000060._0_8_) + uVar9 ^ 0xc1c8fe8f7c3a8220;
  _DAT_1830959f0 = (_DAT_1830959f0 * 0x4f89abeea414f1b9 ^ _DAT_183095ea8) + in_stack_00000060._0_8_;
  _DAT_183095810 = _DAT_1830959f0 ^ _DAT_183095ea8;
  uVar32 = auVar18._8_8_ + auVar18._0_8_;
  uVar30 = uVar32 + _DAT_183095a98;
  if (auVar18._4_4_ < 0) {
    uVar30 = _DAT_183095d30 ^ uVar32;
  }
  _DAT_183095730 = uVar9;
  _DAT_183095d40 = func_0x000184bbe540(SUB161(auVar20 ^ _DAT_18030a090,5) ^ uVar30);
  uVar14 = uStack0000000000000090;
  uVar39 = (uint)(uVar9 >> 0x20);
  auVar56._8_4_ = (int)uVar9;
  auVar56._0_8_ = uVar9;
  auVar56._12_4_ = uVar39;
  uVar33 = (uint)(uVar13 >> 0x20);
  auVar21._8_4_ = (int)uVar13;
  auVar21._0_8_ = uVar13;
  auVar21._12_4_ = uVar33;
  in_stack_00000060 = auVar56 | auVar21;
  auVar18 = auVar56 ^ auVar21;
  uVar53 = (uVar9 & 0xffffffff) * (uVar13 & 0xffffffff) +
           ((ulonglong)uVar39 * (uVar13 & 0xffffffff) + (uVar9 & 0xffffffff) * (ulonglong)uVar33 <<
           0x20);
  uVar31 = SUB164(auVar56 & auVar21,0);
  uVar30 = SUB168(auVar56 & auVar21,0);
  uVar29 = in_stack_00000060._0_4_;
  uVar15 = auVar18._0_4_;
  auVar3._8_8_ = _UNK_18001a718;
  auVar3._0_8_ = _DAT_18001a710;
  uVar47 = SUB164(auVar21 ^ auVar3,0);
  uVar32 = SUB168(auVar21 ^ auVar3,0);
  lVar8 = (uVar53 & 0xffffffff) * (ulonglong)_DAT_18030a160 +
          ((ulonglong)_DAT_18030a170 * (uVar53 & 0xffffffff) +
           (uVar53 >> 0x20) * (ulonglong)_DAT_18030a160 << 0x20);
  auVar4._8_8_ = _UNK_18001a718;
  auVar4._0_8_ = _DAT_18001a710;
  uVar52 = SUB164(auVar56 ^ auVar4,0);
  _DAT_183095e58 =
       (((ulonglong)_DAT_18030a0e0 * (ulonglong)uVar47 +
         ((ulonglong)_DAT_18030a150 * (ulonglong)uVar47 +
          (uVar32 >> 0x20) * (ulonglong)_DAT_18030a0e0 << 0x20) +
         (ulonglong)_DAT_18030a130 * (ulonglong)uVar15 +
         ((ulonglong)_DAT_18030a140 * (ulonglong)uVar15 +
          (auVar18._0_8_ >> 0x20) * (ulonglong)_DAT_18030a130 << 0x20) +
         (ulonglong)_DAT_18030a110 * (ulonglong)uVar29 +
         ((ulonglong)_DAT_18030a120 * (ulonglong)uVar29 +
          (in_stack_00000060._0_8_ >> 0x20) * (ulonglong)_DAT_18030a110 << 0x20) +
         (ulonglong)_DAT_18030a0f0 * (ulonglong)uVar31 +
         ((ulonglong)_DAT_18030a100 * (ulonglong)uVar31 +
          (uVar30 >> 0x20) * (ulonglong)_DAT_18030a0f0 << 0x20) +
         (ulonglong)_DAT_18030a0c0 * (uVar13 & 0xffffffff) +
         ((ulonglong)_DAT_18030a0d0 * (uVar13 & 0xffffffff) +
          (ulonglong)uVar33 * (ulonglong)_DAT_18030a0c0 << 0x20) +
         (ulonglong)_DAT_18030a0a0 * (uVar9 & 0xffffffff) +
         ((ulonglong)_DAT_18030a0b0 * (uVar9 & 0xffffffff) +
          (ulonglong)uVar39 * (ulonglong)_DAT_18030a0a0 << 0x20) + lVar8) -
       ((ulonglong)uVar47 * (ulonglong)_DAT_18030a1b0 +
        ((uVar32 >> 0x20) * (ulonglong)_DAT_18030a1b0 +
         (ulonglong)_DAT_18030a1a0 * (ulonglong)uVar47 << 0x20) +
        (ulonglong)uVar52 * (ulonglong)_DAT_18030a190 +
        ((SUB168(auVar56 ^ auVar4,0) >> 0x20) * (ulonglong)_DAT_18030a190 +
         (ulonglong)_DAT_18030a180 * (ulonglong)uVar52 << 0x20) +
        (ulonglong)uVar15 * (ulonglong)_DAT_18030a1d0 +
        ((auVar18._0_8_ >> 0x20) * (ulonglong)_DAT_18030a1d0 +
         (ulonglong)_DAT_18030a1c0 * (ulonglong)uVar15 << 0x20) +
        (ulonglong)uVar31 * (ulonglong)_DAT_18030a1d0 +
        ((uVar30 >> 0x20) * (ulonglong)_DAT_18030a1d0 +
         (ulonglong)uVar31 * (ulonglong)_DAT_18030a1c0 << 0x20) +
        (uVar13 & 0xffffffff) * (ulonglong)_DAT_18030a1b0 +
        ((ulonglong)uVar33 * (ulonglong)_DAT_18030a1b0 +
         (uVar13 & 0xffffffff) * (ulonglong)_DAT_18030a1a0 << 0x20) +
        (uVar9 & 0xffffffff) * (ulonglong)_DAT_18030a190 +
        ((ulonglong)uVar39 * (ulonglong)_DAT_18030a190 +
         (uVar9 & 0xffffffff) * (ulonglong)_DAT_18030a180 << 0x20) +
        (ulonglong)uVar29 * (ulonglong)_DAT_18030a1e0 +
        ((ulonglong)_DAT_18030a1f0 * (ulonglong)uVar29 +
         (in_stack_00000060._0_8_ >> 0x20) * (ulonglong)_DAT_18030a1e0 << 0x20) + lVar8)) +
       0xc2e415b5c978e14;
  _DAT_1830957a0 = _DAT_183095d30 ^ _DAT_183095d40 ^ _DAT_183095e58;
  in_stack_00000070._8_8_ = auVar18._8_8_;
  in_stack_00000070._0_8_ = _DAT_183095e58;
  _DAT_1830959c0 = (_DAT_1830959c0 ^ _DAT_183095d40) + _DAT_183095e58 ^ 0x9e4a9477e28bf1d8;
  _DAT_183095e70 = (_DAT_183095e70 * -0x2363e6fd4597cba3 ^ _DAT_1830959c0) + _DAT_183095d40;
  _DAT_1830958a8 = _DAT_183095e70 ^ _DAT_1830959c0;
  uVar13 = uStack0000000000000090 ^ 0x84222325;
  uVar30 = (uVar13 ^ _DAT_183095840) + _DAT_183095818 + uVar13;
  uVar32 = (uVar10 ^ _DAT_183095818) + _DAT_183095840 + uVar10;
  uVar9 = (uVar30 * 0x2000 | uVar30 >> 0x33) ^ uVar13 ^ _DAT_183095840;
  uVar32 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar10 ^ _DAT_183095818;
  uVar30 = uStack0000000000000090 + uVar10;
  _DAT_183095e10 =
       func_0x000184bbe540((uVar32 << 0x1d | uVar32 >> 0x23) - (_DAT_183095840 + uVar10) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183095818 + uVar13));
  auVar18 = _DAT_1800170c0;
  uVar9 = _DAT_183095e10 << 4 | _DAT_183095e10 >> 0x3c;
  uVar32 = uVar14 & uVar10;
  uVar12 = uVar30 + uVar32 * -2;
  _DAT_183095e88 = (_DAT_183095e88 ^ uVar9) + uVar12 ^ 0x61ff09648463d652;
  _DAT_183095ab0 = (_DAT_183095ab0 * 0x4741b752328ec2f7 ^ _DAT_183095e88) + uVar9;
  _DAT_183095cb8 = _DAT_183095ab0 ^ _DAT_183095e88;
  auVar22._8_8_ = uVar10;
  auVar22._0_8_ = uVar13;
  auVar17 = pshufb(auVar22 ^ _DAT_18030a200,_DAT_1800170c0);
  uVar53 = auVar17._8_8_ + auVar17._0_8_;
  uVar9 = uVar53 + _DAT_183095b88;
  if (auVar17._4_4_ < 0) {
    uVar9 = _DAT_1830959c0 ^ uVar53;
  }
  _DAT_183095d48 = uVar12;
  _DAT_183095a08 = func_0x000184bbe540(SUB161(auVar22 ^ _DAT_18030a200,5) ^ uVar9);
  uVar9 = (uVar14 ^ (uVar10 * uVar14 ^ _DAT_183095a08) & 0x7ffffffff) << 7 | uVar14 >> 0x39;
  _DAT_1830959b0 = (_DAT_1830959b0 ^ uVar9) + uVar32 ^ 0x66ebdbdec90ef128;
  _DAT_183095920 = (_DAT_183095920 * -0x48a8f01e76864ea5 ^ _DAT_1830959b0) + uVar9;
  _DAT_183095968 = _DAT_183095920 ^ _DAT_1830959b0;
  auVar23._8_8_ = uVar32 * 2;
  auVar23._0_8_ = uVar12 ^ 0x84222325;
  auVar18 = pshufb(auVar23 ^ _DAT_18030a210,auVar18);
  uVar10 = auVar18._8_8_ + auVar18._0_8_;
  uVar9 = uVar10 + _DAT_183095da8;
  if (auVar18._4_4_ < 0) {
    uVar9 = _DAT_1830957b8 ^ uVar10;
  }
  _DAT_1830959a0 = uVar32;
  _DAT_183095980 = func_0x000184bbe540(SUB161(auVar23 ^ _DAT_18030a210,5) ^ uVar9);
  uVar9 = uVar32 * 2 ^ uVar12 ^ _DAT_183095980;
  uVar31 = (uint)(uVar12 >> 0x20);
  auVar49._8_4_ = (int)uVar12;
  auVar49._0_8_ = uVar12;
  auVar49._12_4_ = uVar31;
  auVar40._8_4_ = (int)uVar32;
  auVar40._0_8_ = uVar32;
  auVar40._12_4_ = (int)(uVar32 >> 0x20);
  uVar32 = uVar32 * 2;
  auVar41._8_8_ = auVar40._8_8_ * 2;
  auVar41._0_8_ = uVar32;
  in_stack_00000060 = auVar49 ^ auVar41;
  uVar52 = (uint)(uVar32 >> 0x20);
  uVar10 = (uVar12 & 0xffffffff) * (uVar32 & 0xffffffff) +
           ((uVar12 & 0xffffffff) * (ulonglong)uVar52 + (ulonglong)uVar31 * (uVar32 & 0xffffffff) <<
           0x20);
  uVar29 = SUB164(auVar49 & auVar41,0);
  uVar55 = SUB168(auVar49 & auVar41,0);
  uVar33 = SUB164(auVar49 | auVar41,0);
  uVar53 = SUB168(auVar49 | auVar41,0);
  uVar15 = in_stack_00000060._0_4_;
  auVar5._8_8_ = _UNK_18001a718;
  auVar5._0_8_ = _DAT_18001a710;
  uVar39 = SUB164(auVar41 ^ auVar5,0);
  lVar8 = (uVar10 & 0xffffffff) * (ulonglong)_DAT_18030a2e0 +
          ((ulonglong)_DAT_18030a2f0 * (uVar10 & 0xffffffff) +
           (uVar10 >> 0x20) * (ulonglong)_DAT_18030a2e0 << 0x20);
  auVar57._8_4_ = 0xffffffff;
  auVar57._0_8_ = 0xffffffffffffffff;
  auVar57._12_4_ = 0xffffffff;
  uVar47 = SUB164(auVar49 ^ auVar57,0);
  uVar55 = (((ulonglong)uVar39 * (ulonglong)_DAT_18030a260 +
             ((ulonglong)_DAT_18030a2d0 * (ulonglong)uVar39 +
              (SUB168(auVar41 ^ auVar5,0) >> 0x20) * (ulonglong)_DAT_18030a260 << 0x20) +
             (ulonglong)_DAT_18030a2b0 * (ulonglong)uVar15 +
             ((ulonglong)_DAT_18030a2c0 * (ulonglong)uVar15 +
              (in_stack_00000060._0_8_ >> 0x20) * (ulonglong)_DAT_18030a2b0 << 0x20) +
             (ulonglong)_DAT_18030a290 * (ulonglong)uVar33 +
             ((ulonglong)_DAT_18030a2a0 * (ulonglong)uVar33 +
              (uVar53 >> 0x20) * (ulonglong)_DAT_18030a290 << 0x20) +
             (ulonglong)_DAT_18030a270 * (ulonglong)uVar29 +
             ((ulonglong)_DAT_18030a280 * (ulonglong)uVar29 +
              (uVar55 >> 0x20) * (ulonglong)_DAT_18030a270 << 0x20) +
             (uVar32 & 0xffffffff) * (ulonglong)_DAT_18030a240 +
             ((ulonglong)_DAT_18030a250 * (uVar32 & 0xffffffff) +
              (ulonglong)uVar52 * (ulonglong)_DAT_18030a240 << 0x20) +
             (ulonglong)_DAT_18030a220 * (uVar12 & 0xffffffff) +
             ((ulonglong)_DAT_18030a230 * (uVar12 & 0xffffffff) +
              (ulonglong)uVar31 * (ulonglong)_DAT_18030a220 << 0x20) + lVar8) -
           ((ulonglong)uVar47 * (ulonglong)_DAT_18030a310 +
            ((SUB168(auVar49 ^ auVar57,0) >> 0x20) * (ulonglong)_DAT_18030a310 +
             (ulonglong)_DAT_18030a300 * (ulonglong)uVar47 << 0x20) +
            (ulonglong)uVar15 * (ulonglong)_DAT_18030a330 +
            ((in_stack_00000060._0_8_ >> 0x20) * (ulonglong)_DAT_18030a330 +
             (ulonglong)_DAT_18030a320 * (ulonglong)uVar15 << 0x20) +
            (ulonglong)uVar29 * (ulonglong)_DAT_18030a330 +
            ((uVar55 >> 0x20) * (ulonglong)_DAT_18030a330 +
             (ulonglong)uVar29 * (ulonglong)_DAT_18030a320 << 0x20) +
            (uVar12 & 0xffffffff) * (ulonglong)_DAT_18030a310 +
            ((ulonglong)uVar31 * (ulonglong)_DAT_18030a310 +
             (uVar12 & 0xffffffff) * (ulonglong)_DAT_18030a300 << 0x20) +
            (ulonglong)uVar33 * (ulonglong)_DAT_18030a340 +
            ((ulonglong)_DAT_18030a350 * (ulonglong)uVar33 +
             (uVar53 >> 0x20) * (ulonglong)_DAT_18030a340 << 0x20) + lVar8)) + _DAT_18030a360;
  _DAT_183095cd0 = _DAT_183095740 ^ uVar9 ^ uVar55;
  _DAT_183095a58 = (_DAT_183095a58 ^ uVar9) + uVar55 ^ 0x98438bedf1a25482;
  _DAT_183095c88 = (_DAT_183095c88 * 0x4bf19ca74fad4649 ^ _DAT_183095a58) + uVar9;
  _DAT_183095e88 = _DAT_183095c88 ^ _DAT_183095a58;
  uVar32 = uVar30 ^ 0x84222325 ^ _DAT_1830959e8;
  lVar8 = (uVar30 ^ 0x84222325) + _DAT_183095ef8;
  uVar9 = uVar32 + lVar8;
  uVar10 = (uVar55 ^ _DAT_183095ef8) + uVar55 + _DAT_1830959e8;
  uVar32 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar32;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar55 ^ _DAT_183095ef8;
  _DAT_183095968 = uVar55;
  _DAT_183095b18 =
       func_0x000184bbe540((uVar9 << 0x1d | uVar9 >> 0x23) - (uVar55 + _DAT_1830959e8) ^
                           (uVar32 << 0x1d | uVar32 >> 0x23) - lVar8);
  uVar32 = _DAT_183095b18 - (_DAT_183095b18 >> 1 & 0x5555555555555555);
  uVar53 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
  uVar29 = (uint)(uVar30 >> 0x20);
  auVar44._8_4_ = (int)uVar30;
  auVar44._0_8_ = uVar30;
  auVar44._12_4_ = uVar29;
  uVar39 = (uint)(uVar55 >> 0x20);
  auVar38._8_4_ = (int)uVar55;
  auVar38._0_8_ = uVar55;
  auVar38._12_4_ = uVar39;
  in_stack_00000060 = auVar44 ^ auVar57;
  uVar33 = SUB164(auVar44 & auVar38,0);
  uVar54 = SUB168(auVar44 & auVar38,0);
  uVar31 = SUB164(auVar44 | auVar38,0);
  uVar50 = SUB168(auVar44 | auVar38,0);
  uVar15 = SUB164(auVar44 ^ auVar38,0);
  uVar12 = SUB168(auVar44 ^ auVar38,0);
  uVar6 = in_stack_00000060._0_8_;
  uVar32 = in_stack_00000060._0_8_ & 0xffffffff;
  uVar10 = (ulonglong)in_stack_00000060._0_8_ >> 0x20;
  uVar9 = in_stack_00000060._0_8_ & 0xffffffff;
  auVar24._8_8_ = ~uVar14;
  auVar24._0_8_ = uVar13;
  auVar18 = pshufb(auVar24 ^ _DAT_18030a510,_DAT_1800170c0);
  uVar13 = ((((uVar53 >> 4) + uVar53 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
           _DAT_183095b18) & 0x7fffffffffffffff;
  _DAT_183095868 =
       ((_DAT_18030a3b0 * uVar9 + (_DAT_18030a420 * uVar32 + uVar10 * _DAT_18030a3b0 << 0x20) +
        (ulonglong)_DAT_18030a400 * (ulonglong)uVar15 +
        ((ulonglong)_DAT_18030a410 * (ulonglong)uVar15 +
         (uVar12 >> 0x20) * (ulonglong)_DAT_18030a400 << 0x20) +
        (ulonglong)_DAT_18030a3e0 * (ulonglong)uVar31 +
        ((ulonglong)_DAT_18030a3f0 * (ulonglong)uVar31 +
         (uVar50 >> 0x20) * (ulonglong)_DAT_18030a3e0 << 0x20) +
        (ulonglong)_DAT_18030a3c0 * (ulonglong)uVar33 +
        ((ulonglong)_DAT_18030a3d0 * (ulonglong)uVar33 +
         (uVar54 >> 0x20) * (ulonglong)_DAT_18030a3c0 << 0x20) +
        (ulonglong)_DAT_18030a390 * (uVar55 & 0xffffffff) +
        ((ulonglong)_DAT_18030a3a0 * (uVar55 & 0xffffffff) +
         (ulonglong)uVar39 * (ulonglong)_DAT_18030a390 << 0x20) +
        (ulonglong)_DAT_18030a370 * (uVar30 & 0xffffffff) +
        ((ulonglong)_DAT_18030a380 * (uVar30 & 0xffffffff) +
         (ulonglong)uVar29 * (ulonglong)_DAT_18030a370 << 0x20)) -
       ((ulonglong)(uint)in_stack_00000060._0_4_ * (_DAT_18030a490 & 0xffffffff) +
        ((ulonglong)_DAT_18030a500 * (ulonglong)(uint)in_stack_00000060._0_4_ +
         ((ulonglong)uVar6 >> 0x20) * (_DAT_18030a490 & 0xffffffff) << 0x20) +
       (ulonglong)uVar15 * (ulonglong)_DAT_18030a4e0 +
       ((ulonglong)_DAT_18030a4f0 * (ulonglong)uVar15 + (uVar12 >> 0x20) * (ulonglong)_DAT_18030a4e0
       << 0x20) +
       (ulonglong)uVar31 * (ulonglong)_DAT_18030a4c0 +
       ((ulonglong)_DAT_18030a4d0 * (ulonglong)uVar31 + (uVar50 >> 0x20) * (ulonglong)_DAT_18030a4c0
       << 0x20) +
       (ulonglong)uVar33 * (ulonglong)_DAT_18030a4a0 +
       ((ulonglong)_DAT_18030a4b0 * (ulonglong)uVar33 + (uVar54 >> 0x20) * (ulonglong)_DAT_18030a4a0
       << 0x20) +
       (uVar55 & 0xffffffff) * (ulonglong)_DAT_18030a470 +
       ((ulonglong)_DAT_18030a480 * (uVar55 & 0xffffffff) +
        (ulonglong)uVar39 * (ulonglong)_DAT_18030a470 << 0x20) +
       (uVar30 & 0xffffffff) * (ulonglong)_DAT_18030a450 +
       ((ulonglong)_DAT_18030a460 * (uVar30 & 0xffffffff) +
        (ulonglong)uVar29 * (ulonglong)_DAT_18030a450 << 0x20))) + 0x4efcd1dde1afb8a8;
  _DAT_183095c08 = _DAT_183095868 ^ uVar13;
  _DAT_183095ce0 = (_DAT_183095ce0 ^ uVar13) + _DAT_183095868 ^ 0x75b69ccaf05809af;
  _DAT_1830957d0 = (_DAT_1830957d0 * 0x3c74bb395548c27f ^ _DAT_183095ce0) + uVar13;
  _DAT_183095b20 = _DAT_1830957d0 ^ _DAT_183095ce0;
  uVar32 = _DAT_183095868 + in_stack_00000070._0_8_;
  uVar9 = auVar18._8_8_ + auVar18._0_8_;
  uVar30 = uVar9 + _DAT_1830958e0;
  if (auVar18._4_4_ < 0) {
    uVar30 = _DAT_183095ba8 ^ uVar9;
  }
  _DAT_183095968 = func_0x000184bbe540(SUB161(auVar24 ^ _DAT_18030a510,5) ^ uVar30);
  uVar30 = _DAT_183095968 << 0x2f | (_DAT_183095968 & 0x3ffffffff) >> 0x11;
  _DAT_183095898 = _DAT_183095898 ^ uVar30 ^ 0x12d2cbecece9a28b;
  _DAT_1830957c8 = (_DAT_1830957c8 * 0x7c2cfe33f63220a5 ^ _DAT_183095898) + uVar30;
  _DAT_183095d08 = _DAT_1830957c8 ^ _DAT_183095898;
  _DAT_183095da0 = 0;
  uVar30 = uVar32 ^ 0x84222325;
  uVar9 = ((_DAT_183095b20 ^ uVar30) + (uVar30 & _DAT_183095b20) * 2) * -_DAT_1830957c0;
  uVar9 = (uVar9 | _DAT_1830958f8) + (uVar9 & _DAT_1830958f8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183095778 = func_0x000184bbe540((uVar9 | uVar30) + (uVar9 & uVar30));
  uVar30 = _DAT_180308c80;
  auVar18 = _DAT_1800170c0;
  uVar15 = (uint)(uVar32 >> 0x20);
  auVar25._8_4_ = (int)uVar32;
  auVar25._0_8_ = uVar32;
  auVar25._12_4_ = uVar15;
  uVar10 = auVar25._8_8_ >> 0x20;
  uVar9 = _DAT_183095778 & 0x7ffffffffffe0;
  auVar46._0_8_ =
       ((_DAT_18030a540 & 0xffffffff) * (uVar32 & 0xffffffff) +
        ((_DAT_18030a550 & 0xffffffff) * (uVar32 & 0xffffffff) +
         (ulonglong)uVar15 * (_DAT_18030a540 & 0xffffffff) << 0x20) +
       (_DAT_18030a520 & 0xffffffff) * (uVar32 & 0xffffffff) +
       ((_DAT_18030a530 & 0xffffffff) * (uVar32 & 0xffffffff) +
        (ulonglong)uVar15 * (_DAT_18030a520 & 0xffffffff) << 0x20)) -
       ((uVar32 & 0xffffffff) * (_DAT_18030a5a0 & 0xffffffff) +
        ((_DAT_18030a5b0 & 0xffffffff) * (uVar32 & 0xffffffff) +
         (ulonglong)uVar15 * (_DAT_18030a5a0 & 0xffffffff) << 0x20) +
       (_DAT_18030a580 & 0xffffffff) * (uVar32 & 0xffffffff) +
       ((_DAT_18030a590 & 0xffffffff) * (uVar32 & 0xffffffff) +
        (ulonglong)uVar15 * (_DAT_18030a580 & 0xffffffff) << 0x20) +
       (_DAT_18030a560 & 0xffffffff) * (uVar32 & 0xffffffff) +
       ((_DAT_18030a570 & 0xffffffff) * (uVar32 & 0xffffffff) +
        (ulonglong)uVar15 * (_DAT_18030a560 & 0xffffffff) << 0x20));
  auVar46._8_8_ =
       ((_UNK_18030a548 & 0xffffffff) * (uVar32 & 0xffffffff) +
        ((_UNK_18030a558 & 0xffffffff) * (uVar32 & 0xffffffff) +
         uVar10 * (_UNK_18030a548 & 0xffffffff) << 0x20) +
       (_UNK_18030a528 & 0xffffffff) * (uVar32 & 0xffffffff) +
       ((_UNK_18030a538 & 0xffffffff) * (uVar32 & 0xffffffff) +
        uVar10 * (_UNK_18030a528 & 0xffffffff) << 0x20)) -
       ((auVar25._8_8_ & 0xffffffff) * (_UNK_18030a5a8 & 0xffffffff) +
        ((_UNK_18030a5b8 & 0xffffffff) * (uVar32 & 0xffffffff) +
         uVar10 * (_UNK_18030a5a8 & 0xffffffff) << 0x20) +
       (_UNK_18030a588 & 0xffffffff) * (uVar32 & 0xffffffff) +
       ((_UNK_18030a598 & 0xffffffff) * (uVar32 & 0xffffffff) +
        uVar10 * (_UNK_18030a588 & 0xffffffff) << 0x20) +
       (_UNK_18030a568 & 0xffffffff) * (uVar32 & 0xffffffff) +
       ((_UNK_18030a578 & 0xffffffff) * (uVar32 & 0xffffffff) +
        uVar10 * (_UNK_18030a568 & 0xffffffff) << 0x20));
  _DAT_183095af0 = _DAT_183095c98 ^ uVar9 ^ auVar46._0_8_;
  _DAT_183095848 = (_DAT_183095848 ^ uVar9) + auVar46._0_8_ ^ 0x1e0b378bd0e2f4ca;
  _DAT_183095b00 = (_DAT_183095b00 * -0x1f83aa77f2c31145 ^ _DAT_183095848) + uVar9;
  _DAT_183095e80 = _DAT_183095b00 ^ _DAT_183095848;
  auVar26._8_8_ = _DAT_180308c80;
  auVar26._0_8_ = _DAT_180308c80 ^ 0x84222325;
  auVar17 = pshufb(auVar26 ^ _DAT_18030a5c0,_DAT_1800170c0);
  uVar9 = auVar17._8_8_ + auVar17._0_8_;
  uVar32 = uVar9 + _DAT_183095930;
  if (auVar17._4_4_ < 0) {
    uVar32 = _DAT_183095d58 ^ uVar9;
  }
  _DAT_183095ae8 = auVar46._0_8_;
  _DAT_1830958a8 = func_0x000184bbe540(SUB161(auVar26 ^ _DAT_18030a5c0,5) ^ uVar32);
  uVar30 = _DAT_1830958a8 ^ uVar30;
  uVar32 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
  uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar30 = (uint)bVar1 + (uint)bVar1 ^ uVar30;
  _DAT_183095b70 = _DAT_183095b70 ^ uVar30 ^ 0x68d01eb1e9d74e76;
  _DAT_183095a88 = (_DAT_183095a88 * 0x57869f7827c6d843 ^ _DAT_183095b70) + uVar30;
  _DAT_1830959c0 = _DAT_183095a88 ^ _DAT_183095b70;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = auVar46._0_8_ ^ 0x84222325;
  _DAT_183095950 = 0;
  auVar18 = pshufb(auVar27 ^ _DAT_18030a5d0,auVar18);
  uVar30 = auVar18._8_8_ + auVar18._0_8_;
  if (auVar18._4_4_ < 0) {
    uVar30 = _DAT_183095770 ^ uVar30;
  }
  _DAT_183095ab8 = func_0x000184bbe540(SUB161(auVar27 ^ _DAT_18030a5d0,5) ^ uVar30);
  uVar30 = ~_DAT_183095ab8 & auVar46._0_8_;
  auVar28._8_4_ = 0xffffffff;
  auVar28._0_8_ = 0xffffffffffffffff;
  auVar28._12_4_ = 0xffffffff;
  uVar15 = SUB164(auVar28 ^ auVar46,0);
  lVar8 = (ulonglong)_DAT_18030a640 * (auVar46._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_18030a650 * (auVar46._0_8_ & 0xffffffff) +
           (auVar46._0_8_ >> 0x20) * (ulonglong)_DAT_18030a640 << 0x20);
  _DAT_183095cd8 =
       (((ulonglong)uVar15 * (ulonglong)_DAT_18030a600 +
         ((ulonglong)_DAT_18030a630 * (ulonglong)uVar15 +
          (SUB168(auVar28 ^ auVar46,0) >> 0x20) * (ulonglong)_DAT_18030a600 << 0x20) +
        (ulonglong)_DAT_18030a610 * (auVar46._0_8_ & 0xffffffff) +
        ((ulonglong)_DAT_18030a620 * (auVar46._0_8_ & 0xffffffff) +
         (auVar46._0_8_ >> 0x20) * (ulonglong)_DAT_18030a610 << 0x20) +
        (ulonglong)_DAT_18030a5e0 * (auVar46._0_8_ & 0xffffffff) +
        ((ulonglong)_DAT_18030a5f0 * (auVar46._0_8_ & 0xffffffff) +
         (auVar46._0_8_ >> 0x20) * (ulonglong)_DAT_18030a5e0 << 0x20)) -
       ((auVar46._0_8_ & 0xffffffff) * (_DAT_18030a660 & 0xffffffff) +
        ((ulonglong)_DAT_18030a670 * (auVar46._0_8_ & 0xffffffff) +
         (auVar46._0_8_ >> 0x20) * (_DAT_18030a660 & 0xffffffff) << 0x20) + lVar8)) +
       0x544c21e4ae2668a8;
  _DAT_183095ee8 = _DAT_183095cb8 ^ uVar30 ^ _DAT_183095cd8;
  _DAT_183095d38 = (_DAT_183095d38 ^ uVar30) + _DAT_183095cd8 ^ 0xf3bac84217191e4a;
  _DAT_183095ee0 = (_DAT_183095ee0 * -0x21f7759f55ae85ed ^ _DAT_183095d38) + uVar30;
  _DAT_183095bc0 = _DAT_183095ee0 ^ _DAT_183095d38;
  in_stack_00000030 = _DAT_183095cd8 ^ uStack0000000000000098;
  FUN_190de3220(lVar8,&stack0x00000028,*_DAT_18301ee50 + 0x22d82,*_DAT_18301ee50 + 0x5a,0x19ff);
  cVar7 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar7 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4bbc725 (image 184bbc725) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbc725(void)

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



// ===== continuation @ rva 4c02036 (image 184c02036) =====

void FUN_184c02036(void)

{
  return;
}



// ===== continuation @ rva 4c01a02 (image 184c01a02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c01a02(void)

{
  FUN_190ddce00();
  (*_DAT_1803167a8)();
  return;
}



// ===== continuation @ rva 4c02040 (image 184c02040) =====

void FUN_184c02040(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c01f1d (image 184c01f1d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c01f1d(void)

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



// ===== continuation @ rva 4c01fbf (image 184c01fbf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c01fbf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1803168d8)();
  return;
}



// ===== continuation @ rva 4c01fb4 (image 184c01fb4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c01fb4(void)

{
  (*_DAT_180316888)();
  return;
}



// ===== continuation @ rva 4c01c71 (image 184c01c71) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c01c71(void)

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



// ===== continuation @ rva 4c01ee2 (image 184c01ee2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c01ee2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180316698)();
  return;
}



// ===== continuation @ rva 4c01bd1 (image 184c01bd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c01bd1(void)

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



// ===== continuation @ rva 4c01a59 (image 184c01a59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c01a59(void)

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



// ===== continuation @ rva 4c48493 (image 184c48493) =====

void FUN_184c48493(void)

{
  return;
}



// ===== continuation @ rva 4c450b7 (image 184c450b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c450b7(void)

{
  FUN_190ddce00();
  (*_DAT_18031f6e8)();
  return;
}



// ===== continuation @ rva 4c47fa8 (image 184c47fa8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c47fa8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18031f538)();
  return;
}



// ===== continuation @ rva 4c48482 (image 184c48482) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c48482(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_18031f6d8)();
  return;
}



// ===== continuation @ rva 4c47be7 (image 184c47be7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c47be7(void)

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



// ===== continuation @ rva 4c47dc6 (image 184c47dc6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c47dc6(void)

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



// ===== continuation @ rva 4c4519f (image 184c4519f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c4519f(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  ulonglong uVar6;
  longlong *unaff_RSI;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar20;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong uVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulonglong uVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  uint uVar40;
  ulonglong in_stack_00000030;
  undefined1 in_stack_00000060 [16];
  uint uStack0000000000000080;
  uint uStack0000000000000090;
  ulonglong in_stack_000000a8;
  
  uVar8 = _DAT_18031f108;
  uVar5 = _DAT_18031f100;
  uVar7 = _DAT_18031f100 ^ 0x84222325;
  uVar12 = (uVar7 ^ in_RAX) + uVar7 + param_1;
  uVar20 = (param_1 ^ 0xcf54286a40e36b23) + in_RAX + 0xcf54286a40e36b23;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar7 ^ in_RAX;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ param_1 ^ 0xcf54286a40e36b23;
  _DAT_183098078 =
       func_0x000184c48570((uVar20 << 0x1d | uVar20 >> 0x23) - (in_RAX + 0xcf54286a40e36b23) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (uVar7 + param_1));
  auVar14 = _DAT_1800170c0;
  uVar12 = _DAT_183098078 >> 1 | _DAT_183098078;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10 ^ _DAT_183098078;
  uVar10 = uVar5 | 0xcf54286a40e36b23;
  _DAT_183097ff8 = (_DAT_183097ff8 ^ uVar12) + uVar10 ^ 0x5cea135c7dc2e402;
  _DAT_183097ed8 = (_DAT_183097ed8 * 0x6164c0eb03c225e7 ^ _DAT_183097ff8) + uVar12;
  _DAT_183097eb0 = _DAT_183097ed8 ^ _DAT_183097ff8;
  auVar39._8_8_ = _UNK_18031f718;
  auVar39._0_8_ = uVar8 ^ 0x84222325;
  auVar13 = pshufb(auVar39 ^ _DAT_18031f720,_DAT_1800170c0);
  uVar20 = auVar13._8_8_ + auVar13._0_8_;
  uVar12 = uVar20 + _DAT_183097d40;
  if (auVar13._4_4_ < 0) {
    uVar12 = _DAT_183097dc0 ^ uVar20;
  }
  _DAT_183097ef0 = uVar10;
  _DAT_183097e18 = func_0x000184c48570(SUB161(auVar39 ^ _DAT_18031f720,5) ^ uVar12);
  uVar20 = uVar8 + 0xb9cbf3e0e96bb126 + (uVar8 & 0xb9cbf3e0e96bb126) * -2;
  _DAT_183098268 = (_DAT_183098268 ^ _DAT_183097e18) + uVar20 ^ 0x4bd0e737fcd2ea7a;
  _DAT_183098290 = (_DAT_183098290 * 0x302200b26093d7e7 ^ _DAT_183098268) + _DAT_183097e18;
  _DAT_183097f20 = _DAT_183098290 ^ _DAT_183098268;
  lVar4 = uVar5 * uVar5;
  auVar13._8_8_ = lVar4 * 0x55eb938069a06578;
  auVar13._0_8_ = _DAT_18001b640;
  auVar14 = pshufb(auVar13 ^ _DAT_18031f730,auVar14);
  uVar12 = auVar14._8_8_ + auVar14._0_8_;
  uVar5 = uVar12 + _DAT_1830981f8;
  if (auVar14._4_4_ < 0) {
    uVar5 = _DAT_183098050 ^ uVar12;
  }
  _DAT_183097e28 = uVar20;
  _DAT_183097ea0 = func_0x000184c48570(uVar5 ^ 0xc3);
  uVar9 = lVar4 * -0x55eb938069a06578;
  _DAT_183097e98 = _DAT_183097e98 + lVar4 * -0x55eb938069a06578 ^ 0xa1190f61059f5354;
  _DAT_183097d58 = _DAT_183098100 * -0x59c3bc5e0bcee97b;
  _DAT_183098100 = _DAT_183097d58 ^ _DAT_183097e98;
  uVar6 = unaff_RBP + lVar4 * 0x55eb938069a06578;
  uVar12 = uVar6 ^ 0x84222325;
  uVar5 = ((_DAT_183097f78 ^ uVar12) + (uVar12 & _DAT_183097f78) * 2) * (uVar9 - _DAT_1830982b8);
  uVar5 = (uVar5 | _DAT_183098008) + (uVar5 & _DAT_183098008);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1830980d8 = uVar9;
  _DAT_183097e08 = func_0x000184c48570((uVar12 ^ uVar9 | uVar5) + (uVar5 & (uVar12 ^ uVar9)));
  uVar11 = (uint)(uVar6 >> 0x20);
  auVar31._8_4_ = (int)uVar6;
  auVar31._0_8_ = uVar6;
  auVar31._12_4_ = uVar11;
  uVar19 = (uint)(uVar9 >> 0x20);
  auVar22._8_4_ = (int)uVar9;
  auVar22._0_8_ = uVar9;
  auVar22._12_4_ = uVar19;
  auVar14 = auVar31 & auVar22;
  auVar39 = auVar31 | auVar22;
  uVar40 = auVar14._0_4_;
  uVar38 = auVar39._0_4_;
  in_stack_00000060._0_8_ = auVar39._0_8_ >> 0x20;
  in_stack_00000060._8_8_ = auVar39._8_8_ >> 0x20;
  uVar21 = SUB164(auVar31 ^ auVar22,0);
  auVar15._8_4_ = 0xffffffff;
  auVar15._0_8_ = 0xffffffffffffffff;
  auVar15._12_4_ = 0xffffffff;
  uVar30 = SUB164(auVar31 ^ auVar15,0);
  uVar29 = SUB168(auVar31 ^ auVar15,0);
  uVar34 = SUB164(auVar22 ^ auVar15,0);
  uVar12 = SUB168(auVar22 ^ auVar15,0);
  uStack0000000000000090 = auVar14._4_4_;
  uVar5 = uVar6 * uVar9 ^ _DAT_183097e08;
  uVar37 = (((ulonglong)_DAT_18031f7d0 * (ulonglong)uVar34 +
             ((uVar12 >> 0x20) * (ulonglong)_DAT_18031f7d0 +
              (ulonglong)_DAT_18031f760 * (ulonglong)uVar34 << 0x20) +
             (ulonglong)_DAT_18031f7c0 * (ulonglong)uVar30 +
             ((uVar29 >> 0x20) * (ulonglong)_DAT_18031f7c0 +
              (ulonglong)_DAT_18031f740 * (ulonglong)uVar30 << 0x20) +
             (ulonglong)uVar21 * (ulonglong)_DAT_18031f790 +
             ((SUB168(auVar31 ^ auVar22,0) >> 0x20) * (ulonglong)_DAT_18031f790 +
              (ulonglong)_DAT_18031f780 * (ulonglong)uVar21 << 0x20) +
             (ulonglong)uVar40 * (ulonglong)_DAT_18031f790 +
             ((auVar14._0_8_ >> 0x20) * (ulonglong)_DAT_18031f790 +
              (ulonglong)uVar40 * (ulonglong)_DAT_18031f780 << 0x20) +
             (ulonglong)_DAT_18031f770 * (uVar9 & 0xffffffff) +
             ((ulonglong)uVar19 * (ulonglong)_DAT_18031f770 +
              (uVar9 & 0xffffffff) * (ulonglong)_DAT_18031f760 << 0x20) +
             (ulonglong)_DAT_18031f750 * (uVar6 & 0xffffffff) +
             ((ulonglong)uVar11 * (ulonglong)_DAT_18031f750 +
              (uVar6 & 0xffffffff) * (ulonglong)_DAT_18031f740 << 0x20) +
            (ulonglong)_DAT_18031f7a0 * (ulonglong)uVar38 +
            ((ulonglong)_DAT_18031f7b0 * (ulonglong)uVar38 +
             (auVar39._0_8_ >> 0x20) * (ulonglong)_DAT_18031f7a0 << 0x20)) -
           ((ulonglong)uVar34 * (ulonglong)_DAT_18031f880 +
            ((ulonglong)_DAT_18031f890 * (ulonglong)uVar34 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_18031f880 << 0x20) +
            (ulonglong)uVar30 * (ulonglong)_DAT_18031f860 +
            ((ulonglong)_DAT_18031f870 * (ulonglong)uVar30 +
             (uVar29 >> 0x20) * (ulonglong)_DAT_18031f860 << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_18031f850 +
           (in_stack_00000060._0_8_ * (ulonglong)_DAT_18031f850 +
            (ulonglong)_DAT_18031f840 * (ulonglong)uVar38 << 0x20) +
           (ulonglong)uVar40 * (ulonglong)_DAT_18031f850 +
           ((ulonglong)uStack0000000000000090 * (ulonglong)_DAT_18031f850 +
            (ulonglong)uVar40 * (ulonglong)_DAT_18031f840 << 0x20) +
           (uVar9 & 0xffffffff) * (ulonglong)_DAT_18031f820 +
           ((ulonglong)_DAT_18031f830 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_18031f820 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_18031f800 +
           ((ulonglong)_DAT_18031f810 * (uVar6 & 0xffffffff) +
            (ulonglong)uVar11 * (ulonglong)_DAT_18031f800 << 0x20))) + _DAT_18031f8a0;
  _DAT_1830980e8 = _DAT_183097d40 ^ uVar5 ^ uVar37;
  _DAT_1830980d8 = (_DAT_1830980d8 ^ uVar5) + uVar37 ^ 0x177b19f0d440c8ca;
  _DAT_183097f50 = (_DAT_183097f50 * -0x5113af3c08ea23a7 ^ _DAT_1830980d8) + uVar5;
  _DAT_183097e28 = _DAT_183097f50 ^ _DAT_1830980d8;
  lVar4 = uVar8 * uVar8;
  uVar12 = lVar4 * 0xa7af345eabaefb9;
  uVar5 = (_DAT_183098150 ^ 0x84222325) + _DAT_183097e98 + 0x84222325;
  uVar6 = (uVar12 ^ _DAT_183097e98) + _DAT_183098150 + uVar12;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183098150 ^ 0x84222325;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar12 ^ _DAT_183097e98;
  _DAT_183098070 = uVar37;
  _DAT_183097dd0 =
       func_0x000184c48570((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183098150 + uVar12) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183097e98 + 0x84222325));
  uVar6 = lVar4 * -0xa7af345eabaefb9;
  _DAT_183098080 =
       (_DAT_183098080 ^ _DAT_183097dd0 & 0xffffffffffe00000) + lVar4 * -0xa7af345eabaefb9 ^
       0xef42713176b698dd;
  _DAT_183097f98 =
       (_DAT_183097f98 * -0x1e42077a235feb5f ^ _DAT_183098080) +
       (_DAT_183097dd0 & 0xffffffffffe00000);
  _DAT_183097f80 = _DAT_183097f98 ^ _DAT_183098080;
  uVar5 = uVar37 ^ 0x84222325 ^ _DAT_183097f38;
  lVar4 = (uVar37 ^ 0x84222325) + _DAT_183098270;
  uVar9 = uVar5 + lVar4;
  uVar29 = (uVar12 ^ _DAT_183098270) + _DAT_183097f38 + uVar12;
  uVar5 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar5;
  uVar9 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar12 ^ _DAT_183098270;
  _DAT_183097da8 = uVar6;
  _DAT_183097e48 =
       func_0x000184c48570((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183097f38 + uVar12) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar34 = (uint)(uVar37 >> 0x20);
  auVar33._8_4_ = (int)uVar37;
  auVar33._0_8_ = uVar37;
  auVar33._12_4_ = uVar34;
  uVar19 = (uint)(uVar12 >> 0x20);
  auVar26._8_4_ = (int)uVar12;
  auVar26._0_8_ = uVar12;
  auVar26._12_4_ = uVar19;
  in_stack_00000060 = auVar33 ^ auVar26;
  uVar30 = SUB164(auVar33 & auVar26,0);
  uVar9 = SUB168(auVar33 & auVar26,0);
  uVar21 = SUB164(auVar33 | auVar26,0);
  uVar29 = SUB168(auVar33 | auVar26,0);
  uVar11 = in_stack_00000060._0_4_;
  auVar14._8_8_ = _UNK_18001a718;
  auVar14._0_8_ = _DAT_18001a710;
  uVar38 = SUB164(auVar33 ^ auVar14,0);
  uVar5 = SUB168(auVar33 ^ auVar14,0);
  uVar9 = (((ulonglong)_DAT_18031f8f0 * (ulonglong)uVar38 +
            ((ulonglong)_DAT_18031f960 * (ulonglong)uVar38 +
             (uVar5 >> 0x20) * (ulonglong)_DAT_18031f8f0 << 0x20) +
           (ulonglong)_DAT_18031f940 * (ulonglong)uVar11 +
           ((ulonglong)_DAT_18031f950 * (ulonglong)uVar11 +
            (in_stack_00000060._0_8_ >> 0x20) * (ulonglong)_DAT_18031f940 << 0x20) +
           (ulonglong)_DAT_18031f920 * (ulonglong)uVar21 +
           ((ulonglong)_DAT_18031f930 * (ulonglong)uVar21 +
            (uVar29 >> 0x20) * (ulonglong)_DAT_18031f920 << 0x20) +
           (ulonglong)_DAT_18031f900 * (ulonglong)uVar30 +
           ((ulonglong)_DAT_18031f910 * (ulonglong)uVar30 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_18031f900 << 0x20) +
           (ulonglong)_DAT_18031f8d0 * (uVar12 & 0xffffffff) +
           ((ulonglong)_DAT_18031f8e0 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_18031f8d0 << 0x20) +
           (ulonglong)_DAT_18031f8b0 * (uVar37 & 0xffffffff) +
           ((ulonglong)_DAT_18031f8c0 * (uVar37 & 0xffffffff) +
            (ulonglong)uVar34 * (ulonglong)_DAT_18031f8b0 << 0x20)) -
          ((ulonglong)uVar38 * (_DAT_18031f9d0 & 0xffffffff) +
           ((ulonglong)_DAT_18031fa40 * (ulonglong)uVar38 +
            (uVar5 >> 0x20) * (_DAT_18031f9d0 & 0xffffffff) << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_DAT_18031fa20 +
          ((ulonglong)_DAT_18031fa30 * (ulonglong)uVar11 +
           (in_stack_00000060._0_8_ >> 0x20) * (ulonglong)_DAT_18031fa20 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_18031fa00 +
          ((ulonglong)_DAT_18031fa10 * (ulonglong)uVar21 +
           (uVar29 >> 0x20) * (ulonglong)_DAT_18031fa00 << 0x20) +
          (ulonglong)uVar30 * (ulonglong)_DAT_18031f9e0 +
          ((ulonglong)_DAT_18031f9f0 * (ulonglong)uVar30 +
           (uVar9 >> 0x20) * (ulonglong)_DAT_18031f9e0 << 0x20) +
          (uVar12 & 0xffffffff) * (ulonglong)_DAT_18031f9b0 +
          ((ulonglong)_DAT_18031f9c0 * (uVar12 & 0xffffffff) +
           (ulonglong)uVar19 * (ulonglong)_DAT_18031f9b0 << 0x20) +
          (uVar37 & 0xffffffff) * (ulonglong)_DAT_18031f990 +
          ((ulonglong)_DAT_18031f9a0 * (uVar37 & 0xffffffff) +
           (ulonglong)uVar34 * (ulonglong)_DAT_18031f990 << 0x20))) + _DAT_18031fa50;
  _DAT_183097e78 = _DAT_183097e88 ^ _DAT_183098290 ^ uVar9;
  _DAT_183098100 = (_DAT_183098100 ^ _DAT_183098290) + uVar9 ^ 0xec464d25714e599a;
  _DAT_183098240 = (_DAT_183098240 * -0x4ab829c272ed2bab ^ _DAT_183098100) + _DAT_183098290;
  _DAT_183098078 = _DAT_183098240 ^ _DAT_183098100;
  uVar12 = uVar9 ^ 0x84222325;
  uVar5 = ((_DAT_183098140 ^ uVar12) + (uVar12 & _DAT_183098140) * 2) * (uVar6 - _DAT_183098188);
  uVar5 = (uVar5 | _DAT_183097f80) + (uVar5 & _DAT_183097f80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183098060 = uVar9;
  _DAT_1830980f8 = func_0x000184c48570((uVar12 ^ uVar6 | uVar5) + (uVar5 & (uVar12 ^ uVar6)));
  auVar14 = _DAT_1800170c0;
  uVar34 = (uint)(uVar9 >> 0x20);
  auVar27._8_4_ = (int)uVar9;
  auVar27._0_8_ = uVar9;
  auVar27._12_4_ = uVar34;
  uVar19 = (uint)(uVar6 >> 0x20);
  auVar23._8_4_ = (int)uVar6;
  auVar23._0_8_ = uVar6;
  auVar23._12_4_ = uVar19;
  uVar38 = SUB164(auVar27 & auVar23,0);
  uVar12 = SUB168(auVar27 & auVar23,0);
  uVar11 = SUB164(auVar27 | auVar23,0);
  uVar29 = SUB168(auVar27 | auVar23,0);
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar30 = SUB164(auVar23 ^ auVar1,0);
  uVar5 = SUB168(auVar23 ^ auVar1,0);
  uVar21 = SUB164(auVar27 ^ auVar23,0);
  uVar6 = (((ulonglong)_DAT_18031faa0 * (ulonglong)uVar30 +
            ((ulonglong)_DAT_18031fad0 * (ulonglong)uVar30 +
             (uVar5 >> 0x20) * (ulonglong)_DAT_18031faa0 << 0x20) +
           (ulonglong)_DAT_18031fac0 * (ulonglong)uVar11 +
           ((uVar29 >> 0x20) * (ulonglong)_DAT_18031fac0 +
            (ulonglong)_DAT_18031fab0 * (ulonglong)uVar11 << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_18031fac0 +
           ((uVar12 >> 0x20) * (ulonglong)_DAT_18031fac0 +
            (ulonglong)uVar38 * (ulonglong)_DAT_18031fab0 << 0x20) +
           (ulonglong)_DAT_18031fa80 * (uVar6 & 0xffffffff) +
           ((ulonglong)_DAT_18031fa90 * (uVar6 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_18031fa80 << 0x20) +
           (ulonglong)_DAT_18031fa60 * (uVar9 & 0xffffffff) +
           ((ulonglong)_DAT_18031fa70 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar34 * (ulonglong)_DAT_18031fa60 << 0x20)) -
          ((ulonglong)uVar30 * (ulonglong)_DAT_18031fb40 +
           ((ulonglong)_DAT_18031fbb0 * (ulonglong)uVar30 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_18031fb40 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_18031fb90 +
          ((ulonglong)_DAT_18031fba0 * (ulonglong)uVar21 +
           (SUB168(auVar27 ^ auVar23,0) >> 0x20) * (ulonglong)_DAT_18031fb90 << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_DAT_18031fb70 +
          ((ulonglong)_DAT_18031fb80 * (ulonglong)uVar11 +
           (uVar29 >> 0x20) * (ulonglong)_DAT_18031fb70 << 0x20) +
          (ulonglong)uVar38 * (ulonglong)_DAT_18031fb50 +
          ((ulonglong)_DAT_18031fb60 * (ulonglong)uVar38 +
           (uVar12 >> 0x20) * (ulonglong)_DAT_18031fb50 << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_18031fb20 +
          ((ulonglong)_DAT_18031fb30 * (uVar6 & 0xffffffff) +
           (ulonglong)uVar19 * (ulonglong)_DAT_18031fb20 << 0x20) +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_18031fb00 +
          ((ulonglong)_DAT_18031fb10 * (uVar9 & 0xffffffff) +
           (ulonglong)uVar34 * (ulonglong)_DAT_18031fb00 << 0x20))) + _DAT_18031fbc0;
  lVar4 = uVar8 * _DAT_18031f100;
  uVar12 = lVar4 * -0x41c3b873602468b6;
  auVar16._8_8_ = uVar12;
  auVar16._0_8_ = uVar6 ^ 0x84222325;
  auVar39 = pshufb(auVar16 ^ _DAT_18031fbd0,_DAT_1800170c0);
  _DAT_183098148 = _DAT_183098290 ^ _DAT_1830980f8 ^ uVar6;
  _DAT_1830981f0 = (_DAT_1830981f0 ^ _DAT_1830980f8) + uVar6 ^ 0xa609f42ee0105fa;
  _DAT_183098088 = (_DAT_183098088 * -0x78daba6b1218e6e1 ^ _DAT_1830981f0) + _DAT_1830980f8;
  _DAT_183097db0 = _DAT_183098088 ^ _DAT_1830981f0;
  uVar8 = auVar39._8_8_ + auVar39._0_8_;
  uVar5 = uVar8 + _DAT_183097ff0;
  if (auVar39._4_4_ < 0) {
    uVar5 = _DAT_1830981c8 ^ uVar8;
  }
  _DAT_183098230 = uVar6;
  _DAT_183097e30 = func_0x000184c48570(SUB161(auVar16 ^ _DAT_18031fbd0,5) ^ uVar5);
  uVar5 = _DAT_183097e30 ^ uVar12;
  uVar5 = ~((uVar5 & 0xffffffff) * (ulonglong)_DAT_18031fbe0 +
           ((ulonglong)_DAT_18031fbf0 * (uVar5 & 0xffffffff) +
            (uVar5 >> 0x20) * (ulonglong)_DAT_18031fbe0 << 0x20)) & uVar6;
  uVar30 = (uint)(uVar6 >> 0x20);
  auVar35._8_4_ = (int)uVar6;
  auVar35._0_8_ = uVar6;
  auVar35._12_4_ = uVar30;
  uVar34 = (uint)(uVar12 >> 0x20);
  auVar24._8_4_ = (int)uVar12;
  auVar24._0_8_ = uVar12;
  auVar24._12_4_ = uVar34;
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar21 = SUB164(auVar35 & auVar24,0);
  uVar19 = SUB164(auVar35 | auVar24,0);
  uVar11 = SUB164(auVar35 ^ auVar2,0);
  uVar8 = SUB168(auVar35 ^ auVar2,0);
  _DAT_183098190 =
       (((ulonglong)_DAT_18031fc40 * (ulonglong)uVar11 +
         ((ulonglong)_DAT_18031fc70 * (ulonglong)uVar11 +
          (uVar8 >> 0x20) * (ulonglong)_DAT_18031fc40 << 0x20) +
        (ulonglong)uVar19 * (ulonglong)_DAT_18031fc60 +
        ((SUB168(auVar35 | auVar24,0) >> 0x20) * (ulonglong)_DAT_18031fc60 +
         (ulonglong)_DAT_18031fc50 * (ulonglong)uVar19 << 0x20) +
        (ulonglong)uVar21 * (ulonglong)_DAT_18031fc60 +
        ((SUB168(auVar35 & auVar24,0) >> 0x20) * (ulonglong)_DAT_18031fc60 +
         (ulonglong)uVar21 * (ulonglong)_DAT_18031fc50 << 0x20) +
        (uVar12 & 0xffffffff) * (ulonglong)_DAT_18031fc20 +
        ((ulonglong)_DAT_18031fc30 * (uVar12 & 0xffffffff) +
         (ulonglong)uVar34 * (ulonglong)_DAT_18031fc20 << 0x20) +
        (uVar6 & 0xffffffff) * (ulonglong)_DAT_18031fc00 +
        ((ulonglong)_DAT_18031fc10 * (uVar6 & 0xffffffff) +
         (ulonglong)uVar30 * (ulonglong)_DAT_18031fc00 << 0x20)) -
       ((ulonglong)uVar11 * (_DAT_18031fcb0 & 0xffffffff) +
        ((uVar8 >> 0x20) * (_DAT_18031fcb0 & 0xffffffff) +
         (ulonglong)_DAT_18031fca0 * (ulonglong)uVar11 << 0x20) +
       (uVar6 & 0xffffffff) * (_DAT_18031fcb0 & 0xffffffff) +
       ((uVar6 >> 0x20) * (_DAT_18031fcb0 & 0xffffffff) +
        (uVar6 & 0xffffffff) * (ulonglong)_DAT_18031fca0 << 0x20))) + 0x6a75bbd0ec0953af;
  _DAT_183098250 = _DAT_183098038 ^ uVar5 ^ _DAT_183098190;
  _DAT_183098118 = (_DAT_183098118 ^ uVar5) + _DAT_183098190 ^ 0xa08195b698d90913;
  _DAT_1830980d8 = (_DAT_1830980d8 * 0x2e27a0b58f17b8b3 ^ _DAT_183098118) + uVar5;
  _DAT_183098170 = _DAT_1830980d8 ^ _DAT_183098118;
  uVar8 = uVar10 ^ 0x84222325;
  auVar17._8_8_ = uVar20;
  auVar17._0_8_ = uVar8;
  uVar6 = _DAT_183098190 + lVar4 * 0x41c3b873602468b6;
  auVar14 = pshufb(auVar17 ^ _DAT_18031fcc0,auVar14);
  uVar12 = auVar14._8_8_ + auVar14._0_8_;
  uVar5 = uVar12 + _DAT_183097f58;
  if (auVar14._4_4_ < 0) {
    uVar5 = _DAT_183097fc8 ^ uVar12;
  }
  uVar5 = func_0x000184c48570(SUB161(auVar17 ^ _DAT_18031fcc0,5) ^ uVar5);
  uVar34 = (uint)(uVar10 >> 0x20);
  auVar32._8_4_ = (int)uVar10;
  auVar32._0_8_ = uVar10;
  auVar32._12_4_ = uVar34;
  uVar30 = (uint)(uVar20 >> 0x20);
  auVar25._8_4_ = (int)uVar20;
  auVar25._0_8_ = uVar20;
  auVar25._12_4_ = uVar30;
  uVar21 = SUB164(auVar32 & auVar25,0);
  uVar12 = SUB168(auVar32 & auVar25,0);
  uVar19 = SUB164(auVar32 | auVar25,0);
  uVar29 = SUB168(auVar32 | auVar25,0);
  uVar11 = SUB164(auVar32 ^ auVar25,0);
  uVar9 = SUB168(auVar32 ^ auVar25,0);
  uVar37 = uVar10 ^ _DAT_18001a710;
  uVar5 = uVar5 << 0x25 | uVar5 >> 0x1b;
  uVar12 = (((uVar37 & 0xffffffff) * (ulonglong)_DAT_18031fd10 +
             ((ulonglong)_DAT_18031fd80 * (uVar37 & 0xffffffff) +
              (uVar37 >> 0x20) * (ulonglong)_DAT_18031fd10 << 0x20) +
            (ulonglong)_DAT_18031fd60 * (ulonglong)uVar11 +
            ((ulonglong)_DAT_18031fd70 * (ulonglong)uVar11 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_18031fd60 << 0x20) +
            (ulonglong)_DAT_18031fd40 * (ulonglong)uVar19 +
            ((ulonglong)_DAT_18031fd50 * (ulonglong)uVar19 +
             (uVar29 >> 0x20) * (ulonglong)_DAT_18031fd40 << 0x20) +
            (ulonglong)_DAT_18031fd20 * (ulonglong)uVar21 +
            ((ulonglong)_DAT_18031fd30 * (ulonglong)uVar21 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_18031fd20 << 0x20) +
            (uVar20 & 0xffffffff) * (ulonglong)_DAT_18031fcf0 +
            ((ulonglong)_DAT_18031fd00 * (uVar20 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_18031fcf0 << 0x20) +
            (uVar10 & 0xffffffff) * (ulonglong)_DAT_18031fcd0 +
            ((ulonglong)_DAT_18031fce0 * (uVar10 & 0xffffffff) +
             (ulonglong)uVar34 * (ulonglong)_DAT_18031fcd0 << 0x20)) -
           ((ulonglong)uVar11 * (ulonglong)_DAT_18031fdc0 +
            ((uVar9 >> 0x20) * (ulonglong)_DAT_18031fdc0 +
             (ulonglong)_DAT_18031fdb0 * (ulonglong)uVar11 << 0x20) +
            (ulonglong)uVar21 * (ulonglong)_DAT_18031fdc0 +
            ((uVar12 >> 0x20) * (ulonglong)_DAT_18031fdc0 +
             (ulonglong)uVar21 * (ulonglong)_DAT_18031fdb0 << 0x20) +
           (ulonglong)uVar19 * (ulonglong)_DAT_18031fdd0 +
           ((ulonglong)_DAT_18031fde0 * (ulonglong)uVar19 +
            (uVar29 >> 0x20) * (ulonglong)_DAT_18031fdd0 << 0x20))) + 0xab94f4ff3ac8ccbb;
  _DAT_1830980e0 = _DAT_183098038 ^ uVar5 ^ uVar12;
  _DAT_183098288 = (_DAT_183098288 ^ uVar5) + uVar12 ^ 0x1a10c654e2577384;
  _DAT_183097fb8 = (_DAT_183097fb8 * 0x37deb85e36632e5f ^ _DAT_183098288) + uVar5;
  _DAT_183097ec0 = _DAT_183097fb8 ^ _DAT_183098288;
  uVar5 = (uVar8 ^ _DAT_183097f58) + _DAT_183097d20 + uVar8;
  uVar9 = (uVar20 ^ _DAT_183097d20) + _DAT_183097f58 + uVar20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar8 ^ _DAT_183097f58;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar20 ^ _DAT_183097d20;
  _DAT_183098168 = uVar12;
  _DAT_183097e58 =
       func_0x000184c48570((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183097f58 + uVar20) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183097d20 + uVar8));
  uVar5 = uVar10 * uVar20 ^ _DAT_183097e58 ^ uVar10;
  uVar9 = uVar10 & uVar20;
  _DAT_183098028 = uVar10 + uVar20 + uVar9 * -2;
  _DAT_183097dc0 = (_DAT_183097dc0 ^ uVar5) + _DAT_183098028 ^ 0xed12804cd6084eff;
  _DAT_183098128 = (_DAT_183098128 * -0x2250b890d5af8447 ^ _DAT_183097dc0) + uVar5;
  _DAT_183097da8 = _DAT_183098128 ^ _DAT_183097dc0;
  uVar5 = ((_DAT_183097ea0 ^ uVar8) + (uVar8 & _DAT_183097ea0) * 2) * (uVar20 - _DAT_1830982a0);
  uVar5 = (uVar5 | _DAT_183097ef8) + (uVar5 & _DAT_183097ef8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183097e50 = func_0x000184c48570((uVar8 ^ uVar20 | uVar5) + (uVar5 & (uVar8 ^ uVar20)));
  uVar5 = (_DAT_183097e50 << 0x32 | _DAT_183097e50 >> 0xe) ^ uVar10;
  _DAT_183097f28 = (_DAT_183097f28 ^ uVar5) + uVar9 ^ 0x9242110e5391bf84;
  _DAT_183098090 = (_DAT_183098090 * -0x2b97c71d2377e767 ^ _DAT_183097f28) + uVar5;
  _DAT_183098050 = _DAT_183098090 ^ _DAT_183097f28;
  uVar12 = uVar12 - (uVar10 + uVar20);
  uVar8 = uVar6 ^ 0x84222325;
  uVar5 = ((_DAT_183097e70 ^ uVar8) + (uVar8 & _DAT_183097e70) * 2) * (uVar12 - _DAT_1830982b0);
  uVar5 = (uVar5 | _DAT_183098118) + (uVar5 & _DAT_183098118);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1830982a0 = uVar9;
  _DAT_183098190 = func_0x000184c48570((uVar8 ^ uVar12 | uVar5) + (uVar5 & (uVar8 ^ uVar12)));
  uVar5 = uVar6 * uVar12 ^ _DAT_183098190;
  uVar5 = ~((uVar5 & 0xffffffff) * (ulonglong)_DAT_18031fdf0 +
           ((ulonglong)_DAT_18031fe00 * (uVar5 & 0xffffffff) +
            (uVar5 >> 0x20) * (ulonglong)_DAT_18031fdf0 << 0x20)) & uVar6;
  uVar11 = (uint)(uVar6 >> 0x20);
  in_stack_00000060._8_4_ = (int)uVar6;
  in_stack_00000060._0_8_ = uVar6;
  in_stack_00000060._12_4_ = uVar11;
  uVar19 = (uint)(uVar12 >> 0x20);
  auVar28._8_4_ = (int)uVar12;
  auVar28._0_8_ = uVar12;
  auVar28._12_4_ = uVar19;
  uVar21 = SUB164(in_stack_00000060 & auVar28,0);
  uVar8 = SUB168(in_stack_00000060 & auVar28,0);
  uVar30 = SUB164(in_stack_00000060 | auVar28,0);
  uVar20 = SUB168(in_stack_00000060 | auVar28,0);
  uVar34 = SUB164(in_stack_00000060 ^ auVar28,0);
  uVar10 = uVar6 ^ _DAT_18001a710;
  uVar10 = (((ulonglong)uVar34 * (ulonglong)_DAT_18031fe70 +
             ((ulonglong)_DAT_18031fe80 * (ulonglong)uVar34 +
              (SUB168(in_stack_00000060 ^ auVar28,0) >> 0x20) * (ulonglong)_DAT_18031fe70 << 0x20) +
             (ulonglong)_DAT_18031fe50 * (ulonglong)uVar30 +
             ((ulonglong)_DAT_18031fe60 * (ulonglong)uVar30 +
              (uVar20 >> 0x20) * (ulonglong)_DAT_18031fe50 << 0x20) +
            (ulonglong)_DAT_18031fe30 * (ulonglong)uVar21 +
            ((ulonglong)_DAT_18031fe40 * (ulonglong)uVar21 +
             (uVar8 >> 0x20) * (ulonglong)_DAT_18031fe30 << 0x20) +
            (ulonglong)_DAT_18031fe20 * (uVar12 & 0xffffffff) +
            ((ulonglong)uVar19 * (ulonglong)_DAT_18031fe20 +
             (ulonglong)_DAT_18031fe10 * (uVar12 & 0xffffffff) << 0x20) +
            (uVar6 & 0xffffffff) * (ulonglong)_DAT_18031fe20 +
            ((ulonglong)uVar11 * (ulonglong)_DAT_18031fe20 +
             (uVar6 & 0xffffffff) * (ulonglong)_DAT_18031fe10 << 0x20)) -
           ((uVar10 & 0xffffffff) * (_DAT_18031fef0 & 0xffffffff) +
            ((ulonglong)_DAT_18031ff20 * (uVar10 & 0xffffffff) +
             (uVar10 >> 0x20) * (_DAT_18031fef0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_18031ff10 +
           ((uVar20 >> 0x20) * (ulonglong)_DAT_18031ff10 +
            (ulonglong)_DAT_18031ff00 * (ulonglong)uVar30 << 0x20) +
           (ulonglong)uVar21 * (ulonglong)_DAT_18031ff10 +
           ((uVar8 >> 0x20) * (ulonglong)_DAT_18031ff10 +
            (ulonglong)uVar21 * (ulonglong)_DAT_18031ff00 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_18031fed0 +
           ((ulonglong)_DAT_18031fee0 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_18031fed0 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_18031feb0 +
           ((ulonglong)_DAT_18031fec0 * (uVar6 & 0xffffffff) +
            (ulonglong)uVar11 * (ulonglong)_DAT_18031feb0 << 0x20))) - _DAT_18031fef0;
  _DAT_183098068 = _DAT_183098280 ^ uVar5 ^ uVar10;
  _DAT_183098298 = (_DAT_183098298 ^ uVar5) + uVar10 ^ 0x278c3d1efaf51213;
  _DAT_183097f58 = (_DAT_183097f58 * 0x1932c2e442ab263f ^ _DAT_183098298) + uVar5;
  _DAT_183097fc8 = _DAT_183097f58 ^ _DAT_183098298;
  uVar5 = ((uVar7 ^ _DAT_183097f88) + (uVar7 & _DAT_183097f88) * 2) *
          (_DAT_18031f100 - _DAT_183097d08);
  uVar5 = (uVar5 | _DAT_183097ea0) + (uVar5 & _DAT_183097ea0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183097ed8 = uVar10;
  _DAT_183097d90 = func_0x000184c48570((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1830981b8 = _DAT_1830981b8 ^ _DAT_183097d90 ^ 0x856aa084db2a252d;
  _DAT_183098228 = (_DAT_183098228 * -0x1b63f47e22adfd33 ^ _DAT_1830981b8) + _DAT_183097d90;
  _DAT_183098168 = _DAT_183098228 ^ _DAT_1830981b8;
  _DAT_183097e48 = 0;
  uVar8 = uVar10 ^ 0x84222325;
  uVar5 = ((_DAT_183097d88 ^ uVar8) + (uVar8 & _DAT_183097d88) * 2) * -_DAT_183098258;
  uVar5 = (uVar5 | _DAT_1830982e8) + (uVar5 & _DAT_1830982e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183097dd0 = func_0x000184c48570((uVar8 | uVar5) + (uVar5 & uVar8));
  uVar20 = ~(uVar10 ^ _DAT_183097dd0) & uVar10;
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar36._8_4_ = (int)uVar10;
  auVar36._0_8_ = uVar10;
  auVar36._12_4_ = uVar19;
  in_stack_00000060 = auVar36 ^ ZEXT816(0);
  auVar18._8_4_ = 0xffffffff;
  auVar18._0_8_ = 0xffffffffffffffff;
  auVar18._12_4_ = 0xffffffff;
  auVar36 = auVar36 ^ auVar18;
  uVar11 = in_stack_00000060._0_4_;
  _uStack0000000000000080 = auVar36._0_8_;
  uVar5 = _uStack0000000000000080 & 0xffffffff;
  uVar12 = _uStack0000000000000080 >> 0x20;
  uVar8 = _uStack0000000000000080 & 0xffffffff;
  uVar21 = SUB164(ZEXT816(0) ^ auVar18,0);
  uStack0000000000000090 = auVar36._4_4_;
  uStack0000000000000080 = auVar36._0_4_;
  uVar20 = uVar20 << 0x11 | uVar20 >> 0x2f;
  uVar12 = (((ulonglong)uVar21 * (ulonglong)_DAT_18031ffd0 +
             ((ulonglong)_DAT_18031ffe0 * (ulonglong)uVar21 +
              (SUB168(ZEXT816(0) ^ auVar18,0) >> 0x20) * (ulonglong)_DAT_18031ffd0 << 0x20) +
            _DAT_18031ffb0 * uVar8 + (_DAT_18031ffc0 * uVar5 + uVar12 * _DAT_18031ffb0 << 0x20) +
            (ulonglong)_DAT_18031ff90 * (ulonglong)uVar11 +
            ((ulonglong)_DAT_18031ffa0 * (ulonglong)uVar11 +
             (in_stack_00000060._0_8_ >> 0x20) * (ulonglong)_DAT_18031ff90 << 0x20) +
            (ulonglong)_DAT_18031ff30 * (uVar10 & 0xffffffff) +
            ((ulonglong)_DAT_18031ff40 * (uVar10 & 0xffffffff) +
             (ulonglong)uVar19 * (ulonglong)_DAT_18031ff30 << 0x20)) -
           ((ulonglong)uStack0000000000000080 * (ulonglong)_DAT_180320050 +
            ((ulonglong)_DAT_1803200a0 * (ulonglong)uStack0000000000000080 +
             (ulonglong)uStack0000000000000090 * (ulonglong)_DAT_180320050 << 0x20) +
            (ulonglong)uVar11 * (ulonglong)_DAT_180320080 +
            ((ulonglong)_DAT_180320090 * (ulonglong)uVar11 +
             (in_stack_00000060._0_8_ >> 0x20) * (ulonglong)_DAT_180320080 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_180320010 +
           ((ulonglong)_DAT_180320020 * (uVar10 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_180320010 << 0x20))) + 0x945ae9b6649f04c2;
  _DAT_183098008 = _DAT_183097e08 ^ uVar20 ^ uVar12;
  _DAT_1830981b8 = (_DAT_1830981b8 ^ uVar20) + uVar12 ^ 0x2d4202c4d36e03c6;
  _DAT_1830981c8 = (_DAT_1830981c8 * 0x4483866ebcb9864d ^ _DAT_1830981b8) + uVar20;
  _DAT_183097ea8 = _DAT_1830981c8 ^ _DAT_1830981b8;
  uVar8 = in_stack_000000a8 ^ 0x84222325;
  uVar5 = ((_DAT_183098008 ^ uVar8) + (uVar8 & _DAT_183098008) * 2) * (uVar12 - _DAT_183097f30);
  uVar5 = (uVar5 | _DAT_183097db0) + (uVar5 & _DAT_183097db0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183098260 = uVar12;
  _DAT_183097d88 = func_0x000184c48570((uVar8 ^ uVar12 | uVar5) + (uVar5 & (uVar8 ^ uVar12)));
  _DAT_183098000 = uVar12 ^ in_stack_000000a8;
  _DAT_1830982a0 = (_DAT_1830982a0 ^ _DAT_183097d88) + _DAT_183098000 ^ 0x83c510cf76980e19;
  _DAT_183098060 = (_DAT_183098060 * 0x55f4e01d1bf8a0bf ^ _DAT_1830982a0) + _DAT_183097d88;
  _DAT_183098050 = _DAT_183098060 ^ _DAT_1830982a0;
  in_stack_00000030 = _DAT_183098000;
  FUN_190de3220(extraout_XMM0_Qa,&stack0x00000028,*_DAT_18301ee50 + 0x22d82,*_DAT_18301ee50 + 0x5a,
                0x19ff);
  cVar3 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar3 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4c47cf6 (image 184c47cf6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c47cf6(void)

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



// ===== continuation @ rva 4c47ab0 (image 184c47ab0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c47ab0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18031f308)();
  return;
}



// ===== continuation @ rva 4c47976 (image 184c47976) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c47976(void)

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



// ===== continuation @ rva 4c48232 (image 184c48232) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c48232(void)

{
  (*_DAT_18031f2f8)();
  return;
}



// ===== continuation @ rva 4c4876b (image 184c4876b) =====

void FUN_184c4876b(void)

{
  return;
}



// ===== continuation @ rva 4c4865a (image 184c4865a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c4865a(void)

{
  FUN_190ddfc90();
  (*_DAT_180320128)();
  return;
}



// ===== continuation @ rva 4c48700 (image 184c48700) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c48700(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180320168)();
  return;
}



// ===== continuation @ rva 4c486b1 (image 184c486b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c486b1(void)

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



// ===== continuation @ rva 4c48773 (image 184c48773) =====

void FUN_184c48773(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c4868d (image 184c4868d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c4868d(void)

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



// ===== continuation @ rva 4c48760 (image 184c48760) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c48760(void)

{
  (*_DAT_180320138)();
  return;
}



// ===== continuation @ rva 4c4873f (image 184c4873f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c4873f(void)

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



// ===== continuation @ rva 4c4871b (image 184c4871b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c4871b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_180320158)();
  return;
}



// ===== continuation @ rva 4c538fe (image 184c538fe) =====

void FUN_184c538fe(void)

{
  return;
}



// ===== continuation @ rva 4c488df (image 184c488df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c488df(void)

{
  FUN_190ddce00();
  (*_DAT_1803204b8)();
  return;
}



// ===== continuation @ rva 4c53a6c (image 184c53a6c) =====

void FUN_184c53a6c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c4ef32 (image 184c4ef32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c4ef32(void)

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



// ===== continuation @ rva 4c525e6 (image 184c525e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c525e6(void)

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



// ===== continuation @ rva 4c4ee38 (image 184c4ee38) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c4ee38(void)

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



// ===== continuation @ rva 4c5324c (image 184c5324c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c5324c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1803206c8)();
  return;
}



// ===== continuation @ rva 4c4fb9a (image 184c4fb9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c4fb9a(void)

{
  longlong in_stack_000000f0;
  
  switch(in_stack_000000f0 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4c4f9cf (image 184c4f9cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c4f9cf(void)

{
  FUN_190ddfc90();
  (*_DAT_180320aa8)();
  return;
}



// ===== continuation @ rva 4c52ab9 (image 184c52ab9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c52ab9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_180320ab8)();
  return;
}



// ===== continuation @ rva 4c52caa (image 184c52caa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c52caa(void)

{
  FUN_190de3220();
  (*_DAT_180320608)();
  return;
}



// ===== continuation @ rva 4c53c8a (image 184c53c8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c53c8a(void)

{
  FUN_190dd72e0();
  (*_DAT_180323348)();
  return;
}



// ===== continuation @ rva 4c53c17 (image 184c53c17) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c53c17(void)

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



// ===== continuation @ rva 4c5482b (image 184c5482b) =====

void FUN_184c5482b(void)

{
  return;
}



// ===== continuation @ rva 4c53c50 (image 184c53c50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c53c50(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180323108)();
  return;
}



// ===== continuation @ rva 4c547db (image 184c547db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c547db(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x198))();
  (*_DAT_180323258)();
  return;
}



// ===== continuation @ rva 4c53c75 (image 184c53c75) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c53c75(void)

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



// ===== continuation @ rva 4c5481d (image 184c5481d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c5481d(void)

{
  (*_DAT_180323328)();
  return;
}



// ===== continuation @ rva 4c54787 (image 184c54787) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c54787(void)

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



// ===== continuation @ rva 4c5407d (image 184c5407d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c5407d(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_EBX;
  uint unaff_EBP;
  longlong *unaff_RSI;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  
  uVar2 = (ulonglong)unaff_EBX;
  uVar5 = (ulonglong)unaff_EBP ^ 0x84222325;
  uVar3 = (uVar2 - param_1) * ((param_2 ^ uVar5) + (ulonglong)((uint)param_2 & (uint)uVar5) * 2);
  uVar3 = (uVar3 | in_RAX) + (uVar3 & in_RAX);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183098740 =
       func_0x000184c54890((uVar5 ^ uVar2 | uVar3) +
                           (ulonglong)((uint)(uVar5 ^ uVar2) & (uint)uVar3));
  auVar14 = _DAT_18001a990;
  uVar2 = _DAT_183098740 ^ uVar2;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar2 ^
          (ulonglong)unaff_EBP;
  uVar15 = unaff_EBP & unaff_EBX;
  uVar13 = unaff_EBP | unaff_EBX;
  uVar7 = unaff_EBP ^ unaff_EBX;
  uVar12 = unaff_EBX ^ 0xffffffff;
  uVar5 = ((ulonglong)_DAT_180323370 * (ulonglong)uVar12 + _DAT_1803233e0 << 0x20) +
          (ulonglong)_DAT_1803233d0 * (ulonglong)uVar12 +
          ((ulonglong)_DAT_1803233a0 * (ulonglong)uVar7 << 0x20) +
          (ulonglong)_DAT_180323390 * (ulonglong)uVar7 +
          ((ulonglong)uVar15 * (ulonglong)_DAT_1803233a0 << 0x20) +
          (ulonglong)uVar15 * (ulonglong)_DAT_180323390 +
          ((ulonglong)unaff_EBX * (ulonglong)_DAT_180323370 << 0x20) + (ulonglong)unaff_EBP +
          (ulonglong)_DAT_180323380 * (ulonglong)unaff_EBX +
          ((ulonglong)_DAT_1803233c0 * (ulonglong)uVar13 << 0x20) +
          (ulonglong)_DAT_1803233b0 * (ulonglong)uVar13 +
          (-(((ulonglong)uVar12 * (ulonglong)_DAT_1803234c0 + _DAT_1803234d0 << 0x20) +
            (ulonglong)_DAT_1803234b0 * (ulonglong)uVar12) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_1803234a0 << 0x20) +
           (ulonglong)_DAT_180323490 * (ulonglong)uVar7 +
           ((ulonglong)uVar13 * (ulonglong)_DAT_180323480 << 0x20) +
           (ulonglong)_DAT_180323470 * (ulonglong)uVar13 +
          ((ulonglong)uVar15 * (ulonglong)_DAT_180323460 << 0x20) +
          (ulonglong)_DAT_180323450 * (ulonglong)uVar15 +
          ((ulonglong)unaff_EBX * (ulonglong)_DAT_180323440 << 0x20) +
          (ulonglong)_DAT_180323430 * (ulonglong)unaff_EBX +
          ((ulonglong)unaff_EBP * (ulonglong)_DAT_180323420 << 0x20) +
          (ulonglong)_DAT_180323410 * (ulonglong)unaff_EBP)) + 0x6d626cd601f5da0d;
  _DAT_1830988a0 = uVar5 ^ uVar2;
  _DAT_183098968 = (_DAT_183098968 ^ uVar2) + uVar5 ^ 0xf47dba4d78a136fd;
  _DAT_183098850 = (_DAT_183098850 * 0x3c7556d284a3678d ^ _DAT_183098968) + uVar2;
  _DAT_1830987b8 = _DAT_183098850 ^ _DAT_183098968;
  uVar2 = uVar5 & 0xffffffff;
  uVar3 = uVar2 ^ 0x84222325 ^ _DAT_183098a98;
  lVar4 = (uVar2 ^ 0x84222325) + _DAT_183098978;
  uVar9 = uVar3 + lVar4;
  uVar10 = (_DAT_183098978 ^ 1) + _DAT_183098a98 + 1;
  uVar3 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar3;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183098978 ^ 1;
  _DAT_1830988f0 = uVar2;
  _DAT_183098918 =
       func_0x000184c54890((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183098a98 + 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  uVar2 = _DAT_183098918 ^ uVar2;
  uVar12 = (uint)uVar5 & auVar14._0_4_;
  auVar14 = auVar14 | auVar6;
  auVar8._8_4_ = 0xffffffff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8._12_4_ = 0xffffffff;
  uVar13 = auVar14._0_4_;
  lVar11 = ((uVar5 & 0xffffffff) * (ulonglong)_DAT_180323530 << 0x20) +
           (ulonglong)_DAT_180323520 * (uVar5 & 0xffffffff);
  uVar7 = SUB164(auVar8 ^ auVar6,0);
  lVar4 = (ulonglong)uVar7 * (ulonglong)_DAT_180323550 +
          ((SUB168(auVar8 ^ auVar6,0) >> 0x20) * (ulonglong)_DAT_180323550 +
           (ulonglong)_DAT_180323540 * (ulonglong)uVar7 << 0x20) +
          (uVar5 & 0xffffffff) * (ulonglong)_DAT_180323550 +
          ((uVar5 & 0xffffffff) * (ulonglong)_DAT_180323540 << 0x20) + lVar11;
  _DAT_183098708 =
       (((ulonglong)uVar13 * (ulonglong)_DAT_180323500 +
         ((auVar14._0_8_ >> 0x20) * (ulonglong)_DAT_180323500 +
          (ulonglong)_DAT_180323510 * (ulonglong)uVar13 << 0x20) +
         ((ulonglong)uVar12 * (ulonglong)_DAT_180323510 << 0x20 |
         (ulonglong)uVar12 * (ulonglong)_DAT_180323500) +
         (ulonglong)_DAT_1803234e0 * (uVar5 & 0xffffffff) +
         ((ulonglong)_DAT_1803234f0 * (uVar5 & 0xffffffff) << 0x20) + lVar11) - lVar4) +
       0xc0c55914f0ce195e;
  _DAT_1830989b0 = _DAT_1830989f0 ^ uVar2 ^ _DAT_183098708;
  _DAT_183098890 = (_DAT_183098890 ^ uVar2) + _DAT_183098708 ^ 0xab83ea78a5f97e12;
  _DAT_1830988d0 = (_DAT_1830988d0 * -0x2420754d54067cb7 ^ _DAT_183098890) + uVar2;
  _DAT_183098ae0 = _DAT_1830988d0 ^ _DAT_183098890;
  _DAT_183098708 = _DAT_183098708 & 0xffffffff;
  FUN_190dd72e0(lVar4,*_DAT_18301ee50 + 0x12886,0x2f3);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4c54888 (image 184c54888) =====

void FUN_184c54888(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c53e9b (image 184c53e9b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c53e9b(void)

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



// ===== continuation @ rva 4c53e76 (image 184c53e76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c53e76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180323148)();
  return;
}



// ===== continuation @ rva 4c62df7 (image 184c62df7) =====

void FUN_184c62df7(void)

{
  return;
}



// ===== continuation @ rva 4c54a1c (image 184c54a1c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c54a1c(void)

{
  FUN_190ddce00();
  (*_DAT_180324118)();
  return;
}



// ===== continuation @ rva 4c62e63 (image 184c62e63) =====

void FUN_184c62e63(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c5a7f7 (image 184c5a7f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c5a7f7(void)

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



// ===== continuation @ rva 4c619ad (image 184c619ad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c619ad(void)

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



// ===== continuation @ rva 4c62de8 (image 184c62de8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c62de8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1803252d8)();
  return;
}



// ===== continuation @ rva 4c5b15c (image 184c5b15c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c5b15c(void)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar23;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar24;
  uint uVar25;
  uint uVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ulonglong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulonglong uVar44;
  uint uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uStack0000000000000070;
  uint uStack00000000000000b0;
  uint uStack00000000000000b4;
  ulonglong uStack00000000000000c0;
  ulonglong in_stack_000000f8;
  ulonglong uStack0000000000000100;
  ulonglong uStack0000000000000108;
  ulonglong in_stack_00000118;
  
  uVar4 = _DAT_180323578;
  uVar3 = _DAT_180323570;
  uStack0000000000000070 = 0x601c;
  uVar2 = _DAT_180323570 ^ 0x84222325 ^ _DAT_183098b00;
  lVar6 = (_DAT_180323570 ^ 0x84222325) + _DAT_183098d00;
  uVar11 = uVar2 + lVar6;
  uVar23 = (_DAT_183098d00 ^ 0xd57a3296c737aea1) + _DAT_183098b00 + 0xd57a3296c737aea1;
  uVar2 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar2;
  uVar11 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ _DAT_183098d00 ^ 0xd57a3296c737aea1;
  _DAT_1830990f8 =
       func_0x000184c62f00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183098b00 + 0xd57a3296c737aea1)
                           ^ (uVar2 << 0x1d | uVar2 >> 0x23) - lVar6);
  uVar2 = _DAT_1830990f8 << 0x39 | _DAT_1830990f8 >> 7;
  uVar11 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar2;
  uVar11 = uVar3 | 0xd57a3296c737aea1;
  _DAT_1830990d8 = (_DAT_1830990d8 ^ uVar2) + uVar11 ^ 0xad6102efcd2728d8;
  _DAT_183098f08 = (_DAT_183098f08 * -0x26fe806117267801 ^ _DAT_1830990d8) + uVar2;
  _DAT_183098ca0 = _DAT_183098f08 ^ _DAT_1830990d8;
  auVar13._8_8_ = _UNK_1803261c8;
  auVar13._0_8_ = uVar4 ^ 0x84222325;
  auVar12 = pshufb(auVar13 ^ _DAT_1803261d0,unaff_XMM10);
  uVar23 = auVar12._8_8_ + auVar12._0_8_;
  uVar2 = uVar23 + _DAT_183098c08;
  if (auVar12._4_4_ < 0) {
    uVar2 = _DAT_1830990f0 ^ uVar23;
  }
  _DAT_183098f90 = uVar11;
  _DAT_183098b08 = func_0x000184c62f00(SUB161(auVar13 ^ _DAT_1803261d0,5) ^ uVar2);
  uVar2 = (uVar4 * -0x284515390f11fb0c ^ _DAT_183098b08) & 0x7fffffffffffffff;
  uVar23 = uVar4 ^ 0xd7baeac6f0ee04f4;
  _DAT_183098c78 = (_DAT_183098c78 ^ uVar2) + uVar23 ^ 0x926cdb0a47619c22;
  _DAT_183098fc8 = (_DAT_183098fc8 * 0x5972f2366bcc2861 ^ _DAT_183098c78) + uVar2;
  _DAT_183098eb8 = _DAT_183098fc8 ^ _DAT_183098c78;
  lVar6 = uVar3 * uVar3;
  uVar5 = lVar6 * -0x732fc5d38c7e992c;
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = _DAT_18001b640;
  auVar13 = pshufb(auVar12 ^ _DAT_1803261e0,unaff_XMM10);
  uVar2 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar2 + _DAT_183098fb0;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_183099000 ^ uVar2;
  }
  _DAT_183098d88 = uVar23;
  _DAT_183098b10 = func_0x000184c62f00(uVar3 ^ 0x1e);
  uVar8 = lVar6 * 0x732fc5d38c7e992c;
  _DAT_183099068 =
       (_DAT_183099068 ^ _DAT_183098b10) + lVar6 * 0x732fc5d38c7e992c ^ 0x9c93bc208bd2d27c;
  _DAT_183098cb8 = (_DAT_183098cb8 * -0x4f0c26c19fc6ee85 ^ _DAT_183099068) + _DAT_183098b10;
  _DAT_183098b88 = _DAT_183098cb8 ^ _DAT_183099068;
  auVar47._8_8_ = uVar5;
  auVar47._0_8_ = _DAT_1803261f0;
  auVar13 = pshufb(auVar47 ^ _DAT_180326200,unaff_XMM10);
  uVar2 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar2 + _DAT_183098de0;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_183098b28 ^ uVar2;
  }
  _DAT_183098b38 = uVar8;
  _DAT_183098e28 = func_0x000184c62f00(SUB161(auVar47 ^ _DAT_180326200,5) ^ uVar3);
  uVar10 = (uint)(uVar5 >> 0x20);
  auVar31._8_4_ = (int)uVar5;
  auVar31._0_8_ = uVar5;
  auVar31._12_4_ = uVar10;
  uVar25 = SUB164(auVar31 & _DAT_180326210,0);
  uVar36 = SUB168(auVar31 & _DAT_180326210,0);
  uVar22 = SUB164(auVar31 | _DAT_180326210,0);
  uVar2 = SUB168(auVar31 | _DAT_180326210,0);
  uVar9 = SUB164(_DAT_180326210 ^ auVar31,0);
  uVar44 = SUB168(_DAT_180326210 ^ auVar31,0);
  auVar50._8_4_ = 0xffffffff;
  auVar50._0_8_ = 0xffffffffffffffff;
  auVar50._12_4_ = 0xffffffff;
  uVar24 = SUB164(auVar31 ^ auVar50,0);
  uVar3 = _DAT_183098e28 * 0x50ad22c1d059bb1;
  uVar44 = (((ulonglong)uVar24 * (ulonglong)_DAT_1803262a0 +
             ((ulonglong)_DAT_1803262b0 * (ulonglong)uVar24 +
              (SUB168(auVar31 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_1803262a0 << 0x20) +
            (ulonglong)_DAT_180326280 * (ulonglong)uVar9 +
            ((ulonglong)_DAT_180326290 * (ulonglong)uVar9 +
             (uVar44 >> 0x20) * (ulonglong)_DAT_180326280 << 0x20) +
            (ulonglong)_DAT_180326260 * (ulonglong)uVar22 +
            ((ulonglong)_DAT_180326270 * (ulonglong)uVar22 +
             (uVar2 >> 0x20) * (ulonglong)_DAT_180326260 << 0x20) +
            (ulonglong)_DAT_180326240 * (ulonglong)uVar25 +
            ((ulonglong)_DAT_180326250 * (ulonglong)uVar25 +
             (uVar36 >> 0x20) * (ulonglong)_DAT_180326240 << 0x20) +
            (ulonglong)_DAT_180326220 * (uVar5 & 0xffffffff) +
            ((ulonglong)_DAT_180326230 * (uVar5 & 0xffffffff) +
             (ulonglong)uVar10 * (ulonglong)_DAT_180326220 << 0x20)) -
           ((ulonglong)uVar9 * (ulonglong)_DAT_180326340 +
            ((ulonglong)_DAT_180326350 * (ulonglong)uVar9 +
             (uVar44 >> 0x20) * (ulonglong)_DAT_180326340 << 0x20) +
            (ulonglong)uVar22 * (ulonglong)_DAT_180326320 +
            ((ulonglong)_DAT_180326330 * (ulonglong)uVar22 +
             (uVar2 >> 0x20) * (ulonglong)_DAT_180326320 << 0x20) +
           (ulonglong)uVar25 * (ulonglong)_DAT_180326300 +
           ((ulonglong)_DAT_180326310 * (ulonglong)uVar25 +
            (uVar36 >> 0x20) * (ulonglong)_DAT_180326300 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_1803262e0 +
           ((ulonglong)_DAT_1803262f0 * (uVar5 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1803262e0 << 0x20))) + _DAT_180326360;
  _DAT_183098d38 = _DAT_183098e90 ^ uVar3 ^ uVar44;
  _DAT_1830990d0 = (_DAT_1830990d0 ^ uVar3) + uVar44 ^ 0xefdd60dd9b7e05a2;
  _DAT_183098f38 = (_DAT_183098f38 * -0x656206e09195aab9 ^ _DAT_1830990d0) + uVar3;
  _DAT_183098f08 = _DAT_183098f38 ^ _DAT_1830990d0;
  uVar3 = uVar44 ^ 0x84222325 ^ _DAT_183098d98;
  lVar7 = (uVar44 ^ 0x84222325) + _DAT_183098ec8;
  lVar6 = _DAT_183098d98 + lVar6 * 0x732fc5d38c7e992c;
  uVar2 = uVar3 + lVar7;
  uVar5 = (uVar8 ^ _DAT_183098ec8) + lVar6;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar3;
  uVar2 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar8 ^ _DAT_183098ec8;
  _DAT_183098e90 = uVar44;
  _DAT_183098bc8 =
       func_0x000184c62f00((uVar2 << 0x1d | uVar2 >> 0x23) - lVar6 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar3 = ~_DAT_183098bc8 & uVar44;
  uVar30 = (uint)(uVar44 >> 0x20);
  auVar14._8_4_ = (int)uVar44;
  auVar14._0_8_ = uVar44;
  auVar14._12_4_ = uVar30;
  uVar10 = (uint)(uVar8 >> 0x20);
  auVar37._8_4_ = (int)uVar8;
  auVar37._0_8_ = uVar8;
  auVar37._12_4_ = uVar10;
  uVar24 = SUB164(auVar14 & auVar37,0);
  uVar5 = SUB168(auVar14 & auVar37,0);
  uVar22 = SUB164(auVar14 | auVar37,0);
  uVar36 = SUB168(auVar14 | auVar37,0);
  uVar9 = SUB164(auVar14 ^ auVar37,0);
  uVar2 = SUB168(auVar14 ^ auVar37,0);
  auVar51._8_4_ = 0xffffffff;
  auVar51._0_8_ = 0xffffffffffffffff;
  auVar51._12_4_ = 0xffffffff;
  uVar25 = SUB164(auVar14 ^ auVar51,0);
  uVar8 = (((ulonglong)_DAT_1803263d0 * (ulonglong)uVar9 +
            ((ulonglong)_DAT_1803263e0 * (ulonglong)uVar9 +
             (uVar2 >> 0x20) * (ulonglong)_DAT_1803263d0 << 0x20) +
            (ulonglong)_DAT_1803263b0 * (ulonglong)uVar22 +
            ((ulonglong)_DAT_1803263c0 * (ulonglong)uVar22 +
             (uVar36 >> 0x20) * (ulonglong)_DAT_1803263b0 << 0x20) +
           (ulonglong)_DAT_180326390 * (ulonglong)uVar24 +
           ((ulonglong)_DAT_1803263a0 * (ulonglong)uVar24 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_180326390 << 0x20) +
           (ulonglong)_DAT_180326380 * (uVar8 & 0xffffffff) +
           ((ulonglong)uVar10 * (ulonglong)_DAT_180326380 +
            (ulonglong)_DAT_180326370 * (uVar8 & 0xffffffff) << 0x20) +
           (uVar44 & 0xffffffff) * (ulonglong)_DAT_180326380 +
           ((ulonglong)uVar30 * (ulonglong)_DAT_180326380 +
            (uVar44 & 0xffffffff) * (ulonglong)_DAT_180326370 << 0x20)) -
          ((ulonglong)uVar25 * (_DAT_180326450 & 0xffffffff) +
           ((ulonglong)_DAT_1803264c0 * (ulonglong)uVar25 +
            (SUB168(auVar14 ^ auVar51,0) >> 0x20) * (_DAT_180326450 & 0xffffffff) << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_1803264a0 +
          ((ulonglong)_DAT_1803264b0 * (ulonglong)uVar9 +
           (uVar2 >> 0x20) * (ulonglong)_DAT_1803264a0 << 0x20) +
          (ulonglong)uVar22 * (ulonglong)_DAT_180326480 +
          ((ulonglong)_DAT_180326490 * (ulonglong)uVar22 +
           (uVar36 >> 0x20) * (ulonglong)_DAT_180326480 << 0x20) +
          (ulonglong)uVar24 * (ulonglong)_DAT_180326460 +
          ((ulonglong)_DAT_180326470 * (ulonglong)uVar24 +
           (uVar5 >> 0x20) * (ulonglong)_DAT_180326460 << 0x20) +
          (uVar8 & 0xffffffff) * (ulonglong)_DAT_180326430 +
          ((ulonglong)_DAT_180326440 * (uVar8 & 0xffffffff) +
           (ulonglong)uVar10 * (ulonglong)_DAT_180326430 << 0x20) +
          (uVar44 & 0xffffffff) * (ulonglong)_DAT_180326410 +
          ((ulonglong)_DAT_180326420 * (uVar44 & 0xffffffff) +
           (ulonglong)uVar30 * (ulonglong)_DAT_180326410 << 0x20))) - _DAT_180326450;
  _DAT_183098d80 = _DAT_183098e68 ^ uVar3 ^ uVar8;
  _DAT_183098ba8 = (_DAT_183098ba8 ^ uVar3) + uVar8 ^ 0x8008603257bbde43;
  _DAT_183098e28 = (_DAT_183098e28 * -0x300ffeaa5cd3e55f ^ _DAT_183098ba8) + uVar3;
  _DAT_183098ec0 = _DAT_183098e28 ^ _DAT_183098ba8;
  uVar2 = uVar4 * uVar4 * 0x16dd1e7a9914381f;
  uVar5 = uVar4 * uVar4 * -0x16dd1e7a9914381f;
  uVar4 = uVar8 ^ 0x84222325;
  uVar3 = ((_DAT_183099020 ^ uVar4) + (uVar4 & _DAT_183099020) * 2) * (uVar2 - _DAT_183099078);
  uVar3 = (uVar3 | _DAT_183098d90) + (uVar3 & _DAT_183098d90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183098b50 = uVar8;
  _DAT_183098ba0 = func_0x000184c62f00((uVar4 ^ uVar2 | uVar3) + (uVar3 & (uVar4 ^ uVar2)));
  uVar3 = _DAT_183098ba0 >> 1 | _DAT_183098ba0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_183098ba0 ^ uVar8;
  uVar30 = (uint)(uVar8 >> 0x20);
  auVar32._8_4_ = (int)uVar8;
  auVar32._0_8_ = uVar8;
  auVar32._12_4_ = uVar30;
  uVar10 = (uint)(uVar2 >> 0x20);
  auVar26._8_4_ = (int)uVar2;
  auVar26._0_8_ = uVar2;
  auVar26._12_4_ = uVar10;
  uVar22 = SUB164(auVar32 & auVar26,0);
  uVar44 = SUB168(auVar32 & auVar26,0);
  uVar9 = SUB164(auVar32 ^ auVar26,0);
  uVar4 = SUB168(auVar32 ^ auVar26,0);
  uVar24 = SUB164(auVar26 ^ auVar51,0);
  uVar25 = SUB164(auVar32 | auVar26,0);
  auVar46._0_8_ =
       (((ulonglong)uVar24 * (_DAT_180326510 & 0xffffffff) +
         ((ulonglong)_DAT_180326560 * (ulonglong)uVar24 +
          (SUB168(auVar26 ^ auVar51,0) >> 0x20) * (_DAT_180326510 & 0xffffffff) << 0x20) +
         (ulonglong)_DAT_180326540 * (ulonglong)uVar9 +
         ((ulonglong)_DAT_180326550 * (ulonglong)uVar9 + (uVar4 >> 0x20) * (ulonglong)_DAT_180326540
         << 0x20) +
        (ulonglong)_DAT_180326520 * (ulonglong)uVar22 +
        ((ulonglong)_DAT_180326530 * (ulonglong)uVar22 +
         (uVar44 >> 0x20) * (ulonglong)_DAT_180326520 << 0x20) +
        (ulonglong)_DAT_1803264f0 * (uVar2 & 0xffffffff) +
        ((ulonglong)_DAT_180326500 * (uVar2 & 0xffffffff) +
         (ulonglong)uVar10 * (ulonglong)_DAT_1803264f0 << 0x20) +
        (ulonglong)_DAT_1803264d0 * (uVar8 & 0xffffffff) +
        ((ulonglong)_DAT_1803264e0 * (uVar8 & 0xffffffff) +
         (ulonglong)uVar30 * (ulonglong)_DAT_1803264d0 << 0x20)) -
       ((ulonglong)uVar9 * (_DAT_1803265f0 & 0xffffffff) +
        ((ulonglong)_DAT_180326600 * (ulonglong)uVar9 +
         (uVar4 >> 0x20) * (_DAT_1803265f0 & 0xffffffff) << 0x20) +
        (ulonglong)uVar25 * (ulonglong)_DAT_1803265d0 +
        ((ulonglong)_DAT_1803265e0 * (ulonglong)uVar25 +
         (SUB168(auVar32 | auVar26,0) >> 0x20) * (ulonglong)_DAT_1803265d0 << 0x20) +
       (ulonglong)uVar22 * (ulonglong)_DAT_1803265b0 +
       ((ulonglong)_DAT_1803265c0 * (ulonglong)uVar22 + (uVar44 >> 0x20) * (ulonglong)_DAT_1803265b0
       << 0x20) +
       (uVar2 & 0xffffffff) * (ulonglong)_DAT_1803265a0 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_1803265a0 +
        (ulonglong)_DAT_180326590 * (uVar2 & 0xffffffff) << 0x20) +
       (uVar8 & 0xffffffff) * (ulonglong)_DAT_1803265a0 +
       ((ulonglong)uVar30 * (ulonglong)_DAT_1803265a0 +
        (uVar8 & 0xffffffff) * (ulonglong)_DAT_180326590 << 0x20))) + _DAT_180326510;
  auVar15._8_8_ = uVar5;
  auVar15._0_8_ = auVar46._0_8_ ^ 0x84222325;
  auVar13 = pshufb(auVar15 ^ _DAT_180326610,_DAT_1800170c0);
  _DAT_183099038 = _DAT_183098d20 ^ uVar3 ^ auVar46._0_8_;
  _DAT_183098b00 = (_DAT_183098b00 ^ uVar3) + auVar46._0_8_ ^ 0xe1e97dc225910b14;
  _DAT_183098c08 = (_DAT_183098c08 * -0x77cb693a7526cb07 ^ _DAT_183098b00) + uVar3;
  _DAT_183098ea0 = _DAT_183098c08 ^ _DAT_183098b00;
  uVar4 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar4 + _DAT_183098e18;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_183098ca8 ^ uVar4;
  }
  _DAT_183098f38 = auVar46._0_8_;
  _DAT_183098ce8 = func_0x000184c62f00(SUB161(auVar15 ^ _DAT_180326610,5) ^ uVar3);
  uVar22 = (uint)(auVar46._0_8_ >> 0x20);
  auVar46._8_4_ = (int)auVar46._0_8_;
  auVar46._12_4_ = uVar22;
  uVar10 = (uint)(uVar5 >> 0x20);
  auVar27._8_4_ = (int)uVar5;
  auVar27._0_8_ = uVar5;
  auVar27._12_4_ = uVar10;
  uStack00000000000000c0 = auVar46._0_8_ | uVar5;
  uVar24 = SUB164(auVar46 & auVar27,0);
  uVar36 = SUB168(auVar46 & auVar27,0);
  _uStack00000000000000b0 = SUB168(auVar46 ^ auVar27,0);
  uVar8 = _uStack00000000000000b0;
  uVar3 = _uStack00000000000000b0 & 0xffffffff;
  uVar4 = _uStack00000000000000b0 & 0xffffffff;
  uVar2 = _uStack00000000000000b0 >> 0x20;
  uVar25 = SUB164(auVar27 ^ _DAT_18001a710,0);
  uStack00000000000000b0 = SUB164(auVar46 ^ auVar27,0);
  uVar44 = (uVar5 | auVar46._0_8_) ^ _DAT_183098ce8;
  uVar9 = SUB164(auVar46 ^ _DAT_18001a710,0);
  uVar8 = (((ulonglong)uVar25 * (ulonglong)_DAT_180326660 +
            ((ulonglong)_DAT_1803266b0 * (ulonglong)uVar25 +
             (SUB168(auVar27 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_180326660 << 0x20) +
            _DAT_180326690 * uVar4 + (_DAT_1803266a0 * uVar3 + uVar2 * _DAT_180326690 << 0x20) +
           (ulonglong)_DAT_180326670 * (ulonglong)uVar24 +
           ((ulonglong)_DAT_180326680 * (ulonglong)uVar24 +
            (uVar36 >> 0x20) * (ulonglong)_DAT_180326670 << 0x20) +
           (ulonglong)_DAT_180326640 * (uVar5 & 0xffffffff) +
           ((ulonglong)_DAT_180326650 * (uVar5 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_180326640 << 0x20) +
           (ulonglong)_DAT_180326620 * (auVar46._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_180326630 * (auVar46._0_8_ & 0xffffffff) +
            (ulonglong)uVar22 * (ulonglong)_DAT_180326620 << 0x20)) -
          ((ulonglong)uVar9 * (ulonglong)_DAT_180326720 +
           ((ulonglong)_DAT_180326790 * (ulonglong)uVar9 +
            (SUB168(auVar46 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_180326720 << 0x20) +
          (ulonglong)uStack00000000000000b0 * (ulonglong)_DAT_180326770 +
          ((ulonglong)_DAT_180326780 * (ulonglong)uStack00000000000000b0 +
           (uVar8 >> 0x20) * (ulonglong)_DAT_180326770 << 0x20) +
          (uStack00000000000000c0 & 0xffffffff) * (ulonglong)_DAT_180326750 +
          ((ulonglong)_DAT_180326760 * (uStack00000000000000c0 & 0xffffffff) +
           (uStack00000000000000c0 >> 0x20) * (ulonglong)_DAT_180326750 << 0x20) +
          (ulonglong)uVar24 * (ulonglong)_DAT_180326730 +
          ((ulonglong)_DAT_180326740 * (ulonglong)uVar24 +
           (uVar36 >> 0x20) * (ulonglong)_DAT_180326730 << 0x20) +
          (uVar5 & 0xffffffff) * (ulonglong)_DAT_180326700 +
          ((ulonglong)_DAT_180326710 * (uVar5 & 0xffffffff) +
           (ulonglong)uVar10 * (ulonglong)_DAT_180326700 << 0x20) +
          (auVar46._0_8_ & 0xffffffff) * (ulonglong)_DAT_1803266e0 +
          ((ulonglong)_DAT_1803266f0 * (auVar46._0_8_ & 0xffffffff) +
           (ulonglong)uVar22 * (ulonglong)_DAT_1803266e0 << 0x20))) + _DAT_1803267a0;
  _DAT_183099008 = _DAT_183098f58 ^ uVar44 ^ uVar8;
  _DAT_183098d80 = (_DAT_183098d80 ^ uVar44) + uVar8 ^ 0x420d2898e6e2c11f;
  _DAT_183098fa8 = (_DAT_183098fa8 * -0x29fc65df9630f35d ^ _DAT_183098d80) + uVar44;
  _DAT_183098bc8 = _DAT_183098fa8 ^ _DAT_183098d80;
  uVar4 = _DAT_180323570 * _DAT_180323578 * -0x1ef4bf746700a97e;
  uVar3 = uVar8 ^ 0x84222325 ^ _DAT_183098d60;
  lVar6 = (uVar8 ^ 0x84222325) + _DAT_183098e10;
  uVar2 = uVar3 + lVar6;
  uVar5 = (uVar4 ^ _DAT_183098e10) + _DAT_183098d60 + uVar4;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar3;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4 ^ _DAT_183098e10;
  uVar2 = _DAT_180323570 * _DAT_180323578 * 0x1ef4bf746700a97e;
  _DAT_183098e70 = uVar8;
  _DAT_183098be8 =
       func_0x000184c62f00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183098d60 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar6);
  uVar30 = (uint)(uVar8 >> 0x20);
  auVar40._8_4_ = (int)uVar8;
  auVar40._0_8_ = uVar8;
  auVar40._12_4_ = uVar30;
  uVar9 = (uint)(uVar4 >> 0x20);
  auVar16._8_4_ = (int)uVar4;
  auVar16._0_8_ = uVar4;
  auVar16._12_4_ = uVar9;
  uVar24 = SUB164(auVar40 & auVar16,0);
  uVar5 = SUB168(auVar40 & auVar16,0);
  uVar22 = SUB164(auVar40 | auVar16,0);
  uVar44 = SUB168(auVar40 | auVar16,0);
  uVar10 = SUB164(auVar40 ^ auVar16,0);
  uVar3 = SUB168(auVar40 ^ auVar16,0);
  uVar25 = SUB164(auVar16 ^ _DAT_18001a710,0);
  uVar5 = (((ulonglong)_DAT_180326810 * (ulonglong)uVar10 +
            ((ulonglong)_DAT_180326820 * (ulonglong)uVar10 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_180326810 << 0x20) +
            (ulonglong)_DAT_1803267f0 * (ulonglong)uVar22 +
            ((ulonglong)_DAT_180326800 * (ulonglong)uVar22 +
             (uVar44 >> 0x20) * (ulonglong)_DAT_1803267f0 << 0x20) +
           (ulonglong)_DAT_1803267d0 * (ulonglong)uVar24 +
           ((ulonglong)_DAT_1803267e0 * (ulonglong)uVar24 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_1803267d0 << 0x20) +
           (ulonglong)_DAT_1803267c0 * (uVar4 & 0xffffffff) +
           ((ulonglong)uVar9 * (ulonglong)_DAT_1803267c0 +
            (ulonglong)_DAT_1803267b0 * (uVar4 & 0xffffffff) << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1803267c0 +
           ((ulonglong)uVar30 * (ulonglong)_DAT_1803267c0 +
            (uVar8 & 0xffffffff) * (ulonglong)_DAT_1803267b0 << 0x20)) -
          ((ulonglong)uVar25 * (_DAT_180326890 & 0xffffffff) +
           ((ulonglong)_DAT_180326900 * (ulonglong)uVar25 +
            (SUB168(auVar16 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_180326890 & 0xffffffff) << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_1803268e0 +
          ((ulonglong)_DAT_1803268f0 * (ulonglong)uVar10 +
           (uVar3 >> 0x20) * (ulonglong)_DAT_1803268e0 << 0x20) +
          (ulonglong)uVar22 * (ulonglong)_DAT_1803268c0 +
          ((ulonglong)_DAT_1803268d0 * (ulonglong)uVar22 +
           (uVar44 >> 0x20) * (ulonglong)_DAT_1803268c0 << 0x20) +
          (ulonglong)uVar24 * (ulonglong)_DAT_1803268a0 +
          ((ulonglong)_DAT_1803268b0 * (ulonglong)uVar24 +
           (uVar5 >> 0x20) * (ulonglong)_DAT_1803268a0 << 0x20) +
          (uVar4 & 0xffffffff) * (ulonglong)_DAT_180326870 +
          ((ulonglong)_DAT_180326880 * (uVar4 & 0xffffffff) +
           (ulonglong)uVar9 * (ulonglong)_DAT_180326870 << 0x20) +
          (uVar8 & 0xffffffff) * (ulonglong)_DAT_180326850 +
          ((ulonglong)_DAT_180326860 * (uVar8 & 0xffffffff) +
           (ulonglong)uVar30 * (ulonglong)_DAT_180326850 << 0x20))) - _DAT_180326890;
  auVar17._8_8_ = uVar2;
  auVar17._0_8_ = uVar5 ^ 0x84222325;
  auVar13 = pshufb(auVar17 ^ _DAT_180326910,_DAT_1800170c0);
  _DAT_183098e38 = _DAT_183098d00 ^ _DAT_183098be8 ^ uVar5;
  _DAT_183098ee8 = (_DAT_183098ee8 ^ _DAT_183098be8) + uVar5 ^ 0x7d9de74249103e6d;
  _DAT_183098bd8 = (_DAT_183098bd8 * -0x3b5787f579d75455 ^ _DAT_183098ee8) + _DAT_183098be8;
  _DAT_183098b88 = _DAT_183098bd8 ^ _DAT_183098ee8;
  _DAT_183098b58 = _DAT_183098ef0 ^ uVar5;
  uVar4 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar4 + _DAT_183099048;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_183098e40 ^ uVar4;
  }
  _DAT_183098ec0 = uVar5;
  _DAT_183099040 = func_0x000184c62f00(SUB161(auVar17 ^ _DAT_180326910,5) ^ uVar3);
  uVar25 = (uint)(uVar5 >> 0x20);
  auVar18._8_4_ = (int)uVar5;
  auVar18._0_8_ = uVar5;
  auVar18._12_4_ = uVar25;
  uVar30 = (uint)(uVar2 >> 0x20);
  auVar38._8_4_ = (int)uVar2;
  auVar38._0_8_ = uVar2;
  auVar38._12_4_ = uVar30;
  uVar22 = SUB164(auVar18 & auVar38,0);
  uVar8 = SUB168(auVar18 & auVar38,0);
  uVar10 = SUB164(auVar18 | auVar38,0);
  uVar44 = SUB168(auVar18 | auVar38,0);
  uVar9 = SUB164(auVar18 ^ auVar38,0);
  uVar4 = SUB168(auVar18 ^ auVar38,0);
  uVar24 = SUB164(auVar18 ^ _DAT_18001a710,0);
  uVar3 = _DAT_183099040 >> 1 | _DAT_183099040;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_183099040;
  uVar8 = (((_DAT_180326980 & 0xffffffff) * (ulonglong)uVar9 +
            ((_DAT_180326990 & 0xffffffff) * (ulonglong)uVar9 +
             (uVar4 >> 0x20) * (_DAT_180326980 & 0xffffffff) << 0x20) +
            (_DAT_180326960 & 0xffffffff) * (ulonglong)uVar10 +
            ((_DAT_180326970 & 0xffffffff) * (ulonglong)uVar10 +
             (uVar44 >> 0x20) * (_DAT_180326960 & 0xffffffff) << 0x20) +
           (_DAT_180326940 & 0xffffffff) * (ulonglong)uVar22 +
           ((_DAT_180326950 & 0xffffffff) * (ulonglong)uVar22 +
            (uVar8 >> 0x20) * (_DAT_180326940 & 0xffffffff) << 0x20) +
           (_DAT_180326930 & 0xffffffff) * (uVar2 & 0xffffffff) +
           ((ulonglong)uVar30 * (_DAT_180326930 & 0xffffffff) +
            (_DAT_180326920 & 0xffffffff) * (uVar2 & 0xffffffff) << 0x20) +
           (uVar5 & 0xffffffff) * (_DAT_180326930 & 0xffffffff) +
           ((ulonglong)uVar25 * (_DAT_180326930 & 0xffffffff) +
            (uVar5 & 0xffffffff) * (_DAT_180326920 & 0xffffffff) << 0x20)) -
          ((ulonglong)uVar24 * (_DAT_180326a00 & 0xffffffff) +
           ((_DAT_180326a70 & 0xffffffff) * (ulonglong)uVar24 +
            (SUB168(auVar18 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_180326a00 & 0xffffffff) << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_180326a50 +
          ((_DAT_180326a60 & 0xffffffff) * (ulonglong)uVar9 +
           (uVar4 >> 0x20) * (ulonglong)_DAT_180326a50 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_180326a30 +
          ((_DAT_180326a40 & 0xffffffff) * (ulonglong)uVar10 +
           (uVar44 >> 0x20) * (ulonglong)_DAT_180326a30 << 0x20) +
          (ulonglong)uVar22 * (ulonglong)_DAT_180326a10 +
          ((_DAT_180326a20 & 0xffffffff) * (ulonglong)uVar22 +
           (uVar8 >> 0x20) * (ulonglong)_DAT_180326a10 << 0x20) +
          (uVar2 & 0xffffffff) * (ulonglong)_DAT_1803269e0 +
          ((_DAT_1803269f0 & 0xffffffff) * (uVar2 & 0xffffffff) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1803269e0 << 0x20) +
          (uVar5 & 0xffffffff) * (ulonglong)_DAT_1803269c0 +
          ((_DAT_1803269d0 & 0xffffffff) * (uVar5 & 0xffffffff) +
           (ulonglong)uVar25 * (ulonglong)_DAT_1803269c0 << 0x20))) - _DAT_180326a00;
  _DAT_183098cd0 = _DAT_183099088 ^ uVar3 ^ uVar8;
  _DAT_183098f60 = (_DAT_183098f60 ^ uVar3) + uVar8 ^ 0x34694d7fb28843fc;
  _DAT_183098f48 = (_DAT_183098f48 * 0x18ef3620db916dbf ^ _DAT_183098f60) + uVar3;
  _DAT_183098e48 = _DAT_183098f48 ^ _DAT_183098f60;
  _DAT_183098d20 = _DAT_1830990e0 ^ uVar8;
  uVar4 = uVar11 ^ 0x84222325;
  uVar3 = (uVar4 ^ _DAT_183098ea0) + _DAT_1830990b0 + uVar4;
  uVar2 = (uVar23 ^ _DAT_1830990b0) + _DAT_183098ea0 + uVar23;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar4 ^ _DAT_183098ea0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar23 ^ _DAT_1830990b0;
  _DAT_183098d88 = uVar8;
  _DAT_183098b20 =
       func_0x000184c62f00((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183098ea0 + uVar23) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830990b0 + uVar4));
  uVar3 = _DAT_183098b20 & uVar11;
  uVar30 = (uint)(uVar11 >> 0x20);
  auVar33._8_4_ = (int)uVar11;
  auVar33._0_8_ = uVar11;
  auVar33._12_4_ = uVar30;
  uVar22 = (uint)(uVar23 >> 0x20);
  auVar42._8_4_ = (int)uVar23;
  auVar42._0_8_ = uVar23;
  auVar42._12_4_ = uVar22;
  uVar9 = SUB164(auVar33 & auVar42,0);
  uVar5 = SUB168(auVar33 & auVar42,0);
  uVar24 = SUB164(auVar33 | auVar42,0);
  uVar2 = SUB168(auVar33 | auVar42,0);
  uVar45 = SUB164(auVar33 ^ auVar42,0);
  uVar44 = SUB168(auVar33 ^ auVar42,0);
  auVar39._8_4_ = 0xffffffff;
  auVar39._0_8_ = 0xffffffffffffffff;
  auVar39._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar33 ^ auVar39,0);
  uVar25 = SUB164(auVar42 ^ auVar39,0);
  uVar44 = (((ulonglong)uVar25 * (ulonglong)_DAT_180326b10 +
             ((SUB168(auVar42 ^ auVar39,0) >> 0x20) * (ulonglong)_DAT_180326b10 +
              (ulonglong)_DAT_180326aa0 * (ulonglong)uVar25 << 0x20) +
             (ulonglong)uVar10 * (ulonglong)_DAT_180326b00 +
             ((SUB168(auVar33 ^ auVar39,0) >> 0x20) * (ulonglong)_DAT_180326b00 +
              (ulonglong)_DAT_180326a80 * (ulonglong)uVar10 << 0x20) +
             (_DAT_180326ad0 & 0xffffffff) * (ulonglong)uVar45 +
             ((uVar44 >> 0x20) * (_DAT_180326ad0 & 0xffffffff) +
              (_DAT_180326ac0 & 0xffffffff) * (ulonglong)uVar45 << 0x20) +
             (ulonglong)uVar9 * (_DAT_180326ad0 & 0xffffffff) +
             ((uVar5 >> 0x20) * (_DAT_180326ad0 & 0xffffffff) +
              (ulonglong)uVar9 * (_DAT_180326ac0 & 0xffffffff) << 0x20) +
             (_DAT_180326ab0 & 0xffffffff) * (uVar23 & 0xffffffff) +
             ((ulonglong)uVar22 * (_DAT_180326ab0 & 0xffffffff) +
              (uVar23 & 0xffffffff) * (ulonglong)_DAT_180326aa0 << 0x20) +
             (_DAT_180326a90 & 0xffffffff) * (uVar11 & 0xffffffff) +
             ((ulonglong)uVar30 * (_DAT_180326a90 & 0xffffffff) +
              (uVar11 & 0xffffffff) * (ulonglong)_DAT_180326a80 << 0x20) +
            (_DAT_180326ae0 & 0xffffffff) * (ulonglong)uVar24 +
            ((_DAT_180326af0 & 0xffffffff) * (ulonglong)uVar24 +
             (uVar2 >> 0x20) * (_DAT_180326ae0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar45 * (ulonglong)_DAT_180326ba0 +
            ((_DAT_180326bb0 & 0xffffffff) * (ulonglong)uVar45 +
             (uVar44 >> 0x20) * (ulonglong)_DAT_180326ba0 << 0x20) +
            (uVar2 & 0xffffffff) * (ulonglong)_DAT_180326b80 +
            ((_DAT_180326b90 & 0xffffffff) * (uVar2 & 0xffffffff) +
             (uVar2 >> 0x20) * (ulonglong)_DAT_180326b80 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_180326b60 +
           ((_DAT_180326b70 & 0xffffffff) * (ulonglong)uVar9 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_180326b60 << 0x20) +
           (uVar23 & 0xffffffff) * (ulonglong)_DAT_180326b50 +
           ((ulonglong)uVar22 * (ulonglong)_DAT_180326b50 +
            (_DAT_180326b40 & 0xffffffff) * (uVar23 & 0xffffffff) << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_180326b50 +
           ((ulonglong)uVar30 * (ulonglong)_DAT_180326b50 +
            (uVar11 & 0xffffffff) * (_DAT_180326b40 & 0xffffffff) << 0x20))) + _DAT_180326bc0;
  _DAT_183099068 = _DAT_1830990e0 ^ uVar3 ^ uVar44;
  _DAT_183098e28 = (_DAT_183098e28 ^ uVar3) + uVar44 ^ 0xbeffe92b4730e88c;
  _DAT_183098e10 = (_DAT_183098e10 * 0x1e2bf83634f54c13 ^ _DAT_183098e28) + uVar3;
  _DAT_183098ea8 = _DAT_183098e10 ^ _DAT_183098e28;
  uVar3 = (uVar4 ^ _DAT_183098fd8) + _DAT_183098fe8 + uVar4;
  uVar2 = (uVar23 ^ _DAT_183098fe8) + _DAT_183098fd8 + uVar23;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar4 ^ _DAT_183098fd8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar23 ^ _DAT_183098fe8;
  _DAT_183098d58 = uVar44;
  _DAT_183098e68 =
       func_0x000184c62f00((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183098fd8 + uVar23) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183098fe8 + uVar4));
  uVar3 = uVar11 & uVar23;
  uVar11 = uVar11 + uVar23 + uVar3 * -2;
  _DAT_183098d38 = (_DAT_183098d38 ^ _DAT_183098e68 ^ uVar23) + uVar11 ^ 0x8f960e6ad442925a;
  _DAT_183098ce8 =
       (_DAT_183098ce8 * 0x1c30a4f281f16f0b ^ _DAT_183098d38) + (_DAT_183098e68 ^ uVar23);
  _DAT_183098d88 = _DAT_183098ce8 ^ _DAT_183098d38;
  uVar2 = (uVar4 ^ _DAT_183098ce8) + uVar4 + _DAT_183099018;
  uVar5 = (uVar23 ^ _DAT_183099018) + uVar23 + _DAT_183098ce8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar4 ^ _DAT_183098ce8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar23 ^ _DAT_183099018;
  _DAT_183098b28 = uVar11;
  _DAT_183098bc8 =
       func_0x000184c62f00((uVar5 << 0x1d | uVar5 >> 0x23) - (uVar23 + _DAT_183098ce8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uVar4 + _DAT_183099018));
  _DAT_183098b80 = (_DAT_183098b80 ^ _DAT_183098bc8) + uVar3 ^ 0xace8a2dd22350ff6;
  _DAT_183098dd8 = (_DAT_183098dd8 * 0x1042394682277d3b ^ _DAT_183098b80) + _DAT_183098bc8;
  _DAT_183098b28 = _DAT_183098dd8 ^ _DAT_183098b80;
  uVar2 = uVar11 ^ 0x84222325;
  uVar4 = ((_DAT_183098c20 ^ uVar2) + (uVar2 & _DAT_183098c20) * 2) * (uVar3 * 2 - _DAT_183098bc0);
  uVar4 = (uVar4 | _DAT_183098c18) + (uVar4 & _DAT_183098c18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar2 = uVar2 ^ uVar3 * 2;
  _DAT_183098fb8 = uVar3;
  _DAT_183098ca8 = func_0x000184c62f00((uVar2 | uVar4) + (uVar4 & uVar2));
  uVar10 = (uint)(uVar11 >> 0x20);
  auVar48._8_4_ = (int)uVar11;
  auVar48._0_8_ = uVar11;
  auVar48._12_4_ = uVar10;
  auVar19._8_4_ = (int)uVar3;
  auVar19._0_8_ = uVar3;
  auVar19._12_4_ = (int)(uVar3 >> 0x20);
  uVar3 = uVar3 * 2;
  auVar20._8_8_ = auVar19._8_8_ * 2;
  auVar20._0_8_ = uVar3;
  auVar34._8_4_ = 0xffffffff;
  auVar34._0_8_ = 0xffffffffffffffff;
  auVar34._12_4_ = 0xffffffff;
  uVar22 = (uint)(uVar3 >> 0x20);
  uVar2 = (uVar11 & 0xffffffff) * (uVar3 & 0xffffffff) +
          ((uVar11 & 0xffffffff) * (ulonglong)uVar22 + (ulonglong)uVar10 * (uVar3 & 0xffffffff) <<
          0x20);
  uVar45 = SUB164(auVar48 ^ auVar34,0);
  uVar23 = SUB168(auVar48 ^ auVar34,0);
  uVar9 = SUB164(auVar20 ^ _DAT_18001a710,0);
  uVar4 = (_DAT_183098ca8 & 0xfffffffffff00000) << 5 | _DAT_183098ca8 >> 0x3b;
  lVar6 = (uVar2 & 0xffffffff) * (ulonglong)_DAT_180326c30 +
          ((ulonglong)_DAT_180326c40 * (uVar2 & 0xffffffff) +
           (uVar2 >> 0x20) * (ulonglong)_DAT_180326c30 << 0x20);
  uVar30 = SUB164(auVar48 & auVar20,0);
  uVar24 = SUB164(auVar48 | auVar20,0);
  uVar25 = SUB164(auVar20 ^ auVar48,0);
  uVar11 = (ulonglong)uVar9 * (ulonglong)_DAT_180326c20 +
           ((SUB168(auVar20 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_180326c20 +
            (ulonglong)_DAT_180326bf0 * (ulonglong)uVar9 << 0x20) +
           (ulonglong)_DAT_180326c10 * (ulonglong)uVar45 +
           ((uVar23 >> 0x20) * (ulonglong)_DAT_180326c10 +
            (ulonglong)_DAT_180326bd0 * (ulonglong)uVar45 << 0x20) +
           (ulonglong)_DAT_180326c00 * (uVar3 & 0xffffffff) +
           ((ulonglong)uVar22 * (ulonglong)_DAT_180326c00 +
            (uVar3 & 0xffffffff) * (ulonglong)_DAT_180326bf0 << 0x20) +
           (ulonglong)_DAT_180326be0 * (uVar11 & 0xffffffff) +
           ((ulonglong)uVar10 * (ulonglong)_DAT_180326be0 +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_180326bd0 << 0x20) + lVar6 +
           (-lVar6 - ((ulonglong)uVar45 * (ulonglong)_DAT_180326c60 +
                      ((uVar23 >> 0x20) * (ulonglong)_DAT_180326c60 +
                       (ulonglong)_DAT_180326c50 * (ulonglong)uVar45 << 0x20) +
                      (ulonglong)uVar25 * (ulonglong)_DAT_180326c80 +
                      ((SUB168(auVar20 ^ auVar48,0) >> 0x20) * (ulonglong)_DAT_180326c80 +
                       (ulonglong)_DAT_180326c70 * (ulonglong)uVar25 << 0x20) +
                      (ulonglong)uVar30 * (ulonglong)_DAT_180326c80 +
                      ((SUB168(auVar48 & auVar20,0) >> 0x20) * (ulonglong)_DAT_180326c80 +
                       (ulonglong)uVar30 * (ulonglong)_DAT_180326c70 << 0x20) +
                      (uVar11 & 0xffffffff) * (ulonglong)_DAT_180326c60 +
                      ((ulonglong)uVar10 * (ulonglong)_DAT_180326c60 +
                       (uVar11 & 0xffffffff) * (ulonglong)_DAT_180326c50 << 0x20) +
                     (ulonglong)uVar24 * (ulonglong)_DAT_180326c90 +
                     ((ulonglong)_DAT_180326ca0 * (ulonglong)uVar24 +
                      (SUB168(auVar48 | auVar20,0) >> 0x20) * (ulonglong)_DAT_180326c90 << 0x20))) +
           _DAT_180326cb0;
  _DAT_183098fd8 = _DAT_183098d00 ^ uVar4 ^ uVar11;
  _DAT_183098e80 = (_DAT_183098e80 ^ uVar4) + uVar11 ^ 0xb1b850d763ca119b;
  _DAT_183099030 = (_DAT_183099030 * 0x13ceaf0d24a74a67 ^ _DAT_183098e80) + uVar4;
  _DAT_183098bf8 = _DAT_183099030 ^ _DAT_183098e80;
  uVar3 = uVar44 ^ 0x84222325 ^ _DAT_183098fd0;
  lVar6 = (uVar44 ^ 0x84222325) + _DAT_183098cb0;
  uVar4 = uVar3 + lVar6;
  uVar2 = (uVar11 ^ _DAT_183098cb0) + uVar11 + _DAT_183098fd0;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar11 ^ _DAT_183098cb0;
  _DAT_183099010 = uVar11;
  _DAT_183098db8 =
       func_0x000184c62f00((uVar4 << 0x1d | uVar4 >> 0x23) - (uVar11 + _DAT_183098fd0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar6);
  uVar3 = _DAT_183098db8 & uVar44;
  uVar22 = (uint)(uVar44 >> 0x20);
  auVar41._8_4_ = (int)uVar44;
  auVar41._0_8_ = uVar44;
  auVar41._12_4_ = uVar22;
  uVar30 = (uint)(uVar11 >> 0x20);
  auVar21._8_4_ = (int)uVar11;
  auVar21._0_8_ = uVar11;
  auVar21._12_4_ = uVar30;
  uVar25 = SUB164(auVar41 & auVar21,0);
  uVar4 = SUB168(auVar41 & auVar21,0);
  uVar45 = SUB164(auVar41 | auVar21,0);
  uVar24 = SUB164(auVar41 ^ auVar21,0);
  uVar2 = SUB168(auVar41 ^ auVar21,0);
  auVar52._8_4_ = 0xffffffff;
  auVar52._0_8_ = 0xffffffffffffffff;
  auVar52._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar41 ^ auVar52,0);
  uVar23 = SUB168(auVar41 ^ auVar52,0);
  uVar9 = SUB164(auVar21 ^ auVar52,0);
  uVar11 = (((ulonglong)_DAT_180326d00 * (ulonglong)uVar10 +
             ((ulonglong)_DAT_180326d70 * (ulonglong)uVar10 +
              (uVar23 >> 0x20) * (ulonglong)_DAT_180326d00 << 0x20) +
            (ulonglong)_DAT_180326d50 * (ulonglong)uVar24 +
            ((ulonglong)_DAT_180326d60 * (ulonglong)uVar24 +
             (uVar2 >> 0x20) * (ulonglong)_DAT_180326d50 << 0x20) +
            (ulonglong)uVar45 * (ulonglong)_DAT_180326d30 +
            ((ulonglong)_DAT_180326d40 * (ulonglong)uVar45 +
             (SUB168(auVar41 | auVar21,0) >> 0x20) * (ulonglong)_DAT_180326d30 << 0x20) +
            (ulonglong)_DAT_180326d10 * (ulonglong)uVar25 +
            ((ulonglong)_DAT_180326d20 * (ulonglong)uVar25 +
             (uVar4 >> 0x20) * (ulonglong)_DAT_180326d10 << 0x20) +
            (ulonglong)_DAT_180326ce0 * (uVar11 & 0xffffffff) +
            ((ulonglong)_DAT_180326cf0 * (uVar11 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_180326ce0 << 0x20) +
            (ulonglong)_DAT_180326cc0 * (uVar44 & 0xffffffff) +
            ((ulonglong)_DAT_180326cd0 * (uVar44 & 0xffffffff) +
             (ulonglong)uVar22 * (ulonglong)_DAT_180326cc0 << 0x20)) -
           ((ulonglong)uVar9 * (ulonglong)_DAT_180326e40 +
            ((ulonglong)_DAT_180326e50 * (ulonglong)uVar9 +
             (SUB168(auVar21 ^ auVar52,0) >> 0x20) * (ulonglong)_DAT_180326e40 << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_180326e20 +
           ((ulonglong)_DAT_180326e30 * (ulonglong)uVar10 +
            (uVar23 >> 0x20) * (ulonglong)_DAT_180326e20 << 0x20) +
           (ulonglong)uVar24 * (ulonglong)_DAT_180326e00 +
           ((ulonglong)_DAT_180326e10 * (ulonglong)uVar24 +
            (uVar2 >> 0x20) * (ulonglong)_DAT_180326e00 << 0x20) +
           (ulonglong)uVar25 * (ulonglong)_DAT_180326de0 +
           ((ulonglong)_DAT_180326df0 * (ulonglong)uVar25 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_180326de0 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_180326dc0 +
           ((ulonglong)_DAT_180326dd0 * (uVar11 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_180326dc0 << 0x20) +
           (uVar44 & 0xffffffff) * (ulonglong)_DAT_180326da0 +
           ((ulonglong)_DAT_180326db0 * (uVar44 & 0xffffffff) +
            (ulonglong)uVar22 * (ulonglong)_DAT_180326da0 << 0x20))) + _DAT_180326e60;
  _DAT_183098f60 = uVar11 ^ uVar3;
  _DAT_183098e60 = (_DAT_183098e60 ^ uVar3) + uVar11 ^ 0x814b048693ffa34b;
  _DAT_183098f90 = (_DAT_183098f90 * 0x1ce1179be1961787 ^ _DAT_183098e60) + uVar3;
  _DAT_183098bb0 = _DAT_183098f90 ^ _DAT_183098e60;
  uVar3 = uVar8 ^ 0x84222325 ^ _DAT_183098f00;
  lVar6 = (uVar8 ^ 0x84222325) + _DAT_183098d00;
  uVar4 = uVar3 + lVar6;
  uVar2 = (uVar11 ^ _DAT_183098d00) + uVar11 + _DAT_183098f00;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar11 ^ _DAT_183098d00;
  _DAT_1830990d0 = uVar11;
  _DAT_183099040 =
       func_0x000184c62f00((uVar4 << 0x1d | uVar4 >> 0x23) - (uVar11 + _DAT_183098f00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar6);
  uStack00000000000000b0 = (uint)uVar8;
  uStack00000000000000b4 = (uint)(uVar8 >> 0x20);
  auVar35._8_4_ = uStack00000000000000b0;
  auVar35._0_8_ = uVar8;
  auVar35._12_4_ = uStack00000000000000b4;
  uVar9 = (uint)(uVar11 >> 0x20);
  auVar28._8_4_ = (int)uVar11;
  auVar28._0_8_ = uVar11;
  auVar28._12_4_ = uVar9;
  uVar3 = auVar35._8_8_;
  auVar13 = auVar35 & auVar28;
  auVar12 = auVar35 | auVar28;
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  auVar47 = auVar35 ^ auVar49;
  auVar49 = auVar28 ^ auVar49;
  uVar4 = auVar28._8_8_ >> 0x20;
  uVar5 = auVar13._8_8_;
  uVar44 = auVar13._0_8_;
  uVar2 = auVar12._0_8_;
  uVar23 = auVar12._8_8_;
  uStack0000000000000100 = SUB168(auVar35 ^ auVar28,0);
  uStack0000000000000108 = SUB168(auVar35 ^ auVar28,8);
  auVar43._0_8_ =
       (((ulonglong)auVar49._0_4_ * (ulonglong)_DAT_180326ef0 +
         ((_DAT_180326f00 & 0xffffffff) * (ulonglong)auVar49._0_4_ +
          (auVar49._0_8_ >> 0x20) * (ulonglong)_DAT_180326ef0 << 0x20) +
         (_DAT_180326ec0 & 0xffffffff) * (ulonglong)auVar12._0_4_ +
         ((uVar2 >> 0x20) * (_DAT_180326ec0 & 0xffffffff) +
          (_DAT_180326eb0 & 0xffffffff) * (ulonglong)auVar12._0_4_ << 0x20) +
         (ulonglong)auVar13._0_4_ * (_DAT_180326ec0 & 0xffffffff) +
         ((uVar44 >> 0x20) * (_DAT_180326ec0 & 0xffffffff) +
          (ulonglong)auVar13._0_4_ * (_DAT_180326eb0 & 0xffffffff) << 0x20) +
         (_DAT_180326e90 & 0xffffffff) * (uVar11 & 0xffffffff) +
         ((_DAT_180326ea0 & 0xffffffff) * (uVar11 & 0xffffffff) +
          (ulonglong)uVar9 * (_DAT_180326e90 & 0xffffffff) << 0x20) +
         (_DAT_180326e70 & 0xffffffff) * (uVar8 & 0xffffffff) +
         ((_DAT_180326e80 & 0xffffffff) * (uVar8 & 0xffffffff) +
          (ulonglong)uStack00000000000000b4 * (_DAT_180326e70 & 0xffffffff) << 0x20) +
        (ulonglong)auVar47._0_4_ * (ulonglong)_DAT_180326ed0 +
        ((_DAT_180326ee0 & 0xffffffff) * (ulonglong)auVar47._0_4_ +
         (auVar47._0_8_ >> 0x20) * (ulonglong)_DAT_180326ed0 << 0x20)) -
       ((uStack0000000000000100 & 0xffffffff) * (ulonglong)_DAT_180326f90 +
        ((_DAT_180326fa0 & 0xffffffff) * (uStack0000000000000100 & 0xffffffff) +
         (uStack0000000000000100 >> 0x20) * (ulonglong)_DAT_180326f90 << 0x20) +
        (uVar2 & 0xffffffff) * (ulonglong)_DAT_180326f70 +
        ((_DAT_180326f80 & 0xffffffff) * (uVar2 & 0xffffffff) +
         (uVar2 >> 0x20) * (ulonglong)_DAT_180326f70 << 0x20) +
       (uVar44 & 0xffffffff) * (ulonglong)_DAT_180326f50 +
       ((_DAT_180326f60 & 0xffffffff) * (uVar44 & 0xffffffff) +
        (uVar44 >> 0x20) * (ulonglong)_DAT_180326f50 << 0x20) +
       (uVar11 & 0xffffffff) * (ulonglong)_DAT_180326f40 +
       ((ulonglong)uVar9 * (ulonglong)_DAT_180326f40 +
        (_DAT_180326f30 & 0xffffffff) * (uVar11 & 0xffffffff) << 0x20) +
       (uVar8 & 0xffffffff) * (ulonglong)_DAT_180326f40 +
       ((ulonglong)uStack00000000000000b4 * (ulonglong)_DAT_180326f40 +
        (uVar8 & 0xffffffff) * (_DAT_180326f30 & 0xffffffff) << 0x20))) + _DAT_180326fb0;
  auVar43._8_8_ =
       (((auVar49._8_8_ & 0xffffffff) * (ulonglong)_UNK_180326ef8 +
         ((_UNK_180326f08 & 0xffffffff) * (ulonglong)auVar49._8_4_ +
          (auVar49._8_8_ >> 0x20) * (ulonglong)_UNK_180326ef8 << 0x20) +
         (_UNK_180326ec8 & 0xffffffff) * (ulonglong)auVar12._8_4_ +
         ((uVar23 >> 0x20) * (_UNK_180326ec8 & 0xffffffff) +
          (_UNK_180326eb8 & 0xffffffff) * (ulonglong)auVar12._8_4_ << 0x20) +
         (uVar5 & 0xffffffff) * (_UNK_180326ec8 & 0xffffffff) +
         ((uVar5 >> 0x20) * (_UNK_180326ec8 & 0xffffffff) +
          (uVar5 & 0xffffffff) * (_UNK_180326eb8 & 0xffffffff) << 0x20) +
         (_UNK_180326e98 & 0xffffffff) * (uVar11 & 0xffffffff) +
         ((_UNK_180326ea8 & 0xffffffff) * (uVar11 & 0xffffffff) +
          uVar4 * (_UNK_180326e98 & 0xffffffff) << 0x20) +
         (_UNK_180326e78 & 0xffffffff) * (uVar8 & 0xffffffff) +
         ((_UNK_180326e88 & 0xffffffff) * (uVar8 & 0xffffffff) +
          (uVar3 >> 0x20) * (_UNK_180326e78 & 0xffffffff) << 0x20) +
        (auVar47._8_8_ & 0xffffffff) * (ulonglong)_UNK_180326ed8 +
        ((_UNK_180326ee8 & 0xffffffff) * (ulonglong)auVar47._8_4_ +
         (auVar47._8_8_ >> 0x20) * (ulonglong)_UNK_180326ed8 << 0x20)) -
       ((uStack0000000000000108 & 0xffffffff) * (ulonglong)_UNK_180326f98 +
        ((_UNK_180326fa8 & 0xffffffff) * (uStack0000000000000108 & 0xffffffff) +
         (uStack0000000000000108 >> 0x20) * (ulonglong)_UNK_180326f98 << 0x20) +
        (uVar23 & 0xffffffff) * (ulonglong)_UNK_180326f78 +
        ((_UNK_180326f88 & 0xffffffff) * (uVar23 & 0xffffffff) +
         (uVar23 >> 0x20) * (ulonglong)_UNK_180326f78 << 0x20) +
       (uVar5 & 0xffffffff) * (ulonglong)_UNK_180326f58 +
       ((_UNK_180326f68 & 0xffffffff) * (uVar5 & 0xffffffff) +
        (uVar5 >> 0x20) * (ulonglong)_UNK_180326f58 << 0x20) +
       (auVar28._8_8_ & 0xffffffff) * (ulonglong)_UNK_180326f48 +
       (uVar4 * _UNK_180326f48 + (_UNK_180326f38 & 0xffffffff) * (uVar11 & 0xffffffff) << 0x20) +
       (uVar3 & 0xffffffff) * (ulonglong)_UNK_180326f48 +
       ((uVar3 >> 0x20) * (ulonglong)_UNK_180326f48 +
        (uVar3 & 0xffffffff) * (_UNK_180326f38 & 0xffffffff) << 0x20))) + _UNK_180326fb8;
  _DAT_183098b80 = _DAT_183098b60 ^ _DAT_183099040 ^ auVar43._0_8_;
  _DAT_1830990b0 = (_DAT_1830990b0 ^ _DAT_183099040) + auVar43._0_8_ ^ 0xd04d81d2c346bc02;
  _DAT_183098f20 = (_DAT_183098f20 * -0x63666d57ecfe660d ^ _DAT_1830990b0) + _DAT_183099040;
  _DAT_183098be8 = _DAT_183098f20 ^ _DAT_1830990b0;
  uVar3 = auVar43._0_8_ ^ 0x84222325;
  uVar4 = ((_DAT_183098b68 ^ uVar3) + (uVar3 & _DAT_183098b68) * 2) * -_DAT_183098c38;
  uVar4 = (uVar4 | _DAT_183098f08) + (uVar4 & _DAT_183098f08);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183098ee8 = auVar43._0_8_;
  _DAT_183098e48 = func_0x000184c62f00((uVar4 | uVar3) + (uVar4 & uVar3));
  uVar3 = _DAT_183098e48 & 0x7fffffffffffffff ^ auVar43._0_8_;
  auVar29._8_4_ = 0xffffffff;
  auVar29._0_8_ = 0xffffffffffffffff;
  auVar29._12_4_ = 0xffffffff;
  uVar9 = SUB164(auVar29 ^ auVar43,0);
  uVar4 = (((ulonglong)_DAT_180327000 * (auVar43._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_180327010 * (auVar43._0_8_ & 0xffffffff) +
             (auVar43._0_8_ >> 0x20) * (ulonglong)_DAT_180327000 << 0x20) +
           (ulonglong)_DAT_180326fe0 * (auVar43._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_180326ff0 * (auVar43._0_8_ & 0xffffffff) +
            (auVar43._0_8_ >> 0x20) * (ulonglong)_DAT_180326fe0 << 0x20) +
           (ulonglong)_DAT_180326fc0 * (auVar43._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_180326fd0 * (auVar43._0_8_ & 0xffffffff) +
            (auVar43._0_8_ >> 0x20) * (ulonglong)_DAT_180326fc0 << 0x20)) -
          ((ulonglong)uVar9 * (_DAT_180327040 & 0xffffffff) +
           ((ulonglong)_DAT_180327070 * (ulonglong)uVar9 +
            (SUB168(auVar29 ^ auVar43,0) >> 0x20) * (_DAT_180327040 & 0xffffffff) << 0x20) +
          (auVar43._0_8_ & 0xffffffff) * (ulonglong)_DAT_180327050 +
          ((ulonglong)_DAT_180327060 * (auVar43._0_8_ & 0xffffffff) +
           (auVar43._0_8_ >> 0x20) * (ulonglong)_DAT_180327050 << 0x20) +
          (ulonglong)_DAT_180327020 * (auVar43._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_180327030 * (auVar43._0_8_ & 0xffffffff) +
           (auVar43._0_8_ >> 0x20) * (ulonglong)_DAT_180327020 << 0x20))) + 0x31d7946819047829;
  _DAT_183098f00 = _DAT_183098d48 ^ uVar3 ^ uVar4;
  _DAT_183098fe0 = (_DAT_183098fe0 ^ uVar3) + uVar4 ^ 0xe2580086ebf275cc;
  _DAT_183098bb8 = (_DAT_183098bb8 * -0x47a0ec144745fb2b ^ _DAT_183098fe0) + uVar3;
  _DAT_183098ed0 = _DAT_183098bb8 ^ _DAT_183098fe0;
  uVar3 = ((_DAT_183098bc0 ^ in_stack_000000f8) + (in_stack_000000f8 & _DAT_183098bc0) * 2) *
          (uVar4 - _DAT_183098b88);
  uVar3 = (uVar3 | _DAT_183098f60) + (uVar3 & _DAT_183098f60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183098c80 = uVar4;
  _DAT_183098d18 =
       func_0x000184c62f00((in_stack_000000f8 ^ uVar4 | uVar3) +
                           (uVar3 & (in_stack_000000f8 ^ uVar4)));
  uVar3 = in_stack_00000118 ^ _DAT_183098d18 & 0x7fffffffffffffff;
  _DAT_1830990c0 = uVar4 ^ in_stack_00000118;
  _DAT_183098ec8 = (_DAT_183098ec8 ^ uVar3) + _DAT_1830990c0 ^ 0xc13859a74d1c2a82;
  _DAT_183098d88 = (_DAT_183098d88 * -0x43c21b9dffd8094b ^ _DAT_183098ec8) + uVar3;
  _DAT_183098fb0 = _DAT_183098d88 ^ _DAT_183098ec8;
  FUN_190dd72e0(_DAT_183098d18 & 0x7fffffffffffffff,*_DAT_18301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4c62054 (image 184c62054) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c62054(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x1869c,0x3e2);
  (*_DAT_180324998)();
  return;
}



// ===== continuation @ rva 4c5ad49 (image 184c5ad49) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c5ad49(void)

{
  undefined8 in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x4eb,0x18);
  (*_DAT_180323ef8)();
  return;
}



// ===== continuation @ rva 4c618f7 (image 184c618f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c618f7(void)

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



// ===== continuation @ rva 4c60a39 (image 184c60a39) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c60a39(void)

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



// ===== continuation @ rva 4c613cb (image 184c613cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c613cb(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  (*_DAT_180323838)();
  return;
}



// ===== continuation @ rva 4c5f01b (image 184c5f01b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c5f01b(void)

{
  longlong *in_stack_00000040;
  undefined8 in_stack_000000a8;
  
  (**(code **)(*in_stack_00000040 + 0x560))(in_stack_00000040,3,in_stack_000000a8,0);
  (*_DAT_180323dc8)();
  return;
}



// ===== continuation @ rva 4c6302b (image 184c6302b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c6302b(void)

{
  FUN_190dd72e0();
  (*_DAT_180327908)();
  return;
}



// ===== continuation @ rva 4c62fb8 (image 184c62fb8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c62fb8(void)

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



// ===== continuation @ rva 4c631c6 (image 184c631c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c631c6(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180327918)();
  return;
}



// ===== continuation @ rva 4c63053 (image 184c63053) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c63053(void)

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



// ===== continuation @ rva 4c631f0 (image 184c631f0) =====

void FUN_184c631f0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c631e6 (image 184c631e6) =====

void FUN_184c631e6(void)

{
  return;
}



// ===== continuation @ rva 4c63107 (image 184c63107) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c63107(void)

{
  FUN_190ddfc90();
  (*_DAT_180327948)();
  return;
}



// ===== continuation @ rva 4c6313a (image 184c6313a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c6313a(void)

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



// ===== continuation @ rva 4c63174 (image 184c63174) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c63174(void)

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



// ===== continuation @ rva 4c630cb (image 184c630cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c630cb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1803279b8)();
  return;
}



// ===== continuation @ rva 4b97f18 (image 184b97f18) =====

void FUN_184b97f18(void)

{
  return;
}



// ===== continuation @ rva 4b87244 (image 184b87244) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b87244(void)

{
  FUN_190ddce00();
  (*_DAT_1802fed68)();
  return;
}



// ===== continuation @ rva 4b97f84 (image 184b97f84) =====

void FUN_184b97f84(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4b92d56 (image 184b92d56) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b92d56(void)

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



// ===== continuation @ rva 4b95426 (image 184b95426) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b95426(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1802fdc38)();
  return;
}



// ===== continuation @ rva 4b8f260 (image 184b8f260) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b8f260(void)

{
  FUN_190de3220();
  (*_DAT_1802fe088)();
  return;
}



// ===== continuation @ rva 4b97819 (image 184b97819) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b97819(void)

{
  (*_DAT_1802ff758)();
  return;
}



// ===== continuation @ rva 4b9657c (image 184b9657c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b9657c(void)

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



// ===== continuation @ rva 4b9513a (image 184b9513a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b9513a(void)

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



// ===== continuation @ rva 4b95bab (image 184b95bab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b95bab(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1802ff828)();
  return;
}



// ===== continuation @ rva 4b8f5f6 (image 184b8f5f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b8f5f6(void)

{
  FUN_190de3220();
  (*_DAT_1802ff708)();
  return;
}



// ===== continuation @ rva 4b97f07 (image 184b97f07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b97f07(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1802ff6c8)();
  return;
}



// ===== continuation @ rva 4b972b2 (image 184b972b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b972b2(void)

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



// ===== continuation @ rva 4b8afc6 (image 184b8afc6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b8afc6(void)

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



// ===== continuation @ rva 4b9d01c (image 184b9d01c) =====

void FUN_184b9d01c(void)

{
  return;
}



// ===== continuation @ rva 4b98168 (image 184b98168) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b98168(void)

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



// ===== continuation @ rva 4b9aa1f (image 184b9aa1f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b9aa1f(void)

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



// ===== continuation @ rva 4b9940e (image 184b9940e) =====

void FUN_184b9940e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 4b993bb (image 184b993bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b993bb(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x18) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4b99368 (image 184b99368) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b99368(void)

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



// ===== continuation @ rva 4b99253 (image 184b99253) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b99253(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x68) = uVar2;
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4b9d067 (image 184b9d067) =====

void FUN_184b9d067(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 4b9b375 (image 184b9b375) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b9b375(void)

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



// ===== continuation @ rva 4bb88fb (image 184bb88fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb88fb(void)

{
  FUN_190dd72e0();
  (*_DAT_180308838)();
  return;
}



// ===== continuation @ rva 4bb8888 (image 184bb8888) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8888(void)

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



// ===== continuation @ rva 4bb89c2 (image 184bb89c2) =====

void FUN_184bb89c2(void)

{
  return;
}



// ===== continuation @ rva 4bb88c1 (image 184bb88c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb88c1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180308878)();
  return;
}



// ===== continuation @ rva 4bb89cc (image 184bb89cc) =====

void FUN_184bb89cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bb8977 (image 184bb8977) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8977(void)

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



// ===== continuation @ rva 4bb8923 (image 184bb8923) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8923(void)

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



// ===== continuation @ rva 4bb899b (image 184bb899b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb899b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180308868)();
  return;
}



// ===== continuation @ rva 4bb8944 (image 184bb8944) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8944(void)

{
  FUN_190dd9df0();
  (*_DAT_180308828)();
  return;
}



// ===== continuation @ rva 4bb8ae6 (image 184bb8ae6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8ae6(void)

{
  FUN_190dd72e0();
  (*_DAT_1803088f8)();
  return;
}



// ===== continuation @ rva 4bb8a73 (image 184bb8a73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8a73(void)

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



// ===== continuation @ rva 4bb8bbe (image 184bb8bbe) =====

void FUN_184bb8bbe(void)

{
  return;
}



// ===== continuation @ rva 4bb8b86 (image 184bb8b86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8b86(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1803088e8)();
  return;
}



// ===== continuation @ rva 4bb8bc6 (image 184bb8bc6) =====

void FUN_184bb8bc6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bb8bad (image 184bb8bad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8bad(void)

{
  (*_DAT_180308908)();
  return;
}



// ===== continuation @ rva 4bb8b0e (image 184bb8b0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8b0e(void)

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



// ===== continuation @ rva 4bb8b2f (image 184bb8b2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8b2f(void)

{
  FUN_190dd9df0();
  (*_DAT_180308938)();
  return;
}



// ===== continuation @ rva 4bb8ad1 (image 184bb8ad1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8ad1(void)

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



// ===== continuation @ rva 4bb8b62 (image 184bb8b62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8b62(void)

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



// ===== continuation @ rva 4bb8ce6 (image 184bb8ce6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8ce6(void)

{
  FUN_190dd72e0();
  (*_DAT_180308a38)();
  return;
}



// ===== continuation @ rva 4bb8c73 (image 184bb8c73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8c73(void)

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



// ===== continuation @ rva 4bb8dbe (image 184bb8dbe) =====

void FUN_184bb8dbe(void)

{
  return;
}



// ===== continuation @ rva 4bb8cac (image 184bb8cac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8cac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1803089c8)();
  return;
}



// ===== continuation @ rva 4bb8dc6 (image 184bb8dc6) =====

void FUN_184bb8dc6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bb8cd1 (image 184bb8cd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8cd1(void)

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



// ===== continuation @ rva 4bb8dad (image 184bb8dad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8dad(void)

{
  (*_DAT_1803089d8)();
  return;
}



// ===== continuation @ rva 4bb8d62 (image 184bb8d62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8d62(void)

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



// ===== continuation @ rva 4bb8d86 (image 184bb8d86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8d86(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1803089e8)();
  return;
}



// ===== continuation @ rva 4bb8ee6 (image 184bb8ee6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8ee6(void)

{
  FUN_190dd72e0();
  (*_DAT_180308ad8)();
  return;
}



// ===== continuation @ rva 4bb8e73 (image 184bb8e73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8e73(void)

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



// ===== continuation @ rva 4bb8fc4 (image 184bb8fc4) =====

void FUN_184bb8fc4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bb8ed1 (image 184bb8ed1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8ed1(void)

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



// ===== continuation @ rva 4bb8fbc (image 184bb8fbc) =====

void FUN_184bb8fbc(void)

{
  return;
}



// ===== continuation @ rva 4bb8f2f (image 184bb8f2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8f2f(void)

{
  FUN_190dd9df0();
  (*_DAT_180308ac8)();
  return;
}



// ===== continuation @ rva 4bb8f62 (image 184bb8f62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8f62(void)

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



// ===== continuation @ rva 4bb8f0e (image 184bb8f0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb8f0e(void)

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



// ===== continuation @ rva 4bb8eac (image 184bb8eac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb8eac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180308a98)();
  return;
}



// ===== continuation @ rva 4bb90e6 (image 184bb90e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb90e6(void)

{
  FUN_190dd72e0();
  (*_DAT_180308bf8)();
  return;
}



// ===== continuation @ rva 4bb9073 (image 184bb9073) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb9073(void)

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



// ===== continuation @ rva 4bb91bc (image 184bb91bc) =====

void FUN_184bb91bc(void)

{
  return;
}



// ===== continuation @ rva 4bb9186 (image 184bb9186) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb9186(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180308be8)();
  return;
}



// ===== continuation @ rva 4bb90ac (image 184bb90ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb90ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180308ba8)();
  return;
}



// ===== continuation @ rva 4bb91c4 (image 184bb91c4) =====

void FUN_184bb91c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bb9162 (image 184bb9162) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb9162(void)

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



// ===== continuation @ rva 4bb90d1 (image 184bb90d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bb90d1(void)

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



// ===== continuation @ rva 4bb912f (image 184bb912f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bb912f(void)

{
  FUN_190dd9df0();
  (*_DAT_180308b98)();
  return;
}



// ===== continuation @ rva 4bbe6c4 (image 184bbe6c4) =====

void FUN_184bbe6c4(void)

{
  return;
}



// ===== continuation @ rva 4bbe61d (image 184bbe61d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe61d(void)

{
  FUN_190ddce00();
  (*_DAT_18030a6e8)();
  return;
}



// ===== continuation @ rva 4bbe6cc (image 184bbe6cc) =====

void FUN_184bbe6cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bbe6b2 (image 184bbe6b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe6b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18030a708)();
  return;
}



// ===== continuation @ rva 4bbe650 (image 184bbe650) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbe650(void)

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



// ===== continuation @ rva 4bbe695 (image 184bbe695) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe695(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (*_DAT_18030a6d8)();
  return;
}



// ===== continuation @ rva 4bbe674 (image 184bbe674) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbe674(void)

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



// ===== continuation @ rva 4bbe6fa (image 184bbe6fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe6fa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18030a738)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 4bbe706 (image 184bbe706) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbe706(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 4bbe72d (image 184bbe72d) =====

undefined4 * FUN_184bbe72d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 4bbe84b (image 184bbe84b) =====

void FUN_184bbe84b(void)

{
  return;
}



// ===== continuation @ rva 4bbe799 (image 184bbe799) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe799(void)

{
  FUN_190ddce00();
  (*_DAT_18030a788)();
  return;
}



// ===== continuation @ rva 4bbe811 (image 184bbe811) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe811(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_18030a7a8)();
  return;
}



// ===== continuation @ rva 4bbe852 (image 184bbe852) =====

void FUN_184bbe852(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bbe7cc (image 184bbe7cc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbe7cc(void)

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



// ===== continuation @ rva 4bbe82b (image 184bbe82b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe82b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18030a798)();
  return;
}



// ===== continuation @ rva 4bbe7f0 (image 184bbe7f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbe7f0(void)

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



// ===== continuation @ rva 4bbe88a (image 184bbe88a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bbe88a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18030a7d8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 4bbe896 (image 184bbe896) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bbe896(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 4bbe8bd (image 184bbe8bd) =====

undefined4 * FUN_184bbe8bd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 4bbea66 (image 184bbea66) =====

void FUN_184bbea66(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000184bbea92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18030ae00 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 4bbea13 (image 184bbea13) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184bbea49 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184bbea13(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 4bd3ce2 (image 184bd3ce2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bd3ce2(longlong param_1)

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



// ===== continuation @ rva 4bcfc60 (image 184bcfc60) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bcfc60(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  longlong unaff_R15;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x30);
  *(undefined4 *)(unaff_RBP + 0x78) = *(undefined4 *)(unaff_RBP + 0x20);
  *(bool *)(unaff_RBP + 0x20) = *(longlong *)(unaff_RBP + 8) == 0;
  _DAT_183096150 = func_0x000184be83a0(_DAT_183095f88 + 0xb0007052ffffff ^ 0xeb);
  uVar1 = (_DAT_183096150 ^ 0xe982dca9) & 0x1ffffffff ^ 0xfda04fd1;
  _DAT_183095fe8 = (_DAT_183095fe8 ^ uVar1) + 0xfda2dff9 ^ 0xd002611abd569e24;
  _DAT_183095f98 = (_DAT_183095f98 * -0x6a98a818d734fe67 ^ _DAT_183095fe8) + uVar1;
  _DAT_183096238 = _DAT_183095f98 ^ _DAT_183095fe8;
  _DAT_183096008 = 0xfda2dff9;
  _DAT_183096140 = func_0x000184be83a0(_DAT_183096128 + 0x2200dcf6000bff ^ 0x71);
  uVar1 = (ulonglong)((uint)_DAT_183096140 ^ 0xce446128) & 0x8fe1ad37;
  _DAT_183096258 = (_DAT_183096258 ^ uVar1) + 0x6b16c12f ^ 0x72abcc341942ace0;
  _DAT_183096008 = (_DAT_183096008 * -0x139db91fd97e9c75 ^ _DAT_183096258) + uVar1;
  _DAT_1830960e0 = _DAT_183096008 ^ _DAT_183096258;
  _DAT_183096098 = 0x6b16c12f;
  uVar1 = (~_DAT_183095f08 + 0x6dddcea2) *
          ((_DAT_183095ff8 ^ 0x84222325) + (ulonglong)((uint)_DAT_183095ff8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1830962d8) + (uVar1 & _DAT_1830962d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183096138 = func_0x000184be83a0((uVar1 | 0xe9ffed84) + (ulonglong)((uint)uVar1 & 0xe9ffed84))
  ;
  uVar1 = ((ulonglong)((uint)_DAT_183096138 ^ 0x1dcea1) & 0x1fffff) << 0x1c | _DAT_183096138 >> 0x24
  ;
  _DAT_183095fe8 = (_DAT_183095fe8 ^ uVar1) - 0x6dddcea1 ^ 0x287ccd0061e54bd9;
  _DAT_183095f88 = (_DAT_183095f88 * 0x7380778d8fe60cab ^ _DAT_183095fe8) + uVar1;
  _DAT_183095fd0 = _DAT_183095f88 ^ _DAT_183095fe8;
  _DAT_183096280 = 0x9222315f;
  uVar1 = (_DAT_183095fc0 ^ _DAT_18030b1c0) + _DAT_1830961b0 + 0x84222325;
  uVar5 = (_DAT_1830961b0 ^ _UNK_18030b1c8) + _DAT_183095fc0 + 0x41118380;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183095fc0 ^ _DAT_18030b1c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830961b0 ^ _UNK_18030b1c8;
  _DAT_183096050 =
       func_0x000184be83a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183095fc0 + 0x41118380) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1830961b0 + 0x84222325));
  uVar1 = (_DAT_183096050 ^ 0x41110000) >> 0x10 & 0xfffffffffff;
  _DAT_183096288 = (_DAT_183096288 ^ uVar1) - 0x41118380 ^ 0xaa452f02c9817d1;
  _DAT_183096290 = (_DAT_183096290 * -0x300798eaa78ae53 ^ _DAT_183096288) + uVar1;
  _DAT_1830960c8 = _DAT_183096290 ^ _DAT_183096288;
  _DAT_183096008 = 0xbeee7c80;
  uVar1 = (_DAT_1830961f0 ^ _DAT_18030b1d0) + _DAT_1830961c0 + 0x8422dcda;
  uVar5 = (_DAT_1830961c0 ^ _UNK_18030b1d8) + _DAT_1830961f0 + 0x41118380;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1830961f0 ^ _DAT_18030b1d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830961c0 ^ _UNK_18030b1d8;
  _DAT_183095f28 =
       func_0x000184be83a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830961f0 + 0x41118380) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1830961c0 + 0x8422dcda));
  uVar1 = _DAT_1830961e0 - (_DAT_1830961e0 >> 1 & unaff_RBX);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & unaff_R12) * unaff_R15 >> 0x38) << 5 ^ _DAT_1830961e0;
  _DAT_183096100 = _DAT_183096178 ^ uVar1 ^ 0x4112837f;
  _DAT_183095fd8 = (_DAT_183095fd8 ^ uVar1) + 0x4112837f ^ 0x82ad28de7db1599a;
  _DAT_183096118 = (_DAT_183096118 * 0x69a1cf19f9f82141 ^ _DAT_183095fd8) + uVar1;
  _DAT_183096218 = _DAT_183096118 ^ _DAT_183095fd8;
  _DAT_183095fb8 = 0x4112837f;
  uVar1 = (~_DAT_183096128 + 0xbeee7c81) *
          ((_DAT_1830962a0 ^ 0xc530a05a) + (ulonglong)((uint)_DAT_1830962a0 & 0xc530a05a) * 2);
  uVar1 = (uVar1 | _DAT_183096190) + (uVar1 & _DAT_183096190);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183096278 = func_0x000184be83a0((uVar1 | 0x7bdedcda) + (ulonglong)((uint)uVar1 & 0x7bdedcda))
  ;
  uVar1 = _DAT_183096278 ^ 0x4110837f;
  _DAT_1830960d0 = _DAT_1830961e0 ^ uVar1 ^ 0x10000ffff;
  _DAT_183096140 = (_DAT_183096140 ^ uVar1) + 0x10000ffff ^ 0x3581fcf129b896d8;
  _DAT_183095f90 = (_DAT_183095f90 * 0x1ea51e5b62a3faa9 ^ _DAT_183096140) + uVar1;
  _DAT_183096030 = _DAT_183095f90 ^ _DAT_183096140;
  _DAT_183096088 = 0xffff;
  uVar1 = (~_DAT_183096270 + 0xb28756bf) *
          ((_DAT_1830962d8 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1830962d8 & 0x8422dcda) * 2);
  uVar1 = (uVar1 | _DAT_183095f88) + (uVar1 & _DAT_183095f88);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183095fe0 = func_0x000184be83a0((uVar1 | 0x36a58a64) + (ulonglong)((uint)uVar1 & 0x36a58a64))
  ;
  uVar1 = _DAT_183095fe0 * 0xeff1d775fff5ebd;
  _DAT_183096100 = _DAT_183096018 ^ uVar1 ^ 0xb28856bd;
  _DAT_183095fa8 = (_DAT_183095fa8 ^ uVar1) + 0xb28856bd ^ 0x85801965923f332a;
  _DAT_183096240 = (_DAT_183096240 * -0x4a31a1624b15e78f ^ _DAT_183095fa8) + uVar1;
  _DAT_1830962c8 = _DAT_183096240 ^ _DAT_183095fa8;
  _DAT_1830962e8 = 0xb28856bd;
  uVar1 = (~_DAT_1830960c8 + 0x6b16c130) *
          ((_DAT_183095ff8 ^ 0x7980fcdc) + (ulonglong)((uint)_DAT_183095ff8 & 0x7980fcdc) * 2);
  uVar1 = (uVar1 | _DAT_183096030) + (uVar1 & _DAT_183096030);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183095f98 = func_0x000184be83a0((uVar1 | 0x12963df3) + (ulonglong)((uint)uVar1 & 0x12963df3))
  ;
  _DAT_183096260 =
       (_DAT_183096260 ^ _DAT_183095f98 & 0x1fffffffffff) + 0x6902c129 ^ 0x1c3c4347116eed5a;
  _DAT_183095f00 =
       (_DAT_183095f00 * -0x1e9e2593c452f5e7 ^ _DAT_183096260) + (_DAT_183095f98 & 0x1fffffffffff);
  _DAT_1830960c8 = _DAT_183095f00 ^ _DAT_183096260;
  _DAT_183096158 = 0x6902c129;
  _DAT_183095f40 = func_0x000184be83a0(_DAT_183096180 ^ 0xff90ff3f60ff72da);
  uVar1 = _DAT_183095f40 >> 1 | _DAT_183095f40;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & unaff_RBX);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & unaff_R12) * unaff_R15 >> 0x38)) * 0x10 ^ _DAT_183095f40;
  _DAT_183095f58 = _DAT_1830960d0 ^ uVar1 ^ 0x168b9a128;
  _DAT_183096050 = (_DAT_183096050 ^ uVar1) + 0x168b9a128 ^ 0x8ab660c282c7392b;
  _DAT_1830961d8 = (_DAT_1830961d8 * 0x27d54eb0d1484e6b ^ _DAT_183096050) + uVar1;
  _DAT_183095f30 = _DAT_1830961d8 ^ _DAT_183096050;
  _DAT_183095f28 = 0x68b9a128;
  uVar1 = (~_DAT_1830962d8 + 0x68b9a129) *
          ((_DAT_183096250 ^ 0xec9b820d) + (ulonglong)((uint)_DAT_183096250 & 0xec9b820d) * 2);
  uVar1 = (uVar1 | _DAT_183096008) + (uVar1 & _DAT_183096008);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830962d8 = func_0x000184be83a0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = _DAT_1830962d8 ^ 0x68b9a128;
  uVar5 = uVar1 >> 1 | uVar1;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & unaff_RBX);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  _DAT_1830961f0 =
       (0x40 - (((uVar5 >> 4) + uVar5 & unaff_R12) * unaff_R15 >> 0x38)) * 8 ^ uVar1 ^ 0x68b9a128;
  _DAT_183096250 = _DAT_183096250 ^ _DAT_1830961f0 ^ 0xea08b0498bf01230;
  _DAT_183095f58 =
       (_DAT_183095f58 * 0x577137810a685283 ^ _DAT_183096250) + _DAT_1830961f0 ^ _DAT_183096250;
  _DAT_183096220 = 0;
  uVar1 = (_DAT_1830962a8 ^ _DAT_18030b1e0) + _DAT_1830962d8 + 0x7980fcdc;
  uVar5 = (_DAT_1830962d8 ^ _UNK_18030b1e8) + _DAT_1830962a8 + 0xffffffff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1830962a8 ^ _DAT_18030b1e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830962d8 ^ _UNK_18030b1e8;
  _DAT_183096030 =
       func_0x000184be83a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830962a8 + 0xffffffff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1830962d8 + 0x7980fcdc));
  _DAT_183096158 = (_DAT_183096158 ^ _DAT_183096030) + 0x25d2006 ^ 0xa66b4dbefc7c015f;
  _DAT_183096258 = (_DAT_183096258 * -0x592926e598284ff9 ^ _DAT_183096158) + _DAT_183096030;
  _DAT_183095f10 = _DAT_183096258 ^ _DAT_183096158;
  _DAT_183096040 = 0x25d2006;
  uVar1 = (_DAT_183095f38 ^ _DAT_18030b1f0) + _DAT_183096090 + 0x7980fcdc;
  uVar5 = (_DAT_183096090 ^ _UNK_18030b1f8) + _DAT_183095f38 + 0x25d2006;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183095f38 ^ _DAT_18030b1f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096090 ^ _UNK_18030b1f8;
  _DAT_183096288 =
       func_0x000184be83a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183095f38 + 0x25d2006) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183096090 + 0x7980fcdc));
  uVar1 = (_DAT_183096288 ^ 0x25789a59d455fd6) & 0x7fffffffe0000000;
  _DAT_183096070 = _DAT_183096070 ^ uVar1 ^ 0xfbeb64a19c528feb;
  _DAT_183096028 = (_DAT_183096028 * -0x4ba23c1e80113f3 ^ _DAT_183096070) + uVar1;
  _DAT_1830960c8 = _DAT_183096028 ^ _DAT_183096070;
  _DAT_183096240 = 0;
  _DAT_1830962e8 = func_0x000184be83a0(_DAT_183096248 + 0x1cff7be2ffddffU ^ 0xcb);
  _DAT_1830960b0 = _DAT_1830960b0 ^ _DAT_1830962e8 * 0x1b0bfce0d415775d ^ 0x81d30e3565b82e6;
  _DAT_183096240 =
       (_DAT_183096240 * -0x22b1d4d8de1d645f ^ _DAT_1830960b0) + _DAT_1830962e8 * 0x1b0bfce0d415775d
  ;
  _DAT_183095ff8 = _DAT_183096240 ^ _DAT_1830960b0;
  _DAT_1830960d8 = 0;
  uVar1 = ((_DAT_183096140 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183096140 & 0x8422dcda) * 2) *
          -_DAT_1830960b8;
  uVar1 = (uVar1 | _DAT_183096110) + (uVar1 & _DAT_183096110);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830961e8 = func_0x000184be83a0((uVar1 | 0x8422dcda) + (ulonglong)((uint)uVar1 & 0x8422dcda))
  ;
  uVar1 = _DAT_1830961e8 ^ 0xffff;
  uVar5 = uVar1 >> 1 | uVar1;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & unaff_RBX);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar5 >> 4) + uVar5 & unaff_R12) * unaff_R15 >> 0x38)) * 0x20 ^ uVar1;
  _DAT_183096158 = _DAT_183096178 ^ uVar1 ^ 0xffff;
  _DAT_183096280 = (_DAT_183096280 ^ uVar1) + 0xffff ^ 0x4c71f28f35c08850;
  _DAT_1830961e0 = (_DAT_1830960e0 * 0x347fe66d2372b9c7 ^ _DAT_183096280) + uVar1 ^ _DAT_183096280;
  _DAT_1830960e0 = 0xffff;
  uVar2 = (ulonglong)*(uint *)(unaff_RBP + 0x50);
  auVar3._8_8_ = _UNK_1801098d8;
  auVar3._0_8_ = uVar2 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_18030b200,_DAT_1800170c0);
  uVar5 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar5 + _DAT_1830961e0;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_183095f68 ^ uVar5;
  }
  _DAT_183096208 = func_0x000184be83a0(SUB161(auVar3 ^ _DAT_18030b200,5) ^ uVar1);
  uVar1 = uVar2 ^ (uVar2 * 0xffff ^ _DAT_183096208) & 0x7fffffffffffffff;
  _DAT_1830961c8 = uVar2 & 0xffff;
  _DAT_183096140 = (_DAT_183096140 ^ uVar1) + _DAT_1830961c8 ^ 0xf1c97aaf33bff596;
  _DAT_183096250 = (_DAT_183096250 * -0x72a50f3b79e1cfbb ^ _DAT_183096140) + uVar1;
  _DAT_1830962d8 = _DAT_183096250 ^ _DAT_183096140;
  *(int *)(unaff_RBP + 0x80) = (int)_DAT_1830961c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x20)) {
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
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4bca62a (image 184bca62a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bca62a(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R14;
  ulonglong uVar2;
  
  uVar1 = (~_DAT_183095fc8 + 0x9fbf5e45) *
          ((_DAT_183096090 ^ 0x33246987) + (ulonglong)((uint)_DAT_183096090 & 0x33246987) * 2);
  uVar1 = (uVar1 | _DAT_183096040) + (uVar1 & _DAT_183096040);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830961e8 = func_0x000184be83a0((uVar1 | 0xac9b37c3) + (ulonglong)((uint)uVar1 & 0xac9b37c3))
  ;
  _DAT_183096020 = (_DAT_183096020 ^ _DAT_1830961e8 ^ 0x28b914e6) + 0x28b914e6 ^ 0xa7c93725dda4c30;
  _DAT_183095f88 =
       (_DAT_183095f88 * 0x45dd71bcf8eb7423 ^ _DAT_183096020) + (_DAT_1830961e8 ^ 0x28b914e6);
  _DAT_183095ff8 = _DAT_183095f88 ^ _DAT_183096020;
  _DAT_183095f80 = 0x28b914e6;
  uVar1 = (_DAT_183096108 ^ _DAT_18030b210) + _DAT_1830961b0 + 0x84222325;
  uVar2 = (_DAT_1830961b0 ^ _UNK_18030b218) + _DAT_183096108 + 0x93aa9f60;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183096108 ^ _DAT_18030b210;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830961b0 ^ _UNK_18030b218;
  _DAT_183096140 =
       func_0x000184be83a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183096108 + 0x93aa9f60) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1830961b0 + 0x84222325));
  _DAT_183096248 = _DAT_183096248 - 0x93aa9f60 ^ 0xd032fbadefbe6137;
  _DAT_183095fe8 = _DAT_183095fb8 * 0x13aad90460f7907f;
  _DAT_183095fb8 = _DAT_183095fe8 ^ _DAT_183096248;
  _DAT_183096220 = 0x6c5560a0;
  uVar1 = (~_DAT_1830960e0 + 0x93aa9f61) *
          ((_DAT_183096240 ^ 0x842223fa) + (ulonglong)((uint)_DAT_183096240 & 0x842223fa) * 2);
  uVar1 = (uVar1 | _DAT_183095f98) + (uVar1 & _DAT_183095f98);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830962c8 = func_0x000184be83a0((uVar1 | 0x1788bc9a) + (ulonglong)((uint)uVar1 & 0x1788bc9a))
  ;
  uVar1 = (ulonglong)(~(uint)(_DAT_1830962c8 >> 0x2d) & 0xdf);
  _DAT_1830960a8 = _DAT_1830962e0 ^ uVar1 ^ 0x93aaa03f;
  _DAT_183095f60 = (_DAT_183095f60 ^ uVar1) + 0x93aaa03f ^ 0x56ffe1d1486a39a8;
  _DAT_183095ff8 = (_DAT_183095ff8 * -0x58f4aa5176a0e347 ^ _DAT_183095f60) + uVar1;
  _DAT_183095fb8 = _DAT_183095ff8 ^ _DAT_183095f60;
  _DAT_183096298 = 0x93aaa03f;
  _DAT_1830962b0 = func_0x000184be83a0(_DAT_183096010 + 0xdcffb7b6003aff ^ 0x1c);
  uVar1 = _DAT_1830962b0 ^ 0x3e7d3afe0fa6c760;
  uVar2 = uVar1 - (uVar1 >> 1 & unaff_RBX);
  uVar2 = (uVar2 & unaff_R14) + (uVar2 >> 2 & unaff_R14);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_1830962c8 = _DAT_183095fc8 ^ uVar1 ^ 0x1000000df;
  _DAT_183095f60 = (_DAT_183095f60 ^ uVar1) + 0x1000000df ^ 0x7b2c6647a59f01ab;
  _DAT_183096178 = (_DAT_183096178 * 0x5fbfb4f6ba1f54f3 ^ _DAT_183095f60) + uVar1;
  _DAT_183095ff8 = _DAT_183096178 ^ _DAT_183095f60;
  _DAT_183095f98 = 0xdf;
  uVar1 = (_DAT_183096258 ^ _DAT_18030b220) + _DAT_183096208 + 0x842223fa;
  uVar2 = (_DAT_183096208 ^ _UNK_18030b228) + _DAT_183096258 + 0x6a96d3fc;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183096258 ^ _DAT_18030b220;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183096208 ^ _UNK_18030b228;
  _DAT_1830960d0 =
       func_0x000184be83a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183096258 + 0x6a96d3fc) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183096208 + 0x842223fa));
  _DAT_183096298 = _DAT_183096118 ^ _DAT_1830960d0 ^ 0x6a96d4db;
  _DAT_183095f48 = (_DAT_183095f48 ^ _DAT_1830960d0) + 0x6a96d4db ^ 0xe0540669d53a4254;
  _DAT_183096020 = (_DAT_183096020 * 0x152dcd0f56c0356d ^ _DAT_183095f48) + _DAT_1830960d0;
  _DAT_183096160 = _DAT_183096020 ^ _DAT_183095f48;
  _DAT_183095f20 = 0x6a96d4db;
  uVar1 = (_DAT_183095f98 ^ _DAT_18030b230) + _DAT_183096180 + 0xeeb4f7fe;
  uVar2 = (_DAT_183096180 ^ _UNK_18030b238) + _DAT_183095f98 + 0x95692c04;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183095f98 ^ _DAT_18030b230;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183096180 ^ _UNK_18030b238;
  _DAT_183095f68 =
       func_0x000184be83a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183095f98 + 0x95692c04) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183096180 + 0xeeb4f7fe));
  uVar1 = _DAT_183095f68 & 0x3fffffffffffff;
  _DAT_1830962f0 = _DAT_183096260 ^ uVar1 ^ 0x1000000df;
  _DAT_183095fa0 = (_DAT_183095fa0 ^ uVar1) + 0x1000000df ^ 0x69a9d646d4cdc9f0;
  _DAT_183096070 = (_DAT_183096070 * 0x27384913dc0fb79d ^ _DAT_183095fa0) + uVar1;
  _DAT_183095fd0 = _DAT_183096070 ^ _DAT_183095fa0;
  _DAT_1830961e8 = 0xdf;
  uVar1 = (~_DAT_1830960b8 + 0xd35aa817) *
          ((_DAT_183096038 ^ 0x84222325) + (ulonglong)((uint)_DAT_183096038 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183096050) + (uVar1 & _DAT_183096050);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1830961d0 = func_0x000184be83a0((uVar1 | 0x57788b33) + (ulonglong)((uint)uVar1 & 0x57788b33))
  ;
  uVar1 = _DAT_1830961d0 << 0x2b | _DAT_1830961d0 >> 0x15;
  _DAT_1830960c8 = (_DAT_1830960c8 ^ uVar1) - 0xd35aa816 ^ 0xa3e7fef2b684bfb6;
  _DAT_183096020 = (_DAT_183096020 * 0x66ce23e4da1be389 ^ _DAT_1830960c8) + uVar1;
  _DAT_183096150 = _DAT_183096020 ^ _DAT_1830960c8;
  _DAT_183096108 = 0x2ca557ea;
  _DAT_183096250 = func_0x000184be83a0(_DAT_1830960a8 + 0xff790037ebfff7ff ^ 0x6c);
  uVar1 = _DAT_183096250 & 0xfffffffffc000000;
  _DAT_1830961b8 = _DAT_183096138 ^ uVar1 ^ 0xd35aa8f5;
  _DAT_183095f28 = (_DAT_183095f28 ^ uVar1) + 0xd35aa8f5 ^ 0x5f12c5b718a2efa5;
  _DAT_183095f00 = (_DAT_183095f00 * -0x6c0dd6493d854bbb ^ _DAT_183095f28) + uVar1;
  _DAT_1830960b0 = 0xd35aa8f5;
  uVar1 = (~_DAT_1830960e0 + 0x2ca557eb) *
          ((_DAT_183095f80 ^ 0x57788bd0) + (ulonglong)((uint)_DAT_183095f80 & 0x57788bd0) * 2);
  uVar1 = (uVar1 | _DAT_183095f88) + (uVar1 & _DAT_183095f88);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183096138 = func_0x000184be83a0((uVar1 | 0x7bdddc3a) + (ulonglong)((uint)uVar1 & 0x7bdddc3a))
  ;
  uVar1 = (_DAT_183096138 & 0x7fffffffffffffff) -
          ((_DAT_183096138 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar1 = (uVar1 & unaff_R14) + (uVar1 >> 2 & unaff_R14);
  uVar1 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          _DAT_183096138 & 0x7fffffffffffffff;
  _DAT_183096208 = _DAT_183095ff0 ^ uVar1 ^ 0x1000000df;
  _DAT_1830960a0 = (_DAT_1830960a0 ^ uVar1) + 0x1000000df ^ 0xfd938fdadba5140b;
  _DAT_1830961d0 = (_DAT_1830961d0 * 0x7382334c834c4b77 ^ _DAT_1830960a0) + uVar1;
  _DAT_183096018 = _DAT_1830961d0 ^ _DAT_1830960a0;
  _DAT_1830961b8 = 0xdf;
  uVar1 = (_DAT_183095f08 ^ _DAT_18030b240) + _DAT_183095f60 + 0xdbd9dcde;
  uVar2 = (_DAT_183095f60 ^ _UNK_18030b248) + _DAT_183095f08 + 0x28b914e6;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183095f08 ^ _DAT_18030b240;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183095f60 ^ _UNK_18030b248;
  _DAT_183096010 =
       func_0x000184be83a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183095f08 + 0x28b914e6) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183095f60 + 0xdbd9dcde));
  _DAT_183095f18 = (_DAT_183095f18 ^ _DAT_183096010) + 0x8b914e2 ^ 0x47f13164cda3bdc2;
  _DAT_183096010 = (_DAT_183096010 * 0x44811affe1008b11 ^ _DAT_183095f18) + _DAT_183096010;
  _DAT_183096258 = _DAT_183096010 ^ _DAT_183095f18;
  _DAT_1830961b8 = 0x8b914e2;
  _DAT_183096150 = func_0x000184be83a0(_DAT_183095f98 ^ 0xffdf005e1c001139);
  uVar1 = _DAT_183096150 ^ 0x7772ebdd;
  _DAT_1830960e0 = _DAT_1830961d8 ^ uVar1 ^ 0x88b514e1;
  _DAT_1830962b0 = (_DAT_1830962b0 ^ uVar1) + 0x88b514e1 ^ 0x33957675cf102c7b;
  _DAT_183096000 = (_DAT_183096000 * 0x36669a1411c6e185 ^ _DAT_1830962b0) + uVar1;
  _DAT_183096230 = _DAT_183096000 ^ _DAT_1830962b0;
  _DAT_183096140 = 0x88b514e1;
  _DAT_183095fc8 = func_0x000184be83a0(_DAT_183095fb8 + 0xffe30083dcffddff ^ 0xb6);
  _DAT_1830960c0 = _DAT_183095fc8 ^ 0x4900e6451f68f920;
  _DAT_1830961f0 = _DAT_1830961f0 ^ _DAT_1830960c0 ^ 0x38f06f3d3b28ca02;
  _DAT_183095f40 = (_DAT_183095f40 * -0x224cdb8ab86b8299 ^ _DAT_1830961f0) + _DAT_1830960c0;
  _DAT_183096210 = _DAT_183095f40 ^ _DAT_1830961f0;
  _DAT_183096070 = 0;
  uVar1 = (_DAT_183096218 ^ 0x842223fa) + _DAT_183096228 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183096218 ^ 0x842223fa;
  uVar2 = ((_DAT_183096228 + _DAT_183096218) * 0x2000 | _DAT_183096228 + _DAT_183096218 >> 0x33) ^
          _DAT_183096228;
  _DAT_183096130 =
       func_0x000184be83a0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183096218 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183096228 + 0x842223fa));
  uVar1 = (ulonglong)(~(uint)_DAT_183096130 & 0xdf);
  _DAT_183096090 = _DAT_183096270 ^ uVar1 ^ 0xdf;
  _DAT_183096010 = (_DAT_183096010 ^ uVar1) + 0xdf ^ 0x3324f1bebce9a3c9;
  _DAT_1830960f8 = (_DAT_1830960f8 * -0x588757c66662ef1d ^ _DAT_183096010) + uVar1;
  _DAT_183095fa0 = _DAT_1830960f8 ^ _DAT_183096010;
  _DAT_1830961f8 = 0xdf;
  uVar1 = (_DAT_183096020 ^ _DAT_18030b250) + _DAT_183095fa0 + 0xdbd9dcde;
  uVar2 = (_DAT_183095fa0 ^ _UNK_18030b258) + _DAT_183096020 + 0xa0040004;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183096020 ^ _DAT_18030b250;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183095fa0 ^ _UNK_18030b258;
  _DAT_183096238 =
       func_0x000184be83a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183096020 + 0xa0040004) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183095fa0 + 0xdbd9dcde));
  uVar1 = _DAT_183096238 >> 1 | _DAT_183096238;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_R14) + (uVar1 >> 2 & unaff_R14);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_183096238;
  _DAT_1830961a0 = _DAT_1830961a0 ^ uVar1 ^ 0x26be759ac414e340;
  _DAT_183096078 = (_DAT_183096078 * 0x38a294769fb2856b ^ _DAT_1830961a0) + uVar1;
  _DAT_183095fa0 = _DAT_183096078 ^ _DAT_1830961a0;
  _DAT_183096088 = 0;
  uVar1 = ((_DAT_1830961d8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1830961d8 & 0x842223fa) * 2) *
          -_DAT_183096038;
  uVar1 = (uVar1 | _DAT_183096288) + (uVar1 & _DAT_183096288);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x000184be83a0((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa));
  _DAT_1830962d0 = _DAT_1830962f8 ^ uVar1 ^ 0xdf;
  _DAT_183095f58 = (_DAT_183095f58 ^ uVar1) + 0xdf ^ 0xf5a6cd44c5ff73e1;
  _DAT_1830961e0 = (_DAT_1830961e0 * 0x26b1477014c90fe7 ^ _DAT_183095f58) + uVar1;
  _DAT_183096080 = _DAT_183095f68 ^ 0xdf;
  _DAT_1830962a8 = 0xdf;
  uVar1 = (_DAT_183095fe8 ^ 0x842223fa) + _DAT_183095f20 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183095fe8 ^ 0x842223fa;
  uVar2 = ((_DAT_183095f20 + _DAT_183095fe8) * 0x2000 | _DAT_183095f20 + _DAT_183095fe8 >> 0x33) ^
          _DAT_183095f20;
  _DAT_1830962d8 =
       func_0x000184be83a0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183095fe8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183095f20 + 0x842223fa));
  _DAT_1830961a0 = _DAT_1830962d8 & 0x7fffffffffffffff;
  _DAT_1830961f0 = (_DAT_1830961f0 ^ _DAT_1830961a0) + 0xdf ^ 0x25190004a8808d01;
  _DAT_1830961a0 =
       ((_DAT_183096010 ^ _DAT_1830961a0 ^ 0xdf) * -0x5ce41aceb812b4e7 ^ _DAT_1830961f0) +
       _DAT_1830961a0;
  _DAT_1830962c8 = _DAT_1830961a0 ^ _DAT_1830961f0;
  _DAT_1830961c0 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x50)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4bd3b91 (image 184bd3b91) =====

void FUN_184bd3b91(void)

{
  return;
}



// ===== continuation @ rva 4bd3995 (image 184bd3995) =====

undefined8 thunk_FUN_184bbea4c(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva 4bd38ec (image 184bd38ec) =====

undefined8 FUN_184bd38ec(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
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



// ===== continuation @ rva 4bcbe18 (image 184bcbe18) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bcbe18(ulonglong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  uint *unaff_RBP;
  uint unaff_ESI;
  longlong lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint unaff_XMM7_Da;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 unaff_XMM14_Qb;
  uint unaff_XMM15_Da;
  
  *(bool *)(unaff_RBP + 0x1a) = *(longlong *)(unaff_RBP + 2) == 0;
  uVar5 = (~in_RAX + 0xb89d6ffc) *
          ((param_1 ^ 0x3ad00ec7) + (ulonglong)((uint)param_1 & 0x3ad00ec7) * 2);
  uVar5 = (uVar5 | _DAT_183096218) + (uVar5 & _DAT_183096218);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183096130 = func_0x000184be83a0((uVar5 | 0x824d613c) + (ulonglong)((uint)uVar5 & 0x824d613c))
  ;
  uVar5 = _DAT_183096130 >> 1 | _DAT_183096130;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_183096130;
  _DAT_183096028 = (_DAT_183096028 ^ uVar5) + 0x66f4219 ^ 0x9c51ab7f249f53a;
  _DAT_183096128 = (_DAT_183096128 * -0x3e0b1678935dcdaf ^ _DAT_183096028) + uVar5;
  _DAT_183096098 = _DAT_183096128 ^ _DAT_183096028;
  _DAT_183096040 = 0x66f4219;
  uVar5 = (_DAT_183095ff0 ^ _DAT_18030b650) + _DAT_183095fd0 + 0x84222ce5;
  uVar12 = (_DAT_183095fd0 ^ _UNK_18030b658) + _DAT_183095ff0 + 0x51a4edc0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183095ff0 ^ _DAT_18030b650;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183095fd0 ^ _UNK_18030b658;
  _DAT_1830961f0 =
       func_0x000184be83a0((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183095ff0 + 0x51a4edc0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183095fd0 + 0x84222ce5));
  uVar5 = _DAT_1830961f0 & 0x7fffffffffffffff ^ 0xfc0;
  _DAT_1830961a8 = _DAT_183095f78 ^ uVar5 ^ 0x51a4fd80;
  _DAT_183096090 = (_DAT_183096090 ^ uVar5) + 0x51a4fd80 ^ 0x969d0f1ac00b1255;
  _DAT_183095fa8 = (_DAT_183095fa8 * 0x3e3f8f56301a2521 ^ _DAT_183096090) + uVar5;
  _DAT_183096168 = _DAT_183095fa8 ^ _DAT_183096090;
  _DAT_183095f10 = 0x51a4fd80;
  _DAT_1830962d8 = func_0x000184be83a0(_DAT_1830961e0 + 0xbffc6dcff9bffU ^ 0xb7);
  uVar5 = _DAT_1830962d8 ^ 0x4f463fc8;
  _DAT_183096018 = _DAT_1830960a8 ^ uVar5 ^ 0x4f464848;
  _DAT_183095f48 = (_DAT_183095f48 ^ uVar5) + 0x4f464848 ^ 0x49d0a24683932be8;
  _DAT_183095f18 = (_DAT_183095f18 * 0x61375506f727a265 ^ _DAT_183095f48) + uVar5;
  _DAT_183096008 = _DAT_183095f18 ^ _DAT_183095f48;
  _DAT_183096278 = 0x4f464848;
  _DAT_183095f18 = func_0x000184be83a0(_DAT_1830960d8 ^ 0x6c002af2ffa4a6);
  uVar5 = _DAT_183095f18 ^ 0xb0b98730;
  _DAT_1830961f0 = _DAT_183096258 ^ uVar5 ^ 0x100000fc0;
  _DAT_183095f50 = (_DAT_183095f50 ^ uVar5) + 0x100000fc0 ^ 0xb56ead60c9fc233a;
  _DAT_183096230 = (_DAT_183096230 * 0x168bf360c2bef67b ^ _DAT_183095f50) + uVar5;
  _DAT_183096068 = _DAT_183096230 ^ _DAT_183095f50;
  _DAT_183096278 = 0xfc0;
  uVar5 = (_DAT_183096018 ^ _DAT_18030b660) + _DAT_1830962b8 + 0x84222ce5;
  uVar12 = (_DAT_1830962b8 ^ _UNK_18030b668) + _DAT_183096018 + 0x609b09a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096018 ^ _DAT_18030b660;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1830962b8 ^ _UNK_18030b668;
  _DAT_183095f68 =
       func_0x000184be83a0((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183096018 + 0x609b09a0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830962b8 + 0x84222ce5));
  uVar5 = _DAT_183095f68 & 0x7fffffffffffffff;
  _DAT_183095fa0 = _DAT_183096060 ^ uVar5 ^ 0x609b1960;
  _DAT_183096138 = (_DAT_183096138 ^ uVar5) + 0x609b1960 ^ 0x36b8eb5bb8f07c94;
  _DAT_183096180 = (_DAT_183096180 * 0x1ace8cffee0b3137 ^ _DAT_183096138) + uVar5;
  _DAT_1830960e8 = _DAT_183096180 ^ _DAT_183096138;
  _DAT_183095fc8 = 0x609b1960;
  uVar5 = (~_DAT_183095f80 + 0x9f64f661) *
          ((_DAT_183096120 ^ 0xe4b93a45) + (ulonglong)((uint)_DAT_183096120 & 0xe4b93a45) * 2);
  uVar5 = (uVar5 | _DAT_183096038) + (uVar5 & _DAT_183096038);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183095f50 = func_0x000184be83a0((uVar5 | 0x7bddcc25) + (ulonglong)((uint)uVar5 & 0x7bddcc25))
  ;
  uVar5 = _DAT_183095f50 ^ 0xffffff60;
  _DAT_183096138 = _DAT_183096110 ^ uVar5 ^ 0x100000fc0;
  _DAT_183096148 = (_DAT_183096148 ^ uVar5) + 0x100000fc0 ^ 0x494e722b85bfbddf;
  _DAT_183095f68 = (_DAT_183095f68 * 0x3aa16dc809d6f80d ^ _DAT_183096148) + uVar5;
  _DAT_183096178 = _DAT_183095f68 ^ _DAT_183096148;
  _DAT_183096228 = 0xfc0;
  uVar5 = (_DAT_1830960b0 ^ _DAT_18030b670) + _DAT_183096050 + 0x1b89dccb;
  uVar12 = (_DAT_183096050 ^ _UNK_18030b678) + _DAT_1830960b0 + 0x66f4219;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830960b0 ^ _DAT_18030b670;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183096050 ^ _UNK_18030b678;
  _DAT_183096138 =
       func_0x000184be83a0((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1830960b0 + 0x66f4219) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096050 + 0x1b89dccb));
  uVar5 = _DAT_183096138 >> 1 | _DAT_183096138;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183096138;
  _DAT_183096190 = _DAT_183096148 ^ uVar5 ^ 0xa61b4207;
  _DAT_183096140 = (_DAT_183096140 ^ uVar5) + 0xa61b4207 ^ 0x7a8c75377b8b20e3;
  _DAT_183095fd8 = (_DAT_183095fd8 * 0x523056196c371eb7 ^ _DAT_183096140) + uVar5;
  _DAT_183095f10 = _DAT_183095fd8 ^ _DAT_183096140;
  _DAT_1830961f8 = 0xa61b4207;
  _DAT_183096010 = func_0x000184be83a0(_DAT_1830961a8 ^ 0x82001b51ff99ca);
  uVar5 = (_DAT_183096010 ^ 0x440011) * 0x66440f4f7f54b037;
  _DAT_183096128 = (_DAT_183096128 ^ uVar5) + 0x62b4208 ^ 0x5b6e061877e0fcc4;
  _DAT_1830960c0 = (_DAT_1830960c0 * 0x2526dba9edc8e233 ^ _DAT_183096128) + uVar5;
  _DAT_183096248 = _DAT_1830960c0 ^ _DAT_183096128;
  _DAT_183096058 = 0x62b4208;
  _DAT_1830960b8 = func_0x000184be83a0(_DAT_183095f00 ^ 0x1eff7be2ffdd43);
  _DAT_183096050 = _DAT_1830960b8 & 0xffffffffffffe000 ^ 0xa61b4207;
  _DAT_183095f60 = _DAT_183095f60 ^ _DAT_183096050 ^ 0x2102fcc6d06b571e;
  _DAT_183096248 = (_DAT_183096248 * 0x79f1179e30817f1d ^ _DAT_183095f60) + _DAT_183096050;
  _DAT_1830960c8 = _DAT_183096248 ^ _DAT_183095f60;
  _DAT_183096100 = 0;
  uVar5 = (~_DAT_183096120 + 0x100000000) *
          ((_DAT_183096170 ^ 0x1b89dccb) + (ulonglong)((uint)_DAT_183096170 & 0x1b89dccb) * 2);
  uVar5 = (uVar5 | _DAT_183095f48) + (uVar5 & _DAT_183095f48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183095fd8 = func_0x000184be83a0((uVar5 | 0xe4762334) + (ulonglong)((uint)uVar5 & 0xe4762334))
  ;
  uVar5 = _DAT_183095fd8 - (_DAT_183095fd8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183095fd8;
  _DAT_183096270 = (_DAT_183096270 ^ uVar5) + 0x60540011 ^ 0xf0c386573c536c42;
  _DAT_183096190 = (_DAT_183096190 * -0x5f684b1dff9d33cb ^ _DAT_183096270) + uVar5;
  _DAT_183096138 = _DAT_183096190 ^ _DAT_183096270;
  _DAT_183096150 = 0x60540011;
  uVar5 = (_DAT_1830960b8 ^ _DAT_18030b680) + _DAT_1830960e8 + 0x1b89dccb;
  uVar12 = (_DAT_1830960e8 ^ _UNK_18030b688) + _DAT_1830960b8 + 0x60540011;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830960b8 ^ _DAT_18030b680;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1830960e8 ^ _UNK_18030b688;
  _DAT_183096170 =
       func_0x000184be83a0((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1830960b8 + 0x60540011) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830960e8 + 0x1b89dccb));
  uVar5 = _DAT_183096170 ^ 0xffffffff;
  uVar12 = uVar5 >> 1 | uVar5;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uVar5;
  _DAT_183095f78 = _DAT_183095f78 ^ uVar5 ^ 0xaa4a351d337764eb;
  _DAT_1830960c8 = (_DAT_1830960c8 * -0x79ccf674490956e1 ^ _DAT_183095f78) + uVar5;
  _DAT_183096280 = _DAT_1830960c8 ^ _DAT_183095f78;
  _DAT_183096010 = 0;
  uVar5 = (_DAT_183096138 ^ _DAT_18030b690) + _DAT_183096220 + 0x1f839fc1;
  uVar12 = (_DAT_183096220 ^ _UNK_18030b698) + _DAT_183096138 + 0x9ba1bce4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096138 ^ _DAT_18030b690;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183096220 ^ _UNK_18030b698;
  _DAT_183095f58 =
       func_0x000184be83a0((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183096138 + 0x9ba1bce4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096220 + 0x1f839fc1));
  uVar5 = (_DAT_183095f58 ^ 0x9ba1bce4) & 0xfffffffffffffffc;
  _DAT_183096150 = _DAT_183096150 ^ uVar5 ^ 0x6869224e254dc230;
  _DAT_183096088 = (_DAT_183096088 * -0x784027584549cdbf ^ _DAT_183096150) + uVar5;
  _DAT_1830960b0 = _DAT_183096088 ^ _DAT_183096150;
  _DAT_183096218 = 0;
  uVar5 = (_DAT_183096020 ^ 0x84222ce5) + _DAT_1830962e8 + 0x84222ce5;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096020 ^ 0x84222ce5;
  uVar12 = ((_DAT_1830962e8 + _DAT_183096020) * 0x2000 | _DAT_1830962e8 + _DAT_183096020 >> 0x33) ^
           _DAT_1830962e8;
  _DAT_183096230 =
       func_0x000184be83a0((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_183096020 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830962e8 + 0x84222ce5));
  uVar5 = _DAT_183096230 >> 1 | _DAT_183096230;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           _DAT_183096230;
  _DAT_183095ff8 = _DAT_183096138 ^ uVar12 ^ 0xfc0;
  uVar5 = (_DAT_183095f00 ^ uVar12) + 0xfc0;
  _DAT_183095f00 = uVar5 ^ 0x7c0d7efaa10d9d47;
  _DAT_183096248 = (_DAT_183096248 * -0x26ea476a521ee3e7 ^ _DAT_183095f00) + uVar12;
  _DAT_183095fd0 = _DAT_183096248 ^ _DAT_183095f00;
  _DAT_1830960e0 = 0xfc0;
  uVar12 = (ulonglong)unaff_ESI ^ 0x84222325 ^ _DAT_183095f00;
  lVar6 = ((ulonglong)unaff_ESI ^ 0x84222325) + _DAT_183095f00;
  uVar5 = uVar5 ^ 0x7c0d7efaa10d9287;
  uVar11 = uVar12 + lVar6;
  uVar13 = uVar5 + _DAT_183095f00 + 0xfc0;
  uVar12 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar12;
  uVar5 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar5;
  _DAT_1830961d0 =
       func_0x000184be83a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183095f00 + 0xfc0) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - lVar6);
  uVar5 = _DAT_1830961d0 - (_DAT_1830961d0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar4 + (uint)bVar4 ^ _DAT_1830961d0;
  uVar12 = (ulonglong)(unaff_ESI & 0xfc0);
  _DAT_1830960d8 = (_DAT_1830960d8 ^ uVar5) + uVar12 ^ 0xebca260afe3888df;
  _DAT_183096180 = (_DAT_183096180 * -0x69be7a75ac2b906b ^ _DAT_1830960d8) + uVar5;
  _DAT_183096238 = _DAT_183096180 ^ _DAT_1830960d8;
  uVar5 = (~_DAT_183095ff8 + 0x3626214a) *
          ((_DAT_1830962a0 ^ 0xe7e682c3) + (ulonglong)((uint)_DAT_1830962a0 & 0xe7e682c3) * 2);
  uVar5 = (uVar5 | _DAT_183096128) + (uVar5 & _DAT_183096128);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183096170 = uVar12;
  *unaff_RBP = unaff_RBP[0x14] << 0xc;
  _DAT_183095f88 = func_0x000184be83a0((uVar5 | 0xd1c0a38a) + (ulonglong)((uint)uVar5 & 0xd1c0a38a))
  ;
  _DAT_1830960e8 = (_DAT_1830960e8 ^ _DAT_183095f88) + 0x77e6a1ef ^ 0xce699f528f172146;
  _DAT_183096168 = (_DAT_183096168 * -0x436b967d8be1c79b ^ _DAT_1830960e8) + _DAT_183095f88;
  _DAT_183096100 = _DAT_183096168 ^ _DAT_1830960e8;
  _DAT_183096268 = 0x77e6a1ef;
  uVar5 = (~_DAT_183096130 + 0xb7483ed6) *
          ((_DAT_183095f00 ^ 0x67f8ae0d) + (ulonglong)((uint)_DAT_183095f00 & 0x67f8ae0d) * 2);
  uVar5 = (uVar5 | _DAT_183096200) + (uVar5 & _DAT_183096200);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183095f38 = func_0x000184be83a0((uVar5 | 0xd0b090d8) + (ulonglong)((uint)uVar5 & 0xd0b090d8))
  ;
  _DAT_183096070 =
       (_DAT_183096070 ^ _DAT_183095f38 & 0xffffffffffc00000) + 0x5492b3fd ^ 0x4b0d24795e815a34;
  _DAT_183096150 =
       (_DAT_183096150 * 0x7d74beb663dc72dd ^ _DAT_183096070) +
       (_DAT_183095f38 & 0xffffffffffc00000);
  _DAT_183096118 = _DAT_183096150 ^ _DAT_183096070;
  _DAT_1830961c0 = 0x5492b3fd;
  uVar5 = (~_DAT_1830962e0 + 0xad4d9329) *
          ((_DAT_183096088 ^ 0x84222325) + (ulonglong)((uint)_DAT_183096088 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_183096260) + (uVar5 & _DAT_183096260);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183096220 = func_0x000184be83a0((uVar5 | 0x296fb00d) + (ulonglong)((uint)uVar5 & 0x296fb00d))
  ;
  uVar5 = _DAT_183096220 >> 1 | _DAT_183096220;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183096220;
  _DAT_183096268 = (_DAT_183096268 ^ uVar5) - 0xad4d9328 ^ 0x2e22d65402ae2eea;
  _DAT_183096230 = (_DAT_183096230 * 0x7a50597d5e5c0179 ^ _DAT_183096268) + uVar5;
  _DAT_183095fe0 = _DAT_183096230 ^ _DAT_183096268;
  _DAT_1830962e8 = 0x52b26cd8;
  uVar5 = (_DAT_183096090 ^ _DAT_18030b6a0) + _DAT_1830962a8 + 0x8422d325;
  uVar11 = (_DAT_1830962a8 ^ _UNK_18030b6a8) + _DAT_183096090 + 0xad4d9328;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096090 ^ _DAT_18030b6a0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830962a8 ^ _UNK_18030b6a8;
  _DAT_183096068 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183096090 + 0xad4d9328) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830962a8 + 0x8422d325));
  uVar5 = (ulonglong)(~(uint)_DAT_183096068 & 0xf000) ^ 0xf000;
  _DAT_183095fd0 = _DAT_1830961d8 ^ uVar5 ^ 0xad4e8328;
  _DAT_1830961a8 = (_DAT_1830961a8 ^ uVar5) + 0xad4e8328 ^ 0x6e9d0057ddda3947;
  _DAT_183095f58 = (_DAT_183095f58 * 0x610f204ef0d018c5 ^ _DAT_1830961a8) + uVar5;
  _DAT_183095f18 = _DAT_183095f58 ^ _DAT_1830961a8;
  _DAT_183096188 = 0xad4e8328;
  uVar5 = (_DAT_183096058 ^ _DAT_18030b6b0) + 0xd6bb2335;
  uVar11 = (_UNK_18030b6b8 ^ 0xad4e8328) + _DAT_183096058 + 0x52b26cd8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096058 ^ _DAT_18030b6b0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _UNK_18030b6b8 ^ 0xad4e8328;
  _DAT_1830961c8 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183096058 + 0x52b26cd8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - 0xd6bb2335);
  uVar5 = _DAT_1830961c8 & 0xfffffffffffffffc;
  _DAT_183096240 = _DAT_183096208 ^ uVar5 ^ 0x10000f000;
  _DAT_1830960b0 = (_DAT_1830960b0 ^ uVar5) + 0x10000f000 ^ 0xef898ea147edeba4;
  _DAT_1830961a8 = (_DAT_1830961a8 * -0x364682dbecdda5d5 ^ _DAT_1830960b0) + uVar5;
  _DAT_183095fb8 = _DAT_1830961a8 ^ _DAT_1830960b0;
  _DAT_183095f20 = 0xf000;
  _DAT_1830962a8 = func_0x000184be83a0(_DAT_183096270 ^ 0x4cff5ddaffcda5);
  _DAT_183095f18 =
       (_DAT_183095f18 ^ _DAT_1830962a8 & 0x7ffffffffffffff) - 0x26f49000 ^ 0x682441b7bcedddd2;
  _DAT_183095f90 =
       (_DAT_183095f90 * 0x51ffce07c65fa289 ^ _DAT_183095f18) + (_DAT_1830962a8 & 0x7ffffffffffffff)
  ;
  _DAT_183096190 = _DAT_183095f90 ^ _DAT_183095f18;
  _DAT_183096128 = 0xd90b7000;
  uVar5 = (_DAT_183096288 ^ _DAT_18030b6c0) + _DAT_183096060 + 0x8422d325;
  uVar11 = (_DAT_183096060 ^ _UNK_18030b6c8) + _DAT_183096288 + 0x26f49000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096288 ^ _DAT_18030b6c0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183096060 ^ _UNK_18030b6c8;
  _DAT_183096098 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183096288 + 0x26f49000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096060 + 0x8422d325));
  uVar5 = _DAT_183096098 & 0xffffffffffc00000;
  _DAT_183095fb0 = _DAT_183096268 ^ uVar5 ^ 0x26f58000;
  _DAT_183095f68 = (_DAT_183095f68 ^ uVar5) + 0x26f58000 ^ 0x94401193d5623735;
  _DAT_183095fd0 = (_DAT_183095fd0 * -0x7bec1361d8537965 ^ _DAT_183095f68) + uVar5;
  _DAT_1830960a8 = _DAT_183095fd0 ^ _DAT_183095f68;
  _DAT_1830962f0 = 0x26f58000;
  uVar5 = (_DAT_183095f48 ^ _DAT_18030b6d0) + _DAT_1830960b0 + 0x84222325;
  uVar11 = (_DAT_1830960b0 ^ _UNK_18030b6d8) + _DAT_183095f48 + 0x78a36700;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183095f48 ^ _DAT_18030b6d0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830960b0 ^ _UNK_18030b6d8;
  _DAT_183096208 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183095f48 + 0x78a36700) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830960b0 + 0x84222325));
  _DAT_1830961f8 =
       (_DAT_1830961f8 ^ _DAT_183096208 & 0x7fffffffffffffff) - 0x78a36700 ^ 0x10d9c35107f35ae5;
  _DAT_183095f80 =
       (_DAT_183095f80 * 0x6f573c542f446a9b ^ _DAT_1830961f8) +
       (_DAT_183096208 & 0x7fffffffffffffff);
  _DAT_183096260 = _DAT_183095f80 ^ _DAT_1830961f8;
  _DAT_183096178 = 0x875c9900;
  uVar5 = (~_DAT_183096268 + 0x78a36701) *
          ((_DAT_1830961e8 ^ 0x8422d325) + (ulonglong)((uint)_DAT_1830961e8 & 0x8422d325) * 2);
  uVar5 = (uVar5 | _DAT_1830961a8) + (uVar5 & _DAT_1830961a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1830962f8 = func_0x000184be83a0((uVar5 | 0xfc81b425) + (ulonglong)((uint)uVar5 & 0xfc81b425))
  ;
  uVar5 = _DAT_1830962f8 << 0x26 | _DAT_1830962f8 >> 0x1a;
  uVar11 = uVar5 >> 1 | uVar5;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  _DAT_183095f98 = _DAT_1830961a8 ^ uVar5 ^ 0x78a45700;
  _DAT_1830961f8 = (_DAT_1830961f8 ^ uVar5) + 0x78a45700 ^ 0xde5f140ae440903a;
  _DAT_183095fc8 = (_DAT_183095fc8 * -0x2d9d5c4c2cc3f469 ^ _DAT_1830961f8) + uVar5;
  _DAT_183096290 = _DAT_183095fc8 ^ _DAT_1830961f8;
  _DAT_183096058 = 0x78a45700;
  uVar5 = (~_DAT_183095fb0 + 0x5492b3fe) *
          ((_DAT_183096008 ^ 0xf3c482ca) + (ulonglong)((uint)_DAT_183096008 & 0xf3c482ca) * 2);
  uVar5 = (uVar5 | _DAT_1830960c8) + (uVar5 & _DAT_1830960c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183096268 = func_0x000184be83a0((uVar5 | 0xa7563137) + (ulonglong)((uint)uVar5 & 0xa7563137))
  ;
  uVar5 = _DAT_183096268 >> 1 | _DAT_183096268;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_183096268;
  _DAT_183096150 = _DAT_1830960c0 ^ uVar5 ^ 0xcc7955ec;
  _DAT_1830961a8 = (_DAT_1830961a8 ^ uVar5) + 0xcc7955ec ^ 0xb6c00309b4881361;
  _DAT_183096020 = (_DAT_183096020 * -0x3275ddcbde6b75ed ^ _DAT_1830961a8) + uVar5;
  _DAT_183095f28 = _DAT_183096020 ^ _DAT_1830961a8;
  _DAT_1830960e0 = 0xcc7955ec;
  uVar5 = (~_DAT_183096240 + 0x5492b3fe) *
          ((_DAT_183096208 ^ 0xf3c482ca) + (ulonglong)((uint)_DAT_183096208 & 0xf3c482ca) * 2);
  uVar5 = (uVar5 | _DAT_183095fc0) + (uVar5 & _DAT_183095fc0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183096098 = func_0x000184be83a0((uVar5 | 0xa7563137) + (ulonglong)((uint)uVar5 & 0xa7563137))
  ;
  uVar5 = (_DAT_183096098 ^ 0x77e6a000) & 0xffffffffffffe000 ^ 0x77e6a1ef;
  _DAT_183096108 = (_DAT_183096108 ^ uVar5) + 0x23741212 ^ 0x79e7d98132c60fdc;
  _DAT_1830961f8 = (_DAT_1830961f8 * -0x2119937bfdd556af ^ _DAT_183096108) + uVar5;
  _DAT_183096050 = _DAT_1830961f8 ^ _DAT_183096108;
  _DAT_183096138 = 0x23741212;
  uVar5 = (~_DAT_183096170 + 0x5492b3fe) *
          ((_DAT_183096088 ^ 0xf3c482ca) + (ulonglong)((uint)_DAT_183096088 & 0xf3c482ca) * 2);
  uVar5 = (uVar5 | _DAT_183096118) + (uVar5 & _DAT_183096118);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183095ff8 = func_0x000184be83a0((uVar5 | 0xa7563137) + (ulonglong)((uint)uVar5 & 0xa7563137))
  ;
  _DAT_1830960c8 = (_DAT_1830960c8 ^ _DAT_183096080) + 0x5482a1ed ^ 0xf585ea960e57e3ff;
  _DAT_183095f30 = (_DAT_183095f30 * 0x16df0285ab6639a1 ^ _DAT_1830960c8) + _DAT_183096080;
  _DAT_183096258 = _DAT_183095f30 ^ _DAT_1830960c8;
  _DAT_183095f18 = 0x5482a1ed;
  uVar5 = (_DAT_1830962f0 ^ _DAT_18030b6e0) + _DAT_183096150 + 0xa7563137;
  uVar11 = (_DAT_183096150 ^ _UNK_18030b6e8) + _DAT_1830962f0 + 0xa90543da;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830962f0 ^ _DAT_18030b6e0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183096150 ^ _UNK_18030b6e8;
  _DAT_183096280 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830962f0 + 0xa90543da) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096150 + 0xa7563137));
  _DAT_183095fe0 = _DAT_183095fc0 ^ _DAT_183096280 ^ 0xcc7955ec;
  _DAT_1830961c0 = (_DAT_1830961c0 ^ _DAT_183096280) + 0xcc7955ec ^ 0x8ab91cecca9ad70e;
  _DAT_183096188 = (_DAT_183096188 * -0x62430efade9a4bc3 ^ _DAT_1830961c0) + _DAT_183096280;
  _DAT_183095f88 = _DAT_183096188 ^ _DAT_1830961c0;
  _DAT_183096160 = 0xcc7955ec;
  uVar5 = (_DAT_183096200 ^ _DAT_18030b6f0) + _DAT_1830962e0 + 0x485b76c9;
  uVar11 = (_DAT_1830962e0 ^ _UNK_18030b6f8) + _DAT_183096200 + 0xcc7955ec;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096200 ^ _DAT_18030b6f0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830962e0 ^ _UNK_18030b6f8;
  _DAT_183095f90 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183096200 + 0xcc7955ec) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830962e0 + 0x485b76c9));
  _DAT_1830960b0 = _DAT_1830960b0 ^ _DAT_183095f90 ^ 0x2f999cf4cd48ae2d;
  _DAT_183096080 = (_DAT_183096080 * 0x5fc50b4bc382670f ^ _DAT_1830960b0) + _DAT_183095f90;
  _DAT_183096288 = _DAT_183096080 ^ _DAT_1830960b0;
  _DAT_183096280 = 0;
  uVar5 = (_DAT_183096100 ^ 0x8422d325) + _DAT_1830962f8 + 0x8422d325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096100 ^ 0x8422d325;
  uVar11 = ((_DAT_1830962f8 + _DAT_183096100) * 0x2000 | _DAT_1830962f8 + _DAT_183096100 >> 0x33) ^
           _DAT_1830962f8;
  _DAT_1830962b0 = _DAT_183095f90;
  _DAT_183095ff8 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183096100 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830962f8 + 0x8422d325));
  uVar5 = _DAT_183095ff8 >> 1 | _DAT_183095ff8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_183095ff8;
  _DAT_1830960c8 = _DAT_1830962d8 ^ uVar5 ^ 0xf000;
  _DAT_1830960b8 = (_DAT_1830960b8 ^ uVar5) + 0xf000 ^ 0x786bef9f52e4869d;
  _DAT_183096190 = (_DAT_183096190 * -0x4461cca8d988ec4b ^ _DAT_1830960b8) + uVar5;
  _DAT_183096258 = _DAT_183096190 ^ _DAT_1830960b8;
  _DAT_183095f48 = 0xf000;
  uVar5 = (~_DAT_1830962c8 + 0x100000000) *
          ((_DAT_183096158 ^ 0xf3c482ca) + (ulonglong)((uint)_DAT_183096158 & 0xf3c482ca) * 2);
  uVar5 = (uVar5 | _DAT_183096058) + (uVar5 & _DAT_183096058);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1830962b0 = func_0x000184be83a0((uVar5 | 0xc3b7d35) + (ulonglong)((uint)uVar5 & 0xc3b7d35));
  _DAT_183096120 =
       (_DAT_183096120 ^ _DAT_1830962b0 ^ 0x77e6a1eefffffffe) + 0x88195e10 ^ 0xb1d51572c84576b2;
  _DAT_183095f00 =
       (_DAT_183095f00 * 0x1a70e9e9f25f8d35 ^ _DAT_183096120) +
       (_DAT_1830962b0 ^ 0x77e6a1eefffffffe);
  _DAT_183096060 = _DAT_183095f00 ^ _DAT_183096120;
  _DAT_183095f10 = 0x88195e10;
  uVar5 = (_DAT_183096008 ^ _DAT_18030b700) + _DAT_1830961b8 + 0xf3c482ca;
  uVar11 = (_DAT_1830961b8 ^ _UNK_18030b708) + _DAT_183096008 + 0x88195e10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096008 ^ _DAT_18030b700;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830961b8 ^ _UNK_18030b708;
  _DAT_183096038 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183096008 + 0x88195e10) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830961b8 + 0xf3c482ca));
  _DAT_183096230 = _DAT_183096230 ^ _DAT_183096038 & 0x7fffffffffffffff ^ 0x3c1a401a5e6c9b07;
  _DAT_183096138 =
       (_DAT_183096138 * 0x6f82172d0ef94273 ^ _DAT_183096230) +
       (_DAT_183096038 & 0x7fffffffffffffff);
  _DAT_183096110 = _DAT_183096138 ^ _DAT_183096230;
  _DAT_183095fa0 = 0;
  uVar5 = (_DAT_1830960b0 ^ 0x8422d325) + _DAT_183096078 + 0x8422d325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830960b0 ^ 0x8422d325;
  uVar11 = ((_DAT_183096078 + _DAT_1830960b0) * 0x2000 | _DAT_183096078 + _DAT_1830960b0 >> 0x33) ^
           _DAT_183096078;
  _DAT_183095f80 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_1830960b0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096078 + 0x8422d325));
  _DAT_183096098 = _DAT_183096090 ^ _DAT_183095f80 ^ 0xf000;
  _DAT_183096078 = (_DAT_183096078 ^ _DAT_183095f80) + 0xf000 ^ 0x43f656449758ad76;
  _DAT_183096110 = (_DAT_183096110 * 0x7c07d33f95fe8b6f ^ _DAT_183096078) + _DAT_183095f80;
  _DAT_183096088 = _DAT_183096110 ^ _DAT_183096078;
  _DAT_183096148 = 0xf000;
  uVar11 = (ulonglong)*unaff_RBP;
  uVar5 = uVar11 ^ 0x84222325 ^ _DAT_1830962f8;
  lVar6 = (uVar11 ^ 0x84222325) + _DAT_1830960e8;
  uVar13 = uVar5 + lVar6;
  uVar14 = (_DAT_1830960e8 ^ 0xf000) + _DAT_1830962f8 + 0xf000;
  uVar5 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar5;
  uVar13 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1830960e8 ^ 0xf000;
  _DAT_1830961e8 =
       func_0x000184be83a0((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1830962f8 + 0xf000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  auVar10 = _DAT_1800170c0;
  uVar5 = ~(ulonglong)((uint)_DAT_1830961e8 ^ unaff_RBP[0x14] * 0xf000000) & uVar11;
  uVar11 = uVar11 & 0xffff;
  _DAT_183096130 = (_DAT_183096130 ^ uVar5) + uVar11 ^ 0x6ed990b4e7eafda3;
  _DAT_183096050 = (_DAT_183096050 * -0x5cf3830970a0b905 ^ _DAT_183096130) + uVar5;
  _DAT_183096108 = _DAT_183095f98 ^ uVar11;
  auVar8._4_4_ = 0;
  auVar8._0_4_ = unaff_ESI & 0xfc0 ^ 0x84222325;
  auVar8._8_8_ = uVar11;
  auVar9 = pshufb(auVar8 ^ _DAT_18030b710,_DAT_1800170c0);
  uVar13 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar13 + _DAT_183096120;
  if (auVar9._4_4_ < 0) {
    uVar5 = _DAT_1830961f8 ^ uVar13;
  }
  _DAT_183096208 = uVar11;
  _DAT_183096048 = func_0x000184be83a0(SUB161(auVar8 ^ _DAT_18030b710,5) ^ uVar5);
  uVar5 = uVar12 * uVar11 ^ _DAT_183096048;
  uVar12 = uVar12 | uVar11;
  _DAT_183096258 = (_DAT_183096258 ^ uVar5) + uVar12 ^ 0xb9f77a30f6e395bf;
  _DAT_183096290 = (_DAT_183096290 * 0x5673f1c8cc32a521 ^ _DAT_183096258) + uVar5;
  _DAT_183096298 = _DAT_183096290 ^ _DAT_183096258;
  plVar2 = *(longlong **)(unaff_RBP + 0x28);
  uVar3 = *(undefined8 *)(unaff_RBP + 0x12);
  _DAT_183096000 = uVar12;
  lVar6 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar3,0);
  unaff_RBP[0x1c] = (int)*(char *)(lVar6 + (int)unaff_RBP[0x1e]);
  (**(code **)(*plVar2 + 0x6f8))(plVar2,uVar3,lVar6,2);
  *(ulonglong *)(unaff_RBP + 0x14) = (ulonglong)unaff_RBP[0x1c];
  uVar5 = (~_DAT_183095f78 + 0xd41af8cf) *
          ((_DAT_183095ff8 ^ 0x7209ee2d) + (ulonglong)((uint)_DAT_183095ff8 & 0x7209ee2d) * 2);
  uVar5 = (uVar5 | _DAT_183096090) + (uVar5 & _DAT_183096090);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183096080 = func_0x000184be83a0((uVar5 | 0xa61316e3) + (ulonglong)((uint)uVar5 & 0xa61316e3))
  ;
  uVar5 = _DAT_183095f20 << 0x39 | _DAT_183095f20 >> 7;
  _DAT_183096148 = (_DAT_183096148 ^ uVar5) + 0xf63bfdce ^ 0xf809ad39d15c18a6;
  _DAT_183095f48 = (_DAT_183095f48 * 0x61bfd9a44e63b9a3 ^ _DAT_183096148) + uVar5;
  _DAT_183095fd8 = _DAT_183095f48 ^ _DAT_183096148;
  _DAT_1830960d8 = 0xf63bfdce;
  _DAT_1830962e0 = func_0x000184be83a0(_DAT_183096190 + 0x6b00035b0006ff ^ 0x67);
  uVar5 = _DAT_1830962e0 - (_DAT_1830962e0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1830962e0;
  _DAT_1830960b8 = (_DAT_1830960b8 ^ uVar5) - 0x80595c80 ^ 0x8c5f2d0bd8dc3516;
  _DAT_183095fd8 = (_DAT_183095fd8 * -0x1198cc120ebd1041 ^ _DAT_1830960b8) + uVar5;
  _DAT_183096068 = _DAT_183095fd8 ^ _DAT_1830960b8;
  _DAT_183096050 = 0x7fa6a380;
  _DAT_183095ff0 = func_0x000184be83a0(_DAT_183096158 ^ 0xffdc000715ffa2aa);
  uVar5 = (_DAT_183095ff0 ^ 0x60edf795fc80) << 0x24 |
          ((_DAT_183095ff0 ^ 0x60edf795fc80) & 0x7fffffffffff) >> 0x1c;
  _DAT_183096140 = _DAT_1830960e0 ^ uVar5 ^ 0x10000003f;
  _DAT_183096180 = (_DAT_183096180 ^ uVar5) + 0x10000003f ^ 0x4be6603b2c16f94f;
  _DAT_183096020 = (_DAT_183096020 * 0x5ef5e75167c82e33 ^ _DAT_183096180) + uVar5;
  _DAT_1830962a0 = _DAT_183096020 ^ _DAT_183096180;
  _DAT_183095f68 = 0x3f;
  _DAT_183095f48 = func_0x000184be83a0(_DAT_183096100 + 0xffdd004585002bff ^ 0x1e);
  _DAT_1830961a8 = _DAT_1830961a8 - 0xc91644a0 ^ 0x4201526470c60b1a;
  _DAT_1830961c0 = _DAT_1830962d0 * 0x6e4f94147d7c5015;
  _DAT_1830962d0 = _DAT_1830961c0 ^ _DAT_1830961a8;
  _DAT_183095f30 = 0x36e9bb60;
  uVar5 = (_DAT_183095f08 ^ _DAT_18030b720) + _DAT_183096150 + 0x8422231a;
  uVar11 = (_DAT_183096150 ^ _UNK_18030b728) + _DAT_183095f08 + 0xc91644a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183095f08 ^ _DAT_18030b720;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183096150 ^ _UNK_18030b728;
  _DAT_183096140 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183095f08 + 0xc91644a0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096150 + 0x8422231a));
  uVar5 = _DAT_183096140 ^ 0x317c7ae360;
  uVar11 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar5 ^
          0x3f;
  _DAT_183095f80 = _DAT_183096150 ^ uVar5 ^ 0xc91644df;
  _DAT_183095fe8 = (_DAT_183095fe8 ^ uVar5) + 0xc91644df ^ 0xd66371b96893165f;
  _DAT_1830962e0 = (_DAT_1830962e0 * 0x426fce41b697b15d ^ _DAT_183095fe8) + uVar5;
  _DAT_183095fe0 = _DAT_1830962e0 ^ _DAT_183095fe8;
  _DAT_183095f08 = 0xc91644df;
  uVar5 = (_DAT_183096038 ^ _DAT_18030b730) + _DAT_183096250 + 0x84222325;
  uVar11 = (_DAT_183096250 ^ _UNK_18030b738) + _DAT_183096038 + 0xa1df5c90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096038 ^ _DAT_18030b730;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183096250 ^ _UNK_18030b738;
  _DAT_183096200 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183096038 + 0xa1df5c90) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096250 + 0x84222325));
  _DAT_183096288 =
       (_DAT_183096288 ^ _DAT_183096200 & 0x7fffffffffff) - 0xa1df5c90 ^ 0x23df735b07f69f0a;
  _DAT_183096238 =
       (_DAT_183096238 * 0x563e340a78826239 ^ _DAT_183096288) + (_DAT_183096200 & 0x7fffffffffff);
  _DAT_183096120 = _DAT_183096238 ^ _DAT_183096288;
  _DAT_1830961a8 = 0x5e20a370;
  uVar5 = (_DAT_1830960e8 ^ _DAT_18030b740) + _DAT_183096280 + 0x8422231a;
  uVar11 = (_DAT_183096280 ^ _UNK_18030b748) + _DAT_1830960e8 + 0xa1df5c90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830960e8 ^ _DAT_18030b740;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183096280 ^ _UNK_18030b748;
  _DAT_1830962f0 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830960e8 + 0xa1df5c90) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096280 + 0x8422231a));
  uVar5 = (ulonglong)(((uint)_DAT_1830962f0 ^ 0xf) & 0x3f) ^ 0x3f;
  _DAT_1830960c8 = _DAT_183095fe0 ^ uVar5 ^ 0xa1df5ccf;
  _DAT_183095f30 = (_DAT_183095f30 ^ uVar5) + 0xa1df5ccf ^ 0x2f76a90974151a1b;
  _DAT_1830962c8 = (_DAT_1830962c8 * 0x62670a5110c5cffd ^ _DAT_183095f30) + uVar5;
  _DAT_1830962d0 = _DAT_1830962c8 ^ _DAT_183095f30;
  _DAT_183095f20 = 0xa1df5ccf;
  _DAT_183096168 = func_0x000184be83a0(_DAT_183096050 ^ 0x900092ac005a18);
  uVar5 = _DAT_183096168 ^ 0xd8299d65836039b2;
  _DAT_1830961a8 = _DAT_183095f18 ^ uVar5 ^ 0x1d6f84c0d;
  _DAT_183095fd8 = (_DAT_183095fd8 ^ uVar5) + 0x1d6f84c0d ^ 0xe024d8eb3157a295;
  _DAT_183096180 = (_DAT_183096180 * -0x30136357c5abfbe7 ^ _DAT_183095fd8) + uVar5;
  _DAT_183095fd0 = _DAT_183096180 ^ _DAT_183095fd8;
  _DAT_183096080 = 0xd6f84c0d;
  uVar5 = (_DAT_183096000 ^ _DAT_18030b750) + _DAT_183095fa0 + 0x7219deeb;
  uVar11 = (_DAT_183095fa0 ^ _UNK_18030b758) + _DAT_183096000 + 0xe0bc4e3f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183096000 ^ _DAT_18030b750;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183095fa0 ^ _UNK_18030b758;
  _DAT_183096270 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183096000 + 0xe0bc4e3f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183095fa0 + 0x7219deeb));
  _DAT_1830961f8 =
       (_DAT_1830961f8 ^ _DAT_183096270 & 0x3ffffffffffffff) + 0x1687b3f1 ^ 0xfb0ba5080d48eb48;
  _DAT_183096238 =
       (_DAT_183096238 * 0x5147a966f5930c33 ^ _DAT_1830961f8) + (_DAT_183096270 & 0x3ffffffffffffff)
  ;
  _DAT_1830962c0 = _DAT_183096238 ^ _DAT_1830961f8;
  _DAT_183096090 = 0x1687b3f1;
  uVar5 = (_DAT_183095f78 ^ _DAT_18030b760) + _DAT_1830960e8 + 0x92a590d4;
  uVar11 = (_DAT_1830960e8 ^ _UNK_18030b768) + _DAT_183095f78 + 0xc070981c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183095f78 ^ _DAT_18030b760;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830960e8 ^ _UNK_18030b768;
  _DAT_183096130 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183095f78 + 0xc070981c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830960e8 + 0x92a590d4));
  uVar5 = _DAT_183096130 >> 1 | _DAT_183096130;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183096130;
  _DAT_183095fc0 = _DAT_183096000 ^ uVar5 ^ 0xd6f84c0d;
  _DAT_183095fe0 = (_DAT_183095fe0 ^ uVar5) + 0xd6f84c0d ^ 0xde5b45d58aa29e09;
  _DAT_183095f78 = (_DAT_183095f78 * -0x797291e6c8092b7 ^ _DAT_183095fe0) + uVar5;
  _DAT_1830961c0 = _DAT_183095f78 ^ _DAT_183095fe0;
  _DAT_1830962b8 = 0xd6f84c0d;
  uVar5 = (_DAT_183095f18 ^ _DAT_18030b770) + _DAT_183096260 + 0x52da6f28;
  uVar11 = (_DAT_183096260 ^ _UNK_18030b778) + _DAT_183095f18 + 0xd6f84c0d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183095f18 ^ _DAT_18030b770;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183096260 ^ _UNK_18030b778;
  _DAT_183095ff8 =
       func_0x000184be83a0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183095f18 + 0xd6f84c0d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183096260 + 0x52da6f28));
  _DAT_183095f88 = _DAT_183095ff8 ^ 0xd6f84c0d;
  uVar5 = _DAT_183095f88 - (_DAT_183095f88 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  _DAT_183095f88 =
       (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
       _DAT_183095f88;
  _DAT_183096138 = _DAT_183096138 ^ _DAT_183095f88 ^ 0x568e6c066e4be6da;
  _DAT_183096110 = (_DAT_183096110 * -0x1f80f65acdbf39ed ^ _DAT_183096138) + _DAT_183095f88;
  _DAT_1830960a8 = _DAT_183096110 ^ _DAT_183096138;
  _DAT_183096130 = 0;
  uVar5 = ((_DAT_1830961f0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1830961f0 & 0x8422231a) * 2) *
          -_DAT_1830961c0;
  uVar5 = (uVar5 | _DAT_183096060) + (uVar5 & _DAT_183096060);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183096168 = func_0x000184be83a0((uVar5 | 0x8422231a) + (ulonglong)((uint)uVar5 & 0x8422231a))
  ;
  uVar5 = _DAT_183096168 & 0xffffffffffff0000;
  _DAT_1830962a8 = _DAT_183095f30 ^ uVar5 ^ 0x3f;
  _DAT_183095fc8 = (_DAT_183095fc8 ^ uVar5) + 0x3f ^ 0xa26c5420c7d8be70;
  _DAT_1830960b8 = (_DAT_1830960b8 * 0x68a8f130b021a297 ^ _DAT_183095fc8) + uVar5;
  _DAT_183096108 = _DAT_1830960b8 ^ _DAT_183095fc8;
  _DAT_183095f90 = 0x3f;
  uVar5 = (~_DAT_183096218 + 0x100000000) *
          ((_DAT_1830962b0 ^ 0x7219deeb) + (ulonglong)((uint)_DAT_1830962b0 & 0x7219deeb) * 2);
  uVar5 = (uVar5 | _DAT_1830961b0) + (uVar5 & _DAT_1830961b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183095f18 = func_0x000184be83a0((uVar5 | 0x8de62114) + (ulonglong)((uint)uVar5 & 0x8de62114))
  ;
  uVar5 = (_DAT_183095f18 ^ 0xffffffff) & 0x7fffffffffffffff;
  _DAT_1830962e8 = (_DAT_1830962e8 ^ uVar5) + 0x9c40231 ^ 0xe189b6def979424c;
  _DAT_1830960b0 = (_DAT_1830960b0 * -0x6681e59d7867aa2b ^ _DAT_1830962e8) + uVar5;
  _DAT_183095f68 = _DAT_1830960b0 ^ _DAT_1830962e8;
  _DAT_183096298 = 0x9c40231;
  _DAT_1830962f0 = func_0x000184be83a0(_DAT_183096030 ^ 0x1cff8409ffe168);
  uVar5 = (ulonglong)(~(uint)_DAT_1830962f0 & 0x3f);
  _DAT_183096060 = _DAT_1830961b8 ^ uVar5 ^ 0x3f;
  _DAT_183096028 = (_DAT_183096028 ^ uVar5) + 0x3f ^ 0xbe8341cff72a79ae;
  _DAT_183096098 = (_DAT_183096098 * 0x4977d3f9e9427c0f ^ _DAT_183096028) + uVar5;
  _DAT_1830961d0 = _DAT_183096098 ^ _DAT_183096028;
  _DAT_183095ff8 = 0x3f;
  uVar5 = (~_DAT_183095fb8 + 0xf62bcd09) *
          ((_DAT_183096128 ^ 0x7209ee2d) + (ulonglong)((uint)_DAT_183096128 & 0x7209ee2d) * 2);
  uVar5 = (uVar5 | _DAT_183096228) + (uVar5 & _DAT_183096228);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183095f80 = func_0x000184be83a0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1830962f8 = _DAT_1830962f8 ^ _DAT_183095f80 ^ 0xecf2eb5e58c64f2d;
  _DAT_1830961c8 = (_DAT_1830961c8 * 0x34c2ecbd7fbd407d ^ _DAT_1830962f8) + _DAT_183095f80;
  _DAT_1830961b8 = _DAT_1830961c8 ^ _DAT_1830962f8;
  _DAT_183095f98 = 0;
  uVar5 = ((_DAT_183096030 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183096030 & 0x8422231a) * 2) *
          -_DAT_1830961d0;
  uVar5 = (uVar5 | _DAT_183096040) + (uVar5 & _DAT_183096040);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183095f18 = func_0x000184be83a0((uVar5 | 0x8422231a) + (ulonglong)((uint)uVar5 & 0x8422231a))
  ;
  uVar5 = _DAT_183096208 ^ 0x3f;
  _DAT_183096118 = _DAT_1830960f0 ^ uVar5 ^ 0x3f;
  _DAT_183096058 = (_DAT_183096058 ^ uVar5) + 0x3f ^ 0xa42754f290b41ee4;
  _DAT_183096258 = (_DAT_183096258 * 0x4c5b7fc4b5c6aa11 ^ _DAT_183096058) + uVar5;
  _DAT_1830962a8 = _DAT_183096258 ^ _DAT_183096058;
  _DAT_183096190 = 0x3f;
  uVar5 = *(ulonglong *)(unaff_RBP + 0x14);
  uVar11 = uVar5 ^ 0x84222325 ^ _DAT_183095f50;
  lVar6 = (uVar5 ^ 0x84222325) + _DAT_183095f68;
  uVar13 = uVar11 + lVar6;
  uVar14 = (_DAT_183095f68 ^ 0x3f) + _DAT_183095f50 + 0x3f;
  uVar11 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar11;
  uVar13 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_183095f68 ^ 0x3f;
  _DAT_183096068 =
       func_0x000184be83a0((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183095f50 + 0x3f) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - lVar6);
  uVar13 = uVar5 * 0x3f ^ _DAT_183096068;
  uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar13 = (uint)bVar4 + (uint)bVar4 ^ uVar13;
  uVar14 = (ulonglong)((uint)uVar5 & 0x3f);
  _DAT_183096110 = (_DAT_183096110 ^ uVar13) + uVar14 ^ 0x976daf089498c718;
  _DAT_183096180 = (_DAT_183096180 * 0x63827e37e614f44b ^ _DAT_183096110) + uVar13;
  _DAT_183096298 = _DAT_183096180 ^ _DAT_183096110;
  uVar5 = uVar14 ^ 0x84222325;
  uVar11 = ((_DAT_183096228 ^ uVar5) + (ulonglong)((uint)_DAT_183096228 & (uint)uVar5) * 2) *
           (uVar12 - _DAT_1830960f8);
  uVar11 = (uVar11 | _DAT_1830960f8) + (uVar11 & _DAT_1830960f8);
  uVar11 = uVar11 * 0x2000 ^ uVar11;
  uVar11 = uVar11 >> 7 ^ uVar11;
  uVar11 = uVar11 << 0x11 ^ uVar11;
  _DAT_1830960c8 = uVar14;
  _DAT_183095fe0 =
       func_0x000184be83a0((uVar5 ^ uVar12 | uVar11) +
                           (ulonglong)((uint)(uVar5 ^ uVar12) & (uint)uVar11));
  uVar5 = uVar14 ^ _DAT_183095fe0;
  uVar11 = uVar5 >> 1 | uVar5;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10 ^ uVar5) * 0x51332c114e45429d;
  uVar12 = uVar12 | uVar14;
  _DAT_183095f50 = (_DAT_183095f50 ^ uVar5) + uVar12 ^ 0xbf174a89de5dd366;
  _DAT_183096010 = (_DAT_183096010 * 0x369c7918a1ee207b ^ _DAT_183095f50) + uVar5;
  _DAT_1830961b0 = _DAT_183096010 ^ _DAT_183095f50;
  _DAT_183096240 = uVar12;
  *(undefined8 *)(unaff_RBP + 0x1c) = *(undefined8 *)(unaff_RBP + 0xc);
  uVar1 = unaff_RBP[8];
  auVar9._8_8_ = unaff_XMM14_Qb;
  auVar9._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  unaff_RBP[0x1e] = uVar1;
  auVar10 = pshufb(auVar9 ^ _DAT_18030b780,auVar10);
  uVar11 = auVar10._8_8_ + auVar10._0_8_;
  uVar5 = uVar11 + _DAT_183096250;
  if (auVar10._4_4_ < 0) {
    uVar5 = _DAT_1830960c8 ^ uVar11;
  }
  _DAT_183095fe8 = func_0x000184be83a0(SUB161(auVar9 ^ _DAT_18030b780,5) ^ uVar5);
  uVar16 = uVar1 & _DAT_18001a990;
  uVar17 = uVar1 | _DAT_18001a990;
  uVar7 = uVar1 ^ _DAT_18001a990;
  uVar15 = uVar1 ^ (uint)DAT_18001a710;
  uVar5 = (((ulonglong)uVar1 | 1) ^ _DAT_183095fe8) << 0x13 | _DAT_183095fe8 >> 0x2d;
  _DAT_1830960e8 =
       ((ulonglong)uVar15 * (ulonglong)_DAT_18030b820 + _DAT_18030b830 << 0x20) +
       (ulonglong)uVar15 * (ulonglong)_DAT_18030b810 +
       ((ulonglong)uVar7 * (ulonglong)_DAT_18030b800 << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_18030b7f0 +
       ((ulonglong)uVar17 * (ulonglong)_DAT_18030b7e0 << 0x20) +
       (ulonglong)uVar17 * (ulonglong)_DAT_18030b7d0 +
       ((ulonglong)uVar16 * (ulonglong)unaff_XMM15_Da << 0x20 |
       (ulonglong)uVar16 * (ulonglong)unaff_XMM7_Da) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_18030b7a0 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_18030b790 +
       (-(((ulonglong)uVar15 * (ulonglong)_DAT_18030b870 + _DAT_18030b8c0 << 0x20) +
          (ulonglong)uVar15 * (ulonglong)_DAT_18030b860 +
         ((ulonglong)uVar7 * (ulonglong)_DAT_18030b890 << 0x20) +
         (ulonglong)uVar7 * (ulonglong)_DAT_18030b880 +
         ((ulonglong)uVar16 * (ulonglong)_DAT_18030b890 << 0x20 |
         (ulonglong)uVar16 * (ulonglong)_DAT_18030b880) +
         ((ulonglong)uVar1 * (ulonglong)_DAT_18030b870 << 0x20) +
         (ulonglong)uVar1 * (ulonglong)_DAT_18030b860) -
       (((ulonglong)uVar17 * (ulonglong)_DAT_18030b8b0 << 0x20) +
       (ulonglong)uVar17 * (ulonglong)_DAT_18030b8a0)) + 0x75dc9d77e623cbbe;
  _DAT_1830961b8 = _DAT_183096068 ^ uVar5 ^ _DAT_1830960e8;
  _DAT_183096228 = (_DAT_183096228 ^ uVar5) + _DAT_1830960e8 ^ 0x9fd01083cf4e0af4;
  _DAT_183095f58 = (_DAT_183095f58 * 0x3aa63a5965c0d24b ^ _DAT_183096228) + uVar5;
  _DAT_1830960f8 = _DAT_183095f58 ^ _DAT_183096228;
  _DAT_1830962b8 = _DAT_1830961f8 ^ _DAT_1830960e8;
  _DAT_1830960e8 = _DAT_1830960e8 & 0xffffffff;
  unaff_RBP[0x20] = (uint)uVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[0x1a]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4beaaa8 (image 184beaaa8) =====

void FUN_184beaaa8(void)

{
  return;
}



// ===== continuation @ rva 4bea909 (image 184bea909) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bea909(void)

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



// ===== continuation @ rva 4bebfa6 (image 184bebfa6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bebfa6(void)

{
  char cVar1;
  code *in_RAX;
  longlong *unaff_RBP;
  
  (*in_RAX)();
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



// ===== continuation @ rva 4bedda5 (image 184bedda5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bedda5(void)

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



// ===== continuation @ rva 4bedcb3 (image 184bedcb3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bedcb3(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190ddfc90();
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



// ===== continuation @ rva 4beeee3 (image 184beeee3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184beeee3(void)

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



// ===== continuation @ rva 4beb696 (image 184beb696) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184beb696(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
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



// ===== continuation @ rva 4bebe75 (image 184bebe75) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bebe75(void)

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



// ===== continuation @ rva 4beef7f (image 184beef7f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184beef7f(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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



// ===== continuation @ rva 4bef363 (image 184bef363) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bef363(void)

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



// ===== continuation @ rva 4bef30f (image 184bef30f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bef30f(void)

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



// ===== continuation @ rva 4bf00c8 (image 184bf00c8) =====

void FUN_184bf00c8(void)

{
  return;
}



// ===== continuation @ rva 4bef6ec (image 184bef6ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bef6ec(void)

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



// ===== continuation @ rva 4befe88 (image 184befe88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184befe88(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180311d38)();
  return;
}



// ===== continuation @ rva 4bef9c2 (image 184bef9c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bef9c2(void)

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



// ===== continuation @ rva 4bf0024 (image 184bf0024) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bf0024(void)

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



// ===== continuation @ rva 4bf00d6 (image 184bf00d6) =====

void FUN_184bf00d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4befa1a (image 184befa1a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184befa1a(void)

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



// ===== continuation @ rva 4befbb2 (image 184befbb2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184befbb2(void)

{
  FUN_190ddce00();
  (*_DAT_1803120f8)();
  return;
}



// ===== continuation @ rva 4befab6 (image 184befab6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184befab6(void)

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



// ===== continuation @ rva 4befea2 (image 184befea2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184befea2(void)

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



// ===== continuation @ rva 4bf2b1d (image 184bf2b1d) =====

void FUN_184bf2b1d(void)

{
  return;
}



// ===== continuation @ rva 4bf0240 (image 184bf0240) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf0240(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180312318)();
  return;
}



// ===== continuation @ rva 4bf2ac2 (image 184bf2ac2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf2ac2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1803128d8)();
  return;
}



// ===== continuation @ rva 4bf14b1 (image 184bf14b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bf14b1(void)

{
  longlong *unaff_RSI;
  longlong in_stack_00000060;
  
  (**(code **)(*unaff_RSI + 0x518))();
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4bf2b3c (image 184bf2b3c) =====

void FUN_184bf2b3c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bf27ed (image 184bf27ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bf27ed(void)

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



// ===== continuation @ rva 4bf1419 (image 184bf1419) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bf1419(void)

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



// ===== continuation @ rva 4bf1372 (image 184bf1372) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf1372(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180313088)();
  return;
}



// ===== continuation @ rva 4bf0ea0 (image 184bf0ea0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf0ea0(void)

{
  (*_DAT_180313038)();
  return;
}



// ===== continuation @ rva 4bf2a5c (image 184bf2a5c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf2a5c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180312918)();
  return;
}



// ===== continuation @ rva 4bf152c (image 184bf152c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf152c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180312f58)();
  return;
}



// ===== continuation @ rva 4bf4d18 (image 184bf4d18) =====

void FUN_184bf4d18(void)

{
  return;
}



// ===== continuation @ rva 4bf4b77 (image 184bf4b77) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf4b77(void)

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



// ===== continuation @ rva 4bf5ad7 (image 184bf5ad7) =====

undefined8 thunk_FUN_184bf53ef(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 4bf758f (image 184bf758f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf758f(void)

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



// ===== continuation @ rva 4bf7459 (image 184bf7459) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bf7459(void)

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



// ===== continuation @ rva 4bf5e66 (image 184bf5e66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bf5e66(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  FUN_184117d50();
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



// ===== continuation @ rva 4bf6310 (image 184bf6310) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bf6310(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  cVar1 = (**(code **)(*unaff_RBX + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4bf88e4 (image 184bf88e4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf88e4(void)

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



// ===== continuation @ rva 4bf862a (image 184bf862a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf862a(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0x70))(in_stack_00000030,in_stack_00000038,&UNK_182f702a8);
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



// ===== continuation @ rva 4bf5bc4 (image 184bf5bc4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bf5bc4(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000082;
  
  uStack0000000000000082 = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4bf5b6f (image 184bf5b6f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf5b6f(void)

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



// ===== continuation @ rva 4bf7c8c (image 184bf7c8c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf7c8c(void)

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



// ===== continuation @ rva 4bf791d (image 184bf791d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bf791d(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190ddfc90(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0xd69,*_DAT_18301ee50 + 0xd6d,
                0x41);
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



// ===== continuation @ rva 4bfdd32 (image 184bfdd32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bfdd32(void)

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



// ===== continuation @ rva 4bfdcde (image 184bfdcde) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bfdcde(void)

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



// ===== continuation @ rva 4bfebb4 (image 184bfebb4) =====

void FUN_184bfebb4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4bfe7aa (image 184bfe7aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bfe7aa(void)

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



// ===== continuation @ rva 4bfeba5 (image 184bfeba5) =====

void FUN_184bfeba5(void)

{
  return;
}



// ===== continuation @ rva 4bfe519 (image 184bfe519) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bfe519(void)

{
  FUN_190de3220();
  (*_DAT_1803154a8)();
  return;
}



// ===== continuation @ rva 4bfeb71 (image 184bfeb71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bfeb71(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180315618)();
  return;
}



// ===== continuation @ rva 4bfe8a5 (image 184bfe8a5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bfe8a5(void)

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



// ===== continuation @ rva 4bfe5b5 (image 184bfe5b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bfe5b5(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_1803156a8)();
  return;
}



// ===== continuation @ rva 4bfe4d0 (image 184bfe4d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bfe4d0(void)

{
  FUN_190dd72e0();
  (*_DAT_180315548)();
  return;
}



// ===== continuation @ rva 4bfe0e0 (image 184bfe0e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bfe0e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_180315538)();
  return;
}



// ===== continuation @ rva 4bfdea6 (image 184bfdea6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bfdea6(void)

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



// ===== continuation @ rva 4bfde52 (image 184bfde52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bfde52(void)

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



// ===== continuation @ rva 4c00cc6 (image 184c00cc6) =====

void FUN_184c00cc6(void)

{
  return;
}



// ===== continuation @ rva 4bfed2c (image 184bfed2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184bfed2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180315968)();
  return;
}



// ===== continuation @ rva 4c015cc (image 184c015cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c015cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180316588)();
  return;
}



// ===== continuation @ rva 4c011b4 (image 184c011b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c011b4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180315e68)();
  return;
}



// ===== continuation @ rva 4c0155b (image 184c0155b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c0155b(void)

{
  (*_DAT_180316518)();
  return;
}



// ===== continuation @ rva 4c0186a (image 184c0186a) =====

void FUN_184c0186a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c017cd (image 184c017cd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c017cd(void)

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



// ===== continuation @ rva 4c00f40 (image 184c00f40) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c00f40(void)

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



// ===== continuation @ rva 4c01764 (image 184c01764) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c01764(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1803165d8)();
  return;
}



// ===== continuation @ rva 4bfffe7 (image 184bfffe7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bfffe7(void)

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



// ===== continuation @ rva 4bff451 (image 184bff451) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184bff451(void)

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



// ===== continuation @ rva 4c000a3 (image 184c000a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c000a3(void)

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



// ===== continuation @ rva 4c047be (image 184c047be) =====

void FUN_184c047be(void)

{
  return;
}



// ===== continuation @ rva 4c0461f (image 184c0461f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c0461f(void)

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



// ===== continuation @ rva 4c05572 (image 184c05572) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c05572(void)

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



// ===== continuation @ rva 4c084a9 (image 184c084a9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_184c092f1(void)

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



// ===== continuation @ rva 4c054ed (image 184c054ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c054ed(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *in_stack_00000030;
  int iStack0000000000000050;
  ulonglong uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  iStack0000000000000050 = 4;
  uStack0000000000000060 = 0x18;
  uStack0000000000000058 =
       (ulonglong)
       CONCAT14((char)((ulonglong)unaff_RSI >> 0x38),(int)(char)((ulonglong)unaff_RSI >> 0x18));
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



// ===== continuation @ rva 4c08386 (image 184c08386) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_184c092f1(void)

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



// ===== continuation @ rva 4c108d5 (image 184c108d5) =====

void FUN_184c108d5(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 4c081aa (image 184c081aa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_184c092f1(void)

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



// ===== continuation @ rva 4c0754a (image 184c0754a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_184c092f1(void)

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



// ===== continuation @ rva 4c10b82 (image 184c10b82) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c10b82(void)

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



// ===== continuation @ rva 4c10b2e (image 184c10b2e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c10b2e(void)

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



// ===== continuation @ rva 4c11a1a (image 184c11a1a) =====

void FUN_184c11a1a(void)

{
  return;
}



// ===== continuation @ rva 4c11581 (image 184c11581) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c11581(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_180318e78)();
  return;
}



// ===== continuation @ rva 4c110f5 (image 184c110f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c110f5(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = in_stack_00000040;
  FUN_190dd72e0();
  (*_DAT_180318fd8)();
  return;
}



// ===== continuation @ rva 4c11a29 (image 184c11a29) =====

void FUN_184c11a29(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c10e95 (image 184c10e95) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c10e95(void)

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



// ===== continuation @ rva 4c111a3 (image 184c111a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c111a3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x430))();
  (*_DAT_180318d78)();
  return;
}



// ===== continuation @ rva 4c10fa6 (image 184c10fa6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c10fa6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180319038)();
  return;
}



// ===== continuation @ rva 4c1168d (image 184c1168d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c1168d(void)

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



// ===== continuation @ rva 4c11392 (image 184c11392) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c11392(void)

{
  FUN_190de3220();
  (*_DAT_180319028)();
  return;
}



// ===== continuation @ rva 4c13b36 (image 184c13b36) =====

void FUN_184c13b36(void)

{
  return;
}



// ===== continuation @ rva 4c11b9c (image 184c11b9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c11b9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180319d78)();
  return;
}



// ===== continuation @ rva 4c14370 (image 184c14370) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c14370(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180319388)();
  return;
}



// ===== continuation @ rva 4c13f7d (image 184c13f7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c13f7d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180319298)();
  return;
}



// ===== continuation @ rva 4c146da (image 184c146da) =====

void FUN_184c146da(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 4c12258 (image 184c12258) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c12258(void)

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



// ===== continuation @ rva 4c128dc (image 184c128dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c128dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1803193e8)();
  return;
}



// ===== continuation @ rva 4c121aa (image 184c121aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c121aa(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180319378)();
  return;
}



// ===== continuation @ rva 4c1446b (image 184c1446b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c1446b(void)

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



// ===== continuation @ rva 4c14508 (image 184c14508) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c14508(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180319c38)();
  return;
}



// ===== continuation @ rva 4c14095 (image 184c14095) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c14095(void)

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



// ===== continuation @ rva 4c12bfd (image 184c12bfd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184c12bfd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180319d48)();
  return;
}



// ===== continuation @ rva 4c132c2 (image 184c132c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184c132c2(void)

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



