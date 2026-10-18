// ===== continuation @ rva 10b09a2c (image 190b09a2c) =====

void FUN_190b09a2c(void)

{
  return;
}



// ===== continuation @ rva 10aef3bb (image 190aef3bb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190aef411 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190aef3bb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10af22f5 (image 190af22f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190af22f5(void)

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



// ===== continuation @ rva 10b066f2 (image 190b066f2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b066f2(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar4 = (ulonglong)(uint)(param_1 << 0x18);
  uVar2 = in_stack_00000050 ^ 0x84222325 ^ _DAT_183491078;
  lVar3 = (in_stack_00000050 ^ 0x84222325) + _DAT_183491018;
  uVar5 = uVar2 + lVar3;
  uVar6 = (uVar4 ^ _DAT_183491018) + _DAT_183491078 + uVar4;
  uVar2 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar2;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4 ^ _DAT_183491018;
  _DAT_183490fa8 =
       func_0x000190b09c10((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183491078 + uVar4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  uVar2 = _DAT_183490fa8 - (_DAT_183490fa8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183490fa8) * -0x5697a1d3c72a0353;
  _DAT_1834910a8 = in_stack_00000050 | uVar4;
  _DAT_183491058 = (_DAT_183491058 ^ uVar2) + _DAT_1834910a8 ^ 0x49a8146cabc05020;
  _DAT_183490f38 = (_DAT_183490f38 * 0x23493d350b5c876f ^ _DAT_183491058) + uVar2;
  _DAT_183491090 = _DAT_183490f38 ^ _DAT_183491058;
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



// ===== continuation @ rva 10af2341 (image 190af2341) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190af2341(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_EBP;
  ulonglong uVar4;
  ulonglong uVar5;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_000000b0;
  longlong in_stack_000000c0;
  
  uStack0000000000000040 = in_stack_000000b0;
  uVar2 = (ulonglong)unaff_EBP;
  uVar3 = uVar2 ^ 0x84222325 ^ _DAT_183490fe8;
  lVar1 = (uVar2 ^ 0x84222325) + _DAT_183490fd8;
  uVar4 = uVar3 + lVar1;
  uVar5 = (_DAT_183490fd8 ^ 1) + _DAT_183490fe8 + 1;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183490fd8 ^ 1;
  uVar3 = func_0x000190b09c10((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183490fe8 + 1) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - lVar1);
  uVar3 = (uVar3 ^ uVar2) & 0xffffffffffffe000;
  uVar2 = uVar2 + (-(((uVar2 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)unaff_XMM14_Da +
                    (((uVar2 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)unaff_XMM10_Da +
                     (_DAT_18001a710 >> 0x20) * (ulonglong)unaff_XMM14_Da << 0x20)) -
                  (((ulonglong)(unaff_EBP ^ _DAT_18001a990) * (ulonglong)unaff_XMM9_Da << 0x20) +
                   (ulonglong)(unaff_EBP ^ _DAT_18001a990) * (ulonglong)unaff_XMM8_Da +
                   ((ulonglong)(unaff_EBP | _DAT_18001a990) * (ulonglong)unaff_XMM7_Da << 0x20) +
                   (ulonglong)(unaff_EBP | _DAT_18001a990) * (ulonglong)unaff_XMM15_Da +
                  ((ulonglong)(unaff_EBP & _DAT_18001a990) * (ulonglong)unaff_XMM13_Da << 0x20 |
                  (ulonglong)(unaff_EBP & _DAT_18001a990) * (ulonglong)unaff_XMM12_Da) +
                  ((ulonglong)unaff_EBP * (ulonglong)unaff_XMM11_Da << 0x20) +
                  (ulonglong)unaff_EBP * (ulonglong)_DAT_182e14330)) + 0x3a1e55c168c5f776;
  _DAT_183490f68 = _DAT_183490f30 ^ uVar3 ^ uVar2;
  _DAT_1834910e8 = (_DAT_1834910e8 ^ uVar3) + uVar2 ^ 0x194ffcf5d9aa04bd;
  _DAT_183490fc0 = (_DAT_183490fc0 * 0x7a97fef34255a1a9 ^ _DAT_1834910e8) + uVar3;
  _DAT_183490fc8 = _DAT_183490fc0 ^ _DAT_1834910e8;
  _DAT_183490ff8 = uVar2 & 0xffffffff;
  switch(in_stack_000000c0 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10aef4d5 (image 190aef4d5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190aef4ec */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190aef4d5(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10af1ffb (image 190af1ffb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190af2012 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190af1ffb(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10b095ee (image 190b095ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b095ee(void)

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



// ===== continuation @ rva 10af2b80 (image 190af2b80) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190af2bf1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190af2b80(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10a95bff (image 190a95bff) =====

void FUN_190a95bff(void)

{
  return;
}



// ===== continuation @ rva 10a83e55 (image 190a83e55) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190a83e55(void)

{
  FUN_190ddce00();
  (*_DAT_182dfdcc8)();
  return;
}



// ===== continuation @ rva 10a95bee (image 190a95bee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190a95bee(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_182e00608)();
  return;
}



// ===== continuation @ rva 10a887ec (image 190a887ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190a887ec(void)

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



// ===== continuation @ rva 10a88de5 (image 190a88de5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190a88de5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182e00088)();
  return;
}



// ===== continuation @ rva 10a913f5 (image 190a913f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190a913f5(void)

{
  (*_DAT_182e00f68)();
  return;
}



// ===== continuation @ rva 10a8787b (image 190a8787b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190a8787b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_182dff858)();
  return;
}



// ===== continuation @ rva 10a95a0b (image 190a95a0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190a95a0b(void)

{
  (*_DAT_182dfcbc8)();
  return;
}



// ===== continuation @ rva 10a91df1 (image 190a91df1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190a91df1(void)

{
  (*_DAT_182e00f68)();
  return;
}



// ===== continuation @ rva 10a89555 (image 190a89555) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190a89555(void)

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



// ===== continuation @ rva 10aa98da (image 190aa98da) =====

void FUN_190aa98da(void)

{
  return;
}



// ===== continuation @ rva 10a95ec4 (image 190a95ec4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190a95f15 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190a95ec4(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10aa98fe (image 190aa98fe) =====

void FUN_190aa98fe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 10a9b97a (image 190a9b97a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190a9b97a(void)

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



// ===== continuation @ rva 10a978a7 (image 190a978a7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190a978be */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190a978a7(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10aa89ea (image 190aa89ea) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aa89ea(void)

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



// ===== continuation @ rva 10aa9062 (image 190aa9062) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aa9062(void)

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



// ===== continuation @ rva 10aa644a (image 190aa644a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aa644a(void)

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



// ===== continuation @ rva 10b0cf84 (image 190b0cf84) =====

void FUN_190b0cf84(void)

{
  return;
}



// ===== continuation @ rva 10b09d7f (image 190b09d7f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b09d7f(void)

{
  FUN_190ddce00();
  (*_DAT_182e15948)();
  return;
}



// ===== continuation @ rva 10b0fb88 (image 190b0fb88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0fb88(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182e15ed8)();
  return;
}



// ===== continuation @ rva 10b0e62e (image 190b0e62e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b0e62e(void)

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



// ===== continuation @ rva 10b0fb99 (image 190b0fb99) =====

void FUN_190b0fb99(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10b0d082 (image 190b0d082) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b0d082(void)

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



// ===== continuation @ rva 10b0db08 (image 190b0db08) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b0db08(void)

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



// ===== continuation @ rva 10b0c95e (image 190b0c95e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b0c95e(void)

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



// ===== continuation @ rva 10b0d87e (image 190b0d87e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0d87e(void)

{
  FUN_190de3220();
  (*_DAT_182e154c8)();
  return;
}



// ===== continuation @ rva 10b0e6a6 (image 190b0e6a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0e6a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182e15ed8)();
  return;
}



// ===== continuation @ rva 10b0e979 (image 190b0e979) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0e979(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (*_DAT_182e15a78)();
  return;
}



// ===== continuation @ rva 10b0fdd7 (image 190b0fdd7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0fdd7(void)

{
  FUN_190dd72e0();
  (*_DAT_182e169d8)();
  return;
}



// ===== continuation @ rva 10b0fd59 (image 190b0fd59) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0fd59(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182e16918)();
  return;
}



// ===== continuation @ rva 10b1009b (image 190b1009b) =====

void FUN_190b1009b(void)

{
  return;
}



// ===== continuation @ rva 10b0feb3 (image 190b0feb3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0feb3(void)

{
  FUN_190ddfc90();
  (*_DAT_182e169a8)();
  return;
}



// ===== continuation @ rva 10b0fe77 (image 190b0fe77) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0fe77(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x348))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182e16948)();
  return;
}



// ===== continuation @ rva 10b100b3 (image 190b100b3) =====

void FUN_190b100b3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10b10089 (image 190b10089) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b10089(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182e168c8)();
  return;
}



// ===== continuation @ rva 10b0ff72 (image 190b0ff72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b0ff72(void)

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



// ===== continuation @ rva 10b0ff20 (image 190b0ff20) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0ff20(void)

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



// ===== continuation @ rva 10b0fe20 (image 190b0fe20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b0fe20(void)

{
  FUN_190dd9df0();
  (*_DAT_182e16908)();
  return;
}



// ===== continuation @ rva 10b1cf48 (image 190b1cf48) =====

void FUN_190b1cf48(void)

{
  return;
}



// ===== continuation @ rva 10b1026c (image 190b1026c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b1026c(void)

{
  FUN_190ddce00();
  (*_DAT_182e18208)();
  return;
}



// ===== continuation @ rva 10b1c2b5 (image 190b1c2b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b1c2b5(void)

{
  (*_DAT_182e1a0a8)();
  return;
}



// ===== continuation @ rva 10b1dd45 (image 190b1dd45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b1dd45(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x20f5,0x70);
  (*_DAT_182e1a178)();
  return;
}



// ===== continuation @ rva 10b1a7c2 (image 190b1a7c2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b1a7c2(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190de3220(in_stack_00000038,&stack0x00000080,*_DAT_18301ee50 + 0x488,*_DAT_18301ee50 + 0x4a7,
                0x17);
  (*_DAT_182e18618)();
  return;
}



// ===== continuation @ rva 10b266e6 (image 190b266e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b266e6(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x120))(in_stack_00000038);
  (*_DAT_182e174e8)();
  return;
}



// ===== continuation @ rva 10b1da11 (image 190b1da11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b1da11(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10b26721 (image 190b26721) =====

void FUN_190b26721(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10b1d19e (image 190b1d19e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b1d19e(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10b24cb7 (image 190b24cb7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b24cb7(void)

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



// ===== continuation @ rva 10b15d63 (image 190b15d63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b15d63(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  FUN_190de3220(in_stack_00000038,&stack0x00000088,*_DAT_18301ee50 + 0x316,*_DAT_18301ee50 + 0x321,
                0x12);
  cVar1 = (**(code **)(*in_stack_00000038 + 0x720))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10b1d6dd (image 190b1d6dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b1d6dd(void)

{
  (*_DAT_182e1a0d8)();
  return;
}



// ===== continuation @ rva 10b26921 (image 190b26921) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b26921(void)

{
  FUN_190dd72e0();
  (*_DAT_182e1cec8)();
  return;
}



// ===== continuation @ rva 10b268a8 (image 190b268a8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b268a8(undefined4 param_1)

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



// ===== continuation @ rva 10b26a13 (image 190b26a13) =====

void FUN_190b26a13(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10b26909 (image 190b26909) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b26909(void)

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



// ===== continuation @ rva 10b26a06 (image 190b26a06) =====

void FUN_190b26a06(void)

{
  return;
}



// ===== continuation @ rva 10b2696d (image 190b2696d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b2696d(void)

{
  FUN_190dd9df0();
  (*_DAT_182e1cee8)();
  return;
}



// ===== continuation @ rva 10b269f6 (image 190b269f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b269f6(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182e1cea8)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 10b26949 (image 190b26949) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b26949(void)

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



// ===== continuation @ rva 10b269c7 (image 190b269c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b269c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x378))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182e1ce98)();
  return;
}



// ===== continuation @ rva 10b31ae7 (image 190b31ae7) =====

void FUN_190b31ae7(void)

{
  return;
}



// ===== continuation @ rva 10b26b94 (image 190b26b94) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b26b94(void)

{
  FUN_190ddce00();
  (*_DAT_182e1e7f8)();
  return;
}



// ===== continuation @ rva 10b30048 (image 190b30048) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b30048(void)

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



// ===== continuation @ rva 10b2b448 (image 190b2b448) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b2b448(void)

{
  (*_DAT_182e1ee78)();
  return;
}



// ===== continuation @ rva 10b33068 (image 190b33068) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b33068(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182e1d0b8)();
  return;
}



// ===== continuation @ rva 10b2fb7a (image 190b2fb7a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b2fb7a(void)

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



// ===== continuation @ rva 10b30567 (image 190b30567) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b30567(void)

{
  FUN_190de3220();
  (*_DAT_182e1ec88)();
  return;
}



// ===== continuation @ rva 10b2b319 (image 190b2b319) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b2b319(void)

{
  (*_DAT_182e1edc8)();
  return;
}



// ===== continuation @ rva 10b2ac62 (image 190b2ac62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b2ac62(void)

{
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined8 in_stack_00000120;
  
  uStack0000000000000040 = in_stack_00000120;
  uStack0000000000000048 = 0;
  FUN_190dd72e0();
  (*_DAT_182e1eb28)();
  return;
}



// ===== continuation @ rva 10b2a844 (image 190b2a844) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b2a844(void)

{
  undefined8 uStack0000000000000040;
  undefined8 in_stack_00000090;
  
  uStack0000000000000040 = in_stack_00000090;
  FUN_190dd72e0();
  (*_DAT_182e1e998)();
  return;
}



// ===== continuation @ rva 10b30cce (image 190b30cce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b30cce(void)

{
  (*_DAT_182e1ee78)();
  return;
}



// ===== continuation @ rva 10b33314 (image 190b33314) =====

void FUN_190b33314(void)

{
  return;
}



// ===== continuation @ rva 10b3326d (image 190b3326d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b3326d(void)

{
  FUN_190ddce00();
  (*_DAT_182e20a88)();
  return;
}



// ===== continuation @ rva 10b3331c (image 190b3331c) =====

void FUN_190b3331c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10b332a0 (image 190b332a0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b332a0(void)

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



// ===== continuation @ rva 10b332c4 (image 190b332c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b332c4(void)

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



// ===== continuation @ rva 10b33302 (image 190b33302) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b33302(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182e20a98)();
  return;
}



// ===== continuation @ rva 10b332e5 (image 190b332e5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b332e5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (*_DAT_182e20ab8)();
  return;
}



// ===== continuation @ rva 10b3334a (image 190b3334a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b3334a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182e20b08)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 10b33356 (image 190b33356) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b33356(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 10b3337d (image 190b3337d) =====

undefined4 * FUN_190b3337d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 10b3337c (image 190b3337c) =====

void FUN_190b3337c(void)

{
  return;
}



// ===== continuation @ rva 10b3349b (image 190b3349b) =====

void FUN_190b3349b(void)

{
  return;
}



// ===== continuation @ rva 10b333e9 (image 190b333e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b333e9(void)

{
  FUN_190ddce00();
  (*_DAT_182e20b38)();
  return;
}



// ===== continuation @ rva 10b33440 (image 190b33440) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b33440(void)

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



// ===== continuation @ rva 10b334a2 (image 190b334a2) =====

void FUN_190b334a2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10b3341c (image 190b3341c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b3341c(void)

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



// ===== continuation @ rva 10b3347b (image 190b3347b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b3347b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182e20b58)();
  return;
}



// ===== continuation @ rva 10b33461 (image 190b33461) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b33461(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182e20b48)();
  return;
}



// ===== continuation @ rva 10b334da (image 190b334da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190b334da(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182e20b88)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 10b334e6 (image 190b334e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190b334e6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 10b3350d (image 190b3350d) =====

undefined4 * FUN_190b3350d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 10aa9c58 (image 190aa9c58) =====

void FUN_190aa9c58(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000190aa9c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182e06930 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 10aa9c03 (image 190aa9c03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190aa9c3a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190aa9c03(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10abfea7 (image 190abfea7) =====

undefined8 FUN_190abfea7(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
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



// ===== continuation @ rva 10abd1e3 (image 190abd1e3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190abd1e3(void)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong unaff_R15;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  
  *(bool *)(unaff_RBP + 0x40) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar8 = (_DAT_18348fa40 ^ _DAT_182e06ee0) + _DAT_18348f748 + 0x842224e5;
  uVar10 = (_DAT_18348f748 ^ _UNK_182e06ee8) + _DAT_18348fa40 + 0x9cf710d4;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348fa40 ^ _DAT_182e06ee0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f748 ^ _UNK_182e06ee8;
  _DAT_18348f8c0 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348fa40 + 0x9cf710d4) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f748 + 0x842224e5));
  uVar8 = _DAT_18348f8c0 ^ 0x7c0;
  _DAT_18348fa68 = _DAT_18348f920 ^ uVar8 ^ 0x9cf71894;
  _DAT_18348f910 = (_DAT_18348f910 ^ uVar8) + 0x9cf71894 ^ 0x6cda278551620cdc;
  _DAT_18348f930 = (_DAT_18348f930 * -0x3f766c66210ffd11 ^ _DAT_18348f910) + uVar8;
  _DAT_18348fa48 = _DAT_18348f930 ^ _DAT_18348f910;
  _DAT_18348f960 = 0x9cf71894;
  uVar8 = (~_DAT_18348fa78 + 0x8fb97819) *
          ((_DAT_18348f760 ^ unaff_R15) + (ulonglong)((uint)_DAT_18348f760 & 0x84222325) * 2);
  uVar8 = (uVar8 | _DAT_18348f868) + (uVar8 & _DAT_18348f868);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18348fa58 = func_0x000190ad53b0((uVar8 | 0xb9b5b3d) + (ulonglong)((uint)uVar8 & 0xb9b5b3d));
  _DAT_18348f708 = _DAT_18348f708 - 0x8fb97818 ^ 0x8f97e4c3f033e287;
  _DAT_18348f760 = _DAT_18348fa98 * -0x4b4fa47e80acdacd;
  _DAT_18348fa98 = _DAT_18348f760 ^ _DAT_18348f708;
  _DAT_18348faf0 = 0x704687e8;
  _DAT_18348f858 = func_0x000190ad53b0(_DAT_18348f7d0 + 0xffb6ffc914ff44ff ^ 0xc1);
  uVar8 = (ulonglong)(~(uint)_DAT_18348f858 & 0x8fb97fd8);
  _DAT_18348f890 = _DAT_18348f998 ^ uVar8 ^ 0x1000007c0;
  _DAT_18348f998 = (_DAT_18348f998 ^ uVar8) + 0x1000007c0 ^ 0x1300326acf548048;
  _DAT_18348faa0 = (_DAT_18348faa0 * 0x663a479459587e25 ^ _DAT_18348f998) + uVar8;
  _DAT_18348f7b8 = _DAT_18348faa0 ^ _DAT_18348f998;
  _DAT_18348fa10 = 0x7c0;
  uVar8 = (~_DAT_18348f958 + 0x20a4f415) *
          ((_DAT_18348f7c0 ^ unaff_R15) + (ulonglong)((uint)_DAT_18348f7c0 & 0x84222325) * 2);
  uVar8 = (uVar8 | _DAT_18348fa58) + (uVar8 & _DAT_18348fa58);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18348f8e8 = func_0x000190ad53b0((uVar8 | 0xa486d731) + (ulonglong)((uint)uVar8 & 0xa486d731))
  ;
  _DAT_18348f798 = (_DAT_18348f798 ^ _DAT_18348f8e8) - 0x20a4f414 ^ 0xde5863c0b51462a8;
  _DAT_18348fa10 = (_DAT_18348fa10 * 0x74c357d8abda40db ^ _DAT_18348f798) + _DAT_18348f8e8;
  _DAT_18348fa58 = _DAT_18348fa10 ^ _DAT_18348f798;
  _DAT_18348f898 = 0xdf5b0bec;
  uVar8 = (_DAT_18348f910 ^ _DAT_182e06ef0) + _DAT_18348f8a8 + 0x842224e5;
  uVar10 = (_DAT_18348f8a8 ^ _UNK_182e06ef8) + _DAT_18348f910 + 0x20a4f414;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f910 ^ _DAT_182e06ef0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f8a8 ^ _UNK_182e06ef8;
  _DAT_18348f898 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f910 + 0x20a4f414) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f8a8 + 0x842224e5));
  uVar8 = _DAT_18348f898 ^ 0x3c0;
  _DAT_18348f9e0 = _DAT_18348fad0 ^ uVar8 ^ 0x20a4fbd4;
  _DAT_18348f768 = (_DAT_18348f768 ^ uVar8) + 0x20a4fbd4 ^ 0x73ea61ef3db35681;
  _DAT_18348f9a8 = (_DAT_18348f9a8 * -0x441df8846e61e7a3 ^ _DAT_18348f768) + uVar8;
  _DAT_18348f900 = _DAT_18348f9a8 ^ _DAT_18348f768;
  _DAT_18348f758 = 0x20a4fbd4;
  uVar8 = (_DAT_18348f918 ^ _DAT_182e06f00) + _DAT_18348f7a8 + 0xa486d8f1;
  uVar10 = (_DAT_18348f7a8 ^ _UNK_182e06f08) + _DAT_18348f918 + 0xdf5b0bec;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f918 ^ _DAT_182e06f00;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f7a8 ^ _UNK_182e06f08;
  _DAT_18348f708 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f918 + 0xdf5b0bec) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f7a8 + 0xa486d8f1));
  uVar8 = _DAT_18348f708 * 0x54dba51936e6182f;
  _DAT_18348f920 = _DAT_18348fa30 ^ uVar8 ^ 0x1000007c0;
  _DAT_18348f9b8 = (_DAT_18348f9b8 ^ uVar8) + 0x1000007c0 ^ 0x303a8f6ec8c2c2e9;
  _DAT_18348f7b0 = (_DAT_18348f7b0 * 0x50c8fb06b9c6ae51 ^ _DAT_18348f9b8) + uVar8;
  _DAT_18348f990 = _DAT_18348f7b0 ^ _DAT_18348f9b8;
  _DAT_18348f938 = 0x7c0;
  uVar8 = (_DAT_18348f708 ^ _DAT_182e06f10) + _DAT_18348f898 + 0x73cddedf;
  uVar10 = (_DAT_18348f898 ^ _UNK_182e06f18) + _DAT_18348f708 + 0x5c1511ee;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f708 ^ _DAT_182e06f10;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f898 ^ _UNK_182e06f18;
  _DAT_18348f7d0 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f708 + 0x5c1511ee) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f898 + 0x73cddedf));
  _DAT_18348f730 =
       (_DAT_18348f730 ^ _DAT_18348f7d0 ^ 0x592ea753e9924596) + 0xabfaec14 ^ 0xa841819a2d955198;
  _DAT_18348fad8 =
       (_DAT_18348fad8 * -0x425695ef3bb7ab1 ^ _DAT_18348f730) +
       (_DAT_18348f7d0 ^ 0x592ea753e9924596);
  _DAT_18348f720 = _DAT_18348fad8 ^ _DAT_18348f730;
  _DAT_18348f718 = 0xabfaec14;
  uVar8 = (~_DAT_18348f878 + 0x5c1511ef) *
          ((_DAT_18348f8f0 ^ 0x73cddedf) + (ulonglong)((uint)_DAT_18348f8f0 & 0x73cddedf) * 2);
  uVar8 = (uVar8 | _DAT_18348f8f8) + (uVar8 & _DAT_18348f8f8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18348faf0 = func_0x000190ad53b0((uVar8 | 0x2fd8cf31) + (ulonglong)((uint)uVar8 & 0x2fd8cf31))
  ;
  uVar8 = _DAT_18348faf0 << 0x30 | _DAT_18348faf0 >> 0x10;
  _DAT_18348f758 = (_DAT_18348f758 ^ uVar8) + 0x540511ea ^ 0x1808dae053394cab;
  _DAT_18348f920 = (_DAT_18348f920 * -0x6e56fd9e384393ed ^ _DAT_18348f758) + uVar8;
  _DAT_18348f850 = _DAT_18348f920 ^ _DAT_18348f758;
  _DAT_18348fa30 = 0x540511ea;
  uVar8 = (_DAT_18348f980 ^ _DAT_182e06f20) + _DAT_18348f878 + 0x2fd8cf31;
  uVar10 = (_DAT_18348f878 ^ _UNK_182e06f28) + _DAT_18348f980 + 0xa80a23d4;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f980 ^ _DAT_182e06f20;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f878 ^ _UNK_182e06f28;
  _DAT_18348f988 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f980 + 0xa80a23d4) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f878 + 0x2fd8cf31));
  uVar8 = _DAT_18348f988 - (_DAT_18348f988 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_18348f988) & 0xfffffffffffffffe ^ 0xabfaec14;
  _DAT_18348f8a8 = _DAT_18348fa68 ^ uVar8 ^ 0x154050fe8;
  _DAT_18348f9d8 = (_DAT_18348f9d8 ^ uVar8) + 0x154050fe8 ^ 0xd713b3c99689f052;
  _DAT_18348f958 = (_DAT_18348f958 * -0x657013f739e61259 ^ _DAT_18348f9d8) + uVar8;
  _DAT_18348f748 = _DAT_18348f958 ^ _DAT_18348f9d8;
  _DAT_18348f9a0 = _DAT_18348f950 ^ 0x154050fe8;
  _DAT_18348f740 = 0x54050fe8;
  uVar8 = (~_DAT_18348f8f8 + 0x54050fe9) *
          ((_DAT_18348f890 ^ 0xd0272ccd) + (ulonglong)((uint)_DAT_18348f890 & 0xd0272ccd) * 2);
  uVar8 = (uVar8 | _DAT_18348f920) + (uVar8 & _DAT_18348f920);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18348f9d0 = func_0x000190ad53b0((uVar8 | 0x84222325) + (ulonglong)((uint)uVar8 & 0x84222325))
  ;
  _DAT_18348f9c0 = (_DAT_18348f9d0 << 10 | _DAT_18348f9d0 >> 0x36) * 0xcd254ff78fb1ed5;
  _DAT_18348f8e8 = _DAT_18348f8e8 ^ _DAT_18348f9c0 ^ 0xa2527f64d5e3478e;
  _DAT_18348f758 = (_DAT_18348f758 * 0x11dc32c0b349d5d5 ^ _DAT_18348f8e8) + _DAT_18348f9c0;
  _DAT_18348fa08 = _DAT_18348f758 ^ _DAT_18348f8e8;
  _DAT_18348f860 = 0;
  _DAT_18348fad8 = func_0x000190ad53b0(_DAT_18348f710 ^ 0x1bff7cdaffddd4);
  uVar8 = _DAT_18348fad8 >> 1 | _DAT_18348fad8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ _DAT_18348fad8) & 0x7fffffffffffffff;
  _DAT_18348fae0 = _DAT_18348fa08 ^ uVar8 ^ 0x7c0;
  _DAT_18348fa08 = (_DAT_18348fa08 ^ uVar8) + 0x7c0 ^ 0xa19fe63c990f136b;
  _DAT_18348f8b0 = (_DAT_18348f8b0 * 0x2f736ae553793b3b ^ _DAT_18348fa08) + uVar8;
  _DAT_18348f880 = _DAT_18348f8b0 ^ _DAT_18348fa08;
  _DAT_18348f918 = _DAT_18348f8e0 ^ 0x7c0;
  _DAT_18348fa58 = 0x7c0;
  _DAT_18348f9a0 = func_0x000190ad53b0(_DAT_18348f820 ^ 0xff33fff9d5ff5afa);
  uVar8 = _DAT_18348f9a0 << 0x24 | _DAT_18348f9a0 >> 0x1c;
  _DAT_18348fa20 = _DAT_18348fa20 ^ uVar8 ^ 0x5921a075c5d98c5e;
  _DAT_18348f900 = (_DAT_18348f900 * -0x3c6dfc3557ee3f25 ^ _DAT_18348fa20) + uVar8;
  _DAT_18348faf8 = _DAT_18348f900 ^ _DAT_18348fa20;
  _DAT_18348f898 = 0;
  _DAT_18348fa80 = func_0x000190ad53b0(_DAT_18348f818 + 0xffdbff83230021ff ^ 0xd);
  uVar8 = _DAT_18348fa80 - (_DAT_18348fa80 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_18348fa80;
  _DAT_18348faa8 = _DAT_18348f910 ^ uVar8 ^ 0x7c0;
  _DAT_18348f868 = (_DAT_18348f868 ^ uVar8) + 0x7c0 ^ 0x8ace53e230f9b24b;
  _DAT_18348fa60 = (_DAT_18348fa60 * 0x4e1525385919888b ^ _DAT_18348f868) + uVar8;
  _DAT_18348f990 = _DAT_18348fa60 ^ _DAT_18348f868;
  _DAT_18348faf8 = 0x7c0;
  uVar8 = (_DAT_18348f9a0 ^ 0x842224e5) + _DAT_18348f7c0 + 0x842224e5;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f9a0 ^ 0x842224e5;
  uVar10 = ((_DAT_18348f7c0 + _DAT_18348f9a0) * 0x2000 | _DAT_18348f7c0 + _DAT_18348f9a0 >> 0x33) ^
           _DAT_18348f7c0;
  _DAT_18348f940 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_18348f9a0 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f7c0 + 0x842224e5));
  lVar9 = (_DAT_18348f940 << 2 & 0xffffffff | _DAT_18348f940 >> 0x3e) * (ulonglong)_DAT_182e06f40 +
          ((_DAT_18348f940 & 0x3fffffffffffffff) >> 0x1e) * (_DAT_182e06f30 & 0xffffffff) << 0x20;
  uVar8 = (_DAT_18348f940 << 2 & 0xffffffff | _DAT_18348f940 >> 0x3e) *
          (_DAT_182e06f30 & 0xffffffff) + lVar9 & 0x7fffffffffffffff;
  _DAT_18348f9e0 = (_DAT_18348f818 ^ uVar8 ^ 0x7c0 ^ uVar8) + 0x7c0 ^ 0x88fe7002b4f27e5c;
  _DAT_18348f760 = (_DAT_18348f760 * 0x79d9ef4b5b737e31 ^ _DAT_18348f9e0) + uVar8;
  _DAT_18348fa48 = _DAT_18348f760 ^ _DAT_18348f9e0;
  _DAT_18348f800 = 0x7c0;
  *(uint *)(unaff_RBP + 0xa4) = unaff_EDI & 0x7c0;
  plVar2 = *(longlong **)(unaff_RBP + 0x20);
  lVar9 = (**(code **)(*plVar2 + 0x6f0))(plVar2,lVar9,0);
  *(int *)(unaff_RBP + 0x70) = (int)*(char *)(lVar9 + *(int *)(unaff_RBP + 0x78));
  (**(code **)(*plVar2 + 0x6f8))(plVar2);
  lVar5 = _DAT_18348fac0 + 0xf5667b04;
  lVar9 = _DAT_18348fa80 + 0x365c9ad;
  uVar8 = (_DAT_18348fa80 ^ _DAT_182e06f50) + lVar5;
  uVar10 = (_DAT_18348fac0 ^ _UNK_182e06f58) + lVar9;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348fa80 ^ _DAT_182e06f50;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348fac0 ^ _UNK_182e06f58;
  *(ulonglong *)(unaff_RBP + 0x10) = (ulonglong)*(uint *)(unaff_RBP + 0x70);
  _DAT_18348f738 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - lVar9 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar5);
  _DAT_18348f820 =
       (_DAT_18348f820 ^ _DAT_18348f738 & 0x7fffffffffffffff) + 0x7221918c ^ 0x5d2652945c4384fa;
  _DAT_18348f730 =
       (_DAT_18348f730 * 0x562958278d94b6e1 ^ _DAT_18348f820) +
       (_DAT_18348f738 & 0x7fffffffffffffff);
  _DAT_18348f780 = _DAT_18348f730 ^ _DAT_18348f820;
  _DAT_18348f778 = 0x7221918c;
  uVar8 = (~_DAT_18348f970 + 0xea2f1737) *
          ((_DAT_18348f860 ^ 0x84222325) + (ulonglong)((uint)_DAT_18348f860 & 0x84222325) * 2);
  uVar8 = (uVar8 | _DAT_18348f808) + (uVar8 & _DAT_18348f808);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18348fab0 = func_0x000190ad53b0((uVar8 | 0x6e0d3413) + (ulonglong)((uint)uVar8 & 0x6e0d3413))
  ;
  _DAT_18348f7b0 = _DAT_18348f7b0 - 0xea2f1736 ^ 0x9d2f963fe27b2f3d;
  _DAT_18348faa8 = _DAT_18348f798 * 0x31523254fd20eefd;
  _DAT_18348f798 = _DAT_18348faa8 ^ _DAT_18348f7b0;
  _DAT_18348fa90 = 0x15d0e8ca;
  uVar8 = (_DAT_18348fa68 ^ _DAT_182e06f60) + _DAT_18348f920 + 0x8422231a;
  uVar10 = (_DAT_18348f920 ^ _UNK_182e06f68) + _DAT_18348fa68 + 0xea2f1736;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348fa68 ^ _DAT_182e06f60;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f920 ^ _UNK_182e06f68;
  _DAT_18348f928 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348fa68 + 0xea2f1736) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f920 + 0x8422231a));
  _DAT_18348f968 = _DAT_18348f9c8 ^ _DAT_18348f928 ^ 0xea2f1775;
  _DAT_18348f898 = (_DAT_18348f898 ^ _DAT_18348f928) + 0xea2f1775 ^ 0xfef542db7e66cb27;
  _DAT_18348f770 = (_DAT_18348f770 * -0x2a001d1157f1765b ^ _DAT_18348f898) + _DAT_18348f928;
  _DAT_18348fa90 = _DAT_18348f770 ^ _DAT_18348f898;
  _DAT_18348f848 = 0xea2f1775;
  uVar8 = (~_DAT_18348f858 + 0x15d0e8cb) *
          ((_DAT_18348f788 ^ 0x6e0d3450) + (ulonglong)((uint)_DAT_18348f788 & 0x6e0d3450) * 2);
  uVar8 = (uVar8 | _DAT_18348f8a8) + (uVar8 & _DAT_18348f8a8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18348fa70 = func_0x000190ad53b0((uVar8 | 0x7bdddc9a) + (ulonglong)((uint)uVar8 & 0x7bdddc9a))
  ;
  uVar8 = _DAT_18348fa70 ^ 0x15d0e88a;
  _DAT_18348fad0 = _DAT_18348f9d0 ^ uVar8 ^ 0x10000003f;
  _DAT_18348fab8 = (_DAT_18348fab8 ^ uVar8) + 0x10000003f ^ 0x9f359ab5083a2889;
  _DAT_18348faa8 = (_DAT_18348faa8 * -0x62c6827d727c5d4d ^ _DAT_18348fab8) + uVar8;
  _DAT_18348fa48 = _DAT_18348faa8 ^ _DAT_18348fab8;
  _DAT_18348f7b8 = 0x3f;
  uVar8 = (_DAT_18348f720 ^ _DAT_182e06f70) + _DAT_18348f9f0 + 0x84222325;
  uVar10 = (_DAT_18348f9f0 ^ _UNK_182e06f78) + _DAT_18348f720 + 0x3bdbb5df;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f720 ^ _DAT_182e06f70;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f9f0 ^ _UNK_182e06f78;
  _DAT_18348fa08 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f720 + 0x3bdbb5df) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f9f0 + 0x84222325));
  _DAT_18348fa00 = _DAT_18348fa00 - 0x3bdbb5df ^ 0xd5ecc6f987f1e564;
  _DAT_18348f8a8 = _DAT_18348f8b0 * -0x65a3f8bbf025d09b;
  _DAT_18348f8b0 = _DAT_18348f8a8 ^ _DAT_18348fa00;
  _DAT_18348fa10 = 0xc4244a21;
  _DAT_18348f8b8 = func_0x000190ad53b0(_DAT_18348f8e8 + 0xff8a006bc50058ff ^ 0xd4);
  uVar8 = _DAT_18348f8b8 ^ 0xe80ca743e;
  uVar10 = uVar8 >> 1 | uVar8;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10 ^ uVar8) * 0x6e949447c862e95f;
  _DAT_18348fa18 = _DAT_18348f780 ^ uVar8 ^ 0x3bdbb61e;
  _DAT_18348f790 = (_DAT_18348f790 ^ uVar8) + 0x3bdbb61e ^ 0xd56473ab3187dea5;
  _DAT_18348f740 = (_DAT_18348f740 * 0x54ad77c867a32805 ^ _DAT_18348f790) + uVar8;
  _DAT_18348f990 = _DAT_18348f740 ^ _DAT_18348f790;
  _DAT_18348f748 = 0x3bdbb61e;
  uVar8 = (_DAT_18348f768 ^ _DAT_182e06f80) + _DAT_18348f890 + 0x8422231a;
  uVar10 = (_DAT_18348f890 ^ _UNK_182e06f88) + _DAT_18348f768 + 0xfe938958;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f768 ^ _DAT_182e06f80;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f890 ^ _UNK_182e06f88;
  func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f768 + 0xfe938958) ^
                      (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f890 + 0x8422231a));
  uVar8 = _DAT_18348f740 - (_DAT_18348f740 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18348f740;
  _DAT_18348f958 = _DAT_18348f988 ^ uVar8 ^ 0xfe938997;
  _DAT_18348f8c0 = (_DAT_18348f8c0 ^ uVar8) + 0xfe938997 ^ 0x7610bc20290580a6;
  _DAT_18348f730 = (_DAT_18348f730 * 0x9f4d70048e59c5f ^ _DAT_18348f8c0) + uVar8;
  _DAT_18348f7f8 = _DAT_18348f730 ^ _DAT_18348f8c0;
  _DAT_18348f820 = 0xfe938997;
  uVar8 = (_DAT_18348f718 ^ _DAT_182e06f90) + _DAT_18348fa40 + 0x7ab1aab2;
  uVar10 = (_DAT_18348fa40 ^ _UNK_182e06f98) + _DAT_18348f718 + 0x16c76a8;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f718 ^ _DAT_182e06f90;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348fa40 ^ _UNK_182e06f98;
  _DAT_18348f8e8 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f718 + 0x16c76a8) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348fa40 + 0x7ab1aab2));
  uVar8 = (ulonglong)(((uint)_DAT_18348f8e8 ^ 0xfe938917) & 0xfe938997);
  _DAT_18348f7b0 = _DAT_18348f930 ^ uVar8 ^ 0x10000003f;
  _DAT_18348f960 = (_DAT_18348fa38 ^ uVar8) + 0x10000003f ^ 0xa15c4286e0f3c215;
  _DAT_18348f930 = (_DAT_18348f930 * -0x365332cab9ab0dfb ^ _DAT_18348f960) + uVar8;
  _DAT_18348f960 = _DAT_18348f930 ^ _DAT_18348f960;
  _DAT_18348fa38 = 0x3f;
  _DAT_18348f768 = func_0x000190ad53b0(_DAT_18348f7f8 + 0x4300084c0023ff ^ 10);
  uVar10 = _UNK_182e06fa8;
  uVar8 = _DAT_182e06fa0;
  uVar4 = _DAT_18348f768 ^ 0xfe67f7fd;
  _DAT_18348f918 = _DAT_18348f7c0 ^ uVar4 ^ 0x170898909;
  _DAT_18348fac0 = (_DAT_18348fac0 ^ uVar4) + 0x170898909 ^ 0xf19c56ae7c803353;
  _DAT_18348f7c0 = (_DAT_18348f7c0 * -0x4e4c68776a538653 ^ _DAT_18348fac0) + uVar4;
  _DAT_18348f968 = _DAT_18348f7c0 ^ _DAT_18348fac0;
  _DAT_18348fa50 = 0x70898909;
  uVar4 = (_DAT_18348fa68 ^ _DAT_182e06fa0) + _DAT_18348f9c8 + 0x7a45d458;
  uVar11 = (_DAT_18348f9c8 ^ _UNK_182e06fa8) + _DAT_18348fa68 + 0x7221918c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348fa68 ^ _DAT_182e06fa0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18348f9c8 ^ _UNK_182e06fa8;
  uVar4 = func_0x000190ad53b0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18348fa68 + 0x7221918c) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f9c8 + 0x7a45d458));
  _DAT_18348f858 = (uVar4 ^ uVar4 ^ 0xfe67f77d) + 0x8c4666f1 ^ 0x2339ab98c0253e41;
  _DAT_18348f768 = (_DAT_18348f768 * 0x3ca5f56d7a1d0b77 ^ _DAT_18348f858) + (uVar4 ^ 0xfe67f77d);
  _DAT_18348f8f0 = _DAT_18348f768 ^ _DAT_18348f858;
  _DAT_18348f758 = 0x8c4666f1;
  uVar4 = (_DAT_18348f9a0 ^ uVar8) + _DAT_18348f7c8 + 0x7a45d458;
  uVar11 = (_DAT_18348f7c8 ^ uVar10) + _DAT_18348f9a0 + 0x7221918c;
  uVar8 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f9a0 ^ uVar8;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18348f7c8 ^ uVar10;
  _DAT_18348f7c8 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f9a0 + 0x7221918c) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f7c8 + 0x7a45d458));
  _DAT_18348f930 = (_DAT_18348f930 ^ _DAT_18348f7c8) + 0x7221910c ^ 0xba784aa4a12548e2;
  _DAT_18348f998 = (_DAT_18348f998 * 0x7ca60e992a8eadc5 ^ _DAT_18348f930) + _DAT_18348f7c8;
  _DAT_18348fa70 = _DAT_18348f998 ^ _DAT_18348f930;
  _DAT_18348f918 = 0x7221910c;
  _DAT_18348f828 = func_0x000190ad53b0(_DAT_18348f938 + 0xff9d0054340022ff ^ 0x24);
  uVar8 = _DAT_18348f828 ^ 0x8c4666f1;
  _DAT_18348f7f0 = _DAT_18348f9c8 ^ uVar8 ^ 0x170898909;
  _DAT_18348fae0 = (_DAT_18348fae0 ^ uVar8) + 0x170898909 ^ 0xb0491f9ed813f595;
  _DAT_18348f788 = (_DAT_18348f788 * -0xbb0d4951dbcea93 ^ _DAT_18348fae0) + uVar8;
  _DAT_18348fac8 = _DAT_18348f788 ^ _DAT_18348fae0;
  _DAT_18348f998 = 0x70898909;
  uVar8 = (~_DAT_18348f8d8 + 0x7089890a) *
          ((_DAT_18348f820 ^ 0xf4abaa2c) + (ulonglong)((uint)_DAT_18348f820 & 0xf4abaa2c) * 2);
  uVar8 = (uVar8 | _DAT_18348f990) + (uVar8 & _DAT_18348f990);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18348f850 = func_0x000190ad53b0((uVar8 | 0x84222325) + (ulonglong)((uint)uVar8 & 0x84222325))
  ;
  _DAT_18348f968 = _DAT_18348f850 ^ 0x3178a1cba4752b58;
  _DAT_18348fa58 = _DAT_18348fa58 ^ _DAT_18348f968 ^ 0xe5fa444ab60a1154;
  _DAT_18348fab8 = (_DAT_18348fab8 * -0x69af49b1ae19249d ^ _DAT_18348fa58) + _DAT_18348f968;
  _DAT_18348f848 = _DAT_18348fab8 ^ _DAT_18348fa58;
  _DAT_18348f8f0 = 0;
  uVar8 = (_DAT_18348f9d0 ^ 0x8422231a) + _DAT_18348f9c0 + 0x8422231a;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f9d0 ^ 0x8422231a;
  uVar10 = ((_DAT_18348f9c0 + _DAT_18348f9d0) * 0x2000 | _DAT_18348f9c0 + _DAT_18348f9d0 >> 0x33) ^
           _DAT_18348f9c0;
  _DAT_18348f8f0 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_18348f9d0 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f9c0 + 0x8422231a));
  uVar8 = (_DAT_18348f8f0 & 0xfffffffffe000000) - (_DAT_18348f8f0 >> 1 & 0x5555555555000000);
  uVar8 = (uVar8 & 0x3333333333000000) + (uVar8 >> 2 & 0x3333333333000000);
  uVar8 = (_DAT_18348f8f0 & 0xfffffffffe000000) +
          (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f000000) * 0x101010101010101 >> 0x38) * 2 ^ 0x3f;
  _DAT_18348f7e8 = _DAT_18348faf8 ^ uVar8 ^ 0x3f;
  _DAT_18348f740 = (_DAT_18348f740 ^ uVar8) + 0x3f ^ 0xdd0860f62b069e12;
  _DAT_18348f870 = (_DAT_18348f870 * -0x1576f4fc4831edd1 ^ _DAT_18348f740) + uVar8;
  _DAT_18348fa30 = _DAT_18348f870 ^ _DAT_18348f740;
  _DAT_18348f930 = 0x3f;
  uVar8 = (_DAT_18348f850 ^ _DAT_182e06fb0) + _DAT_18348faa8 + 0x7a45d458;
  uVar10 = (_DAT_18348faa8 ^ _UNK_182e06fb8) + _DAT_18348f850 + 0xffffffff;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f850 ^ _DAT_182e06fb0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348faa8 ^ _UNK_182e06fb8;
  uVar8 = func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f850 + 0xffffffff) ^
                              (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348faa8 + 0x7a45d458));
  uVar8 = (uVar8 ^ 0xc01980883) & 0xfffffffff;
  _DAT_18348f8c8 = (_DAT_18348f8c8 ^ uVar8) + 0x1980882 ^ 0x7e874a6df27a6336;
  _DAT_18348fad8 = (_DAT_18348fad8 * 0x37ce989c03d96505 ^ _DAT_18348f8c8) + uVar8;
  _DAT_18348fa40 = _DAT_18348fad8 ^ _DAT_18348f8c8;
  _DAT_18348f830 = _DAT_18348f7b0 ^ 0x1980882;
  _DAT_18348faf8 = 0x1980882;
  uVar8 = (_DAT_18348f968 ^ _DAT_182e06fc0) + _DAT_18348faf0 + 0x7a45d458;
  uVar10 = (_DAT_18348faf0 ^ _UNK_182e06fc8) + _DAT_18348f968 + 0x1980882;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f968 ^ _DAT_182e06fc0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348faf0 ^ _UNK_182e06fc8;
  _DAT_18348f790 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f968 + 0x1980882) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348faf0 + 0x7a45d458));
  uVar8 = _DAT_18348f790 ^ 0x1957e26dfbf957a;
  uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = ((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar8)
          * -0x4e1669c30fab1a1b;
  _DAT_18348f788 = _DAT_18348f788 ^ uVar8 ^ 0x1cf59647f6c4b1e6;
  _DAT_18348fa98 = (_DAT_18348fa98 * -0x1f694c7b223bf22d ^ _DAT_18348f788) + uVar8;
  _DAT_18348f8b0 = _DAT_18348fa98 ^ _DAT_18348f788;
  _DAT_18348f970 = 0;
  uVar8 = (_DAT_18348f9d0 ^ _DAT_182e06fd0) + _DAT_18348f810 + 0xf2457408;
  uVar10 = (_DAT_18348f810 ^ _UNK_182e06fd8) + _DAT_18348f9d0 + 0x7667572d;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18348f9d0 ^ _DAT_182e06fd0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18348f810 ^ _UNK_182e06fd8;
  _DAT_18348f718 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f9d0 + 0x7667572d) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18348f810 + 0xf2457408));
  _DAT_18348fa30 = _DAT_18348fa30 ^ _DAT_18348f718 ^ 0x81928d6668e0619b;
  _DAT_18348fa40 = (_DAT_18348fa40 * 0x6a545039830e639f ^ _DAT_18348fa30) + _DAT_18348f718;
  _DAT_18348f820 = _DAT_18348fa40 ^ _DAT_18348fa30;
  _DAT_18348f7a8 = 0;
  uVar8 = *(ulonglong *)(unaff_RBP + 0x10);
  uVar10 = uVar8 ^ 0x84222325;
  uVar4 = uVar10 ^ _DAT_18348f740;
  lVar9 = uVar10 + _DAT_18348f780;
  uVar10 = uVar4 + lVar9;
  uVar11 = (_DAT_18348f780 ^ 0x3f) + _DAT_18348f740 + 0x3f;
  uVar4 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar4;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18348f780 ^ 0x3f;
  _DAT_18348f798 =
       func_0x000190ad53b0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18348f740 + 0x3f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar9);
  uVar10 = _DAT_18348f798 >> 1 | _DAT_18348f798;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           _DAT_18348f798;
  uVar3 = (uint)uVar8 & 0x3f;
  _DAT_18348f768 = (ulonglong)uVar3;
  _DAT_18348f938 = (_DAT_18348f938 ^ uVar10) + _DAT_18348f768 ^ 0x6e6ce722cea3e350;
  _DAT_18348f868 = (_DAT_18348f868 * 0x21fb771dfa777e9f ^ _DAT_18348f938) + uVar10;
  _DAT_18348f950 = _DAT_18348f868 ^ _DAT_18348f938;
  uVar1 = *(uint *)(unaff_RBP + 0xa4);
  uVar8 = _DAT_18348f768 ^ 0x84222325;
  uVar10 = ((_DAT_18348fab8 ^ uVar8) + (ulonglong)((uint)_DAT_18348fab8 & (uint)uVar8) * 2) *
           (uVar1 - _DAT_18348f830);
  uVar10 = (uVar10 | _DAT_18348f8e0) + (uVar10 & _DAT_18348f8e0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar8 = uVar8 ^ uVar1;
  _DAT_18348f9a8 = func_0x000190ad53b0((uVar8 | uVar10) + (ulonglong)((uint)uVar8 & (uint)uVar10));
  uVar3 = uVar3 | uVar1;
  _DAT_18348f988 = (ulonglong)uVar3;
  uVar8 = (_DAT_18348f9a8 ^ _DAT_18348f988) & 0xfffffffffff;
  _DAT_18348f708 = (_DAT_18348f708 ^ uVar8) + _DAT_18348f988 ^ 0x72250fb52cde9dde;
  _DAT_18348f830 = (_DAT_18348f830 * -0x66c5224d75d8206f ^ _DAT_18348f708) + uVar8;
  _DAT_18348f968 = _DAT_18348f830 ^ _DAT_18348f708;
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x38);
  uVar1 = *(uint *)(unaff_RBP + 0x50);
  *(uint *)(unaff_RBP + 0x78) = uVar1;
  uVar4 = (ulonglong)uVar1;
  auVar6._8_8_ = _UNK_180062bf8;
  auVar6._0_8_ = uVar4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_182e06fe0,_DAT_1800170c0);
  uVar10 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar10 + _DAT_18348f958;
  if (auVar7._4_4_ < 0) {
    uVar8 = _DAT_18348fa48 ^ uVar10;
  }
  _DAT_18348f940 = func_0x000190ad53b0(SUB161(auVar6 ^ _DAT_182e06fe0,5) ^ uVar8);
  uVar12 = uVar1 & _DAT_18001a990;
  uVar13 = uVar1 | _DAT_18001a990;
  uVar8 = (_DAT_18348f940 ^ uVar4) * 0x1acc3f790d1d3c29;
  _DAT_18348f860 =
       ((((ulonglong)uVar13 * (ulonglong)_DAT_182e07020 << 0x20) +
         (ulonglong)uVar13 * (ulonglong)_DAT_182e07010 +
         ((ulonglong)uVar12 * (ulonglong)_DAT_182e07020 << 0x20 |
         (ulonglong)uVar12 * (ulonglong)_DAT_182e07010) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_182e07000 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_182e06ff0) -
       (((uVar4 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_182e07090 +
        (((uVar4 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_182e070a0 +
         (_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_182e07090 << 0x20) +
       ((ulonglong)uVar13 * (ulonglong)_DAT_182e07080 << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_182e07070 +
       ((ulonglong)uVar12 * (ulonglong)_DAT_182e07080 << 0x20 |
       (ulonglong)uVar12 * (ulonglong)_DAT_182e07070) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_182e07060 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_182e07050)) + 0x9f61fb7e2dfeae86;
  _DAT_18348f8b8 = _DAT_18348fa40 ^ uVar8 ^ _DAT_18348f860;
  _DAT_18348f8a0 = (_DAT_18348f8a0 ^ uVar8) + _DAT_18348f860 ^ 0xf0cde25793f7cfb;
  _DAT_18348f818 = (_DAT_18348f818 * 0x5b4941455dc93811 ^ _DAT_18348f8a0) + uVar8;
  _DAT_18348fa50 = _DAT_18348f818 ^ _DAT_18348f8a0;
  _DAT_18348f860 = _DAT_18348f860 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x80) = uVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x40)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10ab5560 (image 190ab5560) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190ab5560(undefined4 param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  
  *(undefined4 *)(unaff_RBP + 0x50) = param_1;
  *(undefined4 *)(unaff_RBP + 0x68) = in_EAX;
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_EDI;
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



// ===== continuation @ rva 10ab676b (image 190ab676b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ab676b(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  uVar1 = (~param_1 + 0x8f63d851) * ((param_2 ^ 0xd3e64629) + param_3 * 2);
  uVar1 = (uVar1 | in_RAX) + (uVar1 & in_RAX);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18348faa0 = func_0x000190ad53b0((uVar1 | 0x5c859e79) + (ulonglong)((uint)uVar1 & 0x5c859e79))
  ;
  _DAT_18348f828 =
       (_DAT_18348f828 ^ _DAT_18348faa0 ^ 0x3128ef8dea45b3c0) + 0xdfe7fd5c ^ 0xcf92261a341c277d;
  _DAT_18348fac0 =
       (_DAT_18348fac0 * -0x22ef75bc94a09953 ^ _DAT_18348f828) +
       (_DAT_18348faa0 ^ 0x3128ef8dea45b3c0);
  _DAT_18348f8c0 = _DAT_18348fac0 ^ _DAT_18348f828;
  _DAT_18348f980 = 0xdfe7fd5c;
  uVar1 = (_DAT_18348fad8 ^ _DAT_182e06e90) + _DAT_18348f948 + 0x3d9981f2;
  uVar2 = (_DAT_18348f948 ^ _UNK_182e06e98) + _DAT_18348fad8 + 0x85d6ded5;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18348fad8 ^ _DAT_182e06e90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18348f948 ^ _UNK_182e06e98;
  uVar1 = func_0x000190ad53b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18348fad8 + 0x85d6ded5) ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18348f948 + 0x3d9981f2));
  uVar2 = (uVar1 ^ 0xbdfffed7) * -0x2eb2906b4355a5f7;
  uVar2 = uVar2 << 0x34 | uVar2 >> 0xc;
  _DAT_18348f898 = (uVar1 ^ uVar2) + 0x3c6d7c02 ^ 0x6f0067e46f1323db;
  _DAT_18348f7e8 = (_DAT_18348f7e8 * -0x149dd4f44ede2d7 ^ _DAT_18348f898) + uVar2;
  _DAT_18348f808 = _DAT_18348f7e8 ^ _DAT_18348f898;
  _DAT_18348f960 = 0x3c6d7c02;
  uVar1 = (~_DAT_18348f7b0 + 0x8da99681) *
          ((_DAT_18348f9a0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18348f9a0 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_18348f948) + (uVar1 & _DAT_18348f948);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18348f8f8 = func_0x000190ad53b0((uVar1 | 0x98bb5a5) + (ulonglong)((uint)uVar1 & 0x98bb5a5));
  _DAT_18348fa00 = (_DAT_18348fa00 ^ _DAT_18348f978) - 0x8da99680 ^ 0xfc742d86a82765a2;
  _DAT_18348f960 = (_DAT_18348f960 * -0x24952dd209eadbf5 ^ _DAT_18348fa00) + _DAT_18348f978;
  _DAT_18348fa08 = _DAT_18348f960 ^ _DAT_18348fa00;
  _DAT_18348f8f0 = 0x72566980;
  uVar1 = (~_DAT_18348fa98 + 0x8da99681) *
          ((_DAT_18348f918 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18348f918 & 0x842223fa) * 2);
  uVar1 = (uVar1 | _DAT_18348f9f0) + (uVar1 & _DAT_18348f9f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18348fa40 = func_0x000190ad53b0((uVar1 | 0x98bb57a) + (ulonglong)((uint)uVar1 & 0x98bb57a));
  uVar1 = (ulonglong)(~(uint)_DAT_18348fa40 & 0xdf) ^ 0xdf;
  _DAT_18348f800 = _DAT_18348f700 ^ uVar1 ^ 0x8da9975f;
  _DAT_18348f8e8 = (_DAT_18348f8e8 ^ uVar1) + 0x8da9975f ^ 0x605eb59fda7172e0;
  _DAT_18348f7d8 = (_DAT_18348f7d8 * -0x2fb96c3ff4cb79d5 ^ _DAT_18348f8e8) + uVar1;
  _DAT_18348fa28 = _DAT_18348f7d8 ^ _DAT_18348f8e8;
  _DAT_18348f828 = 0x8da9975f;
  _DAT_18348f810 = func_0x000190ad53b0(_DAT_18348f868 ^ 0xff2affb5d600a444);
  uVar1 = _DAT_18348f810 ^ 0x3f4556c28bcba680;
  _DAT_18348f908 = _DAT_18348f718 ^ uVar1 ^ 0x1000000df;
  _DAT_18348fac0 = (_DAT_18348fac0 ^ uVar1) + 0x1000000df ^ 0xd0b5847b7fadb70d;
  _DAT_18348f998 = (_DAT_18348f998 * 0x376b26d900dda5d7 ^ _DAT_18348fac0) + uVar1;
  _DAT_18348f7d0 = _DAT_18348f998 ^ _DAT_18348fac0;
  _DAT_18348f730 = 0xdf;
  uVar1 = (~_DAT_18348f968 + 0xfb57fd4) *
          ((_DAT_18348f800 ^ 0x84222325) + (ulonglong)((uint)_DAT_18348f800 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_18348faa8) + (uVar1 & _DAT_18348faa8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18348f960 = func_0x000190ad53b0((uVar1 | 0x8b975cf6) + (ulonglong)((uint)uVar1 & 0x8b975cf6))
  ;
  _DAT_18348fa28 = (_DAT_18348fa28 ^ _DAT_18348f960) - 0xfb57fd3 ^ 0xd3f98fa24862113f;
  _DAT_18348f9d8 = (_DAT_18348f9d8 * 0x68442973ad3b4b1d ^ _DAT_18348fa28) + _DAT_18348f960;
  _DAT_18348f980 = _DAT_18348f9d8 ^ _DAT_18348fa28;
  _DAT_18348f868 = 0xf04a802d;
  uVar1 = (_DAT_18348f838 ^ _DAT_182e06ea0) + _DAT_18348fad0 + 0x842223fa;
  uVar2 = (_DAT_18348fad0 ^ _UNK_182e06ea8) + _DAT_18348f838 + 0xfb57fd3;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18348f838 ^ _DAT_182e06ea0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18348fad0 ^ _UNK_182e06ea8;
  _DAT_18348f8a0 =
       func_0x000190ad53b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18348f838 + 0xfb57fd3) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18348fad0 + 0x842223fa));
  uVar1 = (_DAT_18348f8a0 ^ 0xdaf1a58cd) & 0x1ffffffffffff;
  _DAT_18348f948 = _DAT_18348f780 ^ uVar1 ^ 0xfb580b2;
  _DAT_18348f7a8 = (_DAT_18348f7a8 ^ uVar1) + 0xfb580b2 ^ 0x4acd8f149f61c6c8;
  _DAT_18348f780 = (_DAT_18348f780 * 0x595220dbab882cf9 ^ _DAT_18348f7a8) + uVar1;
  _DAT_18348f858 = _DAT_18348f780 ^ _DAT_18348f7a8;
  _DAT_18348fae0 = 0xfb580b2;
  uVar1 = (~_DAT_18348f890 + 0xf04a802e) * 0x9b4d2449;
  uVar1 = (uVar1 | _DAT_18348f710) + (uVar1 & _DAT_18348f710);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18348fab8 = func_0x000190ad53b0((uVar1 | 0x7bdd23ba) + (ulonglong)((uint)uVar1 & 0x7bdd23ba))
  ;
  uVar1 = (ulonglong)(~(uint)_DAT_18348fab8 & 0xfb580b2);
  _DAT_18348fa10 = _DAT_18348faf0 ^ uVar1 ^ 0x1000000df;
  _DAT_18348f760 = (_DAT_18348f760 ^ uVar1) + 0x1000000df ^ 0x12a403a888b0116d;
  _DAT_18348f9a8 = (_DAT_18348f9a8 * -0x56a54419b3a19163 ^ _DAT_18348f760) + uVar1;
  _DAT_18348fa08 = _DAT_18348f9a8 ^ _DAT_18348f760;
  _DAT_18348fa58 = 0xdf;
  _DAT_18348fae0 = func_0x000190ad53b0(_DAT_18348f720 + 0xff47ff989dff2cff ^ 0x7a);
  uVar1 = (_DAT_18348fae0 ^ 0x3dffeb58) * 0x1c6102c78293f129;
  _DAT_18348f720 = _DAT_18348fa98 ^ uVar1 ^ 0x3dffec37;
  _DAT_18348f8c8 = (_DAT_18348f8c8 ^ uVar1) + 0x3dffec37 ^ 0x1b24667b397739d;
  _DAT_18348fa88 = (_DAT_18348fa88 * 0x73fcc09ea4a2985b ^ _DAT_18348f8c8) + uVar1;
  _DAT_18348f9f0 = _DAT_18348fa88 ^ _DAT_18348f8c8;
  _DAT_18348f870 = 0x3dffec37;
  _DAT_18348f7a8 = func_0x000190ad53b0(_DAT_18348fa28 + 0xff5b0069b6002cff ^ 0xae);
  uVar1 = ((_DAT_18348f7a8 ^ 0xfffffcbf) << 0x3d | (_DAT_18348f7a8 ^ 0xfffffcbf) >> 3) ^ 0x3dffec37;
  _DAT_18348f888 = _DAT_18348f888 ^ uVar1 ^ 0x1000000df;
  _DAT_18348f7d8 = (_DAT_18348f7d8 ^ uVar1) + 0x1000000df ^ 0x4f694ebeaf5e6e0c;
  _DAT_18348fa08 = (_DAT_18348fa08 * -0x2aea334f4537d8b5 ^ _DAT_18348f7d8) + uVar1;
  _DAT_18348f890 = _DAT_18348fa08 ^ _DAT_18348f7d8;
  _DAT_18348f868 = 0xdf;
  _DAT_18348f840 = func_0x000190ad53b0(_DAT_18348f948 ^ 0xff9e0064a90057b9);
  _DAT_18348f9d0 = _DAT_18348faa0 ^ _DAT_18348f840 ^ 0x11c55795e;
  _DAT_18348f858 = (_DAT_18348f858 ^ _DAT_18348f840) + 0x11c55795e ^ 0xec94f1797456e643;
  _DAT_18348fa28 = (_DAT_18348fa28 * 0x54a2b6cd0ddbd8b7 ^ _DAT_18348f858) + _DAT_18348f840;
  _DAT_18348fac8 = _DAT_18348fa28 ^ _DAT_18348f858;
  _DAT_18348f770 = 0x1c55795e;
  uVar1 = (~_DAT_18348f818 + 0x3c6d7c03) *
          ((_DAT_18348f968 ^ 0x5bc5de79) + (ulonglong)((uint)_DAT_18348f968 & 0x5bc5de79) * 2);
  uVar1 = (uVar1 | _DAT_18348f858) + (uVar1 & _DAT_18348f858);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18348f998 = func_0x000190ad53b0((uVar1 | 0x67a8a27b) + (ulonglong)((uint)uVar1 & 0x67a8a27b))
  ;
  _DAT_18348f7a8 =
       (_DAT_18348f7a8 ^ _DAT_18348f998 * -0xb5cf07f21465df1) + 0xe38a815e ^ 0xf0f315a42a955f82;
  _DAT_18348f980 =
       (_DAT_18348f980 * -0x5ee094bd9b5838b3 ^ _DAT_18348f7a8) + _DAT_18348f998 * -0xb5cf07f21465df1
  ;
  _DAT_18348f870 = _DAT_18348f980 ^ _DAT_18348f7a8;
  _DAT_18348fa60 = 0xe38a815e;
  uVar1 = (_DAT_18348f848 ^ _DAT_182e06eb0) + _DAT_18348f7b0 + 0x5bc5de79;
  uVar2 = (_DAT_18348f7b0 ^ _UNK_182e06eb8) + _DAT_18348f848 + 0x3c6d7c02;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18348f848 ^ _DAT_182e06eb0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18348f7b0 ^ _UNK_182e06eb8;
  _DAT_18348f9f8 =
       func_0x000190ad53b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18348f848 + 0x3c6d7c02) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18348f7b0 + 0x5bc5de79));
  _DAT_18348f8d8 = (_DAT_18348f8d8 ^ _DAT_18348f9f8) + 0x1c657c00 ^ 0x71b490bd444091b3;
  _DAT_18348fa18 = (_DAT_18348fa18 * -0x7e241a8ecd44582b ^ _DAT_18348f8d8) + _DAT_18348f9f8;
  _DAT_18348f728 = _DAT_18348fa18 ^ _DAT_18348f8d8;
  _DAT_18348f960 = 0x1c657c00;
  _DAT_18348f860 = func_0x000190ad53b0(_DAT_18348f9f8 ^ 0xffe1007bb9ffe191);
  uVar1 = _DAT_18348f860 >> 1 | _DAT_18348f860;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_18348f860;
  _DAT_18348fa00 = _DAT_18348f758 ^ uVar1 ^ 0xdf;
  _DAT_18348f910 = (_DAT_18348f910 ^ uVar1) + 0xdf ^ 0x238dd1f48c99a6e6;
  _DAT_18348f880 = (_DAT_18348f880 * 0x5db7535181aa60b9 ^ _DAT_18348f910) + uVar1;
  _DAT_18348f800 = _DAT_18348f880 ^ _DAT_18348f910;
  _DAT_18348f750 = 0xdf;
  uVar1 = (_DAT_18348f980 ^ _DAT_182e06ec0) + _DAT_18348f980 + 0x5bc5de79;
  uVar2 = (_DAT_18348f980 ^ _UNK_182e06ec8) + _DAT_18348f980 + 0xffffffff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18348f980 ^ _DAT_182e06ec0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18348f980 ^ _UNK_182e06ec8;
  _DAT_18348fa18 =
       func_0x000190ad53b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18348f980 + 0xffffffff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18348f980 + 0x5bc5de79));
  _DAT_18348f7e8 = (_DAT_18348f7e8 ^ _DAT_18348fa18 ^ 0x201802a3) + 0x201802a3 ^ 0x9eef0de0c2003e6c;
  _DAT_18348f9a0 =
       (_DAT_18348f9a0 * 0x22bc126ef59313e1 ^ _DAT_18348f7e8) + (_DAT_18348fa18 ^ 0x201802a3);
  _DAT_18348f918 = _DAT_18348f9a0 ^ _DAT_18348f7e8;
  _DAT_18348f868 = 0x201802a3;
  _DAT_18348f780 = func_0x000190ad53b0(_DAT_18348f938 ^ 0x23ffa739ff2a5a);
  _DAT_18348f918 = _DAT_18348f918 ^ _DAT_18348f780 & 0x7ffffffffffffff ^ 0xfa88574b82c0df17;
  _DAT_18348fac0 =
       (_DAT_18348fac0 * -0x43edf096a2e27fb5 ^ _DAT_18348f918) +
       (_DAT_18348f780 & 0x7ffffffffffffff);
  _DAT_18348f808 = _DAT_18348fac0 ^ _DAT_18348f918;
  _DAT_18348f740 = 0;
  uVar1 = ((_DAT_18348f9e8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18348f9e8 & 0x842223fa) * 2) *
          -_DAT_18348f750;
  uVar1 = (uVar1 | _DAT_18348f750) + (uVar1 & _DAT_18348f750);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18348f708 = func_0x000190ad53b0((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  _DAT_18348f7a8 = 0xdf;
  _DAT_18348f7f0 = (_DAT_18348f7f0 ^ _DAT_18348f708) + 0xdf ^ 0x9354976e11277d3b;
  _DAT_18348fa50 = (_DAT_18348fa50 * -0x275c9717c99b2665 ^ _DAT_18348f7f0) + _DAT_18348f708;
  _DAT_18348fa88 = _DAT_18348fa50 ^ _DAT_18348f7f0;
  _DAT_18348fa30 = 0xdf;
  uVar1 = (_DAT_18348fa78 ^ _DAT_182e06ed0) + _DAT_18348fa00 + 0xd3e64629;
  uVar2 = (_DAT_18348fa00 ^ _UNK_182e06ed8) + _DAT_18348fa78 + 0x57c4650c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18348fa78 ^ _DAT_182e06ed0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18348fa00 ^ _UNK_182e06ed8;
  _DAT_18348fa00 =
       func_0x000190ad53b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18348fa78 + 0x57c4650c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18348fa00 + 0xd3e64629));
  _DAT_18348fa08 = _DAT_18348fa08 ^ _DAT_18348fa00 ^ 0x18e3051e0f2cdad8;
  _DAT_18348f9e8 = (_DAT_18348f9e8 * -0x2219d72d1579d23 ^ _DAT_18348fa08) + _DAT_18348fa00;
  _DAT_18348f900 = _DAT_18348f9e8 ^ _DAT_18348fa08;
  _DAT_18348f9c0 = 0;
  uVar1 = ((_DAT_18348f940 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18348f940 & 0x842223fa) * 2) *
          -_DAT_18348f818;
  uVar1 = (uVar1 | _DAT_18348f9b0) + (uVar1 & _DAT_18348f9b0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18348faa8 = func_0x000190ad53b0((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  uVar1 = _DAT_18348faa8 ^ 0xdf;
  _DAT_18348fab8 = _DAT_18348f978 ^ uVar1 ^ 0xdf;
  _DAT_18348f8d8 = (_DAT_18348f8d8 ^ uVar1) + 0xdf ^ 0x595916b56f7e655c;
  _DAT_18348fa88 = (_DAT_18348fa88 * 0x568e22bc5b733695 ^ _DAT_18348f8d8) + uVar1;
  _DAT_18348f778 = _DAT_18348fa88 ^ _DAT_18348f8d8;
  _DAT_18348fad8 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x40)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10ac012b (image 190ac012b) =====

void FUN_190ac012b(void)

{
  return;
}



// ===== continuation @ rva 10abfde3 (image 190abfde3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190abfde3(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x78) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10aa9e80 (image 190aa9e80) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aa9e80(void)

{
  byte bVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong lVar2;
  longlong in_R9;
  ulonglong unaff_R12;
  uint unaff_R14D;
  longlong unaff_R15;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM15_Da;
  
  *(undefined8 *)(unaff_RBP + 0x50) = in_RAX;
  *(uint *)(unaff_RBP + 0x40) = unaff_R14D;
  *(char *)(unaff_RBP + 0x68) =
       (char)unaff_R14D + (char)(uint)((ulonglong)unaff_R14D * in_R9 >> 0x23) * -10;
  uVar4 = (_DAT_18348f8e8 ^ _DAT_182e07610) + _DAT_18348f838 + 0x84222351;
  uVar6 = (_DAT_18348f838 ^ _UNK_182e07618) + _DAT_18348f8e8 + 0xdc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f8e8 ^ _DAT_182e07610;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18348f838 ^ _UNK_182e07618;
  _DAT_18348f7e0 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18348f8e8 + 0xdc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f838 + 0x84222351));
  _DAT_18348faa0 = (_DAT_18348faa0 ^ _DAT_18348f7e0 ^ 0x63c4) + 0xfc ^ 0x62bf472e83e2a2e7;
  _DAT_18348fa18 =
       (_DAT_18348fa18 * -0x1727ea0b56894e7b ^ _DAT_18348faa0) + (_DAT_18348f7e0 ^ 0x63c4);
  _DAT_18348f708 = _DAT_18348fa18 ^ _DAT_18348faa0;
  _DAT_18348f930 = 0xfc;
  _DAT_18348f748 = func_0x000190ad53b0(_DAT_18348f8f8 + 0xffe0ff838b0021ffU ^ 0x84);
  uVar4 = _DAT_18348f748 - (_DAT_18348f748 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_RDI) + (uVar4 >> 2 & unaff_RDI);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38 ^ _DAT_18348f748;
  _DAT_18348f9b0 = (_DAT_18348f9b0 ^ uVar4) + 0xd0 ^ 0xf3a0cdd4d9042bf4;
  _DAT_18348fa68 = (_DAT_18348fa68 * -0x695a9e11124ab753 ^ _DAT_18348f9b0) + uVar4;
  _DAT_18348f798 = _DAT_18348fa68 ^ _DAT_18348f9b0;
  _DAT_18348f720 = 0xd0;
  uVar4 = (~_DAT_18348fa38 + 0x11) *
          ((_DAT_18348f740 ^ 0x84222325) + (ulonglong)((uint)_DAT_18348f740 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18348f818) + (uVar4 & _DAT_18348f818);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348f910 = func_0x000190ad53b0((uVar4 | 0x84222335) + (ulonglong)((uint)uVar4 & 0x84222335))
  ;
  uVar4 = (_DAT_18348f910 & 0x7ffff) << 0x2c | _DAT_18348f910 >> 0x14;
  _DAT_18348f8a8 = (_DAT_18348f750 ^ uVar4) - 0x10 ^ 0x302574f5329140e6;
  _DAT_18348f750 = (_DAT_18348f750 * -0x20c654a4078eb4b1 ^ _DAT_18348f8a8) + uVar4;
  _DAT_18348f8a8 = _DAT_18348f750 ^ _DAT_18348f8a8;
  _DAT_18348f908 = 0xf0;
  _DAT_18348f728 = func_0x000190ad53b0(_DAT_18348f7b0 ^ 0x1f00840500210b);
  uVar4 = _DAT_18348f728 << 3 | _DAT_18348f728 >> 0x3d;
  _DAT_18348fab8 = _DAT_18348f9e8 ^ uVar4 ^ 0x40;
  _DAT_18348faf8 = (_DAT_18348faf8 ^ uVar4) + 0x40 ^ 0x4152351b17018e9;
  _DAT_18348f838 = (_DAT_18348f838 * -0x33b7b08f5514faef ^ _DAT_18348faf8) + uVar4;
  _DAT_18348f840 = _DAT_18348f838 ^ _DAT_18348faf8;
  _DAT_18348f950 = 0x40;
  uVar4 = (~_DAT_18348f810 + 200) *
          ((_DAT_18348f830 ^ 0x84222325) + (ulonglong)((uint)_DAT_18348f830 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18348faf0) + (uVar4 & _DAT_18348faf0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348f950 = func_0x000190ad53b0((uVar4 | 0x842223e2) + (ulonglong)((uint)uVar4 & 0x842223e2))
  ;
  uVar4 = _DAT_18348f950 - (_DAT_18348f950 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_RDI) + (uVar4 >> 2 & unaff_RDI);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38) << 7 ^ _DAT_18348f950;
  _DAT_18348f900 = (_DAT_18348f900 ^ uVar4) - 199 ^ 0xd9e8c55602de6da6;
  _DAT_18348f710 = (_DAT_18348f710 * 0x13a3b16429829fe1 ^ _DAT_18348f900) + uVar4;
  _DAT_18348f760 = _DAT_18348f710 ^ _DAT_18348f900;
  _DAT_18348f708 = 0x39;
  uVar4 = (_DAT_18348f7e0 ^ _DAT_182e07620) + _DAT_18348fab8 + 0x84222315;
  uVar6 = (_DAT_18348fab8 ^ _UNK_182e07628) + _DAT_18348f7e0 + 199;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f7e0 ^ _DAT_182e07620;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18348fab8 ^ _UNK_182e07628;
  _DAT_18348f7d8 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18348f7e0 + 199) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348fab8 + 0x84222315));
  uVar4 = (ulonglong)((uint)_DAT_18348f7d8 & 0x30);
  _DAT_18348f718 = _DAT_18348f870 ^ uVar4 ^ 0xf7;
  _DAT_18348f7d0 = (_DAT_18348f7d0 ^ uVar4) + 0xf7 ^ 0xba7b796713c3ae60;
  _DAT_18348f9d0 = (_DAT_18348f9d0 * -0x7ea8d4b7b20ff4d5 ^ _DAT_18348f7d0) + uVar4;
  _DAT_18348fa98 = _DAT_18348f9d0 ^ _DAT_18348f7d0;
  _DAT_18348fa20 = 0xf7;
  uVar4 = (~_DAT_18348f7e8 + 0x3a) *
          ((_DAT_18348fa00 ^ 0x842223d2) + (ulonglong)((uint)_DAT_18348fa00 & 0x842223d2) * 2);
  uVar4 = (uVar4 | _DAT_18348faa8) + (uVar4 & _DAT_18348faa8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348f908 = func_0x000190ad53b0((uVar4 | 0x842223eb) + (ulonglong)((uint)uVar4 & 0x842223eb))
  ;
  uVar4 = _DAT_18348f908 << 0x1e | _DAT_18348f908 >> 0x22;
  _DAT_18348fa90 = _DAT_18348f938 ^ uVar4 ^ 0x130;
  _DAT_18348fa98 = (_DAT_18348fa98 ^ uVar4) + 0x130 ^ 0x9eecdf92c612b9a0;
  _DAT_18348f850 = (_DAT_18348f850 * -0x25aac65cf89ffb5f ^ _DAT_18348fa98) + uVar4;
  _DAT_18348f8c0 = _DAT_18348f850 ^ _DAT_18348fa98;
  _DAT_18348f700 = 0x30;
  uVar4 = (_DAT_18348faa8 ^ _DAT_181bd72b0) + _DAT_18348f980 + 0x84222325;
  uVar6 = (_DAT_18348f980 ^ _UNK_181bd72b8) + _DAT_18348faa8 + 0xdc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348faa8 ^ _DAT_181bd72b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18348f980 ^ _UNK_181bd72b8;
  _DAT_18348f9c8 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18348faa8 + 0xdc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f980 + 0x84222325));
  uVar4 = (_DAT_18348f9c8 << 0xd | _DAT_18348f9c8 >> 0x33) << 0x1d |
          (_DAT_18348f9c8 & 0x7ffffffffffff) >> 0x16;
  _DAT_18348f9e0 = (_DAT_18348f9e0 ^ uVar4) - 0xdc ^ 0x8d83542862111ea4;
  _DAT_18348f898 = (_DAT_18348f898 * -0x507a010891e056b7 ^ _DAT_18348f9e0) + uVar4;
  _DAT_18348f8d8 = _DAT_18348f898 ^ _DAT_18348f9e0;
  _DAT_18348f7f0 = 0x24;
  uVar4 = (_DAT_18348fa28 ^ _DAT_180342bf0) + _DAT_18348fa50 + 0x84222315;
  uVar6 = (_DAT_18348fa50 ^ _UNK_180342bf8) + _DAT_18348fa28 + 0xdc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348fa28 ^ _DAT_180342bf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18348fa50 ^ _UNK_180342bf8;
  _DAT_18348f758 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18348fa28 + 0xdc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348fa50 + 0x84222315));
  _DAT_18348f7c8 = _DAT_18348f850 ^ _DAT_18348f990 ^ 0x10c;
  _DAT_18348f810 = (_DAT_18348f810 ^ _DAT_18348f990) + 0x10c ^ 0xe3a880780fc3f513;
  _DAT_18348fad8 = (_DAT_18348fad8 * 0x6f236a3c36c2cd81 ^ _DAT_18348f810) + _DAT_18348f990;
  _DAT_18348fac0 = _DAT_18348fad8 ^ _DAT_18348f810;
  _DAT_18348fa30 = 0xc;
  uVar4 = (_DAT_18348f7b8 ^ _DAT_1802520e0) + _DAT_18348f9d8 + 0x84222329;
  uVar6 = (_DAT_18348f9d8 ^ _UNK_1802520e8) + _DAT_18348f7b8 + 0x24;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f7b8 ^ _DAT_1802520e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18348f9d8 ^ _UNK_1802520e8;
  _DAT_18348f870 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18348f7b8 + 0x24) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f9d8 + 0x84222329));
  _DAT_18348f740 = _DAT_18348f7d8 ^ _DAT_18348f870 ^ 0x30;
  _DAT_18348f8a0 = (_DAT_18348f8a0 ^ _DAT_18348f870) + 0x30 ^ 0xcf006398a658ae56;
  _DAT_18348f900 = (_DAT_18348f900 * 0x6848ced6692d9b15 ^ _DAT_18348f8a0) + _DAT_18348f870;
  _DAT_18348f9a0 = _DAT_18348f900 ^ _DAT_18348f8a0;
  _DAT_18348f9f8 = 0x30;
  uVar4 = (_DAT_18348f968 ^ _DAT_1805f1480) + _DAT_18348f908 + 0x842223d9;
  uVar6 = (_DAT_18348f908 ^ _UNK_1805f1488) + _DAT_18348f968 + 0xd0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f968 ^ _DAT_1805f1480;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18348f908 ^ _UNK_1805f1488;
  _DAT_18348f988 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18348f968 + 0xd0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f908 + 0x842223d9));
  uVar4 = (_DAT_18348f988 ^ 0xccc0) & 0x3fffffffffff;
  _DAT_18348f8e0 = _DAT_18348f7a8 ^ uVar4 ^ 0x1cc;
  _DAT_18348f870 = (_DAT_18348f870 ^ uVar4) + 0x1cc ^ 0xe7751137669fe285;
  _DAT_18348fa00 = (_DAT_18348fa00 * -0x3982b3180869b0b1 ^ _DAT_18348f870) + uVar4;
  _DAT_18348f858 = _DAT_18348fa00 ^ _DAT_18348f870;
  _DAT_18348f928 = 0xcc;
  uVar4 = (~_DAT_18348f8d8 + 0xd1) *
          ((_DAT_18348f768 ^ 0x842223d9) + (ulonglong)((uint)_DAT_18348f768 & 0x842223d9) * 2);
  uVar4 = (uVar4 | _DAT_18348f948) + (uVar4 & _DAT_18348f948);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348f728 = func_0x000190ad53b0((uVar4 | 0x84222309) + (ulonglong)((uint)uVar4 & 0x84222309))
  ;
  uVar4 = _DAT_18348f728 ^ 0xccc0;
  uVar6 = uVar4 - (uVar4 >> 1 & unaff_R12);
  uVar6 = (uVar6 & unaff_RDI) + (uVar6 >> 2 & unaff_RDI);
  uVar4 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38) << 7 ^ uVar4) &
          0x7fffffffffffffff;
  _DAT_18348f750 = (_DAT_18348f750 ^ uVar4) + 0x2c ^ 0xf76a6373ffae30ab;
  _DAT_18348f8e0 = (_DAT_18348f8e0 * -0xbf0008535ab722d ^ _DAT_18348f750) + uVar4;
  _DAT_18348f830 = _DAT_18348f8e0 ^ _DAT_18348f750;
  _DAT_18348fa38 = 0x2c;
  _DAT_18348f7a0 = func_0x000190ad53b0(_DAT_18348f760 + 0xffe0ff7ba6ffddff ^ 10);
  uVar4 = (_DAT_18348f7a0 ^ 0xac) * -0x736af22d6b778a09;
  _DAT_18348f7e8 = _DAT_18348f710 ^ uVar4 ^ 0xcc;
  _DAT_18348f998 = (_DAT_18348f998 ^ uVar4) + 0xcc ^ 0xfff5059a6f55edb4;
  _DAT_18348f868 = (_DAT_18348f868 * 0x17ebf87f6d2822b1 ^ _DAT_18348f998) + uVar4;
  _DAT_18348f7b8 = _DAT_18348f868 ^ _DAT_18348f998;
  _DAT_18348f720 = 0xcc;
  uVar4 = (_DAT_18348f940 ^ _DAT_1805f1490) + _DAT_18348f9c0 + 0x842223e9;
  uVar6 = (_DAT_18348f9c0 ^ _UNK_1805f1498) + _DAT_18348f940 + 0xcc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f940 ^ _DAT_1805f1490;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18348f9c0 ^ _UNK_1805f1498;
  _DAT_18348f8a8 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18348f940 + 0xcc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f9c0 + 0x842223e9));
  _DAT_18348faf8 = _DAT_18348f8a8 & 0xffffffffc0000000;
  _DAT_18348f920 = _DAT_18348f920 ^ _DAT_18348faf8 ^ 0x2a1003bcdc0fec29;
  _DAT_18348f828 = (_DAT_18348f828 * -0x6d5d6e3eb55f374f ^ _DAT_18348f920) + _DAT_18348faf8;
  _DAT_18348fa28 = _DAT_18348f828 ^ _DAT_18348f920;
  _DAT_18348f860 = 0;
  uVar4 = ((_DAT_18348f9e8 ^ 0x84222315) + (ulonglong)((uint)_DAT_18348f9e8 & 0x84222315) * 2) *
          -_DAT_18348f840;
  uVar4 = (uVar4 | _DAT_18348f7b8) + (uVar4 & _DAT_18348f7b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348f8e0 = func_0x000190ad53b0((uVar4 | 0x84222315) + (ulonglong)((uint)uVar4 & 0x84222315))
  ;
  _DAT_18348fa40 = _DAT_18348fa68 ^ _DAT_18348fa48 ^ 0x30;
  _DAT_18348f710 = (_DAT_18348f710 ^ _DAT_18348fa48) + 0x30 ^ 0x664f4e39cfa15115;
  _DAT_18348fa90 = (_DAT_18348fa90 * -0x2b97b7f1cb40fc95 ^ _DAT_18348f710) + _DAT_18348fa48;
  _DAT_18348fa38 = _DAT_18348fa90 ^ _DAT_18348f710;
  _DAT_18348f918 = 0x30;
  _DAT_18348fa28 = func_0x000190ad53b0(_DAT_18348f728 ^ 0x20ff7bd9ffe1c2);
  uVar4 = (ulonglong)((uint)_DAT_18348fa28 & 0xfc);
  _DAT_18348fad0 = _DAT_18348fad0 ^ uVar4 ^ 0x9e18b9941ef3a9e0;
  _DAT_18348f778 = (_DAT_18348f778 * -0x4434f402dd480ffd ^ _DAT_18348fad0) + uVar4;
  _DAT_18348f7c0 = _DAT_18348f778 ^ _DAT_18348fad0;
  _DAT_18348f740 = 0;
  uVar4 = ((_DAT_18348fa80 ^ 0x84222315) + (ulonglong)((uint)_DAT_18348fa80 & 0x84222315) * 2) *
          -_DAT_18348f798;
  uVar4 = (uVar4 | _DAT_18348f920) + (uVar4 & _DAT_18348f920);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348f808 = func_0x000190ad53b0((uVar4 | 0x84222315) + (ulonglong)((uint)uVar4 & 0x84222315))
  ;
  uVar4 = (_DAT_18348f808 ^ 0x30) >> 1 | _DAT_18348f808 ^ 0x30;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_RDI) + (uVar4 >> 2 & unaff_RDI);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38) ^ _DAT_18348f808)
          & 0xfffffffffffff800;
  _DAT_18348fa90 = _DAT_18348f998 ^ uVar4 ^ 0x30;
  _DAT_18348f750 = (_DAT_18348f750 ^ uVar4) + 0x30 ^ 0xd3e494bc88222e7c;
  _DAT_18348fa60 = (_DAT_18348fa60 * -0x68b981f5a9f00b83 ^ _DAT_18348f750) + uVar4;
  _DAT_18348fa48 = _DAT_18348fa60 ^ _DAT_18348f750;
  _DAT_18348f980 = 0x30;
  uVar4 = (_DAT_18348f7b8 ^ _DAT_180a9fde0) + _DAT_18348f8a0 + 0x84222351;
  uVar6 = (_DAT_18348f8a0 ^ _UNK_180a9fde8) + _DAT_18348f7b8 + 0x74;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f7b8 ^ _DAT_180a9fde0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18348f8a0 ^ _UNK_180a9fde8;
  _DAT_18348f850 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18348f7b8 + 0x74) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f8a0 + 0x84222351));
  uVar4 = _DAT_18348f850 - (_DAT_18348f850 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_RDI) + (uVar4 >> 2 & unaff_RDI);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38) << 5 ^ _DAT_18348f850 ^
          0x74;
  _DAT_18348f720 = _DAT_18348f720 ^ uVar4 ^ 0x95c6f5790ad3a801;
  _DAT_18348fa10 = (_DAT_18348fa10 * 0x2a4cf20103bf5361 ^ _DAT_18348f720) + uVar4;
  _DAT_18348f888 = _DAT_18348fa10 ^ _DAT_18348f720;
  _DAT_18348f7d8 = 0;
  uVar4 = (_DAT_18348f890 ^ 0x84222315) + _DAT_18348f730 + 0x84222315;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f890 ^ 0x84222315;
  uVar6 = ((_DAT_18348f730 + _DAT_18348f890) * 0x2000 | _DAT_18348f730 + _DAT_18348f890 >> 0x33) ^
          _DAT_18348f730;
  _DAT_18348f850 =
       func_0x000190ad53b0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_18348f890 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f730 + 0x84222315));
  uVar4 = (_DAT_18348f850 & 0x7fffffffffffffff) >> 1 | _DAT_18348f850 & 0x7fffffffffffffff;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_RDI) + (uVar4 >> 2 & unaff_RDI);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38)) * 0x10 ^
          _DAT_18348f850 & 0x7fffffffffffffff;
  _DAT_18348f808 = _DAT_18348f7d8 ^ uVar4 ^ 0x30;
  _DAT_18348f968 = (_DAT_18348f968 ^ uVar4) + 0x30 ^ 0xb8ac328c8529dc71;
  _DAT_18348f810 = (_DAT_18348f810 * -0x224e4a3b880b1169 ^ _DAT_18348f968) + uVar4;
  _DAT_18348f8b0 = _DAT_18348f810 ^ _DAT_18348f968;
  _DAT_18348f8e0 = 0x30;
  uVar4 = *(ulonglong *)(unaff_RBP + 0x50);
  uVar6 = uVar4 ^ 0x84222325 ^ _DAT_18348f9c0;
  lVar2 = (uVar4 ^ 0x84222325) + _DAT_18348f970;
  uVar5 = uVar6 + lVar2;
  uVar7 = ~_DAT_18348f970 + (_DAT_18348f9c0 - 1);
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ ~_DAT_18348f970;
  bVar1 = *(byte *)(unaff_RBP + 0x68);
  _DAT_18348fa68 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18348f9c0 - 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar2);
  uVar6 = ~_DAT_18348fa68;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & unaff_R12);
  uVar5 = (uVar5 & unaff_RDI) + (uVar5 >> 2 & unaff_RDI);
  uVar6 = ~((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38)) * 4 ^ uVar6) &
          uVar4;
  auVar8._8_4_ = (int)uVar4;
  auVar8._0_8_ = uVar4;
  auVar8._12_4_ = (int)(uVar4 >> 0x20);
  uVar5 = SUB168(auVar8 ^ _DAT_18001a710,0);
  uVar3 = SUB164(auVar8 ^ _DAT_18001a710,0);
  _DAT_18348faf8 =
       ((uVar4 & 0xffffffff) * (ulonglong)_DAT_182e07660 +
        (uVar4 >> 0x20) * (ulonglong)unaff_XMM7_Da << 0x20) +
       (uVar4 & 0xffffffff) * (ulonglong)unaff_XMM7_Da +
       ((uVar4 & 0xffffffff) * (ulonglong)_DAT_182e07640 +
        (uVar4 >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
       (uVar4 & 0xffffffff) * (ulonglong)unaff_XMM15_Da +
       (ulonglong)uVar3 * (ulonglong)unaff_XMM9_Da +
       ((ulonglong)uVar3 * (ulonglong)_DAT_182e07680 + (uVar5 >> 0x20) * (ulonglong)unaff_XMM9_Da <<
       0x20) + (-(((uVar4 & 0xffffffff) * (ulonglong)_DAT_182e076e0 +
                   (uVar4 >> 0x20) * (ulonglong)unaff_XMM6_Da << 0x20) +
                  (uVar4 & 0xffffffff) * (ulonglong)unaff_XMM6_Da +
                 ((uVar4 & 0xffffffff) * (ulonglong)_DAT_182e076c0 +
                  (uVar4 >> 0x20) * (ulonglong)unaff_XMM13_Da << 0x20) +
                 (uVar4 & 0xffffffff) * (ulonglong)unaff_XMM13_Da) -
               ((ulonglong)uVar3 * (ulonglong)unaff_XMM10_Da +
               ((ulonglong)uVar3 * (ulonglong)_DAT_182e07700 +
                (uVar5 >> 0x20) * (ulonglong)unaff_XMM10_Da << 0x20))) + -0x25ab4736b1417762;
  _DAT_18348f8f0 = (_DAT_18348f8f0 ^ uVar6) + _DAT_18348faf8 ^ 0x526c52e55a4267b8;
  _DAT_18348fac0 = (_DAT_18348fac0 * 0x3b2e0fd274ce8dbf ^ _DAT_18348f8f0) + uVar6;
  _DAT_18348f930 = _DAT_18348fac0 ^ _DAT_18348f8f0;
  *(byte *)(unaff_RBP + -0x50 + _DAT_18348faf8) = bVar1 | 0x30;
  switch(unaff_R14D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10aad900 (image 190aad900) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aad900(void)

{
  byte bVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(uint *)(unaff_RBP + 0x40) = unaff_ESI;
  *(uint *)(unaff_RBP + 0x50) = unaff_ESI;
  *(char *)(unaff_RBP + 0x68) = (char)unaff_ESI + (char)(unaff_ESI / 10) * -10;
  uVar4 = (_DAT_18348f7d0 ^ _DAT_182e075d0) + _DAT_18348f8e0 + 0x84222360;
  uVar5 = (_DAT_18348f8e0 ^ _UNK_182e075d8) + _DAT_18348f7d0 + 0x74;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f7d0 ^ _DAT_182e075d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18348f8e0 ^ _UNK_182e075d8;
  _DAT_18348f8d0 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18348f7d0 + 0x74) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f8e0 + 0x84222360));
  uVar4 = (ulonglong)(~(uint)((ulonglong)_DAT_18348f8d0 >> 0x29) & 0x45);
  _DAT_18348f798 = (_DAT_18348f798 ^ uVar4) + 0x75 ^ 0x45401e0e83f4ce05;
  _DAT_18348f858 = (_DAT_18348f858 * 0x25d2c98600b0a355 ^ _DAT_18348f798) + uVar4;
  _DAT_18348f730 = _DAT_18348f858 ^ _DAT_18348f798;
  _DAT_18348fa38 = 0x75;
  uVar4 = (_DAT_18348f898 ^ _DAT_181bd72b0) + _DAT_18348fad0 + 0x84222325;
  uVar5 = (_DAT_18348fad0 ^ _UNK_181bd72b8) + _DAT_18348f898 + 0xdc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f898 ^ _DAT_181bd72b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18348fad0 ^ _UNK_181bd72b8;
  _DAT_18348f740 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18348f898 + 0xdc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348fad0 + 0x84222325));
  _DAT_18348fa98 = (_DAT_18348fa98 ^ _DAT_18348f740) - 0xdc ^ 0xce0718f40fb3c5e1;
  _DAT_18348fa70 = (_DAT_18348fa70 * 0x37430526e62ebd4f ^ _DAT_18348fa98) + _DAT_18348f740;
  _DAT_18348f738 = _DAT_18348fa70 ^ _DAT_18348fa98;
  _DAT_18348fad0 = _DAT_18348f758 ^ 0xffffffffffffff24;
  _DAT_18348fa88 = 0x24;
  _DAT_18348f958 = func_0x000190ad53b0(_DAT_18348f928 ^ 0xffdd0084b90021b0);
  uVar4 = (ulonglong)(~(uint)_DAT_18348f958 & 0x30);
  _DAT_18348f850 = _DAT_18348fac0 ^ uVar4 ^ 0x10c;
  _DAT_18348f940 = (_DAT_18348f940 ^ uVar4) + 0x10c ^ 0xe00c33eb2b7c8336;
  _DAT_18348fa70 = (_DAT_18348fa70 * 0x7ca4bdd2d32ab ^ _DAT_18348f940) + uVar4;
  _DAT_18348f760 = _DAT_18348fa70 ^ _DAT_18348f940;
  _DAT_18348f878 = 0xc;
  _DAT_18348f900 = func_0x000190ad53b0(_DAT_18348f9c0 ^ 0xffdf00840cffe1e6);
  uVar4 = _DAT_18348f900 ^ 0x2c;
  _DAT_18348f828 = _DAT_18348f8a0 ^ uVar4 ^ 0x30;
  _DAT_18348f728 = (_DAT_18348f728 ^ uVar4) + 0x30 ^ 0x2810c690a98d9b1d;
  _DAT_18348f7f8 = (_DAT_18348f7f8 * -0x692b146fc328f429 ^ _DAT_18348f728) + uVar4;
  _DAT_18348f780 = _DAT_18348f7f8 ^ _DAT_18348f728;
  _DAT_18348f9f8 = 0x30;
  uVar4 = (~_DAT_18348f840 + 0x3b) *
          ((_DAT_18348f830 ^ 0x84222315) + (ulonglong)((uint)_DAT_18348f830 & 0x84222315) * 2);
  uVar4 = (uVar4 | _DAT_18348f900) + (uVar4 & _DAT_18348f900);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348f998 = func_0x000190ad53b0((uVar4 | 0x8422232f) + (ulonglong)((uint)uVar4 & 0x8422232f))
  ;
  uVar4 = _DAT_18348f998 & 0x7fffffffffffffff;
  _DAT_18348fa00 = _DAT_18348f748 ^ uVar4 ^ 0x6a;
  _DAT_18348fa68 = (_DAT_18348fa68 ^ uVar4) + 0x6a ^ 0x20f2f8ac5f463785;
  _DAT_18348f9f8 = (_DAT_18348f9f8 * 0x4c473771783dd24f ^ _DAT_18348fa68) + uVar4;
  _DAT_18348f868 = _DAT_18348f9f8 ^ _DAT_18348fa68;
  _DAT_18348f800 = _DAT_18348fa10 ^ 0x6a;
  _DAT_18348f778 = 0x6a;
  uVar4 = (_DAT_18348f798 ^ _DAT_181c84080) + _DAT_18348f970 + 0x8422234f;
  uVar5 = (_DAT_18348f970 ^ _UNK_181c84088) + _DAT_18348f798 + 0xc6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f798 ^ _DAT_181c84080;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18348f970 ^ _UNK_181c84088;
  _DAT_18348fad8 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18348f798 + 0xc6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f970 + 0x8422234f));
  uVar4 = _DAT_18348fad8 & 0xffffffffff800000;
  _DAT_18348fa88 = _DAT_18348f9d0 ^ uVar4 ^ 0x130;
  _DAT_18348f8d8 = (_DAT_18348f8d8 ^ uVar4) + 0x130 ^ 0xf67d294af9f2a0a5;
  _DAT_18348fa00 = (_DAT_18348fa00 * 0x559cf78e96c2f0c1 ^ _DAT_18348f8d8) + uVar4;
  _DAT_18348f910 = _DAT_18348fa00 ^ _DAT_18348f8d8;
  _DAT_18348f8c0 = _DAT_18348fac8 ^ 0x130;
  _DAT_18348f8b0 = 0x30;
  uVar4 = (~_DAT_18348faf8 + 0x32) *
          ((_DAT_18348f7a0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18348f7a0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18348f8d8) + (uVar4 & _DAT_18348f8d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348fac8 = func_0x000190ad53b0((uVar4 | 0x84222314) + (ulonglong)((uint)uVar4 & 0x84222314))
  ;
  uVar4 = _DAT_18348fac8 >> 1 | _DAT_18348fac8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18348fac8;
  _DAT_18348f8e0 = (_DAT_18348f8e0 ^ uVar4) - 0x31 ^ 0x71b1fe9e155c296f;
  _DAT_18348f778 = (_DAT_18348f778 * -0x5332be8b16efc98b ^ _DAT_18348f8e0) + uVar4;
  _DAT_18348f8b0 = _DAT_18348f778 ^ _DAT_18348f8e0;
  _DAT_18348f9b8 = 0xcf;
  _DAT_18348f778 = func_0x000190ad53b0(_DAT_18348fa48 ^ 0xffe0ff7bdc001d0f);
  uVar4 = _DAT_18348f778 << 0x26 | (_DAT_18348f778 & 0x7fffffffffffffff) >> 0x1a;
  _DAT_18348f710 = _DAT_18348faa0 ^ uVar4 ^ 0x61;
  _DAT_18348faa0 = (_DAT_18348f8f8 ^ uVar4) + 0x61 ^ 0xee5b5364a3d42239;
  _DAT_18348f768 = (_DAT_18348f768 * 0x78081f8fcb03b06f ^ _DAT_18348faa0) + uVar4;
  _DAT_18348faa0 = _DAT_18348f768 ^ _DAT_18348faa0;
  _DAT_18348f8f8 = 0x61;
  uVar4 = (_DAT_18348f8a0 ^ _DAT_1814d8fe0) + _DAT_18348f808 + 0x84222344;
  uVar5 = (_DAT_18348f808 ^ _UNK_1814d8fe8) + _DAT_18348f8a0 + 0xcf;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f8a0 ^ _DAT_1814d8fe0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18348f808 ^ _UNK_1814d8fe8;
  _DAT_18348fa68 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18348f8a0 + 0xcf) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f808 + 0x84222344));
  uVar4 = _DAT_18348fa68 ^ 0x4e0e;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar4;
  _DAT_18348f838 = _DAT_18348fab8 ^ uVar4 ^ 0x130;
  _DAT_18348f950 = (_DAT_18348f950 ^ uVar4) + 0x130 ^ 0x148c7beebb16900;
  _DAT_18348f990 = (_DAT_18348f990 * 0x25d289851f53d697 ^ _DAT_18348f950) + uVar4;
  _DAT_18348f8b0 = _DAT_18348f990 ^ _DAT_18348f950;
  _DAT_18348f910 = 0x30;
  uVar4 = (_DAT_18348f748 ^ _DAT_182e075e0) + _DAT_18348f718 + 0x84222350;
  uVar5 = (_DAT_18348f718 ^ _UNK_182e075e8) + _DAT_18348f748 + 0xe4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f748 ^ _DAT_182e075e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18348f718 ^ _UNK_182e075e8;
  _DAT_18348fad8 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18348f748 + 0xe4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f718 + 0x84222350));
  uVar4 = _DAT_18348f9a8 - (_DAT_18348f9a8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_18348f9a8;
  _DAT_18348fa68 = (_DAT_18348fa68 ^ uVar4) + 100 ^ 0x8b9d76cdabb5f675;
  _DAT_18348f758 = (_DAT_18348f758 * -0x41aead0152467cd1 ^ _DAT_18348fa68) + uVar4;
  _DAT_18348f820 = _DAT_18348f758 ^ _DAT_18348fa68;
  _DAT_18348f808 = 100;
  _DAT_18348f820 = func_0x000190ad53b0(_DAT_18348f9c8 + 0xffe2ff83dcffddff ^ 0xf0);
  uVar4 = _DAT_18348f820 >> 1 | _DAT_18348f820;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_18348fa70 =
       (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
       _DAT_18348f820;
  _DAT_18348f7f0 = _DAT_18348f7f0 ^ _DAT_18348fa70 ^ 0x601f2fa778ad96d4;
  _DAT_18348f788 = (_DAT_18348f788 * -0x701f7915b6ca86d1 ^ _DAT_18348f7f0) + _DAT_18348fa70;
  _DAT_18348fae8 = _DAT_18348f788 ^ _DAT_18348f7f0;
  _DAT_18348f970 = 0;
  uVar4 = ((_DAT_18348fa68 ^ 0x84222315) + (ulonglong)((uint)_DAT_18348fa68 & 0x84222315) * 2) *
          -_DAT_18348f868;
  uVar4 = (uVar4 | _DAT_18348f958) + (uVar4 & _DAT_18348f958);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18348f9c8 = func_0x000190ad53b0((uVar4 | 0x84222315) + (ulonglong)((uint)uVar4 & 0x84222315))
  ;
  uVar4 = _DAT_18348f9c8 ^ 0x30;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (ulonglong)
          ((uint)uVar4 ^
          (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) <<
          0x21 | _DAT_18348f9c8 >> 0x1f;
  _DAT_18348f800 = _DAT_18348f7f0 ^ uVar4 ^ 0x30;
  _DAT_18348f788 = (_DAT_18348f788 ^ uVar4) + 0x30 ^ 0xd47f9fe91a100b55;
  _DAT_18348f990 = (_DAT_18348f990 * -0x72e64d000c1edbe1 ^ _DAT_18348f788) + uVar4;
  _DAT_18348f798 = _DAT_18348f990 ^ _DAT_18348f788;
  _DAT_18348f780 = 0x30;
  uVar4 = (_DAT_18348f808 ^ _DAT_182e075f0) + _DAT_18348f908 + 0x84222350;
  uVar5 = (_DAT_18348f908 ^ _UNK_182e075f8) + _DAT_18348f808 + 0xff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f808 ^ _DAT_182e075f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18348f908 ^ _UNK_182e075f8;
  _DAT_18348f760 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18348f808 + 0xff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f908 + 0x84222350));
  uVar4 = (ulonglong)((uint)_DAT_18348f760 ^ 0x748b) << 0x2d | _DAT_18348f760 >> 0x13;
  _DAT_18348f7f0 = (_DAT_18348f7f0 ^ uVar4) + 0x8a ^ 0xa7e8bf21f02b35d5;
  _DAT_18348f7b8 = (_DAT_18348f7b8 * -0x57b147e91703def3 ^ _DAT_18348f7f0) + uVar4;
  _DAT_18348f718 = _DAT_18348f7b8 ^ _DAT_18348f7f0;
  _DAT_18348faf8 = 0x8a;
  _DAT_18348f9c8 = func_0x000190ad53b0(_DAT_18348f868 ^ 0xffe10083f5001d5e);
  _DAT_18348f8a0 = _DAT_18348f738 ^ _DAT_18348f9c8 ^ 0x30;
  _DAT_18348f8f0 = (_DAT_18348f8f0 ^ _DAT_18348f9c8) + 0x30 ^ 0x1ee8ca0bbc54772d;
  _DAT_18348f880 = (_DAT_18348f880 * -0x4e890d6fd9a5d12f ^ _DAT_18348f8f0) + _DAT_18348f9c8;
  _DAT_18348f870 = _DAT_18348f880 ^ _DAT_18348f8f0;
  _DAT_18348f7a8 = 0x30;
  uVar4 = (_DAT_18348fa28 ^ _DAT_180f83410) + _DAT_18348f9c8 + 0x84222360;
  uVar5 = (_DAT_18348f9c8 ^ _UNK_180f83418) + _DAT_18348fa28 + 0x45;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348fa28 ^ _DAT_180f83410;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18348f9c8 ^ _UNK_180f83418;
  _DAT_18348f740 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18348fa28 + 0x45) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f9c8 + 0x84222360));
  uVar4 = (_DAT_18348f740 ^ 0x1299) & 0x7fffffffffffffff;
  _DAT_18348f878 = _DAT_18348f878 ^ uVar4 ^ 0x7ef9284e351c192a;
  _DAT_18348fa78 = (_DAT_18348fa78 * 0xa766db2d98c92d7 ^ _DAT_18348f878) + uVar4;
  _DAT_18348fae8 = _DAT_18348fa78 ^ _DAT_18348f878;
  _DAT_18348f780 = 0;
  uVar4 = (_DAT_18348f870 ^ 0x84222315) + _DAT_18348f770 + 0x84222315;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18348f870 ^ 0x84222315;
  uVar5 = ((_DAT_18348f770 + _DAT_18348f870) * 0x2000 | _DAT_18348f770 + _DAT_18348f870 >> 0x33) ^
          _DAT_18348f770;
  _DAT_18348f8a8 =
       func_0x000190ad53b0((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_18348f870 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18348f770 + 0x84222315));
  uVar4 = _DAT_18348f8a8 << 1 | (ulonglong)(_DAT_18348f8a8 < 0);
  _DAT_18348fa18 = _DAT_18348faf0 ^ uVar4 ^ 0x30;
  _DAT_18348f8f0 = (_DAT_18348f8f0 ^ uVar4) + 0x30 ^ 0x36a49a579a1a560f;
  _DAT_18348f760 = (_DAT_18348f760 * -0x6e7573e3db6b16fd ^ _DAT_18348f8f0) + uVar4;
  _DAT_18348f7d8 = _DAT_18348f760 ^ _DAT_18348f8f0;
  bVar1 = *(byte *)(unaff_RBP + 0x68);
  auVar2._8_8_ = _UNK_180145388;
  auVar2._0_8_ = (ulonglong)bVar1 ^ 0x84222325;
  auVar3 = pshufb(auVar2 ^ _DAT_182e07600,_DAT_1800170c0);
  _DAT_18348fa98 = 0x30;
  uVar5 = auVar3._8_8_ + auVar3._0_8_;
  uVar4 = uVar5 + _DAT_18348fa00;
  if (auVar3._4_4_ < 0) {
    uVar4 = _DAT_18348fa08 ^ uVar5;
  }
  _DAT_18348f908 = func_0x000190ad53b0(SUB161(auVar2 ^ _DAT_182e07600,5) ^ uVar4);
  _DAT_18348fad8 = (ulonglong)bVar1 | 0x30;
  uVar4 = (_DAT_18348f908 ^ _DAT_18348fad8) & 0xfffffffff;
  _DAT_18348fa90 = (_DAT_18348fa90 ^ uVar4) + _DAT_18348fad8 ^ 0x839c972d4b26ab04;
  _DAT_18348f880 = (_DAT_18348f880 * -0x2d8168e7c89e90dd ^ _DAT_18348fa90) + uVar4;
  _DAT_18348f818 = _DAT_18348f880 ^ _DAT_18348fa90;
  *(char *)(in_RAX + -1) = (char)_DAT_18348fad8;
  switch(*(uint *)(unaff_RBP + 0x50) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10aaeaff (image 190aaeaff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190aaf004 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190aaeaff(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong unaff_RBP;
  ulonglong uVar13;
  ulonglong unaff_R14;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar18;
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  undefined1 auVar21 [16];
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar28;
  undefined1 auVar27 [16];
  ulonglong uVar29;
  uint uVar17;
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar13 = uVar1 ^ 0x84222325 ^ _DAT_18348f810;
  plVar2 = *(longlong **)(unaff_RBP + 0x20);
  lVar12 = (uVar1 ^ 0x84222325) + _DAT_18348f740;
  uVar15 = uVar13 + lVar12;
  uVar18 = (unaff_R14 ^ _DAT_18348f740) + _DAT_18348f810 + unaff_R14;
  uVar13 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar13;
  uVar15 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ unaff_R14 ^ _DAT_18348f740;
  _DAT_18348faf8 =
       func_0x000190ad53b0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_18348f810 + unaff_R14) ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - lVar12);
  uVar9 = _DAT_18348faf8 ^ uVar1;
  uVar17 = (uint)(uVar1 >> 0x20);
  auVar16._8_4_ = (int)uVar1;
  auVar16._0_8_ = uVar1;
  auVar16._12_4_ = uVar17;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = unaff_R14;
  uVar25 = (undefined4)unaff_R14;
  uVar28 = (uint)(unaff_R14 >> 0x20);
  *(ulonglong *)(unaff_RBP + 0x50) = (ulonglong)uVar17;
  *(ulonglong *)(unaff_RBP + 0x58) = auVar16._8_8_ >> 0x20;
  uVar11 = _DAT_182e077d0;
  uVar10 = _DAT_182e077c0;
  uVar4 = (ulonglong)_DAT_182e07790;
  uVar18 = (ulonglong)_DAT_182e07790;
  auVar19._8_4_ = uVar25;
  auVar19._0_8_ = unaff_R14;
  auVar19._12_4_ = uVar28;
  auVar19 = auVar16 & auVar19;
  auVar21._8_4_ = 0xffffffff;
  auVar21._0_8_ = 0xffffffffffffffff;
  auVar21._12_4_ = 0xffffffff;
  uVar3 = (ulonglong)_DAT_182e077b0;
  uVar13 = (ulonglong)_DAT_182e07780;
  uVar15 = (ulonglong)_DAT_182e077a0;
  uVar5 = (ulonglong)_DAT_182e077b0;
  uVar14 = auVar19._0_4_;
  uVar6 = (ulonglong)_DAT_182e077c0;
  *(ulonglong *)(unaff_RBP + 0x40) = auVar19._0_8_ >> 0x20;
  *(ulonglong *)(unaff_RBP + 0x48) = auVar19._8_8_ >> 0x20;
  auVar7._8_4_ = uVar25;
  auVar7._0_8_ = unaff_R14;
  auVar7._12_4_ = uVar28;
  uVar20 = SUB164(auVar16 | auVar7,0);
  uVar22 = SUB168(auVar16 | auVar7,0);
  auVar8._8_4_ = uVar25;
  auVar8._0_8_ = unaff_R14;
  auVar8._12_4_ = uVar28;
  uVar24 = SUB164(auVar16 ^ auVar8,0);
  uVar29 = SUB168(auVar16 ^ auVar8,0);
  uVar23 = SUB164(auVar16 ^ auVar21,0);
  uVar26 = SUB164(auVar27 ^ auVar21,0);
  _DAT_18348f9a0 =
       (((ulonglong)uVar26 * (ulonglong)_DAT_182e07810 +
         ((SUB168(auVar27 ^ auVar21,0) >> 0x20) * (ulonglong)_DAT_182e07810 +
          (ulonglong)_DAT_182e077a0 * (ulonglong)uVar26 << 0x20) +
         (ulonglong)uVar23 * (ulonglong)_DAT_182e07800 +
         ((SUB168(auVar16 ^ auVar21,0) >> 0x20) * (ulonglong)_DAT_182e07800 +
          (ulonglong)_DAT_182e07780 * (ulonglong)uVar23 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)uVar24 +
        ((uVar29 >> 0x20) * (ulonglong)uVar11 + (ulonglong)uVar10 * (ulonglong)uVar24 << 0x20) +
        (ulonglong)uVar14 * (ulonglong)uVar11 +
        ((auVar19._0_8_ >> 0x20) * (ulonglong)uVar11 + uVar14 * uVar6 << 0x20) +
        uVar3 * (unaff_R14 & 0xffffffff) +
        (uVar28 * uVar5 + (unaff_R14 & 0xffffffff) * uVar15 << 0x20) +
        uVar18 * (uVar1 & 0xffffffff) + (uVar17 * uVar4 + (uVar1 & 0xffffffff) * uVar13 << 0x20) +
        (ulonglong)_DAT_182e077e0 * (ulonglong)uVar20 +
        ((ulonglong)_DAT_182e077f0 * (ulonglong)uVar20 +
         (uVar22 >> 0x20) * (ulonglong)_DAT_182e077e0 << 0x20)) -
       ((ulonglong)uVar24 * (_DAT_182e078a0 & 0xffffffff) +
        ((ulonglong)_DAT_182e078b0 * (ulonglong)uVar24 +
         (uVar29 >> 0x20) * (_DAT_182e078a0 & 0xffffffff) << 0x20) +
        (ulonglong)uVar20 * (ulonglong)_DAT_182e07880 +
        ((ulonglong)_DAT_182e07890 * (ulonglong)uVar20 +
         (uVar22 >> 0x20) * (ulonglong)_DAT_182e07880 << 0x20) +
       (ulonglong)uVar14 * (ulonglong)_DAT_182e07860 +
       ((ulonglong)_DAT_182e07870 * (ulonglong)uVar14 +
        (ulonglong)*(uint *)(unaff_RBP + 0x40) * (ulonglong)_DAT_182e07860 << 0x20) +
       (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_182e07850 +
       ((ulonglong)uVar28 * (ulonglong)_DAT_182e07850 +
        (ulonglong)_DAT_182e07840 * (unaff_R14 & 0xffffffff) << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_182e07850 +
       ((ulonglong)*(uint *)(unaff_RBP + 0x50) * (ulonglong)_DAT_182e07850 +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_182e07840 << 0x20))) + 0xbafe5abaacd52aef;
  _DAT_18348f768 = _DAT_18348f9a0 ^ uVar9;
  _DAT_18348fae8 = (_DAT_18348fae8 ^ uVar9) + _DAT_18348f9a0 ^ 0x189d5cf2b8b2052d;
  _DAT_18348f928 = (_DAT_18348f928 * 0x507673b599f31b89 ^ _DAT_18348fae8) + uVar9;
  _DAT_18348fa40 = _DAT_18348f928 ^ _DAT_18348fae8;
  lVar12 = unaff_RBP + -0x30;
  FUN_18414b520(lVar12);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar12 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(unaff_RBP + 0x18),lVar12);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10ad7920 (image 190ad7920) =====

void FUN_190ad7920(void)

{
  return;
}



// ===== continuation @ rva 10ad7779 (image 190ad7779) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ad7779(void)

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



// ===== continuation @ rva 10adbef7 (image 190adbef7) =====

void FUN_190adbef7(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 10ad87cd (image 190ad87cd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_190ad7db0(void)

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



// ===== continuation @ rva 10ad77d8 (image 190ad77d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190ad77d8(void)

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



// ===== continuation @ rva 10ad8f1e (image 190ad8f1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ad8f1e(void)

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



// ===== continuation @ rva 10ad8ca0 (image 190ad8ca0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ad8ca0(void)

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



// ===== continuation @ rva 10ad90a1 (image 190ad90a1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_190ad7db0(void)

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



// ===== continuation @ rva 10ad9197 (image 190ad9197) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_190ad7db0(void)

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



// ===== continuation @ rva 10adc193 (image 190adc193) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190adc193(void)

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



// ===== continuation @ rva 10adc13f (image 190adc13f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adc13f(void)

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



// ===== continuation @ rva 10adc305 (image 190adc305) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190adc305(void)

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



// ===== continuation @ rva 10adc2b1 (image 190adc2b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190adc2b1(void)

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



// ===== continuation @ rva 10adcef8 (image 190adcef8) =====

void FUN_190adcef8(void)

{
  return;
}



// ===== continuation @ rva 10adc813 (image 190adc813) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adc813(void)

{
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = in_stack_00000030;
  FUN_190dd72e0();
  (*_DAT_182e0d9e8)();
  return;
}



// ===== continuation @ rva 10adc8c2 (image 190adc8c2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adc8c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182e0dbd8)();
  return;
}



// ===== continuation @ rva 10adcf06 (image 190adcf06) =====

void FUN_190adcf06(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10adc92c (image 190adc92c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adc92c(void)

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



// ===== continuation @ rva 10adcb66 (image 190adcb66) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adcb66(void)

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



// ===== continuation @ rva 10adcc18 (image 190adcc18) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adcc18(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_182e0d938)();
  return;
}



// ===== continuation @ rva 10adc2ea (image 190adc2ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adc2ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182e0dd78)();
  return;
}



// ===== continuation @ rva 10adf941 (image 190adf941) =====

void FUN_190adf941(void)

{
  return;
}



// ===== continuation @ rva 10add070 (image 190add070) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190add070(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182e0e2c8)();
  return;
}



// ===== continuation @ rva 10adf4b0 (image 190adf4b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adf4b0(void)

{
  (*_DAT_182e0ec08)();
  return;
}



// ===== continuation @ rva 10addb46 (image 190addb46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190addb46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182e0e118)();
  return;
}



// ===== continuation @ rva 10add51d (image 190add51d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190add51d(void)

{
  FUN_190de3220();
  (*_DAT_182e0e8b8)();
  return;
}



// ===== continuation @ rva 10add149 (image 190add149) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190add149(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182e0e858)();
  return;
}



// ===== continuation @ rva 10adf8e6 (image 190adf8e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adf8e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182e0e358)();
  return;
}



// ===== continuation @ rva 10ade8df (image 190ade8df) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190ade8df(void)

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



// ===== continuation @ rva 10adec0d (image 190adec0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adec0d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182e0eb18)();
  return;
}



// ===== continuation @ rva 10ade956 (image 190ade956) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ade956(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000060;
  
  uStack0000000000000060 = 0;
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_182e0ebd8)();
  return;
}



// ===== continuation @ rva 10ade749 (image 190ade749) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ade749(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182e0e488)();
  return;
}



// ===== continuation @ rva 10ade54b (image 190ade54b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ade54b(void)

{
  FUN_190ddfc90();
  (*_DAT_182e0e938)();
  return;
}



// ===== continuation @ rva 10adf76f (image 190adf76f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190adf76f(void)

{
  (*_DAT_182e0ec08)();
  return;
}



// ===== continuation @ rva 10ae21b2 (image 190ae21b2) =====

void FUN_190ae21b2(void)

{
  return;
}



// ===== continuation @ rva 10ae2016 (image 190ae2016) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ae2016(void)

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



// ===== continuation @ rva 10ae3bc8 (image 190ae3bc8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_190ae6c8c(void)

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



// ===== continuation @ rva 10ae58d4 (image 190ae58d4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ae58d4(void)

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



// ===== continuation @ rva 10ae3c8a (image 190ae3c8a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_190ae6c8c(void)

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



// ===== continuation @ rva 10ae2d7f (image 190ae2d7f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190ae2d7f(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack000000000000007d;
  
  uStack000000000000007d = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10ae2d2a (image 190ae2d2a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ae2d2a(void)

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



// ===== continuation @ rva 10ae30f3 (image 190ae30f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190ae30f3(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000079;
  
  uStack0000000000000079 = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10ae309e (image 190ae309e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190ae309e(void)

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



// ===== continuation @ rva 10ae3bfb (image 190ae3bfb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190ae3bfb(void)

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



// ===== continuation @ rva 10ae5b75 (image 190ae5b75) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190ae5b75(void)

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



// ===== continuation @ rva 10aeb662 (image 190aeb662) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aeb662(void)

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



// ===== continuation @ rva 10aeb60e (image 190aeb60e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aeb60e(void)

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



// ===== continuation @ rva 10aec4d5 (image 190aec4d5) =====

void FUN_190aec4d5(void)

{
  return;
}



// ===== continuation @ rva 10aec279 (image 190aec279) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aec279(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182e110a8)();
  return;
}



// ===== continuation @ rva 10aec4e4 (image 190aec4e4) =====

void FUN_190aec4e4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10aec3ba (image 190aec3ba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aec3ba(void)

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



// ===== continuation @ rva 10aebf4d (image 190aebf4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aebf4d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_182e10ff8)();
  return;
}



// ===== continuation @ rva 10aebea0 (image 190aebea0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aebea0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182e11038)();
  return;
}



// ===== continuation @ rva 10aeb751 (image 190aeb751) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aeb751(void)

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



// ===== continuation @ rva 10aebade (image 190aebade) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aebade(void)

{
  FUN_190ddfc90();
  (*_DAT_182e11098)();
  return;
}



// ===== continuation @ rva 10aec486 (image 190aec486) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aec486(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182e110c8)();
  return;
}



// ===== continuation @ rva 10aee5ea (image 190aee5ea) =====

void FUN_190aee5ea(void)

{
  return;
}



// ===== continuation @ rva 10aec65c (image 190aec65c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aec65c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182e11ca8)();
  return;
}



// ===== continuation @ rva 10aeef56 (image 190aeef56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aeef56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182e11418)();
  return;
}



// ===== continuation @ rva 10aeeb49 (image 190aeeb49) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aeeb49(void)

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



// ===== continuation @ rva 10aedc27 (image 190aedc27) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aedc27(void)

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



// ===== continuation @ rva 10aed920 (image 190aed920) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aed920(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182e12238)();
  return;
}



// ===== continuation @ rva 10aef18e (image 190aef18e) =====

void FUN_190aef18e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10aecd18 (image 190aecd18) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aecd18(void)

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



// ===== continuation @ rva 10aeed4d (image 190aeed4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190aeed4d(void)

{
  (*_DAT_182e121e8)();
  return;
}



// ===== continuation @ rva 10aee17c (image 190aee17c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aee17c(void)

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



// ===== continuation @ rva 10aed365 (image 190aed365) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190aed365(void)

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



