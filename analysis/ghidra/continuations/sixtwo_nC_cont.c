// ===== continuation @ rva 6d70118 (image 186d70118) =====

void FUN_186d70118(void)

{
  return;
}



// ===== continuation @ rva 6d475cf (image 186d475cf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186d47625 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186d475cf(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6d5cd81 (image 186d5cd81) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186d5cd98 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186d5cd81(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6d5cedb (image 186d5cedb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d5cedb(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  uint uVar3;
  ulonglong uVar2;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  uVar1 = (~_DAT_1831688a8 + 2) * ((param_1 ^ in_RAX) + (in_RAX & param_1) * 2);
  uVar1 = (uVar1 | _DAT_183168348) + (uVar1 & _DAT_183168348);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831688d0 = func_0x000186d70300((in_RAX ^ 1 | uVar1) + (uVar1 & (in_RAX ^ 1)));
  uVar3 = (uint)(unaff_R13 >> 0x20);
  auVar4._8_4_ = (uint)unaff_R13;
  auVar4._0_8_ = unaff_R13;
  auVar4._12_4_ = uVar3;
  uVar8 = (uint)unaff_R13 & (uint)DAT_18001a990;
  uVar9 = SUB168(auVar4 | _DAT_18001a990,0);
  uVar7 = SUB164(auVar4 | _DAT_18001a990,0);
  uVar2 = SUB168(auVar4 ^ _DAT_18001a990,0);
  uVar5 = SUB164(auVar4 ^ _DAT_18001a990,0);
  lVar6 = ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180a3d5a0 +
           (ulonglong)uVar3 * (ulonglong)unaff_XMM9_Da << 0x20) +
          (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM9_Da;
  uVar1 = (unaff_R13 | 1) ^ _DAT_1831688d0;
  uVar1 = uVar1 << 0x24 | uVar1 >> 0x1c;
  _DAT_183168488 =
       (((ulonglong)uVar5 * (ulonglong)unaff_XMM15_Da +
         ((ulonglong)uVar5 * (ulonglong)_DAT_180a3d580 + (uVar2 >> 0x20) * (ulonglong)unaff_XMM15_Da
         << 0x20) + lVar6 +
        (ulonglong)uVar7 * (ulonglong)_DAT_180a3d550 +
        ((ulonglong)uVar7 * (ulonglong)_DAT_180a3d560 + (uVar9 >> 0x20) * (ulonglong)_DAT_180a3d550
        << 0x20) +
        ((ulonglong)uVar8 * (ulonglong)_DAT_180a3d540 << 0x20 |
        (ulonglong)uVar8 * (ulonglong)_DAT_180a3d530) +
        ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180a3d520 +
         (ulonglong)uVar3 * (ulonglong)_DAT_180a3d510 << 0x20) +
        (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180a3d510) -
       ((ulonglong)uVar5 * (ulonglong)unaff_XMM14_Da +
        ((ulonglong)uVar5 * (ulonglong)_DAT_180a3d620 + (uVar2 >> 0x20) * (ulonglong)unaff_XMM14_Da
        << 0x20) + lVar6 +
       (ulonglong)uVar7 * (ulonglong)unaff_XMM10_Da +
       ((ulonglong)uVar7 * (ulonglong)_DAT_180a3d600 + (uVar9 >> 0x20) * (ulonglong)unaff_XMM10_Da
       << 0x20) +
       ((ulonglong)uVar8 * (ulonglong)_DAT_180a3d5e0 << 0x20 |
       (ulonglong)uVar8 * (ulonglong)_DAT_180a3d5d0) +
       ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180a3d5c0 +
        (ulonglong)uVar3 * (ulonglong)unaff_XMM11_Da << 0x20) +
       (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM11_Da)) + 0x15beac2773ca0c4e;
  _DAT_183168578 = _DAT_1831686c8 ^ uVar1 ^ _DAT_183168488;
  _DAT_183168480 = (_DAT_183168480 ^ uVar1) + _DAT_183168488 ^ 0xa7514f2483715e31;
  _DAT_1831686b8 = (_DAT_1831686b8 * unaff_R14 ^ _DAT_183168480) + uVar1;
  _DAT_183168398 = _DAT_1831686b8 ^ _DAT_183168480;
                    /* WARNING: Could not recover jumptable at 0x000186d5d1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_R15 + (ulonglong)(_DAT_183168488 == 8) * 8))();
  return;
}



// ===== continuation @ rva 6d5c626 (image 186d5c626) =====

void thunk_FUN_186d495c3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 6d5d7e1 (image 186d5d7e1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186d5d8be */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186d5d7e1(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000144;
  
  (**(code **)(*unaff_RSI + 0x5a0))();
  uStack0000000000000144 = 0xf33bd998;
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190de6cb0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6d5c7ce (image 186d5c7ce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186d5c7e5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186d5c7ce(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6d4c737 (image 186d4c737) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d4c737(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000058;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000058 < 0 || iVar1 <= in_stack_00000058) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6d5c0bd (image 186d5c0bd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186d5c0f5 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186d5c0bd(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6d4bd4d (image 186d4bd4d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186d4bd87 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186d4bd4d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6d4bd0f (image 186d4bd0f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186d4bd45 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186d4bd0f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6d7a5d5 (image 186d7a5d5) =====

void FUN_186d7a5d5(void)

{
  return;
}



// ===== continuation @ rva 6d7145d (image 186d7145d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7145d(void)

{
  FUN_190ddce00();
  (*_DAT_180a3f648)();
  return;
}



// ===== continuation @ rva 6d78880 (image 186d78880) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d78880(void)

{
  FUN_190ddfc90();
  (*_DAT_180a3e7c8)();
  return;
}



// ===== continuation @ rva 6d7a89c (image 186d7a89c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7a89c(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000040;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180a3ecb8)();
  return;
}



// ===== continuation @ rva 6d79710 (image 186d79710) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d79710(void)

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



// ===== continuation @ rva 6d7aa82 (image 186d7aa82) =====

void FUN_186d7aa82(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d786ce (image 186d786ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d786ce(void)

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



// ===== continuation @ rva 6d7aa71 (image 186d7aa71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7aa71(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x68))();
  (*_DAT_180a3f8f8)();
  return;
}



// ===== continuation @ rva 6d7977b (image 186d7977b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d7977b(void)

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



// ===== continuation @ rva 6d77f8b (image 186d77f8b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d77f8b(void)

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



// ===== continuation @ rva 6d7a4ac (image 186d7a4ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7a4ac(void)

{
  FUN_190de3220();
  (*_DAT_180a3f508)();
  return;
}



// ===== continuation @ rva 6d775ce (image 186d775ce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d775ce(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x120))(in_stack_00000040);
  (*_DAT_180a3e7b8)();
  return;
}



// ===== continuation @ rva 6d7961c (image 186d7961c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7961c(void)

{
  char cVar1;
  longlong *in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*in_stack_00000040 + 0x720))(in_stack_00000040);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6d836c3 (image 186d836c3) =====

void FUN_186d836c3(void)

{
  return;
}



// ===== continuation @ rva 6d7ad13 (image 186d7ad13) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7ad13(void)

{
  FUN_190ddce00();
  (*_DAT_180a412f8)();
  return;
}



// ===== continuation @ rva 6d84f50 (image 186d84f50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d84f50(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180a42288)();
  return;
}



// ===== continuation @ rva 6d81c26 (image 186d81c26) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d81c26(void)

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



// ===== continuation @ rva 6d823bf (image 186d823bf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d823bf(void)

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



// ===== continuation @ rva 6d82f0c (image 186d82f0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d82f0c(void)

{
  (*_DAT_180a42548)();
  return;
}



// ===== continuation @ rva 6d7e6ce (image 186d7e6ce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7e6ce(void)

{
  FUN_190ddfc90();
  (*_DAT_180a41968)();
  return;
}



// ===== continuation @ rva 6d82eb1 (image 186d82eb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d82eb1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a424f8)();
  return;
}



// ===== continuation @ rva 6d82d55 (image 186d82d55) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d82d55(void)

{
  FUN_190dd72e0();
  (*_DAT_180a42058)();
  return;
}



// ===== continuation @ rva 6d7e815 (image 186d7e815) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d7e815(void)

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



// ===== continuation @ rva 6d834e2 (image 186d834e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d834e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a411d8)();
  return;
}



// ===== continuation @ rva 6d832ba (image 186d832ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d832ba(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a42088)();
  return;
}



// ===== continuation @ rva 6d85bdb (image 186d85bdb) =====

void FUN_186d85bdb(void)

{
  return;
}



// ===== continuation @ rva 6d85114 (image 186d85114) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d85114(void)

{
  FUN_190ddfc90();
  (*_DAT_180a444a8)();
  return;
}



// ===== continuation @ rva 6d85550 (image 186d85550) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d85550(void)

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



// ===== continuation @ rva 6d852f9 (image 186d852f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d852f9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a44138)();
  return;
}



// ===== continuation @ rva 6d858b1 (image 186d858b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d858b1(void)

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



// ===== continuation @ rva 6d8585f (image 186d8585f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d8585f(void)

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



// ===== continuation @ rva 6d859cf (image 186d859cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d859cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a44358)();
  return;
}



// ===== continuation @ rva 6d85898 (image 186d85898) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d85898(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a44358)();
  return;
}



// ===== continuation @ rva 6d85bb2 (image 186d85bb2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d85bb2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a44288)();
  return;
}



// ===== continuation @ rva 6d857d1 (image 186d857d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d857d1(void)

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



// ===== continuation @ rva 6d85be7 (image 186d85be7) =====

void FUN_186d85be7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d85665 (image 186d85665) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d85665(void)

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



// ===== continuation @ rva 6d9245e (image 186d9245e) =====

void FUN_186d9245e(void)

{
  return;
}



// ===== continuation @ rva 6d85dca (image 186d85dca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d85dca(void)

{
  FUN_190ddce00();
  (*_DAT_180a44e58)();
  return;
}



// ===== continuation @ rva 6d92456 (image 186d92456) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d92456(void)

{
  (*_DAT_180a44fa8)();
  return;
}



// ===== continuation @ rva 6d8911c (image 186d8911c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d8911c(void)

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



// ===== continuation @ rva 6d8d7ab (image 186d8d7ab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d8d7ab(void)

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



// ===== continuation @ rva 6d91776 (image 186d91776) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d91776(void)

{
  FUN_184117d50();
  (*_DAT_180a45338)();
  return;
}



// ===== continuation @ rva 6d8d5b5 (image 186d8d5b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d8d5b5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_180a44958)();
  return;
}



// ===== continuation @ rva 6d887e9 (image 186d887e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d887e9(void)

{
  undefined8 in_stack_000000a0;
  undefined8 uStack0000000000000120;
  
  uStack0000000000000120 = in_stack_000000a0;
  FUN_190dd72e0();
  (*_DAT_180a44ec8)();
  return;
}



// ===== continuation @ rva 6d891e0 (image 186d891e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d891e0(void)

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



// ===== continuation @ rva 6d91a08 (image 186d91a08) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d91a08(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x538))();
  FUN_184117d80();
  (*_DAT_180a44af8)();
  return;
}



// ===== continuation @ rva 6cc0e3e (image 186cc0e3e) =====

void FUN_186cc0e3e(void)

{
  return;
}



// ===== continuation @ rva 6cbc997 (image 186cbc997) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cbc997(void)

{
  FUN_190ddce00();
  (*_DAT_180a1a218)();
  return;
}



// ===== continuation @ rva 6cc0c5d (image 186cc0c5d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc0c5d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a1a688)();
  return;
}



// ===== continuation @ rva 6cc0a89 (image 186cc0a89) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc0a89(void)

{
  FUN_190de3220();
  (*_DAT_180a1a518)();
  return;
}



// ===== continuation @ rva 6cc0f76 (image 186cc0f76) =====

void FUN_186cc0f76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6cc061e (image 186cc061e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc061e(void)

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



// ===== continuation @ rva 6cbfd6c (image 186cbfd6c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cbfd6c(void)

{
  FUN_190ddfc90();
  (*_DAT_180a1a788)();
  return;
}



// ===== continuation @ rva 6cc0f10 (image 186cc0f10) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc0f10(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a1a358)();
  return;
}



// ===== continuation @ rva 6cbfefd (image 186cbfefd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cbfefd(void)

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



// ===== continuation @ rva 6cc02a1 (image 186cc02a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc02a1(void)

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



// ===== continuation @ rva 6cbff9d (image 186cbff9d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cbff9d(void)

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



// ===== continuation @ rva 6cc07d6 (image 186cc07d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc07d6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180a1a738)();
  return;
}



// ===== continuation @ rva 6cc0216 (image 186cc0216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc0216(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a1a1a8)();
  return;
}



// ===== continuation @ rva 6cc1895 (image 186cc1895) =====

void FUN_186cc1895(void)

{
  return;
}



// ===== continuation @ rva 6cc10ef (image 186cc10ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc10ef(void)

{
  FUN_190ddfc90();
  (*_DAT_180a1b6c8)();
  return;
}



// ===== continuation @ rva 6cc1270 (image 186cc1270) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc1270(void)

{
  FUN_190dd9df0();
  (*_DAT_180a1b618)();
  return;
}



// ===== continuation @ rva 6cc1195 (image 186cc1195) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc1195(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a1b668)();
  return;
}



// ===== continuation @ rva 6cc11ae (image 186cc11ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc11ae(void)

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



// ===== continuation @ rva 6cc115c (image 186cc115c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc115c(void)

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



// ===== continuation @ rva 6cc1568 (image 186cc1568) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc1568(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a1b6b8)();
  return;
}



// ===== continuation @ rva 6cc189f (image 186cc189f) =====

void FUN_186cc189f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6cc17e9 (image 186cc17e9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc17e9(void)

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



// ===== continuation @ rva 6cc134c (image 186cc134c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc134c(void)

{
  FUN_190ddfc90();
  (*_DAT_180a1b578)();
  return;
}



// ===== continuation @ rva 6cc137f (image 186cc137f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc137f(void)

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



// ===== continuation @ rva 6cc54eb (image 186cc54eb) =====

void FUN_186cc54eb(void)

{
  return;
}



// ===== continuation @ rva 6cc1a14 (image 186cc1a14) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc1a14(void)

{
  FUN_190ddce00();
  (*_DAT_180a1c178)();
  return;
}



// ===== continuation @ rva 6cc51ff (image 186cc51ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc51ff(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180a1bf18)();
  return;
}



// ===== continuation @ rva 6cc4f7c (image 186cc4f7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc4f7c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a1b8b8)();
  return;
}



// ===== continuation @ rva 6cc1a8c (image 186cc1a8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc1a8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_180a1c0b8)();
  return;
}



// ===== continuation @ rva 6cc5d4d (image 186cc5d4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc5d4d(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a1bf78)();
  return;
}



// ===== continuation @ rva 6cc4f40 (image 186cc4f40) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc4f40(void)

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



// ===== continuation @ rva 6cc5db0 (image 186cc5db0) =====

void FUN_186cc5db0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6cc4fa8 (image 186cc4fa8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc4fa8(void)

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



// ===== continuation @ rva 6cc5a72 (image 186cc5a72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc5a72(void)

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



// ===== continuation @ rva 6cc5807 (image 186cc5807) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc5807(void)

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



// ===== continuation @ rva 6cc583e (image 186cc583e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc583e(void)

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



// ===== continuation @ rva 6cca7b9 (image 186cca7b9) =====

void FUN_186cca7b9(void)

{
  return;
}



// ===== continuation @ rva 6cc5fa7 (image 186cc5fa7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cc5fa7(void)

{
  FUN_190ddce00();
  (*_DAT_180a1e028)();
  return;
}



// ===== continuation @ rva 6cca3bd (image 186cca3bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cca3bd(void)

{
  (*_DAT_180a1db58)();
  return;
}



// ===== continuation @ rva 6ccc9b8 (image 186ccc9b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ccc9b8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180a1dfe8)();
  return;
}



// ===== continuation @ rva 6ccb5ba (image 186ccb5ba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ccb5ba(void)

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



// ===== continuation @ rva 6ccc9c7 (image 186ccc9c7) =====

void FUN_186ccc9c7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6ccc87f (image 186ccc87f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ccc87f(void)

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



// ===== continuation @ rva 6cc9bb0 (image 186cc9bb0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cc9bb0(void)

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



// ===== continuation @ rva 6cca6e2 (image 186cca6e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cca6e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a1d8a8)();
  return;
}



// ===== continuation @ rva 6ccba6a (image 186ccba6a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ccba6a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a1dd58)();
  return;
}



// ===== continuation @ rva 6ccb16d (image 186ccb16d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ccb16d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180a1d5e8)();
  return;
}



// ===== continuation @ rva 6ccbedf (image 186ccbedf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ccbedf(void)

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



// ===== continuation @ rva 6ccbc91 (image 186ccbc91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ccbc91(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a1d678)();
  return;
}



// ===== continuation @ rva 6cccc16 (image 186cccc16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cccc16(void)

{
  FUN_190dd72e0();
  (*_DAT_180a1ef88)();
  return;
}



// ===== continuation @ rva 6cccba3 (image 186cccba3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cccba3(void)

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



// ===== continuation @ rva 6cccf18 (image 186cccf18) =====

void FUN_186cccf18(void)

{
  return;
}



// ===== continuation @ rva 6cccd7b (image 186cccd7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cccd7b(void)

{
  FUN_190dd9df0();
  (*_DAT_180a1f028)();
  return;
}



// ===== continuation @ rva 6cccd08 (image 186cccd08) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cccd08(void)

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



// ===== continuation @ rva 6ccce60 (image 186ccce60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ccce60(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a1efb8)();
  return;
}



// ===== continuation @ rva 6cccf20 (image 186cccf20) =====

void FUN_186cccf20(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6cccdfc (image 186cccdfc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cccdfc(void)

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



// ===== continuation @ rva 6cccc01 (image 186cccc01) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cccc01(void)

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



// ===== continuation @ rva 6cccdd2 (image 186cccdd2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cccdd2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x368))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a1ef48)();
  return;
}



// ===== continuation @ rva 6cd0381 (image 186cd0381) =====

void FUN_186cd0381(void)

{
  return;
}



// ===== continuation @ rva 6ccd080 (image 186ccd080) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ccd080(void)

{
  FUN_190ddce00();
  (*_DAT_180a1fc38)();
  return;
}



// ===== continuation @ rva 6cd0370 (image 186cd0370) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd0370(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180a20578)();
  return;
}



// ===== continuation @ rva 6cd0312 (image 186cd0312) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd0312(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a1f1a8)();
  return;
}



// ===== continuation @ rva 6cd0a2c (image 186cd0a2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd0a2c(void)

{
  (*_DAT_180a20718)();
  return;
}



// ===== continuation @ rva 6cd3134 (image 186cd3134) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cd3134(void)

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



// ===== continuation @ rva 6ccff63 (image 186ccff63) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ccff63(void)

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



// ===== continuation @ rva 6cd12a0 (image 186cd12a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd12a0(void)

{
  (*_DAT_180a20128)();
  return;
}



// ===== continuation @ rva 6cd1143 (image 186cd1143) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cd1143(void)

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



// ===== continuation @ rva 6cd1a8b (image 186cd1a8b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd1a8b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a20488)();
  return;
}



// ===== continuation @ rva 6cd1903 (image 186cd1903) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd1903(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180a20628)();
  return;
}



// ===== continuation @ rva 6cd3520 (image 186cd3520) =====

void FUN_186cd3520(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6cd3041 (image 186cd3041) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cd3041(void)

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



// ===== continuation @ rva 6cd02b2 (image 186cd02b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd02b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180a1fc98)();
  return;
}



// ===== continuation @ rva 6cdb40b (image 186cdb40b) =====

void FUN_186cdb40b(void)

{
  return;
}



// ===== continuation @ rva 6cd374e (image 186cd374e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd374e(void)

{
  FUN_190ddce00();
  (*_DAT_180a238c8)();
  return;
}



// ===== continuation @ rva 6cdc730 (image 186cdc730) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cdc730(void)

{
  (*_DAT_180a23ac8)();
  return;
}



// ===== continuation @ rva 6cdee74 (image 186cdee74) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cdee74(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_180a23258)();
  return;
}



// ===== continuation @ rva 6cdacca (image 186cdacca) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cdacca(void)

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



// ===== continuation @ rva 6cdb5c9 (image 186cdb5c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cdb5c9(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180a22198)();
  return;
}



// ===== continuation @ rva 6cd91f3 (image 186cd91f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd91f3(void)

{
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x2b3,0x10);
  (**(code **)(*in_stack_00000038 + 0x720))(in_stack_00000038);
  (*_DAT_180a21d48)();
  return;
}



// ===== continuation @ rva 6cdec9a (image 186cdec9a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cdec9a(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180a23208)();
  return;
}



// ===== continuation @ rva 6cd5f5f (image 186cd5f5f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cd5f5f(void)

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



// ===== continuation @ rva 6cd64a7 (image 186cd64a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd64a7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a218e8)();
  return;
}



// ===== continuation @ rva 6cd6329 (image 186cd6329) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd6329(void)

{
  FUN_190de3220();
  (*_DAT_180a23858)();
  return;
}



// ===== continuation @ rva 6cdc397 (image 186cdc397) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cdc397(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180a23198)();
  return;
}



// ===== continuation @ rva 6cd993f (image 186cd993f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cd993f(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000098;
  
  (**(code **)(*in_stack_00000038 + 0x560))(in_stack_00000038,3,in_stack_00000098,0);
  (*_DAT_180a232c8)();
  return;
}



// ===== continuation @ rva 6cdb510 (image 186cdb510) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cdb510(void)

{
  (*_DAT_180a23ad8)();
  return;
}



// ===== continuation @ rva 6cda9cb (image 186cda9cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cda9cb(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6ce1fa7 (image 186ce1fa7) =====

void FUN_186ce1fa7(void)

{
  return;
}



// ===== continuation @ rva 6cdf0a7 (image 186cdf0a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cdf0a7(void)

{
  FUN_190ddce00();
  (*_DAT_180a24fa8)();
  return;
}



// ===== continuation @ rva 6ce1699 (image 186ce1699) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce1699(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a24ca8)();
  return;
}



// ===== continuation @ rva 6ce153d (image 186ce153d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce153d(void)

{
  FUN_190dd72e0();
  (*_DAT_180a24f98)();
  return;
}



// ===== continuation @ rva 6ce2269 (image 186ce2269) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce2269(void)

{
  (*_DAT_180a24e88)();
  return;
}



// ===== continuation @ rva 6ce19a0 (image 186ce19a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce19a0(void)

{
  (*_DAT_180a24f68)();
  return;
}



// ===== continuation @ rva 6ce16ff (image 186ce16ff) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ce16ff(void)

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



// ===== continuation @ rva 6ce1363 (image 186ce1363) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce1363(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a24f38)();
  return;
}



// ===== continuation @ rva 6ce23ef (image 186ce23ef) =====

void FUN_186ce23ef(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6ce14b1 (image 186ce14b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ce14b1(void)

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



// ===== continuation @ rva 6ce1d0f (image 186ce1d0f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ce1d0f(void)

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



// ===== continuation @ rva 6ce23de (image 186ce23de) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce23de(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180a25128)();
  return;
}



// ===== continuation @ rva 6ce5ae8 (image 186ce5ae8) =====

void FUN_186ce5ae8(void)

{
  return;
}



// ===== continuation @ rva 6ce25aa (image 186ce25aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce25aa(void)

{
  FUN_190ddce00();
  (*_DAT_180a26158)();
  return;
}



// ===== continuation @ rva 6ce2662 (image 186ce2662) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce2662(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack00000000000000a8;
  
  uStack0000000000000048 = 0x5623fb450543;
  uStack00000000000000a8 = in_stack_00000040;
  (*_DAT_180a25af8)(_DAT_1831657a8);
  return;
}



// ===== continuation @ rva 6ce5474 (image 186ce5474) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ce5474(void)

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



// ===== continuation @ rva 6ce506b (image 186ce506b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce506b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a25c78)();
  return;
}



// ===== continuation @ rva 6ce4f0f (image 186ce4f0f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce4f0f(void)

{
  FUN_190dd72e0();
  (*_DAT_180a26008)();
  return;
}



// ===== continuation @ rva 6ce5dd4 (image 186ce5dd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce5dd4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a25db8)();
  return;
}



// ===== continuation @ rva 6ce4de3 (image 186ce4de3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce4de3(void)

{
  (*_DAT_180a25ef8)();
  return;
}



// ===== continuation @ rva 6ce522b (image 186ce522b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce522b(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a25a38)();
  return;
}



// ===== continuation @ rva 6ce4d77 (image 186ce4d77) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce4d77(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_180a25a78)();
  return;
}



// ===== continuation @ rva 6ce5fc5 (image 186ce5fc5) =====

void FUN_186ce5fc5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6ce525c (image 186ce525c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ce525c(void)

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



// ===== continuation @ rva 6ce6250 (image 186ce6250) =====

void FUN_186ce6250(void)

{
  return;
}



// ===== continuation @ rva 6ce614a (image 186ce614a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce614a(void)

{
  FUN_190ddfc90();
  (*_DAT_180a26aa8)();
  return;
}



// ===== continuation @ rva 6ce6258 (image 186ce6258) =====

void FUN_186ce6258(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6ce617d (image 186ce617d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ce617d(void)

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



// ===== continuation @ rva 6ce620b (image 186ce620b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce620b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_180a26b08)();
  return;
}



// ===== continuation @ rva 6ce61b7 (image 186ce61b7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce61b7(void)

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



// ===== continuation @ rva 6ce6248 (image 186ce6248) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce6248(void)

{
  (*_DAT_180a26ad8)();
  return;
}



// ===== continuation @ rva 6ce61f0 (image 186ce61f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce61f0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a26ab8)();
  return;
}



// ===== continuation @ rva 6ce61a1 (image 186ce61a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ce61a1(void)

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



// ===== continuation @ rva 6ce622d (image 186ce622d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce622d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_180a26ad8)();
    return;
  }
  (*_DAT_180a26ad8)();
  return;
}



// ===== continuation @ rva 6cf0f19 (image 186cf0f19) =====

void FUN_186cf0f19(void)

{
  return;
}



// ===== continuation @ rva 6cecfff (image 186cecfff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cecfff(void)

{
  FUN_190ddce00();
  (*_DAT_180a28f48)();
  return;
}



// ===== continuation @ rva 6cf0e17 (image 186cf0e17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cf0e17(void)

{
  FUN_190dd72e0();
  (*_DAT_180a28f68)();
  return;
}



// ===== continuation @ rva 6cf02e5 (image 186cf02e5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cf02e5(void)

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



// ===== continuation @ rva 6ced1bf (image 186ced1bf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ced1bf(void)

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



// ===== continuation @ rva 6ced16b (image 186ced16b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ced16b(void)

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



// ===== continuation @ rva 6cf0907 (image 186cf0907) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cf0907(void)

{
  FUN_190dd72e0();
  (*_DAT_180a29188)();
  return;
}



// ===== continuation @ rva 6cf09b5 (image 186cf09b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cf09b5(void)

{
  FUN_190de3220();
  (*_DAT_180a29378)();
  return;
}



// ===== continuation @ rva 6cf0a3e (image 186cf0a3e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cf0a3e(void)

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



// ===== continuation @ rva 6cf02c5 (image 186cf02c5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cf02c5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180a28e58)();
  return;
}



// ===== continuation @ rva 6cf0328 (image 186cf0328) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cf0328(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180a28fc8)();
  return;
}



// ===== continuation @ rva 6cf1266 (image 186cf1266) =====

void FUN_186cf1266(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000186cf129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a2a630 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 6cf1213 (image 186cf1213) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186cf1249 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186cf1213(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6d07bbc (image 186d07bbc) =====

void FUN_186d07bbc(void)

{
  return;
}



// ===== continuation @ rva 6d07b33 (image 186d07b33) =====

undefined8 thunk_FUN_186d07987(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 6d077dd (image 186d077dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d077dd(void)

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



// ===== continuation @ rva 6d07d12 (image 186d07d12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d07d12(longlong param_1)

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



// ===== continuation @ rva 6d030b3 (image 186d030b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d030b3(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  ulonglong uVar6;
  ulonglong unaff_R13;
  longlong *unaff_R15;
  uint uVar7;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  uint unaff_XMM10_Da;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  *(undefined2 *)(unaff_RBP + 0x1e) = *(undefined2 *)(unaff_RBP + 0x60);
  lVar10 = unaff_RBP + 0x1e;
  (**(code **)(*unaff_R15 + 0x688))();
  uVar1 = *(uint *)(unaff_RBP + -4);
  uVar3 = uVar1 ^ unaff_R13;
  lVar2 = (ulonglong)((uint)_DAT_183166aa0 & (uint)uVar3) * 2;
  uVar4 = (~_DAT_1831668c8 + 2) * ((_DAT_183166aa0 ^ uVar3) + lVar2);
  uVar6 = (uVar4 | _DAT_1831665a8) + (uVar4 & _DAT_1831665a8);
  uVar4 = uVar6 * 0x2000 ^ uVar6;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar5 = uVar3 ^ 1 | uVar4;
  _DAT_183166ad0 =
       func_0x000186d1b760(uVar5 + ((uint)(uVar3 ^ 1) & (uint)uVar4),uVar5,uVar6,lVar2,lVar10);
  uVar9 = uVar1 & unaff_XMM10_Da;
  uVar8 = uVar1 | unaff_XMM10_Da;
  uVar7 = uVar1 ^ unaff_XMM10_Da;
  uVar4 = _DAT_183166ad0 << 0x11 | _DAT_183166ad0 >> 0x2f;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4) & 0xfffffffffffffffe;
  uVar3 = ((ulonglong)uVar7 * (ulonglong)_DAT_180a2b250 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_180a2b240 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_180a2b230 << 0x20) +
          (ulonglong)uVar8 * (ulonglong)_DAT_180a2b220 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_180a2b210 << 0x20 |
          (ulonglong)uVar9 * (ulonglong)_DAT_180a2b200) +
          ((ulonglong)uVar1 * (ulonglong)_DAT_180a2b1f0 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)unaff_XMM7_Da +
          (-(((ulonglong)(uVar1 ^ unaff_XMM6_Da) * (ulonglong)_DAT_180a2b310 + _DAT_180a2b320 <<
             0x20) + (ulonglong)(uVar1 ^ unaff_XMM6_Da) * (ulonglong)_DAT_180a2b300) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_180a2b2f0 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180a2b2e0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_180a2b2d0 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180a2b2c0 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_180a2b2b0 << 0x20 |
          (ulonglong)uVar9 * (ulonglong)_DAT_180a2b2a0) +
          ((ulonglong)(uVar1 * _DAT_180a2b290) << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_180a2b280)) + 0x110596560e1fae68;
  _DAT_1831667a0 = _DAT_183166358 ^ uVar4 ^ uVar3;
  _DAT_183166510 = (_DAT_183166510 ^ uVar4) + uVar3 ^ 0x2478233867a3abf8;
  _DAT_183166610 = (_DAT_183166610 * 0x7c065044d12058ed ^ _DAT_183166510) + uVar4;
  _DAT_1831663b0 = _DAT_183166610 ^ _DAT_183166510;
  _DAT_1831665c0 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x50) = (int)uVar3;
  *(int *)(unaff_RBP + 0x58) = *(int *)(unaff_RBP + -0xc);
  switch((int)uVar3 < *(int *)(unaff_RBP + -0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6d07b76 (image 186d07b76) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d07b76(void)

{
  char cVar1;
  longlong *unaff_R15;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva 6d078c7 (image 186d078c7) =====

undefined8 thunk_FUN_186cf124c(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva 6d07ae9 (image 186d07ae9) =====

undefined8 thunk_FUN_186cf124c(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva 6cf1470 (image 186cf1470) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cf1470(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong in_R9;
  ulonglong unaff_R12;
  uint unaff_R13D;
  ulonglong unaff_R15;
  ulonglong uVar2;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  
  uVar1 = (~_DAT_183166318 + 0xaa) *
          ((_DAT_183166a80 ^ 0x842223d0) + (ulonglong)((uint)_DAT_183166a80 & 0x842223d0) * 2);
  uVar1 = (uVar1 | _DAT_183166570) + (uVar1 & _DAT_183166570);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831666f0 = func_0x000186d1b760((uVar1 | 0x84222379) + (ulonglong)((uint)uVar1 & 0x84222379))
  ;
  _DAT_183166840 = (_DAT_183166840 ^ _DAT_1831666f0) + 0xfd ^ 0xc7c4497bc683e8e7;
  _DAT_183166470 = (_DAT_183166470 * 0x1806b1bea639a0df ^ _DAT_183166840) + _DAT_1831666f0;
  _DAT_183166530 = _DAT_183166470 ^ _DAT_183166840;
  _DAT_183166850 = 0xfd;
  _DAT_183166528 = func_0x000186d1b760(_DAT_183166720 ^ 0xffdcff7be6ffdd24);
  _DAT_183166460 = (_DAT_183166460 ^ _DAT_183166528 ^ 0x2d) + 0xc ^ 0x3afcac2f89763bba;
  _DAT_1831668e8 = (_DAT_1831668e8 * 0x6044dc9109733205 ^ _DAT_183166460) + (_DAT_183166528 ^ 0x2d);
  _DAT_183166648 = _DAT_1831668e8 ^ _DAT_183166460;
  _DAT_183166638 = 0xc;
  _DAT_183166340 = func_0x000186d1b760(_DAT_183166898 + 0x21008495ffddff ^ 0x55);
  uVar1 = (_DAT_183166340 << 6 | _DAT_183166340 >> 0x3a) * -0x4d7e15a6b462415f;
  _DAT_183166628 = _DAT_183166770 ^ uVar1 ^ 0xeb;
  _DAT_1831664c0 = (_DAT_1831664c0 ^ uVar1) + 0xeb ^ 0xfaa8e395dec1fdba;
  _DAT_183166410 = (_DAT_183166410 * -0x2a4a4b3d3066f1bb ^ _DAT_1831664c0) + uVar1;
  _DAT_1831665e8 = _DAT_183166410 ^ _DAT_1831664c0;
  _DAT_183166630 = 0xeb;
  _DAT_1831669d8 = func_0x000186d1b760(_DAT_183166390 ^ 0x1f008485001d6f);
  uVar1 = (_DAT_1831669d8 ^ 0x3f57) << 0x3d | ((_DAT_1831669d8 ^ 0x3f57) & 0x7fffffffffffff) >> 3;
  _DAT_183166768 = _DAT_183166730 ^ uVar1 ^ 0x130;
  _DAT_1831665c0 = (_DAT_1831665c0 ^ uVar1) + 0x130 ^ 0x1723b4c573ddb6a9;
  _DAT_1831666f8 = (_DAT_1831666f8 * -0x75b88a0e7023ffbf ^ _DAT_1831665c0) + uVar1;
  _DAT_183166760 = _DAT_1831666f8 ^ _DAT_1831665c0;
  _DAT_1831664a8 = 0x30;
  uVar1 = (~_DAT_183166668 + 0x43) *
          ((_DAT_183166390 ^ unaff_RDI) + (ulonglong)((uint)_DAT_183166390 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1831669b8) + (uVar1 & _DAT_1831669b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183166838 = func_0x000186d1b760((uVar1 | 0x84222367) + (ulonglong)((uint)uVar1 & 0x84222367))
  ;
  uVar1 = _DAT_183166838 << 7 | _DAT_183166838 >> 0x39;
  _DAT_183166950 = (_DAT_183166950 ^ uVar1) - 0x42 ^ 0x6598c516d78e5348;
  _DAT_1831669d0 = (_DAT_1831669d0 * 0x3a46a5a4cb021965 ^ _DAT_183166950) + uVar1;
  _DAT_1831669b0 = _DAT_1831669d0 ^ _DAT_183166950;
  _DAT_1831666e0 = 0xbe;
  uVar1 = (_DAT_183166628 ^ unaff_XMM6_Qa) + _DAT_1831663f8 + unaff_R15;
  uVar2 = (_DAT_1831663f8 ^ unaff_XMM6_Qb) + _DAT_183166628 + 0x42;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183166628 ^ unaff_XMM6_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831663f8 ^ unaff_XMM6_Qb;
  _DAT_1831669e0 =
       func_0x000186d1b760((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166628 + 0x42) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831663f8 + unaff_R15));
  uVar1 = _DAT_1831669e0 << 0xe | _DAT_1831669e0 >> 0x32 & 0xffffffffffffff00;
  _DAT_1831667b8 = _DAT_1831663f8 ^ uVar1 ^ 0x72;
  _DAT_183166a88 = (_DAT_183166a88 ^ uVar1) + 0x72 ^ 0x5680ef865b0e0ec0;
  _DAT_183166620 = (_DAT_183166620 * 0x2eedd4129a335b9 ^ _DAT_183166a88) + uVar1;
  _DAT_183166390 = _DAT_183166620 ^ _DAT_183166a88;
  _DAT_183166578 = 0x72;
  uVar1 = (~_DAT_183166a18 + 0xbf) *
          ((_DAT_183166a70 ^ 0x84222357) + (ulonglong)((uint)_DAT_183166a70 & 0x84222357) * 2);
  uVar1 = (uVar1 | _DAT_1831663a8) + (uVar1 & _DAT_1831663a8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183166820 = func_0x000186d1b760((uVar1 | 0x842223e9) + (ulonglong)((uint)uVar1 & 0x842223e9))
  ;
  uVar1 = _DAT_183166820 & 0xfffffffffff00000;
  _DAT_183166390 = _DAT_183166880 ^ uVar1 ^ 0x130;
  _DAT_183166670 = (_DAT_183166670 ^ uVar1) + 0x130 ^ 0xd78dabac0f4edfaf;
  _DAT_1831665f0 = (_DAT_1831665f0 * -0x1b02a0e5fa72a7a3 ^ _DAT_183166670) + uVar1;
  _DAT_183166898 = _DAT_1831665f0 ^ _DAT_183166670;
  _DAT_183166340 = 0x30;
  uVar1 = (~_DAT_1831669d0 + 0x57) *
          ((_DAT_183166a78 ^ unaff_R15) + (ulonglong)((uint)_DAT_183166a78 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_183166468) + (uVar1 & _DAT_183166468);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183166838 = func_0x000186d1b760((uVar1 | 0x84222343) + (ulonglong)((uint)uVar1 & 0x84222343))
  ;
  _DAT_183166520 = (_DAT_183166520 ^ _DAT_183166838) + 0x86 ^ 0xcf31ed97df6fe807;
  _DAT_183166750 =
       ((_DAT_1831666d8 ^ _DAT_183166838 ^ 0x86) * -0x744ebeb3bc607dcb ^ _DAT_183166520) +
       _DAT_183166838;
  _DAT_1831663d8 = _DAT_183166750 ^ _DAT_183166520;
  _DAT_1831666f0 = 0x86;
  uVar1 = (~_DAT_183166830 + 0xab) *
          ((_DAT_1831665e0 ^ 0x842223a3) + (ulonglong)((uint)_DAT_1831665e0 & 0x842223a3) * 2);
  uVar1 = (uVar1 | _DAT_183166528) + (uVar1 & _DAT_183166528);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831668c0 = func_0x000186d1b760((uVar1 | 0x84222309) + (ulonglong)((uint)uVar1 & 0x84222309))
  ;
  uVar1 = ((_DAT_1831668c0 ^ 0x86) & 0xfffffffff) << 0x1b | _DAT_1831668c0 >> 0x25;
  _DAT_1831664d8 = _DAT_183166358 ^ uVar1 ^ 0x130;
  _DAT_183166590 = (_DAT_183166590 ^ uVar1) + 0x130 ^ 0xf2b3ff7e1272a84e;
  _DAT_183166450 = (_DAT_183166450 * -0x902a811dc14ce41 ^ _DAT_183166590) + uVar1;
  _DAT_1831669c8 = _DAT_183166450 ^ _DAT_183166590;
  _DAT_1831663a0 = 0x30;
  uVar1 = (_DAT_183166978 ^ unaff_XMM7_Qa) + _DAT_183166448 + unaff_R12;
  uVar2 = (_DAT_183166448 ^ unaff_XMM7_Qb) + _DAT_183166978 + 0xc;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183166978 ^ unaff_XMM7_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166448 ^ unaff_XMM7_Qb;
  _DAT_183166a60 =
       func_0x000186d1b760((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166978 + 0xc) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183166448 + unaff_R12));
  uVar1 = (_DAT_183166a60 ^ 0xfd) << 0xb | _DAT_183166a60 >> 0x35;
  _DAT_1831665d0 = _DAT_183166558 ^ uVar1 ^ 0x109;
  _DAT_1831667c8 = (_DAT_1831667c8 ^ uVar1) + 0x109 ^ 0xec190ca56a502134;
  _DAT_183166900 = (_DAT_183166900 * 0x53be06c7698714a7 ^ _DAT_1831667c8) + uVar1;
  _DAT_183166988 = _DAT_183166900 ^ _DAT_1831667c8;
  _DAT_183166670 = 9;
  uVar1 = (~_DAT_1831666a8 + 0xd) *
          ((_DAT_183166af0 ^ unaff_R12) + (ulonglong)((uint)_DAT_183166af0 & 0x842223d8) * 2);
  uVar1 = (uVar1 | _DAT_183166860) + (uVar1 & _DAT_183166860);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831665b8 = func_0x000186d1b760((uVar1 | 0x842223d4) + (ulonglong)((uint)uVar1 & 0x842223d4))
  ;
  _DAT_183166488 =
       (_DAT_183166488 ^ _DAT_1831665b8 & 0x7fffffffffffffff) + 0xf1 ^ 0xb1034f2049c71d06;
  _DAT_1831667c8 =
       (_DAT_1831667c8 * 0x71044b407d822c2f ^ _DAT_183166488) +
       (_DAT_1831665b8 & 0x7fffffffffffffff);
  _DAT_183166a18 = _DAT_1831667c8 ^ _DAT_183166488;
  _DAT_183166890 = 0xf1;
  _DAT_183166550 = func_0x000186d1b760(_DAT_183166370 ^ 0xffdd007bb3ffe130);
  uVar1 = _DAT_183166550 << 0x20 | (_DAT_183166550 & 0x1ffffffff) >> 0x20;
  _DAT_183166710 = (_DAT_183166710 ^ uVar1) + 0xc ^ 0x76d8e83651c81327;
  _DAT_1831667c0 = (_DAT_1831667c0 * -0x6584c5e80b6dbac7 ^ _DAT_183166710) + uVar1;
  _DAT_1831666e8 = _DAT_1831667c0 ^ _DAT_183166710;
  _DAT_1831664f0 = 0xc;
  _DAT_183166520 = func_0x000186d1b760(_DAT_183166320 + 0x1eff83cbffe1ffU ^ 0x66);
  uVar1 = (_DAT_183166520 ^ 0xf9) << 0x17 | _DAT_183166520 >> 0x29;
  _DAT_183166660 = _DAT_183166720 ^ uVar1 ^ 0x109;
  _DAT_1831664f0 = (_DAT_1831664f0 ^ uVar1) + 0x109 ^ 0xdbcda0dd8934336f;
  _DAT_1831666c8 = (_DAT_1831666c8 * 0x208b0f23eaa5dbd3 ^ _DAT_1831664f0) + uVar1;
  _DAT_183166458 = _DAT_1831666c8 ^ _DAT_1831664f0;
  _DAT_1831667f0 = 9;
  _DAT_183166a00 = func_0x000186d1b760(_DAT_183166928 + 0xffe0ff7be50021ffU ^ 0x8c);
  _DAT_183166358 = _DAT_183166a10;
  _DAT_1831667b0 = _DAT_1831667b0 ^ _DAT_183166a10 ^ 0x88ff0767c83151e7;
  _DAT_183166558 = (_DAT_183166558 * 0x1401e413ad5d7b61 ^ _DAT_1831667b0) + _DAT_183166a10;
  _DAT_183166af0 = _DAT_183166558 ^ _DAT_1831667b0;
  _DAT_183166728 = 0;
  uVar1 = ((_DAT_183166770 ^ unaff_R15) + (ulonglong)((uint)_DAT_183166770 & 0x84222315) * 2) *
          -_DAT_183166648;
  uVar1 = (uVar1 | _DAT_183166380) + (uVar1 & _DAT_183166380);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183166590 = func_0x000186d1b760((uVar1 | unaff_R15) + (ulonglong)((uint)uVar1 & 0x84222315));
  _DAT_183166a18 = _DAT_183166ac8 ^ _DAT_183166590 ^ 0x30;
  _DAT_183166940 = (_DAT_183166940 ^ _DAT_183166590) + 0x30 ^ 0x77577ead5e00fc40;
  _DAT_183166a38 = (_DAT_183166a38 * -0x575bdeec22cfc1af ^ _DAT_183166940) + _DAT_183166590;
  _DAT_183166470 = _DAT_183166a38 ^ _DAT_183166940;
  _DAT_183166a58 = 0x30;
  uVar1 = (~_DAT_183166438 + 3) *
          ((_DAT_1831669f0 ^ unaff_R12) + (ulonglong)((uint)_DAT_1831669f0 & 0x842223d8) * 2);
  uVar1 = (uVar1 | _DAT_183166818) + (uVar1 & _DAT_183166818);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183166490 = func_0x000186d1b760((uVar1 | 0x842223da) + (ulonglong)((uint)uVar1 & 0x842223da))
  ;
  _DAT_183166550 = _DAT_183166550 ^ _DAT_183166490 ^ 0x1ea338e2bc7f374c;
  _DAT_183166a48 = (_DAT_183166a48 * 0x6e1dd6c123ad7157 ^ _DAT_183166550) + _DAT_183166490;
  _DAT_1831663b0 = _DAT_183166a48 ^ _DAT_183166550;
  _DAT_1831664e8 = 0;
  uVar1 = (_DAT_1831666a0 ^ unaff_R15) + _DAT_1831664d8 + unaff_R15;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831666a0 ^ unaff_R15;
  uVar2 = ((_DAT_1831664d8 + _DAT_1831666a0) * 0x2000 | _DAT_1831664d8 + _DAT_1831666a0 >> 0x33) ^
          _DAT_1831664d8;
  uVar1 = func_0x000186d1b760((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1831666a0 ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831664d8 + unaff_R15));
  uVar2 = uVar1 & 0xfffffffffffffffe;
  _DAT_1831669a8 = _DAT_1831664a8 ^ uVar2 ^ 0x30;
  _DAT_183166990 = (uVar1 ^ uVar2) + 0x30 ^ 0x39a80175392e7309;
  _DAT_1831665f8 = (_DAT_1831665f8 * 0x25f3c31511de9f0d ^ _DAT_183166990) + uVar2;
  _DAT_183166540 = _DAT_1831665f8 ^ _DAT_183166990;
  _DAT_1831669d8 = 0x30;
  _DAT_183166598 = func_0x000186d1b760(_DAT_1831669b8 ^ 0xffe1007c250021bd);
  uVar1 = _DAT_183166598 & 0x7fffffffffffffff ^ 0xf5;
  _DAT_183166490 = _DAT_183166490 ^ uVar1 ^ 0x9bca1649f940f763;
  _DAT_183166520 = (_DAT_183166520 * 0x472cd0d735df73d9 ^ _DAT_183166490) + uVar1;
  _DAT_1831663f8 = _DAT_183166520 ^ _DAT_183166490;
  _DAT_183166348 = 0;
  uVar2 = (ulonglong)(unaff_R13D + (uint)((ulonglong)unaff_R13D * in_R9 >> 0x23) * -10 & 0xff);
  uVar1 = (~_DAT_183166440 + 0x31) *
          ((uVar2 ^ unaff_RDI ^ _DAT_183166660) +
          (ulonglong)((uint)_DAT_183166660 & (uint)(uVar2 ^ unaff_RDI)) * 2);
  uVar1 = (uVar1 | _DAT_183166510) + (uVar1 & _DAT_183166510);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183166720 =
       func_0x000186d1b760((uVar2 ^ unaff_R15 | uVar1) +
                           (ulonglong)((uint)(uVar2 ^ unaff_R15) & (uint)uVar1));
  _DAT_183166668 = uVar2 | 0x30;
  _DAT_183166a90 = (_DAT_183166a90 ^ uVar2 ^ _DAT_183166720) + _DAT_183166668 ^ 0xd31ecddfde450940;
  _DAT_183166978 =
       (_DAT_183166978 * -0x4dfddd252c78bdbd ^ _DAT_183166a90) + (uVar2 ^ _DAT_183166720);
  _DAT_183166a20 = _DAT_183166978 ^ _DAT_183166a90;
  *(char *)(unaff_RBP + -0x51 + in_RAX) = (char)_DAT_183166668;
  switch(unaff_R13D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6cf255a (image 186cf255a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cf255a(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  ulonglong unaff_R14;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  uVar2 = (~_DAT_1831669e8 + 0x891f235230a82e61) *
          ((_DAT_1831665b0 ^ 0xe4fe1e6f827670b0) + (_DAT_1831665b0 & 0x64fe1e6f827670b0) * 2);
  uVar2 = (uVar2 | _DAT_1831666c8) + (uVar2 & _DAT_1831666c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166338 = func_0x000186d1b760((uVar2 | 0x6de13d3db2de5ed0) + (uVar2 & 0x6de13d3db2de5ed0));
  uVar2 = (_DAT_183166338 ^ 0xbd4a7882506c1de0) & 0x7fffffffffffffff;
  _DAT_1831663d8 = (_DAT_1831663d8 ^ uVar2) + 0xedff3f7f36fc7ff5 ^ 0x6eb290a34da7e3b;
  _DAT_183166580 = (_DAT_183166580 * -0x57f52f132e9b9b9f ^ _DAT_1831663d8) + uVar2;
  _DAT_1831669d0 = _DAT_183166580 ^ _DAT_1831663d8;
  _DAT_183166358 = 0xedff3f7f36fc7ff5;
  uVar2 = (~_DAT_183166428 + 0x27fef81d8405945f) *
          ((_DAT_1831663b8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831663b8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_1831663d8) + (uVar2 & _DAT_1831663d8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166900 = func_0x000186d1b760((uVar2 | 0x27fef81d0027b77b) + (uVar2 & 0x27fef81d0027b77b));
  uVar2 = _DAT_183166900 * -0x63ab0bb8d90c09dd << 0x28 |
          _DAT_183166900 * -0x63ab0bb8d90c09dd >> 0x18;
  _DAT_183166378 = (_DAT_183166378 ^ uVar2) + 0xd80107e27bfa6ba2 ^ 0xde4b77a63d39c417;
  _DAT_183166948 = (_DAT_183166948 * 0xd185ebc4d54edeb ^ _DAT_183166378) + uVar2;
  _DAT_1831665f0 = _DAT_183166948 ^ _DAT_183166378;
  _DAT_183166670 = 0xd80107e27bfa6ba2;
  uVar2 = (_DAT_183166740 ^ _DAT_180a2b380) + (_DAT_1831664b0 - 0x84222325);
  uVar6 = (_DAT_1831664b0 ^ _UNK_180a2b388) + _DAT_183166740 + 0x27fef81d8405945e;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166740 ^ _DAT_180a2b380;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831664b0 ^ _UNK_180a2b388;
  _DAT_183166458 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183166740 + 0x27fef81d8405945e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831664b0 - 0x84222325));
  uVar2 = _DAT_183166458 >> 1 | _DAT_183166458;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ~((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           _DAT_183166458) & 0xfffffffffffffffe;
  _DAT_183166af0 = _DAT_183166980 ^ uVar2 ^ 0x27fef81d8405945c;
  _DAT_1831663f8 = (_DAT_1831663f8 ^ uVar2) + 0x27fef81d8405945c ^ 0x612c41877747f6de;
  _DAT_1831667f8 = (_DAT_1831667f8 * -0x7a4aa500d06640eb ^ _DAT_1831663f8) + uVar2;
  _DAT_183166a80 = _DAT_1831667f8 ^ _DAT_1831663f8;
  _DAT_183166778 = 0x27fef81d8405945c;
  uVar2 = (_DAT_183166418 ^ _DAT_180a2b390) + _DAT_183166a68 + 0x27fef81d0027b779;
  uVar6 = (_DAT_183166a68 ^ _UNK_180a2b398) + _DAT_183166418 + 0xd80107e27bfa6ba2;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166418 ^ _DAT_180a2b390;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183166a68 ^ _UNK_180a2b398;
  _DAT_1831668a0 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183166418 + 0xd80107e27bfa6ba2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166a68 + 0x27fef81d0027b779));
  uVar2 = _DAT_1831668a0 ^ 0x27fef81d8405945c;
  _DAT_183166a70 = _DAT_183166a70 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_183166a58 = (_DAT_183166a58 ^ uVar2) - 2 ^ 0xb8ad2e69c3f56e99;
  _DAT_183166ad8 = (_DAT_183166ad8 * 0x5e09939dad64ad23 ^ _DAT_183166a58) + uVar2;
  _DAT_183166350 = _DAT_183166ad8 ^ _DAT_183166a58;
  _DAT_1831666b8 = 0xfffffffffffffffe;
  _DAT_1831663e0 = func_0x000186d1b760(_DAT_183166618 ^ 0xdf2d488434e2f681);
  _DAT_183166580 = (_DAT_183166580 ^ 0x400) + 0x6187da1effd48b10 ^ 0x2f48791147f4a35e;
  _DAT_183166758 = (_DAT_183166758 * -0x6b87c944dd00af1b ^ _DAT_183166580) + 0x400;
  _DAT_183166780 = _DAT_183166758 ^ _DAT_183166580;
  _DAT_1831665a0 = 0x6187da1effd48b10;
  _DAT_183166928 = func_0x000186d1b760(_DAT_183166770 ^ 0x1e6886c719da7544);
  uVar2 = _DAT_183166928 ^ 0xfffffffffffffffe;
  _DAT_183166568 = _DAT_1831664c8 ^ uVar2 ^ 0x9e7825e1002b74ee;
  _DAT_183166458 = (_DAT_183166458 ^ uVar2) + 0x9e7825e1002b74ee ^ 0x71ec9d0e00204b6a;
  _DAT_183166aa8 = (_DAT_183166aa8 * -0x4f137902877da5b5 ^ _DAT_183166458) + uVar2;
  _DAT_1831664b0 = _DAT_183166aa8 ^ _DAT_183166458;
  _DAT_183166670 = 0x9e7825e1002b74ee;
  uVar2 = (~_DAT_183166888 + 0xa7c6efe705355a90) *
          ((_DAT_183166608 ^ 0x84222325) + (ulonglong)((uint)_DAT_183166608 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183166608) + (uVar2 & _DAT_183166608);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166638 = func_0x000186d1b760((uVar2 | 0xa7c6efe7811779aa) + (uVar2 & 0xa7c6efe7811779aa));
  uVar2 = _DAT_183166638 >> 1 | _DAT_183166638;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_183166638;
  _DAT_1831663c0 = (_DAT_1831663c0 ^ uVar2) + 0x58391018facaa571 ^ 0x4af7d9e076b6a99d;
  _DAT_183166940 = (_DAT_183166940 * -0x6fabef1e6ddbb3d9 ^ _DAT_1831663c0) + uVar2;
  _DAT_183166560 = _DAT_183166940 ^ _DAT_1831663c0;
  _DAT_183166918 = 0x58391018facaa571;
  uVar2 = (_DAT_183166a38 ^ _DAT_180a2b3a0) + (_DAT_1831668b8 - 0x84222325);
  uVar6 = (_DAT_1831668b8 ^ _UNK_180a2b3a8) + _DAT_183166a38 + 0xa7c6efe705355a8f;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166a38 ^ _DAT_180a2b3a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831668b8 ^ _UNK_180a2b3a8;
  _DAT_183166a20 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183166a38 + 0xa7c6efe705355a8f) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831668b8 - 0x84222325));
  uVar2 = (_DAT_183166a20 << 0x39 | _DAT_183166a20 >> 7) ^ 0xfffffffffffffffe;
  _DAT_183166488 = _DAT_183166308 ^ uVar2 ^ 0xa7c6efe705355a8d;
  _DAT_183166310 = (_DAT_183166310 ^ uVar2) + 0xa7c6efe705355a8d ^ 0x75231c2d588f55b3;
  _DAT_183166738 = (_DAT_183166738 * 0x9f2ffb05a04bbd1 ^ _DAT_183166310) + uVar2;
  _DAT_183166400 = _DAT_183166738 ^ _DAT_183166310;
  _DAT_183166338 = 0xa7c6efe705355a8d;
  uVar2 = (~_DAT_183166550 + 0x58391018facaa572) *
          ((_DAT_1831663c0 ^ 0xa7c6efe7811779a8) + (_DAT_1831663c0 & 0x27c6efe7811779a8) * 2);
  uVar2 = (uVar2 | _DAT_1831663e8) + (uVar2 & _DAT_1831663e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166aa8 = func_0x000186d1b760((uVar2 | 0xffffffff7bdddcd9) + (uVar2 & 0xffffffff7bdddcd9));
  uVar6 = _UNK_180a2b3b8;
  uVar2 = _DAT_180a2b3b0;
  _DAT_183166800 = _DAT_183166968 ^ _DAT_183166aa8 ^ 0xfffffffffffffffe;
  _DAT_183166a10 = (_DAT_183166a10 ^ _DAT_183166aa8) - 2 ^ 0x40c1d7be4e7d51e8;
  _DAT_183166720 = (_DAT_183166720 * -0x3cdfaf695cf087a5 ^ _DAT_183166a10) + _DAT_183166aa8;
  _DAT_1831668e0 = _DAT_183166720 ^ _DAT_183166a10;
  _DAT_183166698 = 0xfffffffffffffffe;
  uVar5 = (_DAT_1831668f0 ^ _DAT_180a2b3b0) + _DAT_183166380 + 0xedff3f7fb2de5cd0;
  uVar7 = (_DAT_183166380 ^ _UNK_180a2b3b8) + _DAT_1831668f0 + 0xf908be00251efef4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831668f0 ^ _DAT_180a2b3b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183166380 ^ _UNK_180a2b3b8;
  _DAT_183166810 =
       func_0x000186d1b760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831668f0 + 0xf908be00251efef4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183166380 + 0xedff3f7fb2de5cd0));
  uVar5 = ~_DAT_183166810 & 0xedff3f7f36fc7ff5;
  _DAT_183166968 = _DAT_1831663d0 ^ uVar5 ^ 0xe707fd7f5c1b7ee9;
  _DAT_1831666b8 = (_DAT_1831666b8 ^ uVar5) + 0xe707fd7f5c1b7ee9 ^ 0xdd616598b6deda9e;
  _DAT_183166848 = (_DAT_183166848 * 0x3189c12915d08c23 ^ _DAT_1831666b8) + uVar5;
  _DAT_1831667a8 = _DAT_183166848 ^ _DAT_1831666b8;
  _DAT_183166890 = 0xe707fd7f5c1b7ee9;
  uVar5 = (_DAT_1831668c8 ^ uVar2) + _DAT_1831663a8 + 0xedff3f7fb2de5cd0;
  uVar7 = (_DAT_1831663a8 ^ uVar6) + _DAT_1831668c8 + 0xf908be00251efef4;
  uVar2 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831668c8 ^ uVar2;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831663a8 ^ uVar6;
  _DAT_1831668b0 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831668c8 + 0xf908be00251efef4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831663a8 + 0xedff3f7fb2de5cd0));
  _DAT_183166398 =
       (_DAT_183166398 ^ _DAT_1831668b0 ^ 0xedff3f7f36fc7ff5) + 0x14f7817f13e28101 ^
       0xe33e0d9332ca023a;
  _DAT_183166880 =
       (_DAT_183166880 * 0x76bd78f935d01e31 ^ _DAT_183166398) +
       (_DAT_1831668b0 ^ 0xedff3f7f36fc7ff5);
  _DAT_183166af8 = _DAT_183166880 ^ _DAT_183166398;
  _DAT_183166328 = 0x14f7817f13e28101;
  uVar2 = (~_DAT_183166a40 + 0xf908be00251efef5) *
          ((_DAT_183166378 ^ 0xedff3f7fb2de5cd0) + (_DAT_183166378 & 0x6dff3f7fb2de5cd0) * 2);
  uVar2 = (uVar2 | _DAT_183166538) + (uVar2 & _DAT_183166538);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831667c0 = func_0x000186d1b760((uVar2 | 0x14f7817f97c0a224) + (uVar2 & 0x14f7817f97c0a224));
  _DAT_1831663f8 = (_DAT_1831663f8 ^ _DAT_1831667c0) + 0xe9083e00241c7ef4 ^ 0x29c6efe871f04f82;
  _DAT_1831665f8 = (_DAT_1831665f8 * -0x45ba3708b6d8d73b ^ _DAT_1831663f8) + _DAT_1831667c0;
  _DAT_183166918 = _DAT_1831665f8 ^ _DAT_1831663f8;
  _DAT_183166440 = 0xe9083e00241c7ef4;
  uVar2 = (~_DAT_1831667d8 + 0xd2107c004838fde9) *
          ((_DAT_183166750 ^ 0x14f7817f97c0a224) + (_DAT_183166750 & 0x14f7817f97c0a224) * 2);
  uVar2 = (uVar2 | _DAT_1831667b8) + (uVar2 & _DAT_1831667b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166538 = func_0x000186d1b760((uVar2 | 0xc6e7fd7fdff85fcc) + (uVar2 & 0xc6e7fd7fdff85fcc));
  _DAT_183166310 = _DAT_183166890 ^ _DAT_183166538 ^ 0xe707fd7f5c1b7ee9;
  _DAT_1831667f0 = (_DAT_1831667f0 ^ _DAT_183166538) + 0xe707fd7f5c1b7ee9 ^ 0xe27ce80f97d082b4;
  _DAT_183166308 = (_DAT_183166308 * -0x533dc69b878a43c7 ^ _DAT_1831667f0) + _DAT_183166538;
  _DAT_183166808 = _DAT_183166308 ^ _DAT_1831667f0;
  _DAT_1831666b8 = -0x18f80280a3e48117;
  _DAT_1831664f0 = func_0x000186d1b760(_DAT_1831666e0 ^ 0x1d007c24ffdd0b);
  uVar2 = _DAT_1831664f0 - (_DAT_1831664f0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_183166780 =
       (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
       _DAT_1831664f0;
  _DAT_183166938 = _DAT_183166938 ^ _DAT_183166780 ^ 0xe8b37064490df0a6;
  _DAT_183166518 =
       (_DAT_183166368 * 0x40896275e98f35eb ^ _DAT_183166938) + _DAT_183166780 ^ _DAT_183166938;
  _DAT_183166368 = 0;
  uVar2 = ((_DAT_183166590 ^ 0xffffffff7bdddcdb) + (_DAT_183166590 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_1831664b8;
  uVar2 = (uVar2 | _DAT_183166820) + (uVar2 & _DAT_183166820);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831669f8 = func_0x000186d1b760((uVar2 | 0xffffffff7bdddcdb) + (uVar2 & 0xffffffff7bdddcdb));
  _DAT_1831668d8 = _DAT_183166348 ^ _DAT_1831669f8 ^ 0xfffffffffffffffe;
  _DAT_1831666a0 = (_DAT_1831666a0 ^ _DAT_1831669f8) - 2 ^ 0xc4c37446e64a3feb;
  _DAT_183166ab0 = (_DAT_183166ab0 * -0x7b42004a0ddf3e37 ^ _DAT_1831666a0) + _DAT_1831669f8;
  _DAT_183166458 = _DAT_183166ab0 ^ _DAT_1831666a0;
  _DAT_183166808 = 0xfffffffffffffffe;
  uVar2 = (_DAT_183166870 ^ _DAT_180a2b3c0) + _DAT_183166800 + 0xedff3f7fb2de5cd0;
  uVar6 = (_DAT_183166800 ^ _UNK_180a2b3c8) + (_DAT_183166870 - 1);
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166870 ^ _DAT_180a2b3c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183166800 ^ _UNK_180a2b3c8;
  _DAT_1831666a8 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183166870 - 1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166800 + 0xedff3f7fb2de5cd0));
  uVar6 = _DAT_1831666a8 ^ 0x1200c080c903800b;
  uVar2 = uVar6 >> 1 | uVar6;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar6;
  _DAT_183166aa8 = (_DAT_183166aa8 ^ uVar6) + 0x1200c080c903800a ^ 0x56278e42800f12bc;
  _DAT_183166378 = (_DAT_183166378 * -0x198477f4e022663d ^ _DAT_183166aa8) + uVar6;
  _DAT_183166af8 = _DAT_183166378 ^ _DAT_183166aa8;
  _DAT_1831669e0 = 0x1200c080c903800a;
  uVar2 = func_0x000186d1b760(_DAT_183166678 + 0x9adbfd4b2a18a366 ^ 0xc);
  uVar2 = uVar2 & 0xfffffffffffff800;
  _DAT_183166768 = _DAT_183166910 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_1831666e8 = (_DAT_1831666e8 ^ uVar2) - 2 ^ 0x45914f638eadac30;
  _DAT_183166738 = (_DAT_183166738 * -0x345468e2c615793d ^ _DAT_1831666e8) + uVar2;
  _DAT_1831663e8 = _DAT_183166738 ^ _DAT_1831666e8;
  _DAT_183166a88 = 0xfffffffffffffffe;
  uVar2 = (~_DAT_1831666a0 + 0xe4fe1e6f06545396) *
          ((_DAT_183166a38 ^ 0xe4fe1e6f827670b0) + (_DAT_183166a38 & 0x64fe1e6f827670b0) * 2);
  uVar2 = (uVar2 | _DAT_183166448) + (uVar2 & _DAT_183166448);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166458 = func_0x000186d1b760((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_183166a60 = _DAT_183166a60 ^ _DAT_183166458 & 0x7fffffffffffffff ^ 0x751fe6fbc257f5d4;
  _DAT_183166920 =
       (_DAT_183166920 * -0x352dc46679a7c5c7 ^ _DAT_183166a60) +
       (_DAT_183166458 & 0x7fffffffffffffff);
  _DAT_183166930 = _DAT_183166920 ^ _DAT_183166a60;
  _DAT_1831668f0 = 0;
  uVar2 = (_DAT_183166340 ^ 0xffffffff7bdddcdb) + (_DAT_183166a70 - 0x84222325);
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166340 ^ 0xffffffff7bdddcdb;
  uVar6 = ((_DAT_183166a70 + _DAT_183166340) * 0x2000 | _DAT_183166a70 + _DAT_183166340 >> 0x33) ^
          _DAT_183166a70;
  _DAT_183166570 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183166340 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166a70 - 0x84222325));
  uVar2 = (_DAT_183166570 ^ 0xfffffffffffffffe) * -0x3816dfc2666827a5 & 0xfffffffffffc0000;
  _DAT_183166ad8 = _DAT_183166558 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_183166300 = (_DAT_183166300 ^ uVar2) - 2 ^ 0x71ab95c0e2bc24be;
  _DAT_183166930 = (_DAT_183166930 * 0x6faa036f9d6097bf ^ _DAT_183166300) + uVar2;
  _DAT_183166490 = _DAT_183166930 ^ _DAT_183166300;
  _DAT_183166678 = 0xfffffffffffffffe;
  uVar2 = (~_DAT_1831667e8 - 1) *
          ((unaff_R14 ^ 0x84222325 ^ _DAT_1831667e8) +
          ((unaff_R14 ^ 0x84222325) & _DAT_1831667e8) * 2);
  uVar2 = (uVar2 | _DAT_183166788) + (uVar2 & _DAT_183166788);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166510 =
       func_0x000186d1b760((unaff_R14 ^ 0xffffffff7bdddcdb | uVar2) +
                           (uVar2 & (unaff_R14 ^ 0xffffffff7bdddcdb)));
  uVar4 = (uint)(unaff_R14 >> 0x20);
  auVar10._8_4_ = (uint)unaff_R14;
  auVar10._0_8_ = unaff_R14;
  auVar10._12_4_ = uVar4;
  uVar3 = (uint)unaff_R14 | (uint)DAT_1800b8c60;
  uVar9 = SUB164(auVar10 & _DAT_1800b8c60,0);
  uVar5 = SUB168(auVar10 & _DAT_1800b8c60,0);
  uVar8 = SUB164(_DAT_1800b8c60 ^ auVar10,0);
  uVar6 = SUB168(_DAT_1800b8c60 ^ auVar10,0);
  uVar2 = ((_DAT_183166510 << 4 | _DAT_183166510 >> 0x3c) ^ 0xfffffffffffffffe) & 0x7fffffffffffffff
  ;
  uVar5 = (((ulonglong)_DAT_180a2b440 * (ulonglong)uVar8 +
            ((ulonglong)_DAT_180a2b450 * (ulonglong)uVar8 +
             (uVar6 >> 0x20) * (ulonglong)_DAT_180a2b440 << 0x20) +
            ((ulonglong)_DAT_180a2b420 * (ulonglong)uVar3 + _DAT_180a2b430 << 0x20) +
            (ulonglong)_DAT_180a2b410 * (ulonglong)uVar3 +
           (ulonglong)_DAT_180a2b3f0 * (ulonglong)uVar9 +
           ((ulonglong)_DAT_180a2b400 * (ulonglong)uVar9 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_180a2b3f0 << 0x20) +
           ((ulonglong)_DAT_180a2b3e0 * (unaff_R14 & 0xffffffff) +
            (ulonglong)_DAT_180a2b3d0 * (ulonglong)uVar4 << 0x20) +
           (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a2b3d0) -
          ((ulonglong)uVar8 * (_DAT_180a2b4f0 & 0xffffffff) +
           ((ulonglong)_DAT_180a2b500 * (ulonglong)uVar8 +
            (uVar6 >> 0x20) * (_DAT_180a2b4f0 & 0xffffffff) << 0x20) +
           ((ulonglong)uVar3 * (ulonglong)_DAT_180a2b4d0 + _DAT_180a2b4e0 << 0x20) +
           (ulonglong)_DAT_180a2b4c0 * (ulonglong)uVar3 +
          (ulonglong)uVar9 * (ulonglong)_DAT_180a2b4a0 +
          ((ulonglong)_DAT_180a2b4b0 * (ulonglong)uVar9 +
           (uVar5 >> 0x20) * (ulonglong)_DAT_180a2b4a0 << 0x20) +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a2b490 +
           (ulonglong)uVar4 * (ulonglong)_DAT_180a2b480 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180a2b480)) + 0x76654243d7118b50;
  _DAT_183166678 = _DAT_183166858 ^ uVar2 ^ uVar5;
  _DAT_183166588 = (_DAT_183166588 ^ uVar2) + uVar5 ^ 0x9d281724a8475b6e;
  _DAT_1831667c8 = (_DAT_1831667c8 * 0x6072269ec98089c1 ^ _DAT_183166588) + uVar2;
  _DAT_183166958 = _DAT_1831667c8 ^ _DAT_183166588;
  _DAT_183166738 = uVar5;
  *(ulonglong *)(unaff_RBP + 0x20) = uVar5 + unaff_RBP + -0x50;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar5) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar2 = func_0x000186d1b760(_DAT_183166950 + 0xca3a73939777c ^ 0x6d);
  _DAT_183166838 =
       (_DAT_183166838 ^ uVar2 ^ 0x5200c00a4080b02) + 0xf5a45f57fffb5fe7 ^ 0x4e9ab9363031a796;
  _DAT_1831664b0 =
       (_DAT_1831664b0 * 0x307614d78c42d84b ^ _DAT_183166838) + (uVar2 ^ 0x5200c00a4080b02);
  _DAT_183166888 = _DAT_1831664b0 ^ _DAT_183166838;
  _DAT_183166a48 = 0xf5a45f57fffb5fe7;
  uVar2 = (~_DAT_183166638 + 0x7f1481d05b84a6c7) *
          ((_DAT_183166a38 ^ 0x4f0bed7e37d52c31) + (_DAT_183166a38 & 0x4f0bed7e37d52c31) * 2);
  uVar2 = (uVar2 | _DAT_183166668) + (uVar2 & _DAT_183166668);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831669e0 = func_0x000186d1b760((uVar2 | 0x301f6cae6c518af7) + (uVar2 & 0x301f6cae6c518af7));
  _DAT_183166928 =
       (_DAT_183166928 ^ _DAT_1831669e0 & 0x3fffffffffff) + 0x301f6caee873a9d2 ^ 0xe1c03e74406878c5;
  _DAT_183166540 =
       (_DAT_183166540 * 0x73a7db9efb57a43f ^ _DAT_183166928) + (_DAT_1831669e0 & 0x3fffffffffff);
  _DAT_183166388 = _DAT_183166540 ^ _DAT_183166928;
  _DAT_183166720 = 0x301f6caee873a9d2;
  uVar2 = (~_DAT_183166458 + 0x104712930c391b8) *
          ((_DAT_183166618 ^ 0x84222325) + (ulonglong)((uint)_DAT_183166618 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183166430) + (uVar2 & _DAT_183166430);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166958 = func_0x000186d1b760((uVar2 | 0x1047129b4e1b292) + (uVar2 & 0x1047129b4e1b292));
  _DAT_183166860 = _DAT_183166860 + 0xfefb8ed6cf3c6e49 ^ 0x94afc907249c28e7;
  _DAT_183166ac0 = _DAT_1831663c0 * -0x749218b626d7f19;
  _DAT_1831663c0 = _DAT_183166ac0 ^ _DAT_183166860;
  _DAT_183166a20 = 0xfefb8ed6cf3c6e49;
  _DAT_183166870 = func_0x000186d1b760(_DAT_183166368 + 0xe891fbab82cedf00 ^ 0x26);
  uVar2 = _DAT_183166870 - (_DAT_183166870 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183166870;
  uVar2 = uVar6 >> 1 | uVar6;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar6;
  _DAT_183166800 = _DAT_183166768 ^ uVar6 ^ 0x104712930c391cc;
  _DAT_183166728 = (_DAT_183166728 ^ uVar6) + 0x104712930c391cc ^ 0x17a61b8c363e8bd5;
  _DAT_183166720 = (_DAT_183166720 * -0x784a5be65a110fb ^ _DAT_183166728) + uVar6;
  _DAT_1831666d8 = _DAT_183166720 ^ _DAT_183166728;
  _DAT_183166538 = 0x104712930c391cc;
  uVar2 = (_DAT_183166778 ^ _DAT_180a2b510) + _DAT_1831669e0 + 0x1047129b4e1b2e9;
  uVar6 = (_DAT_1831669e0 ^ _UNK_180a2b518) + _DAT_183166778 + 0xfefb8ed6cf3c6e49;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166778 ^ _DAT_180a2b510;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831669e0 ^ _UNK_180a2b518;
  _DAT_183166748 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183166778 + 0xfefb8ed6cf3c6e49) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831669e0 + 0x1047129b4e1b2e9));
  uVar2 = (_DAT_183166748 ^ 0x205890f5103a3b2c) & 0x3fffffffffffffff;
  _DAT_183166328 = _DAT_183166948 ^ uVar2 ^ 0x15;
  _DAT_183166500 = (_DAT_183166500 ^ uVar2) + 0x15 ^ 0x3ae0302a13672032;
  _DAT_1831668f8 = (_DAT_1831668f8 * 0x2ecb082bc9dded4f ^ _DAT_183166500) + uVar2;
  _DAT_183166968 = _DAT_1831668f8 ^ _DAT_183166500;
  _DAT_183166728 = 0x15;
  uVar2 = (_DAT_183166370 ^ _DAT_180a2b520) + _DAT_1831664e8 + 0x84222330;
  uVar6 = (_DAT_1831664e8 ^ _UNK_180a2b528) + _DAT_183166370 + 0x791ee0da8ef4a320;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166370 ^ _DAT_180a2b520;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831664e8 ^ _UNK_180a2b528;
  _DAT_183166940 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183166370 + 0x791ee0da8ef4a320) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831664e8 + 0x84222330));
  uVar2 = _DAT_183166940 * 0x489e95f240893d21;
  _DAT_183166900 = _DAT_183166540 ^ uVar2 ^ 0x791ee0da8ef4a335;
  _DAT_183166858 = (_DAT_183166858 ^ uVar2) + 0x791ee0da8ef4a335 ^ 0x89ab3c8907a19c67;
  _DAT_183166608 = (_DAT_183166608 * -0x40cc3f574422139d ^ _DAT_183166858) + uVar2;
  _DAT_183166350 = _DAT_183166608 ^ _DAT_183166858;
  _DAT_183166a50 = 0x791ee0da8ef4a335;
  uVar2 = (_DAT_183166818 ^ _DAT_180a2b530) + _DAT_183166780 + 0x791ee0da0ad68010;
  uVar6 = (_DAT_183166780 ^ _UNK_180a2b538) + _DAT_183166818 + 0x86e11f25710b5ce0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166818 ^ _DAT_180a2b530;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183166780 ^ _UNK_180a2b538;
  _DAT_1831668b8 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183166818 + 0x86e11f25710b5ce0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166780 + 0x791ee0da0ad68010));
  _DAT_1831665d8 = _DAT_183166900 ^ _DAT_1831668b8 ^ 0x15;
  _DAT_183166520 = (_DAT_183166520 ^ _DAT_1831668b8) + 0x15 ^ 0x1e8d19e410048ae8;
  _DAT_1831669b8 = (_DAT_1831669b8 * -0x708a5adc0812c8ab ^ _DAT_183166520) + _DAT_1831668b8;
  _DAT_183166598 = _DAT_1831669b8 ^ _DAT_183166520;
  _DAT_1831667d0 = 0x15;
  _DAT_183166808 = func_0x000186d1b760(_DAT_183166318 + 0x7fadd5c6eebdac09U ^ 0xb4);
  uVar2 = _DAT_183166808 ^ 0xadf42814f9e9014;
  uVar6 = uVar2 >> 1 | uVar2;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar2;
  _DAT_1831668d0 = (_DAT_1831668d0 ^ uVar2) + 0xf520bd7eb0616fec ^ 0x5092f621b0936c06;
  _DAT_1831665d0 = (_DAT_1831665d0 * -0x21209c4240c5c939 ^ _DAT_1831668d0) + uVar2;
  _DAT_183166378 = _DAT_1831665d0 ^ _DAT_1831668d0;
  _DAT_183166a80 = -0xadf42814f9e9014;
  uVar2 = (_DAT_183166878 ^ _DAT_180a2b540) + _DAT_183166ae8 + 0x84222330;
  uVar6 = (_DAT_183166ae8 ^ _UNK_180a2b548) + _DAT_183166878 + 0xadf42814f9e9014;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183166878 ^ _DAT_180a2b540;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183166ae8 ^ _UNK_180a2b548;
  _DAT_1831667b8 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183166878 + 0xadf42814f9e9014) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166ae8 + 0x84222330));
  uVar2 = (_DAT_1831667b8 ^ 0xe450749b8801d1a4) * -0x31c4fc82cd90c343;
  _DAT_183166860 = _DAT_183166aa0 ^ uVar2 ^ 0xadf42814f9e9029;
  _DAT_183166348 = (_DAT_183166348 ^ uVar2) + 0xadf42814f9e9029 ^ 0x909c69c7a0ef04a0;
  _DAT_183166320 = (_DAT_183166320 * 0x66b3a9a2abd5f4cb ^ _DAT_183166348) + uVar2;
  _DAT_183166690 = _DAT_183166320 ^ _DAT_183166348;
  _DAT_183166840 = 0xadf42814f9e9029;
  uVar2 = (_DAT_1831664c8 ^ _DAT_180a2b550) + _DAT_183166ab0 + 0xadf4281cbbcb30c;
  uVar6 = (_DAT_183166ab0 ^ _UNK_180a2b558) + _DAT_1831664c8 + 0xf520bd7eb0616fec;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831664c8 ^ _DAT_180a2b550;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183166ab0 ^ _UNK_180a2b558;
  _DAT_183166578 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831664c8 + 0xf520bd7eb0616fec) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166ab0 + 0xadf4281cbbcb30c));
  uVar2 = _DAT_183166578 - (_DAT_183166578 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183166578;
  _DAT_183166638 = _DAT_1831665b8 ^ uVar2 ^ 0x15;
  _DAT_183166760 = (_DAT_183166760 ^ uVar2) + 0x15 ^ 0x8e61044b63f9e8ff;
  _DAT_183166a90 = (_DAT_183166a90 * 0x14ccb3fa213fd517 ^ _DAT_183166760) + uVar2;
  _DAT_183166348 = _DAT_183166a90 ^ _DAT_183166760;
  _DAT_183166a00 = 0x15;
  uVar2 = (_DAT_1831669c8 ^ _DAT_180a2b560) + _DAT_183166940 + 0xf5a45f577bd97cc2;
  uVar6 = (_DAT_183166940 ^ _UNK_180a2b568) + _DAT_1831669c8 + 0x301f6caee873a9d2;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831669c8 ^ _DAT_180a2b560;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183166940 ^ _UNK_180a2b568;
  _DAT_183166588 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831669c8 + 0x301f6caee873a9d2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166940 + 0xf5a45f577bd97cc2));
  uVar2 = _DAT_183166588 & 0xfffffffffff80000 ^ 0xc5bb33f91788f635;
  _DAT_1831663f8 = _DAT_1831666f8 ^ uVar2 ^ 0x25c3cc06e86f09b9;
  _DAT_183166700 = (_DAT_183166700 ^ uVar2) + 0x25c3cc06e86f09b9 ^ 0x33e7e3a996aee5c6;
  _DAT_1831667c0 = (_DAT_1831667c0 * 0x1548612d275aa359 ^ _DAT_183166700) + uVar2;
  _DAT_1831669d8 = _DAT_1831667c0 ^ _DAT_183166700;
  _DAT_183166940 = 0x25c3cc06e86f09b9;
  uVar2 = (~_DAT_183166a40 + 0x301f6caee873a9d3) *
          ((_DAT_1831668e0 ^ 0xf5a45f577bd97cc2) + (_DAT_1831668e0 & 0x75a45f577bd97cc2) * 2);
  uVar2 = (uVar2 | _DAT_1831664a8) + (uVar2 & _DAT_1831664a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831663a8 = func_0x000186d1b760((uVar2 | 0xc5bb33f993aad510) + (uVar2 & 0xc5bb33f993aad510));
  uVar2 = (_DAT_1831663a8 ^ 0x1bf7fffff800000) & 0x1ffffffff800000;
  _DAT_183166898 = (_DAT_183166898 ^ uVar2) + 0xc5bb33f91788f635 ^ 0x556ea8ec6749dfa6;
  _DAT_1831667d8 = (_DAT_1831667d8 * -0x3aab2204c6d975bf ^ _DAT_183166898) + uVar2;
  _DAT_183166950 = _DAT_1831667d8 ^ _DAT_183166898;
  _DAT_183166a58 = 0xc5bb33f91788f635;
  lVar1 = func_0x000186d1b760(_DAT_183166790 + 0x18aa6570eff1a9ba ^ 0x1e);
  _DAT_183166658 = 0x8e0b350eb0ed5d1d;
  _DAT_183166608 = (_DAT_183166608 * 0x552cf47ca4dee337 ^ 0x8e0b350eb0ed5d1d) + lVar1;
  _DAT_183166368 = _DAT_183166608 ^ 0x8e0b350eb0ed5d1d;
  _DAT_183166378 = 0x30044c06e87309c2;
  _DAT_183166670 = func_0x000186d1b760(_DAT_183166aa0 ^ 0xb41b13f949abc2d);
  uVar2 = _DAT_183166670 >> 1 | _DAT_183166670;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_183166670;
  _DAT_183166890 = _DAT_1831663d8 ^ uVar2 ^ 0x25c3cc06e86f09b9;
  _DAT_183166898 = (_DAT_183166898 ^ uVar2) + 0x25c3cc06e86f09b9 ^ 0xb44fb5dfb0b267f1;
  _DAT_1831667c8 = (_DAT_1831667c8 * -0x28b81dbd505e59d5 ^ _DAT_183166898) + uVar2;
  _DAT_183166a60 = _DAT_1831667c8 ^ _DAT_183166898;
  _DAT_183166310 = 0x25c3cc06e86f09b9;
  uVar2 = (_DAT_1831665d0 ^ _DAT_180a2b570) + _DAT_183166520 + 0x25c3cc066c4d2a9c;
  uVar6 = (_DAT_183166520 ^ _UNK_180a2b578) + _DAT_1831665d0 + 0x25c3cc06e86f09b9;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831665d0 ^ _DAT_180a2b570;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183166520 ^ _UNK_180a2b578;
  _DAT_183166340 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831665d0 + 0x25c3cc06e86f09b9) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166520 + 0x25c3cc066c4d2a9c));
  _DAT_183166730 = _DAT_183166340 ^ 0xdc51727256a38e08;
  _DAT_183166570 = _DAT_183166570 ^ _DAT_183166730 ^ 0x8e2037c2bed5245;
  _DAT_1831666b8 = (_DAT_1831666b8 * -0x336f51af73f708c7 ^ _DAT_183166570) + _DAT_183166730;
  _DAT_1831669a8 = _DAT_1831666b8 ^ _DAT_183166570;
  _DAT_183166618 = 0;
  uVar2 = ((_DAT_1831664a8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831664a8 & 0x84222330) * 2) *
          -_DAT_1831667f8;
  uVar2 = (uVar2 | _DAT_183166948) + (uVar2 & _DAT_183166948);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166aa0 = func_0x000186d1b760((uVar2 | 0x84222330) + (ulonglong)((uint)uVar2 & 0x84222330))
  ;
  uVar2 = _DAT_183166aa0 << 0x25 | _DAT_183166aa0 >> 0x1b;
  _DAT_183166ac8 = _DAT_183166310 ^ uVar2 ^ 0x15;
  _DAT_183166470 = (_DAT_183166470 ^ uVar2) + 0x15 ^ 0xa09ba24f0faccea1;
  _DAT_1831663e8 = (_DAT_1831663e8 * 0x3fc0144e13f3b557 ^ _DAT_183166470) + uVar2;
  _DAT_1831664e8 = _DAT_1831663e8 ^ _DAT_183166470;
  _DAT_183166618 = 0x15;
  uVar2 = ~_DAT_183166790 *
          ((_DAT_1831664e8 ^ 0xf5a45f577bd97cc2) + (_DAT_1831664e8 & 0x75a45f577bd97cc2) * 2);
  uVar2 = (uVar2 | _DAT_1831663b8) + (uVar2 & _DAT_1831663b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183166520 = func_0x000186d1b760((uVar2 | 0xa5ba0a88426833d) + (uVar2 & 0xa5ba0a88426833d));
  uVar2 = _DAT_183166520 << 0x10 | (_DAT_183166520 & 0x7fffffffffffffff) >> 0x30;
  uVar6 = uVar2 >> 1 | uVar2;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar2;
  _DAT_1831663e8 = (_DAT_1831663e8 ^ uVar2) + 0xa5ba0a80004a018 ^ 0x463b2fe5b3a1fa39;
  _DAT_1831665f8 = (_DAT_1831665f8 * -0x3ae9145c29780487 ^ _DAT_1831663e8) + uVar2;
  _DAT_183166718 = _DAT_1831665f8 ^ _DAT_1831663e8;
  _DAT_183166890 = 0xa5ba0a80004a018;
  uVar2 = (~_DAT_1831665c0 + 0xa5ba0a80004a019) *
          ((_DAT_183166a78 ^ 0xf5a45f577bd97cc2) + (_DAT_183166a78 & 0x75a45f577bd97cc2) * 2);
  uVar2 = (uVar2 | _DAT_183166668) + (uVar2 & _DAT_183166668);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831667e0 = func_0x000186d1b760((uVar2 | 0xffffffff7bdddcda) + (uVar2 & 0xffffffff7bdddcda));
  uVar2 = _DAT_1831667e0 * 0x393fd138914d2fbf & 0xfffffffffffffff;
  _DAT_183166748 = _DAT_183166748 ^ uVar2 ^ 0x196a0d8b2e046db7;
  _DAT_183166598 = (_DAT_183166598 * 0x240b59109645728b ^ _DAT_183166748) + uVar2;
  _DAT_1831668c8 = _DAT_183166598 ^ _DAT_183166748;
  _DAT_183166458 = 0;
  _DAT_183166610 = func_0x000186d1b760(_DAT_183166600 + 0x20ff7be2ffddffU ^ 0x74);
  uVar6 = _DAT_183166610 ^ 0x75200d57a6594b87;
  uVar2 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar6) &
          0x3fffffffff;
  _DAT_183166458 = _DAT_183166458 ^ uVar2 ^ 0x8cce9632685090fb;
  _DAT_1831663b0 = (_DAT_1831663b0 * 0x6d8f9a684cae1411 ^ _DAT_183166458) + uVar2;
  _DAT_183166400 = _DAT_1831663b0 ^ _DAT_183166458;
  _DAT_183166ac8 = 0;
  uVar2 = (_DAT_1831666b8 ^ 0x84222330) + _DAT_183166570 + 0x84222330;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831666b8 ^ 0x84222330;
  uVar6 = ((_DAT_183166570 + _DAT_1831666b8) * 0x2000 | _DAT_183166570 + _DAT_1831666b8 >> 0x33) ^
          _DAT_183166570;
  _DAT_183166330 =
       func_0x000186d1b760((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1831666b8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183166570 + 0x84222330));
  _DAT_183166740 = _DAT_1831668b8 ^ _DAT_183166330 ^ 0x15;
  _DAT_183166ac0 = (_DAT_183166ac0 ^ _DAT_183166330) + 0x15 ^ 0xef94236150d1a716;
  _DAT_183166a80 = (_DAT_183166a80 * -0x4ef19c905e12e0e3 ^ _DAT_183166ac0) + _DAT_183166330;
  _DAT_183166a18 = _DAT_183166a80 ^ _DAT_183166ac0;
  _DAT_183166698 = 0x15;
  switch(uVar5 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6d1e092 (image 186d1e092) =====

void FUN_186d1e092(void)

{
  return;
}



// ===== continuation @ rva 6d1dee9 (image 186d1dee9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d1dee9(void)

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



// ===== continuation @ rva 6d1df48 (image 186d1df48) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d1df48(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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



// ===== continuation @ rva 6d20582 (image 186d20582) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d20582(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6d2284f (image 186d2284f) =====

void FUN_186d2284f(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 6d1e599 (image 186d1e599) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d1e599(void)

{
  char cVar1;
  longlong *unaff_R12;
  undefined4 uStack0000000000000094;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined2 uStack00000000000000b0;
  
  uStack0000000000000094 = 0xe61ce1a;
  rdtsc();
  uStack00000000000000a0 = 0x74007800690073;
  rdtsc();
  uStack00000000000000a8 = 0x6e002f006f0077;
  rdtsc();
  uStack00000000000000b0 = 0x43;
  (**(code **)(*unaff_R12 + 0x518))();
  FUN_190ddfc90();
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



// ===== continuation @ rva 6d1e9ae (image 186d1e9ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d1e9ae(void)

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



// ===== continuation @ rva 6d21784 (image 186d21784) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d21784(void)

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



// ===== continuation @ rva 6d21c1c (image 186d21c1c) =====

undefined8 thunk_FUN_186d21464(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 6d22ae3 (image 186d22ae3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d22ae3(void)

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



// ===== continuation @ rva 6d22a8f (image 186d22a8f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d22a8f(void)

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



// ===== continuation @ rva 6d22c55 (image 186d22c55) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d22c55(void)

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



// ===== continuation @ rva 6d22c01 (image 186d22c01) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d22c01(void)

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



// ===== continuation @ rva 6d2348a (image 186d2348a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d2348a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180a318c8)();
  return;
}



// ===== continuation @ rva 6d23424 (image 186d23424) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d23424(void)

{
  FUN_190dd72e0();
  (*_DAT_180a31a88)();
  return;
}



// ===== continuation @ rva 6d23856 (image 186d23856) =====

void FUN_186d23856(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d233c9 (image 186d233c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d233c9(void)

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



// ===== continuation @ rva 6d23848 (image 186d23848) =====

void FUN_186d23848(void)

{
  return;
}



// ===== continuation @ rva 6d236bc (image 186d236bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d236bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180a31c78)();
  return;
}



// ===== continuation @ rva 6d23058 (image 186d23058) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d23058(void)

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



// ===== continuation @ rva 6d22b51 (image 186d22b51) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d22b51(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a31c98)();
  return;
}



// ===== continuation @ rva 6d22d86 (image 186d22d86) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d22d86(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6d2629d (image 186d2629d) =====

void FUN_186d2629d(void)

{
  return;
}



// ===== continuation @ rva 6d239c0 (image 186d239c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d239c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180a32818)();
  return;
}



// ===== continuation @ rva 6d262bc (image 186d262bc) =====

void FUN_186d262bc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d2609f (image 186d2609f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d2609f(void)

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



// ===== continuation @ rva 6d24496 (image 186d24496) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d24496(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a321e8)();
  return;
}



// ===== continuation @ rva 6d23e6d (image 186d23e6d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d23e6d(void)

{
  FUN_190de3220();
  (*_DAT_180a328a8)();
  return;
}



// ===== continuation @ rva 6d25267 (image 186d25267) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d25267(void)

{
  (*_DAT_180a328f8)();
  return;
}



// ===== continuation @ rva 6d260cb (image 186d260cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d260cb(void)

{
  (*_DAT_180a32b78)();
  return;
}



// ===== continuation @ rva 6d2545b (image 186d2545b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d2545b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_180a32008)();
  return;
}



// ===== continuation @ rva 6d251ae (image 186d251ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d251ae(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a32528)();
  return;
}



// ===== continuation @ rva 6d24e86 (image 186d24e86) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d24e86(void)

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



// ===== continuation @ rva 6d25193 (image 186d25193) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d25193(void)

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



// ===== continuation @ rva 6d2870f (image 186d2870f) =====

void FUN_186d2870f(void)

{
  return;
}



// ===== continuation @ rva 6d2856b (image 186d2856b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d2856b(void)

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



// ===== continuation @ rva 6d2c05e (image 186d2c05e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d2c05e(void)

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



// ===== continuation @ rva 6d2be2b (image 186d2be2b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d2be2b(void)

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



// ===== continuation @ rva 6d2a78d (image 186d2a78d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d2a78d(void)

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



// ===== continuation @ rva 6d2afaf (image 186d2afaf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d2afaf(void)

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



// ===== continuation @ rva 6d2ae33 (image 186d2ae33) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d2ae33(void)

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



// ===== continuation @ rva 6d2ac50 (image 186d2ac50) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d2ac50(void)

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



// ===== continuation @ rva 6d2a9f0 (image 186d2a9f0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d2a9f0(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0xd8))(in_stack_00000030,in_stack_00000038);
  (**(code **)(*in_stack_00000030 + 0x580))(in_stack_00000030,8);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xc38,0x31);
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



// ===== continuation @ rva 6d312d8 (image 186d312d8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d312d8(void)

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



// ===== continuation @ rva 6d2ce8b (image 186d2ce8b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d2ce8b(void)

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



// ===== continuation @ rva 6d2c5c7 (image 186d2c5c7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_186d2d1fe(void)

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



// ===== continuation @ rva 6d318d2 (image 186d318d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d318d2(void)

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



// ===== continuation @ rva 6d3187e (image 186d3187e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d3187e(void)

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



// ===== continuation @ rva 6d32711 (image 186d32711) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d32711(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a35078)();
  return;
}



// ===== continuation @ rva 6d31be5 (image 186d31be5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d31be5(void)

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



// ===== continuation @ rva 6d32745 (image 186d32745) =====

void FUN_186d32745(void)

{
  return;
}



// ===== continuation @ rva 6d31df9 (image 186d31df9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d31df9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a350a8)();
  return;
}



// ===== continuation @ rva 6d32754 (image 186d32754) =====

void FUN_186d32754(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d32302 (image 186d32302) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d32302(void)

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



// ===== continuation @ rva 6d31d81 (image 186d31d81) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d31d81(void)

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



// ===== continuation @ rva 6d32110 (image 186d32110) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d32110(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180a34fe8)();
  return;
}



// ===== continuation @ rva 6d31a46 (image 186d31a46) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d31a46(void)

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



// ===== continuation @ rva 6d319f2 (image 186d319f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d319f2(void)

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



// ===== continuation @ rva 6d31da5 (image 186d31da5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d31da5(void)

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



// ===== continuation @ rva 6d34866 (image 186d34866) =====

void FUN_186d34866(void)

{
  return;
}



// ===== continuation @ rva 6d328cc (image 186d328cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d328cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180a36098)();
  return;
}



// ===== continuation @ rva 6d353a4 (image 186d353a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d353a4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a355d8)();
  return;
}



// ===== continuation @ rva 6d33ad8 (image 186d33ad8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d33ad8(void)

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



// ===== continuation @ rva 6d33d73 (image 186d33d73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d33d73(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_180a35be8)();
  return;
}



// ===== continuation @ rva 6d33d15 (image 186d33d15) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d33d15(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a358b8)();
  return;
}



// ===== continuation @ rva 6d3540a (image 186d3540a) =====

void FUN_186d3540a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d3461f (image 186d3461f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d3461f(void)

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



// ===== continuation @ rva 6d34a16 (image 186d34a16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d34a16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180a35dd8)();
  return;
}



// ===== continuation @ rva 6d348e0 (image 186d348e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d348e0(void)

{
  FUN_190dd72e0();
  (*_DAT_180a35668)();
  return;
}



// ===== continuation @ rva 6d34d30 (image 186d34d30) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d34d30(void)

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



// ===== continuation @ rva 6d35095 (image 186d35095) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d35095(void)

{
  (*_DAT_180a35f78)();
  return;
}



// ===== continuation @ rva 6d33214 (image 186d33214) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d33214(void)

{
  (*_DAT_180a36048)();
  return;
}



// ===== continuation @ rva 6d37168 (image 186d37168) =====

void FUN_186d37168(void)

{
  return;
}



// ===== continuation @ rva 6d36fd1 (image 186d36fd1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d36fd1(void)

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



// ===== continuation @ rva 6d3826b (image 186d3826b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d3826b(void)

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



// ===== continuation @ rva 6d39129 (image 186d39129) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d39129(void)

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



// ===== continuation @ rva 6d3b3ee (image 186d3b3ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_186d3bc99(void)

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



// ===== continuation @ rva 6d43053 (image 186d43053) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d43053(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6d43013 (image 186d43013) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d43013(void)

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



// ===== continuation @ rva 6d43218 (image 186d43218) =====

void FUN_186d43218(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 6d38bf4 (image 186d38bf4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_186d3bc99(void)

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



// ===== continuation @ rva 6d4317e (image 186d4317e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d4317e(void)

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



// ===== continuation @ rva 6d43822 (image 186d43822) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d43822(void)

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



// ===== continuation @ rva 6d437ce (image 186d437ce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d437ce(void)

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



// ===== continuation @ rva 6d446c9 (image 186d446c9) =====

void FUN_186d446c9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d44499 (image 186d44499) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d44499(void)

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



// ===== continuation @ rva 6d44685 (image 186d44685) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d44685(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a385f8)();
  return;
}



// ===== continuation @ rva 6d445f2 (image 186d445f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d445f2(void)

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



// ===== continuation @ rva 6d446ba (image 186d446ba) =====

void FUN_186d446ba(void)

{
  return;
}



// ===== continuation @ rva 6d43e88 (image 186d43e88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d43e88(void)

{
  FUN_190ddce00();
  (*_DAT_180a38588)();
  return;
}



// ===== continuation @ rva 6d442c3 (image 186d442c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d442c3(void)

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



// ===== continuation @ rva 6d43ec0 (image 186d43ec0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d43ec0(void)

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



// ===== continuation @ rva 6d44032 (image 186d44032) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d44032(void)

{
  FUN_190de3220();
  (*_DAT_180a38638)();
  return;
}



// ===== continuation @ rva 6d43c46 (image 186d43c46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d43c46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a38818)();
  return;
}



// ===== continuation @ rva 6d467d6 (image 186d467d6) =====

void FUN_186d467d6(void)

{
  return;
}



// ===== continuation @ rva 6d4483c (image 186d4483c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d4483c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180a38c38)();
  return;
}



// ===== continuation @ rva 6d46621 (image 186d46621) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d46621(void)

{
  (*_DAT_180a399d8)();
  return;
}



// ===== continuation @ rva 6d47314 (image 186d47314) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d47314(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a396b8)();
  return;
}



// ===== continuation @ rva 6d4547e (image 186d4547e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d4547e(void)

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



// ===== continuation @ rva 6d45bc8 (image 186d45bc8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d45bc8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a39878)();
  return;
}



// ===== continuation @ rva 6d4737a (image 186d4737a) =====

void FUN_186d4737a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d464c3 (image 186d464c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d464c3(void)

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



// ===== continuation @ rva 6d46281 (image 186d46281) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d46281(void)

{
  (*_DAT_180a399d8)();
  return;
}



// ===== continuation @ rva 6d451be (image 186d451be) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d451be(void)

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



// ===== continuation @ rva 6d46e0c (image 186d46e0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d46e0c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a38ce8)();
  return;
}



// ===== continuation @ rva 6c979fd (image 186c979fd) =====

void FUN_186c979fd(void)

{
  return;
}



// ===== continuation @ rva 6c93ffe (image 186c93ffe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c93ffe(void)

{
  FUN_190ddce00();
  (*_DAT_180a11448)();
  return;
}



// ===== continuation @ rva 6ca29a1 (image 186ca29a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ca29a1(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180a10d08)();
  return;
}



// ===== continuation @ rva 6ca27df (image 186ca27df) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ca27df(void)

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



// ===== continuation @ rva 6cadc4d (image 186cadc4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cadc4d(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180a12468)();
  return;
}



// ===== continuation @ rva 6ca9919 (image 186ca9919) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ca9919(void)

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



// ===== continuation @ rva 6ca2a86 (image 186ca2a86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ca2a86(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180a14a78)();
  return;
}



// ===== continuation @ rva 6ca2840 (image 186ca2840) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ca2840(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  (**(code **)(*in_stack_00000038 + 0x70))(in_stack_00000038,in_stack_00000040,&UNK_182f702a8);
  (*_DAT_180a15838)();
  return;
}



// ===== continuation @ rva 6cb67e3 (image 186cb67e3) =====

void FUN_186cb67e3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6cb3145 (image 186cb3145) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cb3145(void)

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



// ===== continuation @ rva 6caf457 (image 186caf457) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186caf457(void)

{
  (*_DAT_180a16698)();
  return;
}



// ===== continuation @ rva 6cb67d0 (image 186cb67d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cb67d0(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_180a153d8)();
  return;
}



// ===== continuation @ rva 6cb2f1d (image 186cb2f1d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cb2f1d(void)

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



// ===== continuation @ rva 6ca641e (image 186ca641e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ca641e(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_180a153d8)();
  return;
}



// ===== continuation @ rva 6ca63bb (image 186ca63bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ca63bb(void)

{
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000038 + 0x720))(in_stack_00000038);
  (*_DAT_180a0d2a8)();
  return;
}



// ===== continuation @ rva 6cbc2e2 (image 186cbc2e2) =====

void FUN_186cbc2e2(void)

{
  return;
}



// ===== continuation @ rva 6cb6a6a (image 186cb6a6a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cb6a6a(void)

{
  FUN_190ddce00();
  (*_DAT_180a18aa8)();
  return;
}



// ===== continuation @ rva 6cbb78f (image 186cbb78f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cbb78f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a187a8)();
  return;
}



// ===== continuation @ rva 6cbaed8 (image 186cbaed8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cbaed8(void)

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



// ===== continuation @ rva 6cbbd70 (image 186cbbd70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cbbd70(void)

{
  (*_DAT_180a18c18)();
  return;
}



// ===== continuation @ rva 6cba832 (image 186cba832) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cba832(void)

{
  (*_DAT_180a19008)();
  return;
}



// ===== continuation @ rva 6cbb3b2 (image 186cbb3b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cbb3b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a188d8)();
  return;
}



// ===== continuation @ rva 6cbb22a (image 186cbb22a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cbb22a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180a18748)();
  return;
}



// ===== continuation @ rva 6cbb784 (image 186cbb784) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cbb784(void)

{
  (*_DAT_180a18c18)();
  return;
}



// ===== continuation @ rva 6cba748 (image 186cba748) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cba748(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a190c8)();
  return;
}



// ===== continuation @ rva 6cba3c9 (image 186cba3c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cba3c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a18cd8)();
  return;
}



// ===== continuation @ rva 6cba898 (image 186cba898) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cba898(void)

{
  (*_DAT_180a19138)();
  return;
}



// ===== continuation @ rva 6d70791 (image 186d70791) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d70791(void)

{
  FUN_190dd72e0();
  (*_DAT_180a3e1b8)();
  return;
}



// ===== continuation @ rva 6d7071e (image 186d7071e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7071e(void)

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



// ===== continuation @ rva 6d7129d (image 186d7129d) =====

void FUN_186d7129d(void)

{
  return;
}



// ===== continuation @ rva 6d70ef7 (image 186d70ef7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d70ef7(void)

{
  FUN_190dd72e0();
  (*_DAT_180a3df88)();
  return;
}



// ===== continuation @ rva 6d70757 (image 186d70757) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d70757(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a3e318)();
  return;
}



// ===== continuation @ rva 6d71273 (image 186d71273) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d71273(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x368))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a3df48)();
  return;
}



// ===== continuation @ rva 6d709f6 (image 186d709f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d709f6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a3e048)();
  return;
}



// ===== continuation @ rva 6d712a7 (image 186d712a7) =====

void FUN_186d712a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d70dc6 (image 186d70dc6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d70dc6(void)

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



// ===== continuation @ rva 6d7095c (image 186d7095c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7095c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a3e258)();
  return;
}



// ===== continuation @ rva 6d70cbf (image 186d70cbf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d70cbf(void)

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



// ===== continuation @ rva 6cec941 (image 186cec941) =====

void FUN_186cec941(void)

{
  return;
}



// ===== continuation @ rva 6ce63b3 (image 186ce63b3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce63b3(void)

{
  FUN_190ddce00();
  (*_DAT_180a27dd8)();
  return;
}



// ===== continuation @ rva 6cecd8c (image 186cecd8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cecd8c(void)

{
  (*_DAT_180a27958)();
  return;
}



// ===== continuation @ rva 6ce9b5e (image 186ce9b5e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186ce9b5e(void)

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



// ===== continuation @ rva 6ce9d10 (image 186ce9d10) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce9d10(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a27828)();
  return;
}



// ===== continuation @ rva 6ce990c (image 186ce990c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ce990c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a26ee8)();
  return;
}



// ===== continuation @ rva 6ceb112 (image 186ceb112) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ceb112(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a27868)();
  return;
}



// ===== continuation @ rva 6cea7c6 (image 186cea7c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cea7c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_180a27fa8)();
  return;
}



// ===== continuation @ rva 6cec047 (image 186cec047) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cec047(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a27708)();
  return;
}



// ===== continuation @ rva 6cebc46 (image 186cebc46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186cebc46(void)

{
  (*_DAT_180a280a8)();
  return;
}



// ===== continuation @ rva 6cecd94 (image 186cecd94) =====

void FUN_186cecd94(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6cec616 (image 186cec616) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cec616(void)

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



// ===== continuation @ rva 6ceb41a (image 186ceb41a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186ceb41a(void)

{
  (*_DAT_180a27f28)();
  return;
}



// ===== continuation @ rva 6cec9de (image 186cec9de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186cec9de(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 6d434b6 (image 186d434b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d434b6(void)

{
  FUN_190dd72e0();
  (*_DAT_180a38498)();
  return;
}



// ===== continuation @ rva 6d43443 (image 186d43443) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d43443(void)

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



// ===== continuation @ rva 6d436ba (image 186d436ba) =====

void FUN_186d436ba(void)

{
  return;
}



// ===== continuation @ rva 6d434ff (image 186d434ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d434ff(void)

{
  FUN_190dd9df0();
  (*_DAT_180a38418)();
  return;
}



// ===== continuation @ rva 6d436c2 (image 186d436c2) =====

void FUN_186d436c2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d43532 (image 186d43532) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d43532(void)

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



// ===== continuation @ rva 6d43681 (image 186d43681) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d43681(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a38488)();
  return;
}



// ===== continuation @ rva 6d4347c (image 186d4347c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d4347c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a384d8)();
  return;
}



// ===== continuation @ rva 6d4369a (image 186d4369a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d4369a(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a38488)();
  return;
}



// ===== continuation @ rva 6d43648 (image 186d43648) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d43648(void)

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



// ===== continuation @ rva 6d43592 (image 186d43592) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d43592(void)

{
  FUN_190dd72e0();
  (*_DAT_180a38478)();
  return;
}



// ===== continuation @ rva 6d70426 (image 186d70426) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d70426(void)

{
  FUN_190dd72e0();
  (*_DAT_180a3dd68)();
  return;
}



// ===== continuation @ rva 6d703b3 (image 186d703b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d703b3(void)

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



// ===== continuation @ rva 6d7060a (image 186d7060a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d7060a(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a3dd38)();
  return;
}



// ===== continuation @ rva 6d704a2 (image 186d704a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d704a2(void)

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



// ===== continuation @ rva 6d705b8 (image 186d705b8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d705b8(void)

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



// ===== continuation @ rva 6d7062a (image 186d7062a) =====

void FUN_186d7062a(void)

{
  return;
}



// ===== continuation @ rva 6d703ec (image 186d703ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d703ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a3ddb8)();
  return;
}



// ===== continuation @ rva 6d705f1 (image 186d705f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186d705f1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a3dd98)();
  return;
}



// ===== continuation @ rva 6d70632 (image 186d70632) =====

void FUN_186d70632(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6d705a2 (image 186d705a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186d705a2(void)

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



