// ===== continuation @ rva 627240d (image 18627240d) =====

void FUN_18627240d(void)

{
  return;
}



// ===== continuation @ rva 6260482 (image 186260482) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001862604d8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186260482(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6271d2d (image 186271d2d) =====

void thunk_FUN_1862620fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 6265069 (image 186265069) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186265069(uint param_1)

{
  int iVar1;
  longlong *unaff_RSI;
  longlong lVar2;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar5 = (_DAT_183122688 ^ _DAT_1807e03b0) + _DAT_1831227b8 + 0xfae453c7;
  uVar6 = (_DAT_1831227b8 ^ _UNK_1807e03b8) + _DAT_183122688 + 0x10b0fe6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122688 ^ _DAT_1807e03b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831227b8 ^ _UNK_1807e03b8;
  uVar3 = (ulonglong)param_1;
  _DAT_1831228b8 =
       func_0x0001862725a0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183122688 + 0x10b0fe6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831227b8 + 0xfae453c7));
  uVar5 = (ulonglong)((uint)_DAT_1831228b8 & 0x7ec670e2) ^ 0x10b0fe6;
  _DAT_1831226b0 = (_DAT_1831226b0 ^ uVar5) + 0x7fcf7fe6 ^ 0xa49b263d4c15f0d3;
  _DAT_183122948 = (_DAT_183122948 * -0x5abf11a362d9859b ^ _DAT_1831226b0) + uVar5;
  _DAT_183122790 = _DAT_183122948 ^ _DAT_1831226b0;
  _DAT_183122a20 = 0x7fcf7fe6;
  _DAT_183122300 = func_0x0001862725a0(_DAT_183122410 + 0xffefffc9daffd3ff ^ 0x4e);
  _DAT_1831225e8 = (_DAT_1831225e8 ^ _DAT_183122300) - 0xde163300 ^ 0xe7084f2018be2a8;
  _DAT_1831227a0 = (_DAT_1831227a0 * -0x1133d3245dcde53 ^ _DAT_1831225e8) + _DAT_183122300;
  _DAT_1831223b0 = _DAT_1831227a0 ^ _DAT_1831225e8;
  _DAT_1831224a0 = 0x21e9cd00;
  _DAT_183122318 = func_0x0001862725a0(_DAT_1831227c0 ^ 0x100046ba003371);
  uVar6 = _DAT_183122318 ^ 0xdd381ccdff;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6;
  _DAT_183122610 = _DAT_183122760 ^ uVar6 ^ 0xde1633ff;
  _DAT_1831229d0 = (_DAT_1831229d0 ^ uVar6) + 0xde1633ff ^ 0xbc7bdd99cb05dbcb;
  _DAT_183122ae0 = (_DAT_183122ae0 * -0x149a4468a7f83d13 ^ _DAT_1831229d0) + uVar6;
  _DAT_183122888 = _DAT_183122ae0 ^ _DAT_1831229d0;
  _DAT_183122530 = 0xde1633ff;
  _DAT_183122458 = func_0x0001862725a0(_DAT_1831227b0 ^ 0xc4ffa829ffca8a);
  uVar5 = _DAT_183122458 << 0x11 | _DAT_183122458 >> 0x2f;
  _DAT_1831226e0 = _DAT_183122920 ^ uVar5 ^ 0x1000000ff;
  _DAT_1831224a8 = (_DAT_1831224a8 ^ uVar5) + 0x1000000ff ^ 0x4d279838840168c1;
  _DAT_1831225e0 = (_DAT_1831225e0 * -0x40afd6e9dc932447 ^ _DAT_1831224a8) + uVar5;
  _DAT_183122598 = _DAT_1831225e0 ^ _DAT_1831224a8;
  _DAT_1831223a8 = 0xff;
  _DAT_183122418 = func_0x0001862725a0(_DAT_183122398 + 0x3b0055b1006cffU ^ 0x55);
  _DAT_183122700 =
       (_DAT_183122700 ^ _DAT_183122418 & 0x1fffffffffff) - 0xd191e8d4 ^ 0xb2fee859664de7c0;
  _DAT_183122380 =
       (_DAT_183122380 * 0x558c7df0b9f51bd5 ^ _DAT_183122700) + (_DAT_183122418 & 0x1fffffffffff);
  _DAT_183122818 = _DAT_183122380 ^ _DAT_183122700;
  _DAT_1831225c8 = 0x2e6e172c;
  uVar5 = (_DAT_183122380 ^ _DAT_1807e03c0) + _DAT_183122658 + 0x842223da;
  uVar6 = (_DAT_183122658 ^ _UNK_1807e03c8) + _DAT_183122380 + 0xd191e8d4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122380 ^ _DAT_1807e03c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183122658 ^ _UNK_1807e03c8;
  _DAT_183122448 =
       func_0x0001862725a0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183122380 + 0xd191e8d4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122658 + 0x842223da));
  uVar5 = ~_DAT_183122448 & (ulonglong)DAT_1801a13a0 & 0x7fffffff;
  _DAT_1831225c8 = _DAT_183122aa8 ^ uVar5 ^ 0xd191e9d3;
  _DAT_183122300 = (_DAT_183122300 ^ uVar5) + 0xd191e9d3 ^ 0x17fdb74a13f05dde;
  _DAT_1831223b0 = (_DAT_1831223b0 * -0x9060585248e8d8b ^ _DAT_183122300) + uVar5;
  _DAT_183122868 = _DAT_1831223b0 ^ _DAT_183122300;
  _DAT_183122390 = 0xd191e9d3;
  uVar5 = (_DAT_183122470 ^ _DAT_1807e03d0) + _DAT_1831224a0 + 0x55b3caf6;
  uVar6 = (_DAT_1831224a0 ^ _UNK_1807e03d8) + _DAT_183122470 + 0x2e6e172c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122470 ^ _DAT_1807e03d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831224a0 ^ _UNK_1807e03d8;
  _DAT_1831227d0 =
       func_0x0001862725a0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183122470 + 0x2e6e172c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831224a0 + 0x55b3caf6));
  uVar5 = _DAT_183122478 & 0xffffffffffffff00;
  _DAT_1831226c8 = _DAT_183122700 ^ uVar5 ^ 0x1000000ff;
  _DAT_1831228e0 = (_DAT_1831228e0 ^ uVar5) + 0x1000000ff ^ 0x55a5e3d156aa48ed;
  _DAT_183122638 = (_DAT_183122638 * -0xee23431307323eb ^ _DAT_1831228e0) + uVar5;
  _DAT_183122420 = _DAT_183122638 ^ _DAT_1831228e0;
  _DAT_1831224d8 = 0xff;
  uVar5 = (_DAT_183122840 ^ _DAT_1807e03e0) + _DAT_1831228c0 + 0x84222325;
  uVar6 = (_DAT_1831228c0 ^ _UNK_1807e03e8) + _DAT_183122840 + 0x4f3e758;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122840 ^ _DAT_1807e03e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831228c0 ^ _UNK_1807e03e8;
  _DAT_183122ab8 =
       func_0x0001862725a0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183122840 + 0x4f3e758) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831228c0 + 0x84222325));
  _DAT_183122910 =
       (_DAT_183122910 ^ _DAT_183122ab8 * 0x6cbb8a2b5a0431a3) - 0x4f3e758 ^ 0x7ba57fdac5080b97;
  _DAT_1831225a0 =
       (_DAT_1831225a0 * 0xdeabca49f36eb5b ^ _DAT_183122910) + _DAT_183122ab8 * 0x6cbb8a2b5a0431a3;
  _DAT_183122610 = _DAT_1831225a0 ^ _DAT_183122910;
  _DAT_183122768 = 0xfb0c18a8;
  _DAT_183122770 = func_0x0001862725a0(_DAT_183122840 + 0xb10028a6005aff ^ 0x56);
  uVar5 = (ulonglong)(~(uint)(_DAT_183122770 >> 0x17) & 0x4f3e857);
  _DAT_183122798 = _DAT_183122960 ^ uVar5 ^ 0x1000000ff;
  _DAT_1831227d0 = (_DAT_1831227d0 ^ uVar5) + 0x1000000ff ^ 0x2581be486fad9e25;
  _DAT_183122518 = (_DAT_183122518 * -0x55d03a23906f3423 ^ _DAT_1831227d0) + uVar5;
  _DAT_183122330 = _DAT_183122518 ^ _DAT_1831227d0;
  _DAT_183122578 = 0xff;
  uVar5 = (~_DAT_183122338 + 0xc43c87fb) *
          ((_DAT_183122350 ^ 0xfbed5cc3) + (ulonglong)((uint)_DAT_183122350 & 0xfbed5cc3) * 2);
  uVar5 = (uVar5 | _DAT_1831228b8) + (uVar5 & _DAT_1831228b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831225a0 = func_0x0001862725a0((uVar5 | 0x3fd1db39) + (ulonglong)((uint)uVar5 & 0x3fd1db39))
  ;
  _DAT_183122488 =
       (_DAT_183122488 ^ _DAT_1831225a0 & 0x7fffffffffffffff) + 0xbbf3f81c ^ 0x577e142c188586aa;
  _DAT_183122720 =
       (_DAT_183122720 * -0x50ee3223a1cc2853 ^ _DAT_183122488) +
       (_DAT_1831225a0 & 0x7fffffffffffffff);
  _DAT_1831228c0 = _DAT_183122720 ^ _DAT_183122488;
  _DAT_183122790 = 0xbbf3f81c;
  uVar5 = (_DAT_1831228a8 ^ _DAT_1807e03f0) + _DAT_183122830 + 0xfbed5cc3;
  uVar6 = (_DAT_183122830 ^ _UNK_1807e03f8) + _DAT_1831228a8 + 0xc43c87fa;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831228a8 ^ _DAT_1807e03f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183122830 ^ _UNK_1807e03f8;
  _DAT_183122488 =
       func_0x0001862725a0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831228a8 + 0xc43c87fa) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122830 + 0xfbed5cc3));
  uVar5 = (_DAT_183122488 ^ 0x61f916714efd309c) * 0x1bb84ea1ed0b220b;
  _DAT_183122420 = (_DAT_183122420 ^ uVar5) + 0x440c07e2 ^ 0x84f32d5a3ab90b48;
  _DAT_183122748 = (_DAT_183122748 * 0x2c9a6d52091b7659 ^ _DAT_183122420) + uVar5;
  _DAT_183122ab8 = _DAT_183122748 ^ _DAT_183122420;
  _DAT_183122328 = 0x440c07e2;
  _DAT_183122918 = func_0x0001862725a0(_DAT_183122608 + 0x630003dbfff1ffU ^ 0xad);
  _DAT_183122930 =
       (_DAT_183122930 ^ _DAT_183122918 ^ 0x7fcf7fe58030801a) + 0x80308019 ^ 0xdb70056f716e4b34;
  _DAT_183122ab8 =
       (_DAT_183122ab8 * 0x18443a61ae92fdd9 ^ _DAT_183122930) +
       (_DAT_183122918 ^ 0x7fcf7fe58030801a);
  _DAT_183122708 = _DAT_183122ab8 ^ _DAT_183122930;
  _DAT_183122920 = 0x80308019;
  uVar5 = ((_DAT_183122638 ^ 0x842223da) + (ulonglong)((uint)_DAT_183122638 & 0x842223da) * 2) *
          -_DAT_183122858;
  uVar5 = (uVar5 | _DAT_183122818) + (uVar5 & _DAT_183122818);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831226e8 = func_0x0001862725a0((uVar5 | 0x842223da) + (ulonglong)((uint)uVar5 & 0x842223da))
  ;
  uVar5 = (_DAT_1831226e8 & 0x7fffffffffffffff) >> 1 | _DAT_1831226e8 & 0x7fffffffffffffff;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_1831226e8 & 0x7fffffffffffffff;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  _DAT_183122920 = _DAT_183122498 ^ uVar6 ^ 0xff;
  _DAT_183122410 = (_DAT_183122410 ^ uVar6) + 0xff ^ 0x5909f8ae9fd5b0b4;
  _DAT_1831227e8 = (_DAT_1831227e8 * 0x5dafa7d53bbdb247 ^ _DAT_183122410) + uVar6;
  _DAT_183122328 = _DAT_1831227e8 ^ _DAT_183122410;
  _DAT_183122830 = 0xff;
  _DAT_1831227a0 = func_0x0001862725a0(_DAT_183122728 + 0xffe1007c250021ffU ^ 0x9e);
  uVar5 = (_DAT_1831227a0 ^ 0x7ec00000) & 0xfffffffffff80000;
  _DAT_183122838 = _DAT_183122838 ^ uVar5 ^ 0xf3aa9bb064380fa1;
  _DAT_183122660 = (_DAT_183122660 * 0x12616f524bec846b ^ _DAT_183122838) + uVar5;
  _DAT_183122698 = _DAT_183122660 ^ _DAT_183122838;
  _DAT_183122820 = 0;
  uVar5 = (~_DAT_1831225b8 + 0x100) *
          ((uVar3 ^ 0x84222325 ^ _DAT_183122920) +
          (ulonglong)((uint)_DAT_183122920 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | _DAT_183122330) + (uVar5 & _DAT_183122330);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831229e8 =
       func_0x0001862725a0((uVar3 ^ 0x842223da | uVar5) +
                           (ulonglong)((uint)(uVar3 ^ 0x842223da) & (uint)uVar5));
  _DAT_1831225e8 = uVar3 & 0xff;
  _DAT_183122718 =
       (_DAT_183122718 ^ _DAT_1831229e8 & 0x7fffffffffffffff) + _DAT_1831225e8 ^ 0x6d5f86764af514cc;
  _DAT_183122368 =
       (_DAT_183122368 * -0x768cfc9e156991d9 ^ _DAT_183122718) +
       (_DAT_1831229e8 & 0x7fffffffffffffff);
  _DAT_183122790 = _DAT_183122368 ^ _DAT_183122718;
  uVar6 = _DAT_1831225e8 << 0x28;
  uVar5 = in_stack_00000050 ^ 0x84222325 ^ _DAT_1831226b8;
  lVar2 = (in_stack_00000050 ^ 0x84222325) + _DAT_183122958;
  uVar3 = uVar5 + lVar2;
  uVar4 = (uVar6 ^ _DAT_183122958) + _DAT_1831226b8 + uVar6;
  uVar5 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar5;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6 ^ _DAT_183122958;
  _DAT_1831223f0 =
       func_0x0001862725a0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831226b8 + uVar6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar2);
  _DAT_183122a98 = uVar6 | in_stack_00000050;
  _DAT_1831226f8 = (_DAT_1831226f8 ^ _DAT_1831223f0) + _DAT_183122a98 ^ 0xa1f082bd69f77c25;
  _DAT_183122950 = (_DAT_183122950 * -0x44e3408c03c3fd79 ^ _DAT_1831226f8) + _DAT_1831223f0;
  _DAT_183122810 = _DAT_183122950 ^ _DAT_1831226f8;
  iVar1 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa,in_stack_00000038);
  switch(iVar1 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6271a4b (image 186271a4b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186271a4b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
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



// ===== continuation @ rva 62606ed (image 1862606ed) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186260729 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1862606ed(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6263c23 (image 186263c23) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186263c23(void)

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



// ===== continuation @ rva 62637a3 (image 1862637a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862637a3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6263765 (image 186263765) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186263765(void)

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



// ===== continuation @ rva 6271fd0 (image 186271fd0) =====

void thunk_FUN_1862620fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 6257cf1 (image 186257cf1) =====

void FUN_186257cf1(void)

{
  return;
}



// ===== continuation @ rva 6254cd4 (image 186254cd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186254cd4(void)

{
  FUN_190ddce00();
  (*_DAT_1807db3c8)();
  return;
}



// ===== continuation @ rva 6258585 (image 186258585) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186258585(void)

{
  (*_DAT_1807dbce8)();
  return;
}



// ===== continuation @ rva 6258301 (image 186258301) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186258301(void)

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



// ===== continuation @ rva 6257b05 (image 186257b05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186257b05(void)

{
  (*_DAT_1807dbb18)();
  return;
}



// ===== continuation @ rva 6258640 (image 186258640) =====

void FUN_186258640(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6257aaa (image 186257aaa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186257aaa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1807db838)();
  return;
}



// ===== continuation @ rva 6257c46 (image 186257c46) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186257c46(void)

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



// ===== continuation @ rva 625808c (image 18625808c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625808c(void)

{
  (*_DAT_1807dbcb8)();
  return;
}



// ===== continuation @ rva 6257903 (image 186257903) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186257903(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1807dbb78)();
  return;
}



// ===== continuation @ rva 62577a7 (image 1862577a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862577a7(void)

{
  FUN_190dd72e0();
  (*_DAT_1807dbc48)();
  return;
}



// ===== continuation @ rva 6254d07 (image 186254d07) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186254d07(void)

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



// ===== continuation @ rva 62772e6 (image 1862772e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862772e6(void)

{
  FUN_190dd72e0();
  (*_DAT_1807e1c68)();
  return;
}



// ===== continuation @ rva 6277273 (image 186277273) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186277273(void)

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



// ===== continuation @ rva 62773c6 (image 1862773c6) =====

void FUN_1862773c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 62772d1 (image 1862772d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862772d1(void)

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



// ===== continuation @ rva 62773be (image 1862773be) =====

void FUN_1862773be(void)

{
  return;
}



// ===== continuation @ rva 62772ac (image 1862772ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862772ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807e1c48)();
  return;
}



// ===== continuation @ rva 627730e (image 18627730e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18627730e(void)

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



// ===== continuation @ rva 62773ad (image 1862773ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862773ad(void)

{
  (*_DAT_1807e1c78)();
  return;
}



// ===== continuation @ rva 6277362 (image 186277362) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186277362(void)

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



// ===== continuation @ rva 627732f (image 18627732f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18627732f(void)

{
  FUN_190dd9df0();
  (*_DAT_1807e1c98)();
  return;
}



// ===== continuation @ rva 62774e6 (image 1862774e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862774e6(void)

{
  FUN_190dd72e0();
  (*_DAT_1807e1d58)();
  return;
}



// ===== continuation @ rva 6277473 (image 186277473) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186277473(void)

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



// ===== continuation @ rva 62775c4 (image 1862775c4) =====

void FUN_1862775c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6277562 (image 186277562) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186277562(void)

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



// ===== continuation @ rva 62775bc (image 1862775bc) =====

void FUN_1862775bc(void)

{
  return;
}



// ===== continuation @ rva 6277586 (image 186277586) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186277586(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807e1d78)();
  return;
}



// ===== continuation @ rva 627750e (image 18627750e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18627750e(void)

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



// ===== continuation @ rva 62774ac (image 1862774ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862774ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807e1da8)();
  return;
}



// ===== continuation @ rva 62775ac (image 1862775ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862775ac(void)

{
  (*_DAT_1807e1d38)();
  return;
}



// ===== continuation @ rva 6277744 (image 186277744) =====

void FUN_186277744(void)

{
  return;
}



// ===== continuation @ rva 627769d (image 18627769d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18627769d(void)

{
  FUN_190ddce00();
  (*_DAT_1807e1e08)();
  return;
}



// ===== continuation @ rva 627774c (image 18627774c) =====

void FUN_18627774c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 62776d0 (image 1862776d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862776d0(void)

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



// ===== continuation @ rva 6277732 (image 186277732) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186277732(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807e1e48)();
  return;
}



// ===== continuation @ rva 6277715 (image 186277715) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186277715(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (*_DAT_1807e1e18)();
  return;
}



// ===== continuation @ rva 62776f4 (image 1862776f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862776f4(void)

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



// ===== continuation @ rva 627777a (image 18627777a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18627777a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1807e1e78)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 6277786 (image 186277786) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186277786(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 62777ad (image 1862777ad) =====

undefined4 * FUN_1862777ad(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 62777ac (image 1862777ac) =====

void FUN_1862777ac(void)

{
  return;
}



// ===== continuation @ rva 62778cb (image 1862778cb) =====

void FUN_1862778cb(void)

{
  return;
}



// ===== continuation @ rva 6277819 (image 186277819) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186277819(void)

{
  FUN_190ddce00();
  (*_DAT_1807e1ec8)();
  return;
}



// ===== continuation @ rva 62778d2 (image 1862778d2) =====

void FUN_1862778d2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 62778ab (image 1862778ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862778ab(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807e1ea8)();
  return;
}



// ===== continuation @ rva 627784c (image 18627784c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18627784c(void)

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



// ===== continuation @ rva 6277870 (image 186277870) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186277870(void)

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



// ===== continuation @ rva 6277891 (image 186277891) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186277891(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1807e1eb8)();
  return;
}



// ===== continuation @ rva 627790a (image 18627790a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18627790a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1807e1f08)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 6277916 (image 186277916) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186277916(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 627793d (image 18627793d) =====

undefined4 * FUN_18627793d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 6277ae8 (image 186277ae8) =====

void FUN_186277ae8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x38) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x000186277b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e2200 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 6277a93 (image 186277a93) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186277aca */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186277a93(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 628d332 (image 18628d332) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18628d332(longlong param_1)

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



// ===== continuation @ rva 62811b0 (image 1862811b0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862811b0(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong lVar5;
  uint unaff_R14D;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  
  _DAT_183123010 = func_0x0001862a0c00(_DAT_183123088 ^ 0xe000863ffc403);
  uVar3 = _DAT_183123010 * 0x781f85e8c6239c41;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3;
  _DAT_183122f10 = (_DAT_183122f10 ^ uVar3) + 0x7f7975ff ^ 0xe951c30cc8f040db;
  _DAT_183122f68 = (_DAT_183122d48 * 0x45e37205eb98b9c1 ^ _DAT_183122f10) + uVar3 ^ _DAT_183122f10;
  _DAT_183122d48 = 0x7f7975ff;
  uVar4 = (_DAT_183122f30 ^ _DAT_1807e2770) + _DAT_183122f10 + 0x3308ff0e;
  uVar3 = (_DAT_183122f10 ^ _UNK_1807e2778) + _DAT_183122f30 + 0xb3883461;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183122f30 ^ _DAT_1807e2770;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183122f10 ^ _UNK_1807e2778;
  _DAT_183122fe8 =
       func_0x0001862a0c00((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183122f30 + 0xb3883461) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122f10 + 0x3308ff0e));
  uVar4 = _DAT_183122fe8 << 0x1c | _DAT_183122fe8 >> 0x24;
  _DAT_183122d70 = (_DAT_183122d70 ^ uVar4) + 0x4a2e84a ^ 0xfd6b8de0eab80d46;
  _DAT_183122f90 = (_DAT_183122f90 * 0x26b79c9a95d372f3 ^ _DAT_183122d70) + uVar4;
  _DAT_183122e98 = _DAT_183122f90 ^ _DAT_183122d70;
  _DAT_183123040 = 0x4a2e84a;
  uVar4 = (_DAT_183123020 ^ _DAT_1807e2780) + _DAT_183123088 + 0xac80c4de;
  uVar3 = (_DAT_183123088 ^ _UNK_1807e2788) + _DAT_183123020 + 0xd75d1803;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183123020 ^ _DAT_1807e2780;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183123088 ^ _UNK_1807e2788;
  uVar4 = func_0x0001862a0c00((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183123020 + 0xd75d1803) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183123088 + 0xac80c4de));
  _DAT_183122f38 = _DAT_183122d60 ^ uVar4 ^ 0xfffffffe;
  _DAT_183122e20 = (_DAT_183122e20 ^ uVar4) + 0xfffffffe ^ 0xf241ebd3b91a1495;
  _DAT_1831230c8 = (_DAT_1831230c8 * 0x785f97c9152252d7 ^ _DAT_183122e20) + uVar4;
  _DAT_183122ec0 = _DAT_1831230c8 ^ _DAT_183122e20;
  _DAT_1831230c0 = 0xfffffffe;
  uVar4 = (_DAT_1831230e0 ^ _DAT_1807e2790) + _DAT_183122e18 + 0x84222325;
  uVar3 = (_DAT_183122e18 ^ _UNK_1807e2798) + _DAT_1831230e0 + 0xfc43e711;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831230e0 ^ _DAT_1807e2790;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183122e18 ^ _UNK_1807e2798;
  _DAT_183122e40 =
       func_0x0001862a0c00((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831230e0 + 0xfc43e711) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122e18 + 0x84222325));
  uVar4 = (_DAT_183122e40 & 0x1ffffffffff) * 0x459fdaa57f704d01;
  _DAT_183122d40 = (_DAT_183122d40 ^ uVar4) - 0xfc43e711 ^ 0xd9f46a62313e9f2;
  _DAT_183122ed0 = (_DAT_183122ed0 * 0x22d27f9af4b6da1b ^ _DAT_183122d40) + uVar4;
  _DAT_183122e28 = _DAT_183122ed0 ^ _DAT_183122d40;
  _DAT_183122da0 = 0x3bc18ef;
  uVar4 = (~_DAT_183122fa0 + 0xfc43e712) *
          ((_DAT_183122d68 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_183122d68 & 0x7bdddcdb) * 2);
  uVar4 = (uVar4 | _DAT_183122e90) + (uVar4 & _DAT_183122e90);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183122e10 = func_0x0001862a0c00((uVar4 | 0x879e3bca) + (ulonglong)((uint)uVar4 & 0x879e3bca))
  ;
  uVar4 = _DAT_183122d90 ^ 0xfffffffe;
  _DAT_183122d60 = _DAT_183122f38 ^ uVar4 ^ 0x1fc43e70f;
  _DAT_183123030 = (_DAT_183123030 ^ uVar4) + 0x1fc43e70f ^ 0x9227e77e745b14c2;
  _DAT_1831230c0 = (_DAT_1831230c0 * -0x149f730b70908af9 ^ _DAT_183123030) + uVar4;
  _DAT_183122e88 = _DAT_1831230c0 ^ _DAT_183123030;
  _DAT_183122e70 = 0xfc43e70f;
  uVar4 = (_DAT_183122f50 ^ _DAT_1807e27a0) + _DAT_183122d68 + 0x7861c42a;
  uVar3 = (_DAT_183122d68 ^ _UNK_1807e27a8) + _DAT_183122f50 + 0x3bc18ef;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183122f50 ^ _DAT_1807e27a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183122d68 ^ _UNK_1807e27a8;
  _DAT_183122e68 =
       func_0x0001862a0c00((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183122f50 + 0x3bc18ef) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122d68 + 0x7861c42a));
  uVar4 = _DAT_183122e68 ^ 0xfc43e700;
  _DAT_183123070 = _DAT_183123028 ^ uVar4 ^ 0xfffffffe;
  _DAT_183122f78 = (_DAT_183122f78 ^ uVar4) + 0xfffffffe ^ 0x34819453235e6d2a;
  _DAT_183123000 = (_DAT_183123000 * -0x2c1ff61638b6b2cd ^ _DAT_183122f78) + uVar4;
  _DAT_183122e38 = _DAT_183123000 ^ _DAT_183122f78;
  _DAT_183122f88 = 0xfffffffe;
  uVar4 = (_DAT_183122f40 ^ _DAT_1807e27b0) + _DAT_183122fe8 + 0x7bdddcdb;
  uVar3 = (_DAT_183122fe8 ^ _UNK_1807e27b8) + _DAT_183122f40 + 0xea1c89a1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183122f40 ^ _DAT_1807e27b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183122fe8 ^ _UNK_1807e27b8;
  _DAT_183122d38 =
       func_0x0001862a0c00((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183122f40 + 0xea1c89a1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122fe8 + 0x7bdddcdb));
  uVar4 = (ulonglong)(~(uint)_DAT_183122d38 >> 1);
  _DAT_183122d80 = _DAT_183122d48 ^ uVar4 ^ 0x1ea1c899f;
  _DAT_183122db8 = (_DAT_183122db8 ^ uVar4) + 0x1ea1c899f ^ 0x60da55d5eaa8347f;
  _DAT_183122fb8 = (_DAT_183122fb8 * -0x214d4a820067c5bb ^ _DAT_183122db8) + uVar4;
  _DAT_183123080 = _DAT_183122fb8 ^ _DAT_183122db8;
  _DAT_1831230d8 = 0xea1c899f;
  _DAT_1831230b8 = func_0x0001862a0c00(_DAT_183123038 + 0xffb3ff88a2ff3affU ^ 0x3f);
  uVar4 = (_DAT_1831230b8 >> 7) * 8;
  _DAT_183122fe0 = _DAT_183122ed8 ^ uVar4 ^ 0xfffffffe;
  _DAT_1831230d8 = (uVar4 ^ _DAT_1831230d8) + 0xfffffffe ^ 0xcfcad4155f034c62;
  _DAT_183122e88 =
       (_DAT_183122e88 * -0x48b3da95b772dab ^ _DAT_1831230d8) + (_DAT_1831230b8 >> 7) * 8;
  _DAT_183123000 = _DAT_1831230d8 ^ _DAT_183122e88;
  _DAT_183122fc0 = 0xfffffffe;
  _DAT_183122db0 = func_0x0001862a0c00(_DAT_183123098 ^ 0xff6600679000c6ae);
  uVar4 = _DAT_183122db0 ^ 0x7f7975ff;
  _DAT_183122fa0 = _DAT_183122d00 ^ uVar4 ^ 0x841c5e49;
  _DAT_183122e38 = (_DAT_183122e38 ^ uVar4) + 0x841c5e49 ^ 0x1aa3dc93017de53e;
  _DAT_183122ee8 = (_DAT_183122ee8 * -0x3fbdafa696bba251 ^ _DAT_183122e38) + uVar4;
  _DAT_183122f70 = _DAT_183122ee8 ^ _DAT_183122e38;
  _DAT_183122fa8 = 0x841c5e49;
  uVar4 = (_DAT_183123048 ^ _DAT_1807e27c0) + _DAT_183122e18 + 0xfb5b56da;
  uVar3 = (_DAT_183122e18 ^ _UNK_1807e27c8) + _DAT_183123048 + 0x4a2e84a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183123048 ^ _DAT_1807e27c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183122e18 ^ _UNK_1807e27c8;
  _DAT_183122d68 =
       func_0x0001862a0c00((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183123048 + 0x4a2e84a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122e18 + 0xfb5b56da));
  uVar4 = _DAT_183122d68 ^ 0x7ffbfdff;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar4;
  _DAT_183122d00 = (_DAT_183122d00 ^ uVar4) + 0x7bdb9db5 ^ 0x54d0cf48a7d20452;
  _DAT_183123068 = (_DAT_183123068 * 0x67f4d1261bd5d03b ^ _DAT_183122d00) + uVar4;
  _DAT_183122fa0 = _DAT_183123068 ^ _DAT_183122d00;
  _DAT_183123040 = 0x7bdb9db5;
  _DAT_1831230c0 = func_0x0001862a0c00(_DAT_183122d28 ^ 0xb6009e7000b6b9);
  _DAT_1831230e8 =
       (_DAT_1831230e8 ^ _DAT_1831230c0 ^ 0x24f045fec104649) + 0x420604a ^ 0xaf8c8ed07b774753;
  _DAT_183123010 =
       (_DAT_183122f20 * -0x7963b51739c7ca53 ^ _DAT_1831230e8) +
       (_DAT_1831230c0 ^ 0x24f045fec104649) ^ _DAT_1831230e8;
  _DAT_183122f20 = 0x420604a;
  uVar4 = (_DAT_183122f58 ^ _DAT_1807e27d0) + _DAT_183123090 + 0x3e7d6c;
  uVar3 = (_DAT_183123090 ^ _UNK_1807e27d8) + _DAT_183122f58 + 0x841c5e49;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183122f58 ^ _DAT_1807e27d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183123090 ^ _UNK_1807e27d8;
  _DAT_183122f60 =
       func_0x0001862a0c00((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183122f58 + 0x841c5e49) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183123090 + 0x3e7d6c));
  _DAT_183122fa8 = _DAT_183122f60 * -0x1fb92222a0dfb183;
  _DAT_183122ea0 = _DAT_183122ea0 ^ _DAT_183122fa8 ^ 0x83f482d39b5165bf;
  _DAT_183122fc0 = (_DAT_183122fc0 * -0x3bcff3c51e657d8f ^ _DAT_183122ea0) + _DAT_183122fa8;
  _DAT_183122f90 = _DAT_183122fc0 ^ _DAT_183122ea0;
  _DAT_183122fe8 = 0;
  uVar4 = (~_DAT_183123058 + 0x100000000) *
          ((_DAT_183122ec8 ^ 0xfb5b56da) + (ulonglong)((uint)_DAT_183122ec8 & 0xfb5b56da) * 2);
  uVar4 = (uVar4 | _DAT_183122db0) + (uVar4 & _DAT_183122db0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183122ff0 = func_0x0001862a0c00((uVar4 | 0x4a4a925) + (ulonglong)((uint)uVar4 & 0x4a4a925));
  uVar4 = ~((_DAT_183122ff0 & 0xffffffff) * (_DAT_1807e27e0 & 0xffffffff)) & 0x7f7975ff;
  _DAT_183122df8 = (_DAT_183122df8 ^ uVar4) + 0x80868a00 ^ 0x87fe54d07122cda0;
  _DAT_183122f08 = (_DAT_183122f08 * 0x927adc62844769d ^ _DAT_183122df8) + uVar4;
  _DAT_183122f30 = _DAT_183122f08 ^ _DAT_183122df8;
  _DAT_183122ea8 = _DAT_183122f78 ^ 0x80868a00;
  _DAT_183122d20 = 0x80868a00;
  uVar4 = (~_DAT_183122f08 + 0x80868a01) *
          ((_DAT_183122f90 ^ 0xfb5b56da) + (ulonglong)((uint)_DAT_183122f90 & 0xfb5b56da) * 2);
  uVar4 = (uVar4 | _DAT_183122d78) + (uVar4 & _DAT_183122d78);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183122e98 = func_0x0001862a0c00((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda))
  ;
  uVar4 = (_DAT_183122e98 ^ 0x80868a00) & 0x7fffffffffffffff;
  _DAT_183122fb0 = _DAT_183122fb0 ^ uVar4 ^ 0xa913e8efbc185b4;
  _DAT_183122e48 = (_DAT_183122e48 * -0x17244d4958ecdabb ^ _DAT_183122fb0) + uVar4;
  _DAT_183123018 = _DAT_183122e48 ^ _DAT_183122fb0;
  _DAT_1831230d0 = 0;
  uVar4 = (~_DAT_183122e18 + 0x5a582500) *
          ((_DAT_1831230e8 ^ 0xde7a07da) + (ulonglong)((uint)_DAT_1831230e8 & 0xde7a07da) * 2);
  uVar4 = (uVar4 | _DAT_183122f00) + (uVar4 & _DAT_183122f00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183122df0 = func_0x0001862a0c00((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = _DAT_183122df0 * 0x39c192037ff7e123 ^ 0x5a5824ff;
  _DAT_183122de8 = _DAT_183122de8 ^ uVar4 ^ 0x6887fb4d53dab5f;
  _DAT_1831230b8 = (_DAT_1831230b8 * -0x63a06e0d9a015a1f ^ _DAT_183122de8) + uVar4;
  _DAT_183122e48 = _DAT_1831230b8 ^ _DAT_183122de8;
  _DAT_183122e58 = _DAT_183122d90;
  _DAT_183123028 = 0;
  uVar3 = CONCAT44(0,unaff_R14D);
  uVar4 = uVar3 ^ 0x84222325 ^ _DAT_183123000;
  lVar5 = (uVar3 ^ 0x84222325) + _DAT_183122d00;
  uVar7 = uVar4 + lVar5;
  uVar8 = (_DAT_183122d00 ^ 0xfffffffe) + _DAT_183123000 + 0xfffffffe;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar4;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183122d00 ^ 0xfffffffe;
  _DAT_183122eb0 =
       func_0x0001862a0c00((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183123000 + 0xfffffffe) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar4 = (uVar3 | 0xfffffffe) ^ _DAT_183122eb0;
  uVar4 = uVar4 << 0x24 | uVar4 >> 0x1c;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar3;
  uVar12 = unaff_R14D & (uint)DAT_18011bc70;
  uVar6 = unaff_R14D | (uint)DAT_18011bc70;
  auVar1._8_4_ = 0xffffffff;
  auVar1._0_8_ = 0xffffffffffffffff;
  auVar1._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar10 ^ auVar1,0);
  uVar9 = SUB164(auVar10 ^ _DAT_18011bc70,0);
  _DAT_183122ff0 =
       (ulonglong)uVar11 * (ulonglong)_DAT_1807e2840 +
       ((ulonglong)_DAT_1807e2850 * (ulonglong)uVar11 +
        (SUB168(auVar10 ^ auVar1,0) >> 0x20) * (ulonglong)_DAT_1807e2840 << 0x20) +
       ((ulonglong)_DAT_1807e2830 * (ulonglong)uVar6 << 0x20) +
       (ulonglong)_DAT_1807e2820 * (ulonglong)uVar6 +
       ((ulonglong)uVar12 * (ulonglong)_DAT_1807e2830 << 0x20) +
       (ulonglong)uVar12 * (ulonglong)_DAT_1807e2820 +
       ((ulonglong)_DAT_1807e2810 * (ulonglong)unaff_R14D << 0x20) +
       (ulonglong)_DAT_1807e2800 * (ulonglong)unaff_R14D +
       (-((ulonglong)uVar9 * (ulonglong)_DAT_1807e28e0 +
         ((ulonglong)_DAT_1807e28f0 * (ulonglong)uVar9 +
          (SUB168(auVar10 ^ _DAT_18011bc70,0) >> 0x20) * (ulonglong)_DAT_1807e28e0 << 0x20)) -
       (((ulonglong)uVar6 * (ulonglong)_DAT_1807e28d0 << 0x20) +
        (ulonglong)_DAT_1807e28c0 * (ulonglong)uVar6 +
       ((ulonglong)uVar12 * (ulonglong)_DAT_1807e28b0 << 0x20) +
       (ulonglong)_DAT_1807e28a0 * (ulonglong)uVar12 +
       ((ulonglong)unaff_R14D * (ulonglong)_DAT_1807e2890 << 0x20) +
       (ulonglong)_DAT_1807e2880 * (ulonglong)unaff_R14D)) + 0x657017eb5f04f5f1;
  _DAT_183122e10 = _DAT_183123068 ^ uVar4 ^ _DAT_183122ff0;
  _DAT_183122d58 = (_DAT_183122d58 ^ uVar4) + _DAT_183122ff0 ^ 0x1476fa9b918ed8a0;
  _DAT_183122d78 = (_DAT_183122d78 * 0x4d8cd9c607d43943 ^ _DAT_183122d58) + uVar4;
  _DAT_183122da0 = _DAT_183122d78 ^ _DAT_183122d58;
  *(int *)(unaff_RBP + -0xc) = (int)_DAT_183122ff0;
  _DAT_183122ff0 = _DAT_183122ff0 & 0xffffffff;
  *(undefined8 *)(unaff_RBP + -0x38) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x80) = 0;
  iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x38) + 0x558))(*(longlong **)(unaff_RBP + 0x38))
  ;
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6281167 (image 186281167) =====

undefined8 FUN_186281167(void)

{
  func_0x000180001044();
  return 0;
}



// ===== continuation @ rva 627dbf4 (image 18627dbf4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18627dbf4(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  ulonglong uVar13;
  
  *(undefined8 *)(unaff_RBP + 0x60) = *(undefined8 *)(*(longlong *)(unaff_RBP + 0x40) + -8);
  uVar5 = (_DAT_183122d98 ^ _DAT_1807e3650) + _DAT_183123010 + 0xdcbc12545ce4d163;
  uVar6 = (_DAT_183123010 ^ _UNK_1807e3658) + _DAT_183122d98 + 0x54d9bf228c1644b8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122d98 ^ _DAT_1807e3650;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183123010 ^ _UNK_1807e3658;
  _DAT_183122ea8 =
       func_0x0001862a0c00((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183122d98 + 0x54d9bf228c1644b8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183123010 + 0xdcbc12545ce4d163));
  _DAT_183122d50 =
       (_DAT_183122d50 ^ ~_DAT_183122ea8 & 0xdcbc1254d8c6f246) + 0xdcfdbf76dcd6f6fe ^
       0x98e313de4feca73d;
  _DAT_183122f10 =
       (_DAT_183122f10 * -0x543396da8422a29 ^ _DAT_183122d50) +
       (~_DAT_183122ea8 & 0xdcbc1254d8c6f246);
  _DAT_183123048 = _DAT_183122f10 ^ _DAT_183122d50;
  _DAT_183122de8 = 0xdcfdbf76dcd6f6fe;
  _DAT_183123078 = func_0x0001862a0c00(_DAT_183122d38 ^ 0x8c526a31c8d1e4f5);
  uVar6 = _DAT_183123078 ^ 0x4315726469804898;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar6;
  _DAT_183122fd0 = _DAT_183123098 ^ uVar6 ^ 0x4862ae4c8d30090c;
  _DAT_183122ea0 = (_DAT_183122ea0 ^ uVar6) + 0x4862ae4c8d30090c ^ 0xccf97120e1ba26e7;
  _DAT_183122fc8 = (_DAT_183122fc8 * 0x6a2586b1632ab089 ^ _DAT_183122ea0) + uVar6;
  _DAT_183122fa8 = _DAT_183122fc8 ^ _DAT_183122ea0;
  _DAT_1831230b0 = 0x4862ae4c8d30090c;
  _DAT_183122f38 = func_0x0001862a0c00(_DAT_1831230a0 ^ 0x1754b135bc60bbf2);
  uVar5 = _DAT_183122f38 & 0x7ffffffffffffe00;
  _DAT_183123008 = _DAT_183122fc8 ^ uVar5 ^ 0xfffffffffffffff8;
  uVar6 = (_DAT_183122d28 ^ uVar5) - 8;
  _DAT_183122d28 = uVar6 ^ 0x9496ca246ea5abd1;
  _DAT_183123098 = (_DAT_183123098 * 0x14d13b86bd2760ff ^ _DAT_183122d28) + uVar5 ^ _DAT_183122d28;
  _DAT_1831230d0 = 0xfffffffffffffff8;
  uVar5 = (~_DAT_183122f60 + 0x837b1e9f72382551) *
          ((uVar6 ^ 0x6b6935db1578770c) + (_DAT_183122d28 & 0x7fffffff7bdddcdd) * 2);
  uVar5 = (uVar5 | _DAT_183122fc8) + (uVar5 & _DAT_183122fc8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183123068 = func_0x0001862a0c00((uVar5 | 0x7c84e16009e5f98d) + (uVar5 & 0x7c84e16009e5f98d));
  uVar5 = (_DAT_183123068 & 0x7fffffffff) << 0x10 | _DAT_183123068 >> 0x30;
  _DAT_183122f48 = (_DAT_183122f48 ^ uVar5) + 0x837b1e9f72382548 ^ 0xeae40a95347c4e61;
  _DAT_183122f90 =
       ((_DAT_183122d08 ^ uVar5 ^ 0x837b1e9f72382548) * -0x762e5633dae015b ^ _DAT_183122f48) + uVar5
       ^ _DAT_183122f48;
  _DAT_183122f10 = 0x837b1e9f72382548;
  _DAT_183122e08 = func_0x0001862a0c00(_DAT_183122e30 + 0xee247f143d0e32d2 ^ 0x87);
  uVar5 = _DAT_183122e08 - (_DAT_183122e08 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183122e08;
  _DAT_183123078 = _DAT_183122f78 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_183122fc0 = (_DAT_183122fc0 ^ uVar5) - 8 ^ 0x863a3c1daf4c8c10;
  _DAT_183122e58 = (_DAT_183122e58 * 0xa89db85b1c04559 ^ _DAT_183122fc0) + uVar5;
  _DAT_183123058 = _DAT_183122e58 ^ _DAT_183122fc0;
  _DAT_183122f98 = 0xfffffffffffffff8;
  _DAT_183122ff8 = func_0x0001862a0c00(_DAT_183122f18 + 0xebea12116150368e ^ 0x70);
  _DAT_183122f90 =
       (_DAT_183122f90 ^ _DAT_183122ff8 * -0x48eea31c30f3b5cb) + 0x70e9af934884c2ba ^
       0x2b079e30f74fa35c;
  _DAT_183122e18 =
       (_DAT_183122e18 * 0x1d584af7dcb424ef ^ _DAT_183122f90) + _DAT_183122ff8 * -0x48eea31c30f3b5cb
  ;
  _DAT_183122fe8 = _DAT_183122e18 ^ _DAT_183122f90;
  _DAT_183122d70 = 0x70e9af934884c2ba;
  uVar5 = (_DAT_183122f10 ^ _DAT_1807e3660) + (_DAT_183122d50 - 0x84222323);
  uVar6 = (_DAT_183122d50 ^ _UNK_1807e3668) + _DAT_183122f10 + 0x8f16506cb77b3d46;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122f10 ^ _DAT_1807e3660;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183122d50 ^ _UNK_1807e3668;
  _DAT_183122ee8 =
       func_0x0001862a0c00((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183122f10 + 0x8f16506cb77b3d46) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122d50 - 0x84222323));
  uVar5 = _DAT_183122ee8 ^ 0x70e9af934884c2be;
  _DAT_183122f08 = _DAT_183122d68 ^ uVar5 ^ 0x8f16506cb77b3d3e;
  _DAT_1831230b0 = (_DAT_1831230b0 ^ uVar5) + 0x8f16506cb77b3d3e ^ 0xd41780ef0a4585fa;
  _DAT_183122f88 = (_DAT_183122f88 * 0x452cf2a54514f70d ^ _DAT_1831230b0) + uVar5;
  _DAT_183122e48 = _DAT_183122f88 ^ _DAT_1831230b0;
  _DAT_183122d58 = 0x8f16506cb77b3d3e;
  _DAT_183122d70 = func_0x0001862a0c00(_DAT_183122de0 + 0x5d2caceba1b9238eU ^ 0xdc);
  uVar5 = (_DAT_183122d70 ^ 0xffffffffffffffbe) * -0x3c194b963fa7a3d7 ^ 0x70e9af934884c2ba;
  _DAT_183122d68 = _DAT_183122f08 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_183122d50 = (_DAT_183122d50 ^ uVar5) - 8 ^ 0xe09bf733fc62458b;
  _DAT_183122e98 = (_DAT_183122e98 * -0x2d70f86f8729e53 ^ _DAT_183122d50) + uVar5;
  _DAT_183122e20 = _DAT_183122e98 ^ _DAT_183122d50;
  _DAT_183122e50 = -8;
  uVar5 = (~_DAT_183123028 + 0x6a62f79e3d3b4970) *
          ((_DAT_183122e20 ^ 0xdcfdbf7658f4d5db) + (_DAT_183122e20 & 0x5cfdbf7658f4d5db) * 2);
  uVar5 = (uVar5 | _DAT_183122d60) + (uVar5 & _DAT_183122d60);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183122e30 = func_0x0001862a0c00((uVar5 | 0xb69f48e865cf9cb4) + (uVar5 & 0xb69f48e865cf9cb4));
  uVar5 = (_DAT_183122e30 ^ 0xeda8aac802d8622) << 7 | (_DAT_183122e30 ^ 0xeda8aac802d8622) >> 0x39;
  _DAT_183122fe0 = _DAT_183122df0 ^ uVar5 ^ 0x4760b7151a12406d;
  _DAT_183122d70 = (_DAT_183122d70 ^ uVar5) + 0x4760b7151a12406d ^ 0xae68a52968cffdae;
  _DAT_183122e50 = (_DAT_183122e50 * -0x1aa9c0c817280343 ^ _DAT_183122d70) + uVar5;
  _DAT_183122d00 = _DAT_183122e50 ^ _DAT_183122d70;
  _DAT_183122f40 = 0x4760b7151a12406d;
  uVar5 = (_DAT_183122dd0 ^ _DAT_1807e3670) + _DAT_1831230c0 + 0xdcfdbf7658f4d5db;
  uVar6 = (_DAT_1831230c0 ^ _UNK_1807e3678) + _DAT_183122dd0 + 0x6a62f79e3d3b496f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122dd0 ^ _DAT_1807e3670;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831230c0 ^ _UNK_1807e3678;
  _DAT_183122e30 =
       func_0x0001862a0c00((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183122dd0 + 0x6a62f79e3d3b496f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831230c0 + 0xdcfdbf7658f4d5db));
  _DAT_183122ee0 =
       (_DAT_183122ee0 ^ _DAT_183122e30 & 0xffffffffffffff) + 0xb69f48e8e1edbf91 ^
       0x3e0e5e9df14083de;
  _DAT_183123090 =
       (_DAT_183123090 * 0x14f7273d899da15 ^ _DAT_183122ee0) + (_DAT_183122e30 & 0xffffffffffffff);
  _DAT_183122f60 = _DAT_183123090 ^ _DAT_183122ee0;
  _DAT_183123060 = 0xb69f48e8e1edbf91;
  uVar5 = (_DAT_183123050 ^ _DAT_1807e3680) + _DAT_183122da8 + 0xb69f48e865cf9cb4;
  uVar6 = (_DAT_183122da8 ^ _UNK_1807e3688) + _DAT_183123050 + 0x90c16e2c382480dc;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183123050 ^ _DAT_1807e3680;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183122da8 ^ _UNK_1807e3688;
  _DAT_183122fd8 =
       func_0x0001862a0c00((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183123050 + 0x90c16e2c382480dc) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122da8 + 0xb69f48e865cf9cb4));
  uVar5 = _DAT_183122fd8 >> 1 | _DAT_183122fd8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183122fd8;
  _DAT_183122e28 = _DAT_1831230f8 ^ uVar5 ^ 0x4760b7151a12406d;
  _DAT_1831230f8 = (_DAT_1831230f8 ^ uVar5) + 0x4760b7151a12406d ^ 0xd7ecdf492e967b37;
  _DAT_183122e60 = (_DAT_183122e60 * -0x9f477981e86fd15 ^ _DAT_1831230f8) + uVar5;
  _DAT_183122ef8 = _DAT_183122e60 ^ _DAT_1831230f8;
  _DAT_183122fa8 = 0x4760b7151a12406d;
  uVar5 = (_DAT_183122eb0 ^ _DAT_1807e3690) + _DAT_183122d88 + 0x4760b7159e306348;
  uVar6 = (_DAT_183122d88 ^ _UNK_1807e3698) + _DAT_183122eb0 + 0x4760b7151a12406d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122eb0 ^ _DAT_1807e3690;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183122d88 ^ _UNK_1807e3698;
  _DAT_183122db0 =
       func_0x0001862a0c00((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183122eb0 + 0x4760b7151a12406d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122d88 + 0x4760b7159e306348));
  _DAT_183122f50 = _DAT_183122db0 & 0xffffffffffffffc0 ^ 0x4760b7151a12406d;
  _DAT_183122e58 = _DAT_183122e58 ^ _DAT_183122f50 ^ 0x17d24f9c7eb08cb1;
  _DAT_183122ea0 = (_DAT_183122ea0 * 0x5acd02c3163983ef ^ _DAT_183122e58) + _DAT_183122f50;
  _DAT_183122fb0 = _DAT_183122ea0 ^ _DAT_183122e58;
  _DAT_183122ea8 = 0;
  uVar5 = (_DAT_183122e30 ^ 0xffffffff7bdddcdd) + (_DAT_1831230f8 - 0x84222323);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122e30 ^ 0xffffffff7bdddcdd;
  uVar6 = ((_DAT_1831230f8 + _DAT_183122e30) * 0x2000 | _DAT_1831230f8 + _DAT_183122e30 >> 0x33) ^
          _DAT_1831230f8;
  _DAT_1831230a8 =
       func_0x0001862a0c00((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183122e30 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831230f8 - 0x84222323));
  _DAT_183122ee0 = _DAT_183122f70 ^ _DAT_1831230a8 ^ 0xfffffffffffffff8;
  _DAT_183122f80 = (_DAT_183122d88 ^ _DAT_1831230a8) - 8 ^ 0xe119e707da75f1ef;
  _DAT_183122d88 = (_DAT_183122d88 * -0x29f53d93516be7d9 ^ _DAT_183122f80) + _DAT_1831230a8;
  _DAT_183122f80 = _DAT_183122d88 ^ _DAT_183122f80;
  _DAT_183123030 = 0xfffffffffffffff8;
  _DAT_183122f40 = func_0x0001862a0c00(_DAT_183122f68 ^ 0x8726015f1c4007cf);
  _DAT_183122dd8 =
       (_DAT_183122dd8 ^ ~_DAT_183122f40 & 0xdcfdbf76dcd6f6fe) + 0x2302408923290901 ^
       0x7db4d4551f6743ea;
  _DAT_183122e70 =
       (_DAT_183122e70 * 0x3c95874df96245c3 ^ _DAT_183122dd8) +
       (~_DAT_183122f40 & 0xdcfdbf76dcd6f6fe);
  _DAT_183123010 = _DAT_183122e70 ^ _DAT_183122dd8;
  _DAT_183122e98 = 0x2302408923290901;
  uVar5 = (_DAT_1831230e8 ^ 0xffffffff7bdddcdd) + (_DAT_183122f48 - 0x84222323);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831230e8 ^ 0xffffffff7bdddcdd;
  uVar6 = ((_DAT_183122f48 + _DAT_1831230e8) * 0x2000 | _DAT_183122f48 + _DAT_1831230e8 >> 0x33) ^
          _DAT_183122f48;
  _DAT_183122f58 =
       func_0x0001862a0c00((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1831230e8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122f48 - 0x84222323));
  uVar5 = _DAT_183122eb8 << 9 | _DAT_183122eb8 >> 0x37;
  _DAT_183123090 = _DAT_183123018 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_183122f40 = (_DAT_183122f40 ^ uVar5) - 8 ^ 0x3c3cf1431220cc10;
  _DAT_183122d70 = (_DAT_183122d70 * -0x253b82273c27be75 ^ _DAT_183122f40) + uVar5;
  _DAT_183122e50 = _DAT_183122d70 ^ _DAT_183122f40;
  _DAT_183122d48 = 0xfffffffffffffff8;
  _DAT_1831230a0 = func_0x0001862a0c00(_DAT_183123040 ^ 0x1f007bdd001d2b);
  _DAT_183122e00 = _DAT_183122e00 ^ _DAT_1831230a0 ^ 0x1b012961c9906b24 ^ 0x52df732ab8c2538e;
  _DAT_183122ec8 =
       (_DAT_183122ec8 * -0x5f1f857bee0f70e3 ^ _DAT_183122e00) +
       (_DAT_1831230a0 ^ 0x1b012961c9906b24);
  _DAT_183123058 = _DAT_183122ec8 ^ _DAT_183122e00;
  _DAT_183123040 = 0;
  _DAT_183122e78 = func_0x0001862a0c00(_DAT_183122f20 + 0xb744e95bcd05dca8U ^ 0x82);
  uVar5 = _DAT_183122e78 & 0xfffffffffffffffe ^ 0xfffffffffffffff8;
  _DAT_183122f40 = _DAT_1831230a8 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1831230d0 = (_DAT_1831230d0 ^ uVar5) - 8 ^ 0x693c6d2598fe0511;
  _DAT_183123078 = (_DAT_183123078 * 0x5d36916b5fdf1fc9 ^ _DAT_1831230d0) + uVar5;
  _DAT_183123068 = _DAT_183123078 ^ _DAT_1831230d0;
  _DAT_183122f48 = 0xfffffffffffffff8;
  uVar5 = *(ulonglong *)(unaff_RBP + 0x40);
  uVar6 = (~_DAT_183123090 - 7) *
          ((uVar5 ^ 0x84222325 ^ _DAT_183122f98) + ((uVar5 ^ 0x84222325) & _DAT_183122f98) * 2);
  uVar6 = (uVar6 | _DAT_183123018) + (uVar6 & _DAT_183123018);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183123078 =
       func_0x0001862a0c00((uVar5 ^ 0xffffffff7bdddcdd | uVar6) +
                           (uVar6 & (uVar5 ^ 0xffffffff7bdddcdd)));
  uVar6 = uVar5 * -8 ^ _DAT_183123078;
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar6;
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  *(ulonglong *)(unaff_RBP + 0x40) = uVar5;
  *(undefined8 *)(unaff_RBP + 0x48) = 0;
  uVar6 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar6 ^
          uVar5;
  uVar8 = (uint)uVar5;
  uVar7 = (uint)(uVar5 >> 0x20);
  auVar1._8_4_ = uVar8;
  auVar1._0_8_ = uVar5;
  auVar1._12_4_ = uVar7;
  auVar2._8_4_ = uVar8;
  auVar2._0_8_ = uVar5;
  auVar2._12_4_ = uVar7;
  uVar8 = uVar8 | (uint)DAT_1800627b0;
  uVar12 = SUB164(auVar2 & _DAT_1800627b0,0);
  uVar4 = SUB168(auVar2 & _DAT_1800627b0,0);
  uVar9 = SUB164(_DAT_1800627b0 ^ auVar1,0);
  uVar13 = SUB168(_DAT_1800627b0 ^ auVar1,0);
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  auVar11 = auVar11 ^ *(undefined1 (*) [16])(unaff_RBP + 0x40);
  uVar10 = auVar11._0_4_;
  _DAT_183122da8 =
       (ulonglong)_DAT_1807e3710 * (ulonglong)uVar9 +
       ((ulonglong)_DAT_1807e3720 * (ulonglong)uVar9 + (uVar13 >> 0x20) * (ulonglong)_DAT_1807e3710
       << 0x20) +
       ((ulonglong)_DAT_1807e36f0 * (ulonglong)uVar8 + _DAT_1807e3700 << 0x20) +
       (ulonglong)_DAT_1807e36e0 * (ulonglong)uVar8 +
       (ulonglong)_DAT_1807e36c0 * (ulonglong)uVar12 +
       ((ulonglong)_DAT_1807e36d0 * (ulonglong)uVar12 + (uVar4 >> 0x20) * (ulonglong)_DAT_1807e36c0
       << 0x20) +
       ((ulonglong)_DAT_1807e36b0 * (uVar5 & 0xffffffff) +
        (ulonglong)_DAT_1807e36a0 * (ulonglong)uVar7 << 0x20) +
       (uVar5 & 0xffffffff) * (ulonglong)_DAT_1807e36a0 +
       (-((ulonglong)uVar10 * (ulonglong)_DAT_1807e3760 +
          ((auVar11._0_8_ >> 0x20) * (ulonglong)_DAT_1807e3760 +
           (ulonglong)_DAT_1807e3750 * (ulonglong)uVar10 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)_DAT_1807e3780 +
         ((uVar13 >> 0x20) * (ulonglong)_DAT_1807e3780 +
          (ulonglong)_DAT_1807e3770 * (ulonglong)uVar9 << 0x20) +
         (ulonglong)uVar12 * (ulonglong)_DAT_1807e3780 +
         ((uVar4 >> 0x20) * (ulonglong)_DAT_1807e3780 +
          (ulonglong)uVar12 * (ulonglong)_DAT_1807e3770 << 0x20) +
         (uVar5 & 0xffffffff) * (ulonglong)_DAT_1807e3760 +
         ((ulonglong)uVar7 * (ulonglong)_DAT_1807e3760 +
          (uVar5 & 0xffffffff) * (ulonglong)_DAT_1807e3750 << 0x20)) -
       (((ulonglong)uVar8 * (ulonglong)_DAT_1807e37a0 + _DAT_1807e37b0 << 0x20) +
       (ulonglong)_DAT_1807e3790 * (ulonglong)uVar8)) + 0x88f6cea8d421d9c9;
  _DAT_183123030 = _DAT_1831230a8 ^ uVar6 ^ _DAT_183122da8;
  _DAT_183122fa8 = (_DAT_183122fa8 ^ uVar6) + _DAT_183122da8 ^ 0x4ebc67b22c3ebba3;
  _DAT_183122d90 = (_DAT_183122d90 * 0x867b98bbbc96689 ^ _DAT_183122fa8) + uVar6;
  _DAT_183123038 = _DAT_183122d90 ^ _DAT_183122fa8;
  uVar5 = (_DAT_183122f98 ^ _DAT_1807e37c0) + _DAT_183122f00 + 0xd427b3322023eb17;
  uVar6 = (_DAT_183122f00 ^ _UNK_1807e37c8) + _DAT_183122f98 + 0x91ea473a7274d461;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122f98 ^ _DAT_1807e37c0;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183122f00 ^ _UNK_1807e37c8;
  uVar6 = _DAT_183122da8 - *(longlong *)(unaff_RBP + 0x60);
  _DAT_183122ea0 =
       func_0x0001862a0c00((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122f98 + 0x91ea473a7274d461) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122f00 + 0xd427b3322023eb17));
  uVar5 = (_DAT_183122ea0 ^ 0xd5eff73af0000000) & 0xfffffffff0000000 ^ 0x91ea473a7274d461;
  _DAT_183122e78 = (_DAT_183122e78 ^ uVar5) + 0x45cdf408d6751c53 ^ 0x2932a09975fbf13a;
  _DAT_183122f88 = (_DAT_183122f88 * -0x5823855c2678c3e9 ^ _DAT_183122e78) + uVar5;
  _DAT_183123030 = _DAT_183122f88 ^ _DAT_183122e78;
  _DAT_183122e28 = 0x45cdf408d6751c53;
  _DAT_183123020 = func_0x0001862a0c00(_DAT_183122e80 ^ 0xacf84dc392d82764);
  _DAT_183122f00 = _DAT_183122f00 + 0x852dd7aa3fb2d578 ^ 0x57e7d48fe5961f71;
  _DAT_183123050 = _DAT_183122f30 * 0x4e8c99a4c7b9e18f;
  _DAT_183122f30 = _DAT_183123050 ^ _DAT_183122f00;
  _DAT_183122d98 = 0x852dd7aa3fb2d578;
  uVar5 = (_DAT_183122f58 ^ _DAT_1807e37d0) + _DAT_183122e28 + 0x84222305;
  uVar4 = (_DAT_183122e28 ^ _UNK_1807e37d8) + _DAT_183122f58 + 0x7ad22855c04d2a88;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122f58 ^ _DAT_1807e37d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183122e28 ^ _UNK_1807e37d8;
  _DAT_183122d68 =
       func_0x0001862a0c00((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122f58 + 0x7ad22855c04d2a88) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122e28 + 0x84222305));
  uVar5 = _DAT_183122d68 ^ 0x7ad22855c04d2a88;
  _DAT_183122f08 = _DAT_183122e00 ^ uVar5 ^ 0x7ad22855c04d2aa8;
  _DAT_183123078 = (_DAT_183123078 ^ uVar5) + 0x7ad22855c04d2aa8 ^ 0x16590fc51739a780;
  _DAT_183123088 = (_DAT_183123088 * 0x3bfc0b53b7454a99 ^ _DAT_183123078) + uVar5;
  _DAT_183122ed8 = _DAT_183123088 ^ _DAT_183123078;
  _DAT_183123050 = 0x7ad22855c04d2aa8;
  _DAT_183122d58 = func_0x0001862a0c00(_DAT_183122df0 + 0x1645c3a12da3657e ^ 0xaa);
  uVar5 = _DAT_183122d58 & 0xffffffffffff;
  _DAT_183122e28 = _DAT_183122e38 ^ uVar5 ^ 0x83c3adee674f9958;
  _DAT_183122f98 = (_DAT_183122f98 ^ uVar5) + 0x83c3adee674f9958 ^ 0x2eeed6fdc7cf9aae;
  _DAT_183123028 = (_DAT_183123028 * -0x2fe8b518c9f570b9 ^ _DAT_183122f98) + uVar5;
  _DAT_183123078 = _DAT_183123028 ^ _DAT_183122f98;
  _DAT_183123040 = 0x83c3adee674f9958;
  _DAT_183122db0 = func_0x0001862a0c00(_DAT_183123030 ^ 0x52bbab2bb5183bc0);
  uVar5 = _DAT_183122db0 << 0x11 | _DAT_183122db0 >> 0x2f;
  _DAT_1831230c0 = _DAT_1831230b0 ^ uVar5 ^ 0x20;
  _DAT_183122d98 = (_DAT_183122d98 ^ uVar5) + 0x20 ^ 0xa93e81bec0274ddc;
  _DAT_183122ea0 = (_DAT_183122ea0 * 0x3921b887795423bb ^ _DAT_183122d98) + uVar5;
  _DAT_1831230c8 = _DAT_183122ea0 ^ _DAT_183122d98;
  _DAT_183122f08 = 0x20;
  _DAT_183122ef0 = func_0x0001862a0c00(_DAT_1831230a8 ^ 0xfa013ff06d7008b8);
  _DAT_183122ee8 = _DAT_183122f50 ^ _DAT_183122ef0 ^ 0xf940900a942a22b0;
  _DAT_183122d98 = (_DAT_183122d98 ^ _DAT_183122ef0) + 0xf940900a942a22b0 ^ 0x56d4b7d4ead65361;
  _DAT_183123058 = (_DAT_183123058 * -0x79d5a801b23de397 ^ _DAT_183122d98) + _DAT_183122ef0;
  _DAT_1831230d0 = _DAT_183123058 ^ _DAT_183122d98;
  _DAT_183123048 = 0xf940900a942a22b0;
  uVar5 = (~_DAT_183122ec8 + 0x45cdf408d6751c54) *
          ((_DAT_183123058 ^ 0xe7e8f9a26bcdfc5a) + (_DAT_183123058 & 0x67e8f9a26bcdfc5a) * 2);
  uVar5 = (uVar5 | _DAT_183122f60) + (uVar5 & _DAT_183122f60);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183122ed0 = func_0x0001862a0c00((uVar5 | 0xa2250daabdb8e009) + (uVar5 & 0xa2250daabdb8e009));
  _DAT_1831230b8 = (_DAT_1831230b8 ^ _DAT_183122ed0) + 0xa2250daa399ac32c ^ 0x1ec5d0ba2dba8d1b;
  _DAT_183122d58 = (_DAT_183122d58 * -0x6275883f66877565 ^ _DAT_1831230b8) + _DAT_183122ed0;
  _DAT_1831230d0 = _DAT_183122d58 ^ _DAT_1831230b8;
  _DAT_183123018 = 0xa2250daa399ac32c;
  _DAT_183122ea0 = func_0x0001862a0c00(_DAT_183122d80 + 0x566025a2f8fa8861U ^ 0xe4);
  uVar5 = (_DAT_183122ea0 ^ 0xe7edfdaaffffdf7f) & 0x7ffffffffffffff0;
  _DAT_183122f28 = (_DAT_183122f28 ^ uVar5) + 0x45c8f000c6651c53 ^ 0xf6d5417e124a62fc;
  _DAT_183122d38 = (_DAT_183122d38 * 0x6306893315eb2fdf ^ _DAT_183122f28) + uVar5;
  _DAT_183122f80 = _DAT_183122d38 ^ _DAT_183122f28;
  _DAT_183122da8 = 0x45c8f000c6651c53;
  uVar5 = (_DAT_183122e80 ^ _DAT_1807e37e0) + _DAT_183122e48 + 0xa2250daabdb8e009;
  uVar4 = (_DAT_183122e48 ^ _UNK_1807e37e8) + _DAT_183122e80 + 0x8b91e0018cca38a6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122e80 ^ _DAT_1807e37e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183122e48 ^ _UNK_1807e37e8;
  _DAT_183122d10 =
       func_0x0001862a0c00((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122e80 + 0x8b91e0018cca38a6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122e48 + 0xa2250daabdb8e009));
  uVar5 = _DAT_183122d10 << 0x2c | _DAT_183122d10 >> 0x14;
  _DAT_183123008 = _DAT_183122f18 ^ uVar5 ^ 0x2db6edabc664fbd2;
  _DAT_183123050 = (_DAT_183123050 ^ uVar5) + 0x2db6edabc664fbd2 ^ 0xdc19bcd65f052444;
  _DAT_183122e18 = (_DAT_183122e18 * 0x244f674b565de2f3 ^ _DAT_183123050) + uVar5;
  _DAT_183123070 = _DAT_183122e18 ^ _DAT_183123050;
  _DAT_183122da0 = 0x2db6edabc664fbd2;
  _DAT_1831230b0 = func_0x0001862a0c00(_DAT_183122d30 + 0xffe0ff7c1affe1ffU ^ 0x69);
  uVar5 = _DAT_1831230b0 >> 1 | _DAT_1831230b0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  _DAT_1831230b8 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
       _DAT_1831230b0;
  _DAT_183122f48 = _DAT_183122f48 ^ _DAT_1831230b8 ^ 0x748957d0aadfc081;
  _DAT_183122f00 = (_DAT_183122f00 * -0x45ee9cac45b94455 ^ _DAT_183122f48) + _DAT_1831230b8;
  _DAT_183122d08 = _DAT_183122f00 ^ _DAT_183122f48;
  _DAT_183123060 = 0;
  uVar5 = ((_DAT_183122fd8 ^ 0x84222305) + (ulonglong)((uint)_DAT_183122fd8 & 0x84222305) * 2) *
          -_DAT_183123050;
  uVar5 = (uVar5 | _DAT_183122d58) + (uVar5 & _DAT_183122d58);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183122dc8 = func_0x0001862a0c00((uVar5 | 0x84222305) + (ulonglong)((uint)uVar5 & 0x84222305))
  ;
  uVar5 = _DAT_183122dc8 - (_DAT_183122dc8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar3 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar3 + (uint)bVar3 ^ _DAT_183122dc8;
  _DAT_183122dd0 = _DAT_183123048 ^ uVar5 ^ 0x20;
  _DAT_183123038 = (_DAT_183123038 ^ uVar5) + 0x20 ^ 0x7cc59011072a664d;
  _DAT_183122f90 = (_DAT_183122f90 * -0x57ccc09e31b08777 ^ _DAT_183123038) + uVar5;
  _DAT_183122f50 = _DAT_183122f90 ^ _DAT_183123038;
  _DAT_183122f18 = 0x20;
  uVar5 = ((_DAT_1831230c0 ^ 0x84222305) + (ulonglong)((uint)_DAT_1831230c0 & 0x84222305) * 2) *
          -_DAT_183122f88;
  uVar5 = (uVar5 | _DAT_183122d78) + (uVar5 & _DAT_183122d78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183122e00 = func_0x0001862a0c00((uVar5 | 0x84222305) + (ulonglong)((uint)uVar5 & 0x84222305))
  ;
  _DAT_183122fa8 = _DAT_183122d48 ^ 0x20;
  _DAT_183123038 = _DAT_183123038 + 0x20 ^ 0x5b2951a5e4ec0b85;
  _DAT_183122d88 = _DAT_183122f88 * -0x4fb3025349ec3cd7;
  _DAT_183122f88 = _DAT_183122d88 ^ _DAT_183123038;
  _DAT_183122f40 = 0x20;
  uVar5 = (~_DAT_183122dd8 + 0xc7a8f180a7efc72f) *
          ((_DAT_183122da8 ^ 0xc7a8f18023cde40b) + (_DAT_183122da8 & 0x47a8f18023cde40b) * 2);
  uVar5 = (uVar5 | _DAT_183122e70) + (uVar5 & _DAT_183122e70);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183122da8 = func_0x0001862a0c00((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_183123078 = _DAT_183123078 ^ _DAT_183122da8 ^ 0xc356807386dc8c44 ^ 0xe315a23a30e5e626;
  _DAT_183122f28 =
       (_DAT_183122f28 * -0x651da09a4a2cff8f ^ _DAT_183123078) +
       (_DAT_183122da8 ^ 0xc356807386dc8c44);
  _DAT_183123028 = _DAT_183122f28 ^ _DAT_183123078;
  _DAT_183123058 = 0;
  uVar5 = (_DAT_183122f00 ^ 0x84222305) + _DAT_183122fa8 + 0x84222305;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183122f00 ^ 0x84222305;
  uVar4 = ((_DAT_183122fa8 + _DAT_183122f00) * 0x2000 | _DAT_183122fa8 + _DAT_183122f00 >> 0x33) ^
          _DAT_183122fa8;
  _DAT_1831230e8 =
       func_0x0001862a0c00((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_183122f00 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183122fa8 + 0x84222305));
  _DAT_183122fe0 = _DAT_183122d10 ^ _DAT_183122f90 ^ 0x20;
  _DAT_183122e38 = (_DAT_183122e38 ^ _DAT_183122f90) + 0x20 ^ 0xda9e573d0250b277;
  _DAT_183122e18 = (_DAT_183122e18 * -0x427bf5cb9e1bdae5 ^ _DAT_183122e38) + _DAT_183122f90;
  _DAT_183122fd8 = _DAT_183122e18 ^ _DAT_183122e38;
  _DAT_183122d60 = _DAT_183122dd8 ^ 0x20;
  _DAT_1831230c8 = 0x20;
  switch(uVar6 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6277bb8 (image 186277bb8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186277bb8(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int in_EAX;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar11;
  byte in_XMM0_Bf;
  longlong in_XMM1_Qb;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar10 = in_XMM1_Qb + param_1 + _DAT_183122d78;
  if (in_EAX < 0) {
    uVar10 = _DAT_183122fb0 ^ in_XMM1_Qb + param_1;
  }
  _DAT_183123010 = func_0x0001862a0c00(in_XMM0_Bf ^ uVar10);
  uVar8 = _UNK_1807e3238;
  uVar7 = _DAT_1807e3230;
  uVar6 = _UNK_1807e3228;
  uVar5 = _DAT_1807e3220;
  uVar4 = _UNK_1807e3218;
  uVar3 = _DAT_1807e3210;
  uVar2 = _UNK_1807e3208;
  uVar1 = _DAT_1807e3200;
  uVar13 = _UNK_1807e31f8;
  uVar10 = _DAT_1807e31f0;
  uVar11 = -unaff_RSI;
  _DAT_183122e48 = (_DAT_183122e48 ^ unaff_RSI ^ _DAT_183123010) - unaff_RSI ^ 0xec2934ac6e9a0fc2;
  _DAT_183122d18 =
       (_DAT_183122d18 * -0x409fa9420ffbae53 ^ _DAT_183122e48) + (unaff_RSI ^ _DAT_183123010);
  _DAT_183122f40 = _DAT_183122d18 ^ _DAT_183122e48;
  _DAT_1831230c0 = uVar11 & 0xffffffff;
  *(undefined8 *)(unaff_RBP + 0x40) = 0x15;
  *(int *)(unaff_RBP + 0x10) = (int)uVar11;
  *(int *)(unaff_RBP + 0x60) = (int)uVar11;
  uVar9 = (~_DAT_183122d58 + 0x3b) *
          ((_DAT_183122f00 ^ 0x842223b4) + (ulonglong)((uint)_DAT_183122f00 & 0x842223b4) * 2);
  uVar9 = (uVar9 | _DAT_183122f00) + (uVar9 & _DAT_183122f00);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183122e98 = func_0x0001862a0c00((uVar9 | 0x8422238e) + (ulonglong)((uint)uVar9 & 0x8422238e))
  ;
  _DAT_183122de0 =
       (_DAT_183122de0 ^ _DAT_183122e98 & 0xfffffffffffffe00) + 0xbb ^ 0xc19e0111c815b204;
  _DAT_183122e20 =
       (_DAT_183122e20 * 0x1f66ba5ae6e27c2b ^ _DAT_183122de0) +
       (_DAT_183122e98 & 0xfffffffffffffe00);
  _DAT_183122f90 = _DAT_183122e20 ^ _DAT_183122de0;
  _DAT_183122d40 = 0xbb;
  uVar9 = (_DAT_1831230b0 ^ uVar10) + _DAT_183122fe8 + 0x8422237b;
  uVar12 = (_DAT_183122fe8 ^ uVar13) + _DAT_1831230b0 + 0x4a;
  uVar10 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831230b0 ^ uVar10;
  uVar13 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183122fe8 ^ uVar13;
  _DAT_183122d50 =
       func_0x0001862a0c00((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831230b0 + 0x4a) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183122fe8 + 0x8422237b));
  uVar10 = (_DAT_183122d50 ^ 0x5e) * -0x20c2b94a316f1b2b;
  _DAT_183122f48 = (_DAT_183122f48 ^ uVar10) + 0x14 ^ 0x83eead1b1cc70c00;
  _DAT_183122df0 = (_DAT_183122df0 * 0x4f9397bcfd4b7bab ^ _DAT_183122f48) + uVar10;
  _DAT_183122e68 = _DAT_183122df0 ^ _DAT_183122f48;
  _DAT_183122e38 = _DAT_183123008 ^ 0x14;
  _DAT_183123088 = 0x14;
  uVar10 = (_DAT_183122e60 ^ uVar1) + _DAT_183122dd8 + 0x84222325;
  uVar13 = (_DAT_183122dd8 ^ uVar2) + _DAT_183122e60 + 0xef;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183122e60 ^ uVar1;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183122dd8 ^ uVar2;
  _DAT_183122ea0 =
       func_0x0001862a0c00((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183122e60 + 0xef) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183122dd8 + 0x84222325));
  uVar10 = _DAT_183122ea0 << 0x17 | _DAT_183122ea0 >> 0x29;
  _DAT_183122e18 = (_DAT_183122e18 ^ uVar10) - 0xef ^ 0x27d5999cb9b76bf3;
  _DAT_183122d78 = (_DAT_183122d78 * -0x5cccff3d8bad051b ^ _DAT_183122e18) + uVar10;
  _DAT_183122e10 = _DAT_183122d78 ^ _DAT_183122e18;
  _DAT_1831230c0 = 0x11;
  _DAT_1831230e0 = func_0x0001862a0c00(_DAT_183122d30 + 0x1d007be5001dffU ^ 0xd4);
  uVar10 = (_DAT_1831230e0 ^ 0x1f) << 0x1c | _DAT_1831230e0 >> 0x24;
  _DAT_183122fe8 = _DAT_183122e10 ^ uVar10 ^ 0x30;
  _DAT_183122e40 = (_DAT_183122e40 ^ uVar10) + 0x30 ^ 0x37b23506a7e255ed;
  _DAT_183123030 = (_DAT_183123030 * 0x6034f0b6cc527cc3 ^ _DAT_183122e40) + uVar10;
  _DAT_183122fa0 = _DAT_183123030 ^ _DAT_183122e40;
  _DAT_183122fa8 = 0x30;
  _DAT_183123080 = func_0x0001862a0c00(_DAT_183122d20 ^ 0x21007bd2ffdd65);
  _DAT_183122e08 =
       (_DAT_183122e08 ^ _DAT_183123080 & 0x7fffffffffffffff) - 0x48 ^ 0xd57b17ccd4641cb3;
  _DAT_183122f50 =
       (_DAT_183122f50 * -0x7b31243e3b697e2f ^ _DAT_183122e08) +
       (_DAT_183123080 & 0x7fffffffffffffff);
  _DAT_183122d10 = _DAT_183122f50 ^ _DAT_183122e08;
  _DAT_183122ed8 = 0xb8;
  _DAT_183122e78 = func_0x0001862a0c00(_DAT_183122f08 ^ 0x1eff83bd002192);
  uVar10 = (_DAT_183122e78 ^ 0x48) << 2 | _DAT_183122e78 >> 0x3e;
  _DAT_183122da8 = _DAT_183122d50 ^ uVar10 ^ 0x78;
  _DAT_183122ec0 = (_DAT_183122ec0 ^ uVar10) + 0x78 ^ 0x3211b0d0f3f81980;
  _DAT_183122ec8 = (_DAT_183122ec8 * -0x281d6ebe4023447 ^ _DAT_183122ec0) + uVar10;
  _DAT_1831230b8 = _DAT_183122ec8 ^ _DAT_183122ec0;
  _DAT_183122e00 = 0x78;
  uVar10 = (_DAT_1831230d0 ^ uVar3) + _DAT_183122e18 + 0x8422235d;
  uVar13 = (_DAT_183122e18 ^ uVar4) + _DAT_1831230d0 + 0xb8;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831230d0 ^ uVar3;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183122e18 ^ uVar4;
  _DAT_183122f30 =
       func_0x0001862a0c00((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831230d0 + 0xb8) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183122e18 + 0x8422235d));
  _DAT_183122da0 = _DAT_183122d80 ^ _DAT_183122f30 ^ 0x130;
  _DAT_183122d38 = (_DAT_183122d38 ^ _DAT_183122f30) + 0x130 ^ 0x2c836288648d6953;
  _DAT_183122e78 = (_DAT_183122e78 * 0x5b99a3a6688cbc1b ^ _DAT_183122d38) + _DAT_183122f30;
  _DAT_1831230a8 = _DAT_183122e78 ^ _DAT_183122d38;
  _DAT_183122fd8 = 0x30;
  _DAT_183123050 = func_0x0001862a0c00(_DAT_183123080 ^ 0x20ff7c98ffe14a);
  _DAT_183122dd0 = (_DAT_183122dd0 ^ _DAT_183123050 * 0x2325c4140a15ebb) - 0x82 ^ 0x4c9ece62b39bd71b
  ;
  _DAT_183122f38 =
       (_DAT_183122f38 * 0x1b53d1c4cd3074c5 ^ _DAT_183122dd0) + _DAT_183123050 * 0x2325c4140a15ebb;
  _DAT_183122e00 = _DAT_183122f38 ^ _DAT_183122dd0;
  _DAT_183122f08 = 0x7e;
  _DAT_183122ee0 = func_0x0001862a0c00(_DAT_183123078 ^ 0xffe2ff7b6d001d45);
  uVar10 = _DAT_183122ee0 ^ 0x1860;
  _DAT_183122d88 = _DAT_183123048 ^ uVar10 ^ 0xb2;
  _DAT_183122e70 = (_DAT_183122e70 ^ uVar10) + 0xb2 ^ 0x1df6c86f6ac2f3e7;
  _DAT_183122ed0 = (_DAT_183122ed0 * -0x6034b9ad51e9361f ^ _DAT_183122e70) + uVar10;
  _DAT_183122f10 = _DAT_183122ed0 ^ _DAT_183122e70;
  _DAT_183122d80 = 0xb2;
  uVar10 = (~_DAT_183122d68 + 0x15) *
           ((_DAT_183123000 ^ 0x8422239e) + (ulonglong)((uint)_DAT_183123000 & 0x8422239e) * 2);
  uVar10 = (uVar10 | _DAT_183122d48) + (uVar10 & _DAT_183122d48);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183122e58 =
       func_0x0001862a0c00((uVar10 | 0x8422238a) + (ulonglong)((uint)uVar10 & 0x8422238a));
  uVar10 = _DAT_183122e58 ^ 0xe27;
  uVar13 = uVar10 >> 1 | uVar10;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x80 ^ uVar10;
  _DAT_183122db0 = _DAT_183122d60 ^ uVar10 ^ 0xcf;
  _DAT_183122ea8 = (_DAT_183122ea8 ^ uVar10) + 0xcf ^ 0x4c3ae25ed3fcc3d1;
  _DAT_183122e80 = (_DAT_183122e80 * -0x5bc279238a0b4eb3 ^ _DAT_183122ea8) + uVar10;
  _DAT_183122f18 = _DAT_183122e80 ^ _DAT_183122ea8;
  _DAT_183122f60 = 0xcf;
  uVar10 = (~_DAT_1831230d0 + 0x15) *
           ((_DAT_183122f20 ^ 0x8422239e) + (ulonglong)((uint)_DAT_183122f20 & 0x8422239e) * 2);
  uVar10 = (uVar10 | _DAT_183122d68) + (uVar10 & _DAT_183122d68);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831230c8 =
       func_0x0001862a0c00((uVar10 | 0x8422238a) + (ulonglong)((uint)uVar10 & 0x8422238a));
  uVar10 = _DAT_1831230c8 ^ 0xbf;
  uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar10 = ((((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar10
           ) << 0xe | _DAT_1831230c8 >> 0x32;
  _DAT_1831230c0 = (_DAT_1831230c0 ^ uVar10) + 0xaf ^ 0xfb04e2cd090dd349;
  _DAT_183122d68 = (_DAT_183122d68 * 0x3e21b08b6b2b10f3 ^ _DAT_1831230c0) + uVar10;
  _DAT_183122f68 = _DAT_183122d68 ^ _DAT_1831230c0;
  _DAT_183123070 = 0xaf;
  uVar10 = (_DAT_183122d40 ^ uVar5) + _DAT_1831230f0 + 0x8422238a;
  uVar13 = (_DAT_1831230f0 ^ uVar6) + _DAT_183122d40 + 0x20;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183122d40 ^ uVar5;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831230f0 ^ uVar6;
  _DAT_183122e28 =
       func_0x0001862a0c00((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183122d40 + 0x20) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831230f0 + 0x8422238a));
  uVar10 = _DAT_183122e28 * -0x6f4b722bf7392b1b << 0x3b |
           (ulonglong)(_DAT_183122e28 * -0x6f4b722bf7392b1b) >> 5;
  _DAT_183123008 = _DAT_183122fa8 ^ uVar10 ^ 0xcf;
  _DAT_1831230f8 = (_DAT_1831230f8 ^ uVar10) + 0xcf ^ 0xb99a6bd0344e806b;
  _DAT_183122fe8 = (_DAT_183122fe8 * 0x24284576604e7da5 ^ _DAT_1831230f8) + uVar10;
  _DAT_183123058 = _DAT_183122fe8 ^ _DAT_1831230f8;
  _DAT_183123000 = 0xcf;
  uVar10 = (_DAT_183122e90 ^ 0x84222315) + _DAT_183122e08 + 0x84222315;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183122e90 ^ 0x84222315;
  uVar13 = ((_DAT_183122e08 + _DAT_183122e90) * 0x2000 | _DAT_183122e08 + _DAT_183122e90 >> 0x33) ^
           _DAT_183122e08;
  _DAT_183122d58 =
       func_0x0001862a0c00((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_183122e90 ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183122e08 + 0x84222315));
  _DAT_183122eb8 = _DAT_183122e68 ^ _DAT_183122d58 ^ 0x30;
  _DAT_183122e78 = (_DAT_183122e78 ^ _DAT_183122d58) + 0x30 ^ 0x9c9caa31d1c7c600;
  _DAT_183122f98 = (_DAT_183122f98 * -0x1c345fe4877855e3 ^ _DAT_183122e78) + _DAT_183122d58;
  _DAT_183122d10 = _DAT_183122f98 ^ _DAT_183122e78;
  _DAT_183122f70 = 0x30;
  uVar10 = (_DAT_183123098 ^ uVar7) + _DAT_1831230b8 + 0x8422239e;
  uVar13 = (_DAT_1831230b8 ^ uVar8) + _DAT_183123098 + 0xff;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183123098 ^ uVar7;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831230b8 ^ uVar8;
  uVar10 = func_0x0001862a0c00((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183123098 + 0xff) ^
                               (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831230b8 + 0x8422239e));
  _DAT_183122dd0 = (uVar10 ^ uVar10 ^ 0xbb) + 0x44 ^ 0x18101e50aeecee7c;
  _DAT_183123010 = (_DAT_183123010 * 0x12c1dbad6f5064d3 ^ _DAT_183122dd0) + (uVar10 ^ 0xbb);
  _DAT_183122f60 = _DAT_183123010 ^ _DAT_183122dd0;
  _DAT_183122ee0 = 0x44;
  uVar10 = (~_DAT_183123000 + 0x45) *
           ((_DAT_183122ed8 ^ 0x8422239e) + (ulonglong)((uint)_DAT_183122ed8 & 0x8422239e) * 2);
  uVar10 = (uVar10 | _DAT_183123068) + (uVar10 & _DAT_183123068);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183123058 =
       func_0x0001862a0c00((uVar10 | 0x842223da) + (ulonglong)((uint)uVar10 & 0x842223da));
  uVar10 = (_DAT_183123058 ^ 0x3153) << 0x2f | _DAT_183123058 >> 0x11;
  _DAT_183122f60 = _DAT_183122f60 ^ uVar10 ^ 0x3fa1af1170a559ca;
  _DAT_183122f58 = (_DAT_183122f58 * 0x1aed861d1a3ddb0d ^ _DAT_183122f60) + uVar10;
  _DAT_1831230e0 = _DAT_183122f58 ^ _DAT_183122f60;
  _DAT_183122f18 = 0;
  _DAT_183122e68 = func_0x0001862a0c00(_DAT_1831230c0 + 0xffe3007bf50021ff ^ 0x50);
  _DAT_183123050 = _DAT_183122dc8 ^ _DAT_183122e68 ^ 0x30;
  _DAT_183122de0 = (_DAT_183122de0 ^ _DAT_183122e68) + 0x30 ^ 0x20080460b4ccd88f;
  _DAT_183122f80 = (_DAT_183122f80 * 0x279a06da3dc094e7 ^ _DAT_183122de0) + _DAT_183122e68;
  _DAT_1831230c8 = _DAT_183122f80 ^ _DAT_183122de0;
  _DAT_183123080 = 0x30;
  *(byte *)(unaff_RBP + -0x51 + *(longlong *)(unaff_RBP + 0x40)) =
       (char)uVar11 + (char)((uVar11 & 0xffffffff) / 10) * -10 | 0x30;
  switch(*(uint *)(unaff_RBP + 0x60) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 62824a6 (image 1862824a6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862824a6(void)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar3;
  ulonglong uVar4;
  longlong *unaff_R13;
  undefined4 unaff_R14D;
  undefined4 unaff_R15D;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  ulonglong unaff_XMM12_Qa;
  ulonglong unaff_XMM12_Qb;
  undefined1 unaff_XMM14 [16];
  ulonglong unaff_XMM15_Qa;
  ulonglong unaff_XMM15_Qb;
  
  *(undefined4 *)(unaff_RBP + 0xa0) = unaff_ESI;
  *(undefined4 *)(unaff_RBP + 0x10) = unaff_R14D;
  lVar2 = (**(code **)(*unaff_R13 + 0x6f0))();
  *(int *)(unaff_RBP + 0x78) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x80));
  (**(code **)(*unaff_R13 + 0x6f8))();
  uVar1 = *(uint *)(unaff_RBP + 0x70);
  uVar3 = *(uint *)(unaff_RBP + 0x78);
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar3 ^ 0x84222325;
  auVar5._8_4_ = uVar1;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ _DAT_1807e2900,unaff_XMM14);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar7 = uVar4 + _DAT_183122f20;
  if (auVar6._4_4_ < 0) {
    uVar7 = _DAT_183123068 ^ uVar4;
  }
  _DAT_183122e28 = func_0x0001862a0c00(SUB161(auVar5 ^ _DAT_1807e2900,5) ^ uVar7);
  uVar3 = uVar1 & uVar3;
  _DAT_183123058 = (ulonglong)uVar3;
  _DAT_183123020 = (_DAT_183123020 ^ _DAT_183122e28 ^ uVar1) + _DAT_183123058 ^ 0xc8e301cf07940833;
  _DAT_183122ef0 =
       (_DAT_183122ef0 * -0x780ef8a6db6ab5dd ^ _DAT_183123020) + (_DAT_183122e28 ^ uVar1);
  _DAT_183122da0 = _DAT_183122ef0 ^ _DAT_183123020;
  *(uint *)(unaff_RBP + 0x70) = uVar3;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(int *)(unaff_RBP + 0x60) = (int)*(undefined8 *)(unaff_RBP + 0x70);
  _DAT_183122ef0 = func_0x0001862a0c00(_DAT_183123030 + 0xdaffb848ff8cff ^ 0x53);
  _DAT_183123058 =
       (_DAT_183123058 ^ _DAT_183122ef0 & 0x7ffffffffff) + 0xdf73f6ff ^ 0x89913bc32d465775;
  _DAT_183123000 =
       (_DAT_183123000 * 0x333eb4ab7197bcc5 ^ _DAT_183123058) + (_DAT_183122ef0 & 0x7ffffffffff);
  _DAT_1831230b8 = _DAT_183123000 ^ _DAT_183123058;
  _DAT_183122f60 = 0xdf73f6ff;
  uVar7 = (_DAT_183123048 ^ unaff_XMM15_Qa) + _DAT_1831230b8 + 0xaa13d637;
  uVar4 = (_DAT_1831230b8 ^ unaff_XMM15_Qb) + _DAT_183123048 + 0x616f5a33;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183123048 ^ unaff_XMM15_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831230b8 ^ unaff_XMM15_Qb;
  _DAT_183122d68 =
       func_0x0001862a0c00((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183123048 + 0x616f5a33) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831230b8 + 0xaa13d637));
  uVar7 = _DAT_183122d68 ^ 0x119505cbd8ea2696;
  uVar4 = uVar7 >> 1 | uVar7;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = (ulonglong)
          (~((uint)uVar7 ^
            (0x40 - (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x40) & 0x2e31f512);
  _DAT_183122e58 = (_DAT_183122e58 ^ uVar7) + 0x4f5eaf21 ^ 0x1395703eb1583b3d;
  _DAT_183122dd0 = (_DAT_183122dd0 * 0x7c5347001f7d8fdf ^ _DAT_183122e58) + uVar7;
  _DAT_183122ea8 = _DAT_183122dd0 ^ _DAT_183122e58;
  _DAT_183122ec8 = 0x4f5eaf21;
  uVar7 = (_DAT_183122ff8 ^ unaff_XMM8_Qa) + _DAT_183122fd0 + 0x84222325;
  uVar4 = (_DAT_183122fd0 ^ unaff_XMM8_Qb) + _DAT_183122ff8 + 0xacc5e97c;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183122ff8 ^ unaff_XMM8_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183122fd0 ^ unaff_XMM8_Qb;
  _DAT_183123040 =
       func_0x0001862a0c00((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122ff8 + 0xacc5e97c) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183122fd0 + 0x84222325));
  _DAT_183122eb8 = (_DAT_183122eb8 ^ _DAT_183123090) - 0xacc5e97c ^ 0x5a558aa8ebe6a371;
  _DAT_1831230d8 = (_DAT_1831230d8 * 0x7611ca53e56bc27d ^ _DAT_183122eb8) + _DAT_183123090;
  _DAT_183122f90 = _DAT_1831230d8 ^ _DAT_183122eb8;
  _DAT_183122d48 = 0x533a1684;
  _DAT_183122e58 = func_0x0001862a0c00(_DAT_183122d40 + 0xff45ffe81dff5cffU ^ 0x22);
  uVar7 = _DAT_183122e58 & 0xffffffffffffe000;
  _DAT_183122f40 = _DAT_183122e58 ^ uVar7 ^ 0xacc5ea3b;
  _DAT_1831230f8 = (_DAT_1831230f8 ^ uVar7) + 0xacc5ea3b ^ 0x712bf96af0295662;
  _DAT_183122e98 = (_DAT_183122e98 * -0x764948a75b0ddb67 ^ _DAT_1831230f8) + uVar7;
  _DAT_1831230c8 = _DAT_183122e98 ^ _DAT_1831230f8;
  _DAT_183122f58 = 0xacc5ea3b;
  uVar7 = (~_DAT_1831230f8 + 0x533a1685) *
          ((_DAT_183122f78 ^ 0x28e7c91e) + (ulonglong)((uint)_DAT_183122f78 & 0x28e7c91e) * 2);
  uVar7 = (uVar7 | _DAT_183122fa0) + (uVar7 & _DAT_183122fa0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183122f18 = func_0x0001862a0c00((uVar7 | 0x7bdddf9a) + (ulonglong)((uint)uVar7 & 0x7bdddf9a))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_183122f18 & 0xacc5ea3b);
  uVar7 = uVar4 * 8;
  _DAT_1831230b8 = _DAT_183122dc0 ^ uVar7 ^ 0x1000000bf;
  _DAT_1831230f0 = (uVar7 ^ _DAT_1831230f0) + 0x1000000bf ^ 0x43b422f5cd87e892;
  _DAT_183122fc0 = (_DAT_183122fc0 * -0x4e3862cd141bc3f3 ^ _DAT_1831230f0) + uVar4 * 8;
  _DAT_183123048 = _DAT_1831230f0 ^ _DAT_183122fc0;
  _DAT_1831230a8 = 0xbf;
  _DAT_183122e50 = func_0x0001862a0c00(_DAT_183123070 + 0xffc3000a6cff62ffU ^ 0x57);
  _DAT_183122e38 = _DAT_183122e38 - 0x89857cd0 ^ 0x874cf31a9cb46d18;
  _DAT_183122f68 = _DAT_183123010 * 0x38e393a10e4cb567;
  _DAT_183123010 = 0x767a8330;
  uVar7 = (~_DAT_183122d98 + 0x89857cd1) *
          ((_DAT_183122f90 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183122f90 & 0x8422239a) * 2);
  uVar7 = (uVar7 | _DAT_183122e70) + (uVar7 & _DAT_183122e70);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831230b0 = func_0x0001862a0c00((uVar7 | 0xda75f4a) + (ulonglong)((uint)uVar7 & 0xda75f4a));
  _DAT_183122f78 = (_DAT_183122f78 ^ _DAT_1831230b0 ^ 0x89857cff) + 0x89857d8f ^ 0xbf9d3631074ffd63;
  _DAT_183122dd0 =
       (_DAT_183122dd0 * -0x18b3042867f8221 ^ _DAT_183122f78) + (_DAT_1831230b0 ^ 0x89857cff);
  _DAT_183123038 = _DAT_183122dd0 ^ _DAT_183122f78;
  _DAT_183122ef0 = 0x89857d8f;
  _DAT_183122dd8 = func_0x0001862a0c00(_DAT_183122dd8 ^ 0xfff8ffacc3002bc2);
  uVar7 = _DAT_183122dd8 << 0x38 | _DAT_183122dd8 >> 8;
  _DAT_183122f70 = (_DAT_183122f70 ^ uVar7) - 0x2b4e5ae6 ^ 0x62479123b28a6d2e;
  _DAT_183123010 = (_DAT_183123010 * 0x53feb9c5220957b5 ^ _DAT_183122f70) + uVar7;
  _DAT_183122fb0 = _DAT_183123010 ^ _DAT_183122f70;
  _DAT_183122fc0 = 0xd4b1a51a;
  uVar7 = (~_DAT_183122e28 + 0x4f5eaf22) *
          ((_DAT_183122da8 ^ 0x5b51d5da) + (ulonglong)((uint)_DAT_183122da8 & 0x5b51d5da) * 2);
  uVar7 = (uVar7 | _DAT_183122f70) + (uVar7 & _DAT_183122f70);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183122e60 = func_0x0001862a0c00((uVar7 | 0x140f7afb) + (ulonglong)((uint)uVar7 & 0x140f7afb))
  ;
  uVar7 = _DAT_183122da0 << 0x27 | _DAT_183122da0 >> 0x19;
  _DAT_183122d70 = _DAT_183122e50 ^ uVar7 ^ 0x12ed2a620;
  _DAT_183122f18 = (_DAT_183122f18 ^ uVar7) + 0x12ed2a620 ^ 0x57e104e00d0d1d0d;
  _DAT_183122d08 = (_DAT_183122d08 * 0x2a640919f025cf0f ^ _DAT_183122f18) + uVar7;
  _DAT_183122e88 = _DAT_183122d08 ^ _DAT_183122f18;
  _DAT_183122fa8 = 0x2ed2a620;
  uVar7 = (~_DAT_183122fd0 + 0x4f5eaf22) *
          ((_DAT_183122ff8 ^ 0x5b51d5da) + (ulonglong)((uint)_DAT_183122ff8 & 0x5b51d5da) * 2);
  uVar7 = (uVar7 | _DAT_183122db8) + (uVar7 & _DAT_183122db8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar7 = func_0x0001862a0c00((uVar7 | 0x140f7afb) + (ulonglong)((uint)uVar7 & 0x140f7afb));
  uVar7 = (uVar7 ^ 0xdf400000) & 0xffffffffffc00000 ^ 0xdf73f6ff;
  _DAT_183122d50 = (_DAT_183122d50 ^ uVar7) + 0x902d59de ^ 0x589bde9bed83a7f0;
  _DAT_183122e20 = (_DAT_183122e20 * 0x4635dc282c3d143d ^ _DAT_183122d50) + uVar7;
  _DAT_183122d80 = _DAT_183122e20 ^ _DAT_183122d50;
  _DAT_183122fa8 = 0x902d59de;
  _DAT_183122ea8 = func_0x0001862a0c00(_DAT_183122e80 ^ 0xffdcff83e4ffe14b);
  _DAT_183122e00 = _DAT_183122ea8 ^ 0x2ed2a620;
  _DAT_183122f18 = _DAT_183122f18 ^ _DAT_183122e00 ^ 0x65c4d334c7d52e27;
  _DAT_183122eb8 = (_DAT_183122eb8 * -0x2097a955c67fa161 ^ _DAT_183122f18) + _DAT_183122e00;
  _DAT_183122d80 = _DAT_183122eb8 ^ _DAT_183122f18;
  _DAT_1831230d8 = 0;
  uVar7 = (_DAT_1831230d0 ^ 0x8422239a) + _DAT_183122ee0 + 0x8422239a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831230d0 ^ 0x8422239a;
  uVar4 = ((_DAT_183122ee0 + _DAT_1831230d0) * 0x2000 | _DAT_183122ee0 + _DAT_1831230d0 >> 0x33) ^
          _DAT_183122ee0;
  _DAT_1831230c0 =
       func_0x0001862a0c00((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1831230d0 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183122ee0 + 0x8422239a));
  uVar7 = _DAT_1831230c0 ^ 0xbf;
  _DAT_183122dc8 = _DAT_183122e38 ^ uVar7 ^ 0xbf;
  _DAT_183122e78 = (_DAT_183122e78 ^ uVar7) + 0xbf ^ 0x44409718a3db4856;
  _DAT_183122d08 = (_DAT_183122d08 * -0x66ebf088bda6437f ^ _DAT_183122e78) + uVar7;
  _DAT_183123028 = _DAT_183122d08 ^ _DAT_183122e78;
  _DAT_183122ee0 = 0xbf;
  uVar7 = (_DAT_183122ed8 ^ unaff_XMM12_Qa) + _DAT_183123030 + 0x5b51d5da;
  uVar4 = (_DAT_183123030 ^ unaff_XMM12_Qb) + _DAT_183122ed8 + 0xffffffff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183122ed8 ^ unaff_XMM12_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183123030 ^ unaff_XMM12_Qb;
  _DAT_1831230d8 =
       func_0x0001862a0c00((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183122ed8 + 0xffffffff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183123030 + 0x5b51d5da));
  _DAT_183122eb8 = (_DAT_183122eb8 ^ _DAT_1831230d8) + 0x208c0900 ^ 0xba338cc0979830db;
  _DAT_183122d20 = (_DAT_183122d20 * 0x68546a9d99a3c9d5 ^ _DAT_183122eb8) + _DAT_1831230d8;
  _DAT_183122f40 = _DAT_183122d20 ^ _DAT_183122eb8;
  _DAT_183122d40 = 0x208c0900;
  uVar7 = (~_DAT_183122e00 + 0x208c0901) *
          ((_DAT_183122f20 ^ 0x5b51d5da) + (ulonglong)((uint)_DAT_183122f20 & 0x5b51d5da) * 2);
  uVar7 = (uVar7 | _DAT_183122d58) + (uVar7 & _DAT_183122d58);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183122e48 = func_0x0001862a0c00((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  _DAT_183122f78 = _DAT_183122f78 ^ _DAT_183122e48 & 0x7ffffffffe00 ^ 0xdde8029dcf67ad4c;
  _DAT_183122f80 =
       (_DAT_183122f80 * 0x3659c59b25fb6f43 ^ _DAT_183122f78) + (_DAT_183122e48 & 0x7ffffffffe00);
  _DAT_183122d80 = _DAT_183122f80 ^ _DAT_183122f78;
  _DAT_183122e30 = 0;
  uVar7 = ((_DAT_183122ed8 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183122ed8 & 0x8422239a) * 2) *
          -_DAT_183122f10;
  uVar7 = (uVar7 | _DAT_183122e70) + (uVar7 & _DAT_183122e70);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183122e78 = func_0x0001862a0c00((uVar7 | 0x8422239a) + (ulonglong)((uint)uVar7 & 0x8422239a))
  ;
  uVar7 = (_DAT_183122e78 ^ 0xbf) & 0x7fffffffffffffff;
  _DAT_183122da8 = _DAT_183123038 ^ uVar7 ^ 0xbf;
  _DAT_183122f28 = (_DAT_183122f28 ^ uVar7) + 0xbf ^ 0x4ed51572043f3e29;
  _DAT_183123098 = (_DAT_183123098 * 0x943cfd1938f5fcf ^ _DAT_183122f28) + uVar7;
  _DAT_183122d38 = _DAT_183123098 ^ _DAT_183122f28;
  _DAT_183123000 = 0xbf;
  uVar7 = (~_DAT_183122f50 + 0x1f63f4f6) *
          ((_DAT_183122f70 ^ 0x9b41d7d0) + (ulonglong)((uint)_DAT_183122f70 & 0x9b41d7d0) * 2);
  uVar7 = (uVar7 | _DAT_183122d08) + (uVar7 & _DAT_183122d08);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183122f08 = func_0x0001862a0c00((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_183122d28 = _DAT_183122d28 ^ _DAT_183122f08 ^ 0xd9f9fcd419155653;
  _DAT_183122fd8 = (_DAT_183122fd8 * -0x40c83aeb361cb3f7 ^ _DAT_183122d28) + _DAT_183122f08;
  _DAT_183122e18 = _DAT_183122fd8 ^ _DAT_183122d28;
  _DAT_183122dd8 = 0;
  uVar7 = ((_DAT_183122d58 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183122d58 & 0x8422239a) * 2) *
          -_DAT_183122f40;
  uVar7 = (uVar7 | _DAT_183123060) + (uVar7 & _DAT_183123060);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183122ed8 = func_0x0001862a0c00((uVar7 | 0x8422239a) + (ulonglong)((uint)uVar7 & 0x8422239a))
  ;
  uVar7 = _DAT_183122ed8 << 0x18 | _DAT_183122ed8 >> 0x28;
  _DAT_183122e50 = _DAT_183122fa0 ^ uVar7 ^ 0xbf;
  _DAT_183122db8 = (_DAT_183122db8 ^ uVar7) + 0xbf ^ 0x7aeff0970fd48e3e;
  _DAT_183122d18 = (_DAT_183122d18 * 0x60800a72cf7f47b3 ^ _DAT_183122db8) + uVar7;
  _DAT_183123028 = _DAT_183122d18 ^ _DAT_183122db8;
  _DAT_1831230d0 = 0xbf;
  *(undefined4 *)(unaff_RBP + 0x5c) = unaff_R15D;
  switch(0xbf < (int)uVar3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 628cef0 (image 18628cef0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18628cef0(void)

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



// ===== continuation @ rva 627c52c (image 18627c52c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018627ca2d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18627c52c(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong in_RAX;
  longlong in_RCX;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar16;
  undefined1 auVar15 [16];
  uint uVar17;
  uint uVar18;
  uint uVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  undefined1 auVar23 [16];
  ulonglong uVar24;
  undefined1 auVar25 [16];
  
  uVar14 = param_1 + in_RAX + param_2;
  uVar16 = param_3 + in_RCX + unaff_RDI;
  param_1 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ param_1;
  param_3 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ param_3;
  _DAT_183122ec0 =
       func_0x0001862a0c00((param_3 << 0x1d | param_3 >> 0x23) - (in_RCX + unaff_RDI) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  auVar19._8_8_ = 0;
  auVar19._0_8_ = unaff_RSI;
  uVar20 = (uint)(unaff_RSI >> 0x20);
  auVar23._8_4_ = (int)unaff_RSI;
  auVar23._0_8_ = unaff_RSI;
  auVar23._12_4_ = uVar20;
  unaff_RBP[8] = unaff_RDI;
  unaff_RBP[9] = 0;
  uVar9 = _DAT_1807e3410;
  uVar8 = _DAT_1807e3400;
  uVar13 = (uint)(unaff_RDI >> 0x20);
  auVar21._8_4_ = (int)unaff_RDI;
  auVar21._0_8_ = unaff_RDI;
  auVar21._12_4_ = uVar13;
  uVar3 = (ulonglong)_DAT_1807e33e0;
  uVar16 = (ulonglong)_DAT_1807e33e0;
  auVar15 = auVar23 | auVar21;
  uVar14 = (ulonglong)_DAT_1807e33d0;
  uVar12 = SUB164(auVar23 & auVar21,0);
  uVar4 = (ulonglong)_DAT_1807e3400;
  uVar24 = SUB168(auVar23 & auVar21,0);
  uVar5 = (ulonglong)_DAT_1807e3410;
  uVar6 = (ulonglong)_DAT_1807e3410;
  uVar1 = (ulonglong)_DAT_1807e3430;
  *(undefined1 (*) [16])(unaff_RBP + 2) = auVar15;
  uVar7 = (ulonglong)_DAT_1807e3420;
  uVar2 = (ulonglong)_DAT_1807e3420;
  auVar23 = auVar23 ^ auVar21;
  uVar22 = auVar23._0_4_;
  unaff_RBP[0xc] = auVar23._0_8_ >> 0x20;
  unaff_RBP[0xd] = auVar23._8_8_ >> 0x20;
  auVar25._8_4_ = 0xffffffff;
  auVar25._0_8_ = 0xffffffffffffffff;
  auVar25._12_4_ = 0xffffffff;
  uVar17 = SUB164(auVar19 ^ auVar25,0);
  uVar18 = SUB164(*(undefined1 (*) [16])(unaff_RBP + 8) ^ auVar25,0);
  uVar11 = _DAT_183122ec0 - (_DAT_183122ec0 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
           _DAT_183122ec0;
  _DAT_1831230f8 =
       (((ulonglong)uVar17 * (ulonglong)_DAT_1807e33f0 +
         ((SUB168(auVar19 ^ auVar25,0) >> 0x20) * (ulonglong)_DAT_1807e33f0 +
          (ulonglong)_DAT_1807e33d0 * (ulonglong)uVar17 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)uVar22 +
         ((auVar23._0_8_ >> 0x20) * (ulonglong)uVar9 + (ulonglong)uVar8 * (ulonglong)uVar22 << 0x20)
         + uVar12 * uVar6 +
           ((uVar16 * (unaff_RSI & 0xffffffff) +
            (uVar20 * uVar3 + (unaff_RSI & 0xffffffff) * uVar14 << 0x20)) - unaff_RDI) +
           ((uVar24 >> 0x20) * uVar5 + uVar12 * uVar4 << 0x20) +
        uVar2 * auVar15._0_4_ + (uVar1 * auVar15._0_4_ + (auVar15._0_8_ >> 0x20) * uVar7 << 0x20)) -
       ((ulonglong)uVar18 * (_DAT_1807e34a0 & 0xffffffff) +
        ((ulonglong)_DAT_1807e3510 * (ulonglong)uVar18 +
         (SUB168(*(undefined1 (*) [16])(unaff_RBP + 8) ^ auVar25,0) >> 0x20) *
         (_DAT_1807e34a0 & 0xffffffff) << 0x20) +
       (ulonglong)uVar22 * (ulonglong)_DAT_1807e34f0 +
       ((ulonglong)_DAT_1807e3500 * (ulonglong)uVar22 +
        (ulonglong)*(uint *)(unaff_RBP + 0xc) * (ulonglong)_DAT_1807e34f0 << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 2) * (ulonglong)_DAT_1807e34d0 +
       ((ulonglong)_DAT_1807e34e0 * (ulonglong)*(uint *)(unaff_RBP + 2) +
        (auVar15._0_8_ >> 0x20) * (ulonglong)_DAT_1807e34d0 << 0x20) +
       (ulonglong)uVar12 * (ulonglong)_DAT_1807e34b0 +
       ((ulonglong)_DAT_1807e34c0 * (ulonglong)uVar12 + (uVar24 >> 0x20) * (ulonglong)_DAT_1807e34b0
       << 0x20) +
       ((unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1807e3490 +
        (ulonglong)uVar13 * (ulonglong)_DAT_1807e3480 << 0x20) +
       (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1807e3480 +
       ((unaff_RSI & 0xffffffff) * (ulonglong)_DAT_1807e3470 +
        (ulonglong)uVar20 * (ulonglong)_DAT_1807e3460 << 0x20) +
       (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_1807e3460)) + 0x43fd8ed4a6efddb5;
  _DAT_183123048 = _DAT_1831230f8 ^ uVar11;
  _DAT_183122fa0 = (_DAT_183122fa0 ^ uVar11) + _DAT_1831230f8 ^ 0x33b6dc4428c73f15;
  _DAT_1831230f0 = (_DAT_1831230f0 * 0x660e722a2786380f ^ _DAT_183122fa0) + uVar11;
  _DAT_183122ff8 = _DAT_1831230f0 ^ _DAT_183122fa0;
  puVar10 = unaff_RBP + -6;
  FUN_18414b520(puVar10);
  if (0xf < (ulonglong)unaff_RBP[-3]) {
    puVar10 = (undefined8 *)unaff_RBP[-6];
  }
  (**(code **)(*(longlong *)unaff_RBP[7] + 0x70))((longlong *)unaff_RBP[7],*unaff_RBP,puVar10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 62a2f6b (image 1862a2f6b) =====

void FUN_1862a2f6b(void)

{
  return;
}



// ===== continuation @ rva 62a2dab (image 1862a2dab) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862a2dab(void)

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



// ===== continuation @ rva 62a3afa (image 1862a3afa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862a3afa(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *unaff_R12;
  int iStack0000000000000040;
  ulonglong uStack0000000000000048;
  undefined4 uStack0000000000000050;
  
  iStack0000000000000040 = 3;
  uStack0000000000000050 = 0x20;
  uStack0000000000000048 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_RSI >> 0x20);
  iVar1 = (**(code **)(*unaff_R12 + 0x558))();
  switch(iStack0000000000000040 < 0 || iVar1 <= iStack0000000000000040) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 62a9c5c (image 1862a9c5c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862a9c5c(uint param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *unaff_R12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  uint in_stack_00000030;
  uint uStack0000000000000038;
  
  uStack0000000000000038 = param_1;
  (**(code **)(*unaff_R12 + 0x6f8))();
  uVar2 = (ulonglong)uStack0000000000000038;
  uVar3 = (~_DAT_1831241c8 + 0x3cb171e9) *
          ((_DAT_183124310 ^ 0xfa4f4c91) + (ulonglong)((uint)_DAT_183124310 & 0xfa4f4c91) * 2);
  uVar3 = (uVar3 | _DAT_183124300) + (uVar3 & _DAT_183124300);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183124050 = func_0x0001862ab780((uVar3 | 0xc6fe3d79) + (ulonglong)((uint)uVar3 & 0xc6fe3d79))
  ;
  _DAT_1831242b0 = (_DAT_1831242b0 ^ _DAT_183123d68) + 0x7efd7ffc ^ 0x57b5691243f91403;
  _DAT_183123ea8 = (_DAT_183123ea8 * -0x259ee70d873ea3a9 ^ _DAT_1831242b0) + _DAT_183123d68;
  _DAT_183124278 = _DAT_183123ea8 ^ _DAT_1831242b0;
  _DAT_1831244a0 = 0x7efd7ffc;
  uVar3 = (_DAT_183123fd8 ^ _DAT_1807e98b0) + _DAT_183123da0 + 0xadd9f19a;
  uVar7 = (_DAT_183123da0 ^ _UNK_1807e98b8) + _DAT_183123fd8 + 0xd5743461;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183123fd8 ^ _DAT_1807e98b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183123da0 ^ _UNK_1807e98b8;
  _DAT_183123f78 =
       func_0x0001862ab780((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183123fd8 + 0xd5743461) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183123da0 + 0xadd9f19a));
  uVar3 = _DAT_183123f78 >> 1 | _DAT_183123f78;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_183123f78) & 0x7ffffffffff;
  _DAT_183124428 = (_DAT_183124428 ^ uVar3) + 0xfc8fe6de ^ 0xee6c0d954043a19;
  _DAT_183123e30 = (_DAT_183123e30 * -0x68001d3eb5301f99 ^ _DAT_183124428) + uVar3;
  _DAT_183123e68 = _DAT_183123e30 ^ _DAT_183124428;
  _DAT_1831242d8 = 0xfc8fe6de;
  uVar3 = (_DAT_183124170 ^ _DAT_1807e98c0) + _DAT_1831241d0 + 0x842223da;
  uVar7 = (_DAT_1831241d0 ^ _UNK_1807e98c8) + _DAT_183124170 + 0xad4c46c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183124170 ^ _DAT_1807e98c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831241d0 ^ _UNK_1807e98c8;
  _DAT_1831243f0 =
       func_0x0001862ab780((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183124170 + 0xad4c46c0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831241d0 + 0x842223da));
  uVar3 = _DAT_1831243f0 ^ 0xac9efa7940;
  _DAT_183124420 = _DAT_1831242e8 ^ uVar3 ^ 0xad4c47bf;
  _DAT_183124288 = (_DAT_183124288 ^ uVar3) + 0xad4c47bf ^ 0x44d241eb2941a838;
  _DAT_183123de8 = (_DAT_183123de8 * -0x6f5b2b488633d445 ^ _DAT_183124288) + uVar3;
  _DAT_183123f10 = _DAT_183123de8 ^ _DAT_183124288;
  _DAT_183123d88 = 0xad4c47bf;
  uVar3 = (~_DAT_183123d78 + 0x52b3b941) *
          ((_DAT_183123f90 ^ 0x296e649a) + (ulonglong)((uint)_DAT_183123f90 & 0x296e649a) * 2);
  uVar3 = (uVar3 | _DAT_183124238) + (uVar3 & _DAT_183124238);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183123de8 = func_0x0001862ab780((uVar3 | 0x7bddddda) + (ulonglong)((uint)uVar3 & 0x7bddddda))
  ;
  uVar3 = (_DAT_183123de8 ^ 0xffffffff) & 0x7fffffffffffffff;
  uVar7 = ((_DAT_183123de8 ^ 0xffffffff) & 0x7fffffffffffffff) >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar3;
  _DAT_183124088 = _DAT_183124230 ^ uVar3 ^ 0x1000000ff;
  _DAT_1831242b8 = (_DAT_1831242b8 ^ uVar3) + 0x1000000ff ^ 0x5a3af0a3bf18bd9c;
  _DAT_183124480 = (_DAT_183124480 * -0x7ba85dd295077519 ^ _DAT_1831242b8) + uVar3;
  _DAT_183123f40 = _DAT_183124480 ^ _DAT_1831242b8;
  _DAT_183123f68 = 0xff;
  uVar3 = (_DAT_183123d50 ^ _DAT_1807e98d0) + _DAT_183123ff0 + 0x84222325;
  uVar7 = (_DAT_183123ff0 ^ _UNK_1807e98d8) + _DAT_183123d50 + 0x72851ad9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183123d50 ^ _DAT_1807e98d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183123ff0 ^ _UNK_1807e98d8;
  _DAT_183124010 =
       func_0x0001862ab780((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183123d50 + 0x72851ad9) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183123ff0 + 0x84222325));
  uVar3 = (_DAT_183124010 & 0x7fffffffffffffff) * 0x5b4a5cdac739a1cb;
  _DAT_183124388 = (_DAT_183124388 ^ uVar3) - 0x72851ad9 ^ 0xe8814b4c28132db5;
  _DAT_183124228 = (_DAT_183124228 * 0x35039410ebd24e49 ^ _DAT_183124388) + uVar3;
  _DAT_183123eb8 = _DAT_183124228 ^ _DAT_183124388;
  _DAT_183124160 = 0x8d7ae527;
  uVar3 = (_DAT_183124260 ^ _DAT_1807e98e0) + _DAT_183124130 + 0x842223da;
  uVar7 = (_DAT_183124130 ^ _UNK_1807e98e8) + _DAT_183124260 + 0x72851ad9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183124260 ^ _DAT_1807e98e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183124130 ^ _UNK_1807e98e8;
  _DAT_183124188 =
       func_0x0001862ab780((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183124260 + 0x72851ad9) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183124130 + 0x842223da));
  uVar3 = _DAT_183124188 >> 1 | _DAT_183124188;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_183124188;
  _DAT_183123df0 = _DAT_183123f18 ^ uVar3 ^ 0x72851bd8;
  _DAT_183123fc0 = (_DAT_183123fc0 ^ uVar3) + 0x72851bd8 ^ 0x3bf9f415a80cc1b;
  _DAT_1831243d8 = (_DAT_1831243d8 * -0x6d96ae9944da2b73 ^ _DAT_183123fc0) + uVar3;
  _DAT_183123ea8 = _DAT_1831243d8 ^ _DAT_183123fc0;
  _DAT_183123f20 = 0x72851bd8;
  uVar3 = (~_DAT_1831243d8 + 0x8d7ae528) *
          ((_DAT_1831242f0 ^ 0xf6a738fd) + (ulonglong)((uint)_DAT_1831242f0 & 0xf6a738fd) * 2);
  uVar3 = (uVar3 | _DAT_183123d80) + (uVar3 & _DAT_183123d80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183123ea0 = func_0x0001862ab780((uVar3 | 0x7bddddda) + (ulonglong)((uint)uVar3 & 0x7bddddda))
  ;
  uVar3 = _DAT_183123ea0 ^ 0x72851bd8;
  _DAT_1831244f8 = _DAT_183124380 ^ uVar3 ^ 0x1000000ff;
  _DAT_183123d60 = (_DAT_183123d60 ^ uVar3) + 0x1000000ff ^ 0x2d94b010ab088ad0;
  _DAT_183123ed8 = (_DAT_183123ed8 * 0x1b2b9092d75e27a7 ^ _DAT_183123d60) + uVar3;
  _DAT_183124008 = _DAT_183123ed8 ^ _DAT_183123d60;
  _DAT_183123ec0 = 0xff;
  uVar3 = (~_DAT_183124378 + 0xc20482e5) *
          ((_DAT_183124390 ^ 0xb9d95d3e) + (ulonglong)((uint)_DAT_183124390 & 0xb9d95d3e) * 2);
  uVar3 = (uVar3 | _DAT_183123e28) + (uVar3 & _DAT_183123e28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183123f90 = func_0x0001862ab780((uVar3 | 0x7bdddfda) + (ulonglong)((uint)uVar3 & 0x7bdddfda))
  ;
  uVar3 = (_DAT_183123f90 ^ 0xc20482e4) << 0x1b | _DAT_183123f90 >> 0x25;
  _DAT_183124308 = _DAT_1831240a8 ^ uVar3 ^ 0x1000000ff;
  _DAT_183123d48 = (_DAT_183123d48 ^ uVar3) + 0x1000000ff ^ 0xf9ea6ad0b9f5f4e4;
  _DAT_1831244d0 = (_DAT_1831244d0 * -0x76e4ea9f166d1cb5 ^ _DAT_183123d48) + uVar3;
  _DAT_1831242a8 = _DAT_1831244d0 ^ _DAT_183123d48;
  _DAT_183123fa0 = 0xff;
  _DAT_183124310 = func_0x0001862ab780(_DAT_183124250 + 0x45fffa01002fffU ^ 0x75);
  uVar3 = _DAT_183124310 ^ 0x7d48ec1c10681b74;
  _DAT_1831244f8 = _DAT_183123d40 ^ uVar3 ^ 0x17b8d66da;
  _DAT_1831243a8 = (_DAT_1831243a8 ^ uVar3) + 0x17b8d66da ^ 0x521e8d0572e74b0f;
  _DAT_1831243e8 = (_DAT_1831243e8 * -0x436ca4fe25339175 ^ _DAT_1831243a8) + uVar3;
  _DAT_183124470 = _DAT_1831243e8 ^ _DAT_1831243a8;
  _DAT_1831244c8 = 0x7b8d66da;
  uVar3 = (~_DAT_183124110 + 0xfc8fe6df) *
          ((_DAT_183124210 ^ 0xfadf5cd9) + (ulonglong)((uint)_DAT_183124210 & 0xfadf5cd9) * 2);
  uVar3 = (uVar3 | _DAT_183124408) + (uVar3 & _DAT_183124408);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831240b0 = func_0x0001862ab780((uVar3 | 0x650ba07) + (ulonglong)((uint)uVar3 & 0x650ba07));
  _DAT_183124048 =
       (_DAT_183124048 ^ _DAT_1831240b0 ^ 0x7d48ec1c6e956488) + 0x82729922 ^ 0xeeced247c2feb288;
  _DAT_183124468 =
       (_DAT_183124468 * 0x4467933f59a57661 ^ _DAT_183124048) +
       (_DAT_1831240b0 ^ 0x7d48ec1c6e956488);
  _DAT_1831243b0 = _DAT_183124468 ^ _DAT_183124048;
  _DAT_1831241b8 = 0x82729922;
  uVar3 = (_DAT_183123d28 ^ _DAT_1807e98f0) + _DAT_183123f30 + 0x650ba07;
  uVar7 = (_DAT_183123f30 ^ _UNK_1807e98f8) + _DAT_183123d28 + 0xf91acdb8;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183123d28 ^ _DAT_1807e98f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183123f30 ^ _UNK_1807e98f8;
  _DAT_183123dc0 =
       func_0x0001862ab780((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183123d28 + 0xf91acdb8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183123f30 + 0x650ba07));
  _DAT_183123e50 = _DAT_183124458 ^ _DAT_183123dc0 ^ 0x17b8d66da;
  _DAT_183123d80 = (_DAT_183123d80 ^ _DAT_183123dc0) + 0x17b8d66da ^ 0x17b47c8c8e4b7f;
  _DAT_1831240a0 = (_DAT_1831240a0 * 0x5c32479464389567 ^ _DAT_183123d80) + _DAT_183123dc0;
  _DAT_1831240b8 = _DAT_1831240a0 ^ _DAT_183123d80;
  _DAT_1831244b0 = 0x7b8d66da;
  uVar3 = (_DAT_183124318 ^ _DAT_1807e9900) + _DAT_183124218 + 0xffaf45ff;
  uVar7 = (_DAT_183124218 ^ _UNK_1807e9908) + _DAT_183124318 + 0x7b8d66da;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183124318 ^ _DAT_1807e9900;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183124218 ^ _UNK_1807e9908;
  _DAT_183124428 =
       func_0x0001862ab780((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183124318 + 0x7b8d66da) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183124218 + 0xffaf45ff));
  _DAT_183124180 = _DAT_183124398 * -0x45172be5f27775;
  _DAT_183123fb8 = _DAT_183123fb8 ^ _DAT_183124180 ^ 0x4de13bc20b998a69;
  _DAT_1831243c0 = (_DAT_1831243c0 * -0x3a8557d70ffef1a5 ^ _DAT_183123fb8) + _DAT_183124180;
  _DAT_183124088 = _DAT_1831243c0 ^ _DAT_183123fb8;
  _DAT_183124178 = 0;
  uVar3 = (_DAT_183124080 ^ _DAT_1807e9910) + _DAT_183123ed0 + 0xfadf5cd9;
  uVar7 = (_DAT_183123ed0 ^ _UNK_1807e9918) + _DAT_183124080 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183124080 ^ _DAT_1807e9910;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183123ed0 ^ _UNK_1807e9918;
  _DAT_1831241b0 =
       func_0x0001862ab780((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183124080 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183123ed0 + 0xfadf5cd9));
  uVar3 = (ulonglong)(~(uint)_DAT_1831241b0 & 0x7efd7ffc);
  _DAT_183124208 = (_DAT_183124208 ^ uVar3) + 0x81028003 ^ 0xbda217e1e8395ac3;
  _DAT_183124080 = (_DAT_183124080 * -0x2a78dc63fb767ec3 ^ _DAT_183124208) + uVar3;
  _DAT_183123df8 = _DAT_183124080 ^ _DAT_183124208;
  _DAT_183123de8 = 0x81028003;
  _DAT_183124050 = func_0x0001862ab780(_DAT_183124158 ^ 0xffe0ff83c9ffe1ba);
  uVar3 = _DAT_183124050 - (_DAT_183124050 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183124050;
  _DAT_183124000 = _DAT_183123e40 ^ uVar3 ^ 0xff;
  _DAT_183124438 = (_DAT_183124438 ^ uVar3) + 0xff ^ 0xcd1b2fcefd9d3845;
  _DAT_183124398 = (_DAT_183124398 * 0xbf7b891d03f423 ^ _DAT_183124438) + uVar3;
  _DAT_183123ed8 = _DAT_183124398 ^ _DAT_183124438;
  _DAT_183124458 = 0xff;
  uVar3 = (_DAT_1831243c8 ^ _DAT_1807e9920) + _DAT_1831240f0 + 0xfa4f4c91;
  uVar7 = (_DAT_1831240f0 ^ _UNK_1807e9928) + _DAT_1831243c8 + 0x7e6d6fb4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1831243c8 ^ _DAT_1807e9920;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831240f0 ^ _UNK_1807e9928;
  _DAT_183124488 =
       func_0x0001862ab780((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831243c8 + 0x7e6d6fb4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831240f0 + 0xfa4f4c91));
  uVar3 = _DAT_1831242b0 << 0x39 | _DAT_1831242b0 >> 7;
  _DAT_183124318 = _DAT_183124318 ^ uVar3 ^ 0x517a5bb845056eaa;
  _DAT_183124290 = (_DAT_183124290 * -0x5368fa7a8e348567 ^ _DAT_183124318) + uVar3;
  _DAT_183124060 = _DAT_183124290 ^ _DAT_183124318;
  _DAT_183124270 = 0;
  _DAT_1831241b0 = func_0x0001862ab780(_DAT_183124058 + 0x1f007bd60021ffU ^ 0x44);
  uVar3 = (_DAT_1831241b0 ^ 0xff) << 7 | _DAT_1831241b0 >> 0x39;
  _DAT_183123e78 = _DAT_183124448 ^ uVar3 ^ 0xff;
  _DAT_183124208 = (_DAT_183124208 ^ uVar3) + 0xff ^ 0xbf9dc25a6739b259;
  _DAT_183123d48 = (_DAT_183123d48 * 0x5b18336802ef0737 ^ _DAT_183124208) + uVar3;
  _DAT_183124248 = _DAT_183123d48 ^ _DAT_183124208;
  auVar5._8_8_ = _UNK_180122a38;
  auVar5._0_8_ = uVar2 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_1807e9930,_DAT_1800170c0);
  _DAT_1831243e0 = 0xff;
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar7 + _DAT_183123df0;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_1831242a0 ^ uVar7;
  }
  uVar3 = func_0x0001862ab780(SUB161(auVar5 ^ _DAT_1807e9930,5) ^ uVar3);
  uVar7 = uVar2 * 0xff ^ uVar3 ^ 0xff;
  uVar2 = uVar2 & 0xff;
  _DAT_183123ec0 = (uVar3 ^ uVar7) + uVar2 ^ 0x50fb50958a2b409d;
  _DAT_1831241c8 = (_DAT_1831241c8 * -0x436e552b38586a5 ^ _DAT_183123ec0) + uVar7;
  _DAT_183123ed8 = _DAT_1831241c8 ^ _DAT_183123ec0;
  uStack0000000000000038 = (uint)uVar2;
  uVar3 = (ulonglong)in_stack_00000030 ^ 0x84222325;
  uVar7 = uVar3 ^ _DAT_183123fc0;
  lVar4 = uVar3 + _DAT_183124320;
  uVar3 = uVar7 + lVar4;
  uVar8 = (uVar2 ^ _DAT_183124320) + _DAT_183123fc0 + uVar2;
  uVar7 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar7;
  uVar3 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2 ^ _DAT_183124320;
  _DAT_1831240c0 = uVar2;
  _DAT_183124078 =
       func_0x0001862ab780((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183123fc0 + uVar2) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar4);
  _DAT_183124118 = in_stack_00000030 | uVar2;
  _DAT_183124270 = (_DAT_183124270 ^ _DAT_183124078) + _DAT_183124118 ^ 0xab2416deefb54e62;
  _DAT_183124490 = (_DAT_183124490 * -0x1f85be3db5152e0f ^ _DAT_183124270) + _DAT_183124078;
  _DAT_1831244c0 = _DAT_183124490 ^ _DAT_183124270;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x9bce,0x1bc);
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



// ===== continuation @ rva 62a7465 (image 1862a7465) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862a7465(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x1f8))();
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



// ===== continuation @ rva 62a7294 (image 1862a7294) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862a7294(void)

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



// ===== continuation @ rva 62a380d (image 1862a380d) =====

undefined8 thunk_FUN_1862a2ec3(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva 62a3f60 (image 1862a3f60) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862a3f60(void)

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



// ===== continuation @ rva 62ab17d (image 1862ab17d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862ab17d(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 62a58ec (image 1862a58ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862a58ec(void)

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



// ===== continuation @ rva 625c772 (image 18625c772) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625c772(void)

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



// ===== continuation @ rva 625c71e (image 18625c71e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625c71e(void)

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



// ===== continuation @ rva 625d5b1 (image 18625d5b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625d5b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807ddb58)();
  return;
}



// ===== continuation @ rva 625cadd (image 18625cadd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625cadd(void)

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



// ===== continuation @ rva 625d5e5 (image 18625d5e5) =====

void FUN_18625d5e5(void)

{
  return;
}



// ===== continuation @ rva 625ce7b (image 18625ce7b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625ce7b(void)

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



// ===== continuation @ rva 625d5f4 (image 18625d5f4) =====

void FUN_18625d5f4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 625d080 (image 18625d080) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625d080(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000068 = 0;
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



// ===== continuation @ rva 625cf38 (image 18625cf38) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625cf38(void)

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



// ===== continuation @ rva 625cb20 (image 18625cb20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625cb20(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_1807dd918)();
  return;
}



// ===== continuation @ rva 625cbb3 (image 18625cbb3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625cbb3(void)

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



// ===== continuation @ rva 625cb5b (image 18625cb5b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625cb5b(void)

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



// ===== continuation @ rva 625d05d (image 18625d05d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625d05d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1807dd688)();
  return;
}



// ===== continuation @ rva 625f706 (image 18625f706) =====

void FUN_18625f706(void)

{
  return;
}



// ===== continuation @ rva 625d76c (image 18625d76c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625d76c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1807de8e8)();
  return;
}



// ===== continuation @ rva 625fdad (image 18625fdad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625fdad(void)

{
  (*_DAT_1807deb38)();
  return;
}



// ===== continuation @ rva 625f490 (image 18625f490) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625f490(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1807de1e8)();
  return;
}



// ===== continuation @ rva 625eea7 (image 18625eea7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625eea7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1807deaf8)();
  return;
}



// ===== continuation @ rva 6260244 (image 186260244) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186260244(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1807de008)();
  return;
}



// ===== continuation @ rva 625daf1 (image 18625daf1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625daf1(void)

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



// ===== continuation @ rva 625d9c0 (image 18625d9c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625d9c0(void)

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



// ===== continuation @ rva 625f14b (image 18625f14b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625f14b(void)

{
  (*_DAT_1807deb38)();
  return;
}



// ===== continuation @ rva 625ebf6 (image 18625ebf6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625ebf6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1807de298)();
  return;
}



// ===== continuation @ rva 62602aa (image 1862602aa) =====

void FUN_1862602aa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 625fb74 (image 18625fb74) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625fb74(void)

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



// ===== continuation @ rva 625c1ba (image 18625c1ba) =====

void FUN_18625c1ba(void)

{
  return;
}



// ===== continuation @ rva 6258834 (image 186258834) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186258834(void)

{
  FUN_190ddce00();
  (*_DAT_1807dc638)();
  return;
}



// ===== continuation @ rva 625c5de (image 18625c5de) =====

void FUN_18625c5de(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 625b3e5 (image 18625b3e5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625b3e5(void)

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



// ===== continuation @ rva 625c58b (image 18625c58b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625c58b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1807dce08)();
  return;
}



// ===== continuation @ rva 625b771 (image 18625b771) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625b771(void)

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



// ===== continuation @ rva 625c1a9 (image 18625c1a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625c1a9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1807dcdc8)();
  return;
}



// ===== continuation @ rva 625c14b (image 18625c14b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625c14b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807dc6a8)();
  return;
}



// ===== continuation @ rva 625bb7f (image 18625bb7f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625bb7f(void)

{
  (*_DAT_1807dcd88)();
  return;
}



// ===== continuation @ rva 625bfd9 (image 18625bfd9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625bfd9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1807dcc08)();
  return;
}



// ===== continuation @ rva 625b829 (image 18625b829) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18625b829(void)

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



// ===== continuation @ rva 625c226 (image 18625c226) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625c226(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1807dc658)();
  return;
}



// ===== continuation @ rva 625b894 (image 18625b894) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625b894(void)

{
  FUN_190dd72e0();
  (*_DAT_1807dc6b8)();
  return;
}



// ===== continuation @ rva 625c59c (image 18625c59c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625c59c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1807dc7a8)();
  return;
}



// ===== continuation @ rva 625be53 (image 18625be53) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18625be53(void)

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



// ===== continuation @ rva 62770b6 (image 1862770b6) =====

void FUN_1862770b6(void)

{
  return;
}



// ===== continuation @ rva 627270f (image 18627270f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18627270f(void)

{
  FUN_190ddce00();
  (*_DAT_1807e0808)();
  return;
}



// ===== continuation @ rva 6276494 (image 186276494) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186276494(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
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



// ===== continuation @ rva 6277122 (image 186277122) =====

void FUN_186277122(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 62769e6 (image 1862769e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1862769e6(void)

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



// ===== continuation @ rva 6275f8b (image 186275f8b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186275f8b(void)

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



// ===== continuation @ rva 6276c9e (image 186276c9e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186276c9e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807e0d68)();
  return;
}



// ===== continuation @ rva 627683d (image 18627683d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18627683d(void)

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



// ===== continuation @ rva 6276a5e (image 186276a5e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186276a5e(void)

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



// ===== continuation @ rva 6276260 (image 186276260) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186276260(void)

{
  FUN_190ddce00();
  (*_DAT_1807e0858)();
  return;
}



