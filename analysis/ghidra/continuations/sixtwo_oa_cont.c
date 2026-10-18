// ===== continuation @ rva 6632a2d (image 186632a2d) =====

void FUN_186632a2d(void)

{
  return;
}



// ===== continuation @ rva 66244fb (image 1866244fb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866244fb(void)

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



// ===== continuation @ rva 662aa15 (image 18662aa15) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18662aa15(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R13;
  longlong unaff_R14;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  undefined1 auVar7 [16];
  uint uVar8;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  undefined1 *puVar9;
  undefined1 in_stack_00000060;
  undefined1 uStack000000000000009c;
  
  uStack000000000000009c = in_stack_00000060;
  puVar9 = &stack0x0000009c;
  (**(code **)(*unaff_RSI + 0x680))();
  uVar3 = (unaff_RBP ^ 0x84222325) & _DAT_18313e728;
  uVar1 = (~_DAT_18313e7c8 + 2) * ((_DAT_18313e728 ^ unaff_RBP ^ 0x84222325) + uVar3 * 2);
  uVar1 = (uVar1 | _DAT_18313e808) + (uVar1 & _DAT_18313e808);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar2 = uVar1 & (unaff_RBP ^ 0x84222324);
  uVar1 = func_0x000186632c10((unaff_RBP ^ 0x84222324 | uVar1) + uVar2,uVar2,_DAT_18313e808,uVar3,
                              puVar9);
  uVar4 = (uint)(unaff_RBP >> 0x20);
  auVar7._8_4_ = (uint)unaff_RBP;
  auVar7._0_8_ = unaff_RBP;
  auVar7._12_4_ = uVar4;
  uVar8 = (uint)unaff_RBP & (uint)DAT_18001a990;
  uVar5 = SUB164(auVar7 | _DAT_18001a990,0);
  uVar3 = unaff_RBP ^ _DAT_18001a710;
  uVar6 = SUB164(auVar7 ^ _DAT_18001a990,0);
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 0x40;
  uVar1 = uVar2 ^ uVar1;
  _DAT_18313e508 =
       (unaff_RBP -
       ((uVar3 & 0xffffffff) * (ulonglong)unaff_XMM13_Da +
        ((uVar3 & 0xffffffff) * (ulonglong)unaff_XMM10_Da +
         (uVar3 >> 0x20) * (ulonglong)unaff_XMM13_Da << 0x20) +
        (ulonglong)uVar6 * (ulonglong)unaff_XMM7_Da +
        ((ulonglong)uVar6 * (ulonglong)unaff_XMM8_Da +
         (SUB168(auVar7 ^ _DAT_18001a990,0) >> 0x20) * (ulonglong)unaff_XMM7_Da << 0x20) +
       (ulonglong)uVar5 * (ulonglong)unaff_XMM14_Da +
       ((ulonglong)uVar5 * (ulonglong)unaff_XMM15_Da +
        (SUB168(auVar7 | _DAT_18001a990,0) >> 0x20) * (ulonglong)unaff_XMM14_Da << 0x20) +
       ((ulonglong)uVar8 * (ulonglong)_DAT_1808adb40 << 0x20 |
       (ulonglong)uVar8 * (ulonglong)_DAT_1808adb30) +
       ((unaff_RBP & 0xffffffff) * (ulonglong)_DAT_1808adb20 +
        (ulonglong)uVar4 * (ulonglong)unaff_XMM9_Da << 0x20) +
       (unaff_RBP & 0xffffffff) * (ulonglong)unaff_XMM9_Da)) + 0xdcbc7c0811d27420;
  _DAT_18313e540 = _DAT_18313e618 ^ uVar1 ^ _DAT_18313e508;
  _DAT_18313e720 = uVar2 + _DAT_18313e508 ^ 0xc9278940900b5099;
  _DAT_18313e6a0 = (_DAT_18313e6a0 * unaff_R14 ^ _DAT_18313e720) + uVar1;
  _DAT_18313e5c8 = _DAT_18313e6a0 ^ _DAT_18313e720;
                    /* WARNING: Could not recover jumptable at 0x00018662ad12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_R13 + (ulonglong)(_DAT_18313e508 == 8) * 8))();
  return;
}



// ===== continuation @ rva 662ae82 (image 18662ae82) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18662ae82(void)

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



// ===== continuation @ rva 662936c (image 18662936c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18662936c(void)

{
  ulonglong uVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint unaff_XMM7_Da;
  undefined1 unaff_XMM9 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_XMM15_Da;
  int in_stack_000000a0;
  uint uStack00000000000000c8;
  uint uStack00000000000000cc;
  
  (**(code **)(*unaff_RSI + 0x570))();
  auVar3._4_4_ = 0;
  auVar3._0_4_ = uStack00000000000000c8 ^ 0x84222325;
  auVar3._8_4_ = uStack00000000000000cc;
  auVar3._12_4_ = 0;
  auVar4 = pshufb(auVar3 ^ _DAT_1808ad9b0,unaff_XMM9);
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar2 + _DAT_18313e818;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_18313e8e8 ^ uVar2;
  }
  _DAT_18313e648 = func_0x000186632c10(SUB161(auVar3 ^ _DAT_1808ad9b0,5) ^ uVar1);
  uVar6 = uStack00000000000000c8 & uStack00000000000000cc;
  uVar7 = uStack00000000000000c8 | uStack00000000000000cc;
  uVar5 = uStack00000000000000cc ^ (uint)DAT_18001a710;
  uVar1 = _DAT_18313e648 & 0x7fffffffffffffff;
  uVar2 = ((((ulonglong)uVar5 * (ulonglong)_DAT_1808ad9c0 + _DAT_1808ada30 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_1808ada20 +
           ((ulonglong)(uStack00000000000000c8 ^ uStack00000000000000cc) * (ulonglong)_DAT_1808ad9f0
           << 0x20) +
           (ulonglong)(uStack00000000000000c8 ^ uStack00000000000000cc) * (ulonglong)_DAT_1808ad9e0
           + ((ulonglong)uVar6 * (ulonglong)_DAT_1808ad9f0 << 0x20) +
             (ulonglong)uVar6 * (ulonglong)_DAT_1808ad9e0 +
             ((ulonglong)uStack00000000000000cc * (ulonglong)_DAT_1808ad9c0 << 0x20) +
             (_uStack00000000000000c8 & 0xffffffff) +
             (ulonglong)uStack00000000000000cc * (ulonglong)_DAT_1808ad9d0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_1808ada10 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_1808ada00) -
          (((ulonglong)uVar5 * (ulonglong)_DAT_1808adad0 + _DAT_1808adae0 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_1808adac0 +
          ((ulonglong)uVar7 * (ulonglong)unaff_XMM7_Da << 0x20) +
          (ulonglong)uVar7 * (ulonglong)unaff_XMM15_Da +
          ((ulonglong)uVar6 * (ulonglong)unaff_XMM7_Da << 0x20) +
          (ulonglong)uVar6 * (ulonglong)unaff_XMM15_Da +
          ((ulonglong)uStack00000000000000cc * (ulonglong)_DAT_1808ada90 << 0x20) +
          (ulonglong)uStack00000000000000cc * (ulonglong)_DAT_1808ada80 +
          ((_uStack00000000000000c8 & 0xffffffff) * (ulonglong)_DAT_1808ada70 << 0x20) +
          (_uStack00000000000000c8 & 0xffffffff) * (ulonglong)_DAT_1808ada60)) + 0xd54ee185c4226d18;
  _DAT_18313e898 = _DAT_18313e820 ^ uVar1 ^ uVar2;
  _DAT_18313e710 = (_DAT_18313e710 ^ uVar1) + uVar2 ^ 0x1ca981db180ed012;
  _DAT_18313e750 = (_DAT_18313e750 * 0x4889b557d837466d ^ _DAT_18313e710) + uVar1;
  _DAT_18313e570 = _DAT_18313e750 ^ _DAT_18313e710;
  _DAT_18313e7a0 = uVar2 & 0xffffffff;
  switch((int)uVar2 < in_stack_000000a0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 662a840 (image 18662a840) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18662a840(void)

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



// ===== continuation @ rva 66261c7 (image 1866261c7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866261c7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000104;
  
  uStack0000000000000104 = 0x530045;
  (**(code **)(*unaff_RSI + 0x518))();
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



// ===== continuation @ rva 6624c94 (image 186624c94) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186624c94(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 662a01b (image 18662a01b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18662a01b(void)

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



// ===== continuation @ rva 6627c3a (image 186627c3a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186627c3a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 662b5b8 (image 18662b5b8) =====

void thunk_FUN_1866269be(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 65f15c0 (image 1865f15c0) =====

void FUN_1865f15c0(void)

{
  return;
}



// ===== continuation @ rva 65ccdbe (image 1865ccdbe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865ccdbe(void)

{
  FUN_190ddce00();
  (*_DAT_18089b4b8)();
  return;
}



// ===== continuation @ rva 65ea801 (image 1865ea801) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865ea801(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x122a2,0x2e9);
  (*_DAT_18089b3c8)();
  return;
}



// ===== continuation @ rva 65eca58 (image 1865eca58) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865eca58(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x724,0x22);
  (*_DAT_18089a6d8)();
  return;
}



// ===== continuation @ rva 65ecfc1 (image 1865ecfc1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865ecfc1(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_18089f288)();
  return;
}



// ===== continuation @ rva 65eb04a (image 1865eb04a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865eb04a(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190ddce00(in_stack_00000048,&stack0x000000b0,*_DAT_18301ee50 + 0x3e3,*_DAT_18301ee50 + 1000,6)
  ;
  (*_DAT_18089cd28)();
  return;
}



// ===== continuation @ rva 65ed09f (image 1865ed09f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865ed09f(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_18089f2e8)();
  return;
}



// ===== continuation @ rva 65eb352 (image 1865eb352) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865eb352(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190de3220(in_stack_00000048,&stack0x00000178,*_DAT_18301ee50 + 0x566,*_DAT_18301ee50 + 0x57f,
                0x1a);
  (*_DAT_18089cf98)();
  return;
}



// ===== continuation @ rva 65f162c (image 1865f162c) =====

void FUN_1865f162c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 65e7bcb (image 1865e7bcb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1865e7bcb(void)

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



// ===== continuation @ rva 65e88cc (image 1865e88cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865e88cc(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_18089f2d8)();
  return;
}



// ===== continuation @ rva 65e87e0 (image 1865e87e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1865e87e0(void)

{
  longlong in_stack_00000078;
  
  switch(in_stack_00000078 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 65ea26c (image 1865ea26c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865ea26c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_18089f2d8)();
  return;
}



// ===== continuation @ rva 65e863d (image 1865e863d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865e863d(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  (*_DAT_18089f288)();
  return;
}



// ===== continuation @ rva 65e8527 (image 1865e8527) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865e8527(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190ddfc90(in_stack_00000048,&stack0x00000050,*_DAT_18301ee50 + 0x15b9f,*_DAT_18301ee50 + 88999
                ,0x165f);
  (*_DAT_18089dde8)();
  return;
}



// ===== continuation @ rva 65f20b4 (image 1865f20b4) =====

void FUN_1865f20b4(void)

{
  return;
}



// ===== continuation @ rva 65f183b (image 1865f183b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f183b(void)

{
  FUN_190ddce00();
  (*_DAT_1808a3f08)();
  return;
}



// ===== continuation @ rva 65f2630 (image 1865f2630) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f2630(void)

{
  (*_DAT_1808a3de8)();
  return;
}



// ===== continuation @ rva 65f24fe (image 1865f24fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f24fe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1808a3c58)();
  return;
}



// ===== continuation @ rva 65f2362 (image 1865f2362) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f2362(void)

{
  FUN_190dd72e0();
  (*_DAT_1808a3cd8)();
  return;
}



// ===== continuation @ rva 65f1f2e (image 1865f1f2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f1f2e(void)

{
  (*_DAT_1808a3ee8)();
  return;
}



// ===== continuation @ rva 65f25bf (image 1865f25bf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f25bf(void)

{
  (*_DAT_1808a3ee8)();
  return;
}



// ===== continuation @ rva 65f25ca (image 1865f25ca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f25ca(void)

{
  (*_DAT_1808a3bf8)();
  return;
}



// ===== continuation @ rva 65f23d6 (image 1865f23d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f23d6(void)

{
  FUN_190dd72e0();
  (*_DAT_1808a3d88)();
  return;
}



// ===== continuation @ rva 65f1892 (image 1865f1892) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1865f1892(void)

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



// ===== continuation @ rva 65f263b (image 1865f263b) =====

void FUN_1865f263b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 65f1a16 (image 1865f1a16) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1865f1a16(void)

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



// ===== continuation @ rva 6637640 (image 186637640) =====

void FUN_186637640(void)

{
  return;
}



// ===== continuation @ rva 6632d64 (image 186632d64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186632d64(void)

{
  FUN_190ddce00();
  (*_DAT_1808ae6f8)();
  return;
}



// ===== continuation @ rva 6636543 (image 186636543) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186636543(void)

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



// ===== continuation @ rva 66377bb (image 1866377bb) =====

void FUN_1866377bb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6636e70 (image 186636e70) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186636e70(void)

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



// ===== continuation @ rva 6637124 (image 186637124) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637124(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1808ae2e8)();
  return;
}



// ===== continuation @ rva 6636f7b (image 186636f7b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186636f7b(void)

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



// ===== continuation @ rva 6636bfd (image 186636bfd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186636bfd(void)

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



// ===== continuation @ rva 663704d (image 18663704d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663704d(void)

{
  (*_DAT_1808ae7f8)();
  return;
}



// ===== continuation @ rva 66374be (image 1866374be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866374be(void)

{
  (*_DAT_1808ae7f8)();
  return;
}



// ===== continuation @ rva 6637397 (image 186637397) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637397(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1808ae5f8)();
  return;
}



// ===== continuation @ rva 6636934 (image 186636934) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186636934(void)

{
  FUN_190dd72e0();
  (*_DAT_1808ae1c8)();
  return;
}



// ===== continuation @ rva 6637b3c (image 186637b3c) =====

void FUN_186637b3c(void)

{
  return;
}



// ===== continuation @ rva 66378d9 (image 1866378d9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866378d9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1808af718)();
  return;
}



// ===== continuation @ rva 6637b48 (image 186637b48) =====

void FUN_186637b48(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6637b34 (image 186637b34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637b34(void)

{
  (*_DAT_1808af6b8)();
  return;
}



// ===== continuation @ rva 6637a36 (image 186637a36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637a36(void)

{
  FUN_190ddfc90();
  (*_DAT_1808af778)();
  return;
}



// ===== continuation @ rva 6637af7 (image 186637af7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637af7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1808af6f8)();
  return;
}



// ===== continuation @ rva 6637aa3 (image 186637aa3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637aa3(void)

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



// ===== continuation @ rva 663799e (image 18663799e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663799e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1808af6a8)();
  return;
}



// ===== continuation @ rva 6637b19 (image 186637b19) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637b19(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_1808af6b8)();
    return;
  }
  (*_DAT_1808af6b8)();
  return;
}



// ===== continuation @ rva 66379ed (image 1866379ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866379ed(void)

{
  FUN_190dd72e0();
  (*_DAT_1808af728)();
  return;
}



// ===== continuation @ rva 6637e2e (image 186637e2e) =====

void FUN_186637e2e(void)

{
  return;
}



// ===== continuation @ rva 6637c52 (image 186637c52) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637c52(void)

{
  FUN_190ddfc90();
  (*_DAT_1808af888)();
  return;
}



// ===== continuation @ rva 6637de7 (image 186637de7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637de7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1808af878)();
  return;
}



// ===== continuation @ rva 6637e38 (image 186637e38) =====

void FUN_186637e38(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6637d6f (image 186637d6f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186637d6f(void)

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



// ===== continuation @ rva 6637ca9 (image 186637ca9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186637ca9(void)

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



// ===== continuation @ rva 6637e26 (image 186637e26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637e26(void)

{
  (*_DAT_1808af848)();
  return;
}



// ===== continuation @ rva 6637dc3 (image 186637dc3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186637dc3(void)

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



// ===== continuation @ rva 6637d42 (image 186637d42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637d42(void)

{
  FUN_190dd72e0();
  (*_DAT_1808af7f8)();
  return;
}



// ===== continuation @ rva 6637d90 (image 186637d90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637d90(void)

{
  FUN_190de3220();
  (*_DAT_1808af818)();
  return;
}



// ===== continuation @ rva 663d39b (image 18663d39b) =====

void FUN_18663d39b(void)

{
  return;
}



// ===== continuation @ rva 6637fb4 (image 186637fb4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186637fb4(void)

{
  FUN_190ddce00();
  (*_DAT_1808afa48)();
  return;
}



// ===== continuation @ rva 663ce6d (image 18663ce6d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663ce6d(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1808b0228)();
  return;
}



// ===== continuation @ rva 663c8c0 (image 18663c8c0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663c8c0(void)

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



// ===== continuation @ rva 663d167 (image 18663d167) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663d167(void)

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



// ===== continuation @ rva 663c71c (image 18663c71c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663c71c(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  (*_DAT_1808afee8)();
  return;
}



// ===== continuation @ rva 663c50f (image 18663c50f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663c50f(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_1808b0218)();
  return;
}



// ===== continuation @ rva 663c755 (image 18663c755) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663c755(void)

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



// ===== continuation @ rva 663c6a2 (image 18663c6a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663c6a2(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1808b03c8)();
  return;
}



// ===== continuation @ rva 663d38c (image 18663d38c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663d38c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1808b03f8)();
  return;
}



// ===== continuation @ rva 663ca6c (image 18663ca6c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663ca6c(void)

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



// ===== continuation @ rva 663d407 (image 18663d407) =====

void FUN_18663d407(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 663d076 (image 18663d076) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663d076(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_1808b02d8)();
  return;
}



// ===== continuation @ rva 663b835 (image 18663b835) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663b835(void)

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



// ===== continuation @ rva 663d681 (image 18663d681) =====

void FUN_18663d681(void)

{
  return;
}



// ===== continuation @ rva 663d5b2 (image 18663d5b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663d5b2(void)

{
  FUN_190ddce00();
  (*_DAT_1808b1328)();
  return;
}



// ===== continuation @ rva 663dade (image 18663dade) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663dade(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1808b1378)();
  return;
}



// ===== continuation @ rva 663d792 (image 18663d792) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663d792(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_1808b1258)();
  return;
}



// ===== continuation @ rva 663db50 (image 18663db50) =====

void FUN_18663db50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 663db41 (image 18663db41) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663db41(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1808b1228)();
  return;
}



// ===== continuation @ rva 663d9e1 (image 18663d9e1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663d9e1(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1808b11d8)();
  return;
}



// ===== continuation @ rva 663da22 (image 18663da22) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663da22(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1808b1158)();
  return;
}



// ===== continuation @ rva 663d6bd (image 18663d6bd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663d6bd(void)

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



// ===== continuation @ rva 663d981 (image 18663d981) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663d981(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1808b1358)();
  return;
}



// ===== continuation @ rva 663d68b (image 18663d68b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663d68b(void)

{
  FUN_190dd72e0();
  (*_DAT_1808b1188)();
  return;
}



// ===== continuation @ rva 663dc7b (image 18663dc7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663dc7b(void)

{
  FUN_190dd72e0();
  (*_DAT_1808b1478)();
  return;
}



// ===== continuation @ rva 663dc08 (image 18663dc08) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663dc08(void)

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



// ===== continuation @ rva 663dd4c (image 18663dd4c) =====

void FUN_18663dd4c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 663dd42 (image 18663dd42) =====

void FUN_18663dd42(void)

{
  return;
}



// ===== continuation @ rva 663dc66 (image 18663dc66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663dc66(void)

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



// ===== continuation @ rva 663dc41 (image 18663dc41) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663dc41(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1808b1418)();
  return;
}



// ===== continuation @ rva 663dcc4 (image 18663dcc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663dcc4(void)

{
  FUN_190dd9df0();
  (*_DAT_1808b1448)();
  return;
}



// ===== continuation @ rva 663dcf7 (image 18663dcf7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663dcf7(void)

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



// ===== continuation @ rva 663dd1b (image 18663dd1b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663dd1b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1808b1408)();
  return;
}



// ===== continuation @ rva 663df27 (image 18663df27) =====

void FUN_18663df27(void)

{
  return;
}



// ===== continuation @ rva 663de34 (image 18663de34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663de34(void)

{
  FUN_190ddfc90();
  (*_DAT_1808b14f8)();
  return;
}



// ===== continuation @ rva 663de8b (image 18663de8b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663de8b(void)

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



// ===== continuation @ rva 663deda (image 18663deda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663deda(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1808b1508)();
  return;
}



// ===== continuation @ rva 663df2f (image 18663df2f) =====

void FUN_18663df2f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 663de67 (image 18663de67) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663de67(void)

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



// ===== continuation @ rva 663def3 (image 18663def3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663def3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1808b1518)();
  return;
}



// ===== continuation @ rva 663df15 (image 18663df15) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663df15(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1808b1508)();
  return;
}



// ===== continuation @ rva 663dea1 (image 18663dea1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663dea1(void)

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



// ===== continuation @ rva 663df5a (image 18663df5a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18663df5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1808b1558)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 663df66 (image 18663df66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18663df66(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 65f27b6 (image 1865f27b6) =====

void FUN_1865f27b6(void)

{
  uint uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = (**(code **)(*unaff_RBX + 0x558))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001865f27e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808a4390 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 65f2763 (image 1865f2763) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001865f2799 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1865f2763(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 65f5bd0 (image 1865f5bd0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f5bd0(void)

{
  byte bVar1;
  longlong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  *(uint *)(unaff_RBP + 0x78) = unaff_EDI;
  *(uint *)(unaff_RBP + 0x40) = unaff_EDI;
  *(char *)(unaff_RBP + 0x80) = (char)unaff_EDI + (char)(unaff_EDI / 10) * -10;
  _DAT_18313d248 = func_0x00018661a0f0(_DAT_18313d310 + 0x1eff84b2001dff ^ 0xf2);
  uVar3 = (ulonglong)((uint)_DAT_18313d248 ^ 0x4884) << 0x23 | _DAT_18313d248 >> 0x1d;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar3;
  _DAT_18313d098 = (_DAT_18313d098 ^ uVar3) + 0xdf ^ 0x27d44b0353e80bc0;
  _DAT_18313d470 = (_DAT_18313d470 * -0x97be7f69dd90df ^ _DAT_18313d098) + uVar3;
  _DAT_18313d0e8 = _DAT_18313d470 ^ _DAT_18313d098;
  _DAT_18313d380 = 0xdf;
  uVar2 = (~_DAT_18313d6c8 + 0x4c) *
          ((_DAT_18313d288 ^ 0x842223e1) + (ulonglong)((uint)_DAT_18313d288 & 0x842223e1) * 2);
  uVar2 = (uVar2 | _DAT_18313d418) + (uVar2 & _DAT_18313d418);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313cfd8 = func_0x00018661a0f0((uVar2 | 0x842223aa) + (ulonglong)((uint)uVar2 & 0x842223aa))
  ;
  uVar2 = _DAT_18313cfd8 ^ 0x396c;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar2;
  _DAT_18313d5c0 = (_DAT_18313d5c0 ^ uVar2) + 0x8f ^ 0xa6339cc0fe967910;
  _DAT_18313d368 = (_DAT_18313d368 * -0x54215258a3583f2d ^ _DAT_18313d5c0) + uVar2;
  _DAT_18313d670 = _DAT_18313d368 ^ _DAT_18313d5c0;
  _DAT_18313d580 = 0x8f;
  uVar2 = (~_DAT_18313d090 + 0x91) *
          ((_DAT_18313d260 ^ 0x84222325) + (ulonglong)((uint)_DAT_18313d260 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18313d260) + (uVar2 & _DAT_18313d260);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d240 = func_0x00018661a0f0((uVar2 | 0x842223b5) + (ulonglong)((uint)uVar2 & 0x842223b5))
  ;
  _DAT_18313d578 = (_DAT_18313d578 ^ _DAT_18313d240) - 0x90 ^ 0x1d492d2cd2a185ab;
  _DAT_18313d2d8 = (_DAT_18313d2d8 * 0xebf413d0a0495bb ^ _DAT_18313d578) + _DAT_18313d240;
  _DAT_18313d350 = _DAT_18313d2d8 ^ _DAT_18313d578;
  _DAT_18313d5d8 = 0x70;
  _DAT_18313d250 = func_0x00018661a0f0(_DAT_18313d0a0 + 0xffdf00847d001dffU ^ 0x23);
  _DAT_18313d430 = _DAT_18313d490 ^ _DAT_18313cf60 ^ 0xc0;
  _DAT_18313d440 = (_DAT_18313d440 ^ _DAT_18313cf60) + 0xc0 ^ 0x2e0b2cb3d8b3e470;
  _DAT_18313cf70 = (_DAT_18313cf70 * -0x1cdf607c15a70b17 ^ _DAT_18313d440) + _DAT_18313cf60;
  _DAT_18313d158 = _DAT_18313cf70 ^ _DAT_18313d440;
  _DAT_18313d2d8 = 0xc0;
  uVar2 = (_DAT_18313d4e8 ^ _DAT_180556930) + _DAT_18313cf30 + 0x84222325;
  uVar3 = (_DAT_18313cf30 ^ _UNK_180556938) + _DAT_18313d4e8 + 0xb0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18313d4e8 ^ _DAT_180556930;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18313cf30 ^ _UNK_180556938;
  _DAT_18313d398 =
       func_0x00018661a0f0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18313d4e8 + 0xb0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18313cf30 + 0x84222325));
  uVar2 = _DAT_18313d398 << 0x3d | _DAT_18313d398 >> 3;
  _DAT_18313d2f0 = (_DAT_18313d2f0 ^ uVar2) - 0xb0 ^ 0xf4a297f3292ad9f5;
  _DAT_18313d3f0 = (_DAT_18313d3f0 * -0x6d66c5632aa31647 ^ _DAT_18313d2f0) + uVar2;
  _DAT_18313d5f0 = _DAT_18313d3f0 ^ _DAT_18313d2f0;
  _DAT_18313d658 = 0x50;
  uVar2 = (_DAT_18313d638 ^ _DAT_1808a5090) + _DAT_18313d3b0 + 0x84222315;
  uVar3 = (_DAT_18313d3b0 ^ _UNK_1808a5098) + _DAT_18313d638 + 0xb0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18313d638 ^ _DAT_1808a5090;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18313d3b0 ^ _UNK_1808a5098;
  _DAT_18313d1f8 =
       func_0x00018661a0f0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18313d638 + 0xb0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18313d3b0 + 0x84222315));
  uVar2 = _DAT_18313d1f8 & 0x1ffffffffffffff ^ 0xb0;
  _DAT_18313cf00 = _DAT_18313d610 ^ uVar2 ^ 0xe0;
  _DAT_18313d5b8 = (_DAT_18313d5b8 ^ uVar2) + 0xe0 ^ 0x732cfe1bf94fdd39;
  _DAT_18313d600 = (_DAT_18313d600 * -0x4372f0d7f9d84899 ^ _DAT_18313d5b8) + uVar2;
  _DAT_18313cfd0 = _DAT_18313d600 ^ _DAT_18313d5b8;
  _DAT_18313d6e0 = 0xe0;
  _DAT_18313d5b0 = func_0x00018661a0f0(_DAT_18313d280 + 0x1eff7c8affe1ff ^ 0xdc);
  uVar2 = (_DAT_18313d5b0 ^ 0x50) - (_DAT_18313d5b0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_18313d5b0 ^ 0x50;
  _DAT_18313d588 = _DAT_18313d4b8 ^ uVar2 ^ 0x130;
  _DAT_18313d618 = (_DAT_18313d618 ^ uVar2) + 0x130 ^ 0xfd3f431b49580b47;
  _DAT_18313d4b0 = (_DAT_18313d4b0 * 0x40196f953609b51f ^ _DAT_18313d618) + uVar2;
  _DAT_18313d368 = _DAT_18313d4b0 ^ _DAT_18313d618;
  _DAT_18313d5e0 = _DAT_18313cf30 ^ 0x130;
  _DAT_18313d238 = 0x30;
  uVar2 = (~_DAT_18313d1e0 + 0xd1) *
          ((_DAT_18313d1d8 ^ 0x84222315) + (ulonglong)((uint)_DAT_18313d1d8 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_18313d2e0) + (uVar2 & _DAT_18313d2e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d2e0 = func_0x00018661a0f0((uVar2 | 0x842223c5) + (ulonglong)((uint)uVar2 & 0x842223c5))
  ;
  uVar2 = _DAT_18313d2e0 ^ 0x30;
  _DAT_18313d478 = _DAT_18313d4d0 ^ uVar2 ^ 0x100;
  _DAT_18313d350 = (_DAT_18313d350 ^ uVar2) + 0x100 ^ 0xebaa36e26f553e2c;
  _DAT_18313d158 = (_DAT_18313d158 * 0x330bedb2ffea8e1 ^ _DAT_18313d350) + uVar2;
  _DAT_18313d038 = _DAT_18313d158 ^ _DAT_18313d350;
  _DAT_18313d0b8 = 0;
  uVar2 = (~_DAT_18313d0b0 + 0x31) *
          ((_DAT_18313d0b0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18313d0b0 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18313d450) + (uVar2 & _DAT_18313d450);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018661a0f0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315));
  _DAT_18313cf48 = uVar2 & 0x7ffffffffffffff;
  _DAT_18313d280 = _DAT_18313d470 ^ _DAT_18313cf48 ^ 0x30;
  _DAT_18313d100 = (_DAT_18313d100 ^ _DAT_18313cf48) + 0x30 ^ 0xb48c5c3ad7611388;
  _DAT_18313cf48 = (uVar2 * -0x62139624709d125 ^ _DAT_18313d100) + _DAT_18313cf48;
  _DAT_18313cfe0 = _DAT_18313cf48 ^ _DAT_18313d100;
  _DAT_18313cfe8 = 0x30;
  uVar2 = (~_DAT_18313d138 + 0x90) *
          ((_DAT_18313d6d8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18313d6d8 & 0x842223fa) * 2);
  uVar2 = (uVar2 | _DAT_18313d158) + (uVar2 & _DAT_18313d158);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313cf58 = func_0x00018661a0f0((uVar2 | 0x84222375) + (ulonglong)((uint)uVar2 & 0x84222375))
  ;
  _DAT_18313d060 = (_DAT_18313d060 ^ _DAT_18313cf58 ^ 0xdf) + 0x50 ^ 0x7a9aab3d60f576cb;
  _DAT_18313d1b8 = (_DAT_18313d1b8 * -0x2971e6b984afac09 ^ _DAT_18313d060) + (_DAT_18313cf58 ^ 0xdf)
  ;
  _DAT_18313d2c0 = _DAT_18313d1b8 ^ _DAT_18313d060;
  _DAT_18313d160 = 0x50;
  uVar2 = (~_DAT_18313d1e0 + 0x90) *
          ((_DAT_18313d3e0 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18313d3e0 & 0x842223fa) * 2);
  uVar2 = (uVar2 | _DAT_18313d228) + (uVar2 & _DAT_18313d228);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313cfe8 = func_0x00018661a0f0((uVar2 | 0x84222375) + (ulonglong)((uint)uVar2 & 0x84222375))
  ;
  _DAT_18313cf48 = (_DAT_18313cf48 ^ _DAT_18313cfe8 ^ 0x8f) + 0x8f ^ 0xfc837a30e4d6454;
  _DAT_18313d360 = (_DAT_18313d360 * -0x6fb4eee9386acbbd ^ _DAT_18313cf48) + (_DAT_18313cfe8 ^ 0x8f)
  ;
  _DAT_18313d258 = _DAT_18313d360 ^ _DAT_18313cf48;
  _DAT_18313cfc8 = 0x8f;
  _DAT_18313d310 = func_0x00018661a0f0(_DAT_18313d280 + 0x1eff84170021ff ^ 0x9e);
  _DAT_18313d590 = _DAT_18313d050 ^ _DAT_18313d310 ^ 0x6e;
  _DAT_18313d328 = (_DAT_18313d328 ^ _DAT_18313d310) + 0x6e ^ 0x1acbadcc8ae3c545;
  _DAT_18313d5a0 = (_DAT_18313d5a0 * -0x9f90307f7f3e7c1 ^ _DAT_18313d328) + _DAT_18313d310;
  _DAT_18313d600 = _DAT_18313d5a0 ^ _DAT_18313d328;
  _DAT_18313d3e8 = 0x6e;
  _DAT_18313d298 = func_0x00018661a0f0(_DAT_18313d310 ^ 0x1cff7c1affdd7a);
  _DAT_18313d040 = (_DAT_18313d298 ^ 0x2f44) & 0x7fffffffffffffff;
  _DAT_18313d610 = _DAT_18313d610 ^ _DAT_18313d040 ^ 0x5554e93717b4a2d0;
  _DAT_18313d0c8 = (_DAT_18313d0c8 * 0x188f532d6a81177b ^ _DAT_18313d610) + _DAT_18313d040;
  _DAT_18313d008 = _DAT_18313d0c8 ^ _DAT_18313d610;
  _DAT_18313d170 = 0;
  _DAT_18313d1e8 = func_0x00018661a0f0(_DAT_18313d2c0 ^ 0x1cff7bf5002153);
  uVar2 = _DAT_18313d1e8 & 0x7fffffffffffffff;
  _DAT_18313d1a8 = _DAT_18313d620 ^ uVar2 ^ 0x30;
  _DAT_18313d040 = (_DAT_18313d040 ^ uVar2) + 0x30 ^ 0xad7788ba5809a318;
  _DAT_18313d2b8 = (_DAT_18313d2b8 * -0x559458d69dca346b ^ _DAT_18313d040) + uVar2;
  _DAT_18313d120 = _DAT_18313d2b8 ^ _DAT_18313d040;
  _DAT_18313d5f0 = 0x30;
  uVar2 = (~_DAT_18313d5a0 + 0x21) *
          ((_DAT_18313d660 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18313d660 & 0x842223fa) * 2);
  uVar2 = (uVar2 | _DAT_18313d3e0) + (uVar2 & _DAT_18313d3e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d0e8 = func_0x00018661a0f0((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  _DAT_18313d140 = _DAT_18313d140 ^ _DAT_18313d0e8 & 0xffffffffc0000000 ^ 0x388d85e8c4461ca0;
  _DAT_18313d628 =
       (_DAT_18313d628 * 0x17e07bfe09c7dde1 ^ _DAT_18313d140) +
       (_DAT_18313d0e8 & 0xffffffffc0000000);
  _DAT_18313d178 = _DAT_18313d628 ^ _DAT_18313d140;
  _DAT_18313d258 = 0;
  uVar2 = (_DAT_18313d2c8 ^ 0x84222315) + _DAT_18313d598 + 0x84222315;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18313d2c8 ^ 0x84222315;
  uVar3 = ((_DAT_18313d598 + _DAT_18313d2c8) * 0x2000 | _DAT_18313d598 + _DAT_18313d2c8 >> 0x33) ^
          _DAT_18313d598;
  _DAT_18313d110 =
       func_0x00018661a0f0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_18313d2c8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18313d598 + 0x84222315));
  uVar2 = (_DAT_18313d110 & 0x7ffffffff) - (_DAT_18313d110 >> 1 & 0x155555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar2 = (ulonglong)((uint)bVar1 + (uint)bVar1) ^ _DAT_18313d110 & 0x7ffffffff;
  _DAT_18313cfe0 = _DAT_18313d4e8 ^ uVar2 ^ 0x30;
  _DAT_18313d300 = (_DAT_18313d300 ^ uVar2) + 0x30 ^ 0x9e0cff48aaae2f4b;
  _DAT_18313d4b0 = (_DAT_18313d4b0 * 0x7a922cacfc86fbdf ^ _DAT_18313d300) + uVar2;
  _DAT_18313d1a0 = _DAT_18313d4b0 ^ _DAT_18313d300;
  _DAT_18313d480 = 0x30;
  _DAT_18313d1d8 = func_0x00018661a0f0(_DAT_18313d3b0 + 0xffdcff83eaffe1ff ^ 0x9d);
  _DAT_18313d0d8 = _DAT_18313d3d8 ^ _DAT_18313d1d8 ^ 0x30;
  _DAT_18313d048 = (_DAT_18313d048 ^ _DAT_18313d1d8) + 0x30 ^ 0x8af1e0ee404ca8a4;
  _DAT_18313d300 = (_DAT_18313d300 * -0x6fc3b67134d8a8db ^ _DAT_18313d048) + _DAT_18313d1d8;
  _DAT_18313d288 = _DAT_18313d300 ^ _DAT_18313d048;
  uVar3 = (ulonglong)*(byte *)(unaff_RBP + 0x80);
  auVar5._8_8_ = _UNK_180145388;
  auVar5._0_8_ = uVar3 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_1808a50a0,_DAT_1800170c0);
  _DAT_18313d4d0 = 0x30;
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar4 + _DAT_18313d498;
  if (auVar6._4_4_ < 0) {
    uVar2 = _DAT_18313d318 ^ uVar4;
  }
  _DAT_18313d2e8 = func_0x00018661a0f0(SUB161(auVar5 ^ _DAT_1808a50a0,5) ^ uVar2);
  _DAT_18313d6a8 = uVar3 | 0x30;
  _DAT_18313d120 = (_DAT_18313d120 ^ uVar3 ^ _DAT_18313d2e8) + _DAT_18313d6a8 ^ 0x3cf10a005bd07193;
  _DAT_18313cf08 = (_DAT_18313cf08 * 0x4e1b343080de1c69 ^ _DAT_18313d120) + (uVar3 ^ _DAT_18313d2e8)
  ;
  _DAT_18313d258 = _DAT_18313cf08 ^ _DAT_18313d120;
  _DAT_18313d518 = _DAT_18313d3c0 ^ _DAT_18313d6a8;
  *(char *)(in_RAX + -1) = (char)_DAT_18313d6a8;
  switch(*(uint *)(unaff_RBP + 0x40) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 65f6cde (image 1865f6cde) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f6cde(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  ulonglong uVar11;
  ulonglong unaff_R12;
  uint uVar13;
  undefined1 auVar12 [16];
  ulonglong uVar14;
  ulonglong uVar16;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar20;
  undefined1 auVar19 [16];
  ulonglong uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  ulonglong uVar24;
  uint uVar25;
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar11 = uVar1 ^ 0x84222325 ^ _DAT_18313cfe0;
  lVar9 = (uVar1 ^ 0x84222325) + _DAT_18313d4c8;
  uVar14 = uVar11 + lVar9;
  uVar16 = (unaff_R12 ^ _DAT_18313d4c8) + _DAT_18313cfe0 + unaff_R12;
  uVar11 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar11;
  uVar14 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ unaff_R12 ^ _DAT_18313d4c8;
  _DAT_18313cf78 =
       func_0x00018661a0f0((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18313cfe0 + unaff_R12) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - lVar9);
  uVar8 = _DAT_1808a5270;
  uVar7 = _DAT_1808a5260;
  uVar6 = _DAT_1808a5250;
  uVar13 = (uint)(uVar1 >> 0x20);
  auVar17._8_4_ = (int)uVar1;
  auVar17._0_8_ = uVar1;
  auVar17._12_4_ = uVar13;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = unaff_R12;
  uVar20 = (uint)(unaff_R12 >> 0x20);
  auVar15._8_4_ = (int)unaff_R12;
  auVar15._0_8_ = unaff_R12;
  auVar15._12_4_ = uVar20;
  uVar14 = (ulonglong)_DAT_1808a5230;
  auVar12 = auVar17 | auVar15;
  auVar23._8_4_ = 0xffffffff;
  auVar23._0_8_ = 0xffffffffffffffff;
  auVar23._12_4_ = 0xffffffff;
  uVar11 = (ulonglong)_DAT_1808a5220;
  uVar2 = (ulonglong)_DAT_1808a5230;
  uVar25 = SUB164(auVar17 & auVar15,0);
  uVar3 = (ulonglong)_DAT_1808a5250;
  uVar24 = SUB168(auVar17 & auVar15,0);
  uVar4 = (ulonglong)_DAT_1808a5260;
  uVar5 = (ulonglong)_DAT_1808a5260;
  uVar16 = (ulonglong)_DAT_1808a5280;
  *(undefined1 (*) [16])(unaff_RBP + 0x40) = auVar12;
  uVar18 = SUB164(auVar17 ^ auVar15,0);
  uVar21 = SUB168(auVar17 ^ auVar15,0);
  uVar22 = SUB164(auVar23 ^ auVar19,0);
  uVar10 = uVar1 * unaff_R12 ^ _DAT_18313cf78;
  _DAT_18313cfc8 =
       (((ulonglong)uVar22 * (ulonglong)_DAT_1808a5240 +
         ((SUB168(auVar23 ^ auVar19,0) >> 0x20) * (ulonglong)_DAT_1808a5240 +
          (ulonglong)_DAT_1808a5220 * (ulonglong)uVar22 << 0x20) +
         (ulonglong)uVar7 * (ulonglong)uVar18 +
         ((uVar21 >> 0x20) * (ulonglong)uVar7 + (ulonglong)uVar6 * (ulonglong)uVar18 << 0x20) +
         uVar25 * uVar5 + ((uVar24 >> 0x20) * uVar4 + uVar25 * uVar3 << 0x20) +
         uVar14 * (unaff_R12 & 0xffffffff) + uVar1 +
         (uVar20 * uVar2 + (unaff_R12 & 0xffffffff) * uVar11 << 0x20) +
        (ulonglong)uVar8 * (ulonglong)auVar12._0_4_ +
        (uVar16 * auVar12._0_4_ + (auVar12._0_8_ >> 0x20) * (ulonglong)uVar8 << 0x20)) -
       ((ulonglong)uVar18 * (_DAT_1808a5310 & 0xffffffff) +
        ((ulonglong)_DAT_1808a5320 * (ulonglong)uVar18 +
         (uVar21 >> 0x20) * (_DAT_1808a5310 & 0xffffffff) << 0x20) +
        (ulonglong)*(uint *)(unaff_RBP + 0x40) * (ulonglong)_DAT_1808a52f0 +
        ((ulonglong)_DAT_1808a5300 * (ulonglong)*(uint *)(unaff_RBP + 0x40) +
         (auVar12._0_8_ >> 0x20) * (ulonglong)_DAT_1808a52f0 << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_1808a52d0 +
       ((ulonglong)_DAT_1808a52e0 * (ulonglong)uVar25 + (uVar24 >> 0x20) * (ulonglong)_DAT_1808a52d0
       << 0x20) +
       (unaff_R12 & 0xffffffff) * (ulonglong)_DAT_1808a52c0 +
       ((ulonglong)uVar20 * (ulonglong)_DAT_1808a52c0 +
        (ulonglong)_DAT_1808a52b0 * (unaff_R12 & 0xffffffff) << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_1808a52c0 +
       ((ulonglong)uVar13 * (ulonglong)_DAT_1808a52c0 +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_1808a52b0 << 0x20))) + 0xd99dc3bde2a22936;
  _DAT_18313d238 = _DAT_18313cfc8 ^ uVar10;
  _DAT_18313d298 = (_DAT_18313d298 ^ uVar10) + _DAT_18313cfc8 ^ 0x9cec9d93d347ea19;
  _DAT_18313d288 = (_DAT_18313d288 * 0x4bbd68afe62dd1eb ^ _DAT_18313d298) + uVar10;
  _DAT_18313cf60 = _DAT_18313d288 ^ _DAT_18313d298;
  _DAT_18313d5a8 = _DAT_18313d0f0 ^ _DAT_18313cfc8;
  lVar9 = unaff_RBP + -0x30;
  FUN_18414b520(lVar9);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar9 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x20) + 0x70))
            (*(longlong **)(unaff_RBP + 0x20),*(undefined8 *)(unaff_RBP + 0x10),lVar9);
  switch(0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 65f284a (image 1865f284a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f284a(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint uVar9;
  undefined8 unaff_R14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  
  *(undefined8 *)(unaff_RBP + 0x80) = unaff_R14;
  auVar10._8_4_ = unaff_ESI;
  auVar10._0_8_ = _DAT_18001b640;
  auVar10._12_4_ = 0;
  auVar11 = pshufb(auVar10 ^ _DAT_1808a50b0,_DAT_1800170c0);
  uVar8 = auVar11._8_8_ + auVar11._0_8_;
  uVar12 = uVar8 + _DAT_18313d298;
  if (auVar11._4_4_ < 0) {
    uVar12 = _DAT_18313d5b0 ^ uVar8;
  }
  _DAT_18313d438 = func_0x00018661a0f0(SUB161(auVar10 ^ _DAT_1808a50b0,5) ^ uVar12);
  uVar5 = _UNK_1808a50e8;
  uVar4 = _DAT_1808a50e0;
  uVar3 = _UNK_1808a50d8;
  uVar2 = _DAT_1808a50d0;
  uVar8 = _UNK_1808a50c8;
  uVar12 = _DAT_1808a50c0;
  uVar6 = _DAT_18313d438 ^ unaff_ESI;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6;
  uVar9 = -unaff_ESI;
  _DAT_18313cf98 = (_DAT_18313cf98 ^ uVar6) - (ulonglong)unaff_ESI ^ 0xbf12b5ff30fb44c;
  _DAT_18313d220 = (_DAT_18313d220 * -0x3caf45fcf2396e79 ^ _DAT_18313cf98) + uVar6;
  _DAT_18313d598 = _DAT_18313d220 ^ _DAT_18313cf98;
  _DAT_18313d008 = (ulonglong)uVar9;
  *(uint *)(unaff_RBP + 0x40) = uVar9;
  *(char *)(unaff_RBP + 0x78) = (char)uVar9 + (char)(uVar9 / 10) * -10;
  uVar6 = (~_DAT_18313d620 + 0x80) *
          ((_DAT_18313d598 ^ 0x8422235a) + (ulonglong)((uint)_DAT_18313d598 & 0x8422235a) * 2);
  uVar6 = (uVar6 | _DAT_18313d180) + (uVar6 & _DAT_18313d180);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d340 = func_0x00018661a0f0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  uVar6 = _DAT_18313d340 >> 1 | _DAT_18313d340;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_18313d340;
  _DAT_18313d2c8 = (_DAT_18313d2c8 ^ uVar6) + 0x7f ^ 0x4f3f4c405fd1fcf2;
  _DAT_18313d310 = (_DAT_18313d310 * -0x41ac03acef62ff0b ^ _DAT_18313d2c8) + uVar6;
  _DAT_18313cfc0 = _DAT_18313d310 ^ _DAT_18313d2c8;
  _DAT_18313d2e0 = 0x7f;
  _DAT_18313d0a8 = func_0x00018661a0f0(_DAT_18313d580 ^ 0xffe2ff7c0d0021be);
  _DAT_18313d620 =
       (_DAT_18313d620 ^ _DAT_18313d0a8 & 0xfffffffffc000000) + 0x32 ^ 0xe65b65608b3cc938;
  _DAT_18313d308 =
       (_DAT_18313d308 * -0x216a0b8422452aa5 ^ _DAT_18313d620) +
       (_DAT_18313d0a8 & 0xfffffffffc000000);
  _DAT_18313d058 = _DAT_18313d308 ^ _DAT_18313d620;
  _DAT_18313d430 = 0x32;
  uVar6 = (_DAT_18313d490 ^ uVar12) + _DAT_18313d160 + 0x84222325;
  uVar7 = (_DAT_18313d160 ^ uVar8) + _DAT_18313d490 + 0xd5;
  uVar12 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d490 ^ uVar12;
  uVar8 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18313d160 ^ uVar8;
  _DAT_18313d008 =
       func_0x00018661a0f0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18313d490 + 0xd5) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18313d160 + 0x84222325));
  _DAT_18313d6f0 = (_DAT_18313d6f0 ^ _DAT_18313d008 ^ 0xd5) - 0xd5 ^ 0xd9a166f8435ea005;
  _DAT_18313cf48 = (_DAT_18313cf48 * 0x40f711c2d22d1b79 ^ _DAT_18313d6f0) + (_DAT_18313d008 ^ 0xd5);
  _DAT_18313d460 = _DAT_18313cf48 ^ _DAT_18313d6f0;
  _DAT_18313cf38 = 0x2b;
  _DAT_18313d388 = func_0x00018661a0f0(_DAT_18313d660 + 0xffe2ff7b3fffddff ^ 0x62);
  _DAT_18313d568 = _DAT_18313cf10 ^ _DAT_18313d388 ^ 0x105;
  _DAT_18313d030 = (_DAT_18313d030 ^ _DAT_18313d388) + 0x105 ^ 0x646915bf325954a3;
  _DAT_18313d2f0 = (_DAT_18313d2f0 * 0x6e4275e2bd0e8421 ^ _DAT_18313d030) + _DAT_18313d388;
  _DAT_18313d1d8 = _DAT_18313d2f0 ^ _DAT_18313d030;
  _DAT_18313d500 = 5;
  uVar12 = (_DAT_18313d458 ^ uVar2) + _DAT_18313d440 + 0x84222320;
  uVar8 = (_DAT_18313d440 ^ uVar3) + _DAT_18313d458 + 0x2b;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18313d458 ^ uVar2;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18313d440 ^ uVar3;
  _DAT_18313cf68 =
       func_0x00018661a0f0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18313d458 + 0x2b) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18313d440 + 0x84222320));
  uVar12 = _DAT_18313cf68 ^ 0xd7;
  uVar8 = uVar12 >> 1 | uVar12;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
           ^ uVar12;
  _DAT_18313d438 = _DAT_18313d038 ^ uVar12 ^ 0x30;
  _DAT_18313cfa0 = (_DAT_18313cfa0 ^ uVar12) + 0x30 ^ 0x1a097ced6bf7747b;
  _DAT_18313d660 = (_DAT_18313d660 * -0x3cc88c759fc1da3b ^ _DAT_18313cfa0) + uVar12;
  _DAT_18313d658 = _DAT_18313d660 ^ _DAT_18313cfa0;
  _DAT_18313cfb8 = 0x30;
  uVar12 = (~_DAT_18313d420 + 0x28) *
           ((_DAT_18313d258 ^ 0x8422232c) + (ulonglong)((uint)_DAT_18313d258 & 0x8422232c) * 2);
  uVar12 = (uVar12 | _DAT_18313d190) + (uVar12 & _DAT_18313d190);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18313cf08 =
       func_0x00018661a0f0((uVar12 | 0x8422230b) + (ulonglong)((uint)uVar12 & 0x8422230b));
  uVar12 = (ulonglong)((uint)_DAT_18313cf08 & 9);
  _DAT_18313d110 = (_DAT_18313d110 ^ uVar12) + 0x30 ^ 0x125e2df4df4f3503;
  _DAT_18313d3d8 = (_DAT_18313d3d8 * 0x1d9d870c8b8cf673 ^ _DAT_18313d110) + uVar12;
  _DAT_18313d2c0 = _DAT_18313d3d8 ^ _DAT_18313d110;
  _DAT_18313d248 = 0x30;
  uVar12 = (_DAT_18313d418 ^ uVar4) + _DAT_18313d268 + 0x84222315;
  uVar8 = (_DAT_18313d268 ^ uVar5) + _DAT_18313d418 + 0xa1;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18313d418 ^ uVar4;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18313d268 ^ uVar5;
  _DAT_18313d180 =
       func_0x00018661a0f0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18313d418 + 0xa1) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18313d268 + 0x84222315));
  _DAT_18313d3b8 = _DAT_18313d2d8 ^ _DAT_18313d180 ^ 0xd1;
  _DAT_18313d648 = (_DAT_18313d648 ^ _DAT_18313d180) + 0xd1 ^ 0xc25a4ce9a7ab7f28;
  _DAT_18313d2d8 = (_DAT_18313d2d8 * 0x7ae24d18c08a5487 ^ _DAT_18313d648) + _DAT_18313d180;
  _DAT_18313d508 = _DAT_18313d2d8 ^ _DAT_18313d648;
  _DAT_18313cfa0 = 0xd1;
  _DAT_18313d260 = func_0x00018661a0f0(_DAT_18313d328 ^ 0xffe2ff84a8ffe148);
  _DAT_18313d5a0 = _DAT_18313d0e0 ^ _DAT_18313d260 ^ 0x130;
  _DAT_18313d5e8 = (_DAT_18313d5e8 ^ _DAT_18313d260) + 0x130 ^ 0x65ec945620361378;
  _DAT_18313d498 = (_DAT_18313d498 * -0x2e92d0dd9bbd9df7 ^ _DAT_18313d5e8) + _DAT_18313d260;
  _DAT_18313d568 = _DAT_18313d498 ^ _DAT_18313d5e8;
  _DAT_18313d320 = 0x30;
  _DAT_18313d3c8 = func_0x00018661a0f0(_DAT_18313d4e0 ^ 0xffe0ff7bd8001d0f);
  _DAT_18313d410 = (_DAT_18313d410 ^ _DAT_18313d3c8) + 0x32 ^ 0x1f59421227454117;
  _DAT_18313d210 = (_DAT_18313d210 * 0x58f6f9c353a5cc3b ^ _DAT_18313d410) + _DAT_18313d3c8;
  _DAT_18313cf70 = _DAT_18313d210 ^ _DAT_18313d410;
  _DAT_18313d4c0 = 0x32;
  uVar12 = (~_DAT_18313d2e8 + 0x100) *
           ((_DAT_18313cf90 ^ 0x8422235a) + (ulonglong)((uint)_DAT_18313cf90 & 0x8422235a) * 2);
  uVar12 = (uVar12 | _DAT_18313d408) + (uVar12 & _DAT_18313d408);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18313d568 =
       func_0x00018661a0f0((uVar12 | 0x842223a5) + (ulonglong)((uint)uVar12 & 0x842223a5));
  uVar12 = _DAT_18313d568 << 0x1c | _DAT_18313d568 >> 0x24;
  _DAT_18313d2b8 = (_DAT_18313d2b8 ^ uVar12) + 0x80 ^ 0x4c75b4423afb3fa7;
  _DAT_18313cf20 = (_DAT_18313cf20 * 0x6d7ebbaea11d465d ^ _DAT_18313d2b8) + uVar12;
  _DAT_18313d0b0 = _DAT_18313cf20 ^ _DAT_18313d2b8;
  _DAT_18313d450 = 0x80;
  _DAT_18313d658 = func_0x00018661a0f0(_DAT_18313d108 ^ 0x22ff84b9ffe1eb);
  _DAT_18313d008 = _DAT_18313d008 ^ _DAT_18313d658 ^ 0x3f7f ^ 0x4aa163804faff865;
  _DAT_18313d498 =
       (_DAT_18313d498 * -0x204e6109aefcaecb ^ _DAT_18313d008) + (_DAT_18313d658 ^ 0x3f7f);
  _DAT_18313d6f0 = _DAT_18313d498 ^ _DAT_18313d008;
  _DAT_18313d170 = _DAT_18313d1f0;
  _DAT_18313d458 = 0;
  _DAT_18313d6d0 = func_0x00018661a0f0(_DAT_18313d0e0 ^ 0xffe0ff83f4ffe15e);
  uVar12 = _DAT_18313d6d0 * -0x2aa1c292fb426cd5;
  _DAT_18313d350 = _DAT_18313d398 ^ uVar12 ^ 0x30;
  _DAT_18313d1d8 = (_DAT_18313d1d8 ^ uVar12) + 0x30 ^ 0x275d0dfef4ba4a88;
  _DAT_18313d040 = (_DAT_18313d040 * 0x170a3a6a2d45b7fd ^ _DAT_18313d1d8) + uVar12;
  _DAT_18313d290 = _DAT_18313d040 ^ _DAT_18313d1d8;
  _DAT_18313d560 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x78);
  uVar8 = (ulonglong)bVar1;
  uVar12 = (~_DAT_18313cf40 + 0x31) *
           ((uVar8 ^ 0x84222325 ^ _DAT_18313d608) +
           (ulonglong)((uint)_DAT_18313d608 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar12 = (uVar12 | _DAT_18313d5b0) + (uVar12 & _DAT_18313d5b0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18313d3b0 =
       func_0x00018661a0f0((uVar8 ^ 0x84222315 | uVar12) +
                           (ulonglong)((uint)(uVar8 ^ 0x84222315) & (uint)uVar12));
  uVar12 = (ulonglong)bVar1 * 0x30 ^ _DAT_18313d3b0 ^ 0x30;
  _DAT_18313cf80 = uVar8 | 0x30;
  _DAT_18313cfb8 = (_DAT_18313cfb8 ^ uVar12) + _DAT_18313cf80 ^ 0xd9fb8f53623e755d;
  _DAT_18313d138 = (_DAT_18313d138 * -0x454d5c828d11a763 ^ _DAT_18313cfb8) + uVar12;
  _DAT_18313d460 = _DAT_18313d138 ^ _DAT_18313cfb8;
  *(char *)(unaff_RBP + -0x3c) = (char)_DAT_18313cf80;
  switch(uVar9 < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 66039b3 (image 1866039b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866039b3(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  longlong lVar7;
  undefined8 unaff_XMM7_Qb;
  uint unaff_XMM8_Da;
  uint uVar8;
  uint uVar9;
  
  *(undefined2 *)(unaff_RBP + 0x2e) = *(undefined2 *)(unaff_RBP + 0x60);
  (**(code **)(*unaff_RBX + 0x688))();
  uVar1 = *(uint *)(unaff_RBP + 0x80);
  auVar4._8_8_ = unaff_XMM7_Qb;
  auVar4._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_1808a4f60,_DAT_1800170c0);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_18313d408;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_18313d040 ^ uVar3;
  }
  _DAT_18313d4b8 = func_0x00018661a0f0(SUB161(auVar4 ^ _DAT_1808a4f60,5) ^ uVar2);
  uVar2 = _DAT_18313d4b8 >> 1 | _DAT_18313d4b8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ~(ulonglong)
           ((uint)_DAT_18313d4b8 ^
           (0x40 - (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38)) * 0x40) & (ulonglong)uVar1;
  uVar8 = uVar1 & unaff_XMM8_Da;
  uVar6 = uVar1 | unaff_XMM8_Da;
  uVar9 = uVar1 ^ unaff_XMM8_Da;
  lVar7 = ((ulonglong)uVar1 * (ulonglong)_DAT_1808a5000 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_1808a4ff0;
  uVar3 = ((((ulonglong)uVar9 * (ulonglong)_DAT_1808a4fe0 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_1808a4fd0 +
            ((ulonglong)uVar6 * (ulonglong)_DAT_1808a4fc0 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_1808a4fb0 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_1808a4fa0 << 0x20 |
            (ulonglong)uVar8 * (ulonglong)_DAT_1808a4f90) +
            ((ulonglong)uVar1 * (ulonglong)_DAT_1808a4f80 << 0x20) +
            (ulonglong)uVar1 * (ulonglong)_DAT_1808a4f70 + lVar7) -
          (((ulonglong)uVar9 * (ulonglong)_DAT_1808a5080 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_1808a5070 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_1808a5060 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_1808a5050 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_1808a5040 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_1808a5030) +
           ((ulonglong)uVar1 * (ulonglong)_DAT_1808a5020 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_DAT_1808a5010 + lVar7)) + 0x7c57417a3157b455;
  _DAT_18313d1a8 = _DAT_18313d648 ^ uVar2 ^ uVar3;
  _DAT_18313cf80 = (_DAT_18313cf80 ^ uVar2) + uVar3 ^ 0xe833bcc2646df015;
  _DAT_18313d2f0 = (_DAT_18313d2f0 * 0x27cf7f996d38cfc7 ^ _DAT_18313cf80) + uVar2;
  _DAT_18313d4f8 = _DAT_18313d2f0 ^ _DAT_18313cf80;
  _DAT_18313cfd8 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x50) = (int)uVar3;
  *(int *)(unaff_RBP + 0x58) = *(int *)(unaff_RBP + 0xc);
  switch((int)uVar3 < *(int *)(unaff_RBP + 0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6606a6e (image 186606a6e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186606a6e(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 65fdf9c (image 1865fdf9c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865fdf9c(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_XMM12_Qa;
  ulonglong unaff_XMM12_Qb;
  
  uVar2 = (~param_1 + 0xd32208b9) * ((param_2 ^ 0x24780bb5) + param_3 * 2);
  uVar2 = (uVar2 | in_RAX) + (uVar2 & in_RAX);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d2d0 = func_0x00018661a0f0((uVar2 | 0xf75a030d) + (ulonglong)((uint)uVar2 & 0xf75a030d))
  ;
  uVar2 = _DAT_18313d2d0 - (_DAT_18313d2d0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_18313d2d0;
  _DAT_18313d020 = (_DAT_18313d020 ^ uVar2) + 0xf37a28b8 ^ 0x4508d6cda1af9f65;
  _DAT_18313d4b8 = (_DAT_18313d4b8 * -0xd94f20791e415d9 ^ _DAT_18313d020) + uVar2;
  _DAT_18313d080 = _DAT_18313d4b8 ^ _DAT_18313d020;
  _DAT_18313d2a0 = _DAT_18313d200 ^ 0xf37a28b8;
  _DAT_18313d528 = 0xf37a28b8;
  _DAT_18313cf60 = func_0x00018661a0f0(_DAT_18313d260 ^ 0xffdfff6f5c001971);
  uVar2 = (_DAT_18313cf60 ^ 0x6bd9beed) << 0xb |
          ((_DAT_18313cf60 ^ 0x6bd9beed) & 0x7fffffffffffffff) >> 0x35;
  _DAT_18313d388 = (_DAT_18313d388 ^ uVar2) + 0x73080399 ^ 0x254e21530316ee66;
  _DAT_18313d568 = (_DAT_18313d568 * -0x78a3cf4108240bf1 ^ _DAT_18313d388) + uVar2;
  _DAT_18313d468 = _DAT_18313d568 ^ _DAT_18313d388;
  _DAT_18313d350 = 0x73080399;
  _DAT_18313d4d0 = func_0x00018661a0f0(_DAT_18313cf30 + 0x11ffdde5000bffU ^ 0xe4);
  uVar2 = _DAT_18313d4d0 << 0x28 | _DAT_18313d4d0 >> 0x18;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar2;
  _DAT_18313cf78 = (_DAT_18313cf78 ^ uVar2) - 0xe23e3100 ^ 0xb9fc97c8cd2c2d2d;
  _DAT_18313d0e0 = (_DAT_18313d0e0 * -0xc3eeb20eabd6e79 ^ _DAT_18313cf78) + uVar2;
  _DAT_18313d328 = _DAT_18313d0e0 ^ _DAT_18313cf78;
  _DAT_18313d128 = 0x1dc1cf00;
  _DAT_18313d650 = func_0x00018661a0f0(_DAT_18313d340 + 0xe001db5fffbff ^ 0xc3);
  uVar2 = _DAT_18313d650 >> 1 | _DAT_18313d650;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = _DAT_18313d650 ^ 0xe23e3100 ^
          (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80;
  _DAT_18313d5e8 = _DAT_18313d568 ^ uVar2 ^ 0xe23e31df;
  _DAT_18313d0a8 = (_DAT_18313d0a8 ^ uVar2) + 0xe23e31df ^ 0xf5fc3e1133716761;
  _DAT_18313d350 = (_DAT_18313d350 * -0x21eab3a7c0e19cb3 ^ _DAT_18313d0a8) + uVar2;
  _DAT_18313d090 = _DAT_18313d350 ^ _DAT_18313d0a8;
  _DAT_18313cf50 = 0xe23e31df;
  _DAT_18313d400 = func_0x00018661a0f0(_DAT_18313d588 ^ 0xffd4ffd6a9ff5a65);
  uVar2 = (_DAT_18313d400 ^ 0x1dc1cf00) & 0xffffffffffffffe0;
  _DAT_18313d430 = _DAT_18313d6f0 ^ uVar2 ^ 0x1000000df;
  _DAT_18313d648 = (_DAT_18313d648 ^ uVar2) + 0x1000000df ^ 0xd6862ee58c8a6c58;
  _DAT_18313cf78 = (_DAT_18313cf78 * 0x79c1a0702d44f1cb ^ _DAT_18313d648) + uVar2;
  _DAT_18313d650 = _DAT_18313cf78 ^ _DAT_18313d648;
  _DAT_18313d620 = 0xdf;
  uVar2 = (~_DAT_18313cf08 + 0xb88549f1) *
          ((_DAT_18313d330 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18313d330 & 0x842223fa) * 2);
  uVar2 = (uVar2 | _DAT_18313d588) + (uVar2 & _DAT_18313d588);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d248 = func_0x00018661a0f0((uVar2 | 0x3ca76a0a) + (ulonglong)((uint)uVar2 & 0x3ca76a0a))
  ;
  uVar2 = (_DAT_18313d248 ^ 0xa0bc1b6810) << 0x15 | _DAT_18313d248 >> 0x2b;
  _DAT_18313d020 = _DAT_18313d578 ^ uVar2 ^ 0xb8854acf;
  _DAT_18313d110 = (_DAT_18313d110 ^ uVar2) + 0xb8854acf ^ 0x46aac316819c1ae1;
  _DAT_18313d470 = (_DAT_18313d470 * -0x1fb13d61571d9817 ^ _DAT_18313d110) + uVar2;
  _DAT_18313d4a8 = _DAT_18313d470 ^ _DAT_18313d110;
  _DAT_18313d560 = 0xb8854acf;
  uVar2 = (~_DAT_18313d170 + 0x9a76a0c1) *
          ((_DAT_18313d668 ^ unaff_RBX) + (ulonglong)((uint)_DAT_18313d668 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18313d0c8) + (uVar2 & _DAT_18313d0c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d230 = func_0x00018661a0f0((uVar2 | 0x1e5483e5) + (ulonglong)((uint)uVar2 & 0x1e5483e5))
  ;
  uVar2 = _DAT_18313d230 << 0x31 | _DAT_18313d230 >> 0xf;
  _DAT_18313cf08 = (_DAT_18313cf08 ^ uVar2) - 0x9a76a0c0 ^ 0xb6b255458236dc3d;
  _DAT_18313d2b8 = (_DAT_18313d5c8 * 0x6547f238bc16521 ^ _DAT_18313cf08) + uVar2 ^ _DAT_18313cf08;
  _DAT_18313d5c8 = 0x65895f40;
  uVar2 = (~_DAT_18313d348 + 0x9a76a0c1) *
          ((_DAT_18313d118 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18313d118 & 0x842223fa) * 2);
  uVar2 = (uVar2 | _DAT_18313d358) + (uVar2 & _DAT_18313d358);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d0e0 = func_0x00018661a0f0((uVar2 | 0x1e54833a) + (ulonglong)((uint)uVar2 & 0x1e54833a))
  ;
  uVar2 = _DAT_18313d0e0 >> 1 | _DAT_18313d0e0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18313d0e0;
  _DAT_18313d0c0 = _DAT_18313d148 ^ uVar2 ^ 0x9a76a19f;
  _DAT_18313d1e8 = (_DAT_18313d1e8 ^ uVar2) + 0x9a76a19f ^ 0xacca6aef580d79bb;
  _DAT_18313d6e0 = (_DAT_18313d6e0 * -0x14f0fa6f535089f3 ^ _DAT_18313d1e8) + uVar2;
  _DAT_18313d198 = _DAT_18313d6e0 ^ _DAT_18313d1e8;
  _DAT_18313d2f8 = 0x9a76a19f;
  _DAT_18313d088 = func_0x00018661a0f0(_DAT_18313cfb8 ^ 0xff55001659ffcc4a);
  uVar3 = _DAT_18313d088 ^ 0xffffffdf;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = (uint)bVar1 + (uint)bVar1 ^ uVar3;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar3;
  _DAT_18313d180 = _DAT_18313d198 ^ uVar3 ^ 0x1000000df;
  _DAT_18313d390 = (_DAT_18313d390 ^ uVar3) + 0x1000000df ^ 0x7c8c1f6bf691de5;
  _DAT_18313d3f0 = (_DAT_18313d3f0 * 0x49b960b23544c2b7 ^ _DAT_18313d390) + uVar3;
  _DAT_18313cff8 = _DAT_18313d3f0 ^ _DAT_18313d390;
  _DAT_18313d100 = 0xdf;
  _DAT_18313d228 = func_0x00018661a0f0(_DAT_18313d330 + 0xfff8000404004fff ^ 0x1a);
  uVar2 = (ulonglong)(~(uint)_DAT_18313d228 & 0xf37a28b8) ^ 0x73080399;
  uVar3 = uVar2 - ((uint)(uVar2 >> 1) & 0x51151554);
  uVar3 = (uVar3 & 0x3333333333333331) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar2;
  _DAT_18313d328 = (_DAT_18313d330 ^ uVar2) + 0x80722b21 ^ 0x6a09f7bbfb9519ea;
  _DAT_18313d240 = (_DAT_18313d240 * -0x2f365410edb20f01 ^ _DAT_18313d328) + uVar2;
  _DAT_18313d328 = _DAT_18313d240 ^ _DAT_18313d328;
  _DAT_18313d330 = 0x80722b21;
  _DAT_18313cf18 = func_0x00018661a0f0(_DAT_18313d6c0 ^ 0x80003fbffafbf);
  uVar2 = (_DAT_18313cf18 ^ 0x6d677f87e03c7df8) << 0xf |
          (_DAT_18313cf18 ^ 0x6d677f87e03c7df8) >> 0x31;
  _DAT_18313d6d8 = (_DAT_18313d6d8 ^ uVar2) + 0x73080098 ^ 0xfa8dfd36fb67f7a6;
  _DAT_18313d528 = (_DAT_18313d528 * 0x41597edb7e86b9e1 ^ _DAT_18313d6d8) + uVar2;
  _DAT_18313d260 = _DAT_18313d528 ^ _DAT_18313d6d8;
  _DAT_18313d238 = 0x73080098;
  uVar2 = (_DAT_18313d3a8 ^ unaff_XMM12_Qa) + _DAT_18313d370 + 0x4500804;
  uVar3 = (_DAT_18313d370 ^ unaff_XMM12_Qb) + _DAT_18313d3a8 + 0xe6100130;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18313d3a8 ^ unaff_XMM12_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18313d370 ^ unaff_XMM12_Qb;
  _DAT_18313d600 =
       func_0x00018661a0f0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18313d3a8 + 0xe6100130) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18313d370 + 0x4500804));
  uVar2 = _DAT_18313d600 & 0x7fffffffffffffff;
  _DAT_18313d0b0 = _DAT_18313d020 ^ uVar2 ^ 0x166822c51;
  _DAT_18313d260 = (_DAT_18313d260 ^ uVar2) + 0x166822c51 ^ 0x28fdf010d35e5cd2;
  _DAT_18313d008 = (_DAT_18313d008 * 0x78299c27a5311c3d ^ _DAT_18313d260) + uVar2;
  _DAT_18313d438 = _DAT_18313d008 ^ _DAT_18313d260;
  _DAT_18313d2e0 = 0x66822c51;
  uVar2 = (~_DAT_18313cf38 + 0x66822c52) *
          ((_DAT_18313d2c0 ^ 0xe2a00f74) + (ulonglong)((uint)_DAT_18313d2c0 & 0xe2a00f74) * 2);
  uVar2 = (uVar2 | _DAT_18313d228) + (uVar2 & _DAT_18313d228);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313cfe8 = func_0x00018661a0f0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_18313d348 = _DAT_18313cfe8 & 0x7fffffffffffffff;
  _DAT_18313d6f0 = _DAT_18313d6f0 ^ _DAT_18313d348 ^ 0x3aaf3c8d8e60803f;
  _DAT_18313d238 = (_DAT_18313d238 * -0x4e4c9f5d6d4f13af ^ _DAT_18313d6f0) + _DAT_18313d348;
  _DAT_18313d020 = _DAT_18313d238 ^ _DAT_18313d6f0;
  _DAT_18313d198 = 0;
  _DAT_18313d488 = func_0x00018661a0f0(_DAT_18313d4f8 + 0x22ff8369ffddffU ^ 0xae);
  _DAT_18313d140 = _DAT_18313d038 ^ _DAT_18313d2e8 ^ 0xdf;
  _DAT_18313d4b0 = (_DAT_18313d4b0 ^ _DAT_18313d2e8) + 0xdf ^ 0xcc259ff7c6d26896;
  _DAT_18313d370 = (_DAT_18313d370 * 0x3541b032ef11bf17 ^ _DAT_18313d4b0) + _DAT_18313d2e8;
  _DAT_18313d600 = _DAT_18313d370 ^ _DAT_18313d4b0;
  _DAT_18313d478 = 0xdf;
  uVar2 = ((_DAT_18313d190 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18313d190 & 0x842223fa) * 2) *
          -_DAT_18313cfa8;
  uVar2 = (uVar2 | _DAT_18313d450) + (uVar2 & _DAT_18313d450);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d360 = func_0x00018661a0f0((uVar2 | 0x842223fa) + (ulonglong)((uint)uVar2 & 0x842223fa))
  ;
  uVar2 = (ulonglong)(~(uint)_DAT_18313d360 & 0xdf);
  _DAT_18313d2c8 = _DAT_18313d0a0 ^ uVar2 ^ 0xdf;
  _DAT_18313d048 = (_DAT_18313d048 ^ uVar2) + 0xdf ^ 0x43795032bca50160;
  _DAT_18313d1e8 = (_DAT_18313d1e8 * -0x40a58d2e7be5af0f ^ _DAT_18313d048) + uVar2;
  _DAT_18313d228 = _DAT_18313d1e8 ^ _DAT_18313d048;
  _DAT_18313d510 = 0xdf;
  uVar2 = (~_DAT_18313d030 + 0xa05a2891) *
          ((_DAT_18313d608 ^ 0x24780bb5) + (ulonglong)((uint)_DAT_18313d608 & 0x24780bb5) * 2);
  uVar2 = (uVar2 | _DAT_18313cf68) + (uVar2 & _DAT_18313cf68);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18313d500 = func_0x00018661a0f0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_18313d198 = _DAT_18313d198 ^ _DAT_18313d500 ^ 0xa05a2890 ^ 0x73372a4d294b6d97;
  _DAT_18313d560 =
       (_DAT_18313d560 * 0x511ce775c4f616f5 ^ _DAT_18313d198) + (_DAT_18313d500 ^ 0xa05a2890);
  _DAT_18313d340 = _DAT_18313d560 ^ _DAT_18313d198;
  _DAT_18313d068 = 0;
  switch(0xdf < *(int *)(unaff_RBP + 0x40)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 65f369a (image 1865f369a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865f369a(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong in_RCX;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar11;
  undefined1 auVar10 [16];
  uint uVar12;
  uint uVar13;
  
  uVar6 = param_1 + in_RCX + param_4;
  uVar9 = param_3 + in_RAX + param_2;
  param_1 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ param_1;
  param_3 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ param_3;
  _DAT_18313d020 =
       func_0x00018661a0f0((param_3 << 0x1d | param_3 >> 0x23) - (in_RAX + param_2) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_4));
  _DAT_18313d330 =
       (_DAT_18313d330 ^ _DAT_18313d020 ^ 0xcfe7ebdfbdffdbfb) + 0xcfe7ebdfbdffdbfb ^
       0x8d4d0a6bb014f6c3;
  _DAT_18313d1d8 =
       (_DAT_18313d1d8 * 0x5614c1209a40e5b5 ^ _DAT_18313d330) +
       (_DAT_18313d020 ^ 0xcfe7ebdfbdffdbfb);
  _DAT_18313d6f0 = _DAT_18313d1d8 ^ _DAT_18313d330;
  _DAT_18313d548 = 0xcfe7ebdfbdffdbfb;
  uVar6 = (_DAT_18313d320 ^ _DAT_1808a50f0) + _DAT_18313d5c0 + 0xa54071de05c97bb2;
  uVar9 = (_DAT_18313d5c0 ^ _UNK_1808a50f8) + _DAT_18313d320 + 0x136b9cf22957f210;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d320 ^ _DAT_1808a50f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d5c0 ^ _UNK_1808a50f8;
  _DAT_18313d0a8 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313d320 + 0x136b9cf22957f210) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d5c0 + 0xa54071de05c97bb2));
  _DAT_18313d030 = (_DAT_18313d030 ^ _DAT_18313d130) + 0xb62bed2ca8bcaa87 ^ 0x2789600fdde076e4;
  _DAT_18313d550 = (_DAT_18313d550 * -0x21a4efea367b3a9 ^ _DAT_18313d030) + _DAT_18313d130;
  _DAT_18313d3f8 = _DAT_18313d550 ^ _DAT_18313d030;
  _DAT_18313d3b0 = _DAT_18313d108 ^ 0xb62bed2ca8bcaa87;
  _DAT_18313d290 = 0xb62bed2ca8bcaa87;
  _DAT_18313d458 = func_0x00018661a0f0(_DAT_18313d410 + 0x6962d2b81d5c5b9fU ^ 100);
  _DAT_18313d340 = (_DAT_18313d340 ^ _DAT_18313d458) + 0x5f299316b3b1b9c0 ^ 0x85b36b441eb6f5f5;
  _DAT_18313d120 = (_DAT_18313d120 * 0x2d4c1ed605428e1f ^ _DAT_18313d340) + _DAT_18313d458;
  _DAT_18313d0f0 = _DAT_18313d120 ^ _DAT_18313d340;
  _DAT_18313d630 = 0x5f299316b3b1b9c0;
  uVar6 = (_DAT_18313cfd0 ^ _DAT_1808a5100) + (_DAT_18313d020 - 0x84222325);
  uVar9 = (_DAT_18313d020 ^ _UNK_1808a5108) + _DAT_18313cfd0 + 0xa0d66ce94c4e4640;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313cfd0 ^ _DAT_1808a5100;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d020 ^ _UNK_1808a5108;
  _DAT_18313d0f0 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313cfd0 + 0xa0d66ce94c4e4640) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d020 - 0x84222325));
  uVar6 = (_DAT_18313d0f0 ^ 0xfffffffffffffffe) << 0x24 |
          (_DAT_18313d0f0 ^ 0xfffffffffffffffe) >> 0x1c;
  _DAT_18313d1a8 = _DAT_18313d2a0 ^ uVar6 ^ 0xa0d66ce94c4e463e;
  _DAT_18313cfd0 = (_DAT_18313cfd0 ^ uVar6) + 0xa0d66ce94c4e463e ^ 0xb10e7d415938af7d;
  _DAT_18313d340 = (_DAT_18313d340 * -0x5aa208a2d98ce197 ^ _DAT_18313cfd0) + uVar6;
  _DAT_18313d288 = _DAT_18313d340 ^ _DAT_18313cfd0;
  _DAT_18313d458 = 0xa0d66ce94c4e463e;
  uVar6 = (_DAT_18313d340 ^ _DAT_1808a5110) + _DAT_18313d468 + 0xa0d66ce9c86c651b;
  uVar9 = (_DAT_18313d468 ^ _UNK_1808a5118) + _DAT_18313d340 + 0x5f299316b3b1b9c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d340 ^ _DAT_1808a5110;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d468 ^ _UNK_1808a5118;
  _DAT_18313cf70 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313d340 + 0x5f299316b3b1b9c0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d468 + 0xa0d66ce9c86c651b));
  uVar6 = _DAT_18313cf70 & 0xfffffffff0000000;
  _DAT_18313d180 = _DAT_18313d6d8 ^ uVar6 ^ 0xfffffffffffffffe;
  _DAT_18313cf40 = (_DAT_18313cf40 ^ uVar6) - 2 ^ 0xc328a90f299c876e;
  _DAT_18313d238 = (_DAT_18313d238 * 0x4a5edf3c8de3abd5 ^ _DAT_18313cf40) + uVar6;
  _DAT_18313d688 = _DAT_18313d238 ^ _DAT_18313cf40;
  _DAT_18313d170 = 0xfffffffffffffffe;
  uVar6 = (~_DAT_18313d368 + 0xad5dceaaa8dc3105) *
          ((_DAT_18313d260 ^ 0x84222325) + (ulonglong)((uint)_DAT_18313d260 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_18313d5c8) + (uVar6 & _DAT_18313d5c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d3e8 = func_0x00018661a0f0((uVar6 | 0xad5dceaa2cfe1221) + (uVar6 & 0xad5dceaa2cfe1221));
  uVar6 = _DAT_18313d3e8 << 0x37 | (_DAT_18313d3e8 & 0x7fffffffffffffff) >> 9 & 0xffbfffffffffc000;
  _DAT_18313d2a8 = (_DAT_18313d2a8 ^ uVar6) + 0x52a231555723cefc ^ 0x142ea7baa06018af;
  _DAT_18313d438 = (_DAT_18313d438 * -0x7f0a41bd9c71c053 ^ _DAT_18313d2a8) + uVar6;
  _DAT_18313d358 = _DAT_18313d438 ^ _DAT_18313d2a8;
  _DAT_18313d388 = 0x52a231555723cefc;
  uVar6 = (~_DAT_18313d208 + 0xad5dceaaa8dc3105) *
          ((_DAT_18313d6d0 ^ 0xffffffff7bdddcdb) + (_DAT_18313d6d0 & 0x7fffffff7bdddcdb) * 2);
  uVar6 = (uVar6 | _DAT_18313d340) + (uVar6 & _DAT_18313d340);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d330 = func_0x00018661a0f0((uVar6 | 0x52a23155d301eddf) + (uVar6 & 0x52a23155d301eddf));
  _DAT_18313d2f8 = _DAT_18313d128 ^ _DAT_18313d330 ^ 0xad5dceaaa8dc3102;
  _DAT_18313cfb0 = (_DAT_18313cfb0 ^ _DAT_18313d330) + 0xad5dceaaa8dc3102 ^ 0x679e62000d45cc28;
  _DAT_18313d4a0 = (_DAT_18313d4a0 * -0x51e94ac554894e8d ^ _DAT_18313cfb0) + _DAT_18313d330;
  _DAT_18313d670 = _DAT_18313d4a0 ^ _DAT_18313cfb0;
  _DAT_18313cf50 = 0xad5dceaaa8dc3102;
  uVar6 = (~_DAT_18313d168 + 0x52a231555723cefd) *
          ((_DAT_18313d5c8 ^ 0xad5dceaa2cfe1227) + (_DAT_18313d5c8 & 0x2d5dceaa2cfe1227) * 2);
  uVar6 = (uVar6 | _DAT_18313d5b0) + (uVar6 & _DAT_18313d5b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d450 = func_0x00018661a0f0((uVar6 | 0xffffffff7bdddcdb) + (uVar6 & 0xffffffff7bdddcdb));
  uVar6 = (_DAT_18313d450 ^ 0xad5dceaaa8dc3102) * -0x3c00ac6bd1d7564f;
  _DAT_18313d5b0 = _DAT_18313d4e0 ^ uVar6 ^ 0xfffffffffffffffe;
  _DAT_18313d2e0 = (_DAT_18313d2e0 ^ uVar6) - 2 ^ 0x145c75cce5eb522f;
  _DAT_18313d1c0 = (_DAT_18313d1c0 * 0x19a7fd9094a9f789 ^ _DAT_18313d2e0) + uVar6;
  _DAT_18313d010 = _DAT_18313d1c0 ^ _DAT_18313d2e0;
  _DAT_18313d298 = 0xfffffffffffffffe;
  _DAT_18313cfb0 = func_0x00018661a0f0(_DAT_18313d418 ^ 0xa93b3162e344b241);
  uVar6 = (_DAT_18313cfb0 ^ 0x572b751840) & 0x7fffffffff;
  _DAT_18313d6d0 = (_DAT_18313d6d0 ^ uVar6) + 0xc00e3228d48ae7c0 ^ 0x383bb0098401b2be;
  _DAT_18313d6e8 = (_DAT_18313d6e8 * 0x7e262c98ff9ea189 ^ _DAT_18313d6d0) + uVar6;
  _DAT_18313d6a0 = _DAT_18313d6e8 ^ _DAT_18313d6d0;
  _DAT_18313d1a8 = 0xc00e3228d48ae7c0;
  _DAT_18313d138 = func_0x00018661a0f0(_DAT_18313d0a8 ^ 0xe73bfa5068d2a778);
  _DAT_18313d178 = _DAT_18313d1c0 ^ _DAT_18313d6e0 ^ 0x3ff1cdd72b75183e;
  _DAT_18313d5f8 = (_DAT_18313d5f8 ^ _DAT_18313d6e0) + 0x3ff1cdd72b75183e ^ 0x600771af025389a9;
  _DAT_18313d1e0 = (_DAT_18313d1e0 * -0x7cfd88f8c5b0ff9d ^ _DAT_18313d5f8) + _DAT_18313d6e0;
  _DAT_18313d0c8 = _DAT_18313d1e0 ^ _DAT_18313d5f8;
  _DAT_18313cf68 = 0x3ff1cdd72b75183e;
  uVar6 = (~_DAT_18313d098 + 0xb62bed2ca8bcaa88) *
          ((_DAT_18313d548 ^ 0xcfe7ebdf39ddf8de) + (_DAT_18313d548 & 0x4fe7ebdf39ddf8de) * 2);
  uVar6 = (uVar6 | _DAT_18313d1a8) + (uVar6 & _DAT_18313d1a8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d6a0 = func_0x00018661a0f0((uVar6 | 0x79cc06f391615259) + (uVar6 & 0x79cc06f391615259));
  uVar9 = _UNK_1808a5128;
  uVar6 = _DAT_1808a5120;
  uVar2 = _DAT_18313d6a0 << 0x22 | _DAT_18313d6a0 >> 0x1e;
  uVar1 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = uVar2 ^ 0xcfe7ebdfbdffdbfb ^
          ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  _DAT_18313d4c8 = _DAT_18313d4a0 ^ uVar1 ^ 0x8613d90c66bc8682;
  _DAT_18313d660 = (_DAT_18313d660 ^ uVar1) + 0x8613d90c66bc8682 ^ 0x1affec33c7cda515;
  _DAT_18313d048 = (_DAT_18313d048 * 0x19258c9a03fc881 ^ _DAT_18313d660) + uVar1;
  _DAT_18313d158 = _DAT_18313d048 ^ _DAT_18313d660;
  _DAT_18313cff8 = 0x8613d90c66bc8682;
  uVar1 = (_DAT_18313d000 ^ _DAT_1808a5120) + _DAT_18313d208 + 0xcfe7ebdf39ddf8de;
  uVar2 = (_DAT_18313d208 ^ _UNK_1808a5128) + _DAT_18313d000 + 0xb62bed2ca8bcaa87;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18313d000 ^ _DAT_1808a5120;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18313d208 ^ _UNK_1808a5128;
  _DAT_18313d5d8 =
       func_0x00018661a0f0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18313d000 + 0xb62bed2ca8bcaa87) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18313d208 + 0xcfe7ebdf39ddf8de));
  _DAT_18313d620 =
       (_DAT_18313d620 ^ _DAT_18313d5d8 & 0x1fffffffffffffff) + 0x79cc06f31543717c ^
       0xc030eb8b4c5371f4;
  _DAT_18313cf58 =
       (_DAT_18313cf58 * 0x109935bf8d9e1a47 ^ _DAT_18313d620) +
       (_DAT_18313d5d8 & 0x1fffffffffffffff);
  _DAT_18313d5b0 = _DAT_18313cf58 ^ _DAT_18313d620;
  _DAT_18313d248 = 0x79cc06f31543717c;
  uVar1 = (_DAT_18313cf00 ^ uVar6) + _DAT_18313d198 + 0xcfe7ebdf39ddf8de;
  uVar2 = (_DAT_18313d198 ^ uVar9) + _DAT_18313cf00 + 0xb62bed2ca8bcaa87;
  uVar6 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18313cf00 ^ uVar6;
  uVar9 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18313d198 ^ uVar9;
  _DAT_18313cf48 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313cf00 + 0xb62bed2ca8bcaa87) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d198 + 0xcfe7ebdf39ddf8de));
  uVar6 = _DAT_18313cf48 & 0xffffffffffe00000;
  uVar9 = uVar6 >> 1 | uVar6;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar6;
  uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555540);
  uVar9 = (uVar9 & 0x3333333333333300) + (uVar9 >> 2 & 0x3333333333333330);
  uVar6 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f03) * 0x101010101010101 >> 0x38 ^ uVar6;
  _DAT_18313cf18 = (_DAT_18313cf18 ^ uVar6) + 0x8623e90ca8bc8a83 ^ 0x63536fe58e0561fe;
  _DAT_18313d568 = (_DAT_18313d568 * 0x70f81adf6d0615d1 ^ _DAT_18313cf18) + uVar6;
  _DAT_18313d108 = _DAT_18313d568 ^ _DAT_18313cf18;
  _DAT_18313d2f0 = 0x8623e90ca8bc8a83;
  uVar6 = (_DAT_18313d3b8 ^ _DAT_1808a5130) + _DAT_18313d3a8 + 0x79cc06f391615259;
  uVar9 = (_DAT_18313d3a8 ^ _UNK_1808a5138) + _DAT_18313d3b8 + 0xc47d21951791506;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d3b8 ^ _DAT_1808a5130;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d3a8 ^ _UNK_1808a5138;
  _DAT_18313d388 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313d3b8 + 0xc47d21951791506) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d3a8 + 0x79cc06f391615259));
  _DAT_18313d480 = _DAT_18313d500 ^ _DAT_18313d388 ^ 0x8613d90c66bc8682;
  _DAT_18313d1b0 = (_DAT_18313d1b0 ^ _DAT_18313d388) + 0x8613d90c66bc8682 ^ 0xfb1455f75aefe98c;
  _DAT_18313d100 = (_DAT_18313d100 * 0x14bcfae78799f1cf ^ _DAT_18313d1b0) + _DAT_18313d388;
  _DAT_18313d1a0 = _DAT_18313d100 ^ _DAT_18313d1b0;
  _DAT_18313d1b8 = 0x8613d90c66bc8682;
  _DAT_18313d430 = func_0x00018661a0f0(_DAT_18313cf00 + 0xffe0ff7c24ffddff ^ 0xb2);
  _DAT_18313d250 = _DAT_18313d430 ^ 0xf0281f390b20dc86;
  _DAT_18313cfd8 = _DAT_18313cfd8 ^ _DAT_18313d250 ^ 0x3a1cca3ca14e09fb;
  _DAT_18313d120 = (_DAT_18313d120 * -0x50e37e7a4e7ffde5 ^ _DAT_18313cfd8) + _DAT_18313d250;
  _DAT_18313d2f8 = _DAT_18313d120 ^ _DAT_18313cfd8;
  _DAT_18313d490 = 0;
  uVar6 = ((_DAT_18313d1e0 ^ 0xffffffff7bdddcdb) + (_DAT_18313d1e0 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_18313d168;
  uVar6 = (uVar6 | _DAT_18313cf68) + (uVar6 & _DAT_18313cf68);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d6c0 = func_0x00018661a0f0((uVar6 | 0xffffffff7bdddcdb) + (uVar6 & 0xffffffff7bdddcdb));
  uVar9 = _DAT_18313d6c0 * -0xe60f2418b3756b5;
  uVar6 = uVar9 >> 1 | uVar9;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar9;
  _DAT_18313d2b0 = _DAT_18313cf30 ^ uVar9 ^ 0xfffffffffffffffe;
  _DAT_18313d418 = (_DAT_18313d418 ^ uVar9) - 2 ^ 0xb523ed45387970c2;
  _DAT_18313d110 = (_DAT_18313d110 * -0x79764d6f1c9a6ea1 ^ _DAT_18313d418) + uVar9;
  _DAT_18313d1d0 = _DAT_18313d110 ^ _DAT_18313d418;
  _DAT_18313cf50 = 0xfffffffffffffffe;
  uVar6 = (_DAT_18313d2d8 ^ _DAT_1808a5140) + _DAT_18313d570 + 0x8c64eb933cd9338d;
  uVar9 = (_DAT_18313d570 ^ _UNK_1808a5148) + _DAT_18313d2d8 + 0x8c64eb93b8fb10a8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d2d8 ^ _DAT_1808a5140;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d570 ^ _UNK_1808a5148;
  _DAT_18313d118 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313d2d8 + 0x8c64eb93b8fb10a8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d570 + 0x8c64eb933cd9338d));
  _DAT_18313d2f0 = _DAT_18313d2f0 ^ _DAT_18313d118 & 0x7fffffffffffffff ^ 0x9152dede62b26780;
  _DAT_18313d5c8 =
       (_DAT_18313d5c8 * 0x2adfe0de2dd9690b ^ _DAT_18313d2f0) +
       (_DAT_18313d118 & 0x7fffffffffffffff);
  _DAT_18313d2d8 = _DAT_18313d5c8 ^ _DAT_18313d2f0;
  _DAT_18313d4c8 = 0;
  _DAT_18313d0c8 = func_0x00018661a0f0(_DAT_18313d430 ^ 0x14bb0715c5574de9);
  _DAT_18313d0f8 = _DAT_18313cf18 ^ _DAT_18313d0c8 ^ 0xfffffffffffffffe;
  _DAT_18313d698 = (_DAT_18313d698 ^ _DAT_18313d0c8) - 2 ^ 0x393e79393fe9498e;
  _DAT_18313d4b0 = (_DAT_18313d4b0 * 0x1cbcbcdc9bfeaf13 ^ _DAT_18313d698) + _DAT_18313d0c8;
  _DAT_18313d4d0 = _DAT_18313d4b0 ^ _DAT_18313d698;
  _DAT_18313d670 = 0xfffffffffffffffe;
  uVar6 = *(ulonglong *)(unaff_RBP + 0x40);
  uVar9 = uVar6 ^ 0x84222325 ^ _DAT_18313d3f0;
  lVar4 = (uVar6 ^ 0x84222325) + _DAT_18313d188;
  uVar1 = uVar9 + lVar4;
  uVar2 = (_DAT_18313d188 ^ 0xfffffffffffffffe) + (_DAT_18313d3f0 - 2);
  uVar9 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ uVar9;
  uVar1 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18313d188 ^ 0xfffffffffffffffe;
  _DAT_18313d4a0 =
       func_0x00018661a0f0((uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18313d3f0 - 2) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar4);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar6;
  uVar11 = (uint)(uVar6 >> 0x20);
  auVar7._8_4_ = (uint)uVar6;
  auVar7._0_8_ = uVar6;
  auVar7._12_4_ = uVar11;
  uVar12 = (uint)DAT_1800b8c60 | (uint)uVar6;
  auVar8._8_4_ = 0xffffffff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8._12_4_ = 0xffffffff;
  uVar13 = SUB164(auVar7 & _DAT_1800b8c60,0);
  _DAT_18313d590 = _DAT_18313d4a0 ^ 0xfffffffffffffffe;
  lVar4 = ((uVar6 & 0xffffffff) * (ulonglong)_DAT_1808a51b0 +
           (ulonglong)uVar11 * (ulonglong)_DAT_1808a51a0 << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_1808a51a0;
  uVar5 = SUB164(auVar8 ^ auVar10,0);
  uVar1 = ((((ulonglong)uVar12 * (ulonglong)_DAT_1808a5170 + _DAT_1808a5190 << 0x20) +
            (ulonglong)_DAT_1808a5180 * (ulonglong)uVar12 + lVar4 +
           (ulonglong)uVar13 * (ulonglong)_DAT_1808a5180 +
           ((SUB168(auVar7 & _DAT_1800b8c60,0) >> 0x20) * (ulonglong)_DAT_1808a5180 +
            (ulonglong)uVar13 * (ulonglong)_DAT_1808a5170 << 0x20) +
           ((ulonglong)_DAT_1808a5160 * (uVar6 & 0xffffffff) +
            (ulonglong)_DAT_1808a5150 * (ulonglong)uVar11 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_1808a5150) -
          ((ulonglong)uVar5 * (ulonglong)_DAT_1808a51d0 +
           ((SUB168(auVar8 ^ auVar10,0) >> 0x20) * (ulonglong)_DAT_1808a51d0 +
            (ulonglong)_DAT_1808a51c0 * (ulonglong)uVar5 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_1808a51d0 +
           ((ulonglong)uVar11 * (ulonglong)_DAT_1808a51d0 +
            (uVar6 & 0xffffffff) * (ulonglong)_DAT_1808a51c0 << 0x20) + lVar4)) + 0xd7886990f6c22757
  ;
  _DAT_18313d3b8 = (_DAT_18313d3b8 ^ _DAT_18313d590) + uVar1 ^ 0xd3d168f1d0759724;
  _DAT_18313d590 =
       ((_DAT_18313d1b8 ^ _DAT_18313d590 ^ uVar1) * 0x6a6c04713eef469d ^ _DAT_18313d3b8) +
       _DAT_18313d590;
  _DAT_18313d5d0 = _DAT_18313d590 ^ _DAT_18313d3b8;
  _DAT_18313d558 = uVar1;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar1) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  lVar4 = _DAT_18313d0a0 + 0x9222f421f749452a;
  lVar3 = _DAT_18313d198 + 0xa7d8711670d414bf;
  uVar6 = (_DAT_18313d198 ^ _DAT_1808a51e0) + lVar4;
  uVar9 = (_DAT_18313d0a0 ^ _UNK_1808a51e8) + lVar3;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d198 ^ _DAT_1808a51e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d0a0 ^ _UNK_1808a51e8;
  *(ulonglong *)(unaff_RBP + 0x40) = uVar1 + unaff_RBP + -0x50;
  _DAT_18313d2c0 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - lVar3 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar4);
  _DAT_18313d0a0 =
       (_DAT_18313d0a0 ^ ~_DAT_18313d2c0 & 0x9222f421736b660f) + 0xb7faf53773ff76bf ^
       0xf6696642af9db420;
  _DAT_18313cfb0 =
       (_DAT_18313cfb0 * -0x490740df1508978f ^ _DAT_18313d0a0) +
       (~_DAT_18313d2c0 & 0x9222f421736b660f);
  _DAT_18313d000 = _DAT_18313cfb0 ^ _DAT_18313d0a0;
  _DAT_18313d360 = -0x48050ac88c008941;
  uVar6 = (~_DAT_18313d3f0 + 0xbc28bb2fee6b6d4b) *
          ((_DAT_18313d448 ^ 0x607dc75b83ceaf74) + (_DAT_18313d448 & 0x607dc75b83ceaf74) * 2);
  uVar6 = (uVar6 | _DAT_18313d128) + (uVar6 & _DAT_18313d128);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d498 = func_0x00018661a0f0((uVar6 | 0xdc557c746da5c23e) + (uVar6 & 0xdc557c746da5c23e));
  _DAT_18313d540 = (_DAT_18313d540 ^ _DAT_18313d498) + 0xdc557c74e987e11b ^ 0x24f8c2e2e6d898b3;
  _DAT_18313d000 = (_DAT_18313d000 * -0x45a45efd95048731 ^ _DAT_18313d540) + _DAT_18313d498;
  _DAT_18313cf90 = _DAT_18313d000 ^ _DAT_18313d540;
  _DAT_18313d640 = 0xdc557c74e987e11b;
  uVar6 = (~_DAT_18313d1a8 + 0xb13e2dfc7afd3ee5) *
          ((_DAT_18313d080 ^ 0x84222325) + (ulonglong)((uint)_DAT_18313d080 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_18313d040) + (uVar6 & _DAT_18313d040);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d460 = func_0x00018661a0f0((uVar6 | 0xb13e2dfcfedf1dc1) + (uVar6 & 0xb13e2dfcfedf1dc1));
  uVar6 = _DAT_18313d460 - (_DAT_18313d460 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_18313d460;
  _DAT_18313d6a8 = (_DAT_18313d6a8 ^ uVar6) + 0x4ec1d2038502c11c ^ 0x8a4711eb9cd9138c;
  _DAT_18313d660 = (_DAT_18313d660 * -0x43679ce06d75f803 ^ _DAT_18313d6a8) + uVar6;
  _DAT_18313d198 = _DAT_18313d660 ^ _DAT_18313d6a8;
  _DAT_18313d090 = 0x4ec1d2038502c11c;
  _DAT_18313d5a8 = func_0x00018661a0f0(_DAT_18313d6a8 + 0xcc0afdf2542bb670 ^ 0x2e);
  uVar6 = _DAT_18313d5a8 & 0xfffffffffffe0000;
  _DAT_18313cfb0 = _DAT_18313d238 ^ uVar6 ^ 0xb13e2dfc7afd3ef9;
  _DAT_18313d578 = (_DAT_18313d578 ^ uVar6) + 0xb13e2dfc7afd3ef9 ^ 0x5b523e0f543e937d;
  _DAT_18313cf18 = (_DAT_18313cf18 * 0x27dc6565814f7887 ^ _DAT_18313d578) + uVar6;
  _DAT_18313cf78 = _DAT_18313cf18 ^ _DAT_18313d578;
  _DAT_18313d518 = 0xb13e2dfc7afd3ef9;
  uVar6 = (~_DAT_18313d230 + 0x692642c9f9d3b9ae) *
          ((_DAT_18313cf78 ^ 0x84222325) + (ulonglong)((uint)_DAT_18313cf78 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_18313cf28) + (uVar6 & _DAT_18313cf28);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d118 = func_0x00018661a0f0((uVar6 | 0x692642c97df19a88) + (uVar6 & 0x692642c97df19a88));
  _DAT_18313d488 = (_DAT_18313d488 ^ _DAT_18313d118) + 0x96d9bd36062c4653 ^ 0x8cb8e9f6892763d0;
  _DAT_18313d6f8 = (_DAT_18313d6f8 * -0x55fbb04c4821459f ^ _DAT_18313d488) + _DAT_18313d118;
  _DAT_18313d470 = _DAT_18313d6f8 ^ _DAT_18313d488;
  _DAT_18313d350 = 0x96d9bd36062c4653;
  uVar6 = (~_DAT_18313d400 + 0x96ecdd8113ab5fe) *
          ((_DAT_18313cf40 ^ 0x84222325) + (ulonglong)((uint)_DAT_18313cf40 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_18313d608) + (uVar6 & _DAT_18313d608);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d0c8 = func_0x00018661a0f0((uVar6 | 0x96ecdd8951896d8) + (uVar6 & 0x96ecdd8951896d8));
  _DAT_18313d200 = (_DAT_18313d200 ^ _DAT_18313d0c8) + 0xf6913227eec54a03 ^ 0x24c78260c4c7465d;
  _DAT_18313d600 = (_DAT_18313d600 * -0x4df5b988a94a8329 ^ _DAT_18313d200) + _DAT_18313d0c8;
  _DAT_18313d030 = _DAT_18313d600 ^ _DAT_18313d200;
  _DAT_18313cfe8 = 0xf6913227eec54a03;
  uVar6 = (_DAT_18313d188 ^ _DAT_1808a51f0) + _DAT_18313d260 + 0x84222330;
  uVar9 = (_DAT_18313d260 ^ _UNK_1808a51f8) + _DAT_18313d188 + 0x96ecdd8113ab5fd;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d188 ^ _DAT_1808a51f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d260 ^ _UNK_1808a51f8;
  _DAT_18313d450 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313d188 + 0x96ecdd8113ab5fd) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d260 + 0x84222330));
  uVar6 = (_DAT_18313d450 ^ 0x96ecdd8113ab5fd) & 0x7fffffffffffffff;
  uVar9 = uVar6 - (((_DAT_18313d450 ^ 0x96ecdd8113ab5fd) & 0x7fffffffffffffff) >> 1 &
                  0x1555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar6;
  _DAT_18313d098 = _DAT_18313d3d8 ^ uVar6 ^ 0x96ecdd8113ab612;
  _DAT_18313cf50 = (_DAT_18313cf50 ^ uVar6) + 0x96ecdd8113ab612 ^ 0xc96250924dd19e46;
  _DAT_18313d140 = (_DAT_18313d140 * 0x72a4b2c6ea16a113 ^ _DAT_18313cf50) + uVar6;
  _DAT_18313d590 = _DAT_18313d140 ^ _DAT_18313cf50;
  _DAT_18313d3d0 = 0x96ecdd8113ab612;
  uVar6 = (~_DAT_18313cf90 + 0xf6913227eec54a04) *
          ((_DAT_18313d3e8 ^ 0x96ecdd895189537) + (_DAT_18313d3e8 & 0x96ecdd895189537) * 2);
  uVar6 = (uVar6 | _DAT_18313d680) + (uVar6 & _DAT_18313d680);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d1e0 = func_0x00018661a0f0((uVar6 | 0xffffffff7bdddf34) + (uVar6 & 0xffffffff7bdddf34));
  uVar6 = _DAT_18313d1e0 * -0x5bc1b9be99df50c1;
  _DAT_18313cfd8 = _DAT_18313d3a8 ^ uVar6 ^ 0x15;
  _DAT_18313d250 = (_DAT_18313d250 ^ uVar6) + 0x15 ^ 0xcf49f56c05edceca;
  _DAT_18313d048 = (_DAT_18313d048 * -0x4bbc928e50fc377f ^ _DAT_18313d250) + uVar6;
  _DAT_18313d0b0 = _DAT_18313d048 ^ _DAT_18313d250;
  _DAT_18313d0c0 = 0x15;
  _DAT_18313d2f8 = func_0x00018661a0f0(_DAT_18313d360 + 0xc3b3aef27f86d9a6U ^ 0xaa);
  uVar6 = _DAT_18313d2f8 * 0x17872c75626c0000 | _DAT_18313d2f8 * -0x51fd7a1e34e2a765 >> 0x2e;
  _DAT_18313cf30 = (_DAT_18313cf30 ^ uVar6) + 0x6baf89439a7897a4 ^ 0x762d19894167708a;
  _DAT_18313d0b8 = (_DAT_18313d0b8 * -0x6cbedb8e6a51f38b ^ _DAT_18313cf30) + uVar6;
  _DAT_18313d5b0 = _DAT_18313d0b8 ^ _DAT_18313cf30;
  _DAT_18313d360 = 0x6baf89439a7897a4;
  uVar6 = (~_DAT_18313d5e8 + 0x945071ac5d8757db) *
          ((_DAT_18313d290 ^ 0x945071acd9a574ff) + (_DAT_18313d290 & 0x145071acd9a574ff) * 2);
  uVar6 = (uVar6 | _DAT_18313cf68) + (uVar6 & _DAT_18313cf68);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d0e8 = func_0x00018661a0f0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  uVar6 = _DAT_18313d0e8 - (_DAT_18313d0e8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  _DAT_18313d6a8 =
       (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
       _DAT_18313d0e8;
  uVar6 = _DAT_18313d6a8 - (_DAT_18313d6a8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  _DAT_18313d6a8 =
       (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
       _DAT_18313d6a8;
  _DAT_18313d000 = _DAT_18313d000 ^ _DAT_18313d6a8 ^ 0xf3ff35c7eae9f943;
  _DAT_18313d120 = (_DAT_18313d120 * 0x4f826cabe9355aad ^ _DAT_18313d000) + _DAT_18313d6a8;
  _DAT_18313d268 = _DAT_18313d120 ^ _DAT_18313d000;
  _DAT_18313cf98 = 0;
  uVar6 = (_DAT_18313d2a0 ^ _DAT_1808a5200) + _DAT_18313d1c8 + 0xb7faf537f7dd559a;
  uVar9 = (_DAT_18313d1c8 ^ _UNK_1808a5208) + (_DAT_18313d2a0 - 1);
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d2a0 ^ _DAT_1808a5200;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d1c8 ^ _UNK_1808a5208;
  _DAT_18313d6a0 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313d2a0 - 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d1c8 + 0xb7faf537f7dd559a));
  _DAT_18313d5b0 =
       (_DAT_18313d5b0 ^ ~_DAT_18313d6a0 & 0xb7faf53773ff76bf) + 0x48050ac88c008940 ^
       0xb27fb800a6e2efaa;
  _DAT_18313d0a0 =
       (_DAT_18313d0a0 * 0x7f9330bb3d817601 ^ _DAT_18313d5b0) +
       (~_DAT_18313d6a0 & 0xb7faf53773ff76bf);
  _DAT_18313d6e0 = _DAT_18313d0a0 ^ _DAT_18313d5b0;
  _DAT_18313d460 = 0x48050ac88c008940;
  uVar6 = (_DAT_18313d508 ^ _DAT_1808a5210) + _DAT_18313d528 + 0xb7faf537f7dd559a;
  uVar9 = (_DAT_18313d528 ^ _UNK_1808a5218) + _DAT_18313d508 + 0x48050ac88c008940;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18313d508 ^ _DAT_1808a5210;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18313d528 ^ _UNK_1808a5218;
  _DAT_18313d268 =
       func_0x00018661a0f0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18313d508 + 0x48050ac88c008940) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18313d528 + 0xb7faf537f7dd559a));
  _DAT_18313d068 = _DAT_18313d068 ^ _DAT_18313d268 & 0x7fffffffffffffff ^ 0x30d5e30978ef3f76;
  _DAT_18313d5d8 =
       (_DAT_18313d5d8 * -0x1b23d6687358cdb5 ^ _DAT_18313d068) +
       (_DAT_18313d268 & 0x7fffffffffffffff);
  _DAT_18313cf48 = _DAT_18313d5d8 ^ _DAT_18313d068;
  _DAT_18313d108 = 0;
  _DAT_18313d0b8 = func_0x00018661a0f0(_DAT_18313d3f0 + 0xffe0ff7bcfffddff ^ 0x3a);
  uVar6 = (ulonglong)(~(uint)_DAT_18313d0b8 & 0x15);
  _DAT_18313d498 = _DAT_18313d010 ^ uVar6 ^ 0x15;
  _DAT_18313cf08 = (_DAT_18313cf08 ^ uVar6) + 0x15 ^ 0x83141769af6762c7;
  _DAT_18313d268 = (_DAT_18313d268 * -0x527e878ad64d341f ^ _DAT_18313cf08) + uVar6;
  _DAT_18313d1e8 = _DAT_18313d268 ^ _DAT_18313cf08;
  _DAT_18313cfb0 = 0x15;
  uVar6 = (~_DAT_18313d018 + 0x9222f421736b6610) *
          ((_DAT_18313d348 ^ 0x9222f421f749452a) + (_DAT_18313d348 & 0x1222f421f749452a) * 2);
  uVar6 = (uVar6 | _DAT_18313d6d0) + (uVar6 & _DAT_18313d6d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18313d278 = func_0x00018661a0f0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  uVar6 = _DAT_18313d428 << 3 | _DAT_18313d428 >> 0x3d;
  _DAT_18313d438 = _DAT_18313d438 ^ uVar6 ^ 0x3721fdb1e5bf70a1;
  _DAT_18313d2e0 = (_DAT_18313d2e0 * 0x7ff17f611b15a481 ^ _DAT_18313d438) + uVar6;
  _DAT_18313d438 = _DAT_18313d2e0 ^ _DAT_18313d438;
  _DAT_18313d360 = 0;
  _DAT_18313cf90 = func_0x00018661a0f0(_DAT_18313d358 + 0xffdeff840fffe1ff ^ 0xdd);
  _DAT_18313d1d0 = _DAT_18313d2c0 ^ _DAT_18313d018 ^ 0x15;
  _DAT_18313cf08 = (_DAT_18313cf08 ^ _DAT_18313d018) + 0x15 ^ 0xfbc2c8188b29f925;
  _DAT_18313d138 = (_DAT_18313d138 * -0x87f95a09f57108b ^ _DAT_18313cf08) + _DAT_18313d018;
  _DAT_18313d378 = _DAT_18313d138 ^ _DAT_18313cf08;
  _DAT_18313d180 = 0x15;
  switch(uVar1 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 660259b (image 18660259b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18660259b(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  longlong lVar7;
  undefined8 unaff_XMM7_Qb;
  uint unaff_XMM8_Da;
  uint uVar8;
  uint uVar9;
  undefined1 unaff_XMM14 [16];
  
  *(undefined2 *)(unaff_RBP + 0x32) = *(undefined2 *)(unaff_RBP + 0x60);
  (**(code **)(*unaff_RBX + 0x688))();
  uVar1 = *(uint *)(unaff_RBP + 0x34);
  auVar4._8_8_ = unaff_XMM7_Qb;
  auVar4._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_1808a4f60,unaff_XMM14);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_18313d408;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_18313d040 ^ uVar3;
  }
  _DAT_18313d4b8 = func_0x00018661a0f0(SUB161(auVar4 ^ _DAT_1808a4f60,5) ^ uVar2);
  uVar2 = _DAT_18313d4b8 >> 1 | _DAT_18313d4b8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ~(ulonglong)
           ((uint)_DAT_18313d4b8 ^
           (0x40 - (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38)) * 0x40) & (ulonglong)uVar1;
  uVar8 = uVar1 & unaff_XMM8_Da;
  uVar6 = uVar1 | unaff_XMM8_Da;
  uVar9 = uVar1 ^ unaff_XMM8_Da;
  lVar7 = ((ulonglong)uVar1 * (ulonglong)_DAT_1808a5000 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_1808a4ff0;
  uVar3 = ((((ulonglong)uVar9 * (ulonglong)_DAT_1808a4fe0 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_1808a4fd0 +
            ((ulonglong)uVar6 * (ulonglong)_DAT_1808a4fc0 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_1808a4fb0 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_1808a4fa0 << 0x20 |
            (ulonglong)uVar8 * (ulonglong)_DAT_1808a4f90) +
            ((ulonglong)uVar1 * (ulonglong)_DAT_1808a4f80 << 0x20) +
            (ulonglong)uVar1 * (ulonglong)_DAT_1808a4f70 + lVar7) -
          (((ulonglong)uVar9 * (ulonglong)_DAT_1808a5080 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_1808a5070 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_1808a5060 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_1808a5050 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_1808a5040 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_1808a5030) +
           ((ulonglong)uVar1 * (ulonglong)_DAT_1808a5020 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_DAT_1808a5010 + lVar7)) + 0x7c57417a3157b455;
  _DAT_18313d1a8 = _DAT_18313d648 ^ uVar2 ^ uVar3;
  _DAT_18313cf80 = (_DAT_18313cf80 ^ uVar2) + uVar3 ^ 0xe833bcc2646df015;
  _DAT_18313d2f0 = (_DAT_18313d2f0 * 0x27cf7f996d38cfc7 ^ _DAT_18313cf80) + uVar2;
  _DAT_18313d4f8 = _DAT_18313d2f0 ^ _DAT_18313cf80;
  _DAT_18313cfd8 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x50) = (int)uVar3;
  *(int *)(unaff_RBP + 0x58) = *(int *)(unaff_RBP + 0xc);
  switch((int)uVar3 < *(int *)(unaff_RBP + 0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6606c43 (image 186606c43) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186606c43(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 660397d (image 18660397d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18660397d(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x20) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x20),*(undefined8 *)(unaff_RBP + 0x18));
  switch(*(int *)(unaff_RBP + 0x58) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x58)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6606a1f (image 186606a1f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186606a1f(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x20);
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



// ===== continuation @ rva 6620a0a (image 186620a0a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186620a0a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1808aaac8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 6620a16 (image 186620a16) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186620a16(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 6620a33 (image 186620a33) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186620a33(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1808aaad8)();
  return;
}



// ===== continuation @ rva 6620a3c (image 186620a3c) =====

void FUN_186620a3c(void)

{
  return;
}



// ===== continuation @ rva 6620a3d (image 186620a3d) =====

undefined4 * FUN_186620a3d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 6620af3 (image 186620af3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186620af3(void)

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



// ===== continuation @ rva 6620a9f (image 186620a9f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186620a9f(void)

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



// ===== continuation @ rva 6621866 (image 186621866) =====

void FUN_186621866(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6621790 (image 186621790) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186621790(void)

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



// ===== continuation @ rva 6621858 (image 186621858) =====

void FUN_186621858(void)

{
  return;
}



// ===== continuation @ rva 6620d96 (image 186620d96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186620d96(void)

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



// ===== continuation @ rva 6620c65 (image 186620c65) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186620c65(void)

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



// ===== continuation @ rva 661c6d1 (image 18661c6d1) =====

void FUN_18661c6d1(void)

{
  return;
}



// ===== continuation @ rva 661c511 (image 18661c511) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18661c511(void)

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



// ===== continuation @ rva 661d859 (image 18661d859) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18661d859(void)

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



// ===== continuation @ rva 661d67a (image 18661d67a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18661d67a(void)

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



// ===== continuation @ rva 6620859 (image 186620859) =====

void FUN_186620859(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 661c6e5 (image 18661c6e5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18661c6e5(void)

{
  longlong lVar1;
  longlong *unaff_RSI;
  
  lVar1 = (**(code **)(*unaff_RSI + 0x568))();
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 661c674 (image 18661c674) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18661c674(void)

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



// ===== continuation @ rva 661e6fb (image 18661e6fb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18661cafa(void)

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



// ===== continuation @ rva 661f637 (image 18661f637) =====

undefined8 thunk_FUN_18661c629(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 661dd23 (image 18661dd23) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18661dd23(void)

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



// ===== continuation @ rva 661f8b4 (image 18661f8b4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18661f8b4(void)

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



// ===== continuation @ rva 6620c11 (image 186620c11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186620c11(void)

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



// ===== continuation @ rva 662128c (image 18662128c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18662128c(void)

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



// ===== continuation @ rva 6620f96 (image 186620f96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186620f96(void)

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



// ===== continuation @ rva 6620cd3 (image 186620cd3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186620cd3(void)

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



// ===== continuation @ rva 6621517 (image 186621517) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186621517(void)

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



// ===== continuation @ rva 66242ad (image 1866242ad) =====

void FUN_1866242ad(void)

{
  return;
}



// ===== continuation @ rva 66219d0 (image 1866219d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866219d0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1808abdf8)();
  return;
}



// ===== continuation @ rva 6623ef3 (image 186623ef3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186623ef3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1808aba88)();
  return;
}



// ===== continuation @ rva 6623b56 (image 186623b56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186623b56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1808ab828)();
  return;
}



// ===== continuation @ rva 6624252 (image 186624252) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186624252(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1808ab328)();
  return;
}



// ===== continuation @ rva 6622e09 (image 186622e09) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186622e09(void)

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



// ===== continuation @ rva 6622e3b (image 186622e3b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186622e3b(void)

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



// ===== continuation @ rva 662205f (image 18662205f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18662205f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1808ab668)();
  return;
}



// ===== continuation @ rva 66241a7 (image 1866241a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866241a7(void)

{
  (*_DAT_1808abe78)();
  return;
}



// ===== continuation @ rva 6622177 (image 186622177) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186622177(void)

{
  (*_DAT_1808abc78)();
  return;
}



// ===== continuation @ rva 66242c1 (image 1866242c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1866242c1(void)

{
  (*_DAT_1808abe78)();
  return;
}



// ===== continuation @ rva 6622a3e (image 186622a3e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186622a3e(void)

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



// ===== continuation @ rva 6622e1e (image 186622e1e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186622e1e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1808abd88)();
  return;
}



