// ===== continuation @ rva 10175889 (image 190175889) =====

void FUN_190175889(void)

{
  return;
}



// ===== continuation @ rva 101714bf (image 1901714bf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1901714bf(void)

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



// ===== continuation @ rva 101745c7 (image 1901745c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1901745c7(void)

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



// ===== continuation @ rva 10171809 (image 190171809) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190171809(void)

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



// ===== continuation @ rva 1017436f (image 19017436f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19017436f(void)

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



// ===== continuation @ rva 1017300f (image 19017300f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19017300f(void)

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



// ===== continuation @ rva 10174bbd (image 190174bbd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190174bbd(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  uint unaff_R15D;
  uint uVar4;
  ulonglong unaff_XMM7_Qa;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 in_stack_000000c8;
  uint in_stack_000000d0;
  
  (**(code **)(*unaff_RSI + 0x570))();
  uVar3 = (ulonglong)unaff_R15D;
  uVar1 = (ulonglong)in_stack_000000d0 ^ 0x84222325;
  uVar2 = ((_DAT_18344ef80 ^ uVar1) + (ulonglong)((uint)uVar1 & (uint)_DAT_18344ef80) * 2) *
          (uVar3 - _DAT_18344ef78);
  uVar2 = (uVar2 | _DAT_18344ef60) + (uVar2 & _DAT_18344ef60);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18344efd8 =
       func_0x000190175a70((uVar1 ^ uVar3 | uVar2) +
                           (ulonglong)((uint)(uVar1 ^ uVar3) & (uint)uVar2));
  uVar1 = ~_DAT_18344efd8 & (ulonglong)in_stack_000000d0;
  uVar5 = in_stack_000000d0 & unaff_R15D;
  uVar4 = in_stack_000000d0 | unaff_R15D;
  uVar6 = in_stack_000000d0 ^ unaff_R15D;
  uVar2 = (ulonglong)in_stack_000000d0 * (ulonglong)unaff_R15D;
  lVar7 = (uVar2 & 0xffffffff) * (ulonglong)_DAT_182bfa880 +
          ((uVar2 & 0xffffffff) * (ulonglong)_DAT_182bfa890 +
           (uVar2 >> 0x20) * (ulonglong)_DAT_182bfa880 << 0x20);
  uVar2 = ((((ulonglong)uVar6 * (ulonglong)_DAT_182bfa870 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_182bfa860 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_182bfa850 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_182bfa840 +
            ((ulonglong)uVar5 * (ulonglong)_DAT_182bfa830 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_182bfa820 +
            ((ulonglong)unaff_R15D * (ulonglong)_DAT_182bfa810 << 0x20) +
            (ulonglong)unaff_R15D * (ulonglong)_DAT_182bfa800 +
            (ulonglong)in_stack_000000d0 * (ulonglong)_DAT_182bfa800 +
            ((ulonglong)in_stack_000000d0 * (ulonglong)_DAT_182bfa810 << 0x20) + lVar7) -
          (((uVar3 ^ unaff_XMM7_Qa) & 0xffffffff) * (ulonglong)_DAT_182bfa8e0 +
           (((uVar3 ^ unaff_XMM7_Qa) & 0xffffffff) * (ulonglong)_DAT_182bfa950 +
            (unaff_XMM7_Qa >> 0x20) * (ulonglong)_DAT_182bfa8e0 << 0x20) + lVar7 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_182bfa940 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_182bfa930 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_182bfa920 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_182bfa910 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_182bfa900 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_182bfa8f0 +
          ((ulonglong)(unaff_R15D * _DAT_182bfa8d0) << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_182bfa8c0 +
          (ulonglong)in_stack_000000d0 * (ulonglong)_DAT_182bfa8a0 +
          ((ulonglong)in_stack_000000d0 * (ulonglong)_DAT_182bfa8b0 << 0x20))) + 0xa5deab262ad5fe98;
  _DAT_18344ef50 = _DAT_18344f0a8 ^ uVar1 ^ uVar2;
  _DAT_18344f0f8 = (_DAT_18344f0f8 ^ uVar1) + uVar2 ^ 0x157b6bd358a9c2cb;
  _DAT_18344f010 = (_DAT_18344f010 * 0x1d684787d8d184a5 ^ _DAT_18344f0f8) + uVar1;
  _DAT_18344f008 = _DAT_18344f010 ^ _DAT_18344f0f8;
  _DAT_18344ef58 = uVar2 & 0xffffffff;
  switch((int)uVar2 < in_stack_000000c8._4_4_) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1017519e (image 19017519e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19017519e(void)

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



// ===== continuation @ rva 101746f3 (image 1901746f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1901746f3(void)

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



// ===== continuation @ rva 101755e5 (image 1901755e5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1901755e5(void)

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



// ===== continuation @ rva 10146277 (image 190146277) =====

void FUN_190146277(void)

{
  return;
}



// ===== continuation @ rva 10145f5d (image 190145f5d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190145f5d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_182bf39b8)();
  return;
}



// ===== continuation @ rva 1014602d (image 19014602d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19014602d(void)

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



// ===== continuation @ rva 10146256 (image 190146256) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190146256(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182bf38f8)();
  return;
}



// ===== continuation @ rva 10146079 (image 190146079) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190146079(void)

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



// ===== continuation @ rva 1014627f (image 19014627f) =====

void FUN_19014627f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 101461a7 (image 1901461a7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1901461a7(void)

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



// ===== continuation @ rva 1014618d (image 19014618d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19014618d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182bf38b8)();
  return;
}



// ===== continuation @ rva 10146239 (image 190146239) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190146239(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182bf39c8)();
  return;
}



// ===== continuation @ rva 10146148 (image 190146148) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190146148(void)

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



// ===== continuation @ rva 101463f9 (image 1901463f9) =====

void FUN_1901463f9(void)

{
  uint uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = (**(code **)(*unaff_RBX + 0x558))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00019014642d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182bf3d00 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 101463a6 (image 1901463a6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001901463dc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1901463a6(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10153f75 (image 190153f75) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190153f75(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong unaff_XMM13_Qa;
  
  lVar2 = (**(code **)(*unaff_RBX + 0x6f0))();
  *(int *)(unaff_RBP + 0x80) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x88));
  (**(code **)(*unaff_RBX + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x90) = 6;
  *(undefined8 *)(unaff_RBP + 0x80) = unaff_R14;
  uVar4 = (ulonglong)unaff_EDI;
  uVar3 = uVar4 ^ unaff_R13 ^ _DAT_18344e550;
  lVar2 = (uVar4 ^ unaff_R13) + _DAT_18344e5f8;
  uVar6 = uVar3 + lVar2;
  uVar7 = (_DAT_18344e5f8 ^ 2) + _DAT_18344e550 + 2;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18344e5f8 ^ 2;
  _DAT_18344e688 =
       func_0x000190171350((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18344e550 + 2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar3 = ~(ulonglong)((uint)_DAT_18344e688 & 0xffffffe0) & uVar4;
  uVar8 = unaff_EDI & (uint)_DAT_180017990;
  uVar5 = unaff_EDI | (uint)_DAT_180017990;
  uVar4 = ((((uVar4 ^ _DAT_180017990) & 0xffffffff) * (ulonglong)_DAT_182bf47f0 +
            (((uVar4 ^ _DAT_180017990) & 0xffffffff) * (ulonglong)_DAT_182bf4800 +
             (_DAT_180017990 >> 0x20) * (ulonglong)_DAT_182bf47f0 << 0x20) +
           ((ulonglong)uVar5 * (ulonglong)_DAT_182bf47e0 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_182bf47d0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_182bf47c0 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_182bf47b0) +
           ((ulonglong)unaff_EDI * (ulonglong)_DAT_182bf47a0 << 0x20) +
           (ulonglong)unaff_EDI * (ulonglong)_DAT_182bf4790) -
          (((uVar4 ^ unaff_XMM13_Qa) & 0xffffffff) * (ulonglong)_DAT_182bf4840 +
           ((unaff_XMM13_Qa >> 0x20) * (ulonglong)_DAT_182bf4840 +
            ((uVar4 ^ unaff_XMM13_Qa) & 0xffffffff) * (ulonglong)_DAT_182bf4830 << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_182bf4840 +
          ((ulonglong)unaff_EDI * (ulonglong)_DAT_182bf4830 << 0x20))) + 0xa3001507a60eb967;
  _DAT_18344e548 = _DAT_18344e5b0 ^ uVar3 ^ uVar4;
  _DAT_18344e658 = (_DAT_18344e658 ^ uVar3) + uVar4 ^ 0x2030390b10d23db2;
  _DAT_18344e610 = (_DAT_18344e610 * -0x6cd1be90b50a5f05 ^ _DAT_18344e658) + uVar3;
  _DAT_18344e6b8 = _DAT_18344e610 ^ _DAT_18344e658;
  _DAT_18344e578 = uVar4 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar4;
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1015cdd3 (image 19015cdd3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00019015ce11 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19015cdd3(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 1015cede (image 19015cede) =====

void FUN_19015cede(void)

{
  return;
}



// ===== continuation @ rva 101463df (image 1901463df) =====

undefined8 FUN_1901463df(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva 1015c816 (image 19015c816) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19015c816(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  int unaff_EDI;
  ulonglong unaff_R14;
  byte in_XMM0_Bf;
  uint uVar4;
  undefined1 in_XMM1 [16];
  uint uVar5;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint uVar6;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  uVar3 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar2 = uVar3 + _DAT_18344e530;
  if (in_XMM1._4_4_ < 0) {
    uVar2 = _DAT_18344e500 ^ uVar3;
  }
  _DAT_18344e580 = func_0x000190171350(in_XMM0_Bf ^ uVar2);
  uVar1 = (uint)unaff_R14;
  uVar6 = uVar1 & unaff_XMM14_Da;
  uVar4 = uVar1 | unaff_XMM14_Da;
  uVar5 = uVar1 ^ unaff_XMM13_Da;
  uVar2 = (_DAT_18344e580 ^ unaff_R14) * 0x7e01e812b2d69eb7;
  uVar3 = ((ulonglong)uVar4 * (ulonglong)unaff_XMM8_Da << 0x20) +
          (ulonglong)uVar4 * (ulonglong)unaff_XMM10_Da +
          ((ulonglong)uVar6 * (ulonglong)unaff_XMM8_Da << 0x20 |
          (ulonglong)uVar6 * (ulonglong)unaff_XMM10_Da) +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_182bf4a60 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_182bf4a50 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_182bf4aa0 + _DAT_182bf4ab0 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_182bf4a90 +
          (-(((ulonglong)uVar5 * (ulonglong)unaff_XMM15_Da + _DAT_182bf4b40 << 0x20) +
             (ulonglong)uVar5 * (ulonglong)_DAT_182bf4ae0 +
            ((ulonglong)(uVar1 ^ unaff_XMM14_Da) * (ulonglong)unaff_XMM7_Da << 0x20) +
            (ulonglong)(uVar1 ^ unaff_XMM14_Da) * (ulonglong)unaff_XMM9_Da +
            ((ulonglong)uVar6 * (ulonglong)unaff_XMM7_Da << 0x20 |
            (ulonglong)uVar6 * (ulonglong)unaff_XMM9_Da) +
            ((unaff_R14 & 0xffffffff) * (ulonglong)unaff_XMM15_Da << 0x20) +
            (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_182bf4ae0) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_182bf4b30 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_182bf4b20)) + 0x2e7f71ac33fbd219;
  _DAT_18344e590 = (_DAT_18344e6b8 ^ uVar2 ^ uVar3 ^ uVar2) + uVar3 ^ 0x2a8aa083bdae6183;
  _DAT_18344e6e8 = (_DAT_18344e6e8 * 0x6a03b5c782b9a4fd ^ _DAT_18344e590) + uVar2;
  _DAT_18344e5e0 = _DAT_18344e6e8 ^ _DAT_18344e590;
  _DAT_18344e6b0 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x80) = (int)uVar3;
  *(int *)(unaff_RBP + 0x88) = unaff_EDI;
  switch((int)uVar3 < unaff_EDI) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1015caaf (image 19015caaf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19015caaf(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 8) = uVar2;
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



// ===== continuation @ rva 101518d0 (image 1901518d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1901518d0(undefined4 param_1)

{
  undefined4 in_EAX;
  int iVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  undefined8 unaff_R14;
  
  *(undefined4 *)(unaff_RBP + 0x70) = param_1;
  *(undefined4 *)(unaff_RBP + 0x48) = in_EAX;
  *(undefined4 *)(unaff_RBP + 0x80) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x88) = unaff_R14;
  *(undefined4 *)(unaff_RBP + 0x90) = unaff_EDI;
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x90) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1015d032 (image 19015d032) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19015d032(longlong param_1)

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



// ===== continuation @ rva 10158218 (image 190158218) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190158218(void)

{
  int iVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1015ce5a (image 19015ce5a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19015ce5a(void)

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



// ===== continuation @ rva 101596ad (image 1901596ad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1901596ad(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x40) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x40),*(undefined8 *)(unaff_RBP + 0x18));
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1015cc74 (image 19015cc74) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19015cc74(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x40);
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



// ===== continuation @ rva 10145e7f (image 190145e7f) =====

void FUN_190145e7f(void)

{
  return;
}



// ===== continuation @ rva 10145cab (image 190145cab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190145cab(void)

{
  FUN_190dd72e0();
  (*_DAT_182bf3808)();
  return;
}



// ===== continuation @ rva 10145e74 (image 190145e74) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190145e74(void)

{
  (*_DAT_182bf3838)();
  return;
}



// ===== continuation @ rva 10145e0e (image 190145e0e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190145e0e(void)

{
  FUN_190dd72e0();
  (*_DAT_182bf3788)();
  return;
}



// ===== continuation @ rva 10145e36 (image 190145e36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190145e36(void)

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



// ===== continuation @ rva 10145d31 (image 190145d31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190145d31(void)

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



// ===== continuation @ rva 10145e57 (image 190145e57) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190145e57(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182bf37d8)();
  return;
}



// ===== continuation @ rva 10145e87 (image 190145e87) =====

void FUN_190145e87(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10145dc2 (image 190145dc2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190145dc2(void)

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



// ===== continuation @ rva 10145d55 (image 190145d55) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190145d55(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182bf3828)();
  return;
}



// ===== continuation @ rva 10145b9b (image 190145b9b) =====

void FUN_190145b9b(void)

{
  return;
}



// ===== continuation @ rva 1014592a (image 19014592a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19014592a(void)

{
  FUN_190ddce00();
  (*_DAT_182bf3618)();
  return;
}



// ===== continuation @ rva 10145ba3 (image 190145ba3) =====

void FUN_190145ba3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1014595d (image 19014595d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19014595d(void)

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



// ===== continuation @ rva 10145a5c (image 190145a5c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190145a5c(void)

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



// ===== continuation @ rva 10145a80 (image 190145a80) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190145a80(void)

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



// ===== continuation @ rva 10145a08 (image 190145a08) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190145a08(void)

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



// ===== continuation @ rva 10145aeb (image 190145aeb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190145aeb(void)

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



// ===== continuation @ rva 101459bc (image 1901459bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1901459bc(void)

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



// ===== continuation @ rva 101459e0 (image 1901459e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1901459e0(void)

{
  FUN_190dd72e0();
  (*_DAT_182bf3648)();
  return;
}



