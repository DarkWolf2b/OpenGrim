// ===== continuation @ rva cb2eccc (image 18cb2eccc) =====

void FUN_18cb2eccc(void)

{
  return;
}



// ===== continuation @ rva cb154cb (image 18cb154cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cb15521 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cb154cb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cb1fa2b (image 18cb1fa2b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb1fa2b(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000b3;
  
  uStack00000000000000b3 = in_stack_00000070;
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



// ===== continuation @ rva cb2e2f7 (image 18cb2e2f7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb2e2f7(void)

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



// ===== continuation @ rva cb27374 (image 18cb27374) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb27374(void)

{
  char cVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack00000000000000bc;
  
  auVar5._8_8_ = _UNK_1801a22d8;
  auVar5._0_8_ = 0x84222325;
  uStack00000000000000bc = in_stack_00000040;
  uStack0000000000000048 = 0;
  auVar6 = pshufb(auVar5 ^ _DAT_18200c9a0,_DAT_1800170c0);
  uVar2 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar2 + _DAT_18332de68;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_18332e1e8 ^ uVar2;
  }
  _DAT_18332e188 = func_0x00018cb2eeb0(SUB161(auVar5 ^ _DAT_18200c9a0,5) ^ uVar3);
  uVar3 = _DAT_18332e188 - (_DAT_18332e188 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_18332e188) & 0x7fffffffffffffff;
  lVar4 = ((ulonglong)_DAT_18200ca80 * 0xffffffff + _DAT_18200caa0 << 0x20) +
          (ulonglong)_DAT_18200ca90 * 0xffffffff;
  _DAT_18332e0e8 =
       ((((ulonglong)_DAT_18200ca40 * 0xffffffff + _DAT_18200ca50 << 0x20) +
         (ulonglong)_DAT_18200ca30 * 0xffffffff +
        ((ulonglong)_DAT_1801a1250 * (ulonglong)_DAT_18200ca20 << 0x20) +
        (ulonglong)_DAT_18200ca10 * (ulonglong)_DAT_1801a1250 +
        ((ulonglong)_DAT_1801a1250 * (ulonglong)_DAT_18200ca00 << 0x20) +
        (ulonglong)_DAT_18200c9f0 * (ulonglong)_DAT_1801a1250) - lVar4) + 0x1e78efe379a40f20;
  _DAT_18332df28 = _DAT_18332e238 ^ uVar3 ^ _DAT_18332e0e8;
  _DAT_18332e080 = (_DAT_18332e080 ^ uVar3) + _DAT_18332e0e8 ^ 0xb81823df47f85ffa;
  _DAT_18332e1d8 = (_DAT_18332e1d8 * -0xb17e52c955c77e3 ^ _DAT_18332e080) + uVar3;
  _DAT_18332e280 = _DAT_18332e1d8 ^ _DAT_18332e080;
  _DAT_18332e0e8 = _DAT_18332e0e8 & 0xffffffff;
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



// ===== continuation @ rva cb1566b (image 18cb1566b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cb15699 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cb1566b(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cb1561a (image 18cb1561a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cb15650 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cb1561a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cb17b10 (image 18cb17b10) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb17b10(void)

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



// ===== continuation @ rva cb17ba6 (image 18cb17ba6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cb17bec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cb17ba6(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cb18708 (image 18cb18708) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cb1876c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cb18708(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  (**(code **)(*unaff_RSI + 0x558))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva cb2772d (image 18cb2772d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb2772d(void)

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



// ===== continuation @ rva cb08a72 (image 18cb08a72) =====

void FUN_18cb08a72(void)

{
  return;
}



// ===== continuation @ rva cb088ce (image 18cb088ce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb088ce(void)

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



// ===== continuation @ rva cb0d75e (image 18cb0d75e) =====

undefined8 FUN_18cb0d75e(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x68))();
  return 0;
}



// ===== continuation @ rva cb0bef1 (image 18cb0bef1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18cb0d584(void)

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



// ===== continuation @ rva cb0cf88 (image 18cb0cf88) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb0cf88(void)

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



// ===== continuation @ rva cb0fc99 (image 18cb0fc99) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb0fc99(void)

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



// ===== continuation @ rva cb0d165 (image 18cb0d165) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb0d165(void)

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



// ===== continuation @ rva cb0b90c (image 18cb0b90c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18cb0d584(void)

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



// ===== continuation @ rva cb08f25 (image 18cb08f25) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb08f25(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *unaff_R12;
  int iStack0000000000000050;
  ulonglong uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  iStack0000000000000050 = 5;
  uStack0000000000000060 = 0x10;
  uStack0000000000000058 =
       (ulonglong)
       CONCAT24((short)((ulonglong)unaff_RSI >> 0x30),(int)(char)((ulonglong)unaff_RSI >> 0x10));
  iVar1 = (**(code **)(*unaff_R12 + 0x558))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva cb11762 (image 18cb11762) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb11762(void)

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



// ===== continuation @ rva cb1170e (image 18cb1170e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb1170e(void)

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



// ===== continuation @ rva cb125d5 (image 18cb125d5) =====

void FUN_18cb125d5(void)

{
  return;
}



// ===== continuation @ rva cb118bb (image 18cb118bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb118bb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182009d58)();
  return;
}



// ===== continuation @ rva cb125e4 (image 18cb125e4) =====

void FUN_18cb125e4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cb11eab (image 18cb11eab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb11eab(void)

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



// ===== continuation @ rva cb11e8c (image 18cb11e8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb11e8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182009988)();
  return;
}



// ===== continuation @ rva cb1244a (image 18cb1244a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb1244a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182009dd8)();
  return;
}



// ===== continuation @ rva cb11fe5 (image 18cb11fe5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb11fe5(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_182009db8)();
  return;
}



// ===== continuation @ rva cb125a1 (image 18cb125a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb125a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182009b78)();
  return;
}



// ===== continuation @ rva cb11d5f (image 18cb11d5f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb11d5f(void)

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



// ===== continuation @ rva cb124db (image 18cb124db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb124db(void)

{
  FUN_190ddfc90();
  (*_DAT_182009d78)();
  return;
}



// ===== continuation @ rva cb146f6 (image 18cb146f6) =====

void FUN_18cb146f6(void)

{
  return;
}



// ===== continuation @ rva cb1275c (image 18cb1275c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb1275c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18200a208)();
  return;
}



// ===== continuation @ rva cb137bd (image 18cb137bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb137bd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18200ab68)();
  return;
}



// ===== continuation @ rva cb14eca (image 18cb14eca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb14eca(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18200a4e8)();
  return;
}



// ===== continuation @ rva cb14ae3 (image 18cb14ae3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb14ae3(void)

{
  FUN_190de3220();
  (*_DAT_18200a298)();
  return;
}



// ===== continuation @ rva cb1529a (image 18cb1529a) =====

void FUN_18cb1529a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cb128c4 (image 18cb128c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb128c4(void)

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



// ===== continuation @ rva cb1486f (image 18cb1486f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb1486f(void)

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



// ===== continuation @ rva cb1502b (image 18cb1502b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb1502b(void)

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



// ===== continuation @ rva cb1407a (image 18cb1407a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb1407a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18200a348)();
  return;
}



// ===== continuation @ rva cb12f01 (image 18cb12f01) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb12f01(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18200a538)();
  return;
}



// ===== continuation @ rva cb134f7 (image 18cb134f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb134f7(void)

{
  (*_DAT_18200ad78)();
  return;
}



// ===== continuation @ rva cb00141 (image 18cb00141) =====

void FUN_18cb00141(void)

{
  return;
}



// ===== continuation @ rva cafbccd (image 18cafbccd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cafbccd(void)

{
  FUN_190ddce00();
  (*_DAT_182004408)();
  return;
}



// ===== continuation @ rva cb0406a (image 18cb0406a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb0406a(void)

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



// ===== continuation @ rva cb0365a (image 18cb0365a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb0365a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182005ba8)();
  return;
}



// ===== continuation @ rva cb05ecd (image 18cb05ecd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb05ecd(void)

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



// ===== continuation @ rva cb02cf3 (image 18cb02cf3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb02cf3(void)

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



// ===== continuation @ rva cb05f0b (image 18cb05f0b) =====

void FUN_18cb05f0b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva cb0557c (image 18cb0557c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb0557c(void)

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



// ===== continuation @ rva caffbc0 (image 18caffbc0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18caffbc0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182005bb8)();
  return;
}



// ===== continuation @ rva cb05a47 (image 18cb05a47) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb05a47(void)

{
  FUN_190dd72e0();
  (*_DAT_182005f38)();
  return;
}



// ===== continuation @ rva cb026f0 (image 18cb026f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb026f0(void)

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



// ===== continuation @ rva cb02399 (image 18cb02399) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cb02399(void)

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



