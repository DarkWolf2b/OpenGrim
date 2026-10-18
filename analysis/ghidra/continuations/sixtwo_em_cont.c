// ===== continuation @ rva d1e1386 (image 18d1e1386) =====

void FUN_18d1e1386(void)

{
  return;
}



// ===== continuation @ rva d1c6e8b (image 18d1c6e8b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d1c6ee1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d1c6e8b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d1e1286 (image 18d1e1286) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1e1286(void)

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



// ===== continuation @ rva d1c9cc5 (image 18d1c9cc5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d1ca032 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d1c9cc5(undefined8 param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uStack0000000000000048;
  undefined4 uStack00000000000000bc;
  
  uVar2 = (ulonglong)param_3 ^ 0x84222325 ^ _DAT_18334d9d0;
  lVar1 = ((ulonglong)param_3 ^ 0x84222325) + _DAT_18334d870;
  uVar5 = uVar2 + lVar1;
  uVar6 = (_DAT_18334d870 ^ 8) + _DAT_18334d9d0 + 8;
  uVar2 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar2;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18334d870 ^ 8;
  uStack0000000000000048 = param_3;
  uStack00000000000000bc = param_2;
  _DAT_18334d900 =
       func_0x00018d1e1570((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18334d9d0 + 8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar1);
  uVar3 = _DAT_1801a1250 ^ param_3;
  uVar7 = param_3 & _DAT_1801a1250;
  uVar4 = param_3 | _DAT_1801a1250;
  uVar2 = _DAT_18334d900 << 0x31 | (_DAT_18334d900 & 0x7fffffffffffffff) >> 0xf;
  lVar1 = ((ulonglong)uVar3 * (ulonglong)_DAT_182176cc0 << 0x20) +
          (ulonglong)_DAT_182176cb0 * (ulonglong)uVar3 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_182176ca0 << 0x20) +
          (ulonglong)_DAT_182176c90 * (ulonglong)uVar4 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_182176c80 << 0x20 |
          (ulonglong)_DAT_182176c70 * (ulonglong)uVar7) +
          ((ulonglong)param_3 * (ulonglong)_DAT_182176c60 << 0x20) +
          (ulonglong)_DAT_182176c50 * (ulonglong)param_3;
  _DAT_18334daf0 =
       ((ulonglong)_DAT_182176c20 * (ulonglong)uVar3 << 0x20) +
       (ulonglong)_DAT_182176c10 * (ulonglong)uVar3 +
       ((ulonglong)_DAT_182176c00 * (ulonglong)uVar4 << 0x20) +
       (ulonglong)_DAT_182176bf0 * (ulonglong)uVar4 +
       ((ulonglong)_DAT_182176be0 * (ulonglong)uVar7 << 0x20 |
       (ulonglong)_DAT_182176bd0 * (ulonglong)uVar7) +
       ((ulonglong)_DAT_182176bc0 * (ulonglong)param_3 << 0x20) +
       (ulonglong)_DAT_182176bb0 * (ulonglong)param_3 +
       (-(((ulonglong)(param_3 ^ 0xffffffff) * (ulonglong)_DAT_182176ce0 + _DAT_182176cf0 << 0x20) +
         (ulonglong)_DAT_182176cd0 * (ulonglong)(param_3 ^ 0xffffffff)) - lVar1) +
       0xb840c047ea61d8e1;
  _DAT_18334d730 = _DAT_18334d850 ^ uVar2 ^ _DAT_18334daf0;
  _DAT_18334da30 = (_DAT_18334da30 ^ uVar2) + _DAT_18334daf0 ^ 0xfdeae552c79f3a06;
  _DAT_18334dae0 = (_DAT_18334dae0 * 0x50df58f9e085a01d ^ _DAT_18334da30) + uVar2;
  _DAT_18334d818 = _DAT_18334dae0 ^ _DAT_18334da30;
  _DAT_18334daf0 = _DAT_18334daf0 & 0xffffffff;
  FUN_190dd72e0(lVar1,*_DAT_18301ee50 + 0x2e9,0x12);
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d1c7659 (image 18d1c7659) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d1c86ee */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d1c7659(void)

{
  longlong *unaff_RSI;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined2 in_stack_000000f8;
  undefined2 uStack00000000000000fa;
  undefined2 uStack00000000000000fc;
  undefined2 uStack00000000000000fe;
  undefined2 in_stack_00000100;
  undefined4 uStack000000000000013c;
  
  uStack0000000000000048 = 0x4f5965fc5701;
  uStack0000000000000038 = in_stack_00000040;
  _DAT_18334d950 = func_0x00018d1e1570(_DAT_18334da40 + 0x117b7ea15df7e455U ^ 0xd3);
  _DAT_18334d8b0 = _DAT_18334d8f8 ^ _DAT_18334d950 ^ 0xda8196c3a9b85687;
  _DAT_18334d888 = (_DAT_18334d888 ^ _DAT_18334d950) + 0xda8196c3a9b85687 ^ 0x85e1ada6e832ceb1;
  _DAT_18334d938 =
       (_DAT_18334d938 * 0x5c845eb7cab57a33 ^ _DAT_18334d888) + _DAT_18334d950 ^ _DAT_18334d888;
  _DAT_18334d7d8 = 0xda8196c3a9b85687;
  uVar2 = (_DAT_18334d968 ^ _DAT_182176a80) + _DAT_18334d7e8 + 0xda8196c32d9a75a2;
  uVar3 = (_DAT_18334d7e8 ^ _UNK_182176a88) + _DAT_18334d968 + 0x257eb895bc44007a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18334d968 ^ _DAT_182176a80;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334d7e8 ^ _UNK_182176a88;
  _DAT_18334d958 =
       func_0x00018d1e1570((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334d968 + 0x257eb895bc44007a) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18334d7e8 + 0xda8196c32d9a75a2));
  uVar2 = _DAT_18334d958 & 0xffffffffff800000;
  _DAT_18334d900 = _DAT_18334dab0 ^ uVar2 ^ 0x4f5965fc5701;
  _DAT_18334d938 = (_DAT_18334d938 ^ uVar2) + 0x4f5965fc5701 ^ 0xc681ca08155778a7;
  _DAT_18334d740 = (_DAT_18334d740 * -0x322a650c0ce1b8b7 ^ _DAT_18334d938) + uVar2;
  _DAT_18334d9d0 = _DAT_18334d740 ^ _DAT_18334d938;
  _DAT_18334d850 = 0x4f5965fc5701;
  _DAT_18334d810 = func_0x00018d1e1570(_DAT_18334d890 ^ 0x4c877c048ab8a117);
  _DAT_18334d9e0 =
       (_DAT_18334d9e0 ^ _DAT_18334d810 * -0x5bb7945dc10e4317) + 0x867b374c7c7c6458 ^
       0x25ac55f1534fef55;
  _DAT_18334d960 =
       (_DAT_18334d960 * -0x3f72ad0a52a8ae9b ^ _DAT_18334d9e0) +
       _DAT_18334d810 * -0x5bb7945dc10e4317;
  _DAT_18334da70 = _DAT_18334d960 ^ _DAT_18334d9e0;
  _DAT_18334d910 = -0x7984c8b383839ba8;
  uVar2 = (~_DAT_18334d718 + 0x7984c8b383839ba9) *
          ((_DAT_18334d908 ^ 0x4f59e1de7424) + (_DAT_18334d908 & 0x4f59e1de7424) * 2);
  uVar2 = (uVar2 | _DAT_18334da20) + (uVar2 & _DAT_18334da20);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18334d700 = func_0x00018d1e1570((uVar2 | 0x798487ea625def8c) + (uVar2 & 0x798487ea625def8c));
  uVar2 = _DAT_18334d700 & 0x4f5965fc5701;
  _DAT_18334d7d8 = _DAT_18334dad0 ^ uVar2 ^ 0x7985180ce97ff2a9;
  _DAT_18334d8b0 = (_DAT_18334d8b0 ^ uVar2) + 0x7985180ce97ff2a9 ^ 0xf10a6778279435de;
  _DAT_18334d8a0 = (_DAT_18334d8a0 * 0x3c8b4713299d6831 ^ _DAT_18334d8b0) + uVar2;
  _DAT_18334da08 = _DAT_18334d8a0 ^ _DAT_18334d8b0;
  _DAT_18334d7b0 = 0x7985180ce97ff2a9;
  uVar2 = (_DAT_18334d838 ^ _DAT_182176a90) + _DAT_18334da50 + 0x7985180c6d5dd18c;
  uVar3 = (_DAT_18334da50 ^ _UNK_182176a98) + _DAT_18334d838 + 0x867b374c7c7c6458;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18334d838 ^ _DAT_182176a90;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334da50 ^ _UNK_182176a98;
  _DAT_18334d8f8 =
       func_0x00018d1e1570((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334d838 + 0x867b374c7c7c6458) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18334da50 + 0x7985180c6d5dd18c));
  _DAT_18334d898 = _DAT_18334d718 ^ _DAT_18334d8f8 ^ 0x4f5965fc5701;
  _DAT_18334d7c8 = (_DAT_18334d7c8 ^ _DAT_18334d8f8) + 0x4f5965fc5701 ^ 0x8d11f55ba93cc218;
  _DAT_18334d9a8 = (_DAT_18334d9a8 * -0x5bffe40cd5a41faf ^ _DAT_18334d7c8) + _DAT_18334d8f8;
  _DAT_18334da70 = _DAT_18334d9a8 ^ _DAT_18334d7c8;
  _DAT_18334d828 = 0x4f5965fc5701;
  _DAT_18334d860 = func_0x00018d1e1570(_DAT_18334d910 + 0x2be39b3b494d7378U ^ 0x1e);
  uVar2 = ~_DAT_18334d860 & 0x4f5965fc5701;
  _DAT_18334d930 = _DAT_18334d9a0 ^ uVar2 ^ 0x897dcfcf1366a7ef;
  _DAT_18334d7a8 = (_DAT_18334d7a8 ^ uVar2) + 0x897dcfcf1366a7ef ^ 0x907de01022a8dcff;
  _DAT_18334d788 = (_DAT_18334d788 * -0x72e7a85944220dc9 ^ _DAT_18334d7a8) + uVar2;
  _DAT_18334d700 = _DAT_18334d788 ^ _DAT_18334d7a8;
  _DAT_18334d8f8 = 0x897dcfcf1366a7ef;
  _DAT_18334d860 = func_0x00018d1e1570(_DAT_18334dad8 + 0xc32af5ba486fd192U ^ 0x94);
  uVar2 = _DAT_18334d860 ^ 0x7682300040910810;
  _DAT_18334d7c8 = _DAT_18334d7d8 ^ uVar2 ^ 0x4f5965fc5701;
  _DAT_18334d9f8 = (_DAT_18334d9f8 ^ uVar2) + 0x4f5965fc5701 ^ 0xf73683f036337111;
  _DAT_18334d8a0 = (_DAT_18334d8a0 * -0x2af78998ae4d3f75 ^ _DAT_18334d9f8) + uVar2;
  _DAT_18334d720 = _DAT_18334d8a0 ^ _DAT_18334d9f8;
  _DAT_18334d878 = 0x4f5965fc5701;
  _DAT_18334da08 = func_0x00018d1e1570(_DAT_18334d888 ^ 0x30f31058fdcb598d);
  uVar2 = _DAT_18334da08 << 9 | _DAT_18334da08 >> 0x37;
  _DAT_18334d8a8 = (_DAT_18334d8a8 ^ uVar2) + 0x2910cb512f783027 ^ 0x9b6b42051fdf875f;
  _DAT_18334da88 = (_DAT_18334da88 * 0x6b008a0b74a12eff ^ _DAT_18334d8a8) + uVar2;
  _DAT_18334d720 = _DAT_18334da88 ^ _DAT_18334d8a8;
  _DAT_18334d8f0 = 0x2910cb512f783027;
  uVar2 = (~_DAT_18334d740 + 0xd4261f2e9194c757) *
          ((_DAT_18334d940 ^ 0xfd36d47f3aced454) + (_DAT_18334d940 & 0x7d36d47f3aced454) * 2);
  uVar2 = (uVar2 | _DAT_18334da28) + (uVar2 & _DAT_18334da28);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18334d9c0 = func_0x00018d1e1570((uVar2 | 0x2910cb51ab5a1302) + (uVar2 & 0x2910cb51ab5a1302));
  uVar2 = _DAT_18334d9c0 >> 1 | _DAT_18334d9c0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_18334d9c0;
  uVar2 = uVar2 << 0x25 | uVar2 >> 0x1b;
  _DAT_18334d898 = (_DAT_18334d898 ^ uVar2) + 0xd426142e9084c750 ^ 0x912e52e8e1ef726e;
  _DAT_18334d810 = (_DAT_18334d810 * -0x52679261eff766c9 ^ _DAT_18334d898) + uVar2;
  _DAT_18334dae8 = _DAT_18334d810 ^ _DAT_18334d898;
  _DAT_18334d700 = 0xd426142e9084c750;
  uVar2 = (_DAT_18334d8f8 ^ _DAT_182176aa0) + _DAT_18334d990 + 0x2910cb51ab5a1302;
  uVar3 = (_DAT_18334d990 ^ _UNK_182176aa8) + _DAT_18334d8f8 + 0xa84c285d21098ea0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18334d8f8 ^ _DAT_182176aa0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334d990 ^ _UNK_182176aa8;
  _DAT_18334d790 =
       func_0x00018d1e1570((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334d8f8 + 0xa84c285d21098ea0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18334d990 + 0x2910cb51ab5a1302));
  uVar2 = _DAT_18334d790 * -0x7caf0e5bcee94e75;
  _DAT_18334d8a0 = _DAT_18334da20 ^ uVar2 ^ 0xd15cf3ae5081bec7;
  _DAT_18334d960 = (_DAT_18334d960 ^ uVar2) + 0xd15cf3ae5081bec7 ^ 0xc807c01302ebefd8;
  _DAT_18334d818 = (_DAT_18334d818 * 0xc00bfa25890fe95 ^ _DAT_18334d960) + uVar2;
  _DAT_18334da18 = _DAT_18334d818 ^ _DAT_18334d960;
  _DAT_18334d7e0 = -0x2ea30c51af7e4139;
  _DAT_18334d898 = func_0x00018d1e1570(_DAT_18334d710 + 0xffe1007c23001dffU ^ 0x92);
  _DAT_18334d928 = _DAT_18334d898 ^ 0xd15cf3ae5081bec7;
  _DAT_18334d748 = _DAT_18334d748 ^ _DAT_18334d928 ^ 0x2eb7933170d65d85;
  _DAT_18334d930 = (_DAT_18334d930 * 0x40b0a542c6b49efd ^ _DAT_18334d748) + _DAT_18334d928;
  _DAT_18334d888 = _DAT_18334d930 ^ _DAT_18334d748;
  _DAT_18334d9e0 = 0;
  uVar2 = ((_DAT_18334d9a0 ^ 0x4f59e1de7424) + (_DAT_18334d9a0 & 0x4f59e1de7424) * 2) *
          -_DAT_18334daa0;
  uVar2 = (uVar2 | _DAT_18334da18) + (uVar2 & _DAT_18334da18);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18334d808 = func_0x00018d1e1570((uVar2 | 0x4f59e1de7424) + (uVar2 & 0x4f59e1de7424));
  _DAT_18334d7b0 = _DAT_18334da50 ^ _DAT_18334d808 ^ 0x4f5965fc5701;
  _DAT_18334d700 = (_DAT_18334d700 ^ _DAT_18334d808) + 0x4f5965fc5701 ^ 0xcc76a87b367c41ec;
  _DAT_18334da68 = (_DAT_18334da68 * -0x99ec7bf33dec00f ^ _DAT_18334d700) + _DAT_18334d808;
  _DAT_18334d8e0 = _DAT_18334da68 ^ _DAT_18334d700;
  _DAT_18334d860 = 0x4f5965fc5701;
  uVar2 = func_0x00018d1e1570(_DAT_18334d7e0 + 0x8018c6c45ae8ef01U ^ 0xce);
  _DAT_18334d928 =
       (_DAT_18334d928 ^ uVar2 ^ 0x2c92b804113088f) + 0x2c92b804113088e ^ 0x5a0db8e5f69b5e35;
  _DAT_18334d818 =
       (_DAT_18334d818 * 0x48859350d4061cb1 ^ _DAT_18334d928) + (uVar2 ^ 0x2c92b804113088f);
  _DAT_18334d898 = _DAT_18334d818 ^ _DAT_18334d928;
  _DAT_18334da78 = 0x2c92b804113088e;
  uVar2 = (_DAT_18334dae0 ^ _DAT_182176ab0) + _DAT_18334daf8 + 0xfd36d47f3aced454;
  uVar3 = (_DAT_18334daf8 ^ _UNK_182176ab8) + _DAT_18334dae0 + 0x2c92b804113088e;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18334dae0 ^ _DAT_182176ab0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334daf8 ^ _UNK_182176ab8;
  _DAT_18334d948 =
       func_0x00018d1e1570((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334dae0 + 0x2c92b804113088e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18334daf8 + 0xfd36d47f3aced454));
  _DAT_18334d738 = _DAT_18334d738 ^ _DAT_18334d708 ^ 0x17755b102820649d;
  _DAT_18334d848 = (_DAT_18334d848 * -0x61d0c5c7d10d7793 ^ _DAT_18334d738) + _DAT_18334d708;
  _DAT_18334d778 = _DAT_18334d848 ^ _DAT_18334d738;
  _DAT_18334d988 = 0;
  uVar2 = (_DAT_18334da48 ^ 0x4f59e1de7424) + _DAT_18334d798 + 0x4f59e1de7424;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18334da48 ^ 0x4f59e1de7424;
  uVar3 = ((_DAT_18334d798 + _DAT_18334da48) * 0x2000 | _DAT_18334d798 + _DAT_18334da48 >> 0x33) ^
          _DAT_18334d798;
  _DAT_18334dac8 =
       func_0x00018d1e1570((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_18334da48 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18334d798 + 0x4f59e1de7424));
  uVar2 = _DAT_18334dac8 & 0x4f5965fc5701;
  _DAT_18334d868 = _DAT_18334d848 ^ uVar2 ^ 0x4f5965fc5701;
  _DAT_18334d700 = (_DAT_18334d700 ^ uVar2) + 0x4f5965fc5701 ^ 0x467a92385ff01add;
  _DAT_18334dae0 = (_DAT_18334dae0 * 0x2821f8e13de16723 ^ _DAT_18334d700) + uVar2;
  _DAT_18334d7c8 = _DAT_18334dae0 ^ _DAT_18334d700;
  _DAT_18334d748 = 0x4f5965fc5701;
  uVar2 = (~_DAT_18334d818 + 0xfd12c06f18646702) *
          ((_DAT_18334d948 ^ 0xfd12c06f9c464424) + (_DAT_18334d948 & 0x7d12c06f9c464424) * 2);
  uVar2 = (uVar2 | _DAT_18334d980) + (uVar2 & _DAT_18334d980);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018d1e1570((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  _DAT_18334d930 = uVar2 ^ _DAT_18334d7a8 ^ 0x6e4f52602b5329fa;
  _DAT_18334d898 = (_DAT_18334d898 * 0x1fd96b24dfb9cec9 ^ _DAT_18334d930) + _DAT_18334d7a8;
  _DAT_18334d998 = _DAT_18334d898 ^ _DAT_18334d930;
  _DAT_18334da50 = 0;
  uVar1 = func_0x00018d1e1570(_DAT_18334dae8 ^ 0x28cbff6123cebdc0);
  uVar2 = ~_DAT_18334d880 & 0x4f5965fc5701;
  uVar3 = uVar2 - (~_DAT_18334d880 >> 1 & 0x50410540100);
  uVar3 = (uVar3 & 0x3333333333333301) + (uVar3 >> 2 & 0x3333333333333300);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f01) * 0x101010101010101 >> 0x38) << 6 ^ uVar2;
  _DAT_18334d908 = _DAT_18334d820 ^ uVar2 ^ 0x4f5965fc5701;
  _DAT_18334d8a8 = (_DAT_18334d8a8 ^ uVar2) + 0x4f5965fc5701 ^ 0x631fbff11bb6b345;
  _DAT_18334d9f8 = (_DAT_18334d9f8 * 0x1aeaa73d77374b41 ^ _DAT_18334d8a8) + uVar2;
  _DAT_18334d7d0 = _DAT_18334d9f8 ^ _DAT_18334d8a8;
  _DAT_18334da98 = 0x4f5965fc5701;
  uStack000000000000013c = 0x48e81b73;
  rdtsc();
  in_stack_000000e0 = 0x2f005300450044;
  rdtsc();
  in_stack_000000e8 = 0x2f004300420043;
  rdtsc();
  in_stack_000000f0 = 0x610050006f004e;
  rdtsc();
  in_stack_000000f8 = 100;
  uStack00000000000000fa = 100;
  uStack00000000000000fc = 0x69;
  uStack00000000000000fe = 0x6e;
  rdtsc();
  in_stack_00000100 = 0x67;
  uVar1 = (**(code **)(*unaff_RSI + 0x518))(uVar1,&stack0x000000e0,0x11);
  FUN_190dd72e0(uVar1,*_DAT_18301ee50 + 0xb4a,0x2e);
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d1e13f2 (image 18d1e13f2) =====

void FUN_18d1e13f2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva d1e12a0 (image 18d1e12a0) =====

void thunk_FUN_18d1c8fa0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva d1c6f1a (image 18d1c6f1a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d1c6f65 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d1c6f1a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d1e058d (image 18d1e058d) =====

void thunk_FUN_18d1c8fa0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva d1aa9a7 (image 18d1aa9a7) =====

void FUN_18d1aa9a7(void)

{
  return;
}



// ===== continuation @ rva d1a6fe7 (image 18d1a6fe7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1a6fe7(void)

{
  FUN_190ddce00();
  (*_DAT_18216c8f8)();
  return;
}



// ===== continuation @ rva d1ac160 (image 18d1ac160) =====

void FUN_18d1ac160(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d1aa664 (image 18d1aa664) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1aa664(void)

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



// ===== continuation @ rva d1ac13f (image 18d1ac13f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1ac13f(void)

{
  (*_DAT_18216c968)();
  return;
}



// ===== continuation @ rva d1abda5 (image 18d1abda5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1abda5(void)

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



// ===== continuation @ rva d1aae40 (image 18d1aae40) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1aae40(void)

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



// ===== continuation @ rva d1aac0e (image 18d1aac0e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1aac0e(void)

{
  FUN_190ddfc90();
  (*_DAT_18216c768)();
  return;
}



// ===== continuation @ rva d1ac14a (image 18d1ac14a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1ac14a(void)

{
  (*_DAT_18216d118)();
  return;
}



// ===== continuation @ rva d1aa78a (image 18d1aa78a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1aa78a(void)

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



// ===== continuation @ rva d1ab96b (image 18d1ab96b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1ab96b(void)

{
  (*_DAT_18216ce68)();
  return;
}



// ===== continuation @ rva d1aa310 (image 18d1aa310) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1aa310(void)

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



// ===== continuation @ rva d1af7d6 (image 18d1af7d6) =====

void FUN_18d1af7d6(void)

{
  return;
}



// ===== continuation @ rva d1ac38d (image 18d1ac38d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1ac38d(void)

{
  FUN_190ddce00();
  (*_DAT_18216ea78)();
  return;
}



// ===== continuation @ rva d1b13c2 (image 18d1b13c2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b13c2(void)

{
  (*_DAT_18216f498)();
  return;
}



// ===== continuation @ rva d1b3285 (image 18d1b3285) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b3285(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18216f7b8)();
  return;
}



// ===== continuation @ rva d1ac475 (image 18d1ac475) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1ac475(ulonglong param_1)

{
  char cVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_R14;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  undefined1 auVar40 [16];
  ulonglong uVar41;
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uStack0000000000000080;
  uint uStack0000000000000084;
  ulonglong uStack00000000000000a0;
  
  uVar8 = _DAT_18216dda8;
  uVar3 = _DAT_18216dda0;
  uStack00000000000000a0 = _DAT_18216dda0 ^ 0x84222325;
  uVar12 = (uStack00000000000000a0 ^ in_RAX) + uStack00000000000000a0 + param_1;
  uVar19 = (param_1 ^ 0xd02c6957d576c9be) + in_RAX + 0xd02c6957d576c9be;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uStack00000000000000a0 ^ in_RAX;
  uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ param_1 ^ 0xd02c6957d576c9be;
  _DAT_18334cf80 =
       func_0x00018d1b3370((uVar19 << 0x1d | uVar19 >> 0x23) - (in_RAX + 0xd02c6957d576c9be) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (uStack00000000000000a0 + param_1));
  uVar12 = (_DAT_18334cf80 << 0x20 | _DAT_18334cf80 >> 0x20) ^ 0xd02c6957d576c9be;
  uVar6 = uVar3 | 0xd02c6957d576c9be;
  _DAT_18334d4d0 = (_DAT_18334d4d0 ^ uVar12) + uVar6 ^ 0xd2ad50e9cada95f9;
  _DAT_18334d370 = (_DAT_18334d370 * 0x2e326a6341ed3ced ^ _DAT_18334d4d0) + uVar12;
  _DAT_18334d0a0 = _DAT_18334d370 ^ _DAT_18334d4d0;
  uVar12 = ((_DAT_18334d4d0 ^ uVar8 ^ 0x84222325) + ((uVar8 ^ 0x84222325) & _DAT_18334d4d0) * 2) *
           (0x4c9188aae29ee8fb - _DAT_18334d058);
  uVar12 = (uVar12 | _DAT_18334d2a0) + (uVar12 & _DAT_18334d2a0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18334d320 = uVar6;
  _DAT_18334d468 =
       func_0x00018d1b3370((uVar8 ^ 0x4c9188aa66bccbde | uVar12) +
                           (uVar12 & (uVar8 ^ 0x4c9188aa66bccbde)));
  uVar19 = _DAT_18334d468 * 0x7fb948f89ccb66d5;
  uVar12 = uVar19 >> 1 | uVar19;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar19 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar19;
  uVar12 = uVar8 ^ 0x4c9188aae29ee8fb;
  _DAT_18334d460 = (_DAT_18334d460 ^ uVar19) + uVar12 ^ 0xc9137935ab3e9cc1;
  _DAT_18334d238 = (_DAT_18334d238 * 0x425293b9be92e05b ^ _DAT_18334d460) + uVar19;
  _DAT_18334d448 = _DAT_18334d238 ^ _DAT_18334d460;
  uVar9 = unaff_R14 + uVar3 * uVar3 * -0x49b206d762414dac;
  uVar19 = uVar3 * uVar3 * 0x49b206d762414dac;
  auVar14._8_8_ = uVar19;
  auVar14._0_8_ = uVar9 ^ 0x84222325;
  auVar13 = pshufb(auVar14 ^ _DAT_18216f8a0,_DAT_1800170c0);
  uVar7 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar7 + _DAT_18334d278;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_18334d450 ^ uVar7;
  }
  _DAT_18334cf70 = uVar12;
  _DAT_18334d328 = func_0x00018d1b3370(SUB161(auVar14 ^ _DAT_18216f8a0,5) ^ uVar3);
  uVar11 = (uint)(uVar9 >> 0x20);
  auVar36._8_4_ = (int)uVar9;
  auVar36._0_8_ = uVar9;
  auVar36._12_4_ = uVar11;
  uVar32 = (uint)(uVar19 >> 0x20);
  auVar21._8_4_ = (int)uVar19;
  auVar21._0_8_ = uVar19;
  auVar21._12_4_ = uVar32;
  auVar46._8_4_ = 0xffffffff;
  auVar46._0_8_ = 0xffffffffffffffff;
  auVar46._12_4_ = 0xffffffff;
  uVar39 = SUB164(auVar36 ^ auVar46,0);
  uVar27 = SUB164(auVar21 ^ auVar46,0);
  uVar3 = SUB168(auVar21 ^ auVar46,0);
  uVar20 = SUB164(auVar36 & auVar21,0);
  uVar10 = SUB164(auVar36 | auVar21,0);
  uVar9 = (((ulonglong)_DAT_18216f900 * (ulonglong)uVar27 +
            ((uVar3 >> 0x20) * (ulonglong)_DAT_18216f900 +
             (ulonglong)_DAT_18216f8d0 * (ulonglong)uVar27 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_18216f8f0 +
           ((SUB168(auVar36 ^ auVar46,0) >> 0x20) * (ulonglong)_DAT_18216f8f0 +
            (ulonglong)_DAT_18216f8b0 * (ulonglong)uVar39 << 0x20) +
           (ulonglong)_DAT_18216f8e0 * (uVar19 & 0xffffffff) +
           ((ulonglong)uVar32 * (ulonglong)_DAT_18216f8e0 +
            (uVar19 & 0xffffffff) * (ulonglong)_DAT_18216f8d0 << 0x20) +
           (ulonglong)_DAT_18216f8c0 * (uVar9 & 0xffffffff) +
           ((ulonglong)uVar11 * (ulonglong)_DAT_18216f8c0 +
            (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216f8b0 << 0x20)) -
          ((ulonglong)uVar27 * (_DAT_18216f970 & 0xffffffff) +
           ((ulonglong)_DAT_18216f9a0 * (ulonglong)uVar27 +
            (uVar3 >> 0x20) * (_DAT_18216f970 & 0xffffffff) << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_18216f990 +
          ((SUB168(auVar36 | auVar21,0) >> 0x20) * (ulonglong)_DAT_18216f990 +
           (ulonglong)_DAT_18216f980 * (ulonglong)uVar10 << 0x20) +
          (ulonglong)uVar20 * (ulonglong)_DAT_18216f990 +
          ((SUB168(auVar36 & auVar21,0) >> 0x20) * (ulonglong)_DAT_18216f990 +
           (ulonglong)uVar20 * (ulonglong)_DAT_18216f980 << 0x20) +
          (uVar19 & 0xffffffff) * (ulonglong)_DAT_18216f950 +
          ((ulonglong)_DAT_18216f960 * (uVar19 & 0xffffffff) +
           (ulonglong)uVar32 * (ulonglong)_DAT_18216f950 << 0x20) +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216f930 +
          ((ulonglong)_DAT_18216f940 * (uVar9 & 0xffffffff) +
           (ulonglong)uVar11 * (ulonglong)_DAT_18216f930 << 0x20))) + _DAT_18216f9b0;
  _DAT_18334d4f8 = (_DAT_18334d4f8 ^ _DAT_18334d430) + uVar9 ^ 0x20a8b94026252d81;
  _DAT_18334d268 = (_DAT_18334d268 * -0x51be7929fc029623 ^ _DAT_18334d4f8) + _DAT_18334d430;
  _DAT_18334d4c0 = _DAT_18334d268 ^ _DAT_18334d4f8;
  lVar2 = uVar8 * uVar8;
  uVar19 = lVar2 * -0x4bd5ca1c561fedce;
  uVar3 = ((_DAT_18334cf98 ^ 0x84222325) + (ulonglong)((uint)_DAT_18334cf98 & 0x84222325) * 2) *
          (uVar19 - _DAT_18334d098);
  uVar3 = (uVar3 | _DAT_18334cf78) + (uVar3 & _DAT_18334cf78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334d358 = uVar9;
  _DAT_18334d210 =
       func_0x00018d1b3370((uVar19 ^ 0x84222325 | uVar3) + (uVar3 & (uVar19 ^ 0x84222325)));
  uVar7 = lVar2 * 0x4bd5ca1c561fedce;
  _DAT_18334d3a8 =
       (_DAT_18334d3a8 ^ _DAT_18334d1b8 & 0x3fffffffff) + lVar2 * 0x4bd5ca1c561fedce ^
       0xc0e85ace57ed6265;
  _DAT_18334d410 =
       (_DAT_18334d410 * -0x4ada0fe49958a433 ^ _DAT_18334d3a8) + (_DAT_18334d1b8 & 0x3fffffffff);
  _DAT_18334d008 = _DAT_18334d410 ^ _DAT_18334d3a8;
  auVar13._8_8_ = uVar19;
  auVar13._0_8_ = uVar9 ^ 0x84222325;
  auVar14 = pshufb(auVar13 ^ _DAT_18216f9c0,_DAT_1800170c0);
  uVar8 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar8 + _DAT_18334d388;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_18334d408 ^ uVar8;
  }
  _DAT_18334d2d8 = uVar7;
  _DAT_18334d188 = func_0x00018d1b3370(SUB161(auVar13 ^ _DAT_18216f9c0,5) ^ uVar3);
  uVar32 = (uint)(uVar9 >> 0x20);
  auVar37._8_4_ = (int)uVar9;
  auVar37._0_8_ = uVar9;
  auVar37._12_4_ = uVar32;
  uVar27 = (uint)(uVar19 >> 0x20);
  auVar22._8_4_ = (int)uVar19;
  auVar22._0_8_ = uVar19;
  auVar22._12_4_ = uVar27;
  uVar10 = SUB164(auVar37 & auVar22,0);
  uVar8 = SUB168(auVar37 & auVar22,0);
  uVar11 = SUB164(auVar37 | auVar22,0);
  uVar20 = SUB164(auVar37 ^ auVar22,0);
  uVar3 = SUB168(auVar37 ^ auVar22,0);
  uVar19 = ((ulonglong)_DAT_18216fa30 * (ulonglong)uVar20 +
            ((ulonglong)_DAT_18216fa40 * (ulonglong)uVar20 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_18216fa30 << 0x20) +
            (ulonglong)uVar11 * (ulonglong)_DAT_18216fa10 +
            ((ulonglong)_DAT_18216fa20 * (ulonglong)uVar11 +
             (SUB168(auVar37 | auVar22,0) >> 0x20) * (ulonglong)_DAT_18216fa10 << 0x20) +
           (ulonglong)_DAT_18216f9f0 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_18216fa00 * (ulonglong)uVar10 +
            (uVar8 >> 0x20) * (ulonglong)_DAT_18216f9f0 << 0x20) +
           (ulonglong)_DAT_18216f9e0 * (uVar19 & 0xffffffff) +
           ((ulonglong)uVar27 * (ulonglong)_DAT_18216f9e0 +
            (ulonglong)_DAT_18216f9d0 * (uVar19 & 0xffffffff) << 0x20) +
           (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216f9e0 +
           ((ulonglong)uVar32 * (ulonglong)_DAT_18216f9e0 +
            (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216f9d0 << 0x20)) -
           ((ulonglong)uVar20 * (_DAT_18216fab0 & 0xffffffff) +
            ((ulonglong)_DAT_18216fac0 * (ulonglong)uVar20 +
             (uVar3 >> 0x20) * (_DAT_18216fab0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_18216fa90 +
           ((ulonglong)_DAT_18216faa0 * (ulonglong)uVar10 +
            (uVar8 >> 0x20) * (ulonglong)_DAT_18216fa90 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_18216fa80 +
           ((ulonglong)uVar27 * (ulonglong)_DAT_18216fa80 +
            (ulonglong)_DAT_18216fa70 * (uVar19 & 0xffffffff) << 0x20) +
           (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216fa80 +
           ((ulonglong)uVar32 * (ulonglong)_DAT_18216fa80 +
            (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216fa70 << 0x20));
  _DAT_18334cff8 = _DAT_18334d200 ^ _DAT_18334d188 ^ uVar19;
  _DAT_18334d158 = (_DAT_18334d158 ^ _DAT_18334d188) + uVar19 ^ 0x4cef66fe6d86203;
  _DAT_18334d458 = (_DAT_18334d458 * -0xf7fe744c6a48a9 ^ _DAT_18334d158) + _DAT_18334d188;
  _DAT_18334d038 = _DAT_18334d458 ^ _DAT_18334d158;
  uVar8 = uVar19 ^ 0x84222325;
  uVar3 = ((_DAT_18334d1a0 ^ uVar8) + (uVar8 & _DAT_18334d1a0) * 2) * (uVar7 - _DAT_18334d080);
  uVar3 = (uVar3 | _DAT_18334d060) + (uVar3 & _DAT_18334d060);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334d478 = uVar19;
  _DAT_18334d040 = func_0x00018d1b3370((uVar8 ^ uVar7 | uVar3) + (uVar3 & (uVar8 ^ uVar7)));
  uVar20 = (uint)(uVar19 >> 0x20);
  auVar28._8_4_ = (int)uVar19;
  auVar28._0_8_ = uVar19;
  auVar28._12_4_ = uVar20;
  uVar11 = (uint)(uVar7 >> 0x20);
  auVar23._8_4_ = (int)uVar7;
  auVar23._0_8_ = uVar7;
  auVar23._12_4_ = uVar11;
  uVar32 = SUB164(auVar28 & auVar23,0);
  uVar3 = SUB168(auVar28 & auVar23,0);
  uVar10 = SUB164(auVar28 | auVar23,0);
  uVar8 = SUB168(auVar28 | auVar23,0);
  uVar39 = SUB164(auVar28 ^ auVar23,0);
  uVar27 = SUB164(auVar23 ^ _DAT_18001a710,0);
  uVar9 = (((ulonglong)uVar27 * (_DAT_18216faf0 & 0xffffffff) +
            ((SUB168(auVar23 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_18216faf0 & 0xffffffff) +
             (ulonglong)_DAT_18216fad0 * (ulonglong)uVar27 << 0x20) +
            (ulonglong)uVar39 * (ulonglong)_DAT_18216fb10 +
            ((SUB168(auVar28 ^ auVar23,0) >> 0x20) * (ulonglong)_DAT_18216fb10 +
             (ulonglong)_DAT_18216fb00 * (ulonglong)uVar39 << 0x20) +
            (ulonglong)uVar32 * (ulonglong)_DAT_18216fb10 +
            ((uVar3 >> 0x20) * (ulonglong)_DAT_18216fb10 +
             (ulonglong)uVar32 * (ulonglong)_DAT_18216fb00 << 0x20) +
            (ulonglong)_DAT_18216fae0 * (uVar7 & 0xffffffff) +
            ((ulonglong)uVar11 * (ulonglong)_DAT_18216fae0 +
             (uVar7 & 0xffffffff) * (ulonglong)_DAT_18216fad0 << 0x20) + uVar19 +
           (ulonglong)_DAT_18216fb20 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_18216fb30 * (ulonglong)uVar10 +
            (uVar8 >> 0x20) * (ulonglong)_DAT_18216fb20 << 0x20)) -
          ((ulonglong)uVar10 * (ulonglong)_DAT_18216fb90 +
           ((uVar8 >> 0x20) * (ulonglong)_DAT_18216fb90 +
            (ulonglong)_DAT_18216fb80 * (ulonglong)uVar10 << 0x20) +
          (ulonglong)uVar32 * (ulonglong)_DAT_18216fb90 +
          ((uVar3 >> 0x20) * (ulonglong)_DAT_18216fb90 +
           (ulonglong)uVar32 * (ulonglong)_DAT_18216fb80 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_18216fb70 +
          ((ulonglong)uVar11 * (ulonglong)_DAT_18216fb70 +
           (ulonglong)_DAT_18216fb60 * (uVar7 & 0xffffffff) << 0x20) +
          (uVar19 & 0xffffffff) * (ulonglong)_DAT_18216fb70 +
          ((ulonglong)uVar20 * (ulonglong)_DAT_18216fb70 +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_18216fb60 << 0x20))) + _DAT_18216faf0;
  lVar2 = _DAT_18216dda8 * _DAT_18216dda0;
  uVar19 = lVar2 * 0xe943b1398981725;
  auVar15._8_8_ = uVar19;
  auVar15._0_8_ = _DAT_18001b640;
  auVar14 = pshufb(auVar15 ^ _DAT_18216fba0,_DAT_1800170c0);
  uVar3 = (_DAT_18334d040 ^ uVar7) & 0xfffffffffff00000;
  _DAT_18334d348 = _DAT_18334d1a8 ^ uVar3 ^ uVar9;
  _DAT_18334d140 = (_DAT_18334d140 ^ uVar3) + uVar9 ^ 0x77fbe5f2f15ff515;
  _DAT_18334cfa0 = (_DAT_18334cfa0 * 0x3863f2f9e1a62737 ^ _DAT_18334d140) + uVar3;
  _DAT_18334d008 = _DAT_18334cfa0 ^ _DAT_18334d140;
  uVar8 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar8 + _DAT_18334d228;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_18334d060 ^ uVar8;
  }
  _DAT_18334d388 = uVar9;
  _DAT_18334d130 = func_0x00018d1b3370(uVar3 ^ 0x7f);
  _DAT_18334cf38 = lVar2 * -0xe943b1398981725;
  _DAT_18334cf98 =
       (_DAT_18334cf98 ^ _DAT_18334d3d8) + lVar2 * -0xe943b1398981725 ^ 0x3e3ae524267141aa;
  _DAT_18334d210 = (_DAT_18334d210 * -0x707f420711f94ddf ^ _DAT_18334cf98) + _DAT_18334d3d8;
  _DAT_18334d078 = _DAT_18334d210 ^ _DAT_18334cf98;
  uVar3 = uVar9 ^ 0x84222325 ^ _DAT_18334d280;
  lVar5 = (uVar9 ^ 0x84222325) + _DAT_18334d050;
  uVar8 = uVar3 + lVar5;
  uVar7 = (uVar19 ^ _DAT_18334d050) + _DAT_18334d280 + uVar19;
  uVar3 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar3;
  uVar8 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar19 ^ _DAT_18334d050;
  _DAT_18334d2b0 =
       func_0x00018d1b3370((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18334d280 + uVar19) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar27 = (uint)(uVar9 >> 0x20);
  auVar34._8_4_ = (int)uVar9;
  auVar34._0_8_ = uVar9;
  auVar34._12_4_ = uVar27;
  uVar10 = (uint)(uVar19 >> 0x20);
  auVar29._8_4_ = (int)uVar19;
  auVar29._0_8_ = uVar19;
  auVar29._12_4_ = uVar10;
  uVar20 = SUB164(auVar34 & auVar29,0);
  uVar8 = SUB168(auVar34 & auVar29,0);
  uVar32 = SUB164(auVar34 | auVar29,0);
  uVar43 = SUB168(auVar34 | auVar29,0);
  uVar11 = SUB164(auVar34 ^ auVar29,0);
  uVar7 = SUB168(auVar34 ^ auVar29,0);
  uVar3 = _DAT_18334d2b0 << 0x30 | _DAT_18334d2b0 >> 0x10;
  _DAT_18334d390 =
       ((ulonglong)_DAT_18216fc10 * (ulonglong)uVar11 +
        ((ulonglong)_DAT_18216fc20 * (ulonglong)uVar11 + (uVar7 >> 0x20) * (ulonglong)_DAT_18216fc10
        << 0x20) +
        (ulonglong)_DAT_18216fbf0 * (ulonglong)uVar32 +
        ((ulonglong)_DAT_18216fc00 * (ulonglong)uVar32 +
         (uVar43 >> 0x20) * (ulonglong)_DAT_18216fbf0 << 0x20) +
       (ulonglong)_DAT_18216fbd0 * (ulonglong)uVar20 +
       ((ulonglong)_DAT_18216fbe0 * (ulonglong)uVar20 + (uVar8 >> 0x20) * (ulonglong)_DAT_18216fbd0
       << 0x20) +
       (ulonglong)_DAT_18216fbc0 * (uVar19 & 0xffffffff) +
       ((ulonglong)uVar10 * (ulonglong)_DAT_18216fbc0 +
        (ulonglong)_DAT_18216fbb0 * (uVar19 & 0xffffffff) << 0x20) +
       (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216fbc0 +
       ((ulonglong)uVar27 * (ulonglong)_DAT_18216fbc0 +
        (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216fbb0 << 0x20)) -
       ((ulonglong)uVar11 * (ulonglong)_DAT_18216fcb0 +
        ((ulonglong)_DAT_18216fcc0 * (ulonglong)uVar11 + (uVar7 >> 0x20) * (ulonglong)_DAT_18216fcb0
        << 0x20) +
        (ulonglong)uVar32 * (ulonglong)_DAT_18216fc90 +
        ((ulonglong)_DAT_18216fca0 * (ulonglong)uVar32 +
         (uVar43 >> 0x20) * (ulonglong)_DAT_18216fc90 << 0x20) +
       (ulonglong)uVar20 * (ulonglong)_DAT_18216fc70 +
       ((ulonglong)_DAT_18216fc80 * (ulonglong)uVar20 + (uVar8 >> 0x20) * (ulonglong)_DAT_18216fc70
       << 0x20) +
       (uVar19 & 0xffffffff) * (ulonglong)_DAT_18216fc60 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_18216fc60 +
        (ulonglong)_DAT_18216fc50 * (uVar19 & 0xffffffff) << 0x20) +
       (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216fc60 +
       ((ulonglong)uVar27 * (ulonglong)_DAT_18216fc60 +
        (uVar9 & 0xffffffff) * (ulonglong)_DAT_18216fc50 << 0x20));
  _DAT_18334cf00 = _DAT_18334d3b0 ^ uVar3 ^ _DAT_18334d390;
  _DAT_18334d338 = (_DAT_18334d338 ^ uVar3) + _DAT_18334d390 ^ 0x4c327a3e6edd72eb;
  _DAT_18334cfd8 = (_DAT_18334cfd8 * -0x1bfaffff9655d8bb ^ _DAT_18334d338) + uVar3;
  _DAT_18334d450 = _DAT_18334cfd8 ^ _DAT_18334d338;
  uVar8 = uVar6 ^ 0x84222325;
  uVar3 = (uVar8 ^ _DAT_18334d2a8) + _DAT_18334d130 + uVar8;
  uVar19 = (uVar12 ^ _DAT_18334d130) + _DAT_18334d2a8 + uVar12;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar8 ^ _DAT_18334d2a8;
  uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar12 ^ _DAT_18334d130;
  lVar2 = _DAT_18334d390 + lVar2 * -0xe943b1398981725;
  _DAT_18334d478 =
       func_0x00018d1b3370((uVar19 << 0x1d | uVar19 >> 0x23) - (_DAT_18334d2a8 + uVar12) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334d130 + uVar8));
  uVar3 = ~_DAT_18334d478 & uVar6;
  uVar20 = (uint)(uVar6 >> 0x20);
  auVar30._8_4_ = (int)uVar6;
  auVar30._0_8_ = uVar6;
  auVar30._12_4_ = uVar20;
  uVar11 = (uint)(uVar12 >> 0x20);
  auVar24._8_4_ = (int)uVar12;
  auVar24._0_8_ = uVar12;
  auVar24._12_4_ = uVar11;
  auVar47._8_4_ = 0xffffffff;
  auVar47._0_8_ = 0xffffffffffffffff;
  auVar47._12_4_ = 0xffffffff;
  uVar32 = SUB164(auVar30 & auVar24,0);
  uVar7 = SUB168(auVar30 & auVar24,0);
  uVar10 = SUB164(auVar30 ^ auVar24,0);
  uVar19 = SUB168(auVar30 ^ auVar24,0);
  uVar39 = SUB164(auVar30 ^ auVar47,0);
  uVar42 = SUB164(auVar24 ^ auVar47,0);
  uVar27 = SUB164(auVar30 | auVar24,0);
  uVar9 = (((ulonglong)uVar42 * (ulonglong)_DAT_18216fd70 +
            ((_DAT_18216fd80 & 0xffffffff) * (ulonglong)uVar42 +
             (SUB168(auVar24 ^ auVar47,0) >> 0x20) * (ulonglong)_DAT_18216fd70 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_18216fd50 +
           ((_DAT_18216fd60 & 0xffffffff) * (ulonglong)uVar39 +
            (SUB168(auVar30 ^ auVar47,0) >> 0x20) * (ulonglong)_DAT_18216fd50 << 0x20) +
           (_DAT_18216fd30 & 0xffffffff) * (ulonglong)uVar10 +
           ((_DAT_18216fd40 & 0xffffffff) * (ulonglong)uVar10 +
            (uVar19 >> 0x20) * (_DAT_18216fd30 & 0xffffffff) << 0x20) +
           (_DAT_18216fd10 & 0xffffffff) * (ulonglong)uVar32 +
           ((_DAT_18216fd20 & 0xffffffff) * (ulonglong)uVar32 +
            (uVar7 >> 0x20) * (_DAT_18216fd10 & 0xffffffff) << 0x20) +
           (_DAT_18216fcf0 & 0xffffffff) * (uVar12 & 0xffffffff) +
           ((_DAT_18216fd00 & 0xffffffff) * (uVar12 & 0xffffffff) +
            (ulonglong)uVar11 * (_DAT_18216fcf0 & 0xffffffff) << 0x20) +
           (_DAT_18216fcd0 & 0xffffffff) * (uVar6 & 0xffffffff) +
           ((_DAT_18216fce0 & 0xffffffff) * (uVar6 & 0xffffffff) +
            (ulonglong)uVar20 * (_DAT_18216fcd0 & 0xffffffff) << 0x20)) -
          ((ulonglong)uVar10 * (_DAT_18216fe10 & 0xffffffff) +
           ((_DAT_18216fe20 & 0xffffffff) * (ulonglong)uVar10 +
            (uVar19 >> 0x20) * (_DAT_18216fe10 & 0xffffffff) << 0x20) +
           (ulonglong)uVar27 * (ulonglong)_DAT_18216fdf0 +
           ((_DAT_18216fe00 & 0xffffffff) * (ulonglong)uVar27 +
            (SUB168(auVar30 | auVar24,0) >> 0x20) * (ulonglong)_DAT_18216fdf0 << 0x20) +
          (ulonglong)uVar32 * (ulonglong)_DAT_18216fdd0 +
          ((_DAT_18216fde0 & 0xffffffff) * (ulonglong)uVar32 +
           (uVar7 >> 0x20) * (ulonglong)_DAT_18216fdd0 << 0x20) +
          (uVar12 & 0xffffffff) * (ulonglong)_DAT_18216fdc0 +
          ((ulonglong)uVar11 * (ulonglong)_DAT_18216fdc0 +
           (_DAT_18216fdb0 & 0xffffffff) * (uVar12 & 0xffffffff) << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_18216fdc0 +
          ((ulonglong)uVar20 * (ulonglong)_DAT_18216fdc0 +
           (uVar6 & 0xffffffff) * (_DAT_18216fdb0 & 0xffffffff) << 0x20))) + _DAT_18216fe30;
  _DAT_18334d388 = _DAT_18334d298 ^ uVar3 ^ uVar9;
  _DAT_18334d100 = (_DAT_18334d100 ^ uVar3) + uVar9 ^ 0xd6613947e780f548;
  _DAT_18334d4c0 = (_DAT_18334d4c0 * 0x1d2ec51da91f9da1 ^ _DAT_18334d100) + uVar3;
  _DAT_18334d010 = _DAT_18334d4c0 ^ _DAT_18334d100;
  uVar7 = uVar6 ^ uVar12;
  uVar3 = ((_DAT_18334d3c8 ^ uVar8) + (uVar8 & _DAT_18334d3c8) * 2) * (uVar12 - _DAT_18334d2b0);
  uVar3 = (uVar3 | _DAT_18334d3a0) + (uVar3 & _DAT_18334d3a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334d3a8 = uVar9;
  _DAT_18334cf60 = func_0x00018d1b3370((uVar8 ^ uVar12 | uVar3) + (uVar3 & (uVar8 ^ uVar12)));
  uVar3 = (uVar6 | uVar12) ^ _DAT_18334cf60;
  uVar12 = uVar12 & uVar6;
  _DAT_18334d0a8 = (_DAT_18334d0a8 ^ uVar3) + uVar12 ^ 0x5c4945b50418598d;
  _DAT_18334cf98 = (_DAT_18334cf98 * -0x377efd9a4de51957 ^ _DAT_18334d0a8) + uVar3;
  _DAT_18334d4d0 = _DAT_18334cf98 ^ _DAT_18334d0a8;
  uVar3 = uVar12 * 2;
  uVar19 = uVar7 ^ 0x84222325;
  uVar8 = ((_DAT_18334d018 ^ uVar19) + (uVar19 & _DAT_18334d018) * 2) * (uVar3 - _DAT_18334d4c0);
  uVar8 = (uVar8 | _DAT_18334d4d0) + (uVar8 & _DAT_18334d4d0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18334d050 = uVar12;
  _DAT_18334d3f0 = func_0x00018d1b3370((uVar19 ^ uVar3 | uVar8) + (uVar8 & (uVar19 ^ uVar3)));
  uVar11 = (uint)(uVar7 >> 0x20);
  auVar31._8_4_ = (int)uVar7;
  auVar31._0_8_ = uVar7;
  auVar31._12_4_ = uVar11;
  auVar25._8_4_ = (int)uVar12;
  auVar25._0_8_ = uVar12;
  auVar25._12_4_ = (int)(uVar12 >> 0x20);
  uVar12 = uVar12 * 2;
  auVar26._8_8_ = auVar25._8_8_ * 2;
  auVar26._0_8_ = uVar12;
  uVar39 = (uint)(uVar12 >> 0x20);
  uVar42 = SUB164(auVar31 & auVar26,0);
  uVar8 = SUB168(auVar31 & auVar26,0);
  auVar40._8_4_ = 0xffffffff;
  auVar40._0_8_ = 0xffffffffffffffff;
  auVar40._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar31 | auVar26,0);
  uVar6 = SUB168(auVar31 | auVar26,0);
  uVar27 = SUB164(auVar31 ^ auVar40,0);
  uVar32 = SUB164(auVar26 ^ auVar40,0);
  uVar19 = SUB168(auVar26 ^ auVar40,0);
  uVar20 = SUB164(auVar31 ^ auVar26,0);
  uVar8 = (((ulonglong)_DAT_18216fec0 * (ulonglong)uVar32 +
            ((ulonglong)_DAT_18216fed0 * (ulonglong)uVar32 +
             (uVar19 >> 0x20) * (ulonglong)_DAT_18216fec0 << 0x20) +
           (ulonglong)uVar27 * (ulonglong)_DAT_18216fea0 +
           ((ulonglong)_DAT_18216feb0 * (ulonglong)uVar27 +
            (SUB168(auVar31 ^ auVar40,0) >> 0x20) * (ulonglong)_DAT_18216fea0 << 0x20) +
           (ulonglong)_DAT_18216fe90 * (ulonglong)uVar10 +
           ((uVar6 >> 0x20) * (ulonglong)_DAT_18216fe90 +
            (ulonglong)_DAT_18216fe80 * (ulonglong)uVar10 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_18216fe90 +
           ((uVar8 >> 0x20) * (ulonglong)_DAT_18216fe90 +
            (ulonglong)uVar42 * (ulonglong)_DAT_18216fe80 << 0x20) +
           (ulonglong)_DAT_18216fe40 * (uVar7 & 0xffffffff) +
           ((ulonglong)_DAT_18216fe50 * (uVar7 & 0xffffffff) +
            (ulonglong)uVar11 * (ulonglong)_DAT_18216fe40 << 0x20) +
           (ulonglong)_DAT_18216fe60 * (uVar12 & 0xffffffff) +
           ((ulonglong)_DAT_18216fe70 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar39 * (ulonglong)_DAT_18216fe60 << 0x20)) -
          ((ulonglong)uVar32 * (ulonglong)_DAT_18216ff40 +
           ((ulonglong)_DAT_18216ffb0 * (ulonglong)uVar32 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_18216ff40 << 0x20) +
          (ulonglong)uVar20 * (ulonglong)_DAT_18216ff90 +
          ((ulonglong)_DAT_18216ffa0 * (ulonglong)uVar20 +
           (SUB168(auVar31 ^ auVar26,0) >> 0x20) * (ulonglong)_DAT_18216ff90 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_18216ff70 +
          ((ulonglong)_DAT_18216ff80 * (ulonglong)uVar10 +
           (uVar6 >> 0x20) * (ulonglong)_DAT_18216ff70 << 0x20) +
          (ulonglong)uVar42 * (ulonglong)_DAT_18216ff50 +
          ((ulonglong)_DAT_18216ff60 * (ulonglong)uVar42 +
           (uVar8 >> 0x20) * (ulonglong)_DAT_18216ff50 << 0x20) +
          (uVar12 & 0xffffffff) * (ulonglong)_DAT_18216ff20 +
          ((ulonglong)_DAT_18216ff30 * (uVar12 & 0xffffffff) +
           (ulonglong)uVar39 * (ulonglong)_DAT_18216ff20 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_18216ff00 +
          ((ulonglong)_DAT_18216ff10 * (uVar7 & 0xffffffff) +
           (ulonglong)uVar11 * (ulonglong)_DAT_18216ff00 << 0x20))) + _DAT_18216ffc0;
  auVar16._8_8_ = uVar8;
  auVar16._0_8_ = uVar9 ^ 0x84222325;
  auVar14 = pshufb(auVar16 ^ _DAT_18216ffd0,_DAT_1800170c0);
  uVar12 = (uVar3 | uVar7) ^ _DAT_18334d3f0;
  uVar12 = (uVar12 << 0x32 | uVar12 >> 0xe) >> 0x2b | (uVar12 >> 0xe) << 0x15;
  _DAT_18334d100 = _DAT_18334d468 ^ uVar12 ^ uVar8;
  _DAT_18334d4e8 = (_DAT_18334d4e8 ^ uVar12) + uVar8 ^ 0x76f5879c9b3ca5e6;
  _DAT_18334d338 = (_DAT_18334d338 * -0x76ba5d7a16a34e87 ^ _DAT_18334d4e8) + uVar12;
  _DAT_18334d2c0 = _DAT_18334d338 ^ _DAT_18334d4e8;
  uVar3 = auVar14._8_8_ + auVar14._0_8_;
  uVar12 = uVar3 + _DAT_18334d310;
  if (auVar14._4_4_ < 0) {
    uVar12 = _DAT_18334d488 ^ uVar3;
  }
  _DAT_18334d460 = uVar8;
  _DAT_18334d128 = func_0x00018d1b3370(SUB161(auVar16 ^ _DAT_18216ffd0,5) ^ uVar12);
  uVar19 = _DAT_18216dda0;
  uStack0000000000000080 = (uint)uVar9;
  uStack0000000000000084 = (uint)(uVar9 >> 0x20);
  uVar10 = uStack0000000000000084;
  auVar38._8_4_ = uStack0000000000000080;
  auVar38._0_8_ = uVar9;
  auVar38._12_4_ = uStack0000000000000084;
  uVar32 = (uint)(uVar8 >> 0x20);
  auVar33._8_4_ = (int)uVar8;
  auVar33._0_8_ = uVar8;
  auVar33._12_4_ = uVar32;
  uVar6 = (ulonglong)uStack0000000000000084;
  uVar27 = SUB164(auVar38 & auVar33,0);
  uVar44 = SUB168(auVar38 & auVar33,0);
  uVar11 = SUB164(auVar38 | auVar33,0);
  uVar45 = SUB168(auVar38 | auVar33,0);
  _uStack0000000000000080 = SUB168(auVar38 ^ auVar33,0);
  uVar43 = _uStack0000000000000080;
  uVar12 = _uStack0000000000000080 & 0xffffffff;
  uVar7 = _uStack0000000000000080 >> 0x20;
  uVar3 = _uStack0000000000000080 & 0xffffffff;
  uVar20 = SUB164(auVar33 ^ _DAT_18001a710,0);
  uVar41 = SUB168(auVar33 ^ _DAT_18001a710,0);
  uStack0000000000000080 = SUB164(auVar38 ^ auVar33,0);
  uVar4 = _DAT_18334d450 & 0x7ffffffffffffff;
  _DAT_18334cf88 =
       (((ulonglong)_DAT_182170020 * (ulonglong)uVar20 +
         ((ulonglong)_DAT_182170090 * (ulonglong)uVar20 +
          (uVar41 >> 0x20) * (ulonglong)_DAT_182170020 << 0x20) +
        _DAT_182170070 * uVar3 + (_DAT_182170080 * uVar12 + uVar7 * _DAT_182170070 << 0x20) +
        (ulonglong)_DAT_182170050 * (ulonglong)uVar11 +
        ((ulonglong)_DAT_182170060 * (ulonglong)uVar11 +
         (uVar45 >> 0x20) * (ulonglong)_DAT_182170050 << 0x20) +
        (ulonglong)_DAT_182170030 * (ulonglong)uVar27 +
        ((ulonglong)_DAT_182170040 * (ulonglong)uVar27 +
         (uVar44 >> 0x20) * (ulonglong)_DAT_182170030 << 0x20) +
        (ulonglong)_DAT_182170000 * (uVar8 & 0xffffffff) +
        ((ulonglong)_DAT_182170010 * (uVar8 & 0xffffffff) +
         (ulonglong)uVar32 * (ulonglong)_DAT_182170000 << 0x20) +
        (ulonglong)_DAT_18216ffe0 * (uVar9 & 0xffffffff) +
        ((ulonglong)_DAT_18216fff0 * (uVar9 & 0xffffffff) + uVar6 * _DAT_18216ffe0 << 0x20)) -
       ((ulonglong)uVar20 * (_DAT_182170100 & 0xffffffff) +
        ((ulonglong)_DAT_182170170 * (ulonglong)uVar20 +
         (uVar41 >> 0x20) * (_DAT_182170100 & 0xffffffff) << 0x20) +
       (ulonglong)uStack0000000000000080 * (ulonglong)_DAT_182170150 +
       ((ulonglong)_DAT_182170160 * (ulonglong)uStack0000000000000080 +
        (uVar43 >> 0x20) * (ulonglong)_DAT_182170150 << 0x20) +
       (ulonglong)uVar11 * (ulonglong)_DAT_182170130 +
       ((ulonglong)_DAT_182170140 * (ulonglong)uVar11 + (uVar45 >> 0x20) * (ulonglong)_DAT_182170130
       << 0x20) +
       (ulonglong)uVar27 * (ulonglong)_DAT_182170110 +
       ((ulonglong)_DAT_182170120 * (ulonglong)uVar27 + (uVar44 >> 0x20) * (ulonglong)_DAT_182170110
       << 0x20) +
       (uVar8 & 0xffffffff) * (ulonglong)_DAT_1821700e0 +
       ((ulonglong)_DAT_1821700f0 * (uVar8 & 0xffffffff) +
        (ulonglong)uVar32 * (ulonglong)_DAT_1821700e0 << 0x20) +
       (uVar9 & 0xffffffff) * (ulonglong)_DAT_1821700c0 +
       ((ulonglong)_DAT_1821700d0 * (uVar9 & 0xffffffff) +
        (ulonglong)uVar10 * (ulonglong)_DAT_1821700c0 << 0x20))) + 0x65eb4cbf7a7871ed;
  _DAT_18334d3d8 = _DAT_18334cf88 ^ uVar4;
  _DAT_18334d1a0 = (_DAT_18334d458 ^ uVar4) + _DAT_18334cf88 ^ 0x1ff03afcddb128dc;
  _DAT_18334d458 = (_DAT_18334d458 * -0x37c05641def1b84f ^ _DAT_18334d1a0) + uVar4;
  _DAT_18334d1a0 = _DAT_18334d458 ^ _DAT_18334d1a0;
  uVar3 = _DAT_18334cf88 + lVar2;
  uVar12 = ((uStack00000000000000a0 ^ _DAT_18334d130) +
           (uStack00000000000000a0 & _DAT_18334d130) * 2) * (_DAT_18216dda0 - _DAT_18334d400);
  uVar12 = (uVar12 | _DAT_18334d218) + (uVar12 & _DAT_18334d218);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18334d098 =
       func_0x00018d1b3370((uVar12 | 0x84222325) + (ulonglong)((uint)uVar12 & 0x84222325));
  uVar19 = uVar19 ^ _DAT_18334d098 & 0x3fffffffffff;
  uVar12 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar19 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar19;
  _DAT_18334d298 = _DAT_18334d298 ^ uVar19 ^ 0x28ed9571a042895c;
  _DAT_18334d490 = (_DAT_18334d490 * 0x1270f86da1f278fd ^ _DAT_18334d298) + uVar19;
  _DAT_18334d0c8 = _DAT_18334d490 ^ _DAT_18334d298;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar3 ^ 0x84222325;
  _DAT_18334cf18 = 0;
  auVar14 = pshufb(auVar17 ^ _DAT_182170180,_DAT_1800170c0);
  uVar8 = auVar14._8_8_ + auVar14._0_8_;
  uVar12 = uVar8 + _DAT_18334d0b0;
  if (auVar14._4_4_ < 0) {
    uVar12 = _DAT_18334d4b0 ^ uVar8;
  }
  _DAT_18334d278 = func_0x00018d1b3370(SUB161(auVar17 ^ _DAT_182170180,5) ^ uVar12);
  uVar11 = (uint)(uVar3 >> 0x20);
  auVar35._8_4_ = (int)uVar3;
  auVar35._0_8_ = uVar3;
  auVar35._12_4_ = uVar11;
  auVar18._8_4_ = 0xffffffff;
  auVar18._0_8_ = 0xffffffffffffffff;
  auVar18._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar18 ^ auVar35,0);
  uVar19 = SUB168(auVar18 ^ auVar35,0);
  uVar8 = _DAT_18334d278 ^ uVar3;
  uVar12 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar8;
  lVar2 = (uVar19 >> 0x20) * (ulonglong)_DAT_182170210;
  _DAT_18334d0a8 =
       (((ulonglong)_DAT_1821701d0 * (ulonglong)uVar10 +
         ((ulonglong)_DAT_1821701e0 * (ulonglong)uVar10 +
          (uVar19 >> 0x20) * (ulonglong)_DAT_1821701d0 << 0x20) +
        (ulonglong)_DAT_1821701b0 * (uVar3 & 0xffffffff) +
        ((ulonglong)_DAT_1821701c0 * (uVar3 & 0xffffffff) +
         (ulonglong)uVar11 * (ulonglong)_DAT_1821701b0 << 0x20) +
        (ulonglong)_DAT_182170190 * (uVar3 & 0xffffffff) +
        ((ulonglong)_DAT_1821701a0 * (uVar3 & 0xffffffff) +
         (ulonglong)uVar11 * (ulonglong)_DAT_182170190 << 0x20)) -
       ((ulonglong)uVar10 * (ulonglong)_DAT_182170210 +
        ((ulonglong)_DAT_182170240 * (ulonglong)uVar10 + lVar2 << 0x20) +
       (uVar3 & 0xffffffff) * (ulonglong)_DAT_182170220 +
       ((ulonglong)_DAT_182170230 * (uVar3 & 0xffffffff) +
        (ulonglong)uVar11 * (ulonglong)_DAT_182170220 << 0x20) +
       (ulonglong)_DAT_1821701f0 * (uVar3 & 0xffffffff) +
       ((ulonglong)_DAT_182170200 * (uVar3 & 0xffffffff) +
        (ulonglong)uVar11 * (ulonglong)_DAT_1821701f0 << 0x20))) + 0x30ecbbeb0a5f8713;
  _DAT_18334d2d0 = _DAT_18334d000 ^ uVar8 ^ _DAT_18334d0a8;
  _DAT_18334d060 = (_DAT_18334d060 ^ uVar8) + _DAT_18334d0a8 ^ 0x530a17a15f0099cf;
  _DAT_18334d4a0 = (_DAT_18334d4a0 * 0x44c88723c87132d9 ^ _DAT_18334d060) + uVar8;
  _DAT_18334d1b8 = _DAT_18334d4a0 ^ _DAT_18334d060;
  FUN_190dd72e0(lVar2,*_DAT_18301ee50 + 0xcb21,0x228);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1b110f (image 18d1b110f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b110f(void)

{
  (*_DAT_18216f6a8)();
  return;
}



// ===== continuation @ rva d1b32ab (image 18d1b32ab) =====

void FUN_18d1b32ab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d1aef99 (image 18d1aef99) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1aef99(void)

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



// ===== continuation @ rva d1b2202 (image 18d1b2202) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b2202(void)

{
  (*_DAT_18216f6a8)();
  return;
}



// ===== continuation @ rva d1b1faf (image 18d1b1faf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1b1faf(void)

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



// ===== continuation @ rva d1b17dc (image 18d1b17dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1b17dc(void)

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



// ===== continuation @ rva d1b78d8 (image 18d1b78d8) =====

void FUN_18d1b78d8(void)

{
  return;
}



// ===== continuation @ rva d1b347f (image 18d1b347f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b347f(void)

{
  FUN_190ddce00();
  (*_DAT_182171258)();
  return;
}



// ===== continuation @ rva d1b78c7 (image 18d1b78c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b78c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182171e78)();
  return;
}



// ===== continuation @ rva d1b7869 (image 18d1b7869) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b7869(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1821712d8)();
  return;
}



// ===== continuation @ rva d1b5031 (image 18d1b5031) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1b5031(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1b4ab3 (image 18d1b4ab3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b4ab3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182170b68)();
  return;
}



// ===== continuation @ rva d1b5de6 (image 18d1b5de6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b5de6(void)

{
  double unaff_XMM6_Qa;
  
  switch(unaff_XMM6_Qa < _DAT_1803bec78) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1b5c5d (image 18d1b5c5d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1b5c5d(void)

{
  longlong unaff_R15;
  
  switch(unaff_R15 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1b5301 (image 18d1b5301) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b5301(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182171208)();
  return;
}



// ===== continuation @ rva d1b50bc (image 18d1b50bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b50bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182170598)();
  return;
}



// ===== continuation @ rva d1b75b6 (image 18d1b75b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b75b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182171a98)();
  return;
}



// ===== continuation @ rva d1b73c5 (image 18d1b73c5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b73c5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182171058)();
  return;
}



// ===== continuation @ rva d1b3e10 (image 18d1b3e10) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1b3e10(void)

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



// ===== continuation @ rva d1b36b8 (image 18d1b36b8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1b36b8(void)

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



// ===== continuation @ rva d1ba3ee (image 18d1ba3ee) =====

void FUN_18d1ba3ee(void)

{
  return;
}



// ===== continuation @ rva d1ba24c (image 18d1ba24c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1ba24c(void)

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



// ===== continuation @ rva d1bafa7 (image 18d1bafa7) =====

undefined8 thunk_FUN_18d1bb3c4(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva d1bbe88 (image 18d1bbe88) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1bbe88(void)

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



// ===== continuation @ rva d1bc8a2 (image 18d1bc8a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1bc8a2(void)

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



// ===== continuation @ rva d1bcbbe (image 18d1bcbbe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d1bed57(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
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



// ===== continuation @ rva d1bbdca (image 18d1bbdca) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1bbdca(void)

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



// ===== continuation @ rva d1bc870 (image 18d1bc870) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d1bed57(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
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



// ===== continuation @ rva d1bbd6b (image 18d1bbd6b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1bbd6b(void)

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



// ===== continuation @ rva d1c3122 (image 18d1c3122) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1c3122(void)

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



// ===== continuation @ rva d1c30ce (image 18d1c30ce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c30ce(void)

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



// ===== continuation @ rva d1c3f95 (image 18d1c3f95) =====

void FUN_18d1c3f95(void)

{
  return;
}



// ===== continuation @ rva d1c34d0 (image 18d1c34d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c34d0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_182174238)();
  return;
}



// ===== continuation @ rva d1c3f61 (image 18d1c3f61) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c3f61(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182174158)();
  return;
}



// ===== continuation @ rva d1c31c8 (image 18d1c31c8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c31c8(void)

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



// ===== continuation @ rva d1c359e (image 18d1c359e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c359e(void)

{
  FUN_190ddfc90();
  (*_DAT_1821741f8)();
  return;
}



// ===== continuation @ rva d1c386b (image 18d1c386b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1c386b(void)

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



// ===== continuation @ rva d1c3fa4 (image 18d1c3fa4) =====

void FUN_18d1c3fa4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d1c348d (image 18d1c348d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c348d(void)

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



// ===== continuation @ rva d1c39a5 (image 18d1c39a5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c39a5(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_182174518)();
  return;
}



// ===== continuation @ rva d1c38e8 (image 18d1c38e8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1c38e8(void)

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



// ===== continuation @ rva d1c60b6 (image 18d1c60b6) =====

void FUN_18d1c60b6(void)

{
  return;
}



// ===== continuation @ rva d1c411c (image 18d1c411c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c411c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182175298)();
  return;
}



// ===== continuation @ rva d1c67a8 (image 18d1c67a8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c67a8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182175428)();
  return;
}



// ===== continuation @ rva d1c6c5a (image 18d1c6c5a) =====

void FUN_18d1c6c5a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d1c4ef3 (image 18d1c4ef3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1c4ef3(void)

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



// ===== continuation @ rva d1c6b54 (image 18d1c6b54) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c6b54(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182174eb8)();
  return;
}



// ===== continuation @ rva d1c66ab (image 18d1c66ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c66ab(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182174ed8)();
  return;
}



// ===== continuation @ rva d1c5371 (image 18d1c5371) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1c5371(void)

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



// ===== continuation @ rva d1c6819 (image 18d1c6819) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c6819(void)

{
  (*_DAT_182175338)();
  return;
}



// ===== continuation @ rva d1c63f7 (image 18d1c63f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c63f7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182175078)();
  return;
}



// ===== continuation @ rva d1c62cc (image 18d1c62cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1c62cc(void)

{
  FUN_190dd72e0();
  (*_DAT_182174dd8)();
  return;
}



// ===== continuation @ rva d1c42cd (image 18d1c42cd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1c42cd(void)

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



