// ===== continuation @ rva 7c44586 (image 187c44586) =====

void FUN_187c44586(void)

{
  return;
}



// ===== continuation @ rva 7c3eb3f (image 187c3eb3f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3eb3f(void)

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



// ===== continuation @ rva 7c40270 (image 187c40270) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c40270(void)

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



// ===== continuation @ rva 7c44003 (image 187c44003) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c44003(void)

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



// ===== continuation @ rva 7c3ed8a (image 187c3ed8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c3ed8a(void)

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



// ===== continuation @ rva 7c4401e (image 187c4401e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c4401e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x168))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c44548 (image 187c44548) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c44548(void)

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



// ===== continuation @ rva 7c44058 (image 187c44058) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c44058(void)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  longlong lVar4;
  uint uVar5;
  int unaff_R15D;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong unaff_XMM7_Qa;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_stack_00000040;
  undefined8 in_stack_00000048;
  uint uStack0000000000000050;
  undefined4 uStack0000000000000054;
  uint uStack0000000000000058;
  
  uVar5 = unaff_R15D + 1;
  uStack0000000000000054 = in_stack_00000048._4_4_;
  uStack0000000000000058 = in_stack_00000040;
  uVar3 = (ulonglong)uVar5;
  uVar2 = (ulonglong)in_stack_00000040 ^ 0x84222325 ^ _DAT_183199a10;
  lVar4 = ((ulonglong)in_stack_00000040 ^ 0x84222325) + _DAT_183199c00;
  uVar6 = uVar2 + lVar4;
  uVar7 = (uVar3 ^ _DAT_183199c00) + _DAT_183199a10 + uVar3;
  uVar2 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar2;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar3 ^ _DAT_183199c00;
  uStack0000000000000050 = uVar5;
  _DAT_183199b20 =
       func_0x000187c44770((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183199a10 + uVar3) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  uVar10 = in_stack_00000040 & uVar5;
  uVar11 = in_stack_00000040 ^ uVar5;
  uVar9 = in_stack_00000040 ^ (uint)unaff_XMM7_Qa;
  uVar2 = (ulonglong)in_stack_00000040 * (ulonglong)uVar5;
  lVar8 = (uVar2 & 0xffffffff) * (ulonglong)_DAT_180d83320 +
          ((uVar2 & 0xffffffff) * (ulonglong)_DAT_180d83330 +
           (uVar2 >> 0x20) * (ulonglong)_DAT_180d83320 << 0x20);
  lVar4 = ((uVar3 ^ unaff_XMM7_Qa) & 0xffffffff) * (ulonglong)_DAT_180d833f0 +
          (((uVar3 ^ unaff_XMM7_Qa) & 0xffffffff) * (ulonglong)_DAT_180d83400 +
           (unaff_XMM7_Qa >> 0x20) * (ulonglong)_DAT_180d833f0 << 0x20) + lVar8 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_180d833d0 + _DAT_180d833e0 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_180d833c0 +
          ((ulonglong)uVar11 * (ulonglong)_DAT_180d833b0 << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_DAT_180d833a0 +
          ((ulonglong)uVar10 * (ulonglong)_DAT_180d83390 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_180d83380 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180d83370 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180d83360 +
          ((ulonglong)(in_stack_00000040 * _DAT_180d83350) << 0x20) +
          (ulonglong)in_stack_00000040 * (ulonglong)_DAT_180d83340;
  uVar2 = (in_stack_00000040 | uVar5) ^ _DAT_183199b20;
  uVar3 = ((((ulonglong)uVar9 * (ulonglong)_DAT_180d83300 + _DAT_180d83310 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_180d832f0 + lVar8 +
           ((ulonglong)uVar11 * (ulonglong)_DAT_180d832e0 << 0x20) +
           (ulonglong)uVar11 * (ulonglong)_DAT_180d832d0 +
           ((ulonglong)(in_stack_00000040 | uVar5) * (ulonglong)_DAT_180d832c0 << 0x20) +
           (ulonglong)(in_stack_00000040 | uVar5) * (ulonglong)_DAT_180d832b0 +
           ((ulonglong)uVar10 * (ulonglong)_DAT_180d832a0 << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_180d83290 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_180d83280 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_180d83270 +
           ((ulonglong)(in_stack_00000040 * _DAT_180d83260) << 0x20) +
           (ulonglong)in_stack_00000040 * (ulonglong)_DAT_180d83250) - lVar4) + 0x50216daa9ded7b64;
  _DAT_183199ce0 = _DAT_183199aa0 ^ uVar2 ^ uVar3;
  _DAT_1831999e0 = (_DAT_1831999e0 ^ uVar2) + uVar3 ^ 0xd39c2acae88e9d7e;
  _DAT_183199cc0 = (_DAT_183199cc0 * -0x7b1b2f9925bc338b ^ _DAT_1831999e0) + uVar2;
  _DAT_1831999a8 = _DAT_183199cc0 ^ _DAT_1831999e0;
  _DAT_183199c88 = uVar3 & 0xffffffff;
  _uStack0000000000000050 = CONCAT44(uStack0000000000000054,(int)uVar3);
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



// ===== continuation @ rva 7c44282 (image 187c44282) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c44282(void)

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



// ===== continuation @ rva 7c43faf (image 187c43faf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c43faf(void)

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



// ===== continuation @ rva 7c2fe5d (image 187c2fe5d) =====

void FUN_187c2fe5d(void)

{
  return;
}



// ===== continuation @ rva 7c240d7 (image 187c240d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c240d7(void)

{
  FUN_190ddce00();
  (*_DAT_180d7ad78)();
  return;
}



// ===== continuation @ rva 7c2e570 (image 187c2e570) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c2e570(void)

{
  FUN_190dd72e0();
  (*_DAT_180d7a948)();
  return;
}



// ===== continuation @ rva 7c29f06 (image 187c29f06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c29f06(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180d7ad28)();
  return;
}



// ===== continuation @ rva 7c2fec9 (image 187c2fec9) =====

void FUN_187c2fec9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7c2eb66 (image 187c2eb66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c2eb66(void)

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



// ===== continuation @ rva 7c2aa01 (image 187c2aa01) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c2aa01(void)

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



// ===== continuation @ rva 7c29f8a (image 187c29f8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c29f8a(void)

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



// ===== continuation @ rva 7c2e69c (image 187c2e69c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c2e69c(void)

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



// ===== continuation @ rva 7c2e3ec (image 187c2e3ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c2e3ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  FUN_190dd72e0();
  (*_DAT_180d7b4d8)();
  return;
}



// ===== continuation @ rva 7c3af1a (image 187c3af1a) =====

void FUN_187c3af1a(void)

{
  return;
}



// ===== continuation @ rva 7c300a2 (image 187c300a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c300a2(void)

{
  FUN_190ddce00();
  (*_DAT_180d7e238)();
  return;
}



// ===== continuation @ rva 7c3acc4 (image 187c3acc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3acc4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180d7e338)();
  return;
}



// ===== continuation @ rva 7c38fa5 (image 187c38fa5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c38fa5(void)

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



// ===== continuation @ rva 7c3af09 (image 187c3af09) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3af09(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180d7ed88)();
  return;
}



// ===== continuation @ rva 7c3937d (image 187c3937d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3937d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_180d7e988)();
  return;
}



// ===== continuation @ rva 7c3aeec (image 187c3aeec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3aeec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180d7eac8)();
  return;
}



// ===== continuation @ rva 7c356ac (image 187c356ac) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c356ac(void)

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



// ===== continuation @ rva 7c3927f (image 187c3927f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3927f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_180d7e258)();
  return;
}



// ===== continuation @ rva 7c397c4 (image 187c397c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c397c4(void)

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



// ===== continuation @ rva 7c3a19d (image 187c3a19d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3a19d(void)

{
  FUN_190de3220();
  (*_DAT_180d7e4f8)();
  return;
}



// ===== continuation @ rva 7c48e7f (image 187c48e7f) =====

void FUN_187c48e7f(void)

{
  return;
}



// ===== continuation @ rva 7c448e5 (image 187c448e5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c448e5(void)

{
  FUN_190ddce00();
  (*_DAT_180d84558)();
  return;
}



// ===== continuation @ rva 7c4a3ed (image 187c4a3ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c4a3ed(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_180d83d18)();
  return;
}



// ===== continuation @ rva 7c4497c (image 187c4497c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c4497c(void)

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



// ===== continuation @ rva 7c481b7 (image 187c481b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c481b7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180d84888)();
  return;
}



// ===== continuation @ rva 7c4793f (image 187c4793f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c4793f(void)

{
  FUN_190dd72e0();
  (*_DAT_180d847a8)();
  return;
}



// ===== continuation @ rva 7c48331 (image 187c48331) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c48331(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x78))();
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_180d844f8)();
  return;
}



// ===== continuation @ rva 7c477eb (image 187c477eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c477eb(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_180d84468)();
  return;
}



// ===== continuation @ rva 7c482d5 (image 187c482d5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c482d5(void)

{
  (*_DAT_180d843a8)();
  return;
}



// ===== continuation @ rva 7c49cab (image 187c49cab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c49cab(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180d84b18)();
  return;
}



// ===== continuation @ rva 7c4866d (image 187c4866d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c4866d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180d83dc8)();
  return;
}



// ===== continuation @ rva 7c484c4 (image 187c484c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c484c4(void)

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



// ===== continuation @ rva 7c4a42f (image 187c4a42f) =====

void FUN_187c4a42f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7c492ea (image 187c492ea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c492ea(void)

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



// ===== continuation @ rva 7c50696 (image 187c50696) =====

void FUN_187c50696(void)

{
  return;
}



// ===== continuation @ rva 7c4a67d (image 187c4a67d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c4a67d(void)

{
  FUN_190ddce00();
  (*_DAT_180d88bc8)();
  return;
}



// ===== continuation @ rva 7c5c1e4 (image 187c5c1e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5c1e4(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x68))(in_stack_00000050);
  (*_DAT_180d86988)();
  return;
}



// ===== continuation @ rva 7c54763 (image 187c54763) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c54763(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  (**(code **)(*unaff_RSI + 0x88))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c558bd (image 187c558bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c558bd(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x78))(in_stack_00000050);
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0xb15,0x2c);
  (*_DAT_180d87b88)();
  return;
}



// ===== continuation @ rva 7c52a32 (image 187c52a32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c52a32(void)

{
  undefined8 in_stack_00000050;
  
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0x2b3,0x10);
  (*_DAT_180d86648)();
  return;
}



// ===== continuation @ rva 7c5c173 (image 187c5c173) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5c173(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x78))(in_stack_00000050);
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0xb15,0x2c);
  (*_DAT_180d85a38)();
  return;
}



// ===== continuation @ rva 7c5bf2e (image 187c5bf2e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c5bf2e(void)

{
  longlong in_stack_00000070;
  
  switch(in_stack_00000070 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c5bc84 (image 187c5bc84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5bc84(void)

{
  FUN_190de3220();
  (*_DAT_180d87178)();
  return;
}



// ===== continuation @ rva 7c5183c (image 187c5183c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c5183c(void)

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



// ===== continuation @ rva 7c55f4a (image 187c55f4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c55f4a(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000050;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000050);
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0xb15,0x2c);
  (*_DAT_180d86888)();
  return;
}



// ===== continuation @ rva 7c52ff5 (image 187c52ff5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c52ff5(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000050;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000050);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c53c61 (image 187c53c61) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c53c61(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  (**(code **)(*unaff_RSI + 0x88))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c5dd64 (image 187c5dd64) =====

void FUN_187c5dd64(void)

{
  return;
}



// ===== continuation @ rva 7c5c4e8 (image 187c5c4e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5c4e8(void)

{
  FUN_190ddfc90();
  (*_DAT_180d8a708)();
  return;
}



// ===== continuation @ rva 7c5dd78 (image 187c5dd78) =====

void FUN_187c5dd78(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7c5d333 (image 187c5d333) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5d333(void)

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



// ===== continuation @ rva 7c5c966 (image 187c5c966) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5c966(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180d8a178)();
  return;
}



// ===== continuation @ rva 7c5ccee (image 187c5ccee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5ccee(void)

{
  FUN_190dd72e0();
  (*_DAT_180d8a238)();
  return;
}



// ===== continuation @ rva 7c5ca62 (image 187c5ca62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5ca62(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_180d8a4c8)();
  return;
}



// ===== continuation @ rva 7c5cbe6 (image 187c5cbe6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5cbe6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_180d8a418)();
  return;
}



// ===== continuation @ rva 7c5d3d0 (image 187c5d3d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c5d3d0(void)

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



// ===== continuation @ rva 7c5da98 (image 187c5da98) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c5da98(void)

{
  longlong in_stack_00000080;
  
  switch(in_stack_00000080 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c5e010 (image 187c5e010) =====

void FUN_187c5e010(void)

{
  return;
}



// ===== continuation @ rva 7c5df0d (image 187c5df0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5df0d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180d8a938)();
  return;
}



// ===== continuation @ rva 7c5dfc5 (image 187c5dfc5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5dfc5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180d8a928)();
  return;
}



// ===== continuation @ rva 7c5dfe0 (image 187c5dfe0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5dfe0(void)

{
  longlong *unaff_RSI;
  
  FUN_184117db0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180d8a948)();
  return;
}



// ===== continuation @ rva 7c5df8c (image 187c5df8c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5df8c(void)

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



// ===== continuation @ rva 7c5e018 (image 187c5e018) =====

void FUN_187c5e018(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7c5df22 (image 187c5df22) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5df22(void)

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



// ===== continuation @ rva 7c5df76 (image 187c5df76) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c5df76(void)

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



// ===== continuation @ rva 7c5e07a (image 187c5e07a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5e07a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180d8a978)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 7c5e086 (image 187c5e086) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c5e086(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 7c5e271 (image 187c5e271) =====

void FUN_187c5e271(void)

{
  return;
}



// ===== continuation @ rva 7c5e130 (image 187c5e130) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5e130(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180d8aa18)();
  return;
}



// ===== continuation @ rva 7c5e286 (image 187c5e286) =====

void FUN_187c5e286(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7c5e24e (image 187c5e24e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5e24e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_180d8a9f8)();
    return;
  }
  (*_DAT_180d8a9f8)();
  return;
}



// ===== continuation @ rva 7c5e226 (image 187c5e226) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5e226(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_180d8a9b8)();
  return;
}



// ===== continuation @ rva 7c5e1d2 (image 187c5e1d2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5e1d2(void)

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



// ===== continuation @ rva 7c5e1bc (image 187c5e1bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c5e1bc(void)

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



// ===== continuation @ rva 7c5e269 (image 187c5e269) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5e269(void)

{
  (*_DAT_180d8a9f8)();
  return;
}



// ===== continuation @ rva 7c5e20b (image 187c5e20b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5e20b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180d8a9c8)();
  return;
}



// ===== continuation @ rva 7c5e14f (image 187c5e14f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c5e14f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_000000c0;
  
  uStack0000000000000040 = in_stack_000000c0;
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



// ===== continuation @ rva 7c5e499 (image 187c5e499) =====

void FUN_187c5e499(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  lVar1 = *unaff_RBX;
  *(undefined8 *)(unaff_RBP + 0x60) = param_3;
  uVar2 = (**(code **)(lVar1 + 0x558))();
  *(uint *)(unaff_RBP + 0x80) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0xb0) = unaff_RBX;
                    /* WARNING: Could not recover jumptable at 0x000187c5e4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d8af70 + (ulonglong)(uVar2 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 7c5e446 (image 187c5e446) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187c5e47c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187c5e446(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7c6ef30 (image 187c6ef30) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c6ef30(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar6;
  ulonglong unaff_R13;
  longlong unaff_R15;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint unaff_XMM10_Da;
  uint uVar10;
  uint uVar11;
  
  *(undefined8 *)(unaff_RBP + 0x80) = *(undefined8 *)(unaff_RBP + 0x10);
  uVar1 = *(uint *)(unaff_RBP + 0x78);
  *(uint *)(unaff_RBP + 0x88) = uVar1;
  uVar2 = _DAT_18319acd8;
  uVar4 = _DAT_18319a6b8;
  uVar5 = _DAT_18319a508;
  uVar6 = (ulonglong)uVar1;
  uVar3 = uVar6 ^ unaff_R13;
  uVar9 = (uint)_DAT_18319a508;
  *(bool *)(unaff_RBP + 0x78) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar5 = (~uVar2 + 2) * ((uVar5 ^ uVar3) + (ulonglong)(uVar9 & (uint)uVar3) * 2);
  uVar5 = (uVar5 | uVar4) + (uVar5 & uVar4);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319ab70 =
       func_0x000187c87810((uVar3 ^ 1 | uVar5) + (ulonglong)((uint)(uVar3 ^ 1) & (uint)uVar5));
  uVar5 = (uVar6 | 1) ^ _DAT_18319ab70 ^ uVar6;
  uVar11 = uVar1 & unaff_XMM10_Da;
  uVar10 = uVar1 | unaff_XMM10_Da;
  uVar9 = uVar1 ^ unaff_XMM10_Da;
  _DAT_18319a548 =
       ((ulonglong)uVar9 * (ulonglong)_DAT_180d8b4f0 << 0x20) +
       (ulonglong)uVar9 * (ulonglong)_DAT_180d8b4e0 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_180d8b4d0 << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_180d8b4c0 +
       ((ulonglong)uVar11 * (ulonglong)_DAT_180d8b4b0 << 0x20 |
       (ulonglong)uVar11 * (ulonglong)_DAT_180d8b4a0) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_180d8b490 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_180d8b480 +
       (-(((uVar6 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_180d8b520 +
          ((_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_180d8b520 +
           ((uVar6 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_180d8b530 << 0x20) +
         ((ulonglong)uVar9 * (ulonglong)_DAT_180d8b550 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)_DAT_180d8b540 +
         ((ulonglong)uVar11 * (ulonglong)_DAT_180d8b550 << 0x20 |
         (ulonglong)uVar11 * (ulonglong)_DAT_180d8b540) +
         ((ulonglong)uVar1 * (ulonglong)_DAT_180d8b530 << 0x20) +
         (ulonglong)uVar1 * (ulonglong)_DAT_180d8b520) -
       (((ulonglong)uVar10 * (ulonglong)_DAT_180d8b570 << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_180d8b560)) + 0xf26c4aa8e3a40284;
  _DAT_18319aab0 = _DAT_18319ac68 ^ uVar5 ^ _DAT_18319a548;
  _DAT_18319a578 = (_DAT_18319a578 ^ uVar5) + _DAT_18319a548 ^ 0x9634a7384aa552db;
  _DAT_18319a580 = (_DAT_18319a580 * -0x123743192391f761 ^ _DAT_18319a578) + uVar5;
  _DAT_18319a888 = _DAT_18319a580 ^ _DAT_18319a578;
  _DAT_18319a548 = _DAT_18319a548 & 0xffffffff;
  _DAT_18319a510 = func_0x000187c87810(_DAT_18319ab20 + 0xffa5ff4dc4002fff ^ 0xb0);
  uVar5 = _DAT_18319a510 ^ 0xca395c81a900ae30;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RBX) + (uVar4 >> 2 & unaff_RBX);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38)) * 0x40 ^ uVar5;
  _DAT_18319aa88 = (_DAT_18319aa88 ^ uVar5) + 0xfe9e7df9 ^ 0xfb78175a9f689e37;
  _DAT_18319a530 = (_DAT_18319a530 * 0x683162485c3d6171 ^ _DAT_18319aa88) + uVar5;
  _DAT_18319abf8 = _DAT_18319a530 ^ _DAT_18319aa88;
  _DAT_18319a730 = 0xfe9e7df9;
  uVar5 = (~_DAT_18319ab38 + 0x46dbd488) *
          ((_DAT_18319aca8 ^ 0x1d934814) + (ulonglong)((uint)_DAT_18319aca8 & 0x1d934814) * 2);
  uVar5 = (uVar5 | _DAT_18319a508) + (uVar5 & _DAT_18319a508);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319acb8 = func_0x000187c87810((uVar5 | 0x5b489c93) + (ulonglong)((uint)uVar5 & 0x5b489c93))
  ;
  uVar5 = _DAT_18319acb8 ^ 0x99b16b31;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RBX) + (uVar4 >> 2 & unaff_RBX);
  uVar5 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38) << 2 ^ uVar5;
  _DAT_18319a590 = (_DAT_18319a590 ^ uVar5) + 0xdf6abfb6 ^ 0x27c6f58fc4666a28;
  _DAT_18319a770 = (_DAT_18319a770 * 0x1d68d3edc803bf29 ^ _DAT_18319a590) + uVar5;
  _DAT_18319a9b8 = _DAT_18319a770 ^ _DAT_18319a590;
  _DAT_18319abb8 = 0xdf6abfb6;
  uVar5 = (~_DAT_18319aa50 + 0x52c82e3) *
          ((_DAT_18319a760 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319a760 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_18319a7a0) + (uVar5 & _DAT_18319a7a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319a518 = func_0x000187c87810((uVar5 | 0x810ea1c7) + (ulonglong)((uint)uVar5 & 0x810ea1c7))
  ;
  _DAT_18319ac90 =
       (_DAT_18319ac90 ^ _DAT_18319a518 & 0x7fffffffffffffff) - 0x52c82e2 ^ 0xbd0ae42493d8c274;
  _DAT_18319ab10 =
       (_DAT_18319ab10 * 0x1d82e1845a8fa809 ^ _DAT_18319ac90) +
       (_DAT_18319a518 & 0x7fffffffffffffff);
  _DAT_18319ac58 = _DAT_18319ab10 ^ _DAT_18319ac90;
  _DAT_18319a968 = 0xfad37d1e;
  uVar5 = (_DAT_18319aa00 ^ _DAT_180d8b580) + _DAT_18319a688 + 0x8422dcda;
  uVar4 = (_DAT_18319a688 ^ _UNK_180d8b588) + _DAT_18319aa00 + 0x52c82e2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319aa00 ^ _DAT_180d8b580;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319a688 ^ _UNK_180d8b588;
  _DAT_18319a928 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319aa00 + 0x52c82e2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319a688 + 0x8422dcda));
  _DAT_18319a560 = _DAT_18319ac10 ^ _DAT_18319a928 ^ 0x52d82e1;
  _DAT_18319a900 = (_DAT_18319a900 ^ _DAT_18319a928) + 0x52d82e1 ^ 0xb2236c62cebe42b;
  _DAT_18319aa08 = (_DAT_18319aa08 * -0x36e9cdf79bb991e7 ^ _DAT_18319a900) + _DAT_18319a928;
  _DAT_18319a7b8 = _DAT_18319aa08 ^ _DAT_18319a900;
  _DAT_18319a788 = _DAT_18319a530 ^ 0x52d82e1;
  _DAT_18319a548 = 0x52d82e1;
  uVar5 = (_DAT_18319a728 ^ _DAT_180d8b590) + _DAT_18319a6d8 + 0x8422dcda;
  uVar4 = (_DAT_18319a6d8 ^ _UNK_180d8b598) + _DAT_18319a728 + 0x88e21735;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319a728 ^ _DAT_180d8b590;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319a6d8 ^ _UNK_180d8b598;
  _DAT_18319a650 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319a728 + 0x88e21735) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319a6d8 + 0x8422dcda));
  uVar5 = (_DAT_18319a650 ^ 0x88e21735) & 0x7ffffffffffff;
  _DAT_18319a600 = _DAT_18319a608 ^ uVar5 ^ 0x88e31734;
  _DAT_18319a730 = (_DAT_18319a730 ^ uVar5) + 0x88e31734 ^ 0x80142de8d733163d;
  _DAT_18319a570 = (_DAT_18319a570 * -0x368c5d1cbe704f8b ^ _DAT_18319a730) + uVar5;
  _DAT_18319abb8 = _DAT_18319a570 ^ _DAT_18319a730;
  _DAT_18319a948 = 0x88e31734;
  uVar5 = (~_DAT_18319abd8 + 0x771de8cc) *
          ((_DAT_18319a6c0 ^ 0xcc13411) + (ulonglong)((uint)_DAT_18319a6c0 & 0xcc13411) * 2);
  uVar5 = (uVar5 | _DAT_18319a7e0) + (uVar5 & _DAT_18319a7e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319a738 = func_0x000187c87810((uVar5 | 0x7bdcdcda) + (ulonglong)((uint)uVar5 & 0x7bdcdcda))
  ;
  uVar5 = (_DAT_18319a738 << 10 | _DAT_18319a738 >> 0x36) << 3 |
          (_DAT_18319a738 & 0x3fffffffffffff) >> 0x33;
  _DAT_18319aa80 = _DAT_18319ac48 ^ uVar5 ^ 0x10000ffff;
  _DAT_18319a9e8 = (_DAT_18319a9e8 ^ uVar5) + 0x10000ffff ^ 0x5546af291c0864d4;
  _DAT_18319a6f8 = (_DAT_18319a6f8 * -0x26dcdc6c8c70ce21 ^ _DAT_18319a9e8) + uVar5;
  _DAT_18319a510 = _DAT_18319a6f8 ^ _DAT_18319a9e8;
  _DAT_18319abd0 = 0xffff;
  _DAT_18319ab28 = func_0x000187c87810(_DAT_18319a9d0 + 0xffdd00137affbeffU ^ 0xb9);
  _DAT_18319a9f8 =
       (_DAT_18319a9f8 ^ _DAT_18319ab28 & 0x7fffffffffffffff) - 0xb06300a2 ^ 0x53b1ff91d39217cd;
  _DAT_18319a9b0 =
       (_DAT_18319a9b0 * 0x49354bb76c896e0f ^ _DAT_18319a9f8) +
       (_DAT_18319ab28 & 0x7fffffffffffffff);
  _DAT_18319a558 = _DAT_18319a9b0 ^ _DAT_18319a9f8;
  _DAT_18319a578 = 0x4f9cff5e;
  _DAT_18319aba0 = func_0x000187c87810(_DAT_18319a8c8 ^ 0x3bffb4a9ffb903);
  _DAT_18319a730 = _DAT_18319abb8 ^ _DAT_18319a8a0 ^ 0x10000ffff;
  _DAT_18319a798 = (_DAT_18319a798 ^ _DAT_18319a8a0) + 0x10000ffff ^ 0x24f0de944282cfd2;
  _DAT_18319a6e8 = (_DAT_18319a6e8 * 0x656f16b3d1208d8d ^ _DAT_18319a798) + _DAT_18319a8a0;
  _DAT_18319a760 = _DAT_18319a6e8 ^ _DAT_18319a798;
  _DAT_18319aa80 = _DAT_18319ab28 ^ 0x10000ffff;
  _DAT_18319a6d8 = 0xffff;
  _DAT_18319a718 = func_0x000187c87810(_DAT_18319a870 ^ 0xff60ffa35600ad08);
  uVar5 = _DAT_18319a718 * 0x658a2e2528fd4063 ^ 0xdf6abfb6;
  _DAT_18319abe0 = _DAT_18319a9c8 ^ uVar5 ^ 0x1de093daf;
  _DAT_18319a6b0 = (_DAT_18319a6b0 ^ uVar5) + 0x1de093daf ^ 0x2843e204021a22ca;
  _DAT_18319aab8 = (_DAT_18319aab8 * -0x6d094902373a25fb ^ _DAT_18319a6b0) + uVar5;
  _DAT_18319a730 = _DAT_18319aab8 ^ _DAT_18319a6b0;
  _DAT_18319a918 = 0xde093daf;
  uVar5 = (_DAT_18319ace0 ^ _DAT_180d8b5a0) + _DAT_18319ac90 + 0x7abc5edc;
  uVar4 = (_DAT_18319ac90 ^ _UNK_180d8b5a8) + _DAT_18319ace0 + 0xdf6abfb6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319ace0 ^ _DAT_180d8b5a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319ac90 ^ _UNK_180d8b5a8;
  _DAT_18319abd0 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319ace0 + 0xdf6abfb6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319ac90 + 0x7abc5edc));
  uVar5 = _DAT_18319abd0 >> 1 | _DAT_18319abd0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  uVar5 = _DAT_18319abd0 ^ 0xfe9e7df9 ^
          0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38);
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RBX) + (uVar4 >> 2 & unaff_RBX);
  uVar5 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38) << 5 ^ uVar5;
  _DAT_18319a780 = (_DAT_18319a780 ^ uVar5) + 0xde0a3db0 ^ 0x7eb14f1bd94ff161;
  _DAT_18319a828 = (_DAT_18319a828 * -0x26bb43f759d23aed ^ _DAT_18319a780) + uVar5;
  _DAT_18319a680 = _DAT_18319a828 ^ _DAT_18319a780;
  _DAT_18319a6c0 = 0xde0a3db0;
  uVar5 = (_DAT_18319ac68 ^ _DAT_180d8b5b0) + _DAT_18319acd8 + 0x5a2b1e8a;
  uVar4 = (_DAT_18319acd8 ^ _UNK_180d8b5b8) + _DAT_18319ac68 + 0xde093daf;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319ac68 ^ _DAT_180d8b5b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319acd8 ^ _UNK_180d8b5b8;
  _DAT_18319a520 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319ac68 + 0xde093daf) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319acd8 + 0x5a2b1e8a));
  uVar9 = (uint)_DAT_18319a520 & 0xde093daf;
  uVar1 = uVar9 >> 1 | uVar9;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar5 = (ulonglong)uVar1 - (ulonglong)(uVar1 >> 1 & 0x55555555);
  uVar5 = (uVar5 & unaff_RBX) + (uVar5 >> 2 & unaff_RBX);
  _DAT_18319ac18 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38)) * 2 ^
       (ulonglong)uVar9;
  _DAT_18319a708 = _DAT_18319a708 ^ _DAT_18319ac18 ^ 0x171e0138a6622ae8;
  _DAT_18319a890 = (_DAT_18319a890 * -0x63803abdf2540a29 ^ _DAT_18319a708) + _DAT_18319ac18;
  _DAT_18319a548 = _DAT_18319a890 ^ _DAT_18319a708;
  _DAT_18319a8a8 = 0;
  uVar5 = (_DAT_18319a810 ^ _DAT_180d8b5c0) + _DAT_18319aac0 + 0x7abc5edc;
  uVar4 = (_DAT_18319aac0 ^ _UNK_180d8b5c8) + _DAT_18319a810 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319a810 ^ _DAT_180d8b5c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319aac0 ^ _UNK_180d8b5c8;
  _DAT_18319a8b8 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319a810 + 0xffffffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319aac0 + 0x7abc5edc));
  _DAT_18319a8c8 = (_DAT_18319a8c8 ^ _DAT_18319a8b8 ^ 0xfe9e7df9) + 0x1618206 ^ 0xba789d741afc256;
  _DAT_18319aa40 =
       (_DAT_18319aa40 * 0x6de2cd3ceb5e47b9 ^ _DAT_18319a8c8) + (_DAT_18319a8b8 ^ 0xfe9e7df9);
  _DAT_18319aa88 = _DAT_18319aa40 ^ _DAT_18319a8c8;
  _DAT_18319a760 = 0x1618206;
  uVar5 = (_DAT_18319abc0 ^ _DAT_180d8b5d0) + _DAT_18319a9d8 + 0x7abc5edc;
  uVar4 = (_DAT_18319a9d8 ^ _UNK_180d8b5d8) + _DAT_18319abc0 + 0x1618206;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319abc0 ^ _DAT_180d8b5d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319a9d8 ^ _UNK_180d8b5d8;
  _DAT_18319a790 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319abc0 + 0x1618206) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319a9d8 + 0x7abc5edc));
  _DAT_18319a818 = _DAT_18319a818 ^ _DAT_18319a790 ^ 0x15f99de280865d6 ^ 0x297496645e8a2051;
  _DAT_18319aab0 =
       (_DAT_18319aab0 * 0x36c530d829c66241 ^ _DAT_18319a818) + (_DAT_18319a790 ^ 0x15f99de280865d6)
  ;
  _DAT_18319aac0 = _DAT_18319aab0 ^ _DAT_18319a818;
  _DAT_18319a8d0 = 0;
  _DAT_18319a7c0 = func_0x000187c87810(_DAT_18319ac08 ^ 0xc3ff7b49ffe105);
  _DAT_18319a8b0 = (_DAT_18319a8b0 ^ _DAT_18319a7c0) + 0xffff ^ 0x7e65ca8af655a115;
  _DAT_18319a9d8 = (_DAT_18319a9d8 * -0x55b4b5e69134b047 ^ _DAT_18319a8b0) + _DAT_18319a7c0;
  _DAT_18319a9b0 = _DAT_18319a9d8 ^ _DAT_18319a8b0;
  _DAT_18319ace8 = 0xffff;
  uVar5 = (_DAT_18319a7c8 ^ _DAT_180d8b5e0) + _DAT_18319abe8 + 0x6cae5ffc;
  uVar4 = (_DAT_18319abe8 ^ _UNK_180d8b5e8) + _DAT_18319a7c8 + 0xe88c7cd9;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319a7c8 ^ _DAT_180d8b5e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319abe8 ^ _UNK_180d8b5e8;
  _DAT_18319aac0 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319a7c8 + 0xe88c7cd9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319abe8 + 0x6cae5ffc));
  _DAT_18319ac50 = _DAT_18319ac50 ^ _DAT_18319aac0 * -0x12b1cdb187cb6793 ^ 0x426f5c561c5f9a54;
  _DAT_18319a738 =
       (_DAT_18319a738 * -0x16888aea3e0347d9 ^ _DAT_18319ac50) +
       _DAT_18319aac0 * -0x12b1cdb187cb6793;
  _DAT_18319ac08 = _DAT_18319a738 ^ _DAT_18319ac50;
  _DAT_18319ab50 = 0;
  uVar5 = (_DAT_18319a838 ^ 0x8422dcda) + _DAT_18319a5c0 + 0x8422dcda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319a838 ^ 0x8422dcda;
  uVar4 = ((_DAT_18319a5c0 + _DAT_18319a838) * 0x2000 | _DAT_18319a5c0 + _DAT_18319a838 >> 0x33) ^
          _DAT_18319a5c0;
  _DAT_18319a720 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_18319a838 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319a5c0 + 0x8422dcda));
  uVar5 = (ulonglong)(~(uint)_DAT_18319a720 & 0xffff);
  _DAT_18319a678 = _DAT_18319ace8 ^ uVar5 ^ 0xffff;
  _DAT_18319a658 = (_DAT_18319a658 ^ uVar5) + 0xffff ^ 0x94f672ce04478cf7;
  _DAT_18319ab48 = (_DAT_18319ab48 * -0x6681402e056068f5 ^ _DAT_18319a658) + uVar5;
  _DAT_18319aaa0 = _DAT_18319ab48 ^ _DAT_18319a658;
  _DAT_18319a910 = 0xffff;
  uVar1 = *(uint *)(unaff_RBP + 0x40);
  auVar7._8_8_ = _UNK_1801098d8;
  auVar7._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_180d8b5f0,_DAT_1800170c0);
  uVar4 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar4 + _DAT_18319a628;
  if (auVar8._4_4_ < 0) {
    uVar5 = _DAT_18319a5f8 ^ uVar4;
  }
  _DAT_18319a658 = func_0x000187c87810(SUB161(auVar7 ^ _DAT_180d8b5f0,5) ^ uVar5);
  _DAT_18319a648 = (ulonglong)uVar1 & 0xffff;
  _DAT_18319a7f0 =
       (_DAT_18319a7f0 ^ _DAT_18319a658 & 0xfffffffffff80000) + _DAT_18319a648 ^ 0x5b5d87d57bb5feef;
  _DAT_18319ab20 =
       (_DAT_18319ab20 * 0x6748c2aa53e4e007 ^ _DAT_18319a7f0) +
       (_DAT_18319a658 & 0xfffffffffff80000);
  _DAT_18319a960 = _DAT_18319ab20 ^ _DAT_18319a7f0;
  *(int *)(unaff_RBP + 0x90) = (int)_DAT_18319a648;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x78)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c6a555 (image 187c6a555) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c6a555(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_R13;
  ulonglong uVar4;
  
  _DAT_18319a870 = func_0x000187c87810(_DAT_18319ac40 + 0xffa1ff94b8ffc2ffU ^ 0xe9);
  _DAT_18319a9a0 = (_DAT_18319a9a0 ^ _DAT_18319aaa0) + 0x7fe7f5be ^ 0x9c2c3163e4f459b8;
  _DAT_18319aa08 = (_DAT_18319aa08 * -0x6c814e5888947ea7 ^ _DAT_18319a9a0) + _DAT_18319aaa0;
  _DAT_18319a740 = _DAT_18319aa08 ^ _DAT_18319a9a0;
  _DAT_18319ac88 = 0x7fe7f5be;
  uVar3 = (~_DAT_18319a5c8 + 0x2290010e) *
          ((_DAT_18319a710 ^ 0xc0b7ee71) + (ulonglong)((uint)_DAT_18319a710 & 0xc0b7ee71) * 2);
  uVar3 = (uVar3 | _DAT_18319a6d0) + (uVar3 & _DAT_18319a6d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319ab10 = func_0x000187c87810((uVar3 | 0xe227ef7c) + (ulonglong)((uint)uVar3 & 0xe227ef7c))
  ;
  uVar3 = (_DAT_18319ab10 ^ 0x6695cd5d) << 0x3d | (_DAT_18319ab10 ^ 0x6695cd5d) >> 3;
  _DAT_18319a7d0 = (_DAT_18319a7d0 ^ uVar3) + 0x6605cc59 ^ 0xd0f36551aef76372;
  _DAT_18319a930 = (_DAT_18319a930 * -0x967996d01396341 ^ _DAT_18319a7d0) + uVar3;
  _DAT_18319ab90 = _DAT_18319a930 ^ _DAT_18319a7d0;
  _DAT_18319aa30 = 0x6605cc59;
  uVar3 = (~_DAT_18319a8f8 + 0x44fb9fc1) *
          ((_DAT_18319ac00 ^ unaff_R13) + (ulonglong)((uint)_DAT_18319ac00 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_18319ac50) + (uVar3 & _DAT_18319ac50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319a7d0 = func_0x000187c87810((uVar3 | 0xc0d9bce5) + (ulonglong)((uint)uVar3 & 0xc0d9bce5))
  ;
  _DAT_18319a550 =
       (_DAT_18319a550 ^ _DAT_18319a7d0 & 0x1ffffffffffffff) - 0x44fb9fc0 ^ 0x6a4810c2500982e6;
  _DAT_18319a9f0 =
       (_DAT_18319a9f0 * 0xe43978ecc0e756b ^ _DAT_18319a550) + (_DAT_18319a7d0 & 0x1ffffffffffffff);
  _DAT_18319a728 = _DAT_18319a9f0 ^ _DAT_18319a550;
  _DAT_18319a578 = 0xbb046040;
  uVar3 = (_DAT_18319ab48 ^ _DAT_180d8b600) + _DAT_18319a888 + 0x842223fa;
  uVar4 = (_DAT_18319a888 ^ _UNK_180d8b608) + _DAT_18319ab48 + 0x44fb9fc0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319ab48 ^ _DAT_180d8b600;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319a888 ^ _UNK_180d8b608;
  _DAT_18319a928 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319ab48 + 0x44fb9fc0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319a888 + 0x842223fa));
  uVar3 = _DAT_18319a928 ^ 0xc0;
  _DAT_18319abb0 = _DAT_18319a590 ^ uVar3 ^ 0x44fba09f;
  _DAT_18319a6a0 = (_DAT_18319a6a0 ^ uVar3) + 0x44fba09f ^ 0x24f7243eeddce95b;
  _DAT_18319a650 = (_DAT_18319a650 * -0x702a225c8a67f6c3 ^ _DAT_18319a6a0) + uVar3;
  _DAT_18319aaa0 = _DAT_18319a650 ^ _DAT_18319a6a0;
  _DAT_18319a6d0 = 0x44fba09f;
  _DAT_18319a5c0 = func_0x000187c87810(_DAT_18319a518 + 0xe3005936005cffU ^ 0x49);
  uVar3 = _DAT_18319a5c0 & 0x3fffffffffffff;
  _DAT_18319a538 = _DAT_18319a8c0 ^ uVar3 ^ 0x1000000df;
  _DAT_18319a7c0 = (_DAT_18319a7c0 ^ uVar3) + 0x1000000df ^ 0x171bde151d3be72d;
  _DAT_18319ac98 = (_DAT_18319ac98 * -0x3038f58bfe8a7eeb ^ _DAT_18319a7c0) + uVar3;
  _DAT_18319ac20 = _DAT_18319ac98 ^ _DAT_18319a7c0;
  _DAT_18319abe0 = 0xdf;
  _DAT_18319a7b0 = func_0x000187c87810(_DAT_18319a780 + 0xffee009cd50015ffU ^ 0x57);
  _DAT_18319aba8 = (_DAT_18319aba8 ^ _DAT_18319a7b0) - 0x211831f0 ^ 0xf743ae39e404198d;
  _DAT_18319a620 = (_DAT_18319a620 * 0x1a5bd8a0ae01c2dd ^ _DAT_18319aba8) + _DAT_18319a7b0;
  _DAT_18319abe8 = _DAT_18319a620 ^ _DAT_18319aba8;
  _DAT_18319a758 = _DAT_18319a660 ^ 0xffffffffdee7ce10;
  _DAT_18319acf8 = 0xdee7ce10;
  uVar3 = (~_DAT_18319a938 + 0x211831f1) *
          ((_DAT_18319a7c0 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18319a7c0 & 0x842223fa) * 2);
  uVar3 = (uVar3 | _DAT_18319ab80) + (uVar3 & _DAT_18319ab80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319aac0 = func_0x000187c87810((uVar3 | 0xa53a120a) + (ulonglong)((uint)uVar3 & 0xa53a120a))
  ;
  _DAT_18319a820 = _DAT_18319a7c0 ^ _DAT_18319aac0 ^ 0x211832cf;
  _DAT_18319a998 = (_DAT_18319a998 ^ _DAT_18319aac0) + 0x211832cf ^ 0x3ec7d6351e17f28e;
  _DAT_18319ac48 = (_DAT_18319ac48 * 0x610c1ac427362d1b ^ _DAT_18319a998) + _DAT_18319aac0;
  _DAT_18319ab78 = _DAT_18319ac48 ^ _DAT_18319a998;
  _DAT_18319a568 = 0x211832cf;
  _DAT_18319a508 = func_0x000187c87810(_DAT_18319a628 + 0xff56001b6cffc1ff ^ 0xd);
  _DAT_18319a968 = (_DAT_18319a968 ^ _DAT_18319a508) - 0xaf64d5b0 ^ 0x79e027aa0a23e49c;
  _DAT_18319a670 = (_DAT_18319a670 * 0x7157c3231cb18c1d ^ _DAT_18319a968) + _DAT_18319a508;
  _DAT_18319a5b0 = _DAT_18319a670 ^ _DAT_18319a968;
  _DAT_18319a7d8 = 0x509b2a50;
  uVar3 = (~_DAT_18319a6e8 + 0xaf64d5b1) *
          ((_DAT_18319a540 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18319a540 & 0x842223fa) * 2);
  uVar3 = (uVar3 | _DAT_18319a588) + (uVar3 & _DAT_18319a588);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319a628 = func_0x000187c87810((uVar3 | 0x2b46f64a) + (ulonglong)((uint)uVar3 & 0x2b46f64a))
  ;
  uVar3 = _DAT_18319a628 << 0x3b | _DAT_18319a628 >> 5;
  _DAT_18319a5e0 = _DAT_18319aa28 ^ uVar3 ^ 0xaf64d68f;
  _DAT_18319a508 = (_DAT_18319a508 ^ uVar3) + 0xaf64d68f ^ 0xb0767fdb2ad67179;
  _DAT_18319a970 = (_DAT_18319a970 * -0x1d811eee00ff9697 ^ _DAT_18319a508) + uVar3;
  _DAT_18319aa38 = _DAT_18319a970 ^ _DAT_18319a508;
  _DAT_18319a9b0 = 0xaf64d68f;
  uVar3 = (~_DAT_18319a6f0 + 0x6605cc5a) *
          ((_DAT_18319a7f8 ^ 0xfbc5d69b) + (ulonglong)((uint)_DAT_18319a7f8 & 0xfbc5d69b) * 2);
  uVar3 = (uVar3 | _DAT_18319ac78) + (uVar3 & _DAT_18319ac78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319a6e0 = func_0x000187c87810((uVar3 | 0x9dc01ac2) + (ulonglong)((uint)uVar3 & 0x9dc01ac2))
  ;
  uVar3 = (_DAT_18319a6e0 >> 0xe & 0xfffffffffe000000) << 0x1c |
          (_DAT_18319a6e0 << 0x32 | _DAT_18319a6e0 >> 0xe) >> 0x24;
  _DAT_18319ab48 = _DAT_18319a8d8 ^ uVar3 ^ 0xe5edc217;
  _DAT_18319aa40 = (_DAT_18319aa40 ^ uVar3) + 0xe5edc217 ^ 0xa616b534d869428f;
  _DAT_18319acc8 = (_DAT_18319acc8 * 0x6ad980c9b984a74f ^ _DAT_18319aa40) + uVar3;
  _DAT_18319a640 = _DAT_18319acc8 ^ _DAT_18319aa40;
  _DAT_18319a980 = 0xe5edc217;
  uVar3 = (_DAT_18319aa18 ^ _DAT_180d8b610) + _DAT_18319a650 + 0xfbc5d69b;
  uVar4 = (_DAT_18319a650 ^ _UNK_180d8b618) + _DAT_18319aa18 + 0x6605cc59;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319aa18 ^ _DAT_180d8b610;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319a650 ^ _UNK_180d8b618;
  _DAT_18319a668 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319aa18 + 0x6605cc59) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319a650 + 0xfbc5d69b));
  uVar3 = _DAT_18319a668 - (_DAT_18319a668 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_18319a668 ^ 0x7fe7f5be;
  _DAT_18319a878 = (_DAT_18319a878 ^ uVar3) + 0x19e239e7 ^ 0xb739cf12011d2bc1;
  _DAT_18319abb0 = (_DAT_18319abb0 * 0x69f56dcbbdb46543 ^ _DAT_18319a878) + uVar3;
  _DAT_18319a6e0 = _DAT_18319abb0 ^ _DAT_18319a878;
  _DAT_18319aa40 = 0x19e239e7;
  _DAT_18319a980 = func_0x000187c87810(_DAT_18319a658 + 0x1a009a41ff3fffU ^ 0x60);
  _DAT_18319a668 = (_DAT_18319a668 ^ _DAT_18319a980) + 0x6605c418 ^ 0x4f7e7609d26af00b;
  _DAT_18319a930 = (_DAT_18319a930 * -0x250364d26aff61fd ^ _DAT_18319a668) + _DAT_18319a980;
  _DAT_18319a760 = _DAT_18319a930 ^ _DAT_18319a668;
  _DAT_18319abe8 = 0x6605c418;
  _DAT_18319a990 = func_0x000187c87810(_DAT_18319a680 + 0xff7200306e00baff ^ 0x4d);
  _DAT_18319a6e8 = _DAT_18319ab20 ^ _DAT_18319a990 ^ 0xe5edc217;
  _DAT_18319aa40 = (_DAT_18319aa40 ^ _DAT_18319a990) + 0xe5edc217 ^ 0x3592a19c75be3266;
  _DAT_18319a6b8 = (_DAT_18319a6b8 * -0x36efb6b99936257 ^ _DAT_18319aa40) + _DAT_18319a990;
  _DAT_18319aba0 = _DAT_18319a6b8 ^ _DAT_18319aa40;
  _DAT_18319ab00 = 0xe5edc217;
  uVar3 = ((_DAT_18319a690 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18319a690 & 0x842223fa) * 2) *
          -_DAT_18319aa18;
  uVar3 = (uVar3 | _DAT_18319ac48) + (uVar3 & _DAT_18319ac48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319a538 = func_0x000187c87810((uVar3 | 0x842223fa) + (ulonglong)((uint)uVar3 & 0x842223fa))
  ;
  uVar3 = _DAT_18319a538 ^ 0xdf;
  _DAT_18319a7d0 = _DAT_18319a878 ^ uVar3 ^ 0xdf;
  _DAT_18319a680 = (_DAT_18319a680 ^ uVar3) + 0xdf ^ 0x1d9eebe3dcc1346f;
  _DAT_18319a568 = (_DAT_18319a568 * -0x589a9b3d0707a709 ^ _DAT_18319a680) + uVar3;
  _DAT_18319a9c0 = 0xdf;
  uVar3 = (_DAT_18319a5d0 ^ _DAT_180d8b620) + _DAT_18319a5c0 + 0xfbc5d69b;
  uVar4 = (_DAT_18319a5c0 ^ _UNK_180d8b628) + _DAT_18319a5d0 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319a5d0 ^ _DAT_180d8b620;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319a5c0 ^ _UNK_180d8b628;
  _DAT_18319aab0 =
       func_0x000187c87810((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319a5d0 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319a5c0 + 0xfbc5d69b));
  uVar3 = (_DAT_18319aab0 ^ 0xffffffff) << 0xf | _DAT_18319aab0 >> 0x31;
  _DAT_18319a850 = (_DAT_18319ac60 ^ uVar3) + 0x80180a41 ^ 0x5ac4e89602673ab8;
  _DAT_18319aa38 = (_DAT_18319aa38 * 0x24e9fa39dae3f35b ^ _DAT_18319a850) + uVar3;
  _DAT_18319a850 = _DAT_18319aa38 ^ _DAT_18319a850;
  _DAT_18319ac60 = 0x80180a41;
  _DAT_18319a5c0 = func_0x000187c87810(_DAT_18319a928 + 0x54007a55ffacff ^ 0x16);
  uVar2 = (uint)_DAT_18319a5c0 & 0x7fe7f5be;
  uVar1 = uVar2 >> 1 | uVar2;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar3 = (ulonglong)uVar1 - (ulonglong)(uVar1 >> 1 & 0x55555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          (ulonglong)uVar2;
  _DAT_18319ac10 = _DAT_18319ac10 ^ uVar3 ^ 0x7587284a5bd42fa6;
  _DAT_18319a8a8 = (_DAT_18319a8a8 * -0x2babe92be4942e23 ^ _DAT_18319ac10) + uVar3;
  _DAT_18319a9b0 = _DAT_18319a8a8 ^ _DAT_18319ac10;
  _DAT_18319a848 = 0;
  _DAT_18319ab80 = func_0x000187c87810(_DAT_18319a928 + 0xffe30083dd0021ff ^ 0x38);
  _DAT_18319a550 = _DAT_18319a550 ^ _DAT_18319ab80 * -0x5c3069553d7feaf7 ^ 0x7e58eb5325f2303a;
  _DAT_18319a7b8 =
       (_DAT_18319a7b8 * 0x2475d539cedfba7d ^ _DAT_18319a550) + _DAT_18319ab80 * -0x5c3069553d7feaf7
  ;
  _DAT_18319aa38 = _DAT_18319a7b8 ^ _DAT_18319a550;
  _DAT_18319a800 = _DAT_18319a6a8;
  _DAT_18319a7c8 = 0;
  switch(0xdf < *(int *)(unaff_RBP + 0x40)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c6bb5a (image 187c6bb5a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c6bb5a(ulonglong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  longlong in_RAX;
  longlong lVar6;
  uint uVar7;
  longlong unaff_RBP;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  *(bool *)(unaff_RBP + 0x20) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar16 = param_2 + param_1 + param_4;
  uVar17 = (param_1 ^ 0x746ea413) + in_RAX + 0x746ea413;
  param_2 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ param_2;
  uVar16 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ param_1 ^ 0x746ea413;
  _DAT_18319a9a8 =
       func_0x000187c87810((uVar16 << 0x1d | uVar16 >> 0x23) - (in_RAX + 0x746ea413) ^
                           (param_2 << 0x1d | param_2 >> 0x23) - (param_1 + param_4));
  uVar16 = _DAT_18319a9a8 << 0x23 | _DAT_18319a9a8 >> 0x1d;
  _DAT_18319a6a0 = (_DAT_18319a6a0 ^ uVar16) + 0x7d6eff33 ^ 0xc89fb000a811cbd5;
  _DAT_18319ab98 = (_DAT_18319ab98 * 0x513204e5b82689e1 ^ _DAT_18319a6a0) + uVar16;
  _DAT_18319ac60 = _DAT_18319ab98 ^ _DAT_18319a6a0;
  _DAT_18319a7f8 = 0x7d6eff33;
  uVar16 = (_DAT_18319aca8 ^ _DAT_180d8bb60) + _DAT_18319a928 + 0xfc56a181;
  uVar17 = (_DAT_18319a928 ^ _UNK_180d8bb68) + _DAT_18319aca8 + 0xcb017283;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319aca8 ^ _DAT_180d8bb60;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319a928 ^ _UNK_180d8bb68;
  _DAT_18319a6d8 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319aca8 + 0xcb017283) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319a928 + 0xfc56a181));
  _DAT_18319a670 =
       (_DAT_18319a670 ^ _DAT_18319a6d8 * 0x29257bcc478bb13) + 0xb375f027 ^ 0xc342861e91732f49;
  _DAT_18319a9f0 =
       (_DAT_18319a9f0 * 0x78044b16e25e4b1b ^ _DAT_18319a670) + _DAT_18319a6d8 * 0x29257bcc478bb13;
  _DAT_18319a970 = _DAT_18319a9f0 ^ _DAT_18319a670;
  _DAT_18319a8c0 = 0xb375f027;
  _DAT_18319ab78 = func_0x000187c87810(_DAT_18319aa50 + 0x47003758fff4ff ^ 0xc3);
  _DAT_18319a8c0 =
       (_DAT_18319a8c0 ^ _DAT_18319ab78 & 0x7fffffffffffffff) - 0x5d196a8c ^ 0x7ba0083ab28f8e17;
  _DAT_18319ac30 =
       (_DAT_18319ac30 * -0x1c70ce1a413c9b7b ^ _DAT_18319a8c0) +
       (_DAT_18319ab78 & 0x7fffffffffffffff);
  _DAT_18319aca8 = _DAT_18319ac30 ^ _DAT_18319a8c0;
  _DAT_18319a550 = 0xa2e69574;
  _DAT_18319a8e0 = func_0x000187c87810(_DAT_18319aab8 ^ 0x3e0028a900361a);
  _DAT_18319a7c0 = _DAT_18319a8b0 ^ _DAT_18319a8e0 ^ 0x5d197a4c;
  _DAT_18319a6e0 = (_DAT_18319a6e0 ^ _DAT_18319a8e0) + 0x5d197a4c ^ 0x532b993ef612be1c;
  _DAT_18319ab50 = (_DAT_18319ab50 * -0x5d02aff08b72b943 ^ _DAT_18319a6e0) + _DAT_18319a8e0;
  _DAT_18319aae8 = _DAT_18319ab50 ^ _DAT_18319a6e0;
  _DAT_18319a668 = 0x5d197a4c;
  _DAT_18319a7f0 = func_0x000187c87810(_DAT_18319a518 + 0x440048fb00a2ff ^ 0xb9);
  _DAT_18319a500 = _DAT_18319a980 ^ _DAT_18319a8f0 ^ 0x100000fc0;
  _DAT_18319a6f8 = (_DAT_18319a6f8 ^ _DAT_18319a8f0) + 0x100000fc0 ^ 0xc526420d7328f547;
  _DAT_18319a610 = (_DAT_18319a610 * 0x83eeb250f200069 ^ _DAT_18319a6f8) + _DAT_18319a8f0;
  _DAT_18319ac18 = _DAT_18319a610 ^ _DAT_18319a6f8;
  _DAT_18319a678 = 0xfc0;
  uVar16 = func_0x000187c87810(_DAT_18319ac80 + 0x55000c750067ffU ^ 0x8f);
  uVar17 = (uVar16 & 0xfffffffffffffff0) >> 1 | uVar16 & 0xfffffffffffffff0;
  uVar17 = uVar17 >> 2 | uVar17;
  uVar17 = uVar17 >> 4 | uVar17;
  uVar17 = uVar17 >> 8 | uVar17;
  uVar17 = uVar17 >> 0x10 | uVar17;
  uVar17 = uVar17 >> 0x20 | uVar17;
  uVar17 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar16 = ((0x40 - (((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8
           ^ uVar16) & 0xfffffffffffffff0;
  _DAT_18319acd0 = _DAT_18319ab50 ^ uVar16 ^ 0x938b0930;
  _DAT_18319aa98 = (_DAT_18319aa98 ^ uVar16) + 0x938b0930 ^ 0x9f3bd08df58f35e7;
  _DAT_18319a670 = (_DAT_18319a670 * 0x75bbf266b594f369 ^ _DAT_18319aa98) + uVar16 ^ _DAT_18319aa98;
  _DAT_18319abc0 = 0x938b0930;
  uVar16 = (_DAT_18319a650 ^ _DAT_180d8bb70) + 0xab343345;
  uVar17 = (_UNK_180d8bb78 ^ 0x938b0930) + _DAT_18319a650 + 0x6c750690;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a650 ^ _DAT_180d8bb70;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _UNK_180d8bb78 ^ 0x938b0930;
  _DAT_18319aa40 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319a650 + 0x6c750690) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - 0xab343345);
  uVar16 = (ulonglong)(~(uint)_DAT_18319aa40 & 0x938b0930);
  _DAT_18319a958 = _DAT_18319a5f0 ^ uVar16 ^ 0x100000fc0;
  _DAT_18319acf8 = (_DAT_18319acf8 ^ uVar16) + 0x100000fc0 ^ 0x6e973ee9700347b8;
  _DAT_18319abc8 = (_DAT_18319abc8 * -0x185aa99d0d8db3d9 ^ _DAT_18319acf8) + uVar16;
  _DAT_18319ac38 = _DAT_18319abc8 ^ _DAT_18319acf8;
  _DAT_18319a780 = 0xfc0;
  uVar16 = (~_DAT_18319ab70 + 0x5f8bf2f9) *
           ((_DAT_18319a848 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319a848 & 0x84222325) * 2);
  uVar16 = (uVar16 | _DAT_18319ab40) + (uVar16 & _DAT_18319ab40);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319acd8 =
       func_0x000187c87810((uVar16 | 0xdba9d1dd) + (ulonglong)((uint)uVar16 & 0xdba9d1dd));
  _DAT_18319a688 = (_DAT_18319a688 ^ _DAT_18319acd8) - 0x5f8bf2f8 ^ 0x8628d3b49e2cbc3f;
  _DAT_18319a910 = (_DAT_18319a910 * 0x15d4100bbb0771b ^ _DAT_18319a688) + _DAT_18319acd8;
  _DAT_18319a9b8 = _DAT_18319a910 ^ _DAT_18319a688;
  _DAT_18319a760 = 0xa0740d08;
  uVar16 = (~_DAT_18319a970 + 0x5f8bf2f9) *
           ((_DAT_18319a7b0 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_18319a7b0 & 0x84222ce5) * 2);
  uVar16 = (uVar16 | _DAT_18319a780) + (uVar16 & _DAT_18319a780);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a830 =
       func_0x000187c87810((uVar16 | 0xdba9de1d) + (ulonglong)((uint)uVar16 & 0xdba9de1d));
  uVar16 = (_DAT_18319a830 & 0x3ffffffffff) -
           ((_DAT_18319a830 & 0x7fffffffffffffff) >> 1 & 0x15555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar16 = (ulonglong)((uint)bVar4 + (uint)bVar4) ^ _DAT_18319a830 & 0x3ffffffffff;
  _DAT_18319a6c0 = _DAT_18319ac18 ^ uVar16 ^ 0x5f8c02b8;
  _DAT_18319aae8 = (_DAT_18319aae8 ^ uVar16) + 0x5f8c02b8 ^ 0x52c73aca734a2e4f;
  _DAT_18319a918 = (_DAT_18319a918 * 0x58b4e75d71381f9b ^ _DAT_18319aae8) + uVar16;
  _DAT_18319a630 = _DAT_18319a918 ^ _DAT_18319aae8;
  _DAT_18319ac00 = 0x5f8c02b8;
  uVar16 = (_DAT_18319a5f8 ^ _DAT_180d8bb80) + _DAT_18319aaf8 + 0xdbae219d;
  uVar17 = (_DAT_18319aaf8 ^ _UNK_180d8bb88) + _DAT_18319a5f8 + 0xa0740d08;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a5f8 ^ _DAT_180d8bb80;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319aaf8 ^ _UNK_180d8bb88;
  _DAT_18319a5e0 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319a5f8 + 0xa0740d08) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319aaf8 + 0xdbae219d));
  uVar16 = (_DAT_18319a5e0 ^ 0xfffc0fb8) & 0x7fffffffffffffff;
  _DAT_18319a538 = _DAT_18319aab0 ^ uVar16 ^ 0x100000fc0;
  _DAT_18319a558 = (_DAT_18319a558 ^ uVar16) + 0x100000fc0 ^ 0x2d7b3ee877fd965f;
  _DAT_18319a8d8 = (_DAT_18319a8d8 * -0x73564b643b617079 ^ _DAT_18319a558) + uVar16;
  _DAT_18319a700 = _DAT_18319a8d8 ^ _DAT_18319a558;
  _DAT_18319a530 = 0xfc0;
  uVar16 = (_DAT_18319a568 ^ _DAT_180d8bb90) + _DAT_18319a540 + 0xf94cdc16;
  uVar17 = (_DAT_18319a540 ^ _UNK_180d8bb98) + _DAT_18319a568 + 0xb375f027;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a568 ^ _DAT_180d8bb90;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319a540 ^ _UNK_180d8bb98;
  _DAT_18319aa90 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319a568 + 0xb375f027) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319a540 + 0xf94cdc16));
  uVar16 = (_DAT_18319aa90 ^ 0xff7fff37) * 0x7247056ccabd9ef1;
  _DAT_18319a538 = _DAT_18319a830 ^ uVar16 ^ 0x130e4ef5a;
  _DAT_18319aae8 = (_DAT_18319aae8 ^ uVar16) + 0x130e4ef5a ^ 0x10e2531d3a9e2aa0;
  _DAT_18319a890 = (_DAT_18319a890 * 0x70b21945329409ef ^ _DAT_18319aae8) + uVar16;
  _DAT_18319ab18 = _DAT_18319a890 ^ _DAT_18319aae8;
  _DAT_18319ab80 = 0x30e4ef5a;
  _DAT_18319abe0 = func_0x000187c87810(_DAT_18319a8a8 + 0x1bffb610ffc8ff ^ 0x68);
  _DAT_18319aa78 = (_DAT_18319aa78 ^ _DAT_18319abe0 ^ 0xb375f027) + 0xce1b0f14 ^ 0xd777558942a88f04;
  _DAT_18319a9f8 =
       (_DAT_18319a9f8 * 0x3df55ff8c755f19d ^ _DAT_18319aa78) + (_DAT_18319abe0 ^ 0xb375f027);
  _DAT_18319a568 = _DAT_18319a9f8 ^ _DAT_18319aa78;
  _DAT_18319aad0 = 0xce1b0f14;
  _DAT_18319a5a0 = func_0x000187c87810(_DAT_18319ab98 ^ 0xffe3008422ffe1b0);
  _DAT_18319aba8 = (ulonglong)(~(uint)_DAT_18319a5a0 & 0x30e4ef5a);
  _DAT_18319a8d8 = _DAT_18319a8d8 ^ _DAT_18319aba8 ^ 0x294e241cb60d462c;
  _DAT_18319a578 = (_DAT_18319a578 * 0x40e59065ab999ec5 ^ _DAT_18319a8d8) + _DAT_18319aba8;
  _DAT_18319a740 = _DAT_18319a578 ^ _DAT_18319a8d8;
  _DAT_18319ac98 = 0;
  uVar16 = (_DAT_18319a668 ^ _DAT_180d8bba0) + _DAT_18319aa48 + 0xf94cdc16;
  uVar17 = (_DAT_18319aa48 ^ _UNK_180d8bba8) + _DAT_18319a668 + 0xffffffff;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a668 ^ _DAT_180d8bba0;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319aa48 ^ _UNK_180d8bba8;
  _DAT_18319a578 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319a668 + 0xffffffff) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319aa48 + 0xf94cdc16));
  uVar16 = (_DAT_18319a578 ^ 0x7d6eff33) << 0x2e | (_DAT_18319a578 ^ 0x7d6eff33) >> 0x12;
  _DAT_18319abc0 = (_DAT_18319abc0 ^ uVar16) + 0x829100cc ^ 0xe63ee32a858c7398;
  _DAT_18319a7a0 = (_DAT_18319a7a0 * 0x1836029c8e374127 ^ _DAT_18319abc0) + uVar16;
  _DAT_18319aa40 = _DAT_18319a7a0 ^ _DAT_18319abc0;
  _DAT_18319aa20 = 0x829100cc;
  uVar16 = (~_DAT_18319a5f0 + 0x829100cd) *
           ((_DAT_18319a6a0 ^ 0xf94cdc16) + (ulonglong)((uint)_DAT_18319a6a0 & 0xf94cdc16) * 2);
  uVar16 = (uVar16 | _DAT_18319ab90) + (uVar16 & _DAT_18319ab90);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319ac88 =
       func_0x000187c87810((uVar16 | 0x7bdddcda) + (ulonglong)((uint)uVar16 & 0x7bdddcda));
  _DAT_18319a9d0 = _DAT_18319a9d0 ^ _DAT_18319ac88 ^ 0x9719980ba4c13cb5;
  _DAT_18319ace0 = (_DAT_18319ace0 * -0x156f0c8a27277b03 ^ _DAT_18319a9d0) + _DAT_18319ac88;
  _DAT_18319acf8 = _DAT_18319ace0 ^ _DAT_18319a9d0;
  _DAT_18319a7f0 = 0;
  uVar16 = ((_DAT_18319a580 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_18319a580 & 0x84222ce5) * 2) *
           -_DAT_18319aab0;
  uVar16 = (uVar16 | _DAT_18319a878) + (uVar16 & _DAT_18319a878);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a810 =
       func_0x000187c87810((uVar16 | 0x84222ce5) + (ulonglong)((uint)uVar16 & 0x84222ce5));
  uVar16 = _DAT_18319a810 - (_DAT_18319a810 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = (((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
           _DAT_18319a810;
  _DAT_18319aa00 = _DAT_18319a538 ^ uVar16 ^ 0xfc0;
  _DAT_18319a850 = (_DAT_18319a850 ^ uVar16) + 0xfc0 ^ 0x314a0d1544708fbb;
  _DAT_18319a958 = (_DAT_18319a958 * 0x3426bb02804718d7 ^ _DAT_18319a850) + uVar16;
  _DAT_18319aa80 = _DAT_18319a958 ^ _DAT_18319a850;
  _DAT_18319a5b8 = 0xfc0;
  uVar16 = (~_DAT_18319a530 + 0x690cdb23) *
           ((_DAT_18319a710 ^ 0xed2ef807) + (ulonglong)((uint)_DAT_18319a710 & 0xed2ef807) * 2);
  uVar16 = (uVar16 | _DAT_18319ab48) + (uVar16 & _DAT_18319ab48);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a9e0 =
       func_0x000187c87810((uVar16 | 0x84222325) + (ulonglong)((uint)uVar16 & 0x84222325));
  auVar12 = _DAT_1800170c0;
  uVar16 = _DAT_18319a9e0 << 0x19 | _DAT_18319a9e0 >> 0x27;
  uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar16 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar16;
  _DAT_18319aa68 = _DAT_18319aa68 ^ uVar16 ^ 0xda254d4148bf126b;
  _DAT_18319a648 = (_DAT_18319a648 * 0x5f4717bf8c953169 ^ _DAT_18319aa68) + uVar16;
  _DAT_18319aa30 = _DAT_18319a648 ^ _DAT_18319aa68;
  _DAT_18319ab58 = 0;
  uVar7 = *(uint *)(unaff_RBP + 0x5c);
  auVar10._8_8_ = _UNK_180144f68;
  auVar10._0_8_ = (ulonglong)uVar7 ^ 0x84222325;
  auVar9 = pshufb(auVar10 ^ _DAT_180d8bbb0,_DAT_1800170c0);
  uVar17 = auVar9._8_8_ + auVar9._0_8_;
  uVar16 = uVar17 + _DAT_18319aaa0;
  if (auVar9._4_4_ < 0) {
    uVar16 = _DAT_18319a5c0 ^ uVar17;
  }
  _DAT_18319a9a0 = func_0x000187c87810(SUB161(auVar10 ^ _DAT_180d8bbb0,5) ^ uVar16);
  uVar7 = uVar7 & 0xfc0;
  uVar8 = (ulonglong)uVar7;
  _DAT_18319ab60 =
       (_DAT_18319ab60 ^ _DAT_18319a9a0 & 0x7fffffffffff8000) + uVar8 ^ 0x706d810fe44cff70;
  _DAT_18319a6b8 =
       (_DAT_18319a6b8 * -0x36fe64aa9e6d70b7 ^ _DAT_18319ab60) +
       (_DAT_18319a9a0 & 0x7fffffffffff8000);
  _DAT_18319a878 = _DAT_18319a6b8 ^ _DAT_18319ab60;
  _DAT_18319a9c8 = uVar8;
  *(int *)(unaff_RBP + 0x40) = *(int *)(unaff_RBP + 0x40) << 0xc;
  _DAT_18319abc8 = func_0x000187c87810(_DAT_18319aa10 + 0x50048cb0068ff ^ 0xbf);
  _DAT_18319aad8 = (_DAT_18319aad8 ^ _DAT_18319abc8) + 0xcf55281e ^ 0xeaf930b7d02e6aff;
  _DAT_18319ac60 = (_DAT_18319ac60 * 0x723f43c2d3b9146d ^ _DAT_18319aad8) + _DAT_18319abc8;
  _DAT_18319a6d8 = _DAT_18319ac60 ^ _DAT_18319aad8;
  _DAT_18319a9b0 = 0xcf55281e;
  _DAT_18319a6d0 = func_0x000187c87810(_DAT_18319ace8 ^ 0x41006c74ff8ca3);
  uVar16 = _DAT_18319a6d0 >> 3 & 0xffffffffff000000;
  _DAT_18319a738 = (_DAT_18319a738 ^ uVar16) - 0xf79760b0 ^ 0xaa22a2a7314eec77;
  _DAT_18319a5a0 = (_DAT_18319a5a0 * -0x230eae9681e7a4c3 ^ _DAT_18319a738) + uVar16;
  _DAT_18319abd8 = _DAT_18319a5a0 ^ _DAT_18319a738;
  _DAT_18319aa88 = 0x8689f50;
  uVar16 = (_DAT_18319ac50 ^ _DAT_180d8bbc0) + _DAT_18319aa80 + 0x8422d325;
  uVar17 = (_DAT_18319aa80 ^ _UNK_180d8bbc8) + _DAT_18319ac50 + 0xf79760b0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319ac50 ^ _DAT_180d8bbc0;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319aa80 ^ _UNK_180d8bbc8;
  _DAT_18319a620 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319ac50 + 0xf79760b0) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319aa80 + 0x8422d325));
  uVar16 = _DAT_18319a638 ^ 0xf79760b0;
  uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar16 = (uint)bVar4 + (uint)bVar4 ^ uVar16;
  _DAT_18319a970 = _DAT_18319a5d0 ^ uVar16 ^ 0xf79850b0;
  _DAT_18319acf0 = (_DAT_18319acf0 ^ uVar16) + 0xf79850b0 ^ 0xa7aafcf84b0a185f;
  _DAT_18319a6f0 = (_DAT_18319a6f0 * -0x3f9c10ee62fce2e5 ^ _DAT_18319acf0) + uVar16;
  _DAT_18319a938 = _DAT_18319a6f0 ^ _DAT_18319acf0;
  _DAT_18319ac58 = 0xf79850b0;
  uVar16 = (_DAT_18319a5a0 ^ _DAT_180d8bbd0) + _DAT_18319a640 + 0x84222325;
  uVar17 = (_DAT_18319a640 ^ _UNK_180d8bbd8) + _DAT_18319a5a0 + 0xc6d7f13f;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a5a0 ^ _DAT_180d8bbd0;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319a640 ^ _UNK_180d8bbd8;
  _DAT_18319a6f8 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319a5a0 + 0xc6d7f13f) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319a640 + 0x84222325));
  uVar16 = (_DAT_18319a6f8 ^ 0xc6d7f13f) * -0x6cca242b2dea4f8f;
  _DAT_18319a870 = (_DAT_18319a870 ^ uVar16) - 0xc6d7f13f ^ 0x6a7feb20e3875e32;
  _DAT_18319aad0 = (_DAT_18319aad0 * -0x1723c02747e22221 ^ _DAT_18319a870) + uVar16;
  _DAT_18319ac68 = _DAT_18319aad0 ^ _DAT_18319a870;
  _DAT_18319a698 = 0x39280ec1;
  uVar16 = (_DAT_18319aa00 ^ _DAT_180d8bbe0) + _DAT_18319abe0 + 0x8422d325;
  uVar17 = (_DAT_18319abe0 ^ _UNK_180d8bbe8) + _DAT_18319aa00 + 0xc6d7f13f;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319aa00 ^ _DAT_180d8bbe0;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319abe0 ^ _UNK_180d8bbe8;
  _DAT_18319a858 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319aa00 + 0xc6d7f13f) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319abe0 + 0x8422d325));
  uVar16 = _DAT_18319a858 ^ 0xba6a722b1000;
  uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar16 = (((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar16;
  _DAT_18319a8a8 = _DAT_18319a838 ^ uVar16 ^ 0xc6d8e13f;
  _DAT_18319a550 = (_DAT_18319a550 ^ uVar16) + 0xc6d8e13f ^ 0x28046a87bded4644;
  _DAT_18319a960 = (_DAT_18319a960 * -0x5c993ce2172b7d53 ^ _DAT_18319a550) + uVar16;
  _DAT_18319a958 = _DAT_18319a960 ^ _DAT_18319a550;
  _DAT_18319aa28 = _DAT_18319a920 ^ 0xc6d8e13f;
  _DAT_18319a980 = 0xc6d8e13f;
  uVar16 = (_DAT_18319a810 ^ _DAT_180d8bbf0) + _DAT_18319ab58 + 0x42fac21a;
  uVar17 = (_DAT_18319ab58 ^ _UNK_180d8bbf8) + _DAT_18319a810 + 0x39280ec1;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a810 ^ _DAT_180d8bbf0;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319ab58 ^ _UNK_180d8bbf8;
  _DAT_18319ac60 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319a810 + 0x39280ec1) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319ab58 + 0x42fac21a));
  uVar16 = _DAT_18319ac60 << 7 | _DAT_18319ac60 >> 0x39;
  _DAT_18319a510 = _DAT_18319a8c8 ^ uVar16 ^ 0x10000f000;
  _DAT_18319a5e0 = (_DAT_18319a5e0 ^ uVar16) + 0x10000f000 ^ 0x1e05534b2fd59b77;
  _DAT_18319a8f8 = (_DAT_18319a8f8 * -0x4e8428f6799428a1 ^ _DAT_18319a5e0) + uVar16;
  _DAT_18319a8b8 = _DAT_18319a8f8 ^ _DAT_18319a5e0;
  _DAT_18319ab90 = 0xf000;
  _DAT_18319aa00 = func_0x000187c87810(_DAT_18319ac78 ^ 0xfff1ffcb450076fa);
  uVar17 = _UNK_180d8bc08;
  uVar16 = _DAT_180d8bc00;
  _DAT_18319aa40 = (_DAT_18319aa40 ^ _DAT_18319aa00) - 0xf3552d7a ^ 0xa3c886e22decabf5;
  _DAT_18319aa28 = (_DAT_18319aa28 * 0x4ef95fabdf31832f ^ _DAT_18319aa40) + _DAT_18319aa00;
  _DAT_18319a980 = _DAT_18319aa28 ^ _DAT_18319aa40;
  _DAT_18319a5c8 = 0xcaad286;
  uVar14 = (_DAT_18319a508 ^ _DAT_180d8bc00) + _DAT_18319a5e8 + 0x37d7589b;
  uVar15 = (_DAT_18319a5e8 ^ _UNK_180d8bc08) + _DAT_18319a508 + 0xcf55281e;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319a508 ^ _DAT_180d8bc00;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_18319a5e8 ^ _UNK_180d8bc08;
  _DAT_18319a5b8 =
       func_0x000187c87810((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_18319a508 + 0xcf55281e) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319a5e8 + 0x37d7589b));
  uVar14 = (_DAT_18319a5b8 ^ 0x91bf5bc42a303044) << 0x2a |
           (_DAT_18319a5b8 ^ 0x91bf5bc42a303044) >> 0x16;
  _DAT_18319ab00 = _DAT_18319a7f8 ^ uVar14 ^ 0x1834aa3dc;
  _DAT_18319a5e0 = (_DAT_18319a5e0 ^ uVar14) + 0x1834aa3dc ^ 0x354103284a7524f;
  _DAT_18319a6d8 = (_DAT_18319a6d8 * 0x39dd3c337a404bd9 ^ _DAT_18319a5e0) + uVar14;
  _DAT_18319aab0 = _DAT_18319a6d8 ^ _DAT_18319a5e0;
  _DAT_18319ab40 = _DAT_18319a530 ^ 0x1834aa3dc;
  _DAT_18319ac80 = 0x834aa3dc;
  uVar14 = (_DAT_18319abb8 ^ uVar16) + _DAT_18319a640 + 0x37d7589b;
  uVar15 = (_DAT_18319a640 ^ uVar17) + _DAT_18319abb8 + 0xcf55281e;
  uVar16 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319abb8 ^ uVar16;
  uVar17 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_18319a640 ^ uVar17;
  _DAT_18319a8a8 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319abb8 + 0xcf55281e) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319a640 + 0x37d7589b));
  _DAT_18319a800 = (_DAT_18319a800 ^ _DAT_18319a8a8 ^ 0xb3f57bbe) + 0x7ca053a0 ^ 0x99229c6ee554239a;
  _DAT_18319a8b8 =
       (_DAT_18319a8b8 * -0x806689d8e0a5a39 ^ _DAT_18319a800) + (_DAT_18319a8a8 ^ 0xb3f57bbe);
  _DAT_18319aa90 = _DAT_18319a8b8 ^ _DAT_18319a800;
  _DAT_18319a568 = 0x7ca053a0;
  uVar16 = (~_DAT_18319a7b0 + 0x6aa503d) *
           ((_DAT_18319a808 ^ 0xf8827085) + (ulonglong)((uint)_DAT_18319a808 & 0xf8827085) * 2);
  uVar16 = (uVar16 | _DAT_18319a8d0) + (uVar16 & _DAT_18319a8d0);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a560 =
       func_0x000187c87810((uVar16 | 0xfe2820b9) + (ulonglong)((uint)uVar16 & 0xfe2820b9));
  uVar16 = _DAT_18319a560 - (_DAT_18319a560 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18319a560
  ;
  _DAT_18319a9b8 = _DAT_18319a600 ^ uVar16 ^ 0x834aa3dc;
  _DAT_18319a850 = (_DAT_18319a850 ^ uVar16) + 0x834aa3dc ^ 0x4a7b6e00f4bc8120;
  _DAT_18319a8b8 = (_DAT_18319a8b8 * 0x3e14d61eed0da651 ^ _DAT_18319a850) + uVar16;
  _DAT_18319ab70 = _DAT_18319a8b8 ^ _DAT_18319a850;
  _DAT_18319a5d8 = 0x834aa3dc;
  uVar16 = (_DAT_18319a5a8 ^ _DAT_180d8bc10) + _DAT_18319ac88 + 0x76880f9;
  uVar17 = (_DAT_18319ac88 ^ _UNK_180d8bc18) + _DAT_18319a5a8 + 0x834aa3dc;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a5a8 ^ _DAT_180d8bc10;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319ac88 ^ _UNK_180d8bc18;
  _DAT_18319acb8 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319a5a8 + 0x834aa3dc) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319ac88 + 0x76880f9));
  _DAT_18319a960 = _DAT_18319acb8 << 0x2e | _DAT_18319acb8 >> 0x12 & 0xffffffffff800000;
  _DAT_18319aa08 = _DAT_18319aa08 ^ _DAT_18319a960 ^ 0x5c6565c14ac7627d;
  _DAT_18319a538 = (_DAT_18319a538 * 0x61f7b07ac54e5a97 ^ _DAT_18319aa08) + _DAT_18319a960;
  _DAT_18319a918 = _DAT_18319a538 ^ _DAT_18319aa08;
  _DAT_18319a710 = 0;
  uVar16 = (_DAT_18319a858 ^ 0x8422d325) + _DAT_18319a8f8 + 0x8422d325;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a858 ^ 0x8422d325;
  uVar17 = ((_DAT_18319a8f8 + _DAT_18319a858) * 0x2000 | _DAT_18319a8f8 + _DAT_18319a858 >> 0x33) ^
           _DAT_18319a8f8;
  _DAT_18319a950 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - _DAT_18319a858 ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319a8f8 + 0x8422d325));
  _DAT_18319ac10 = _DAT_18319a708 ^ _DAT_18319a950 ^ 0xf000;
  _DAT_18319aa80 = (_DAT_18319aa80 ^ _DAT_18319a950) + 0xf000 ^ 0x7f031f86f9627ab2;
  _DAT_18319a588 = (_DAT_18319a588 * -0x2f1a66da41f66bd ^ _DAT_18319aa80) + _DAT_18319a950;
  _DAT_18319a530 = _DAT_18319a588 ^ _DAT_18319aa80;
  _DAT_18319aad0 = _DAT_18319a790 ^ 0xf000;
  _DAT_18319abe0 = 0xf000;
  _DAT_18319a518 = func_0x000187c87810(_DAT_18319acf8 + 0x3bffb5d5ffaaff ^ 0x93);
  uVar16 = (_DAT_18319a518 ^ 0xb3f57bbe) << 5 | _DAT_18319a518 >> 0x3b;
  _DAT_18319a900 = _DAT_18319a900 ^ uVar16 ^ 0x1ba1d9b92a54efdc;
  _DAT_18319a888 = (_DAT_18319a888 * -0x19a8453f6c5284b1 ^ _DAT_18319a900) + uVar16;
  _DAT_18319aa98 = _DAT_18319a888 ^ _DAT_18319a900;
  _DAT_18319a930 = 0;
  uVar16 = ((_DAT_18319a780 ^ 0x8422d325) + (ulonglong)((uint)_DAT_18319a780 & 0x8422d325) * 2) *
           -_DAT_18319ac88;
  uVar16 = (uVar16 | _DAT_18319a7e8) + (uVar16 & _DAT_18319a7e8);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a738 =
       func_0x000187c87810((uVar16 | 0x8422d325) + (ulonglong)((uint)uVar16 & 0x8422d325));
  uVar16 = (_DAT_18319a738 & 0x1ffffffff) * 0x80;
  _DAT_18319aa88 = _DAT_18319a8a8 ^ uVar16 ^ 0xf000;
  _DAT_18319a8e8 = (_DAT_18319a8e8 ^ uVar16) + 0xf000 ^ 0xe506c14b7e1ddac5;
  _DAT_18319abe0 = (_DAT_18319abe0 * 0x119283272e9583d ^ _DAT_18319a8e8) + uVar16;
  _DAT_18319ac48 = _DAT_18319abe0 ^ _DAT_18319a8e8;
  _DAT_18319a9d0 = 0xf000;
  uVar5 = *(uint *)(unaff_RBP + 0x40) & 0xffff;
  uVar8 = uVar8 ^ 0x84222325;
  uVar16 = ((_DAT_18319a770 ^ uVar8) + (ulonglong)((uint)_DAT_18319a770 & (uint)uVar8) * 2) *
           (uVar5 - _DAT_18319a9b0);
  uVar16 = (uVar16 | _DAT_18319a818) + (uVar16 & _DAT_18319a818);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  uVar8 = uVar8 ^ uVar5;
  _DAT_18319a560 = func_0x000187c87810((uVar8 | uVar16) + (ulonglong)((uint)uVar8 & (uint)uVar16));
  uVar7 = uVar7 | uVar5;
  _DAT_18319a720 = (ulonglong)uVar7;
  _DAT_18319ace0 =
       (_DAT_18319ace0 ^ _DAT_18319a6d0 & 0x3ffffffff) + _DAT_18319a720 ^ 0x8f08eac519202f85;
  _DAT_18319ac18 =
       (_DAT_18319ac18 * -0x6696bc3e2fe006d1 ^ _DAT_18319ace0) + (_DAT_18319a6d0 & 0x3ffffffff);
  _DAT_18319a988 = _DAT_18319ac18 ^ _DAT_18319ace0;
  *(uint *)(unaff_RBP + 0x40) = uVar7;
  plVar2 = *(longlong **)(unaff_RBP + 0xb0);
  uVar3 = *(undefined8 *)(unaff_RBP + 0x60);
  lVar6 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar3,0);
  *(int *)(unaff_RBP + 0x80) = (int)*(char *)(lVar6 + *(int *)(unaff_RBP + 0x88));
  (**(code **)(*plVar2 + 0x6f8))(plVar2,uVar3,lVar6,2);
  uVar7 = *(uint *)(unaff_RBP + 0x80);
  uVar16 = (~_DAT_18319ab80 + 0xc37db2ef) *
           ((_DAT_18319aa50 ^ 0x642961e1) + (ulonglong)((uint)_DAT_18319aa50 & 0x642961e1) * 2);
  uVar16 = (uVar16 | _DAT_18319aab8) + (uVar16 & _DAT_18319aab8);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a810 =
       func_0x000187c87810((uVar16 | 0xa754d30f) + (ulonglong)((uint)uVar16 & 0xa754d30f));
  _DAT_18319aae8 =
       (_DAT_18319aae8 ^ _DAT_18319a810 & 0x7fffffffffffffff) + 0xe37ff2ee ^ 0x17ea09e582438fb2;
  _DAT_18319a6d8 =
       (_DAT_18319a6d8 * 0x29923db33a5faff7 ^ _DAT_18319aae8) +
       (_DAT_18319a810 & 0x7fffffffffffffff);
  _DAT_18319a9b8 = _DAT_18319a6d8 ^ _DAT_18319aae8;
  _DAT_18319a788 = 0xe37ff2ee;
  _DAT_18319ac78 = func_0x000187c87810(_DAT_18319a970 ^ 0xff1e002710001ab0);
  uVar16 = (_DAT_18319ac78 ^ 0x8b56cdd2ea4a4fce) & 0x7fffffffffffffff ^ 0xd8168622;
  _DAT_18319a8d8 = (_DAT_18319a8d8 ^ uVar16) + 0x7d05cd55 ^ 0xb0bae345c39c2815;
  _DAT_18319a6f0 = (_DAT_18319a6f0 * -0x300c255d00effd49 ^ _DAT_18319a8d8) + uVar16;
  _DAT_18319a958 = _DAT_18319a6f0 ^ _DAT_18319a8d8;
  _DAT_18319abc0 = 0x7d05cd55;
  _DAT_18319a990 = func_0x000187c87810(_DAT_18319a528 ^ 0xff47002ec5ff8917);
  uVar16 = (_DAT_18319a990 ^ 0xb5b49c40) * 0x1957aedf82e8f41f;
  _DAT_18319a8b8 = _DAT_18319a6d0 ^ uVar16 ^ 0xb5b49c8f;
  _DAT_18319aa08 = (_DAT_18319aa08 ^ uVar16) + 0xb5b49c8f ^ 0xa996b860582d537e;
  _DAT_18319a898 = (_DAT_18319a898 * 0x43613867d787596d ^ _DAT_18319aa08) + uVar16;
  _DAT_18319a5b0 = _DAT_18319a898 ^ _DAT_18319aa08;
  _DAT_18319a820 = 0xb5b49c8f;
  uVar16 = (_DAT_18319aa10 ^ _DAT_180d8bc20) + _DAT_18319ac58 + 0x3196bfaa;
  uVar17 = (_DAT_18319ac58 ^ _UNK_180d8bc28) + _DAT_18319aa10 + 0x4a4b63b0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319aa10 ^ _DAT_180d8bc20;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319ac58 ^ _UNK_180d8bc28;
  _DAT_18319a5b0 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319aa10 + 0x4a4b63b0) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319ac58 + 0x3196bfaa));
  _DAT_18319a970 = _DAT_18319a788 ^ _DAT_18319a5b0 ^ 0x10000003f;
  _DAT_18319a550 = (_DAT_18319a550 ^ _DAT_18319a5b0) + 0x10000003f ^ 0xeb0a715a3731320;
  _DAT_18319ac58 = (_DAT_18319ac58 * -0x32eee0abd91d2199 ^ _DAT_18319a550) + _DAT_18319a5b0;
  _DAT_18319a6a0 = _DAT_18319ac58 ^ _DAT_18319a550;
  _DAT_18319aaf8 = 0x3f;
  _DAT_18319a9f0 = func_0x000187c87810(_DAT_18319a798 ^ 0xff09ffe024ff9907);
  _DAT_18319a558 = (_DAT_18319a558 ^ _DAT_18319a9f0) - 0xa448dd00 ^ 0x31387ba820598d19;
  _DAT_18319ac70 = (_DAT_18319ac70 * 0x4954912bacb9be69 ^ _DAT_18319a558) + _DAT_18319a9f0;
  _DAT_18319a720 = _DAT_18319ac70 ^ _DAT_18319a558;
  _DAT_18319aa50 = 0x5bb72300;
  uVar16 = (_DAT_18319a658 ^ _DAT_180d8bc30) + _DAT_18319ab50 + 0x206afe1a;
  uVar17 = (_DAT_18319ab50 ^ _UNK_180d8bc38) + _DAT_18319a658 + 0x5bb72300;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319a658 ^ _DAT_180d8bc30;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_18319ab50 ^ _UNK_180d8bc38;
  _DAT_18319a5f0 =
       func_0x000187c87810((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18319a658 + 0x5bb72300) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319ab50 + 0x206afe1a));
  uVar17 = (_DAT_18319a5f0 ^ 0x3adb6d3183489d00) << 2 | _DAT_18319a5f0 >> 0x3e;
  uVar16 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar17 = (((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar17;
  _DAT_18319a548 = _DAT_18319aaf0 ^ uVar17 ^ 0x10000003f;
  _DAT_18319a520 = (_DAT_18319a520 ^ uVar17) + 0x10000003f ^ 0xb1b68c98d6bff25;
  _DAT_18319ac58 = (_DAT_18319ac58 * 0x15663717bc1a1b39 ^ _DAT_18319a520) + uVar17;
  _DAT_18319ab50 = _DAT_18319ac58 ^ _DAT_18319a520;
  _DAT_18319a880 = 0x3f;
  _DAT_18319a750 = func_0x000187c87810(_DAT_18319aac8 + 0xffce00e4ee0036ffU ^ 0xb6);
  uVar16 = (_DAT_18319a750 & 0x3ffffffff) - (_DAT_18319a750 >> 1 & 0x155555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
           _DAT_18319a750 & 0x3ffffffff;
  _DAT_18319a518 = _DAT_18319a550 ^ uVar16 ^ 0x69eb6d67;
  _DAT_18319a588 = (_DAT_18319a588 ^ uVar16) + 0x69eb6d67 ^ 0x867b2df05aa33cd3;
  _DAT_18319a788 = (_DAT_18319a788 * 0x1d26b9110f355395 ^ _DAT_18319a588) + uVar16;
  _DAT_18319a780 = _DAT_18319a788 ^ _DAT_18319a588;
  _DAT_18319a7c8 = _DAT_18319ab28 ^ 0x69eb6d67;
  _DAT_18319a528 = 0x69eb6d67;
  _DAT_18319a9a0 = func_0x000187c87810(_DAT_18319ab78 + 0xffa3ff8a760054ff ^ 0x3a);
  uVar16 = (_DAT_18319a9a0 & 0x3fffffffffff) - (_DAT_18319a9a0 >> 1 & 0x155555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = (((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
           _DAT_18319a9a0 & 0x3fffffffffff;
  _DAT_18319a648 = _DAT_18319ab60 ^ uVar16 ^ 0x10000003f;
  _DAT_18319abb8 = (_DAT_18319abb8 ^ uVar16) + 0x10000003f ^ 0x95e0839aeb63e1dc;
  _DAT_18319a8f0 = (_DAT_18319a8f0 * 0x24648f8a9a1a966f ^ _DAT_18319abb8) + uVar16;
  _DAT_18319a6d8 = _DAT_18319a8f0 ^ _DAT_18319abb8;
  _DAT_18319a5c0 = 0x3f;
  _DAT_18319a558 = func_0x000187c87810(_DAT_18319a5a8 + 0xffec00158e0047ff ^ 0x3a);
  uVar5 = ~(uint)_DAT_18319a558 & 0xe37ff2ee;
  uVar16 = (ulonglong)(uVar5 >> 0x14) | (ulonglong)uVar5 << 0x2c;
  _DAT_18319aa90 = _DAT_18319a840 ^ uVar16 ^ 0x16085c043;
  _DAT_18319a8e0 = (_DAT_18319a8e0 ^ uVar16) + 0x16085c043 ^ 0xe563b8fac4b66b2c;
  _DAT_18319a990 = (_DAT_18319a990 * 0x35349029188584f3 ^ _DAT_18319a8e0) + uVar16;
  _DAT_18319aa18 = _DAT_18319a990 ^ _DAT_18319a8e0;
  _DAT_18319a640 = 0x6085c043;
  _DAT_18319abc0 = func_0x000187c87810(_DAT_18319a5b0 + 0x13fff9920047ff ^ 0x86);
  uVar16 = (ulonglong)(~(uint)_DAT_18319abc0 & 0xe37ff2ee);
  _DAT_18319a898 = (_DAT_18319a898 ^ uVar16) + 0x9e7a3fbb ^ 0x254d7c8ea885397d;
  _DAT_18319a850 = (_DAT_18319a850 * -0x79c19a6f041a1699 ^ _DAT_18319a898) + uVar16;
  _DAT_18319ac48 = _DAT_18319a850 ^ _DAT_18319a898;
  _DAT_18319a6c8 = 0x9e7a3fbb;
  uVar16 = (~_DAT_18319a998 + 0x7d05cd56) *
           ((_DAT_18319aa10 ^ 0x675dd1cb) + (ulonglong)((uint)_DAT_18319aa10 & 0x675dd1cb) * 2);
  uVar16 = (uVar16 | _DAT_18319ac78) + (uVar16 & _DAT_18319ac78);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a708 =
       func_0x000187c87810((uVar16 | 0x1a581c9e) + (ulonglong)((uint)uVar16 & 0x1a581c9e));
  uVar16 = (_DAT_18319a6e0 & 0xffffffffffff) * 0x5265393729e405f9;
  _DAT_18319a6d0 = (_DAT_18319a6d0 ^ uVar16) + 0x6105c044 ^ 0x4ecdfd488660c695;
  _DAT_18319aa28 = (_DAT_18319aa28 * -0x371df571a4ff91a7 ^ _DAT_18319a6d0) + uVar16;
  _DAT_18319a720 = _DAT_18319aa28 ^ _DAT_18319a6d0;
  _DAT_18319a8c0 = 0x6105c044;
  uVar16 = (~_DAT_18319a7a0 + 0x6085c044) *
           ((_DAT_18319ac28 ^ 0xe4a7e366) + (ulonglong)((uint)_DAT_18319ac28 & 0xe4a7e366) * 2);
  uVar16 = (uVar16 | _DAT_18319a8a0) + (uVar16 & _DAT_18319a8a0);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a540 =
       func_0x000187c87810((uVar16 | 0x84222325) + (ulonglong)((uint)uVar16 & 0x84222325));
  _DAT_18319a6e8 = _DAT_18319a540 * -0x57262b6f231ba16b & 0xfffffffffffffe00;
  uVar16 = _DAT_18319a6e8 >> 1 | _DAT_18319a6e8;
  uVar16 = uVar16 >> 2 | uVar16;
  uVar16 = uVar16 >> 4 | uVar16;
  uVar16 = uVar16 >> 8 | uVar16;
  uVar16 = uVar16 >> 0x10 | uVar16;
  uVar16 = uVar16 >> 0x20 | uVar16;
  uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  _DAT_18319a6e8 =
       (0x40 - (((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
       _DAT_18319a6e8;
  _DAT_18319a8c8 = _DAT_18319a8c8 ^ _DAT_18319a6e8 ^ 0xf6cd26735b885c42;
  _DAT_18319a608 = (_DAT_18319a608 * 0x2893323eac1a1cfb ^ _DAT_18319a8c8) + _DAT_18319a6e8;
  _DAT_18319ab38 = _DAT_18319a608 ^ _DAT_18319a8c8;
  _DAT_18319a910 = 0;
  uVar16 = (~_DAT_18319a500 + 0x100000000) *
           ((_DAT_18319a718 ^ 0x675dd1cb) + (ulonglong)((uint)_DAT_18319a718 & 0x675dd1cb) * 2);
  uVar16 = (uVar16 | _DAT_18319acb0) + (uVar16 & _DAT_18319acb0);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319abb8 =
       func_0x000187c87810((uVar16 | 0x98a22e34) + (ulonglong)((uint)uVar16 & 0x98a22e34));
  _DAT_18319aca0 = (_DAT_18319aca0 ^ _DAT_18319a698) + 0x1c800d11 ^ 0x7aa64334077a599b;
  _DAT_18319a6e8 = (_DAT_18319a6e8 * -0x5a682920fc7690c9 ^ _DAT_18319aca0) + _DAT_18319a698;
  _DAT_18319ac30 = _DAT_18319a6e8 ^ _DAT_18319aca0;
  _DAT_18319a700 = 0x1c800d11;
  uVar16 = ((_DAT_18319a5d0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18319a5d0 & 0x8422231a) * 2) *
           -_DAT_18319abd0;
  uVar16 = (uVar16 | _DAT_18319a588) + (uVar16 & _DAT_18319a588);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_18319a720 =
       func_0x000187c87810((uVar16 | 0x8422231a) + (ulonglong)((uint)uVar16 & 0x8422231a));
  uVar16 = (ulonglong)(~(uint)_DAT_18319a720 & 0x3f);
  _DAT_18319a840 = _DAT_18319a910 ^ uVar16 ^ 0x3f;
  _DAT_18319a7c8 = (_DAT_18319a7c8 ^ uVar16) + 0x3f ^ 0x10d578c6b32b2065;
  _DAT_18319ab00 = (_DAT_18319ab00 * -0x4d46608d6d01fc51 ^ _DAT_18319a7c8) + uVar16;
  _DAT_18319a9b0 = _DAT_18319ab00 ^ _DAT_18319a7c8;
  _DAT_18319aaf0 = 0x3f;
  auVar9._8_8_ = _UNK_180132e68;
  auVar9._0_8_ = (ulonglong)uVar7 ^ 0x84222325;
  auVar10 = pshufb(auVar9 ^ _DAT_180d8bc40,auVar12);
  uVar17 = auVar10._8_8_ + auVar10._0_8_;
  uVar16 = uVar17 + _DAT_18319a6f8;
  if (auVar10._4_4_ < 0) {
    uVar16 = _DAT_18319a810 ^ uVar17;
  }
  _DAT_18319a928 = func_0x000187c87810(SUB161(auVar9 ^ _DAT_180d8bc40,5) ^ uVar16);
  uVar7 = uVar7 & 0x3f;
  _DAT_18319a608 = (ulonglong)uVar7;
  _DAT_18319a500 = (_DAT_18319a500 ^ _DAT_18319a928) + _DAT_18319a608 ^ 0x46066efcb34f831;
  _DAT_18319a620 = (_DAT_18319a620 * -0x6136aba6cf853f5d ^ _DAT_18319a500) + _DAT_18319a928;
  _DAT_18319a6b8 = _DAT_18319a620 ^ _DAT_18319a500;
  iVar1 = *(int *)(unaff_RBP + 0x40);
  *(undefined8 *)(unaff_RBP + 0x80) = *(undefined8 *)(unaff_RBP + 0x10);
  uVar5 = *(uint *)(unaff_RBP + 0x78);
  *(uint *)(unaff_RBP + 0x88) = uVar5;
  uVar17 = (ulonglong)uVar5;
  auVar11._8_8_ = _UNK_180062bf8;
  auVar11._0_8_ = uVar17 ^ 0x84222325;
  auVar12 = pshufb(auVar11 ^ _DAT_180d8bc50,auVar12);
  uVar14 = auVar12._8_8_ + auVar12._0_8_;
  uVar16 = uVar14 + _DAT_18319a5c0;
  if (auVar12._4_4_ < 0) {
    uVar16 = _DAT_18319ac88 ^ uVar14;
  }
  _DAT_18319a688 = func_0x000187c87810(SUB161(auVar11 ^ _DAT_180d8bc50,5) ^ uVar16);
  uVar16 = (_DAT_18319a688 << 0x12 | (_DAT_18319a688 & 0x1fffffffffffffff) >> 0x2e) ^ uVar17;
  uVar18 = uVar5 & (uint)_DAT_18001a990;
  uVar13 = uVar5 | (uint)_DAT_18001a990;
  _DAT_18319ab50 =
       ((ulonglong)uVar13 * (ulonglong)_DAT_180d8bc90 << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_180d8bc80 +
       ((ulonglong)uVar18 * (ulonglong)_DAT_180d8bc90 << 0x20 |
       (ulonglong)uVar18 * (ulonglong)_DAT_180d8bc80) +
       ((ulonglong)uVar5 * (ulonglong)_DAT_180d8bc70 << 0x20) +
       (ulonglong)uVar5 * (ulonglong)_DAT_180d8bc60 +
       (-(((uVar17 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)_DAT_180d8bd20 +
         (((uVar17 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)_DAT_180d8bd30 +
          (_DAT_18001a990 >> 0x20) * (ulonglong)_DAT_180d8bd20 << 0x20)) -
       (((ulonglong)uVar13 * (ulonglong)_DAT_180d8bd10 << 0x20) +
        (ulonglong)uVar13 * (ulonglong)_DAT_180d8bd00 +
       ((ulonglong)uVar18 * (ulonglong)_DAT_180d8bcf0 << 0x20 |
       (ulonglong)uVar18 * (ulonglong)_DAT_180d8bce0) +
       ((ulonglong)uVar5 * (ulonglong)_DAT_180d8bcd0 << 0x20) +
       (ulonglong)uVar5 * (ulonglong)_DAT_180d8bcc0)) + 0xa08faeb8595d8bb0;
  _DAT_18319a8f8 = _DAT_18319a628 ^ uVar16 ^ _DAT_18319ab50;
  _DAT_18319aad0 = (_DAT_18319aad0 ^ uVar16) + _DAT_18319ab50 ^ 0x4fb7b39bad24f1bb;
  _DAT_18319a5f8 = (_DAT_18319a5f8 * -0x69b62d8829db8877 ^ _DAT_18319aad0) + uVar16;
  _DAT_18319a800 = _DAT_18319a5f8 ^ _DAT_18319aad0;
  _DAT_18319ab50 = _DAT_18319ab50 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x90) = uVar7 + iVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x20)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c61ce0 (image 187c61ce0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c61ce0(void)

{
  byte bVar1;
  longlong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  uint unaff_EDI;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  
  *(char *)(unaff_RBP + 0x60) = (char)unaff_EDI + (char)(unaff_EDI / 10) * -10;
  _DAT_18319a520 = func_0x000187c87810(_DAT_18319a6c8 ^ 0xffe2ff7c32001d9b);
  uVar2 = (_DAT_18319a520 ^ 0x86e0) * 0x3be189aafa1c103b;
  _DAT_18319a8b0 = (_DAT_18319a8b0 ^ uVar2) + 0x73 ^ 0x521cd638a40198e0;
  _DAT_18319aac0 = (_DAT_18319aac0 * 0x594e9cf5f202994b ^ _DAT_18319a8b0) + uVar2;
  _DAT_18319a6e0 = _DAT_18319aac0 ^ _DAT_18319a8b0;
  _DAT_18319a850 = 0x73;
  uVar2 = (_DAT_18319a708 ^ _DAT_1801ec250) + _DAT_18319a508 + 0x84222325;
  uVar6 = (_DAT_18319a508 ^ _UNK_1801ec258) + _DAT_18319a708 + 0x70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18319a708 ^ _DAT_1801ec250;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319a508 ^ _UNK_1801ec258;
  _DAT_18319a878 =
       func_0x000187c87810((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319a708 + 0x70) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18319a508 + 0x84222325));
  _DAT_18319a5b8 = (_DAT_18319a5b8 ^ _DAT_18319a878) - 0x70 ^ 0x4fb8e99f7b8e68fe;
  _DAT_18319a548 = (_DAT_18319a548 * 0x5efae762dca4dd05 ^ _DAT_18319a5b8) + _DAT_18319a878;
  _DAT_18319a668 = _DAT_18319a548 ^ _DAT_18319a5b8;
  _DAT_18319acf8 = 0x90;
  _DAT_18319a530 = func_0x000187c87810(_DAT_18319ac00 + 0xffe2ff83dd001dffU ^ 0xad);
  uVar2 = _DAT_18319a530 ^ 0x70;
  _DAT_18319aa90 = _DAT_18319a918 ^ uVar2 ^ 0xa0;
  _DAT_18319a630 = (_DAT_18319a630 ^ uVar2) + 0xa0 ^ 0x970ec557dcbcad9d;
  _DAT_18319aa18 = (_DAT_18319aa18 * -0x25fc45cdade38027 ^ _DAT_18319a630) + uVar2;
  _DAT_18319a8a8 = _DAT_18319aa18 ^ _DAT_18319a630;
  _DAT_18319a8c8 = 0xa0;
  uVar2 = (_DAT_18319acf0 ^ _DAT_1804b1b80) + _DAT_18319a6c8 + 0x84222315;
  uVar6 = (_DAT_18319a6c8 ^ _UNK_1804b1b88) + _DAT_18319acf0 + 0x34;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18319acf0 ^ _DAT_1804b1b80;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319a6c8 ^ _UNK_1804b1b88;
  _DAT_18319a830 =
       func_0x000187c87810((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319acf0 + 0x34) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18319a6c8 + 0x84222315));
  uVar2 = (ulonglong)(~(uint)_DAT_18319a838 & 0x30);
  _DAT_18319a838 = _DAT_18319a6d0 ^ uVar2 ^ 100;
  _DAT_18319a950 = (_DAT_18319a950 ^ uVar2) + 100 ^ 0xa079e026f4ed35cf;
  _DAT_18319a818 = (_DAT_18319a818 * -0x2e824c5812b78b8b ^ _DAT_18319a950) + uVar2;
  _DAT_18319a798 = _DAT_18319a818 ^ _DAT_18319a950;
  _DAT_18319a810 = 100;
  uVar2 = (~_DAT_18319aa28 + 0xcd) *
          ((_DAT_18319a900 ^ 0x84222341) + (ulonglong)((uint)_DAT_18319a900 & 0x84222341) * 2);
  uVar2 = (uVar2 | _DAT_18319a9a0) + (uVar2 & _DAT_18319a9a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18319abb0 = func_0x000187c87810((uVar2 | 0x8422238d) + (ulonglong)((uint)uVar2 & 0x8422238d))
  ;
  uVar2 = (_DAT_18319abb0 & 0x7ffffffffffff) * -0x5b914ca1cd3b2323 ^ 100;
  _DAT_18319a9c8 = _DAT_18319a940 ^ uVar2 ^ 0x130;
  _DAT_18319a5c8 = (_DAT_18319a5c8 ^ uVar2) + 0x130 ^ 0x32c6c91857651464;
  _DAT_18319aac8 = (_DAT_18319aac8 * -0x591856fc6816397f ^ _DAT_18319a5c8) + uVar2;
  _DAT_18319aad8 = _DAT_18319aac8 ^ _DAT_18319a5c8;
  _DAT_18319ac40 = 0x30;
  uVar2 = (~_DAT_18319a698 + 0x41) *
          ((_DAT_18319a5e0 ^ 0x84222315) + (ulonglong)((uint)_DAT_18319a5e0 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_18319a898) + (uVar2 & _DAT_18319a898);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18319a8d0 = func_0x000187c87810((uVar2 | 0x84222355) + (ulonglong)((uint)uVar2 & 0x84222355))
  ;
  uVar2 = _DAT_18319a8d0 ^ 0xc00;
  uVar6 = uVar2 >> 1 | uVar2;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar2) * 0x1efd71ed63a0117d;
  uVar6 = uVar2 >> 1 | uVar2;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar2;
  _DAT_18319a950 = _DAT_18319a818 ^ uVar2 ^ 0x70;
  _DAT_18319a5e8 = (_DAT_18319a5e8 ^ uVar2) + 0x70 ^ 0x201159703e957423;
  _DAT_18319a8f8 = (_DAT_18319a8f8 * 0x295d73e0ec9281d3 ^ _DAT_18319a5e8) + uVar2;
  _DAT_18319a9f0 = _DAT_18319a8f8 ^ _DAT_18319a5e8;
  _DAT_18319a6c0 = 0x70;
  uVar2 = (~_DAT_18319a690 + 0xc1) *
          ((_DAT_18319acd0 ^ 0x84222355) + (ulonglong)((uint)_DAT_18319acd0 & 0x84222355) * 2);
  uVar2 = (uVar2 | _DAT_18319a8f0) + (uVar2 & _DAT_18319a8f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18319a800 = func_0x000187c87810((uVar2 | 0x84222395) + (ulonglong)((uint)uVar2 & 0x84222395))
  ;
  _DAT_18319aaa8 = _DAT_18319ab28 ^ _DAT_18319a800 ^ 0x130;
  _DAT_18319ac10 = (_DAT_18319ac10 ^ _DAT_18319a800) + 0x130 ^ 0x6868a11c96a86f3d;
  _DAT_18319ac30 = (_DAT_18319ac30 * -0x657ebba0815c0bad ^ _DAT_18319ac10) + _DAT_18319a800;
  _DAT_18319ac78 = _DAT_18319ac30 ^ _DAT_18319ac10;
  _DAT_18319aac8 = 0x30;
  uVar2 = (~_DAT_18319aa60 + 0x74) *
          ((_DAT_18319ac68 ^ 0x842223bb) + (ulonglong)((uint)_DAT_18319ac68 & 0x842223bb) * 2);
  uVar2 = (uVar2 | _DAT_18319a988) + (uVar2 & _DAT_18319a988);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18319a930 = func_0x000187c87810((uVar2 | 0x842223c8) + (ulonglong)((uint)uVar2 & 0x842223c8))
  ;
  uVar6 = _UNK_180d8be68;
  uVar2 = _DAT_180d8be60;
  uVar3 = (_DAT_18319a930 & 0x3fffffffffffff) * 0x80;
  _DAT_18319a5a0 = _DAT_18319a7c8 ^ uVar3 ^ 0x111;
  _DAT_18319aad8 = (_DAT_18319aad8 ^ uVar3) + 0x111 ^ 0x582edc934bdbd008;
  _DAT_18319a7c0 = (_DAT_18319a7c0 * -0x2a030ece3ed2638f ^ _DAT_18319aad8) + uVar3;
  _DAT_18319a5e8 = _DAT_18319a7c0 ^ _DAT_18319aad8;
  _DAT_18319a808 = 0x11;
  uVar3 = (_DAT_18319aab0 ^ _DAT_180d8be60) + _DAT_18319aae0 + 0x842223bb;
  uVar7 = (_DAT_18319aae0 ^ _UNK_180d8be68) + _DAT_18319aab0 + 0x73;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319aab0 ^ _DAT_180d8be60;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18319aae0 ^ _UNK_180d8be68;
  _DAT_18319aae0 =
       func_0x000187c87810((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319aab0 + 0x73) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319aae0 + 0x842223bb));
  _DAT_18319a728 = (_DAT_18319a728 ^ _DAT_18319aae0 ^ 0x46fa) + 0xed ^ 0xf0eaaffac26a1ad;
  _DAT_18319a718 =
       (_DAT_18319a718 * 0x26af7540f9d4e07b ^ _DAT_18319a728) + (_DAT_18319aae0 ^ 0x46fa);
  _DAT_18319a648 = _DAT_18319a718 ^ _DAT_18319a728;
  _DAT_18319a900 = 0xed;
  uVar3 = (_DAT_18319a870 ^ uVar2) + _DAT_18319a630 + 0x842223bb;
  uVar7 = (_DAT_18319a630 ^ uVar6) + _DAT_18319a870 + 0x73;
  uVar2 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319a870 ^ uVar2;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18319a630 ^ uVar6;
  _DAT_18319a6b0 =
       func_0x000187c87810((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319a870 + 0x73) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18319a630 + 0x842223bb));
  _DAT_18319a5a8 =
       (_DAT_18319a5a8 ^ _DAT_18319a6b0 & 0x7fffffffffffffff) + 0x12 ^ 0x46e591198b8a0e55;
  _DAT_18319aa70 =
       (_DAT_18319aa70 * -0xede3c86de2b9c53 ^ _DAT_18319a5a8) +
       (_DAT_18319a6b0 & 0x7fffffffffffffff);
  _DAT_18319ab18 = _DAT_18319aa70 ^ _DAT_18319a5a8;
  _DAT_18319a658 = 0x12;
  uVar2 = (_DAT_18319ab30 ^ _DAT_180d8be70) + _DAT_18319ace8 + 0x842223c8;
  uVar6 = (_DAT_18319ace8 ^ _UNK_180d8be78) + _DAT_18319ab30 + 0x24;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18319ab30 ^ _DAT_180d8be70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319ace8 ^ _UNK_180d8be78;
  _DAT_18319a760 =
       func_0x000187c87810((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319ab30 + 0x24) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18319ace8 + 0x842223c8));
  uVar2 = (_DAT_18319a760 << 0x34 | _DAT_18319a760 >> 0xc) ^ 0xed;
  _DAT_18319acf0 = _DAT_18319a9c0 ^ uVar2 ^ 0x111;
  _DAT_18319ac98 = (_DAT_18319ac98 ^ uVar2) + 0x111 ^ 0x82897d0fb26fa664;
  _DAT_18319a890 = (_DAT_18319a890 * 0x58c058093c131c51 ^ _DAT_18319ac98) + uVar2;
  _DAT_18319a590 = _DAT_18319a890 ^ _DAT_18319ac98;
  _DAT_18319ab50 = 0x11;
  uVar2 = (~_DAT_18319acf0 + 0x12) *
          ((_DAT_18319acf8 ^ 0x84222334) + (ulonglong)((uint)_DAT_18319acf8 & 0x84222334) * 2);
  uVar2 = (uVar2 | _DAT_18319ac18) + (uVar2 & _DAT_18319ac18);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18319a950 = func_0x000187c87810((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_18319ab28 = _DAT_18319a950 * 0x6886e718dc7d629b;
  _DAT_18319a980 = _DAT_18319a980 ^ _DAT_18319ab28 ^ 0xad1b1aa5acae3c8b;
  _DAT_18319ac10 = (_DAT_18319ac10 * 0x154adc5a855ad023 ^ _DAT_18319a980) + _DAT_18319ab28;
  _DAT_18319a598 = _DAT_18319ac10 ^ _DAT_18319a980;
  _DAT_18319ab38 = 0;
  uVar2 = ((_DAT_18319a608 ^ 0x84222315) + (ulonglong)((uint)_DAT_18319a608 & 0x84222315) * 2) *
          -_DAT_18319aa78;
  uVar2 = (uVar2 | _DAT_18319a648) + (uVar2 & _DAT_18319a648);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18319aaf8 = func_0x000187c87810((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = (_DAT_18319aaf8 << 0x32 | _DAT_18319aaf8 >> 0xe) ^ 0x30;
  _DAT_18319a788 = _DAT_18319a9b8 ^ uVar2 ^ 0x30;
  _DAT_18319aa50 = (_DAT_18319aa50 ^ uVar2) + 0x30 ^ 0x131a48372d610a18;
  _DAT_18319a588 = (_DAT_18319a588 * -0x1616fa9e74f8e91f ^ _DAT_18319aa50) + uVar2;
  _DAT_18319aba8 = _DAT_18319a588 ^ _DAT_18319aa50;
  _DAT_18319a690 = 0x30;
  uVar2 = (~_DAT_18319a5b0 + 0x100) *
          ((_DAT_18319a7a8 ^ 0x842223bb) + (ulonglong)((uint)_DAT_18319a7a8 & 0x842223bb) * 2);
  uVar2 = (uVar2 | _DAT_18319a7e0) + (uVar2 & _DAT_18319a7e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18319a958 = func_0x000187c87810((uVar2 | 0x84222344) + (ulonglong)((uint)uVar2 & 0x84222344))
  ;
  _DAT_18319a820 = (_DAT_18319a820 ^ _DAT_18319a978) + 0x61 ^ 0x2665b7d0c1457c49;
  _DAT_18319aba8 = (_DAT_18319aba8 * 0x3771caa475be596b ^ _DAT_18319a820) + _DAT_18319a978;
  _DAT_18319ace8 = _DAT_18319aba8 ^ _DAT_18319a820;
  _DAT_18319a858 = 0x61;
  uVar2 = (~_DAT_18319a620 + 0x62) *
          ((_DAT_18319a578 ^ 0x842223bb) + (ulonglong)((uint)_DAT_18319a578 & 0x842223bb) * 2);
  uVar2 = (uVar2 | _DAT_18319aa48) + (uVar2 & _DAT_18319aa48);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18319a698 = func_0x000187c87810((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  _DAT_18319a540 = _DAT_18319a540 ^ _DAT_18319a698 ^ 0x9e ^ 0xa77e5009f0a0c11f;
  _DAT_18319a500 = (_DAT_18319a500 * -0x13c9d8dc5cff8553 ^ _DAT_18319a540) + (_DAT_18319a698 ^ 0x9e)
  ;
  _DAT_18319a868 = _DAT_18319a500 ^ _DAT_18319a540;
  _DAT_18319aa60 = 0;
  _DAT_18319a6e0 = func_0x000187c87810(_DAT_18319abf8 ^ 0xffdeff840d0021de);
  uVar2 = _DAT_18319a6e0 & 0xffffffffffffff00;
  _DAT_18319a970 = _DAT_18319a9f0 ^ uVar2 ^ 0x30;
  _DAT_18319abf8 = (_DAT_18319abf8 ^ uVar2) + 0x30 ^ 0x16a3441e4c9bb4b6;
  _DAT_18319a698 = (_DAT_18319a698 * -0x5606198df330c8ab ^ _DAT_18319abf8) + uVar2;
  _DAT_18319aa18 = _DAT_18319a698 ^ _DAT_18319abf8;
  bVar1 = *(byte *)(unaff_RBP + 0x60);
  auVar4._8_8_ = _UNK_180145388;
  auVar4._0_8_ = (ulonglong)bVar1 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_180d8be80,_DAT_1800170c0);
  _DAT_18319a920 = 0x30;
  uVar6 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar6 + _DAT_18319a540;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_18319a8d0 ^ uVar6;
  }
  _DAT_18319aa40 = func_0x000187c87810(SUB161(auVar4 ^ _DAT_180d8be80,5) ^ uVar2);
  _DAT_18319a770 = (ulonglong)bVar1 | 0x30;
  uVar2 = (_DAT_18319aa40 ^ _DAT_18319a770) & 0x7fffffffffffff;
  _DAT_18319a888 = (_DAT_18319a888 ^ uVar2) + _DAT_18319a770 ^ 0x80b1282da949f01c;
  _DAT_18319a7f0 = (_DAT_18319a7f0 * -0x22b169f6cfaf3223 ^ _DAT_18319a888) + uVar2;
  _DAT_18319a960 = _DAT_18319a7f0 ^ _DAT_18319a888;
  *(char *)(in_RAX + -1) = (char)_DAT_18319a770;
  switch(unaff_EDI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c62e81 (image 187c62e81) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187c63375 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187c62e81(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_RBP;
  ulonglong uVar7;
  ulonglong unaff_R14;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar15;
  undefined1 auVar14 [16];
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar4 = uVar1 ^ 0x84222325;
  uVar7 = (unaff_R14 - _DAT_18319a5b0) * ((_DAT_18319a920 ^ uVar4) + (uVar4 & _DAT_18319a920) * 2);
  uVar7 = (uVar7 | _DAT_18319a890) + (uVar7 & _DAT_18319a890);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18319abe8 = func_0x000187c87810((uVar4 ^ unaff_R14 | uVar7) + (uVar7 & (uVar4 ^ unaff_R14)));
  auVar20._8_4_ = 0xffffffff;
  auVar20._0_8_ = 0xffffffffffffffff;
  auVar20._12_4_ = 0xffffffff;
  uVar5 = ~(_DAT_18319abe8 & 0x3fffffffffffffff) & uVar1;
  uVar9 = (uint)(uVar1 >> 0x20);
  auVar12._8_4_ = (int)uVar1;
  auVar12._0_8_ = uVar1;
  auVar12._12_4_ = uVar9;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = unaff_R14;
  uVar15 = (uint)(unaff_R14 >> 0x20);
  auVar11._8_4_ = (int)unaff_R14;
  auVar11._0_8_ = unaff_R14;
  auVar11._12_4_ = uVar15;
  uVar4 = (ulonglong)_DAT_180d8c120;
  uVar3 = (ulonglong)_DAT_180d8c110;
  uVar7 = (ulonglong)_DAT_180d8c110;
  uVar2 = (ulonglong)_DAT_180d8c140;
  *(ulonglong *)(unaff_RBP + 0x60) = (ulonglong)uVar15;
  *(ulonglong *)(unaff_RBP + 0x68) = auVar11._8_8_ >> 0x20;
  uVar10 = SUB164(auVar12 & auVar11,0);
  uVar19 = SUB168(auVar12 & auVar11,0);
  uVar8 = SUB164(auVar12 ^ auVar11,0);
  uVar16 = SUB168(auVar12 ^ auVar11,0);
  uVar17 = SUB164(auVar12 ^ auVar20,0);
  uVar13 = SUB164(auVar14 ^ auVar20,0);
  uVar18 = SUB164(auVar12 | auVar11,0);
  _DAT_18319a870 =
       (((ulonglong)uVar13 * (ulonglong)_DAT_180d8c1b0 +
         ((ulonglong)_DAT_180d8c1c0 * (ulonglong)uVar13 +
          (SUB168(auVar14 ^ auVar20,0) >> 0x20) * (ulonglong)_DAT_180d8c1b0 << 0x20) +
        (ulonglong)uVar17 * (ulonglong)_DAT_180d8c190 +
        ((ulonglong)_DAT_180d8c1a0 * (ulonglong)uVar17 +
         (SUB168(auVar12 ^ auVar20,0) >> 0x20) * (ulonglong)_DAT_180d8c190 << 0x20) +
        (ulonglong)_DAT_180d8c170 * (ulonglong)uVar8 +
        ((ulonglong)_DAT_180d8c180 * (ulonglong)uVar8 + (uVar16 >> 0x20) * (ulonglong)_DAT_180d8c170
        << 0x20) +
        (ulonglong)_DAT_180d8c150 * (ulonglong)uVar10 +
        ((ulonglong)_DAT_180d8c160 * (ulonglong)uVar10 +
         (uVar19 >> 0x20) * (ulonglong)_DAT_180d8c150 << 0x20) +
        (uVar2 * (unaff_R14 & 0xffffffff) + (ulonglong)_DAT_180d8c130 * (ulonglong)uVar15 << 0x20) +
        (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180d8c130 +
        (uVar4 * (uVar1 & 0xffffffff) + uVar7 * uVar9 << 0x20) + (uVar1 & 0xffffffff) * uVar3) -
       ((ulonglong)uVar8 * (_DAT_180d8c250 & 0xffffffff) +
        ((ulonglong)_DAT_180d8c260 * (ulonglong)uVar8 +
         (uVar16 >> 0x20) * (_DAT_180d8c250 & 0xffffffff) << 0x20) +
        (ulonglong)uVar18 * (ulonglong)_DAT_180d8c230 +
        ((ulonglong)_DAT_180d8c240 * (ulonglong)uVar18 +
         (SUB168(auVar12 | auVar11,0) >> 0x20) * (ulonglong)_DAT_180d8c230 << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_180d8c210 +
       ((ulonglong)_DAT_180d8c220 * (ulonglong)uVar10 + (uVar19 >> 0x20) * (ulonglong)_DAT_180d8c210
       << 0x20) +
       (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180d8c200 +
       ((ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_180d8c200 +
        (ulonglong)_DAT_180d8c1f0 * (unaff_R14 & 0xffffffff) << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_180d8c200 +
       ((ulonglong)uVar9 * (ulonglong)_DAT_180d8c200 +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_180d8c1f0 << 0x20))) + 0x40fa05c8311a248e;
  _DAT_18319aa90 = _DAT_18319a870 ^ uVar5;
  _DAT_18319a908 = (_DAT_18319a908 ^ uVar5) + _DAT_18319a870 ^ 0x80f2a338c15b2e58;
  _DAT_18319a968 = (_DAT_18319a968 * 0xf91c0b943dbf4f1 ^ _DAT_18319a908) + uVar5;
  _DAT_18319a9e0 = _DAT_18319a968 ^ _DAT_18319a908;
  lVar6 = unaff_RBP + -0x30;
  FUN_18414b520(lVar6);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar6 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0xb0) + 0x70))
            (*(longlong **)(unaff_RBP + 0xb0),*(undefined8 *)(unaff_RBP + 0x38),lVar6);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7c70867 (image 187c70867) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c70867(ulonglong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong in_RAX;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong unaff_RBP;
  ulonglong uVar8;
  ulonglong uVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar13;
  uint unaff_XMM10_Da;
  uint uVar14;
  uint uVar15;
  
  *(bool *)(unaff_RBP + 0x40) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar8 = (in_RAX ^ _DAT_180d8b750) + param_1 + 0x22ec87a9;
  uVar12 = (param_1 ^ _UNK_180d8b758) + in_RAX + 0x7ff829a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ in_RAX ^ _DAT_180d8b750;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ param_1 ^ _UNK_180d8b758;
  _DAT_18319a898 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - (in_RAX + 0x7ff829a0) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (param_1 + 0x22ec87a9));
  _DAT_18319ac18 =
       (_DAT_18319ac18 ^ _DAT_18319a898 & 0x7fffffffffffffff) + 0xd9368d2c ^ 0x577cd7ff068b4389;
  _DAT_18319a540 =
       (_DAT_18319a540 * -0x5182d3c07074bed9 ^ _DAT_18319ac18) +
       (_DAT_18319a898 & 0x7fffffffffffffff);
  _DAT_18319ac48 = _DAT_18319a540 ^ _DAT_18319ac18;
  _DAT_18319a6b8 = 0xd9368d2c;
  _DAT_18319a980 = func_0x000187c87810(_DAT_18319a888 ^ 0xfff3ffe358ffce3b);
  uVar8 = _DAT_18319a980 - (_DAT_18319a980 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar12 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
           _DAT_18319a980;
  uVar8 = uVar12 >> 1 | uVar12;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar12) * 0x3bd7eb4cc8fc78b9;
  _DAT_18319ac60 = (_DAT_18319ac60 ^ uVar8) - 0x6b512f5c ^ 0xcc668bc698704005;
  _DAT_18319a6e0 = (_DAT_18319a6e0 * -0x2713105885664681 ^ _DAT_18319ac60) + uVar8;
  _DAT_18319a668 = _DAT_18319a6e0 ^ _DAT_18319ac60;
  _DAT_18319a9b8 = _DAT_18319a5b0 ^ 0xffffffff94aed0a4;
  _DAT_18319a6a0 = 0x94aed0a4;
  uVar8 = (_DAT_18319ab78 ^ _DAT_180d8b760) + _DAT_18319aa28 + 0x842224e5;
  uVar12 = (_DAT_18319aa28 ^ _UNK_180d8b768) + _DAT_18319ab78 + 0x6b512f5c;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319ab78 ^ _DAT_180d8b760;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319aa28 ^ _UNK_180d8b768;
  _DAT_18319a570 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319ab78 + 0x6b512f5c) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319aa28 + 0x842224e5));
  uVar8 = _DAT_18319a570 ^ 0x7c0;
  _DAT_18319ac18 = _DAT_18319a688 ^ uVar8 ^ 0x6b51371c;
  _DAT_18319a5d0 = (_DAT_18319a5d0 ^ uVar8) + 0x6b51371c ^ 0x13f55e77f956c874;
  _DAT_18319a6d8 = (_DAT_18319a6d8 * -0x2b1ce1b9bed55f2f ^ _DAT_18319a5d0) + uVar8;
  _DAT_18319abc0 = _DAT_18319a6d8 ^ _DAT_18319a5d0;
  _DAT_18319ab50 = 0x6b51371c;
  uVar8 = (~_DAT_18319aa68 + 0x94aed0a5) *
          ((_DAT_18319a588 ^ 0xef731439) + (ulonglong)((uint)_DAT_18319a588 & 0xef731439) * 2);
  uVar8 = (uVar8 | _DAT_18319abf0) + (uVar8 & _DAT_18319abf0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18319a838 = func_0x000187c87810((uVar8 | 0x7bddc49d) + (ulonglong)((uint)uVar8 & 0x7bddc49d))
  ;
  uVar8 = _DAT_18319a838 * -0x162679856dc22b71;
  _DAT_18319a540 = _DAT_18319acf8 ^ uVar8 ^ 0x1000007c0;
  _DAT_18319acc0 = (_DAT_18319acc0 ^ uVar8) + 0x1000007c0 ^ 0xf50907540d9e41b3;
  _DAT_18319aa60 = (_DAT_18319aa60 * -0x3be059c01de58521 ^ _DAT_18319acc0) + uVar8;
  _DAT_18319a698 = _DAT_18319aa60 ^ _DAT_18319acc0;
  _DAT_18319abb8 = 0x7c0;
  uVar8 = (~_DAT_18319a928 + 0x1fed36a1) *
          ((_DAT_18319aa78 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319aa78 & 0x84222325) * 2);
  uVar8 = (uVar8 | _DAT_18319a748) + (uVar8 & _DAT_18319a748);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18319a6e8 = func_0x000187c87810((uVar8 | 0x9bcf1585) + (ulonglong)((uint)uVar8 & 0x9bcf1585))
  ;
  uVar8 = _DAT_18319a6e8 ^ 0x1fed36a0;
  uVar12 = uVar8 >> 1 | uVar8;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar8;
  _DAT_18319a6d0 = (_DAT_18319a6d0 ^ uVar8) - 0x1fed36a0 ^ 0xfcb87acb65b51884;
  _DAT_18319a658 = (_DAT_18319a658 * 0x55e064f86b5ac8c1 ^ _DAT_18319a6d0) + uVar8;
  _DAT_18319a840 = _DAT_18319a658 ^ _DAT_18319a6d0;
  _DAT_18319a580 = 0xe012c960;
  uVar8 = (_DAT_18319a6d0 ^ _DAT_180d8b770) + _DAT_18319a8d8 + 0x9bcf1d45;
  uVar12 = (_DAT_18319a8d8 ^ _UNK_180d8b778) + _DAT_18319a6d0 + 0xe012c960;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319a6d0 ^ _DAT_180d8b770;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319a8d8 ^ _UNK_180d8b778;
  _DAT_18319ab10 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319a6d0 + 0xe012c960) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319a8d8 + 0x9bcf1d45));
  uVar8 = _DAT_18319ab10 & 0xfffffffffffffffc;
  _DAT_18319ace8 = _DAT_18319a5f8 ^ uVar8 ^ 0x1000007c0;
  _DAT_18319ac20 = (_DAT_18319ac20 ^ uVar8) + 0x1000007c0 ^ 0x481a5fe687b790c9;
  _DAT_18319abb8 = (_DAT_18319abb8 * -0xc76d66a0d2582e1 ^ _DAT_18319ac20) + uVar8;
  _DAT_18319abe8 = _DAT_18319abb8 ^ _DAT_18319ac20;
  _DAT_18319ab70 = _DAT_18319a998 ^ 0x1000007c0;
  _DAT_18319a7f8 = 0x7c0;
  uVar8 = (_DAT_18319a838 ^ _DAT_180d8b780) + _DAT_18319a850 + 0x84222325;
  uVar12 = (_DAT_18319a850 ^ _UNK_180d8b788) + _DAT_18319a838 + 0xec87aee0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319a838 ^ _DAT_180d8b780;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319a850 ^ _UNK_180d8b788;
  _DAT_18319a6c8 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319a838 + 0xec87aee0) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319a850 + 0x84222325));
  _DAT_18319aa30 = (_DAT_18319aa30 ^ _DAT_18319a6c8) - 0xec87aee0 ^ 0x70bde97e1c3240a1;
  _DAT_18319ab28 = (_DAT_18319ab28 * 0x2484eb125d660819 ^ _DAT_18319aa30) + _DAT_18319a6c8;
  _DAT_18319a5f8 = _DAT_18319ab28 ^ _DAT_18319aa30;
  _DAT_18319ac88 = 0x13785120;
  uVar8 = (_DAT_18319ac28 ^ _DAT_180d8b790) + _DAT_18319aa58 + 0x842224e5;
  uVar12 = (_DAT_18319aa58 ^ _UNK_180d8b798) + _DAT_18319ac28 + 0xec87aee0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319ac28 ^ _DAT_180d8b790;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319aa58 ^ _UNK_180d8b798;
  _DAT_18319a600 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319ac28 + 0xec87aee0) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319aa58 + 0x842224e5));
  uVar8 = (_DAT_18319a600 << 5 | _DAT_18319a600 >> 0x3b) << 0x1a |
          (_DAT_18319a600 & 0x7ffffffffffffff) >> 0x21;
  _DAT_18319a708 = _DAT_18319a928 ^ uVar8 ^ 0xec87b6a0;
  _DAT_18319acd0 = (_DAT_18319acd0 ^ uVar8) + 0xec87b6a0 ^ 0xa0b001d0430156b0;
  _DAT_18319aca8 = (_DAT_18319aca8 * -0x53d6179ed09d8341 ^ _DAT_18319acd0) + uVar8;
  _DAT_18319ab90 = _DAT_18319aca8 ^ _DAT_18319acd0;
  _DAT_18319a778 = 0xec87b6a0;
  uVar8 = (_DAT_18319ab28 ^ _DAT_180d8b7a0) + _DAT_18319a5a8 + 0x7b3dd4d3;
  uVar12 = (_DAT_18319a5a8 ^ _UNK_180d8b7a8) + _DAT_18319ab28 + 0xd9368d2c;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319ab28 ^ _DAT_180d8b7a0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319a5a8 ^ _UNK_180d8b7a8;
  _DAT_18319a910 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319ab28 + 0xd9368d2c) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319a5a8 + 0x7b3dd4d3));
  uVar8 = (ulonglong)(~(uint)((_DAT_18319a910 ^ 0x870761e40000000) >> 0x1c) & 0xff1ff7f6) ^
          0xff1ff7f6;
  _DAT_18319ab60 = _DAT_18319aaf8 ^ uVar8 ^ 0x1d8568522;
  _DAT_18319abb0 = (_DAT_18319abb0 ^ uVar8) + 0x1d8568522 ^ 0x196dc3de091d82d4;
  _DAT_18319ac60 = (_DAT_18319ac60 * 0x47833ce7539f38c7 ^ _DAT_18319abb0) + uVar8;
  _DAT_18319ac30 = _DAT_18319ac60 ^ _DAT_18319abb0;
  _DAT_18319a9f0 = 0xd8568522;
  uVar8 = (~_DAT_18319a978 + 0xd9368d2d) *
          ((_DAT_18319a8f8 ^ 0x7b3dd4d3) + (ulonglong)((uint)_DAT_18319a8f8 & 0x7b3dd4d3) * 2);
  uVar8 = (uVar8 | _DAT_18319acd0) + (uVar8 & _DAT_18319acd0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18319a6d0 = func_0x000187c87810((uVar8 | 0xa20b59ff) + (ulonglong)((uint)uVar8 & 0xa20b59ff))
  ;
  uVar8 = (_DAT_18319a6d0 ^ 0xff180000) & 0xfffffffffff80000;
  _DAT_18319a730 = (_DAT_18319a730 ^ uVar8) + 0x26297ada ^ 0xd11a264113aa9692;
  _DAT_18319ab28 = (_DAT_18319ab28 * 0x5dc0da6a9d12ad71 ^ _DAT_18319a730) + uVar8;
  _DAT_18319a800 = _DAT_18319ab28 ^ _DAT_18319a730;
  _DAT_18319ab50 = _DAT_18319abd8 ^ 0x26297ada;
  _DAT_18319aba8 = 0x26297ada;
  uVar8 = ((_DAT_18319a648 ^ 0x842224e5) + (ulonglong)((uint)_DAT_18319a648 & 0x842224e5) * 2) *
          -_DAT_18319a9e8;
  uVar8 = (uVar8 | _DAT_18319ab30) + (uVar8 & _DAT_18319ab30);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18319ab98 = func_0x000187c87810((uVar8 | 0x842224e5) + (ulonglong)((uint)uVar8 & 0x842224e5))
  ;
  _DAT_18319ac20 = _DAT_18319ab70 ^ _DAT_18319ab98 ^ 0x7c0;
  _DAT_18319a6e8 = (_DAT_18319a6e8 ^ _DAT_18319ab98) + 0x7c0 ^ 0x65be5361618f4db3;
  _DAT_18319aa78 = (_DAT_18319aa78 * -0x168b9aa3a256ac57 ^ _DAT_18319a6e8) + _DAT_18319ab98;
  _DAT_18319abf8 = _DAT_18319aa78 ^ _DAT_18319a6e8;
  _DAT_18319a928 = 0x7c0;
  uVar8 = (~_DAT_18319a948 + 0x100000000) *
          ((_DAT_18319ab50 ^ 0x7b3dd4d3) + (ulonglong)((uint)_DAT_18319ab50 & 0x7b3dd4d3) * 2);
  uVar8 = (uVar8 | _DAT_18319ac90) + (uVar8 & _DAT_18319ac90);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18319abe8 = func_0x000187c87810((uVar8 | 0x84c22b2c) + (ulonglong)((uint)uVar8 & 0x84c22b2c))
  ;
  uVar8 = (_DAT_18319abe8 & 0xfffffff) << 0x23 | _DAT_18319abe8 >> 0x1d;
  _DAT_18319a9b0 = (_DAT_18319a9b0 ^ uVar8) + 0xe00809 ^ 0x21ce27dd49adb7c4;
  _DAT_18319aa60 = (_DAT_18319aa60 * 0xaf076ecbe95b5c1 ^ _DAT_18319a9b0) + uVar8;
  _DAT_18319ab10 = _DAT_18319aa60 ^ _DAT_18319a9b0;
  _DAT_18319ac88 = 0xe00809;
  uVar8 = (_DAT_18319a6f0 ^ _DAT_180d8b7b0) + _DAT_18319ab38 + 0x7b3dd4d3;
  uVar12 = (_DAT_18319ab38 ^ _UNK_180d8b7b8) + _DAT_18319a6f0 + 0xe00809;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319a6f0 ^ _DAT_180d8b7b0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319ab38 ^ _UNK_180d8b7b8;
  _DAT_18319a9c8 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319a6f0 + 0xe00809) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319ab38 + 0x7b3dd4d3));
  uVar8 = (_DAT_18319a9c8 ^ 0xffffffff) & 0x3ffffffffffffff;
  uVar12 = uVar8 - (((_DAT_18319a9c8 ^ 0xffffffff) & 0x7fffffffffffffff) >> 1 & 0x155555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar4 + (uint)bVar4 ^ uVar8;
  _DAT_18319ac40 = _DAT_18319ac40 ^ uVar8 ^ 0x462af0d06fe95f13;
  _DAT_18319aa00 = (_DAT_18319aa00 * -0x41e9d6a1ec49e91d ^ _DAT_18319ac40) + uVar8;
  _DAT_18319ac20 = _DAT_18319aa00 ^ _DAT_18319ac40;
  _DAT_18319ac80 = 0;
  uVar8 = (_DAT_18319a9b0 ^ 0x842224e5) + _DAT_18319a9c8 + 0x842224e5;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319a9b0 ^ 0x842224e5;
  uVar12 = ((_DAT_18319a9c8 + _DAT_18319a9b0) * 0x2000 | _DAT_18319a9c8 + _DAT_18319a9b0 >> 0x33) ^
           _DAT_18319a9c8;
  _DAT_18319acb0 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_18319a9b0 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319a9c8 + 0x842224e5));
  uVar8 = (_DAT_18319acb0 << 0x17 | _DAT_18319acb0 >> 0x29) << 0x20 |
          (_DAT_18319acb0 & 0x1ffffffffff) >> 9;
  _DAT_18319ab50 = _DAT_18319a638 ^ uVar8 ^ 0x7c0;
  _DAT_18319a5a0 = (_DAT_18319a5a0 ^ uVar8) + 0x7c0 ^ 0xbcf25f177a212c1;
  _DAT_18319a8d8 = (_DAT_18319a8d8 * -0x4fbea3d48490eb4f ^ _DAT_18319a5a0) + uVar8;
  _DAT_18319ab18 = _DAT_18319a8d8 ^ _DAT_18319a5a0;
  _DAT_18319acf8 = 0x7c0;
  _DAT_18319a608 = func_0x000187c87810(_DAT_18319a590 + 0xffdeff7c24ffddffU ^ 0x84);
  _DAT_18319a780 = _DAT_18319a780 ^ _DAT_18319a608 ^ 0xc502063391098fd0;
  _DAT_18319a700 = (_DAT_18319a700 * 0x9ac933a895f491f ^ _DAT_18319a780) + _DAT_18319a608;
  _DAT_18319a770 = _DAT_18319a700 ^ _DAT_18319a780;
  _DAT_18319a550 = 0;
  uVar8 = (_DAT_18319a948 ^ 0x842224e5) + _DAT_18319a698 + 0x842224e5;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319a948 ^ 0x842224e5;
  uVar12 = ((_DAT_18319a698 + _DAT_18319a948) * 0x2000 | _DAT_18319a698 + _DAT_18319a948 >> 0x33) ^
           _DAT_18319a698;
  _DAT_18319abe0 =
       func_0x000187c87810((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_18319a948 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319a698 + 0x842224e5));
  uVar8 = _DAT_18319abe0 & 0xffffffffffc00000;
  uVar12 = uVar8 >> 1 | uVar8;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uVar8;
  _DAT_18319a7a0 = _DAT_18319acf8 ^ uVar8 ^ 0x7c0;
  _DAT_18319a740 = (_DAT_18319a740 ^ uVar8) + 0x7c0 ^ 0x7ab73564d04063da;
  _DAT_18319ab28 = (_DAT_18319ab28 * -0x1b891c834d7651b ^ _DAT_18319a740) + uVar8;
  _DAT_18319ab78 = _DAT_18319ab28 ^ _DAT_18319a740;
  _DAT_18319a760 = 0x7c0;
  uVar6 = *(uint *)(unaff_RBP + 0x20);
  uVar8 = (ulonglong)uVar6 ^ 0x84222325;
  uVar8 = (~_DAT_18319a5a0 + 0x7c1) *
          ((uVar8 ^ _DAT_18319aa78) + (ulonglong)((uint)_DAT_18319aa78 & (uint)uVar8) * 2);
  uVar8 = (uVar8 | _DAT_18319a950) + (uVar8 & _DAT_18319a950);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uVar12 = (ulonglong)uVar6 ^ 0x842224e5;
  _DAT_18319a9a0 = func_0x000187c87810((uVar12 | uVar8) + (ulonglong)((uint)uVar12 & (uint)uVar8));
  uVar6 = uVar6 & 0x7c0;
  uVar8 = (ulonglong)uVar6;
  _DAT_18319ace8 = (_DAT_18319ace8 ^ _DAT_18319a9a0) + uVar8 ^ 0x606e8ebed74353a8;
  _DAT_18319aa20 = (_DAT_18319aa20 * 0xb94b4d0496a5773 ^ _DAT_18319ace8) + _DAT_18319a9a0;
  _DAT_18319a6b8 = _DAT_18319aa20 ^ _DAT_18319ace8;
  plVar2 = *(longlong **)(unaff_RBP + 0xb0);
  uVar3 = *(undefined8 *)(unaff_RBP + 0x60);
  _DAT_18319a9b8 = uVar8;
  lVar5 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar3,0);
  *(int *)(unaff_RBP + 0x80) = (int)*(char *)(lVar5 + *(int *)(unaff_RBP + 0x88));
  (**(code **)(*plVar2 + 0x6f8))(plVar2,uVar3,lVar5,2);
  uVar7 = *(uint *)(unaff_RBP + 0x80);
  uVar12 = (_DAT_18319a5e8 ^ _DAT_180d8b7c0) + _DAT_18319a778 + 0xeb0b4b1a;
  uVar13 = (_DAT_18319a778 ^ _UNK_180d8b7c8) + _DAT_18319a5e8 + 0x586e0150;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319a5e8 ^ _DAT_180d8b7c0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18319a778 ^ _UNK_180d8b7c8;
  _DAT_18319aca8 =
       func_0x000187c87810((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18319a5e8 + 0x586e0150) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319a778 + 0xeb0b4b1a));
  _DAT_18319a560 = (_DAT_18319a560 ^ _DAT_18319aca8 ^ 0x7f6f697f) + 0x7f6f697f ^ 0x8927ad229535c146;
  _DAT_18319abf0 =
       (_DAT_18319abf0 * 0x6dbee0082bc0a38b ^ _DAT_18319a560) + (_DAT_18319aca8 ^ 0x7f6f697f);
  _DAT_18319a9b0 = _DAT_18319abf0 ^ _DAT_18319a560;
  _DAT_18319a6e0 = 0x7f6f697f;
  uVar12 = (_DAT_18319a9a0 ^ _DAT_180d8b7d0) + _DAT_18319ab18 + 0x7559e3f2;
  uVar13 = (_DAT_18319ab18 ^ _UNK_180d8b7d8) + _DAT_18319a9a0 + 0x7d143a2e;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319a9a0 ^ _DAT_180d8b7d0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18319ab18 ^ _UNK_180d8b7d8;
  _DAT_18319a8e0 =
       func_0x000187c87810((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18319a9a0 + 0x7d143a2e) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319ab18 + 0x7559e3f2));
  uVar12 = (ulonglong)
           (~((uint)(_DAT_18319a8e0 << 6) | (uint)((ulonglong)_DAT_18319a8e0 >> 0x3a)) & 0xf17bc0d7)
  ;
  _DAT_18319a668 = (_DAT_18319a668 ^ uVar12) + 0x8c6ffaf9 ^ 0xe4e4dbee900ba490;
  _DAT_18319a7f8 = (_DAT_18319a7f8 * -0x11c376e31545625d ^ _DAT_18319a668) + uVar12;
  _DAT_18319acd0 = _DAT_18319a7f8 ^ _DAT_18319a668;
  _DAT_18319ac78 = 0x8c6ffaf9;
  _DAT_18319a740 = func_0x000187c87810(_DAT_18319a938 + 0xffbcff8cf80004ff ^ 0xcd);
  _DAT_18319a9b0 =
       (_DAT_18319a9b0 ^ _DAT_18319a740 & 0x7fffffffffffffff) - 0x732f662d ^ 0xb9676c93de7039bf;
  _DAT_18319a6b8 =
       (_DAT_18319a6b8 * 0x2ddabaac2fb42887 ^ _DAT_18319a9b0) +
       (_DAT_18319a740 & 0x7fffffffffffffff);
  _DAT_18319a528 = _DAT_18319a6b8 ^ _DAT_18319a9b0;
  _DAT_18319a5e0 = 0x8cd099d3;
  uVar12 = (~_DAT_18319a7c0 + 0x732f662e) *
           ((_DAT_18319acc8 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18319acc8 & 0x8422231a) * 2);
  uVar12 = (uVar12 | 0x8cd099d3) + (uVar12 & 0x8cd099d3);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319a9a0 =
       func_0x000187c87810((uVar12 | 0xf70d4537) + (ulonglong)((uint)uVar12 & 0xf70d4537));
  uVar12 = _DAT_18319a9a0 ^ 0x1c58aa2513;
  uVar13 = uVar12 >> 1 | uVar12;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           uVar12 ^ 0x3f;
  _DAT_18319aa50 = _DAT_18319aa20 ^ uVar12 ^ 0x732f666c;
  _DAT_18319a7f8 = (_DAT_18319a7f8 ^ uVar12) + 0x732f666c ^ 0x732806c160c653d7;
  _DAT_18319a640 = (_DAT_18319a640 * -0x3ba92a37ccd37839 ^ _DAT_18319a7f8) + uVar12;
  _DAT_18319a688 = _DAT_18319a640 ^ _DAT_18319a7f8;
  _DAT_18319aa60 = 0x732f666c;
  _DAT_18319a7f8 = func_0x000187c87810(_DAT_18319ac38 ^ 0xffcc00378a003a53);
  uVar12 = (_DAT_18319a7f8 ^ 0xffffffff) << 0x31 | (_DAT_18319a7f8 ^ 0xffffffff) >> 0xf;
  _DAT_18319acc8 = _DAT_18319ab78 ^ uVar12 ^ 0x10000003f;
  _DAT_18319a840 = (_DAT_18319a840 ^ uVar12) + 0x10000003f ^ 0xa06becbb52b950c4;
  _DAT_18319a580 = (_DAT_18319a580 * -0x26eff86fc4be89e9 ^ _DAT_18319a840) + uVar12;
  _DAT_18319ac20 = _DAT_18319a580 ^ _DAT_18319a840;
  _DAT_18319a7d8 = 0x3f;
  _DAT_18319a810 = func_0x000187c87810(_DAT_18319a640 ^ 0xffe20003ec002242);
  _DAT_18319a618 = (_DAT_18319a618 ^ _DAT_18319a810) - 0x8101c5d9 ^ 0x4e9ffbe214e84d29;
  _DAT_18319a918 = (_DAT_18319a918 * -0x24c7a53f62102cbf ^ _DAT_18319a618) + _DAT_18319a810;
  _DAT_18319acf0 = _DAT_18319a918 ^ _DAT_18319a618;
  _DAT_18319a888 = 0x7efe3a27;
  uVar12 = (_DAT_18319ab00 ^ _DAT_180d8b7e0) + _DAT_18319a7f8 + 0x8422231a;
  uVar13 = (_DAT_18319a7f8 ^ _UNK_180d8b7e8) + _DAT_18319ab00 + 0x8101c5d9;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319ab00 ^ _DAT_180d8b7e0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18319a7f8 ^ _UNK_180d8b7e8;
  _DAT_18319a680 =
       func_0x000187c87810((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18319ab00 + 0x8101c5d9) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319a7f8 + 0x8422231a));
  uVar12 = _DAT_18319a680 << 2 | _DAT_18319a680 >> 0x3e;
  _DAT_18319aaa8 = _DAT_18319a760 ^ uVar12 ^ 0x8101c618;
  _DAT_18319ab20 = (_DAT_18319ab20 ^ uVar12) + 0x8101c618 ^ 0x13bbd3bd8f4743b4;
  _DAT_18319acb8 = (_DAT_18319acb8 * 0x292d3350a8ad7ecd ^ _DAT_18319ab20) + uVar12;
  _DAT_18319acb0 = _DAT_18319acb8 ^ _DAT_18319ab20;
  _DAT_18319a760 = 0x8101c618;
  uVar12 = (_DAT_18319aa78 ^ _DAT_180d8b7f0) + _DAT_18319aa38 + 0x84222325;
  uVar13 = (_DAT_18319aa38 ^ _UNK_180d8b7f8) + _DAT_18319aa78 + 0x78975e4d;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319aa78 ^ _DAT_180d8b7f0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18319aa38 ^ _UNK_180d8b7f8;
  _DAT_18319a9b0 =
       func_0x000187c87810((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18319aa78 + 0x78975e4d) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319aa38 + 0x84222325));
  _DAT_18319a7a8 = (_DAT_18319a7a8 ^ _DAT_18319a9b0) - 0x78975e4d ^ 0xfb639eb9887e48fa;
  _DAT_18319a9b8 = (_DAT_18319a9b8 * 0x6f8a8b1eb88041c5 ^ _DAT_18319a7a8) + _DAT_18319a9b0;
  _DAT_18319acb8 = _DAT_18319a9b8 ^ _DAT_18319a7a8;
  _DAT_18319a580 = 0x8768a1b3;
  _DAT_18319ac90 = func_0x000187c87810(_DAT_18319a5c0 + 0xff82ff7450ff92ffU ^ 0xbf);
  uVar12 = (_DAT_18319ac90 ^ 0x1dad4034f3) & 0x7fffffffffffffff;
  _DAT_18319a620 = _DAT_18319aa30 ^ uVar12 ^ 0x78975e8c;
  _DAT_18319a820 = (_DAT_18319a820 ^ uVar12) + 0x78975e8c ^ 0x40465bf367df4a65;
  _DAT_18319a7b0 = (_DAT_18319a7b0 * 0x4bfd4eecefae9881 ^ _DAT_18319a820) + uVar12;
  _DAT_18319a638 = _DAT_18319a7b0 ^ _DAT_18319a820;
  _DAT_18319a540 = 0x78975e8c;
  uVar12 = (_DAT_18319aa50 ^ _DAT_180d8b800) + _DAT_18319aaa0 + 0xfcb57da9;
  uVar13 = (_DAT_18319aaa0 ^ _UNK_180d8b808) + _DAT_18319aa50 + 0x8768a1b3;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319aa50 ^ _DAT_180d8b800;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18319aaa0 ^ _UNK_180d8b808;
  _DAT_18319a770 =
       func_0x000187c87810((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18319aa50 + 0x8768a1b3) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319aaa0 + 0xfcb57da9));
  uVar12 = _DAT_18319a770 ^ 0x3fc91c85c12d27e4;
  _DAT_18319a9c0 = _DAT_18319a698 ^ uVar12 ^ 0x10000003f;
  _DAT_18319ac10 = (_DAT_18319ac10 ^ uVar12) + 0x10000003f ^ 0xc5a02d54dee44e6d;
  _DAT_18319a6f8 = (_DAT_18319a6f8 * -0x4060e730713b7441 ^ _DAT_18319ac10) + uVar12;
  _DAT_18319a990 = _DAT_18319a6f8 ^ _DAT_18319ac10;
  _DAT_18319a938 = 0x3f;
  uVar12 = (~_DAT_18319a700 + 0x8c6ffafa) *
           ((_DAT_18319a520 ^ 0xfb4d4a5a) + (ulonglong)((uint)_DAT_18319a520 & 0xfb4d4a5a) * 2);
  uVar12 = (uVar12 | _DAT_18319a558) + (uVar12 & _DAT_18319a558);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319a7d0 =
       func_0x000187c87810((uVar12 | 0x7722b0a3) + (ulonglong)((uint)uVar12 & 0x7722b0a3));
  uVar12 = (ulonglong)(~(uint)_DAT_18319a7d0 & 0x7f6f697f);
  _DAT_18319aa40 = (_DAT_18319aa40 ^ uVar12) + 0xf3009386 ^ 0xe8329b57460f8982;
  _DAT_18319aa48 = (_DAT_18319aa48 * 0x7066e9f4510de437 ^ _DAT_18319aa40) + uVar12;
  _DAT_18319a8c8 = _DAT_18319aa48 ^ _DAT_18319aa40;
  _DAT_18319a5c0 = 0xf3009386;
  uVar12 = (~_DAT_18319a8d0 + 0x18ded0f3) *
           ((_DAT_18319a960 ^ 0x7722b0a3) + (ulonglong)((uint)_DAT_18319a960 & 0x7722b0a3) * 2);
  uVar12 = (uVar12 | _DAT_18319a780) + (uVar12 & _DAT_18319a780);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319a670 =
       func_0x000187c87810((uVar12 | 0x6ffc6051) + (ulonglong)((uint)uVar12 & 0x6ffc6051));
  uVar12 = _DAT_18319a670 & 0xffffffffffe00000;
  _DAT_18319a840 = _DAT_18319a638 ^ uVar12 ^ 0x10bdf6478;
  _DAT_18319acd8 = (_DAT_18319ab38 ^ uVar12) + 0x10bdf6478;
  _DAT_18319ab38 = _DAT_18319acd8 ^ 0x546d1c27c2017fd;
  _DAT_18319a668 = (_DAT_18319a668 * -0x2ba014746a54bd3b ^ _DAT_18319ab38) + uVar12;
  _DAT_18319a7e0 = _DAT_18319a668 ^ _DAT_18319ab38;
  _DAT_18319acd8 = _DAT_18319acd8 ^ 0x546d1c377ff7385;
  _DAT_18319a788 = 0xbdf6478;
  uVar12 = (~_DAT_18319ac88 + 0xbdf6479) *
           ((_DAT_18319a6c0 ^ 0x8ffd475d) + (ulonglong)((uint)_DAT_18319a6c0 & 0x8ffd475d) * 2);
  uVar12 = (uVar12 | _DAT_18319a800) + (uVar12 & _DAT_18319a800);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319abf0 =
       func_0x000187c87810((uVar12 | 0x84222325) + (ulonglong)((uint)uVar12 & 0x84222325));
  _DAT_18319aa98 = (ulonglong)(~(uint)_DAT_18319abf0 & 0xbdf6478);
  uVar12 = _DAT_18319aa98 - (~(uint)_DAT_18319abf0 >> 1 & 0x5451014);
  uVar12 = (uVar12 & 0x3333333333333330) + (uVar12 >> 2 & 0x3333333333333333);
  _DAT_18319aa98 =
       ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18319aa98;
  _DAT_18319a5f8 = _DAT_18319a5f8 ^ _DAT_18319aa98 ^ 0x5b8bea0c28a017b7;
  _DAT_18319a8d8 = (_DAT_18319a8d8 * -0x11b5a3a09fe88e89 ^ _DAT_18319a5f8) + _DAT_18319aa98;
  _DAT_18319a7d8 = _DAT_18319a8d8 ^ _DAT_18319a5f8;
  _DAT_18319aa10 = 0;
  uVar12 = ((_DAT_18319a990 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18319a990 & 0x8422231a) * 2) *
           -_DAT_18319a7b0;
  uVar12 = (uVar12 | _DAT_18319a650) + (uVar12 & _DAT_18319a650);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319a870 =
       func_0x000187c87810((uVar12 | 0x8422231a) + (ulonglong)((uint)uVar12 & 0x8422231a));
  _DAT_18319a820 = _DAT_18319a6f8 ^ _DAT_18319a870 ^ 0x3f;
  _DAT_18319a5b0 = (_DAT_18319a5b0 ^ _DAT_18319a870) + 0x3f ^ 0xaa66fdf462e8097e;
  _DAT_18319aa48 = (_DAT_18319aa48 * 0x5be4ba0adb9ef7bf ^ _DAT_18319a5b0) + _DAT_18319a870;
  _DAT_18319ac60 = _DAT_18319aa48 ^ _DAT_18319a5b0;
  _DAT_18319a768 = 0x3f;
  uVar12 = (~_DAT_18319aa90 + 0x100000000) *
           ((_DAT_18319aa18 ^ 0xfb4d4a5a) + (ulonglong)((uint)_DAT_18319aa18 & 0xfb4d4a5a) * 2);
  uVar12 = (uVar12 | _DAT_18319a880) + (uVar12 & _DAT_18319a880);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319a558 = func_0x000187c87810((uVar12 | 0x4b2b5a5) + (ulonglong)((uint)uVar12 & 0x4b2b5a5))
  ;
  auVar11 = _DAT_1800170c0;
  uVar12 = (_DAT_18319a558 ^ 0xffffff00) & 0x7ffffffff00;
  _DAT_18319ac68 = (_DAT_18319ac68 ^ uVar12) + 0x80909680 ^ 0x616b689b877ee6c0;
  _DAT_18319aa20 = (_DAT_18319aa20 * 0x36045b451fe54685 ^ _DAT_18319ac68) + uVar12;
  _DAT_18319a928 = _DAT_18319aa20 ^ _DAT_18319ac68;
  _DAT_18319acd0 = 0x80909680;
  auVar9._8_8_ = _UNK_180132e68;
  auVar9._0_8_ = (ulonglong)uVar7 ^ 0x84222325;
  auVar10 = pshufb(auVar9 ^ _DAT_180d8b810,_DAT_1800170c0);
  uVar13 = auVar10._8_8_ + auVar10._0_8_;
  uVar12 = uVar13 + _DAT_18319ab80;
  if (auVar10._4_4_ < 0) {
    uVar12 = _DAT_18319a9c8 ^ uVar13;
  }
  _DAT_18319ac30 = func_0x000187c87810(SUB161(auVar9 ^ _DAT_180d8b810,5) ^ uVar12);
  uVar12 = uVar7 & _DAT_18319ac30;
  uVar7 = uVar7 & 0x3f;
  _DAT_18319a618 = (ulonglong)uVar7;
  _DAT_18319a7e8 = (_DAT_18319a7e8 ^ uVar12) + _DAT_18319a618 ^ 0x537091c048a51503;
  _DAT_18319a8d0 = (_DAT_18319a8d0 * 0x701431df0d6770dd ^ _DAT_18319a7e8) + uVar12;
  _DAT_18319a7d0 = _DAT_18319a8d0 ^ _DAT_18319a7e8;
  auVar10._4_4_ = 0;
  auVar10._0_4_ = uVar7 ^ 0x84222325;
  auVar10._8_4_ = uVar6;
  auVar10._12_4_ = 0;
  auVar11 = pshufb(auVar10 ^ _DAT_180d8b820,auVar11);
  uVar13 = auVar11._8_8_ + auVar11._0_8_;
  uVar12 = uVar13 + _DAT_18319a798;
  if (auVar11._4_4_ < 0) {
    uVar12 = _DAT_18319aa10 ^ uVar13;
  }
  _DAT_18319a610 = func_0x000187c87810(SUB161(auVar10 ^ _DAT_180d8b820,5) ^ uVar12);
  uVar8 = (_DAT_18319a610 << 0x3a | _DAT_18319a610 >> 6) ^ uVar8;
  _DAT_18319ac38 = (ulonglong)(uVar7 | uVar6);
  _DAT_18319a828 = (_DAT_18319a828 ^ uVar8) + _DAT_18319ac38 ^ 0xc576b159466303cd;
  _DAT_18319a930 = (_DAT_18319a930 * -0x3ac149a4c016c247 ^ _DAT_18319a828) + uVar8;
  _DAT_18319a688 = _DAT_18319a930 ^ _DAT_18319a828;
  *(undefined8 *)(unaff_RBP + 0x80) = *(undefined8 *)(unaff_RBP + 0x10);
  uVar1 = *(uint *)(unaff_RBP + 0x78);
  *(uint *)(unaff_RBP + 0x88) = uVar1;
  uVar8 = (ulonglong)uVar1 ^ 0x84222325;
  uVar12 = uVar8 ^ _DAT_18319a930;
  lVar5 = uVar8 + _DAT_18319a938;
  uVar8 = uVar12 + lVar5;
  uVar13 = (_DAT_18319a938 ^ 1) + _DAT_18319a930 + 1;
  uVar12 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar12;
  uVar8 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18319a938 ^ 1;
  _DAT_18319ab68 =
       func_0x000187c87810((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319a930 + 1) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - lVar5);
  uVar14 = uVar1 & unaff_XMM10_Da;
  uVar15 = uVar1 | unaff_XMM10_Da;
  uVar12 = uVar1 ^ _DAT_18001a990;
  uVar8 = _DAT_18319ab68 * 0xb23a76af1a038b3;
  _DAT_18319aba0 =
       ((ulonglong)uVar15 * (ulonglong)_DAT_180d8b860 << 0x20) +
       (ulonglong)uVar15 * (ulonglong)_DAT_180d8b850 +
       ((ulonglong)uVar14 * (ulonglong)_DAT_180d8b860 << 0x20 |
       (ulonglong)uVar14 * (ulonglong)_DAT_180d8b850) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_180d8b840 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_180d8b830 +
       (-((uVar12 & 0xffffffff) * (ulonglong)_DAT_180d8b8f0 +
         ((uVar12 & 0xffffffff) * (ulonglong)_DAT_180d8b900 +
          (_DAT_18001a990 >> 0x20) * (ulonglong)_DAT_180d8b8f0 << 0x20)) -
       (((ulonglong)uVar15 * (ulonglong)_DAT_180d8b8e0 << 0x20) +
        (ulonglong)uVar15 * (ulonglong)_DAT_180d8b8d0 +
       ((ulonglong)uVar14 * (ulonglong)_DAT_180d8b8c0 << 0x20 |
       (ulonglong)uVar14 * (ulonglong)_DAT_180d8b8b0) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_180d8b8a0 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_180d8b890)) + 0xddb8027e7cf22021;
  _DAT_18319a808 = _DAT_18319abe0 ^ uVar8 ^ _DAT_18319aba0;
  _DAT_18319a818 = (_DAT_18319a818 ^ uVar8) + _DAT_18319aba0 ^ 0x6604afbfb9c001f9;
  _DAT_18319a968 = (_DAT_18319a968 * -0x7464a8ce55767d3f ^ _DAT_18319a818) + uVar8;
  _DAT_18319ac28 = _DAT_18319a968 ^ _DAT_18319a818;
  _DAT_18319a5c8 = _DAT_18319ab68 ^ _DAT_18319aba0;
  _DAT_18319aba0 = _DAT_18319aba0 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x90) = uVar7 | uVar6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x40)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c633af (image 187c633af) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c633af(void)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  uint uVar3;
  byte in_XMM0_Bf;
  uint uVar4;
  ulonglong uVar5;
  undefined1 in_XMM1 [16];
  ulonglong uVar6;
  uint uVar7;
  uint uVar9;
  undefined1 auVar8 [16];
  
  uVar2 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar5 = uVar2 + _DAT_18319a9c8;
  if (in_XMM1._4_4_ < 0) {
    uVar5 = _DAT_18319a6b8 ^ uVar2;
  }
  _DAT_18319a678 = func_0x000187c87810(in_XMM0_Bf ^ uVar5);
  *(ulonglong *)(unaff_RBP + 0xb0) = unaff_RSI;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = unaff_RSI;
  uVar5 = _DAT_18319a678 & 0x1fffffffff ^ unaff_RSI;
  uVar9 = (uint)(unaff_RSI >> 0x20);
  uVar3 = (uint)unaff_RSI & (uint)DAT_18001a990;
  auVar1._8_4_ = (uint)unaff_RSI;
  auVar1._0_8_ = unaff_RSI;
  auVar1._12_4_ = uVar9;
  uVar7 = SUB164(auVar1 | _DAT_18001a990,0);
  uVar2 = SUB168(auVar1 | _DAT_18001a990,0);
  uVar4 = SUB164(_DAT_18001a990 ^ auVar8,0);
  uVar2 = (((ulonglong)uVar4 * (ulonglong)_DAT_180d8c2e0 +
            ((ulonglong)_DAT_180d8c2f0 * (ulonglong)uVar4 +
             (SUB168(_DAT_18001a990 ^ auVar8,0) >> 0x20) * (ulonglong)_DAT_180d8c2e0 << 0x20) +
           (ulonglong)_DAT_180d8c2c0 * (ulonglong)uVar7 +
           ((ulonglong)_DAT_180d8c2d0 * (ulonglong)uVar7 +
            (uVar2 >> 0x20) * (ulonglong)_DAT_180d8c2c0 << 0x20) +
           ((ulonglong)_DAT_180d8c2b0 * (ulonglong)uVar3 << 0x20 |
           (ulonglong)_DAT_180d8c2a0 * (ulonglong)uVar3) +
           ((ulonglong)_DAT_180d8c290 * (unaff_RSI & 0xffffffff) +
            (ulonglong)_DAT_180d8c280 * (ulonglong)uVar9 << 0x20) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_180d8c280) -
          ((ulonglong)uVar7 * (ulonglong)_DAT_180d8c340 +
           ((uVar2 >> 0x20) * (ulonglong)_DAT_180d8c340 +
            (ulonglong)_DAT_180d8c350 * (ulonglong)uVar7 << 0x20) +
           ((ulonglong)uVar3 * (ulonglong)_DAT_180d8c350 << 0x20 |
           (ulonglong)uVar3 * (ulonglong)_DAT_180d8c340) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_180d8c320 +
          ((ulonglong)_DAT_180d8c330 * (unaff_RSI & 0xffffffff) +
           (unaff_RSI >> 0x20) * (ulonglong)_DAT_180d8c320 << 0x20))) + 0x2ef2bb4d7b5e9fdf;
  _DAT_18319a788 = _DAT_18319a768 ^ uVar5 ^ uVar2;
  _DAT_18319ac70 = (_DAT_18319ac70 ^ uVar5) + uVar2 ^ 0x13cbb7abfe6ab204;
  _DAT_18319a750 = (_DAT_18319a750 * -0x6bda07326d105013 ^ _DAT_18319ac70) + uVar5;
  _DAT_18319acf8 = _DAT_18319a750 ^ _DAT_18319ac70;
  _DAT_18319ab30 = uVar2;
  _DAT_18319a888 = func_0x000187c87810(_DAT_18319a508 + 0xd6d4b4e192b27141U ^ 199);
  _DAT_18319a860 = (_DAT_18319a860 ^ _DAT_18319a888) + 0xe3dfdb5fafffdebf ^ 0x14dd07e890211b24;
  _DAT_18319a938 = (_DAT_18319a938 * -0x7905af7bd206ffc9 ^ _DAT_18319a860) + _DAT_18319a888;
  _DAT_18319a988 = _DAT_18319a938 ^ _DAT_18319a860;
  _DAT_18319a840 = 0xe3dfdb5fafffdebf;
  uVar5 = (_DAT_18319ac78 ^ _DAT_180d8c360) + _DAT_18319ab80 + 0x84222cda;
  uVar6 = (_DAT_18319ab80 ^ _UNK_180d8c368) + _DAT_18319ac78 + 0x87874b698800cd26;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319ac78 ^ _DAT_180d8c360;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319ab80 ^ _UNK_180d8c368;
  _DAT_18319a910 =
       func_0x000187c87810((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319ac78 + 0x87874b698800cd26) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319ab80 + 0x84222cda));
  uVar5 = (_DAT_18319a910 ^ 0xed2f4d1684000000) & 0xffffffffff000000;
  _DAT_18319a8f0 = _DAT_18319a9b8 ^ uVar5 ^ 0x87874b698800dd25;
  _DAT_18319aa28 = (_DAT_18319aa28 ^ uVar5) + 0x87874b698800dd25 ^ 0x85a5009b7cd3aa7e;
  _DAT_18319ab88 = (_DAT_18319ab88 * 0x6b01a4148a167589 ^ _DAT_18319aa28) + uVar5;
  _DAT_18319a7c8 = _DAT_18319ab88 ^ _DAT_18319aa28;
  _DAT_18319ac30 = 0x87874b698800dd25;
  uVar5 = (~_DAT_18319a8a0 + 0x7878b49677ff32db) *
          ((_DAT_18319a8d0 ^ 0x87874b690c22fe00) + (_DAT_18319a8d0 & 0x7874b690c22fe00) * 2);
  uVar5 = (uVar5 | _DAT_18319a920) + (uVar5 & _DAT_18319a920);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319aa20 = func_0x000187c87810((uVar5 | 0xffffffff7bddccda) + (uVar5 & 0xffffffff7bddccda));
  uVar5 = _DAT_18319aa20 >> 1 | _DAT_18319aa20;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 0x40 ^
          _DAT_18319aa20;
  _DAT_18319a5b8 = _DAT_18319a810 ^ uVar5 ^ 0xfff;
  _DAT_18319a740 = (_DAT_18319a740 ^ uVar5) + 0xfff ^ 0xdc80f02afb074e40;
  _DAT_18319ac98 = (_DAT_18319ac98 * 0x7e32385ced436303 ^ _DAT_18319a740) + uVar5;
  _DAT_18319aba0 = _DAT_18319ac98 ^ _DAT_18319a740;
  _DAT_18319ac60 = 0xfff;
  _DAT_18319a5d8 = func_0x000187c87810(_DAT_18319a9b0 ^ 0x7c0adbf47538ee99);
  _DAT_18319ab58 = (_DAT_18319ab58 ^ _DAT_18319a5d8) + 0xc423c67b4cace248 ^ 0x7f6654f6cbfaefaf;
  _DAT_18319ac50 = (_DAT_18319ac50 * 0x6a7972e308a49dbf ^ _DAT_18319ab58) + _DAT_18319a5d8;
  _DAT_18319a938 = _DAT_18319ac50 ^ _DAT_18319ab58;
  _DAT_18319a8f8 = 0xc423c67b4cace248;
  _DAT_18319ac78 = func_0x000187c87810(_DAT_18319ac30 ^ 0x83ceb410de196ea5);
  uVar5 = (_DAT_18319ac78 >> 0xd) * -0x5a0c403e43d1a000;
  _DAT_18319a778 = _DAT_18319a960 ^ uVar5 ^ 0x3bdc3984b3532db7;
  _DAT_18319a7f8 = (_DAT_18319a7f8 ^ uVar5) + 0x3bdc3984b3532db7 ^ 0x8dfa172f5ae286ad;
  _DAT_18319aa40 = (_DAT_18319aa40 * -0x2c12332fc82d890d ^ _DAT_18319a7f8) + uVar5;
  _DAT_18319abb0 = _DAT_18319aa40 ^ _DAT_18319a7f8;
  _DAT_18319ac80 = 0x3bdc3984b3532db7;
  uVar5 = (~_DAT_18319a560 + 0xc3286151040c7107) *
          ((_DAT_18319a6f8 ^ unaff_RBX) + (ulonglong)((uint)_DAT_18319a6f8 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_18319a9d8) + (uVar5 & _DAT_18319a9d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319a5f0 = func_0x000187c87810((uVar5 | 0xc3286151802e5223) + (uVar5 & 0xc3286151802e5223));
  _DAT_18319a5c8 =
       (_DAT_18319a5c8 ^ _DAT_18319a5f0 * -0x13d0874f5670888d) + 0x3cd79eaefbf38efa ^
       0x705f2904e353a333;
  _DAT_18319a670 =
       (_DAT_18319a670 * 0x22cf1dfc5e891f6d ^ _DAT_18319a5c8) + _DAT_18319a5f0 * -0x13d0874f5670888d
  ;
  _DAT_18319a9e8 = _DAT_18319a670 ^ _DAT_18319a5c8;
  _DAT_18319ac00 = 0x3cd79eaefbf38efa;
  uVar5 = (~_DAT_18319a720 + 0x46e554962e7c77d8) *
          ((_DAT_18319ac08 ^ 0xe3dfdb5f2bddfd9a) + (_DAT_18319ac08 & 0x63dfdb5f2bddfd9a) * 2);
  uVar5 = (uVar5 | _DAT_18319aaf0) + (uVar5 & _DAT_18319aaf0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319ac78 = func_0x000187c87810((uVar5 | 0xa53a8fc905a18a4d) + (uVar5 & 0xa53a8fc905a18a4d));
  uVar5 = _DAT_18319ac78 ^ 0xe7ffdfdfafffffff;
  _DAT_18319a590 = _DAT_18319a790 ^ uVar5 ^ 0x2ac52ff5de7c5696;
  _DAT_18319a718 = (_DAT_18319a718 ^ uVar5) + 0x2ac52ff5de7c5696 ^ 0x4bbca238deb88c45;
  _DAT_18319aaf0 = (_DAT_18319aaf0 * -0x4d3686e189e36bd5 ^ _DAT_18319a718) + uVar5;
  _DAT_18319ac50 = _DAT_18319aaf0 ^ _DAT_18319a718;
  _DAT_18319a9e0 = 0x2ac52ff5de7c5696;
  uVar5 = (~_DAT_18319a578 + 0x46e554962e7c77d8) *
          ((_DAT_18319a7a0 ^ 0xe3dfdb5f2bddfd9a) + (_DAT_18319a7a0 & 0x63dfdb5f2bddfd9a) * 2);
  uVar5 = (uVar5 | _DAT_18319acd8) + (uVar5 & _DAT_18319acd8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319a9f8 = func_0x000187c87810((uVar5 | 0xa53a8fc905a18a4d) + (uVar5 & 0xa53a8fc905a18a4d));
  uVar5 = _DAT_18319a9f8 >> 1 | _DAT_18319a9f8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_18319a9f8;
  _DAT_18319a7f0 = (_DAT_18319a7f0 ^ uVar5) + 0x42c550162e7c5697 ^ 0x4940f71c91006b2d;
  _DAT_18319a900 = (_DAT_18319a900 * 0x5f6fcb2de81ee57b ^ _DAT_18319a7f0) + uVar5;
  _DAT_18319a728 = _DAT_18319a900 ^ _DAT_18319a7f0;
  _DAT_18319a678 = 0x42c550162e7c5697;
  uVar5 = (~_DAT_18319a960 + 0x2ac52ff5de7c5697) *
          ((_DAT_18319a708 ^ 0x2ac52ff55a5e75b3) + (_DAT_18319a708 & 0x2ac52ff55a5e75b3) * 2);
  uVar5 = (uVar5 | _DAT_18319a6d8) + (uVar5 & _DAT_18319a6d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18319abe0 = func_0x000187c87810((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_18319ab48 = (_DAT_18319abe0 ^ 0xff5de7c5696) & 0x1fffffffffff;
  _DAT_18319aa28 = _DAT_18319aa28 ^ _DAT_18319ab48 ^ 0x222620a1031e392f;
  _DAT_18319aa50 = (_DAT_18319aa50 * 0x71a55a859031835d ^ _DAT_18319aa28) + _DAT_18319ab48;
  _DAT_18319a950 = _DAT_18319aa50 ^ _DAT_18319aa28;
  _DAT_18319ac48 = 0;
  uVar5 = (_DAT_18319a538 ^ 0x84222cda) + _DAT_18319aa60 + 0x84222cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18319a538 ^ 0x84222cda;
  uVar6 = ((_DAT_18319aa60 + _DAT_18319a538) * 0x2000 | _DAT_18319aa60 + _DAT_18319a538 >> 0x33) ^
          _DAT_18319aa60;
  _DAT_18319a878 =
       func_0x000187c87810((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_18319a538 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18319aa60 + 0x84222cda));
  uVar5 = _DAT_18319a878 ^ 0xfff;
  _DAT_18319aa28 = _DAT_18319ac60 ^ uVar5 ^ 0xfff;
  _DAT_18319a6c8 = (_DAT_18319a6c8 ^ uVar5) + 0xfff ^ 0x75c8fe9baafd284e;
  _DAT_18319ab90 = (_DAT_18319ab90 * -0x25da4c4a4d2bd67d ^ _DAT_18319a6c8) + uVar5;
  _DAT_18319ab10 = _DAT_18319ab90 ^ _DAT_18319a6c8;
  _DAT_18319ab80 = 0xfff;
  _DAT_18319a560 = func_0x000187c87810(_DAT_18319a848 ^ 0xa001dfcba51bde6a);
  uVar5 = (_DAT_18319a560 ^ 0x1b5fafffdebf) & 0x3fffffffffff;
  _DAT_18319a8e0 = (_DAT_18319a8e0 ^ uVar5) + 0x1c2024a050002140 ^ 0xc1c386b6d4a775d0;
  _DAT_18319a5e0 = (_DAT_18319a5e0 * -0x7414551ae02a7869 ^ _DAT_18319a8e0) + uVar5;
  _DAT_18319a738 = _DAT_18319a5e0 ^ _DAT_18319a8e0;
  _DAT_18319ac80 = 0x1c2024a050002140;
  _DAT_18319aa28 = func_0x000187c87810(_DAT_18319a5b8 ^ 0x13ff7c39ffe1c2);
  uVar5 = _DAT_18319aa28 & 0xffffffffffffff80;
  _DAT_18319a610 = _DAT_18319aa10 ^ uVar5 ^ 0xfff;
  _DAT_18319aa48 = (_DAT_18319aa48 ^ uVar5) + 0xfff ^ 0xd07efa935efe8f7d;
  _DAT_18319a758 = (_DAT_18319a758 * 0xb29796396ceec69 ^ _DAT_18319aa48) + uVar5;
  _DAT_18319a8d0 = _DAT_18319a758 ^ _DAT_18319aa48;
  _DAT_18319a628 = 0xfff;
  _DAT_18319a998 = func_0x000187c87810(_DAT_18319acb0 + 0xffdc007c45ffe1ffU ^ 0x31);
  uVar5 = _DAT_18319a998 - (_DAT_18319a998 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18319a998;
  _DAT_18319a648 = _DAT_18319ab58 ^ uVar5 ^ 0xfff;
  _DAT_18319ab98 = (_DAT_18319ab98 ^ uVar5) + 0xfff ^ 0xbaac62b6588e7cfe;
  _DAT_18319a538 = (_DAT_18319a538 * -0x5af945393e1374e5 ^ _DAT_18319ab98) + uVar5;
  _DAT_18319a550 = _DAT_18319a538 ^ _DAT_18319ab98;
  _DAT_18319ac80 = 0xfff;
  switch(0xfff < uVar2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c7387a (image 187c7387a) =====

void FUN_187c7387a(void)

{
  return;
}



// ===== continuation @ rva 7c73712 (image 187c73712) =====

undefined8 thunk_FUN_187c73822(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva 7c73501 (image 187c73501) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c73501(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x88) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c89ee2 (image 187c89ee2) =====

void FUN_187c89ee2(void)

{
  return;
}



// ===== continuation @ rva 7c89d3b (image 187c89d3b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c89d3b(void)

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



// ===== continuation @ rva 7c8a94c (image 187c8a94c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c8a94c(void)

{
  char cVar1;
  longlong *in_RAX;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*in_RAX + 0x784,0x25);
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



// ===== continuation @ rva 7c8be97 (image 187c8be97) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c8be97(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
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



// ===== continuation @ rva 7c8db49 (image 187c8db49) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c8db49(void)

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



// ===== continuation @ rva 7c8cc1e (image 187c8cc1e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c8cc1e(void)

{
  longlong lVar1;
  longlong *in_stack_00000030;
  
  lVar1 = (**(code **)(*in_stack_00000030 + 0x580))(in_stack_00000030,8);
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 7c8dbae (image 187c8dbae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c8dbae(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x1f8))(in_stack_00000030);
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



// ===== continuation @ rva 7c8daa8 (image 187c8daa8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c8daa8(void)

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



// ===== continuation @ rva 7c8b2ed (image 187c8b2ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c8b2ed(void)

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



// ===== continuation @ rva 7c8caad (image 187c8caad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c8caad(void)

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



// ===== continuation @ rva 7c8c736 (image 187c8c736) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c8c736(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x878,0x27);
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



// ===== continuation @ rva 7c8c3ff (image 187c8c3ff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c8c3ff(void)

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



// ===== continuation @ rva 7c8c2c4 (image 187c8c2c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c8c2c4(void)

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



// ===== continuation @ rva 7c3b143 (image 187c3b143) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c3b143(void)

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



// ===== continuation @ rva 7c3b0ef (image 187c3b0ef) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3b0ef(void)

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



// ===== continuation @ rva 7c3bc68 (image 187c3bc68) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3bc68(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180d81368)();
  return;
}



// ===== continuation @ rva 7c3bc02 (image 187c3bc02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3bc02(void)

{
  FUN_190dd72e0();
  (*_DAT_180d81058)();
  return;
}



// ===== continuation @ rva 7c3b1cc (image 187c3b1cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3b1cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_180d81198)();
  return;
}



// ===== continuation @ rva 7c3b16a (image 187c3b16a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3b16a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180d81258)();
  return;
}



// ===== continuation @ rva 7c3be73 (image 187c3be73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3be73(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180d81338)();
  return;
}



// ===== continuation @ rva 7c3b942 (image 187c3b942) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3b942(void)

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



// ===== continuation @ rva 7c3bea8 (image 187c3bea8) =====

void FUN_187c3bea8(void)

{
  return;
}



// ===== continuation @ rva 7c3bdad (image 187c3bdad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3bdad(void)

{
  FUN_190ddfc90();
  (*_DAT_180d80f98)();
  return;
}



// ===== continuation @ rva 7c3b6d9 (image 187c3b6d9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3b6d9(void)

{
  FUN_190de3220();
  (*_DAT_180d80f28)();
  return;
}



// ===== continuation @ rva 7c3bbc8 (image 187c3bbc8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3bbc8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_180d80f58)();
  return;
}



// ===== continuation @ rva 7c3ba64 (image 187c3ba64) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c3ba64(void)

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



// ===== continuation @ rva 7c3e8fd (image 187c3e8fd) =====

void FUN_187c3e8fd(void)

{
  return;
}



// ===== continuation @ rva 7c3c020 (image 187c3c020) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3c020(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180d817f8)();
  return;
}



// ===== continuation @ rva 7c3ddc0 (image 187c3ddc0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3ddc0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180d81da8)();
  return;
}



// ===== continuation @ rva 7c3dc95 (image 187c3dc95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3dc95(void)

{
  FUN_190dd72e0();
  (*_DAT_180d814b8)();
  return;
}



// ===== continuation @ rva 7c3e91c (image 187c3e91c) =====

void FUN_187c3e91c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 7c3c70b (image 187c3c70b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3c70b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
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



// ===== continuation @ rva 7c3e095 (image 187c3e095) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3e095(void)

{
  (*_DAT_180d821c8)();
  return;
}



// ===== continuation @ rva 7c3e66a (image 187c3e66a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3e66a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180d81558)();
  return;
}



// ===== continuation @ rva 7c3e24d (image 187c3e24d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3e24d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180d81f48)();
  return;
}



// ===== continuation @ rva 7c3e7f7 (image 187c3e7f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c3e7f7(void)

{
  (*_DAT_180d821c8)();
  return;
}



// ===== continuation @ rva 7c3c188 (image 187c3c188) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c3c188(void)

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



// ===== continuation @ rva 7c3cbf1 (image 187c3cbf1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c3cbf1(void)

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



