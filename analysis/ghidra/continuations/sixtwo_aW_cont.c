// ===== continuation @ rva f87a9b7 (image 18f87a9b7) =====

void FUN_18f87a9b7(void)

{
  return;
}



// ===== continuation @ rva f85cd1b (image 18f85cd1b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f85cd71 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f85cd1b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f879e66 (image 18f879e66) =====

void thunk_FUN_18f85ed74(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva f87a3cf (image 18f87a3cf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f87a3cf(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_000000e8;
  
  uStack0000000000000040 = in_stack_000000e8;
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



// ===== continuation @ rva f873817 (image 18f873817) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f873817(undefined4 param_1,int param_2)

{
  char cVar1;
  longlong *unaff_RSI;
  int iStack0000000000000048;
  int iStack0000000000000050;
  undefined4 uStack00000000000000a8;
  int iStack00000000000000d0;
  
  iStack0000000000000050 = param_2 + 8;
  iStack0000000000000048 = param_2;
  uStack00000000000000a8 = param_1;
  iStack00000000000000d0 = iStack0000000000000050;
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



// ===== continuation @ rva f861874 (image 18f861874) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f861874(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  uint uVar4;
  uint uVar5;
  uint unaff_XMM10_Da;
  uint uVar6;
  uint in_stack_000000a0;
  int in_stack_000000a8;
  uint in_stack_000000e0;
  
  (**(code **)(*unaff_RSI + 0x570))();
  uVar3 = (ulonglong)in_stack_000000e0;
  uVar1 = (ulonglong)in_stack_000000a0 ^ 0x84222325;
  uVar2 = ((_DAT_183410128 ^ uVar1) + (ulonglong)((uint)uVar1 & (uint)_DAT_183410128) * 2) *
          (uVar3 - _DAT_18340fe48);
  uVar2 = (uVar2 | _DAT_18340fe18) + (uVar2 & _DAT_18340fe18);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340fd38 =
       func_0x00018f87aba0((uVar1 ^ uVar3 | uVar2) +
                           (ulonglong)((uint)(uVar1 ^ uVar3) & (uint)uVar2));
  uVar4 = in_stack_000000a0 & in_stack_000000e0;
  uVar5 = in_stack_000000a0 | in_stack_000000e0;
  uVar6 = in_stack_000000e0 ^ unaff_XMM10_Da;
  uVar2 = (in_stack_000000a0 * uVar3 ^ _DAT_18340fd38) & 0x1fffffffffffff;
  uVar1 = ((ulonglong)uVar6 * (ulonglong)_DAT_1829db1d0 + _DAT_1829db1e0 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_1829db1c0 +
          ((ulonglong)(in_stack_000000a0 ^ unaff_XMM10_Da) * (ulonglong)_DAT_1829db1a0 +
           _DAT_1829db1b0 << 0x20) +
          (ulonglong)(in_stack_000000a0 ^ unaff_XMM10_Da) * (ulonglong)_DAT_1829db190 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_1829db180 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_1829db170 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_1829db180 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_1829db170 +
          ((ulonglong)in_stack_000000e0 * (ulonglong)_DAT_1829db160 << 0x20) +
          (ulonglong)in_stack_000000e0 * (ulonglong)_DAT_1829db150 +
          ((ulonglong)in_stack_000000a0 * (ulonglong)_DAT_1829db140 << 0x20) +
          (ulonglong)in_stack_000000a0 * (ulonglong)_DAT_1829db130 +
          (-(((ulonglong)uVar6 * (ulonglong)_DAT_1829db2c0 + _DAT_1829db2d0 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_1829db2b0) -
          (((ulonglong)(in_stack_000000a0 ^ in_stack_000000e0) * (ulonglong)_DAT_1829db2a0 << 0x20)
           + (ulonglong)(in_stack_000000a0 ^ in_stack_000000e0) * (ulonglong)_DAT_1829db290 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_1829db280 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_1829db270 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_1829db260 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_1829db250 +
          ((ulonglong)in_stack_000000e0 * (ulonglong)_DAT_1829db240 << 0x20) +
          (ulonglong)in_stack_000000e0 * (ulonglong)_DAT_1829db230 +
          ((ulonglong)in_stack_000000a0 * (ulonglong)_DAT_1829db220 << 0x20) +
          (ulonglong)in_stack_000000a0 * (ulonglong)_DAT_1829db210)) + 0xcfde412e6688e5f4;
  _DAT_183410270 = _DAT_18340feb8 ^ uVar2 ^ uVar1;
  _DAT_1834102c8 = (_DAT_1834102c8 ^ uVar2) + uVar1 ^ 0xd691cac5507ff6ea;
  _DAT_183410248 = (_DAT_183410248 * 0x53a39a37a444a0bb ^ _DAT_1834102c8) + uVar2;
  _DAT_18340fef8 = uVar1 & 0xffffffff;
  switch((int)uVar1 < in_stack_000000a8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f8629b3 (image 18f8629b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f8629f6 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f8629b3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f85e94f (image 18f85e94f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f85e9a0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f85e94f(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f85f0b4 (image 18f85f0b4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f85f0fa */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f85f0b4(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f8600df (image 18f8600df) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f860134 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f8600df(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f86287b (image 18f86287b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f8628b1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f86287b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f8739fe (image 18f8739fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8739fe(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f87a6e1 (image 18f87a6e1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f87a6e1(void)

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



// ===== continuation @ rva f87f630 (image 18f87f630) =====

void FUN_18f87f630(void)

{
  return;
}



// ===== continuation @ rva f87ad26 (image 18f87ad26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f87ad26(void)

{
  FUN_190ddce00();
  (*_DAT_1829deed8)();
  return;
}



// ===== continuation @ rva f87f9e0 (image 18f87f9e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f87f9e0(void)

{
  longlong in_stack_000000a0;
  
  switch(in_stack_000000a0 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f87f89c (image 18f87f89c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f87f89c(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000c0;
  
  uStack0000000000000060 = in_stack_000000a0;
  uStack0000000000000068 = in_stack_000000c0;
  uStack0000000000000070 = in_stack_00000090;
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x62f1,0x121);
  (*_DAT_1829dcc18)();
  return;
}



// ===== continuation @ rva f88a5f8 (image 18f88a5f8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88a5f8(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x68))();
  (*_DAT_1829df0e8)();
  return;
}



// ===== continuation @ rva f87e580 (image 18f87e580) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f87e580(void)

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



// ===== continuation @ rva f882c52 (image 18f882c52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f882c52(void)

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



// ===== continuation @ rva f87dbb9 (image 18f87dbb9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f87dbb9(void)

{
  (*_DAT_1829de9d8)();
  return;
}



// ===== continuation @ rva f8834f4 (image 18f8834f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8834f4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829df0e8)();
  return;
}



// ===== continuation @ rva f88a60b (image 18f88a60b) =====

void FUN_18f88a60b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f882729 (image 18f882729) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f882729(void)

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



// ===== continuation @ rva f87f2c6 (image 18f87f2c6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f87f2c6(void)

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



// ===== continuation @ rva f88a81b (image 18f88a81b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88a81b(void)

{
  FUN_190dd72e0();
  (*_DAT_1829e0c98)();
  return;
}



// ===== continuation @ rva f88a79d (image 18f88a79d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88a79d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829e0cd8)();
  return;
}



// ===== continuation @ rva f88abb4 (image 18f88abb4) =====

void FUN_18f88abb4(void)

{
  return;
}



// ===== continuation @ rva f88aa06 (image 18f88aa06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88aa06(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829e0c58)();
  return;
}



// ===== continuation @ rva f88a8fc (image 18f88a8fc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88a8fc(void)

{
  undefined8 uStack0000000000000058;
  undefined8 in_stack_000000e0;
  
  uStack0000000000000058 = in_stack_000000e0;
  (*_DAT_1829e0cf8)();
  return;
}



// ===== continuation @ rva f88ab83 (image 18f88ab83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88ab83(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_1829e0c28)();
  return;
}



// ===== continuation @ rva f88aaf2 (image 18f88aaf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f88aaf2(void)

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



// ===== continuation @ rva f88aa1f (image 18f88aa1f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88aa1f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829e0b88)();
  return;
}



// ===== continuation @ rva f88a9cd (image 18f88a9cd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88a9cd(void)

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



// ===== continuation @ rva f88abd0 (image 18f88abd0) =====

void FUN_18f88abd0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f88aa4b (image 18f88aa4b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f88aa4b(void)

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



// ===== continuation @ rva f88ab6a (image 18f88ab6a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88ab6a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829e0b98)();
  return;
}



// ===== continuation @ rva f88f249 (image 18f88f249) =====

void FUN_18f88f249(void)

{
  return;
}



// ===== continuation @ rva f88ad2a (image 18f88ad2a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88ad2a(void)

{
  FUN_190ddce00();
  (*_DAT_1829e0df8)();
  return;
}



// ===== continuation @ rva f88f50f (image 18f88f50f) =====

void FUN_18f88f50f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f88edb1 (image 18f88edb1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f88edb1(void)

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



// ===== continuation @ rva f88e966 (image 18f88e966) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88e966(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829e1238)();
  return;
}



// ===== continuation @ rva f88e744 (image 18f88e744) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88e744(void)

{
  FUN_190dd9df0();
  (*_DAT_1829e1138)();
  return;
}



// ===== continuation @ rva f88ec30 (image 18f88ec30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88ec30(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_1829e1058)();
  return;
}



// ===== continuation @ rva f88efe3 (image 18f88efe3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88efe3(void)

{
  (*_DAT_1829e13b8)();
  return;
}



// ===== continuation @ rva f88e8d7 (image 18f88e8d7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f88e8d7(void)

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



// ===== continuation @ rva f88ef08 (image 18f88ef08) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88ef08(void)

{
  (*_DAT_1829e13b8)();
  return;
}



// ===== continuation @ rva f88ee47 (image 18f88ee47) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88ee47(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829e0fc8)();
  return;
}



// ===== continuation @ rva f88ecce (image 18f88ecce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88ecce(void)

{
  FUN_190de3220();
  (*_DAT_1829e0f48)();
  return;
}



// ===== continuation @ rva f893bd7 (image 18f893bd7) =====

void FUN_18f893bd7(void)

{
  return;
}



// ===== continuation @ rva f88f697 (image 18f88f697) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f88f697(void)

{
  FUN_190ddce00();
  (*_DAT_1829e2348)();
  return;
}



// ===== continuation @ rva f893983 (image 18f893983) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f893983(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_1829e2688)();
  return;
}



// ===== continuation @ rva f893242 (image 18f893242) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f893242(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829e2768)();
  return;
}



// ===== continuation @ rva f893b08 (image 18f893b08) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f893b08(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1829e2308)();
  return;
}



// ===== continuation @ rva f893e3c (image 18f893e3c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f893e3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x228))();
  (*_DAT_1829e2738)();
  return;
}



// ===== continuation @ rva f893a25 (image 18f893a25) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f893a25(void)

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



// ===== continuation @ rva f8939f6 (image 18f8939f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8939f6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829e21b8)();
  return;
}



// ===== continuation @ rva f89375b (image 18f89375b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f89375b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829e26c8)();
  return;
}



// ===== continuation @ rva f8933c7 (image 18f8933c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8933c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829e2588)();
  return;
}



// ===== continuation @ rva f893140 (image 18f893140) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f893140(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_1829e2798)();
  return;
}



// ===== continuation @ rva f893e83 (image 18f893e83) =====

void FUN_18f893e83(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f8937a5 (image 18f8937a5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8937a5(void)

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



// ===== continuation @ rva f893361 (image 18f893361) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f893361(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829e2288)();
  return;
}



// ===== continuation @ rva f893064 (image 18f893064) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f893064(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829e24a8)();
  return;
}



// ===== continuation @ rva f7fb0d7 (image 18f7fb0d7) =====

void FUN_18f7fb0d7(void)

{
  return;
}



// ===== continuation @ rva f7e4b8e (image 18f7e4b8e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7e4b8e(void)

{
  FUN_190ddce00();
  (*_DAT_1829c2248)();
  return;
}



// ===== continuation @ rva f7f073c (image 18f7f073c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7f073c(void)

{
  FUN_190dd72e0();
  (*_DAT_1829c0d08)();
  return;
}



// ===== continuation @ rva f7fb143 (image 18f7fb143) =====

void FUN_18f7fb143(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f7f1de9 (image 18f7f1de9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7f1de9(void)

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



// ===== continuation @ rva f7e86e5 (image 18f7e86e5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f7e8703 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f7e86e5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f7e9545 (image 18f7e9545) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7e9545(void)

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



// ===== continuation @ rva f7fae6b (image 18f7fae6b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fae6b(void)

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



// ===== continuation @ rva f7f7daa (image 18f7f7daa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7f7daa(void)

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



// ===== continuation @ rva f7e8c71 (image 18f7e8c71) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f7e8c8f */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f7e8c71(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f7fbb53 (image 18f7fbb53) =====

void FUN_18f7fbb53(void)

{
  return;
}



// ===== continuation @ rva f7fb35f (image 18f7fb35f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fb35f(void)

{
  FUN_190ddce00();
  (*_DAT_1829c7270)();
  return;
}



// ===== continuation @ rva f7fdfa2 (image 18f7fdfa2) =====

void FUN_18f7fdfa2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f7fd70b (image 18f7fd70b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fd70b(void)

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



// ===== continuation @ rva f7fb49d (image 18f7fb49d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fb49d(void)

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



// ===== continuation @ rva f7fdf73 (image 18f7fdf73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fdf73(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1829c6940)();
  return;
}



// ===== continuation @ rva f7fd79c (image 18f7fd79c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fd79c(void)

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



// ===== continuation @ rva f7fd84f (image 18f7fd84f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fd84f(void)

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



// ===== continuation @ rva f7fc95a (image 18f7fc95a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fc95a(void)

{
  FUN_190ddfc90();
  (*_DAT_1829c69e0)();
  return;
}



// ===== continuation @ rva f7fca4c (image 18f7fca4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fca4c(void)

{
  undefined4 uStack0000000000000088;
  
  uStack0000000000000088 = 1;
  FUN_190dd72e0();
  (*_DAT_1829c6a40)();
  return;
}



// ===== continuation @ rva f7fce73 (image 18f7fce73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fce73(void)

{
  FUN_190de3220();
  (*_DAT_1829c6930)();
  return;
}



// ===== continuation @ rva f859e25 (image 18f859e25) =====

void FUN_18f859e25(void)

{
  return;
}



// ===== continuation @ rva f85858c (image 18f85858c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85858c(void)

{
  FUN_190de3220();
  (*_DAT_1829d7668)();
  return;
}



// ===== continuation @ rva f858af8 (image 18f858af8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f858af8(void)

{
  FUN_190dd72e0();
  (*_DAT_1829d7ab8)();
  return;
}



// ===== continuation @ rva f859ddd (image 18f859ddd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f859ddd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829d7b78)();
  return;
}



// ===== continuation @ rva f859e39 (image 18f859e39) =====

void FUN_18f859e39(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f859796 (image 18f859796) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f859796(void)

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



// ===== continuation @ rva f859593 (image 18f859593) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f859593(void)

{
  FUN_190dd72e0();
  (*_DAT_1829d7aa8)();
  return;
}



// ===== continuation @ rva f859633 (image 18f859633) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f859633(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000060;
  undefined8 uStack00000000000000b0;
  
  uStack00000000000000b0 = in_stack_00000060;
  (**(code **)(*unaff_RSI + 0x538))();
  FUN_184117d80();
  (*_DAT_1829d7838)();
  return;
}



// ===== continuation @ rva f858675 (image 18f858675) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f858675(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829d7a68)();
  return;
}



// ===== continuation @ rva f858db4 (image 18f858db4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f858db4(void)

{
  FUN_190dd72e0();
  (*_DAT_1829d76e8)();
  return;
}



// ===== continuation @ rva f8a18c4 (image 18f8a18c4) =====

void FUN_18f8a18c4(void)

{
  return;
}



// ===== continuation @ rva f89403e (image 18f89403e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f89403e(void)

{
  FUN_190ddce00();
  (*_DAT_1829e41b8)();
  return;
}



// ===== continuation @ rva f8a0cca (image 18f8a0cca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a0cca(void)

{
  (*_DAT_1829e54c8)();
  return;
}



// ===== continuation @ rva f8a0091 (image 18f8a0091) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a0091(void)

{
  (*_DAT_1829e52a8)();
  return;
}



// ===== continuation @ rva f8a1930 (image 18f8a1930) =====

void FUN_18f8a1930(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f89ed0c (image 18f89ed0c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f89ed0c(void)

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



// ===== continuation @ rva f89eedf (image 18f89eedf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f89eedf(void)

{
  (*_DAT_1829e54c8)();
  return;
}



// ===== continuation @ rva f8a16ea (image 18f8a16ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a16ea(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829e38b8)();
  return;
}



// ===== continuation @ rva f89e002 (image 18f89e002) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f89e002(void)

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



// ===== continuation @ rva f8a118c (image 18f8a118c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a118c(void)

{
  FUN_190de3220();
  (*_DAT_1829e3d58)();
  return;
}



// ===== continuation @ rva f8a0c9e (image 18f8a0c9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8a0c9e(void)

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



// ===== continuation @ rva f8a3010 (image 18f8a3010) =====

void FUN_18f8a3010(void)

{
  return;
}



// ===== continuation @ rva f8a1aec (image 18f8a1aec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a1aec(void)

{
  FUN_190ddce00();
  (*_DAT_1829e7588)();
  return;
}



// ===== continuation @ rva f8a2adb (image 18f8a2adb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a2adb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1829e7908)();
  return;
}



// ===== continuation @ rva f8a2fe4 (image 18f8a2fe4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a2fe4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829e79d8)();
  return;
}



// ===== continuation @ rva f8a21e8 (image 18f8a21e8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8a21e8(void)

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



// ===== continuation @ rva f8a1d2e (image 18f8a1d2e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8a1d2e(void)

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



// ===== continuation @ rva f8a293f (image 18f8a293f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a293f(void)

{
  FUN_190dd72e0();
  (*_DAT_1829e79c8)();
  return;
}



// ===== continuation @ rva f8a2685 (image 18f8a2685) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a2685(void)

{
  FUN_190dd72e0();
  (*_DAT_1829e7a78)();
  return;
}



// ===== continuation @ rva f8a2c9b (image 18f8a2c9b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8a2c9b(void)

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



// ===== continuation @ rva f8a28dd (image 18f8a28dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8a28dd(void)

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



// ===== continuation @ rva f8b18e9 (image 18f8b18e9) =====

void FUN_18f8b18e9(void)

{
  return;
}



// ===== continuation @ rva f8a3201 (image 18f8a3201) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a3201(void)

{
  FUN_190ddce00();
  (*_DAT_1829e8f78)();
  return;
}



// ===== continuation @ rva f8b1ec4 (image 18f8b1ec4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8b1ec4(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1829e7de8)();
  return;
}



// ===== continuation @ rva f8afda4 (image 18f8afda4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8afda4(void)

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



// ===== continuation @ rva f8b1f2f (image 18f8b1f2f) =====

void FUN_18f8b1f2f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f8aa389 (image 18f8aa389) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8aa389(void)

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



// ===== continuation @ rva f8aacd7 (image 18f8aacd7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8aacd7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829e7f18)();
  return;
}



// ===== continuation @ rva f8a9927 (image 18f8a9927) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8a9927(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829e7ea8)();
  return;
}



// ===== continuation @ rva f8b0955 (image 18f8b0955) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8b0955(void)

{
  (*_DAT_1829e9548)();
  return;
}



// ===== continuation @ rva f8b0642 (image 18f8b0642) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8b0642(void)

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



// ===== continuation @ rva f8b0b09 (image 18f8b0b09) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8b0b09(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1829e8b18)();
  return;
}



// ===== continuation @ rva f8aa3ad (image 18f8aa3ad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8aa3ad(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  undefined8 in_stack_000000a8;
  
  FUN_184117d80(in_stack_00000038,in_stack_000000a8);
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



// ===== continuation @ rva f8ab404 (image 18f8ab404) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8ab404(void)

{
  (*_DAT_1829e9818)();
  return;
}



// ===== continuation @ rva f7fe161 (image 18f7fe161) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fe161(void)

{
  FUN_190dd72e0();
  (*_DAT_1829c7a10)();
  return;
}



// ===== continuation @ rva f7fe0ee (image 18f7fe0ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fe0ee(void)

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



// ===== continuation @ rva f7feb0b (image 18f7feb0b) =====

void FUN_18f7feb0b(void)

{
  return;
}



// ===== continuation @ rva f7fe3c3 (image 18f7fe3c3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fe3c3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829c7920)();
  return;
}



// ===== continuation @ rva f7feaeb (image 18f7feaeb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7feaeb(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829c7b80)();
  return;
}



// ===== continuation @ rva f7fe1dd (image 18f7fe1dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fe1dd(void)

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



// ===== continuation @ rva f7fe127 (image 18f7fe127) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fe127(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829c7a40)();
  return;
}



// ===== continuation @ rva f7fe6b0 (image 18f7fe6b0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fe6b0(void)

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



// ===== continuation @ rva f7feb15 (image 18f7feb15) =====

void FUN_18f7feb15(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f7fe2b9 (image 18f7fe2b9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fe2b9(void)

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



// ===== continuation @ rva f7fe9b1 (image 18f7fe9b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fe9b1(void)

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



// ===== continuation @ rva f7fe638 (image 18f7fe638) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fe638(void)

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



// ===== continuation @ rva f7fed2c (image 18f7fed2c) =====

void FUN_18f7fed2c(void)

{
  return;
}



// ===== continuation @ rva f7fec4d (image 18f7fec4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fec4d(void)

{
  FUN_190ddfc90();
  (*_DAT_1829c7bf0)();
  return;
}



// ===== continuation @ rva f7fecf3 (image 18f7fecf3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fecf3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829c7c10)();
  return;
}



// ===== continuation @ rva f7fed34 (image 18f7fed34) =====

void FUN_18f7fed34(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f7fec80 (image 18f7fec80) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fec80(void)

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



// ===== continuation @ rva f7fed0c (image 18f7fed0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fed0c(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829c7c10)();
  return;
}



// ===== continuation @ rva f7fecba (image 18f7fecba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fecba(void)

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



// ===== continuation @ rva f7feca4 (image 18f7feca4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7feca4(void)

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



// ===== continuation @ rva f7fed9a (image 18f7fed9a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fed9a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1829c7c50)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva f7feda6 (image 18f7feda6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7feda6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva f7fedc3 (image 18f7fedc3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fedc3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1829c7c60)();
  return;
}



// ===== continuation @ rva f7fedcc (image 18f7fedcc) =====

void FUN_18f7fedcc(void)

{
  return;
}



// ===== continuation @ rva f7fef1c (image 18f7fef1c) =====

void FUN_18f7fef1c(void)

{
  return;
}



// ===== continuation @ rva f7fee3d (image 18f7fee3d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fee3d(void)

{
  FUN_190ddfc90();
  (*_DAT_1829c7cb0)();
  return;
}



// ===== continuation @ rva f7feefc (image 18f7feefc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7feefc(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829c7c80)();
  return;
}



// ===== continuation @ rva f7feee3 (image 18f7feee3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7feee3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829c7c80)();
  return;
}



// ===== continuation @ rva f7feeaa (image 18f7feeaa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7feeaa(void)

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



// ===== continuation @ rva f7fee70 (image 18f7fee70) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fee70(void)

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



// ===== continuation @ rva f7fee94 (image 18f7fee94) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fee94(void)

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



// ===== continuation @ rva f7fef8a (image 18f7fef8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f7fef8a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1829c7ce0)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva f7fef96 (image 18f7fef96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f7fef96(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva f7fefbd (image 18f7fefbd) =====

undefined4 * FUN_18f7fefbd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva f7ff168 (image 18f7ff168) =====

void FUN_18f7ff168(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00018f7ff194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829c8108 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva f7ff113 (image 18f7ff113) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f7ff14a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f7ff113(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f81490b (image 18f81490b) =====

void FUN_18f81490b(void)

{
  return;
}



// ===== continuation @ rva f81479d (image 18f81479d) =====

undefined8 thunk_FUN_18f7ff14d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva f81192a (image 18f81192a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f81192a(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x48) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x48),*(undefined8 *)(unaff_RBP + 0x10));
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f81467a (image 18f81467a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f81467a(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x48);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50,0);
  cVar2 = (**(code **)(*plVar1 + 0x720))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f800405 (image 18f800405) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f800405(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 unaff_XMM6 [16];
  uint uVar11;
  undefined1 unaff_XMM7 [16];
  ulonglong unaff_XMM9_Qa;
  
  uVar2 = (~param_1 + 0xef49cafe235763c2) * ((param_2 ^ 0xd0859f8d72bb493a) + param_3);
  uVar2 = (uVar2 | in_RAX) + (uVar2 & in_RAX);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d4d8 = func_0x00018f827180((uVar2 | 0x3fcc557351ec2afb) + (uVar2 & 0x3fcc557351ec2afb));
  _DAT_18340d140 =
       (_DAT_18340d140 ^ _DAT_18340d4d8 & 0xfffffffffff) + 0xffcddffff7df6bdf ^ 0x218e061609460b42;
  _DAT_18340d340 =
       (_DAT_18340d340 * -0x1ac089a02ff8f853 ^ _DAT_18340d140) + (_DAT_18340d4d8 & 0xfffffffffff);
  _DAT_18340d568 = _DAT_18340d340 ^ _DAT_18340d140;
  _DAT_18340d6d0 = 0xffcddffff7df6bdf;
  uVar2 = (~_DAT_18340d6e8 + 0x1f3b3fcaced1b3d2) *
          ((_DAT_18340d298 ^ 0xfd4cd30e9aa8cbc6) + (_DAT_18340d298 & 0x7d4cd30e9aa8cbc6) * 2);
  uVar2 = (uVar2 | _DAT_18340d380) + (uVar2 & _DAT_18340d380);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d658 = func_0x00018f827180((uVar2 | 0xe277ecc454797817) + (uVar2 & 0xe277ecc454797817));
  _DAT_18340d6e8 =
       (_DAT_18340d6e8 ^ _DAT_18340d658 ^ 0xfd4cd30e1e8ae8e3) + 0xe277ecc4d05b5b32 ^
       0x7c6cc903b456ad19;
  _DAT_18340d358 =
       (_DAT_18340d358 * 0x3d8f3fb46f415989 ^ _DAT_18340d6e8) +
       (_DAT_18340d658 ^ 0xfd4cd30e1e8ae8e3);
  _DAT_18340d168 = _DAT_18340d358 ^ _DAT_18340d6e8;
  _DAT_18340d290 = 0xe277ecc4d05b5b32;
  uVar2 = (~_DAT_18340d200 + 0x1f9e8d3fdfc5b768) *
          ((_DAT_18340d688 ^ 0x84222325) + (ulonglong)((uint)_DAT_18340d688 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18340d5b8) + (uVar2 & _DAT_18340d5b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d630 = func_0x00018f827180((uVar2 | 0x1f9e8d3f5be79442) + (uVar2 & 0x1f9e8d3f5be79442));
  uVar2 = (_DAT_18340d630 & 0x3ffffffffff) * 0x1000;
  _DAT_18340d358 = (_DAT_18340d358 ^ uVar2) + 0xe06172c0203a4899 ^ 0x81fed68114c2b128;
  _DAT_18340d498 = (_DAT_18340d498 * -0x3d3be381565e92b5 ^ _DAT_18340d358) + uVar2;
  _DAT_18340d6e0 = _DAT_18340d498 ^ _DAT_18340d358;
  _DAT_18340d6d8 = 0xe06172c0203a4899;
  _DAT_18340d300 = func_0x00018f827180(_DAT_18340d108 ^ 0x3eab788437efa44d);
  _DAT_18340d6d0 = _DAT_18340d598 ^ _DAT_18340d300 ^ 0xfffffffffffffffe;
  _DAT_18340d6a8 = (_DAT_18340d6a8 ^ _DAT_18340d300) - 2 ^ 0x13ec961bc185674f;
  _DAT_18340d110 = (_DAT_18340d110 * 0xe0a9c32d76e628d ^ _DAT_18340d6a8) + _DAT_18340d300;
  _DAT_18340d600 = _DAT_18340d110 ^ _DAT_18340d6a8;
  _DAT_18340d180 = _DAT_18340d508 ^ 0xfffffffffffffffe;
  _DAT_18340d210 = 0xfffffffffffffffe;
  uVar2 = (_DAT_18340d270 ^ _DAT_1829c90c0) + _DAT_18340d680 + 0x84222325;
  uVar7 = (_DAT_18340d680 ^ _UNK_1829c90c8) + _DAT_18340d270 + 0xb54d8e93c561e998;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18340d270 ^ _DAT_1829c90c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d680 ^ _UNK_1829c90c8;
  _DAT_18340d3c8 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d270 + 0xb54d8e93c561e998) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18340d680 + 0x84222325));
  _DAT_18340d6e8 = _DAT_18340d568 * -0x7846517a861e70ef;
  _DAT_18340d528 = _DAT_18340d528 + 0x4ab2716c3a9e1668 ^ 0x4d45ca390ba3a796;
  _DAT_18340d568 = _DAT_18340d6e8 ^ _DAT_18340d528;
  _DAT_18340d220 = 0x4ab2716c3a9e1668;
  _DAT_18340d370 = func_0x00018f827180(_DAT_18340d660 ^ 0x53f3ae79c0f0937c);
  _DAT_18340d218 = _DAT_18340d370 ^ 0xfffffffffffffffe;
  _DAT_18340d260 = (_DAT_18340d260 ^ _DAT_18340d218) + 0xb54d8e93c561e996 ^ 0xafdf797453d0dac2;
  _DAT_18340d218 =
       ((_DAT_18340d4e8 ^ _DAT_18340d218 ^ 0xb54d8e93c561e996) * 0x2485d1521f064aab ^ _DAT_18340d260
       ) + _DAT_18340d218;
  _DAT_18340d4b0 = _DAT_18340d218 ^ _DAT_18340d260;
  _DAT_18340d5e0 = 0xb54d8e93c561e996;
  uVar2 = (~_DAT_18340d218 + 0x4ab2716c3a9e1669) *
          ((_DAT_18340d508 ^ 0xb54d8e934143cab3) + (_DAT_18340d508 & 0x354d8e934143cab3) * 2);
  uVar2 = (uVar2 | _DAT_18340d288) + (uVar2 & _DAT_18340d288);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d4c0 = func_0x00018f827180((uVar2 | 0xffffffff7bdddcdb) + (uVar2 & 0xffffffff7bdddcdb));
  _DAT_18340d1f8 = _DAT_18340d658 ^ _DAT_18340d4c0 ^ 0xfffffffffffffffe;
  _DAT_18340d2f8 = (_DAT_18340d2f8 ^ _DAT_18340d4c0) - 2 ^ 0xd1ab5e780a5a98d8;
  _DAT_18340d470 = (_DAT_18340d470 * 0xd497d44232cad2f ^ _DAT_18340d2f8) + _DAT_18340d4c0;
  _DAT_18340d4c8 = _DAT_18340d470 ^ _DAT_18340d2f8;
  _DAT_18340d4d0 = 0xfffffffffffffffe;
  _DAT_18340d6d8 = func_0x00018f827180(_DAT_18340d4b8 ^ 0xcd15274ad39b4f55);
  _DAT_18340d678 =
       (_DAT_18340d678 ^ _DAT_18340d6d8 & 0x7fffffffffffffff) + 0x56266002c50de110 ^
       0x5f7e25ab0665b6c6;
  _DAT_18340d698 =
       (_DAT_18340d698 * -0x3c6c9e7f93b3cdc9 ^ _DAT_18340d678) +
       (_DAT_18340d6d8 & 0x7fffffffffffffff);
  _DAT_18340d150 = _DAT_18340d698 ^ _DAT_18340d678;
  _DAT_18340d468 = 0x56266002c50de110;
  uVar2 = (_DAT_18340d5a8 ^ _DAT_1829c90d0) + _DAT_18340d680 + 0xa9d99ffdbed03dcb;
  uVar7 = (_DAT_18340d680 ^ _UNK_1829c90d8) + _DAT_18340d5a8 + 0x56266002c50de110;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18340d5a8 ^ _DAT_1829c90d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d680 ^ _UNK_1829c90d8;
  _DAT_18340d5b0 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d5a8 + 0x56266002c50de110) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18340d680 + 0xa9d99ffdbed03dcb));
  uVar2 = _DAT_18340d5b0 ^ 0xae415e9734671ce0;
  _DAT_18340d138 = _DAT_18340d648 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_18340d5a0 = (_DAT_18340d5a0 ^ uVar2) - 2 ^ 0xe3223532b89c6bc8;
  _DAT_18340d380 = (_DAT_18340d380 * -0x680b2d9a3742a61f ^ _DAT_18340d5a0) + uVar2;
  _DAT_18340d608 = _DAT_18340d380 ^ _DAT_18340d5a0;
  _DAT_18340d678 = 0xfffffffffffffffe;
  uVar2 = (_DAT_18340d660 ^ _DAT_1829c90e0) + _DAT_18340d6b8 + 0xffcddfff73fd48fa;
  uVar7 = (_DAT_18340d6b8 ^ _UNK_1829c90e8) + _DAT_18340d660 + 0xe277ecc4d05b5b32;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18340d660 ^ _DAT_1829c90e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d6b8 ^ _UNK_1829c90e8;
  _DAT_18340d400 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d660 + 0xe277ecc4d05b5b32) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18340d6b8 + 0xffcddfff73fd48fa));
  _DAT_18340d5f0 = (_DAT_18340d5f0 ^ _DAT_18340d1b0) + 0x1dba333b278430ed ^ 0xc175a0526ddaa703;
  _DAT_18340d3c0 = (_DAT_18340d3c0 * -0x19a29cb953e543d ^ _DAT_18340d5f0) + _DAT_18340d1b0;
  _DAT_18340d188 = _DAT_18340d3c0 ^ _DAT_18340d5f0;
  _DAT_18340d2c0 = 0x1dba333b278430ed;
  _DAT_18340d1c8 = func_0x00018f827180(_DAT_18340d390 + 0xf8eda560b82d9de4 ^ 0xfc);
  uVar2 = ((_DAT_18340d1c8 ^ 0xffcddffff7df6bdf) << 0x3b |
          (_DAT_18340d1c8 ^ 0xffcddffff7df6bdf) >> 5) ^ 0xffcddffff7df6bdf;
  _DAT_18340d630 = (_DAT_18340d630 ^ uVar2) + 0xe245ccc4d05b4b12 ^ 0x88129aa42e773b27;
  _DAT_18340d288 = (_DAT_18340d288 * 0x7248332e25b743b3 ^ _DAT_18340d630) + uVar2;
  _DAT_18340d3a0 = _DAT_18340d288 ^ _DAT_18340d630;
  _DAT_18340d6c8 = 0xe245ccc4d05b4b12;
  uVar2 = (~_DAT_18340d2c8 + 0xc48b9989a0b69625) *
          ((_DAT_18340d1f8 ^ 0x1dba333ba3a613c8) + (_DAT_18340d1f8 & 0x1dba333ba3a613c8) * 2);
  uVar2 = (uVar2 | _DAT_18340d1e0) + (uVar2 & _DAT_18340d1e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d108 = func_0x00018f827180((uVar2 | 0xd931aab2031085ec) + (uVar2 & 0xd931aab2031085ec));
  uVar2 = (_DAT_18340d108 ^ 0xd89f67dcebbfbf54) & 0x7fffffffffffffff;
  _DAT_18340d2b8 = _DAT_18340d3c0 ^ uVar2 ^ 0xe245ccc4c83ac711;
  _DAT_18340d158 = (_DAT_18340d158 ^ uVar2) + 0xe245ccc4c83ac711 ^ 0x394942fbb15bfc7f;
  _DAT_18340d2d8 = (_DAT_18340d2d8 * 0x4abc8ace17a46efb ^ _DAT_18340d158) + uVar2;
  _DAT_18340d660 = _DAT_18340d2d8 ^ _DAT_18340d158;
  _DAT_18340d4a0 = -0x1dba333b37c538ef;
  _DAT_18340d258 = func_0x00018f827180(_DAT_18340d5e0 ^ 0xffdf00841affe1fb);
  _DAT_18340d598 = _DAT_18340d598 ^ _DAT_18340d258 ^ 0xcfa823f2a6c1fed;
  _DAT_18340d4a0 = (_DAT_18340d4a0 * 0x49424a8b6ccb2ac5 ^ _DAT_18340d598) + _DAT_18340d258;
  _DAT_18340d558 = _DAT_18340d4a0 ^ _DAT_18340d598;
  _DAT_18340d248 = 0;
  uVar2 = (~_DAT_18340d3f0 + 0x32200008209421) *
          ((_DAT_18340d2b0 ^ 0xffcddfff73fd48fa) + (_DAT_18340d2b0 & 0x7fcddfff73fd48fa) * 2);
  uVar2 = (uVar2 | _DAT_18340d600) + (uVar2 & _DAT_18340d600);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d618 = _DAT_18340d258;
  _DAT_18340d210 = func_0x00018f827180((uVar2 | 0xffffffff7bdddcda) + (uVar2 & 0xffffffff7bdddcda));
  _DAT_18340d2d0 = _DAT_18340d2d0 ^ _DAT_18340d210 ^ 0xffcddffff7df6bdf ^ 0xfd06ab4bbc8651d;
  _DAT_18340d100 =
       (_DAT_18340d100 * 0x22fc78c7e97ac8bd ^ _DAT_18340d2d0) +
       (_DAT_18340d210 ^ 0xffcddffff7df6bdf);
  _DAT_18340d6d8 = _DAT_18340d100 ^ _DAT_18340d2d0;
  _DAT_18340d658 = 0;
  _DAT_18340d648 = func_0x00018f827180(_DAT_18340d438 ^ 0x1cff7c1cffdd3e);
  _DAT_18340d270 = _DAT_18340d270 ^ _DAT_18340d2a8 & 0x3fffffffffff ^ 0x6772e6464a3defb0;
  _DAT_18340d378 =
       (_DAT_18340d378 * -0x161cb0773ede358d ^ _DAT_18340d270) + (_DAT_18340d2a8 & 0x3fffffffffff);
  _DAT_18340d510 = _DAT_18340d378 ^ _DAT_18340d270;
  _DAT_18340d308 = 0;
  _DAT_18340d650 = func_0x00018f827180(_DAT_18340d208 ^ 0x442b4ce7dbbb2531);
  _DAT_18340d620 = _DAT_18340d4c8 ^ _DAT_18340d650 ^ 0xfffffffffffffffe;
  _DAT_18340d6b0 = (_DAT_18340d6b0 ^ _DAT_18340d650) - 2 ^ 0xe498a9b26642a04d;
  _DAT_18340d568 = (_DAT_18340d568 * 0x4927c28eeb17a59d ^ _DAT_18340d6b0) + _DAT_18340d650;
  _DAT_18340d6c8 = _DAT_18340d568 ^ _DAT_18340d6b0;
  _DAT_18340d550 = -2;
  uVar2 = unaff_RBX ^ 0x84222325 ^ _DAT_18340d1a8;
  lVar3 = (unaff_RBX ^ 0x84222325) + _DAT_18340d678;
  uVar7 = uVar2 + lVar3;
  uVar8 = (_DAT_18340d678 ^ 0xfffffffffffffffe) + (_DAT_18340d1a8 - 2);
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar2;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18340d678 ^ 0xfffffffffffffffe;
  _DAT_18340d670 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d1a8 - 2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  uVar2 = unaff_RBX * -2 ^ _DAT_18340d670;
  auVar5._8_4_ = 0xffffffff;
  auVar5._0_8_ = 0xffffffffffffffff;
  auVar5._12_4_ = 0xffffffff;
  uVar4 = SUB164(auVar5 ^ unaff_XMM7,0);
  uVar6 = unaff_XMM6._0_4_;
  uVar9 = uVar6 | (uint)DAT_1800b8c60;
  uVar10 = SUB164(unaff_XMM6 & _DAT_1800b8c60,0);
  uVar11 = SUB164(unaff_XMM7 ^ _DAT_1800b8c60,0);
  uVar7 = (((ulonglong)uVar4 * (ulonglong)_DAT_1829c9110 +
            ((SUB168(auVar5 ^ unaff_XMM7,0) >> 0x20) * (ulonglong)_DAT_1829c9110 +
             (ulonglong)_DAT_1829c90f0 * (ulonglong)uVar4 << 0x20) +
           (ulonglong)_DAT_1829c9100 * (ulonglong)unaff_XMM7._0_4_ +
           ((unaff_XMM7._0_8_ >> 0x20) * (ulonglong)_DAT_1829c9100 +
            (ulonglong)unaff_XMM7._0_4_ * (ulonglong)_DAT_1829c90f0 << 0x20)) -
          ((ulonglong)uVar11 * (ulonglong)_DAT_1829c91b0 +
           ((ulonglong)_DAT_1829c91c0 * (ulonglong)uVar11 +
            (SUB168(unaff_XMM7 ^ _DAT_1800b8c60,0) >> 0x20) * (ulonglong)_DAT_1829c91b0 << 0x20) +
           ((ulonglong)uVar9 * (ulonglong)_DAT_1829c9190 + _DAT_1829c91a0 << 0x20) +
           (ulonglong)_DAT_1829c9180 * (ulonglong)uVar9 +
          (ulonglong)uVar10 * (ulonglong)_DAT_1829c9160 +
          ((ulonglong)_DAT_1829c9170 * (ulonglong)uVar10 +
           (SUB168(unaff_XMM6 & _DAT_1800b8c60,0) >> 0x20) * (ulonglong)_DAT_1829c9160 << 0x20) +
          ((ulonglong)uVar6 * (ulonglong)_DAT_1829c9150 +
           (unaff_XMM9_Qa & 0xffffffff) * (ulonglong)_DAT_1829c9140 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_1829c9140)) + 0xadb7c7db6b28a1f9;
  _DAT_18340d6e8 = _DAT_18340d1e8 ^ uVar2 ^ uVar7;
  _DAT_18340d528 = (_DAT_18340d528 ^ uVar2) + uVar7 ^ 0xa1a3646566817e27;
  _DAT_18340d4e0 = (_DAT_18340d4e0 * 0x1566d4cf9466431f ^ _DAT_18340d528) + uVar2;
  _DAT_18340d150 = _DAT_18340d4e0 ^ _DAT_18340d528;
  _DAT_18340d168 = uVar7;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar7) = 0x2d;
  *(ulonglong *)(unaff_RBP + 0x30) = uVar7;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  lVar3 = _DAT_18340d3a0 + 0xc1bc8cdb9635ce5;
  lVar1 = _DAT_18340d270 + 0xeb8170f0db509154;
  uVar2 = (_DAT_18340d270 ^ _DAT_1829c91d0) + lVar3;
  uVar8 = (_DAT_18340d3a0 ^ _UNK_1829c91d8) + lVar1;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18340d270 ^ _DAT_1829c91d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18340d3a0 ^ _UNK_1829c91d8;
  *(ulonglong *)(unaff_RBP + 0x50) = uVar7 + unaff_RBP + -0x50;
  _DAT_18340d4d8 =
       func_0x00018f827180((uVar8 << 0x1d | uVar8 >> 0x23) - lVar1 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  _DAT_18340d140 =
       (_DAT_18340d140 ^ _DAT_18340d4d8 & 0xfffffffffffff000) + 0xef9bf8fdff51ffd4 ^
       0x327291741a97a1ba;
  _DAT_18340d128 =
       (_DAT_18340d128 * -0xbf6077a5f51e5e9 ^ _DAT_18340d140) +
       (_DAT_18340d4d8 & 0xfffffffffffff000);
  _DAT_18340d540 = _DAT_18340d128 ^ _DAT_18340d140;
  _DAT_18340d630 = 0xef9bf8fdff51ffd4;
  uVar2 = (~_DAT_18340d290 + 0xcf4152f43a4e4050) *
          ((_DAT_18340d408 ^ 0xc297cb7548e06739) + (_DAT_18340d408 & 0x4297cb7548e06739) * 2);
  uVar2 = (uVar2 | _DAT_18340d488) + (uVar2 & _DAT_18340d488);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d288 = func_0x00018f827180((uVar2 | 0xdd6998172ae2776) + (uVar2 & 0xdd6998172ae2776));
  _DAT_18340d398 = (_DAT_18340d398 ^ _DAT_18340d490) + 0xdd69981f68c0453 ^ 0xb660f41e65365c93;
  _DAT_18340d550 = (_DAT_18340d550 * -0x1b80bf74e0c27ab7 ^ _DAT_18340d398) + _DAT_18340d490;
  _DAT_18340d3b8 = _DAT_18340d550 ^ _DAT_18340d398;
  _DAT_18340d310 = 0xdd69981f68c0453;
  _DAT_18340d5d0 = func_0x00018f827180(_DAT_18340d5c8 + 0xc59f3e8b1d1c84e7 ^ 0xc1);
  uVar2 = (_DAT_18340d5d0 ^ 0x183e65ca11af8000) << 0xe |
          (_DAT_18340d5d0 ^ 0x183e65ca11af8000) >> 0x32;
  _DAT_18340d100 = (_DAT_18340d100 ^ uVar2) + 0xe7c19a35ee508000 ^ 0xe8d1c278c7673ed7;
  _DAT_18340d658 = (_DAT_18340d658 * 0x1b64ba65c3ac5877 ^ _DAT_18340d100) + uVar2;
  _DAT_18340d4e0 = _DAT_18340d658 ^ _DAT_18340d100;
  _DAT_18340d6c0 = 0xe7c19a35ee508000;
  uVar2 = func_0x00018f827180(_DAT_18340d2c0 ^ 0x3a9cf16b2fa47582);
  uVar2 = uVar2 ^ 0x183e65ca11af8000;
  _DAT_18340d358 = _DAT_18340d398 ^ uVar2 ^ 0x183e65ca11af8015;
  _DAT_18340d1e0 = (_DAT_18340d1e0 ^ uVar2) + 0x183e65ca11af8015 ^ 0x2154893b879ea2db;
  _DAT_18340d188 = (_DAT_18340d188 * -0x57357995aff5a71b ^ _DAT_18340d1e0) + uVar2;
  _DAT_18340d698 = _DAT_18340d188 ^ _DAT_18340d1e0;
  _DAT_18340d5d8 = 0x183e65ca11af8015;
  uVar2 = (~_DAT_18340d5a8 + 0xbdfe6ef0793203d1) *
          ((_DAT_18340d1a8 ^ 0x84222325) + (ulonglong)((uint)_DAT_18340d1a8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18340d340) + (uVar2 & _DAT_18340d340);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d568 = func_0x00018f827180((uVar2 | 0xbdfe6ef0fd1020f5) + (uVar2 & 0xbdfe6ef0fd1020f5));
  _DAT_18340d540 = (_DAT_18340d540 ^ _DAT_18340d568) + 0x4201910f86cdfc30 ^ 0xf2f9fc6507119162;
  _DAT_18340d398 = (_DAT_18340d398 * -0x15d17f457adecf53 ^ _DAT_18340d540) + _DAT_18340d568;
  _DAT_18340d418 = _DAT_18340d398 ^ _DAT_18340d540;
  _DAT_18340d3a8 = 0x4201910f86cdfc30;
  _DAT_18340d638 = func_0x00018f827180(_DAT_18340d240 + 0x2fdff29b2051ef6cU ^ 0x71);
  uVar2 = _DAT_18340d638 ^ 0x95df19b9f11a5005;
  _DAT_18340d4a0 = _DAT_18340d5e0 ^ uVar2 ^ 0xbdfe6ef0793203e5;
  _DAT_18340d258 = (_DAT_18340d258 ^ uVar2) + 0xbdfe6ef0793203e5 ^ 0x6184c211709ccf36;
  _DAT_18340d2f8 = (_DAT_18340d2f8 * -0x6a6fa782be593f23 ^ _DAT_18340d258) + uVar2;
  _DAT_18340d458 = _DAT_18340d2f8 ^ _DAT_18340d258;
  _DAT_18340d538 = 0xbdfe6ef0793203e5;
  uVar2 = (_DAT_18340d598 ^ _DAT_1829c91e0) + _DAT_18340d358 + 0xbdfe6ef0fd1020c0;
  uVar7 = (_DAT_18340d358 ^ _UNK_1829c91e8) + _DAT_18340d598 + 0x4201910f86cdfc30;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18340d598 ^ _DAT_1829c91e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d358 ^ _UNK_1829c91e8;
  _DAT_18340d3d8 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d598 + 0x4201910f86cdfc30) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18340d358 + 0xbdfe6ef0fd1020c0));
  _DAT_18340d378 = _DAT_18340d5e0 ^ _DAT_18340d3d8 ^ 0x15;
  _DAT_18340d298 = (_DAT_18340d298 ^ _DAT_18340d3d8) + 0x15 ^ 0x28ee9949489543d8;
  _DAT_18340d688 = (_DAT_18340d688 * -0x622c4d76199aab9 ^ _DAT_18340d298) + _DAT_18340d3d8;
  _DAT_18340d3f8 = _DAT_18340d688 ^ _DAT_18340d298;
  _DAT_18340d290 = 0x15;
  uVar2 = (_DAT_18340d4e0 ^ _DAT_1829c91f0) + _DAT_18340d1c0 + 0x84222325;
  uVar7 = (_DAT_18340d1c0 ^ _UNK_1829c91f8) + _DAT_18340d4e0 + 0x84ce712ec2689f00;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18340d4e0 ^ _DAT_1829c91f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d1c0 ^ _UNK_1829c91f8;
  _DAT_18340d248 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d4e0 + 0x84ce712ec2689f00) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18340d1c0 + 0x84222325));
  _DAT_18340d560 = (_DAT_18340d560 ^ _DAT_18340d548) + 0x7b318ed13d976100 ^ 0xcba1c4e302dcffc9;
  _DAT_18340d1b8 = (_DAT_18340d1b8 * -0x15b9749d341671e9 ^ _DAT_18340d560) + _DAT_18340d548;
  _DAT_18340d3f8 = _DAT_18340d1b8 ^ _DAT_18340d560;
  _DAT_18340d210 = 0x7b318ed13d976100;
  _DAT_18340d6f8 = func_0x00018f827180(_DAT_18340d6a0 ^ 0x1c27cc8b621e0f49);
  uVar2 = _DAT_18340d6f8 << 0x28 & 0x7ffffffffffff | _DAT_18340d6f8 >> 0x18;
  uVar7 = (_DAT_18340d6f8 << 0x28 & 0x7ffffffffffff | _DAT_18340d6f8 >> 0x18) >> 1 | uVar2;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar2;
  _DAT_18340d548 = _DAT_18340d440 ^ uVar2 ^ 0xfd72927ff5de0427;
  _DAT_18340d320 = (_DAT_18340d320 ^ uVar2) + 0xfd72927ff5de0427 ^ 0xc567312f1c11bc39;
  _DAT_18340d430 = (_DAT_18340d430 * 0x29b837c9a4fb9013 ^ _DAT_18340d320) + uVar2;
  _DAT_18340d2d0 = _DAT_18340d430 ^ _DAT_18340d320;
  _DAT_18340d640 = 0xfd72927ff5de0427;
  uVar2 = (~_DAT_18340d238 + 0xdd69981f68c0454) *
          ((_DAT_18340d540 ^ 0xef9bf8fd7b73dcf1) + (_DAT_18340d540 & 0x6f9bf8fd7b73dcf1) * 2);
  uVar2 = (uVar2 | _DAT_18340d5c8) + (uVar2 & _DAT_18340d5c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d340 = func_0x00018f827180((uVar2 | 0xe24d617c8dffd8a2) + (uVar2 & 0xe24d617c8dffd8a2));
  uVar2 = _DAT_18340d340 - (_DAT_18340d340 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ~((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
           _DAT_18340d340) & 0xef9bf8fdff51ffd4;
  _DAT_18340d450 = (_DAT_18340d450 ^ uVar2) + 0xe24d617c09ddfb87 ^ 0x8843d71900b04aed;
  _DAT_18340d410 = (_DAT_18340d410 * -0x7424587efc803dc7 ^ _DAT_18340d450) + uVar2;
  _DAT_18340d270 = _DAT_18340d410 ^ _DAT_18340d450;
  _DAT_18340d568 = 0xe24d617c09ddfb87;
  uVar2 = (~_DAT_18340d618 + 0xdd69981f68c0454) *
          ((_DAT_18340d208 ^ 0xef9bf8fd7b73dcf1) + (_DAT_18340d208 & 0x6f9bf8fd7b73dcf1) * 2);
  uVar2 = (uVar2 | _DAT_18340d1c8) + (uVar2 & _DAT_18340d1c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d488 = func_0x00018f827180((uVar2 | 0xe24d617c8dffd8a2) + (uVar2 & 0xe24d617c8dffd8a2));
  uVar2 = (_DAT_18340d488 & 0x7fffffffffffffff) >> 1 | _DAT_18340d488 & 0x7fffffffffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18340d488 & 0x7fffffffffffffff;
  _DAT_18340d3d0 = (_DAT_18340d3d0 ^ uVar2) + 0xd929881f6000450 ^ 0xb250f2b91eb509e5;
  _DAT_18340d2e0 = (_DAT_18340d2e0 * -0x7244297b78b52977 ^ _DAT_18340d3d0) + uVar2;
  _DAT_18340d2d8 = _DAT_18340d2e0 ^ _DAT_18340d3d0;
  _DAT_18340d678 = 0xd929881f6000450;
  uVar2 = (_DAT_18340d5f8 ^ _DAT_1829c9200) + _DAT_18340d1b0 + 0xe24d617c8dffd8a2;
  uVar7 = (_DAT_18340d1b0 ^ _UNK_1829c9208) + _DAT_18340d5f8 + 0x1b253103ec0008a0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18340d5f8 ^ _DAT_1829c9200;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d1b0 ^ _UNK_1829c9208;
  _DAT_18340d248 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d5f8 + 0x1b253103ec0008a0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18340d1b0 + 0xe24d617c8dffd8a2));
  _DAT_18340d258 = _DAT_18340d3a8 ^ _DAT_18340d688 ^ 0xfd72927ff5de0427;
  _DAT_18340d3a0 = (_DAT_18340d3a0 ^ _DAT_18340d688) + 0xfd72927ff5de0427 ^ 0x80f4c32180485278;
  _DAT_18340d390 = (_DAT_18340d390 * 0x26af6a709bd6b3a5 ^ _DAT_18340d3a0) + _DAT_18340d688;
  _DAT_18340d440 = _DAT_18340d390 ^ _DAT_18340d3a0;
  _DAT_18340d1e8 = 0xfd72927ff5de0427;
  uVar2 = (~_DAT_18340d178 + 0xfd72927ff5de0428) *
          ((_DAT_18340d428 ^ 0xfd72927f71fc2702) + (_DAT_18340d428 & 0x7d72927f71fc2702) * 2);
  uVar2 = (uVar2 | _DAT_18340d368) + (uVar2 & _DAT_18340d368);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d308 = func_0x00018f827180((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_18340d508 = _DAT_18340d308 & 0x7fffffffffffffff;
  _DAT_18340d568 = _DAT_18340d568 ^ _DAT_18340d508 ^ 0xa6bcf1da073b51d0;
  _DAT_18340d1e0 = (_DAT_18340d1e0 * -0x14fc8054933adcbb ^ _DAT_18340d568) + _DAT_18340d508;
  _DAT_18340d1b0 = _DAT_18340d1e0 ^ _DAT_18340d568;
  _DAT_18340d5d8 = 0;
  _DAT_18340d2a8 = func_0x00018f827180(_DAT_18340d370 + 0x2300842fffddff ^ 0x19);
  uVar2 = _DAT_18340d2a8 << 0x37 | _DAT_18340d2a8 >> 9;
  _DAT_18340d1e8 = _DAT_18340d2c8 ^ uVar2 ^ 0x15;
  _DAT_18340d348 = (_DAT_18340d348 ^ uVar2) + 0x15 ^ 0xb08e9d25f22371ad;
  _DAT_18340d508 = (_DAT_18340d508 * 0x776c626960660b57 ^ _DAT_18340d348) + uVar2;
  _DAT_18340d4d8 = _DAT_18340d508 ^ _DAT_18340d348;
  _DAT_18340d478 = 0x15;
  uVar2 = ~_DAT_18340d2f8 *
          ((_DAT_18340d3e0 ^ 0xef9bf8fd7b73dcf1) + (_DAT_18340d3e0 & 0x6f9bf8fd7b73dcf1) * 2);
  uVar2 = (uVar2 | _DAT_18340d480) + (uVar2 & _DAT_18340d480);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d4c0 = func_0x00018f827180((uVar2 | 0x10640702848c230e) + (uVar2 & 0x10640702848c230e));
  uVar2 = _DAT_18340d4c0 ^ 0x1064070200ae002c;
  uVar2 = (uVar2 << 0x24 | uVar2 >> 0x1c) << 0x17 | (uVar2 & 0xfffffff) >> 5;
  _DAT_18340d2f8 = (_DAT_18340d2f8 ^ uVar2) + 0x1064070200ae002b ^ 0x83070bcc35cf45c2;
  _DAT_18340d4f0 = (_DAT_18340d4f0 * 0x36f04fd87a200c79 ^ _DAT_18340d2f8) + uVar2;
  _DAT_18340d500 = _DAT_18340d4f0 ^ _DAT_18340d2f8;
  _DAT_18340d490 = 0x1064070200ae002b;
  uVar2 = (_DAT_18340d680 ^ 0x84222330) + _DAT_18340d390 + 0x84222330;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18340d680 ^ 0x84222330;
  uVar7 = ((_DAT_18340d390 + _DAT_18340d680) * 0x2000 | _DAT_18340d390 + _DAT_18340d680 >> 0x33) ^
          _DAT_18340d390;
  _DAT_18340d4d8 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_18340d680 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18340d390 + 0x84222330));
  uVar2 = _DAT_18340d4d8 * -0x34ff7537f54fc580 | _DAT_18340d4d8 * -0x1269feea6fea9f8b >> 0x39;
  _DAT_18340d358 = _DAT_18340d418 ^ uVar2 ^ 0x15;
  _DAT_18340d680 = (_DAT_18340d680 ^ uVar2) + 0x15 ^ 0xb04ee1e413dbe7c;
  _DAT_18340d3c8 = (_DAT_18340d3c8 * 0x15a950b06539c855 ^ _DAT_18340d680) + uVar2;
  _DAT_18340d368 = _DAT_18340d3c8 ^ _DAT_18340d680;
  _DAT_18340d528 = 0x15;
  uVar2 = (~_DAT_18340d140 + 0xc1bc8cd3d417fc1) *
          ((_DAT_18340d6e0 ^ 0xc1bc8cdb9635ce5) + (_DAT_18340d6e0 & 0xc1bc8cdb9635ce5) * 2);
  uVar2 = (uVar2 | _DAT_18340d228) + (uVar2 & _DAT_18340d228);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18340d358 = func_0x00018f827180((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar2 = _DAT_18340d358 >> 1 | _DAT_18340d358;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18340d358;
  uVar2 = uVar2 << 6 | uVar2 >> 0x3a;
  _DAT_18340d238 = _DAT_18340d238 ^ uVar2 ^ 0x407b4b35693678fb;
  _DAT_18340d468 = (_DAT_18340d468 * -0x157f516eb824c941 ^ _DAT_18340d238) + uVar2;
  _DAT_18340d458 = _DAT_18340d468 ^ _DAT_18340d238;
  _DAT_18340d168 = 0;
  _DAT_18340d280 = func_0x00018f827180(_DAT_18340d418 + 0x2300840fffe1ff ^ 0xc0);
  uVar2 = _DAT_18340d280 * 2;
  _DAT_18340d320 = _DAT_18340d220 ^ uVar2 ^ 0x15;
  _DAT_18340d448 = (_DAT_18340d448 ^ uVar2) + 0x15 ^ 0x810743e6c24acbc3;
  _DAT_18340d458 = (_DAT_18340d458 * -0x7ef4dcaadc8f7b5 ^ _DAT_18340d448) + uVar2;
  _DAT_18340d4a0 = _DAT_18340d458 ^ _DAT_18340d448;
  _DAT_18340d5a0 = 0x15;
  switch(*(longlong *)(unaff_RBP + 0x30) == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f80c4ac (image 18f80c4ac) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f80c4ac(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_RDI;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 unaff_XMM10 [16];
  uint unaff_XMM13_Da;
  
  *(bool *)(unaff_RBP + 0x14) = *unaff_RBP == 0;
  uVar7 = (~param_1 + 0x7e241bbd) *
          ((param_2 ^ 0xa7e744e1) + (ulonglong)((uint)param_2 & 0xa7e744e1) * 2);
  uVar7 = (uVar7 | in_RAX) + (uVar7 & in_RAX);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d638 = func_0x00018f827180((uVar7 | 0xd9c35f5d) + (ulonglong)((uint)uVar7 & 0xd9c35f5d))
  ;
  uVar7 = (ulonglong)((uint)_DAT_18340d638 & 0x23c567c4);
  _DAT_18340d4d0 = (_DAT_18340d4d0 ^ uVar7) + 0x7fe57ffc ^ 0x3512e7301b0685d2;
  _DAT_18340d598 = (_DAT_18340d598 * -0x4f756e7b21c3ccd1 ^ _DAT_18340d4d0) + uVar7;
  _DAT_18340d298 = _DAT_18340d598 ^ _DAT_18340d4d0;
  _DAT_18340d1d0 = 0x7fe57ffc;
  uVar7 = (_DAT_18340d540 ^ _DAT_1829c8d80) + _DAT_18340d190 + unaff_RDI;
  uVar12 = (_DAT_18340d190 ^ _UNK_1829c8d88) + _DAT_18340d540 + 0x9dff2c30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d540 ^ _DAT_1829c8d80;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d190 ^ _UNK_1829c8d88;
  _DAT_18340d600 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d540 + 0x9dff2c30) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d190 + unaff_RDI));
  _DAT_18340d538 =
       (_DAT_18340d408 ^ _DAT_18340d600 & 0x3fffffffffffffff) - 0x9dff2c30 ^ 0x8bbc47597b5745fc;
  _DAT_18340d458 =
       (_DAT_18340d458 * -0x53ec5c557a38187b ^ _DAT_18340d538) +
       (_DAT_18340d600 & 0x3fffffffffffffff);
  _DAT_18340d538 = _DAT_18340d458 ^ _DAT_18340d538;
  _DAT_18340d408 = 0x6200d3d0;
  uVar7 = (_DAT_18340d1a0 ^ _DAT_1829c8d90) + _DAT_18340d378 + 0x84222ce5;
  uVar12 = (_DAT_18340d378 ^ _UNK_1829c8d98) + _DAT_18340d1a0 + 0x9dff2c30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d1a0 ^ _DAT_1829c8d90;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d378 ^ _UNK_1829c8d98;
  _DAT_18340d198 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d1a0 + 0x9dff2c30) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d378 + 0x84222ce5));
  uVar7 = _DAT_18340d198 ^ 0x9dff2c30;
  _DAT_18340d448 = _DAT_18340d230 ^ uVar7 ^ 0x9dff3bf0;
  _DAT_18340d478 = (_DAT_18340d478 ^ uVar7) + 0x9dff3bf0 ^ 0x8dc3ee26b85e8105;
  _DAT_18340d480 = (_DAT_18340d480 * -0x5dea6eb6731fd2af ^ _DAT_18340d478) + uVar7;
  _DAT_18340d558 = _DAT_18340d480 ^ _DAT_18340d478;
  _DAT_18340d128 = 0x9dff3bf0;
  uVar7 = (~_DAT_18340d118 + 0x6200d3d1) *
          ((_DAT_18340d360 ^ 0x19dd18d5) + (ulonglong)((uint)_DAT_18340d360 & 0x19dd18d5) * 2);
  uVar7 = (uVar7 | _DAT_18340d1b0) + (uVar7 & _DAT_18340d1b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d318 = func_0x00018f827180((uVar7 | 0x7bddcb05) + (ulonglong)((uint)uVar7 & 0x7bddcb05))
  ;
  uVar7 = (_DAT_18340d318 ^ 0x3c7c37ab9dc78300) << 0x17 |
          (_DAT_18340d318 ^ 0x3c7c37ab9dc78300) >> 0x29;
  _DAT_18340d678 = _DAT_18340d168 ^ uVar7 ^ 0x100000fc0;
  uVar12 = (_DAT_18340d2f0 ^ uVar7) + 0x100000fc0;
  _DAT_18340d2f0 = uVar12 ^ 0x21f7ae293c727dae;
  _DAT_18340d518 = (_DAT_18340d518 * -0x683ba06f3cf43ef ^ _DAT_18340d2f0) + uVar7;
  _DAT_18340d3e0 = _DAT_18340d518 ^ _DAT_18340d2f0;
  _DAT_18340d460 = 0xfc0;
  _DAT_18340d5b0 = func_0x00018f827180(uVar12 ^ 0xdeab5187dc8d83bd);
  uVar7 = (_DAT_18340d5b0 << 0x34 | _DAT_18340d5b0 >> 0xc) * 0x7ba03fbf5057b47b;
  _DAT_18340d4b0 = (_DAT_18340d3e8 ^ uVar7 ^ 0x57239f84 ^ uVar7) + 0x57239f84 ^ 0xf7e4815ddb5aa2ef;
  _DAT_18340d650 = (_DAT_18340d650 * 0x2f198b74211b64cb ^ _DAT_18340d4b0) + uVar7;
  _DAT_18340d468 = _DAT_18340d650 ^ _DAT_18340d4b0;
  _DAT_18340d5b8 = 0x57239f84;
  uVar7 = (~_DAT_18340d558 + 0x2f3f5721) *
          ((_DAT_18340d268 ^ unaff_RDI) + (ulonglong)((uint)_DAT_18340d268 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_18340d220) + (uVar7 & _DAT_18340d220);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d388 = func_0x00018f827180((uVar7 | 0xab1d7405) + (ulonglong)((uint)uVar7 & 0xab1d7405))
  ;
  _DAT_18340d400 =
       (_DAT_18340d400 ^ _DAT_18340d388 & 0x7fffffffffffffff) - 0x2f3f5720 ^ 0xbf60f1eac21274c0;
  _DAT_18340d568 =
       (_DAT_18340d568 * -0x468b59a0e36e6b55 ^ _DAT_18340d400) +
       (_DAT_18340d388 & 0x7fffffffffffffff);
  _DAT_18340d648 = _DAT_18340d568 ^ _DAT_18340d400;
  _DAT_18340d460 = _DAT_18340d468 ^ 0xffffffffd0c0a8e0;
  _DAT_18340d530 = 0xd0c0a8e0;
  _DAT_18340d1e0 = func_0x00018f827180(_DAT_18340d490 + 0x64ff64bd000aff ^ 7);
  uVar7 = _DAT_18340d1e0 * 0x2e781697c0ff1741 & 0xffffffffff000000;
  _DAT_18340d250 = _DAT_18340d3b0 ^ uVar7 ^ 0x2f3f66e0;
  _DAT_18340d518 = (_DAT_18340d518 ^ uVar7) + 0x2f3f66e0 ^ 0x579cfcb607add6d;
  _DAT_18340d420 = (_DAT_18340d420 * 0x52096c1a2f2185c7 ^ _DAT_18340d518) + uVar7;
  _DAT_18340d1d8 = _DAT_18340d420 ^ _DAT_18340d518;
  _DAT_18340d4a0 = 0x2f3f66e0;
  uVar7 = (~_DAT_18340d4f8 + 0xd0c0a8e1) *
          ((_DAT_18340d198 ^ 0xab1d45c5) + (ulonglong)((uint)_DAT_18340d198 & 0xab1d45c5) * 2);
  uVar7 = (uVar7 | _DAT_18340d498) + (uVar7 & _DAT_18340d498);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d4c0 = func_0x00018f827180((uVar7 | 0x7bdded25) + (ulonglong)((uint)uVar7 & 0x7bdded25))
  ;
  uVar12 = _UNK_1829c8da8;
  uVar7 = _DAT_1829c8da0;
  uVar6 = _DAT_18340d4c0 ^ 0x2687124e1afd0400;
  uVar6 = (_DAT_18340d4c0 & 0x7fff) >> 0xb |
          ((uVar6 << 0x1d | uVar6 >> 0x23) << 0x14 | (uVar6 & 0x7ffffffff) >> 0xf) << 4;
  _DAT_18340d160 = _DAT_18340d280 ^ uVar6 ^ 0x100000fc0;
  _DAT_18340d5e8 = (_DAT_18340d5e8 ^ uVar6) + 0x100000fc0 ^ 0x5009f623a585d099;
  _DAT_18340d4b0 = (_DAT_18340d4b0 * 0x6f6db4921fc46bad ^ _DAT_18340d5e8) + uVar6;
  _DAT_18340d3b8 = _DAT_18340d4b0 ^ _DAT_18340d5e8;
  _DAT_18340d3e8 = _DAT_18340d6c0 ^ 0x100000fc0;
  _DAT_18340d210 = 0xfc0;
  uVar6 = (_DAT_18340d530 ^ _DAT_1829c8da0) + _DAT_18340d138 + 0xfbc75cd9;
  uVar13 = (_DAT_18340d138 ^ _UNK_1829c8da8) + _DAT_18340d530 + 0x7178ce7d;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18340d530 ^ _DAT_1829c8da0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18340d138 ^ _UNK_1829c8da8;
  _DAT_18340d2d8 =
       func_0x00018f827180((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18340d530 + 0x7178ce7d) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18340d138 + 0xfbc75cd9));
  uVar6 = _DAT_18340d2d8 & 0xffffffffffffc000 ^ 0x7178ce7d;
  _DAT_18340d228 = _DAT_18340d418 ^ uVar6 ^ 0xf15e4e79;
  _DAT_18340d418 = (_DAT_18340d418 ^ uVar6) + 0xf15e4e79 ^ 0x945a7576676cb5fc;
  _DAT_18340d110 = (_DAT_18340d110 * 0x48ea79b8fc092d9f ^ _DAT_18340d418) + uVar6;
  _DAT_18340d6b0 = _DAT_18340d110 ^ _DAT_18340d418;
  _DAT_18340d6f0 = 0xf15e4e79;
  uVar6 = (~_DAT_18340d3f0 + 0x7178ce7e) *
          ((_DAT_18340d690 ^ 0xfbc75cd9) + (ulonglong)((uint)_DAT_18340d690 & 0xfbc75cd9) * 2);
  uVar6 = (uVar6 | _DAT_18340d560) + (uVar6 & _DAT_18340d560);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18340d3b0 = func_0x00018f827180((uVar6 | 0x8abf92a4) + (ulonglong)((uint)uVar6 & 0x8abf92a4))
  ;
  _DAT_18340d488 =
       (_DAT_18340d488 ^ _DAT_18340d3b0 ^ 0x38b0a83b25c939f0) + 0xe9db181 ^ 0x8d7270ce981a7d15;
  _DAT_18340d560 =
       (_DAT_18340d560 * -0x2fbfefeef97b767b ^ _DAT_18340d488) +
       (_DAT_18340d3b0 ^ 0x38b0a83b25c939f0);
  _DAT_18340d4c8 = _DAT_18340d560 ^ _DAT_18340d488;
  _DAT_18340d120 = 0xe9db181;
  uVar6 = (_DAT_18340d3e8 ^ uVar7) + _DAT_18340d558 + 0xfbc75cd9;
  uVar13 = (_DAT_18340d558 ^ uVar12) + _DAT_18340d3e8 + 0x7178ce7d;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18340d3e8 ^ uVar7;
  uVar12 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18340d558 ^ uVar12;
  _DAT_18340d238 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d3e8 + 0x7178ce7d) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d558 + 0xfbc75cd9));
  uVar7 = (_DAT_18340d238 ^ 0x1b5a2c460c) << 0x1b | _DAT_18340d238 >> 0x25 & 0xfffffffffc000000;
  _DAT_18340d4a0 = (_DAT_18340d4a0 ^ uVar7) + 0x71604e7c ^ 0x702e077500f43ef8;
  _DAT_18340d258 = (_DAT_18340d258 * 0x721d8532c933abd3 ^ _DAT_18340d4a0) + uVar7;
  _DAT_18340d1b0 = _DAT_18340d258 ^ _DAT_18340d4a0;
  _DAT_18340d190 = 0x71604e7c;
  _DAT_18340d340 = func_0x00018f827180(_DAT_18340d6d0 + 0xfff5ffe7bc0022ff ^ 0x8c);
  uVar7 = (_DAT_18340d340 ^ 0xe0400000) & 0xfffffffffff80000;
  _DAT_18340d308 = _DAT_18340d660 ^ uVar7 ^ 0xf15e4e79;
  _DAT_18340d6c0 = (_DAT_18340d6c0 ^ uVar7) + 0xf15e4e79 ^ 0xf4d93b01e47f059e;
  _DAT_18340d6b8 = (_DAT_18340d6b8 * -0xb890137d9788ecd ^ _DAT_18340d6c0) + uVar7;
  _DAT_18340d118 = _DAT_18340d6b8 ^ _DAT_18340d6c0;
  _DAT_18340d1c0 = 0xf15e4e79;
  _DAT_18340d698 = func_0x00018f827180(_DAT_18340d2d0 ^ 0xffe2ff7c230021ff);
  _DAT_18340d2f8 = (ulonglong)(~(uint)_DAT_18340d698 & 0xf15e4e79);
  _DAT_18340d198 = _DAT_18340d198 ^ _DAT_18340d2f8 ^ 0x2387ec0ba8fc2558;
  _DAT_18340d5b0 = (_DAT_18340d5b0 * 0x22e8ba5a8fa0d819 ^ _DAT_18340d198) + _DAT_18340d2f8;
  _DAT_18340d168 = _DAT_18340d5b0 ^ _DAT_18340d198;
  _DAT_18340d388 = 0;
  uVar7 = (~_DAT_18340d120 + 0x100000000) *
          ((_DAT_18340d1f0 ^ 0xfbc75cd9) + (ulonglong)((uint)_DAT_18340d1f0 & 0xfbc75cd9) * 2);
  uVar7 = (uVar7 | _DAT_18340d1e0) + (uVar7 & _DAT_18340d1e0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d640 = func_0x00018f827180((uVar7 | 0x438a326) + (ulonglong)((uint)uVar7 & 0x438a326));
  uVar7 = _DAT_18340d640 * 0x66f6aa7a8dbdaf9b << 0x21 | _DAT_18340d640 * 0x66f6aa7a8dbdaf9b >> 0x1f;
  _DAT_18340d250 = (_DAT_18340d250 ^ uVar7) + 0x801a8003 ^ 0x54960174d885007;
  _DAT_18340d360 = (_DAT_18340d360 * 0x66410013fef56753 ^ _DAT_18340d250) + uVar7;
  _DAT_18340d528 = _DAT_18340d360 ^ _DAT_18340d250;
  _DAT_18340d5f0 = 0x801a8003;
  _DAT_18340d188 = func_0x00018f827180(_DAT_18340d4c8 + 0xff5c00372a003cff ^ 0xbd);
  uVar7 = (_DAT_18340d188 ^ 0x7fe57ffc) << 0x34 | (_DAT_18340d188 ^ 0x7fe57ffc) >> 0xc;
  _DAT_18340d240 = _DAT_18340d240 ^ uVar7 ^ 0xf68640d2b0da6e41;
  _DAT_18340d610 = (_DAT_18340d610 * 0x49d0695a8daef225 ^ _DAT_18340d240) + uVar7;
  _DAT_18340d230 = _DAT_18340d610 ^ _DAT_18340d240;
  _DAT_18340d160 = 0;
  uVar7 = ((_DAT_18340d340 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_18340d340 & 0x84222ce5) * 2) *
          -_DAT_18340d5e8;
  uVar7 = (uVar7 | _DAT_18340d470) + (uVar7 & _DAT_18340d470);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d2d8 = func_0x00018f827180((uVar7 | 0x84222ce5) + (ulonglong)((uint)uVar7 & 0x84222ce5))
  ;
  uVar7 = _DAT_18340d2d8 - (_DAT_18340d2d8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar4 + (uint)bVar4 ^ _DAT_18340d2d8;
  _DAT_18340d310 = _DAT_18340d140 ^ uVar7 ^ 0xfc0;
  _DAT_18340d4e8 = (_DAT_18340d4e8 ^ uVar7) + 0xfc0 ^ 0x61ac6d61f4c3cd36;
  _DAT_18340d298 = (_DAT_18340d298 * -0x139aab7b77f59323 ^ _DAT_18340d4e8) + uVar7;
  _DAT_18340d428 = _DAT_18340d298 ^ _DAT_18340d4e8;
  _DAT_18340d230 = 0xfc0;
  uVar7 = func_0x00018f827180(_DAT_18340d670 + 0xffe30083dd0021ff ^ 0xee);
  uVar12 = (uVar7 ^ 0x23c56700) & 0xffffffffffffff00;
  _DAT_18340d4f0 = uVar7 ^ uVar12 ^ 0x78609962ee0e6d36;
  _DAT_18340d3d8 = (_DAT_18340d3d8 * 0x702cb05a61ef945 ^ _DAT_18340d4f0) + uVar12;
  _DAT_18340d530 = _DAT_18340d3d8 ^ _DAT_18340d4f0;
  _DAT_18340d4f8 = 0;
  uVar7 = (ulonglong)unaff_ESI ^ 0x84222325;
  uVar12 = uVar7 ^ _DAT_18340d258;
  lVar9 = uVar7 + _DAT_18340d458;
  uVar7 = uVar12 + lVar9;
  uVar6 = (_DAT_18340d458 ^ 0xfc0) + _DAT_18340d258 + 0xfc0;
  uVar12 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar12;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18340d458 ^ 0xfc0;
  _DAT_18340d3d8 =
       func_0x00018f827180((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d258 + 0xfc0) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - lVar9);
  uVar7 = (ulonglong)unaff_ESI * 0xfc0 ^ _DAT_18340d3d8;
  _DAT_18340d4a8 = (ulonglong)(unaff_ESI & 0xfc0);
  _DAT_18340d4e0 = (_DAT_18340d4e0 ^ uVar7) + _DAT_18340d4a8 ^ 0x8b0908663190a67d;
  _DAT_18340d620 = (_DAT_18340d620 * 0x2336d29838f0f95 ^ _DAT_18340d4e0) + uVar7;
  _DAT_18340d120 = _DAT_18340d620 ^ _DAT_18340d4e0;
  uVar7 = _DAT_18340d1f0 ^ _DAT_1829c8db0;
  uVar12 = _DAT_18340d578 ^ _UNK_1829c8db8;
  lVar8 = _DAT_18340d578 + 0x2ccaabeb;
  lVar9 = _DAT_18340d1f0 + 0x89da6123;
  uVar6 = uVar7 + lVar8;
  uVar13 = uVar12 + lVar9;
  *(uint *)(unaff_RBP + 4) = unaff_ESI & 0xfc0;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar7;
  uVar12 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar12;
  uVar6 = (ulonglong)(uint)((int)unaff_RBP[10] << 0xc);
  _DAT_18340d1e8 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - lVar9 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
  uVar7 = _DAT_18340d1e8 >> 1 | _DAT_18340d1e8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18340d1e8;
  uVar7 = uVar7 << 0x13 | uVar7 >> 0x2d;
  _DAT_18340d1e0 = (_DAT_18340d1e0 ^ uVar7) + 0x2132e9ed ^ 0x7ee031b150c8816f;
  _DAT_18340d570 = (_DAT_18340d570 * 0x7982bb021425d545 ^ _DAT_18340d1e0) + uVar7;
  _DAT_18340d118 = _DAT_18340d570 ^ _DAT_18340d1e0;
  _DAT_18340d608 = 0x2132e9ed;
  uVar7 = (_DAT_18340d688 ^ _DAT_1829c8dc0) + _DAT_18340d238 + 0x84222325;
  uVar12 = (_DAT_18340d238 ^ _UNK_1829c8dc8) + _DAT_18340d688 + 0x70d3a000;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d688 ^ _DAT_1829c8dc0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d238 ^ _UNK_1829c8dc8;
  _DAT_18340d288 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d688 + 0x70d3a000) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d238 + 0x84222325));
  uVar7 = _DAT_18340d288 * 0x44fb2a214a93c000 | _DAT_18340d288 * 0x489513eca8852a4f >> 0x32;
  _DAT_18340d5b8 = (_DAT_18340d5b8 ^ uVar7) - 0x70d3a000 ^ 0x2b0fa955997075f;
  _DAT_18340d538 = (_DAT_18340d538 * 0x423045e6e192d345 ^ _DAT_18340d5b8) + uVar7;
  _DAT_18340d5c8 = _DAT_18340d538 ^ _DAT_18340d5b8;
  _DAT_18340d690 = 0x8f2c6000;
  _DAT_18340d550 = func_0x00018f827180(_DAT_18340d470 ^ 0x97ff9435003d61);
  uVar7 = (_DAT_18340d550 ^ 0x68fc8be8) * 0xbfb5314b025e779 & 0xfffffffffffc0000;
  _DAT_18340d358 = (_DAT_18340d358 ^ uVar7) - 0x68fc8be8 ^ 0xd0fe8131c40b4260;
  _DAT_18340d440 = (_DAT_18340d440 * -0x49cc34704eebd9df ^ _DAT_18340d358) + uVar7;
  _DAT_18340d678 = _DAT_18340d440 ^ _DAT_18340d358;
  _DAT_18340d4f8 = 0x97037418;
  uVar7 = (~_DAT_18340d130 + 0x68fc8be9) *
          ((_DAT_18340d5c8 ^ 0x8422d325) + (ulonglong)((uint)_DAT_18340d5c8 & 0x8422d325) * 2);
  uVar7 = (uVar7 | _DAT_18340d268) + (uVar7 & _DAT_18340d268);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d6e8 = func_0x00018f827180((uVar7 | 0xecde58cd) + (ulonglong)((uint)uVar7 & 0xecde58cd))
  ;
  _DAT_18340d6c0 = _DAT_18340d3b0 ^ _DAT_18340d6e8 ^ 0x68fd7be8;
  _DAT_18340d390 = (_DAT_18340d390 ^ _DAT_18340d6e8) + 0x68fd7be8 ^ 0x2c709ab56d690106;
  _DAT_18340d3f8 = (_DAT_18340d3f8 * 0x369129b232c75fa9 ^ _DAT_18340d390) + _DAT_18340d6e8;
  _DAT_18340d258 = _DAT_18340d3f8 ^ _DAT_18340d390;
  _DAT_18340d1d8 = 0x68fd7be8;
  uVar7 = (_DAT_18340d220 ^ _DAT_1829c8dd0) + _DAT_18340d448 + 0x84222325;
  uVar12 = (_DAT_18340d448 ^ _UNK_1829c8dd8) + _DAT_18340d220 + 0x2690e8e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d220 ^ _DAT_1829c8dd0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d448 ^ _UNK_1829c8dd8;
  _DAT_18340d2e8 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d220 + 0x2690e8e0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d448 + 0x84222325));
  uVar7 = _DAT_18340d2e8 - (_DAT_18340d2e8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_18340d2e8;
  _DAT_18340d3d0 = (_DAT_18340d3d0 ^ uVar7) - 0x2690e8e0 ^ 0xe474daeaff8d9e3e;
  _DAT_18340d328 = (_DAT_18340d328 * 0x4af513702cf90b5 ^ _DAT_18340d3d0) + uVar7;
  _DAT_18340d298 = _DAT_18340d328 ^ _DAT_18340d3d0;
  _DAT_18340d548 = 0xd96f1720;
  uVar7 = (_DAT_18340d208 ^ _DAT_1829c8de0) + _DAT_18340d3f0 + 0x8422d325;
  uVar12 = (_DAT_18340d3f0 ^ _UNK_1829c8de8) + _DAT_18340d208 + 0x2690e8e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d208 ^ _DAT_1829c8de0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d3f0 ^ _UNK_1829c8de8;
  _DAT_18340d518 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d208 + 0x2690e8e0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d3f0 + 0x8422d325));
  uVar7 = _DAT_18340d518 & 0x7fffffffffffffff;
  _DAT_18340d530 = _DAT_18340d160 ^ uVar7 ^ 0x2691d8e0;
  _DAT_18340d248 = (_DAT_18340d248 ^ uVar7) + 0x2691d8e0 ^ 0xe2c0e450b30332e6;
  _DAT_18340d230 = (_DAT_18340d230 * -0x3f172e8abd7bd275 ^ _DAT_18340d248) + uVar7;
  _DAT_18340d630 = _DAT_18340d230 ^ _DAT_18340d248;
  _DAT_18340d190 = 0x2691d8e0;
  _DAT_18340d490 = func_0x00018f827180(_DAT_18340d258 + 0xff23ff84db0043ff ^ 0x99);
  uVar7 = _DAT_18340d490 ^ 0x20c25d8ed5d73c00;
  _DAT_18340d398 = _DAT_18340d4a0 ^ uVar7 ^ 0x10000f000;
  _DAT_18340d550 = (_DAT_18340d550 ^ uVar7) + 0x10000f000 ^ 0xdbf8c8f24e71560b;
  _DAT_18340d5a0 = (_DAT_18340d5a0 * 0x37d86717fa622797 ^ _DAT_18340d550) + uVar7;
  _DAT_18340d6f8 = _DAT_18340d5a0 ^ _DAT_18340d550;
  _DAT_18340d658 = 0xf000;
  uVar7 = (~_DAT_18340d6a0 + 0x2132e9ee) *
          ((_DAT_18340d588 ^ 0x5bed9c5b) + (ulonglong)((uint)_DAT_18340d588 & 0x5bed9c5b) * 2);
  uVar7 = (uVar7 | _DAT_18340d370) + (uVar7 & _DAT_18340d370);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d540 = func_0x00018f827180((uVar7 | 0x7adf75b6) + (ulonglong)((uint)uVar7 & 0x7adf75b6))
  ;
  uVar7 = (_DAT_18340d540 ^ 0x1d064ac5ed39f5a6) << 0x3c | (_DAT_18340d540 ^ 0x1d064ac5ed39f5a6) >> 4
  ;
  _DAT_18340d580 = _DAT_18340d428 ^ uVar7 ^ 0x10102a96b;
  _DAT_18340d4c8 = (_DAT_18340d4c8 ^ uVar7) + 0x10102a96b ^ 0x16f62823ccd9f51;
  _DAT_18340d1c8 = (_DAT_18340d1c8 * -0x71ff4bc831482fcf ^ _DAT_18340d4c8) + uVar7;
  _DAT_18340d2b8 = _DAT_18340d1c8 ^ _DAT_18340d4c8;
  _DAT_18340d4c0 = 0x102a96b;
  uVar7 = (_DAT_18340d1f0 ^ _DAT_1829c8df0) + _DAT_18340d558 + 0x5bed9c5b;
  uVar12 = (_DAT_18340d558 ^ _UNK_1829c8df8) + _DAT_18340d1f0 + 0x2132e9ed;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d1f0 ^ _DAT_1829c8df0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d558 ^ _UNK_1829c8df8;
  _DAT_18340d6e0 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d1f0 + 0x2132e9ed) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d558 + 0x5bed9c5b));
  _DAT_18340d358 = (_DAT_18340d358 ^ _DAT_18340d6e0 & 0xfffffffff) + 0xfefd5693 ^ 0x7966bd04e70db317
  ;
  _DAT_18340d520 =
       (_DAT_18340d520 * -0x2183db10724254e5 ^ _DAT_18340d358) + (_DAT_18340d6e0 & 0xfffffffff);
  _DAT_18340d3b8 = _DAT_18340d520 ^ _DAT_18340d358;
  _DAT_18340d4a0 = 0xfefd5693;
  _DAT_18340d2b0 = func_0x00018f827180(_DAT_18340d1c0 + 0x2700082600a9ff ^ 0x62);
  _DAT_18340d350 = _DAT_18340d270 ^ _DAT_18340d2b0 ^ 0x10102a96b;
  uVar7 = (_DAT_18340d110 ^ _DAT_18340d2b0) + 0x10102a96b;
  _DAT_18340d110 = uVar7 ^ 0x5fd8966c595eee15;
  _DAT_18340d308 = (_DAT_18340d308 * -0x67480bd2f1fddd21 ^ _DAT_18340d110) + _DAT_18340d2b0;
  _DAT_18340d218 = _DAT_18340d308 ^ _DAT_18340d110;
  _DAT_18340d498 = 0x102a96b;
  uVar7 = uVar7 ^ 0x5fd8966cdd7c3d30;
  uVar12 = uVar7 + _DAT_18340d1b0 + 0x8422d325;
  uVar7 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar7;
  uVar12 = ((_DAT_18340d1b0 + _DAT_18340d110) * 0x2000 | _DAT_18340d1b0 + _DAT_18340d110 >> 0x33) ^
           _DAT_18340d1b0;
  _DAT_18340d628 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_18340d110 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d1b0 + 0x8422d325));
  uVar7 = _DAT_18340d628 << 0x21 | _DAT_18340d628 >> 0x1f;
  _DAT_18340d6e8 = _DAT_18340d3f8 ^ uVar7 ^ 0xf000;
  _DAT_18340d6b0 = (_DAT_18340d6b0 ^ uVar7) + 0xf000 ^ 0x3390eaef8917078e;
  _DAT_18340d5e8 = (_DAT_18340d5e8 * 0x709398817b15b3d ^ _DAT_18340d6b0) + uVar7;
  _DAT_18340d380 = _DAT_18340d5e8 ^ _DAT_18340d6b0;
  _DAT_18340d6a0 = 0xf000;
  uVar7 = (~_DAT_18340d3d8 + 0x100000000) *
          ((_DAT_18340d1d8 ^ 0x5bed9c5b) + (ulonglong)((uint)_DAT_18340d1d8 & 0x5bed9c5b) * 2);
  uVar7 = (uVar7 | _DAT_18340d360) + (uVar7 & _DAT_18340d360);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d1d0 = func_0x00018f827180((uVar7 | 0xa41263a4) + (ulonglong)((uint)uVar7 & 0xa41263a4))
  ;
  _DAT_18340d3f8 = (_DAT_18340d3f8 ^ _DAT_18340d1d0 ^ 0xdfcfbf7e) + 0x20304081 ^ 0x9f371357409f6bfb;
  _DAT_18340d6b0 =
       (_DAT_18340d6b0 * -0x4bb3c325e940dca3 ^ _DAT_18340d3f8) + (_DAT_18340d1d0 ^ 0xdfcfbf7e);
  _DAT_18340d310 = _DAT_18340d6b0 ^ _DAT_18340d3f8;
  _DAT_18340d398 = 0x20304081;
  _DAT_18340d108 = func_0x00018f827180(_DAT_18340d6c8 ^ 0xff4bff843a0034f5);
  _DAT_18340d318 = _DAT_18340d318 ^ _DAT_18340d108 ^ 0xdfcfbf7e ^ 0x4b1848fcafa540df;
  _DAT_18340d530 =
       (_DAT_18340d530 * -0x2b388f6786af7093 ^ _DAT_18340d318) + (_DAT_18340d108 ^ 0xdfcfbf7e);
  _DAT_18340d5c0 = _DAT_18340d530 ^ _DAT_18340d318;
  _DAT_18340d370 = 0;
  uVar7 = (~_DAT_18340d688 + 0x8f0ea57d) *
          ((_DAT_18340d5f8 ^ 0xb2c8659) + (ulonglong)((uint)_DAT_18340d5f8 & 0xb2c8659) * 2);
  uVar7 = (uVar7 | _DAT_18340d210) + (uVar7 & _DAT_18340d210);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d5f0 = func_0x00018f827180((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_18340d4b8 = _DAT_18340d350 ^ _DAT_18340d5f0 * -0x49f0cf46e658b907 ^ 0x6938aa01f4382f90;
  _DAT_18340d350 =
       (_DAT_18340d350 * -0x31084c9a012e770b ^ _DAT_18340d4b8) +
       _DAT_18340d5f0 * -0x49f0cf46e658b907;
  _DAT_18340d4b8 = _DAT_18340d350 ^ _DAT_18340d4b8;
  _DAT_18340d5a8 = 0;
  uVar7 = (_DAT_18340d550 ^ 0x8422d325) + _DAT_18340d448 + 0x8422d325;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d550 ^ 0x8422d325;
  uVar12 = ((_DAT_18340d448 + _DAT_18340d550) * 0x2000 | _DAT_18340d448 + _DAT_18340d550 >> 0x33) ^
           _DAT_18340d448;
  _DAT_18340d3b0 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_18340d550 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d448 + 0x8422d325));
  uVar7 = _DAT_18340d3b0 - (_DAT_18340d3b0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_18340d3b0 ^ 0xf000;
  _DAT_18340d300 = _DAT_18340d630 ^ uVar7 ^ 0xf000;
  _DAT_18340d618 = (_DAT_18340d618 ^ uVar7) + 0xf000 ^ 0x3e9edabd9536b8bf;
  _DAT_18340d418 = (_DAT_18340d418 * -0x2da618efc80ac5ff ^ _DAT_18340d618) + uVar7;
  _DAT_18340d208 = _DAT_18340d418 ^ _DAT_18340d618;
  _DAT_18340d5e8 = 0xf000;
  uVar7 = (~_DAT_18340d680 + 0xf001) *
          ((uVar6 ^ 0x84222325 ^ _DAT_18340d110) +
          (ulonglong)((uint)_DAT_18340d110 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar7 = (uVar7 | _DAT_18340d328) + (uVar7 & _DAT_18340d328);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d460 =
       func_0x00018f827180((uVar6 ^ 0x8422d325 | uVar7) +
                           (ulonglong)((uint)(uVar6 ^ 0x8422d325) & (uint)uVar7));
  uVar7 = (uVar6 | 0x8000) ^ _DAT_18340d460;
  uVar12 = uVar7 & 0xffffffffffff8000;
  uVar7 = uVar12 - (uVar7 >> 1 & 0x5555555555554000);
  uVar7 = (uVar7 & 0x3333333333330000) + (uVar7 >> 2 & 0x3333333333333000);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0300) * 0x101010101010101 >> 0x38) << 6 | uVar12)
          << 1 | _DAT_18340d460 >> 0x3f;
  _DAT_18340d580 = uVar6 & 0xffff;
  _DAT_18340d120 = (_DAT_18340d120 ^ uVar7) + _DAT_18340d580 ^ 0xc64809a5fdeb091c;
  _DAT_18340d2f0 = (_DAT_18340d2f0 * 0x36c2057d3601116d ^ _DAT_18340d120) + uVar7;
  _DAT_18340d570 = _DAT_18340d2f0 ^ _DAT_18340d120;
  _DAT_18340d698 = _DAT_18340d590 ^ _DAT_18340d580;
  *(int *)(unaff_RBP + 10) = (int)_DAT_18340d580 + (int)unaff_RBP[4];
  plVar3 = (longlong *)unaff_RBP[9];
  lVar9 = unaff_RBP[5];
  lVar8 = (**(code **)(*plVar3 + 0x6f0))(plVar3,lVar9,0);
  *(int *)(unaff_RBP + 0xe) = (int)*(char *)(lVar8 + (int)unaff_RBP[0xf]);
  (**(code **)(*plVar3 + 0x6f8))(plVar3,lVar9,lVar8,2);
  unaff_RBP[4] = (ulonglong)*(uint *)(unaff_RBP + 0xe);
  uVar7 = (~_DAT_18340d288 + 0x8f9db4b1) *
          ((_DAT_18340d580 ^ 0xd2e46fea) + (ulonglong)((uint)_DAT_18340d580 & 0xd2e46fea) * 2);
  uVar7 = (uVar7 | _DAT_18340d110) + (uVar7 & _DAT_18340d110);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d5a0 = func_0x00018f827180((uVar7 | 0x5d79db5a) + (ulonglong)((uint)uVar7 & 0x5d79db5a))
  ;
  uVar7 = (ulonglong)(~(uint)_DAT_18340d180 & 0x56c64ccf);
  _DAT_18340d118 = (_DAT_18340d118 ^ uVar7) + 0xdfdffcff ^ 0xa58c050509c04bf0;
  _DAT_18340d580 = (_DAT_18340d580 * -0x3998b2867e86ff77 ^ _DAT_18340d118) + uVar7;
  _DAT_18340d268 = _DAT_18340d580 ^ _DAT_18340d118;
  _DAT_18340d348 = 0xdfdffcff;
  uVar7 = (_DAT_18340d518 ^ _DAT_1829c8e00) + _DAT_18340d330 + 0x45dbaab7;
  uVar12 = (_DAT_18340d330 ^ _UNK_1829c8e08) + _DAT_18340d518 + 0xe72843c7;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d518 ^ _DAT_1829c8e00;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d330 ^ _UNK_1829c8e08;
  _DAT_18340d620 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d518 + 0xe72843c7) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d330 + 0x45dbaab7));
  _DAT_18340d440 = (_DAT_18340d440 ^ _DAT_18340d620 ^ 0xe72843c7) + 0x26d1ca55 ^ 0xdb435bfeeaab0c5c;
  _DAT_18340d6b8 =
       (_DAT_18340d6b8 * 0x5e50aa9bb4930fbf ^ _DAT_18340d440) + (_DAT_18340d620 ^ 0xe72843c7);
  _DAT_18340d5c0 = _DAT_18340d6b8 ^ _DAT_18340d440;
  _DAT_18340d140 = 0x26d1ca55;
  uVar7 = (~_DAT_18340d448 + 0x33617874) *
          ((_DAT_18340d640 ^ 0x84222325) + (ulonglong)((uint)_DAT_18340d640 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_18340d5a8) + (uVar7 & _DAT_18340d5a8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d288 = func_0x00018f827180((uVar7 | 0xb7435b56) + (ulonglong)((uint)uVar7 & 0xb7435b56))
  ;
  uVar7 = (_DAT_18340d288 ^ 0x33617873) * 0x42fcae068878f549;
  _DAT_18340d5a0 = (_DAT_18340d5a0 ^ uVar7) - 0x33617873 ^ 0xbd0b93c2a93ca20e;
  _DAT_18340d400 = (_DAT_18340d400 * -0xc4ed82dced88f01 ^ _DAT_18340d5a0) + uVar7;
  _DAT_18340d2e8 = _DAT_18340d400 ^ _DAT_18340d5a0;
  _DAT_18340d2b0 = 0xcc9e878d;
  uVar7 = (~_DAT_18340d298 + 0x33617874) *
          ((_DAT_18340d458 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18340d458 & 0x8422231a) * 2);
  uVar7 = (uVar7 | _DAT_18340d6e8) + (uVar7 & _DAT_18340d6e8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d6f8 = func_0x00018f827180((uVar7 | 0xb7435b69) + (ulonglong)((uint)uVar7 & 0xb7435b69))
  ;
  uVar7 = _DAT_18340d6f8 ^ 0x3361787f;
  _DAT_18340d4e8 = _DAT_18340d650 ^ uVar7 ^ 0x336178b2;
  _DAT_18340d608 = (_DAT_18340d608 ^ uVar7) + 0x336178b2 ^ 0x6eef614188de1b29;
  _DAT_18340d350 = (_DAT_18340d350 * -0x561d94e867f95b39 ^ _DAT_18340d608) + uVar7;
  _DAT_18340d2b0 = 0x336178b2;
  _DAT_18340d340 = func_0x00018f827180(_DAT_18340d4c8 ^ 0xff53ff98f9ff5259);
  uVar7 = _DAT_18340d340 << 0x13 | _DAT_18340d340 >> 0x2d;
  _DAT_18340d3c0 = _DAT_18340d1d8 ^ uVar7 ^ 0x10000003f;
  _DAT_18340d438 = (_DAT_18340d438 ^ uVar7) + 0x10000003f ^ 0xffd191ac7fb5924f;
  _DAT_18340d258 = (_DAT_18340d258 * -0x71eb3b0dd6166d37 ^ _DAT_18340d438) + uVar7;
  _DAT_18340d658 = _DAT_18340d258 ^ _DAT_18340d438;
  _DAT_18340d428 = 0x3f;
  _DAT_18340d2d8 = func_0x00018f827180(_DAT_18340d448 + 0xff2fff36eaff81ff ^ 0x84);
  uVar7 = _DAT_18340d2d8 - (_DAT_18340d2d8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_18340d2d8) << 0x32 | _DAT_18340d2d8 >> 0xe;
  _DAT_18340d3e0 = (_DAT_18340d3e0 ^ uVar7) - 0x4fa0d358 ^ 0x8099848131758b70;
  _DAT_18340d588 = (_DAT_18340d588 * -0x3dfcc3a0a88a22d1 ^ _DAT_18340d3e0) + uVar7;
  _DAT_18340d498 = _DAT_18340d588 ^ _DAT_18340d3e0;
  _DAT_18340d578 = 0xb05f2ca8;
  _DAT_18340d118 = func_0x00018f827180(_DAT_18340d328 ^ 0xffd00046c2007d0b);
  uVar7 = ((_DAT_18340d118 & 0xffffffff) * (ulonglong)_DAT_1829c8e20 +
           (_DAT_18340d118 >> 0x20) * (_DAT_1829c8e10 & 0xffffffff) << 0x20) +
          (_DAT_18340d118 & 0xffffffff) * (_DAT_1829c8e10 & 0xffffffff) & 0x7fffffffffffffff;
  _DAT_18340d298 = _DAT_18340d100 ^ uVar7 ^ 0x4fa0d397;
  _DAT_18340d1f8 = (_DAT_18340d1f8 ^ uVar7) + 0x4fa0d397 ^ 0x1b2662e76493c954;
  _DAT_18340d688 = (_DAT_18340d688 * -0x1925a481ce9a4d0f ^ _DAT_18340d1f8) + uVar7;
  _DAT_18340d540 = _DAT_18340d688 ^ _DAT_18340d1f8;
  _DAT_18340d2d8 = 0x4fa0d397;
  uVar7 = (~_DAT_18340d390 + 0xb05f2ca9) *
          ((_DAT_18340d470 ^ 0xcb82f0b2) + (ulonglong)((uint)_DAT_18340d470 & 0xcb82f0b2) * 2);
  uVar7 = (uVar7 | _DAT_18340d300) + (uVar7 & _DAT_18340d300);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d5a8 = func_0x00018f827180((uVar7 | 0x7bdddc1a) + (ulonglong)((uint)uVar7 & 0x7bdddc1a))
  ;
  uVar7 = (_DAT_18340d5a8 ^ 0xffffffa0) & 0xffffffffffffffe0;
  _DAT_18340d420 = _DAT_18340d5d0 ^ uVar7 ^ 0x10000003f;
  _DAT_18340d340 = (_DAT_18340d340 ^ uVar7) + 0x10000003f ^ 0xfea6d59009bec034;
  _DAT_18340d230 = (_DAT_18340d230 * 0x6bee86561c8f0d33 ^ _DAT_18340d340) + uVar7;
  _DAT_18340d3e8 = _DAT_18340d230 ^ _DAT_18340d340;
  _DAT_18340d150 = 0x3f;
  uVar7 = (_DAT_18340d210 ^ _DAT_1829c8e30) + _DAT_18340d368 + 0x84222325;
  uVar12 = (_DAT_18340d368 ^ _UNK_1829c8e38) + _DAT_18340d210 + 0xc9d6333e;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d210 ^ _DAT_1829c8e30;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d368 ^ _UNK_1829c8e38;
  _DAT_18340d620 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d210 + 0xc9d6333e) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d368 + 0x84222325));
  uVar7 = _DAT_18340d620 << 0x27 | _DAT_18340d620 >> 0x19;
  _DAT_18340d568 = (_DAT_18340d568 ^ uVar7) - 0xc9d6333e ^ 0x9e9095733d7c8dda;
  _DAT_18340d1c0 = (_DAT_18340d1c0 * -0x4f745b6a96aeddb ^ _DAT_18340d568) + uVar7;
  _DAT_18340d240 = _DAT_18340d1c0 ^ _DAT_18340d568;
  _DAT_18340d3f8 = 0x3629ccc2;
  uVar7 = (_DAT_18340d230 ^ _DAT_1829c8e40) + _DAT_18340d2b8 + 0x8422231a;
  uVar12 = (_DAT_18340d2b8 ^ _UNK_1829c8e48) + _DAT_18340d230 + 0xc9d6333e;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d230 ^ _DAT_1829c8e40;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d2b8 ^ _UNK_1829c8e48;
  _DAT_18340d298 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d230 + 0xc9d6333e) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d2b8 + 0x8422231a));
  _DAT_18340d438 = _DAT_18340d500 ^ _DAT_18340d298 ^ 0xc9d6337d;
  _DAT_18340d480 = (_DAT_18340d480 ^ _DAT_18340d298) + 0xc9d6337d ^ 0x4ff7ab0ecfab694d;
  _DAT_18340d1f8 = (_DAT_18340d1f8 * -0x2a6a3dac97b231b7 ^ _DAT_18340d480) + _DAT_18340d298;
  _DAT_18340d100 = _DAT_18340d1f8 ^ _DAT_18340d480;
  _DAT_18340d290 = 0xc9d6337d;
  uVar7 = (_DAT_18340d6a0 ^ _DAT_1829c8e50) + _DAT_18340d480 + 0x4df41058;
  uVar12 = (_DAT_18340d480 ^ _UNK_1829c8e58) + _DAT_18340d6a0 + 0x3629ccc2;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d6a0 ^ _DAT_1829c8e50;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d480 ^ _UNK_1829c8e58;
  _DAT_18340d6d0 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d6a0 + 0x3629ccc2) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d480 + 0x4df41058));
  uVar7 = _DAT_18340d6d0 ^ 0x2ab4239a425fa0ba;
  uVar12 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar4 + (uint)bVar4 ^ uVar7;
  _DAT_18340d4f8 = _DAT_18340d1b0 ^ uVar7 ^ 0x10000003f;
  _DAT_18340d118 = (_DAT_18340d118 ^ uVar7) + 0x10000003f ^ 0x7c728a1b8f9b2249;
  _DAT_18340d598 = (_DAT_18340d598 * -0x25cc968a245757e3 ^ _DAT_18340d118) + uVar7;
  _DAT_18340d570 = _DAT_18340d598 ^ _DAT_18340d118;
  _DAT_18340d568 = 0x3f;
  _DAT_18340d620 = func_0x00018f827180(0xffeaffaa8f0013f3);
  uVar7 = _DAT_18340d620 & 0xffffffffffff0000;
  _DAT_18340d2e8 = _DAT_18340d420 ^ uVar7 ^ 0x106b1c754;
  _DAT_18340d6b0 = (_DAT_18340d120 ^ uVar7) + 0x106b1c754 ^ 0x971acc25c8c3bf4d;
  _DAT_18340d438 = (_DAT_18340d438 * -0x45502b2e31365f93 ^ _DAT_18340d6b0) + uVar7;
  _DAT_18340d6b0 = _DAT_18340d438 ^ _DAT_18340d6b0;
  _DAT_18340d120 = _DAT_18340d108 ^ 0x106b1c754;
  _DAT_18340d678 = 0x6b1c754;
  uVar7 = (_DAT_18340d6b0 ^ _DAT_1829c8e60) + _DAT_18340d388 + 0x5bfddfda;
  uVar12 = (_DAT_18340d388 ^ _UNK_1829c8e68) + _DAT_18340d6b0 + 0x26d1ca55;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d6b0 ^ _DAT_1829c8e60;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d388 ^ _UNK_1829c8e68;
  _DAT_18340d578 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d6b0 + 0x26d1ca55) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d388 + 0x5bfddfda));
  uVar7 = _DAT_18340d578 << 0x15 | _DAT_18340d578 >> 0x2b;
  uVar12 = uVar7 >> 1 | uVar7;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  _DAT_18340d428 = (_DAT_18340d428 ^ uVar7) + 0x6d1c855 ^ 0xf95fedb0c74bf36f;
  _DAT_18340d130 = (_DAT_18340d130 * -0x7c3cd53f37ea3e77 ^ _DAT_18340d428) + uVar7;
  _DAT_18340d1a8 = _DAT_18340d130 ^ _DAT_18340d428;
  _DAT_18340d680 = 0x6d1c855;
  uVar7 = (~_DAT_18340d518 + 0xda390ab) *
          ((_DAT_18340d468 ^ 0x7d2c158f) + (ulonglong)((uint)_DAT_18340d468 & 0x7d2c158f) * 2);
  uVar7 = (uVar7 | _DAT_18340d5c8) + (uVar7 & _DAT_18340d5c8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d528 = func_0x00018f827180((uVar7 | 0x708f8525) + (ulonglong)((uint)uVar7 & 0x708f8525))
  ;
  uVar7 = (_DAT_18340d528 ^ 0xda390aa) & 0x7fffffffffffffff;
  _DAT_18340d2d0 = _DAT_18340d620 ^ uVar7 ^ 0x106b1c754;
  _DAT_18340d118 = (_DAT_18340d118 ^ uVar7) + 0x106b1c754 ^ 0xaa9972bd79333593;
  _DAT_18340d4d0 = (_DAT_18340d4d0 * -0x490e02fc121c3565 ^ _DAT_18340d118) + uVar7;
  _DAT_18340d2a8 = _DAT_18340d4d0 ^ _DAT_18340d118;
  _DAT_18340d638 = 0x6b1c754;
  uVar7 = (~_DAT_18340d158 + 0x6b1c755) *
          ((_DAT_18340d440 ^ 0x8293e471) + (ulonglong)((uint)_DAT_18340d440 & 0x8293e471) * 2);
  uVar7 = (uVar7 | _DAT_18340d5c0) + (uVar7 & _DAT_18340d5c0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d448 = func_0x00018f827180((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_18340d678 = _DAT_18340d678 ^ _DAT_18340d448 ^ 0x81bae2a3fe106b10;
  _DAT_18340d1a8 = (_DAT_18340d1a8 * 0x39cb1731fd1ca503 ^ _DAT_18340d678) + _DAT_18340d448;
  _DAT_18340d370 = _DAT_18340d1a8 ^ _DAT_18340d678;
  _DAT_18340d530 = 0;
  uVar7 = ((_DAT_18340d3c8 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18340d3c8 & 0x8422231a) * 2) *
          -_DAT_18340d320;
  uVar7 = (uVar7 | _DAT_18340d448) + (uVar7 & _DAT_18340d448);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d6f0 = _DAT_18340d448;
  _DAT_18340d198 = func_0x00018f827180((uVar7 | 0x8422231a) + (ulonglong)((uint)uVar7 & 0x8422231a))
  ;
  uVar7 = _DAT_18340d198 - (_DAT_18340d198 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_18340d198;
  _DAT_18340d568 = _DAT_18340d660 ^ uVar7 ^ 0x3f;
  _DAT_18340d378 = (_DAT_18340d378 ^ uVar7) + 0x3f ^ 0x3b895316be22c4a9;
  _DAT_18340d5b0 = (_DAT_18340d420 * 0x3b8b7e985598d403 ^ _DAT_18340d378) + uVar7 ^ _DAT_18340d378;
  _DAT_18340d420 = 0x3f;
  uVar7 = (~_DAT_18340d330 + 0x100000000) *
          ((_DAT_18340d6a0 ^ 0x5bfddfda) + (ulonglong)((uint)_DAT_18340d6a0 & 0x5bfddfda) * 2);
  uVar7 = (uVar7 | _DAT_18340d3a8) + (uVar7 & _DAT_18340d3a8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d290 = func_0x00018f827180((uVar7 | 0xa4022025) + (ulonglong)((uint)uVar7 & 0xa4022025))
  ;
  _DAT_18340d310 =
       (_DAT_18340d310 ^ _DAT_18340d290 & 0x7fffffffffffffff) + 0x20200300 ^ 0x9a865385e171f9d4;
  _DAT_18340d240 =
       (_DAT_18340d240 * 0x7089007a71bc9221 ^ _DAT_18340d310) +
       (_DAT_18340d290 & 0x7fffffffffffffff);
  _DAT_18340d550 = _DAT_18340d240 ^ _DAT_18340d310;
  _DAT_18340d658 = 0x20200300;
  uVar7 = (~_DAT_18340d240 + 0x20200301) *
          ((_DAT_18340d618 ^ 0x5bfddfda) + (ulonglong)((uint)_DAT_18340d618 & 0x5bfddfda) * 2);
  uVar7 = (uVar7 | _DAT_18340d328) + (uVar7 & _DAT_18340d328);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18340d3e8 = func_0x00018f827180((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  _DAT_18340d5d8 = _DAT_18340d5d8 ^ _DAT_18340d3e8 ^ 0xbd9d054cc3235d28;
  _DAT_18340d228 = (_DAT_18340d228 * -0x3a750f2d3b68278d ^ _DAT_18340d5d8) + _DAT_18340d3e8;
  _DAT_18340d190 = _DAT_18340d228 ^ _DAT_18340d5d8;
  _DAT_18340d688 = 0;
  _DAT_18340d4c8 = func_0x00018f827180(_DAT_18340d6c0 ^ 0xffdeff7bf60021de);
  uVar7 = _DAT_18340d4c8 >> 1 | _DAT_18340d4c8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18340d4c8;
  _DAT_18340d530 = _DAT_18340d388 ^ uVar7 ^ 0x3f;
  _DAT_18340d2f0 = (_DAT_18340d2f0 ^ uVar7) + 0x3f ^ 0x34d1918fbd26415d;
  _DAT_18340d2d0 = (_DAT_18340d2d0 * 0x4a122414903be113 ^ _DAT_18340d2f0) + uVar7;
  _DAT_18340d658 = _DAT_18340d2d0 ^ _DAT_18340d2f0;
  _DAT_18340d140 = 0x3f;
  uVar7 = (_DAT_18340d448 ^ _DAT_1829c8e70) + _DAT_18340d3e8 + 0xd2e46fea;
  uVar12 = (_DAT_18340d3e8 ^ _UNK_1829c8e78) + _DAT_18340d448 + 0x56c64ccf;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18340d448 ^ _DAT_1829c8e70;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18340d3e8 ^ _UNK_1829c8e78;
  _DAT_18340d500 =
       func_0x00018f827180((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18340d448 + 0x56c64ccf) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18340d3e8 + 0xd2e46fea));
  _DAT_18340d1a8 = _DAT_18340d1a8 ^ _DAT_18340d500 & 0x7fffffffffffffff ^ 0x5bf5987ed6247ed3;
  _DAT_18340d540 =
       (_DAT_18340d540 * -0x4f63b2ad3950f79b ^ _DAT_18340d1a8) +
       (_DAT_18340d500 & 0x7fffffffffffffff);
  _DAT_18340d588 = _DAT_18340d540 ^ _DAT_18340d1a8;
  _DAT_18340d558 = 0;
  _DAT_18340d2f8 = func_0x00018f827180(_DAT_18340d3a8 + 0x1eff7c19ffddff ^ 0xb8);
  uVar7 = (ulonglong)((uint)_DAT_18340d2f8 ^ 0x3f) << 0x30 | _DAT_18340d2f8 >> 0x10;
  _DAT_18340d348 = _DAT_18340d670 ^ uVar7 ^ 0x3f;
  _DAT_18340d398 = (_DAT_18340d398 ^ uVar7) + 0x3f ^ 0x9595d7232f684ae7;
  _DAT_18340d558 = (_DAT_18340d558 * 0x346539fba78a6b73 ^ _DAT_18340d398) + uVar7;
  _DAT_18340d408 = _DAT_18340d558 ^ _DAT_18340d398;
  _DAT_18340d608 = 0x3f;
  uVar7 = unaff_RBP[4];
  auVar10._8_8_ = _UNK_180132e68;
  auVar10._0_8_ = uVar7 ^ 0x84222325;
  auVar11 = pshufb(auVar10 ^ _DAT_1829c8e80,unaff_XMM10);
  uVar6 = auVar11._8_8_ + auVar11._0_8_;
  uVar12 = uVar6 + _DAT_18340d6c0;
  if (auVar11._4_4_ < 0) {
    uVar12 = _DAT_18340d590 ^ uVar6;
  }
  _DAT_18340d558 = func_0x00018f827180(SUB161(auVar10 ^ _DAT_1829c8e80,5) ^ uVar12);
  uVar12 = (uVar7 ^ _DAT_18340d558) * -0xc5ceda8b2fd07fb;
  uVar5 = (uint)uVar7 & 0x3f;
  _DAT_18340d220 = (ulonglong)uVar5;
  _DAT_18340d538 = (_DAT_18340d538 ^ uVar12) + _DAT_18340d220 ^ 0xe757161f5138aba7;
  _DAT_18340d610 = (_DAT_18340d610 * 0x2508e34d7ae40711 ^ _DAT_18340d538) + uVar12;
  _DAT_18340d530 = _DAT_18340d610 ^ _DAT_18340d538;
  unaff_RBP[0xe] = unaff_RBP[2];
  uVar1 = *(uint *)(unaff_RBP + 6);
  *(uint *)(unaff_RBP + 0xf) = uVar1;
  uVar12 = (ulonglong)uVar1;
  uVar7 = uVar12 ^ 0x84222325 ^ _DAT_18340d260;
  lVar9 = (uVar12 ^ 0x84222325) + _DAT_18340d2a8;
  uVar6 = uVar7 + lVar9;
  uVar13 = (_DAT_18340d2a8 ^ 1) + _DAT_18340d260 + 1;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar7;
  uVar6 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18340d2a8 ^ 1;
  uVar2 = *(uint *)(unaff_RBP + 10);
  _DAT_18340d6d0 =
       func_0x00018f827180((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18340d260 + 1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar9);
  uVar7 = _DAT_18340d6d0 >> 1 | _DAT_18340d6d0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_18340d6d0 ^ uVar12;
  uVar14 = uVar1 & unaff_XMM13_Da;
  uVar15 = uVar1 | unaff_XMM13_Da;
  uVar16 = uVar1 ^ unaff_XMM13_Da;
  lVar9 = ((ulonglong)uVar1 * (ulonglong)_DAT_1829c8ee0 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_1829c8ed0;
  _DAT_18340d130 =
       ((((ulonglong)uVar16 * (ulonglong)_DAT_1829c8ea0 << 0x20) +
         (ulonglong)uVar16 * (ulonglong)_DAT_1829c8e90 +
         ((ulonglong)uVar14 * (ulonglong)_DAT_1829c8ea0 << 0x20 |
         (ulonglong)uVar14 * (ulonglong)_DAT_1829c8e90) + uVar12 + lVar9 +
        ((ulonglong)uVar15 * (ulonglong)_DAT_1829c8ec0 << 0x20) +
        (ulonglong)uVar15 * (ulonglong)_DAT_1829c8eb0) -
       (((ulonglong)uVar16 * (ulonglong)_DAT_1829c8f60 << 0x20) +
        (ulonglong)uVar16 * (ulonglong)_DAT_1829c8f50 +
        ((ulonglong)uVar15 * (ulonglong)_DAT_1829c8f40 << 0x20) +
        (ulonglong)uVar15 * (ulonglong)_DAT_1829c8f30 +
        ((ulonglong)uVar14 * (ulonglong)_DAT_1829c8f20 << 0x20 |
        (ulonglong)uVar14 * (ulonglong)_DAT_1829c8f10) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_1829c8f00 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_1829c8ef0 + lVar9)) + 0xa2567a6cd9dbd996;
  _DAT_18340d1d0 = _DAT_18340d5a8 ^ uVar7 ^ _DAT_18340d130;
  _DAT_18340d270 = (_DAT_18340d270 ^ uVar7) + _DAT_18340d130 ^ 0x5ec1f3aefe63f49b;
  _DAT_18340d350 = (_DAT_18340d350 * 0x18ed6275b03c26c9 ^ _DAT_18340d270) + uVar7;
  _DAT_18340d6c0 = _DAT_18340d350 ^ _DAT_18340d270;
  _DAT_18340d130 = _DAT_18340d130 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x10) = uVar2 | uVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[0x14]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f814426 (image 18f814426) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f814426(void)

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



// ===== continuation @ rva f814763 (image 18f814763) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f814763(void)

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



// ===== continuation @ rva f811a03 (image 18f811a03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f811a03(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar3;
  longlong *unaff_R15;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 unaff_XMM6 [16];
  uint unaff_XMM13_Da;
  
  auVar4 = pshufb(in_XMM0,unaff_XMM6);
  uVar3 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar3 + _DAT_18340d148;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_18340d508 ^ uVar3;
  }
  _DAT_18340d178 = func_0x00018f827180(in_XMM0[5] ^ uVar2);
  uVar2 = _DAT_18340d178 >> 1 | _DAT_18340d178;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_18340d178 ^ (ulonglong)unaff_ESI;
  uVar5 = unaff_ESI ^ (uint)DAT_18001a710;
  uVar3 = ((((ulonglong)(unaff_ESI ^ unaff_XMM13_Da) * (ulonglong)_DAT_1829c8940 << 0x20) +
            (ulonglong)(unaff_ESI ^ unaff_XMM13_Da) * (ulonglong)_DAT_1829c8930 +
           ((ulonglong)(unaff_ESI & unaff_XMM13_Da) * (ulonglong)_DAT_1829c8920 << 0x20 |
           (ulonglong)(unaff_ESI & unaff_XMM13_Da) * (ulonglong)_DAT_1829c8910) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_1829c8900 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_1829c88f0) -
          (((ulonglong)uVar5 * (ulonglong)_DAT_1829c8980 + _DAT_1829c8990 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_1829c8970 +
          ((ulonglong)unaff_ESI * (ulonglong)_DAT_1829c8980 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_1829c8970)) + 0x7b668474737984d2;
  _DAT_18340d6e8 = _DAT_18340d438 ^ uVar2 ^ uVar3;
  _DAT_18340d4f8 = (_DAT_18340d4f8 ^ uVar2) + uVar3 ^ 0xebca873d69a2c868;
  _DAT_18340d600 = (_DAT_18340d600 * 0x70ac4eae71ec1de5 ^ _DAT_18340d4f8) + uVar2;
  _DAT_18340d1d0 = _DAT_18340d600 ^ _DAT_18340d4f8;
  _DAT_18340d170 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar3;
  iVar1 = (**(code **)(*unaff_R15 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f814519 (image 18f814519) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f814519(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  undefined8 unaff_R15;
  
  uVar2 = (**(code **)(*unaff_R13 + 0xd8))();
  *(undefined8 *)(unaff_RBP + 0x70) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x78) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x80) = unaff_R15;
  *(undefined4 *)(unaff_RBP + 0x88) = 0;
  *(undefined4 *)(unaff_RBP + 0x90) = unaff_EDI;
  FUN_190ddfc90();
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



// ===== continuation @ rva f829a07 (image 18f829a07) =====

void FUN_18f829a07(void)

{
  return;
}



// ===== continuation @ rva f829870 (image 18f829870) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f829870(void)

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



// ===== continuation @ rva f82be75 (image 18f82be75) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18f829e83(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x88))();
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



// ===== continuation @ rva f82c926 (image 18f82c926) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82c926(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar5;
  longlong unaff_R12;
  ulonglong unaff_R14;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 unaff_XMM6 [16];
  uint uVar10;
  ulonglong uVar11;
  uint unaff_XMM11_Da;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar4 = (~_DAT_18340e2e0 + 2) * ((param_1 ^ in_RAX) + (in_RAX & param_1) * 2);
  uVar4 = (uVar4 | _DAT_18340dfb0) + (uVar4 & _DAT_18340dfb0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18340dfc0 = func_0x00018f82e3a0((in_RAX ^ 1 | uVar4) + (uVar4 & (in_RAX ^ 1)));
  uVar4 = _DAT_18340dfc0 ^ unaff_R14;
  uVar10 = (uint)unaff_R14;
  uVar7 = (uint)(unaff_R14 >> 0x20);
  auVar1._8_4_ = uVar10;
  auVar1._0_8_ = unaff_R14;
  auVar1._12_4_ = uVar7;
  auVar2._8_4_ = uVar10;
  auVar2._0_8_ = unaff_R14;
  auVar2._12_4_ = uVar7;
  auVar3._8_4_ = uVar10;
  auVar3._0_8_ = unaff_R14;
  auVar3._12_4_ = uVar7;
  uVar10 = uVar10 & unaff_XMM6._0_4_;
  uVar11 = SUB168(auVar1 | unaff_XMM6,0);
  uVar8 = SUB164(auVar1 | unaff_XMM6,0);
  uVar12 = SUB168(auVar2 ^ unaff_XMM6,0);
  uVar6 = SUB164(auVar2 ^ unaff_XMM6,0);
  uVar13 = SUB168(auVar3 ^ _DAT_18001a710,0);
  uVar9 = SUB164(auVar3 ^ _DAT_18001a710,0);
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38) << 3 ^ uVar4;
  _DAT_18340e2b8 =
       (((ulonglong)uVar9 * (ulonglong)_DAT_1829ce8a0 +
         ((ulonglong)uVar9 * (ulonglong)_DAT_1829ce8f0 +
          (uVar13 >> 0x20) * (ulonglong)_DAT_1829ce8a0 << 0x20) +
         (ulonglong)uVar6 * (ulonglong)_DAT_1829ce8d0 +
         ((ulonglong)uVar6 * (ulonglong)_DAT_1829ce8e0 +
          (uVar12 >> 0x20) * (ulonglong)_DAT_1829ce8d0 << 0x20) +
        (ulonglong)uVar8 * (ulonglong)_DAT_1829ce8b0 +
        ((ulonglong)uVar8 * (ulonglong)_DAT_1829ce8c0 + (uVar11 >> 0x20) * (ulonglong)_DAT_1829ce8b0
        << 0x20) +
        ((ulonglong)uVar10 * (ulonglong)_DAT_1829ce890 << 0x20 |
        (ulonglong)uVar10 * (ulonglong)_DAT_1829ce880) +
        ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1829ce870 +
         (ulonglong)uVar7 * (ulonglong)_DAT_1829ce860 << 0x20) +
        (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1829ce860) -
       ((ulonglong)uVar9 * (_DAT_1829ce960 & 0xffffffff) +
        ((ulonglong)uVar9 * (ulonglong)_DAT_1829ce9b0 +
         (uVar13 >> 0x20) * (_DAT_1829ce960 & 0xffffffff) << 0x20) +
        (ulonglong)uVar6 * (ulonglong)unaff_XMM11_Da +
        ((ulonglong)uVar6 * (ulonglong)_DAT_1829ce9a0 + (uVar12 >> 0x20) * (ulonglong)unaff_XMM11_Da
        << 0x20) +
       (ulonglong)uVar8 * (ulonglong)_DAT_1829ce970 +
       ((ulonglong)uVar8 * (ulonglong)_DAT_1829ce980 + (uVar11 >> 0x20) * (ulonglong)_DAT_1829ce970
       << 0x20) +
       ((ulonglong)uVar10 * (ulonglong)_DAT_1829ce950 << 0x20 |
       (ulonglong)uVar10 * (ulonglong)_DAT_1829ce940) +
       ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1829ce930 +
        (ulonglong)uVar7 * (ulonglong)_DAT_1829ce920 << 0x20) +
       (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1829ce920)) + 0x3af5d142dc4a34b2;
  _DAT_18340df50 = _DAT_18340e1a0 ^ uVar4 ^ _DAT_18340e2b8;
  _DAT_18340e1a8 = (_DAT_18340e1a8 ^ uVar4) + _DAT_18340e2b8 ^ unaff_RBP;
  _DAT_18340e128 = (_DAT_18340e128 * unaff_RSI ^ _DAT_18340e1a8) + uVar4;
  _DAT_18340dfb0 = _DAT_18340e128 ^ _DAT_18340e1a8;
                    /* WARNING: Could not recover jumptable at 0x00018f82cd1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_RBX + (ulonglong)(_DAT_18340e2b8 == 8) * 8))();
  return;
}



// ===== continuation @ rva f82b8c2 (image 18f82b8c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82b8c2(void)

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



// ===== continuation @ rva f82e22e (image 18f82e22e) =====

void FUN_18f82e22e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva f82d0b2 (image 18f82d0b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82d0b2(void)

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



// ===== continuation @ rva f82d2b5 (image 18f82d2b5) =====

undefined8 thunk_FUN_18f82cea5(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva f82a8ca (image 18f82a8ca) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82a8ca(void)

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



// ===== continuation @ rva f82a376 (image 18f82a376) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82a376(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190ddfc90(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0x8e8,*_DAT_18301ee50 + 0x8ec,
                0x27);
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



// ===== continuation @ rva f82e4c3 (image 18f82e4c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82e4c3(void)

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



// ===== continuation @ rva f82e46f (image 18f82e46f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82e46f(void)

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



// ===== continuation @ rva f82e7ed (image 18f82e7ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82e7ed(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  FUN_190dd72e0();
  (*_DAT_1829ceb08)();
  return;
}



// ===== continuation @ rva f82e78b (image 18f82e78b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82e78b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829cee88)();
  return;
}



// ===== continuation @ rva f82f1f3 (image 18f82f1f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82f1f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829ced68)();
  return;
}



// ===== continuation @ rva f82f160 (image 18f82f160) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82f160(void)

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



// ===== continuation @ rva f82f228 (image 18f82f228) =====

void FUN_18f82f228(void)

{
  return;
}



// ===== continuation @ rva f82f045 (image 18f82f045) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82f045(void)

{
  FUN_190de3220();
  (*_DAT_1829ceb98)();
  return;
}



// ===== continuation @ rva f82f236 (image 18f82f236) =====

void FUN_18f82f236(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f82f10c (image 18f82f10c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82f10c(void)

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



// ===== continuation @ rva f82e8b9 (image 18f82e8b9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82e8b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829cee48)();
  return;
}



// ===== continuation @ rva f82eaf5 (image 18f82eaf5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82eaf5(void)

{
  FUN_190dd72e0();
  (*_DAT_1829ceab8)();
  return;
}



// ===== continuation @ rva f82e90f (image 18f82e90f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82e90f(void)

{
  FUN_190ddfc90();
  (*_DAT_1829cee28)();
  return;
}



// ===== continuation @ rva f831c7d (image 18f831c7d) =====

void FUN_18f831c7d(void)

{
  return;
}



// ===== continuation @ rva f82f3a0 (image 18f82f3a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f82f3a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1829cf0e8)();
  return;
}



// ===== continuation @ rva f831c22 (image 18f831c22) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f831c22(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829ceff8)();
  return;
}



// ===== continuation @ rva f82fcb3 (image 18f82fcb3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82fcb3(void)

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



// ===== continuation @ rva f8308bd (image 18f8308bd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8308bd(void)

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



// ===== continuation @ rva f82f600 (image 18f82f600) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82f600(void)

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



// ===== continuation @ rva f82f9f0 (image 18f82f9f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82f9f0(void)

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



// ===== continuation @ rva f82f883 (image 18f82f883) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f82f883(void)

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



// ===== continuation @ rva f8310cf (image 18f8310cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8310cf(void)

{
  (*_DAT_1829cfd38)();
  return;
}



// ===== continuation @ rva f8302b1 (image 18f8302b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8302b1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000b0;
  undefined2 uStack00000000000000b4;
  undefined4 uStack00000000000000e4;
  
  uStack00000000000000e4 = 0x2b14d1d5;
  uVar1 = rdtsc();
  uStack00000000000000b0 = 0x690073;
  uStack00000000000000b4 = 0x78;
  (*_DAT_1829cf1e8)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



// ===== continuation @ rva f834281 (image 18f834281) =====

void FUN_18f834281(void)

{
  return;
}



// ===== continuation @ rva f8340ec (image 18f8340ec) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8340ec(void)

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



// ===== continuation @ rva f83c2e5 (image 18f83c2e5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f83c2e5(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x488))();
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



// ===== continuation @ rva f836bd9 (image 18f836bd9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f836bd9(void)

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



// ===== continuation @ rva f834604 (image 18f834604) =====

undefined8 thunk_FUN_18f83426a(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva f837341 (image 18f837341) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f837341(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xc1b,0x30);
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



// ===== continuation @ rva f835611 (image 18f835611) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f835611(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f838b63 (image 18f838b63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f838b63(void)

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



// ===== continuation @ rva f8389cd (image 18f8389cd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8389cd(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 uStack0000000000000048;
  undefined8 in_stack_00000078;
  
  uStack0000000000000048 = in_stack_00000078;
  FUN_190ddfc90(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0xd41,*_DAT_18301ee50 + 0xd49,
                0x3f);
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



// ===== continuation @ rva f835ca3 (image 18f835ca3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f835ca3(void)

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



// ===== continuation @ rva f83c812 (image 18f83c812) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f83c812(void)

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



// ===== continuation @ rva f83c7be (image 18f83c7be) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83c7be(void)

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



// ===== continuation @ rva f83d2c8 (image 18f83d2c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83d2c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1829d2398)();
  return;
}



// ===== continuation @ rva f83d262 (image 18f83d262) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83d262(void)

{
  FUN_190dd72e0();
  (*_DAT_1829d22c8)();
  return;
}



// ===== continuation @ rva f83d685 (image 18f83d685) =====

void FUN_18f83d685(void)

{
  return;
}



// ===== continuation @ rva f83d3a6 (image 18f83d3a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83d3a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_1829d1fa8)();
  return;
}



// ===== continuation @ rva f83ce77 (image 18f83ce77) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83ce77(void)

{
  FUN_190dd72e0();
  (*_DAT_1829d2058)();
  return;
}



// ===== continuation @ rva f83d366 (image 18f83d366) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83d366(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1829d2298)();
  return;
}



// ===== continuation @ rva f83c96b (image 18f83c96b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83c96b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829d21f8)();
  return;
}



// ===== continuation @ rva f83d446 (image 18f83d446) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83d446(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1829d2338)();
  return;
}



// ===== continuation @ rva f83d3e0 (image 18f83d3e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83d3e0(void)

{
  FUN_190dd72e0();
  (*_DAT_1829d21b8)();
  return;
}



// ===== continuation @ rva f83d651 (image 18f83d651) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f83d651(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829d2268)();
  return;
}



// ===== continuation @ rva f83cadd (image 18f83cadd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f83cadd(void)

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



// ===== continuation @ rva f85bf46 (image 18f85bf46) =====

void FUN_18f85bf46(void)

{
  return;
}



// ===== continuation @ rva f859fac (image 18f859fac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f859fac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1829d8578)();
  return;
}



// ===== continuation @ rva f85ca84 (image 18f85ca84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85ca84(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829d8028)();
  return;
}



// ===== continuation @ rva f85b323 (image 18f85b323) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f85b323(void)

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



// ===== continuation @ rva f85abbd (image 18f85abbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85abbd(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829d82f8)();
  return;
}



// ===== continuation @ rva f85a4a6 (image 18f85a4a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85a4a6(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_1829d80c8)();
  return;
}



// ===== continuation @ rva f85b164 (image 18f85b164) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f85b164(void)

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



// ===== continuation @ rva f85ab8b (image 18f85ab8b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f85ab8b(void)

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



// ===== continuation @ rva f85c221 (image 18f85c221) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85c221(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829d86b8)();
  return;
}



// ===== continuation @ rva f85c009 (image 18f85c009) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85c009(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1829d8a58)();
  return;
}



// ===== continuation @ rva f85a965 (image 18f85a965) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85a965(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1829d8728)();
  return;
}



// ===== continuation @ rva f85a27e (image 18f85a27e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f85a27e(void)

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



// ===== continuation @ rva f85b9fc (image 18f85b9fc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85b9fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1829d85f8)();
  return;
}



// ===== continuation @ rva f85b806 (image 18f85b806) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f85b806(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1829d8868)();
  return;
}



