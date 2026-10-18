// ===== continuation @ rva db880e5 (image 18db880e5) =====

void FUN_18db880e5(void)

{
  return;
}



// ===== continuation @ rva db6d90b (image 18db6d90b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018db6d961 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18db6d90b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva db87b8c (image 18db87b8c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db87b8c(void)

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



// ===== continuation @ rva db721b6 (image 18db721b6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018db721cd */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18db721b6(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva db707e1 (image 18db707e1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018db7081b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18db707e1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva db708c1 (image 18db708c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db708c1(void)

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



// ===== continuation @ rva db718ac (image 18db718ac) =====

void FUN_18db718ac(void)

{
  longlong unaff_RBP;
  char unaff_R14B;
  longlong unaff_R15;
  longlong in_stack_00000058;
  longlong lStack0000000000000060;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack0000000000000080;
  
  lStack0000000000000060 = in_stack_00000058;
  uStack0000000000000080 = 8;
  uStack0000000000000078 = 0x38;
  uStack0000000000000070 =
       (ulonglong)(uint)(int)(char)((ulonglong)(unaff_R15 << (unaff_R14B * '\b' & 0x3fU)) >> 0x38);
                    /* WARNING: Could not recover jumptable at 0x00018db718fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_RBP + (ulonglong)(in_stack_00000058 == 0) * 8))();
  return;
}



// ===== continuation @ rva db71ced (image 18db71ced) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018db71d30 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18db71ced(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva db790c4 (image 18db790c4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db790c4(ulonglong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *unaff_RSI;
  longlong lVar4;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong in_stack_00000050;
  ulonglong in_stack_000000a0;
  uint in_stack_000000b8;
  
  uVar2 = (~in_RAX + 0x7d1b8625) *
          ((param_1 ^ 0xef774e38) + (ulonglong)((uint)param_1 & 0xef774e38) * 2);
  uVar2 = (uVar2 | _DAT_18337bb80) + (uVar2 & _DAT_18337bb80);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18337bc00 = func_0x00018db882d0((uVar2 | 0x926cc81c) + (ulonglong)((uint)uVar2 & 0x926cc81c))
  ;
  uVar2 = ((_DAT_18337bc00 ^ 0x1440877a2c0000) & 0x1ffffffffc0000) * 0x800;
  _DAT_18337bce8 = (_DAT_18337bce8 ^ uVar2) + 0x7f5fef3d ^ 0x61cea47dd68f9cd5;
  _DAT_18337bcf8 = (_DAT_18337bcf8 * -0x52a8df590c1432a7 ^ _DAT_18337bce8) + uVar2;
  _DAT_18337b9f8 = _DAT_18337bcf8 ^ _DAT_18337bce8;
  _DAT_18337b808 = 0x7f5fef3d;
  uVar2 = (~_DAT_18337b860 + 0x60136d16) *
          ((_DAT_18337bd78 ^ 0x6d86da2e) + (ulonglong)((uint)_DAT_18337bd78 & 0x6d86da2e) * 2);
  uVar2 = (uVar2 | _DAT_18337b8e0) + (uVar2 & _DAT_18337b8e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18337b738 = func_0x00018db882d0((uVar2 | 0xd95b73b) + (ulonglong)((uint)uVar2 & 0xd95b73b));
  uVar2 = (ulonglong)(((uint)_DAT_18337b738 ^ 0xe9840000) & 0xe9a4f90b | 0xf90b);
  _DAT_18337bce0 = (_DAT_18337bce0 ^ uVar2) + 0x89b7941e ^ 0x43719f738b12d3a2;
  _DAT_18337b890 = (_DAT_18337b890 * -0x5f6b393115ef8a97 ^ _DAT_18337bce0) + uVar2;
  _DAT_18337ba08 = _DAT_18337b890 ^ _DAT_18337bce0;
  _DAT_18337be18 = 0x89b7941e;
  uVar2 = (~_DAT_18337bc00 + 0xf4d2ac13) *
          ((_DAT_18337b708 ^ 0x8f0f77c8) + (ulonglong)((uint)_DAT_18337b708 & 0x8f0f77c8) * 2);
  uVar2 = (uVar2 | _DAT_18337b738) + (uVar2 & _DAT_18337b738);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18337be00 = func_0x00018db882d0((uVar2 | 0x7bdddbda) + (ulonglong)((uint)uVar2 & 0x7bdddbda))
  ;
  uVar2 = _DAT_18337be00 ^ 0xb2d50ed;
  _DAT_18337b720 = _DAT_18337bdd0 ^ uVar2 ^ 0x1000000ff;
  _DAT_18337bb40 = (_DAT_18337bb40 ^ uVar2) + 0x1000000ff ^ 0x617c6dc879d69613;
  _DAT_18337bcc0 = (_DAT_18337bcc0 * -0x554f49b8b5d71f69 ^ _DAT_18337bb40) + uVar2;
  _DAT_18337be68 = _DAT_18337bcc0 ^ _DAT_18337bb40;
  _DAT_18337b7d8 = 0xff;
  _DAT_18337bae8 = func_0x00018db882d0(_DAT_18337bd30 ^ 0xfffd000e7b0061e2);
  uVar2 = _DAT_18337bae8 << 0x3e | (_DAT_18337bae8 & 0x7fffffffffffffff) >> 2;
  _DAT_18337b8e0 = (_DAT_18337b8e0 ^ uVar2) - 0x8a8424a8 ^ 0x6c7600d5475f8b7d;
  _DAT_18337bcb0 = (_DAT_18337bcb0 * 0x121a2d997914a63f ^ _DAT_18337b8e0) + uVar2;
  _DAT_18337bb50 = _DAT_18337bcb0 ^ _DAT_18337b8e0;
  _DAT_18337beb8 = 0x757bdb58;
  uVar2 = (_DAT_18337b760 ^ _DAT_1823552c0) + _DAT_18337bab8 + 0x842223da;
  uVar8 = (_DAT_18337bab8 ^ _UNK_1823552c8) + _DAT_18337b760 + 0x8a8424a8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18337b760 ^ _DAT_1823552c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18337bab8 ^ _UNK_1823552c8;
  _DAT_18337bc88 =
       func_0x00018db882d0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18337b760 + 0x8a8424a8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18337bab8 + 0x842223da));
  _DAT_18337be98 = _DAT_18337b720 ^ _DAT_18337bc88 ^ 0x8a8425a7;
  _DAT_18337bbb0 = (_DAT_18337bbb0 ^ _DAT_18337bc88) + 0x8a8425a7 ^ 0x59357a604cc891ad;
  _DAT_18337b838 = (_DAT_18337b838 * -0x1eb149314edae77b ^ _DAT_18337bbb0) + _DAT_18337bc88;
  _DAT_18337b818 = _DAT_18337b838 ^ _DAT_18337bbb0;
  _DAT_18337b898 = 0x8a8425a7;
  uVar2 = (_DAT_18337b750 ^ _DAT_1823552d0) + _DAT_18337bee8 + 0x842223da;
  uVar8 = (_DAT_18337bee8 ^ _UNK_1823552d8) + _DAT_18337b750 + 0xb3990319;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18337b750 ^ _DAT_1823552d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18337bee8 ^ _UNK_1823552d8;
  _DAT_18337be10 =
       func_0x00018db882d0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18337b750 + 0xb3990319) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18337bee8 + 0x842223da));
  uVar2 = _DAT_18337be10 >> 1 | _DAT_18337be10;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18337be10;
  _DAT_18337bc88 = _DAT_18337bd40 ^ uVar2 ^ 0xb3990418;
  _DAT_18337bc38 = (_DAT_18337bc38 ^ uVar2) + 0xb3990418 ^ 0xdc9e008053ef5791;
  _DAT_18337bd30 = (_DAT_18337bd30 * -0x3d2703cbc79c04a5 ^ _DAT_18337bc38) + uVar2;
  _DAT_18337baa0 = _DAT_18337bd30 ^ _DAT_18337bc38;
  _DAT_18337bed8 = 0xb3990418;
  _DAT_18337b8f8 = func_0x00018db882d0(_DAT_18337baa0 ^ 0xffd8006dfdff35c4);
  uVar2 = _DAT_18337b8f8 << 0x37 | _DAT_18337b8f8 >> 9;
  _DAT_18337bb20 = (_DAT_18337bb20 ^ uVar2) + 0xf6e87b23 ^ 0xd872cb943d9592ad;
  _DAT_18337b7f0 = (_DAT_18337b7f0 * 0x79663a5bec6f406f ^ _DAT_18337bb20) + uVar2;
  _DAT_18337b898 = _DAT_18337b7f0 ^ _DAT_18337bb20;
  _DAT_18337bde0 = 0xf6e87b23;
  uVar2 = (_DAT_18337b7d8 ^ _DAT_1823552e0) + _DAT_18337ba68 + 0xfb7dcc18;
  uVar8 = (_DAT_18337ba68 ^ _UNK_1823552e8) + _DAT_18337b7d8 + 0x89b7941e;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18337b7d8 ^ _DAT_1823552e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18337ba68 ^ _UNK_1823552e8;
  _DAT_18337bd10 =
       func_0x00018db882d0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18337b7d8 + 0x89b7941e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18337ba68 + 0xfb7dcc18));
  _DAT_18337b910 = (_DAT_18337b910 ^ _DAT_18337bd10 ^ 0x7f5fef3d) + 0x917841c ^ 0x687bf7ce5621102a;
  _DAT_18337b9e8 =
       (_DAT_18337b9e8 * 0x502b36d3bcf87527 ^ _DAT_18337b910) + (_DAT_18337bd10 ^ 0x7f5fef3d);
  _DAT_18337baa8 = _DAT_18337b9e8 ^ _DAT_18337b910;
  _DAT_18337b948 = 0x917841c;
  uVar2 = (~_DAT_18337bce8 + 0x917835c) *
          ((_DAT_18337bcb8 ^ 0x8d35a07e) + (ulonglong)((uint)_DAT_18337bcb8 & 0x8d35a07e) * 2);
  uVar2 = (uVar2 | _DAT_18337bc68) + (uVar2 & _DAT_18337bc68);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18337b988 = func_0x00018db882d0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_18337bda0 = _DAT_18337b988 ^ 0x52a96543c04259;
  uVar2 = _DAT_18337bda0 >> 1 | _DAT_18337bda0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_18337bda0 =
       (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
       _DAT_18337bda0;
  _DAT_18337bd88 = _DAT_18337bd88 ^ _DAT_18337bda0 ^ 0x477964c04170887c;
  _DAT_18337b858 =
       (_DAT_18337b7e0 * 0x58a6229d343ed819 ^ _DAT_18337bd88) + _DAT_18337bda0 ^ _DAT_18337bd88;
  _DAT_18337b7e0 = 0;
  uVar2 = (_DAT_18337bb78 ^ 0x842223da) + _DAT_18337ba18 + 0x842223da;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18337bb78 ^ 0x842223da;
  uVar8 = ((_DAT_18337ba18 + _DAT_18337bb78) * 0x2000 | _DAT_18337ba18 + _DAT_18337bb78 >> 0x33) ^
          _DAT_18337ba18;
  _DAT_18337b9f8 =
       func_0x00018db882d0((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_18337bb78 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18337ba18 + 0x842223da));
  uVar2 = _DAT_18337b9f8 & 0xff;
  _DAT_18337bb00 = _DAT_18337ba70 ^ uVar2 ^ 0xff;
  _DAT_18337b790 = (_DAT_18337b790 ^ uVar2) + 0xff ^ 0x2ce906ddb26e3d6c;
  _DAT_18337ba78 = (_DAT_18337ba78 * 0x32e478b609f6ab0f ^ _DAT_18337b790) + uVar2;
  _DAT_18337bed8 = _DAT_18337ba78 ^ _DAT_18337b790;
  _DAT_18337bab8 = 0xff;
  _DAT_18337bb20 = func_0x00018db882d0(_DAT_18337bb50 + 0xffb3ffc939ff54ff ^ 0xa9);
  uVar2 = (ulonglong)
          (((uint)((_DAT_18337bb20 ^ 0x7f5fef) << 8) | (uint)(byte)(_DAT_18337bb20 >> 0x38)) &
          0x7f5fef3d);
  _DAT_18337b8b8 = _DAT_18337b8b8 ^ uVar2 ^ 0x97fe3b1712c8237;
  _DAT_18337bc18 = (_DAT_18337bc18 * -0x7397a21809d98d89 ^ _DAT_18337b8b8) + uVar2;
  _DAT_18337b9d0 = _DAT_18337bc18 ^ _DAT_18337b8b8;
  _DAT_18337b8e8 = 0;
  _DAT_18337b978 = func_0x00018db882d0(_DAT_18337be98 + 0x20ff843a001dff ^ 0x5c);
  uVar2 = (ulonglong)(~(uint)_DAT_18337b978 & 0xff);
  _DAT_18337ba18 = _DAT_18337bb98 ^ uVar2 ^ 0xff;
  _DAT_18337ba08 = (_DAT_18337ba08 ^ uVar2) + 0xff ^ 0x4a3a72ca52ba6b8c;
  _DAT_18337bb60 = (_DAT_18337bb60 * 0x73063a8f0ccc9c7b ^ _DAT_18337ba08) + uVar2;
  _DAT_18337b948 = _DAT_18337bb60 ^ _DAT_18337ba08;
  _DAT_18337b930 = 0xff;
  uVar2 = (~_DAT_18337b9e0 + 0x6b556d1e) *
          ((_DAT_18337b898 ^ 0xef774e38) + (ulonglong)((uint)_DAT_18337b898 & 0xef774e38) * 2);
  uVar2 = (uVar2 | _DAT_18337b780) + (uVar2 & _DAT_18337b780);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18337b7d8 = func_0x00018db882d0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_18337bea0 = _DAT_18337bea0 ^ _DAT_18337b7d8 ^ 0x2d0085b7e1c3b549 ^ 0xb322b70dcfcb0b63;
  _DAT_18337bd88 =
       (_DAT_18337bd88 * -0x76f26859438826eb ^ _DAT_18337bea0) +
       (_DAT_18337b7d8 ^ 0x2d0085b7e1c3b549);
  _DAT_18337be58 = _DAT_18337bd88 ^ _DAT_18337bea0;
  _DAT_18337b8b0 = 0;
  _DAT_18337bbf0 = func_0x00018db882d0(_DAT_18337baa0 ^ 0xffdeff7b39ffdd0d);
  uVar2 = ((_DAT_18337bbf0 & 0xffffffff) * (ulonglong)_DAT_182355300 +
           (_DAT_18337bbf0 >> 0x20) * (_DAT_1823552f0 & 0xffffffff) << 0x20) +
          (_DAT_18337bbf0 & 0xffffffff) * (_DAT_1823552f0 & 0xffffffff) & 0x7fffffffffffffff;
  _DAT_18337bdf0 = _DAT_18337bee8 ^ uVar2 ^ 0xff;
  _DAT_18337bd90 = (_DAT_18337bd90 ^ uVar2) + 0xff ^ 0x77ca89ffd1819de9;
  _DAT_18337bc00 = (_DAT_18337bc00 * 0x9d38c78311be80d ^ _DAT_18337bd90) + uVar2;
  _DAT_18337bc50 = _DAT_18337bc00 ^ _DAT_18337bd90;
  auVar5._8_8_ = _UNK_180122a38;
  auVar5._0_8_ = in_stack_000000a0 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_182355310,_DAT_1800170c0);
  _DAT_18337baf8 = 0xff;
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar8 + _DAT_18337bdf0;
  if (auVar6._4_4_ < 0) {
    uVar2 = _DAT_18337ba80 ^ uVar8;
  }
  _DAT_18337b718 = func_0x00018db882d0(SUB161(auVar5 ^ _DAT_182355310,5) ^ uVar2);
  uVar2 = _DAT_18337b718 << 0x26 | _DAT_18337b718 >> 0x1a;
  in_stack_000000a0 = in_stack_000000a0 & 0xff;
  _DAT_18337b7d8 = (_DAT_18337b7d8 ^ uVar2) + in_stack_000000a0 ^ 0x1fac76d20fad1c6d;
  _DAT_18337b7e0 = (_DAT_18337b7e0 * 0x435f6be569f9b74f ^ _DAT_18337b7d8) + uVar2;
  _DAT_18337ba20 = _DAT_18337b7e0 ^ _DAT_18337b7d8;
  uVar2 = in_stack_00000050 ^ 0x84222325 ^ _DAT_18337bab0;
  lVar4 = (in_stack_00000050 ^ 0x84222325) + _DAT_18337be00;
  uVar8 = uVar2 + lVar4;
  uVar9 = (in_stack_000000a0 ^ _DAT_18337be00) + _DAT_18337bab0 + in_stack_000000a0;
  uVar2 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ in_stack_000000a0 ^ _DAT_18337be00;
  _DAT_18337bdc8 = in_stack_000000a0;
  _DAT_18337ba90 =
       func_0x00018db882d0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18337bab0 + in_stack_000000a0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  _DAT_18337b708 = in_stack_00000050 | in_stack_000000a0;
  _DAT_18337ba98 =
       (_DAT_18337ba98 ^ _DAT_18337ba90 ^ _DAT_18337b708) + _DAT_18337b708 ^ 0x47983cb517a68683;
  _DAT_18337ba28 =
       (_DAT_18337ba28 * -0x31ee3d29e8efcaeb ^ _DAT_18337ba98) + (_DAT_18337ba90 ^ _DAT_18337b708);
  _DAT_18337bac8 = _DAT_18337ba28 ^ _DAT_18337ba98;
  uVar8 = (ulonglong)in_stack_000000b8;
  uVar2 = uVar8 ^ 0x84222325 ^ _DAT_18337b780;
  lVar4 = (uVar8 ^ 0x84222325) + _DAT_18337baf0;
  uVar9 = uVar2 + lVar4;
  uVar10 = (_DAT_18337baf0 ^ 1) + _DAT_18337b780 + 1;
  uVar2 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar2;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18337baf0 ^ 1;
  _DAT_18337bc88 =
       func_0x00018db882d0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18337b780 + 1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  uVar7 = in_stack_000000b8 & (uint)_DAT_18001a990;
  uVar2 = _DAT_18337bc88 << 0x3b | _DAT_18337bc88 >> 5;
  _DAT_18337b898 =
       ((((uVar8 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)_DAT_182355360 +
         ((ulonglong)_DAT_182355370 * ((uVar8 ^ _DAT_18001a990) & 0xffffffff) +
          (_DAT_18001a990 >> 0x20) * (ulonglong)_DAT_182355360 << 0x20) +
        ((ulonglong)_DAT_182355350 * (ulonglong)uVar7 << 0x20 |
        (ulonglong)_DAT_182355340 * (ulonglong)uVar7) +
        ((ulonglong)_DAT_182355330 * (ulonglong)in_stack_000000b8 << 0x20) +
        (ulonglong)in_stack_000000b8 * (ulonglong)_DAT_182355320) -
       ((uVar8 | _DAT_18001a990 & 0xffffffff) * (_DAT_1823553c0 & 0xffffffff) +
        ((_DAT_18001a990 >> 0x20) * (_DAT_1823553c0 & 0xffffffff) +
         (ulonglong)_DAT_1823553d0 * (uVar8 | _DAT_18001a990 & 0xffffffff) << 0x20) +
       ((ulonglong)uVar7 * (ulonglong)_DAT_1823553d0 << 0x20 |
       (ulonglong)uVar7 * (_DAT_1823553c0 & 0xffffffff)) +
       ((ulonglong)in_stack_000000b8 * (ulonglong)_DAT_1823553b0 << 0x20) +
       (ulonglong)in_stack_000000b8 * (ulonglong)_DAT_1823553a0)) + 0x211960139b4f9c01;
  _DAT_18337b9b8 = _DAT_18337bc70 ^ uVar2 ^ _DAT_18337b898;
  _DAT_18337bd50 = (_DAT_18337bd50 ^ uVar2) + _DAT_18337b898 ^ 0x7fa3d6967d746bfc;
  _DAT_18337bd60 = (_DAT_18337bd60 * 0x5bf3c22c15f346ff ^ _DAT_18337bd50) + uVar2;
  _DAT_18337b7d0 = _DAT_18337bd60 ^ _DAT_18337bd50;
  _DAT_18337b898 = _DAT_18337b898 & 0xffffffff;
  uVar3 = (**(code **)(*unaff_RSI + 0x580))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa,uVar3);
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db70676 (image 18db70676) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018db70694 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18db70676(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva db5467c (image 18db5467c) =====

void FUN_18db5467c(void)

{
  return;
}



// ===== continuation @ rva db50715 (image 18db50715) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db50715(void)

{
  FUN_190ddce00();
  (*_DAT_18234c8b8)();
  return;
}



// ===== continuation @ rva db5b82d (image 18db5b82d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db5b82d(void)

{
  int in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db6398a (image 18db6398a) =====

void FUN_18db6398a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva db5b16e (image 18db5b16e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db5b16e(void)

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



// ===== continuation @ rva db6395f (image 18db6395f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6395f(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x1f8))(in_stack_00000038);
  (**(code **)(*in_stack_00000038 + 0x720))(in_stack_00000038);
  (*_DAT_18234b778)();
  return;
}



// ===== continuation @ rva db62524 (image 18db62524) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db62524(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db592f0 (image 18db592f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db592f0(void)

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



// ===== continuation @ rva db61d17 (image 18db61d17) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db61d17(void)

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



// ===== continuation @ rva db6270a (image 18db6270a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6270a(void)

{
  (*_DAT_18234abd8)();
  return;
}



// ===== continuation @ rva db586f1 (image 18db586f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db586f1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db69ed0 (image 18db69ed0) =====

void FUN_18db69ed0(void)

{
  return;
}



// ===== continuation @ rva db63bdd (image 18db63bdd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db63bdd(void)

{
  FUN_190ddce00();
  (*_DAT_18234fab0)();
  return;
}



// ===== continuation @ rva db67def (image 18db67def) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db67def(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18234fe20)();
  return;
}



// ===== continuation @ rva db67bc7 (image 18db67bc7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db67bc7(void)

{
  FUN_190dd72e0();
  (*_DAT_18234fb70)();
  return;
}



// ===== continuation @ rva db6a9da (image 18db6a9da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6a9da(void)

{
  (*_DAT_182350cc0)();
  return;
}



// ===== continuation @ rva db68e53 (image 18db68e53) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db68e53(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db69cef (image 18db69cef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db69cef(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182350d70)();
  return;
}



// ===== continuation @ rva db69ac7 (image 18db69ac7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db69ac7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182350c00)();
  return;
}



// ===== continuation @ rva db6a393 (image 18db6a393) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6a393(void)

{
  (*_DAT_182350ff0)();
  return;
}



// ===== continuation @ rva db69ddd (image 18db69ddd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db69ddd(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db68f0d (image 18db68f0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db68f0d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182350480)();
  return;
}



// ===== continuation @ rva db67b36 (image 18db67b36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db67b36(void)

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



// ===== continuation @ rva db88401 (image 18db88401) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db88401(void)

{
  FUN_190dd72e0();
  (*_DAT_1823559d8)();
  return;
}



// ===== continuation @ rva db88383 (image 18db88383) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db88383(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182355a68)();
  return;
}



// ===== continuation @ rva db88720 (image 18db88720) =====

void FUN_18db88720(void)

{
  return;
}



// ===== continuation @ rva db885d9 (image 18db885d9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db885d9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182355978)();
  return;
}



// ===== continuation @ rva db88728 (image 18db88728) =====

void FUN_18db88728(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva db884be (image 18db884be) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db884be(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db884a1 (image 18db884a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db884a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_182355908)();
  return;
}



// ===== continuation @ rva db88512 (image 18db88512) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db88512(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db88533 (image 18db88533) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db88533(void)

{
  FUN_190ddfc90();
  (*_DAT_1823559f8)();
  return;
}



// ===== continuation @ rva db883c7 (image 18db883c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db883c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823559a8)();
  return;
}



// ===== continuation @ rva db88938 (image 18db88938) =====

void FUN_18db88938(void)

{
  uint uVar1;
  undefined8 *unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0xc) = uVar1;
  unaff_RBP[0xd] = unaff_RBP[0xc];
  *unaff_RBP = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018db88969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182355fd0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva db888e3 (image 18db888e3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018db8891a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18db888e3(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva db88b7e (image 18db88b7e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db88b7e(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_XMM10_Da;
  undefined1 unaff_XMM11 [16];
  uint unaff_XMM12_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  _DAT_18337c0e0 = func_0x00018dbb1260(_DAT_18337c000 ^ 0x1eff8405001d5f);
  _DAT_18337bf08 = (_DAT_18337bf08 ^ _DAT_18337c0e0) + 0x2b ^ 0x2f69226a945889c2;
  _DAT_18337bf70 = (_DAT_18337bf70 * 0x7fda04ba22e84385 ^ _DAT_18337bf08) + _DAT_18337c0e0;
  _DAT_18337c0e8 = _DAT_18337bf70 ^ _DAT_18337bf08;
  _DAT_18337bf38 = 0x2b;
  uVar4 = (~_DAT_18337c008 + 0x16) *
          ((_DAT_18337c080 ^ unaff_R12) + (ulonglong)((uint)_DAT_18337c080 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18337c0f8) + (uVar4 & _DAT_18337c0f8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18337bf38 = func_0x00018dbb1260((uVar4 | 0x84222330) + (ulonglong)((uint)uVar4 & 0x84222330))
  ;
  _DAT_18337bf50 =
       (_DAT_18337bf50 ^ _DAT_18337bf38 & 0xffffffffff800000) - 0x15 ^ 0x894398a052036b93;
  _DAT_18337bf10 =
       (_DAT_18337bf10 * 0xca4c8b7ac1c80bb ^ _DAT_18337bf50) + (_DAT_18337bf38 & 0xffffffffff800000)
  ;
  _DAT_18337bf68 = _DAT_18337bf10 ^ _DAT_18337bf50;
  _DAT_18337c0c8 = 0xeb;
  uVar4 = (~_DAT_18337c088 + 0x16) *
          ((_DAT_18337bff0 ^ 0x84222315) + (ulonglong)((uint)_DAT_18337bff0 & 0x84222315) * 2);
  uVar4 = (uVar4 | _DAT_18337c0e8) + (uVar4 & _DAT_18337c0e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18337c0d0 = func_0x00018dbb1260((uVar4 | 0x84222300) + (ulonglong)((uint)uVar4 & 0x84222300))
  ;
  uVar4 = _DAT_18337c0d0 - (_DAT_18337c0d0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_R14) + (uVar4 >> 2 & unaff_R14);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38) << 4 ^ _DAT_18337c0d0;
  _DAT_18337c080 = _DAT_18337c098 ^ uVar4 ^ 0x45;
  _DAT_18337bfa8 = (_DAT_18337bfa8 ^ uVar4) + 0x45 ^ 0xc2c4ccaae7498c04;
  _DAT_18337c020 = (_DAT_18337c0b8 * 0x14ab350dfbf16d1f ^ _DAT_18337bfa8) + uVar4 ^ _DAT_18337bfa8;
  _DAT_18337c0b8 = 0x45;
  uVar4 = (_DAT_18337c0e0 ^ _DAT_181a633e0) + _DAT_18337c038 + unaff_R12;
  uVar5 = (_DAT_18337c038 ^ _UNK_181a633e8) + _DAT_18337c0e0 + 0xc4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18337c0e0 ^ _DAT_181a633e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18337c038 ^ _UNK_181a633e8;
  _DAT_18337bff0 =
       func_0x00018dbb1260((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18337c0e0 + 0xc4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18337c038 + unaff_R12));
  _DAT_18337bf38 = (_DAT_18337bf38 ^ _DAT_18337bff0) - 0xc4 ^ 0x5e7df687c9a63977;
  _DAT_18337bff8 =
       (_DAT_18337c018 * 0x3749f488b2a7319d ^ _DAT_18337bf38) + _DAT_18337bff0 ^ _DAT_18337bf38;
  _DAT_18337c018 = 0x3c;
  uVar4 = (~_DAT_18337c070 + 0xc5) *
          ((_DAT_18337c048 ^ 0x84222315) + (ulonglong)((uint)_DAT_18337c048 & 0x84222315) * 2);
  uVar4 = (uVar4 | _DAT_18337bfc0) + (uVar4 & _DAT_18337bfc0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x00018dbb1260((uVar4 | 0x842223d1) + (ulonglong)((uint)uVar4 & 0x842223d1));
  uVar4 = uVar4 & 0x7fffffffffffffff;
  _DAT_18337bfc0 = _DAT_18337c078 ^ uVar4 ^ 0xf4;
  _DAT_18337c008 = (_DAT_18337c008 ^ uVar4) + 0xf4 ^ 0x17d4f19c3c01e277;
  _DAT_18337bf08 = (_DAT_18337bf08 * 0x662f55bd02c1d235 ^ _DAT_18337c008) + uVar4;
  _DAT_18337c050 = _DAT_18337bf08 ^ _DAT_18337c008;
  _DAT_18337bf18 = 0xf4;
  uVar4 = (~_DAT_18337bfe0 + 0x3d) *
          ((_DAT_18337bf08 ^ 0x842223d1) + (ulonglong)((uint)_DAT_18337bf08 & 0x842223d1) * 2);
  uVar4 = (uVar4 | 0xf4) + (uVar4 & 0xf4);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18337c030 = func_0x00018dbb1260((uVar4 | 0x842223ed) + (ulonglong)((uint)uVar4 & 0x842223ed))
  ;
  uVar4 = (_DAT_18337c030 ^ 0xfc) * -0x68fe68a1a72a0335 & 0xffffffffffffff80;
  _DAT_18337c088 = _DAT_18337c000 ^ uVar4 ^ 0x130;
  _DAT_18337c0b8 = (_DAT_18337c0b8 ^ uVar4) + 0x130 ^ 0xe5554fb9bb74131d;
  _DAT_18337c0f8 = (_DAT_18337c0f8 * 0x6cba49e9f8442c13 ^ _DAT_18337c0b8) + uVar4;
  _DAT_18337bf18 = _DAT_18337c0f8 ^ _DAT_18337c0b8;
  _DAT_18337c068 = 0x30;
  _DAT_18337c000 = func_0x00018dbb1260(_DAT_18337c030 ^ 0xffdeff845300216d);
  uVar4 = (_DAT_18337c000 ^ 0xba) & 0x7fffffffffffffff;
  _DAT_18337c028 = _DAT_18337bfd8 ^ uVar4 ^ 0xda;
  _DAT_18337bfd0 = (_DAT_18337bfd0 ^ uVar4) + 0xda ^ 0xc6c638269a725b8d;
  _DAT_18337c048 = (_DAT_18337c048 * -0x789982355228a97f ^ _DAT_18337bfd0) + uVar4;
  _DAT_18337c098 = _DAT_18337c048 ^ _DAT_18337bfd0;
  _DAT_18337bfe0 = 0xda;
  uVar4 = (~_DAT_18337c0f0 + 0x34) *
          ((_DAT_18337bf18 ^ 0x8422230e) + (ulonglong)((uint)_DAT_18337bf18 & 0x8422230e) * 2);
  uVar4 = (uVar4 | _DAT_18337bf50) + (uVar4 & _DAT_18337bf50);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18337c088 = func_0x00018dbb1260((uVar4 | 0x8422233d) + (ulonglong)((uint)uVar4 & 0x8422233d))
  ;
  uVar4 = _DAT_18337bf70 & 0xfffffffffffffff;
  _DAT_18337c098 = _DAT_18337c008 ^ uVar4 ^ 0x5e;
  _DAT_18337bf80 = (_DAT_18337bf80 ^ uVar4) + 0x5e ^ 0xfa59cff7c135900b;
  _DAT_18337bf78 = (_DAT_18337bf78 * -0x5018b9b592da84ad ^ _DAT_18337bf80) + uVar4;
  _DAT_18337bf58 = _DAT_18337bf78 ^ _DAT_18337bf80;
  _DAT_18337c020 = 0x5e;
  _DAT_18337c048 = func_0x00018dbb1260(_DAT_18337c0d0 + 0xffe1007c0cffe1ff ^ 0x49);
  _DAT_18337bf28 = (_DAT_18337bf28 ^ _DAT_18337c048 ^ 0x891) + 0x18 ^ 0xa503d56d8d527b19;
  _DAT_18337c000 =
       (_DAT_18337c000 * -0x24f568000c5e0833 ^ _DAT_18337bf28) + (_DAT_18337c048 ^ 0x891);
  _DAT_18337bf38 = _DAT_18337c000 ^ _DAT_18337bf28;
  _DAT_18337c0a0 = 0x18;
  uVar4 = (_DAT_18337bfa8 ^ _DAT_182356c00) + _DAT_18337bfc8 + 0x8422230e;
  uVar5 = (_DAT_18337bfc8 ^ _UNK_182356c08) + _DAT_18337bfa8 + 0x33;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18337bfa8 ^ _DAT_182356c00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18337bfc8 ^ _UNK_182356c08;
  _DAT_18337bfe8 =
       func_0x00018dbb1260((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18337bfa8 + 0x33) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18337bfc8 + 0x8422230e));
  uVar4 = _DAT_18337bfe8 << 0x15 | _DAT_18337bfe8 >> 0x2b;
  _DAT_18337c028 = (_DAT_18337c028 ^ uVar4) + 0x23 ^ 0x6279a961c652ed7d;
  _DAT_18337c088 = (_DAT_18337c088 * 0x526c435b381431b5 ^ _DAT_18337c028) + uVar4;
  _DAT_18337c0e0 = _DAT_18337c088 ^ _DAT_18337c028;
  _DAT_18337bf80 = 0x23;
  _DAT_18337bf30 = func_0x00018dbb1260(_DAT_18337c030 ^ 0xffe30083dd001d23);
  _DAT_18337c018 = (_DAT_18337bf30 ^ 0x2284) << 0x33 | (_DAT_18337bf30 ^ 0x2284) >> 0xd;
  _DAT_18337bfa0 = _DAT_18337bfa0 ^ _DAT_18337c018 ^ 0x4104a567752e1163;
  _DAT_18337c018 = (_DAT_18337c018 * -0xc5513b20a03426d ^ _DAT_18337bfa0) + _DAT_18337c018;
  _DAT_18337c060 = _DAT_18337c018 ^ _DAT_18337bfa0;
  _DAT_18337bf28 = 0;
  uVar4 = (_DAT_18337c0b0 ^ _DAT_182356c10) + _DAT_18337bfd0 + 0x8422230e;
  uVar5 = (_DAT_18337bfd0 ^ _UNK_182356c18) + _DAT_18337c0b0 + 0xff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18337c0b0 ^ _DAT_182356c10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18337bfd0 ^ _UNK_182356c18;
  _DAT_18337c030 =
       func_0x00018dbb1260((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18337c0b0 + 0xff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18337bfd0 + 0x8422230e));
  uVar4 = (_DAT_18337c030 << 0x2f | _DAT_18337c030 >> 0x11) ^ 0xff;
  _DAT_18337bfb8 = (_DAT_18337bfb8 ^ uVar4) + 0xd4 ^ 0xe928fbeb332b9fef;
  _DAT_18337c060 = (_DAT_18337c060 * -0x425025f7124cd175 ^ _DAT_18337bfb8) + uVar4;
  _DAT_18337bfb0 = _DAT_18337c060 ^ _DAT_18337bfb8;
  _DAT_18337bf90 = 0xd4;
  uVar4 = ((_DAT_18337c000 ^ 0x84222315) + (ulonglong)((uint)_DAT_18337c000 & 0x84222315) * 2) *
          -_DAT_18337c0a0;
  uVar4 = (uVar4 | _DAT_18337bfd8) + (uVar4 & _DAT_18337bfd8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lVar3 = func_0x00018dbb1260((uVar4 | 0x84222315) + (ulonglong)((uint)uVar4 & 0x84222315));
  uVar4 = lVar3 * -0x6e4cab037ffa2677 & 0x3ffffffffff;
  uVar5 = uVar4 - ((ulonglong)(lVar3 * -0x6e4cab037ffa2677) >> 1 & 0x15555555555);
  uVar5 = (uVar5 & unaff_R14) + (uVar5 >> 2 & unaff_R14);
  uVar4 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38 ^ uVar4;
  _DAT_18337bf08 = _DAT_18337bf60 ^ uVar4 ^ 0x30;
  _DAT_18337bf90 = (_DAT_18337bf90 ^ uVar4) + 0x30 ^ 0xdd36420702ff42a0;
  _DAT_18337c050 = (_DAT_18337c050 * -0x644d34a4a91fa8dd ^ _DAT_18337bf90) + uVar4;
  _DAT_18337c068 = _DAT_18337c050 ^ _DAT_18337bf90;
  _DAT_18337bfb8 = 0x30;
  uVar4 = ((_DAT_18337c010 ^ 0x84222315) + (ulonglong)((uint)_DAT_18337c010 & 0x84222315) * 2) *
          -0x30;
  uVar4 = (uVar4 | _DAT_18337c0e0) + (uVar4 & _DAT_18337c0e0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18337c0c8 = func_0x00018dbb1260((uVar4 | 0x84222315) + (ulonglong)((uint)uVar4 & 0x84222315))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_18337c0c8 & 0x30);
  _DAT_18337c0f8 = _DAT_18337c020 ^ uVar4 ^ 0x30;
  _DAT_18337c0d8 = (_DAT_18337c0d8 ^ uVar4) + 0x30 ^ 0x7d3aca877ee88f5;
  _DAT_18337bf70 = (_DAT_18337bf70 * 0x31829694ddef0b1f ^ _DAT_18337c0d8) + uVar4;
  _DAT_18337c090 = _DAT_18337bf70 ^ _DAT_18337c0d8;
  _DAT_18337bfd0 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x48);
  uVar4 = bVar1 ^ unaff_R12;
  uVar5 = uVar4 ^ _DAT_18337c018;
  lVar3 = uVar4 + _DAT_18337c000;
  uVar4 = uVar5 + lVar3;
  uVar6 = (_DAT_18337c000 ^ 0x30) + _DAT_18337c018 + 0x30;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18337c000 ^ 0x30;
  _DAT_18337bf78 =
       func_0x00018dbb1260((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18337c018 + 0x30) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar4 = (_DAT_18337bf78 & 0x7fffffffffff) * 0x2b98f309d804357d;
  uVar5 = (ulonglong)bVar1 | 0x30;
  _DAT_18337c020 = (_DAT_18337c020 ^ uVar4) + uVar5 ^ 0xd8fb1cb8014e4c99;
  _DAT_18337bf50 = (_DAT_18337bf50 * -0x43be0bb36b9b226f ^ _DAT_18337c020) + uVar4;
  _DAT_18337c030 = _DAT_18337bf50 ^ _DAT_18337c020;
  uVar4 = ~_DAT_18337c0e0 *
          ((unaff_RBX ^ unaff_R12 ^ _DAT_18337bf70) + ((unaff_RBX ^ unaff_R12) & _DAT_18337bf70) * 2
          );
  uVar4 = (uVar4 | _DAT_18337bf60) + (uVar4 & _DAT_18337bf60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18337c0d0 = uVar5;
  _DAT_18337bff0 =
       func_0x00018dbb1260((unaff_RBX ^ 0xffffffff7bdddcda | uVar4) +
                           (uVar4 & (unaff_RBX ^ 0xffffffff7bdddcda)));
  uVar8 = (uint)(unaff_RBX >> 0x20);
  auVar2._8_4_ = (int)unaff_RBX;
  auVar2._0_8_ = unaff_RBX;
  auVar2._12_4_ = uVar8;
  uVar7 = SUB164(auVar2 ^ unaff_XMM11,0);
  uVar6 = SUB168(auVar2 ^ unaff_XMM11,0);
  lVar3 = ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182356c60 +
           (ulonglong)uVar8 * (ulonglong)_DAT_182356c50 << 0x20) +
          (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182356c50;
  uVar4 = ~_DAT_18337bff0;
  _DAT_18337c0a0 =
       ((ulonglong)uVar7 * (ulonglong)unaff_XMM14_Da +
        ((ulonglong)uVar7 * (ulonglong)_DAT_182356ce0 + (uVar6 >> 0x20) * (ulonglong)unaff_XMM14_Da
        << 0x20) + lVar3 +
        (ulonglong)uVar7 * (ulonglong)unaff_XMM15_Da +
        ((ulonglong)uVar7 * (ulonglong)_DAT_182356cd0 + (uVar6 >> 0x20) * (ulonglong)unaff_XMM15_Da
        << 0x20) +
        ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182356ca0 +
         (ulonglong)uVar8 * (ulonglong)unaff_XMM10_Da << 0x20) +
        (unaff_RBX & 0xffffffff) * (ulonglong)unaff_XMM10_Da +
        ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182356c80 +
         (ulonglong)uVar8 * (ulonglong)unaff_XMM12_Da << 0x20) +
        (unaff_RBX & 0xffffffff) * (ulonglong)unaff_XMM12_Da ^ unaff_XMM11._0_8_) +
       (ulonglong)uVar7 * (ulonglong)_DAT_182356c40 +
       ((uVar6 >> 0x20) * (ulonglong)_DAT_182356c40 + (ulonglong)uVar7 * (ulonglong)_DAT_182356c20
       << 0x20) +
       (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182356c30 +
       ((unaff_RBX >> 0x20) * (ulonglong)_DAT_182356c30 +
        (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_182356c20 << 0x20) + lVar3 + 0x6055661840def7ac;
  _DAT_18337bf70 = _DAT_18337bf88 ^ uVar4 ^ _DAT_18337c0a0;
  _DAT_18337bf50 = (_DAT_18337bf50 ^ uVar4) + _DAT_18337c0a0 ^ 0x6c044d6930b94c04;
  _DAT_18337c0b0 = (_DAT_18337c0b0 * 0x6b935d61b891da7b ^ _DAT_18337bf50) + uVar4;
  _DAT_18337c030 = _DAT_18337c0b0 ^ _DAT_18337bf50;
  *(char *)(unaff_RBP + -0x50 + _DAT_18337c0a0) = (char)uVar5;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db8cd47 (image 18db8cd47) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018db8d18e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18db8cd47(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar1 = (longlong)unaff_RBP - 0x3b;
  auVar8._8_8_ = unaff_RDI;
  auVar8._0_8_ = uVar1 ^ 0x84222325;
  plVar2 = (longlong *)*unaff_RBP;
  auVar9 = pshufb(auVar8 ^ _DAT_182356e60,_DAT_1800170c0);
  uVar6 = auVar9._8_8_ + auVar9._0_8_;
  uVar7 = uVar6 + _DAT_18337bf30;
  if (auVar9._4_4_ < 0) {
    uVar7 = _DAT_18337bf18 ^ uVar6;
  }
  _DAT_18337c000 = func_0x00018dbb1260(SUB161(auVar8 ^ _DAT_182356e60,5) ^ uVar7);
  uVar10 = (uint)(uVar1 >> 0x20);
  auVar13._8_4_ = (int)uVar1;
  auVar13._0_8_ = uVar1;
  auVar13._12_4_ = uVar10;
  uVar14 = (uint)(unaff_RDI >> 0x20);
  auVar9._8_4_ = (int)unaff_RDI;
  auVar9._0_8_ = unaff_RDI;
  auVar9._12_4_ = uVar14;
  uVar6 = (ulonglong)_DAT_182356e80;
  uVar7 = (ulonglong)_DAT_182356e80;
  *(undefined1 (*) [16])(unaff_RBP + 10) = auVar13 ^ auVar9;
  uVar12 = SUB164(auVar13 & auVar9,0);
  uVar15 = SUB168(auVar13 & auVar9,0);
  uVar11 = SUB164(auVar13 | auVar9,0);
  uVar16 = SUB168(auVar13 | auVar9,0);
  uVar3 = unaff_RBP[10];
  uVar4 = (uVar1 | unaff_RDI) ^ _DAT_18337c000;
  _DAT_18337c080 =
       ((ulonglong)_DAT_182356ee0 * (uVar3 & 0xffffffff) +
        ((ulonglong)_DAT_182356ef0 * (uVar3 & 0xffffffff) +
         (uVar3 >> 0x20) * (ulonglong)_DAT_182356ee0 << 0x20) +
        (ulonglong)_DAT_182356ec0 * (ulonglong)uVar11 +
        ((ulonglong)_DAT_182356ed0 * (ulonglong)uVar11 +
         (uVar16 >> 0x20) * (ulonglong)_DAT_182356ec0 << 0x20) +
       (ulonglong)_DAT_182356ea0 * (ulonglong)uVar12 +
       ((ulonglong)_DAT_182356eb0 * (ulonglong)uVar12 + (uVar15 >> 0x20) * (ulonglong)_DAT_182356ea0
       << 0x20) +
       (ulonglong)_DAT_182356e90 * (unaff_RDI & 0xffffffff) +
       ((ulonglong)uVar14 * (ulonglong)_DAT_182356e90 +
        (ulonglong)_DAT_182356e70 * (unaff_RDI & 0xffffffff) << 0x20) +
       uVar7 * (uVar1 & 0xffffffff) +
       (uVar10 * uVar6 + (uVar1 & 0xffffffff) * (ulonglong)_DAT_182356e70 << 0x20)) -
       ((ulonglong)*(uint *)(unaff_RBP + 10) * (ulonglong)_DAT_182356f80 +
        ((ulonglong)_DAT_182356f90 * (ulonglong)*(uint *)(unaff_RBP + 10) +
         (uVar3 >> 0x20) * (ulonglong)_DAT_182356f80 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)_DAT_182356f60 +
        ((ulonglong)_DAT_182356f70 * (ulonglong)uVar11 +
         (uVar16 >> 0x20) * (ulonglong)_DAT_182356f60 << 0x20) +
       (ulonglong)uVar12 * (ulonglong)_DAT_182356f40 +
       ((ulonglong)_DAT_182356f50 * (ulonglong)uVar12 + (uVar15 >> 0x20) * (ulonglong)_DAT_182356f40
       << 0x20) +
       (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_182356f30 +
       ((ulonglong)uVar14 * (ulonglong)_DAT_182356f30 +
        (ulonglong)_DAT_182356f20 * (unaff_RDI & 0xffffffff) << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_182356f30 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_182356f30 +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_182356f20 << 0x20));
  _DAT_18337c070 = _DAT_18337c080 ^ uVar4;
  _DAT_18337c020 = (_DAT_18337c020 ^ uVar4) + _DAT_18337c080 ^ 0xb6b6821fbae8e84d;
  _DAT_18337bfc8 = (_DAT_18337bfc8 * -0x33b702c1a2be0335 ^ _DAT_18337c020) + uVar4;
  _DAT_18337bf08 = _DAT_18337bfc8 ^ _DAT_18337c020;
  puVar5 = unaff_RBP + -6;
  FUN_18414b520(puVar5);
  if (0xf < (ulonglong)unaff_RBP[-3]) {
    puVar5 = (undefined8 *)unaff_RBP[-6];
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,unaff_RBP[3],puVar5);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva db9dae2 (image 18db9dae2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db9dae2(longlong param_1)

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



// ===== continuation @ rva db9ae11 (image 18db9ae11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db9ae11(void)

{
  longlong unaff_RBP;
  longlong *unaff_R13;
  int iVar1;
  
  *(undefined2 *)(unaff_RBP + 0x2e) = *(undefined2 *)(unaff_RBP + 0x70);
  (**(code **)(*unaff_R13 + 0x688))();
  iVar1 = *(int *)(unaff_RBP + 0x90) + 1;
  *(int *)(unaff_RBP + 0x60) = iVar1;
  *(int *)(unaff_RBP + 0x68) = *(int *)(unaff_RBP + 0x44);
  switch(iVar1 < *(int *)(unaff_RBP + 0x44)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db9d765 (image 18db9d765) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db9d765(void)

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



// ===== continuation @ rva db92fce (image 18db92fce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db92fce(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  uint uVar2;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  undefined4 unaff_R15D;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(unaff_RBP + 0x90) = unaff_R15D;
  *(undefined4 *)(unaff_RBP + 0x44) = unaff_EDI;
  lVar1 = (**(code **)(*unaff_R13 + 0x6f0))();
  *(int *)(unaff_RBP + 0x68) = (int)*(char *)(lVar1 + *(int *)(unaff_RBP + 0x70));
  (**(code **)(*unaff_R13 + 0x6f8))();
  uVar2 = *(uint *)(unaff_RBP + 0x68) & *(uint *)(unaff_RBP + 0x60);
  *(uint *)(unaff_RBP + 0x60) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(int *)(unaff_RBP + 0x50) = (int)*(undefined8 *)(unaff_RBP + 0x60);
  _DAT_18337c060 = func_0x00018dbb1260(_DAT_18337c048 ^ 0xfff70039b7ff75cf);
  _DAT_18337bff8 =
       (_DAT_18337bff8 ^ _DAT_18337c060 ^ 0x72d6a076aa7cd38c) + 0x5da828fd ^ 0xa713b8b3aa872e3b;
  _DAT_18337bf68 =
       (_DAT_18337bf68 * -0x40e8869c9a0e4db3 ^ _DAT_18337bff8) +
       (_DAT_18337c060 ^ 0x72d6a076aa7cd38c);
  _DAT_18337c0c0 = _DAT_18337bf68 ^ _DAT_18337bff8;
  _DAT_18337bfc0 = 0x5da828fd;
  uVar3 = (_DAT_18337c0f8 ^ _DAT_182356450) + _DAT_18337bf30 + 0x84222325;
  uVar4 = (_DAT_18337bf30 ^ _UNK_182356458) + _DAT_18337c0f8 + 0x7a60bd00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18337c0f8 ^ _DAT_182356450;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18337bf30 ^ _UNK_182356458;
  _DAT_18337c0e8 =
       func_0x00018dbb1260((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18337c0f8 + 0x7a60bd00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18337bf30 + 0x84222325));
  _DAT_18337c000 =
       (_DAT_18337c000 ^ _DAT_18337c0e8 * -0x6858555d313d3915) - 0x7a60bd00 ^ 0xcd9f4d035aa5b35c;
  _DAT_18337c080 =
       (_DAT_18337c080 * 0x317c66ecba573291 ^ _DAT_18337c000) + _DAT_18337c0e8 * -0x6858555d313d3915
  ;
  _DAT_18337c030 = _DAT_18337c080 ^ _DAT_18337c000;
  _DAT_18337bf10 = 0x859f4300;
  _DAT_18337bfc0 = func_0x00018dbb1260(0xff8dff560f9f0286);
  _DAT_18337bf28 = (_DAT_18337bf28 ^ _DAT_18337bfc0 ^ 0xbf) + 0x7a60bdbf ^ 0x4b7c8a7ee077ba81;
  _DAT_18337c058 = (_DAT_18337c058 * -0x6d79cc27fe8ec4f9 ^ _DAT_18337bf28) + (_DAT_18337bfc0 ^ 0xbf)
  ;
  _DAT_18337bf48 = _DAT_18337c058 ^ _DAT_18337bf28;
  _DAT_18337bfc8 = 0x7a60bdbf;
  _DAT_18337c088 = func_0x00018dbb1260(_DAT_18337bf70 + 0xff9a00377500d2ff ^ 0xfd);
  uVar3 = (_DAT_18337c088 ^ 0x5ff759da) & 0x7ffffffff;
  _DAT_18337bfb0 = (_DAT_18337bfb0 ^ uVar3) - 0x5ff759da ^ 0x1d829a364054b6e2;
  _DAT_18337bf20 = (_DAT_18337bf20 * -0x417e8ef48aa8152d ^ _DAT_18337bfb0) + uVar3;
  _DAT_18337c090 = _DAT_18337bf20 ^ _DAT_18337bfb0;
  _DAT_18337c028 = 0xa008a626;
  _DAT_18337bf00 = func_0x00018dbb1260(_DAT_18337bfb0 + 0x3600554000b2ff ^ 0x60);
  uVar3 = _DAT_18337bf00 ^ 0x47998c09a6;
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
  _DAT_18337bfd0 = _DAT_18337c040 ^ uVar3 ^ 0x5ff75a99;
  _DAT_18337c0b8 = (_DAT_18337c0b8 ^ uVar3) + 0x5ff75a99 ^ 0x2dcf17319721dbe4;
  _DAT_18337bfd8 = (_DAT_18337bfd8 * -0x3f89fb9e743cc1d9 ^ _DAT_18337c0b8) + uVar3;
  _DAT_18337c0f8 = _DAT_18337bfd8 ^ _DAT_18337c0b8;
  _DAT_18337bf68 = 0x5ff75a99;
  uVar3 = (_DAT_18337c0c0 ^ _DAT_182356460) + 0xe4197dbe;
  uVar4 = (_UNK_182356468 ^ 0x5ff75a99) + _DAT_18337c0c0 + 0x60dc4300;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18337c0c0 ^ _DAT_182356460;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _UNK_182356468 ^ 0x5ff75a99;
  _DAT_18337c028 =
       func_0x00018dbb1260((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18337c0c0 + 0x60dc4300) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - 0xe4197dbe);
  _DAT_18337bf80 =
       (_DAT_18337bf80 ^ _DAT_18337c028 & 0x7fffffffff80000) - 0x60dc4300 ^ 0x1f6f717653fcfc04;
  _DAT_18337bff8 =
       (_DAT_18337bff8 * 0x6d364458b7be4cf3 ^ _DAT_18337bf80) + (_DAT_18337c028 & 0x7fffffffff80000)
  ;
  _DAT_18337c0a0 = _DAT_18337bff8 ^ _DAT_18337bf80;
  _DAT_18337c0e8 = 0x9f23bd00;
  uVar3 = (_DAT_18337c0f8 ^ _DAT_182356470) + _DAT_18337bf30 + 0x8422239a;
  uVar4 = (_DAT_18337bf30 ^ _UNK_182356478) + _DAT_18337c0f8 + 0x60dc4300;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18337c0f8 ^ _DAT_182356470;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18337bf30 ^ _UNK_182356478;
  _DAT_18337bf60 =
       func_0x00018dbb1260((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18337c0f8 + 0x60dc4300) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18337bf30 + 0x8422239a));
  uVar3 = _DAT_18337bf60 & 0x7ffffffffff ^ 0xbf;
  _DAT_18337bf70 = _DAT_18337c018 ^ uVar3 ^ 0x60dc43bf;
  _DAT_18337c088 = (_DAT_18337c088 ^ uVar3) + 0x60dc43bf ^ 0x7ac0d901faa0a117;
  _DAT_18337c0a0 = (_DAT_18337c0a0 * -0x16b3b62d8122382d ^ _DAT_18337c088) + uVar3;
  _DAT_18337c008 = _DAT_18337c0a0 ^ _DAT_18337c088;
  _DAT_18337c060 = 0x60dc43bf;
  _DAT_18337c0a8 = func_0x00018dbb1260(_DAT_18337c098 ^ 0xffb500056a00ca78);
  uVar3 = _DAT_18337c0a8 << 0x35 | _DAT_18337c0a8 >> 0xb;
  _DAT_18337c060 = _DAT_18337bf08 ^ uVar3 ^ 0x1000000bf;
  _DAT_18337bf68 = (_DAT_18337bf68 ^ uVar3) + 0x1000000bf ^ 0xebdd45699c7a4d92;
  _DAT_18337bf18 = (_DAT_18337bf18 * 0x6a2bc6586113af4f ^ _DAT_18337bf68) + uVar3;
  _DAT_18337c010 = _DAT_18337bf18 ^ _DAT_18337bf68;
  _DAT_18337c0e0 = 0xbf;
  uVar3 = (~_DAT_18337bf40 + 0x5da828fe) *
          ((_DAT_18337c078 ^ 0x73cdfbdf) + (ulonglong)((uint)_DAT_18337c078 & 0x73cdfbdf) * 2);
  uVar3 = (uVar3 | _DAT_18337bf28) + (uVar3 & _DAT_18337bf28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18337bfd8 = func_0x00018dbb1260((uVar3 | 0x2e65d322) + (ulonglong)((uint)uVar3 & 0x2e65d322))
  ;
  uVar3 = _DAT_18337bfd8 - (_DAT_18337bfd8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_18337bfd8;
  _DAT_18337bf58 = _DAT_18337c080 ^ uVar3 ^ 0x1559801f7;
  _DAT_18337c0d8 = (_DAT_18337c0d8 ^ uVar3) + 0x1559801f7 ^ 0x6761e68ff219de3e;
  _DAT_18337c080 = (_DAT_18337c080 * 0x5ec828da2a2ad96d ^ _DAT_18337c0d8) + uVar3;
  _DAT_18337c0f0 = _DAT_18337c080 ^ _DAT_18337c0d8;
  _DAT_18337c0d0 = 0x559801f7;
  _DAT_18337bf00 = func_0x00018dbb1260(_DAT_18337c048 ^ 0x30ffee1dff9ca6);
  uVar3 = (ulonglong)(~(uint)_DAT_18337bf00 & 0xf7efd8fa);
  _DAT_18337c0c0 = (_DAT_18337c0c0 ^ uVar3) + 0xaa47f007 ^ 0x4bdf8aed97d06259;
  _DAT_18337bff8 = (_DAT_18337bff8 * 0x1fce4b299d6a5c29 ^ _DAT_18337c0c0) + uVar3;
  _DAT_18337bf20 = _DAT_18337bff8 ^ _DAT_18337c0c0;
  _DAT_18337c088 = 0xaa47f007;
  uVar3 = (~_DAT_18337c038 + 0x5da828fe) *
          ((_DAT_18337c0e0 ^ 0x73cdfbdf) + (ulonglong)((uint)_DAT_18337c0e0 & 0x73cdfbdf) * 2);
  uVar3 = (uVar3 | _DAT_18337bfc0) + (uVar3 & _DAT_18337bfc0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18337bf18 = func_0x00018dbb1260((uVar3 | 0x2e65d322) + (ulonglong)((uint)uVar3 & 0x2e65d322))
  ;
  uVar3 = _DAT_18337bf18 << 0x14 | _DAT_18337bf18 >> 0x2c;
  _DAT_18337c058 = (_DAT_18337c058 ^ uVar3) + 0x55a808f8 ^ 0x88e505a80ffc6256;
  _DAT_18337bf90 = (_DAT_18337bf90 * 0x50de03da349cd989 ^ _DAT_18337c058) + uVar3;
  _DAT_18337c0f8 = _DAT_18337bf90 ^ _DAT_18337c058;
  _DAT_18337c070 = 0x55a808f8;
  uVar3 = (~_DAT_18337c090 + 0xab5011f1) *
          ((_DAT_18337c0a8 ^ 0x2e65d322) + (ulonglong)((uint)_DAT_18337c0a8 & 0x2e65d322) * 2);
  uVar3 = (uVar3 | _DAT_18337c0e0) + (uVar3 & _DAT_18337c0e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18337c0a0 = func_0x00018dbb1260((uVar3 | 0x8535c2d2) + (ulonglong)((uint)uVar3 & 0x8535c2d2))
  ;
  uVar3 = (_DAT_18337c0a0 ^ 0xab57f1f7) * 0x1bd933f85d7f9b79;
  _DAT_18337c088 = _DAT_18337bf00 ^ uVar3 ^ 0x1559801f7;
  _DAT_18337c000 = (_DAT_18337c000 ^ uVar3) + 0x1559801f7 ^ 0x650bdcb871227d18;
  _DAT_18337bf30 = (_DAT_18337bf30 * -0x3deceb8dc79788eb ^ _DAT_18337c000) + uVar3;
  _DAT_18337c038 = _DAT_18337bf30 ^ _DAT_18337c000;
  _DAT_18337bf98 = 0x559801f7;
  uVar3 = (_DAT_18337c078 ^ 0x8422239a) + _DAT_18337bfc8 + 0x8422239a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18337c078 ^ 0x8422239a;
  uVar4 = ((_DAT_18337bfc8 + _DAT_18337c078) * 0x2000 | _DAT_18337bfc8 + _DAT_18337c078 >> 0x33) ^
          _DAT_18337bfc8;
  _DAT_18337c078 =
       func_0x00018dbb1260((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_18337c078 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18337bfc8 + 0x8422239a));
  uVar3 = _DAT_18337c078 * 0x5a36b8a63edfc63f & 0x7fffffffffff;
  _DAT_18337c0a0 = _DAT_18337c0e8 ^ uVar3 ^ 0xbf;
  _DAT_18337c070 = (_DAT_18337c070 ^ uVar3) + 0xbf ^ 0x987e74468c3161e9;
  _DAT_18337bf50 = (_DAT_18337bf50 * 0x3298cf14bce95917 ^ _DAT_18337c070) + uVar3;
  _DAT_18337bfe0 = _DAT_18337bf50 ^ _DAT_18337c070;
  _DAT_18337bf68 = 0xbf;
  uVar3 = (~_DAT_18337bf50 + 0x100000000) *
          ((_DAT_18337bf10 ^ 0x73cdfbdf) + (ulonglong)((uint)_DAT_18337bf10 & 0x73cdfbdf) * 2);
  uVar3 = (uVar3 | _DAT_18337bff8) + (uVar3 & _DAT_18337bff8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18337bfc8 = func_0x00018dbb1260((uVar3 | 0x8c320420) + (ulonglong)((uint)uVar3 & 0x8c320420))
  ;
  uVar3 = _DAT_18337bfc8 - (_DAT_18337bfc8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_18337bfc8;
  _DAT_18337c0e0 = (_DAT_18337c0e0 ^ uVar3) + 0x8102705 ^ 0x53bd885062a092c7;
  _DAT_18337c088 = (_DAT_18337c0c8 * 0x6256de44dddfe87f ^ _DAT_18337c0e0) + uVar3 ^ _DAT_18337c0e0;
  _DAT_18337bfe0 = _DAT_18337bf70 ^ 0x8102705;
  _DAT_18337c0c8 = 0x8102705;
  uVar3 = (~_DAT_18337bf20 + 0x8102706) *
          ((_DAT_18337bf20 ^ 0x73cdfbdf) + (ulonglong)((uint)_DAT_18337bf20 & 0x73cdfbdf) * 2);
  uVar3 = (uVar3 | _DAT_18337bf60) + (uVar3 & _DAT_18337bf60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18337bf00 = func_0x00018dbb1260((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda))
  ;
  uVar3 = ((_DAT_18337bf00 ^ 0x7cf238fc15d52e2) << 0x1f |
          (_DAT_18337bf00 ^ 0x7cf238fc15d52e2) >> 0x21) ^ 0xf7efd8fa;
  _DAT_18337c088 = _DAT_18337c088 ^ uVar3 ^ 0xaa5b84579c765281;
  _DAT_18337c080 = (_DAT_18337c080 * -0x8d779f48a4a0da5 ^ _DAT_18337c088) + uVar3;
  _DAT_18337bf10 = _DAT_18337c080 ^ _DAT_18337c088;
  _DAT_18337c0a0 = 0;
  _DAT_18337bfa8 = func_0x00018dbb1260(_DAT_18337bfc0 + 0xffdcff83dd0021ff ^ 0xd5);
  _DAT_18337c008 = _DAT_18337c008 ^ _DAT_18337bfa8 ^ 0xf7ef18d0 ^ 0xa7feb25aa721b9ad;
  _DAT_18337c050 =
       (_DAT_18337c050 * 0x23154ee5aab44c7 ^ _DAT_18337c008) + (_DAT_18337bfa8 ^ 0xf7ef18d0);
  _DAT_18337c0c0 = _DAT_18337c050 ^ _DAT_18337c008;
  _DAT_18337bf98 = 0;
  uVar3 = (_DAT_18337bfe0 ^ 0x8422239a) + _DAT_18337c0a0 + 0x8422239a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18337bfe0 ^ 0x8422239a;
  uVar4 = ((_DAT_18337c0a0 + _DAT_18337bfe0) * 0x2000 | _DAT_18337c0a0 + _DAT_18337bfe0 >> 0x33) ^
          _DAT_18337c0a0;
  _DAT_18337bfe8 =
       func_0x00018dbb1260((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_18337bfe0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18337c0a0 + 0x8422239a));
  uVar3 = (ulonglong)(~(uint)_DAT_18337bfe8 & 0xbf);
  _DAT_18337bf08 = _DAT_18337bfe8 ^ uVar3 ^ 0xbf;
  _DAT_18337bf88 = (_DAT_18337bf88 ^ uVar3) + 0xbf ^ 0xd448a950eb5cc2e6;
  _DAT_18337bf30 = (_DAT_18337bf30 * -0x1b6cb439af2df6e9 ^ _DAT_18337bf88) + uVar3;
  _DAT_18337c090 = _DAT_18337bf30 ^ _DAT_18337bf88;
  _DAT_18337c058 = 0xbf;
  switch(0xbf < (int)uVar2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db9d695 (image 18db9d695) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db9d695(void)

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



// ===== continuation @ rva db9d98e (image 18db9d98e) =====

void FUN_18db9d98e(void)

{
  return;
}



// ===== continuation @ rva db8891d (image 18db8891d) =====

undefined8 FUN_18db8891d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva dbb787a (image 18dbb787a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb787a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18235cab8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva dbb7886 (image 18dbb7886) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb7886(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva dbb78ad (image 18dbb78ad) =====

undefined4 * FUN_18dbb78ad(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva dbb78ac (image 18dbb78ac) =====

void FUN_18dbb78ac(void)

{
  return;
}



// ===== continuation @ rva dbb78a3 (image 18dbb78a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb78a3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_18235caa8)();
  return;
}



// ===== continuation @ rva dbb7963 (image 18dbb7963) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb7963(void)

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



// ===== continuation @ rva dbb790f (image 18dbb790f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb790f(void)

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



// ===== continuation @ rva dbb8693 (image 18dbb8693) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb8693(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18235cb18)();
  return;
}



// ===== continuation @ rva dbb7cc8 (image 18dbb7cc8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb7cc8(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbb7c8d (image 18dbb7c8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb7c8d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  FUN_190dd72e0();
  (*_DAT_18235cae8)();
  return;
}



// ===== continuation @ rva dbb7c2b (image 18dbb7c2b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb7c2b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18235cb98)();
  return;
}



// ===== continuation @ rva dbb86d6 (image 18dbb86d6) =====

void FUN_18dbb86d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbb3538 (image 18dbb3538) =====

void FUN_18dbb3538(void)

{
  return;
}



// ===== continuation @ rva dbb337a (image 18dbb337a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb337a(void)

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



// ===== continuation @ rva dbb3490 (image 18dbb3490) =====

undefined8 FUN_18dbb3490(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva dbb4196 (image 18dbb4196) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dbb3961(void)

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



// ===== continuation @ rva dbb3f9d (image 18dbb3f9d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb3f9d(void)

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



// ===== continuation @ rva dbb67ec (image 18dbb67ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb67ec(void)

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



// ===== continuation @ rva dbb5919 (image 18dbb5919) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb5919(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbb57a4 (image 18dbb57a4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb57a4(void)

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



// ===== continuation @ rva dbb37fc (image 18dbb37fc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dbb3961(void)

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



// ===== continuation @ rva dbb61cc (image 18dbb61cc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb61cc(void)

{
  int iVar1;
  int unaff_ESI;
  longlong *unaff_R13;
  int iStack0000000000000038;
  ulonglong uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  longlong in_stack_00000078;
  
  uStack0000000000000050 = 8;
  uStack0000000000000048 = 0x38;
  uStack0000000000000040 =
       (ulonglong)
       (uint)(int)(char)((ulonglong)(in_stack_00000078 << ((char)unaff_ESI * '\b' & 0x3fU)) >> 0x38)
  ;
  iStack0000000000000038 = unaff_ESI;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(iStack0000000000000038 < 0 || iVar1 <= iStack0000000000000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbb801a (image 18dbb801a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb801a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbb86b7 (image 18dbb86b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb86b7(void)

{
  (*_DAT_18235cdf8)();
  return;
}



// ===== continuation @ rva dbb8249 (image 18dbb8249) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb8249(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbb7ed8 (image 18dbb7ed8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb7ed8(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbb86c8 (image 18dbb86c8) =====

void FUN_18dbb86c8(void)

{
  return;
}



// ===== continuation @ rva dbb7a4d (image 18dbb7a4d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb7a4d(void)

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



// ===== continuation @ rva dbbb11d (image 18dbbb11d) =====

void FUN_18dbbb11d(void)

{
  return;
}



// ===== continuation @ rva dbb8840 (image 18dbb8840) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb8840(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18235dcc8)();
  return;
}



// ===== continuation @ rva dbb88bd (image 18dbb88bd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb88bd(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbbb0c2 (image 18dbbb0c2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbbb0c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18235d948)();
  return;
}



// ===== continuation @ rva dbb995d (image 18dbb995d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb995d(void)

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



// ===== continuation @ rva dbb98f7 (image 18dbb98f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb98f7(void)

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



// ===== continuation @ rva dbbb0b7 (image 18dbbb0b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbbb0b7(void)

{
  (*_DAT_18235de98)();
  return;
}



// ===== continuation @ rva dbbad58 (image 18dbbad58) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbbad58(void)

{
  (*_DAT_18235de98)();
  return;
}



// ===== continuation @ rva dbbb13c (image 18dbbb13c) =====

void FUN_18dbbb13c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbb9a68 (image 18dbb9a68) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb9a68(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbb9c0e (image 18dbb9c0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbb9c0e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbbdb94 (image 18dbbdb94) =====

void FUN_18dbbdb94(void)

{
  return;
}



// ===== continuation @ rva dbbd9f5 (image 18dbbd9f5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbbd9f5(void)

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



// ===== continuation @ rva dbc6925 (image 18dbc6925) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbc6925(void)

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



// ===== continuation @ rva dbc0e35 (image 18dbc0e35) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dbc26b4(void)

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



// ===== continuation @ rva dbbde3a (image 18dbbde3a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbbde3a(void)

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



// ===== continuation @ rva dbc1f6d (image 18dbc1f6d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dbc26b4(void)

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



// ===== continuation @ rva dbc1c6a (image 18dbc1c6a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbc1c6a(void)

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



// ===== continuation @ rva dbc661b (image 18dbc661b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbc661b(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbc65d5 (image 18dbc65d5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbc65d5(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
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



// ===== continuation @ rva dbbe6a7 (image 18dbbe6a7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbbe6a7(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000086;
  
  uStack0000000000000086 = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbbe652 (image 18dbbe652) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbbe652(void)

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



// ===== continuation @ rva dbc6cb2 (image 18dbc6cb2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbc6cb2(void)

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



// ===== continuation @ rva dbc6c5e (image 18dbc6c5e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbc6c5e(void)

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



// ===== continuation @ rva dbc7b25 (image 18dbc7b25) =====

void FUN_18dbc7b25(void)

{
  return;
}



// ===== continuation @ rva dbc7806 (image 18dbc7806) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbc7806(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182360268)();
  return;
}



// ===== continuation @ rva dbc7af1 (image 18dbc7af1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbc7af1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823604e8)();
  return;
}



// ===== continuation @ rva dbc7976 (image 18dbc7976) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbc7976(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbc7ad6 (image 18dbc7ad6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbc7ad6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823604c8)();
  return;
}



// ===== continuation @ rva dbc7b34 (image 18dbc7b34) =====

void FUN_18dbc7b34(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbc725b (image 18dbc725b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbc725b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbc7060 (image 18dbc7060) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbc7060(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_1823600e8)();
  return;
}



// ===== continuation @ rva dbc79c1 (image 18dbc79c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbc79c1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbc7478 (image 18dbc7478) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbc7478(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db6cb36 (image 18db6cb36) =====

void FUN_18db6cb36(void)

{
  return;
}



// ===== continuation @ rva db6ab9c (image 18db6ab9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6ab9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182352298)();
  return;
}



// ===== continuation @ rva db6d6da (image 18db6d6da) =====

void FUN_18db6d6da(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva db6d405 (image 18db6d405) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db6d405(void)

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



// ===== continuation @ rva db6bf83 (image 18db6bf83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6bf83(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000b4;
  undefined2 uStack00000000000000b8;
  undefined4 uStack00000000000000ec;
  
  uStack00000000000000ec = 0xd8eb300c;
  uVar1 = rdtsc();
  uStack00000000000000b4 = 0x3a0020;
  uStack00000000000000b8 = 0x20;
  (*_DAT_182351ed8)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



// ===== continuation @ rva db6d674 (image 18db6d674) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6d674(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182351f78)();
  return;
}



// ===== continuation @ rva db6d39f (image 18db6d39f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db6d39f(void)

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



// ===== continuation @ rva db6ce11 (image 18db6ce11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6ce11(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823526e8)();
  return;
}



// ===== continuation @ rva db6cbf9 (image 18db6cbf9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18db6cbf9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182352908)();
  return;
}



// ===== continuation @ rva db6cf02 (image 18db6cf02) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db6cf02(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva db6c011 (image 18db6c011) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db6c011(void)

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



// ===== continuation @ rva db6ac60 (image 18db6ac60) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18db6ac60(void)

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



