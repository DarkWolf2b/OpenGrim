// ===== continuation @ rva 106de5ca (image 1906de5ca) =====

void FUN_1906de5ca(void)

{
  return;
}



// ===== continuation @ rva 106c590b (image 1906c590b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001906c5961 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1906c590b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 106ddb5a (image 1906ddb5a) =====

void thunk_FUN_1906c7e99(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 106c775d (image 1906c775d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c775d(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x580))();
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



// ===== continuation @ rva 106c8279 (image 1906c8279) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c8279(void)

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



// ===== continuation @ rva 106cf1c9 (image 1906cf1c9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906cf1c9(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  uint unaff_R15D;
  uint uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 unaff_XMM9_Qb;
  ulonglong in_stack_00000050;
  ulonglong in_stack_00000058;
  undefined8 uStack0000000000000060;
  uint uStack00000000000000a4;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c8;
  
  uStack0000000000000060 = 0xff;
  uStack00000000000000a4 = unaff_R15D;
  uStack00000000000000bc = param_2;
  uStack00000000000000c8 = param_1;
  _DAT_1834726a0 = func_0x0001906de7b0(_DAT_183472368 + 0x3a001b42003effU ^ 0x79);
  _DAT_183472560 =
       (_DAT_183472560 ^ _DAT_1834726a0 ^ 0x25f5b4ceb77bb0ca) + 0xe161ed67 ^ 0xa022d0761aa02fec;
  _DAT_183472660 =
       (_DAT_183472660 * -0xca364fdce97f777 ^ _DAT_183472560) +
       (_DAT_1834726a0 ^ 0x25f5b4ceb77bb0ca);
  _DAT_183472630 = _DAT_183472660 ^ _DAT_183472560;
  _DAT_183472528 = 0xe161ed67;
  uVar7 = (_DAT_182d211f0 ^ 0xe161ed67) + _DAT_1834723a8 + 0x76039ca6;
  uVar8 = (_DAT_1834723a8 ^ _UNK_182d211f8) + 0xef402ee3;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_182d211f0 ^ 0xe161ed67;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1834723a8 ^ _UNK_182d211f8;
  _DAT_1834724a0 =
       func_0x0001906de7b0((uVar8 << 0x1d | uVar8 >> 0x23) - 0xef402ee3 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1834723a8 + 0x76039ca6));
  uVar7 = _DAT_1834724a0 - (_DAT_1834724a0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1834724a0;
  _DAT_1834728f8 = _DAT_1834726a8 ^ uVar7 ^ 0x1000000ff;
  _DAT_183472498 = (_DAT_183472498 ^ uVar7) + 0x1000000ff ^ 0x6d11c144c2bb9a19;
  _DAT_183472388 = (_DAT_183472388 * -0x589c61068903666d ^ _DAT_183472498) + uVar7;
  _DAT_1834727d0 = _DAT_183472388 ^ _DAT_183472498;
  _DAT_183472520 = 0xff;
  _DAT_183472680 = func_0x0001906de7b0(_DAT_183472588 + 0x84000827009cffU ^ 0x15);
  _DAT_1834726c0 = (_DAT_1834726c0 ^ _DAT_183472680) - 0x8dc1dfcc ^ 0x410d545c37e3d928;
  _DAT_183472808 = (_DAT_183472808 * 0x44f059ea1de2dc47 ^ _DAT_1834726c0) + _DAT_183472680;
  _DAT_183472718 = _DAT_183472808 ^ _DAT_1834726c0;
  _DAT_183472640 = 0x723e2034;
  _DAT_1834724a8 = func_0x0001906de7b0(_DAT_183472520 ^ 0x680099bf000785);
  _DAT_1834724b8 = (_DAT_1834724b8 ^ _DAT_1834724a8) - 0x2e1abb64 ^ 0x2f424b2c5cf87350;
  _DAT_183472858 = (_DAT_183472858 * 0x4fedd3788f6e95df ^ _DAT_1834724b8) + _DAT_1834724a8;
  _DAT_183472888 = _DAT_183472858 ^ _DAT_1834724b8;
  _DAT_183472448 = 0xd1e5449c;
  _DAT_183472830 = func_0x0001906de7b0(_DAT_1834725e8 ^ 0xffb0ff738b009322);
  uVar7 = _DAT_183472830 ^ 0xdbe0d87fc0afe22e;
  _DAT_183472668 = _DAT_183472840 ^ uVar7 ^ 0x1db216d36;
  _DAT_183472460 = (_DAT_183472460 ^ uVar7) + 0x1db216d36 ^ 0x892e00355a357810;
  _DAT_1834724b0 = (_DAT_1834724b0 * 0x355cda0d8eda9811 ^ _DAT_183472460) + uVar7;
  _DAT_1834726b0 = _DAT_1834724b0 ^ _DAT_183472460;
  _DAT_1834726e8 = 0xdb216d36;
  _DAT_1834728f0 = func_0x0001906de7b0(_DAT_183472410 ^ 0xffaeff7372ff0b58);
  uVar7 = _DAT_1834728f0 >> 1 | _DAT_1834728f0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_1834728f0;
  _DAT_183472810 = (_DAT_183472810 ^ uVar7) + 0x18de92a8 ^ 0xe391728ed71d8e;
  _DAT_183472610 = (_DAT_183472610 * 0x5d63efb5d13e9b37 ^ _DAT_183472810) + uVar7;
  _DAT_1834725b0 = _DAT_183472610 ^ _DAT_183472810;
  _DAT_183472598 = 0x18de92a8;
  uVar7 = ((_DAT_1834726a0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1834726a0 & 0x842223da) * 2) *
          -_DAT_183472400;
  uVar7 = (uVar7 | _DAT_183472528) + (uVar7 & _DAT_183472528);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1834726b0 = func_0x0001906de7b0((uVar7 | 0x842223da) + (ulonglong)((uint)uVar7 & 0x842223da))
  ;
  uVar7 = _DAT_1834726b0 & 0xffffffe0000;
  _DAT_183472790 = _DAT_183472488 ^ uVar7 ^ 0xff;
  _DAT_183472310 = (_DAT_183472310 ^ uVar7) + 0xff ^ 0x3a5a560314039a0;
  _DAT_183472410 = (_DAT_183472410 * -0x9d2a604bec4f467 ^ _DAT_183472310) + uVar7;
  _DAT_183472458 = _DAT_183472410 ^ _DAT_183472310;
  _DAT_183472770 = 0xff;
  _DAT_183472748 = func_0x0001906de7b0(_DAT_183472668 + 0x9cff8214ff9dff ^ 7);
  uVar7 = (_DAT_183472748 ^ 0xf9bf7fcf) * 0x737d158157bec56b;
  _DAT_183472738 = (_DAT_183472738 ^ uVar7) + 0x6408030 ^ 0x101ebb7559610b8e;
  _DAT_183472580 = (_DAT_183472580 * 0x6ece77be434da825 ^ _DAT_183472738) + uVar7;
  _DAT_183472708 = _DAT_183472580 ^ _DAT_183472738;
  _DAT_183472420 = 0x6408030;
  uVar7 = (_DAT_183472638 ^ 0x842223da) + _DAT_183472370 + 0x842223da;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183472638 ^ 0x842223da;
  uVar8 = ((_DAT_183472370 + _DAT_183472638) * 0x2000 | _DAT_183472370 + _DAT_183472638 >> 0x33) ^
          _DAT_183472370;
  _DAT_183472868 =
       func_0x0001906de7b0((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_183472638 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183472370 + 0x842223da));
  auVar5 = _DAT_1800170c0;
  _DAT_183472730 = _DAT_183472788 ^ _DAT_183472868 ^ 0xff;
  _DAT_183472580 = (_DAT_183472580 ^ _DAT_183472868) + 0xff ^ 0xb9d7c23bf311bbaf;
  _DAT_1834726f0 = (_DAT_1834726f0 * 0x701c9a2715d18917 ^ _DAT_183472580) + _DAT_183472868;
  _DAT_183472448 = _DAT_1834726f0 ^ _DAT_183472580;
  auVar3._8_8_ = unaff_XMM9_Qb;
  auVar3._0_8_ = in_stack_00000058 & 0xffffffff ^ 0x84222325;
  _DAT_1834723f8 = 0xff;
  auVar4 = pshufb(auVar3 ^ _DAT_182d21200,_DAT_1800170c0);
  uVar8 = auVar4._8_8_ + auVar4._0_8_;
  uVar7 = uVar8 + _DAT_1834723a0;
  if (auVar4._4_4_ < 0) {
    uVar7 = _DAT_1834727a0 ^ uVar8;
  }
  _DAT_1834723b8 = func_0x0001906de7b0(SUB161(auVar3 ^ _DAT_182d21200,5) ^ uVar7);
  uVar7 = (in_stack_00000058 & 0xffffffff ^ _DAT_1834723b8) * -0x5d7bd7ad1006e307;
  in_stack_00000058 = in_stack_00000058 & 0xff;
  _DAT_1834725d8 = (_DAT_1834725d8 ^ uVar7) + in_stack_00000058 ^ 0x661d55e89e74a240;
  _DAT_1834724c8 = (_DAT_1834724c8 * 0xb7bf4d4a2c04587 ^ _DAT_1834725d8) + uVar7;
  _DAT_183472690 = _DAT_1834724c8 ^ _DAT_1834725d8;
  uVar8 = in_stack_00000050 ^ 0x84222325;
  uVar7 = ((_DAT_183472778 ^ uVar8) + (uVar8 & _DAT_183472778) * 2) *
          (in_stack_00000058 - _DAT_183472580);
  uVar7 = (uVar7 | _DAT_183472390) + (uVar7 & _DAT_183472390);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1834727a8 = in_stack_00000058;
  _DAT_1834723f0 =
       func_0x0001906de7b0((uVar8 ^ in_stack_00000058 | uVar7) +
                           (uVar7 & (uVar8 ^ in_stack_00000058)));
  _DAT_183472308 = in_stack_00000050 | in_stack_00000058;
  _DAT_183472800 = (_DAT_183472800 ^ _DAT_1834723f0) + _DAT_183472308 ^ 0x603b83498cb3b38f;
  _DAT_1834724b0 = (_DAT_1834724b0 * 0x1f2c46f1e6a36b81 ^ _DAT_183472800) + _DAT_1834723f0;
  _DAT_183472760 = _DAT_1834724b0 ^ _DAT_183472800;
  auVar4._8_8_ = _UNK_180062bf8;
  auVar4._0_8_ = (ulonglong)uStack00000000000000a4 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_182d21210,auVar5);
  uVar8 = auVar5._8_8_ + auVar5._0_8_;
  uVar7 = uVar8 + _DAT_183472488;
  if (auVar5._4_4_ < 0) {
    uVar7 = _DAT_183472540 ^ uVar8;
  }
  _DAT_1834725e8 = func_0x0001906de7b0(SUB161(auVar4 ^ _DAT_182d21210,5) ^ uVar7);
  uVar9 = uStack00000000000000a4 & _DAT_18001a990;
  uVar6 = uStack00000000000000a4 | _DAT_18001a990;
  uVar2 = uStack00000000000000a4 ^ _DAT_18001a990;
  uVar7 = ((ulonglong)uStack00000000000000a4 | 1) ^ _DAT_1834725e8;
  _DAT_183472418 =
       ((((ulonglong)_DAT_182d21290 * (ulonglong)uVar2 << 0x20) +
         (ulonglong)_DAT_182d21280 * (ulonglong)uVar2 +
         ((ulonglong)_DAT_182d21270 * (ulonglong)uVar6 << 0x20) +
         (ulonglong)_DAT_182d21260 * (ulonglong)uVar6 +
        ((ulonglong)_DAT_182d21250 * (ulonglong)uVar9 << 0x20 |
        (ulonglong)_DAT_182d21240 * (ulonglong)uVar9) +
        ((ulonglong)_DAT_182d21230 * (ulonglong)uStack00000000000000a4 << 0x20) +
        (ulonglong)_DAT_182d21220 * (ulonglong)uStack00000000000000a4) -
       (((ulonglong)uVar2 * (ulonglong)_DAT_182d21330 << 0x20) +
        (ulonglong)_DAT_182d21320 * (ulonglong)uVar2 +
        ((ulonglong)uVar6 * (ulonglong)_DAT_182d21310 << 0x20) +
        (ulonglong)_DAT_182d21300 * (ulonglong)uVar6 +
       ((ulonglong)uVar9 * (ulonglong)_DAT_182d212f0 << 0x20 |
       (ulonglong)_DAT_182d212e0 * (ulonglong)uVar9) +
       ((ulonglong)uStack00000000000000a4 * (ulonglong)_DAT_182d212d0 << 0x20) +
       (ulonglong)_DAT_182d212c0 * (ulonglong)uStack00000000000000a4)) + 0x8000f673b961d8d0;
  _DAT_1834727f0 = _DAT_1834725f0 ^ uVar7 ^ _DAT_183472418;
  _DAT_183472380 = (_DAT_183472380 ^ uVar7) + _DAT_183472418 ^ 0x5a658cd52e78b740;
  _DAT_183472388 = (_DAT_183472388 * -0x3f0e0fdfa0660f45 ^ _DAT_183472380) + uVar7;
  _DAT_183472890 = _DAT_183472388 ^ _DAT_183472380;
  uStack00000000000000a4 = (uint)_DAT_183472418;
  _DAT_183472418 = _DAT_183472418 & 0xffffffff;
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



// ===== continuation @ rva 106c602f (image 1906c602f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001906c6080 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1906c602f(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 106de636 (image 1906de636) =====

void FUN_1906de636(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 106d778c (image 1906d778c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906d778c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000148;
  undefined4 uStack0000000000000150;
  
  uStack0000000000000148 = 0x39003500380038;
  rdtsc();
  uStack0000000000000150 = 0x31002d;
  (**(code **)(*unaff_RSI + 0x518))();
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



// ===== continuation @ rva 106b0986 (image 1906b0986) =====

void FUN_1906b0986(void)

{
  return;
}



// ===== continuation @ rva 1069feda (image 19069feda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19069feda(void)

{
  FUN_190ddce00();
  (*_DAT_182d17ee8)();
  return;
}



// ===== continuation @ rva 106a3694 (image 1906a3694) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906a3694(void)

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



// ===== continuation @ rva 106b0975 (image 1906b0975) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0975(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_182d19808)();
  return;
}



// ===== continuation @ rva 106af845 (image 1906af845) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906af845(void)

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



// ===== continuation @ rva 106ae38d (image 1906ae38d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906ae38d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106a816d (image 1906a816d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906a816d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106a2f0a (image 1906a2f0a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906a2f0a(void)

{
  FUN_190dd72e0();
  (*_DAT_182d14658)();
  return;
}



// ===== continuation @ rva 106ae555 (image 1906ae555) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ae555(void)

{
  undefined8 uVar1;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined2 uStack00000000000000cc;
  undefined8 in_stack_000000f0;
  undefined4 uStack0000000000000148;
  
  uStack0000000000000048 = in_stack_000000f0;
  uStack0000000000000148 = 0x682a2060;
  uVar1 = rdtsc();
  uStack00000000000000cc = 0x30;
  (*_DAT_182d16b68)(in_stack_00000040,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



// ===== continuation @ rva 106a802c (image 1906a802c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906a802c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b5a2b (image 1906b5a2b) =====

void FUN_1906b5a2b(void)

{
  return;
}



// ===== continuation @ rva 106b0eda (image 1906b0eda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0eda(void)

{
  FUN_190ddce00();
  (*_DAT_182d1b110)();
  return;
}



// ===== continuation @ rva 106b5bd3 (image 1906b5bd3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b5bd3(void)

{
  (*_DAT_182d1aef0)();
  return;
}



// ===== continuation @ rva 106b4865 (image 1906b4865) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b4865(void)

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



// ===== continuation @ rva 106b49f9 (image 1906b49f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b49f9(void)

{
  (*_DAT_182d1b1d0)();
  return;
}



// ===== continuation @ rva 106b4891 (image 1906b4891) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b4891(void)

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



// ===== continuation @ rva 106b59c4 (image 1906b59c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b59c4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x228))();
  (*_DAT_182d1b180)();
  return;
}



// ===== continuation @ rva 106b54a8 (image 1906b54a8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b54a8(void)

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



// ===== continuation @ rva 106b43c5 (image 1906b43c5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b43c5(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b4ebb (image 1906b4ebb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b4ebb(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b5615 (image 1906b5615) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b5615(void)

{
  (*_DAT_182d1b2f0)();
  return;
}



// ===== continuation @ rva 106b5bde (image 1906b5bde) =====

void FUN_1906b5bde(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106b4257 (image 1906b4257) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b4257(void)

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



// ===== continuation @ rva 106f2c84 (image 1906f2c84) =====

void FUN_1906f2c84(void)

{
  return;
}



// ===== continuation @ rva 106ee6f9 (image 1906ee6f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ee6f9(void)

{
  FUN_190ddce00();
  (*_DAT_182d29008)();
  return;
}



// ===== continuation @ rva 106f3dab (image 1906f3dab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906f3dab(void)

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



// ===== continuation @ rva 106f3d53 (image 1906f3d53) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906f3d53(void)

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



// ===== continuation @ rva 106f2a32 (image 1906f2a32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906f2a32(void)

{
  (*_DAT_182d28328)();
  return;
}



// ===== continuation @ rva 106f7980 (image 1906f7980) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906f7980(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d29078)();
  return;
}



// ===== continuation @ rva 106f2a06 (image 1906f2a06) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906f2a06(void)

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



// ===== continuation @ rva 106f774a (image 1906f774a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906f774a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d27428)();
  return;
}



// ===== continuation @ rva 106f6260 (image 1906f6260) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906f6260(void)

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



// ===== continuation @ rva 106f66ae (image 1906f66ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906f66ae(void)

{
  FUN_190dd72e0();
  (*_DAT_182d282e8)();
  return;
}



// ===== continuation @ rva 106f3813 (image 1906f3813) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906f3813(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_182d28b48)();
  return;
}



// ===== continuation @ rva 106f79b3 (image 1906f79b3) =====

void FUN_1906f79b3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106f5757 (image 1906f5757) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906f5757(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b5d59 (image 1906b5d59) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b5d59(void)

{
  FUN_190dd72e0();
  (*_DAT_182d1bea8)();
  return;
}



// ===== continuation @ rva 106b5ce6 (image 1906b5ce6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b5ce6(void)

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



// ===== continuation @ rva 106b6144 (image 1906b6144) =====

void FUN_1906b6144(void)

{
  return;
}



// ===== continuation @ rva 106b5da2 (image 1906b5da2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b5da2(void)

{
  FUN_190dd9df0();
  (*_DAT_182d1c018)();
  return;
}



// ===== continuation @ rva 106b601b (image 1906b601b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b601b(void)

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



// ===== continuation @ rva 106b615c (image 1906b615c) =====

void FUN_1906b615c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106b5d81 (image 1906b5d81) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b5d81(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b5ec9 (image 1906b5ec9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b5ec9(void)

{
  FUN_190dd9df0();
  (*_DAT_182d1bee8)();
  return;
}



// ===== continuation @ rva 106b5d44 (image 1906b5d44) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b5d44(void)

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



// ===== continuation @ rva 106b5efc (image 1906b5efc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b5efc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b62b1 (image 1906b62b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b62b1(void)

{
  FUN_190dd72e0();
  (*_DAT_182d1c148)();
  return;
}



// ===== continuation @ rva 106b6238 (image 1906b6238) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b6238(undefined4 param_1)

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



// ===== continuation @ rva 106b64bb (image 1906b64bb) =====

void FUN_1906b64bb(void)

{
  return;
}



// ===== continuation @ rva 106b6484 (image 1906b6484) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b6484(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d1c188)();
  return;
}



// ===== continuation @ rva 106b62fd (image 1906b62fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b62fd(void)

{
  FUN_190dd9df0();
  (*_DAT_182d1c1b8)();
  return;
}



// ===== continuation @ rva 106b639b (image 1906b639b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b639b(void)

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



// ===== continuation @ rva 106b64c8 (image 1906b64c8) =====

void FUN_1906b64c8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106b645d (image 1906b645d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b645d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b6412 (image 1906b6412) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b6412(void)

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



// ===== continuation @ rva 106b6274 (image 1906b6274) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b6274(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d1c138)();
  return;
}



// ===== continuation @ rva 106b642a (image 1906b642a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b642a(void)

{
  FUN_190dd9df0();
  (*_DAT_182d1c0e8)();
  return;
}



// ===== continuation @ rva 106b63b1 (image 1906b63b1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b63b1(undefined4 param_1)

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



// ===== continuation @ rva 106c4b3a (image 1906c4b3a) =====

void FUN_1906c4b3a(void)

{
  return;
}



// ===== continuation @ rva 106c2bac (image 1906c2bac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c2bac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182d1f118)();
  return;
}



// ===== continuation @ rva 106c5501 (image 1906c5501) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c5501(void)

{
  (*_DAT_182d1f6b8)();
  return;
}



// ===== continuation @ rva 106c458a (image 1906c458a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c458a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d1f5b8)();
  return;
}



// ===== continuation @ rva 106c427f (image 1906c427f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c427f(void)

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



// ===== continuation @ rva 106c3dcd (image 1906c3dcd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c3dcd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000ba;
  undefined2 uStack00000000000000be;
  undefined4 uStack00000000000000e0;
  
  uStack00000000000000e0 = 0x3e2f2650;
  uVar1 = rdtsc();
  uStack00000000000000ba = 0x3a0020;
  uStack00000000000000be = 0x20;
  (*_DAT_182d1ede8)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



// ===== continuation @ rva 106c3adb (image 1906c3adb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c3adb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182d1ec38)();
  return;
}



// ===== continuation @ rva 106c4c79 (image 1906c4c79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c4c79(void)

{
  (*_DAT_182d1f6b8)();
  return;
}



// ===== continuation @ rva 106c56de (image 1906c56de) =====

void FUN_1906c56de(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106c44ed (image 1906c44ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c44ed(void)

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



// ===== continuation @ rva 106c33c2 (image 1906c33c2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c33c2(void)

{
  (*_DAT_182d1f6b8)();
  return;
}



// ===== continuation @ rva 5d7596a (image 185d7596a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185d7596a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1806da0e0)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 5d75976 (image 185d75976) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185d75976(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 5d7599d (image 185d7599d) =====

undefined4 * FUN_185d7599d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 5d7599c (image 185d7599c) =====

void FUN_185d7599c(void)

{
  return;
}



// ===== continuation @ rva 5d75993 (image 185d75993) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185d75993(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1806da0d0)();
  return;
}



// ===== continuation @ rva 106b0dba (image 1906b0dba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0dba(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182d1a5b0)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 106b0dc6 (image 1906b0dc6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b0dc6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 106b0ded (image 1906b0ded) =====

undefined4 * FUN_1906b0ded(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 106b0de3 (image 1906b0de3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0de3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_182d1a5d0)();
  return;
}



// ===== continuation @ rva 106b0dec (image 1906b0dec) =====

void FUN_1906b0dec(void)

{
  return;
}



// ===== continuation @ rva 106b0d84 (image 1906b0d84) =====

void FUN_1906b0d84(void)

{
  return;
}



// ===== continuation @ rva 106b0b9b (image 1906b0b9b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0b9b(void)

{
  FUN_190ddce00();
  (*_DAT_182d1a568)();
  return;
}



// ===== continuation @ rva 106b0d5b (image 1906b0d5b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0d5b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d1a508)();
  return;
}



// ===== continuation @ rva 106b0d09 (image 1906b0d09) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0d09(void)

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



// ===== continuation @ rva 106b0cf3 (image 1906b0cf3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b0cf3(void)

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



// ===== continuation @ rva 106b0c53 (image 1906b0c53) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0c53(void)

{
  FUN_190dd72e0();
  (*_DAT_182d1a548)();
  return;
}



// ===== continuation @ rva 106b0c13 (image 1906b0c13) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b0c13(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182d1a528)();
  return;
}



// ===== continuation @ rva 106b0bf2 (image 1906b0bf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b0bf2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b0c32 (image 1906b0c32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906b0c32(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106e5346 (image 1906e5346) =====

void FUN_1906e5346(void)

{
  return;
}



// ===== continuation @ rva 106de913 (image 1906de913) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906de913(void)

{
  FUN_190ddce00();
  (*_DAT_182d21c88)();
  return;
}



// ===== continuation @ rva 106e2ba3 (image 1906e2ba3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e2ba3(void)

{
  undefined4 uStack0000000000000058;
  undefined4 in_stack_00000210;
  
  uStack0000000000000058 = in_stack_00000210;
  (*_DAT_182d219b8)();
  return;
}



// ===== continuation @ rva 106e515e (image 1906e515e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e515e(void)

{
  (*_DAT_182d22958)();
  return;
}



// ===== continuation @ rva 106e5454 (image 1906e5454) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e5454(void)

{
  (*_DAT_182d229b8)();
  return;
}



// ===== continuation @ rva 106de9aa (image 1906de9aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906de9aa(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106e4a04 (image 1906e4a04) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906e4a04(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106de9fb (image 1906de9fb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906de9fb(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  longlong in_RAX;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong unaff_R15;
  uint uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar53;
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  ulonglong uVar55;
  uint uVar56;
  undefined1 auVar57 [16];
  uint uVar58;
  ulonglong uVar59;
  uint uStack0000000000000080;
  ulonglong uStack00000000000000a0;
  undefined4 uStack00000000000000b0;
  uint uStack00000000000000b4;
  ulonglong uStack00000000000000c8;
  ulonglong in_stack_000000d0;
  
  uVar10 = _DAT_182d21818;
  uVar17 = _DAT_182d21810;
  uStack00000000000000c8 = _DAT_182d21810 ^ 0x84222325;
  uVar14 = (0x59ca2970bb7c2125 - in_RAX) *
           ((param_1 ^ uStack00000000000000c8) + (uStack00000000000000c8 & param_1) * 2);
  uVar14 = (uVar14 | _DAT_183472998) + (uVar14 & _DAT_183472998);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_183472948 =
       func_0x0001906e54c0((_DAT_182d21810 ^ 0x59ca29703f5e0200 | uVar14) +
                           (uVar14 & (_DAT_182d21810 ^ 0x59ca29703f5e0200)));
  auVar24 = _DAT_1800170c0;
  uVar14 = (_DAT_183472948 << 0x24 | _DAT_183472948 >> 0x1c) ^ uVar17;
  uVar12 = uVar17 | 0x59ca2970bb7c2125;
  _DAT_183472ac8 = (_DAT_183472ac8 ^ uVar14) + uVar12 ^ 0x3f88d7155bfa12f7;
  _DAT_183472980 = (_DAT_183472980 * -0x602078cf275c269d ^ _DAT_183472ac8) + uVar14;
  auVar22._8_8_ = _UNK_182d229e8;
  auVar22._0_8_ = uVar10 ^ 0x84222325;
  auVar21 = pshufb(auVar22 ^ _DAT_182d229f0,_DAT_1800170c0);
  uVar15 = auVar21._8_8_ + auVar21._0_8_;
  uVar14 = uVar15 + _DAT_183472a48;
  if (auVar21._4_4_ < 0) {
    uVar14 = _DAT_1834729d8 ^ uVar15;
  }
  _DAT_183472908 = uVar12;
  _DAT_183472980 = func_0x0001906e54c0(SUB161(auVar22 ^ _DAT_182d229f0,5) ^ uVar14);
  uVar14 = uVar10 ^ 0x5c3138d35bd199b4;
  _DAT_183472948 = (_DAT_183472948 ^ _DAT_183472980) + uVar14 ^ 0xa05c798620fdab19;
  _DAT_183472af0 = (_DAT_183472af0 * -0xe57c0417fbad33 ^ _DAT_183472948) + _DAT_183472980;
  _DAT_183472a50 = _DAT_183472af0 ^ _DAT_183472948;
  lVar9 = uVar17 * uVar17;
  uVar19 = lVar9 * 0x3c54a1b24f741cb1;
  auVar21._8_8_ = uVar19;
  auVar21._0_8_ = _DAT_18001b640;
  auVar22 = pshufb(auVar21 ^ _DAT_182d22a00,auVar24);
  uVar11 = auVar22._8_8_ + auVar22._0_8_;
  uVar15 = uVar11 + _DAT_183472930;
  if (auVar22._4_4_ < 0) {
    uVar15 = _DAT_183472a18 ^ uVar11;
  }
  _DAT_183472a78 = uVar14;
  _DAT_183472a60 = func_0x0001906e54c0(uVar15 ^ 0x31);
  uVar15 = _DAT_183472a60 >> 3 & 0x1ffffffffffffff;
  uVar11 = lVar9 * -0x3c54a1b24f741cb1;
  _DAT_183472968 = (_DAT_183472968 ^ uVar15) + lVar9 * -0x3c54a1b24f741cb1 ^ 0x11aa1b07824eb505;
  _DAT_1834729f8 = (_DAT_1834729f8 * -0x2f95864eb6a18b4b ^ _DAT_183472968) + uVar15;
  _DAT_183472a80 = _DAT_1834729f8 ^ _DAT_183472968;
  auVar23._8_8_ = uVar19;
  auVar23._0_8_ = _DAT_182d22a10;
  auVar24 = pshufb(auVar23 ^ _DAT_182d22a20,auVar24);
  uVar16 = auVar24._8_8_ + auVar24._0_8_;
  uVar15 = uVar16 + _DAT_183472990;
  if (auVar24._4_4_ < 0) {
    uVar15 = _DAT_183472a70 ^ uVar16;
  }
  _DAT_183472a98 = uVar11;
  _DAT_183472998 = func_0x0001906e54c0(SUB161(auVar23 ^ _DAT_182d22a20,5) ^ uVar15);
  uVar20 = (uint)(uVar19 >> 0x20);
  auVar39._8_4_ = (int)uVar19;
  auVar39._0_8_ = uVar19;
  auVar39._12_4_ = uVar20;
  auVar24._8_4_ = 0xffffffff;
  auVar24._0_8_ = 0xffffffffffffffff;
  auVar24._12_4_ = 0xffffffff;
  uVar38 = SUB164(auVar39 & _DAT_182d22a30,0);
  uVar15 = SUB168(auVar39 & _DAT_182d22a30,0);
  uVar31 = SUB164(auVar39 | _DAT_182d22a30,0);
  uVar18 = SUB168(auVar39 | _DAT_182d22a30,0);
  uVar53 = SUB164(auVar39 ^ auVar24,0);
  uVar16 = SUB168(auVar39 ^ auVar24,0);
  uVar32 = SUB164(_DAT_182d22a30 ^ auVar39,0);
  uVar16 = (ulonglong)_DAT_182d22a70 * (ulonglong)uVar31 +
           ((uVar18 >> 0x20) * (ulonglong)_DAT_182d22a70 +
            (ulonglong)_DAT_182d22a60 * (ulonglong)uVar31 << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_182d22a70 +
           ((uVar15 >> 0x20) * (ulonglong)_DAT_182d22a70 +
            (ulonglong)uVar38 * (ulonglong)_DAT_182d22a60 << 0x20) +
           (ulonglong)_DAT_182d22a40 * (uVar19 & 0xffffffff) +
           ((ulonglong)_DAT_182d22a50 * (uVar19 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d22a40 << 0x20) +
           (ulonglong)_DAT_182d22a80 * (ulonglong)uVar53 +
           ((ulonglong)_DAT_182d22a90 * (ulonglong)uVar53 +
            (uVar16 >> 0x20) * (ulonglong)_DAT_182d22a80 << 0x20) +
           (-((ulonglong)uVar53 * (ulonglong)_DAT_182d22ad0 +
              ((uVar16 >> 0x20) * (ulonglong)_DAT_182d22ad0 +
               (ulonglong)_DAT_182d22ac0 * (ulonglong)uVar53 << 0x20) +
             (ulonglong)uVar32 * (ulonglong)_DAT_182d22af0 +
             ((SUB168(_DAT_182d22a30 ^ auVar39,0) >> 0x20) * (ulonglong)_DAT_182d22af0 +
              (ulonglong)_DAT_182d22ae0 * (ulonglong)uVar32 << 0x20) +
             (ulonglong)uVar38 * (ulonglong)_DAT_182d22af0 +
             ((uVar15 >> 0x20) * (ulonglong)_DAT_182d22af0 +
              (ulonglong)uVar38 * (ulonglong)_DAT_182d22ae0 << 0x20) +
             (uVar19 & 0xffffffff) * (ulonglong)_DAT_182d22ad0 +
             ((ulonglong)uVar20 * (ulonglong)_DAT_182d22ad0 +
              (uVar19 & 0xffffffff) * (ulonglong)_DAT_182d22ac0 << 0x20)) -
           ((ulonglong)uVar31 * (_DAT_182d22b00 & 0xffffffff) +
           ((ulonglong)_DAT_182d22b10 * (ulonglong)uVar31 +
            (uVar18 >> 0x20) * (_DAT_182d22b00 & 0xffffffff) << 0x20))) + _DAT_182d22b20;
  auVar25._8_8_ = uVar11;
  auVar25._0_8_ = uVar16 ^ 0x84222325;
  auVar24 = pshufb(auVar25 ^ _DAT_182d22b30,_DAT_1800170c0);
  uVar15 = unaff_R15 ^ _DAT_183472998;
  _DAT_183472a98 = _DAT_183472a00 ^ uVar15 ^ uVar16;
  _DAT_183472a78 = (_DAT_183472a78 ^ uVar15) + uVar16 ^ 0xd97d01a7e0b5e8b;
  _DAT_183472ab0 = (_DAT_183472ab0 * 0xed983f018401ff9 ^ _DAT_183472a78) + uVar15;
  _DAT_1834729d0 = _DAT_183472ab0 ^ _DAT_183472a78;
  _DAT_183472ac8 = _DAT_183472a88 ^ uVar16;
  uVar19 = auVar24._8_8_ + auVar24._0_8_;
  uVar15 = uVar19 + _DAT_183472ad0;
  if (auVar24._4_4_ < 0) {
    uVar15 = _DAT_183472a38 ^ uVar19;
  }
  _DAT_183472910 = uVar16;
  _DAT_183472950 = func_0x0001906e54c0(SUB161(auVar25 ^ _DAT_182d22b30,5) ^ uVar15);
  uVar38 = (uint)(uVar16 >> 0x20);
  auVar40._8_4_ = (int)uVar16;
  auVar40._0_8_ = uVar16;
  auVar40._12_4_ = uVar38;
  uVar53 = (uint)(uVar11 >> 0x20);
  auVar33._8_4_ = (int)uVar11;
  auVar33._0_8_ = uVar11;
  auVar33._12_4_ = uVar53;
  uVar31 = SUB164(auVar40 & auVar33,0);
  uVar19 = SUB168(auVar40 & auVar33,0);
  uVar32 = SUB164(auVar40 | auVar33,0);
  uVar20 = SUB164(auVar40 ^ auVar33,0);
  uVar15 = SUB168(auVar40 ^ auVar33,0);
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar56 = SUB164(auVar40 ^ auVar1,0);
  uVar16 = (((ulonglong)uVar56 * (_DAT_182d22b80 & 0xffffffff) +
             ((ulonglong)_DAT_182d22bf0 * (ulonglong)uVar56 +
              (SUB168(auVar40 ^ auVar1,0) >> 0x20) * (_DAT_182d22b80 & 0xffffffff) << 0x20) +
            (ulonglong)_DAT_182d22bd0 * (ulonglong)uVar20 +
            ((ulonglong)_DAT_182d22be0 * (ulonglong)uVar20 +
             (uVar15 >> 0x20) * (ulonglong)_DAT_182d22bd0 << 0x20) +
            (ulonglong)uVar32 * (ulonglong)_DAT_182d22bb0 +
            ((ulonglong)_DAT_182d22bc0 * (ulonglong)uVar32 +
             (SUB168(auVar40 | auVar33,0) >> 0x20) * (ulonglong)_DAT_182d22bb0 << 0x20) +
            (ulonglong)_DAT_182d22b90 * (ulonglong)uVar31 +
            ((ulonglong)_DAT_182d22ba0 * (ulonglong)uVar31 +
             (uVar19 >> 0x20) * (ulonglong)_DAT_182d22b90 << 0x20) +
            (ulonglong)_DAT_182d22b60 * (uVar11 & 0xffffffff) +
            ((ulonglong)_DAT_182d22b70 * (uVar11 & 0xffffffff) +
             (ulonglong)uVar53 * (ulonglong)_DAT_182d22b60 << 0x20) +
            (ulonglong)_DAT_182d22b40 * (uVar16 & 0xffffffff) +
            ((ulonglong)_DAT_182d22b50 * (uVar16 & 0xffffffff) +
             (ulonglong)uVar38 * (ulonglong)_DAT_182d22b40 << 0x20)) -
           ((ulonglong)uVar20 * (_DAT_182d22c60 & 0xffffffff) +
            ((ulonglong)_DAT_182d22c70 * (ulonglong)uVar20 +
             (uVar15 >> 0x20) * (_DAT_182d22c60 & 0xffffffff) << 0x20) +
           (ulonglong)uVar31 * (ulonglong)_DAT_182d22c40 +
           ((ulonglong)_DAT_182d22c50 * (ulonglong)uVar31 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_182d22c40 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_182d22c30 +
           ((ulonglong)uVar53 * (ulonglong)_DAT_182d22c30 +
            (ulonglong)_DAT_182d22c20 * (uVar11 & 0xffffffff) << 0x20) +
           (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d22c30 +
           ((ulonglong)uVar38 * (ulonglong)_DAT_182d22c30 +
            (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d22c20 << 0x20))) + _DAT_182d22b80;
  uVar15 = _DAT_183472950 >> 0xd & 0x3fffffffffff;
  _DAT_183472a68 = (_DAT_183472a68 ^ uVar15) + uVar16 ^ 0xc63ef64808dc0451;
  _DAT_1834729b8 = (_DAT_1834729b8 * 0x26083a041a480275 ^ _DAT_183472a68) + uVar15;
  _DAT_183472a08 = _DAT_1834729b8 ^ _DAT_183472a68;
  lVar9 = uVar10 * uVar10;
  uVar15 = lVar9 * 0x2c0ab09c36ebed90;
  uVar10 = ((_DAT_183472ae8 ^ 0x84222325) + (ulonglong)((uint)_DAT_183472ae8 & 0x84222325) * 2) *
           (uVar15 - _DAT_183472a20);
  uVar10 = (uVar10 | _DAT_183472a70) + (uVar10 & _DAT_183472a70);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183472998 = uVar16;
  _DAT_183472a88 =
       func_0x0001906e54c0((uVar15 ^ 0x84222325 | uVar10) + (uVar10 & (uVar15 ^ 0x84222325)));
  uVar10 = (_DAT_183472a88 & 0x3ffffffffffff) * -0x5f538b9a05900000 |
           (_DAT_183472a88 & 0x3ffffffffffff) * 0x278c1a0ac7465fa7 >> 0x2c;
  uVar18 = lVar9 * -0x2c0ab09c36ebed90;
  _DAT_183472990 = (_DAT_183472990 ^ uVar10) + lVar9 * -0x2c0ab09c36ebed90 ^ 0xc19be222215fcb5;
  _DAT_1834729a8 = (_DAT_1834729a8 * 0x3f5b94f0a1e0ab59 ^ _DAT_183472990) + uVar10;
  _DAT_183472a20 = _DAT_1834729a8 ^ _DAT_183472990;
  uVar10 = uVar16 ^ 0x84222325 ^ _DAT_183472960;
  lVar9 = (uVar16 ^ 0x84222325) + _DAT_183472970;
  uVar11 = uVar10 + lVar9;
  uVar19 = (uVar15 ^ _DAT_183472970) + _DAT_183472960 + uVar15;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar10;
  uVar11 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar15 ^ _DAT_183472970;
  _DAT_1834729d8 = uVar18;
  _DAT_1834729e8 =
       func_0x0001906e54c0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183472960 + uVar15) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - lVar9);
  uVar53 = (uint)(uVar16 >> 0x20);
  auVar45._8_4_ = (int)uVar16;
  auVar45._0_8_ = uVar16;
  auVar45._12_4_ = uVar53;
  uVar31 = (uint)(uVar15 >> 0x20);
  auVar41._8_4_ = (int)uVar15;
  auVar41._0_8_ = uVar15;
  auVar41._12_4_ = uVar31;
  uVar59 = (uVar16 & 0xffffffff) * (uVar15 & 0xffffffff) +
           ((ulonglong)uVar53 * (uVar15 & 0xffffffff) + (uVar16 & 0xffffffff) * (ulonglong)uVar31 <<
           0x20);
  uVar38 = SUB164(auVar45 & auVar41,0);
  uVar19 = SUB168(auVar45 & auVar41,0);
  uVar32 = SUB164(auVar45 | auVar41,0);
  uVar10 = SUB168(auVar45 | auVar41,0);
  uVar20 = SUB164(auVar45 ^ auVar41,0);
  uVar11 = SUB168(auVar45 ^ auVar41,0);
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar56 = SUB164(auVar41 ^ auVar2,0);
  lVar9 = (uVar59 & 0xffffffff) * (ulonglong)_DAT_182d22d40 +
          ((ulonglong)_DAT_182d22d50 * (uVar59 & 0xffffffff) +
           (uVar59 >> 0x20) * (ulonglong)_DAT_182d22d40 << 0x20);
  uVar59 = (((ulonglong)uVar56 * (_DAT_182d22cc0 & 0xffffffff) +
             ((ulonglong)_DAT_182d22d30 * (ulonglong)uVar56 +
              (SUB168(auVar41 ^ auVar2,0) >> 0x20) * (_DAT_182d22cc0 & 0xffffffff) << 0x20) +
             (ulonglong)_DAT_182d22d10 * (ulonglong)uVar20 +
             ((ulonglong)_DAT_182d22d20 * (ulonglong)uVar20 +
              (uVar11 >> 0x20) * (ulonglong)_DAT_182d22d10 << 0x20) +
             (ulonglong)_DAT_182d22cf0 * (ulonglong)uVar32 +
             ((ulonglong)_DAT_182d22d00 * (ulonglong)uVar32 +
              (uVar10 >> 0x20) * (ulonglong)_DAT_182d22cf0 << 0x20) +
             (ulonglong)_DAT_182d22cd0 * (ulonglong)uVar38 +
             ((ulonglong)_DAT_182d22ce0 * (ulonglong)uVar38 +
              (uVar19 >> 0x20) * (ulonglong)_DAT_182d22cd0 << 0x20) +
             (ulonglong)_DAT_182d22ca0 * (uVar15 & 0xffffffff) +
             ((ulonglong)_DAT_182d22cb0 * (uVar15 & 0xffffffff) +
              (ulonglong)uVar31 * (ulonglong)_DAT_182d22ca0 << 0x20) +
             (ulonglong)_DAT_182d22c80 * (uVar16 & 0xffffffff) +
             ((ulonglong)_DAT_182d22c90 * (uVar16 & 0xffffffff) +
              (ulonglong)uVar53 * (ulonglong)_DAT_182d22c80 << 0x20) + lVar9) -
           ((ulonglong)uVar20 * (_DAT_182d22dc0 & 0xffffffff) +
            ((ulonglong)_DAT_182d22dd0 * (ulonglong)uVar20 +
             (uVar11 >> 0x20) * (_DAT_182d22dc0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar32 * (ulonglong)_DAT_182d22da0 +
            ((ulonglong)_DAT_182d22db0 * (ulonglong)uVar32 +
             (uVar10 >> 0x20) * (ulonglong)_DAT_182d22da0 << 0x20) +
            (ulonglong)uVar38 * (ulonglong)_DAT_182d22d80 +
            ((ulonglong)_DAT_182d22d90 * (ulonglong)uVar38 +
             (uVar19 >> 0x20) * (ulonglong)_DAT_182d22d80 << 0x20) +
            (uVar15 & 0xffffffff) * (ulonglong)_DAT_182d22d70 +
            ((ulonglong)uVar31 * (ulonglong)_DAT_182d22d70 +
             (ulonglong)_DAT_182d22d60 * (uVar15 & 0xffffffff) << 0x20) +
            (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d22d70 +
            ((ulonglong)uVar53 * (ulonglong)_DAT_182d22d70 +
             (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d22d60 << 0x20) + lVar9)) + _DAT_182d22cc0;
  uVar10 = (uVar16 * uVar15 ^ _DAT_1834729e8) * 0x506928a85e44e0e1;
  _DAT_1834729a0 = _DAT_183472988 ^ uVar10 ^ uVar59;
  _DAT_1834729d0 = (_DAT_1834729d0 ^ uVar10) + uVar59 ^ 0x92017df951783b00;
  _DAT_183472948 = (_DAT_183472948 * -0x406d14469aaa645d ^ _DAT_1834729d0) + uVar10;
  _DAT_1834729d8 = _DAT_183472948 ^ _DAT_1834729d0;
  uVar15 = uVar59 ^ 0x84222325;
  uVar10 = ((_DAT_183472980 ^ uVar15) + (uVar15 & _DAT_183472980) * 2) * (uVar18 - _DAT_183472a68);
  uVar10 = (uVar10 | _DAT_183472aa0) + (uVar10 & _DAT_183472aa0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183472af8 = uVar59;
  _DAT_183472918 = func_0x0001906e54c0((uVar15 ^ uVar18 | uVar10) + (uVar10 & (uVar15 ^ uVar18)));
  uVar32 = (uint)(uVar59 >> 0x20);
  auVar42._8_4_ = (int)uVar59;
  auVar42._0_8_ = uVar59;
  auVar42._12_4_ = uVar32;
  uVar20 = (uint)(uVar18 >> 0x20);
  auVar34._8_4_ = (int)uVar18;
  auVar34._0_8_ = uVar18;
  auVar34._12_4_ = uVar20;
  uStack00000000000000a0 = uVar59 | uVar18;
  auVar3._8_8_ = _UNK_18001a718;
  auVar3._0_8_ = _DAT_18001a710;
  uVar31 = SUB164(auVar42 & auVar34,0);
  uVar55 = SUB168(auVar42 & auVar34,0);
  _uStack0000000000000080 = SUB168(auVar42 ^ auVar34,0);
  uVar19 = _uStack0000000000000080;
  uVar10 = _uStack0000000000000080 & 0xffffffff;
  uVar15 = _uStack0000000000000080 & 0xffffffff;
  uVar11 = _uStack0000000000000080 >> 0x20;
  uVar38 = SUB164(auVar34 ^ auVar3,0);
  uStack0000000000000080 = SUB164(auVar42 ^ auVar34,0);
  uVar16 = (uVar59 | uVar18) ^ _DAT_183472918;
  uVar18 = (((ulonglong)uVar38 * (_DAT_182d22e20 & 0xffffffff) +
             ((ulonglong)_DAT_182d22e70 * (ulonglong)uVar38 +
              (SUB168(auVar34 ^ auVar3,0) >> 0x20) * (_DAT_182d22e20 & 0xffffffff) << 0x20) +
             _DAT_182d22e50 * uVar15 + (_DAT_182d22e60 * uVar10 + uVar11 * _DAT_182d22e50 << 0x20) +
            (ulonglong)_DAT_182d22e30 * (ulonglong)uVar31 +
            ((ulonglong)_DAT_182d22e40 * (ulonglong)uVar31 +
             (uVar55 >> 0x20) * (ulonglong)_DAT_182d22e30 << 0x20) +
            (ulonglong)_DAT_182d22e00 * (uVar18 & 0xffffffff) +
            ((ulonglong)_DAT_182d22e10 * (uVar18 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_182d22e00 << 0x20) +
            (ulonglong)_DAT_182d22de0 * (uVar59 & 0xffffffff) +
            ((ulonglong)_DAT_182d22df0 * (uVar59 & 0xffffffff) +
             (ulonglong)uVar32 * (ulonglong)_DAT_182d22de0 << 0x20)) -
           ((ulonglong)uStack0000000000000080 * (_DAT_182d22f00 & 0xffffffff) +
            ((ulonglong)_DAT_182d22f10 * (ulonglong)uStack0000000000000080 +
             (uVar19 >> 0x20) * (_DAT_182d22f00 & 0xffffffff) << 0x20) +
            (uStack00000000000000a0 & 0xffffffff) * (ulonglong)_DAT_182d22ee0 +
            ((ulonglong)_DAT_182d22ef0 * (uStack00000000000000a0 & 0xffffffff) +
             (uStack00000000000000a0 >> 0x20) * (ulonglong)_DAT_182d22ee0 << 0x20) +
           (ulonglong)uVar31 * (ulonglong)_DAT_182d22ec0 +
           ((ulonglong)_DAT_182d22ed0 * (ulonglong)uVar31 +
            (uVar55 >> 0x20) * (ulonglong)_DAT_182d22ec0 << 0x20) +
           (uVar18 & 0xffffffff) * (ulonglong)_DAT_182d22eb0 +
           ((ulonglong)uVar20 * (ulonglong)_DAT_182d22eb0 +
            (ulonglong)_DAT_182d22ea0 * (uVar18 & 0xffffffff) << 0x20) +
           (uVar59 & 0xffffffff) * (ulonglong)_DAT_182d22eb0 +
           ((ulonglong)uVar32 * (ulonglong)_DAT_182d22eb0 +
            (uVar59 & 0xffffffff) * (ulonglong)_DAT_182d22ea0 << 0x20))) + _DAT_182d22e20;
  _DAT_183472a90 = _DAT_183472950 ^ uVar16 ^ uVar18;
  _DAT_1834729c8 = (_DAT_1834729c8 ^ uVar16) + uVar18 ^ 0x1a9dd049bc94e06;
  _DAT_183472938 = (_DAT_183472938 * -0x6c26fc9285e44631 ^ _DAT_1834729c8) + uVar16;
  _DAT_183472ae8 = _DAT_183472938 ^ _DAT_1834729c8;
  lVar13 = _DAT_182d21818 * _DAT_182d21810;
  uVar15 = lVar13 * -0x3056f13a0b227427;
  uVar10 = ((_DAT_183472948 ^ 0x84222325) + (ulonglong)((uint)_DAT_183472948 & 0x84222325) * 2) *
           (uVar15 - _DAT_183472a88);
  uVar10 = (uVar10 | _DAT_183472968) + (uVar10 & _DAT_183472968);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183472aa0 = uVar18;
  lVar9 = func_0x0001906e54c0((uVar15 ^ 0x84222325 | uVar10) + (uVar10 & (uVar15 ^ 0x84222325)));
  uVar10 = lVar9 * -0x314185a880000000 | (lVar9 * -0x53a49d4a62830b51 & 0x1fffffffffU) >> 0x21;
  uVar19 = lVar13 * 0x3056f13a0b227427;
  _DAT_183472a78 = (_DAT_183472a78 ^ uVar10) + lVar13 * 0x3056f13a0b227427 ^ 0x5dc99364aaaed58;
  _DAT_183472980 = (_DAT_183472980 * 0x54e3c054367bf1f1 ^ _DAT_183472a78) + uVar10;
  _DAT_183472998 = _DAT_183472980 ^ _DAT_183472a78;
  uVar11 = uVar18 ^ 0x84222325;
  uVar10 = ((_DAT_183472ad8 ^ uVar11) + (uVar11 & _DAT_183472ad8) * 2) * (uVar15 - _DAT_183472a80);
  uVar10 = (uVar10 | _DAT_183472ac8) + (uVar10 & _DAT_183472ac8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183472ac0 = uVar19;
  _DAT_183472aa0 = func_0x0001906e54c0((uVar11 ^ uVar15 | uVar10) + (uVar10 & (uVar11 ^ uVar15)));
  uVar32 = (uint)(uVar18 >> 0x20);
  auVar46._8_4_ = (int)uVar18;
  auVar46._0_8_ = uVar18;
  auVar46._12_4_ = uVar32;
  uVar20 = (uint)(uVar15 >> 0x20);
  auVar43._8_4_ = (int)uVar15;
  auVar43._0_8_ = uVar15;
  auVar43._12_4_ = uVar20;
  uStack00000000000000a0 = uVar18 | uVar15;
  uStack00000000000000b4 = 0;
  uVar10 = (uVar18 & 0xffffffff) * (uVar15 & 0xffffffff) +
           ((ulonglong)uVar32 * (uVar15 & 0xffffffff) + (uVar18 & 0xffffffff) * (ulonglong)uVar20 <<
           0x20);
  uVar38 = SUB164(auVar46 & auVar43,0);
  uVar11 = SUB168(auVar46 & auVar43,0);
  uVar31 = SUB164(auVar46 ^ auVar43,0);
  lVar9 = (uVar10 & 0xffffffff) * (ulonglong)_DAT_182d22fa0 +
          ((ulonglong)_DAT_182d22fb0 * (uVar10 & 0xffffffff) +
           (uVar10 >> 0x20) * (ulonglong)_DAT_182d22fa0 << 0x20);
  uVar10 = uVar15 ^ _DAT_18001a710;
  uVar11 = (((ulonglong)uVar31 * (ulonglong)_DAT_182d22f80 +
             ((ulonglong)_DAT_182d22f90 * (ulonglong)uVar31 +
              (SUB168(auVar46 ^ auVar43,0) >> 0x20) * (ulonglong)_DAT_182d22f80 << 0x20) +
             (ulonglong)_DAT_182d22f60 * (uStack00000000000000a0 & 0xffffffff) +
             ((ulonglong)_DAT_182d22f70 * (uStack00000000000000a0 & 0xffffffff) +
              (uStack00000000000000a0 >> 0x20) * (ulonglong)_DAT_182d22f60 << 0x20) +
             (ulonglong)_DAT_182d22f40 * (ulonglong)uVar38 +
             ((ulonglong)_DAT_182d22f50 * (ulonglong)uVar38 +
              (uVar11 >> 0x20) * (ulonglong)_DAT_182d22f40 << 0x20) +
             (ulonglong)_DAT_182d22f30 * (uVar15 & 0xffffffff) +
             ((ulonglong)uVar20 * (ulonglong)_DAT_182d22f30 +
              (ulonglong)_DAT_182d22f20 * (uVar15 & 0xffffffff) << 0x20) +
             (uVar18 & 0xffffffff) * (ulonglong)_DAT_182d22f30 +
             ((ulonglong)uVar32 * (ulonglong)_DAT_182d22f30 +
              (uVar18 & 0xffffffff) * (ulonglong)_DAT_182d22f20 << 0x20) + lVar9) -
           ((uVar10 & 0xffffffff) * (_DAT_182d23000 & 0xffffffff) +
            ((ulonglong)_DAT_182d23030 * (uVar10 & 0xffffffff) +
             (uVar10 >> 0x20) * (_DAT_182d23000 & 0xffffffff) << 0x20) +
            (uStack00000000000000a0 & 0xffffffff) * (ulonglong)_DAT_182d23020 +
            ((uStack00000000000000a0 >> 0x20) * (ulonglong)_DAT_182d23020 +
             (ulonglong)_DAT_182d23010 * (uStack00000000000000a0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar38 * (ulonglong)_DAT_182d23020 +
            ((uVar11 >> 0x20) * (ulonglong)_DAT_182d23020 +
             (ulonglong)uVar38 * (ulonglong)_DAT_182d23010 << 0x20) +
            (uVar15 & 0xffffffff) * (ulonglong)_DAT_182d22fe0 +
            ((ulonglong)_DAT_182d22ff0 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_182d22fe0 << 0x20) +
            (uVar18 & 0xffffffff) * (ulonglong)_DAT_182d22fc0 +
            ((ulonglong)_DAT_182d22fd0 * (uVar18 & 0xffffffff) +
             (ulonglong)uVar32 * (ulonglong)_DAT_182d22fc0 << 0x20) + lVar9)) - _DAT_182d23000;
  _DAT_183472a08 = _DAT_183472a98 ^ _DAT_183472aa0 ^ uVar11;
  _DAT_183472970 = (_DAT_183472970 ^ _DAT_183472aa0) + uVar11 ^ 0x13ac3dac1adf0b97;
  _DAT_183472930 = (_DAT_183472930 * -0x5aea735dc40db1f ^ _DAT_183472970) + _DAT_183472aa0;
  _DAT_183472900 = _DAT_183472930 ^ _DAT_183472970;
  uVar15 = uVar11 ^ 0x84222325;
  uVar10 = ((_DAT_183472998 ^ uVar15) + (uVar15 & _DAT_183472998) * 2) * (uVar19 - _DAT_183472a68);
  uVar10 = (uVar10 | _DAT_183472978) + (uVar10 & _DAT_183472978);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183472928 = uVar11;
  _DAT_183472a08 = func_0x0001906e54c0((uVar15 ^ uVar19 | uVar10) + (uVar10 & (uVar15 ^ uVar19)));
  uVar38 = (uint)(uVar11 >> 0x20);
  auVar44._8_4_ = (int)uVar11;
  auVar44._0_8_ = uVar11;
  auVar44._12_4_ = uVar38;
  uVar31 = (uint)(uVar19 >> 0x20);
  auVar35._8_4_ = (int)uVar19;
  auVar35._0_8_ = uVar19;
  auVar35._12_4_ = uVar31;
  uVar56 = SUB164(auVar44 & auVar35,0);
  uVar10 = SUB168(auVar44 & auVar35,0);
  uVar20 = SUB164(auVar44 | auVar35,0);
  uVar15 = SUB168(auVar44 | auVar35,0);
  auVar4._8_8_ = _UNK_18001a718;
  auVar4._0_8_ = _DAT_18001a710;
  uVar53 = SUB164(auVar35 ^ auVar4,0);
  uVar32 = SUB164(auVar44 ^ auVar35,0);
  uVar18 = (((ulonglong)uVar53 * (_DAT_182d23080 & 0xffffffff) +
             ((_DAT_182d230b0 & 0xffffffff) * (ulonglong)uVar53 +
              (SUB168(auVar35 ^ auVar4,0) >> 0x20) * (_DAT_182d23080 & 0xffffffff) << 0x20) +
            (_DAT_182d230a0 & 0xffffffff) * (ulonglong)uVar20 +
            ((uVar15 >> 0x20) * (_DAT_182d230a0 & 0xffffffff) +
             (_DAT_182d23090 & 0xffffffff) * (ulonglong)uVar20 << 0x20) +
            (ulonglong)uVar56 * (_DAT_182d230a0 & 0xffffffff) +
            ((uVar10 >> 0x20) * (_DAT_182d230a0 & 0xffffffff) +
             (ulonglong)uVar56 * (_DAT_182d23090 & 0xffffffff) << 0x20) +
            (_DAT_182d23060 & 0xffffffff) * (uVar19 & 0xffffffff) +
            ((_DAT_182d23070 & 0xffffffff) * (uVar19 & 0xffffffff) +
             (ulonglong)uVar31 * (_DAT_182d23060 & 0xffffffff) << 0x20) +
            (_DAT_182d23040 & 0xffffffff) * (uVar11 & 0xffffffff) +
            ((_DAT_182d23050 & 0xffffffff) * (uVar11 & 0xffffffff) +
             (ulonglong)uVar38 * (_DAT_182d23040 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar32 * (_DAT_182d23140 & 0xffffffff) +
            ((_DAT_182d23150 & 0xffffffff) * (ulonglong)uVar32 +
             (SUB168(auVar44 ^ auVar35,0) >> 0x20) * (_DAT_182d23140 & 0xffffffff) << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d23120 +
            ((_DAT_182d23130 & 0xffffffff) * (ulonglong)uVar20 +
             (uVar15 >> 0x20) * (ulonglong)_DAT_182d23120 << 0x20) +
           (ulonglong)uVar56 * (ulonglong)_DAT_182d23100 +
           ((_DAT_182d23110 & 0xffffffff) * (ulonglong)uVar56 +
            (uVar10 >> 0x20) * (ulonglong)_DAT_182d23100 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_182d230f0 +
           ((ulonglong)uVar31 * (ulonglong)_DAT_182d230f0 +
            (_DAT_182d230e0 & 0xffffffff) * (uVar19 & 0xffffffff) << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_182d230f0 +
           ((ulonglong)uVar38 * (ulonglong)_DAT_182d230f0 +
            (uVar11 & 0xffffffff) * (_DAT_182d230e0 & 0xffffffff) << 0x20))) + _DAT_182d23080;
  _DAT_183472918 = _DAT_183472938 ^ _DAT_183472a08 ^ uVar18;
  _DAT_183472a40 = (_DAT_183472a40 ^ _DAT_183472a08) + uVar18 ^ 0x34346c80b25793f7;
  _DAT_183472a60 = (_DAT_183472a60 * 0x6c5992c8dd8f3305 ^ _DAT_183472a40) + _DAT_183472a08;
  _DAT_183472ab8 = _DAT_183472a60 ^ _DAT_183472a40;
  uVar11 = uVar12 ^ 0x84222325;
  uVar10 = ((_DAT_183472a80 ^ uVar11) + (uVar11 & _DAT_183472a80) * 2) * (uVar14 - _DAT_183472928);
  uVar10 = (uVar10 | _DAT_183472938) + (uVar10 & _DAT_183472938);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar15 = uVar11 ^ uVar14;
  _DAT_183472ac8 = uVar18;
  _DAT_183472910 = func_0x0001906e54c0((uVar10 | uVar15) + (uVar10 & uVar15));
  uVar10 = _DAT_183472910 ^ (uVar12 | uVar14) ^ uVar12;
  uVar31 = (uint)(uVar12 >> 0x20);
  auVar51._8_4_ = (int)uVar12;
  auVar51._0_8_ = uVar12;
  auVar51._12_4_ = uVar31;
  uVar20 = (uint)(uVar14 >> 0x20);
  auVar47._8_4_ = (int)uVar14;
  auVar47._0_8_ = uVar14;
  auVar47._12_4_ = uVar20;
  uVar58 = SUB164(auVar51 & auVar47,0);
  uVar19 = SUB168(auVar51 & auVar47,0);
  uVar38 = SUB164(auVar51 | auVar47,0);
  uVar16 = SUB168(auVar51 | auVar47,0);
  uVar53 = SUB164(auVar51 ^ auVar47,0);
  uVar59 = SUB168(auVar51 ^ auVar47,0);
  auVar5._8_8_ = _UNK_18001a718;
  auVar5._0_8_ = _DAT_18001a710;
  uVar56 = SUB164(auVar47 ^ auVar5,0);
  auVar57._8_4_ = 0xffffffff;
  auVar57._0_8_ = 0xffffffffffffffff;
  auVar57._12_4_ = 0xffffffff;
  uVar32 = SUB164(auVar51 ^ auVar57,0);
  uVar16 = (((ulonglong)uVar56 * (ulonglong)_DAT_182d231a0 +
             ((ulonglong)_DAT_182d23210 * (ulonglong)uVar56 +
              (SUB168(auVar47 ^ auVar5,0) >> 0x20) * (ulonglong)_DAT_182d231a0 << 0x20) +
            (ulonglong)_DAT_182d231f0 * (ulonglong)uVar53 +
            ((ulonglong)_DAT_182d23200 * (ulonglong)uVar53 +
             (uVar59 >> 0x20) * (ulonglong)_DAT_182d231f0 << 0x20) +
            (ulonglong)_DAT_182d231d0 * (ulonglong)uVar38 +
            ((ulonglong)_DAT_182d231e0 * (ulonglong)uVar38 +
             (uVar16 >> 0x20) * (ulonglong)_DAT_182d231d0 << 0x20) +
            (ulonglong)_DAT_182d231b0 * (ulonglong)uVar58 +
            ((ulonglong)_DAT_182d231c0 * (ulonglong)uVar58 +
             (uVar19 >> 0x20) * (ulonglong)_DAT_182d231b0 << 0x20) +
            (ulonglong)_DAT_182d23180 * (uVar14 & 0xffffffff) +
            ((ulonglong)_DAT_182d23190 * (uVar14 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_182d23180 << 0x20) +
            (ulonglong)_DAT_182d23160 * (uVar12 & 0xffffffff) +
            ((ulonglong)_DAT_182d23170 * (uVar12 & 0xffffffff) +
             (ulonglong)uVar31 * (ulonglong)_DAT_182d23160 << 0x20)) -
           ((ulonglong)uVar32 * (_DAT_182d23280 & 0xffffffff) +
            ((ulonglong)_DAT_182d232f0 * (ulonglong)uVar32 +
             (SUB168(auVar51 ^ auVar57,0) >> 0x20) * (_DAT_182d23280 & 0xffffffff) << 0x20) +
           (ulonglong)uVar53 * (ulonglong)_DAT_182d232d0 +
           ((ulonglong)_DAT_182d232e0 * (ulonglong)uVar53 +
            (uVar59 >> 0x20) * (ulonglong)_DAT_182d232d0 << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_182d232b0 +
           ((ulonglong)_DAT_182d232c0 * (ulonglong)uVar38 +
            (uVar16 >> 0x20) * (ulonglong)_DAT_182d232b0 << 0x20) +
           (ulonglong)uVar58 * (ulonglong)_DAT_182d23290 +
           ((ulonglong)_DAT_182d232a0 * (ulonglong)uVar58 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_182d23290 << 0x20) +
           (uVar14 & 0xffffffff) * (ulonglong)_DAT_182d23260 +
           ((ulonglong)_DAT_182d23270 * (uVar14 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d23260 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_182d23240 +
           ((ulonglong)_DAT_182d23250 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar31 * (ulonglong)_DAT_182d23240 << 0x20))) + _DAT_182d23300;
  _DAT_1834729e0 = (_DAT_183472ae0 ^ uVar10 ^ uVar16 ^ uVar10) + uVar16 ^ 0x8bfce2f620471d43;
  _DAT_183472a78 = (_DAT_183472a78 * 0x34c736879c4c4fc7 ^ _DAT_1834729e0) + uVar10;
  uVar10 = ((_DAT_1834729a0 ^ uVar11) + (uVar11 & _DAT_1834729a0) * 2) * (uVar14 - _DAT_1834729b8);
  uVar10 = (uVar10 | _DAT_183472a58) + (uVar10 & _DAT_183472a58);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183472ac8 = uVar16;
  _DAT_1834729e0 = func_0x0001906e54c0((uVar10 | uVar15) + (uVar10 & uVar15));
  uVar10 = uVar12 * uVar14 ^ _DAT_1834729e0;
  uVar10 = (uVar10 & 0xffffffff) * (_DAT_182d23310 & 0xffffffff) +
           ((ulonglong)_DAT_182d23320 * (uVar10 & 0xffffffff) +
            (uVar10 >> 0x20) * (_DAT_182d23310 & 0xffffffff) << 0x20) ^ uVar12;
  uVar15 = uVar12 ^ uVar14;
  _DAT_1834729e8 = (_DAT_1834729e8 ^ uVar10) + uVar15 ^ 0x84f5f3c1805c2680;
  _DAT_183472ae0 = (_DAT_183472ae0 * 0x7fcb4114a61f31eb ^ _DAT_1834729e8) + uVar10;
  _DAT_183472aa8 = _DAT_183472ae0 ^ _DAT_1834729e8;
  uStack00000000000000b0 = (undefined4)uVar11;
  auVar26._8_8_ = uVar14;
  auVar26._0_8_ = uVar11;
  auVar24 = pshufb(auVar26 ^ _DAT_182d23330,_DAT_1800170c0);
  uVar19 = auVar24._8_8_ + auVar24._0_8_;
  uVar10 = uVar19 + _DAT_183472ae0;
  if (auVar24._4_4_ < 0) {
    uVar10 = _DAT_1834729f8 ^ uVar19;
  }
  _DAT_183472a10 = uVar15;
  uStack00000000000000b4 = uVar31;
  _DAT_183472a78 = func_0x0001906e54c0(SUB161(auVar26 ^ _DAT_182d23330,5) ^ uVar10);
  uVar10 = (uVar12 | uVar14) ^ _DAT_183472a78;
  uVar19 = uVar10 << 0x3d | uVar10 >> 3;
  uVar10 = uVar19 >> 1 | uVar19;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar19 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x40 ^ uVar19;
  uVar14 = uVar14 & uVar12;
  _DAT_183472920 = (_DAT_183472920 ^ uVar19) + uVar14 ^ 0x73b87db0d8396da;
  _DAT_183472990 = (_DAT_183472990 * -0x70a1bf93d8134f19 ^ _DAT_183472920) + uVar19;
  _DAT_183472a68 = _DAT_183472990 ^ _DAT_183472920;
  uVar10 = uVar14 * 2;
  uVar59 = uVar15 ^ 0x84222325;
  uVar19 = ((_DAT_183472af8 ^ uVar59) + (uVar59 & _DAT_183472af8) * 2) * (uVar10 - _DAT_183472a10);
  uVar19 = (uVar19 | _DAT_183472a40) + (uVar19 & _DAT_183472a40);
  uVar19 = uVar19 * 0x2000 ^ uVar19;
  uVar19 = uVar19 >> 7 ^ uVar19;
  uVar19 = uVar19 << 0x11 ^ uVar19;
  _DAT_183472938 = uVar14;
  _DAT_183472ae0 = func_0x0001906e54c0((uVar59 ^ uVar10 | uVar19) + (uVar19 & (uVar59 ^ uVar10)));
  uVar10 = uVar10 ^ _DAT_183472ae0;
  uVar20 = (uint)(uVar15 >> 0x20);
  auVar36._8_4_ = (int)uVar15;
  auVar36._0_8_ = uVar15;
  auVar36._12_4_ = uVar20;
  auVar27._8_4_ = (int)uVar14;
  auVar27._0_8_ = uVar14;
  auVar27._12_4_ = (int)(uVar14 >> 0x20);
  uVar14 = uVar14 * 2;
  auVar28._8_8_ = auVar27._8_8_ * 2;
  auVar28._0_8_ = uVar14;
  uVar38 = (uint)(uVar14 >> 0x20);
  uVar53 = SUB164(auVar36 & auVar28,0);
  uVar19 = SUB168(auVar36 & auVar28,0);
  uVar56 = SUB164(auVar36 | auVar28,0);
  uVar32 = SUB164(auVar28 ^ auVar57,0);
  uVar59 = SUB168(auVar28 ^ auVar57,0);
  uVar31 = SUB164(auVar36 ^ auVar28,0);
  uVar19 = (((ulonglong)_DAT_182d23380 * (ulonglong)uVar32 +
             ((ulonglong)_DAT_182d233b0 * (ulonglong)uVar32 +
              (uVar59 >> 0x20) * (ulonglong)_DAT_182d23380 << 0x20) +
            (ulonglong)uVar56 * (ulonglong)_DAT_182d233a0 +
            ((SUB168(auVar36 | auVar28,0) >> 0x20) * (ulonglong)_DAT_182d233a0 +
             (ulonglong)_DAT_182d23390 * (ulonglong)uVar56 << 0x20) +
            (ulonglong)uVar53 * (ulonglong)_DAT_182d233a0 +
            ((uVar19 >> 0x20) * (ulonglong)_DAT_182d233a0 +
             (ulonglong)uVar53 * (ulonglong)_DAT_182d23390 << 0x20) +
            (ulonglong)_DAT_182d23340 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_182d23350 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_182d23340 << 0x20) +
            (ulonglong)_DAT_182d23360 * (uVar14 & 0xffffffff) +
            ((ulonglong)_DAT_182d23370 * (uVar14 & 0xffffffff) +
             (ulonglong)uVar38 * (ulonglong)_DAT_182d23360 << 0x20)) -
           ((ulonglong)uVar32 * (ulonglong)_DAT_182d23420 +
            ((ulonglong)_DAT_182d23470 * (ulonglong)uVar32 +
             (uVar59 >> 0x20) * (ulonglong)_DAT_182d23420 << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_182d23450 +
            ((ulonglong)_DAT_182d23460 * (ulonglong)uVar31 +
             (SUB168(auVar36 ^ auVar28,0) >> 0x20) * (ulonglong)_DAT_182d23450 << 0x20) +
           (ulonglong)uVar53 * (ulonglong)_DAT_182d23430 +
           ((ulonglong)_DAT_182d23440 * (ulonglong)uVar53 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_182d23430 << 0x20) +
           (uVar14 & 0xffffffff) * (ulonglong)_DAT_182d23400 +
           ((ulonglong)_DAT_182d23410 * (uVar14 & 0xffffffff) +
            (ulonglong)uVar38 * (ulonglong)_DAT_182d23400 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_182d233e0 +
           ((ulonglong)_DAT_182d233f0 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d233e0 << 0x20))) + _DAT_182d23480;
  _DAT_183472970 = _DAT_1834729c8 ^ uVar10 ^ uVar19;
  _DAT_183472ac0 = (_DAT_183472ac0 ^ uVar10) + uVar19 ^ 0xf91a3dfc5ee1ae63;
  _DAT_183472a28 = (_DAT_183472a28 * -0x60c54256f5f51fe5 ^ _DAT_183472ac0) + uVar10;
  _DAT_183472a10 = _DAT_183472a28 ^ _DAT_183472ac0;
  uVar14 = uVar16 ^ 0x84222325 ^ _DAT_183472978;
  lVar9 = (uVar16 ^ 0x84222325) + _DAT_183472af8;
  uVar10 = uVar14 + lVar9;
  uVar15 = (uVar19 ^ _DAT_183472af8) + uVar19 + _DAT_183472978;
  uVar14 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar14;
  uVar10 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar19 ^ _DAT_183472af8;
  _DAT_183472920 = uVar19;
  _DAT_183472a28 =
       func_0x0001906e54c0((uVar10 << 0x1d | uVar10 >> 0x23) - (uVar19 + _DAT_183472978) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar9);
  uVar53 = (uint)(uVar16 >> 0x20);
  auVar48._8_4_ = (int)uVar16;
  auVar48._0_8_ = uVar16;
  auVar48._12_4_ = uVar53;
  uVar20 = (uint)(uVar19 >> 0x20);
  auVar37._8_4_ = (int)uVar19;
  auVar37._0_8_ = uVar19;
  auVar37._12_4_ = uVar20;
  uVar32 = SUB164(auVar48 & auVar37,0);
  uVar59 = SUB168(auVar48 & auVar37,0);
  uVar38 = SUB164(auVar48 | auVar37,0);
  uVar10 = SUB168(auVar48 | auVar37,0);
  uVar31 = SUB164(auVar48 ^ auVar37,0);
  uVar14 = _DAT_183472a28 & 0xffffffffffe00000;
  uVar15 = uVar16 ^ _DAT_18001a710;
  uVar19 = (((ulonglong)uVar31 * (ulonglong)_DAT_182d23500 +
             ((ulonglong)_DAT_182d23510 * (ulonglong)uVar31 +
              (SUB168(auVar48 ^ auVar37,0) >> 0x20) * (ulonglong)_DAT_182d23500 << 0x20) +
             (ulonglong)_DAT_182d234e0 * (ulonglong)uVar38 +
             ((ulonglong)_DAT_182d234f0 * (ulonglong)uVar38 +
              (uVar10 >> 0x20) * (ulonglong)_DAT_182d234e0 << 0x20) +
            (ulonglong)_DAT_182d234c0 * (ulonglong)uVar32 +
            ((ulonglong)_DAT_182d234d0 * (ulonglong)uVar32 +
             (uVar59 >> 0x20) * (ulonglong)_DAT_182d234c0 << 0x20) +
            (ulonglong)_DAT_182d234b0 * (uVar19 & 0xffffffff) +
            ((ulonglong)uVar20 * (ulonglong)_DAT_182d234b0 +
             (ulonglong)_DAT_182d23490 * (uVar19 & 0xffffffff) << 0x20) +
            (ulonglong)_DAT_182d234a0 * (uVar16 & 0xffffffff) +
            ((ulonglong)uVar53 * (ulonglong)_DAT_182d234a0 +
             (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d23490 << 0x20)) -
           ((uVar15 & 0xffffffff) * (_DAT_182d23580 & 0xffffffff) +
            ((ulonglong)_DAT_182d235b0 * (uVar15 & 0xffffffff) +
             (uVar15 >> 0x20) * (_DAT_182d23580 & 0xffffffff) << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_182d235a0 +
           ((uVar10 >> 0x20) * (ulonglong)_DAT_182d235a0 +
            (ulonglong)_DAT_182d23590 * (ulonglong)uVar38 << 0x20) +
           (ulonglong)uVar32 * (ulonglong)_DAT_182d235a0 +
           ((uVar59 >> 0x20) * (ulonglong)_DAT_182d235a0 +
            (ulonglong)uVar32 * (ulonglong)_DAT_182d23590 << 0x20) +
           (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d23540 +
           ((ulonglong)_DAT_182d23550 * (uVar16 & 0xffffffff) +
            (ulonglong)uVar53 * (ulonglong)_DAT_182d23540 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_182d23560 +
           ((ulonglong)_DAT_182d23570 * (uVar19 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d23560 << 0x20))) - _DAT_182d23580;
  _DAT_183472968 = uVar19 ^ uVar14;
  _DAT_183472ac0 = (_DAT_183472ac0 ^ uVar14) + uVar19 ^ 0x49afffa7c215efe;
  _DAT_183472a08 = (_DAT_183472a08 * 0x27f57c5fe95c2565 ^ _DAT_183472ac0) + uVar14 ^ _DAT_183472ac0;
  _DAT_183472af8 = _DAT_1834729a8 ^ uVar19;
  uVar14 = uVar18 ^ 0x84222325 ^ _DAT_183472970;
  lVar9 = (uVar18 ^ 0x84222325) + _DAT_1834729c8;
  uVar10 = uVar14 + lVar9;
  uVar15 = (uVar19 ^ _DAT_1834729c8) + _DAT_183472970 + uVar19;
  uVar14 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar14;
  uVar10 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar19 ^ _DAT_1834729c8;
  _DAT_183472af0 = uVar19;
  _DAT_183472ab8 =
       func_0x0001906e54c0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183472970 + uVar19) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar9);
  auVar24 = _DAT_1800170c0;
  uVar14 = uVar18 * uVar19 ^ _DAT_183472ab8 ^ uVar18;
  uVar32 = (uint)(uVar18 >> 0x20);
  auVar49._8_4_ = (int)uVar18;
  auVar49._0_8_ = uVar18;
  auVar49._12_4_ = uVar32;
  uVar53 = (uint)(uVar19 >> 0x20);
  auVar29._8_4_ = (int)uVar19;
  auVar29._0_8_ = uVar19;
  auVar29._12_4_ = uVar53;
  uVar38 = SUB164(auVar49 & auVar29,0);
  uVar15 = SUB168(auVar49 & auVar29,0);
  uVar31 = SUB164(auVar49 | auVar29,0);
  uVar10 = SUB168(auVar49 | auVar29,0);
  uVar58 = SUB164(auVar49 ^ auVar29,0);
  auVar6._8_8_ = _UNK_18001a718;
  auVar6._0_8_ = _DAT_18001a710;
  uVar56 = SUB164(auVar49 ^ auVar6,0);
  auVar52._8_4_ = 0xffffffff;
  auVar52._0_8_ = 0xffffffffffffffff;
  auVar52._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar29 ^ auVar52,0);
  auVar7._4_4_ = uStack00000000000000b4;
  auVar7._0_4_ = uStack00000000000000b0;
  auVar7._8_8_ = 0;
  auVar22 = pblendw(auVar7,auVar52,0xf0);
  auVar21 = pshufb(auVar22 ^ _DAT_182d23730,_DAT_1800170c0);
  uVar15 = (((ulonglong)uVar56 * (ulonglong)_DAT_182d23600 +
             ((ulonglong)_DAT_182d23670 * (ulonglong)uVar56 +
              (SUB168(auVar49 ^ auVar6,0) >> 0x20) * (ulonglong)_DAT_182d23600 << 0x20) +
            (ulonglong)uVar58 * (ulonglong)_DAT_182d23650 +
            ((ulonglong)_DAT_182d23660 * (ulonglong)uVar58 +
             (SUB168(auVar49 ^ auVar29,0) >> 0x20) * (ulonglong)_DAT_182d23650 << 0x20) +
            (ulonglong)_DAT_182d23630 * (ulonglong)uVar31 +
            ((ulonglong)_DAT_182d23640 * (ulonglong)uVar31 +
             (uVar10 >> 0x20) * (ulonglong)_DAT_182d23630 << 0x20) +
            (ulonglong)_DAT_182d23610 * (ulonglong)uVar38 +
            ((ulonglong)_DAT_182d23620 * (ulonglong)uVar38 +
             (uVar15 >> 0x20) * (ulonglong)_DAT_182d23610 << 0x20) +
            (ulonglong)_DAT_182d235e0 * (uVar19 & 0xffffffff) +
            ((ulonglong)_DAT_182d235f0 * (uVar19 & 0xffffffff) +
             (ulonglong)uVar53 * (ulonglong)_DAT_182d235e0 << 0x20) +
            (ulonglong)_DAT_182d235c0 * (uVar18 & 0xffffffff) +
            ((ulonglong)_DAT_182d235d0 * (uVar18 & 0xffffffff) +
             (ulonglong)uVar32 * (ulonglong)_DAT_182d235c0 << 0x20)) -
           ((ulonglong)uVar20 * (ulonglong)_DAT_182d236e0 +
            ((ulonglong)_DAT_182d23710 * (ulonglong)uVar20 +
             (SUB168(auVar29 ^ auVar52,0) >> 0x20) * (ulonglong)_DAT_182d236e0 << 0x20) +
           (ulonglong)uVar31 * (ulonglong)_DAT_182d23700 +
           ((uVar10 >> 0x20) * (ulonglong)_DAT_182d23700 +
            (ulonglong)_DAT_182d236f0 * (ulonglong)uVar31 << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_182d23700 +
           ((uVar15 >> 0x20) * (ulonglong)_DAT_182d23700 +
            (ulonglong)uVar38 * (ulonglong)_DAT_182d236f0 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_182d236c0 +
           ((ulonglong)_DAT_182d236d0 * (uVar19 & 0xffffffff) +
            (ulonglong)uVar53 * (ulonglong)_DAT_182d236c0 << 0x20) +
           (uVar18 & 0xffffffff) * (ulonglong)_DAT_182d236a0 +
           ((ulonglong)_DAT_182d236b0 * (uVar18 & 0xffffffff) +
            (ulonglong)uVar32 * (ulonglong)_DAT_182d236a0 << 0x20))) + _DAT_182d23720;
  _DAT_183472980 = _DAT_183472918 ^ uVar14 ^ uVar15;
  _DAT_1834729b0 = (_DAT_1834729b0 ^ uVar14) + uVar15 ^ 0x4dd50a7b9e9ac341;
  _DAT_183472aa0 = (_DAT_183472aa0 * 0x517aa8a5f4b438d5 ^ _DAT_1834729b0) + uVar14;
  _DAT_183472ac8 = _DAT_183472aa0 ^ _DAT_1834729b0;
  uVar10 = auVar21._8_8_ + auVar21._0_8_;
  uVar14 = uVar10 + _DAT_183472928;
  if (auVar21._4_4_ < 0) {
    uVar14 = _DAT_183472968 ^ uVar10;
  }
  _DAT_183472a38 = uVar15;
  _DAT_183472900 = func_0x0001906e54c0(SUB161(auVar22 ^ _DAT_182d23730,5) ^ uVar14);
  _DAT_1834729e0 = ~uVar12;
  _DAT_183472a08 = (_DAT_183472a08 ^ _DAT_183472a98) + _DAT_1834729e0 ^ 0xb30ffe17214f664b;
  _DAT_183472a10 = (_DAT_183472a10 * 0x1235cda159dd766b ^ _DAT_183472a08) + _DAT_183472a98;
  _DAT_183472990 = _DAT_183472a10 ^ _DAT_183472a08;
  uVar14 = (~_DAT_183472968 - uVar12) * ((_DAT_183472928 ^ uVar11) + (uVar11 & _DAT_183472928) * 2);
  uVar14 = (uVar14 | _DAT_183472910) + (uVar14 & _DAT_183472910);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_183472a60 =
       func_0x0001906e54c0((_DAT_1834729e0 ^ uVar11 | uVar14) + (uVar14 & (_DAT_1834729e0 ^ uVar11))
                          );
  uVar14 = (~_DAT_183472a60 ^ uVar12) & 0xffffffffff800000;
  _DAT_1834729d8 = _DAT_1834729d8 ^ uVar14 ^ 0x7174cd1120f5293a;
  _DAT_1834729b0 = (_DAT_1834729b0 * 0x58b751b691f1e677 ^ _DAT_1834729d8) + uVar14;
  _DAT_183472910 = _DAT_1834729b0 ^ _DAT_1834729d8;
  _DAT_1834729a8 = 0;
  uVar14 = uVar15 ^ 0x84222325 ^ _DAT_183472990;
  lVar9 = (uVar15 ^ 0x84222325) + _DAT_183472958;
  uVar10 = uVar14 + lVar9;
  uVar14 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar14;
  uVar10 = ((_DAT_183472958 + _DAT_183472990) * 0x2000 | _DAT_183472958 + _DAT_183472990 >> 0x33) ^
           _DAT_183472958;
  _DAT_183472af8 =
       func_0x0001906e54c0((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_183472990 ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar9);
  uVar14 = (_DAT_183472af8 ^ uVar15) & 0x1ffffffffff ^ uVar15;
  uVar20 = (uint)(uVar15 >> 0x20);
  uVar10 = ((ulonglong)_DAT_182d23780 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_182d23790 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_182d23780 << 0x20) +
           (ulonglong)_DAT_182d23760 * (uVar15 & 0xffffffff) +
           ((ulonglong)_DAT_182d23770 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d23760 << 0x20) +
           (ulonglong)_DAT_182d23740 * (uVar15 & 0xffffffff) +
           ((ulonglong)_DAT_182d23750 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d23740 << 0x20)) -
           ((uVar15 & 0xffffffff) * (_DAT_182d237e0 & 0xffffffff) +
            ((ulonglong)_DAT_182d237f0 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar20 * (_DAT_182d237e0 & 0xffffffff) << 0x20) +
           (ulonglong)_DAT_182d237c0 * (uVar15 & 0xffffffff) +
           ((ulonglong)_DAT_182d237d0 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d237c0 << 0x20) +
           (ulonglong)_DAT_182d237a0 * (uVar15 & 0xffffffff) +
           ((ulonglong)_DAT_182d237b0 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d237a0 << 0x20));
  _DAT_183472aa0 = _DAT_1834729e0 ^ uVar14 ^ uVar10;
  _DAT_1834729b8 = (_DAT_1834729b8 ^ uVar14) + uVar10 ^ 0xad9a2d7578f5ada;
  _DAT_1834729f8 = (_DAT_1834729f8 * -0x37afb1e9b6b7a2c7 ^ _DAT_1834729b8) + uVar14;
  _DAT_1834729e8 = _DAT_1834729f8 ^ _DAT_1834729b8;
  auVar30._8_8_ = uVar17;
  auVar30._0_8_ = uStack00000000000000c8;
  auVar24 = pshufb(auVar30 ^ _DAT_182d23800,auVar24);
  uVar17 = auVar24._8_8_ + auVar24._0_8_;
  uVar14 = uVar17 + _DAT_183472968;
  if (auVar24._4_4_ < 0) {
    uVar14 = _DAT_1834729d8 ^ uVar17;
  }
  _DAT_183472ad8 = uVar10;
  _DAT_183472ac0 = func_0x0001906e54c0(SUB161(auVar30 ^ _DAT_182d23800,5) ^ uVar14);
  _DAT_183472aa8 = _DAT_183472aa8 ^ _DAT_183472ac0 ^ 0x80a73139682a016e;
  _DAT_1834729d8 = (_DAT_1834729d8 * 0xb5c05ddad45e113 ^ _DAT_183472aa8) + _DAT_183472ac0;
  _DAT_183472a50 = _DAT_1834729d8 ^ _DAT_183472aa8;
  _DAT_183472a78 = 0;
  uVar14 = uVar10 ^ 0x84222325 ^ _DAT_183472988;
  lVar9 = (uVar10 ^ 0x84222325) + _DAT_183472970;
  uVar17 = uVar14 + lVar9;
  uVar14 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ uVar14;
  uVar17 = ((_DAT_183472970 + _DAT_183472988) * 0x2000 | _DAT_183472970 + _DAT_183472988 >> 0x33) ^
           _DAT_183472970;
  _DAT_183472af0 =
       func_0x0001906e54c0((uVar17 << 0x1d | uVar17 >> 0x23) - _DAT_183472988 ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar9);
  uVar38 = (uint)(uVar10 >> 0x20);
  auVar50._8_4_ = (int)uVar10;
  auVar50._0_8_ = uVar10;
  auVar50._12_4_ = uVar38;
  auVar24 = ZEXT816(0);
  uVar31 = SUB164(auVar50 | auVar24,0);
  uVar20 = SUB164(auVar50 ^ auVar24,0);
  uVar17 = SUB168(auVar50 ^ auVar24,0);
  auVar54._8_4_ = 0xffffffff;
  auVar54._0_8_ = 0xffffffffffffffff;
  auVar54._12_4_ = 0xffffffff;
  uVar32 = SUB164(auVar54 ^ auVar24,0);
  uVar12 = SUB168(auVar54 ^ auVar24,0);
  uVar14 = _DAT_183472948 & 0xffffffffff800000;
  uVar17 = (((ulonglong)_DAT_182d23830 * (ulonglong)uVar32 +
             ((uVar12 >> 0x20) * (ulonglong)_DAT_182d23830 +
              (ulonglong)_DAT_182d23810 * (ulonglong)uVar32 << 0x20) +
             (ulonglong)_DAT_182d23850 * (ulonglong)uVar20 +
             ((uVar17 >> 0x20) * (ulonglong)_DAT_182d23850 +
              (ulonglong)_DAT_182d23840 * (ulonglong)uVar20 << 0x20) + uVar10 +
            (ulonglong)uVar31 * (ulonglong)_DAT_182d23860 +
            ((ulonglong)_DAT_182d23870 * (ulonglong)uVar31 +
             (SUB168(auVar50 | auVar24,0) >> 0x20) * (ulonglong)_DAT_182d23860 << 0x20)) -
           ((ulonglong)uVar32 * (ulonglong)_DAT_182d238e0 +
            ((ulonglong)_DAT_182d23930 * (ulonglong)uVar32 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_182d238e0 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182d23910 +
            ((ulonglong)_DAT_182d23920 * (ulonglong)uVar20 +
             (uVar17 >> 0x20) * (ulonglong)_DAT_182d23910 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_182d238a0 +
           ((ulonglong)_DAT_182d238b0 * (uVar10 & 0xffffffff) +
            (ulonglong)uVar38 * (ulonglong)_DAT_182d238a0 << 0x20))) + 0x3e4b8886e0bd5705;
  _DAT_183472998 = _DAT_183472948 ^ uVar14 ^ uVar17;
  _DAT_183472a90 = (_DAT_183472a90 ^ uVar14) + uVar17 ^ 0x5b13a7be8346a21c;
  _DAT_183472a68 = (_DAT_183472a68 * 0x2449f06e6777f521 ^ _DAT_183472a90) + uVar14;
  _DAT_1834729f0 = _DAT_183472a68 ^ _DAT_183472a90;
  uVar14 = in_stack_000000d0 ^ 0x84222325 ^ _DAT_183472920;
  lVar9 = (in_stack_000000d0 ^ 0x84222325) + _DAT_183472ab8;
  uVar10 = uVar14 + lVar9;
  uVar12 = (uVar17 ^ _DAT_183472ab8) + _DAT_183472920 + uVar17;
  uVar14 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar14;
  uVar10 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar17 ^ _DAT_183472ab8;
  _DAT_183472978 = uVar17;
  _DAT_1834729d8 =
       func_0x0001906e54c0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183472920 + uVar17) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar9);
  uVar14 = (in_stack_000000d0 * uVar17 ^ _DAT_1834729d8) & 0x1ffffffffffff;
  _DAT_1834729d0 = in_stack_000000d0 + uVar17 + (uVar17 & in_stack_000000d0) * -2;
  _DAT_183472ab8 = (_DAT_183472ab8 ^ uVar14) + _DAT_1834729d0 ^ 0x174c595e8da662b4;
  _DAT_183472aa8 = (_DAT_183472aa8 * 0x5e1ab676cfbb6ce5 ^ _DAT_183472ab8) + uVar14;
  _DAT_183472aa0 = _DAT_183472aa8 ^ _DAT_183472ab8;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x2b1e,0x93);
  cVar8 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar8 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106e2b58 (image 1906e2b58) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e2b58(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d229d8)();
  return;
}



// ===== continuation @ rva 106e4880 (image 1906e4880) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e4880(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_182d226a8)();
  return;
}



// ===== continuation @ rva 106e44b3 (image 1906e44b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e44b3(void)

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



// ===== continuation @ rva 106e9802 (image 1906e9802) =====

void FUN_1906e9802(void)

{
  return;
}



// ===== continuation @ rva 106e5628 (image 1906e5628) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e5628(void)

{
  FUN_190ddce00();
  (*_DAT_182d24c28)();
  return;
}



// ===== continuation @ rva 106ed5e9 (image 1906ed5e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ed5e9(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_182d25298)();
  return;
}



// ===== continuation @ rva 106eb80a (image 1906eb80a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906eb80a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106ebb7b (image 1906ebb7b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906ebb7b(void)

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



// ===== continuation @ rva 106ed5fc (image 1906ed5fc) =====

void FUN_1906ed5fc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106eaca7 (image 1906eaca7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906eaca7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106eba04 (image 1906eba04) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906eba04(void)

{
  longlong in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106ed3ac (image 1906ed3ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ed3ac(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182d24f58)();
  return;
}



// ===== continuation @ rva 106ed178 (image 1906ed178) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ed178(void)

{
  longlong in_RAX;
  longlong *in_stack_00000030;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000030);
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  (*_DAT_182d24828)();
  return;
}



// ===== continuation @ rva 106e9a6b (image 1906e9a6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e9a6b(void)

{
  FUN_190dd72e0();
  (*_DAT_182d24e88)();
  return;
}



// ===== continuation @ rva 106e99ee (image 1906e99ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906e99ee(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d243f8)();
  return;
}



// ===== continuation @ rva 106ea01b (image 1906ea01b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906ea01b(void)

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



// ===== continuation @ rva 106eda18 (image 1906eda18) =====

void FUN_1906eda18(void)

{
  return;
}



// ===== continuation @ rva 106ed789 (image 1906ed789) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ed789(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182d26398)();
  return;
}



// ===== continuation @ rva 106eda7b (image 1906eda7b) =====

void FUN_1906eda7b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106ed9fd (image 1906ed9fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ed9fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d263a8)();
  return;
}



// ===== continuation @ rva 106ed90e (image 1906ed90e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ed90e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1c8))();
  (*_DAT_182d26318)();
  return;
}



// ===== continuation @ rva 106ed8ba (image 1906ed8ba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ed8ba(void)

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



// ===== continuation @ rva 106ed985 (image 1906ed985) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906ed985(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106eda58 (image 1906eda58) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906eda58(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_182d263a8)();
    return;
  }
  (*_DAT_182d263a8)();
  return;
}



// ===== continuation @ rva 106ed931 (image 1906ed931) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906ed931(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106ed8f3 (image 1906ed8f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ed8f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d262c8)();
  return;
}



// ===== continuation @ rva 106edf22 (image 1906edf22) =====

void FUN_1906edf22(void)

{
  return;
}



// ===== continuation @ rva 106edd61 (image 1906edd61) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906edd61(void)

{
  FUN_190ddce00();
  (*_DAT_182d26688)();
  return;
}



// ===== continuation @ rva 106ee474 (image 1906ee474) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ee474(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d265d8)();
  return;
}



// ===== continuation @ rva 106ee561 (image 1906ee561) =====

void FUN_1906ee561(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106edeab (image 1906edeab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906edeab(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106edf09 (image 1906edf09) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906edf09(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106ee543 (image 1906ee543) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ee543(void)

{
  undefined4 in_stack_00000030;
  
  (*_DAT_182d26748)(in_stack_00000030);
  return;
}



// ===== continuation @ rva 106ee50e (image 1906ee50e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906ee50e(void)

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



// ===== continuation @ rva 106edddf (image 1906edddf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906edddf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_182d26578)();
  return;
}



// ===== continuation @ rva 106ee3df (image 1906ee3df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ee3df(undefined4 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000028;
  
  (**(code **)(*unaff_RSI + 0x70))(param_1,in_stack_00000028,&UNK_182f702a8);
  (*_DAT_182d26508)(0);
  return;
}



// ===== continuation @ rva 106b8f17 (image 1906b8f17) =====

void FUN_1906b8f17(void)

{
  return;
}



// ===== continuation @ rva 106b8d78 (image 1906b8d78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906b8d78(void)

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



// ===== continuation @ rva 106ba3f0 (image 1906ba3f0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906ba3f0(void)

{
  char cVar1;
  longlong *unaff_R14;
  undefined8 in_stack_00000030;
  
  FUN_190ddfc90();
  cVar1 = (**(code **)(*unaff_R14 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106b8eff (image 1906b8eff) =====

undefined8 FUN_1906b8eff(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 106bd865 (image 1906bd865) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906bd865(void)

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



// ===== continuation @ rva 106ba7ac (image 1906ba7ac) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906ba7ac(void)

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



// ===== continuation @ rva 106baecf (image 1906baecf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906baecf(void)

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



// ===== continuation @ rva 106bc44b (image 1906bc44b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906bc44b(void)

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



// ===== continuation @ rva 106c1524 (image 1906c1524) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c1524(void)

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



// ===== continuation @ rva 106c14de (image 1906c14de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c14de(void)

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



// ===== continuation @ rva 106c1bb2 (image 1906c1bb2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c1bb2(void)

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



// ===== continuation @ rva 106c1b5e (image 1906c1b5e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c1b5e(void)

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



// ===== continuation @ rva 106c29f1 (image 1906c29f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c29f1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d1e6f8)();
  return;
}



// ===== continuation @ rva 106c25a7 (image 1906c25a7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c25a7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106c2a34 (image 1906c2a34) =====

void FUN_1906c2a34(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 106c1d94 (image 1906c1d94) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c1d94(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106c299d (image 1906c299d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c299d(void)

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



// ===== continuation @ rva 106c2a25 (image 1906c2a25) =====

void FUN_1906c2a25(void)

{
  return;
}



// ===== continuation @ rva 106c2843 (image 1906c2843) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c2843(void)

{
  FUN_190de3220();
  (*_DAT_182d1e7c8)();
  return;
}



// ===== continuation @ rva 106c2125 (image 1906c2125) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c2125(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = in_stack_00000040;
  FUN_190dd72e0();
  (*_DAT_182d1e6e8)();
  return;
}



// ===== continuation @ rva 106c290a (image 1906c290a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1906c290a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 106c27c9 (image 1906c27c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906c27c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d1e808)();
  return;
}



