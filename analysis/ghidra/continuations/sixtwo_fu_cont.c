// ===== continuation @ rva bb83260 (image 18bb83260) =====

void FUN_18bb83260(void)

{
  return;
}



// ===== continuation @ rva bb7e534 (image 18bb7e534) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7e534(void)

{
  FUN_190ddce00();
  (*_DAT_181ca3358)();
  return;
}



// ===== continuation @ rva bb825c8 (image 18bb825c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb825c8(void)

{
  (*_DAT_181ca3508)();
  return;
}



// ===== continuation @ rva bb83379 (image 18bb83379) =====

void FUN_18bb83379(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bb82d42 (image 18bb82d42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb82d42(void)

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



// ===== continuation @ rva bb823b1 (image 18bb823b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb823b1(void)

{
  (*_DAT_181ca3378)();
  return;
}



// ===== continuation @ rva bb820a2 (image 18bb820a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb820a2(void)

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



// ===== continuation @ rva bb8259c (image 18bb8259c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb8259c(void)

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



// ===== continuation @ rva bb825d3 (image 18bb825d3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb825d3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ca3168)();
  return;
}



// ===== continuation @ rva bb8245a (image 18bb8245a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb8245a(void)

{
  FUN_190de3220();
  (*_DAT_181ca3268)();
  return;
}



// ===== continuation @ rva bb8220d (image 18bb8220d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb8220d(void)

{
  FUN_190dd9df0();
  (*_DAT_181ca3258)();
  return;
}



// ===== continuation @ rva bb81e43 (image 18bb81e43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb81e43(void)

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



// ===== continuation @ rva bbe3386 (image 18bbe3386) =====

void FUN_18bbe3386(void)

{
  return;
}



// ===== continuation @ rva bbc65db (image 18bbc65db) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bbc6631 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bbc65db(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bbe3336 (image 18bbe3336) =====

void thunk_FUN_18bbc882f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva bbdb9e8 (image 18bbdb9e8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbdb9e8(undefined4 param_1,uint param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  undefined8 unaff_XMM7_Qb;
  uint unaff_XMM8_Da;
  uint uStack0000000000000048;
  undefined4 uStack00000000000000b0;
  
  auVar6._8_8_ = unaff_XMM7_Qb;
  auVar6._0_8_ = (ulonglong)param_2 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_181cb2e60,_DAT_1800170c0);
  uVar3 = auVar7._8_8_ + auVar7._0_8_;
  uVar2 = uVar3 + _DAT_1832c7fb8;
  if (auVar7._4_4_ < 0) {
    uVar2 = _DAT_1832c7f78 ^ uVar3;
  }
  uStack0000000000000048 = param_2;
  uStack00000000000000b0 = param_1;
  _DAT_1832c80a8 = func_0x00018bbe3570(SUB161(auVar6 ^ _DAT_181cb2e60,5) ^ uVar2);
  uVar2 = _DAT_1832c80a8 & 0x7fffffffffffffff ^ (ulonglong)param_2;
  uVar8 = param_2 & unaff_XMM8_Da;
  uVar4 = param_2 | unaff_XMM8_Da;
  lVar5 = ((ulonglong)uVar4 * (ulonglong)_DAT_181cb2f40 << 0x20) +
          (ulonglong)_DAT_181cb2f30 * (ulonglong)uVar4 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_181cb2f40 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_181cb2f30) +
          ((ulonglong)param_2 * (ulonglong)_DAT_181cb2f20 << 0x20) +
          (ulonglong)_DAT_181cb2f10 * (ulonglong)param_2;
  _DAT_1832c80e8 =
       ((((ulonglong)(param_2 ^ unaff_XMM8_Da) * (ulonglong)_DAT_181cb2ee0 << 0x20) +
         (ulonglong)_DAT_181cb2ed0 * (ulonglong)(param_2 ^ unaff_XMM8_Da) +
         ((ulonglong)_DAT_181cb2ec0 * (ulonglong)uVar4 << 0x20) +
         (ulonglong)_DAT_181cb2eb0 * (ulonglong)uVar4 +
        ((ulonglong)_DAT_181cb2ea0 * (ulonglong)uVar8 << 0x20 |
        (ulonglong)_DAT_181cb2e90 * (ulonglong)uVar8) +
        ((ulonglong)_DAT_181cb2e80 * (ulonglong)param_2 << 0x20) +
        (ulonglong)_DAT_181cb2e70 * (ulonglong)param_2) -
       (((ulonglong)(param_2 ^ 0xffffffff) * (ulonglong)_DAT_181cb2f60 + _DAT_181cb2f70 << 0x20) +
        (ulonglong)_DAT_181cb2f50 * (ulonglong)(param_2 ^ 0xffffffff) + lVar5)) + 0x4f488f63263286d3
  ;
  _DAT_1832c80f8 = _DAT_1832c8060 ^ uVar2 ^ _DAT_1832c80e8;
  _DAT_1832c8040 = (_DAT_1832c8040 ^ uVar2) + _DAT_1832c80e8 ^ 0x901329a81618d578;
  _DAT_1832c7fe8 = (_DAT_1832c7fe8 * -0x22bf3f0964ec6171 ^ _DAT_1832c8040) + uVar2;
  _DAT_1832c7f10 = _DAT_1832c7fe8 ^ _DAT_1832c8040;
  _DAT_1832c80e8 = _DAT_1832c80e8 & 0xffffffff;
  FUN_190dd72e0(lVar5,*_DAT_18301ee50 + 0x2e9,0x12);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bbd3e22 (image 18bbd3e22) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbd3e22(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000a9;
  
  uStack00000000000000a9 = in_stack_00000070;
  (**(code **)(*unaff_RSI + 0x680))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bbe2880 (image 18bbe2880) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe2880(void)

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



// ===== continuation @ rva bbcb05f (image 18bbcb05f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bbcb099 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bbcb05f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bbcb026 (image 18bbcb026) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bbcb05c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bbcb026(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bbc677b (image 18bbc677b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bbc67a9 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bbc677b(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bbc672a (image 18bbc672a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bbc6760 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bbc672a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bbc8010 (image 18bbc8010) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bbc80ab */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bbc8010(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack00000000000000c8;
  undefined2 uStack00000000000000e2;
  undefined4 uStack00000000000000e4;
  undefined4 uStack0000000000000118;
  
  uStack00000000000000c8 = in_stack_00000040;
  uStack0000000000000048 = CONCAT44((int)((ulonglong)in_stack_00000040 >> 0x20),2);
  uStack0000000000000118 = 0x7abb94ee;
  rdtsc();
  uStack00000000000000e2 = 0x44;
  uStack00000000000000e4 = 0x530045;
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bbd4082 (image 18bbd4082) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbd4082(void)

{
  int iVar1;
  longlong *unaff_RSI;
  char unaff_R14B;
  undefined4 unaff_000000b4;
  int iStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  iStack0000000000000068 = 7;
  uStack0000000000000070 = CONCAT44(unaff_000000b4,(int)unaff_R14B);
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



// ===== continuation @ rva bbe3696 (image 18bbe3696) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe3696(void)

{
  FUN_190dd72e0();
  (*_DAT_181cb3208)();
  return;
}



// ===== continuation @ rva bbe3623 (image 18bbe3623) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe3623(void)

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



// ===== continuation @ rva bbe389a (image 18bbe389a) =====

void FUN_18bbe389a(void)

{
  return;
}



// ===== continuation @ rva bbe3772 (image 18bbe3772) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe3772(void)

{
  FUN_190dd72e0();
  (*_DAT_181cb31e8)();
  return;
}



// ===== continuation @ rva bbe3861 (image 18bbe3861) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe3861(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181cb31b8)();
  return;
}



// ===== continuation @ rva bbe38a2 (image 18bbe38a2) =====

void FUN_18bbe38a2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bbe3681 (image 18bbe3681) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbe3681(void)

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



// ===== continuation @ rva bbe387a (image 18bbe387a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe387a(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181cb3278)();
  return;
}



// ===== continuation @ rva bbe365c (image 18bbe365c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe365c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181cb31a8)();
  return;
}



// ===== continuation @ rva bbe37ee (image 18bbe37ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbe37ee(void)

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



// ===== continuation @ rva bbf55c9 (image 18bbf55c9) =====

void FUN_18bbf55c9(void)

{
  return;
}



// ===== continuation @ rva bbe3a2d (image 18bbe3a2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe3a2d(void)

{
  FUN_190ddce00();
  (*_DAT_181cb73f8)();
  return;
}



// ===== continuation @ rva bbefb1c (image 18bbefb1c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbefb1c(void)

{
  FUN_190dd9df0();
  (*_DAT_181cb75f8)();
  return;
}



// ===== continuation @ rva bbf5892 (image 18bbf5892) =====

void FUN_18bbf5892(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bbe9ce7 (image 18bbe9ce7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbe9ce7(void)

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



// ===== continuation @ rva bbf5881 (image 18bbf5881) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbf5881(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_181cb7a58)();
  return;
}



// ===== continuation @ rva bbedb65 (image 18bbedb65) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbedb65(void)

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



// ===== continuation @ rva bbecf01 (image 18bbecf01) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbecf01(void)

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



// ===== continuation @ rva bbe8c49 (image 18bbe8c49) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe8c49(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181cb56f8)();
  return;
}



// ===== continuation @ rva bbe875d (image 18bbe875d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbe875d(void)

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



// ===== continuation @ rva bbe8e51 (image 18bbe8e51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbe8e51(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_1842a3a30(in_stack_00000030);
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



// ===== continuation @ rva bbe8535 (image 18bbe8535) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbe8535(void)

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



// ===== continuation @ rva bbf0f9e (image 18bbf0f9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbf0f9e(void)

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



// ===== continuation @ rva bbfa96d (image 18bbfa96d) =====

void FUN_18bbfa96d(void)

{
  return;
}



// ===== continuation @ rva bbf5ae4 (image 18bbf5ae4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbf5ae4(void)

{
  FUN_190ddce00();
  (*_DAT_181cb9698)();
  return;
}



// ===== continuation @ rva bbf963b (image 18bbf963b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbf963b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cb9708)();
  return;
}



// ===== continuation @ rva bbf9340 (image 18bbf9340) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbf9340(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181cba228)();
  return;
}



// ===== continuation @ rva bbfb61f (image 18bbfb61f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbfb61f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181cba248)();
  return;
}



// ===== continuation @ rva bbf916e (image 18bbf916e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbf916e(void)

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



// ===== continuation @ rva bbfb62e (image 18bbfb62e) =====

void FUN_18bbfb62e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bbf5b17 (image 18bbf5b17) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbf5b17(void)

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



// ===== continuation @ rva bbf8eae (image 18bbf8eae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbf8eae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181cb97e8)();
  return;
}



// ===== continuation @ rva bbf9630 (image 18bbf9630) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbf9630(void)

{
  (*_DAT_181cb9e08)();
  return;
}



// ===== continuation @ rva bbfa094 (image 18bbfa094) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbfa094(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cb9db8)();
  return;
}



// ===== continuation @ rva bbf9c4c (image 18bbf9c4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbf9c4c(void)

{
  FUN_190dd72e0();
  (*_DAT_181cba038)();
  return;
}



// ===== continuation @ rva bbfb2fc (image 18bbfb2fc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbfb2fc(void)

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



// ===== continuation @ rva bbffa70 (image 18bbffa70) =====

void FUN_18bbffa70(void)

{
  return;
}



// ===== continuation @ rva bbfb880 (image 18bbfb880) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbfb880(void)

{
  FUN_190ddce00();
  (*_DAT_181cbd998)();
  return;
}



// ===== continuation @ rva bc00d1d (image 18bc00d1d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc00d1d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cbd388)();
  return;
}



// ===== continuation @ rva bc00ba4 (image 18bc00ba4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc00ba4(void)

{
  FUN_190de3220();
  (*_DAT_181cbbf98)();
  return;
}



// ===== continuation @ rva bc04c03 (image 18bc04c03) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc04c03(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181cbcdf8)();
  return;
}



// ===== continuation @ rva bbfec98 (image 18bbfec98) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbfec98(void)

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



// ===== continuation @ rva bc03890 (image 18bc03890) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc03890(void)

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



// ===== continuation @ rva bbffbef (image 18bbffbef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbffbef(void)

{
  (*_DAT_181cbd658)();
  return;
}



// ===== continuation @ rva bc03b30 (image 18bc03b30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc03b30(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cbb8f8)();
  return;
}



// ===== continuation @ rva bc019ba (image 18bc019ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc019ba(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181cbc408)();
  return;
}



// ===== continuation @ rva bc01fae (image 18bc01fae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc01fae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cbd4a8)();
  return;
}



// ===== continuation @ rva bc012f1 (image 18bc012f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc012f1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181cbc418)();
  return;
}



// ===== continuation @ rva bc04c27 (image 18bc04c27) =====

void FUN_18bc04c27(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bbff981 (image 18bbff981) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbff981(void)

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



// ===== continuation @ rva bc096d1 (image 18bc096d1) =====

void FUN_18bc096d1(void)

{
  return;
}



// ===== continuation @ rva bc04e50 (image 18bc04e50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc04e50(void)

{
  FUN_190ddce00();
  (*_DAT_181cc09d8)();
  return;
}



// ===== continuation @ rva bc0df11 (image 18bc0df11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc0df11(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181cbf448)();
  return;
}



// ===== continuation @ rva bc0d208 (image 18bc0d208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc0d208(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb1,5);
  (*_DAT_181cbf6a8)();
  return;
}



// ===== continuation @ rva bc11269 (image 18bc11269) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc11269(void)

{
  (*_DAT_181cc1878)();
  return;
}



// ===== continuation @ rva bc0a6bd (image 18bc0a6bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc0a6bd(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181cc1138)();
  return;
}



// ===== continuation @ rva bc093b5 (image 18bc093b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc093b5(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190ddfc90(in_stack_00000030,&stack0x00000040,*_DAT_18301ee50 + 0xb809,*_DAT_18301ee50 + 0x1b7a
                ,0xaa6);
  (*_DAT_181cbf498)();
  return;
}



// ===== continuation @ rva bc11380 (image 18bc11380) =====

void FUN_18bc11380(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bc0d19a (image 18bc0d19a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc0d19a(void)

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



// ===== continuation @ rva bc11274 (image 18bc11274) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc11274(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x1f8))(in_stack_00000030);
  (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  (*_DAT_181cbf018)();
  return;
}



// ===== continuation @ rva bc0afcb (image 18bc0afcb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc0afcb(void)

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



// ===== continuation @ rva bc11318 (image 18bc11318) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc11318(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181cbfa18)();
  return;
}



// ===== continuation @ rva bc11037 (image 18bc11037) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc11037(void)

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



// ===== continuation @ rva bc0ff7b (image 18bc0ff7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc0ff7b(void)

{
  (*_DAT_181cc1848)();
  return;
}



// ===== continuation @ rva bc16ce2 (image 18bc16ce2) =====

void FUN_18bc16ce2(void)

{
  return;
}



// ===== continuation @ rva bc115a4 (image 18bc115a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc115a4(void)

{
  FUN_190ddce00();
  (*_DAT_181cc2c28)();
  return;
}



// ===== continuation @ rva bc16cd3 (image 18bc16cd3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc16cd3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181cc3198)();
  return;
}



// ===== continuation @ rva bc1492b (image 18bc1492b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc1492b(void)

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



// ===== continuation @ rva bc16c5c (image 18bc16c5c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc16c5c(void)

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



// ===== continuation @ rva bc15be8 (image 18bc15be8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc15be8(void)

{
  FUN_190dd72e0();
  (*_DAT_181cc2a18)();
  return;
}



// ===== continuation @ rva bc15b6b (image 18bc15b6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc15b6b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181cc27d8)();
  return;
}



// ===== continuation @ rva bc1689f (image 18bc1689f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc1689f(void)

{
  (*_DAT_181cc32d8)();
  return;
}



// ===== continuation @ rva bc15f6b (image 18bc15f6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc15f6b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cc2bd8)();
  return;
}



// ===== continuation @ rva bc14e7d (image 18bc14e7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc14e7d(void)

{
  FUN_190ddce00();
  (*_DAT_181cc2da8)();
  return;
}



// ===== continuation @ rva bc1562b (image 18bc1562b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc1562b(void)

{
  (*_DAT_181cc2ef8)();
  return;
}



// ===== continuation @ rva bc16d6b (image 18bc16d6b) =====

void FUN_18bc16d6b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bc160c9 (image 18bc160c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc160c9(void)

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



// ===== continuation @ rva bc1a9a6 (image 18bc1a9a6) =====

void FUN_18bc1a9a6(void)

{
  return;
}



// ===== continuation @ rva bc16f84 (image 18bc16f84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc16f84(void)

{
  FUN_190ddce00();
  (*_DAT_181cc4278)();
  return;
}



// ===== continuation @ rva bc16ffc (image 18bc16ffc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc16ffc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_181cc4778)();
  return;
}



// ===== continuation @ rva bc1a5c8 (image 18bc1a5c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc1a5c8(void)

{
  (*_DAT_181cc4768)();
  return;
}



// ===== continuation @ rva bc1aa33 (image 18bc1aa33) =====

void FUN_18bc1aa33(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bc1a060 (image 18bc1a060) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc1a060(void)

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



// ===== continuation @ rva bc1a997 (image 18bc1a997) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc1a997(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181cc44d8)();
  return;
}



// ===== continuation @ rva bc1a4d0 (image 18bc1a4d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc1a4d0(void)

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



// ===== continuation @ rva bc1a7a3 (image 18bc1a7a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc1a7a3(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cc4488)();
  return;
}



// ===== continuation @ rva bc19c9a (image 18bc19c9a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc19c9a(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181cc4818)();
  return;
}



// ===== continuation @ rva bc199cf (image 18bc199cf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc199cf(void)

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



// ===== continuation @ rva bc1a165 (image 18bc1a165) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bc1a165(void)

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



// ===== continuation @ rva bc19c58 (image 18bc19c58) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bc19c58(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181cc47a8)();
  return;
}



// ===== continuation @ rva bb835c6 (image 18bb835c6) =====

void FUN_18bb835c6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x00018bb835f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ca4740 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva bb83573 (image 18bb83573) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bb835a9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bb83573(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva bb997d6 (image 18bb997d6) =====

void FUN_18bb997d6(void)

{
  return;
}



// ===== continuation @ rva bb996fa (image 18bb996fa) =====

undefined8 thunk_FUN_18bb835ac(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva bb997d1 (image 18bb997d1) =====

undefined8 thunk_FUN_18bb835ac(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva bb994e1 (image 18bb994e1) =====

undefined8 thunk_FUN_18bb835ac(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva bb9651b (image 18bb9651b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb9651b(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_XMM14_Da;
  
  uVar2 = (~param_2 + 2) * ((param_3 ^ in_RAX) + param_4);
  uVar2 = (uVar2 | param_1) + (uVar2 & param_1);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832c6470 =
       func_0x00018bbad5d0((in_RAX ^ 1 | uVar2) + (ulonglong)((uint)(in_RAX ^ 1) & (uint)uVar2));
  uVar5 = unaff_ESI & _DAT_18001a990;
  uVar6 = unaff_ESI | _DAT_18001a990;
  uVar4 = unaff_ESI ^ _DAT_18001a990;
  uVar2 = _DAT_1832c6470 >> 1 | _DAT_1832c6470;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_1832c6470;
  uVar2 = ((ulonglong)uVar4 * (ulonglong)_DAT_181ca5000 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_181ca4ff0 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_181ca4fe0 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_181ca4fd0 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_181ca4fc0 << 0x20 |
          (ulonglong)uVar5 * (ulonglong)_DAT_181ca4fb0) +
          ((ulonglong)unaff_ESI * (ulonglong)_DAT_181ca4fa0 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_181ca4f90 +
          (-(((ulonglong)(unaff_ESI ^ unaff_XMM14_Da) * (ulonglong)_DAT_181ca50c0 + _DAT_181ca50d0
             << 0x20) + (ulonglong)(unaff_ESI ^ unaff_XMM14_Da) * (ulonglong)_DAT_181ca50b0) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_181ca50a0 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_181ca5090 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_181ca5080 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_181ca5070 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_181ca5060 << 0x20 |
          (ulonglong)uVar5 * (ulonglong)_DAT_181ca5050) +
          ((ulonglong)(unaff_ESI * _DAT_181ca5040) << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_181ca5030)) + 0x23b48fb859d102fc;
  _DAT_1832c6980 = _DAT_1832c6a68 ^ uVar3 ^ uVar2;
  _DAT_1832c69c8 = (_DAT_1832c69c8 ^ uVar3) + uVar2 ^ 0x17a321b1383a661a;
  _DAT_1832c6a98 = (_DAT_1832c6a98 * 0x29a5d85a141eee27 ^ _DAT_1832c69c8) + uVar3;
  _DAT_1832c6488 = _DAT_1832c6a98 ^ _DAT_1832c69c8;
  _DAT_1832c69f0 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x68) = (int)uVar2;
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bb9905b (image 18bb9905b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb9905b(void)

{
  uint in_EAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong unaff_R13;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint uVar8;
  uint unaff_XMM12_Da;
  longlong unaff_XMM13_Qa;
  uint unaff_XMM14_Da;
  
  auVar3._8_8_ = _UNK_180062bf8;
  auVar3._0_8_ = in_EAX ^ unaff_R13;
  auVar4 = pshufb(auVar3 ^ _DAT_181ca56c0,_DAT_1800170c0);
  uVar1 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar1 + _DAT_1832c6440;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_1832c6740 ^ uVar1;
  }
  _DAT_1832c67f8 = func_0x00018bbad5d0(SUB161(auVar3 ^ _DAT_181ca56c0,5) ^ uVar2);
  uVar8 = in_EAX & _DAT_18001a990;
  uVar6 = in_EAX ^ _DAT_18001a990;
  uVar7 = in_EAX ^ unaff_XMM14_Da;
  lVar5 = ((ulonglong)in_EAX * (ulonglong)_DAT_181ca5760 << 0x20) +
          (ulonglong)in_EAX * (ulonglong)_DAT_181ca5750;
  uVar2 = _DAT_1832c67f8 >> 1 | _DAT_1832c67f8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1832c67f8) & 0xfffffffff8000000;
  uVar2 = ((((ulonglong)uVar7 * (ulonglong)_DAT_181ca56d0 + _DAT_181ca5740 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_181ca5730 +
            ((ulonglong)uVar6 * (ulonglong)_DAT_181ca5700 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_181ca56f0 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_181ca5700 << 0x20 |
            (ulonglong)uVar8 * (ulonglong)_DAT_181ca56f0) +
            (ulonglong)in_EAX * (ulonglong)_DAT_181ca56e0 +
            ((ulonglong)in_EAX * (ulonglong)_DAT_181ca56d0 << 0x20) + lVar5 +
           ((ulonglong)(in_EAX | _DAT_18001a990) * (ulonglong)_DAT_181ca5720 << 0x20) +
           (ulonglong)(in_EAX | _DAT_18001a990) * (ulonglong)_DAT_181ca5710) -
          (((ulonglong)uVar7 * (ulonglong)unaff_XMM12_Da + unaff_XMM13_Qa << 0x20) +
           (ulonglong)uVar7 * (ulonglong)unaff_XMM8_Da +
           ((ulonglong)uVar6 * (ulonglong)_DAT_181ca57c0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_181ca57b0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_181ca57a0 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_181ca5790) +
           ((ulonglong)in_EAX * (ulonglong)unaff_XMM9_Da << 0x20) +
           (ulonglong)in_EAX * (ulonglong)_DAT_181ca5770 + lVar5)) + 0xd1e0e0ffb0280f08;
  _DAT_1832c6648 = _DAT_1832c6930 ^ uVar1 ^ uVar2;
  _DAT_1832c67e0 = (_DAT_1832c67e0 ^ uVar1) + uVar2 ^ 0xea9ccfdfcc9a9d04;
  _DAT_1832c6ab0 = (_DAT_1832c6ab0 * -0x40687dcc8b90d079 ^ _DAT_1832c67e0) + uVar1;
  _DAT_1832c6a10 = _DAT_1832c6ab0 ^ _DAT_1832c67e0;
  _DAT_1832c6798 = _DAT_1832c6530 ^ uVar2;
  _DAT_1832c6710 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x60) = (int)uVar2;
  *(int *)(unaff_RBP + 0x68) = *(int *)(unaff_RBP + 0x14);
  switch((int)uVar2 < *(int *)(unaff_RBP + 0x14)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bb8971e (image 18bb8971e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb8971e(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong in_RAX;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong unaff_RBP;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar16;
  undefined1 auVar15 [16];
  uint uVar17;
  uint uVar19;
  undefined1 auVar18 [16];
  ulonglong uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  longlong lVar23;
  undefined1 auVar24 [16];
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  uint uVar30;
  uint uVar31;
  
  uVar14 = (in_RAX ^ _DAT_181ca5c10) + param_1 + 0x50c330adacb01691;
  uVar16 = (param_1 ^ _UNK_181ca5c18) + in_RAX + 0x6c9294bc94f3b98e;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ in_RAX ^ _DAT_181ca5c10;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ param_1 ^ _UNK_181ca5c18;
  _DAT_1832c6960 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (in_RAX + 0x6c9294bc94f3b98e) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (param_1 + 0x50c330adacb01691));
  uVar14 = (_DAT_1832c6960 & 0x3ffffffffffffff) >> 1 | _DAT_1832c6960 & 0x3ffffffffffffff;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = 0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_1832c6960 & 0x3ffffffffffffff;
  _DAT_1832c64f0 = (_DAT_1832c64f0 ^ uVar14) + 0x7cd3b4bdbcf3bdbe ^ 0xd324ca9669b87e9c;
  _DAT_1832c6760 = (_DAT_1832c6760 * 0x59a87ba2132718f ^ _DAT_1832c64f0) + uVar14;
  _DAT_1832c6940 = _DAT_1832c6760 ^ _DAT_1832c64f0;
  _DAT_1832c64c8 = 0x7cd3b4bdbcf3bdbe;
  uVar14 = (_DAT_1832c65e0 ^ _DAT_181ca5c20) + _DAT_1832c6478 + 0xe10d077203000264;
  uVar16 = (_DAT_1832c6478 ^ _UNK_181ca5c28) + _DAT_1832c65e0 + 0x45e6d7c3aeb225e7;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c65e0 ^ _DAT_181ca5c20;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6478 ^ _UNK_181ca5c28;
  _DAT_1832c6660 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c65e0 + 0x45e6d7c3aeb225e7)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_1832c6478 + 0xe10d077203000264));
  _DAT_1832c6390 =
       (_DAT_1832c6390 ^ _DAT_1832c6660 * 0x2cf66656a538db85) + 0xa4ebd0b1299004a6 ^
       0xa93ac808874fedf8;
  _DAT_1832c6a78 =
       (_DAT_1832c6a78 * -0x472e93337318e199 ^ _DAT_1832c6390) + _DAT_1832c6660 * 0x2cf66656a538db85
  ;
  _DAT_1832c67d8 = _DAT_1832c6a78 ^ _DAT_1832c6390;
  _DAT_1832c66b0 = -0x5b142f4ed66ffb5a;
  _DAT_1832c66c0 = func_0x00018bbad5d0(_DAT_1832c68b8 ^ 0xf7ab17cad4e180a6);
  _DAT_1832c6328 = (_DAT_1832c6328 ^ _DAT_1832c66c0) + 0x2f06d1f7b65c70f0 ^ 0x9527075a679a60ac;
  _DAT_1832c6998 = (_DAT_1832c6998 * -0x2870c0778808c44f ^ _DAT_1832c6328) + _DAT_1832c66c0;
  _DAT_1832c6a00 = _DAT_1832c6998 ^ _DAT_1832c6328;
  _DAT_1832c6a10 = _DAT_1832c64c8 ^ 0x2f06d1f7b65c70f0;
  _DAT_1832c6540 = 0x2f06d1f7b65c70f0;
  uVar14 = (_DAT_1832c6300 ^ _DAT_181ca5c30) + (_DAT_1832c63d8 - 0x84222323);
  uVar16 = (_DAT_1832c63d8 ^ _UNK_181ca5c38) + _DAT_1832c6300 + 0xd0f92e0849a38f10;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c6300 ^ _DAT_181ca5c30;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c63d8 ^ _UNK_181ca5c38;
  _DAT_1832c66c0 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c6300 + 0xd0f92e0849a38f10)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1832c63d8 - 0x84222323));
  uVar14 = _DAT_1832c66c0 & 0x7fffffffffffffff ^ 0xd0f92e0849a38f10;
  _DAT_1832c6420 = _DAT_1832c6998 ^ uVar14 ^ 0xd0f92e0849a38f08;
  _DAT_1832c66e0 = (_DAT_1832c66e0 ^ uVar14) + 0xd0f92e0849a38f08 ^ 0xe3224f94d3629cfd;
  _DAT_1832c6610 = (_DAT_1832c6610 * 0x6319a2f83802fe05 ^ _DAT_1832c66e0) + uVar14;
  _DAT_1832c6a68 = _DAT_1832c6610 ^ _DAT_1832c66e0;
  _DAT_1832c6470 = 0xd0f92e0849a38f08;
  uVar14 = (_DAT_1832c6a98 ^ _DAT_181ca5c40) + _DAT_1832c6aa8 + 0xd0f92e08cd81ac2d;
  uVar16 = (_DAT_1832c6aa8 ^ _UNK_181ca5c48) + _DAT_1832c6a98 + 0x2f06d1f7b65c70f0;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c6a98 ^ _DAT_181ca5c40;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6aa8 ^ _UNK_181ca5c48;
  _DAT_1832c6458 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c6a98 + 0x2f06d1f7b65c70f0)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_1832c6aa8 + 0xd0f92e08cd81ac2d));
  uVar14 = (_DAT_1832c6458 ^ 0xc3d80f2baec99780) << 0x21 |
           (_DAT_1832c6458 ^ 0xc3d80f2baec99780) >> 0x1f;
  _DAT_1832c6968 = _DAT_1832c6ae0 ^ uVar14 ^ 0xfffffffffffffff8;
  _DAT_1832c6720 = (_DAT_1832c6720 ^ uVar14) - 8 ^ 0xb512d41b6f82414c;
  _DAT_1832c6708 = (_DAT_1832c6708 * 0xe63e941a4fe34e9 ^ _DAT_1832c6720) + uVar14;
  _DAT_1832c63e8 = _DAT_1832c6708 ^ _DAT_1832c6720;
  _DAT_1832c66f8 = 0xfffffffffffffff8;
  uVar14 = (~_DAT_1832c67f0 + 0x9b6d0b070c826cf3) *
           ((_DAT_1832c6ab0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832c6ab0 & 0x84222325) * 2);
  uVar14 = (uVar14 | _DAT_1832c66e0) + (uVar14 & _DAT_1832c66e0);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1832c66d0 =
       func_0x00018bbad5d0((uVar14 | 0x9b6d0b0788a04fd7) + (uVar14 & 0x9b6d0b0788a04fd7));
  _DAT_1832c6660 =
       (_DAT_1832c6660 ^ _DAT_1832c66d0 ^ 0x9b6d0b070c826cf2) + 0x6492f4f8f37d930e ^
       0xf260ca49ca0d8e46;
  _DAT_1832c6928 =
       (_DAT_1832c6928 * 0x634ed7427124a0b1 ^ _DAT_1832c6660) +
       (_DAT_1832c66d0 ^ 0x9b6d0b070c826cf2);
  _DAT_1832c6950 = _DAT_1832c6928 ^ _DAT_1832c6660;
  _DAT_1832c63d0 = 0x6492f4f8f37d930e;
  uVar14 = (_DAT_1832c66c8 ^ _DAT_181ca5c50) + (_DAT_1832c6340 - 0x84222323);
  uVar16 = (_DAT_1832c6340 ^ _UNK_181ca5c58) + _DAT_1832c66c8 + 0x9b6d0b070c826cf2;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c66c8 ^ _DAT_181ca5c50;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6340 ^ _UNK_181ca5c58;
  _DAT_1832c6700 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c66c8 + 0x9b6d0b070c826cf2)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1832c6340 - 0x84222323));
  _DAT_1832c6598 = _DAT_1832c6400 ^ _DAT_1832c6700 ^ 0x9b6d0b070c826cea;
  _DAT_1832c6838 = (_DAT_1832c6838 ^ _DAT_1832c6700) + 0x9b6d0b070c826cea ^ 0x6ddd360832b4e716;
  _DAT_1832c6a20 = (_DAT_1832c6a20 * -0x671aeb6a99d108cd ^ _DAT_1832c6838) + _DAT_1832c6700;
  _DAT_1832c67a8 = _DAT_1832c6a20 ^ _DAT_1832c6838;
  _DAT_1832c63b8 = 0x9b6d0b070c826cea;
  uVar14 = (~_DAT_1832c64f8 + 0x6492f4f8f37d930f) *
           ((_DAT_1832c6308 ^ 0x9b6d0b0788a04fcf) + (_DAT_1832c6308 & 0x1b6d0b0788a04fcf) * 2);
  uVar14 = (uVar14 | _DAT_1832c6680) + (uVar14 & _DAT_1832c6680);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1832c6760 =
       func_0x00018bbad5d0((uVar14 | 0xffffffff7bdddcc1) + (uVar14 & 0xffffffff7bdddcc1));
  _DAT_1832c6890 = (_DAT_1832c6890 ^ _DAT_1832c6760 ^ 0x6492f4f8f37d930e) - 8 ^ 0x1bb006bc6867fab2;
  _DAT_1832c6988 =
       (_DAT_1832c6988 * 0x2afede4f5dab241b ^ _DAT_1832c6890) +
       (_DAT_1832c6760 ^ 0x6492f4f8f37d930e);
  _DAT_1832c64c8 = _DAT_1832c6988 ^ _DAT_1832c6890;
  _DAT_1832c65b0 = 0xfffffffffffffff8;
  uVar14 = (_DAT_1832c64b8 ^ _DAT_181ca5c60) + _DAT_1832c68f0 + 0x84222325;
  uVar16 = (_DAT_1832c68f0 ^ _UNK_181ca5c68) + _DAT_1832c64b8 + 0x55a7a8d7c61e2b80;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c64b8 ^ _DAT_181ca5c60;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c68f0 ^ _UNK_181ca5c68;
  _DAT_1832c69c0 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c64b8 + 0x55a7a8d7c61e2b80)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1832c68f0 + 0x84222325));
  _DAT_1832c6500 =
       (_DAT_1832c6500 ^ _DAT_1832c69c0 & 0x7fffffffffffffff) + 0xaa58572839e1d480 ^
       0x388b9e4664a078e8;
  _DAT_1832c6698 =
       (_DAT_1832c6698 * 0x134d3c14b09f3e49 ^ _DAT_1832c6500) +
       (_DAT_1832c69c0 & 0x7fffffffffffffff);
  _DAT_1832c6470 = _DAT_1832c6698 ^ _DAT_1832c6500;
  _DAT_1832c6760 = 0xaa58572839e1d480;
  _DAT_1832c6680 = func_0x00018bbad5d0(_DAT_1832c6388 ^ 0xd72cd8a53ccfc00a);
  _DAT_1832c6420 = _DAT_1832c6408 ^ _DAT_1832c6680 ^ 0x55a7a8d7c61e2b78;
  _DAT_1832c6640 = (_DAT_1832c6640 ^ _DAT_1832c6680) + 0x55a7a8d7c61e2b78 ^ 0xc4d31fb7b2e242b9;
  _DAT_1832c69d0 = (_DAT_1832c69d0 * -0x1161aa3abb16d561 ^ _DAT_1832c6640) + _DAT_1832c6680;
  _DAT_1832c6670 = _DAT_1832c69d0 ^ _DAT_1832c6640;
  _DAT_1832c68e0 = 0x55a7a8d7c61e2b78;
  uVar14 = (_DAT_1832c6530 ^ _DAT_181ca5c70) + _DAT_1832c6a88 + 0x55a7a8d7423c085d;
  uVar16 = (_DAT_1832c6a88 ^ _UNK_181ca5c78) + _DAT_1832c6530 + 0xaa58572839e1d480;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c6530 ^ _DAT_181ca5c70;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6a88 ^ _UNK_181ca5c78;
  _DAT_1832c6978 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c6530 + 0xaa58572839e1d480)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_1832c6a88 + 0x55a7a8d7423c085d));
  uVar14 = _DAT_1832c6978 ^ 0xaa58572839e1d480;
  _DAT_1832c63e8 = _DAT_1832c6368 ^ uVar14 ^ 0xfffffffffffffff8;
  _DAT_1832c6520 = (_DAT_1832c6520 ^ uVar14) - 8 ^ 0xa37bb227f2ec489d;
  _DAT_1832c67e8 = (_DAT_1832c67e8 * 0x751b4924815b35e7 ^ _DAT_1832c6520) + uVar14;
  _DAT_1832c65a8 = _DAT_1832c67e8 ^ _DAT_1832c6520;
  _DAT_1832c6820 = -8;
  _DAT_1832c6790 = func_0x00018bbad5d0(_DAT_1832c65a8 ^ 0x48617f102a43f3b);
  uVar14 = (_DAT_1832c6790 ^ 0xe03204983de00134) & 0x7cd3b4bdbcf3bdbe;
  _DAT_1832c6758 = (_DAT_1832c6758 ^ uVar14) + 0xd838640c9563b918 ^ 0x821d7d1bf277589b;
  _DAT_1832c6630 = (_DAT_1832c6630 * -0x16a2060cc1aa2d39 ^ _DAT_1832c6758) + uVar14;
  _DAT_1832c6490 = _DAT_1832c6630 ^ _DAT_1832c6758;
  _DAT_1832c65f0 = 0xd838640c9563b918;
  uVar14 = ((_DAT_1832c6598 ^ 0x7cd3b4bd38d19e9b) + (_DAT_1832c6598 & 0x7cd3b4bd38d19e9b) * 2) *
           -0x334c935b6bd3b472;
  uVar14 = (uVar14 | _DAT_1832c6990) + (uVar14 & _DAT_1832c6990);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1832c6a60 =
       func_0x00018bbad5d0((uVar14 | 0xd838640c11419a3d) + (uVar14 & 0xd838640c11419a3d));
  _DAT_1832c6340 =
       (_DAT_1832c6340 ^ _DAT_1832c6a60 & 0x7fffffffffffffff) + 0x24c390b1289004a6 ^
       0x49c5163dbafb7bde;
  _DAT_1832c6688 =
       (_DAT_1832c6688 * 0x38176ad808e1e5f5 ^ _DAT_1832c6340) +
       (_DAT_1832c6a60 & 0x7fffffffffffffff);
  _DAT_1832c6308 = _DAT_1832c6688 ^ _DAT_1832c6340;
  _DAT_1832c64f8 = 0x24c390b1289004a6;
  uVar14 = (~_DAT_1832c6a40 + 0x498721625120094d) *
           ((_DAT_1832c6840 ^ 0xd838640c11419a3d) + (_DAT_1832c6840 & 0x5838640c11419a3d) * 2);
  uVar14 = (uVar14 | _DAT_1832c65e8) + (uVar14 & _DAT_1832c65e8);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1832c6698 =
       func_0x00018bbad5d0((uVar14 | 0x91bf456e40619371) + (uVar14 & 0x91bf456e40619371));
  uVar14 = (_DAT_1832c6698 << 0x2e | _DAT_1832c6698 >> 0x12) ^ 0xd838640c9563b918;
  _DAT_1832c6a60 = _DAT_1832c63b0 ^ uVar14 ^ 0x21bf856ee683c264;
  _DAT_1832c64c0 = (_DAT_1832c64c0 ^ uVar14) + 0x21bf856ee683c264 ^ 0x6fe21ea8476be84a;
  _DAT_1832c6820 = (_DAT_1832c6820 * -0x5713824f662c65f9 ^ _DAT_1832c64c0) + uVar14;
  _DAT_1832c6908 = _DAT_1832c6820 ^ _DAT_1832c64c0;
  _DAT_1832c6968 = 0x21bf856ee683c264;
  uVar14 = (_DAT_1832c65c0 ^ _DAT_181ca5c80) + _DAT_1832c6930 + 0x21bf856e62a1e141;
  uVar16 = (_DAT_1832c6930 ^ _UNK_181ca5c88) + _DAT_1832c65c0 + 0x21bf856ee683c264;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c65c0 ^ _DAT_181ca5c80;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6930 ^ _UNK_181ca5c88;
  _DAT_1832c6a28 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c65c0 + 0x21bf856ee683c264)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_1832c6930 + 0x21bf856e62a1e141));
  _DAT_1832c63f8 = _DAT_1832c6748;
  _DAT_1832c69c8 = _DAT_1832c6468 ^ _DAT_1832c6748 ^ 0xe65329a3f1aa71ee;
  _DAT_1832c6468 = (_DAT_1832c6468 * 0x287c38176ccece7b ^ _DAT_1832c69c8) + _DAT_1832c6748;
  _DAT_1832c69c8 = _DAT_1832c6468 ^ _DAT_1832c69c8;
  _DAT_1832c6780 = 0;
  _DAT_1832c6a20 = func_0x00018bbad5d0(_DAT_1832c6528 ^ 0x2b5ca8c82c362a77);
  uVar16 = _DAT_1832c6a20 * -0x3b83c75749f9c61;
  uVar14 = uVar16 >> 1 | uVar16;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar16 = (0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar16;
  _DAT_1832c68c8 = _DAT_1832c6400 ^ uVar16 ^ 0xfffffffffffffff8;
  _DAT_1832c6870 = (_DAT_1832c6870 ^ uVar16) - 8 ^ 0x5bfab62f59f10139;
  _DAT_1832c67a8 = (_DAT_1832c67a8 * -0x4fbd2423e7eac34b ^ _DAT_1832c6870) + uVar16;
  _DAT_1832c63f0 = _DAT_1832c67a8 ^ _DAT_1832c6870;
  _DAT_1832c69a8 = -8;
  uVar14 = (_DAT_1832c6998 ^ _DAT_181ca5c90) + _DAT_1832c6810 + 0x7cd3b4bd38d19e9b;
  uVar16 = (_DAT_1832c6810 ^ _UNK_181ca5c98) + (_DAT_1832c6998 - 1);
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c6998 ^ _DAT_181ca5c90;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6810 ^ _UNK_181ca5c98;
  _DAT_1832c6788 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c6998 - 1) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1832c6810 + 0x7cd3b4bd38d19e9b)
                          );
  _DAT_1832c6360 =
       (_DAT_1832c6360 ^ _DAT_1832c6788 ^ 0x7cd3b4bdbcf3bdbe) + 0x832c4b42430c4241 ^
       0x1e9e69611709c13a;
  _DAT_1832c6740 =
       (_DAT_1832c6740 * -0x24bdbfe58de0e0dd ^ _DAT_1832c6360) +
       (_DAT_1832c6788 ^ 0x7cd3b4bdbcf3bdbe);
  _DAT_1832c6a68 = _DAT_1832c6740 ^ _DAT_1832c6360;
  _DAT_1832c65d0 = 0x832c4b42430c4241;
  uVar14 = (_DAT_1832c6ac8 ^ _DAT_181ca5ca0) + _DAT_1832c67c8 + 0x7cd3b4bd38d19e9b;
  uVar16 = (_DAT_1832c67c8 ^ _UNK_181ca5ca8) + _DAT_1832c6ac8 + 0x832c4b42430c4241;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c6ac8 ^ _DAT_181ca5ca0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c67c8 ^ _UNK_181ca5ca8;
  _DAT_1832c69d0 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c6ac8 + 0x832c4b42430c4241)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_1832c67c8 + 0x7cd3b4bd38d19e9b));
  uVar14 = _DAT_1832c69d0 - (_DAT_1832c69d0 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
           _DAT_1832c69d0;
  _DAT_1832c6328 = _DAT_1832c6328 ^ uVar14 ^ 0x26fa610a46c9d29c;
  _DAT_1832c68d0 = (_DAT_1832c68d0 * 0x65bb25b172241883 ^ _DAT_1832c6328) + uVar14;
  _DAT_1832c6498 = _DAT_1832c68d0 ^ _DAT_1832c6328;
  _DAT_1832c64b0 = 0;
  _DAT_1832c65b8 = func_0x00018bbad5d0(_DAT_1832c69e0 + 0x5ad4e4a93b7dba8e ^ 0xbe);
  uVar14 = _DAT_1832c65b8 >> 1 | _DAT_1832c65b8;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           _DAT_1832c65b8;
  _DAT_1832c68a0 = _DAT_1832c6898 ^ uVar14 ^ 0xfffffffffffffff8;
  _DAT_1832c65e8 = (_DAT_1832c65e8 ^ uVar14) - 8 ^ 0xcb76b5d035dd030c;
  _DAT_1832c6558 = (_DAT_1832c6558 * -0x782ec8ceaaf68f77 ^ _DAT_1832c65e8) + uVar14;
  _DAT_1832c66a0 = _DAT_1832c6558 ^ _DAT_1832c65e8;
  _DAT_1832c6618 = 0xfffffffffffffff8;
  uVar14 = *(ulonglong *)(unaff_RBP + 0x50);
  uVar16 = (~_DAT_1832c6658 - 7) *
           ((uVar14 ^ 0x84222325 ^ _DAT_1832c6ac0) + ((uVar14 ^ 0x84222325) & _DAT_1832c6ac0) * 2);
  uVar16 = (uVar16 | _DAT_1832c66e8) + (uVar16 & _DAT_1832c66e8);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_1832c6988 =
       func_0x00018bbad5d0((uVar14 ^ 0xffffffff7bdddcdd | uVar16) +
                           (uVar16 & (uVar14 ^ 0xffffffff7bdddcdd)));
  uVar9 = _DAT_181ca5cb0;
  uVar1 = _DAT_1832c6988 & uVar14;
  uVar19 = (uint)(uVar14 >> 0x20);
  auVar15._8_4_ = (uint)uVar14;
  auVar15._0_8_ = uVar14;
  auVar15._12_4_ = uVar19;
  auVar18 = _DAT_1800627b0 ^ auVar15;
  uVar16 = (ulonglong)_DAT_181ca5cc0;
  uVar13 = (ulonglong)_DAT_181ca5d70;
  auVar29 = auVar15 & _DAT_1800627b0;
  uVar31 = (uint)uVar14 | (uint)DAT_1800627b0;
  uVar25 = (ulonglong)_DAT_181ca5cb0;
  *(ulonglong *)(unaff_RBP + 0x50) = (ulonglong)uVar19;
  *(ulonglong *)(unaff_RBP + 0x58) = auVar15._8_8_ >> 0x20;
  uVar26 = auVar29._0_4_;
  uVar28 = auVar29._0_8_;
  uVar17 = auVar18._0_4_;
  uVar20 = auVar18._0_8_;
  uVar21 = SUB164(auVar15 ^ _DAT_18001a710,0);
  lVar23 = (uVar13 * (uVar14 & 0xffffffff) +
            (ulonglong)_DAT_181ca5d60 * (ulonglong)*(uint *)(unaff_RBP + 0x50) << 0x20) +
           (uVar14 & 0xffffffff) * (ulonglong)_DAT_181ca5d60;
  uVar25 = (((ulonglong)uVar21 * (ulonglong)_DAT_181ca5cf0 +
             ((ulonglong)_DAT_181ca5d50 * (ulonglong)uVar21 +
              (SUB168(auVar15 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_181ca5cf0 << 0x20) +
             lVar23 + (ulonglong)_DAT_181ca5d30 * (ulonglong)uVar17 +
                      ((ulonglong)_DAT_181ca5d40 * (ulonglong)uVar17 +
                       (uVar20 >> 0x20) * (ulonglong)_DAT_181ca5d30 << 0x20) +
                      ((ulonglong)_DAT_181ca5d10 * (ulonglong)uVar31 + _DAT_181ca5d20 << 0x20) +
                      (ulonglong)_DAT_181ca5d00 * (ulonglong)uVar31 +
                      (ulonglong)_DAT_181ca5cd0 * (ulonglong)uVar26 +
                      ((ulonglong)_DAT_181ca5ce0 * (ulonglong)uVar26 +
                       (uVar28 >> 0x20) * (ulonglong)_DAT_181ca5cd0 << 0x20) +
                      (uVar16 * (uVar14 & 0xffffffff) + (ulonglong)uVar9 * (ulonglong)uVar19 << 0x20
                      ) + (uVar14 & 0xffffffff) * uVar25) -
           ((ulonglong)uVar17 * (ulonglong)_DAT_181ca5df0 +
            ((ulonglong)_DAT_181ca5e00 * (ulonglong)uVar17 +
             (uVar20 >> 0x20) * (ulonglong)_DAT_181ca5df0 << 0x20) +
            ((ulonglong)uVar31 * (ulonglong)_DAT_181ca5dd0 + _DAT_181ca5de0 << 0x20) +
            (ulonglong)_DAT_181ca5dc0 * (ulonglong)uVar31 +
            (ulonglong)uVar26 * (_DAT_181ca5da0 & 0xffffffff) +
            ((ulonglong)_DAT_181ca5db0 * (ulonglong)uVar26 +
             (uVar28 >> 0x20) * (_DAT_181ca5da0 & 0xffffffff) << 0x20) +
            ((uVar14 & 0xffffffff) * (ulonglong)_DAT_181ca5d90 +
             (ulonglong)*(uint *)(unaff_RBP + 0x50) * (ulonglong)_DAT_181ca5d80 << 0x20) +
            (uVar14 & 0xffffffff) * (ulonglong)_DAT_181ca5d80 + lVar23)) + _DAT_181ca5e10;
  _DAT_1832c6980 = _DAT_1832c67e8 ^ uVar1 ^ uVar25;
  _DAT_1832c6930 = (_DAT_1832c6930 ^ uVar1) + uVar25 ^ 0xe791bd1894c05133;
  _DAT_1832c69e8 = (_DAT_1832c69e8 * 0x426e423d1f140147 ^ _DAT_1832c6930) + uVar1;
  _DAT_1832c6568 = _DAT_1832c69e8 ^ _DAT_1832c6930;
  auVar18._0_8_ = _DAT_1800632f0 ^ uVar25;
  uVar14 = *(ulonglong *)(unaff_RBP + 0x90);
  auVar18._8_8_ = uVar14;
  auVar15 = pshufb(auVar18 ^ _DAT_181ca5e20,_DAT_1800170c0);
  uVar13 = auVar15._8_8_ + auVar15._0_8_;
  uVar16 = uVar13 + _DAT_1832c6398;
  if (auVar15._4_4_ < 0) {
    uVar16 = _DAT_1832c69b0 ^ uVar13;
  }
  _DAT_1832c6970 = uVar25;
  uVar10 = func_0x00018bbad5d0(SUB161(auVar18 ^ _DAT_181ca5e20,5) ^ uVar16);
  uVar9 = _DAT_181ca5e60;
  uVar26 = (uint)(uVar25 >> 0x20);
  auVar29._8_4_ = (int)uVar25;
  auVar29._0_8_ = uVar25;
  auVar29._12_4_ = uVar26;
  uVar31 = (uint)(uVar14 >> 0x20);
  auVar24._8_4_ = (int)uVar14;
  auVar24._0_8_ = uVar14;
  auVar24._12_4_ = uVar31;
  uVar3 = (ulonglong)_DAT_181ca5e40;
  uVar16 = (ulonglong)_DAT_181ca5e40;
  auVar18 = auVar29 ^ _DAT_18001a710;
  auVar22._8_4_ = 0xffffffff;
  auVar22._0_8_ = 0xffffffffffffffff;
  auVar22._12_4_ = 0xffffffff;
  uVar13 = (ulonglong)_DAT_181ca5e60;
  *(undefined1 (*) [16])(unaff_RBP + 0x50) = auVar29 & auVar24;
  uVar4 = (ulonglong)_DAT_181ca5e30;
  uVar5 = (ulonglong)_DAT_181ca5e50;
  uVar1 = (ulonglong)_DAT_181ca5e30;
  uVar30 = auVar18._0_4_;
  uVar6 = (ulonglong)_DAT_181ca5e70;
  uVar7 = (ulonglong)_DAT_181ca5e70;
  uVar20 = (ulonglong)_DAT_181ca5e50;
  uVar21 = SUB164(auVar22 ^ auVar24,0);
  uVar28 = (ulonglong)_DAT_181ca5e80;
  uVar27 = SUB168(auVar22 ^ auVar24,0);
  uVar8 = (ulonglong)_DAT_181ca5e80;
  uVar2 = (ulonglong)_DAT_181ca5ec0;
  *(undefined1 (*) [16])(unaff_RBP + 0x20) = auVar29;
  uVar12 = (uVar25 | uVar14) ^ uVar10;
  uVar11 = uVar12 >> 1 | uVar12;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar12 = 0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           uVar12;
  uVar11 = *(ulonglong *)(unaff_RBP + 0x50);
  uVar17 = SUB164(auVar29 | auVar24,0);
  uVar19 = SUB164(auVar29 ^ auVar24,0);
  uVar13 = ((uVar28 * uVar21 + ((uVar27 >> 0x20) * uVar8 + uVar20 * uVar21 << 0x20) +
             uVar13 * (uVar14 & 0xffffffff) +
             ((ulonglong)uVar31 * (ulonglong)uVar9 + (uVar14 & 0xffffffff) * uVar5 << 0x20) +
             uVar16 * (uVar25 & 0xffffffff) +
             (uVar26 * uVar3 + (uVar25 & 0xffffffff) * uVar4 << 0x20) +
            uVar30 * uVar7 + ((auVar18._0_8_ >> 0x20) * uVar6 + uVar1 * uVar30 << 0x20)) -
           ((ulonglong)uVar21 * (_DAT_181ca5ef0 & 0xffffffff) +
            ((ulonglong)_DAT_181ca5f60 * (ulonglong)uVar21 +
             (uVar27 >> 0x20) * (_DAT_181ca5ef0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar19 * (ulonglong)_DAT_181ca5f40 +
           ((ulonglong)_DAT_181ca5f50 * (ulonglong)uVar19 +
            (SUB168(auVar29 ^ auVar24,0) >> 0x20) * (ulonglong)_DAT_181ca5f40 << 0x20) +
           (ulonglong)uVar17 * (ulonglong)_DAT_181ca5f20 +
           ((ulonglong)_DAT_181ca5f30 * (ulonglong)uVar17 +
            (SUB168(auVar29 | auVar24,0) >> 0x20) * (ulonglong)_DAT_181ca5f20 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_181ca5f00 +
           ((ulonglong)_DAT_181ca5f10 * (uVar11 & 0xffffffff) +
            (uVar11 >> 0x20) * (ulonglong)_DAT_181ca5f00 << 0x20) +
           ((uVar14 & 0xffffffff) * (ulonglong)_DAT_181ca5ee0 +
            (ulonglong)uVar31 * (ulonglong)_DAT_181ca5ed0 << 0x20) +
           (uVar14 & 0xffffffff) * (ulonglong)_DAT_181ca5ed0 +
           (ulonglong)*(uint *)(unaff_RBP + 0x20) * (ulonglong)_DAT_181ca5eb0 +
           (uVar2 * (uVar25 & 0xffffffff) + (ulonglong)uVar26 * (ulonglong)_DAT_181ca5eb0 << 0x20)))
           + 0xec50b9bbf26c5402;
  _DAT_1832c6a98 = uVar13 ^ uVar12;
  _DAT_1832c64b8 = (uVar10 ^ uVar12) + uVar13 ^ 0xba30146168aab85d;
  _DAT_1832c68e0 = (_DAT_1832c68e0 * 0x2f70bf15731f1f5d ^ _DAT_1832c64b8) + uVar12;
  _DAT_1832c65d0 = _DAT_1832c68e0 ^ _DAT_1832c64b8;
  _DAT_1832c6748 = uVar13;
  _DAT_1832c69e0 = func_0x00018bbad5d0(_DAT_1832c67d8 + 0xc33adf9b401edce8 ^ 0xb4);
  _DAT_1832c6320 =
       (_DAT_1832c6320 ^ ~_DAT_1832c69e0 & 0x87955cd5b14e55b9) + 0xbfb57dddf17ffffd ^
       0x30e8a0929e8230a2;
  _DAT_1832c64e0 =
       (_DAT_1832c64e0 * -0x242c59cec4195275 ^ _DAT_1832c6320) +
       (~_DAT_1832c69e0 & 0x87955cd5b14e55b9);
  _DAT_1832c63d8 = _DAT_1832c64e0 ^ _DAT_1832c6320;
  _DAT_1832c64c0 = 0xbfb57dddf17ffffd;
  uVar14 = (_DAT_1832c66a8 ^ _DAT_181ca5f70) + _DAT_1832c6a60 + 0x4dc39df49aa6b36b;
  uVar16 = (_DAT_1832c6a60 ^ _UNK_181ca5f78) + _DAT_1832c66a8 + 0x41b4b5c9db4e70bf;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c66a8 ^ _DAT_181ca5f70;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6a60 ^ _UNK_181ca5f78;
  _DAT_1832c6618 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c66a8 + 0x41b4b5c9db4e70bf)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_1832c6a60 + 0x4dc39df49aa6b36b));
  uVar14 = (_DAT_1832c6618 ^ 0x857ecd9175cdca32) * -0x5bde3a40c65f7803;
  _DAT_1832c6778 = (_DAT_1832c6778 ^ uVar14) + 0xc77283dc5cae0f1 ^ 0xa5345922c618bf28;
  _DAT_1832c6968 = (_DAT_1832c6968 * 0x54a9d8c5d29a1c25 ^ _DAT_1832c6778) + uVar14;
  _DAT_1832c6608 = _DAT_1832c6968 ^ _DAT_1832c6778;
  _DAT_1832c6478 = 0xc77283dc5cae0f1;
  _DAT_1832c6ad0 = func_0x00018bbad5d0(_DAT_1832c64d0 ^ 0x4638564da7f3e2d5);
  uVar14 = _DAT_1832c6ad0 - (_DAT_1832c6ad0 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar16 = (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
           _DAT_1832c6ad0;
  uVar14 = uVar16 >> 1 | uVar16;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar16 = (0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x40 ^ uVar16;
  _DAT_1832c64b0 = (_DAT_1832c64b0 ^ uVar16) + 0x5e0588398e339473 ^ 0xd9ae1807c90bc059;
  _DAT_1832c69c0 = (_DAT_1832c69c0 * 0x12dfc974a27145e1 ^ _DAT_1832c64b0) + uVar16;
  _DAT_1832c6408 = _DAT_1832c69c0 ^ _DAT_1832c64b0;
  _DAT_1832c6698 = 0x5e0588398e339473;
  uVar14 = (~_DAT_1832c64b0 + 0x5e0588398e339474) *
           ((_DAT_1832c6658 ^ 0xa1fa77c6f5ee4888) + (_DAT_1832c6658 & 0x21fa77c6f5ee4888) * 2);
  uVar14 = (uVar14 | _DAT_1832c6460) + (uVar14 & _DAT_1832c6460);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1832c67d8 =
       func_0x00018bbad5d0((uVar14 | 0xffffffff7bdddcfb) + (uVar14 & 0xffffffff7bdddcfb));
  uVar14 = _DAT_1832c67d8 - (_DAT_1832c67d8 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
           _DAT_1832c67d8;
  _DAT_1832c63f8 = _DAT_1832c6538 ^ uVar14 ^ 0x20;
  _DAT_1832c6a78 = (_DAT_1832c6a78 ^ uVar14) + 0x20 ^ 0x7943cd5953ed7aa7;
  _DAT_1832c63d0 = (_DAT_1832c63d0 * 0x1043b64b986b6a51 ^ _DAT_1832c6a78) + uVar14;
  _DAT_1832c64b8 = _DAT_1832c63d0 ^ _DAT_1832c6a78;
  _DAT_1832c6a50 = 0x20;
  uVar14 = (~_DAT_1832c69e0 + 0x30636629bfb3dbb5) *
           ((_DAT_1832c6520 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832c6520 & 0x84222325) * 2);
  uVar14 = (uVar14 | _DAT_1832c6788) + (uVar14 & _DAT_1832c6788);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1832c6a30 =
       func_0x00018bbad5d0((uVar14 | 0x306366293b91f891) + (uVar14 & 0x306366293b91f891));
  _DAT_1832c65c8 = (_DAT_1832c65c8 ^ _DAT_1832c6a30) + 0xcf9c99d6404c244c ^ 0xf28124424f51989b;
  _DAT_1832c6798 = (_DAT_1832c6798 * 0x770cb974f50c13d3 ^ _DAT_1832c65c8) + _DAT_1832c6a30;
  _DAT_1832c6668 = _DAT_1832c6798 ^ _DAT_1832c65c8;
  _DAT_1832c6470 = 0xcf9c99d6404c244c;
  uVar14 = (_DAT_1832c6990 ^ _DAT_181ca5f80) + _DAT_1832c63c0 + 0x84222305;
  uVar16 = (_DAT_1832c63c0 ^ _UNK_181ca5f88) + _DAT_1832c6990 + 0x30636629bfb3dbb4;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c6990 ^ _DAT_181ca5f80;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c63c0 ^ _UNK_181ca5f88;
  _DAT_1832c6310 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c6990 + 0x30636629bfb3dbb4)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1832c63c0 + 0x84222305));
  uVar14 = _DAT_1832c6310 * -0x1a02821e00694dbb & 0x1ffffffffffff;
  _DAT_1832c68a0 = _DAT_1832c66e0 ^ uVar14 ^ 0x30636629bfb3dbd4;
  _DAT_1832c6760 = (_DAT_1832c6760 ^ uVar14) + 0x30636629bfb3dbd4 ^ 0xec14c1f4b61142e9;
  _DAT_1832c66a8 = (_DAT_1832c66a8 * -0x21cff1c949522c13 ^ _DAT_1832c6760) + uVar14;
  _DAT_1832c6a50 = _DAT_1832c66a8 ^ _DAT_1832c6760;
  _DAT_1832c6820 = 0x30636629bfb3dbd4;
  uVar14 = (_DAT_1832c66a8 ^ _DAT_181ca5f90) + _DAT_1832c6978 + 0x306366293b91f8f1;
  uVar16 = (_DAT_1832c6978 ^ _UNK_181ca5f98) + _DAT_1832c66a8 + 0xcf9c99d6404c244c;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c66a8 ^ _DAT_181ca5f90;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6978 ^ _UNK_181ca5f98;
  _DAT_1832c6488 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c66a8 + 0xcf9c99d6404c244c)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_1832c6978 + 0x306366293b91f8f1));
  uVar14 = (_DAT_1832c6488 ^ 0x30636629bfb3dbd4) << 10 |
           (_DAT_1832c6488 ^ 0x30636629bfb3dbd4) >> 0x36;
  _DAT_1832c6390 = _DAT_1832c63e8 ^ uVar14 ^ 0x20;
  _DAT_1832c6908 = (_DAT_1832c6908 ^ uVar14) + 0x20 ^ 0x1d5d3fe9103f19da;
  _DAT_1832c69a8 = (_DAT_1832c69a8 * 0x36db9555e535d11 ^ _DAT_1832c6908) + uVar14 ^ _DAT_1832c6908;
  _DAT_1832c67a0 = 0x20;
  _DAT_1832c6ab0 = func_0x00018bbad5d0(_DAT_1832c6738 + 0x6fada6e4c12ed108 ^ 0xb3);
  _DAT_1832c6348 = (_DAT_1832c6348 ^ _DAT_1832c6ab0) + 0x8410c86f40ae639e ^ 0x326e4a7e0b7b1830;
  _DAT_1832c6528 = (_DAT_1832c6528 * -0xfa3a25085f315a7 ^ _DAT_1832c6348) + _DAT_1832c6ab0;
  _DAT_1832c6a58 = _DAT_1832c6528 ^ _DAT_1832c6348;
  _DAT_1832c6510 = _DAT_1832c6388 ^ 0x8410c86f40ae639e;
  _DAT_1832c6858 = 0x8410c86f40ae639e;
  uVar14 = (_DAT_1832c66c0 ^ _DAT_181ca5fa0) + _DAT_1832c6470 + 0x84222305;
  uVar16 = (_DAT_1832c6470 ^ _UNK_181ca5fa8) + _DAT_1832c66c0 + 0x7bef3790bf519c62;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c66c0 ^ _DAT_181ca5fa0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6470 ^ _UNK_181ca5fa8;
  _DAT_1832c6958 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c66c0 + 0x7bef3790bf519c62)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1832c6470 + 0x84222305));
  uVar14 = _DAT_1832c6958 ^ 0x7bef3790bf519c62;
  uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar14 = ((((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar14
           ) & 0x7fffffffffffff;
  _DAT_1832c64a8 = _DAT_1832c64e8 ^ uVar14 ^ 0x7bef3790bf519c82;
  _DAT_1832c64c8 = (_DAT_1832c64c8 ^ uVar14) + 0x7bef3790bf519c82 ^ 0x25b1ba9f677ef27b;
  _DAT_1832c6928 = (_DAT_1832c6928 * 0xaac5b5ccf51965d ^ _DAT_1832c64c8) + uVar14;
  _DAT_1832c6478 = _DAT_1832c6928 ^ _DAT_1832c64c8;
  _DAT_1832c6ab0 = 0x7bef3790bf519c82;
  _DAT_1832c6398 = func_0x00018bbad5d0(_DAT_1832c6708 + 0x60043e501733974c ^ 0x4e);
  uVar14 = _DAT_1832c6398 >> 1 | _DAT_1832c6398;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10 ^ _DAT_1832c6398;
  _DAT_1832c6888 = _DAT_1832c6a98 ^ uVar14 ^ 0xcc2ca61bb74ae0ee;
  _DAT_1832c64f8 = (_DAT_1832c64f8 ^ uVar14) + 0xcc2ca61bb74ae0ee ^ 0x49bed53039b2f440;
  _DAT_1832c67f0 = (_DAT_1832c67f0 * 0x1aa6b472525e3833 ^ _DAT_1832c64f8) + uVar14;
  _DAT_1832c6588 = _DAT_1832c67f0 ^ _DAT_1832c64f8;
  _DAT_1832c6a80 = 0xcc2ca61bb74ae0ee;
  _DAT_1832c6628 = func_0x00018bbad5d0(_DAT_1832c64e8 + 0x202c427026ca894e ^ 0x98);
  uVar14 = _DAT_1832c6628 ^ 0xca104787081f5d2d;
  uVar14 = (uVar14 << 0x1f | uVar14 >> 0x21) >> 0x10 | (uVar14 >> 0x21) << 0x30;
  _DAT_1832c6820 = (_DAT_1832c6820 ^ uVar14) + 0xb3c255e034b51f0c ^ 0xf6429e5971a35bba;
  _DAT_1832c6460 = (_DAT_1832c6460 * 0x2eb432d21a013f63 ^ _DAT_1832c6820) + uVar14;
  _DAT_1832c66b8 = _DAT_1832c6460 ^ _DAT_1832c6820;
  _DAT_1832c6318 = 0xb3c255e034b51f0c;
  uVar14 = (~_DAT_1832c63b8 + 0xc77283dc5cae0f2) *
           ((_DAT_1832c66f0 ^ 0xbfb57ddd755ddcd8) + (_DAT_1832c66f0 & 0x3fb57ddd755ddcd8) * 2);
  uVar14 = (uVar14 | _DAT_1832c68d0) + (uVar14 & _DAT_1832c68d0);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1832c6370 =
       func_0x00018bbad5d0((uVar14 | 0xb3c255e0b0973c29) + (uVar14 & 0xb3c255e0b0973c29));
  uVar14 = (~_DAT_1832c6370 & 0xbfb57dddf17ffffd) << 0x20 |
           (~_DAT_1832c6370 & 0xbfb57dddf17ffffd) >> 0x20;
  _DAT_1832c6a50 = (_DAT_1832c6a50 ^ uVar14) + 0xc35281dc14ae0f1 ^ 0x66894e602afad934;
  _DAT_1832c6ae8 = (_DAT_1832c6ae8 * 0x408b410428a03793 ^ _DAT_1832c6a50) + uVar14;
  _DAT_1832c68f8 = _DAT_1832c6ae8 ^ _DAT_1832c6a50;
  _DAT_1832c6558 = 0xc35281dc14ae0f1;
  _DAT_1832c66e0 = func_0x00018bbad5d0(_DAT_1832c6878 ^ 0x4bb3a7cec8fb01bc);
  uVar14 = (_DAT_1832c66e0 ^ 0xc4fa669e3e497498) * 0x64308283a260c617 & 0xfffffffffffff800;
  _DAT_1832c69f8 = _DAT_1832c67d0 ^ uVar14 ^ 0xcc2ca61bb74ae0ee;
  _DAT_1832c64d8 = (_DAT_1832c64d8 ^ uVar14) + 0xcc2ca61bb74ae0ee ^ 0xf46a6febb7cf907b;
  _DAT_1832c6428 = (_DAT_1832c6428 * -0x702bffd1f63c175 ^ _DAT_1832c64d8) + uVar14;
  _DAT_1832c6990 = _DAT_1832c6428 ^ _DAT_1832c64d8;
  _DAT_1832c69e0 = 0xcc2ca61bb74ae0ee;
  uVar14 = (~_DAT_1832c65f8 + 0xcc2ca61bb74ae0ef) *
           ((_DAT_1832c6950 ^ 0xcc2ca61b3368c3cb) + (_DAT_1832c6950 & 0x4c2ca61b3368c3cb) * 2);
  uVar14 = (uVar14 | _DAT_1832c6488) + (uVar14 & _DAT_1832c6488);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  uVar14 = func_0x00018bbad5d0((uVar14 | 0x84222325) + (ulonglong)((uint)uVar14 & 0x84222325));
  _DAT_1832c6840 = (uVar14 ^ 0xea8c3daf13395d44) << 0x3c | (uVar14 ^ 0xea8c3daf13395d44) >> 4;
  _DAT_1832c68f8 = _DAT_1832c68f8 ^ _DAT_1832c6840 ^ 0xb4cee6711a3ea9d5;
  _DAT_1832c67b8 = (uVar14 * 0x3a7d914e9834c2e3 ^ _DAT_1832c68f8) + _DAT_1832c6840;
  _DAT_1832c68a0 = _DAT_1832c67b8 ^ _DAT_1832c68f8;
  _DAT_1832c6a58 = 0;
  _DAT_1832c6720 = func_0x00018bbad5d0(_DAT_1832c6868 + 0x1eff84050021ffU ^ 0xc5);
  uVar14 = (_DAT_1832c6720 ^ 0x20) << 1 | (ulonglong)((longlong)(_DAT_1832c6720 ^ 0x20) < 0);
  _DAT_1832c68a8 = _DAT_1832c6838 ^ uVar14 ^ 0x20;
  _DAT_1832c6658 = (_DAT_1832c6658 ^ uVar14) + 0x20 ^ 0x5f55b9638e641fd4;
  _DAT_1832c6370 = (_DAT_1832c6370 * 0x74745ecaab8afd9f ^ _DAT_1832c6658) + uVar14;
  _DAT_1832c69e8 = _DAT_1832c6370 ^ _DAT_1832c6658;
  _DAT_1832c6390 = 0x20;
  uVar14 = (_DAT_1832c65c8 ^ _DAT_181ca5fb0) + _DAT_1832c6ac8 + 0xbfb57ddd755ddcd8;
  uVar16 = (_DAT_1832c6ac8 ^ _UNK_181ca5fb8) + (_DAT_1832c65c8 - 1);
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832c65c8 ^ _DAT_181ca5fb0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832c6ac8 ^ _UNK_181ca5fb8;
  _DAT_1832c6738 =
       func_0x00018bbad5d0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832c65c8 - 1) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1832c6ac8 + 0xbfb57ddd755ddcd8)
                          );
  _DAT_1832c67a0 = (_DAT_1832c67a0 ^ _DAT_1832c6738) + 0x404a82220e800002 ^ 0x86827097e11c41a1;
  _DAT_1832c6508 = (_DAT_1832c6508 * -0xf2a17096bc84613 ^ _DAT_1832c67a0) + _DAT_1832c6738;
  _DAT_1832c6af0 = _DAT_1832c6508 ^ _DAT_1832c67a0;
  _DAT_1832c64d8 = 0x404a82220e800002;
  _DAT_1832c6768 = func_0x00018bbad5d0(_DAT_1832c6508 ^ 0x6b440ca8d911bad8);
  _DAT_1832c6ad0 = _DAT_1832c6ad0 ^ _DAT_1832c6768 * -0xf24e3f7ff434e5f ^ 0x4c57b30392c106d1;
  _DAT_1832c6960 =
       (_DAT_1832c6960 * -0x2ec0190c95d2c5f3 ^ _DAT_1832c6ad0) + _DAT_1832c6768 * -0xf24e3f7ff434e5f
  ;
  _DAT_1832c6980 = _DAT_1832c6960 ^ _DAT_1832c6ad0;
  _DAT_1832c6850 = 0;
  _DAT_1832c6a00 = func_0x00018bbad5d0(_DAT_1832c6aa0 + 0x22ff7bfaffe1ffU ^ 0x83);
  uVar14 = _DAT_1832c6a00 & 0x3fffffffffffff;
  _DAT_1832c63b8 = _DAT_1832c63f0 ^ uVar14 ^ 0x20;
  _DAT_1832c6a30 = (_DAT_1832c6a30 ^ uVar14) + 0x20 ^ 0x60b0e985f97a2dc7;
  _DAT_1832c6558 = (_DAT_1832c6558 * 0x366e9b7c25fdd701 ^ _DAT_1832c6a30) + uVar14;
  _DAT_1832c6680 = _DAT_1832c6558 ^ _DAT_1832c6a30;
  _DAT_1832c63e0 = 0x20;
  uVar14 = ((_DAT_1832c6a50 ^ 0x84222305) + (ulonglong)((uint)_DAT_1832c6a50 & 0x84222305) * 2) *
           -_DAT_1832c6700;
  uVar14 = (uVar14 | _DAT_1832c6528) + (uVar14 & _DAT_1832c6528);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1832c6600 =
       func_0x00018bbad5d0((uVar14 | 0x84222305) + (ulonglong)((uint)uVar14 & 0x84222305));
  uVar14 = _DAT_1832c6600 ^ 0x20;
  _DAT_1832c6738 = _DAT_1832c68f8 ^ uVar14 ^ 0x20;
  _DAT_1832c65e8 = (_DAT_1832c65e8 ^ uVar14) + 0x20 ^ 0xa45d830b5676df23;
  _DAT_1832c66b0 = (_DAT_1832c66b0 * 0x5a395b87b9011d75 ^ _DAT_1832c65e8) + uVar14;
  _DAT_1832c64e0 = _DAT_1832c66b0 ^ _DAT_1832c65e8;
  _DAT_1832c6538 = 0x20;
  switch(uVar13 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bb99089 (image 18bb99089) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb99089(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_EDI;
  byte in_XMM0_Bf;
  undefined1 in_XMM1 [16];
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint uVar6;
  uint unaff_XMM12_Da;
  longlong unaff_XMM13_Qa;
  uint unaff_XMM14_Da;
  
  uVar1 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar2 = uVar1 + _DAT_1832c6440;
  if (in_XMM1._4_4_ < 0) {
    uVar2 = _DAT_1832c6740 ^ uVar1;
  }
  _DAT_1832c67f8 = func_0x00018bbad5d0(in_XMM0_Bf ^ uVar2);
  uVar6 = unaff_EDI & _DAT_18001a990;
  uVar4 = unaff_EDI ^ _DAT_18001a990;
  uVar5 = unaff_EDI ^ unaff_XMM14_Da;
  lVar3 = ((ulonglong)unaff_EDI * (ulonglong)_DAT_181ca5760 << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_181ca5750;
  uVar2 = _DAT_1832c67f8 >> 1 | _DAT_1832c67f8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1832c67f8) & 0xfffffffff8000000;
  uVar2 = ((((ulonglong)uVar5 * (ulonglong)_DAT_181ca56d0 + _DAT_181ca5740 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_181ca5730 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_181ca5700 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_181ca56f0 +
            ((ulonglong)uVar6 * (ulonglong)_DAT_181ca5700 << 0x20 |
            (ulonglong)uVar6 * (ulonglong)_DAT_181ca56f0) +
            (ulonglong)unaff_EDI * (ulonglong)_DAT_181ca56e0 +
            ((ulonglong)unaff_EDI * (ulonglong)_DAT_181ca56d0 << 0x20) + lVar3 +
           ((ulonglong)(unaff_EDI | _DAT_18001a990) * (ulonglong)_DAT_181ca5720 << 0x20) +
           (ulonglong)(unaff_EDI | _DAT_18001a990) * (ulonglong)_DAT_181ca5710) -
          (((ulonglong)uVar5 * (ulonglong)unaff_XMM12_Da + unaff_XMM13_Qa << 0x20) +
           (ulonglong)uVar5 * (ulonglong)unaff_XMM8_Da +
           ((ulonglong)uVar4 * (ulonglong)_DAT_181ca57c0 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_181ca57b0 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_181ca57a0 << 0x20 |
           (ulonglong)uVar6 * (ulonglong)_DAT_181ca5790) +
           ((ulonglong)unaff_EDI * (ulonglong)unaff_XMM9_Da << 0x20) +
           (ulonglong)unaff_EDI * (ulonglong)_DAT_181ca5770 + lVar3)) + 0xd1e0e0ffb0280f08;
  _DAT_1832c6648 = _DAT_1832c6930 ^ uVar1 ^ uVar2;
  _DAT_1832c67e0 = (_DAT_1832c67e0 ^ uVar1) + uVar2 ^ 0xea9ccfdfcc9a9d04;
  _DAT_1832c6ab0 = (_DAT_1832c6ab0 * -0x40687dcc8b90d079 ^ _DAT_1832c67e0) + uVar1;
  _DAT_1832c6a10 = _DAT_1832c6ab0 ^ _DAT_1832c67e0;
  _DAT_1832c6798 = _DAT_1832c6530 ^ uVar2;
  _DAT_1832c6710 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x60) = (int)uVar2;
  *(int *)(unaff_RBP + 0x68) = *(int *)(unaff_RBP + 0x14);
  switch((int)uVar2 < *(int *)(unaff_RBP + 0x14)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bbb3f1a (image 18bbb3f1a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb3f1a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181cabb38)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva bbb3f26 (image 18bbb3f26) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb3f26(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva bbb3f43 (image 18bbb3f43) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb3f43(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_181cabb28)();
  return;
}



// ===== continuation @ rva bbb3f4c (image 18bbb3f4c) =====

void FUN_18bbb3f4c(void)

{
  return;
}



// ===== continuation @ rva bbb3f4d (image 18bbb3f4d) =====

undefined4 * FUN_18bbb3f4d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva bbb4003 (image 18bbb4003) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb4003(void)

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



// ===== continuation @ rva bbb3faf (image 18bbb3faf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb3faf(void)

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



// ===== continuation @ rva bbb4d68 (image 18bbb4d68) =====

void FUN_18bbb4d68(void)

{
  return;
}



// ===== continuation @ rva bbb45f0 (image 18bbb45f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb45f0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181cabc78)();
  return;
}



// ===== continuation @ rva bbb4cc4 (image 18bbb4cc4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb4cc4(void)

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



// ===== continuation @ rva bbb4d33 (image 18bbb4d33) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb4d33(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181cabe28)();
  return;
}



// ===== continuation @ rva bbafbde (image 18bbafbde) =====

void FUN_18bbafbde(void)

{
  return;
}



// ===== continuation @ rva bbafa1e (image 18bbafa1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbafa1e(void)

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



// ===== continuation @ rva bbb3b6b (image 18bbb3b6b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb3b6b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x570))();
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



// ===== continuation @ rva bbb3b1c (image 18bbb3b1c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb3b1c(void)

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



// ===== continuation @ rva bbb3c5a (image 18bbb3c5a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb3c5a(void)

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



// ===== continuation @ rva bbb11a4 (image 18bbb11a4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18bbb0007(void)

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



// ===== continuation @ rva bbb1145 (image 18bbb1145) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18bbb0007(void)

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



// ===== continuation @ rva bbb3854 (image 18bbb3854) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb3854(void)

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



// ===== continuation @ rva bbb077e (image 18bbb077e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb077e(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x78))();
  FUN_190dd72e0();
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



// ===== continuation @ rva bbb030a (image 18bbb030a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb030a(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x3a0))();
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



// ===== continuation @ rva bbb019e (image 18bbb019e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb019e(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x2e8))();
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



// ===== continuation @ rva bbb014e (image 18bbb014e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb014e(void)

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



// ===== continuation @ rva bbb4885 (image 18bbb4885) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb4885(void)

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



// ===== continuation @ rva bbb4d76 (image 18bbb4d76) =====

void FUN_18bbb4d76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bbb4b42 (image 18bbb4b42) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb4b42(void)

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



// ===== continuation @ rva bbb4271 (image 18bbb4271) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb4271(void)

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



// ===== continuation @ rva bbb421d (image 18bbb421d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb421d(void)

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



// ===== continuation @ rva bbb408c (image 18bbb408c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb408c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_181cabce8)();
  return;
}



// ===== continuation @ rva bbb402a (image 18bbb402a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb402a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181cabbf8)();
  return;
}



// ===== continuation @ rva bbb4414 (image 18bbb4414) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb4414(void)

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



// ===== continuation @ rva bbb43c0 (image 18bbb43c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb43c0(void)

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



// ===== continuation @ rva bbb77bd (image 18bbb77bd) =====

void FUN_18bbb77bd(void)

{
  return;
}



// ===== continuation @ rva bbb4ee0 (image 18bbb4ee0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb4ee0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181caced8)();
  return;
}



// ===== continuation @ rva bbb7762 (image 18bbb7762) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb7762(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cac278)();
  return;
}



// ===== continuation @ rva bbb7432 (image 18bbb7432) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb7432(void)

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



// ===== continuation @ rva bbb6efa (image 18bbb6efa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb6efa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cac6f8)();
  return;
}



// ===== continuation @ rva bbb6b9e (image 18bbb6b9e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb6b9e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181cac898)();
  return;
}



// ===== continuation @ rva bbb75eb (image 18bbb75eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb75eb(void)

{
  (*_DAT_181cacda8)();
  return;
}



// ===== continuation @ rva bbb6970 (image 18bbb6970) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb6970(void)

{
  (*_DAT_181cace58)();
  return;
}



// ===== continuation @ rva bbb77dc (image 18bbb77dc) =====

void FUN_18bbb77dc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bbb708d (image 18bbb708d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb708d(void)

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



// ===== continuation @ rva bbb77d1 (image 18bbb77d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb77d1(void)

{
  (*_DAT_181cacda8)();
  return;
}



// ===== continuation @ rva bbb5921 (image 18bbb5921) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbb5921(void)

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



// ===== continuation @ rva bbb6f7d (image 18bbb6f7d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb6f7d(void)

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



// ===== continuation @ rva bbba164 (image 18bbba164) =====

void FUN_18bbba164(void)

{
  return;
}



// ===== continuation @ rva bbb9fc5 (image 18bbb9fc5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbb9fc5(void)

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



// ===== continuation @ rva bbbc3c1 (image 18bbbc3c1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbbc3c1(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x570))();
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



// ===== continuation @ rva bbbc296 (image 18bbbc296) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbbc296(void)

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



// ===== continuation @ rva bbbe244 (image 18bbbe244) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbbe244(void)

{
  int iVar1;
  code *in_RAX;
  undefined8 in_stack_00000030;
  int in_stack_00000060;
  
  iVar1 = (*in_RAX)(in_stack_00000030);
  switch(in_stack_00000060 < 0 || iVar1 <= in_stack_00000060) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva bbbdcfa (image 18bbbdcfa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbbdcfa(void)

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



// ===== continuation @ rva bbbc304 (image 18bbbc304) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbbc304(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (*in_RAX)(in_stack_00000030);
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



// ===== continuation @ rva bbbb251 (image 18bbbb251) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbbb251(void)

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



// ===== continuation @ rva bbbd40a (image 18bbbd40a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18bbbec35(void)

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



// ===== continuation @ rva bbbb2e0 (image 18bbbb2e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbbb2e0(void)

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



// ===== continuation @ rva bbc2872 (image 18bbc2872) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbc2872(void)

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



// ===== continuation @ rva bbc281e (image 18bbc281e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc281e(void)

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



// ===== continuation @ rva bbc36e5 (image 18bbc36e5) =====

void FUN_18bbc36e5(void)

{
  return;
}



// ===== continuation @ rva bbc2f24 (image 18bbc2f24) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc2f24(void)

{
  FUN_190ddce00();
  (*_DAT_181caf2f8)();
  return;
}



// ===== continuation @ rva bbc2ed7 (image 18bbc2ed7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc2ed7(void)

{
  FUN_190dd72e0();
  (*_DAT_181caf2d8)();
  return;
}



// ===== continuation @ rva bbc36f4 (image 18bbc36f4) =====

void FUN_18bbc36f4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bbc34c0 (image 18bbc34c0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc34c0(void)

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



// ===== continuation @ rva bbc2acc (image 18bbc2acc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc2acc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181caf4e8)();
  return;
}



// ===== continuation @ rva bbc35eb (image 18bbc35eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc35eb(void)

{
  FUN_190ddfc90();
  (*_DAT_181caf348)();
  return;
}



// ===== continuation @ rva bbc36b1 (image 18bbc36b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc36b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181caf3d8)();
  return;
}



// ===== continuation @ rva bbc3420 (image 18bbc3420) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbc3420(void)

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



// ===== continuation @ rva bbc28cb (image 18bbc28cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbc28cb(void)

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



// ===== continuation @ rva bbc5806 (image 18bbc5806) =====

void FUN_18bbc5806(void)

{
  return;
}



// ===== continuation @ rva bbc386c (image 18bbc386c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc386c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181caff78)();
  return;
}



// ===== continuation @ rva bbc63aa (image 18bbc63aa) =====

void FUN_18bbc63aa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bbc5398 (image 18bbc5398) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbc5398(void)

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



// ===== continuation @ rva bbc5440 (image 18bbc5440) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbc5440(void)

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



// ===== continuation @ rva bbc4c7b (image 18bbc4c7b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbc4c7b(void)

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



// ===== continuation @ rva bbc3b17 (image 18bbc3b17) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbc3b17(void)

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



// ===== continuation @ rva bbc61d8 (image 18bbc61d8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc61d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181cafd58)();
  return;
}



// ===== continuation @ rva bbc5d86 (image 18bbc5d86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc5d86(void)

{
  FUN_190ddfc90();
  (*_DAT_181cafc98)();
  return;
}



// ===== continuation @ rva bbc6233 (image 18bbc6233) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bbc6233(void)

{
  (*_DAT_181cb0478)();
  return;
}



// ===== continuation @ rva bbc4385 (image 18bbc4385) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bbc4385(void)

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



// ===== continuation @ rva bb7e317 (image 18bb7e317) =====

void FUN_18bb7e317(void)

{
  return;
}



// ===== continuation @ rva bb7d9e8 (image 18bb7d9e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d9e8(void)

{
  FUN_190ddfc90();
  (*_DAT_181ca2ba8)();
  return;
}



// ===== continuation @ rva bb7e21f (image 18bb7e21f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7e21f(void)

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



// ===== continuation @ rva bb7e1cd (image 18bb7e1cd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7e1cd(void)

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



// ===== continuation @ rva bb7e321 (image 18bb7e321) =====

void FUN_18bb7e321(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva bb7ddb5 (image 18bb7ddb5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7ddb5(void)

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



// ===== continuation @ rva bb7dfdd (image 18bb7dfdd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7dfdd(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca2a58)();
  return;
}



// ===== continuation @ rva bb7e278 (image 18bb7e278) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7e278(void)

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



// ===== continuation @ rva bb7ddf2 (image 18bb7ddf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7ddf2(void)

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



// ===== continuation @ rva bb7dfc8 (image 18bb7dfc8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7dfc8(void)

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



// ===== continuation @ rva bb7e059 (image 18bb7e059) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7e059(void)

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



