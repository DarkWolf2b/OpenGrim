// ===== continuation @ rva fea5c65 (image 18fea5c65) =====

void FUN_18fea5c65(void)

{
  return;
}



// ===== continuation @ rva fe937cb (image 18fe937cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018fe93821 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18fe937cb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva fe93f8e (image 18fe93f8e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018fe93fa5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18fe93f8e(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva fea5cd1 (image 18fea5cd1) =====

void FUN_18fea5cd1(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva fea173e (image 18fea173e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea173e(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  ulonglong in_stack_00000058;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar4 = (ulonglong)(uint)(param_1 << 0x18);
  uVar2 = in_stack_00000058 ^ 0x84222325;
  uVar3 = ((_DAT_18343ea70 ^ uVar2) + (uVar2 & _DAT_18343ea70) * 2) * (uVar4 - _DAT_18343e980);
  uVar3 = (uVar3 | _DAT_18343e9b0) + (uVar3 & _DAT_18343e9b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18343ea80 = func_0x00018fea5e50((uVar2 ^ uVar4 | uVar3) + (uVar3 & (uVar2 ^ uVar4)));
  uVar3 = _DAT_18343ea80 - (_DAT_18343ea80 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_18343ea80;
  _DAT_18343ea78 = in_stack_00000058 | uVar4;
  _DAT_18343ea58 = (_DAT_18343ea58 ^ uVar3) + _DAT_18343ea78 ^ 0xb9b5f5f98f92fe75;
  _DAT_18343e908 = (_DAT_18343e908 * -0x7146e2bec2e66abd ^ _DAT_18343ea58) + uVar3;
  _DAT_18343eae8 = _DAT_18343e908 ^ _DAT_18343ea58;
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe9d865 (image 18fe9d865) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe9d865(void)

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



// ===== continuation @ rva fe96345 (image 18fe96345) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe96345(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000114;
  
  (**(code **)(*unaff_RSI + 0x5a0))();
  uStack0000000000000114 = 0x20e14a06;
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190de6cb0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe96094 (image 18fe96094) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe96094(void)

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



// ===== continuation @ rva fe9db17 (image 18fe9db17) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe9db17(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R15;
  int iStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 6;
  uStack0000000000000078 = 8;
  uStack0000000000000070 =
       CONCAT44((uint)((ulonglong)unaff_R15 >> 0x28),(int)(char)((ulonglong)unaff_R15 >> 8));
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



// ===== continuation @ rva fe7bed7 (image 18fe7bed7) =====

void FUN_18fe7bed7(void)

{
  return;
}



// ===== continuation @ rva fe76850 (image 18fe76850) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe76850(void)

{
  FUN_190ddce00();
  (*_DAT_182b435b8)();
  return;
}



// ===== continuation @ rva fe79749 (image 18fe79749) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe79749(void)

{
  (*_DAT_182b44758)();
  return;
}



// ===== continuation @ rva fe7c995 (image 18fe7c995) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7c995(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b440f8)();
  return;
}



// ===== continuation @ rva fe7996d (image 18fe7996d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7996d(void)

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



// ===== continuation @ rva fe7c9fb (image 18fe7c9fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7c9fb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b43998)();
  return;
}



// ===== continuation @ rva fe7918a (image 18fe7918a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7918a(void)

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



// ===== continuation @ rva fe7b098 (image 18fe7b098) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7b098(void)

{
  (*_DAT_182b446c8)();
  return;
}



// ===== continuation @ rva fe7b032 (image 18fe7b032) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7b032(void)

{
  (*_DAT_182b44378)();
  return;
}



// ===== continuation @ rva fe7af1f (image 18fe7af1f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7af1f(void)

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



// ===== continuation @ rva fe7c472 (image 18fe7c472) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7c472(void)

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



// ===== continuation @ rva fe7bc5d (image 18fe7bc5d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7bc5d(void)

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



// ===== continuation @ rva fe680a7 (image 18fe680a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe680a7(void)

{
  FUN_190dd72e0();
  (*_DAT_182b3eb58)();
  return;
}



// ===== continuation @ rva fe68029 (image 18fe68029) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe68029(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3ea78)();
  return;
}



// ===== continuation @ rva fe6836b (image 18fe6836b) =====

void FUN_18fe6836b(void)

{
  return;
}



// ===== continuation @ rva fe68229 (image 18fe68229) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe68229(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b3eb48)();
  return;
}



// ===== continuation @ rva fe68383 (image 18fe68383) =====

void FUN_18fe68383(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe68092 (image 18fe68092) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe68092(void)

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



// ===== continuation @ rva fe68058 (image 18fe68058) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe68058(void)

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



// ===== continuation @ rva fe681b6 (image 18fe681b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe681b6(void)

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



// ===== continuation @ rva fe68147 (image 18fe68147) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe68147(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x348))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3eaf8)();
  return;
}



// ===== continuation @ rva fe68331 (image 18fe68331) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe68331(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_182b3eb78)();
  return;
}



// ===== continuation @ rva fe6830d (image 18fe6830d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6830d(void)

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



// ===== continuation @ rva fe6749e (image 18fe6749e) =====

void FUN_18fe6749e(void)

{
  return;
}



// ===== continuation @ rva fe666f6 (image 18fe666f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe666f6(void)

{
  FUN_190ddfc90();
  (*_DAT_182b3e068)();
  return;
}



// ===== continuation @ rva fe6746f (image 18fe6746f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6746f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_182b3e438)();
  return;
}



// ===== continuation @ rva fe6741d (image 18fe6741d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6741d(void)

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



// ===== continuation @ rva fe66bf9 (image 18fe66bf9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe66bf9(void)

{
  FUN_190dd9df0();
  (*_DAT_182b3e038)();
  return;
}



// ===== continuation @ rva fe66b7c (image 18fe66b7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe66b7c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3e0b8)();
  return;
}



// ===== continuation @ rva fe6726e (image 18fe6726e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6726e(void)

{
  FUN_190dd9df0();
  (*_DAT_182b3e368)();
  return;
}



// ===== continuation @ rva fe671f1 (image 18fe671f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe671f1(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3e048)();
  return;
}



// ===== continuation @ rva fe67192 (image 18fe67192) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67192(undefined4 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(*unaff_RSI + 0x448))(param_1,in_stack_00000030);
  (*_DAT_182b3e2e8)();
  return;
}



// ===== continuation @ rva fe674cc (image 18fe674cc) =====

void FUN_18fe674cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe670bb (image 18fe670bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe670bb(void)

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



// ===== continuation @ rva fe66bd8 (image 18fe66bd8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe66bd8(void)

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



// ===== continuation @ rva fe6674d (image 18fe6674d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6674d(void)

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



// ===== continuation @ rva fe825fd (image 18fe825fd) =====

void FUN_18fe825fd(void)

{
  return;
}



// ===== continuation @ rva fe7e07c (image 18fe7e07c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7e07c(void)

{
  FUN_190ddce00();
  (*_DAT_182b45ab8)();
  return;
}



// ===== continuation @ rva fe81e8d (image 18fe81e8d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe81e8d(void)

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



// ===== continuation @ rva fe81e15 (image 18fe81e15) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe81e15(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182b45c08)();
  return;
}



// ===== continuation @ rva fe82353 (image 18fe82353) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82353(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45e48)();
  return;
}



// ===== continuation @ rva fe81f13 (image 18fe81f13) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe81f13(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182b45bb8)();
  return;
}



// ===== continuation @ rva fe82669 (image 18fe82669) =====

void FUN_18fe82669(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe81973 (image 18fe81973) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe81973(void)

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



// ===== continuation @ rva fe81d9d (image 18fe81d9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe81d9d(void)

{
  FUN_190ddce00();
  (*_DAT_182b45a68)();
  return;
}



// ===== continuation @ rva fe81ec7 (image 18fe81ec7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe81ec7(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45e88)();
  return;
}



// ===== continuation @ rva fe8f92b (image 18fe8f92b) =====

void FUN_18fe8f92b(void)

{
  return;
}



// ===== continuation @ rva fe8f879 (image 18fe8f879) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8f879(void)

{
  FUN_190ddce00();
  (*_DAT_182b49798)();
  return;
}



// ===== continuation @ rva fe8f932 (image 18fe8f932) =====

void FUN_18fe8f932(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe8f90b (image 18fe8f90b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8f90b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b49778)();
  return;
}



// ===== continuation @ rva fe8f8d0 (image 18fe8f8d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe8f8d0(void)

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



// ===== continuation @ rva fe8f8f1 (image 18fe8f8f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8f8f1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182b49758)();
  return;
}



// ===== continuation @ rva fe8f8ac (image 18fe8f8ac) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe8f8ac(void)

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



// ===== continuation @ rva fe8f96a (image 18fe8f96a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8f96a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182b497c8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva fe8f976 (image 18fe8f976) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe8f976(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva fe8f993 (image 18fe8f993) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8f993(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_182b497d8)();
  return;
}



// ===== continuation @ rva fe8f99c (image 18fe8f99c) =====

void FUN_18fe8f99c(void)

{
  return;
}



// ===== continuation @ rva fea5fdb (image 18fea5fdb) =====

void FUN_18fea5fdb(void)

{
  return;
}



// ===== continuation @ rva fea5f29 (image 18fea5f29) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea5f29(void)

{
  FUN_190ddce00();
  (*_DAT_182b4c6d8)();
  return;
}



// ===== continuation @ rva fea5fe2 (image 18fea5fe2) =====

void FUN_18fea5fe2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fea5f5c (image 18fea5f5c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fea5f5c(void)

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



// ===== continuation @ rva fea5fa1 (image 18fea5fa1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea5fa1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182b4c708)();
  return;
}



// ===== continuation @ rva fea5fbb (image 18fea5fbb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea5fbb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b4c6e8)();
  return;
}



// ===== continuation @ rva fea5f80 (image 18fea5f80) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fea5f80(void)

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



// ===== continuation @ rva fea601a (image 18fea601a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea601a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182b4c768)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva fea6026 (image 18fea6026) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fea6026(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva fe6777c (image 18fe6777c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6777c(void)

{
  FUN_190dd72e0();
  (*_DAT_182b3e708)();
  return;
}



// ===== continuation @ rva fe67703 (image 18fe67703) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67703(undefined4 param_1)

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



// ===== continuation @ rva fe67ac4 (image 18fe67ac4) =====

void FUN_18fe67ac4(void)

{
  return;
}



// ===== continuation @ rva fe678b3 (image 18fe678b3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe678b3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3e748)();
  return;
}



// ===== continuation @ rva fe6773f (image 18fe6773f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6773f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3e6b8)();
  return;
}



// ===== continuation @ rva fe67989 (image 18fe67989) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe67989(void)

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



// ===== continuation @ rva fe67adc (image 18fe67adc) =====

void FUN_18fe67adc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe67764 (image 18fe67764) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe67764(void)

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



// ===== continuation @ rva fe678f0 (image 18fe678f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe678f0(void)

{
  FUN_190dd9df0();
  (*_DAT_182b3e788)();
  return;
}



// ===== continuation @ rva fe67877 (image 18fe67877) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67877(undefined4 param_1)

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



// ===== continuation @ rva fe67c0c (image 18fe67c0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67c0c(void)

{
  FUN_190dd72e0();
  (*_DAT_182b3e8d8)();
  return;
}



// ===== continuation @ rva fe67b93 (image 18fe67b93) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67b93(undefined4 param_1)

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



// ===== continuation @ rva fe67f54 (image 18fe67f54) =====

void FUN_18fe67f54(void)

{
  return;
}



// ===== continuation @ rva fe67cb2 (image 18fe67cb2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67cb2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3e8f8)();
  return;
}



// ===== continuation @ rva fe67f6c (image 18fe67f6c) =====

void FUN_18fe67f6c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe67edb (image 18fe67edb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe67edb(void)

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



// ===== continuation @ rva fe67d80 (image 18fe67d80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67d80(void)

{
  FUN_190dd9df0();
  (*_DAT_182b3e918)();
  return;
}



// ===== continuation @ rva fe67f42 (image 18fe67f42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67f42(void)

{
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  (*_DAT_182b3e938)(unaff_XMM7_Da / unaff_XMM8_Da + unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva fe67d68 (image 18fe67d68) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe67d68(void)

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



// ===== continuation @ rva fe67e6b (image 18fe67e6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe67e6b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3e958)();
  return;
}



// ===== continuation @ rva feab627 (image 18feab627) =====

void FUN_18feab627(void)

{
  return;
}



// ===== continuation @ rva feaa25b (image 18feaa25b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa25b(void)

{
  FUN_190de3220();
  (*_DAT_182b4da38)();
  return;
}



// ===== continuation @ rva feab2f0 (image 18feab2f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feab2f0(void)

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



// ===== continuation @ rva feab63b (image 18feab63b) =====

void FUN_18feab63b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva feab34a (image 18feab34a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feab34a(void)

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



// ===== continuation @ rva feaa2e6 (image 18feaa2e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa2e6(void)

{
  FUN_190dd72e0();
  (*_DAT_182b4dd28)();
  return;
}



// ===== continuation @ rva feaacb8 (image 18feaacb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feaacb8(void)

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



// ===== continuation @ rva feaada9 (image 18feaada9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feaada9(void)

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



// ===== continuation @ rva feaa3a7 (image 18feaa3a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa3a7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182b4dc78)();
  return;
}



// ===== continuation @ rva feaa8db (image 18feaa8db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa8db(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182b4d9e8)();
  return;
}



// ===== continuation @ rva fe6c130 (image 18fe6c130) =====

void FUN_18fe6c130(void)

{
  return;
}



// ===== continuation @ rva fe6850a (image 18fe6850a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6850a(void)

{
  FUN_190ddce00();
  (*_DAT_182b3ef98)();
  return;
}



// ===== continuation @ rva fe6be83 (image 18fe6be83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6be83(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b3efa8)();
  return;
}



// ===== continuation @ rva fe6ba05 (image 18fe6ba05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6ba05(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b3ee78)();
  return;
}



// ===== continuation @ rva fe6c7ce (image 18fe6c7ce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6c7ce(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182b3f098)();
  return;
}



// ===== continuation @ rva fe6b76c (image 18fe6b76c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6b76c(void)

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



// ===== continuation @ rva fe6be78 (image 18fe6be78) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6be78(void)

{
  (*_DAT_182b3f398)();
  return;
}



// ===== continuation @ rva fe6c7df (image 18fe6c7df) =====

void FUN_18fe6c7df(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe6bab5 (image 18fe6bab5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6bab5(void)

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



// ===== continuation @ rva fe6b597 (image 18fe6b597) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6b597(void)

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



// ===== continuation @ rva fe6c39d (image 18fe6c39d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6c39d(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b3ece8)();
  return;
}



// ===== continuation @ rva fe6bd31 (image 18fe6bd31) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6bd31(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_182b3edd8)();
  return;
}



// ===== continuation @ rva fe6ba4f (image 18fe6ba4f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6ba4f(void)

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



// ===== continuation @ rva fe83f9b (image 18fe83f9b) =====

void FUN_18fe83f9b(void)

{
  return;
}



// ===== continuation @ rva fe83ee9 (image 18fe83ee9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83ee9(void)

{
  FUN_190ddce00();
  (*_DAT_182b47618)();
  return;
}



// ===== continuation @ rva fe83fa2 (image 18fe83fa2) =====

void FUN_18fe83fa2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe83f40 (image 18fe83f40) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83f40(void)

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



// ===== continuation @ rva fe83f61 (image 18fe83f61) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83f61(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182b47608)();
  return;
}



// ===== continuation @ rva fe83f7b (image 18fe83f7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83f7b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b475d8)();
  return;
}



// ===== continuation @ rva fe83f1c (image 18fe83f1c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83f1c(void)

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



// ===== continuation @ rva fe83fda (image 18fe83fda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83fda(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182b47658)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva fe83fe6 (image 18fe83fe6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83fe6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva fe8400d (image 18fe8400d) =====

undefined4 * FUN_18fe8400d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva fe8400c (image 18fe8400c) =====

void FUN_18fe8400c(void)

{
  return;
}



// ===== continuation @ rva fe86498 (image 18fe86498) =====

void FUN_18fe86498(void)

{
  return;
}



// ===== continuation @ rva fe862f4 (image 18fe862f4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe862f4(void)

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



// ===== continuation @ rva fe893a7 (image 18fe893a7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18fe8afd3(void)

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



// ===== continuation @ rva fe89aed (image 18fe89aed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe89aed(void)

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



// ===== continuation @ rva fe8a399 (image 18fe8a399) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18fe8afd3(void)

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



// ===== continuation @ rva fe8ac5a (image 18fe8ac5a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe8ac5a(void)

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



// ===== continuation @ rva fe8638e (image 18fe8638e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe8638e(void)

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



// ===== continuation @ rva fe87656 (image 18fe87656) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe87656(void)

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



// ===== continuation @ rva fe88d6a (image 18fe88d6a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18fe8afd3(void)

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



// ===== continuation @ rva fe8fa62 (image 18fe8fa62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe8fa62(void)

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



// ===== continuation @ rva fe8fa0e (image 18fe8fa0e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8fa0e(void)

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



// ===== continuation @ rva fe908a1 (image 18fe908a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe908a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b49a38)();
  return;
}



// ===== continuation @ rva fe90370 (image 18fe90370) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe90370(void)

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



// ===== continuation @ rva fe908e4 (image 18fe908e4) =====

void FUN_18fe908e4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe903f3 (image 18fe903f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe903f3(void)

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



// ===== continuation @ rva fe902c4 (image 18fe902c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe902c4(void)

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



// ===== continuation @ rva fe90518 (image 18fe90518) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe90518(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182b498d8)();
  return;
}



// ===== continuation @ rva fe904b2 (image 18fe904b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe904b2(void)

{
  FUN_190dd72e0();
  (*_DAT_182b49928)();
  return;
}



// ===== continuation @ rva fe908d5 (image 18fe908d5) =====

void FUN_18fe908d5(void)

{
  return;
}



// ===== continuation @ rva fe8fa47 (image 18fe8fa47) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8fa47(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b49c58)();
  return;
}



// ===== continuation @ rva fe8fc11 (image 18fe8fc11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8fc11(void)

{
  FUN_190ddfc90();
  (*_DAT_182b49d38)();
  return;
}



// ===== continuation @ rva fe8fcbc (image 18fe8fcbc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8fcbc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b49d28)();
  return;
}



// ===== continuation @ rva fe929f6 (image 18fe929f6) =====

void FUN_18fe929f6(void)

{
  return;
}



// ===== continuation @ rva fe90a5c (image 18fe90a5c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe90a5c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182b4a6d8)();
  return;
}



// ===== continuation @ rva fe93534 (image 18fe93534) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe93534(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b49f68)();
  return;
}



// ===== continuation @ rva fe922e2 (image 18fe922e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe922e2(void)

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



// ===== continuation @ rva fe92b9b (image 18fe92b9b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe92b9b(void)

{
  (*_DAT_182b4ab28)();
  return;
}



// ===== continuation @ rva fe930c7 (image 18fe930c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe930c7(void)

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



// ===== continuation @ rva fe9359a (image 18fe9359a) =====

void FUN_18fe9359a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe9345d (image 18fe9345d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe9345d(void)

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



// ===== continuation @ rva fe92ec0 (image 18fe92ec0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe92ec0(void)

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



// ===== continuation @ rva fe91865 (image 18fe91865) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe91865(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b4a888)();
  return;
}



// ===== continuation @ rva fe91139 (image 18fe91139) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe91139(void)

{
  undefined8 uStack0000000000000060;
  undefined8 in_stack_000000e0;
  
  uStack0000000000000060 = in_stack_000000e0;
  FUN_190ddfc90();
  (*_DAT_182b4aa58)();
  return;
}



// ===== continuation @ rva fe91544 (image 18fe91544) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe91544(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b4a3b8)();
  return;
}



// ===== continuation @ rva fe90e25 (image 18fe90e25) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe90e25(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_182b49e28)();
  return;
}



// ===== continuation @ rva fea9e64 (image 18fea9e64) =====

void FUN_18fea9e64(void)

{
  return;
}



// ===== continuation @ rva fea6134 (image 18fea6134) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea6134(void)

{
  FUN_190ddce00();
  (*_DAT_182b4c7d8)();
  return;
}



// ===== continuation @ rva fea61ac (image 18fea61ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea61ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_182b4c8e8)();
  return;
}



// ===== continuation @ rva fea9ac0 (image 18fea9ac0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea9ac0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b4cd28)();
  return;
}



// ===== continuation @ rva fea9399 (image 18fea9399) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea9399(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b4cb08)();
  return;
}



// ===== continuation @ rva fea9ddb (image 18fea9ddb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea9ddb(void)

{
  FUN_190dd9df0();
  (*_DAT_182b4cad8)();
  return;
}



// ===== continuation @ rva fea9d5e (image 18fea9d5e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea9d5e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b4c7e8)();
  return;
}



// ===== continuation @ rva fea90e4 (image 18fea90e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea90e4(void)

{
  FUN_190dd72e0();
  (*_DAT_182b4ca38)();
  return;
}



// ===== continuation @ rva fea9ed0 (image 18fea9ed0) =====

void FUN_18fea9ed0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fea6167 (image 18fea6167) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fea6167(void)

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



// ===== continuation @ rva fea9d8a (image 18fea9d8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fea9d8a(void)

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



// ===== continuation @ rva feaa03b (image 18feaa03b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa03b(void)

{
  FUN_190dd72e0();
  (*_DAT_182b4d888)();
  return;
}



// ===== continuation @ rva fea9fc8 (image 18fea9fc8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fea9fc8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva feaa113 (image 18feaa113) =====

void FUN_18feaa113(void)

{
  return;
}



// ===== continuation @ rva feaa0db (image 18feaa0db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa0db(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b4d8a8)();
  return;
}



// ===== continuation @ rva feaa11d (image 18feaa11d) =====

void FUN_18feaa11d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva feaa063 (image 18feaa063) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feaa063(void)

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



// ===== continuation @ rva feaa001 (image 18feaa001) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa001(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b4d8e8)();
  return;
}



// ===== continuation @ rva feaa102 (image 18feaa102) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa102(void)

{
  (*_DAT_182b4d8d8)();
  return;
}



// ===== continuation @ rva feaa084 (image 18feaa084) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaa084(void)

{
  FUN_190dd9df0();
  (*_DAT_182b4d8c8)();
  return;
}



// ===== continuation @ rva feaa0b7 (image 18feaa0b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feaa0b7(void)

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



// ===== continuation @ rva feaf4da (image 18feaf4da) =====

void FUN_18feaf4da(void)

{
  return;
}



// ===== continuation @ rva feab7f3 (image 18feab7f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feab7f3(void)

{
  FUN_190ddce00();
  (*_DAT_182b4ebb8)();
  return;
}



// ===== continuation @ rva feb224f (image 18feb224f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feb224f(void)

{
  FUN_190dd72e0();
  (*_DAT_182b4e1c8)();
  return;
}



// ===== continuation @ rva feb21d2 (image 18feb21d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feb21d2(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b4e488)();
  return;
}



// ===== continuation @ rva feb2caf (image 18feb2caf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feb2caf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182b4f938)();
  return;
}



// ===== continuation @ rva feaffbd (image 18feaffbd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feaffbd(void)

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



// ===== continuation @ rva feb2d0e (image 18feb2d0e) =====

void FUN_18feb2d0e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva feaf733 (image 18feaf733) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feaf733(void)

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



// ===== continuation @ rva feb23dc (image 18feb23dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feb23dc(void)

{
  FUN_190dd9df0();
  (*_DAT_182b4ea68)();
  return;
}



// ===== continuation @ rva feb235f (image 18feb235f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feb235f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b4f008)();
  return;
}



// ===== continuation @ rva feaeff3 (image 18feaeff3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaeff3(void)

{
  (*_DAT_182b4f898)();
  return;
}



// ===== continuation @ rva feb2834 (image 18feb2834) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feb2834(void)

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



// ===== continuation @ rva feaffe9 (image 18feaffe9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feaffe9(void)

{
  (*_DAT_182b4f648)();
  return;
}



// ===== continuation @ rva fe7076d (image 18fe7076d) =====

void FUN_18fe7076d(void)

{
  return;
}



// ===== continuation @ rva fe6c96a (image 18fe6c96a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe6c96a(void)

{
  FUN_190ddce00();
  (*_DAT_182b40108)();
  return;
}



// ===== continuation @ rva fe707d9 (image 18fe707d9) =====

void FUN_18fe707d9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe6f71d (image 18fe6f71d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6f71d(void)

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



// ===== continuation @ rva fe7075e (image 18fe7075e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7075e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182b40758)();
  return;
}



// ===== continuation @ rva fe6fe43 (image 18fe6fe43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6fe43(void)

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



// ===== continuation @ rva fe6c99d (image 18fe6c99d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6c99d(void)

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



// ===== continuation @ rva fe6fc5e (image 18fe6fc5e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe6fc5e(void)

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



// ===== continuation @ rva fe700b7 (image 18fe700b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe700b7(void)

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



// ===== continuation @ rva fe706c6 (image 18fe706c6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe706c6(void)

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



// ===== continuation @ rva fe70418 (image 18fe70418) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe70418(void)

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



// ===== continuation @ rva fe7142f (image 18fe7142f) =====

void FUN_18fe7142f(void)

{
  return;
}



// ===== continuation @ rva fe70955 (image 18fe70955) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe70955(void)

{
  FUN_190ddfc90();
  (*_DAT_182b41628)();
  return;
}



// ===== continuation @ rva fe7145e (image 18fe7145e) =====

void FUN_18fe7145e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe70bb1 (image 18fe70bb1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe70bb1(void)

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



// ===== continuation @ rva fe70d18 (image 18fe70d18) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe70d18(void)

{
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float fStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  fStack0000000000000050 = (unaff_XMM6_Da + _DAT_182654808) - unaff_XMM8_Da;
  uStack0000000000000058 = 0x41000000;
  uStack0000000000000060 = 0x41400000;
  (*_DAT_182b41518)();
  return;
}



// ===== continuation @ rva fe712db (image 18fe712db) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe712db(void)

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



// ===== continuation @ rva fe70a4c (image 18fe70a4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe70a4c(void)

{
  FUN_190dd9df0();
  (*_DAT_182b414d8)();
  return;
}



// ===== continuation @ rva fe71409 (image 18fe71409) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe71409(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b41798)();
  return;
}



// ===== continuation @ rva fe70f3d (image 18fe70f3d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe70f3d(void)

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



// ===== continuation @ rva fe70fc2 (image 18fe70fc2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe70fc2(void)

{
  FUN_190dd9df0();
  (*_DAT_182b417a8)();
  return;
}



// ===== continuation @ rva fe7115e (image 18fe7115e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7115e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b41698)();
  return;
}



// ===== continuation @ rva fe71cf1 (image 18fe71cf1) =====

void FUN_18fe71cf1(void)

{
  return;
}



// ===== continuation @ rva fe71597 (image 18fe71597) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe71597(void)

{
  FUN_190ddfc90();
  (*_DAT_182b41918)();
  return;
}



// ===== continuation @ rva fe71658 (image 18fe71658) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe71658(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184494690();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe71604 (image 18fe71604) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe71604(void)

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



// ===== continuation @ rva fe71ca6 (image 18fe71ca6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe71ca6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_182b41aa8)();
  return;
}



// ===== continuation @ rva fe71aa6 (image 18fe71aa6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe71aa6(void)

{
  char cVar1;
  longlong *unaff_RSI;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  fStack0000000000000048 = unaff_XMM10_Da + unaff_XMM9_Da;
  uStack0000000000000050 = 0x41200000;
  uStack0000000000000058 = 0x41200000;
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



// ===== continuation @ rva fe717e9 (image 18fe717e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe717e9(undefined4 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000028;
  
  (**(code **)(*unaff_RSI + 0x448))(param_1,in_stack_00000028);
  (*_DAT_182b419b8)();
  return;
}



// ===== continuation @ rva fe7163d (image 18fe7163d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7163d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b41968)();
  return;
}



// ===== continuation @ rva fe715ee (image 18fe715ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe715ee(void)

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



// ===== continuation @ rva fe71915 (image 18fe71915) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe71915(void)

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



// ===== continuation @ rva fe7189c (image 18fe7189c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7189c(undefined4 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(*unaff_RSI + 0x330))(param_1,in_stack_00000030);
  (*_DAT_182b41a48)();
  return;
}



// ===== continuation @ rva fe76172 (image 18fe76172) =====

void FUN_18fe76172(void)

{
  return;
}



// ===== continuation @ rva fe71ea4 (image 18fe71ea4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe71ea4(void)

{
  FUN_190ddce00();
  (*_DAT_182b41c08)();
  return;
}



// ===== continuation @ rva fe7646f (image 18fe7646f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7646f(void)

{
  (*_DAT_182b42038)();
  return;
}



// ===== continuation @ rva fe762a7 (image 18fe762a7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe762a7(void)

{
  int in_EAX;
  
  switch(in_EAX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe75f8b (image 18fe75f8b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe75f8b(void)

{
  (*_DAT_182b41fb8)();
  return;
}



// ===== continuation @ rva fe75da2 (image 18fe75da2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe75da2(void)

{
  (*_DAT_182b421e8)();
  return;
}



// ===== continuation @ rva fe75d10 (image 18fe75d10) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe75d10(void)

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



// ===== continuation @ rva fe75d47 (image 18fe75d47) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe75d47(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b41e18)();
  return;
}



// ===== continuation @ rva fe75bce (image 18fe75bce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe75bce(void)

{
  FUN_190de3220();
  (*_DAT_182b41ee8)();
  return;
}



// ===== continuation @ rva fe764e2 (image 18fe764e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe764e2(void)

{
  longlong *in_stack_00000060;
  
  (**(code **)(*in_stack_00000060 + 0x78))(in_stack_00000060);
  FUN_190dd72e0(in_stack_00000060,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182b41d08)();
  return;
}



// ===== continuation @ rva fe76325 (image 18fe76325) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe76325(void)

{
  undefined8 in_stack_00000028;
  longlong *in_stack_00000060;
  
  (**(code **)(*in_stack_00000060 + 0x70))(in_stack_00000060,in_stack_00000028,&UNK_182f702a8);
  (*_DAT_182b42008)();
  return;
}



// ===== continuation @ rva fe75f91 (image 18fe75f91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe75f91(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b420d8)();
  return;
}



// ===== continuation @ rva fe75cc6 (image 18fe75cc6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe75cc6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b41d68)();
  return;
}



// ===== continuation @ rva fe7cc0b (image 18fe7cc0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7cc0b(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45088)();
  return;
}



// ===== continuation @ rva fe7cb98 (image 18fe7cb98) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7cb98(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva fe7cce3 (image 18fe7cce3) =====

void FUN_18fe7cce3(void)

{
  return;
}



// ===== continuation @ rva fe7ccab (image 18fe7ccab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7ccab(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b450b8)();
  return;
}



// ===== continuation @ rva fe7cced (image 18fe7cced) =====

void FUN_18fe7cced(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7cc33 (image 18fe7cc33) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7cc33(void)

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



// ===== continuation @ rva fe7cbd1 (image 18fe7cbd1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7cbd1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b450a8)();
  return;
}



// ===== continuation @ rva fe7cbf6 (image 18fe7cbf6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7cbf6(void)

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



// ===== continuation @ rva fe7ccd2 (image 18fe7ccd2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7ccd2(void)

{
  (*_DAT_182b450e8)();
  return;
}



// ===== continuation @ rva fe7cc87 (image 18fe7cc87) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7cc87(void)

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



// ===== continuation @ rva fe7ce0e (image 18fe7ce0e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7ce0e(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45178)();
  return;
}



// ===== continuation @ rva fe7cd9b (image 18fe7cd9b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7cd9b(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva fe7cee6 (image 18fe7cee6) =====

void FUN_18fe7cee6(void)

{
  return;
}



// ===== continuation @ rva fe7ceae (image 18fe7ceae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7ceae(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x378))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b451b8)();
  return;
}



// ===== continuation @ rva fe7cef3 (image 18fe7cef3) =====

void FUN_18fe7cef3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7ce36 (image 18fe7ce36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7ce36(void)

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



// ===== continuation @ rva fe7cdd4 (image 18fe7cdd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7cdd4(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b45198)();
  return;
}



// ===== continuation @ rva fe7cdf9 (image 18fe7cdf9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7cdf9(void)

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



// ===== continuation @ rva fe7ce8a (image 18fe7ce8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7ce8a(void)

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



// ===== continuation @ rva fe7ced5 (image 18fe7ced5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7ced5(void)

{
  (*_DAT_182b451d8)();
  return;
}



// ===== continuation @ rva fe7d01b (image 18fe7d01b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d01b(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45238)();
  return;
}



// ===== continuation @ rva fe7cfa8 (image 18fe7cfa8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7cfa8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva fe7d0fd (image 18fe7d0fd) =====

void FUN_18fe7d0fd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7d043 (image 18fe7d043) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d043(void)

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



// ===== continuation @ rva fe7d0f3 (image 18fe7d0f3) =====

void FUN_18fe7d0f3(void)

{
  return;
}



// ===== continuation @ rva fe7d006 (image 18fe7d006) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d006(void)

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



// ===== continuation @ rva fe7d0e2 (image 18fe7d0e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d0e2(void)

{
  (*_DAT_182b452a8)();
  return;
}



// ===== continuation @ rva fe7d097 (image 18fe7d097) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d097(void)

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



// ===== continuation @ rva fe7d0bb (image 18fe7d0bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d0bb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b45268)();
  return;
}



// ===== continuation @ rva fe7d064 (image 18fe7d064) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d064(void)

{
  FUN_190dd9df0();
  (*_DAT_182b45278)();
  return;
}



// ===== continuation @ rva fe7d21b (image 18fe7d21b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d21b(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45398)();
  return;
}



// ===== continuation @ rva fe7d1a8 (image 18fe7d1a8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d1a8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva fe7d2fd (image 18fe7d2fd) =====

void FUN_18fe7d2fd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7d297 (image 18fe7d297) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d297(void)

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



// ===== continuation @ rva fe7d206 (image 18fe7d206) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d206(void)

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



// ===== continuation @ rva fe7d2e2 (image 18fe7d2e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d2e2(void)

{
  (*_DAT_182b45348)();
  return;
}



// ===== continuation @ rva fe7d2f3 (image 18fe7d2f3) =====

void FUN_18fe7d2f3(void)

{
  return;
}



// ===== continuation @ rva fe7d1e1 (image 18fe7d1e1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d1e1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b45328)();
  return;
}



// ===== continuation @ rva fe7d2bb (image 18fe7d2bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d2bb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b45338)();
  return;
}



// ===== continuation @ rva fe7d41e (image 18fe7d41e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d41e(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45428)();
  return;
}



// ===== continuation @ rva fe7d3ab (image 18fe7d3ab) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d3ab(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva fe7d503 (image 18fe7d503) =====

void FUN_18fe7d503(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7d4f6 (image 18fe7d4f6) =====

void FUN_18fe7d4f6(void)

{
  return;
}



// ===== continuation @ rva fe7d409 (image 18fe7d409) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d409(void)

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



// ===== continuation @ rva fe7d3e4 (image 18fe7d3e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d3e4(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b45408)();
  return;
}



// ===== continuation @ rva fe7d446 (image 18fe7d446) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d446(void)

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



// ===== continuation @ rva fe7d4be (image 18fe7d4be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d4be(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x378))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182b45478)();
  return;
}



// ===== continuation @ rva fe7d467 (image 18fe7d467) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d467(void)

{
  FUN_190dd9df0();
  (*_DAT_182b45468)();
  return;
}



// ===== continuation @ rva fe7d626 (image 18fe7d626) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d626(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45548)();
  return;
}



// ===== continuation @ rva fe7d5b3 (image 18fe7d5b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d5b3(void)

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



// ===== continuation @ rva fe7d6fe (image 18fe7d6fe) =====

void FUN_18fe7d6fe(void)

{
  return;
}



// ===== continuation @ rva fe7d66f (image 18fe7d66f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d66f(void)

{
  FUN_190dd9df0();
  (*_DAT_182b45528)();
  return;
}



// ===== continuation @ rva fe7d5ec (image 18fe7d5ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d5ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b45558)();
  return;
}



// ===== continuation @ rva fe7d706 (image 18fe7d706) =====

void FUN_18fe7d706(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7d6c6 (image 18fe7d6c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d6c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b45538)();
  return;
}



// ===== continuation @ rva fe7d6a2 (image 18fe7d6a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d6a2(void)

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



// ===== continuation @ rva fe7d6ed (image 18fe7d6ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d6ed(void)

{
  (*_DAT_182b454f8)();
  return;
}



// ===== continuation @ rva fe7d826 (image 18fe7d826) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d826(void)

{
  FUN_190dd72e0();
  (*_DAT_182b455d8)();
  return;
}



// ===== continuation @ rva fe7d7b3 (image 18fe7d7b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d7b3(void)

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



// ===== continuation @ rva fe7d906 (image 18fe7d906) =====

void FUN_18fe7d906(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7d8fe (image 18fe7d8fe) =====

void FUN_18fe7d8fe(void)

{
  return;
}



// ===== continuation @ rva fe7d8a2 (image 18fe7d8a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d8a2(void)

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



// ===== continuation @ rva fe7d84e (image 18fe7d84e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d84e(void)

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



// ===== continuation @ rva fe7d811 (image 18fe7d811) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7d811(void)

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



// ===== continuation @ rva fe7d86f (image 18fe7d86f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d86f(void)

{
  FUN_190dd9df0();
  (*_DAT_182b455c8)();
  return;
}



// ===== continuation @ rva fe7d8ed (image 18fe7d8ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d8ed(void)

{
  (*_DAT_182b455b8)();
  return;
}



// ===== continuation @ rva fe7da26 (image 18fe7da26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7da26(void)

{
  FUN_190dd72e0();
  (*_DAT_182b456b8)();
  return;
}



// ===== continuation @ rva fe7d9b3 (image 18fe7d9b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d9b3(void)

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



// ===== continuation @ rva fe7db04 (image 18fe7db04) =====

void FUN_18fe7db04(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7dafc (image 18fe7dafc) =====

void FUN_18fe7dafc(void)

{
  return;
}



// ===== continuation @ rva fe7da4e (image 18fe7da4e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7da4e(void)

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



// ===== continuation @ rva fe7da6f (image 18fe7da6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7da6f(void)

{
  FUN_190dd9df0();
  (*_DAT_182b45718)();
  return;
}



// ===== continuation @ rva fe7dac6 (image 18fe7dac6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7dac6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b456f8)();
  return;
}



// ===== continuation @ rva fe7d9ec (image 18fe7d9ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7d9ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b45708)();
  return;
}



// ===== continuation @ rva fe7daec (image 18fe7daec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7daec(void)

{
  (*_DAT_182b45698)(0);
  return;
}



// ===== continuation @ rva fe7dc31 (image 18fe7dc31) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7dc31(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45798)();
  return;
}



// ===== continuation @ rva fe7dbb8 (image 18fe7dbb8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7dbb8(undefined4 param_1)

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



// ===== continuation @ rva fe7dd0e (image 18fe7dd0e) =====

void FUN_18fe7dd0e(void)

{
  return;
}



// ===== continuation @ rva fe7dbf4 (image 18fe7dbf4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7dbf4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b45788)();
  return;
}



// ===== continuation @ rva fe7dd1b (image 18fe7dd1b) =====

void FUN_18fe7dd1b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7dc19 (image 18fe7dc19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7dc19(void)

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



// ===== continuation @ rva fe7dc59 (image 18fe7dc59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7dc59(void)

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



// ===== continuation @ rva fe7dcb0 (image 18fe7dcb0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7dcb0(void)

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



// ===== continuation @ rva fe7dc7d (image 18fe7dc7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7dc7d(void)

{
  FUN_190dd9df0();
  (*_DAT_182b457b8)();
  return;
}



// ===== continuation @ rva fe7de36 (image 18fe7de36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7de36(void)

{
  FUN_190dd72e0();
  (*_DAT_182b45898)();
  return;
}



// ===== continuation @ rva fe7ddc3 (image 18fe7ddc3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7ddc3(void)

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



// ===== continuation @ rva fe7df0c (image 18fe7df0c) =====

void FUN_18fe7df0c(void)

{
  return;
}



// ===== continuation @ rva fe7ded6 (image 18fe7ded6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7ded6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b458d8)();
  return;
}



// ===== continuation @ rva fe7df14 (image 18fe7df14) =====

void FUN_18fe7df14(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe7deb2 (image 18fe7deb2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7deb2(void)

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



// ===== continuation @ rva fe7de5e (image 18fe7de5e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe7de5e(void)

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



// ===== continuation @ rva fe7de7f (image 18fe7de7f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7de7f(void)

{
  FUN_190dd9df0();
  (*_DAT_182b45878)();
  return;
}



// ===== continuation @ rva fe7ddfc (image 18fe7ddfc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe7ddfc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b458c8)();
  return;
}



// ===== continuation @ rva fe82826 (image 18fe82826) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82826(void)

{
  FUN_190dd72e0();
  (*_DAT_182b46cb8)();
  return;
}



// ===== continuation @ rva fe827b3 (image 18fe827b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe827b3(void)

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



// ===== continuation @ rva fe82904 (image 18fe82904) =====

void FUN_18fe82904(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe828a2 (image 18fe828a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe828a2(void)

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



// ===== continuation @ rva fe828ec (image 18fe828ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe828ec(void)

{
  (*_DAT_182b46c88)(0);
  return;
}



// ===== continuation @ rva fe82811 (image 18fe82811) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82811(void)

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



// ===== continuation @ rva fe828fc (image 18fe828fc) =====

void FUN_18fe828fc(void)

{
  return;
}



// ===== continuation @ rva fe827ec (image 18fe827ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe827ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b46c68)();
  return;
}



// ===== continuation @ rva fe8286f (image 18fe8286f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8286f(void)

{
  FUN_190dd9df0();
  (*_DAT_182b46c48)();
  return;
}



// ===== continuation @ rva fe82a31 (image 18fe82a31) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82a31(void)

{
  FUN_190dd72e0();
  (*_DAT_182b46d58)();
  return;
}



// ===== continuation @ rva fe829b8 (image 18fe829b8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe829b8(undefined4 param_1)

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



// ===== continuation @ rva fe82b0e (image 18fe82b0e) =====

void FUN_18fe82b0e(void)

{
  return;
}



// ===== continuation @ rva fe82a7d (image 18fe82a7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82a7d(void)

{
  FUN_190dd9df0();
  (*_DAT_182b46d88)();
  return;
}



// ===== continuation @ rva fe82ad7 (image 18fe82ad7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82ad7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b46d78)();
  return;
}



// ===== continuation @ rva fe82b1b (image 18fe82b1b) =====

void FUN_18fe82b1b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe82a19 (image 18fe82a19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82a19(void)

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



// ===== continuation @ rva fe82a59 (image 18fe82a59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82a59(void)

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



// ===== continuation @ rva fe829f4 (image 18fe829f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe829f4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b46d48)();
  return;
}



// ===== continuation @ rva fe82afe (image 18fe82afe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82afe(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182b46da8)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva fe82ab0 (image 18fe82ab0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82ab0(void)

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



// ===== continuation @ rva fe82c41 (image 18fe82c41) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82c41(void)

{
  FUN_190dd72e0();
  (*_DAT_182b46e18)();
  return;
}



// ===== continuation @ rva fe82bc8 (image 18fe82bc8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82bc8(undefined4 param_1)

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



// ===== continuation @ rva fe82d2b (image 18fe82d2b) =====

void FUN_18fe82d2b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe82d0e (image 18fe82d0e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82d0e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182b46e28)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva fe82c69 (image 18fe82c69) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82c69(void)

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



// ===== continuation @ rva fe82d1e (image 18fe82d1e) =====

void FUN_18fe82d1e(void)

{
  return;
}



// ===== continuation @ rva fe82c8d (image 18fe82c8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82c8d(void)

{
  FUN_190dd9df0();
  (*_DAT_182b46e48)();
  return;
}



// ===== continuation @ rva fe82cc0 (image 18fe82cc0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82cc0(void)

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



// ===== continuation @ rva fe82ce7 (image 18fe82ce7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82ce7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b46e08)();
  return;
}



// ===== continuation @ rva fe82e51 (image 18fe82e51) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82e51(void)

{
  FUN_190dd72e0();
  (*_DAT_182b46f48)();
  return;
}



// ===== continuation @ rva fe82dd8 (image 18fe82dd8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82dd8(undefined4 param_1)

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



// ===== continuation @ rva fe82f2e (image 18fe82f2e) =====

void FUN_18fe82f2e(void)

{
  return;
}



// ===== continuation @ rva fe82e9d (image 18fe82e9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82e9d(void)

{
  FUN_190dd9df0();
  (*_DAT_182b46ef8)();
  return;
}



// ===== continuation @ rva fe82f3b (image 18fe82f3b) =====

void FUN_18fe82f3b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe82ed0 (image 18fe82ed0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82ed0(void)

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



// ===== continuation @ rva fe82e14 (image 18fe82e14) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82e14(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b46f38)();
  return;
}



// ===== continuation @ rva fe82f1e (image 18fe82f1e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82f1e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182b46f58)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva fe82e39 (image 18fe82e39) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82e39(void)

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



// ===== continuation @ rva fe82e79 (image 18fe82e79) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe82e79(void)

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



// ===== continuation @ rva fe83056 (image 18fe83056) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83056(void)

{
  FUN_190dd72e0();
  (*_DAT_182b47028)();
  return;
}



// ===== continuation @ rva fe82fe3 (image 18fe82fe3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe82fe3(void)

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



// ===== continuation @ rva fe83134 (image 18fe83134) =====

void FUN_18fe83134(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe83041 (image 18fe83041) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83041(void)

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



// ===== continuation @ rva fe8312c (image 18fe8312c) =====

void FUN_18fe8312c(void)

{
  return;
}



// ===== continuation @ rva fe8309f (image 18fe8309f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8309f(void)

{
  FUN_190dd9df0();
  (*_DAT_182b46ff8)();
  return;
}



// ===== continuation @ rva fe830d2 (image 18fe830d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe830d2(void)

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



// ===== continuation @ rva fe8301c (image 18fe8301c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8301c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b46fc8)();
  return;
}



// ===== continuation @ rva fe8311c (image 18fe8311c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe8311c(void)

{
  (*_DAT_182b46fd8)(0);
  return;
}



// ===== continuation @ rva fe8307e (image 18fe8307e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe8307e(void)

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



// ===== continuation @ rva fe83270 (image 18fe83270) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83270(void)

{
  FUN_190dd72e0();
  (*_DAT_182b470a8)();
  return;
}



// ===== continuation @ rva fe831fd (image 18fe831fd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe831fd(void)

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



// ===== continuation @ rva fe83c2b (image 18fe83c2b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83c2b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b473e8)();
  return;
}



// ===== continuation @ rva fe83298 (image 18fe83298) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83298(void)

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



// ===== continuation @ rva fe83c60 (image 18fe83c60) =====

void FUN_18fe83c60(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe83658 (image 18fe83658) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83658(void)

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



// ===== continuation @ rva fe83610 (image 18fe83610) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83610(void)

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



// ===== continuation @ rva fe83c54 (image 18fe83c54) =====

void FUN_18fe83c54(void)

{
  return;
}



// ===== continuation @ rva fe83a86 (image 18fe83a86) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83a86(void)

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



// ===== continuation @ rva fe834c7 (image 18fe834c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe834c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b47388)();
  return;
}



// ===== continuation @ rva fe83534 (image 18fe83534) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83534(void)

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



// ===== continuation @ rva fe83576 (image 18fe83576) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83576(void)

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



// ===== continuation @ rva fe83e14 (image 18fe83e14) =====

void FUN_18fe83e14(void)

{
  return;
}



// ===== continuation @ rva fe83d6d (image 18fe83d6d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83d6d(void)

{
  FUN_190ddce00();
  (*_DAT_182b47558)();
  return;
}



// ===== continuation @ rva fe83e1c (image 18fe83e1c) =====

void FUN_18fe83e1c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe83e02 (image 18fe83e02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83e02(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b47568)();
  return;
}



// ===== continuation @ rva fe83de5 (image 18fe83de5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83de5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (*_DAT_182b47538)();
  return;
}



// ===== continuation @ rva fe83da0 (image 18fe83da0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83da0(void)

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



// ===== continuation @ rva fe83dc4 (image 18fe83dc4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83dc4(void)

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



// ===== continuation @ rva fe83e4a (image 18fe83e4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83e4a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182b475b8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva fe83e56 (image 18fe83e56) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe83e56(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva fe83e73 (image 18fe83e73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe83e73(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_182b475a8)();
  return;
}



// ===== continuation @ rva fe83e7c (image 18fe83e7c) =====

void FUN_18fe83e7c(void)

{
  return;
}



