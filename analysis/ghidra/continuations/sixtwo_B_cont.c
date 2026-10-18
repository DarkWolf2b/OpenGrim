// ===== continuation @ rva 1071ffa0 (image 19071ffa0) =====

void FUN_19071ffa0(void)

{
  return;
}



// ===== continuation @ rva 107127eb (image 1907127eb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907127eb(void)

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



// ===== continuation @ rva 10717eda (image 190717eda) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190717eda(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000050;
  undefined1 uStack0000000000000095;
  
  uStack0000000000000095 = in_stack_00000050;
  (**(code **)(*unaff_RSI + 0x680))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10717e8f (image 190717e8f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190717e8f(void)

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



// ===== continuation @ rva 10712a3c (image 190712a3c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190712a3c(void)

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



// ===== continuation @ rva 10714d96 (image 190714d96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190714d96(void)

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



// ===== continuation @ rva 107169ee (image 1907169ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907169ee(void)

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



// ===== continuation @ rva 10715fbb (image 190715fbb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190715fbb(void)

{
  ulonglong uVar1;
  uint unaff_EBP;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong unaff_XMM10_Qa;
  uint unaff_XMM15_Da;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_000000a8;
  longlong in_stack_00000100;
  
  uStack0000000000000030 = in_stack_000000a8;
  uVar2 = (ulonglong)unaff_EBP;
  uVar1 = (~_DAT_1834749b0 + 2) *
          ((_DAT_1834747b8 ^ uVar2 ^ 0x84222325) +
          (ulonglong)((uint)(uVar2 ^ 0x84222325) & (uint)_DAT_1834747b8) * 2);
  uVar1 = (uVar1 | _DAT_1834744d8) + (uVar1 & _DAT_1834744d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1834746c8 =
       func_0x000190720180((uVar2 ^ 0x84222324 | uVar1) +
                           (ulonglong)((uint)(uVar2 ^ 0x84222324) & (uint)uVar1));
  uVar4 = unaff_EBP & _DAT_18001a990;
  uVar5 = unaff_EBP ^ _DAT_18001a990;
  lVar3 = ((ulonglong)unaff_EBP * (ulonglong)_DAT_182d33930 << 0x20) +
          (ulonglong)unaff_EBP * (ulonglong)_DAT_182d33920;
  uVar1 = ((((ulonglong)uVar5 * (ulonglong)_DAT_182d33910 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_182d33900 +
            ((ulonglong)(unaff_EBP | _DAT_18001a990) * (ulonglong)_DAT_182d338f0 << 0x20) +
            (ulonglong)(unaff_EBP | _DAT_18001a990) * (ulonglong)_DAT_182d338e0 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_182d338d0 << 0x20 |
            (ulonglong)uVar4 * (ulonglong)_DAT_182d338c0) +
            ((ulonglong)unaff_EBP * (ulonglong)_DAT_182d338b0 << 0x20) +
            (ulonglong)unaff_EBP * (ulonglong)_DAT_182d338a0 + lVar3) -
          (((uVar2 ^ unaff_XMM10_Qa) & 0xffffffff) * (ulonglong)unaff_XMM15_Da +
           (((uVar2 ^ unaff_XMM10_Qa) & 0xffffffff) * (ulonglong)_DAT_182d339b0 +
            (unaff_XMM10_Qa >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
           ((ulonglong)uVar5 * (ulonglong)_DAT_182d33990 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_182d33980 +
           ((ulonglong)uVar4 * (ulonglong)_DAT_182d33970 << 0x20 |
           (ulonglong)uVar4 * (ulonglong)_DAT_182d33960) +
           ((ulonglong)unaff_EBP * (ulonglong)_DAT_182d33950 << 0x20) +
           (ulonglong)unaff_EBP * (ulonglong)_DAT_182d33940 + lVar3)) + 0x8fda35f44f84fb1e;
  _DAT_1834744c8 = _DAT_183474ac8 ^ _DAT_1834746c8 ^ uVar1;
  _DAT_183474880 = (_DAT_183474880 ^ _DAT_1834746c8) + uVar1 ^ 0x86245a473663f6fb;
  _DAT_1834745d8 = (_DAT_1834745d8 * -0x17138bf866cb1949 ^ _DAT_183474880) + _DAT_1834746c8;
  _DAT_183474980 = _DAT_1834745d8 ^ _DAT_183474880;
  _DAT_183474a10 = uVar1 & 0xffffffff;
  switch(in_stack_00000100 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10714e83 (image 190714e83) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190714e83(void)

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



// ===== continuation @ rva 10716961 (image 190716961) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190716961(void)

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



// ===== continuation @ rva 10712567 (image 190712567) =====

void FUN_190712567(void)

{
  return;
}



// ===== continuation @ rva 107004f9 (image 1907004f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907004f9(void)

{
  FUN_190ddce00();
  (*_DAT_182d2eb28)();
  return;
}



// ===== continuation @ rva 10707a55 (image 190707a55) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190707a55(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190de3220(in_stack_00000038,&stack0x00000048,*_DAT_18301ee50 + 0x261,*_DAT_18301ee50 + 0x268,
                0x10);
  (*_DAT_182d2e738)();
  return;
}



// ===== continuation @ rva 10707f03 (image 190707f03) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190707f03(void)

{
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x2e9,0x12);
  (**(code **)(*in_stack_00000038 + 0x720))(in_stack_00000038);
  (*_DAT_182d2ec28)();
  return;
}



// ===== continuation @ rva 10708970 (image 190708970) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190708970(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190ddfc90(in_stack_00000038,&stack0x00000048,*_DAT_18301ee50 + 0x21c7,*_DAT_18301ee50 + 0x21cb
                ,0x133);
  (*_DAT_182d2f088)();
  return;
}



// ===== continuation @ rva 107125d3 (image 1907125d3) =====

void FUN_1907125d3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10710396 (image 190710396) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190710396(void)

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



// ===== continuation @ rva 10708a3d (image 190708a3d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190708a3d(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x1c8))(in_stack_00000038);
  (*_DAT_182d2ea98)();
  return;
}



// ===== continuation @ rva 107089e6 (image 1907089e6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907089e6(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50,0);
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



// ===== continuation @ rva 10712556 (image 190712556) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190712556(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_182d2f528)();
  return;
}



// ===== continuation @ rva 107101e0 (image 1907101e0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907101e0(void)

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



// ===== continuation @ rva 1070a7bb (image 19070a7bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19070a7bb(void)

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



// ===== continuation @ rva 10700011 (image 190700011) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190700011(void)

{
  FUN_190dd72e0();
  (*_DAT_182d2ca88)();
  return;
}



// ===== continuation @ rva 106fff93 (image 1906fff93) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1906fff93(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d2cb18)();
  return;
}



// ===== continuation @ rva 10700348 (image 190700348) =====

void FUN_190700348(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1070028f (image 19070028f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19070028f(void)

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



// ===== continuation @ rva 10700340 (image 190700340) =====

void FUN_190700340(void)

{
  return;
}



// ===== continuation @ rva 10700213 (image 190700213) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190700213(void)

{
  FUN_190dd72e0();
  (*_DAT_182d2cac8)();
  return;
}



// ===== continuation @ rva 107001d2 (image 1907001d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907001d2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x378))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d2cba8)();
  return;
}



// ===== continuation @ rva 10700141 (image 190700141) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190700141(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d2cb78)();
  return;
}



// ===== continuation @ rva 10700039 (image 190700039) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190700039(void)

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



// ===== continuation @ rva 1070008d (image 19070008d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19070008d(void)

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



// ===== continuation @ rva 107000b1 (image 1907000b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907000b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x378))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d2caf8)();
  return;
}



// ===== continuation @ rva 107250c0 (image 1907250c0) =====

void FUN_1907250c0(void)

{
  return;
}



// ===== continuation @ rva 1072031e (image 19072031e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072031e(void)

{
  FUN_190ddce00();
  (*_DAT_182d34998)();
  return;
}



// ===== continuation @ rva 1072b476 (image 19072b476) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19072b476(void)

{
  int in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10722e92 (image 190722e92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190722e92(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d34688)();
  return;
}



// ===== continuation @ rva 10722d36 (image 190722d36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190722d36(void)

{
  FUN_190dd72e0();
  (*_DAT_182d344a8)();
  return;
}



// ===== continuation @ rva 10723e59 (image 190723e59) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190723e59(void)

{
  (*_DAT_182d36d98)();
  return;
}



// ===== continuation @ rva 1072cd1e (image 19072cd1e) =====

void FUN_19072cd1e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10723851 (image 190723851) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190723851(void)

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



// ===== continuation @ rva 1072502f (image 19072502f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19072502f(void)

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



// ===== continuation @ rva 1072cd0b (image 19072cd0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072cd0b(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x68))();
  (*_DAT_182d36ec8)();
  return;
}



// ===== continuation @ rva 10722db2 (image 190722db2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190722db2(void)

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



// ===== continuation @ rva 10723560 (image 190723560) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190723560(void)

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



// ===== continuation @ rva 1072cee1 (image 19072cee1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072cee1(void)

{
  FUN_190dd72e0();
  (*_DAT_182d381b8)();
  return;
}



// ===== continuation @ rva 1072ce68 (image 19072ce68) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072ce68(undefined4 param_1)

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



// ===== continuation @ rva 1072cfd3 (image 19072cfd3) =====

void FUN_19072cfd3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1072cfb6 (image 19072cfb6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072cfb6(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182d38208)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 1072cf09 (image 19072cf09) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19072cf09(void)

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



// ===== continuation @ rva 1072cfc6 (image 19072cfc6) =====

void FUN_19072cfc6(void)

{
  return;
}



// ===== continuation @ rva 1072cf87 (image 19072cf87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072cf87(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x378))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d381a8)();
  return;
}



// ===== continuation @ rva 1072cf2d (image 19072cf2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072cf2d(void)

{
  FUN_190dd9df0();
  (*_DAT_182d38218)();
  return;
}



// ===== continuation @ rva 1072cec9 (image 19072cec9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19072cec9(void)

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



// ===== continuation @ rva 1072d0f6 (image 19072d0f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072d0f6(void)

{
  FUN_190dd72e0();
  (*_DAT_182d38318)();
  return;
}



// ===== continuation @ rva 1072d083 (image 19072d083) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072d083(void)

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



// ===== continuation @ rva 1072d2e1 (image 19072d2e1) =====

void FUN_19072d2e1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1072d172 (image 19072d172) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19072d172(void)

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



// ===== continuation @ rva 1072d2d9 (image 19072d2d9) =====

void FUN_19072d2d9(void)

{
  return;
}



// ===== continuation @ rva 1072d25b (image 19072d25b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072d25b(void)

{
  FUN_190dd9df0();
  (*_DAT_182d38338)();
  return;
}



// ===== continuation @ rva 1072d1e8 (image 19072d1e8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072d1e8(void)

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



// ===== continuation @ rva 1072d13f (image 19072d13f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072d13f(void)

{
  FUN_190dd9df0();
  (*_DAT_182d38288)();
  return;
}



// ===== continuation @ rva 1072d1bd (image 19072d1bd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19072d1bd(void)

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



// ===== continuation @ rva 1072d1d2 (image 19072d1d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19072d1d2(void)

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



// ===== continuation @ rva 1072d4f6 (image 19072d4f6) =====

void FUN_19072d4f6(void)

{
  uint uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = (**(code **)(*unaff_RBX + 0x558))();
  *(uint *)(unaff_RBP + 0x40) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x48) = *(undefined8 *)(unaff_RBP + 0x40);
  *(longlong **)(unaff_RBP + 0x20) = unaff_RBX;
                    /* WARNING: Could not recover jumptable at 0x00019072d525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d38920 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 1072d4a3 (image 19072d4a3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00019072d4d9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19072d4a3(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 1074313a (image 19074313a) =====

void FUN_19074313a(void)

{
  return;
}



// ===== continuation @ rva 10742f60 (image 190742f60) =====

undefined8 thunk_FUN_19072d4dc(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva 10731a9a (image 190731a9a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190731ef7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190731a9a(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  uint uVar4;
  uint uVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 unaff_XMM6 [16];
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  auVar5 = pshufb(in_XMM0,_DAT_1800170c0);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar1 = uVar3 + _DAT_1834754f8;
  if (auVar5._4_4_ < 0) {
    uVar1 = _DAT_183475170 ^ uVar3;
  }
  _DAT_183475360 = func_0x000190757f00(in_XMM0[5] ^ uVar1);
  uVar6 = (uint)(unaff_RSI >> 0x20);
  auVar7._8_4_ = (int)unaff_RSI;
  auVar7._0_8_ = unaff_RSI;
  auVar7._12_4_ = uVar6;
  uVar10 = unaff_XMM6._0_4_;
  uVar12 = unaff_XMM6._4_4_;
  auVar5._0_8_ = unaff_XMM6._0_8_;
  auVar5._8_4_ = uVar10;
  auVar5._12_4_ = uVar12;
  uVar14 = SUB164(auVar7 & auVar5,0);
  uVar3 = SUB168(auVar7 & auVar5,0);
  auVar15._8_4_ = 0xffffffff;
  auVar15._0_8_ = 0xffffffffffffffff;
  auVar15._12_4_ = 0xffffffff;
  uVar9 = SUB164(auVar7 | auVar5,0);
  uVar4 = SUB164(auVar7 ^ auVar15,0);
  uVar13 = SUB168(auVar7 ^ auVar15,0);
  uVar8 = SUB164(auVar7 ^ auVar5,0);
  uVar11 = SUB164(unaff_XMM6 ^ _DAT_18001a710,0);
  uVar1 = _DAT_183475360 << 0xf | (_DAT_183475360 & 0x3fffffffffffffff) >> 0x31;
  _DAT_183475268 =
       (((ulonglong)_DAT_182d39a00 * (ulonglong)uVar4 +
         ((ulonglong)_DAT_182d39a30 * (ulonglong)uVar4 +
          (uVar13 >> 0x20) * (ulonglong)_DAT_182d39a00 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)_DAT_182d39a20 +
         ((SUB168(auVar7 | auVar5,0) >> 0x20) * (ulonglong)_DAT_182d39a20 +
          (ulonglong)_DAT_182d39a10 * (ulonglong)uVar9 << 0x20) +
        (ulonglong)uVar14 * (ulonglong)_DAT_182d39a20 +
        ((uVar3 >> 0x20) * (ulonglong)_DAT_182d39a20 + (ulonglong)uVar14 * (ulonglong)_DAT_182d39a10
        << 0x20) +
        ((ulonglong)_DAT_182d399d0 * (unaff_RSI & 0xffffffff) +
         (ulonglong)_DAT_182d399c0 * (ulonglong)uVar6 << 0x20) +
        (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_182d399c0 +
        ((ulonglong)_DAT_182d399f0 * (ulonglong)uVar10 +
         (ulonglong)_DAT_182d399e0 * (ulonglong)uVar12 << 0x20) +
        (ulonglong)uVar10 * (ulonglong)_DAT_182d399e0) -
       ((ulonglong)uVar11 * (_DAT_182d39b00 & 0xffffffff) +
        ((ulonglong)_DAT_182d39b10 * (ulonglong)uVar11 +
         (SUB168(unaff_XMM6 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_182d39b00 & 0xffffffff) << 0x20) +
       (ulonglong)uVar4 * (ulonglong)_DAT_182d39ae0 +
       ((ulonglong)_DAT_182d39af0 * (ulonglong)uVar4 + (uVar13 >> 0x20) * (ulonglong)_DAT_182d39ae0
       << 0x20) +
       (ulonglong)uVar8 * (ulonglong)_DAT_182d39ac0 +
       ((ulonglong)_DAT_182d39ad0 * (ulonglong)uVar8 +
        (SUB168(auVar7 ^ auVar5,0) >> 0x20) * (ulonglong)_DAT_182d39ac0 << 0x20) +
       (ulonglong)uVar14 * (ulonglong)_DAT_182d39aa0 +
       ((ulonglong)_DAT_182d39ab0 * (ulonglong)uVar14 + (uVar3 >> 0x20) * (ulonglong)_DAT_182d39aa0
       << 0x20) +
       ((ulonglong)uVar10 * (ulonglong)_DAT_182d39a90 +
        (ulonglong)uVar12 * (ulonglong)_DAT_182d39a80 << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_182d39a80 +
       ((unaff_RSI & 0xffffffff) * (ulonglong)_DAT_182d39a70 +
        (ulonglong)uVar6 * (ulonglong)_DAT_182d39a60 << 0x20) +
       (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_182d39a60)) + 0x9ed1603f341fab08;
  _DAT_183475600 = _DAT_183475268 ^ uVar1;
  _DAT_183475638 = (_DAT_183475638 ^ uVar1) + _DAT_183475268 ^ 0xdf3390167ec0ae0f;
  _DAT_1834755d8 = (_DAT_1834755d8 * -0x64d392f688e6278f ^ _DAT_183475638) + uVar1;
  _DAT_183475430 = _DAT_1834755d8 ^ _DAT_183475638;
  lVar2 = unaff_RBP + -0x30;
  FUN_18414b520(lVar2);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar2 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x20) + 0x70))
            (*(longlong **)(unaff_RBP + 0x20),*(undefined8 *)(unaff_RBP + 0x10),lVar2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 1072d6e0 (image 19072d6e0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072d6e0(void)

{
  undefined1 auVar1 [16];
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar4;
  ulonglong unaff_R12;
  longlong unaff_R14;
  uint unaff_R15D;
  ulonglong uVar5;
  ulonglong uVar6;
  uint unaff_XMM6_Da;
  uint uVar7;
  uint uVar8;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  undefined1 unaff_XMM13 [16];
  
  _DAT_183475680 = func_0x000190757f00(_DAT_183475270 ^ 0xffdd007ce00021fb);
  uVar3 = (_DAT_183475680 ^ 0x3926) << 1 | _DAT_183475680 >> 0x3f;
  _DAT_1834755f8 = (_DAT_1834755f8 ^ uVar3) + 0xc5 ^ 0xa758c295e55816cf;
  _DAT_183475218 = (_DAT_183475218 * 0x5d578dae46d539d ^ _DAT_1834755f8) + uVar3;
  _DAT_183475320 = _DAT_183475218 ^ _DAT_1834755f8;
  _DAT_183475388 = 0xc5;
  uVar3 = (~_DAT_183475610 + 3) *
          ((_DAT_183475318 ^ unaff_RBX) + (ulonglong)((uint)_DAT_183475318 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1834754b8) + (uVar3 & _DAT_1834754b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183475490 = func_0x000190757f00((uVar3 | 0x84222327) + (ulonglong)((uint)uVar3 & 0x84222327))
  ;
  _DAT_183475280 = (_DAT_183475280 ^ _DAT_183475490) - 2 ^ 0xd3feb7b89ff01ea7;
  _DAT_183475550 = (_DAT_183475550 * -0x1f98a557f14d4527 ^ _DAT_183475280) + _DAT_183475490;
  _DAT_1834756f8 = _DAT_183475550 ^ _DAT_183475280;
  _DAT_183475208 = 0xfe;
  uVar3 = (~_DAT_1834751c8 + 0xff) *
          ((_DAT_183475388 ^ 0x84222317) + (ulonglong)((uint)_DAT_183475388 & 0x84222317) * 2);
  uVar3 = (uVar3 | _DAT_183475328) + (uVar3 & _DAT_183475328);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1834754d0 = func_0x000190757f00((uVar3 | 0x842223e9) + (ulonglong)((uint)uVar3 & 0x842223e9))
  ;
  uVar3 = _DAT_1834754d0 ^ 0xfe;
  _DAT_183475378 = _DAT_1834752a0 ^ uVar3 ^ 0x130;
  _DAT_1834754b8 = (_DAT_1834754b8 ^ uVar3) + 0x130 ^ 0x5f2251c9e34d9a8c;
  _DAT_1834755d8 = (_DAT_1834755d8 * -0x4ec43b3d9b5f28af ^ _DAT_1834754b8) + uVar3;
  _DAT_1834754c8 = _DAT_1834755d8 ^ _DAT_1834754b8;
  _DAT_183475280 = 0x30;
  uVar3 = ((_DAT_183475230 ^ unaff_R12) + (ulonglong)((uint)_DAT_183475230 & 0x84222315) * 2) *
          -_DAT_183475530;
  uVar3 = (uVar3 | _DAT_183475698) + (uVar3 & _DAT_183475698);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183475130 = func_0x000190757f00((uVar3 | unaff_R12) + (ulonglong)((uint)uVar3 & 0x84222315));
  uVar3 = _DAT_183475130 & 0xfffffffffffc0000;
  _DAT_1834751c8 = _DAT_183475138 ^ uVar3 ^ 0x30;
  _DAT_1834754a0 = (_DAT_1834754a0 ^ uVar3) + 0x30 ^ 0x1d60f8508383edae;
  _DAT_183475230 = (_DAT_183475230 * 0x349e1168353ce8e3 ^ _DAT_1834754a0) + uVar3;
  _DAT_183475198 = _DAT_183475230 ^ _DAT_1834754a0;
  _DAT_1834751e0 = 0x30;
  uVar3 = (_DAT_1834751c8 ^ unaff_R12) + _DAT_183475618 + unaff_R12;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1834751c8 ^ unaff_R12;
  uVar5 = ((_DAT_183475618 + _DAT_1834751c8) * 0x2000 | _DAT_183475618 + _DAT_1834751c8 >> 0x33) ^
          _DAT_183475618;
  _DAT_183475408 =
       func_0x000190757f00((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_1834751c8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183475618 + unaff_R12));
  _DAT_183475428 = _DAT_183475378 ^ _DAT_183475408 ^ 0x30;
  _DAT_1834754d0 = (_DAT_1834754d0 ^ _DAT_183475408) + 0x30 ^ 0x392d08a430dee055;
  _DAT_1834751f8 = (_DAT_1834751f8 * -0x44569f51d6330333 ^ _DAT_1834754d0) + _DAT_183475408;
  _DAT_1834755b8 = _DAT_1834751f8 ^ _DAT_1834754d0;
  _DAT_183475450 = 0x30;
  uVar3 = (_DAT_183475400 ^ _DAT_180526ef0) + _DAT_183475468 + unaff_RBX;
  uVar5 = (_DAT_183475468 ^ _UNK_180526ef8) + _DAT_183475400 + 0xec;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183475400 ^ _DAT_180526ef0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183475468 ^ _UNK_180526ef8;
  _DAT_183475348 =
       func_0x000190757f00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475400 + 0xec) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183475468 + unaff_RBX));
  uVar3 = _DAT_183475348 << 0xf | _DAT_183475348 >> 0x31;
  _DAT_183475128 = (_DAT_183475128 ^ uVar3) - 0xec ^ 0x9c58f0dea90d496a;
  _DAT_183475130 = (_DAT_183475130 * 0x7002679b478186ef ^ _DAT_183475128) + uVar3;
  _DAT_1834755f8 = _DAT_183475130 ^ _DAT_183475128;
  _DAT_1834751c8 = 0x14;
  uVar3 = (_DAT_183475360 ^ _DAT_180526f00) + _DAT_1834751d0 + unaff_R12;
  uVar5 = (_DAT_1834751d0 ^ _UNK_180526f08) + _DAT_183475360 + 0xec;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183475360 ^ _DAT_180526f00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834751d0 ^ _UNK_180526f08;
  _DAT_183475188 =
       func_0x000190757f00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475360 + 0xec) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1834751d0 + unaff_R12));
  uVar3 = (ulonglong)(~(uint)_DAT_183475188 & 0x30);
  _DAT_183475240 = _DAT_183475248 ^ uVar3 ^ 0x11c;
  _DAT_183475108 = (_DAT_183475108 ^ uVar3) + 0x11c ^ 0x547e6159ec6ebb;
  _DAT_1834754e0 = (_DAT_1834754e0 * 0x365ddebaf38ed2c1 ^ _DAT_183475108) + uVar3;
  _DAT_183475198 = _DAT_1834754e0 ^ _DAT_183475108;
  _DAT_183475680 = 0x1c;
  _DAT_183475340 = func_0x000190757f00(_DAT_1834754b0 ^ 0xffdd007bf3001d3d);
  uVar3 = _DAT_183475340 << 0x3b | _DAT_183475340 >> 5;
  _DAT_183475618 = _DAT_1834753e0 ^ uVar3 ^ 0x1c4;
  _DAT_1834754e0 = (_DAT_1834754e0 ^ uVar3) + 0x1c4 ^ 0x364ccf5e68aaebc7;
  _DAT_183475280 = (_DAT_183475280 * 0x64e96b2b510a5d1f ^ _DAT_1834754e0) + uVar3;
  _DAT_183475228 = _DAT_183475280 ^ _DAT_1834754e0;
  _DAT_183475278 = 0xc4;
  _DAT_183475338 = func_0x000190757f00(_DAT_183475660 ^ 0xffe3008417002129);
  uVar3 = (_DAT_183475338 ^ 0xc000) & 0xfffffffffffff800;
  _DAT_1834754a8 = (_DAT_1834754a8 ^ uVar3) + 0x3a ^ 0x696f6604e20e5fef;
  _DAT_183475528 = (_DAT_183475528 * 0x7542358e70309ee7 ^ _DAT_1834754a8) + uVar3;
  _DAT_183475468 = _DAT_183475528 ^ _DAT_1834754a8;
  _DAT_183475170 = 0x3a;
  uVar3 = (_DAT_183475218 ^ _DAT_182d39710) + _DAT_183475348 + 0x8422231f;
  uVar5 = (_DAT_183475348 ^ _UNK_182d39718) + _DAT_183475218 + 0x8a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183475218 ^ _DAT_182d39710;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183475348 ^ _UNK_182d39718;
  _DAT_183475608 =
       func_0x000190757f00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475218 + 0x8a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183475348 + 0x8422231f));
  uVar3 = _DAT_183475608 & 0x7fffffffffffffff;
  _DAT_183475300 = _DAT_183475300 ^ uVar3 ^ 0xc4;
  _DAT_183475418 = (_DAT_183475418 ^ uVar3) + 0xc4 ^ 0x5b4d7d1cb38ebd10;
  _DAT_1834752f0 = (_DAT_1834752f0 * 0x980ef6bdca4b683 ^ _DAT_183475418) + uVar3;
  _DAT_1834755f0 = _DAT_1834752f0 ^ _DAT_183475418;
  _DAT_1834755d8 = 0xc4;
  uVar3 = (_DAT_183475600 ^ _DAT_181f99c20) + _DAT_1834754f8 + 0x842223e1;
  uVar5 = (_DAT_1834754f8 ^ _UNK_181f99c28) + _DAT_183475600 + 0xc4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183475600 ^ _DAT_181f99c20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834754f8 ^ _UNK_181f99c28;
  _DAT_183475538 =
       func_0x000190757f00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475600 + 0xc4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1834754f8 + 0x842223e1));
  uVar3 = _DAT_183475538 ^ 0xc4;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  _DAT_183475338 =
       (ulonglong)
       (~((uint)uVar3 ^
         (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) &
       0xc4);
  _DAT_1834756c0 = _DAT_1834756c0 ^ _DAT_183475338 ^ 0xb1577fa4591e1202;
  _DAT_183475608 = (_DAT_183475608 * -0x363bec401d2d0f33 ^ _DAT_1834756c0) + _DAT_183475338;
  _DAT_1834751f0 = _DAT_183475608 ^ _DAT_1834756c0;
  _DAT_1834752f8 = 0;
  _DAT_1834753e8 = func_0x000190757f00(_DAT_183475680 ^ 0x1f007be5001d3e);
  _DAT_183475690 = _DAT_183475690 ^ _DAT_1834753e8 ^ 0xff ^ 0xd5c4b08cac385bd3;
  _DAT_1834751f0 = (_DAT_1834751f0 * 0x190454c0fd5b000f ^ _DAT_183475690) + (_DAT_1834753e8 ^ 0xff);
  _DAT_1834754f8 = 0;
  _DAT_183475188 = func_0x000190757f00(_DAT_183475488 + 0xffdd0083b60021ffU ^ 0x4b);
  _DAT_183475198 = _DAT_183475198 ^ _DAT_183475188 & 0x7fffffffffffc000 ^ 0xbd42ba3baf607d5f;
  _DAT_183475608 =
       (_DAT_183475608 * 0xb7fcdd8affeb27 ^ _DAT_183475198) + (_DAT_183475188 & 0x7fffffffffffc000);
  _DAT_183475618 = _DAT_183475608 ^ _DAT_183475198;
  _DAT_1834753d0 = 0;
  uVar3 = (_DAT_183475230 ^ _DAT_182d39720) + _DAT_1834756e8 + 0x842223de;
  uVar5 = (_DAT_1834756e8 ^ _UNK_182d39728) + _DAT_183475230 + 0xfb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183475230 ^ _DAT_182d39720;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834756e8 ^ _UNK_182d39728;
  _DAT_183475680 =
       func_0x000190757f00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475230 + 0xfb) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1834756e8 + 0x842223de));
  _DAT_183475608 = _DAT_183475608 ^ _DAT_183475680 ^ 0xf619 ^ 0xef789bd49e4315cb;
  _DAT_183475660 =
       (_DAT_183475660 * 0x75f26378cf3e2ab5 ^ _DAT_183475608) + (_DAT_183475680 ^ 0xf619);
  _DAT_183475250 = _DAT_183475660 ^ _DAT_183475608;
  _DAT_183475588 = 0;
  uVar2 = (ulonglong)(unaff_R15D + (uint)((ulonglong)unaff_R15D * unaff_R14 >> 0x23) * -10 & 0xff);
  uVar3 = uVar2 ^ unaff_RBX;
  uVar5 = uVar3 ^ _DAT_1834753d8;
  lVar4 = uVar3 + _DAT_1834755f8;
  uVar3 = uVar5 + lVar4;
  uVar6 = (_DAT_1834755f8 ^ 0x30) + _DAT_1834753d8 + 0x30;
  uVar5 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar5;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1834755f8 ^ 0x30;
  _DAT_183475410 =
       func_0x000190757f00((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1834753d8 + 0x30) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar2 = uVar2 | 0x30;
  _DAT_183475320 = (_DAT_183475320 ^ _DAT_183475410 ^ 0x30) + uVar2 ^ 0x804339bc97175812;
  _DAT_1834754d0 = (_DAT_1834754d0 * -0x459a8788432df32d ^ _DAT_183475320) + (_DAT_183475410 ^ 0x30)
  ;
  _DAT_183475440 = _DAT_1834754d0 ^ _DAT_183475320;
  uVar3 = in_RAX ^ unaff_RBX ^ _DAT_183475268;
  lVar4 = (in_RAX ^ unaff_RBX) + _DAT_1834752f0;
  uVar5 = uVar3 + lVar4;
  uVar6 = ~_DAT_1834752f0 + (_DAT_183475268 - 1);
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar3;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ ~_DAT_1834752f0;
  _DAT_183475680 = uVar2;
  _DAT_183475360 =
       func_0x000190757f00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475268 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar8 = (uint)(in_RAX >> 0x20);
  auVar1._8_4_ = (int)in_RAX;
  auVar1._0_8_ = in_RAX;
  auVar1._12_4_ = uVar8;
  uVar7 = SUB164(auVar1 ^ unaff_XMM13,0);
  uVar5 = SUB168(auVar1 ^ unaff_XMM13,0);
  lVar4 = ((in_RAX & 0xffffffff) * (ulonglong)_DAT_182d39770 +
           (ulonglong)uVar8 * (ulonglong)unaff_XMM6_Da << 0x20) +
          (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM6_Da;
  uVar3 = (-in_RAX ^ _DAT_183475360) & 0x1fffffffffff;
  _DAT_183475418 =
       (((in_RAX & 0xffffffff) * (ulonglong)_DAT_182d397b0 +
         (in_RAX >> 0x20) * (ulonglong)unaff_XMM12_Da << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM12_Da +
        ((in_RAX & 0xffffffff) * (ulonglong)_DAT_182d39790 +
         (in_RAX >> 0x20) * (ulonglong)unaff_XMM10_Da << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM10_Da + lVar4 +
        (ulonglong)uVar7 * (ulonglong)unaff_XMM11_Da +
        ((ulonglong)uVar7 * (ulonglong)_DAT_182d397d0 + (uVar5 >> 0x20) * (ulonglong)unaff_XMM11_Da
        << 0x20) ^ unaff_XMM13._0_8_) +
       (ulonglong)uVar7 * (ulonglong)_DAT_182d39750 +
       ((uVar5 >> 0x20) * (ulonglong)_DAT_182d39750 + (ulonglong)uVar7 * (ulonglong)_DAT_182d39730
       << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)_DAT_182d39740 +
       ((in_RAX >> 0x20) * (ulonglong)_DAT_182d39740 +
        (in_RAX & 0xffffffff) * (ulonglong)_DAT_182d39730 << 0x20) + lVar4 + 0x2703cc2b0930d2f7;
  _DAT_183475680 = _DAT_1834753f8 ^ uVar3 ^ _DAT_183475418;
  _DAT_183475648 = (_DAT_183475648 ^ uVar3) + _DAT_183475418 ^ 0xdd749b74c8302351;
  _DAT_1834754a0 = (_DAT_1834754a0 * -0x26e90fa8aed9efd7 ^ _DAT_183475648) + uVar3;
  _DAT_183475208 = _DAT_1834754a0 ^ _DAT_183475648;
  *(char *)(unaff_RBP + -0x50 + _DAT_183475418) = (char)uVar2;
  switch(unaff_R15D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1072e7ff (image 19072e7ff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19072e7ff(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined1 auVar8 [16];
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint unaff_XMM7_Da;
  ulonglong unaff_XMM9_Qa;
  ulonglong uVar13;
  ulonglong uVar14;
  uint unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  
  uVar5 = (~_DAT_183475678 + 0x6c5a2fa29db7006e) *
          ((_DAT_183475340 ^ 0x2f8e8a1c28c829aa) + (_DAT_183475340 & 0x2f8e8a1c28c829aa) * 2);
  uVar5 = (uVar5 | _DAT_183475628) + (uVar5 & _DAT_183475628);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1834756b8 = func_0x000190757f00((uVar5 | 0x43d4a5beb57f29c7) + (uVar5 & 0x43d4a5beb57f29c7));
  _DAT_183475678 = (_DAT_183475678 ^ _DAT_183475278) + 0x6fdeafbebdff0aef ^ 0x445e67d4e32fabcd;
  _DAT_183475430 = (_DAT_183475430 * 0x24ceecf84c33dff7 ^ _DAT_183475678) + _DAT_183475278;
  _DAT_1834754b8 = _DAT_183475430 ^ _DAT_183475678;
  _DAT_183475350 = 0x6fdeafbebdff0aef;
  _DAT_183475480 = func_0x000190757f00(_DAT_183475430 ^ 0xb0b18a77f3d99015);
  _DAT_183475628 =
       (_DAT_183475628 ^ ~_DAT_183475480 & 0x6906487c813bd788) + 0x5cff2b510cd37111 ^
       0xd2c292603514a178;
  _DAT_183475320 =
       (_DAT_183475320 * -0x67db74771cfd1bd ^ _DAT_183475628) +
       (~_DAT_183475480 & 0x6906487c813bd788);
  _DAT_183475148 = _DAT_183475320 ^ _DAT_183475628;
  _DAT_1834752a8 = 0x5cff2b510cd37111;
  _DAT_183475180 = func_0x000190757f00(_DAT_183475150 + 0x7e3ca2c457542a92 ^ 0xaa);
  uVar5 = _DAT_183475180 & 0x7fffffffffffffff;
  _DAT_1834752b0 = _DAT_183475340 ^ uVar5 ^ 0xfffffffffffffffe;
  _DAT_183475358 = (_DAT_183475358 ^ uVar5) - 2 ^ 0xa0bbcd13e5b3b006;
  _DAT_1834754b8 = (_DAT_1834754b8 * -0x201add75aa597525 ^ _DAT_183475358) + uVar5;
  _DAT_1834751a0 = _DAT_1834754b8 ^ _DAT_183475358;
  _DAT_183475388 = 0xfffffffffffffffe;
  uVar5 = (_DAT_1834755c8 ^ _DAT_182d397e0) + (_DAT_183475670 - 0x84222325);
  uVar9 = (_DAT_183475670 ^ _UNK_182d397e8) + _DAT_1834755c8 + 0x9e155fffff67cf80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834755c8 ^ _DAT_182d397e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183475670 ^ _UNK_182d397e8;
  _DAT_1834751b8 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1834755c8 + 0x9e155fffff67cf80) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475670 - 0x84222325));
  uVar5 = (_DAT_1834751b8 ^ 0x3d5400001306100) & 0xfffffffffffffc0;
  _DAT_1834755f0 = _DAT_183475180 ^ uVar5 ^ 0x9e155fffff67cf7e;
  _DAT_183475540 = (_DAT_183475540 ^ uVar5) + 0x9e155fffff67cf7e ^ 0x527d59790d26d5fd;
  _DAT_183475160 = (_DAT_183475160 * 0x432cd3972072b7af ^ _DAT_183475540) + uVar5;
  _DAT_1834756a0 = _DAT_183475160 ^ _DAT_183475540;
  _DAT_183475390 = 0x9e155fffff67cf7e;
  uVar5 = (_DAT_183475208 ^ _DAT_182d397f0) + _DAT_183475450 + 0x84222325;
  uVar9 = (_DAT_183475450 ^ _UNK_182d397f8) + _DAT_183475208 + 0x7255e7b497e010;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183475208 ^ _DAT_182d397f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183475450 ^ _UNK_182d397f8;
  _DAT_1834756e0 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183475208 + 0x7255e7b497e010) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475450 + 0x84222325));
  _DAT_1834752d0 = (_DAT_1834752d0 ^ _DAT_1834756e0) + 0xff8daa184b681ff0 ^ 0xf767f250af168d80;
  _DAT_183475488 = (_DAT_183475488 * 0x4588d4b8b4474775 ^ _DAT_1834752d0) + _DAT_1834756e0;
  _DAT_1834756c0 = _DAT_183475488 ^ _DAT_1834752d0;
  _DAT_1834756a0 = 0xff8daa184b681ff0;
  uVar5 = (_DAT_1834753d8 ^ _DAT_182d39800) + _DAT_183475498 + 0x7255e730b5c32b;
  uVar9 = (_DAT_183475498 ^ _UNK_182d39808) + _DAT_1834753d8 + 0xff8daa184b681ff0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834753d8 ^ _DAT_182d39800;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183475498 ^ _UNK_182d39808;
  _DAT_1834754b8 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1834753d8 + 0xff8daa184b681ff0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475498 + 0x7255e730b5c32b));
  uVar5 = ~_DAT_183475250 & 0x7255e7b497e00e;
  _DAT_183475698 = _DAT_183475538 ^ uVar5 ^ 0xfffffffffffffffe;
  _DAT_183475370 = (_DAT_183475370 ^ uVar5) - 2 ^ 0xb906415a01137963;
  _DAT_1834756a8 = (_DAT_1834756a8 * -0x6883fef33ef23f1f ^ _DAT_183475370) + uVar5;
  _DAT_183475238 = _DAT_1834756a8 ^ _DAT_183475370;
  _DAT_183475448 = _DAT_1834753c0 ^ 0xfffffffffffffffe;
  _DAT_1834755a8 = 0xfffffffffffffffe;
  uVar5 = (~_DAT_1834751e0 + 0x99bc562019a60003) *
          ((_DAT_1834754e0 ^ 0x332184ef350e58db) + (_DAT_1834754e0 & 0x332184ef350e58db) * 2);
  uVar5 = (uVar5 | _DAT_183475188) + (uVar5 & _DAT_183475188);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183475600 = func_0x000190757f00((uVar5 | 0xaa9dd2cf2ca858d9) + (uVar5 & 0xaa9dd2cf2ca858d9));
  uVar5 = _DAT_183475600 ^ 0xbbbdd6efb9ae7bfe;
  _DAT_183475180 = _DAT_183475350 ^ uVar5 ^ 0xccdddb0fcad27c00;
  _DAT_1834755a8 = (_DAT_1834755a8 ^ uVar5) + 0xccdddb0fcad27c00 ^ 0xc0316e43c10df148;
  _DAT_183475168 = (_DAT_183475168 * -0x79bef086c0b1c20d ^ _DAT_1834755a8) + uVar5;
  _DAT_183475410 = _DAT_183475168 ^ _DAT_1834755a8;
  _DAT_1834755e8 = -0x332224f0352d8400;
  uVar5 = (~_DAT_183475260 + 0xccdddb0fcad27c01) *
          ((_DAT_183475170 ^ 0xccdddb0f4ef05f25) + (_DAT_183475170 & 0x4cdddb0f4ef05f25) * 2);
  uVar5 = (uVar5 | _DAT_183475270) + (uVar5 & _DAT_183475270);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1834751e8 = func_0x000190757f00((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  uVar5 = _DAT_1834751e8 >> 1 | _DAT_1834751e8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  _DAT_183475408 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
       _DAT_1834751e8;
  _DAT_183475168 = _DAT_183475168 ^ _DAT_183475408 ^ 0x97b8a60900c2f6;
  _DAT_183475530 = (_DAT_183475530 * 0x478b679230ea3849 ^ _DAT_183475168) + _DAT_183475408;
  _DAT_183475340 = _DAT_183475530 ^ _DAT_183475168;
  _DAT_1834755e0 = 0;
  uVar5 = func_0x000190757f00(_DAT_1834755a8 ^ 0xb7b31b64ab86c513);
  uVar5 = (uVar5 & 0x7fffffffffff) << 0x10 | uVar5 >> 0x30;
  _DAT_183475110 = _DAT_1834756a8 ^ uVar5 ^ 0xfffffffffffffffe;
  _DAT_183475538 = (_DAT_183475538 ^ uVar5) - 2 ^ 0x62d5f683b1cba1da;
  _DAT_1834756f0 = (_DAT_1834756f0 * -0x169f9a2ad7af8305 ^ _DAT_183475538) + uVar5;
  _DAT_183475318 = _DAT_1834756f0 ^ _DAT_183475538;
  _DAT_183475518 = 0xfffffffffffffffe;
  _DAT_183475450 = func_0x000190757f00(_DAT_183475270 ^ 0xbfce1e45d54fe2f5);
  _DAT_1834755f0 =
       (_DAT_1834755f0 ^ _DAT_183475450 & 0xfffffffffffffc00) + 0x902150414200f510 ^
       0x1ffa5ecb690bae70;
  _DAT_183475110 =
       (_DAT_183475110 * 0x1a8cc8feaf54c7e1 ^ _DAT_1834755f0) +
       (_DAT_183475450 & 0xfffffffffffffc00);
  _DAT_183475570 = _DAT_183475110 ^ _DAT_1834755f0;
  _DAT_183475688 = 0x902150414200f510;
  uVar5 = ((_DAT_1834752b0 ^ 0xffffffff7bdddcdb) + (_DAT_1834752b0 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_183475368;
  uVar5 = (uVar5 | _DAT_183475570) + (uVar5 & _DAT_183475570);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183475310 = func_0x000190757f00((uVar5 | 0xffffffff7bdddcdb) + (uVar5 & 0xffffffff7bdddcdb));
  uVar5 = _DAT_183475310 & 0x7fffffffffffffff;
  _DAT_183475150 = _DAT_183475590 ^ uVar5 ^ 0xfffffffffffffffe;
  _DAT_183475430 = (_DAT_183475430 ^ uVar5) - 2 ^ 0x816f99e99c363aed;
  _DAT_183475608 = (_DAT_183475608 * 0x678b724efd28241 ^ _DAT_183475430) + uVar5;
  _DAT_1834751f0 = _DAT_183475608 ^ _DAT_183475430;
  _DAT_1834751d8 = 0xfffffffffffffffe;
  uVar5 = ((_DAT_183475348 ^ 0xffffffff7bdddcdb) + (_DAT_183475348 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_1834751c8;
  uVar5 = (uVar5 | _DAT_183475410) + (uVar5 & _DAT_183475410);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1834755a8 = func_0x000190757f00((uVar5 | 0xffffffff7bdddcdb) + (uVar5 & 0xffffffff7bdddcdb));
  uVar5 = _DAT_1834755a8 & 0x7fffffffffffffff;
  _DAT_183475358 = _DAT_183475298 ^ uVar5 ^ 0xfffffffffffffffe;
  _DAT_183475398 = (_DAT_183475398 ^ uVar5) - 2 ^ 0x620e282c118b913c;
  _DAT_183475678 = (_DAT_183475678 * -0x4a78471cb02f77e5 ^ _DAT_183475398) + uVar5;
  _DAT_183475508 = _DAT_183475678 ^ _DAT_183475398;
  _DAT_183475150 = 0xfffffffffffffffe;
  uVar5 = unaff_RDI ^ 0x84222325 ^ _DAT_183475428;
  lVar4 = (unaff_RDI ^ 0x84222325) + _DAT_183475660;
  uVar9 = uVar5 + lVar4;
  uVar11 = (_DAT_183475660 ^ 0xfffffffffffffffe) + (_DAT_183475428 - 2);
  uVar5 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar5;
  uVar9 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183475660 ^ 0xfffffffffffffffe;
  _DAT_1834754f8 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183475428 - 2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar9 = ~_DAT_1834754f8 & unaff_XMM9_Qa;
  auVar1._4_4_ = unaff_XMM14_Db;
  auVar1._0_4_ = unaff_XMM14_Da;
  auVar1._8_4_ = unaff_XMM14_Dc;
  auVar1._12_4_ = unaff_XMM14_Dd;
  auVar2._4_4_ = unaff_XMM14_Db;
  auVar2._0_4_ = unaff_XMM14_Da;
  auVar2._8_4_ = unaff_XMM14_Dc;
  auVar2._12_4_ = unaff_XMM14_Dd;
  auVar8._8_4_ = 0xffffffff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8._12_4_ = 0xffffffff;
  auVar3._4_4_ = unaff_XMM14_Db;
  auVar3._0_4_ = unaff_XMM14_Da;
  auVar3._8_4_ = unaff_XMM14_Dc;
  auVar3._12_4_ = unaff_XMM14_Dd;
  uVar12 = SUB164(auVar1 & _DAT_1800b8c60,0);
  uVar11 = SUB168(auVar1 & _DAT_1800b8c60,0);
  uVar10 = SUB164(auVar2 ^ _DAT_1800b8c60,0);
  uVar13 = SUB168(auVar2 ^ _DAT_1800b8c60,0);
  uVar7 = SUB164(auVar8 ^ auVar3,0);
  uVar14 = SUB168(auVar8 ^ auVar3,0);
  uVar6 = (uint)DAT_1800b8c60 | unaff_XMM14_Da;
  uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar9;
  uVar11 = (ulonglong)_DAT_182d39870 * (ulonglong)uVar7 +
           ((ulonglong)_DAT_182d39880 * (ulonglong)uVar7 +
            (uVar14 >> 0x20) * (ulonglong)_DAT_182d39870 << 0x20) +
           (ulonglong)_DAT_182d39850 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_182d39860 * (ulonglong)uVar10 +
            (uVar13 >> 0x20) * (ulonglong)_DAT_182d39850 << 0x20) +
           (ulonglong)_DAT_182d39830 * (ulonglong)uVar12 +
           ((ulonglong)_DAT_182d39840 * (ulonglong)uVar12 +
            (uVar11 >> 0x20) * (ulonglong)_DAT_182d39830 << 0x20) +
           ((ulonglong)_DAT_182d39820 * (ulonglong)unaff_XMM14_Da +
            (ulonglong)_DAT_182d39810 * (ulonglong)unaff_XMM7_Da << 0x20) +
           (ulonglong)unaff_XMM14_Da * (ulonglong)_DAT_182d39810 +
           (-((ulonglong)uVar7 * (_DAT_182d398f0 & 0xffffffff) +
             ((ulonglong)_DAT_182d39950 * (ulonglong)uVar7 +
              (uVar14 >> 0x20) * (_DAT_182d398f0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar10 * (ulonglong)_DAT_182d39930 +
            ((ulonglong)_DAT_182d39940 * (ulonglong)uVar10 +
             (uVar13 >> 0x20) * (ulonglong)_DAT_182d39930 << 0x20) +
            ((ulonglong)uVar6 * (ulonglong)_DAT_182d39910 + _DAT_182d39920 << 0x20) +
            (ulonglong)_DAT_182d39900 * (ulonglong)uVar6 +
           (ulonglong)uVar12 * (ulonglong)_DAT_182d398d0 +
           ((ulonglong)_DAT_182d398e0 * (ulonglong)uVar12 +
            (uVar11 >> 0x20) * (ulonglong)_DAT_182d398d0 << 0x20) +
           ((ulonglong)(unaff_XMM14_Da * _DAT_182d398c0 + unaff_XMM7_Da * _DAT_182d398b0) << 0x20) +
           (ulonglong)unaff_XMM14_Da * (ulonglong)_DAT_182d398b0)) + 0xb2721905c679314e;
  _DAT_183475620 = _DAT_183475158 ^ uVar9 ^ uVar11;
  _DAT_183475390 = (_DAT_183475390 ^ uVar9) + uVar11 ^ 0xbdd7d5b85eb5c80f;
  _DAT_1834754d8 = (_DAT_1834754d8 * 0x75b6ad3dcaa0884f ^ _DAT_183475390) + uVar9;
  _DAT_183475150 = _DAT_1834754d8 ^ _DAT_183475390;
  _DAT_183475240 = uVar11;
  *(ulonglong *)(unaff_RBP + 0x78) = uVar11 + unaff_RBP + -0x50;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar11) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar5 = (~_DAT_183475698 + 0xf5e887b58a0ea1c8) *
          ((_DAT_183475338 ^ 0x43774106fe46d0b1) + (_DAT_183475338 & 0x43774106fe46d0b1) * 2);
  uVar5 = (uVar5 | _DAT_183475150) + (uVar5 & _DAT_183475150);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1834751f0 = func_0x000190757f00((uVar5 | 0xb69fc6b374487176) + (uVar5 & 0xb69fc6b374487176));
  _DAT_183475660 =
       (_DAT_183475660 ^ _DAT_1834751f0 * 0x423b4a5a9b82b4a7) + 0xb69fc6b3f06a5253 ^
       0x1283e73d1a98395a;
  _DAT_1834755e8 =
       (_DAT_1834755e8 * 0x1e1d6086becfdbd3 ^ _DAT_183475660) + _DAT_1834751f0 * 0x423b4a5a9b82b4a7;
  _DAT_183475238 = _DAT_1834755e8 ^ _DAT_183475660;
  _DAT_183475378 = 0xb69fc6b3f06a5253;
  uVar5 = (_DAT_183475448 ^ _DAT_182d39960) + 0xb69fc6b4748c7578;
  uVar9 = (_UNK_182d39968 ^ 0xb69fc6b3f06a5253) + _DAT_183475448 + 0xff4b584925363660;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183475448 ^ _DAT_182d39960;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _UNK_182d39968 ^ 0xb69fc6b3f06a5253;
  _DAT_183475610 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183475448 + 0xff4b584925363660) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) + 0x4960394b8b738a88);
  _DAT_183475430 =
       (_DAT_183475430 ^ _DAT_183475610 & 0xfffffffffffffff) + 0xb4a7b6dac9c9a0 ^ 0xeeaf723be940ab58
  ;
  _DAT_183475658 =
       (_DAT_183475658 * -0x1d17f75b46135b55 ^ _DAT_183475430) +
       (_DAT_183475610 & 0xfffffffffffffff);
  _DAT_183475238 = _DAT_183475658 ^ _DAT_183475430;
  _DAT_1834756a0 = 0xb4a7b6dac9c9a0;
  uVar5 = (~_DAT_1834752a8 + 0xff4b584925363661) *
          ((_DAT_183475270 ^ 0x84222330) + (ulonglong)((uint)_DAT_183475270 & 0x84222330) * 2);
  uVar5 = (uVar5 | _DAT_1834752e0) + (uVar5 & _DAT_1834752e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183475278 = func_0x000190757f00((uVar5 | 0xff4b5849a1141550) + (uVar5 & 0xff4b5849a1141550));
  uVar5 = (_DAT_183475278 >> 0xd) * 0x265e827c786da000;
  _DAT_183475470 = _DAT_183475120 ^ uVar5 ^ 0xff4b584925363675;
  _DAT_183475378 = (_DAT_183475378 ^ uVar5) + 0xff4b584925363675 ^ 0x9a64142f01b915b;
  _DAT_183475140 = (_DAT_183475140 * -0x76e7bb0fc0acd9c7 ^ _DAT_183475378) + uVar5;
  _DAT_183475478 = _DAT_183475140 ^ _DAT_183475378;
  _DAT_1834756e0 = 0xff4b584925363675;
  uVar5 = (_DAT_1834752d8 ^ _DAT_182d39970) + _DAT_183475178 + 0xff4b5849a1141550;
  uVar9 = (_DAT_183475178 ^ _UNK_182d39978) + _DAT_1834752d8 + 0xb4a7b6dac9c9a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834752d8 ^ _DAT_182d39970;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183475178 ^ _UNK_182d39978;
  _DAT_1834753f0 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1834752d8 + 0xb4a7b6dac9c9a0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475178 + 0xff4b5849a1141550));
  uVar5 = _DAT_1834753f0 << 0x1c | (_DAT_1834753f0 & 0x3ffffffffffffff) >> 0x24;
  _DAT_1834752d0 = _DAT_183475490 ^ uVar5 ^ 0x15;
  _DAT_183475648 = (_DAT_183475648 ^ uVar5) + 0x15 ^ 0x353a5738337e1e4b;
  _DAT_183475118 = (_DAT_183475118 * 0x3a4f1084ee8638e5 ^ _DAT_183475648) + uVar5;
  _DAT_183475640 = _DAT_183475118 ^ _DAT_183475648;
  _DAT_183475438 = 0x15;
  _DAT_1834753e8 = func_0x000190757f00(_DAT_1834752b0 + 0x53746e922bda8ea8 ^ 0xf2);
  uVar5 = _DAT_1834753e8 >> 1 | _DAT_1834753e8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1834753e8) * 0x7aed8dda6b290509;
  _DAT_183475518 = (_DAT_183475518 ^ uVar5) + 0x16411593e96c60f0 ^ 0xed21e400907ab63d;
  _DAT_183475158 = (_DAT_183475158 * -0x44b05ecb39bf82a1 ^ _DAT_183475518) + uVar5;
  _DAT_183475560 = _DAT_183475158 ^ _DAT_183475518;
  _DAT_183475280 = 0x16411593e96c60f0;
  _DAT_1834753d0 = func_0x000190757f00(_DAT_183475540 ^ 0x1c73958e1f556e87);
  uVar5 = (_DAT_1834753d0 * 2 & 0x7ffffffffffU) >> 1;
  uVar9 = (_DAT_1834753d0 * 2 & 0x7ffffffffffU) >> 2 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar5;
  _DAT_1834751a0 = _DAT_1834752f8 ^ uVar5 ^ 0xe9beea6c16939f25;
  _DAT_183475320 = (_DAT_183475320 ^ uVar5) + 0xe9beea6c16939f25 ^ 0x4830cb6c3c143743;
  _DAT_183475338 = (_DAT_183475338 * -0x1fbdc0d073f63051 ^ _DAT_183475320) + uVar5;
  _DAT_183475500 = _DAT_183475338 ^ _DAT_183475320;
  _DAT_1834755d8 = 0xe9beea6c16939f25;
  uVar5 = (_DAT_183475318 ^ _DAT_182d39980) + _DAT_183475680 + 0xe9beea6c92b1bc00;
  uVar9 = (_DAT_183475680 ^ _UNK_182d39988) + _DAT_183475318 + 0x16411593e96c60f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183475318 ^ _DAT_182d39980;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183475680 ^ _UNK_182d39988;
  _DAT_183475130 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183475318 + 0x16411593e96c60f0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475680 + 0xe9beea6c92b1bc00));
  uVar5 = _DAT_183475130 * -0x36d848f59f84c875;
  _DAT_183475610 = _DAT_183475540 ^ uVar5 ^ 0x15;
  _DAT_1834754f8 = (_DAT_1834754f8 ^ uVar5) + 0x15 ^ 0xfb3e5f38776b3e6a;
  _DAT_1834755b0 = (_DAT_1834755b0 * -0x1cfe5a43909ad3cf ^ _DAT_1834754f8) + uVar5;
  _DAT_183475498 = _DAT_1834755b0 ^ _DAT_1834754f8;
  _DAT_183475228 = 0x15;
  uVar5 = (~_DAT_183475608 + 0x4a0efe018e09ca29) *
          ((_DAT_183475460 ^ 0x84222325) + (ulonglong)((uint)_DAT_183475460 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_183475548) + (uVar5 & _DAT_183475548);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1834751e0 = func_0x000190757f00((uVar5 | 0x4a0efe010a2be90d) + (uVar5 & 0x4a0efe010a2be90d));
  _DAT_183475498 = _DAT_183475498 + 0xb5f101fe71f635d8 ^ 0x50ca80ced264a86b;
  _DAT_183475478 = _DAT_183475228 * 0x62e531f334cfade5;
  _DAT_183475228 = _DAT_183475478 ^ _DAT_183475498;
  _DAT_183475440 = -0x4a0efe018e09ca28;
  uVar5 = (_DAT_183475278 ^ _DAT_182d39990) + _DAT_183475258 + 0x84222330;
  uVar9 = (_DAT_183475258 ^ _UNK_182d39998) + _DAT_183475278 + 0x4a0efe018e09ca28;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183475278 ^ _DAT_182d39990;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183475258 ^ _UNK_182d39998;
  _DAT_183475488 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183475278 + 0x4a0efe018e09ca28) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183475258 + 0x84222330));
  uVar5 = (ulonglong)(~(uint)_DAT_183475488 & 0x15) ^ 0x15;
  _DAT_183475280 = _DAT_1834752e8 ^ uVar5 ^ 0x4a0efe018e09ca3d;
  _DAT_1834753b8 = (_DAT_1834753b8 ^ uVar5) + 0x4a0efe018e09ca3d ^ 0xa90cd7810bfcd965;
  _DAT_183475350 = (_DAT_183475350 * -0x340e4cd3dc79a317 ^ _DAT_1834753b8) + uVar5;
  _DAT_183475270 = _DAT_183475350 ^ _DAT_1834753b8;
  _DAT_183475278 = 0x4a0efe018e09ca3d;
  _DAT_1834755b8 = func_0x000190757f00(_DAT_183475438 + 0x953c5cfa3f79229eU ^ 0x3c);
  uVar5 = (_DAT_1834755b8 ^ 0x9255a6eaacb68e45) << 8 | (_DAT_1834755b8 ^ 0x9255a6eaacb68e45) >> 0x38
  ;
  _DAT_183475258 = _DAT_1834755e8 ^ uVar5 ^ 0x15;
  _DAT_183475250 = (_DAT_183475250 ^ uVar5) + 0x15 ^ 0x72a2a2c0f9767edf;
  _DAT_183475320 = (_DAT_183475320 * -0x669eadce6badbc6d ^ _DAT_183475250) + uVar5;
  _DAT_183475128 = _DAT_183475320 ^ _DAT_183475250;
  _DAT_183475108 = 0x15;
  _DAT_183475400 = func_0x000190757f00(_DAT_1834751f8 ^ 0x7559ae48c809acc4);
  uVar5 = _DAT_183475400 ^ 0x968dc021306a5212;
  _DAT_1834754a0 = _DAT_1834756e0 ^ uVar5 ^ 0x8e6dbfd92d6a2e11;
  _DAT_1834752c8 = (_DAT_1834752c8 ^ uVar5) + 0x8e6dbfd92d6a2e11 ^ 0x69ea886a53df1071;
  _DAT_1834755a8 = (_DAT_1834755a8 * 0x2ec83231f6233e27 ^ _DAT_1834752c8) + uVar5;
  _DAT_183475338 = _DAT_1834755a8 ^ _DAT_1834752c8;
  _DAT_1834755f0 = 0x8e6dbfd92d6a2e11;
  uVar5 = (_DAT_183475140 ^ _DAT_182d399a0) + _DAT_1834755a0 + 0xd7cdf925b8ddf89b;
  uVar9 = (_DAT_1834755a0 ^ _UNK_182d399a8) + _DAT_183475140 + 0xb69fc6b3f06a5253;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183475140 ^ _DAT_182d399a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1834755a0 ^ _UNK_182d399a8;
  _DAT_1834754d0 =
       func_0x000190757f00((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183475140 + 0xb69fc6b3f06a5253) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1834755a0 + 0xd7cdf925b8ddf89b));
  _DAT_1834754b0 =
       (_DAT_1834754b0 ^ _DAT_1834754d0 * -0xd0a9d6bc79f8eed) + 0x61523f96cc9589ed ^
       0x7d9d42703a3ce416;
  _DAT_1834755a0 =
       (_DAT_1834755a0 * 0x4d72bd7307176eab ^ _DAT_1834754b0) + _DAT_1834754d0 * -0xd0a9d6bc79f8eed;
  _DAT_183475500 = _DAT_1834755a0 ^ _DAT_1834754b0;
  _DAT_183475370 = 0x61523f96cc9589ed;
  uVar5 = (~_DAT_183475648 + 0xb69fc6b3f06a5254) *
          ((_DAT_1834753a8 ^ 0xd7cdf925b8ddf89b) + (_DAT_1834753a8 & 0x57cdf925b8ddf89b) * 2);
  uVar5 = (uVar5 | _DAT_183475428) + (uVar5 & _DAT_183475428);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183475338 = func_0x000190757f00((uVar5 | 0x61523f9648b7aac8) + (uVar5 & 0x61523f9648b7aac8));
  _DAT_183475238 = (_DAT_183475238 ^ _DAT_1834752b0) + 0x968dc021306a5212 ^ 0xce792ba6ea74d7de;
  _DAT_183475228 = (_DAT_183475228 * 0x4dc6479aa4a2dd91 ^ _DAT_183475238) + _DAT_1834752b0;
  _DAT_183475110 = _DAT_183475228 ^ _DAT_183475238;
  _DAT_183475508 = 0x968dc021306a5212;
  uVar5 = (~_DAT_1834751e0 + 0x8e6dbfd92d6a2e12) *
          ((_DAT_1834756b0 ^ 0x8e6dbfd9a9480d34) + (_DAT_1834756b0 & 0xe6dbfd9a9480d34) * 2);
  uVar5 = (uVar5 | _DAT_183475510) + (uVar5 & _DAT_183475510);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183475668 = func_0x000190757f00((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1834756d0 = _DAT_183475668 & 0x8e6dbfd92d6a2e11 | 0x2d6a2e11;
  _DAT_183475280 = _DAT_183475280 ^ _DAT_1834756d0 ^ 0xd6cdb50680dffc25;
  _DAT_183475418 = (_DAT_183475418 * -0x5e3b3388f6602103 ^ _DAT_183475280) + _DAT_1834756d0;
  _DAT_1834755b8 = _DAT_183475418 ^ _DAT_183475280;
  _DAT_183475218 = 0;
  uVar5 = ((_DAT_183475150 ^ 0x84222330) + (ulonglong)((uint)_DAT_183475150 & 0x84222330) * 2) *
          -_DAT_183475118;
  uVar5 = (uVar5 | _DAT_1834756f8) + (uVar5 & _DAT_1834756f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183475688 = func_0x000190757f00((uVar5 | 0x84222330) + (ulonglong)((uint)uVar5 & 0x84222330))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_183475688 & 0x15) << 0x27;
  _DAT_183475148 = _DAT_1834751b0 ^ uVar5 ^ 0x15;
  _DAT_183475238 = (_DAT_183475238 ^ uVar5) + 0x15 ^ 0x78389e95e1aae684;
  _DAT_183475470 = (_DAT_183475470 * -0x5db8c3a14f19e66f ^ _DAT_183475238) + uVar5;
  _DAT_183475598 = _DAT_183475470 ^ _DAT_183475238;
  _DAT_183475308 = 0x15;
  uVar5 = ~_DAT_183475448 *
          ((_DAT_1834752b0 ^ 0xd7cdf925b8ddf89b) + (_DAT_1834752b0 & 0x57cdf925b8ddf89b) * 2);
  uVar5 = (uVar5 | _DAT_183475170) + (uVar5 & _DAT_183475170);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183475588 = func_0x000190757f00((uVar5 | 0x283206da47220764) + (uVar5 & 0x283206da47220764));
  _DAT_183475230 =
       (_DAT_183475230 ^ _DAT_183475588 & 0xd7cdf9253cffdbbe) + 0x283206dac3002441 ^
       0x1eda7d1f288f6832;
  _DAT_183475248 =
       (_DAT_183475248 * 0x55af644df165369d ^ _DAT_183475230) +
       (_DAT_183475588 & 0xd7cdf9253cffdbbe);
  _DAT_183475390 = _DAT_183475248 ^ _DAT_183475230;
  _DAT_183475120 = 0x283206dac3002441;
  uVar5 = (~_DAT_183475110 + 0x283206dac3002442) *
          ((_DAT_183475478 ^ 0xd7cdf925b8ddf89b) + (_DAT_183475478 & 0x57cdf925b8ddf89b) * 2);
  uVar5 = (uVar5 | _DAT_1834755d8) + (uVar5 & _DAT_1834755d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183475568 = func_0x000190757f00((uVar5 | 0xffffffff7bdddcda) + (uVar5 & 0xffffffff7bdddcda));
  _DAT_183475228 = _DAT_183475228 ^ ~_DAT_183475138 & 0xd7cdf9253cffdbbe ^ 0x5f6ce509a2858efd;
  _DAT_183475440 =
       (_DAT_183475440 * 0x6efdf1a5a4af7ae7 ^ _DAT_183475228) +
       (~_DAT_183475138 & 0xd7cdf9253cffdbbe);
  _DAT_1834753b0 = _DAT_183475440 ^ _DAT_183475228;
  _DAT_1834752f8 = 0;
  _DAT_183475470 = func_0x000190757f00(_DAT_1834754a0 ^ 0xffe2ff7befffe1ad);
  uVar5 = _DAT_183475470 << 0xc | _DAT_183475470 >> 0x34;
  _DAT_1834756a8 = _DAT_183475100 ^ uVar5 ^ 0x15;
  _DAT_183475540 = (_DAT_183475540 ^ uVar5) + 0x15 ^ 0xa2f963bcedd62a45;
  _DAT_1834756f8 = (_DAT_1834756f8 * 0xf7ef042eaf70413 ^ _DAT_183475540) + uVar5;
  _DAT_183475630 = _DAT_1834756f8 ^ _DAT_183475540;
  _DAT_183475330 = 0x15;
  switch(uVar11 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10742d7e (image 190742d7e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190742d7e(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R14;
  undefined8 unaff_R15;
  
  uVar2 = (**(code **)(*unaff_R14 + 0xd8))();
  *(undefined8 *)(unaff_RBP + 0x40) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x48) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x50) = unaff_R15;
  *(undefined4 *)(unaff_RBP + 0x58) = 0;
  *(undefined4 *)(unaff_RBP + 0x60) = unaff_EDI;
  FUN_190ddfc90();
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



// ===== continuation @ rva 10743292 (image 190743292) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190743292(longlong param_1)

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



// ===== continuation @ rva 10731a78 (image 190731a78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190731ef7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190731a78(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  uint uVar5;
  uint uVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  
  uVar1 = unaff_RBP - 0x3b;
  auVar6._8_8_ = unaff_RDI;
  auVar6._0_8_ = uVar1 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_182d399b0,_DAT_1800170c0);
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar2 = uVar4 + _DAT_1834754f8;
  if (auVar7._4_4_ < 0) {
    uVar2 = _DAT_183475170 ^ uVar4;
  }
  _DAT_183475360 = func_0x000190757f00(SUB161(auVar6 ^ _DAT_182d399b0,5) ^ uVar2);
  uVar8 = (uint)(uVar1 >> 0x20);
  auVar9._8_4_ = (int)uVar1;
  auVar9._0_8_ = uVar1;
  auVar9._12_4_ = uVar8;
  uVar12 = (uint)(unaff_RDI >> 0x20);
  auVar7._8_4_ = (int)unaff_RDI;
  auVar7._0_8_ = unaff_RDI;
  auVar7._12_4_ = uVar12;
  uVar15 = SUB164(auVar9 & auVar7,0);
  uVar13 = SUB168(auVar9 & auVar7,0);
  auVar16._8_4_ = 0xffffffff;
  auVar16._0_8_ = 0xffffffffffffffff;
  auVar16._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar9 | auVar7,0);
  uVar5 = SUB164(auVar9 ^ auVar16,0);
  uVar14 = SUB168(auVar9 ^ auVar16,0);
  uVar4 = unaff_RDI ^ _DAT_18001a710;
  uVar10 = SUB164(auVar9 ^ auVar7,0);
  uVar2 = _DAT_183475360 << 0xf | (_DAT_183475360 & 0x3fffffffffffffff) >> 0x31;
  _DAT_183475268 =
       (((ulonglong)_DAT_182d39a00 * (ulonglong)uVar5 +
         ((ulonglong)_DAT_182d39a30 * (ulonglong)uVar5 +
          (uVar14 >> 0x20) * (ulonglong)_DAT_182d39a00 << 0x20) +
         (ulonglong)uVar11 * (ulonglong)_DAT_182d39a20 +
         ((SUB168(auVar9 | auVar7,0) >> 0x20) * (ulonglong)_DAT_182d39a20 +
          (ulonglong)_DAT_182d39a10 * (ulonglong)uVar11 << 0x20) +
        (ulonglong)uVar15 * (ulonglong)_DAT_182d39a20 +
        ((uVar13 >> 0x20) * (ulonglong)_DAT_182d39a20 +
         (ulonglong)uVar15 * (ulonglong)_DAT_182d39a10 << 0x20) +
        ((ulonglong)_DAT_182d399d0 * (uVar1 & 0xffffffff) +
         (ulonglong)_DAT_182d399c0 * (ulonglong)uVar8 << 0x20) +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_182d399c0 +
        ((ulonglong)_DAT_182d399f0 * (unaff_RDI & 0xffffffff) +
         (ulonglong)_DAT_182d399e0 * (ulonglong)uVar12 << 0x20) +
        (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_182d399e0) -
       ((uVar4 & 0xffffffff) * (_DAT_182d39b00 & 0xffffffff) +
        ((ulonglong)_DAT_182d39b10 * (uVar4 & 0xffffffff) +
         (uVar4 >> 0x20) * (_DAT_182d39b00 & 0xffffffff) << 0x20) +
       (ulonglong)uVar5 * (ulonglong)_DAT_182d39ae0 +
       ((ulonglong)_DAT_182d39af0 * (ulonglong)uVar5 + (uVar14 >> 0x20) * (ulonglong)_DAT_182d39ae0
       << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_182d39ac0 +
       ((ulonglong)_DAT_182d39ad0 * (ulonglong)uVar10 +
        (SUB168(auVar9 ^ auVar7,0) >> 0x20) * (ulonglong)_DAT_182d39ac0 << 0x20) +
       (ulonglong)uVar15 * (ulonglong)_DAT_182d39aa0 +
       ((ulonglong)_DAT_182d39ab0 * (ulonglong)uVar15 + (uVar13 >> 0x20) * (ulonglong)_DAT_182d39aa0
       << 0x20) +
       ((unaff_RDI & 0xffffffff) * (ulonglong)_DAT_182d39a90 +
        (ulonglong)uVar12 * (ulonglong)_DAT_182d39a80 << 0x20) +
       (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_182d39a80 +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_182d39a70 +
        (ulonglong)uVar8 * (ulonglong)_DAT_182d39a60 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_182d39a60)) + 0x9ed1603f341fab08;
  _DAT_183475600 = _DAT_183475268 ^ uVar2;
  _DAT_183475638 = (_DAT_183475638 ^ uVar2) + _DAT_183475268 ^ 0xdf3390167ec0ae0f;
  _DAT_1834755d8 = (_DAT_1834755d8 * -0x64d392f688e6278f ^ _DAT_183475638) + uVar2;
  _DAT_183475430 = _DAT_1834755d8 ^ _DAT_183475638;
  lVar3 = unaff_RBP + -0x30;
  FUN_18414b520(lVar3);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar3 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x20) + 0x70))
            (*(longlong **)(unaff_RBP + 0x20),*(undefined8 *)(unaff_RBP + 0x10),lVar3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10742f0d (image 190742f0d) =====

undefined8 FUN_190742f0d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 1075f0aa (image 19075f0aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075f0aa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182d3fe28)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 1075f0b6 (image 19075f0b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075f0b6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 1075f0dd (image 19075f0dd) =====

undefined4 * FUN_19075f0dd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 1075f0dc (image 19075f0dc) =====

void FUN_19075f0dc(void)

{
  return;
}



// ===== continuation @ rva 1075f0d3 (image 19075f0d3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075f0d3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_182d3fe18)();
  return;
}



// ===== continuation @ rva 1075f193 (image 19075f193) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075f193(void)

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



// ===== continuation @ rva 1075f13f (image 19075f13f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075f13f(void)

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



// ===== continuation @ rva 1075fec3 (image 19075fec3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075fec3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d401a8)();
  return;
}



// ===== continuation @ rva 1075f7a4 (image 19075f7a4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075f7a4(void)

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



// ===== continuation @ rva 1075fef8 (image 19075fef8) =====

void FUN_19075fef8(void)

{
  return;
}



// ===== continuation @ rva 1075f907 (image 19075f907) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075f907(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_182d40178)();
  return;
}



// ===== continuation @ rva 1075ad79 (image 19075ad79) =====

void FUN_19075ad79(void)

{
  return;
}



// ===== continuation @ rva 1075abba (image 19075abba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075abba(void)

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



// ===== continuation @ rva 1075e518 (image 19075e518) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075e518(void)

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



// ===== continuation @ rva 1075bc56 (image 19075bc56) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_19075b19d(void)

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



// ===== continuation @ rva 1075ae7d (image 19075ae7d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075ae7d(void)

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



// ===== continuation @ rva 1075b1c6 (image 19075b1c6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075b1c6(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva 1075cf69 (image 19075cf69) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_19075b19d(void)

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



// ===== continuation @ rva 1075bf3c (image 19075bf3c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075bf3c(void)

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



// ===== continuation @ rva 1075e27d (image 19075e27d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075e27d(void)

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



// ===== continuation @ rva 1075fd93 (image 19075fd93) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075fd93(void)

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



// ===== continuation @ rva 1075f86b (image 19075f86b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075f86b(void)

{
  FUN_190de3220();
  (*_DAT_182d40188)();
  return;
}



// ===== continuation @ rva 1075f685 (image 19075f685) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075f685(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d40228)();
  return;
}



// ===== continuation @ rva 1075fe30 (image 19075fe30) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19075fe30(void)

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



// ===== continuation @ rva 1075f2ea (image 19075f2ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19075f2ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d3ff98)();
  return;
}



// ===== continuation @ rva 10762941 (image 190762941) =====

void FUN_190762941(void)

{
  return;
}



// ===== continuation @ rva 10760070 (image 190760070) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190760070(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182d40398)();
  return;
}



// ===== continuation @ rva 107628e6 (image 1907628e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907628e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d41048)();
  return;
}



// ===== continuation @ rva 1076008f (image 19076008f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19076008f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000140;
  
  uStack0000000000000060 = in_stack_00000140;
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



// ===== continuation @ rva 10760b46 (image 190760b46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190760b46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d40dd8)();
  return;
}



// ===== continuation @ rva 1076051d (image 19076051d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19076051d(void)

{
  FUN_190de3220();
  (*_DAT_182d40598)();
  return;
}



// ===== continuation @ rva 10762960 (image 190762960) =====

void FUN_190762960(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10762611 (image 190762611) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190762611(void)

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



// ===== continuation @ rva 10762516 (image 190762516) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190762516(void)

{
  (*_DAT_182d41168)();
  return;
}



// ===== continuation @ rva 10762955 (image 190762955) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190762955(void)

{
  (*_DAT_182d40ef8)();
  return;
}



// ===== continuation @ rva 1076107e (image 19076107e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19076107e(void)

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



// ===== continuation @ rva 107617af (image 1907617af) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907617af(void)

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



// ===== continuation @ rva 10761471 (image 190761471) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190761471(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d409e8)();
  return;
}



// ===== continuation @ rva 10762302 (image 190762302) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190762302(void)

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



