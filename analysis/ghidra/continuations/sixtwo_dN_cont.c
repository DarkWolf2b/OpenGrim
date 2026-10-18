// ===== continuation @ rva dd23683 (image 18dd23683) =====

void FUN_18dd23683(void)

{
  return;
}



// ===== continuation @ rva dd0a59b (image 18dd0a59b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd0a5f1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd0a59b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dd14bf1 (image 18dd14bf1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd14bf1(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 2;
  uStack0000000000000078 = 0x28;
  uStack0000000000000070 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_R14 >> 0x28);
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iStack0000000000000068 < 0 || iVar1 <= iStack0000000000000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dd22a92 (image 18dd22a92) =====

void thunk_FUN_18dd0cc85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva dd187ea (image 18dd187ea) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd187ea(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000058;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  auVar4._8_4_ = param_1 << 0x18;
  auVar4._0_8_ = in_stack_00000058 ^ 0x84222325;
  auVar4._12_4_ = 0;
  auVar5 = pshufb(auVar4 ^ _DAT_1823aa290,_DAT_1800170c0);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_1833868b0;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_183386600 ^ uVar3;
  }
  _DAT_1833868b8 = func_0x00018dd23860(SUB161(auVar4 ^ _DAT_1823aa290,5) ^ uVar2);
  uVar2 = (_DAT_1833868b8 & 0x7ffffffff) << 0x10;
  uVar3 = (_DAT_1833868b8 & 0x7ffffffff) << 0xf | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar2;
  _DAT_1833865e0 = in_stack_00000058 | (uint)(param_1 << 0x18);
  _DAT_1833865f8 = (_DAT_1833865f8 ^ uVar2) + _DAT_1833865e0 ^ 0xea1e216b87e21c2e;
  _DAT_183386770 = (_DAT_183386770 * 0x6361eeb616e9619f ^ _DAT_1833865f8) + uVar2;
  _DAT_1833867e0 = _DAT_183386770 ^ _DAT_1833865f8;
  iVar1 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa,in_stack_00000038);
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dd236ef (image 18dd236ef) =====

void FUN_18dd236ef(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva dd234bc (image 18dd234bc) =====

void thunk_FUN_18dd0cc85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva dd1b0bf (image 18dd1b0bf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd1b0bf(void)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *unaff_RBX;
  longlong *unaff_RSI;
  ulonglong uVar3;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000038;
  int iStack0000000000000058;
  int in_stack_00000068;
  
  lVar2 = (**(code **)(*unaff_RSI + 0x6f0))();
  bVar1 = *(byte *)(lVar2 + in_stack_00000068);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar2,2);
  uVar4 = (_DAT_183386850 ^ _DAT_1823aa370) + _DAT_183386350 + 0xf3a4e64f;
  uVar5 = (_DAT_183386350 ^ _UNK_1823aa378) + _DAT_183386850 + 0xa77b1c0d;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183386850 ^ _DAT_1823aa370;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183386350 ^ _UNK_1823aa378;
  uVar3 = (ulonglong)bVar1;
  _DAT_183386350 =
       func_0x00018dd23860((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183386850 + 0xa77b1c0d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183386350 + 0xf3a4e64f));
  uVar4 = ((_DAT_183386350 & 0x3fffffffffff) >> 8) << 0xd | (_DAT_183386350 & 0xff) << 5;
  _DAT_183386728 = (_DAT_183386728 ^ uVar4) + 0xd0fdd967 ^ 0xc660576a67b304da;
  _DAT_183386520 = (_DAT_183386520 * 0x6169050ef40d74c9 ^ _DAT_183386728) + uVar4;
  _DAT_1833863a8 = _DAT_183386520 ^ _DAT_183386728;
  _DAT_1833866d0 = 0xd0fdd967;
  uVar4 = (~_DAT_183386600 + 0xccaa8d8d) *
          ((_DAT_183386678 ^ 0x84222325) + (ulonglong)((uint)_DAT_183386678 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183386558) + (uVar4 & _DAT_183386558);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833867f8 = func_0x00018dd23860((uVar4 | 0x4888aea9) + (ulonglong)((uint)uVar4 & 0x4888aea9))
  ;
  _DAT_1833866a0 =
       (_DAT_1833866a0 ^ _DAT_1833867f8 & 0x7fffffffffffffff) - 0xccaa8d8c ^ 0xc7d349de530561df;
  _DAT_183386440 =
       (_DAT_183386440 * 0x6295521143720e09 ^ _DAT_1833866a0) +
       (_DAT_1833867f8 & 0x7fffffffffffffff);
  _DAT_183386508 = _DAT_183386440 ^ _DAT_1833866a0;
  _DAT_1833864f8 = 0x33557274;
  _DAT_1833868b0 = func_0x00018dd23860(_DAT_183386338 ^ 0xff61ffb831ff8748);
  uVar4 = (_DAT_1833868b0 ^ 0x80000000) & 0xffffffff80000000;
  _DAT_183386448 = _DAT_1833863a0 ^ uVar4 ^ 0xccaa8e8b;
  _DAT_183386478 = (_DAT_183386478 ^ uVar4) + 0xccaa8e8b ^ 0xbc70ce8dc7dcd400;
  _DAT_183386830 = (_DAT_183386830 * -0x784a8205418db25b ^ _DAT_183386478) + uVar4;
  _DAT_183386660 = _DAT_183386830 ^ _DAT_183386478;
  _DAT_1833867d8 = 0xccaa8e8b;
  _DAT_1833863a0 = func_0x00018dd23860(_DAT_183386378 ^ 0xff5affa4d5ff4c41);
  _DAT_183386750 = _DAT_183386558 ^ _DAT_1833863a0 ^ 0x1000000ff;
  _DAT_1833863b8 = (_DAT_1833863b8 ^ _DAT_1833863a0) + 0x1000000ff ^ 0xe540ca0a49c6178e;
  _DAT_1833868f0 = (_DAT_1833868f0 * -0x33afc6b9bb178749 ^ _DAT_1833863b8) + _DAT_1833863a0;
  _DAT_1833864f8 = _DAT_1833868f0 ^ _DAT_1833863b8;
  _DAT_1833867c0 = 0xff;
  uVar4 = (~_DAT_183386460 + 0x1a858501) *
          ((_DAT_183386568 ^ 0x84222325) + (ulonglong)((uint)_DAT_183386568 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183386408) + (uVar4 & _DAT_183386408);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833865b0 = func_0x00018dd23860((uVar4 | 0x9ea7a625) + (ulonglong)((uint)uVar4 & 0x9ea7a625))
  ;
  _DAT_1833866f0 = _DAT_1833866f0 - 0x1a858500 ^ 0xe5e949ce79288e77;
  _DAT_183386460 = _DAT_1833867e0 * -0x4a190d6e60f077b5;
  _DAT_1833867e0 = _DAT_183386460 ^ _DAT_1833866f0;
  _DAT_183386318 = 0xe57a7b00;
  _DAT_183386488 = func_0x00018dd23860(_DAT_183386398 ^ 0xa200793600a4e7);
  uVar4 = _DAT_183386488 ^ 0x1a8585ff;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4 ^
          0x1a858500;
  _DAT_183386730 = _DAT_1833865c8 ^ uVar4 ^ 0x1a8585ff;
  _DAT_1833863c8 = (_DAT_1833863c8 ^ uVar4) + 0x1a8585ff ^ 0xa7402b086cf08735;
  _DAT_183386608 = (_DAT_183386608 * 0x31c3d527736c581f ^ _DAT_1833863c8) + uVar4;
  _DAT_183386658 = _DAT_183386608 ^ _DAT_1833863c8;
  _DAT_1833866a0 = 0x1a8585ff;
  uVar4 = (~_DAT_183386850 + 0xfb3ed1d9) *
          ((_DAT_183386598 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386598 & 0x842223da) * 2);
  uVar4 = (uVar4 | _DAT_183386368) + (uVar4 & _DAT_183386368);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183386398 = func_0x00018dd23860((uVar4 | 0x7f1cf202) + (ulonglong)((uint)uVar4 & 0x7f1cf202))
  ;
  uVar4 = _DAT_183386398 ^ 0xfb3ed1ff;
  _DAT_183386470 = _DAT_183386608 ^ uVar4 ^ 0xfb3ed2d7;
  _DAT_183386320 = (_DAT_183386320 ^ uVar4) + 0xfb3ed2d7 ^ 0x4ec7414476c6d20a;
  _DAT_183386810 = (_DAT_183386810 * -0x682e06906f4b7513 ^ _DAT_183386320) + uVar4;
  _DAT_183386380 = _DAT_183386810 ^ _DAT_183386320;
  _DAT_183386448 = 0xfb3ed2d7;
  _DAT_1833863d0 = func_0x00018dd23860(_DAT_183386388 ^ 0xffc10069b80017b9);
  uVar4 = (_DAT_1833863d0 << 8 | _DAT_1833863d0 >> 0x38) >> 6 | (_DAT_1833863d0 >> 0x38) << 0x3a;
  _DAT_183386468 = _DAT_1833863d0 ^ uVar4 ^ 0x1cff59561;
  _DAT_183386570 = (_DAT_183386570 ^ uVar4) + 0x1cff59561 ^ 0x7310e950f653ee72;
  _DAT_1833868a8 = (_DAT_1833868a8 * 0x25343202fdbbb2a1 ^ _DAT_183386570) + uVar4;
  _DAT_183386690 = _DAT_1833868a8 ^ _DAT_183386570;
  _DAT_183386530 = 0xcff59561;
  _DAT_183386670 = func_0x00018dd23860(_DAT_183386760 + 0xffbf009697ffd7ffU ^ 0xc5);
  _DAT_1833867c8 = (_DAT_1833867c8 ^ _DAT_183386670) + 0x2e0a629d ^ 0x913527515ee0ad42;
  _DAT_183386580 = (_DAT_183386580 * 0x79d5c1df2708d14b ^ _DAT_1833867c8) + _DAT_183386670;
  _DAT_183386648 = _DAT_183386580 ^ _DAT_1833867c8;
  _DAT_183386438 = 0x2e0a629d;
  _DAT_183386418 = func_0x00018dd23860(_DAT_1833863d0 + 0xffbeffa647ffe7ff ^ 0xad);
  uVar4 = (_DAT_183386418 ^ 0xfee00000) & 0xffffffffffe00000;
  _DAT_183386440 = (_DAT_183386440 ^ uVar4) + 0xd0f59962 ^ 0xbff90ae0c8136b0d;
  _DAT_1833866c8 = (_DAT_1833866c8 * -0x5063f3f80e1c07fd ^ _DAT_183386440) + uVar4;
  _DAT_183386548 = _DAT_1833866c8 ^ _DAT_183386440;
  _DAT_183386608 = 0xd0f59962;
  uVar4 = (_DAT_183386820 ^ _DAT_1823aa380) + _DAT_1833863b0 + 0xaa2841b8;
  uVar5 = (_DAT_1833863b0 ^ _UNK_1823aa388) + _DAT_183386820 + 0xa1eb32c4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183386820 ^ _DAT_1823aa380;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833863b0 ^ _UNK_1823aa388;
  _DAT_183386810 =
       func_0x00018dd23860((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183386820 + 0xa1eb32c4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833863b0 + 0xaa2841b8));
  uVar4 = _DAT_183386810 ^ 0xafeb72dd;
  _DAT_1833866c8 = _DAT_183386800 ^ uVar4 ^ 0xcff59561;
  _DAT_1833865a0 = (_DAT_1833865a0 ^ uVar4) + 0xcff59561 ^ 0xb4c88bd9fb57d94b;
  _DAT_1833868e0 = (_DAT_1833868e0 * -0x66b851f7898b3ee3 ^ _DAT_1833865a0) + uVar4;
  _DAT_1833865f0 = _DAT_1833868e0 ^ _DAT_1833865a0;
  _DAT_1833867b8 = 0xcff59561;
  _DAT_183386770 = func_0x00018dd23860(_DAT_183386538 + 0x1f00841cffddff ^ 0xc0);
  uVar4 = (ulonglong)(~(uint)_DAT_183386770 & 0xcff59561);
  _DAT_1833864e8 = uVar4 << 6;
  uVar4 = uVar4 << 5 | _DAT_1833864e8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar5 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar5 >> 0x10 | uVar5;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_1833864e8 =
       (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       _DAT_1833864e8;
  _DAT_183386520 = _DAT_183386520 ^ _DAT_1833864e8 ^ 0xbd67f1c88a5227f0;
  _DAT_183386350 = (_DAT_183386350 * -0x27fa00bbadb55ff1 ^ _DAT_183386520) + _DAT_1833864e8;
  _DAT_183386610 = _DAT_183386350 ^ _DAT_183386520;
  _DAT_1833866c0 = 0;
  uVar4 = ((_DAT_183386548 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386548 & 0x842223da) * 2) *
          -_DAT_183386480;
  uVar4 = (uVar4 | _DAT_183386420) + (uVar4 & _DAT_183386420);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183386590 = func_0x00018dd23860((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  uVar4 = (ulonglong)((uint)_DAT_183386590 ^ 0xff) << 0x2f | _DAT_183386590 >> 0x11;
  _DAT_1833864b8 = _DAT_183386538 ^ uVar4 ^ 0xff;
  _DAT_1833866f8 = (_DAT_1833866f8 ^ uVar4) + 0xff ^ 0x63f88df0b0af4873;
  _DAT_183386400 = (_DAT_183386400 * 0x7bdb258036fc3fab ^ _DAT_1833866f8) + uVar4;
  _DAT_183386300 = _DAT_183386400 ^ _DAT_1833866f8;
  _DAT_1833867c8 = 0xff;
  _DAT_183386858 = func_0x00018dd23860(_DAT_1833865f8 ^ 0x230084e00019d4);
  _DAT_183386480 = (_DAT_183386480 ^ _DAT_183386858 ^ 0xfef7bbfa) + 0x1084405 ^ 0x31817033d51fb764;
  _DAT_183386460 =
       (_DAT_183386460 * 0x542d95ac4d880ec5 ^ _DAT_183386480) + (_DAT_183386858 ^ 0xfef7bbfa);
  _DAT_1833867e0 = _DAT_183386460 ^ _DAT_183386480;
  _DAT_1833868f8 = 0x1084405;
  uVar4 = (_DAT_183386430 ^ _DAT_1823aa390) + _DAT_183386510 + 0x7ad598df;
  uVar5 = (_DAT_183386510 ^ _UNK_1823aa398) + _DAT_183386430 + 0x1084405;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183386430 ^ _DAT_1823aa390;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183386510 ^ _UNK_1823aa398;
  _DAT_1833865a0 =
       func_0x00018dd23860((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183386430 + 0x1084405) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183386510 + 0x7ad598df));
  _DAT_183386878 = _DAT_183386878 ^ _DAT_1833865a0 & 0x7fffffffff ^ 0x9ca15f715df0724e;
  _DAT_1833867a8 =
       (_DAT_1833867a8 * 0x76301fb24a3618b7 ^ _DAT_183386878) + (_DAT_1833865a0 & 0x7fffffffff);
  _DAT_1833866b8 = _DAT_1833867a8 ^ _DAT_183386878;
  _DAT_183386768 = 0;
  uVar4 = ((_DAT_1833867d0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833867d0 & 0x842223da) * 2) *
          -_DAT_183386518;
  uVar4 = (uVar4 | _DAT_183386830) + (uVar4 & _DAT_183386830);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183386390 = func_0x00018dd23860((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  uVar4 = _DAT_183386390 << 0x38 | _DAT_183386390 >> 8;
  _DAT_183386680 = _DAT_1833863b0 ^ uVar4 ^ 0xff;
  _DAT_183386580 = (_DAT_183386580 ^ uVar4) + 0xff ^ 0x942ce00ed760ca7f;
  _DAT_1833865c0 = (_DAT_1833865c0 * 0xa7cc256e6bcb631 ^ _DAT_183386580) + uVar4;
  _DAT_183386578 = _DAT_1833865c0 ^ _DAT_183386580;
  _DAT_1833863b8 = 0xff;
  _DAT_1833863c8 = func_0x00018dd23860(_DAT_183386520 ^ 0x1f007c1cffdd28);
  _DAT_1833867d8 = _DAT_1833867d8 ^ _DAT_1833863c8 ^ 0xde37b3d2 ^ 0x7f27d347b3a68bac;
  _DAT_183386330 =
       (_DAT_183386330 * 0x69d755ba1876fc59 ^ _DAT_1833867d8) + (_DAT_1833863c8 ^ 0xde37b3d2);
  _DAT_183386848 = _DAT_183386330 ^ _DAT_1833867d8;
  _DAT_183386430 = 0;
  uVar4 = _iStack0000000000000058 ^ 0x84222325 ^ _DAT_1833868c8;
  lVar2 = (_iStack0000000000000058 ^ 0x84222325) + _DAT_183386688;
  uVar5 = uVar4 + lVar2;
  uVar6 = (uVar3 ^ _DAT_183386688) + _DAT_1833868c8 + uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3 ^ _DAT_183386688;
  _DAT_183386528 =
       func_0x00018dd23860((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833868c8 + uVar3) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  uVar4 = uVar3 ^ _DAT_183386528;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar4) <<
          0x34 | _DAT_183386528 >> 0xc;
  _DAT_183386890 = (_DAT_183386890 ^ uVar4) + (_iStack0000000000000058 | uVar3) ^ 0x4189f82e72e136cb
  ;
  _DAT_183386358 = (_DAT_183386358 * 0x7bbef71bafce6c67 ^ _DAT_183386890) + uVar4;
  _DAT_183386368 = _DAT_183386358 ^ _DAT_183386890;
  _DAT_183386598 = _iStack0000000000000058 | uVar3;
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



// ===== continuation @ rva dd22fc5 (image 18dd22fc5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd22fc5(void)

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



// ===== continuation @ rva dd22951 (image 18dd22951) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd22951(void)

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



// ===== continuation @ rva dcf9f57 (image 18dcf9f57) =====

void FUN_18dcf9f57(void)

{
  return;
}



// ===== continuation @ rva dcf71a7 (image 18dcf71a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcf71a7(void)

{
  FUN_190ddce00();
  (*_DAT_1823a4898)();
  return;
}



// ===== continuation @ rva dcfa97a (image 18dcfa97a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfa97a(void)

{
  (*_DAT_1823a4998)();
  return;
}



// ===== continuation @ rva dcf95db (image 18dcf95db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcf95db(void)

{
  (*_DAT_1823a4868)();
  return;
}



// ===== continuation @ rva dcfab62 (image 18dcfab62) =====

void FUN_18dcfab62(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dcfa573 (image 18dcfa573) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfa573(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dcfa7c7 (image 18dcfa7c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfa7c7(void)

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



// ===== continuation @ rva dcfa2e0 (image 18dcfa2e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfa2e0(void)

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



// ===== continuation @ rva dcfab53 (image 18dcfab53) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfab53(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1823a4a28)();
  return;
}



// ===== continuation @ rva dcfaa1a (image 18dcfaa1a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfaa1a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dcf97c1 (image 18dcf97c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcf97c1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dcf9549 (image 18dcf9549) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcf9549(void)

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



// ===== continuation @ rva dcfd84a (image 18dcfd84a) =====

void FUN_18dcfd84a(void)

{
  return;
}



// ===== continuation @ rva dcfd6ad (image 18dcfd6ad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfd6ad(void)

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



// ===== continuation @ rva dcfe364 (image 18dcfe364) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfe364(void)

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



// ===== continuation @ rva dcfe30f (image 18dcfe30f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfe30f(void)

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



// ===== continuation @ rva dd0643b (image 18dd0643b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd0643b(void)

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



// ===== continuation @ rva dcfd940 (image 18dcfd940) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfd940(void)

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



// ===== continuation @ rva dcfd866 (image 18dcfd866) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfd866(void)

{
  longlong lVar1;
  longlong *unaff_R13;
  
  lVar1 = (**(code **)(*unaff_R13 + 0x568))();
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dcfd7eb (image 18dcfd7eb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfd7eb(void)

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



// ===== continuation @ rva dcfe0e5 (image 18dcfe0e5) =====

undefined8 thunk_FUN_18dcfe89f(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva dcfee49 (image 18dcfee49) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfee49(void)

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



// ===== continuation @ rva dcfe7af (image 18dcfe7af) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfe7af(void)

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



// ===== continuation @ rva dd06832 (image 18dd06832) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd06832(void)

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



// ===== continuation @ rva dd067de (image 18dd067de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd067de(void)

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



// ===== continuation @ rva dd076a5 (image 18dd076a5) =====

void FUN_18dd076a5(void)

{
  return;
}



// ===== continuation @ rva dd073c6 (image 18dd073c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd073c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_1823a7708)();
  return;
}



// ===== continuation @ rva dd07671 (image 18dd07671) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd07671(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1823a72c8)();
  return;
}



// ===== continuation @ rva dd06afd (image 18dd06afd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd06afd(void)

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



// ===== continuation @ rva dd06d59 (image 18dd06d59) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd06d59(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1823a7748)();
  return;
}



// ===== continuation @ rva dd076b4 (image 18dd076b4) =====

void FUN_18dd076b4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd07227 (image 18dd07227) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd07227(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dd06fd0 (image 18dd06fd0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd06fd0(void)

{
  FUN_190dd72e0();
  (*_DAT_1823a75f8)();
  return;
}



// ===== continuation @ rva dd06ec3 (image 18dd06ec3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd06ec3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dd075de (image 18dd075de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd075de(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dd097c6 (image 18dd097c6) =====

void FUN_18dd097c6(void)

{
  return;
}



// ===== continuation @ rva dd0782c (image 18dd0782c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd0782c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1823a8078)();
  return;
}



// ===== continuation @ rva dd097da (image 18dd097da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd097da(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1823a7db8)();
  return;
}



// ===== continuation @ rva dd0948b (image 18dd0948b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd0948b(void)

{
  FUN_190dd72e0();
  (*_DAT_1823a8128)();
  return;
}



// ===== continuation @ rva dd08a59 (image 18dd08a59) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd08a59(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000ba;
  undefined2 uStack00000000000000be;
  undefined4 uStack00000000000000f0;
  
  uStack00000000000000f0 = 0x76902871;
  uVar1 = rdtsc();
  uStack00000000000000ba = 0x3a0020;
  uStack00000000000000be = 0x20;
  (*_DAT_1823a7ee8)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



// ===== continuation @ rva dd0a304 (image 18dd0a304) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd0a304(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823a8068)();
  return;
}



// ===== continuation @ rva dd08345 (image 18dd08345) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd08345(void)

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



// ===== continuation @ rva dd0a36a (image 18dd0a36a) =====

void FUN_18dd0a36a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dd0993f (image 18dd0993f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd0993f(void)

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



// ===== continuation @ rva dd0a132 (image 18dd0a132) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd0a132(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1823a7ce8)();
  return;
}



// ===== continuation @ rva dd09cfa (image 18dd09cfa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd09cfa(void)

{
  FUN_190dd72e0();
  (*_DAT_1823a79f8)();
  return;
}



// ===== continuation @ rva dd08fd8 (image 18dd08fd8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd08fd8(void)

{
  (*_DAT_1823a84e8)();
  return;
}



// ===== continuation @ rva dd092ba (image 18dd092ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd092ba(void)

{
  FUN_190ddfc90();
  (*_DAT_1823a7b98)();
  return;
}



