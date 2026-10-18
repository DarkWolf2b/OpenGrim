// ===== continuation @ rva 5fdb116 (image 185fdb116) =====

void FUN_185fdb116(void)

{
  return;
}



// ===== continuation @ rva 5fd519f (image 185fd519f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd519f(void)

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



// ===== continuation @ rva 5fd85bc (image 185fd85bc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd85bc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = in_stack_00000048;
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



// ===== continuation @ rva 5fda0b1 (image 185fda0b1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fda0b1(void)

{
  char cVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  uint unaff_R15D;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = (ulonglong)unaff_R15D ^ 0x84222325;
  uVar2 = (~_DAT_18310da58 + 2) *
          ((_DAT_18310d500 ^ uVar2) + (ulonglong)((uint)_DAT_18310d500 & (uint)uVar2) * 2);
  uVar3 = (uVar2 | _DAT_18310d728) + (uVar2 & _DAT_18310d728);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar2 = (ulonglong)unaff_R15D ^ 0x84222324;
  _DAT_18310d918 = func_0x000185fdb300((uVar2 | uVar3) + (ulonglong)((uint)uVar2 & (uint)uVar3));
  uVar7 = unaff_R15D & _DAT_18001a990;
  uVar5 = unaff_R15D | _DAT_18001a990;
  uVar8 = unaff_R15D ^ _DAT_18001a990;
  lVar6 = ((ulonglong)unaff_R15D * (ulonglong)_DAT_180750dc0 << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_180750db0;
  lVar4 = ((ulonglong)uVar8 * (ulonglong)_DAT_180750e40 << 0x20) +
          (ulonglong)uVar8 * (ulonglong)_DAT_180750e30 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180750e20 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180750e10 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_180750e00 << 0x20 |
          (ulonglong)uVar7 * (ulonglong)_DAT_180750df0) +
          ((ulonglong)unaff_R15D * (ulonglong)_DAT_180750de0 << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_180750dd0 + lVar6;
  uVar2 = _DAT_18310d918 & 0x1ffffffff;
  _DAT_18310d6a8 =
       ((((ulonglong)uVar8 * (ulonglong)_DAT_180750da0 << 0x20) +
         (ulonglong)uVar8 * (ulonglong)_DAT_180750d90 +
         ((ulonglong)uVar5 * (ulonglong)_DAT_180750d80 << 0x20) +
         (ulonglong)uVar5 * (ulonglong)_DAT_180750d70 +
         ((ulonglong)uVar7 * (ulonglong)_DAT_180750d60 << 0x20 |
         (ulonglong)uVar7 * (ulonglong)_DAT_180750d50) +
         ((ulonglong)unaff_R15D * (ulonglong)_DAT_180750d40 << 0x20) +
         (ulonglong)unaff_R15D * (ulonglong)_DAT_180750d30 + lVar6) - lVar4) + 0xbf8ae61b603bd176;
  _DAT_18310d9e0 = _DAT_18310d718 ^ uVar2 ^ _DAT_18310d6a8;
  _DAT_18310da28 = (_DAT_18310da28 ^ uVar2) + _DAT_18310d6a8 ^ 0x7cc530358398cd9;
  _DAT_18310d5f8 = (_DAT_18310d5f8 * -0x39f5ad5355b0052b ^ _DAT_18310da28) + uVar2;
  _DAT_18310d760 = _DAT_18310d5f8 ^ _DAT_18310da28;
  _DAT_18310d6a8 = _DAT_18310d6a8 & 0xffffffff;
  FUN_190dd72e0(lVar4,*_DAT_18301ee50 + 0x2e9,0x12);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5fdac81 (image 185fdac81) =====

void thunk_FUN_185fd5321(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 5fd569e (image 185fd569e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd569e(void)

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



// ===== continuation @ rva 5fd58ec (image 185fd58ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd58ec(void)

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



// ===== continuation @ rva 5fd77ca (image 185fd77ca) =====

void thunk_FUN_185fd5321(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 5fd54e9 (image 185fd54e9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd54e9(void)

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



// ===== continuation @ rva 5fdb426 (image 185fdb426) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb426(void)

{
  FUN_190dd72e0();
  (*_DAT_180750ef8)();
  return;
}



// ===== continuation @ rva 5fdb3b3 (image 185fdb3b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb3b3(void)

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



// ===== continuation @ rva 5fdb4fe (image 185fdb4fe) =====

void FUN_185fdb4fe(void)

{
  return;
}



// ===== continuation @ rva 5fdb3ec (image 185fdb3ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb3ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180750f08)();
  return;
}



// ===== continuation @ rva 5fdb4c6 (image 185fdb4c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb4c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180750ee8)();
  return;
}



// ===== continuation @ rva 5fdb506 (image 185fdb506) =====

void FUN_185fdb506(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fdb4a2 (image 185fdb4a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb4a2(void)

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



// ===== continuation @ rva 5fdb4ed (image 185fdb4ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb4ed(void)

{
  (*_DAT_180750f28)();
  return;
}



// ===== continuation @ rva 5fdb44e (image 185fdb44e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb44e(void)

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



// ===== continuation @ rva 5fdb411 (image 185fdb411) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb411(void)

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



// ===== continuation @ rva 5fdb626 (image 185fdb626) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb626(void)

{
  FUN_190dd72e0();
  (*_DAT_180750f98)();
  return;
}



// ===== continuation @ rva 5fdb5b3 (image 185fdb5b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb5b3(void)

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



// ===== continuation @ rva 5fdb704 (image 185fdb704) =====

void FUN_185fdb704(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fdb6fc (image 185fdb6fc) =====

void FUN_185fdb6fc(void)

{
  return;
}



// ===== continuation @ rva 5fdb64e (image 185fdb64e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb64e(void)

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



// ===== continuation @ rva 5fdb66f (image 185fdb66f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb66f(void)

{
  FUN_190dd9df0();
  (*_DAT_180750fb8)();
  return;
}



// ===== continuation @ rva 5fdb6a2 (image 185fdb6a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb6a2(void)

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



// ===== continuation @ rva 5fdb6c6 (image 185fdb6c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb6c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180751008)();
  return;
}



// ===== continuation @ rva 5fdb5ec (image 185fdb5ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb5ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180750ff8)();
  return;
}



// ===== continuation @ rva 5fdb831 (image 185fdb831) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb831(void)

{
  FUN_190dd72e0();
  (*_DAT_1807510e8)();
  return;
}



// ===== continuation @ rva 5fdb7b8 (image 185fdb7b8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb7b8(undefined4 param_1)

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



// ===== continuation @ rva 5fdb90e (image 185fdb90e) =====

void FUN_185fdb90e(void)

{
  return;
}



// ===== continuation @ rva 5fdb91b (image 185fdb91b) =====

void FUN_185fdb91b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fdb8fe (image 185fdb8fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb8fe(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180751098)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 5fdb7f4 (image 185fdb7f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb7f4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807510b8)();
  return;
}



// ===== continuation @ rva 5fdb87d (image 185fdb87d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb87d(void)

{
  FUN_190dd9df0();
  (*_DAT_1807510c8)();
  return;
}



// ===== continuation @ rva 5fdb819 (image 185fdb819) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb819(void)

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



// ===== continuation @ rva 5fdb8b0 (image 185fdb8b0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb8b0(void)

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



// ===== continuation @ rva 5fdba3b (image 185fdba3b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdba3b(void)

{
  FUN_190dd72e0();
  (*_DAT_180751188)();
  return;
}



// ===== continuation @ rva 5fdb9c8 (image 185fdb9c8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb9c8(void)

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



// ===== continuation @ rva 5fdbb13 (image 185fdbb13) =====

void FUN_185fdbb13(void)

{
  return;
}



// ===== continuation @ rva 5fdbadb (image 185fdbadb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbadb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_180751178)();
  return;
}



// ===== continuation @ rva 5fdbb1d (image 185fdbb1d) =====

void FUN_185fdbb1d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fdbab7 (image 185fdbab7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdbab7(void)

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



// ===== continuation @ rva 5fdbb02 (image 185fdbb02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbb02(void)

{
  (*_DAT_180751168)();
  return;
}



// ===== continuation @ rva 5fdba63 (image 185fdba63) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdba63(void)

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



// ===== continuation @ rva 5fdba26 (image 185fdba26) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdba26(void)

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



// ===== continuation @ rva 5fdba84 (image 185fdba84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdba84(void)

{
  FUN_190dd9df0();
  (*_DAT_180751158)();
  return;
}



// ===== continuation @ rva 5fdbc3b (image 185fdbc3b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbc3b(void)

{
  FUN_190dd72e0();
  (*_DAT_180751228)();
  return;
}



// ===== continuation @ rva 5fdbbc8 (image 185fdbbc8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbbc8(void)

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



// ===== continuation @ rva 5fdbd1d (image 185fdbd1d) =====

void FUN_185fdbd1d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fdbc63 (image 185fdbc63) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdbc63(void)

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



// ===== continuation @ rva 5fdbd13 (image 185fdbd13) =====

void FUN_185fdbd13(void)

{
  return;
}



// ===== continuation @ rva 5fdbc01 (image 185fdbc01) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbc01(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_1807512a8)();
  return;
}



// ===== continuation @ rva 5fdbc84 (image 185fdbc84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbc84(void)

{
  FUN_190dd9df0();
  (*_DAT_180751298)();
  return;
}



// ===== continuation @ rva 5fdbd02 (image 185fdbd02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbd02(void)

{
  (*_DAT_180751258)();
  return;
}



// ===== continuation @ rva 5fdbcdb (image 185fdbcdb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbcdb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_180751278)();
  return;
}



// ===== continuation @ rva 5fdbe3e (image 185fdbe3e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbe3e(void)

{
  FUN_190dd72e0();
  (*_DAT_180751388)();
  return;
}



// ===== continuation @ rva 5fdbdcb (image 185fdbdcb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbdcb(void)

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



// ===== continuation @ rva 5fdbf16 (image 185fdbf16) =====

void FUN_185fdbf16(void)

{
  return;
}



// ===== continuation @ rva 5fdbe87 (image 185fdbe87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbe87(void)

{
  FUN_190dd9df0();
  (*_DAT_180751358)();
  return;
}



// ===== continuation @ rva 5fdbf23 (image 185fdbf23) =====

void FUN_185fdbf23(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fdbe29 (image 185fdbe29) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdbe29(void)

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



// ===== continuation @ rva 5fdbe04 (image 185fdbe04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbe04(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_180751328)();
  return;
}



// ===== continuation @ rva 5fdbf05 (image 185fdbf05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbf05(void)

{
  (*_DAT_180751368)();
  return;
}



// ===== continuation @ rva 5fdbeba (image 185fdbeba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdbeba(void)

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



// ===== continuation @ rva 5fdc136 (image 185fdc136) =====

void FUN_185fdc136(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x40) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x000185fdc165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180751970 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 5fdc0e3 (image 185fdc0e3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185fdc119 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185fdc0e3(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5ff0482 (image 185ff0482) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185ff0482(longlong param_1)

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



// ===== continuation @ rva 5fe896e (image 185fe896e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fe896e(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  longlong *unaff_R15;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_XMM11_Da;
  
  lVar3 = (**(code **)(*unaff_R15 + 0x6f0))();
  *(int *)(unaff_RBP + 0x60) = (int)*(char *)(lVar3 + *(int *)(unaff_RBP + 0x68));
  (**(code **)(*unaff_R15 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x70) = 6;
  *(undefined8 *)(unaff_RBP + 0x60) = unaff_RBX;
  uVar4 = unaff_R14 ^ unaff_R13 ^ _DAT_18310db10;
  lVar3 = (unaff_R14 ^ unaff_R13) + _DAT_18310dcd8;
  uVar5 = uVar4 + lVar3;
  uVar6 = (_DAT_18310dcd8 ^ 2) + _DAT_18310db10 + 2;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18310dcd8 ^ 2;
  _DAT_18310db60 =
       func_0x000186003ac0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18310db10 + 2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar1 = (uint)unaff_R14;
  uVar8 = uVar1 & _DAT_180017990;
  uVar9 = uVar1 | _DAT_180017990;
  uVar7 = uVar1 ^ unaff_XMM11_Da;
  lVar3 = ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752080 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752070;
  uVar4 = _DAT_18310db60 * -0x1a64725c32008e9d << 0x2e |
          (ulonglong)(_DAT_18310db60 * -0x1a64725c32008e9d) >> 0x12;
  uVar5 = ((((ulonglong)uVar9 * (ulonglong)_DAT_180752030 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_180752020 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_180752030 << 0x20 |
            (ulonglong)uVar8 * (ulonglong)_DAT_180752020) +
            ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752010 << 0x20) +
            (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752000 + lVar3 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_180752050 + _DAT_180752060 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180752040) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_180752120 + _DAT_180752130 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180752110 + lVar3 +
          ((ulonglong)(uVar1 ^ _DAT_180017990) * (ulonglong)_DAT_180752100 << 0x20) +
          (ulonglong)(uVar1 ^ _DAT_180017990) * (ulonglong)_DAT_1807520f0 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_1807520e0 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_1807520d0 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_1807520c0 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_1807520b0) +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1807520a0 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752090)) + 0x3ad8659d9c146770;
  _DAT_18310dc50 = _DAT_18310dbf0 ^ uVar4 ^ uVar5;
  _DAT_18310db90 = (_DAT_18310db90 ^ uVar4) + uVar5 ^ 0x4aa3823a890f154c;
  _DAT_18310dc80 = (_DAT_18310dc80 * -0x601b08abd72270d9 ^ _DAT_18310db90) + uVar4;
  _DAT_18310dc98 = _DAT_18310dc80 ^ _DAT_18310db90;
  _DAT_18310dc58 = uVar5 & 0xffffffff;
  *(int *)(unaff_RBP + 0x68) = (int)uVar5;
  iVar2 = (**(code **)(*unaff_R15 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5ff021c (image 185ff021c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ff021c(void)

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



// ===== continuation @ rva 5feff82 (image 185feff82) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185feff82(void)

{
  char cVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x18);
  *(undefined4 *)(unaff_RBP + 0x78) = 0;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_EDI;
  FUN_190ddfc90();
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



// ===== continuation @ rva 5fccf76 (image 185fccf76) =====

void FUN_185fccf76(void)

{
  return;
}



// ===== continuation @ rva 5fccdcd (image 185fccdcd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fccdcd(void)

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



// ===== continuation @ rva 5fd0f59 (image 185fd0f59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd0f59(void)

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



// ===== continuation @ rva 5fcf11f (image 185fcf11f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_185fcd406(void)

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



// ===== continuation @ rva 5fd01ec (image 185fd01ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd01ec(void)

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



// ===== continuation @ rva 5fce4b7 (image 185fce4b7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_185fcd406(void)

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



// ===== continuation @ rva 5fcdec3 (image 185fcdec3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fcdec3(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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



// ===== continuation @ rva 5fd1305 (image 185fd1305) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1305(void)

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



// ===== continuation @ rva 5fd12b6 (image 185fd12b6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd12b6(void)

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



// ===== continuation @ rva 5fcdb55 (image 185fcdb55) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fcdb55(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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



// ===== continuation @ rva 5fd17a3 (image 185fd17a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd17a3(void)

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



// ===== continuation @ rva 5fd174f (image 185fd174f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd174f(void)

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



// ===== continuation @ rva 5fd2516 (image 185fd2516) =====

void FUN_185fd2516(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fd210c (image 185fd210c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd210c(void)

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



// ===== continuation @ rva 5fd2508 (image 185fd2508) =====

void FUN_185fd2508(void)

{
  return;
}



// ===== continuation @ rva 5fd1e23 (image 185fd1e23) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1e23(void)

{
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = in_stack_00000030;
  FUN_190dd72e0();
  (*_DAT_18074e5a8)();
  return;
}



// ===== continuation @ rva 5fd1fa2 (image 185fd1fa2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1fa2(void)

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



// ===== continuation @ rva 5fd24d3 (image 185fd24d3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd24d3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18074e7d8)();
  return;
}



// ===== continuation @ rva 5fd1f3c (image 185fd1f3c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1f3c(void)

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



// ===== continuation @ rva 5fd1b2c (image 185fd1b2c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd1b2c(void)

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



// ===== continuation @ rva 5fd1950 (image 185fd1950) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1950(void)

{
  FUN_190ddfc90();
  (*_DAT_18074e968)();
  return;
}



// ===== continuation @ rva 5fd214a (image 185fd214a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd214a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_18074e878)();
  return;
}



// ===== continuation @ rva 5fd20e4 (image 185fd20e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd20e4(void)

{
  FUN_190dd72e0();
  (*_DAT_18074e528)();
  return;
}



// ===== continuation @ rva 5fd4f5d (image 185fd4f5d) =====

void FUN_185fd4f5d(void)

{
  return;
}



// ===== continuation @ rva 5fd2680 (image 185fd2680) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd2680(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18074f678)();
  return;
}



// ===== continuation @ rva 5fd4f7c (image 185fd4f7c) =====

void FUN_185fd4f7c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fd2963 (image 185fd2963) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd2963(void)

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



// ===== continuation @ rva 5fd420c (image 185fd420c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd420c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18074f3d8)();
  return;
}



// ===== continuation @ rva 5fd40aa (image 185fd40aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd40aa(void)

{
  (*_DAT_18074f748)();
  return;
}



// ===== continuation @ rva 5fd4f71 (image 185fd4f71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd4f71(void)

{
  (*_DAT_18074f858)();
  return;
}



// ===== continuation @ rva 5fd30c1 (image 185fd30c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd30c1(void)

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



// ===== continuation @ rva 5fd2831 (image 185fd2831) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd2831(void)

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



// ===== continuation @ rva 5fd45a9 (image 185fd45a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd45a9(void)

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



// ===== continuation @ rva 5fd2ef3 (image 185fd2ef3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd2ef3(void)

{
  (*_DAT_18074f858)();
  return;
}



// ===== continuation @ rva 5fb97a1 (image 185fb97a1) =====

void FUN_185fb97a1(void)

{
  return;
}



// ===== continuation @ rva 5faa2ea (image 185faa2ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185faa2ea(void)

{
  FUN_190ddce00();
  (*_DAT_180743f18)();
  return;
}



// ===== continuation @ rva 5fafdf3 (image 185fafdf3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fafdf3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180744c88)();
  return;
}



// ===== continuation @ rva 5fb980d (image 185fb980d) =====

void FUN_185fb980d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fb451e (image 185fb451e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fb451e(void)

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



// ===== continuation @ rva 5fb4019 (image 185fb4019) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fb4019(void)

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



// ===== continuation @ rva 5fb0979 (image 185fb0979) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fb0979(void)

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



// ===== continuation @ rva 5fafe56 (image 185fafe56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fafe56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180744c68)();
  return;
}



// ===== continuation @ rva 5fb045d (image 185fb045d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fb045d(void)

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



// ===== continuation @ rva 5fb183a (image 185fb183a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fb183a(void)

{
  FUN_190dd72e0();
  (*_DAT_180744678)();
  return;
}



// ===== continuation @ rva 5fb03f5 (image 185fb03f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fb03f5(void)

{
  FUN_190dd72e0();
  (*_DAT_180744398)();
  return;
}



// ===== continuation @ rva 5fca83c (image 185fca83c) =====

void FUN_185fca83c(void)

{
  return;
}



// ===== continuation @ rva 5fb9a0f (image 185fb9a0f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fb9a0f(void)

{
  FUN_190ddce00();
  (*_DAT_180747ff8)();
  return;
}



// ===== continuation @ rva 5fc61a6 (image 185fc61a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fc61a6(void)

{
  FUN_190dd9df0();
  (*_DAT_180748aa8)();
  return;
}



// ===== continuation @ rva 5fca7fd (image 185fca7fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fca7fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180749088)();
  return;
}



// ===== continuation @ rva 5fc5988 (image 185fc5988) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fc5988(void)

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



// ===== continuation @ rva 5fc2247 (image 185fc2247) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fc2247(void)

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



// ===== continuation @ rva 5fca8a8 (image 185fca8a8) =====

void FUN_185fca8a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5fc2036 (image 185fc2036) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fc2036(void)

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



// ===== continuation @ rva 5fc1782 (image 185fc1782) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fc1782(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1807486a8)();
  return;
}



// ===== continuation @ rva 5fca693 (image 185fca693) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fca693(void)

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



// ===== continuation @ rva 5fc9857 (image 185fc9857) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fc9857(void)

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



