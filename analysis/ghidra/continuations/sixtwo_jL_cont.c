// ===== continuation @ rva 7fa40d7 (image 187fa40d7) =====

void FUN_187fa40d7(void)

{
  return;
}



// ===== continuation @ rva 7f8238b (image 187f8238b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187f823e1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187f8238b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7f9cb7b (image 187f9cb7b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f9cb7b(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R15;
  int iStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  
  iStack0000000000000058 = 6;
  uStack0000000000000068 = 8;
  uStack0000000000000060 =
       CONCAT44((uint)((ulonglong)unaff_R15 >> 0x28),(int)(char)((ulonglong)unaff_R15 >> 8));
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iStack0000000000000058 < 0 || iVar1 <= iStack0000000000000058) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f82af3 (image 187f82af3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187f82b0a */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187f82af3(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7f8275b (image 187f8275b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187f82772 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187f8275b(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7f8a1f4 (image 187f8a1f4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187f8a237 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187f8a1f4(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7f9317c (image 187f9317c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f9317c(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R15;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 1;
  uStack0000000000000078 = 0x30;
  uStack0000000000000070 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_R15 >> 0x30);
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



// ===== continuation @ rva 7f89f7c (image 187f89f7c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187f89f93 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187f89f7c(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7f8b402 (image 187f8b402) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187f8b6f0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187f8b402(void)

{
  ulonglong uVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack00000000000000f8;
  
  uStack00000000000000f8 = in_stack_00000040;
  auVar4._8_8_ = _UNK_1801a22d8;
  auVar4._0_8_ = 0x84222325;
  uStack0000000000000048 = 0;
  auVar5 = pshufb(auVar4 ^ _DAT_180e38510,_DAT_1800170c0);
  uVar2 = auVar5._8_8_ + auVar5._0_8_;
  uVar1 = uVar2 + _DAT_1831ac000;
  if (auVar5._4_4_ < 0) {
    uVar1 = _DAT_1831ac090 ^ uVar2;
  }
  _DAT_1831abc60 = func_0x000187fa42c0(SUB161(auVar4 ^ _DAT_180e38510,5) ^ uVar1);
  uVar1 = _DAT_1831abc60 * -0x4e93ec7ab739fa37;
  lVar3 = ((ulonglong)_DAT_180e385c0 * 0xffffffff + _DAT_180e385e0 << 0x20) +
          (ulonglong)_DAT_180e385d0 * 0xffffffff;
  _DAT_1831abbb0 =
       ((((ulonglong)_DAT_180e38520 * 0xffffffff + _DAT_180e38590 << 0x20) +
         (ulonglong)_DAT_180e38580 * 0xffffffff +
         ((ulonglong)_DAT_1801a1250 * (ulonglong)_DAT_180e38550 << 0x20) +
         (ulonglong)_DAT_180e38540 * (ulonglong)_DAT_1801a1250 +
        ((ulonglong)_DAT_1801a1250 * (ulonglong)_DAT_180e38570 << 0x20) +
        (ulonglong)_DAT_180e38560 * (ulonglong)_DAT_1801a1250) - lVar3) + 0xb0bcaae0a71b3c92;
  _DAT_1831abac0 = _DAT_1831abe78 ^ uVar1 ^ _DAT_1831abbb0;
  _DAT_1831ac090 = (_DAT_1831ac090 ^ uVar1) + _DAT_1831abbb0 ^ 0xf8c70593b16071f0;
  _DAT_1831abb60 = (_DAT_1831abb60 * -0x710f232afd51f52b ^ _DAT_1831ac090) + uVar1;
  _DAT_1831ab908 = _DAT_1831abb60 ^ _DAT_1831ac090;
  _DAT_1831abbb0 = _DAT_1831abbb0 & 0xffffffff;
  FUN_190dd72e0(lVar3,*_DAT_18301ee50 + 0x2e9,0x12);
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7eeaa27 (image 187eeaa27) =====

void FUN_187eeaa27(void)

{
  return;
}



// ===== continuation @ rva 7ee2e2e (image 187ee2e2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ee2e2e(void)

{
  FUN_190ddce00();
  (*_DAT_180e13458)();
  return;
}



// ===== continuation @ rva 7f029d5 (image 187f029d5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f029d5(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_180e14978)();
  return;
}



// ===== continuation @ rva 7f02828 (image 187f02828) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f02828(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190de3220(in_stack_00000048,&stack0x00000050,*_DAT_18301ee50 + 0x14d28,
                *_DAT_18301ee50 + 0x14d2c,0xf8a);
  (*_DAT_180e12528)();
  return;
}



// ===== continuation @ rva 7f0912d (image 187f0912d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f0912d(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_180e150f8)();
  return;
}



// ===== continuation @ rva 7f07ef5 (image 187f07ef5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f07ef5(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x541,0x1b);
  (*_DAT_180e12578)();
  return;
}



// ===== continuation @ rva 7efba54 (image 187efba54) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187efba54(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_180e150f8)();
  return;
}



// ===== continuation @ rva 7efad3d (image 187efad3d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187efad3d(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000e8;
  
  FUN_184117d50(in_stack_00000048,in_stack_000000a8,in_stack_000000e8);
  cVar1 = (**(code **)(*in_stack_00000048 + 0x720))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7efb912 (image 187efb912) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187efb912(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_180e150f8)();
  return;
}



// ===== continuation @ rva 7efa870 (image 187efa870) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187efa870(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_184117d50(in_stack_00000048,in_stack_00000050);
  cVar1 = (**(code **)(*in_stack_00000048 + 0x720))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f07569 (image 187f07569) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f07569(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000048;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000048);
  (*_DAT_180e150f8)();
  return;
}



// ===== continuation @ rva 7f06628 (image 187f06628) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f06628(void)

{
  longlong in_RAX;
  longlong *in_stack_00000048;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000048);
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_180e151d8)();
  return;
}



// ===== continuation @ rva 7f00b40 (image 187f00b40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f00b40(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_180e14e08)();
  return;
}



// ===== continuation @ rva 7f001b0 (image 187f001b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f001b0(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190de3220(in_stack_00000048,&stack0x00000050,*_DAT_18301ee50 + 0x488,*_DAT_18301ee50 + 0x490,
                0x15);
  (*_DAT_180e11468)();
  return;
}



// ===== continuation @ rva 7ef2fce (image 187ef2fce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ef2fce(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_180e150f8)();
  return;
}



// ===== continuation @ rva 7eee642 (image 187eee642) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187eee642(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190de3220(in_stack_00000048,&stack0x000000b8,*_DAT_18301ee50 + 0x42e,*_DAT_18301ee50 + 0x441,
                0x14);
  (*_DAT_180e14338)();
  return;
}



// ===== continuation @ rva 7f371e3 (image 187f371e3) =====

void FUN_187f371e3(void)

{
  return;
}



// ===== continuation @ rva 7f0ac81 (image 187f0ac81) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f0ac81(void)

{
  FUN_190ddce00();
  (*_DAT_180e1f8b8)();
  return;
}



// ===== continuation @ rva 7f3724f (image 187f3724f) =====

void FUN_187f3724f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7f16222 (image 187f16222) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f16222(void)

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



// ===== continuation @ rva 7f15b9c (image 187f15b9c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f15b9c(void)

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



// ===== continuation @ rva 7f2fbb8 (image 187f2fbb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f2fbb8(void)

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



// ===== continuation @ rva 7f31a3f (image 187f31a3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f31a3f(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x1abf3,0x426);
  (*_DAT_180e1f328)();
  return;
}



// ===== continuation @ rva 7f30d45 (image 187f30d45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f30d45(void)

{
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0x3a0))(in_stack_00000030,in_stack_00000038);
  (*_DAT_180e20218)();
  return;
}



// ===== continuation @ rva 7f13c85 (image 187f13c85) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f13c85(void)

{
  (*_DAT_180e23688)();
  return;
}



// ===== continuation @ rva 7f24921 (image 187f24921) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f24921(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x1abf3,0x426);
  (*_DAT_180e220a8)();
  return;
}



// ===== continuation @ rva 7f211bb (image 187f211bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f211bb(void)

{
  longlong in_RAX;
  undefined8 uVar1;
  longlong *in_stack_00000030;
  
  uVar1 = (**(code **)(in_RAX + 0x560))(in_stack_00000030,2);
  (**(code **)(*in_stack_00000030 + 0x570))(in_stack_00000030,uVar1,0);
  (*_DAT_180e1b0e8)();
  return;
}



// ===== continuation @ rva 7f19473 (image 187f19473) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f19473(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f819e9 (image 187f819e9) =====

void FUN_187f819e9(void)

{
  return;
}



// ===== continuation @ rva 7f7c70d (image 187f7c70d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f7c70d(void)

{
  FUN_190ddce00();
  (*_DAT_180e342b8)();
  return;
}



// ===== continuation @ rva 7f80378 (image 187f80378) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f80378(void)

{
  (*_DAT_180e35028)();
  return;
}



// ===== continuation @ rva 7f82170 (image 187f82170) =====

void FUN_187f82170(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7f7faef (image 187f7faef) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f7faef(void)

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



// ===== continuation @ rva 7f8064a (image 187f8064a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f8064a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e34cd8)();
  return;
}



// ===== continuation @ rva 7f7f857 (image 187f7f857) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f7f857(void)

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



// ===== continuation @ rva 7f81c84 (image 187f81c84) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f81c84(void)

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



// ===== continuation @ rva 7f82139 (image 187f82139) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f82139(void)

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



// ===== continuation @ rva 7f81654 (image 187f81654) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f81654(void)

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



// ===== continuation @ rva 7f80cef (image 187f80cef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f80cef(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e34eb8)();
  return;
}



// ===== continuation @ rva 7f809ba (image 187f809ba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f809ba(void)

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



// ===== continuation @ rva 7ff5ea6 (image 187ff5ea6) =====

void FUN_187ff5ea6(void)

{
  return;
}



// ===== continuation @ rva 7fa4435 (image 187fa4435) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187fa4435(void)

{
  FUN_190ddce00();
  (*_DAT_180e3ae78)();
  return;
}



// ===== continuation @ rva 7fcfdaf (image 187fcfdaf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187fcfdaf(void)

{
  FUN_190dd72e0();
  (*_DAT_180e41c28)();
  return;
}



// ===== continuation @ rva 7ff5f12 (image 187ff5f12) =====

void FUN_187ff5f12(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7fd9ce9 (image 187fd9ce9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187fd9d0a */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187fd9ce9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7fcbe9f (image 187fcbe9f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187fcbef4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187fcbe9f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7fe6975 (image 187fe6975) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187fe6975(void)

{
  FUN_190dd72e0();
  (*_DAT_180e3f5b8)();
  return;
}



// ===== continuation @ rva 7fc32eb (image 187fc32eb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187fc32fd */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187fc32eb(void)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7fd03a2 (image 187fd03a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187fd03a2(void)

{
  FUN_190dd72e0();
  (*_DAT_180e40588)();
  return;
}



// ===== continuation @ rva 7ff5d42 (image 187ff5d42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ff5d42(void)

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



// ===== continuation @ rva 8046095 (image 188046095) =====

void FUN_188046095(void)

{
  return;
}



// ===== continuation @ rva 7ff60f5 (image 187ff60f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ff60f5(void)

{
  FUN_190ddce00();
  (*_DAT_180e576b8)();
  return;
}



// ===== continuation @ rva 801d4ca (image 18801d4ca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18801d4ca(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_180e54308)();
  return;
}



// ===== continuation @ rva 8046101 (image 188046101) =====

void FUN_188046101(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 803fa48 (image 18803fa48) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18803fa48(void)

{
  char cVar1;
  longlong *in_stack_00000040;
  
  cVar1 = (**(code **)(*in_stack_00000040 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 80311db (image 1880311db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1880311db(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_180e574e8)();
  return;
}



// ===== continuation @ rva 80311ba (image 1880311ba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001880311d8 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1880311ba(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8008572 (image 188008572) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188008598 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188008572(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 803948f (image 18803948f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18803948f(void)

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



// ===== continuation @ rva 802cf7f (image 18802cf7f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018802cfa0 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18802cf7f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 804a949 (image 18804a949) =====

void FUN_18804a949(void)

{
  return;
}



// ===== continuation @ rva 80462c1 (image 1880462c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1880462c1(void)

{
  FUN_190ddce00();
  (*_DAT_180e67d88)();
  return;
}



// ===== continuation @ rva 8048e4f (image 188048e4f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188048e4f(void)

{
  FUN_190ddce00();
  (*_DAT_180e67908)();
  return;
}



// ===== continuation @ rva 804b0ba (image 18804b0ba) =====

void FUN_18804b0ba(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 804a54f (image 18804a54f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804a54f(void)

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



// ===== continuation @ rva 8049c10 (image 188049c10) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188049c10(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (*_DAT_180e67eb8)();
  return;
}



// ===== continuation @ rva 8049562 (image 188049562) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188049562(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e67418)();
  return;
}



// ===== continuation @ rva 80493da (image 1880493da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1880493da(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180e67ff8)();
  return;
}



// ===== continuation @ rva 8049f82 (image 188049f82) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188049f82(void)

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



// ===== continuation @ rva 8048d84 (image 188048d84) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188048d84(void)

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



// ===== continuation @ rva 804a592 (image 18804a592) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804a592(void)

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



// ===== continuation @ rva 804e676 (image 18804e676) =====

void FUN_18804e676(void)

{
  return;
}



// ===== continuation @ rva 804b2a1 (image 18804b2a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804b2a1(void)

{
  FUN_190ddce00();
  (*_DAT_180e68bc8)();
  return;
}



// ===== continuation @ rva 804e554 (image 18804e554) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804e554(void)

{
  FUN_190de3220();
  (*_DAT_180e68ca8)();
  return;
}



// ===== continuation @ rva 804eca2 (image 18804eca2) =====

void FUN_18804eca2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 804ec66 (image 18804ec66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804ec66(void)

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



// ===== continuation @ rva 804e1f7 (image 18804e1f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804e1f7(void)

{
  FUN_190dd72e0();
  (*_DAT_180e68e88)();
  return;
}



// ===== continuation @ rva 804e48e (image 18804e48e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804e48e(void)

{
  (*_DAT_180e68e28)();
  return;
}



// ===== continuation @ rva 804e4f4 (image 18804e4f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804e4f4(void)

{
  (*_DAT_180e68c68)();
  return;
}



// ===== continuation @ rva 804e196 (image 18804e196) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804e196(void)

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



// ===== continuation @ rva 804e713 (image 18804e713) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804e713(void)

{
  FUN_190dd72e0();
  (*_DAT_180e68b18)();
  return;
}



// ===== continuation @ rva 804f1c6 (image 18804f1c6) =====

undefined8 FUN_18804f1c6(void)

{
  return 0;
}



// ===== continuation @ rva 804ee27 (image 18804ee27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804ee27(void)

{
  FUN_190ddfc90();
  (*_DAT_180e69a78)();
  return;
}



// ===== continuation @ rva 804ef15 (image 18804ef15) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804ef15(void)

{
  undefined4 uStack0000000000000030;
  
  uStack0000000000000030 = 4;
  FUN_190dd72e0();
  (*_DAT_180e69a58)();
  return;
}



// ===== continuation @ rva 804f1d2 (image 18804f1d2) =====

void FUN_18804f1d2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 804efe6 (image 18804efe6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804efe6(void)

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



// ===== continuation @ rva 804f153 (image 18804f153) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f153(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180e69a88)();
  return;
}



// ===== continuation @ rva 804ef6b (image 18804ef6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804ef6b(void)

{
  FUN_190de3220();
  (*_DAT_180e69aa8)();
  return;
}



// ===== continuation @ rva 804f16c (image 18804f16c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f16c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_180e69ad8)();
  return;
}



// ===== continuation @ rva 804f11a (image 18804f11a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f11a(void)

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



// ===== continuation @ rva 804eecd (image 18804eecd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804eecd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180e69a88)();
  return;
}



// ===== continuation @ rva 804f1b2 (image 18804f1b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f1b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180e69a68)();
  return;
}



// ===== continuation @ rva 804f4e3 (image 18804f4e3) =====

void FUN_18804f4e3(void)

{
  return;
}



// ===== continuation @ rva 804f2e2 (image 18804f2e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f2e2(void)

{
  FUN_190ddce00();
  (*_DAT_180e69b88)();
  return;
}



// ===== continuation @ rva 804f496 (image 18804f496) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f496(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180e69bf8)();
  return;
}



// ===== continuation @ rva 804f4af (image 18804f4af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f4af(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_180e69bb8)();
  return;
}



// ===== continuation @ rva 804f45d (image 18804f45d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f45d(void)

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



// ===== continuation @ rva 804f3f0 (image 18804f3f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f3f0(void)

{
  FUN_190ddfc90();
  (*_DAT_180e69b68)();
  return;
}



// ===== continuation @ rva 804f423 (image 18804f423) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804f423(void)

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



// ===== continuation @ rva 804f4ed (image 18804f4ed) =====

void FUN_18804f4ed(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 804f3ca (image 18804f3ca) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804f3ca(void)

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



// ===== continuation @ rva 804f315 (image 18804f315) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804f315(void)

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



// ===== continuation @ rva 804f339 (image 18804f339) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804f339(void)

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



// ===== continuation @ rva 804f664 (image 18804f664) =====

void FUN_18804f664(void)

{
  return;
}



// ===== continuation @ rva 804f5bd (image 18804f5bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f5bd(void)

{
  FUN_190ddce00();
  (*_DAT_180e69c98)();
  return;
}



// ===== continuation @ rva 804f66c (image 18804f66c) =====

void FUN_18804f66c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 804f652 (image 18804f652) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f652(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180e69c58)();
  return;
}



// ===== continuation @ rva 804f614 (image 18804f614) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804f614(void)

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



// ===== continuation @ rva 804f635 (image 18804f635) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f635(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4f8))();
  (*_DAT_180e69c68)();
  return;
}



// ===== continuation @ rva 804f5f0 (image 18804f5f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804f5f0(void)

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



// ===== continuation @ rva 804f69a (image 18804f69a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18804f69a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180e69cd8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 804f6a6 (image 18804f6a6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18804f6a6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 7f37499 (image 187f37499) =====

void FUN_187f37499(void)

{
  return;
}



// ===== continuation @ rva 7f373e9 (image 187f373e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f373e9(void)

{
  FUN_190ddce00();
  (*_DAT_180e27498)();
  return;
}



// ===== continuation @ rva 7f374a0 (image 187f374a0) =====

void FUN_187f374a0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7f37461 (image 187f37461) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f37461(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b0))();
  (*_DAT_180e27488)();
  return;
}



// ===== continuation @ rva 7f37440 (image 187f37440) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f37440(void)

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



// ===== continuation @ rva 7f3747b (image 187f3747b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f3747b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180e27458)();
  return;
}



// ===== continuation @ rva 7f3741c (image 187f3741c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f3741c(void)

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



// ===== continuation @ rva 7f374da (image 187f374da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f374da(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180e274c0)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 7f374e6 (image 187f374e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f374e6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 7f3750d (image 187f3750d) =====

undefined4 * FUN_187f3750d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 7f397e8 (image 187f397e8) =====

void FUN_187f397e8(void)

{
  return;
}



// ===== continuation @ rva 7f375df (image 187f375df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f375df(void)

{
  FUN_190de3220();
  (*_DAT_180e27520)();
  return;
}



// ===== continuation @ rva 7f37669 (image 187f37669) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f37669(void)

{
  (*_DAT_180e27540)(_DAT_1831aa3b0);
  return;
}



// ===== continuation @ rva 7f3984b (image 187f3984b) =====

void FUN_187f3984b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7f37612 (image 187f37612) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f37612(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f37636 (image 187f37636) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f37636(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_1847d4a10();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f37681 (image 187f37681) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f37681(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  ulonglong uVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  
  uVar18 = _DAT_180e274a4;
  uVar10 = _DAT_180e274a0;
  uVar2 = (ulonglong)_DAT_180e274a0;
  uVar1 = uVar2 ^ 0x84222325 ^ in_RAX;
  lVar6 = (uVar2 ^ 0x84222325) + param_1;
  uVar11 = uVar1 + lVar6;
  uVar16 = (param_1 ^ 0xbe6f5bc9) + in_RAX + 0xbe6f5bc9;
  uVar8 = (ulonglong)_DAT_180e274a4;
  uVar1 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar1;
  uVar11 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ param_1 ^ 0xbe6f5bc9;
  _DAT_1831aa630 =
       func_0x000187f39880((uVar11 << 0x1d | uVar11 >> 0x23) - (in_RAX + 0xbe6f5bc9) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - lVar6);
  uVar1 = (uVar2 * 0xbe6f5bc9 ^ _DAT_1831aa630) & 0xfffffffffffe0000;
  _DAT_1831aa658 = (_DAT_1831aa658 ^ uVar1) + (uVar2 | 0xbe6f5bc9) ^ 0x77effd5948f07eb;
  _DAT_1831aa270 = (_DAT_1831aa270 * 0x3acdecb9b580518d ^ _DAT_1831aa658) + uVar1;
  _DAT_1831aa150 = _DAT_1831aa270 ^ _DAT_1831aa658;
  uVar3 = (uint)(uVar2 | 0xbe6f5bc9);
  uVar2 = uVar2 | 0xbe6f5bc9;
  uVar8 = uVar8 ^ 0x6f97fa69;
  uStack0000000000000034 = (uint)uVar8;
  uVar4 = uVar10 * uVar10 * 0x5d4d046a;
  uVar11 = (ulonglong)uVar4;
  uVar1 = ((_DAT_1831aa1b0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831aa1b0 & 0x84222325) * 2) *
          (uVar11 - _DAT_1831aa2d8);
  uVar1 = (uVar1 | _DAT_1831aa6f0) + (uVar1 & _DAT_1831aa6f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831aa410 = uVar2;
  _DAT_1831aa1e0 =
       func_0x000187f39880((uVar11 ^ 0x84222325 | uVar1) +
                           (ulonglong)((uint)(uVar11 ^ 0x84222325) & (uint)uVar1));
  auVar14 = _DAT_1800170c0;
  _DAT_1831aa590 = (_DAT_1831aa308 ^ _DAT_1831aa1e0 ^ uVar11) - uVar11 ^ 0x7bb989b56cf159d0;
  uVar5 = uVar10 * uVar10 * -0x5d4d046a;
  _DAT_1831aa1c8 =
       (_DAT_1831aa1c8 * -0x4447f3ceb55cbd1 ^ _DAT_1831aa590) + (_DAT_1831aa1e0 ^ uVar11);
  _DAT_1831aa590 = _DAT_1831aa1c8 ^ _DAT_1831aa590;
  auVar12._8_4_ = uVar4;
  auVar12._0_8_ = _DAT_180e27550;
  auVar12._12_4_ = 0;
  auVar12 = pshufb(auVar12 ^ _DAT_180e27560,_DAT_1800170c0);
  uVar11 = auVar12._8_8_ + auVar12._0_8_;
  uVar1 = uVar11 + _DAT_1831aa430;
  if (auVar12._4_4_ < 0) {
    uVar1 = _DAT_1831aa268 ^ uVar11;
  }
  _DAT_1831aa308 = CONCAT44(0,uVar5);
  _DAT_1831aa660 = func_0x000187f39880(uVar1 ^ 0x22);
  uVar9 = _DAT_180e27570 ^ uVar4;
  uVar19 = uVar4 & _DAT_180e27570;
  uVar17 = uVar4 | _DAT_180e27570;
  uVar1 = _DAT_1831aa660 - (_DAT_1831aa660 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1831aa660;
  uVar11 = ((ulonglong)_DAT_180e275f0 * (ulonglong)uVar9 << 0x20) +
           (ulonglong)_DAT_180e275e0 * (ulonglong)uVar9 +
           ((ulonglong)_DAT_180e275d0 * (ulonglong)uVar17 << 0x20) +
           (ulonglong)_DAT_180e275c0 * (ulonglong)uVar17 +
           ((ulonglong)_DAT_180e275b0 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)_DAT_180e275a0 * (ulonglong)uVar19 +
           ((ulonglong)_DAT_180e27590 * (ulonglong)uVar4 << 0x20) +
           (ulonglong)_DAT_180e27580 * (ulonglong)uVar4 +
           (-(((ulonglong)uVar9 * (ulonglong)_DAT_180e27630 << 0x20) +
             (ulonglong)_DAT_180e27620 * (ulonglong)uVar9) -
           (((ulonglong)uVar17 * (ulonglong)_DAT_180e27650 << 0x20) +
           (ulonglong)_DAT_180e27640 * (ulonglong)uVar17 +
           ((ulonglong)uVar19 * (ulonglong)_DAT_180e27630 << 0x20 |
           (ulonglong)uVar19 * (ulonglong)_DAT_180e27620))) + 0xad183fd0fadfbf3d;
  _DAT_1831aa118 = _DAT_1831aa658 ^ uVar1 ^ uVar11;
  _DAT_1831aa190 = (_DAT_1831aa190 ^ uVar1) + uVar11 ^ 0x980d5f2baafcfb76;
  _DAT_1831aa3a8 = (_DAT_1831aa3a8 * -0x4c33ce7009e9f8af ^ _DAT_1831aa190) + uVar1;
  _DAT_1831aa1b0 = _DAT_1831aa3a8 ^ _DAT_1831aa190;
  uVar4 = (uint)uVar11;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = CONCAT44(0,uVar5);
  auVar13._4_4_ = 0;
  auVar13._0_4_ = uVar4 ^ 0x84222325;
  auVar13._8_4_ = uVar5;
  auVar13._12_4_ = 0;
  auVar14 = pshufb(auVar13 ^ _DAT_180e27660,auVar14);
  uVar16 = auVar14._8_8_ + auVar14._0_8_;
  uVar1 = uVar16 + _DAT_1831aa558;
  if (auVar14._4_4_ < 0) {
    uVar1 = _DAT_1831aa408 ^ uVar16;
  }
  _DAT_1831aa280 = uVar11 & 0xffffffff;
  _DAT_1831aa5b0 = func_0x000187f39880(SUB161(auVar13 ^ _DAT_180e27660,5) ^ uVar1);
  uVar27 = uVar4 & uVar5;
  uVar17 = uVar4 | uVar5;
  uVar9 = uVar4 ^ uVar5;
  uVar4 = uVar4 ^ 0xffffffff;
  auVar28._8_4_ = 0xffffffff;
  auVar28._0_8_ = 0xffffffffffffffff;
  auVar28._12_4_ = 0xffffffff;
  uVar19 = SUB164(auVar26 ^ auVar28,0);
  uVar16 = ((((ulonglong)_DAT_180e27720 * (ulonglong)uVar4 + _DAT_180e27730 << 0x20) +
             (ulonglong)_DAT_180e27710 * (ulonglong)uVar4 +
            ((ulonglong)_DAT_180e27700 * (ulonglong)uVar9 << 0x20) +
            (ulonglong)_DAT_180e276f0 * (ulonglong)uVar9 +
            ((ulonglong)_DAT_180e276e0 * (ulonglong)uVar17 << 0x20) +
            (ulonglong)_DAT_180e276d0 * (ulonglong)uVar17 +
            ((ulonglong)_DAT_180e276c0 * (ulonglong)uVar27 << 0x20) +
            (ulonglong)_DAT_180e276b0 * (ulonglong)uVar27 +
            ((ulonglong)_DAT_180e276a0 * (ulonglong)uVar5 << 0x20) +
            (ulonglong)_DAT_180e27690 * (ulonglong)uVar5 +
            (ulonglong)_DAT_180e27670 * (uVar11 & 0xffffffff) +
            ((ulonglong)_DAT_180e27680 * (uVar11 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar19 * (ulonglong)_DAT_180e27780 +
            ((SUB168(auVar26 ^ auVar28,0) >> 0x20) * (ulonglong)_DAT_180e27780 +
             (ulonglong)_DAT_180e27790 * (ulonglong)uVar19 << 0x20) +
            ((ulonglong)uVar4 * (ulonglong)_DAT_180e27770 + _DAT_180e277e0 << 0x20) +
            (ulonglong)_DAT_180e27760 * (ulonglong)uVar4 +
            ((ulonglong)uVar9 * (_DAT_180e277b0 & 0xffffffff) << 0x20) +
            (ulonglong)_DAT_180e277a0 * (ulonglong)uVar9 +
            ((ulonglong)uVar27 * (_DAT_180e277b0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar27 * (ulonglong)_DAT_180e277a0 +
            ((ulonglong)uVar5 * (ulonglong)_DAT_180e27790 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_180e27780 +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_180e27760 +
            ((uVar11 & 0xffffffff) * (ulonglong)_DAT_180e27770 << 0x20) +
           ((ulonglong)uVar17 * (ulonglong)_DAT_180e277d0 << 0x20) +
           (ulonglong)_DAT_180e277c0 * (ulonglong)uVar17)) + 0x3224794e489aaefd;
  uVar5 = uVar18 * uVar18 * -0x5acb6b27;
  uVar4 = (uint)uVar16;
  auVar14._4_4_ = 0;
  auVar14._0_4_ = uVar4 ^ 0x84222325;
  auVar14._8_4_ = uVar5;
  auVar14._12_4_ = 0;
  auVar12 = pshufb(auVar14 ^ _DAT_180e277f0,_DAT_1800170c0);
  uVar1 = (_DAT_1831aa5b0 ^ uVar11 & 0xffffffff) << 0x17 | _DAT_1831aa5b0 >> 0x29;
  _DAT_1831aa350 = _DAT_1831aa130 ^ uVar1 ^ uVar16;
  _DAT_1831aa308 = (_DAT_1831aa308 ^ uVar1) + uVar16 ^ 0x9487ac376c23c0f7;
  _DAT_1831aa450 = (_DAT_1831aa450 * -0x54828bac95f02c9b ^ _DAT_1831aa308) + uVar1;
  _DAT_1831aa6d8 = _DAT_1831aa450 ^ _DAT_1831aa308;
  uVar11 = auVar12._8_8_ + auVar12._0_8_;
  uVar1 = uVar11 + _DAT_1831aa500;
  if (auVar12._4_4_ < 0) {
    uVar1 = _DAT_1831aa3c8 ^ uVar11;
  }
  _DAT_1831aa238 = uVar16 & 0xffffffff;
  _DAT_1831aa2d0 = func_0x000187f39880(SUB161(auVar14 ^ _DAT_180e277f0,5) ^ uVar1);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar16 & 0xffffffff;
  uVar19 = uVar4 & uVar5;
  uVar9 = uVar4 | uVar5;
  auVar29._8_4_ = 0xffffffff;
  auVar29._0_8_ = 0xffffffffffffffff;
  auVar29._12_4_ = 0xffffffff;
  uVar1 = _DAT_1831aa2d0 - (_DAT_1831aa2d0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar11 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
           _DAT_1831aa2d0;
  uVar1 = uVar11 >> 1 | uVar11;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           uVar11;
  uVar17 = SUB164(auVar21 ^ auVar29,0);
  uVar1 = ((ulonglong)(uVar5 ^ 0xffffffff) * (ulonglong)_DAT_180e27870 + _DAT_180e27880 << 0x20) +
          (ulonglong)_DAT_180e27860 * (ulonglong)(uVar5 ^ 0xffffffff) +
          ((ulonglong)_DAT_180e27850 * (ulonglong)uVar9 << 0x20) +
          (ulonglong)_DAT_180e27840 * (ulonglong)uVar9 +
          ((ulonglong)uVar19 * (ulonglong)_DAT_180e27850 << 0x20) +
          (ulonglong)uVar19 * (ulonglong)_DAT_180e27840 +
          ((ulonglong)_DAT_180e27830 * (ulonglong)uVar5 << 0x20) +
          (ulonglong)_DAT_180e27820 * (ulonglong)uVar5 +
          (ulonglong)_DAT_180e27800 * (uVar16 & 0xffffffff) +
          ((ulonglong)_DAT_180e27810 * (uVar16 & 0xffffffff) << 0x20) +
          (-((ulonglong)uVar17 * (_DAT_180e278f0 & 0xffffffff) +
            ((ulonglong)_DAT_180e27960 * (ulonglong)uVar17 +
             (SUB168(auVar21 ^ auVar29,0) >> 0x20) * (_DAT_180e278f0 & 0xffffffff) << 0x20)) -
          (((ulonglong)(uVar4 ^ uVar5) * (ulonglong)_DAT_180e27950 << 0x20) +
           (ulonglong)_DAT_180e27940 * (ulonglong)(uVar4 ^ uVar5) +
           ((ulonglong)uVar9 * (ulonglong)_DAT_180e27930 << 0x20) +
           (ulonglong)_DAT_180e27920 * (ulonglong)uVar9 +
          ((ulonglong)uVar19 * (ulonglong)_DAT_180e27910 << 0x20) +
          (ulonglong)_DAT_180e27900 * (ulonglong)uVar19 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180e278e0 << 0x20) +
          (ulonglong)_DAT_180e278d0 * (ulonglong)uVar5 +
          (ulonglong)_DAT_180e278b0 * (uVar16 & 0xffffffff) +
          ((uVar16 & 0xffffffff) * (ulonglong)_DAT_180e278c0 << 0x20))) + 0x7058e8fe1753618d;
  _DAT_1831aa130 = _DAT_1831aa418 ^ uVar11 ^ uVar1;
  _DAT_1831aa4c0 = (_DAT_1831aa4c0 ^ uVar11) + uVar1 ^ 0xfbb25fb4ed4e9692;
  _DAT_1831aa410 = (_DAT_1831aa410 * 0x1fb0d7207ec70353 ^ _DAT_1831aa4c0) + uVar11;
  _DAT_1831aa5a8 = _DAT_1831aa410 ^ _DAT_1831aa4c0;
  _DAT_1831aa5f0 = uVar1 & 0xffffffff;
  uVar4 = (int)uVar1 + uVar18 * uVar18 * 0x5acb6b27;
  uVar5 = uVar10 * uVar18 * -0x4df8b68e;
  uVar11 = (ulonglong)uVar5;
  uVar1 = ((_DAT_1831aa548 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831aa548 & 0x84222325) * 2) *
          (uVar11 - _DAT_1831aa498);
  uVar1 = (uVar1 | _DAT_1831aa520) + (uVar1 & _DAT_1831aa520);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831aa280 =
       func_0x000187f39880((uVar11 ^ 0x84222325 | uVar1) +
                           (ulonglong)((uint)(uVar11 ^ 0x84222325) & (uint)uVar1));
  uVar9 = uVar10 * uVar18 * 0x4df8b68e;
  uVar16 = (ulonglong)uVar9;
  _DAT_1831aa4e0 =
       (_DAT_1831aa4e0 ^ _DAT_1831aa280 * -0x2c6cf658bec55989) - uVar11 ^ 0xbfde5abd5703c6ab;
  _DAT_1831aa398 =
       (_DAT_1831aa398 * 0x62205bb00d2f6c31 ^ _DAT_1831aa4e0) + _DAT_1831aa280 * -0x2c6cf658bec55989
  ;
  _DAT_1831aa5f0 = _DAT_1831aa398 ^ _DAT_1831aa4e0;
  uVar7 = (ulonglong)uVar4 ^ 0x84222325;
  uVar1 = ((_DAT_1831aa4c8 ^ uVar7) + (ulonglong)((uint)_DAT_1831aa4c8 & (uint)uVar7) * 2) *
          (uVar11 - _DAT_1831aa3a8);
  uVar1 = (uVar1 | _DAT_1831aa6c0) + (uVar1 & _DAT_1831aa6c0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831aa648 = uVar16;
  _DAT_1831aa6a0 =
       func_0x000187f39880((uVar7 ^ uVar11 | uVar1) +
                           (ulonglong)((uint)(uVar7 ^ uVar11) & (uint)uVar1));
  uVar19 = uVar4 & uVar5;
  uVar17 = uVar4 | uVar5;
  uVar18 = uVar4 ^ uVar5;
  uVar1 = ((uVar4 * uVar11 ^ _DAT_1831aa6a0) & 0xfffffffff) * 0x425b5621b8afbe35;
  uVar10 = uVar4 ^ 0xffffffff;
  uVar11 = ((((ulonglong)_DAT_180e27980 * (ulonglong)uVar10 + _DAT_180e279e0 << 0x20) +
             (ulonglong)_DAT_180e279d0 * (ulonglong)uVar10 +
             ((ulonglong)_DAT_180e279a0 * (ulonglong)uVar18 << 0x20) +
             (ulonglong)_DAT_180e27990 * (ulonglong)uVar18 +
             ((ulonglong)uVar19 * (ulonglong)_DAT_180e279a0 << 0x20) +
             (ulonglong)uVar19 * (ulonglong)_DAT_180e27990 +
             ((ulonglong)uVar4 * (ulonglong)_DAT_180e27980 << 0x20) + (ulonglong)uVar5 +
             (ulonglong)_DAT_180e27970 * (ulonglong)uVar4 +
            ((ulonglong)_DAT_180e279c0 * (ulonglong)uVar17 << 0x20) +
            (ulonglong)_DAT_180e279b0 * (ulonglong)uVar17) -
           (((ulonglong)uVar10 * (ulonglong)_DAT_180e27a20 + _DAT_180e27a70 << 0x20) +
            (ulonglong)_DAT_180e27a10 * (ulonglong)uVar10 +
            ((ulonglong)uVar18 * (ulonglong)_DAT_180e27a40 << 0x20) +
            (ulonglong)_DAT_180e27a30 * (ulonglong)uVar18 +
            ((ulonglong)uVar19 * (ulonglong)_DAT_180e27a40 << 0x20) +
            (ulonglong)uVar19 * (ulonglong)_DAT_180e27a30 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_180e27a20 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_180e27a10 +
           ((ulonglong)uVar17 * (ulonglong)_DAT_180e27a60 << 0x20) +
           (ulonglong)_DAT_180e27a50 * (ulonglong)uVar17)) + 0x2551b8129127dd;
  _DAT_1831aa4f0 = _DAT_1831aa550 ^ uVar1 ^ uVar11;
  _DAT_1831aa298 = (_DAT_1831aa298 ^ uVar1) + uVar11 ^ 0x94c41d77f0bff6d8;
  _DAT_1831aa2e8 = (_DAT_1831aa2e8 * 0x6d8f4724a4c11479 ^ _DAT_1831aa298) + uVar1;
  _DAT_1831aa528 = _DAT_1831aa2e8 ^ _DAT_1831aa298;
  uVar7 = uVar11 & 0xffffffff;
  uVar1 = uVar7 ^ 0x84222325 ^ _DAT_1831aa398;
  lVar6 = (uVar7 ^ 0x84222325) + _DAT_1831aa5f0;
  uVar20 = uVar1 + lVar6;
  uVar23 = (uVar16 ^ _DAT_1831aa5f0) + _DAT_1831aa398 + uVar16;
  uVar1 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uVar1;
  uVar20 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ uVar16 ^ _DAT_1831aa5f0;
  _DAT_1831aa630 = uVar7;
  _DAT_1831aa230 =
       func_0x000187f39880((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_1831aa398 + uVar16) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - lVar6);
  uVar18 = uStack0000000000000034;
  uVar1 = _DAT_1831aa230 & 0x7fffffffffffffff;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar7;
  uVar10 = (uint)uVar11;
  uVar17 = uVar10 & uVar9;
  uVar4 = uVar10 | uVar9;
  uVar10 = uVar10 ^ uVar9;
  uVar5 = SUB164(auVar24 ^ auVar29,0);
  uVar16 = (((ulonglong)uVar5 * (ulonglong)_DAT_180e27ac0 +
             ((ulonglong)_DAT_180e27b30 * (ulonglong)uVar5 +
              (SUB168(auVar24 ^ auVar29,0) >> 0x20) * (ulonglong)_DAT_180e27ac0 << 0x20) +
            ((ulonglong)_DAT_180e27b20 * (ulonglong)uVar10 << 0x20) +
            (ulonglong)_DAT_180e27b10 * (ulonglong)uVar10 +
            ((ulonglong)_DAT_180e27b00 * (ulonglong)uVar4 << 0x20) +
            (ulonglong)_DAT_180e27af0 * (ulonglong)uVar4 +
            ((ulonglong)_DAT_180e27ae0 * (ulonglong)uVar17 << 0x20) +
            (ulonglong)_DAT_180e27ad0 * (ulonglong)uVar17 +
            ((ulonglong)_DAT_180e27ab0 * (ulonglong)uVar9 << 0x20) +
            (ulonglong)_DAT_180e27aa0 * (ulonglong)uVar9 +
            (ulonglong)_DAT_180e27a80 * (uVar11 & 0xffffffff) +
            ((ulonglong)_DAT_180e27a90 * (uVar11 & 0xffffffff) << 0x20)) -
           (((ulonglong)uVar10 * (ulonglong)_DAT_180e27bd0 << 0x20) +
            (ulonglong)_DAT_180e27bc0 * (ulonglong)uVar10 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_180e27bb0 << 0x20) +
            (ulonglong)_DAT_180e27ba0 * (ulonglong)uVar4 +
           ((ulonglong)uVar17 * (ulonglong)_DAT_180e27b90 << 0x20) +
           (ulonglong)_DAT_180e27b80 * (ulonglong)uVar17 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_180e27b70 << 0x20) +
           (ulonglong)_DAT_180e27b60 * (ulonglong)uVar9 +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_180e27b60 +
           ((uVar11 & 0xffffffff) * (ulonglong)_DAT_180e27b70 << 0x20))) + 0x1cf306353028d640;
  _DAT_1831aa558 = _DAT_1831aa510 ^ uVar1 ^ uVar16;
  _DAT_1831aa4c0 = (_DAT_1831aa4c0 ^ uVar1) + uVar16 ^ 0x51bee9d96c7a79d;
  _DAT_1831aa5b0 = (_DAT_1831aa5b0 * -0x7ced257aabcdb407 ^ _DAT_1831aa4c0) + uVar1;
  _DAT_1831aa2d0 = _DAT_1831aa5b0 ^ _DAT_1831aa4c0;
  uVar11 = uVar16 & 0xffffffff;
  uVar7 = uVar2 ^ 0x84222325;
  auVar15._8_8_ = uVar8;
  auVar15._0_8_ = uVar7;
  uVar10 = uVar3 + uStack0000000000000034;
  auVar14 = pshufb(auVar15 ^ _DAT_180e27be0,_DAT_1800170c0);
  uVar20 = auVar14._8_8_ + auVar14._0_8_;
  uVar1 = uVar20 + _DAT_1831aa6d0;
  if (auVar14._4_4_ < 0) {
    uVar1 = _DAT_1831aa5b0 ^ uVar20;
  }
  _DAT_1831aa278 = uVar11;
  _DAT_1831aa3b0 = func_0x000187f39880(SUB161(auVar15 ^ _DAT_180e27be0,5) ^ uVar1);
  uVar20 = uVar2 ^ uVar8;
  _DAT_1831aa458 = (_DAT_1831aa458 ^ _DAT_1831aa148) + uVar20 ^ 0xf354fa6ad0a84346;
  _DAT_1831aa280 = (_DAT_1831aa280 * -0x1b0111fdfebf328d ^ _DAT_1831aa458) + _DAT_1831aa148;
  _DAT_1831aa3a0 = _DAT_1831aa280 ^ _DAT_1831aa458;
  uVar1 = ((_DAT_1831aa1e8 ^ uVar7) + (ulonglong)((uint)uVar7 & (uint)_DAT_1831aa1e8) * 2) *
          (uVar8 - _DAT_1831aa3a0);
  uVar1 = (uVar1 | _DAT_1831aa3f0) + (uVar1 & _DAT_1831aa3f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831aa260 = uVar20;
  _DAT_1831aa350 =
       func_0x000187f39880((uVar8 ^ uVar7 | uVar1) +
                           (ulonglong)((uint)(uVar8 ^ uVar7) & (uint)uVar1));
  _DAT_1831aa310 = (ulonglong)(uVar3 & uVar18);
  _DAT_1831aa5b0 = (_DAT_1831aa5b0 ^ ~_DAT_1831aa350 & uVar2) + _DAT_1831aa310 ^ 0x7165a99362b4a2d8;
  _DAT_1831aa480 =
       (_DAT_1831aa480 * -0x21201b340024c57 ^ _DAT_1831aa5b0) + (~_DAT_1831aa350 & uVar2);
  _DAT_1831aa270 = _DAT_1831aa480 ^ _DAT_1831aa5b0;
  uVar18 = (int)uVar20 + (uVar3 & uVar18) * 2;
  uVar2 = (ulonglong)uVar18;
  uVar1 = (ulonglong)uVar10 ^ 0x84222325 ^ _DAT_1831aa3d0;
  lVar6 = ((ulonglong)uVar10 ^ 0x84222325) + _DAT_1831aa528;
  uVar8 = uVar1 + lVar6;
  uVar20 = (uVar2 ^ _DAT_1831aa528) + _DAT_1831aa3d0 + uVar2;
  uVar1 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar1;
  uVar8 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uVar2 ^ _DAT_1831aa528;
  _DAT_1831aa660 =
       func_0x000187f39880((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831aa3d0 + uVar2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - lVar6);
  uVar9 = uVar10 & uVar18;
  uVar4 = uVar10 | uVar18;
  uVar5 = uVar18 ^ 0xffffffff;
  uVar1 = (_DAT_1831aa660 ^ uVar2) & 0xfffffffffff00000;
  uVar2 = ((((ulonglong)_DAT_180e27ca0 * (ulonglong)uVar5 + _DAT_180e27cb0 << 0x20) +
            (ulonglong)_DAT_180e27c90 * (ulonglong)uVar5 +
           ((ulonglong)(uVar10 ^ uVar18) * (ulonglong)_DAT_180e27c80 << 0x20) +
           (ulonglong)_DAT_180e27c70 * (ulonglong)(uVar10 ^ uVar18) +
           ((ulonglong)_DAT_180e27c60 * (ulonglong)uVar4 << 0x20) +
           (ulonglong)_DAT_180e27c50 * (ulonglong)uVar4 +
           ((ulonglong)_DAT_180e27c40 * (ulonglong)uVar9 << 0x20) +
           (ulonglong)_DAT_180e27c30 * (ulonglong)uVar9 +
           ((ulonglong)_DAT_180e27c20 * (ulonglong)uVar18 << 0x20) +
           (ulonglong)_DAT_180e27c10 * (ulonglong)uVar18 +
           ((ulonglong)_DAT_180e27c00 * (ulonglong)uVar10 << 0x20) +
           (ulonglong)_DAT_180e27bf0 * (ulonglong)uVar10) -
          (((ulonglong)uVar5 * (ulonglong)_DAT_180e27d80 + _DAT_180e27d90 << 0x20) +
           (ulonglong)_DAT_180e27d70 * (ulonglong)uVar5 +
          ((ulonglong)(uVar10 ^ 0xffffffff) * (ulonglong)_DAT_180e27d50 + _DAT_180e27d60 << 0x20) +
          (ulonglong)_DAT_180e27d40 * (ulonglong)(uVar10 ^ 0xffffffff) +
          ((ulonglong)uVar4 * (ulonglong)_DAT_180e27d30 << 0x20) +
          (ulonglong)_DAT_180e27d20 * (ulonglong)uVar4 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_180e27d30 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_180e27d20 +
          ((ulonglong)uVar10 * (ulonglong)_DAT_180e27cf0 << 0x20) +
          (ulonglong)_DAT_180e27ce0 * (ulonglong)uVar10 +
          ((ulonglong)uVar18 * (ulonglong)_DAT_180e27d10 << 0x20) +
          (ulonglong)_DAT_180e27d00 * (ulonglong)uVar18)) + 0x99367b87fbcee370;
  _DAT_1831aa338 = uVar2 ^ uVar1;
  _DAT_1831aa2c0 = (_DAT_1831aa2c0 ^ uVar1) + uVar2 ^ 0x2c15c219aa18d831;
  _DAT_1831aa608 = (_DAT_1831aa608 * -0x5de0f82d243e5d85 ^ _DAT_1831aa2c0) + uVar1;
  _DAT_1831aa5a8 = _DAT_1831aa608 ^ _DAT_1831aa2c0;
  uVar8 = uVar2 & 0xffffffff;
  uVar1 = uVar11 ^ 0x84222325 ^ _DAT_1831aa680;
  lVar6 = (uVar11 ^ 0x84222325) + _DAT_1831aa538;
  uVar20 = uVar1 + lVar6;
  uVar23 = (uVar8 ^ _DAT_1831aa538) + _DAT_1831aa680 + uVar8;
  uVar1 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uVar1;
  uVar20 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ uVar8 ^ _DAT_1831aa538;
  _DAT_1831aa468 = uVar8;
  _DAT_1831aa2c8 =
       func_0x000187f39880((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_1831aa680 + uVar8) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - lVar6);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar11;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar8;
  uVar10 = (uint)uVar16;
  uVar18 = (uint)uVar2;
  uVar17 = uVar10 & uVar18;
  uVar4 = uVar10 | uVar18;
  uVar9 = SUB164(auVar25 ^ auVar29,0);
  uVar1 = _DAT_1831aa2c8 & 0x1ffffffffff;
  uVar5 = SUB164(auVar22 ^ auVar29,0);
  uVar11 = (ulonglong)uVar9 * (ulonglong)_DAT_180e27de0 +
           ((ulonglong)_DAT_180e27e10 * (ulonglong)uVar9 +
            (SUB168(auVar25 ^ auVar29,0) >> 0x20) * (ulonglong)_DAT_180e27de0 << 0x20) +
           ((ulonglong)_DAT_180e27e00 * (ulonglong)uVar4 << 0x20) +
           (ulonglong)_DAT_180e27df0 * (ulonglong)uVar4 +
           ((ulonglong)uVar17 * (ulonglong)_DAT_180e27e00 << 0x20) +
           (ulonglong)uVar17 * (ulonglong)_DAT_180e27df0 +
           ((ulonglong)_DAT_180e27dd0 * (uVar2 & 0xffffffff) << 0x20) +
           (ulonglong)_DAT_180e27dc0 * (uVar2 & 0xffffffff) + _DAT_180e27da0 * uVar11 +
           (_DAT_180e27db0 * uVar11 << 0x20) +
           (-((ulonglong)uVar5 * (_DAT_180e27e80 & 0xffffffff) +
             ((ulonglong)_DAT_180e27ef0 * (ulonglong)uVar5 +
              (SUB168(auVar22 ^ auVar29,0) >> 0x20) * (_DAT_180e27e80 & 0xffffffff) << 0x20)) -
           (((ulonglong)(uVar10 ^ uVar18) * (ulonglong)_DAT_180e27ee0 << 0x20) +
            (ulonglong)_DAT_180e27ed0 * (ulonglong)(uVar10 ^ uVar18) +
            ((ulonglong)uVar4 * (ulonglong)_DAT_180e27ec0 << 0x20) +
            (ulonglong)_DAT_180e27eb0 * (ulonglong)uVar4 +
           ((ulonglong)uVar17 * (ulonglong)_DAT_180e27ea0 << 0x20) +
           (ulonglong)_DAT_180e27e90 * (ulonglong)uVar17 +
           ((uVar2 & 0xffffffff) * (ulonglong)_DAT_180e27e70 << 0x20) +
           (ulonglong)_DAT_180e27e60 * (uVar2 & 0xffffffff) + _DAT_180e27e40 * uVar11 +
           (uVar11 * _DAT_180e27e50 << 0x20))) + 0xc0f752160dbacb4e;
  _DAT_1831aa280 = _DAT_1831aa260 ^ uVar1 ^ uVar11;
  _DAT_1831aa290 = (_DAT_1831aa290 ^ uVar1) + uVar11 ^ 0x2f8913d1435f2322;
  _DAT_1831aa210 = (_DAT_1831aa210 * -0x77bff9c18d36267f ^ _DAT_1831aa290) + uVar1;
  _DAT_1831aa230 = _DAT_1831aa210 ^ _DAT_1831aa290;
  uVar10 = (uint)uVar11;
  uVar2 = uVar7 ^ ~uVar3;
  uVar1 = ((_DAT_1831aa358 ^ uVar7) + (ulonglong)((uint)_DAT_1831aa358 & (uint)uVar7) * 2) *
          (~uVar3 - _DAT_1831aa2d0);
  uVar1 = (uVar1 | _DAT_1831aa320) + (uVar1 & _DAT_1831aa320);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831aa198 = uVar11 & 0xffffffff;
  _DAT_1831aa630 = func_0x000187f39880((uVar2 | uVar1) + (ulonglong)((uint)uVar2 & (uint)uVar1));
  uVar1 = _DAT_1831aa630 << 3 | _DAT_1831aa630 >> 0x3d;
  _DAT_1831aa500 = _DAT_1831aa500 ^ uVar1 ^ 0xbe731c792bb3f85a;
  _DAT_1831aa550 = (_DAT_1831aa550 * 0x365ae423faeed061 ^ _DAT_1831aa500) + uVar1;
  _DAT_1831aa578 = _DAT_1831aa550 ^ _DAT_1831aa500;
  auVar14 = pshufb(ZEXT416(uVar10 ^ 0x84222325),_DAT_18001be80);
  auVar14 = auVar14 ^ _DAT_180e27f00;
  _DAT_1831aa590 = 0;
  uVar2 = auVar14._8_8_ + auVar14._0_8_;
  uVar1 = uVar2 + _DAT_1831aa560;
  if (auVar14._4_4_ < 0) {
    uVar1 = _DAT_1831aa3d0 ^ uVar2;
  }
  _DAT_1831aa518 = func_0x000187f39880(uVar1 ^ 0xc9);
  uVar1 = ~(ulonglong)((uint)_DAT_1831aa518 ^ uVar10) & uVar11 & 0xffffffff;
  uVar10 = uVar10 ^ 0xffffffff;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar1;
  uVar2 = ((((ulonglong)_DAT_180e27f20 * (ulonglong)uVar10 + _DAT_180e27f80 << 0x20) +
            (ulonglong)_DAT_180e27f70 * (ulonglong)uVar10 +
            ((ulonglong)_DAT_180e27f60 * (uVar11 & 0xffffffff) << 0x20) +
            (ulonglong)_DAT_180e27f50 * (uVar11 & 0xffffffff) +
           ((ulonglong)_DAT_180e27f40 * (uVar11 & 0xffffffff) << 0x20) +
           (ulonglong)_DAT_180e27f30 * (uVar11 & 0xffffffff) +
           ((uVar11 & 0xffffffff) * (ulonglong)_DAT_180e27f20 << 0x20) +
           (ulonglong)_DAT_180e27f10 * (uVar11 & 0xffffffff)) -
          (((ulonglong)uVar10 * (ulonglong)_DAT_180e27fa0 + _DAT_180e27fb0 << 0x20) +
           (ulonglong)_DAT_180e27f90 * (ulonglong)uVar10 +
          ((uVar11 & 0xffffffff) * (ulonglong)_DAT_180e27fa0 << 0x20) +
          (uVar11 & 0xffffffff) * (ulonglong)_DAT_180e27f90)) + 0x354c1a6497d2afed;
  _DAT_1831aa390 = _DAT_1831aa438 ^ uVar1 ^ uVar2;
  _DAT_1831aa4a8 = (_DAT_1831aa4a8 ^ uVar1) + uVar2 ^ 0xc40885c64ae91456;
  _DAT_1831aa3b0 = (_DAT_1831aa3b0 * 0x26b5fbb7d1b5c2fd ^ _DAT_1831aa4a8) + uVar1;
  _DAT_1831aa1b0 = _DAT_1831aa4a8 ^ _DAT_1831aa3b0;
  _DAT_1831aa3d0 = uVar2 & 0xffffffff;
  uVar1 = 0;
  if (in_stack_00000038._4_4_ == 0) {
    uVar1 = uVar2 & 0xffffffff;
  }
  (*_DAT_180e27510)(uVar1);
  return;
}



// ===== continuation @ rva 7f39a98 (image 187f39a98) =====

void FUN_187f39a98(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x30) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x000187f39ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e28680 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 7f39a43 (image 187f39a43) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187f39a7a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187f39a43(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7f4e8a6 (image 187f4e8a6) =====

void FUN_187f4e8a6(void)

{
  return;
}



// ===== continuation @ rva 7f4e792 (image 187f4e792) =====

undefined8 thunk_FUN_187f39a7d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 7f4602e (image 187f4602e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f4602e(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar3;
  longlong *unaff_R13;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  uint unaff_XMM6_Da;
  uint uVar5;
  undefined1 unaff_XMM11 [16];
  uint unaff_XMM12_Da;
  uint uVar6;
  uint uVar7;
  
  auVar4 = pshufb(in_XMM0,unaff_XMM11);
  uVar3 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar3 + _DAT_1831aa870;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_1831aa8b0 ^ uVar3;
  }
  _DAT_1831aa8b0 = func_0x000187f627e0(in_XMM0[5] ^ uVar2);
  uVar6 = unaff_ESI & unaff_XMM12_Da;
  uVar5 = unaff_ESI | unaff_XMM12_Da;
  uVar7 = unaff_ESI ^ unaff_XMM12_Da;
  uVar2 = _DAT_1831aa8b0 << 0x29 | (_DAT_1831aa8b0 & 0x7fffffffffffffff) >> 0x17;
  uVar3 = ((ulonglong)uVar7 * (ulonglong)_DAT_180e28d40 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_180e28d30 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180e28d20 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180e28d10 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_180e28d00 << 0x20 |
          (ulonglong)uVar6 * (ulonglong)_DAT_180e28cf0) +
          ((ulonglong)unaff_ESI * (ulonglong)_DAT_180e28ce0 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_180e28cd0 +
          (-(((ulonglong)(unaff_ESI ^ unaff_XMM6_Da) * (ulonglong)_DAT_180e28e00 + _DAT_180e28e10 <<
             0x20) + (ulonglong)(unaff_ESI ^ unaff_XMM6_Da) * (ulonglong)_DAT_180e28df0) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_180e28de0 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180e28dd0 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_180e28dc0 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_180e28db0 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_180e28da0 << 0x20 |
          (ulonglong)uVar6 * (ulonglong)_DAT_180e28d90) +
          ((ulonglong)unaff_ESI * (ulonglong)_DAT_180e28d80 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_180e28d70)) + 0x89cd993546ab0542;
  _DAT_1831aa980 = _DAT_1831aaa40 ^ uVar2 ^ uVar3;
  _DAT_1831aa940 = (_DAT_1831aa940 ^ uVar2) + uVar3 ^ 0x3eb9546e721d5a07;
  _DAT_1831aa840 = (_DAT_1831aa840 * -0x4e8b456a0e3222af ^ _DAT_1831aa940) + uVar2;
  _DAT_1831aaa58 = _DAT_1831aa840 ^ _DAT_1831aa940;
  _DAT_1831aa700 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar3;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f3f62b (image 187f3f62b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f3f62b(void)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  uint uVar5;
  uint uVar7;
  undefined1 auVar6 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  
  _DAT_1831aa8c8 = func_0x000187f627e0(_DAT_1831aaa50 ^ 0x3a1f34c2d7db51d6);
  _DAT_1831aa820 =
       (_DAT_1831aa820 ^ _DAT_1831aa8c8 ^ 0x40c5048002b1001c) + 0xdfd77cded3f5df5f ^
       0x9939a26a0f9ad324;
  _DAT_1831aaaa0 =
       (_DAT_1831aaaa0 * 0x69d11a6dd8fb0a5b ^ _DAT_1831aa820) +
       (_DAT_1831aa8c8 ^ 0x40c5048002b1001c);
  _DAT_1831aaa08 = _DAT_1831aaaa0 ^ _DAT_1831aa820;
  _DAT_1831aa930 = 0xdfd77cded3f5df5f;
  uVar4 = (~_DAT_1831aaae8 + 0x4c304d840f2e89be) *
          ((_DAT_1831aa748 ^ 0xa0c210d4fbb73fe) + (_DAT_1831aa748 & 0xa0c210d4fbb73fe) * 2);
  uVar4 = (uVar4 | _DAT_1831aa978) + (uVar4 & _DAT_1831aa978);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa7e0 = func_0x000187f627e0((uVar4 | 0x463c6c894095fa43) + (uVar4 & 0x463c6c894095fa43));
  uVar4 = (_DAT_1831aa7e0 ^ 0x4e3c6d8dcfbfd9ff) << 9 | (_DAT_1831aa7e0 ^ 0x4e3c6d8dcfbfd9ff) >> 0x37
  ;
  _DAT_1831aa828 = (_DAT_1831aa828 ^ uVar4) + 0x463c6c89c4b7d966 ^ 0x52de334ba126e476;
  _DAT_1831aa8a0 = (_DAT_1831aa8a0 * 0x74e52fcd2ae95a9b ^ _DAT_1831aa828) + uVar4;
  _DAT_1831aa760 = _DAT_1831aa8a0 ^ _DAT_1831aa828;
  _DAT_1831aa988 = 0x463c6c89c4b7d966;
  uVar4 = (~_DAT_1831aa850 + 0x5ee73c18dea30eae) *
          ((_DAT_1831aa7c8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831aa7c8 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1831aa910) + (uVar4 & _DAT_1831aa910);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa7a8 = func_0x000187f627e0((uVar4 | 0x5ee73c185a812d88) + (uVar4 & 0x5ee73c185a812d88));
  _DAT_1831aa800 = (_DAT_1831aa800 ^ _DAT_1831aa7a8) + 0xa118c3e7215cf153 ^ 0x7589ca3f6281a85a;
  _DAT_1831aa9d8 = (_DAT_1831aa9d8 * -0x245961bc46699c33 ^ _DAT_1831aa800) + _DAT_1831aa7a8;
  _DAT_1831aa760 = _DAT_1831aa9d8 ^ _DAT_1831aa800;
  _DAT_1831aaab8 = 0xa118c3e7215cf153;
  _DAT_1831aa9a8 = func_0x000187f627e0(_DAT_1831aaa20 ^ 0xa1bb1748af0eaa91);
  uVar4 = _DAT_1831aa9a8 * 0x38733ce23af47515;
  _DAT_1831aaa48 = _DAT_1831aa710 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_1831aa990 = (_DAT_1831aa990 ^ uVar4) - 8 ^ 0x93412ce9613fef38;
  _DAT_1831aa780 = (_DAT_1831aa780 * 0x3ef90a2afc41686f ^ _DAT_1831aa990) + uVar4;
  _DAT_1831aa9e0 = _DAT_1831aa780 ^ _DAT_1831aa990;
  _DAT_1831aa888 = 0xfffffffffffffff8;
  _DAT_1831aa790 = func_0x000187f627e0(_DAT_1831aaa60 ^ 0xf5995cc5ea494549);
  uVar4 = _DAT_1831aaa98 >> 1 | _DAT_1831aaa98;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1831aaa98;
  _DAT_1831aa778 = (_DAT_1831aa778 ^ uVar4) + 0x925ca6f5bd9373e1 ^ 0xf64e370c6f929e52;
  _DAT_1831aa9d8 = (_DAT_1831aa9d8 * 0x6efd3b874f886c0b ^ _DAT_1831aa778) + uVar4;
  _DAT_1831aaaa8 = _DAT_1831aa9d8 ^ _DAT_1831aa778;
  _DAT_1831aaa80 = 0x925ca6f5bd9373e1;
  uVar4 = (_DAT_1831aa818 ^ _DAT_180e29620) + _DAT_1831aaa70 + 0x6da3590ac64eaf32;
  uVar9 = (_DAT_1831aaa70 ^ _UNK_180e29628) + _DAT_1831aa818 + 0x925ca6f5bd9373e1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831aa818 ^ _DAT_180e29620;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831aaa70 ^ _UNK_180e29628;
  _DAT_1831aa998 =
       func_0x000187f627e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1831aa818 + 0x925ca6f5bd9373e1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831aaa70 + 0x6da3590ac64eaf32));
  uVar4 = (_DAT_1831aa998 ^ 0x3590a426c8c17) & 0xfffffffffffff;
  _DAT_1831aa960 = _DAT_1831aa728 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_1831aa978 = (_DAT_1831aa978 ^ uVar4) - 8 ^ 0x2779d17fc9b4af85;
  _DAT_1831aa700 = (_DAT_1831aa700 * -0x4eeb2087145da377 ^ _DAT_1831aa978) + uVar4;
  _DAT_1831aa798 = _DAT_1831aa700 ^ _DAT_1831aa978;
  _DAT_1831aa940 = 0xfffffffffffffff8;
  _DAT_1831aaa10 = func_0x000187f627e0(_DAT_1831aa730 ^ 0x5f218d9331fb2ae7);
  _DAT_1831aa9d8 =
       (_DAT_1831aa9d8 ^ _DAT_1831aaa10 & 0x7fffffffffffffff) + 0x689e41eeeab3aad ^
       0x5e3bbdff1ee43404;
  _DAT_1831aa790 =
       (_DAT_1831aa790 * 0x7c4b7c8a76e47125 ^ _DAT_1831aa9d8) +
       (_DAT_1831aaa10 & 0x7fffffffffffffff);
  _DAT_1831aa798 = _DAT_1831aa790 ^ _DAT_1831aa9d8;
  _DAT_1831aa988 = 0x689e41eeeab3aad;
  uVar4 = (~_DAT_1831aa9e8 + 0xf9761be11154c554) *
          ((_DAT_1831aa7b8 ^ 0xffffffff7bdddcdd) + (_DAT_1831aa7b8 & 0x7fffffff7bdddcdd) * 2);
  uVar4 = (uVar4 | _DAT_1831aa7b8) + (uVar4 & _DAT_1831aa7b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa838 = func_0x000187f627e0((uVar4 | 0x689e41e6a89198e) + (uVar4 & 0x689e41e6a89198e));
  _DAT_1831aa900 = _DAT_1831aa928 ^ _DAT_1831aa838 ^ 0xf9761be11154c54b;
  _DAT_1831aa888 = (_DAT_1831aa888 ^ _DAT_1831aa838) + 0xf9761be11154c54b ^ 0x75882773cc197216;
  _DAT_1831aa928 = (_DAT_1831aa928 * 0x131d2a2246131f7b ^ _DAT_1831aa888) + _DAT_1831aa838;
  _DAT_1831aa748 = _DAT_1831aa928 ^ _DAT_1831aa888;
  _DAT_1831aa7e8 = 0xf9761be11154c54b;
  uVar4 = (~_DAT_1831aa7f0 + 0x689e41eeeab3aae) *
          ((_DAT_1831aa708 ^ 0xf9761be19576e66e) + (_DAT_1831aa708 & 0x79761be19576e66e) * 2);
  uVar4 = (uVar4 | _DAT_1831aa848) + (uVar4 & _DAT_1831aa848);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa720 = func_0x000187f627e0((uVar4 | 0xffffffff7bdddcc3) + (uVar4 & 0xffffffff7bdddcc3));
  uVar4 = _DAT_1831aa720 ^ 0x135e22db6e1551af;
  _DAT_1831aaa10 = _DAT_1831aaa98 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_1831aa870 = (_DAT_1831aa870 ^ uVar4) - 8 ^ 0x9ffdc2bf2d64e026;
  _DAT_1831aa8e8 = (_DAT_1831aa8e8 * -0x66a07342ed6c38bf ^ _DAT_1831aa870) + uVar4;
  _DAT_1831aa980 = _DAT_1831aa8e8 ^ _DAT_1831aa870;
  _DAT_1831aa730 = -8;
  _DAT_1831aa9c0 = func_0x000187f627e0(_DAT_1831aaaf0 ^ 0x4ee3e96f13f01f53);
  uVar4 = (_DAT_1831aa9c0 & 0xffffff) << 0x27 | _DAT_1831aa9c0 >> 0x19;
  _DAT_1831aa808 = _DAT_1831aaa50 ^ uVar4 ^ 0x2613e96898adb8c5;
  _DAT_1831aa800 = (_DAT_1831aa800 ^ uVar4) + 0x2613e96898adb8c5 ^ 0x7a5a75c211b80614;
  _DAT_1831aa8f8 = (_DAT_1831aa8f8 * 0x23967587b6296b1 ^ _DAT_1831aa800) + uVar4;
  _DAT_1831aa9d8 = _DAT_1831aa8f8 ^ _DAT_1831aa800;
  _DAT_1831aaa30 = 0x2613e96898adb8c5;
  uVar4 = (~_DAT_1831aa978 + 0x463c6c89c4b7d967) *
          ((_DAT_1831aa980 ^ 0xdfd77cde57d7fc7a) + (_DAT_1831aa980 & 0x5fd77cde57d7fc7a) * 2);
  uVar4 = (uVar4 | _DAT_1831aa8f0) + (uVar4 & _DAT_1831aa8f0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aaa20 = func_0x000187f627e0((uVar4 | 0x99eb10579360251c) + (uVar4 & 0x99eb10579360251c));
  uVar4 = _DAT_1831aaa20 - (_DAT_1831aaa20 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1831aaa20;
  _DAT_1831aa910 = (_DAT_1831aa910 ^ uVar4) + 0x46146c88c0b5d946 ^ 0xe9916ba7a4bb6d34;
  _DAT_1831aa718 = (_DAT_1831aa718 * -0x750957bc0f903f41 ^ _DAT_1831aa910) + uVar4;
  _DAT_1831aaaf8 = _DAT_1831aa718 ^ _DAT_1831aa910;
  _DAT_1831aa788 = 0x46146c88c0b5d946;
  uVar4 = (~_DAT_1831aa758 + 0x8c28d911816bb28d) *
          ((_DAT_1831aaa30 ^ 0x99eb10579360251c) + (_DAT_1831aaa30 & 0x19eb10579360251c) * 2);
  uVar4 = (uVar4 | _DAT_1831aa8e8) + (uVar4 & _DAT_1831aa8e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aaa30 = func_0x000187f627e0((uVar4 | 0x15c3c946120b9790) + (uVar4 & 0x15c3c946120b9790));
  uVar9 = _DAT_1831aaa30 ^ 0x400c9008029b084;
  uVar4 = uVar9 >> 1 | uVar9;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar9 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar9;
  _DAT_1831aaaf0 = _DAT_1831aa978 ^ uVar9 ^ 0x2613e96898adb8c5;
  _DAT_1831aa928 = (_DAT_1831aa928 ^ uVar9) + 0x2613e96898adb8c5 ^ 0x4a13c3b4494d9ca4;
  _DAT_1831aa8f0 = (_DAT_1831aa8f0 * 0x5dc0b3c44efc6b1d ^ _DAT_1831aa928) + uVar9;
  _DAT_1831aaa58 = _DAT_1831aa8f0 ^ _DAT_1831aa928;
  _DAT_1831aa978 = 0x2613e96898adb8c5;
  uVar4 = (_DAT_1831aaa30 ^ _DAT_180e29630) + _DAT_1831aa890 + 0x2613e9681c8f9be0;
  uVar9 = (_DAT_1831aa890 ^ _UNK_180e29638) + _DAT_1831aaa30 + 0x2613e96898adb8c5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831aaa30 ^ _DAT_180e29630;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831aa890 ^ _UNK_180e29638;
  _DAT_1831aaa08 =
       func_0x000187f627e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1831aaa30 + 0x2613e96898adb8c5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831aa890 + 0x2613e9681c8f9be0));
  _DAT_1831aa700 = _DAT_1831aaa08 ^ 0x2613e96898adb8c5;
  uVar4 = _DAT_1831aa700 - (_DAT_1831aa700 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_1831aa700 =
       (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
       _DAT_1831aa700;
  _DAT_1831aa9f0 = _DAT_1831aa9f0 ^ _DAT_1831aa700 ^ 0xfb191ef802abe285;
  _DAT_1831aaac8 = (_DAT_1831aaac8 * -0x57cf2d38961c25c3 ^ _DAT_1831aa9f0) + _DAT_1831aa700;
  _DAT_1831aa7c8 = _DAT_1831aaac8 ^ _DAT_1831aa9f0;
  _DAT_1831aa760 = 0;
  uVar4 = ((_DAT_1831aa8b0 ^ 0xffffffff7bdddcdd) + (_DAT_1831aa8b0 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_1831aaac0;
  uVar4 = (uVar4 | _DAT_1831aaab8) + (uVar4 & _DAT_1831aaab8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa758 = func_0x000187f627e0((uVar4 | 0xffffffff7bdddcdd) + (uVar4 & 0xffffffff7bdddcdd));
  uVar4 = _DAT_1831aa758 & 0xfffffffffffffff8;
  _DAT_1831aa920 = _DAT_1831aa870 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_1831aa9c8 = (_DAT_1831aa9c8 ^ uVar4) - 8 ^ 0x9c6d76f6749ac4d2;
  _DAT_1831aa9b8 = (_DAT_1831aa9b8 * 0x6fbfde5ac001b9e5 ^ _DAT_1831aa9c8) + uVar4;
  _DAT_1831aa708 = _DAT_1831aa9b8 ^ _DAT_1831aa9c8;
  _DAT_1831aaa18 = 0xfffffffffffffff8;
  uVar4 = (_DAT_1831aa800 ^ _DAT_180e29640) + _DAT_1831aa800 + 0xdfd77cde57d7fc7a;
  uVar9 = (_DAT_1831aa800 ^ _UNK_180e29648) + (_DAT_1831aa800 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831aa800 ^ _DAT_180e29640;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831aa800 ^ _UNK_180e29648;
  _DAT_1831aa850 =
       func_0x000187f627e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1831aa800 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831aa800 + 0xdfd77cde57d7fc7a));
  _DAT_1831aaa58 =
       (_DAT_1831aaa58 ^ ~_DAT_1831aa850 & 0x3fffffffff) + 0x202883212c0a20a0 ^ 0xe577386cfc16f2e;
  _DAT_1831aaaa8 =
       (_DAT_1831aaaa8 * -0x268deb412fe95d1 ^ _DAT_1831aaa58) + (~_DAT_1831aa850 & 0x3fffffffff);
  _DAT_1831aa930 = _DAT_1831aaaa8 ^ _DAT_1831aaa58;
  _DAT_1831aaaa0 = 0x202883212c0a20a0;
  uVar4 = (~_DAT_1831aa868 + 0x202883212c0a20a1) *
          ((_DAT_1831aaad0 ^ 0xdfd77cde57d7fc7a) + (_DAT_1831aaad0 & 0x5fd77cde57d7fc7a) * 2);
  uVar4 = (uVar4 | _DAT_1831aa908) + (uVar4 & _DAT_1831aa908);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa9e8 = func_0x000187f627e0((uVar4 | 0xffffffff7bdddcda) + (uVar4 & 0xffffffff7bdddcda));
  uVar4 = _DAT_1831aa9e8 >> 1 | _DAT_1831aa9e8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1831aa9e8;
  uVar4 = uVar4 << 0x21 | uVar4 >> 0x1f;
  _DAT_1831aaab8 = _DAT_1831aaab8 ^ uVar4 ^ 0xa76cfb67cb7f410b;
  _DAT_1831aa798 = (_DAT_1831aa798 * -0x74355466f7d551cd ^ _DAT_1831aaab8) + uVar4;
  _DAT_1831aa948 = _DAT_1831aa798 ^ _DAT_1831aaab8;
  _DAT_1831aa870 = 0;
  _DAT_1831aa9d8 = func_0x000187f627e0(_DAT_1831aa958 + 0xf6431364447cc3f4 ^ 0x3e);
  _DAT_1831aa708 = _DAT_1831aa970 ^ _DAT_1831aa9b0 ^ 0xfffffffffffffff8;
  _DAT_1831aaa28 = (_DAT_1831aaa28 ^ _DAT_1831aa9b0) - 8 ^ 0xadc92f5bbc4e32fb;
  _DAT_1831aa910 = (_DAT_1831aa910 * 0x6ec342f9c56c351 ^ _DAT_1831aaa28) + _DAT_1831aa9b0;
  _DAT_1831aa740 = _DAT_1831aa910 ^ _DAT_1831aaa28;
  _DAT_1831aa8c0 = 0xfffffffffffffff8;
  uVar4 = (~_DAT_1831aa938 + 0x9f12785ed144df44) *
          ((_DAT_1831aa990 ^ 0x9f12785e5566fc66) + (_DAT_1831aa990 & 0x1f12785e5566fc66) * 2);
  uVar4 = (uVar4 | _DAT_1831aaa20) + (uVar4 & _DAT_1831aaa20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa808 = func_0x000187f627e0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = (_DAT_1831aa808 ^ 0x1f12785ed144df43) & 0x1fffffffffffffff;
  _DAT_1831aa718 = _DAT_1831aa718 ^ uVar4 ^ 0x85f00f146ba5b515;
  _DAT_1831aa748 = (_DAT_1831aa748 * 0x56ca28093bf34e67 ^ _DAT_1831aa718) + uVar4;
  _DAT_1831aa878 = _DAT_1831aa748 ^ _DAT_1831aa718;
  _DAT_1831aa7c8 = 0;
  uVar4 = *(ulonglong *)(unaff_RBP + 0x60);
  uVar9 = (~_DAT_1831aa920 - 7) *
          ((uVar4 ^ 0x84222325 ^ _DAT_1831aaa30) + ((uVar4 ^ 0x84222325) & _DAT_1831aaa30) * 2);
  uVar9 = (uVar9 | _DAT_1831aa840) + (uVar9 & _DAT_1831aa840);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_1831aaa50 =
       func_0x000187f627e0((uVar4 ^ 0xffffffff7bdddcdd | uVar9) +
                           (uVar9 & (uVar4 ^ 0xffffffff7bdddcdd)));
  auVar1 = _DAT_1800627b0;
  uVar2 = (_DAT_1831aaa50 << 0x19 & 0xffffffff | _DAT_1831aaa50 >> 0x27) * (ulonglong)_DAT_180e29650
          + ((ulonglong)_DAT_180e29660 *
             (_DAT_1831aaa50 << 0x19 & 0xffffffff | _DAT_1831aaa50 >> 0x27) +
             ((_DAT_1831aaa50 & 0x7fffffffff) >> 7) * (ulonglong)_DAT_180e29650 << 0x20) ^ uVar4;
  uVar7 = (uint)(uVar4 >> 0x20);
  auVar14._8_4_ = (int)uVar4;
  auVar14._0_8_ = uVar4;
  auVar14._12_4_ = uVar7;
  auVar13 = _DAT_1800627b0 ^ auVar14;
  auVar6._8_4_ = 0xffffffff;
  auVar6._0_8_ = 0xffffffffffffffff;
  auVar6._12_4_ = 0xffffffff;
  uVar9 = (ulonglong)_DAT_180e29680;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = auVar14;
  uVar15 = SUB164(auVar14 & auVar1,0);
  uVar3 = SUB168(auVar14 & auVar1,0);
  uVar12 = auVar13._0_4_;
  uVar8 = auVar13._0_8_;
  uVar5 = SUB164(auVar6 ^ auVar14,0);
  uVar10 = SUB168(auVar6 ^ auVar14,0);
  _DAT_1831aa940 =
       (((ulonglong)_DAT_180e296b0 * (ulonglong)uVar5 +
         ((ulonglong)_DAT_180e296e0 * (ulonglong)uVar5 +
          (uVar10 >> 0x20) * (ulonglong)_DAT_180e296b0 << 0x20) +
         (ulonglong)_DAT_180e296c0 * (ulonglong)uVar12 +
         ((ulonglong)_DAT_180e296d0 * (ulonglong)uVar12 +
          (uVar8 >> 0x20) * (ulonglong)_DAT_180e296c0 << 0x20) +
        (ulonglong)_DAT_180e29690 * (ulonglong)uVar15 +
        ((ulonglong)_DAT_180e296a0 * (ulonglong)uVar15 + (uVar3 >> 0x20) * (ulonglong)_DAT_180e29690
        << 0x20) +
        (uVar9 * (uVar4 & 0xffffffff) + (ulonglong)_DAT_180e29670 * (ulonglong)uVar7 << 0x20) +
        (uVar4 & 0xffffffff) * (ulonglong)_DAT_180e29670) -
       ((ulonglong)uVar5 * (_DAT_180e29750 & 0xffffffff) +
        ((ulonglong)_DAT_180e29780 * (ulonglong)uVar5 +
         (uVar10 >> 0x20) * (_DAT_180e29750 & 0xffffffff) << 0x20) +
        (ulonglong)uVar12 * (ulonglong)_DAT_180e29760 +
        ((ulonglong)_DAT_180e29770 * (ulonglong)uVar12 + (uVar8 >> 0x20) * (ulonglong)_DAT_180e29760
        << 0x20) +
       (ulonglong)uVar15 * (ulonglong)_DAT_180e29730 +
       ((ulonglong)_DAT_180e29740 * (ulonglong)uVar15 + (uVar3 >> 0x20) * (ulonglong)_DAT_180e29730
       << 0x20) +
       ((uVar4 & 0xffffffff) * (ulonglong)_DAT_180e29720 +
        (ulonglong)uVar7 * (ulonglong)_DAT_180e29710 << 0x20) +
       (uVar4 & 0xffffffff) * (ulonglong)_DAT_180e29710)) + 0xa04a09702c957ecb;
  _DAT_1831aa7f8 = _DAT_1831aa9d0 ^ uVar2 ^ _DAT_1831aa940;
  _DAT_1831aa8d0 = (_DAT_1831aa8d0 ^ uVar2) + _DAT_1831aa940 ^ 0x2046c03478629ca5;
  _DAT_1831aaaa0 = (_DAT_1831aaaa0 * -0x53124419c71c1531 ^ _DAT_1831aa8d0) + uVar2;
  _DAT_1831aaa88 = _DAT_1831aaaa0 ^ _DAT_1831aa8d0;
  uVar3 = _DAT_1831aa940 - *(longlong *)(unaff_RBP + 0x98);
  _DAT_1831aaab0 = func_0x000187f627e0(_DAT_1831aa798 + 0x92599dca99e2d642 ^ 0xca);
  _DAT_1831aaa00 =
       (_DAT_1831aaa00 ^ _DAT_1831aaab0 & 0x21a99f298cb41448) + 0xe7abbfbbfefc54cf ^
       0x9da33c6ab48f88be;
  _DAT_1831aa7a0 =
       (_DAT_1831aa7a0 * -0x40bec7e24aed2bdb ^ _DAT_1831aaa00) +
       (_DAT_1831aaab0 & 0x21a99f298cb41448);
  _DAT_1831aa7f0 = _DAT_1831aa7a0 ^ _DAT_1831aaa00;
  _DAT_1831aa7b8 = 0xe7abbfbbfefc54cf;
  _DAT_1831aa8b0 = func_0x000187f627e0(_DAT_1831aa7d8 ^ 0xdddb6e1402f1c225);
  uVar4 = _DAT_1831aa8b0 ^ 0x20;
  _DAT_1831aa960 = _DAT_1831aa7d8 ^ uVar4 ^ 0x4e723e62b0ecdc20;
  _DAT_1831aa918 = (_DAT_1831aa918 ^ uVar4) + 0x4e723e62b0ecdc20 ^ 0x768871e445bcb6d8;
  _DAT_1831aa8e0 = (_DAT_1831aa8e0 * 0x67f9f930a7d660c3 ^ _DAT_1831aa918) + uVar4;
  _DAT_1831aa9c0 = _DAT_1831aa8e0 ^ _DAT_1831aa918;
  _DAT_1831aa778 = 0x4e723e62b0ecdc20;
  uVar4 = (~_DAT_1831aa800 + 0xb6133d6d2151af98) *
          ((_DAT_1831aa888 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831aa888 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1831aa788) + (uVar4 & _DAT_1831aa788);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aaa08 = func_0x000187f627e0((uVar4 | 0xb6133d6da5738cb2) + (uVar4 & 0xb6133d6da5738cb2));
  _DAT_1831aa8c8 = (_DAT_1831aa8c8 ^ _DAT_1831aaa08) + 0x49ecc292deae5069 ^ 0x5d2d43b2f698b679;
  _DAT_1831aaa20 = (_DAT_1831aaa20 * -0xa84e1be7f358415 ^ _DAT_1831aa8c8) + _DAT_1831aaa08;
  _DAT_1831aaa10 = _DAT_1831aaa20 ^ _DAT_1831aa8c8;
  _DAT_1831aaa40 = 0x49ecc292deae5069;
  uVar4 = (~_DAT_1831aa7b8 + 0xb6133d6d2151af98) *
          ((_DAT_1831aa9b8 ^ 0x84222305) + (ulonglong)((uint)_DAT_1831aa9b8 & 0x84222305) * 2);
  uVar4 = (uVar4 | _DAT_1831aaae8) + (uVar4 & _DAT_1831aaae8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa7a8 = func_0x000187f627e0((uVar4 | 0xb6133d6da5738c92) + (uVar4 & 0xb6133d6da5738c92));
  _DAT_1831aaa88 = _DAT_1831aa9b8 ^ _DAT_1831aa7a8 ^ 0xb6133d6d2151afb7;
  _DAT_1831aa970 = (_DAT_1831aa970 ^ _DAT_1831aa7a8) + 0xb6133d6d2151afb7 ^ 0x92b58af5beb428eb;
  _DAT_1831aa790 = (_DAT_1831aa790 * 0x7cab61b3e9e850c7 ^ _DAT_1831aa970) + _DAT_1831aa7a8;
  _DAT_1831aa7b8 = _DAT_1831aa790 ^ _DAT_1831aa970;
  _DAT_1831aa8a8 = 0xb6133d6d2151afb7;
  uVar4 = (_DAT_1831aa860 ^ _DAT_180e29790) + _DAT_1831aa928 + 0xb6133d6da5738c92;
  uVar9 = (_DAT_1831aa928 ^ _UNK_180e29798) + _DAT_1831aa860 + 0x49ecc292deae5069;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831aa860 ^ _DAT_180e29790;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831aa928 ^ _UNK_180e29798;
  _DAT_1831aa950 =
       func_0x000187f627e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1831aa860 + 0x49ecc292deae5069) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831aa928 + 0xb6133d6da5738c92));
  uVar4 = _DAT_1831aa950 ^ 0xb6133d6d2151afb7;
  _DAT_1831aa8a8 = _DAT_1831aa9c8 ^ uVar4 ^ 0x20;
  _DAT_1831aa978 = (_DAT_1831aa978 ^ uVar4) + 0x20 ^ 0x171d86260b951372;
  _DAT_1831aaac8 = (_DAT_1831aaac8 * 0x2871771dcc8cee73 ^ _DAT_1831aa978) + uVar4;
  _DAT_1831aa7a0 = _DAT_1831aaac8 ^ _DAT_1831aa978;
  _DAT_1831aaa68 = 0x20;
  uVar4 = (_DAT_1831aa828 ^ _DAT_180e297a0) + _DAT_1831aa958 + 0x84222305;
  uVar9 = (_DAT_1831aa958 ^ _UNK_180e297a8) + _DAT_1831aa828 + 0x69789403675de0c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831aa828 ^ _DAT_180e297a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831aa958 ^ _UNK_180e297a8;
  _DAT_1831aa700 =
       func_0x000187f627e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1831aa828 + 0x69789403675de0c0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831aa958 + 0x84222305));
  uVar4 = (ulonglong)(~(uint)_DAT_1831aa700 & 0x20) << 0x32;
  _DAT_1831aaaa8 = _DAT_1831aa9a0 ^ uVar4 ^ 0x69789403675de0e0;
  _DAT_1831aaa20 = (_DAT_1831aaa20 ^ uVar4) + 0x69789403675de0e0 ^ 0x66ab15705f18ebd;
  _DAT_1831aaa60 = (_DAT_1831aaa60 * -0x65449081a2741391 ^ _DAT_1831aaa20) + uVar4;
  _DAT_1831aaab0 = _DAT_1831aaa60 ^ _DAT_1831aaa20;
  _DAT_1831aa878 = 0x69789403675de0e0;
  _DAT_1831aa780 = func_0x000187f627e0(_DAT_1831aa9e0 + 0xb9a475687d5b5ba4 ^ 0xad);
  uVar9 = _UNK_180e297b8;
  uVar4 = _DAT_180e297b0;
  uVar2 = _DAT_1831aa780 ^ 0xed98e6371bd14740;
  _DAT_1831aa778 = _DAT_1831aaa28 ^ uVar2 ^ 0x20;
  _DAT_1831aa748 = (_DAT_1831aa748 ^ uVar2) + 0x20 ^ 0x36ee5c2c03821543;
  _DAT_1831aa8c8 = (_DAT_1831aa8c8 * -0x587465d3fce2a8d7 ^ _DAT_1831aa748) + uVar2;
  _DAT_1831aa9a8 = _DAT_1831aa8c8 ^ _DAT_1831aa748;
  _DAT_1831aa7a0 = 0x20;
  uVar2 = (_DAT_1831aa810 ^ _DAT_180e297b0) + _DAT_1831aa938 + 0xe7abbfbb7ade77ea;
  uVar10 = (_DAT_1831aa938 ^ _UNK_180e297b8) + _DAT_1831aa810 + 0x951e71a1d1082c8a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831aa810 ^ _DAT_180e297b0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831aa938 ^ _UNK_180e297b8;
  _DAT_1831aa930 =
       func_0x000187f627e0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831aa810 + 0x951e71a1d1082c8a)
                           ^ (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831aa938 + 0xe7abbfbb7ade77ea)
                          );
  _DAT_1831aa7e0 = _DAT_1831aa8b0 ^ _DAT_1831aa930 ^ 0x7cca315dd0048159;
  _DAT_1831aa880 = (_DAT_1831aa880 ^ _DAT_1831aa930) + 0x7cca315dd0048159 ^ 0xbfff5c4ca433ab6f;
  _DAT_1831aa740 = (_DAT_1831aa740 * -0x47f9fd5b7379be7 ^ _DAT_1831aa880) + _DAT_1831aa930;
  _DAT_1831aa800 = _DAT_1831aa740 ^ _DAT_1831aa880;
  _DAT_1831aa798 = 0x7cca315dd0048159;
  uVar2 = _DAT_1831aa908 ^ uVar4;
  uVar10 = _DAT_1831aa7a0 ^ uVar9;
  uVar8 = uVar2 + _DAT_1831aa7a0 + 0xe7abbfbb7ade77ea;
  uVar11 = uVar10 + _DAT_1831aa908 + 0x951e71a1d1082c8a;
  uVar2 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar10;
  _DAT_1831aa7c0 =
       func_0x000187f627e0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831aa908 + 0x951e71a1d1082c8a)
                           ^ (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831aa7a0 + 0xe7abbfbb7ade77ea)
                          );
  _DAT_1831aa750 =
       (_DAT_1831aa750 ^ _DAT_1831aa7c0 ^ 0x9f8597978114b96) + 0x72b5ce1a2ff47845 ^
       0x4c6b0bbe8ecf0fbd;
  _DAT_1831aa800 =
       (_DAT_1831aa800 * 0x60de8de9c4b9103b ^ _DAT_1831aa750) + (_DAT_1831aa7c0 ^ 0x9f8597978114b96)
  ;
  _DAT_1831aa898 = _DAT_1831aa800 ^ _DAT_1831aa750;
  _DAT_1831aa828 = 0x72b5ce1a2ff47845;
  uVar4 = _DAT_1831aaa98 ^ uVar4;
  uVar9 = _DAT_1831aa870 ^ uVar9;
  uVar2 = uVar4 + _DAT_1831aa870 + 0xe7abbfbb7ade77ea;
  uVar10 = uVar9 + _DAT_1831aaa98 + 0x951e71a1d1082c8a;
  uVar4 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar4;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar9;
  _DAT_1831aa918 =
       func_0x000187f627e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1831aaa98 + 0x951e71a1d1082c8a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831aa870 + 0xe7abbfbb7ade77ea));
  _DAT_1831aaaa8 =
       (_DAT_1831aaaa8 ^ _DAT_1831aa918 ^ 0xf7bfffbbfffc7ccf) + 0x850a31a1d008048a ^
       0xd954eb0a793b92a4;
  _DAT_1831aaad0 =
       (_DAT_1831aaad0 * 0x5a3a9d2277a5bdd5 ^ _DAT_1831aaaa8) +
       (_DAT_1831aa918 ^ 0xf7bfffbbfffc7ccf);
  _DAT_1831aa910 = _DAT_1831aaad0 ^ _DAT_1831aaaa8;
  _DAT_1831aa7f0 = 0x850a31a1d008048a;
  uVar4 = (_DAT_1831aa7a8 ^ 0x84222305) + _DAT_1831aa950 + 0x84222305;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831aa7a8 ^ 0x84222305;
  uVar9 = ((_DAT_1831aa950 + _DAT_1831aa7a8) * 0x2000 | _DAT_1831aa950 + _DAT_1831aa7a8 >> 0x33) ^
          _DAT_1831aa950;
  _DAT_1831aa970 =
       func_0x000187f627e0((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_1831aa7a8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831aa950 + 0x84222305));
  _DAT_1831aa978 = _DAT_1831aa870 ^ _DAT_1831aa970 ^ 0x20;
  _DAT_1831aaa28 = (_DAT_1831aaa28 ^ _DAT_1831aa970) + 0x20 ^ 0x8ae3179dceb9b058;
  _DAT_1831aa710 = (_DAT_1831aa710 * 0x35e5af5438041549 ^ _DAT_1831aaa28) + _DAT_1831aa970;
  _DAT_1831aa7e8 = _DAT_1831aa710 ^ _DAT_1831aaa28;
  _DAT_1831aaa08 = 0x20;
  _DAT_1831aa7b0 = func_0x000187f627e0(_DAT_1831aa908 + 0xc377ab8514c020f7 ^ 0x95);
  uVar4 = (_DAT_1831aa7b0 ^ 0x185440440103ab31) & 0x7fffffffffffffff ^ 0xe7abbfbbfefc54cf;
  _DAT_1831aa9d8 = (_DAT_1831aa9d8 ^ uVar4) + 0x185440440103ab30 ^ 0x8f626d8be02f38d2;
  _DAT_1831aa940 = (_DAT_1831aa940 * -0x40772e47092b59b9 ^ _DAT_1831aa9d8) + uVar4;
  _DAT_1831aaab0 = _DAT_1831aa940 ^ _DAT_1831aa9d8;
  _DAT_1831aa860 = _DAT_1831aa850 ^ 0x185440440103ab30;
  _DAT_1831aa798 = 0x185440440103ab30;
  uVar4 = (_DAT_1831aa7f0 ^ _DAT_180e297c0) + _DAT_1831aa7b8 + 0xe7abbfbb7ade77ea;
  uVar9 = (_DAT_1831aa7b8 ^ _UNK_180e297c8) + _DAT_1831aa7f0 + 0x185440440103ab30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831aa7f0 ^ _DAT_180e297c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831aa7b8 ^ _UNK_180e297c8;
  _DAT_1831aa740 =
       func_0x000187f627e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1831aa7f0 + 0x185440440103ab30) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831aa7b8 + 0xe7abbfbb7ade77ea));
  _DAT_1831aa8a8 = _DAT_1831aa8a8 ^ _DAT_1831aa740 ^ 0x54dc32cf0f14c097;
  _DAT_1831aa9f0 = (_DAT_1831aa9f0 * -0x182e24fa3ca76513 ^ _DAT_1831aa8a8) + _DAT_1831aa740;
  _DAT_1831aa8a8 = _DAT_1831aa9f0 ^ _DAT_1831aa8a8;
  _DAT_1831aa948 = 0;
  uVar4 = func_0x000187f627e0(_DAT_1831aaa80 ^ 0x1d007c0300215d);
  uVar9 = uVar4 ^ 0x20;
  uVar2 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_1831aaa50 =
       ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar9) *
       0x4df7178e85478de7;
  _DAT_1831aaaf0 = _DAT_1831aa9a8 ^ _DAT_1831aaa50 ^ 0x20;
  _DAT_1831aa900 = (_DAT_1831aa900 ^ _DAT_1831aaa50) + 0x20 ^ 0x28bec90096d3462f;
  _DAT_1831aaa50 = (uVar4 * 0x51e8ac3bf8f78f61 ^ _DAT_1831aa900) + _DAT_1831aaa50;
  _DAT_1831aa808 = _DAT_1831aaa50 ^ _DAT_1831aa900;
  _DAT_1831aa820 = 0x20;
  uVar4 = (~_DAT_1831aaad0 + 0x21a99f298cb41449) *
          ((_DAT_1831aa9a8 ^ 0x21a99f290896376d) + (_DAT_1831aa9a8 & 0x21a99f290896376d) * 2);
  uVar4 = (uVar4 | _DAT_1831aaa60) + (uVar4 & _DAT_1831aaa60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aa950 = func_0x000187f627e0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = _DAT_1831aa950 >> 1 | _DAT_1831aa950;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1831aa950;
  _DAT_1831aaa40 = _DAT_1831aaa40 ^ uVar4 ^ 0x3c8dfa971a4745d4;
  _DAT_1831aa770 = (_DAT_1831aa770 * -0x15775b9e107ee979 ^ _DAT_1831aaa40) + uVar4;
  _DAT_1831aa848 = _DAT_1831aa770 ^ _DAT_1831aaa40;
  _DAT_1831aa890 = 0;
  uVar4 = ((_DAT_1831aa958 ^ 0x84222305) + (ulonglong)((uint)_DAT_1831aa958 & 0x84222305) * 2) *
          -_DAT_1831aa8c8;
  uVar4 = (uVar4 | _DAT_1831aa8c0) + (uVar4 & _DAT_1831aa8c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831aaa08 = func_0x000187f627e0((uVar4 | 0x84222305) + (ulonglong)((uint)uVar4 & 0x84222305))
  ;
  uVar4 = _DAT_1831aaa08 - (_DAT_1831aaa08 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1831aaa08) << 0x1c | _DAT_1831aaa08 >> 0x24;
  _DAT_1831aa940 = _DAT_1831aaac8 ^ uVar4 ^ 0x20;
  _DAT_1831aa710 = (_DAT_1831aa710 ^ uVar4) + 0x20 ^ 0x7f3b11bee80079;
  _DAT_1831aa730 = (_DAT_1831aa730 * -0x7ba9eba548f0df57 ^ _DAT_1831aa710) + uVar4;
  _DAT_1831aa7b0 = _DAT_1831aa730 ^ _DAT_1831aa710;
  _DAT_1831aa700 = 0x20;
  switch(uVar3 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f4e671 (image 187f4e671) =====

undefined8 FUN_187f4e671(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 7f4e488 (image 187f4e488) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f4e488(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x40) = uVar2;
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



// ===== continuation @ rva 7f441c0 (image 187f441c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f441c0(void)

{
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  undefined4 unaff_R14D;
  
  *(undefined4 *)(unaff_RBP + 0x60) = unaff_EDI;
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_R14D;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f4a08c (image 187f4a08c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f4a08c(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f4e825 (image 187f4e825) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f4e825(void)

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



// ===== continuation @ rva 7f39b6c (image 187f39b6c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f39b6c(ulonglong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong in_RAX;
  longlong in_RCX;
  ulonglong uVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong in_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar12 = in_XMM0_Qb + in_RAX + unaff_RSI;
  param_1 = ((param_1 + in_RCX) * 0x2000 | param_1 + in_RCX >> 0x33) ^ param_1;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ in_XMM0_Qb;
  _DAT_1831aa988 =
       func_0x000187f627e0((uVar12 << 0x1d | uVar12 >> 0x23) - (in_RAX + unaff_RSI) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - in_RCX);
  uVar8 = -unaff_RSI;
  _DAT_1831aaaf8 = (_DAT_1831aaaf8 ^ _DAT_1831aa988) - unaff_RSI ^ 0x8426305c7e6336f1;
  _DAT_1831aa8d8 = (_DAT_1831aa8d8 * 0x424320e622e2db21 ^ _DAT_1831aaaf8) + _DAT_1831aa988;
  _DAT_1831aa950 = _DAT_1831aa8d8 ^ _DAT_1831aaaf8;
  _DAT_1831aa8c0 = uVar8 & 0xffffffff;
  *(undefined8 *)(unaff_RBP + 0x20) = 0x30;
  *(undefined8 *)(unaff_RBP + 0x28) = 0;
  *(undefined8 *)(unaff_RBP + 0x10) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x18) = 0;
  uVar6 = _DAT_180e29320;
  uVar5 = _DAT_180e29300;
  uVar4 = _DAT_180e292e0;
  uVar3 = _DAT_180e292c0;
  uVar2 = _DAT_180e292a0;
  *(undefined8 *)(unaff_RBP + 0x60) = 0x15;
  *(uint *)(unaff_RBP + 0xa0) = (uint)uVar8;
  *(char *)(unaff_RBP + 0x98) = (char)uVar8 + (char)((uVar8 & 0xffffffff) / 10) * -10;
  uVar12 = func_0x000187f627e0(_DAT_1831aa948 + 0x23008369ffe1ff ^ 0xa0);
  _DAT_1831aa7c0 = uVar12 & 0x3ffffffffff ^ 0xf6;
  _DAT_1831aaa80 = (_DAT_1831aaa80 ^ _DAT_1831aa7c0) + 0xff ^ 0x9a2cad6dede74bca;
  _DAT_1831aa7c0 = (uVar12 * 0x86a74387e1194f5 ^ _DAT_1831aaa80) + _DAT_1831aa7c0;
  _DAT_1831aa8f0 = _DAT_1831aa7c0 ^ _DAT_1831aaa80;
  _DAT_1831aa9c8 = 0xff;
  uVar12 = (_DAT_1831aa998 ^ _DAT_180e29220) + _DAT_1831aa818 + 0x84222337;
  uVar15 = (_DAT_1831aa818 ^ _UNK_180e29228) + _DAT_1831aa998 + 0x19;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831aa998 ^ _DAT_180e29220;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1831aa818 ^ _UNK_180e29228;
  _DAT_1831aa838 =
       func_0x000187f627e0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1831aa998 + 0x19) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831aa818 + 0x84222337));
  _DAT_1831aa828 = (_DAT_1831aa828 ^ _DAT_1831aa838 ^ 0x1c9) + 0xb ^ 0x6495d3e8b53c32b7;
  _DAT_1831aa7d0 =
       (_DAT_1831aa7d0 * -0x5d8035b0abd7060b ^ _DAT_1831aa828) + (_DAT_1831aa838 ^ 0x1c9);
  _DAT_1831aa848 = _DAT_1831aa7d0 ^ _DAT_1831aa828;
  _DAT_1831aa870 = 0xb;
  uVar12 = (~_DAT_1831aa9c0 + 0xb9) *
           ((_DAT_1831aa980 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831aa980 & 0x84222325) * 2);
  uVar12 = (uVar12 | _DAT_1831aaa00) + (uVar12 & _DAT_1831aaa00);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831aa848 =
       func_0x000187f627e0((uVar12 | 0x8422239d) + (ulonglong)((uint)uVar12 & 0x8422239d));
  _DAT_1831aa890 = (_DAT_1831aa890 ^ _DAT_1831aa848 ^ 0xb8) - 0xb8 ^ 0x35bb5d728481480a;
  _DAT_1831aa738 = (_DAT_1831aa738 * -0x229c391c23244e99 ^ _DAT_1831aa890) + (_DAT_1831aa848 ^ 0xb8)
  ;
  _DAT_1831aa8f0 = _DAT_1831aa738 ^ _DAT_1831aa890;
  _DAT_1831aa9c8 = _DAT_1831aa8c8 ^ 0xffffffffffffff48;
  _DAT_1831aaaf0 = 0x48;
  uVar12 = (_DAT_1831aa950 ^ _DAT_180de1a30) + _DAT_1831aa8a0 + 0x84222315;
  uVar15 = (_DAT_1831aa8a0 ^ _UNK_180de1a38) + _DAT_1831aa950 + 0xb8;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831aa950 ^ _DAT_180de1a30;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1831aa8a0 ^ _UNK_180de1a38;
  uVar12 = func_0x000187f627e0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1831aa950 + 0xb8) ^
                               (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831aa8a0 + 0x84222315));
  uVar12 = uVar12 ^ 0xb8;
  _DAT_1831aa870 = _DAT_1831aa8f0 ^ uVar12 ^ 0xe8;
  _DAT_1831aa7e0 = (_DAT_1831aa7e0 ^ uVar12) + 0xe8 ^ 0x4de1a77fcccdd555;
  _DAT_1831aa830 = (_DAT_1831aa830 * 0x4990b392ea510079 ^ _DAT_1831aa7e0) + uVar12;
  _DAT_1831aaad0 = _DAT_1831aa830 ^ _DAT_1831aa7e0;
  _DAT_1831aaab0 = 0xe8;
  _DAT_1831aa770 = func_0x000187f627e0(_DAT_1831aa720 ^ 0xffe1007b85002168);
  uVar12 = _DAT_1831aa770 ^ 0x4108;
  _DAT_1831aa7a0 = _DAT_1831aaa18 ^ uVar12 ^ 0x130;
  _DAT_1831aaa80 = (_DAT_1831aaa80 ^ uVar12) + 0x130 ^ 0xb37a942b1ff44c77;
  _DAT_1831aa858 = (_DAT_1831aa858 * -0x7e3220fb64fefa87 ^ _DAT_1831aaa80) + uVar12;
  _DAT_1831aaaa8 = _DAT_1831aa858 ^ _DAT_1831aaa80;
  _DAT_1831aa7d0 = 0x30;
  _DAT_1831aa7e8 = func_0x000187f627e0(_DAT_1831aaad0 ^ 0x1cff846affe1a0);
  _DAT_1831aa748 =
       (_DAT_1831aa748 ^ _DAT_1831aa7e8 * -0x6d2dd4904ee4a93d) - 0x50 ^ 0x8a964f9e4df68b9f;
  _DAT_1831aa750 =
       (_DAT_1831aa750 * -0x7b5cf29aab4401f5 ^ _DAT_1831aa748) +
       _DAT_1831aa7e8 * -0x6d2dd4904ee4a93d;
  _DAT_1831aaaa0 = _DAT_1831aa750 ^ _DAT_1831aa748;
  _DAT_1831aa8b0 = 0xb0;
  uVar12 = (~_DAT_1831aaa50 + 0x51) *
           ((_DAT_1831aa968 ^ 0x84222315) + (ulonglong)((uint)_DAT_1831aa968 & 0x84222315) * 2);
  uVar12 = (uVar12 | _DAT_1831aa980) + (uVar12 & _DAT_1831aa980);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831aa918 =
       func_0x000187f627e0((uVar12 | 0x84222345) + (ulonglong)((uint)uVar12 & 0x84222345));
  uVar12 = _DAT_1831aa918 ^ 0xf00;
  _DAT_1831aa920 = _DAT_1831aa840 ^ uVar12 ^ 0x80;
  _DAT_1831aa7c0 = (_DAT_1831aa7c0 ^ uVar12) + 0x80 ^ 0xa4b3fc5076d311e6;
  _DAT_1831aa968 = (_DAT_1831aa968 * -0x4674e8a5421259e9 ^ _DAT_1831aa7c0) + uVar12;
  _DAT_1831aaa00 = _DAT_1831aa968 ^ _DAT_1831aa7c0;
  _DAT_1831aa758 = 0x80;
  uVar12 = (~_DAT_1831aaa68 + 0xb1) *
           ((_DAT_1831aa7a8 ^ 0x842223a5) + (ulonglong)((uint)_DAT_1831aa7a8 & 0x842223a5) * 2);
  uVar12 = (uVar12 | _DAT_1831aa838) + (uVar12 & _DAT_1831aa838);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831aaa08 =
       func_0x000187f627e0((uVar12 | 0x84222315) + (ulonglong)((uint)uVar12 & 0x84222315));
  uVar12 = _DAT_1831aaa08 << 0x26 | _DAT_1831aaa08 >> 0x1a;
  uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar12 = ((((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar12
           ) << 0x2c | uVar12 >> 0x14;
  _DAT_1831aa948 = _DAT_1831aa758 ^ uVar12 ^ 0x130;
  _DAT_1831aa880 = (_DAT_1831aa880 ^ uVar12) + 0x130 ^ 0x3b9d8e94425193aa;
  _DAT_1831aa840 = (_DAT_1831aa840 * 0x6bc04e6f4f3318eb ^ _DAT_1831aa880) + uVar12;
  _DAT_1831aa780 = _DAT_1831aa840 ^ _DAT_1831aa880;
  _DAT_1831aa9f0 = 0x30;
  uVar12 = (_DAT_1831aa9f8 ^ _DAT_180269ef0) + _DAT_1831aa918 + 0x84222325;
  uVar15 = (_DAT_1831aa918 ^ _UNK_180269ef8) + _DAT_1831aa9f8 + 0x44;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831aa9f8 ^ _DAT_180269ef0;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1831aa918 ^ _UNK_180269ef8;
  _DAT_1831aa900 =
       func_0x000187f627e0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1831aa9f8 + 0x44) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831aa918 + 0x84222325));
  _DAT_1831aa8a8 =
       (_DAT_1831aa8a8 ^ _DAT_1831aa900 & 0x3fffffffffffffff) - 0x44 ^ 0x5d1500f8c345ea76;
  _DAT_1831aaae0 =
       (_DAT_1831aaae0 * -0x1b6e0b32645111c3 ^ _DAT_1831aa8a8) +
       (_DAT_1831aa900 & 0x3fffffffffffffff);
  _DAT_1831aaa00 = _DAT_1831aaae0 ^ _DAT_1831aa8a8;
  _DAT_1831aaa20 = 0xbc;
  _DAT_1831aa918 = func_0x000187f627e0(_DAT_1831aa7e0 + 0xffe2ff7bb10021ff ^ 0x7b);
  uVar12 = _DAT_1831aa918 ^ 0x30;
  uVar15 = uVar12 >> 1 | uVar12;
  uVar15 = uVar15 >> 2 | uVar15;
  uVar15 = uVar15 >> 4 | uVar15;
  uVar15 = uVar15 >> 8 | uVar15;
  uVar15 = uVar15 >> 0x10 | uVar15;
  uVar15 = uVar15 >> 0x20 | uVar15;
  uVar15 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x80 ^ uVar12;
  _DAT_1831aa940 = _DAT_1831aaa18 ^ uVar12 ^ 0x74;
  _DAT_1831aa908 = (_DAT_1831aa908 ^ uVar12) + 0x74 ^ 0x1e2848464ab6c38;
  _DAT_1831aa830 = (_DAT_1831aa830 * 0xcf4534b1bbc7251 ^ _DAT_1831aa908) + uVar12;
  _DAT_1831aaa30 = _DAT_1831aa830 ^ _DAT_1831aa908;
  _DAT_1831aa778 = 0x74;
  uVar12 = (_DAT_1831aaa10 ^ _DAT_180269f00) + _DAT_1831aa998 + 0x84222351;
  uVar15 = (_DAT_1831aa998 ^ _UNK_180269f08) + _DAT_1831aaa10 + 0xbc;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831aaa10 ^ _DAT_180269f00;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1831aa998 ^ _UNK_180269f08;
  _DAT_1831aa728 =
       func_0x000187f627e0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1831aaa10 + 0xbc) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831aa998 + 0x84222351));
  uVar12 = (_DAT_1831aa728 ^ 0xfc) & 0x7fffffffffffffff;
  _DAT_1831aaab8 = _DAT_1831aaa68 ^ uVar12 ^ 0x130;
  _DAT_1831aa9c8 = (_DAT_1831aa9c8 ^ uVar12) + 0x130 ^ 0xbdf35627bd3ab188;
  _DAT_1831aa810 = (_DAT_1831aa810 * -0x791bad74dbd68e83 ^ _DAT_1831aa9c8) + uVar12;
  _DAT_1831aaaf0 = _DAT_1831aa810 ^ _DAT_1831aa9c8;
  _DAT_1831aa9b8 = 0x30;
  uVar12 = (~_DAT_1831aa9d0 + 0xc) *
           ((_DAT_1831aa710 ^ 0x842223da) + (ulonglong)((uint)_DAT_1831aa710 & 0x842223da) * 2);
  uVar12 = (uVar12 | _DAT_1831aa770) + (uVar12 & _DAT_1831aa770);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831aa968 =
       func_0x000187f627e0((uVar12 | 0x842223d1) + (ulonglong)((uint)uVar12 & 0x842223d1));
  uVar12 = _DAT_1831aa968 >> 1 | _DAT_1831aa968;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           _DAT_1831aa968;
  _DAT_1831aa7a8 = _DAT_1831aaa28 ^ uVar12 ^ 0x10a;
  _DAT_1831aaa18 = (_DAT_1831aaa18 ^ uVar12) + 0x10a ^ 0x1f138a437b717652;
  _DAT_1831aa948 = (_DAT_1831aa948 * -0x1dc75a4b07fa7297 ^ _DAT_1831aaa18) + uVar12;
  _DAT_1831aa8d8 = _DAT_1831aa948 ^ _DAT_1831aaa18;
  _DAT_1831aa8d0 = 10;
  uVar12 = (_DAT_1831aa8e0 ^ _DAT_180e29230) + _DAT_1831aa910 + 0x842223da;
  uVar15 = (_DAT_1831aa910 ^ _UNK_180e29238) + _DAT_1831aa8e0 + 0xb;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831aa8e0 ^ _DAT_180e29230;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1831aa910 ^ _UNK_180e29238;
  _DAT_1831aa990 =
       func_0x000187f627e0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1831aa8e0 + 0xb) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831aa910 + 0x842223da));
  uVar12 = (_DAT_1831aa990 ^ *(ulonglong *)(unaff_RBP + 0x10)) & 0x7fffffffffffffff;
  _DAT_1831aaac0 = (_DAT_1831aaac0 ^ uVar12) + 0xf4 ^ 0xd40fb1984c015084;
  _DAT_1831aaa00 = (_DAT_1831aaa00 * -0x4f540658fb6cf4d9 ^ _DAT_1831aaac0) + uVar12;
  _DAT_1831aaab8 = _DAT_1831aaa00 ^ _DAT_1831aaac0;
  _DAT_1831aa760 = 0xf4;
  _DAT_1831aaa70 = func_0x000187f627e0(_DAT_1831aa9c8 ^ 0xffdf0084d0ffe15a);
  uVar12 = (_DAT_1831aaa70 ^ 0xff) & 0x7fffffffffffffff;
  _DAT_1831aa8e0 = (_DAT_1831aa8e0 ^ uVar12) + 0xb ^ 0x55c05bf491d3063;
  _DAT_1831aaa60 = (_DAT_1831aaa60 * -0x4aa02af4294cac39 ^ _DAT_1831aa8e0) + uVar12;
  _DAT_1831aa848 = _DAT_1831aaa60 ^ _DAT_1831aa8e0;
  _DAT_1831aa8a0 = 0xb;
  uVar12 = (_DAT_1831aaaa0 ^ _DAT_180e29240) + _DAT_1831aaa98 + 0x8422232f;
  uVar15 = (_DAT_1831aaa98 ^ _UNK_180e29248) + _DAT_1831aaaa0 + 10;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831aaaa0 ^ _DAT_180e29240;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1831aaa98 ^ _UNK_180e29248;
  _DAT_1831aaaa0 =
       func_0x000187f627e0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1831aaaa0 + 10) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831aaa98 + 0x8422232f));
  _DAT_1831aa888 = (ulonglong)(~(uint)_DAT_1831aaaa0 & 10);
  _DAT_1831aa9c0 = _DAT_1831aa9c0 ^ _DAT_1831aa888 ^ 0xc60a1b1201640098;
  _DAT_1831aa7a0 = (_DAT_1831aa7a0 * -0x5b97321be7b61005 ^ _DAT_1831aa9c0) + _DAT_1831aa888;
  _DAT_1831aa9b8 = _DAT_1831aa7a0 ^ _DAT_1831aa9c0;
  _DAT_1831aa748 = 0;
  uVar12 = (_DAT_1831aa880 ^ 0x84222315) + _DAT_1831aaaa0 + 0x84222315;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831aa880 ^ 0x84222315;
  uVar15 = ((_DAT_1831aaaa0 + _DAT_1831aa880) * 0x2000 | _DAT_1831aaaa0 + _DAT_1831aa880 >> 0x33) ^
           _DAT_1831aaaa0;
  _DAT_1831aaa70 =
       func_0x000187f627e0((uVar15 << 0x1d | uVar15 >> 0x23) - _DAT_1831aa880 ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831aaaa0 + 0x84222315));
  uVar12 = _DAT_1831aaa70 & 0x1ffffffff;
  _DAT_1831aa910 = _DAT_1831aa8f0 ^ uVar12 ^ 0x30;
  _DAT_1831aa7f0 = (_DAT_1831aa7f0 ^ uVar12) + 0x30 ^ 0x19f20b0a564a6593;
  _DAT_1831aaad8 = (_DAT_1831aaad8 * -0x2084f8fa653e9c6f ^ _DAT_1831aa7f0) + uVar12;
  _DAT_1831aaa30 = _DAT_1831aaad8 ^ _DAT_1831aa7f0;
  _DAT_1831aa940 = 0x30;
  _DAT_1831aa700 = func_0x000187f627e0(_DAT_1831aaaa8 + 0xffe2ff7c15001dff ^ 0xfd);
  uVar12 = ((_DAT_1831aa700 ^ 0x30) & 0xfffffffffffffff8) * 0x400000;
  _DAT_1831aa868 = _DAT_1831aa838 ^ uVar12 ^ 0x30;
  _DAT_1831aaa20 = (_DAT_1831aaa20 ^ uVar12) + 0x30 ^ 0xea43f9689b89a4cd;
  _DAT_1831aa9f8 = (_DAT_1831aa9f8 * 0xbca89cefe5573af ^ _DAT_1831aaa20) + uVar12;
  _DAT_1831aa918 = _DAT_1831aa9f8 ^ _DAT_1831aaa20;
  _DAT_1831aa950 = 0x30;
  uVar12 = (_DAT_1831aa978 ^ _DAT_1807fce90) + _DAT_1831aa9a8 + 0x842223d3;
  uVar15 = (_DAT_1831aa9a8 ^ _UNK_1807fce98) + _DAT_1831aa978 + 0xf6;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831aa978 ^ _DAT_1807fce90;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1831aa9a8 ^ _UNK_1807fce98;
  _DAT_1831aaa80 =
       func_0x000187f627e0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1831aa978 + 0xf6) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831aa9a8 + 0x842223d3));
  uVar12 = _DAT_1831aaa80 & 0x7fffffffffffffff ^ 0xf6;
  _DAT_1831aaaa0 = _DAT_1831aaaa0 ^ uVar12 ^ 0x8046a66078dcd217;
  _DAT_1831aaa58 = (_DAT_1831aaa58 * -0x7cc7c1a055bd75f1 ^ _DAT_1831aaaa0) + uVar12;
  _DAT_1831aa9e0 = _DAT_1831aaa58 ^ _DAT_1831aaaa0;
  _DAT_1831aaab0 = 0;
  _DAT_1831aa840 = func_0x000187f627e0(_DAT_1831aa7e0 ^ 0x21007c0affe1a5);
  uVar12 = ((_DAT_1831aa840 ^ *(ulonglong *)(unaff_RBP + 0x20)) & 0x7fffffffffffffff) *
           -0x137363b210de2897;
  _DAT_1831aa800 = _DAT_1831aaae0 ^ uVar12 ^ 0x30;
  _DAT_1831aaa00 = (_DAT_1831aaa00 ^ uVar12) + 0x30 ^ 0x442cc087b6c63b;
  _DAT_1831aa7d8 = (_DAT_1831aa7d8 * 0x7a3d7f6c50c34e1f ^ _DAT_1831aaa00) + uVar12;
  _DAT_1831aa9c0 = _DAT_1831aa7d8 ^ _DAT_1831aaa00;
  _DAT_1831aa788 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x98);
  auVar10._8_8_ = _UNK_180145388;
  auVar10._0_8_ = (ulonglong)bVar1 ^ 0x84222325;
  auVar11 = pshufb(auVar10 ^ _DAT_180e29250,_DAT_1800170c0);
  uVar15 = auVar11._8_8_ + auVar11._0_8_;
  uVar12 = uVar15 + _DAT_1831aaae8;
  if (auVar11._4_4_ < 0) {
    uVar12 = _DAT_1831aa8b8 ^ uVar15;
  }
  _DAT_1831aa758 = func_0x000187f627e0(SUB161(auVar10 ^ _DAT_180e29250,5) ^ uVar12);
  uVar15 = (ulonglong)bVar1 | 0x30;
  _DAT_1831aaa50 =
       (_DAT_1831aaa50 ^ _DAT_1831aa758 * -0x4b75700219ae4e7) + uVar15 ^ 0x965b43277804067e;
  _DAT_1831aa7b8 =
       (_DAT_1831aa7b8 * 0x49940c8f8643ca39 ^ _DAT_1831aaa50) + _DAT_1831aa758 * -0x4b75700219ae4e7;
  _DAT_1831aa7d8 = _DAT_1831aa7b8 ^ _DAT_1831aaa50;
  uVar12 = *(ulonglong *)(unaff_RBP + 0x60);
  uVar7 = uVar12 ^ 0x84222325 ^ _DAT_1831aa8d0;
  lVar9 = (uVar12 ^ 0x84222325) + _DAT_1831aa710;
  uVar14 = uVar7 + lVar9;
  uVar16 = ~_DAT_1831aa710 + (_DAT_1831aa8d0 - 1);
  uVar7 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar7;
  uVar14 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ ~_DAT_1831aa710;
  _DAT_1831aaa90 = uVar15;
  _DAT_1831aaad8 =
       func_0x000187f627e0((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1831aa8d0 - 1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar9);
  uVar7 = ~_DAT_1831aaad8 & uVar12;
  uVar17 = (uint)(uVar12 >> 0x20);
  auVar11._8_4_ = (int)uVar12;
  auVar11._0_8_ = uVar12;
  auVar11._12_4_ = uVar17;
  uVar14 = SUB168(auVar11 ^ _DAT_18001a710,0);
  uVar13 = SUB164(auVar11 ^ _DAT_18001a710,0);
  lVar9 = ((uVar12 & 0xffffffff) * (ulonglong)_DAT_180e292d0 + (ulonglong)uVar17 * (ulonglong)uVar3
          << 0x20) + (uVar12 & 0xffffffff) * (ulonglong)uVar3;
  _DAT_1831aaaa8 =
       ((((uVar12 & 0xffffffff) * (ulonglong)_DAT_180e29290 +
          (uVar12 >> 0x20) * (ulonglong)_DAT_180e29280 << 0x20) +
         (uVar12 & 0xffffffff) * (ulonglong)_DAT_180e29280 +
         ((uVar12 & 0xffffffff) * (ulonglong)_DAT_180e29270 +
          (uVar12 >> 0x20) * (ulonglong)_DAT_180e29260 << 0x20) +
         (uVar12 & 0xffffffff) * (ulonglong)_DAT_180e29260 + lVar9 +
        (ulonglong)uVar13 * (ulonglong)uVar2 +
        ((ulonglong)uVar13 * (ulonglong)_DAT_180e292b0 + (uVar14 >> 0x20) * (ulonglong)uVar2 << 0x20
        )) - (((uVar12 & 0xffffffff) * (ulonglong)_DAT_180e29310 +
               (uVar12 >> 0x20) * (ulonglong)uVar5 << 0x20) +
              (uVar12 & 0xffffffff) * (ulonglong)uVar5 +
              ((uVar12 & 0xffffffff) * (ulonglong)_DAT_180e292f0 +
               (uVar12 >> 0x20) * (ulonglong)uVar4 << 0x20) +
              (uVar12 & 0xffffffff) * (ulonglong)uVar4 + lVar9 +
             (ulonglong)uVar13 * (ulonglong)uVar6 +
             ((ulonglong)uVar13 * (ulonglong)_DAT_180e29330 + (uVar14 >> 0x20) * (ulonglong)uVar6 <<
             0x20))) + 0xbd5ac73d4557b99e;
  _DAT_1831aaac0 = _DAT_1831aa8c8 ^ uVar7 ^ _DAT_1831aaaa8;
  _DAT_1831aaaf8 = (_DAT_1831aaaf8 ^ uVar7) + _DAT_1831aaaa8 ^ 0x63afd1074e94947;
  _DAT_1831aaae0 = (_DAT_1831aaae0 * -0x1b6a980c18107395 ^ _DAT_1831aaaf8) + uVar7;
  _DAT_1831aa820 = _DAT_1831aaae0 ^ _DAT_1831aaaf8;
  *(char *)(unaff_RBP + -0x50 + _DAT_1831aaaa8) = (char)uVar15;
  switch((uint)uVar8 < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f64d7e (image 187f64d7e) =====

void FUN_187f64d7e(void)

{
  return;
}



// ===== continuation @ rva 7f64be1 (image 187f64be1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f64be1(void)

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



// ===== continuation @ rva 7f69170 (image 187f69170) =====

undefined8 thunk_FUN_187f682fc(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  return 0;
}



// ===== continuation @ rva 7f65f25 (image 187f65f25) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f65f25(void)

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



// ===== continuation @ rva 7f65d7e (image 187f65d7e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f65d7e(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x934,0x28);
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



// ===== continuation @ rva 7f69486 (image 187f69486) =====

undefined8 thunk_FUN_187f682fc(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  return 0;
}



// ===== continuation @ rva 7f68b1a (image 187f68b1a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187f6520e(void)

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



// ===== continuation @ rva 7f64c1c (image 187f64c1c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f64c1c(void)

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



// ===== continuation @ rva 7f68709 (image 187f68709) =====

undefined8 thunk_FUN_187f682fc(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  return 0;
}



// ===== continuation @ rva 7f65cd0 (image 187f65cd0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187f6520e(void)

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



// ===== continuation @ rva 7f69923 (image 187f69923) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f69923(void)

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



// ===== continuation @ rva 7f698cf (image 187f698cf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f698cf(void)

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



// ===== continuation @ rva 7f6a696 (image 187f6a696) =====

void FUN_187f6a696(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7f69f34 (image 187f69f34) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f69f34(void)

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



// ===== continuation @ rva 7f6a448 (image 187f6a448) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6a448(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180e2f528)();
  return;
}



// ===== continuation @ rva 7f6a3c2 (image 187f6a3c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f6a3c2(void)

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



// ===== continuation @ rva 7f69c88 (image 187f69c88) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f69c88(void)

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



// ===== continuation @ rva 7f6a3e2 (image 187f6a3e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6a3e2(void)

{
  FUN_190dd72e0();
  (*_DAT_180e2f718)();
  return;
}



// ===== continuation @ rva 7f69b91 (image 187f69b91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f69b91(void)

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



// ===== continuation @ rva 7f69b3d (image 187f69b3d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f69b3d(void)

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



// ===== continuation @ rva 7f69e30 (image 187f69e30) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f69e30(void)

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



// ===== continuation @ rva 7f69ddc (image 187f69ddc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f69ddc(void)

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



// ===== continuation @ rva 7f6a688 (image 187f6a688) =====

void FUN_187f6a688(void)

{
  return;
}



// ===== continuation @ rva 7f69c32 (image 187f69c32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f69c32(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180e2f8b8)();
  return;
}



// ===== continuation @ rva 7f6d0dd (image 187f6d0dd) =====

void FUN_187f6d0dd(void)

{
  return;
}



// ===== continuation @ rva 7f6a800 (image 187f6a800) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6a800(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180e30788)();
  return;
}



// ===== continuation @ rva 7f6c0b2 (image 187f6c0b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6c0b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_180e2fde8)();
  return;
}



// ===== continuation @ rva 7f6bd5c (image 187f6bd5c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6bd5c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180e2ff78)();
  return;
}



// ===== continuation @ rva 7f6cf7c (image 187f6cf7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6cf7c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e2fb58)();
  return;
}



// ===== continuation @ rva 7f6cb19 (image 187f6cb19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f6cb19(void)

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



// ===== continuation @ rva 7f6b397 (image 187f6b397) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6b397(void)

{
  (*_DAT_180e307f8)();
  return;
}



// ===== continuation @ rva 7f6cf16 (image 187f6cf16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6cf16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e2fee8)();
  return;
}



// ===== continuation @ rva 7f6b047 (image 187f6b047) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f6b047(void)

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



// ===== continuation @ rva 7f6b018 (image 187f6b018) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6b018(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e2f9e8)();
  return;
}



// ===== continuation @ rva 7f6aa29 (image 187f6aa29) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6aa29(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180e30288)();
  return;
}



// ===== continuation @ rva 7f6d0fc (image 187f6d0fc) =====

void FUN_187f6d0fc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7f6cc86 (image 187f6cc86) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f6cc86(void)

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



// ===== continuation @ rva 7f6b49a (image 187f6b49a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f6b49a(void)

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



// ===== continuation @ rva 7f6f971 (image 187f6f971) =====

void FUN_187f6f971(void)

{
  return;
}



// ===== continuation @ rva 7f6f7da (image 187f6f7da) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f6f7da(void)

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



// ===== continuation @ rva 7f726e7 (image 187f726e7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f726e7(void)

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



// ===== continuation @ rva 7f723ef (image 187f723ef) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f723ef(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x1abd7,0x425);
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



// ===== continuation @ rva 7f73ce6 (image 187f73ce6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f73ce6(void)

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



// ===== continuation @ rva 7f70f4c (image 187f70f4c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f70f4c(void)

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



// ===== continuation @ rva 7f73da3 (image 187f73da3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f73da3(void)

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



// ===== continuation @ rva 7f73c4e (image 187f73c4e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f73c4e(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))
                    (in_stack_00000030,in_stack_00000058,in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f78336 (image 187f78336) =====

undefined8 thunk_FUN_187f709a8(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva 7f709c0 (image 187f709c0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f709c0(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000080;
  
  uStack0000000000000080 = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x773,0x24);
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



// ===== continuation @ rva 7f70958 (image 187f70958) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f70958(void)

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



// ===== continuation @ rva 7f72055 (image 187f72055) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f72055(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0x2e8))(in_stack_00000030,param_2,in_stack_00000038);
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



// ===== continuation @ rva 7f71dba (image 187f71dba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f71dba(void)

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



// ===== continuation @ rva 7f789c2 (image 187f789c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f789c2(void)

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



// ===== continuation @ rva 7f7896e (image 187f7896e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f7896e(void)

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



// ===== continuation @ rva 7f79844 (image 187f79844) =====

void FUN_187f79844(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7f792d0 (image 187f792d0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f792d0(void)

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



// ===== continuation @ rva 7f79610 (image 187f79610) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f79610(void)

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



// ===== continuation @ rva 7f79835 (image 187f79835) =====

void FUN_187f79835(void)

{
  return;
}



// ===== continuation @ rva 7f7912c (image 187f7912c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f7912c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de6ea0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7f793b7 (image 187f793b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f793b7(void)

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



// ===== continuation @ rva 7f79801 (image 187f79801) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f79801(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180e32bc8)();
  return;
}



// ===== continuation @ rva 7f78c8d (image 187f78c8d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f78c8d(void)

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



// ===== continuation @ rva 7f78e03 (image 187f78e03) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f78e03(void)

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



// ===== continuation @ rva 7f78dab (image 187f78dab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f78dab(void)

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



// ===== continuation @ rva 7f78bc8 (image 187f78bc8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f78bc8(void)

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



// ===== continuation @ rva 7f7b956 (image 187f7b956) =====

void FUN_187f7b956(void)

{
  return;
}



// ===== continuation @ rva 7f799bc (image 187f799bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f799bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180e33378)();
  return;
}



// ===== continuation @ rva 7f7b2da (image 187f7b2da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f7b2da(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e33228)();
  return;
}



// ===== continuation @ rva 7f7a161 (image 187f7a161) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f7a161(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180e33d28)();
  return;
}



// ===== continuation @ rva 7f7c4fa (image 187f7c4fa) =====

void FUN_187f7c4fa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7f7af28 (image 187f7af28) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f7af28(void)

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



// ===== continuation @ rva 7f79f03 (image 187f79f03) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f79f03(void)

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



// ===== continuation @ rva 7f7c494 (image 187f7c494) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f7c494(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e33ba8)();
  return;
}



// ===== continuation @ rva 7f7b1d7 (image 187f7b1d7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f7b1d7(void)

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



// ===== continuation @ rva 7f7a696 (image 187f7a696) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f7a696(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e336c8)();
  return;
}



// ===== continuation @ rva 7f79f7e (image 187f79f7e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f79f7e(void)

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



// ===== continuation @ rva 7f7a4a4 (image 187f7a4a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f7a4a4(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180e33428)();
  return;
}



// ===== continuation @ rva 7f79d85 (image 187f79d85) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187f79d85(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_180e339d8)();
  return;
}



// ===== continuation @ rva 7f79c67 (image 187f79c67) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187f79c67(void)

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



