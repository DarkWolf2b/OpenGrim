// ===== continuation @ rva 9b682ee (image 189b682ee) =====

void FUN_189b682ee(void)

{
  return;
}



// ===== continuation @ rva 9b6239f (image 189b6239f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b6239f(void)

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



// ===== continuation @ rva 9b63f44 (image 189b63f44) =====

void FUN_189b63f44(void)

{
  longlong unaff_RBP;
  char unaff_R12B;
  longlong unaff_R13;
  longlong in_stack_00000058;
  longlong lStack0000000000000060;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack0000000000000080;
  
  lStack0000000000000060 = in_stack_00000058;
  uStack0000000000000080 = 8;
  uStack0000000000000078 = 0x38;
  uStack0000000000000070 =
       (ulonglong)(uint)(int)(char)((ulonglong)(unaff_R13 << (unaff_R12B * '\b' & 0x3fU)) >> 0x38);
                    /* WARNING: Could not recover jumptable at 0x000189b63f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_RBP + (ulonglong)(in_stack_00000058 == 0) * 8))();
  return;
}



// ===== continuation @ rva 9b6815e (image 189b6815e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b6815e(void)

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



// ===== continuation @ rva 9b64d12 (image 189b64d12) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b64d12(undefined4 param_1,uint param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  uint unaff_R14D;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint unaff_XMM6_Da;
  ulonglong unaff_XMM7_Qa;
  uint uVar10;
  uint unaff_XMM13_Da;
  undefined4 uStack00000000000000a0;
  
  uVar2 = (ulonglong)param_2;
  uVar4 = (~_DAT_18323be38 + 2) *
          ((_DAT_18323bed0 ^ uVar2 ^ 0x84222325) +
          (ulonglong)((uint)_DAT_18323bed0 & (uint)(uVar2 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | _DAT_18323beb8) + (uVar4 & _DAT_18323beb8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uStack00000000000000a0 = param_1;
  _DAT_18323bdf0 =
       func_0x000189b684d0((uVar2 ^ 0x84222324 | uVar4) +
                           (ulonglong)((uint)(uVar2 ^ 0x84222324) & (uint)uVar4));
  uVar2 = (uVar2 | 1) ^ _DAT_18323bdf0 ^ uVar2;
  uVar10 = param_2 & unaff_XMM6_Da;
  uVar9 = param_2 ^ (uint)unaff_XMM7_Qa;
  lVar7 = ((ulonglong)param_2 * (ulonglong)_DAT_1814d1c50 << 0x20) +
          (ulonglong)param_2 * (ulonglong)_DAT_1814d1c40;
  uVar4 = ((((ulonglong)(param_2 | unaff_XMM6_Da) * (ulonglong)_DAT_1814d1c00 << 0x20) +
            (ulonglong)(param_2 | unaff_XMM6_Da) * (ulonglong)_DAT_1814d1bf0 +
            ((ulonglong)uVar10 * (ulonglong)_DAT_1814d1c00 << 0x20 |
            (ulonglong)uVar10 * (ulonglong)_DAT_1814d1bf0) +
            ((ulonglong)param_2 * (ulonglong)_DAT_1814d1be0 << 0x20) +
            (ulonglong)param_2 * (ulonglong)_DAT_1814d1bd0 + lVar7 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_1814d1c20 + _DAT_1814d1c30 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_1814d1c10) -
          (((ulonglong)uVar9 * (ulonglong)_DAT_1814d1cd0 + _DAT_1814d1ce0 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_1814d1cc0 +
           ((ulonglong)(param_2 ^ unaff_XMM6_Da) * (ulonglong)_DAT_1814d1cb0 << 0x20) +
           (ulonglong)(param_2 ^ unaff_XMM6_Da) * (ulonglong)_DAT_1814d1ca0 +
           ((ulonglong)uVar10 * (ulonglong)_DAT_1814d1c90 << 0x20 |
           (ulonglong)uVar10 * (ulonglong)_DAT_1814d1c80) +
           ((ulonglong)param_2 * (ulonglong)_DAT_1814d1c70 << 0x20) +
           (ulonglong)param_2 * (ulonglong)_DAT_1814d1c60 + lVar7)) + 0x504391502cb53e96;
  _DAT_18323beb8 = _DAT_18323be78 ^ uVar2 ^ uVar4;
  _DAT_18323bde8 = (_DAT_18323bde8 ^ uVar2) + uVar4 ^ 0xfd4e80e13988af0a;
  _DAT_18323be98 = (_DAT_18323be98 * -0x577f62ad6a44dff9 ^ _DAT_18323bde8) + uVar2;
  _DAT_18323bd48 = _DAT_18323be98 ^ _DAT_18323bde8;
  uVar9 = (uint)uVar4;
  _DAT_18323bdf8 = uVar4 & 0xffffffff;
  uVar5 = uVar4 & 0xffffffff;
  uVar2 = (ulonglong)unaff_R14D ^ 0x84222325;
  uVar3 = uVar2 ^ _DAT_18323bed0;
  lVar7 = uVar2 + _DAT_18323bd98;
  uVar2 = uVar3 + lVar7;
  uVar6 = (uVar5 ^ _DAT_18323bd98) + _DAT_18323bed0 + uVar5;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar3;
  uVar2 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5 ^ _DAT_18323bd98;
  _DAT_18323bec8 =
       func_0x000189b684d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18323bed0 + uVar5) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar2 = ~_DAT_18323bec8 & (ulonglong)unaff_R14D;
  uVar3 = (ulonglong)unaff_R14D * (uVar4 & 0xffffffff);
  uVar10 = unaff_R14D ^ (uint)unaff_XMM7_Qa;
  lVar8 = (uVar3 & 0xffffffff) * (ulonglong)_DAT_1814d1dc0 +
          ((uVar3 & 0xffffffff) * (ulonglong)_DAT_1814d1dd0 +
           (uVar3 >> 0x20) * (ulonglong)_DAT_1814d1dc0 << 0x20);
  lVar7 = ((uVar5 ^ unaff_XMM7_Qa) & 0xffffffff) * (ulonglong)unaff_XMM13_Da +
          ((unaff_XMM7_Qa >> 0x20) * (ulonglong)unaff_XMM13_Da +
           ((uVar5 ^ unaff_XMM7_Qa) & 0xffffffff) * (ulonglong)_DAT_1814d1e10 << 0x20) +
          ((ulonglong)uVar10 * (ulonglong)_DAT_1814d1df0 + _DAT_1814d1e20 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_1814d1de0 +
          ((uVar4 & 0xffffffff) * (ulonglong)_DAT_1814d1e10 << 0x20) +
          (uVar4 & 0xffffffff) * (ulonglong)unaff_XMM13_Da +
          ((ulonglong)unaff_R14D * (ulonglong)_DAT_1814d1df0 << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_1814d1de0 + lVar8;
  _DAT_18323bd60 =
       ((((ulonglong)uVar10 * (ulonglong)_DAT_1814d1da0 + _DAT_1814d1db0 << 0x20) +
         (ulonglong)uVar10 * (ulonglong)_DAT_1814d1d90 + lVar8 +
        ((ulonglong)(unaff_R14D ^ uVar9) * (ulonglong)_DAT_1814d1d80 << 0x20) +
        (ulonglong)(unaff_R14D ^ uVar9) * (ulonglong)_DAT_1814d1d70 +
        ((ulonglong)(unaff_R14D | uVar9) * (ulonglong)_DAT_1814d1d60 << 0x20) +
        (ulonglong)(unaff_R14D | uVar9) * (ulonglong)_DAT_1814d1d50 +
        ((ulonglong)(unaff_R14D & uVar9) * (ulonglong)_DAT_1814d1d40 << 0x20) +
        (ulonglong)(unaff_R14D & uVar9) * (ulonglong)_DAT_1814d1d30 +
        ((uVar4 & 0xffffffff) * (ulonglong)_DAT_1814d1d20 << 0x20) +
        (uVar4 & 0xffffffff) * (ulonglong)_DAT_1814d1d10 +
        ((ulonglong)unaff_R14D * (ulonglong)_DAT_1814d1d00 << 0x20) +
        (ulonglong)unaff_R14D * (ulonglong)_DAT_1814d1cf0) - lVar7) + 0xccae49dfbdc89e07;
  _DAT_18323bd10 = _DAT_18323bda8 ^ uVar2 ^ _DAT_18323bd60;
  _DAT_18323bec0 = (_DAT_18323bec0 ^ uVar2) + _DAT_18323bd60 ^ 0xc3a4d0f09abbd90f;
  _DAT_18323be48 = (_DAT_18323be48 * 0x6735b48d2508ee0b ^ _DAT_18323bec0) + uVar2;
  _DAT_18323be28 = _DAT_18323be48 ^ _DAT_18323bec0;
  _DAT_18323bd60 = _DAT_18323bd60 & 0xffffffff;
  FUN_190dd72e0(lVar7,*_DAT_18301ee50 + 0x2e9,0x12);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9b64650 (image 189b64650) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b64650(void)

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



// ===== continuation @ rva 9b65675 (image 189b65675) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b65675(void)

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



// ===== continuation @ rva 9b62521 (image 189b62521) =====

void FUN_189b62521(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 9b62a78 (image 189b62a78) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b62a78(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9aed937 (image 189aed937) =====

void FUN_189aed937(void)

{
  return;
}



// ===== continuation @ rva 9adc0f8 (image 189adc0f8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189adc0f8(void)

{
  FUN_190ddce00();
  (*_DAT_1814b16f8)();
  return;
}



// ===== continuation @ rva 9aed519 (image 189aed519) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189aed519(void)

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



// ===== continuation @ rva 9aed9a3 (image 189aed9a3) =====

void FUN_189aed9a3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9ae6f69 (image 189ae6f69) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189ae6f69(void)

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



// ===== continuation @ rva 9aec588 (image 189aec588) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189aec588(void)

{
  FUN_190ddfc90();
  (*_DAT_1814b1458)();
  return;
}



// ===== continuation @ rva 9ae1ed7 (image 189ae1ed7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189ae1ed7(void)

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



// ===== continuation @ rva 9aed8fc (image 189aed8fc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189aed8fc(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1814b2438)();
  return;
}



// ===== continuation @ rva 9aeac6a (image 189aeac6a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189aeac6a(void)

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



// ===== continuation @ rva 9aed0cc (image 189aed0cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189aed0cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_184117d50();
  (*_DAT_1814b3368)();
  return;
}



// ===== continuation @ rva 9aec5bb (image 189aec5bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189aec5bb(void)

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



// ===== continuation @ rva 9af7dd2 (image 189af7dd2) =====

void FUN_189af7dd2(void)

{
  return;
}



// ===== continuation @ rva 9aedb9a (image 189aedb9a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189aedb9a(void)

{
  FUN_190ddce00();
  (*_DAT_1814bd518)();
  return;
}



// ===== continuation @ rva 9b1d33b (image 189b1d33b) =====

void FUN_189b1d33b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9afd319 (image 189afd319) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189afd337 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189afd319(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9b19bc9 (image 189b19bc9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b19bc9(void)

{
  (*_DAT_1814bd8d8)();
  return;
}



// ===== continuation @ rva 9b1d31b (image 189b1d31b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b1d31b(void)

{
  (*_DAT_1814bd818)();
  return;
}



// ===== continuation @ rva 9af5c84 (image 189af5c84) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189af5c84(void)

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



// ===== continuation @ rva 9af6d1d (image 189af6d1d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189af6d1d(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1814bd118)();
  return;
}



// ===== continuation @ rva 9af6b8b (image 189af6b8b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189af6b8b(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190de3220(in_stack_00000030,&stack0x00000040,*_DAT_18301ee50 + 0x16492,*_DAT_18301ee50 + 0xf4,
                0x1111);
  (*_DAT_1814bc638)();
  return;
}



// ===== continuation @ rva 9b18f1e (image 189b18f1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189b18f42 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189b18f1e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9b01836 (image 189b01836) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189b01857 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189b01836(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9b16df0 (image 189b16df0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b16df0(void)

{
  (*_DAT_1814bd8d8)();
  return;
}



// ===== continuation @ rva 9b2c3da (image 189b2c3da) =====

void FUN_189b2c3da(void)

{
  return;
}



// ===== continuation @ rva 9b1d5a8 (image 189b1d5a8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b1d5a8(void)

{
  FUN_190ddce00();
  (*_DAT_1814c44c8)();
  return;
}



// ===== continuation @ rva 9b24136 (image 189b24136) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b24136(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(*unaff_RSI + 0xa8))();
  FUN_190dcd3d0(0x9bb,uVar1);
  (*_DAT_1814c3fb8)();
  return;
}



// ===== continuation @ rva 9b2c446 (image 189b2c446) =====

void FUN_189b2c446(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9b236c2 (image 189b236c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b236c2(void)

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



// ===== continuation @ rva 9b23abe (image 189b23abe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b23abe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1814c41a8)();
  return;
}



// ===== continuation @ rva 9b2bd5e (image 189b2bd5e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b2bd5e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1814c3ff8)();
  return;
}



// ===== continuation @ rva 9b2c39e (image 189b2c39e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b2c39e(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x120))(in_stack_00000030);
  (*_DAT_1814c3c88)();
  return;
}



// ===== continuation @ rva 9b2bbad (image 189b2bbad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b2bbad(void)

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



// ===== continuation @ rva 9b27e04 (image 189b27e04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b27e04(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190de3220(in_stack_00000030,&stack0x00000048,*_DAT_18301ee50 + 0x488,*_DAT_18301ee50 + 0x4a7,
                0x17);
  (*_DAT_1814c4058)();
  return;
}



// ===== continuation @ rva 9b2c272 (image 189b2c272) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b2c272(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x570))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x15ef1,0x39b);
  (*_DAT_1814c4358)();
  return;
}



// ===== continuation @ rva 9b2b70e (image 189b2b70e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b2b70e(void)

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



// ===== continuation @ rva 9b2c6c9 (image 189b2c6c9) =====

void FUN_189b2c6c9(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R14;
  
  uVar1 = (**(code **)(*unaff_R14 + 0x558))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0x78) = unaff_R14;
                    /* WARNING: Could not recover jumptable at 0x000189b2c701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814c7a80 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 9b2c676 (image 189b2c676) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189b2c6ac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189b2c676(void)

{
  longlong *unaff_R14;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R14 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9b41b48 (image 189b41b48) =====

void FUN_189b41b48(void)

{
  return;
}



// ===== continuation @ rva 9b41966 (image 189b41966) =====

undefined8 thunk_FUN_189b2c6af(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva 9b41b43 (image 189b41b43) =====

undefined8 thunk_FUN_189b2c6af(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva 9b362ea (image 189b362ea) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b362ea(ulonglong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar3 = (~in_RAX + 0x955dcb6f) *
          ((param_1 ^ 0x417aba84) + (ulonglong)((uint)param_1 & 0x417aba84) * 2);
  uVar3 = (uVar3 | _DAT_18323ace8) + (uVar3 & _DAT_18323ace8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18323abb0 = func_0x000189b57680((uVar3 | 0xd42771ea) + (ulonglong)((uint)uVar3 & 0xd42771ea))
  ;
  uVar3 = (ulonglong)(~(uint)_DAT_18323abb0 & 0xc55899a1);
  _DAT_18323aa50 = (_DAT_18323aa50 ^ uVar3) + 0xd55ddbef ^ 0x198c42ea45871b5e;
  _DAT_18323a990 = (_DAT_18323a990 * -0x6d9e64f28ac926bd ^ _DAT_18323aa50) + uVar3;
  _DAT_18323ac90 = 0xd55ddbef;
  uVar3 = (~_DAT_18323ac58 + 0x3df16cde) *
          ((_DAT_18323a9d8 ^ 0xf40e85a1) + (ulonglong)((uint)_DAT_18323a9d8 & 0xf40e85a1) * 2);
  uVar3 = (uVar3 | _DAT_18323ab00) + (uVar3 & _DAT_18323ab00);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18323ab40 = func_0x000189b57680((uVar3 | 0xc9ffe97c) + (ulonglong)((uint)uVar3 & 0xc9ffe97c))
  ;
  uVar3 = ((_DAT_18323ab40 ^ 0x1b246d69e30f6ff4) << 0x10 |
          (_DAT_18323ab40 ^ 0x1b246d69e30f6ff4) >> 0x30) & 0x7ffffffffffffff0;
  _DAT_18323ab20 = (_DAT_18323ab20 ^ uVar3) + 0x4dddca59 ^ 0x91884ef311e32fd7;
  _DAT_18323ac80 = (_DAT_18323ac80 * -0x136768be52fd0909 ^ _DAT_18323ab20) + uVar3;
  _DAT_18323aac0 = _DAT_18323ac80 ^ _DAT_18323ab20;
  _DAT_18323a988 = 0x4dddca59;
  _DAT_18323ac18 = func_0x000189b57680(_DAT_18323ab58 + 0xd400495affb4ffU ^ 0x6e);
  uVar3 = _DAT_18323ac18 >> 3 & 0x1ffffff00000;
  _DAT_18323aac8 = _DAT_18323a988 ^ uVar3 ^ 0xfffffffe;
  _DAT_18323ab88 = (_DAT_18323ab88 ^ uVar3) + 0xfffffffe ^ 0xe317509e02f0e963;
  _DAT_18323ab90 = (_DAT_18323ab90 * -0x845d14ebd7c9e55 ^ _DAT_18323ab88) + uVar3;
  _DAT_18323aa10 = _DAT_18323ab90 ^ _DAT_18323ab88;
  _DAT_18323acf0 = 0xfffffffe;
  _DAT_18323abe0 = func_0x000189b57680(_DAT_18323ac40 ^ 0x16fff3d300534f);
  uVar3 = _DAT_18323abe0 >> 1 | _DAT_18323abe0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_18323abe0;
  _DAT_18323ab48 = (_DAT_18323ab48 ^ uVar3) - 0x984eda10 ^ 0xc2a269ead50e15d2;
  _DAT_18323a9b8 = (_DAT_18323a9b8 * 0x2692494041054f95 ^ _DAT_18323ab48) + uVar3;
  _DAT_18323ab18 = _DAT_18323a9b8 ^ _DAT_18323ab48;
  _DAT_18323acb0 = 0x67b125f0;
  uVar3 = (_DAT_18323a930 ^ _DAT_1814c8020) + _DAT_18323ac90 + 0x7bdddcdb;
  uVar9 = (_DAT_18323ac90 ^ _UNK_1814c8028) + _DAT_18323a930 + 0x984eda10;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18323a930 ^ _DAT_1814c8020;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323ac90 ^ _UNK_1814c8028;
  _DAT_18323a930 =
       func_0x000189b57680((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323a930 + 0x984eda10) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18323ac90 + 0x7bdddcdb));
  uVar3 = (((_DAT_18323a930 ^ 0xecf624be0) & 0x7fffffffe0) >> 5) * -0x18f63ed109776320;
  _DAT_18323aaf0 = _DAT_18323ac48 ^ uVar3 ^ 0x1984eda0e;
  _DAT_18323abf8 = (_DAT_18323abf8 ^ uVar3) + 0x1984eda0e ^ 0xa7dc7ccad7ec708c;
  _DAT_18323a9b0 = (_DAT_18323a9b0 * -0x662fb73a5e6ef7c1 ^ _DAT_18323abf8) + uVar3;
  _DAT_18323a928 = _DAT_18323a9b0 ^ _DAT_18323abf8;
  _DAT_18323aa10 = 0x984eda0e;
  _DAT_18323aac0 = func_0x000189b57680(_DAT_18323a918 ^ 0xffc3ffc77cff2293);
  uVar3 = _DAT_18323aac0 ^ 0xfffffffe;
  uVar9 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3;
  _DAT_18323a910 = _DAT_18323ab90 ^ uVar3 ^ 0x1b23e1842;
  _DAT_18323ac88 = (_DAT_18323ac88 ^ uVar3) + 0x1b23e1842 ^ 0x626c5b0d6bb95749;
  _DAT_18323aaf0 = (_DAT_18323aaf0 * 0x2e13c3301bdad825 ^ _DAT_18323ac88) + uVar3;
  _DAT_18323a9c0 = _DAT_18323aaf0 ^ _DAT_18323ac88;
  _DAT_18323ab50 = 0xb23e1842;
  uVar3 = (~_DAT_18323ac38 + 0x4dc1e7bd) *
          ((_DAT_18323a9c0 ^ 0x361c3b67) + (ulonglong)((uint)_DAT_18323a9c0 & 0x361c3b67) * 2);
  uVar3 = (uVar3 | _DAT_18323ac58) + (uVar3 & _DAT_18323ac58);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18323ab78 = func_0x000189b57680((uVar3 | 0x7bdddcdb) + (ulonglong)((uint)uVar3 & 0x7bdddcdb))
  ;
  uVar9 = _UNK_1814c8038;
  uVar3 = _DAT_1814c8030;
  _DAT_18323ace0 = _DAT_18323a970 ^ _DAT_18323ab78 ^ 0xfffffffe;
  _DAT_18323a9e0 = (_DAT_18323a9e0 ^ _DAT_18323ab78) + 0xfffffffe ^ 0xec375ac22a6d5d55;
  _DAT_18323aba8 = (_DAT_18323aba8 * -0x5efd57b04f92136f ^ _DAT_18323a9e0) + _DAT_18323ab78;
  _DAT_18323aad8 = _DAT_18323aba8 ^ _DAT_18323a9e0;
  _DAT_18323aab0 = 0xfffffffe;
  uVar8 = (_DAT_18323aab8 ^ _DAT_1814c8030) + _DAT_18323ab30 + 0x517ff8ca;
  uVar10 = (_DAT_18323ab30 ^ _UNK_1814c8038) + _DAT_18323aab8 + 0x4dddca59;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18323aab8 ^ _DAT_1814c8030;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323ab30 ^ _UNK_1814c8038;
  _DAT_18323aa70 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323aab8 + 0x4dddca59) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18323ab30 + 0x517ff8ca));
  _DAT_18323aaf0 = _DAT_18323acd8 ^ _DAT_18323aa70 ^ 0x1233ba648;
  _DAT_18323ac38 = (_DAT_18323ac38 ^ _DAT_18323aa70) + 0x1233ba648 ^ 0xf98b5765f268ccd6;
  _DAT_18323ac00 = (_DAT_18323ac00 * 0x4d86789ff160db1f ^ _DAT_18323ac38) + _DAT_18323aa70;
  _DAT_18323abc8 = _DAT_18323ac00 ^ _DAT_18323ac38;
  _DAT_18323aa88 = 0x233ba648;
  _DAT_18323ac90 = func_0x000189b57680(_DAT_18323aa98 ^ 0x11ffeb6eff9d2d);
  _DAT_18323abe8 = (_DAT_18323abe8 ^ _DAT_18323ac90) + 0x988011b6 ^ 0xd430ef44bf07a813;
  _DAT_18323a9d0 = (_DAT_18323a9d0 * -0x2171163d1613a45f ^ _DAT_18323abe8) + _DAT_18323ac90;
  _DAT_18323a918 = _DAT_18323a9d0 ^ _DAT_18323abe8;
  _DAT_18323a908 = _DAT_18323abd8 ^ 0x988011b6;
  _DAT_18323ab40 = 0x988011b6;
  uVar8 = (_DAT_18323a920 ^ uVar3) + _DAT_18323abd0 + 0x517ff8ca;
  uVar10 = (_DAT_18323abd0 ^ uVar9) + _DAT_18323a920 + 0x4dddca59;
  uVar3 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18323a920 ^ uVar3;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323abd0 ^ uVar9;
  _DAT_18323aa28 =
       func_0x000189b57680((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323a920 + 0x4dddca59) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18323abd0 + 0x517ff8ca));
  _DAT_18323a9b0 = (_DAT_18323a9b0 ^ _DAT_18323aa28) + 0x455dca49 ^ 0x73beccb51f0c76ce;
  _DAT_18323aa18 = (_DAT_18323aa18 * 0x29c86bebc62a6139 ^ _DAT_18323a9b0) + _DAT_18323aa28;
  _DAT_18323abc0 = _DAT_18323aa18 ^ _DAT_18323a9b0;
  _DAT_18323ac58 = 0x455dca49;
  _DAT_18323a9f0 = func_0x000189b57680(_DAT_18323a990 + 0xff59ff8e010016ffU ^ 0xb4);
  uVar3 = _DAT_18323a9f0 << 10 | _DAT_18323a9f0 >> 0x36;
  _DAT_18323ab78 = _DAT_18323ab38 ^ uVar3 ^ 0x1233ba648;
  _DAT_18323aaa8 = (_DAT_18323aaa8 ^ uVar3) + 0x1233ba648 ^ 0x3f2b58156c618ca2;
  _DAT_18323ab00 = (_DAT_18323ab00 * 0x28634c8dafc98c19 ^ _DAT_18323aaa8) + uVar3;
  _DAT_18323a900 = _DAT_18323ab00 ^ _DAT_18323aaa8;
  _DAT_18323a9e8 = 0x233ba648;
  uVar3 = (~_DAT_18323a978 + 0x233ba649) *
          ((_DAT_18323ac48 ^ 0xa719856d) + (ulonglong)((uint)_DAT_18323ac48 & 0xa719856d) * 2);
  uVar3 = (uVar3 | _DAT_18323ab60) + (uVar3 & _DAT_18323ab60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18323aa30 = func_0x000189b57680((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_18323acd8 = _DAT_18323aa30 ^ 0x233ba648;
  uVar3 = _DAT_18323acd8 - (_DAT_18323acd8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  _DAT_18323acd8 =
       ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18323acd8;
  _DAT_18323a9b8 = _DAT_18323a9b8 ^ _DAT_18323acd8 ^ 0x16ecdd728a962afe;
  _DAT_18323a9e8 = (_DAT_18323a9e8 * 0x2de544b61c8ff9d9 ^ _DAT_18323a9b8) + _DAT_18323acd8;
  _DAT_18323ac60 = _DAT_18323a9e8 ^ _DAT_18323a9b8;
  _DAT_18323ace8 = 0;
  _DAT_18323ac40 = func_0x000189b57680(_DAT_18323abb0 ^ 0xffae35007f2e);
  uVar3 = _DAT_18323ac40 & 0xffffffffffffe000 ^ 0xd55ddbef;
  uVar9 = uVar3 >> 1 | uVar3;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar3;
  _DAT_18323aab0 = (_DAT_18323aab0 ^ uVar3) + 0x2aa22410 ^ 0x871f40130b3149d;
  _DAT_18323a980 = (_DAT_18323a980 * 0x4ed19f76ae847611 ^ _DAT_18323aab0) + uVar3;
  _DAT_18323aad8 = _DAT_18323a980 ^ _DAT_18323aab0;
  _DAT_18323ace8 = 0x2aa22410;
  uVar3 = (_DAT_18323ac38 ^ 0x7bdddcdb) + _DAT_18323acd8 + 0x7bdddcdb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18323ac38 ^ 0x7bdddcdb;
  uVar9 = ((_DAT_18323acd8 + _DAT_18323ac38) * 0x2000 | _DAT_18323acd8 + _DAT_18323ac38 >> 0x33) ^
          _DAT_18323acd8;
  _DAT_18323ac88 =
       func_0x000189b57680((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_18323ac38 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18323acd8 + 0x7bdddcdb));
  uVar3 = _DAT_18323ac88 ^ 0xfffffffe;
  _DAT_18323ac78 = _DAT_18323acb8 ^ uVar3 ^ 0xfffffffe;
  _DAT_18323ab28 = (_DAT_18323ab28 ^ uVar3) + 0xfffffffe ^ 0x7c4519e252b404a5;
  _DAT_18323abe0 = (_DAT_18323abe0 * -0x207fd3ad2981510b ^ _DAT_18323ab28) + uVar3;
  _DAT_18323a970 = _DAT_18323abe0 ^ _DAT_18323ab28;
  _DAT_18323a960 = 0xfffffffe;
  uVar3 = (~_DAT_18323aa30 + 0xc55899a2) *
          ((_DAT_18323ab68 ^ 0x417aba84) + (ulonglong)((uint)_DAT_18323ab68 & 0x417aba84) * 2);
  uVar3 = (uVar3 | _DAT_18323aa60) + (uVar3 & _DAT_18323aa60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18323ab38 = func_0x000189b57680((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_18323ab50 = _DAT_18323ab50 ^ _DAT_18323ab38 ^ 0x982e531987e79500;
  _DAT_18323aaa8 = (_DAT_18323aaa8 * -0x74fce0c7f72b565b ^ _DAT_18323ab50) + _DAT_18323ab38;
  _DAT_18323aae8 = _DAT_18323aaa8 ^ _DAT_18323ab50;
  _DAT_18323a9d8 = 0;
  _DAT_18323a9e0 = func_0x000189b57680(_DAT_18323a970 ^ 0x540004c8ffaa17);
  uVar3 = (_DAT_18323a9e0 ^ 0xfffffffe) * -0x1a1dcfc3de70f6df;
  _DAT_18323ab70 = _DAT_18323aa28 ^ uVar3 ^ 0xfffffffe;
  _DAT_18323ac28 = (_DAT_18323ac28 ^ uVar3) + 0xfffffffe ^ 0xf1a804052abf5af8;
  _DAT_18323ac48 = (_DAT_18323ac48 * 0x529554c1138836a9 ^ _DAT_18323ac28) + uVar3;
  _DAT_18323a918 = _DAT_18323ac48 ^ _DAT_18323ac28;
  uVar1 = *(uint *)(unaff_RBP + 0x74);
  auVar5._8_8_ = _UNK_180333d68;
  auVar5._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_1814c8040,_DAT_1800170c0);
  _DAT_18323aca8 = 0xfffffffe;
  uVar9 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar9 + _DAT_18323aba8;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_18323aba8 ^ uVar9;
  }
  _DAT_18323a9a8 = func_0x000189b57680(SUB161(auVar5 ^ _DAT_1814c8040,5) ^ uVar3);
  uVar11 = uVar1 & _DAT_18011bc70;
  uVar7 = uVar1 ^ _DAT_18011bc70;
  uVar4 = uVar1 ^ 0xffffffff;
  _DAT_18323aad0 =
       ((ulonglong)_DAT_1814c80c0 * (ulonglong)uVar4 + _DAT_1814c80d0 << 0x20) +
       (ulonglong)_DAT_1814c80b0 * (ulonglong)uVar4 +
       ((ulonglong)_DAT_1814c80a0 * (ulonglong)uVar7 << 0x20) +
       (ulonglong)_DAT_1814c8090 * (ulonglong)uVar7 +
       ((ulonglong)_DAT_1814c8080 * (ulonglong)uVar11 << 0x20) +
       (ulonglong)_DAT_1814c8070 * (ulonglong)uVar11 +
       ((ulonglong)_DAT_1814c8060 * (ulonglong)uVar1 << 0x20) +
       (ulonglong)_DAT_1814c8050 * (ulonglong)uVar1 +
       (-(((ulonglong)uVar4 * (ulonglong)_DAT_1814c8190 + _DAT_1814c81a0 << 0x20) +
         (ulonglong)_DAT_1814c8180 * (ulonglong)uVar4) -
       (((ulonglong)uVar7 * (ulonglong)_DAT_1814c8170 << 0x20) +
        (ulonglong)_DAT_1814c8160 * (ulonglong)uVar7 +
        ((ulonglong)(_DAT_18011bc70 | uVar1) * (ulonglong)_DAT_1814c8150 << 0x20) +
        (ulonglong)_DAT_1814c8140 * (ulonglong)(_DAT_18011bc70 | uVar1) +
       ((ulonglong)uVar11 * (ulonglong)_DAT_1814c8130 << 0x20) +
       (ulonglong)_DAT_1814c8120 * (ulonglong)uVar11 +
       ((ulonglong)uVar1 * (ulonglong)_DAT_1814c8110 << 0x20) +
       (ulonglong)_DAT_1814c8100 * (ulonglong)uVar1)) + 0xdda8392b5e843a6;
  _DAT_18323aa40 = _DAT_18323ac50 ^ _DAT_18323a9a8 ^ _DAT_18323aad0;
  _DAT_18323ac68 = (_DAT_18323ac68 ^ _DAT_18323a9a8) + _DAT_18323aad0 ^ 0x1f5fa97215391bbb;
  _DAT_18323abd0 = (_DAT_18323abd0 * -0x59680ad8a1571eb1 ^ _DAT_18323ac68) + _DAT_18323a9a8;
  _DAT_18323a998 = _DAT_18323abd0 ^ _DAT_18323ac68;
  *(int *)(unaff_RBP + -0x10) = (int)_DAT_18323aad0;
  _DAT_18323aad0 = _DAT_18323aad0 & 0xffffffff;
  *(undefined4 *)(unaff_RBP + 0x80) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x10);
  *(undefined4 *)(unaff_RBP + 0x90) = 0;
  iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x78) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x78),*(undefined8 *)(unaff_RBP + 0x10));
  switch(*(int *)(unaff_RBP + 0x90) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9b41ca2 (image 189b41ca2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b41ca2(longlong param_1)

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



// ===== continuation @ rva 9b41627 (image 189b41627) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b41627(void)

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



// ===== continuation @ rva 9b419b1 (image 189b419b1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b419b1(void)

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



// ===== continuation @ rva 9b4176b (image 189b4176b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b4176b(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R14;
  
  uVar2 = (**(code **)(*unaff_R14 + 0xd8))();
  unaff_RBP[0x10] = uVar2;
  unaff_RBP[0x11] = uVar2;
  unaff_RBP[0x12] = *unaff_RBP;
  *(undefined4 *)(unaff_RBP + 0x13) = 0;
  *(undefined4 *)(unaff_RBP + 0x14) = unaff_EDI;
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



// ===== continuation @ rva 9b39c4e (image 189b39c4e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b39c4e(void)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  *(bool *)(unaff_RBP + 6) = unaff_RBP[-1] == 0;
  _DAT_18323aa28 = func_0x000189b57680(_DAT_18323a900 ^ 0xff54006e26ff9068);
  _DAT_18323a9b0 = (_DAT_18323aaf0 ^ _DAT_18323aa28 ^ 0xb4e2def1802f5fd) + 0x76bd9ffd;
  _DAT_18323a9e0 = _DAT_18323a9b0 ^ 0x6b55d46149720cd4;
  _DAT_18323abf0 =
       (_DAT_18323abf0 * 0x1c89909148af5665 ^ _DAT_18323a9e0) + (_DAT_18323aa28 ^ 0xb4e2def1802f5fd)
  ;
  _DAT_18323a9e0 = _DAT_18323abf0 ^ _DAT_18323a9e0;
  _DAT_18323a9b0 = _DAT_18323a9b0 ^ 0x6b55d4613fcf9329;
  _DAT_18323aaf0 = 0x76bd9ffd;
  uVar9 = (_DAT_18323acd0 ^ _DAT_1814c8810) + _DAT_18323abd8 + 0x3477edaf;
  uVar10 = (_DAT_18323abd8 ^ _UNK_1814c8818) + _DAT_18323acd0 + 0x1c169329;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323acd0 ^ _DAT_1814c8810;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323abd8 ^ _UNK_1814c8818;
  _DAT_18323abf8 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323acd0 + 0x1c169329) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323abd8 + 0x3477edaf));
  _DAT_18323ac88 = (_DAT_18323ac88 ^ _DAT_18323abf8 ^ 0xb055ce8a) + 0xac435da3 ^ 0x67b677a6e676a61c;
  _DAT_18323a948 =
       (_DAT_18323a948 * 0x70bf714561a8308f ^ _DAT_18323ac88) + (_DAT_18323abf8 ^ 0xb055ce8a);
  _DAT_18323abe8 = _DAT_18323a948 ^ _DAT_18323ac88;
  _DAT_18323ab10 = 0xac435da3;
  uVar9 = (~_DAT_18323ab28 + 0xe9c13d20) *
          ((_DAT_18323ab38 ^ 0x84222325) + (ulonglong)((uint)_DAT_18323ab38 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_18323ab40) + (uVar9 & _DAT_18323ab40);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323aa60 = func_0x000189b57680((uVar9 | 0x6de31e3a) + (ulonglong)((uint)uVar9 & 0x6de31e3a))
  ;
  _DAT_18323aa98 = (_DAT_18323aa98 ^ _DAT_18323aa60) - 0xe9c13d1f ^ 0x833432dffeda1225;
  _DAT_18323a9e0 = (_DAT_18323a9e0 * 0x54e37341dbdf8717 ^ _DAT_18323aa98) + _DAT_18323aa60;
  _DAT_18323aab0 = _DAT_18323a9e0 ^ _DAT_18323aa98;
  _DAT_18323ab88 = 0x163ec2e1;
  uVar9 = (_DAT_18323aac8 ^ _DAT_1814c8820) + _DAT_18323abd8 + 0x84222ce5;
  uVar10 = (_DAT_18323abd8 ^ _UNK_1814c8828) + _DAT_18323aac8 + 0xe9c13d1f;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323aac8 ^ _DAT_1814c8820;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323abd8 ^ _UNK_1814c8828;
  _DAT_18323a980 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323aac8 + 0xe9c13d1f) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323abd8 + 0x84222ce5));
  uVar9 = _DAT_18323a980 & 0xfffffffffffffff;
  _DAT_18323ac78 = _DAT_18323ac90 ^ uVar9 ^ 0xe9c14cdf;
  _DAT_18323a940 = (_DAT_18323a940 ^ uVar9) + 0xe9c14cdf ^ 0xa017b26cc9957c50;
  _DAT_18323abf0 = (_DAT_18323abf0 * 0x72fc1faf975b8ab9 ^ _DAT_18323a940) + uVar9;
  _DAT_18323a9e0 = 0xe9c14cdf;
  _DAT_18323aae0 = func_0x000189b57680(_DAT_18323aab0 + 0xa4ffa516ffdaff ^ 0xaf);
  uVar9 = (ulonglong)(~((int)(_DAT_18323aae0 >> 0x1c) * 0x45d76d71) & 0xe9c14cdf);
  _DAT_18323ab80 = _DAT_18323a9e8 ^ uVar9 ^ 0x100000fc0;
  _DAT_18323aac8 = (_DAT_18323aac8 ^ uVar9) + 0x100000fc0 ^ 0x3256ea4787989f7c;
  _DAT_18323ac38 = (_DAT_18323ac38 * 0x1c148424787c52b9 ^ _DAT_18323aac8) + uVar9;
  _DAT_18323ac70 = _DAT_18323ac38 ^ _DAT_18323aac8;
  _DAT_18323aaf8 = 0xfc0;
  uVar9 = (~_DAT_18323abb0 + 0x433185d5) *
          ((_DAT_18323acf8 ^ 0x84222325) + (ulonglong)((uint)_DAT_18323acf8 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_18323a9e0) + (uVar9 & _DAT_18323a9e0);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323ac60 = func_0x000189b57680((uVar9 | 0xc713a6f1) + (ulonglong)((uint)uVar9 & 0xc713a6f1))
  ;
  _DAT_18323ac20 = _DAT_18323ab70 * -0x3615458ef88d747f;
  _DAT_18323ab70 = _DAT_18323ac20 ^ _DAT_18323ab70 - 0x433185d4 ^ 0x84302b7a29f2b696;
  _DAT_18323a948 = 0xbcce7a2c;
  uVar9 = (~_DAT_18323acf0 + 0xbcce7a2d) *
          ((_DAT_18323aa50 ^ 0xc713b6b1) + (ulonglong)((uint)_DAT_18323aa50 & 0xc713b6b1) * 2);
  uVar9 = (uVar9 | _DAT_18323a970) + (uVar9 & _DAT_18323a970);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323a980 = func_0x000189b57680((uVar9 | 0x7bddcc9d) + (ulonglong)((uint)uVar9 & 0x7bddcc9d))
  ;
  uVar9 = (_DAT_18323a980 ^ 0xffffffbc) & 0x7fffffffffffffff;
  _DAT_18323aa88 = _DAT_18323a9a0 ^ uVar9 ^ 0x100000fc0;
  _DAT_18323ab30 = (_DAT_18323ab30 ^ uVar9) + 0x100000fc0 ^ 0x2b4b04c97da0dc79;
  _DAT_18323a950 = (_DAT_18323a950 * -0x764e54db1d0b102f ^ _DAT_18323ab30) + uVar9;
  _DAT_18323aaf8 = _DAT_18323a950 ^ _DAT_18323ab30;
  _DAT_18323a9d8 = 0xfc0;
  _DAT_18323a948 = func_0x000189b57680(_DAT_18323a9d0 + 0x19ffbd34ffc8ff ^ 0x11);
  uVar9 = (_DAT_18323a948 & 0x7ffffffffe000000) -
          ((_DAT_18323a948 & 0x7fffffffffffffff) >> 1 & 0x1555555555000000);
  uVar9 = (uVar9 & 0x3333333333000000) + (uVar9 >> 2 & 0x3333333333000000);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f000000) * 0x101010101010101 >> 0x38) << 4 |
          _DAT_18323a948 & 0x7ffffffffe000000;
  _DAT_18323ab28 = (_DAT_18323ab28 ^ uVar9) - 0xc255c5ee ^ 0x512c80c3abcfc32e;
  _DAT_18323aaa8 = (_DAT_18323aaa8 * -0x77b4bcd7d26728cd ^ _DAT_18323ab28) + uVar9;
  _DAT_18323abf0 = _DAT_18323aaa8 ^ _DAT_18323ab28;
  _DAT_18323abb8 = 0x3daa3a12;
  _DAT_18323acf8 = func_0x000189b57680(_DAT_18323abe8 + 0xff2900420b0054ff ^ 0xdc);
  uVar9 = (ulonglong)(~(uint)(_DAT_18323acf8 >> 0x29) & 0xfc0);
  _DAT_18323ac80 = _DAT_18323a940 ^ uVar9 ^ 0xc255d5ae;
  _DAT_18323abe0 = (_DAT_18323abe0 ^ uVar9) + 0xc255d5ae ^ 0x9e84ec72e3689ca2;
  _DAT_18323acd0 = (_DAT_18323acd0 * 0x4cd31aa676887e03 ^ _DAT_18323abe0) + uVar9;
  _DAT_18323aad8 = _DAT_18323acd0 ^ _DAT_18323abe0;
  _DAT_18323aad0 = 0xc255d5ae;
  uVar9 = (_DAT_18323a988 ^ _DAT_1814c8830) + _DAT_18323ab38 + 0x4677f68b;
  uVar10 = (_DAT_18323ab38 ^ _UNK_1814c8838) + _DAT_18323a988 + 0x3daa3a12;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323a988 ^ _DAT_1814c8830;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323ab38 ^ _UNK_1814c8838;
  _DAT_18323aab0 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323a988 + 0x3daa3a12) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323ab38 + 0x4677f68b));
  uVar9 = _DAT_18323aab0 ^ 0xc255d5ae;
  _DAT_18323aa40 = _DAT_18323aa58 ^ uVar9 ^ 0x100000fc0;
  _DAT_18323ab18 = (_DAT_18323ab18 ^ uVar9) + 0x100000fc0 ^ 0x22942931aaf7985c;
  _DAT_18323ab38 = (_DAT_18323ab38 * -0x2a022e3ce66c2023 ^ _DAT_18323ab18) + uVar9;
  _DAT_18323ab80 = _DAT_18323ab38 ^ _DAT_18323ab18;
  _DAT_18323ac58 = 0xfc0;
  _DAT_18323acc8 = func_0x000189b57680(_DAT_18323ab50 ^ 0xffa100567500bbb1);
  uVar9 = (_DAT_18323acc8 ^ 0xac435da0) & 0xfffffffffffffffc;
  _DAT_18323a910 = (_DAT_18323a910 ^ uVar9) + 0x24011da1 ^ 0x36afc0b2b5615f6e;
  _DAT_18323ab00 = (_DAT_18323ab00 * 0x16e5a795144fefe3 ^ _DAT_18323a910) + uVar9;
  _DAT_18323ab38 = _DAT_18323ab00 ^ _DAT_18323a910;
  _DAT_18323aca8 = 0x24011da1;
  uVar9 = (~_DAT_18323a978 + 0x48023b43) *
          ((_DAT_18323aa58 ^ 0x5edce17b) + (ulonglong)((uint)_DAT_18323aa58 & 0x5edce17b) * 2);
  uVar9 = (uVar9 | _DAT_18323ab80) + (uVar9 & _DAT_18323ab80);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323a9a8 = func_0x000189b57680((uVar9 | 0x16deda39) + (ulonglong)((uint)uVar9 & 0x16deda39))
  ;
  uVar9 = (ulonglong)((uint)_DAT_18323a9a8 & 0xdafec25e);
  _DAT_18323abc8 = _DAT_18323ab80 ^ uVar9 ^ 0x12300fda0;
  _DAT_18323ab00 = (_DAT_18323ab00 ^ uVar9) + 0x12300fda0 ^ 0xc9175aafad936793;
  _DAT_18323aac8 = (_DAT_18323aac8 * -0x20535ff7c0356737 ^ _DAT_18323ab00) + uVar9;
  _DAT_18323aa00 = _DAT_18323aac8 ^ _DAT_18323ab00;
  _DAT_18323a990 = 0x2300fda0;
  uVar9 = (_DAT_18323a9f0 ^ _DAT_1814c8840) + _DAT_18323a968 + 0xa722de85;
  uVar10 = (_DAT_18323a968 ^ _UNK_1814c8848) + _DAT_18323a9f0 + 0x2300fda0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323a9f0 ^ _DAT_1814c8840;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323a968 ^ _UNK_1814c8848;
  _DAT_18323ac98 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323a9f0 + 0x2300fda0) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323a968 + 0xa722de85));
  uVar9 = _DAT_18323ac98 - (_DAT_18323ac98 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  _DAT_18323ab18 =
       (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
       _DAT_18323ac98;
  _DAT_18323aa20 = _DAT_18323aa20 ^ _DAT_18323ab18 ^ 0xa2f7cc6a41b0bd21;
  _DAT_18323aa40 = (_DAT_18323aa40 * -0x4c81b5dfbc8fab97 ^ _DAT_18323aa20) + _DAT_18323ab18;
  _DAT_18323aa28 = _DAT_18323aa40 ^ _DAT_18323aa20;
  _DAT_18323a9a0 = 0;
  _DAT_18323acc8 = func_0x000189b57680(_DAT_18323a910 + 0xffdc007b23001dff ^ 0x66);
  _DAT_18323aa68 = _DAT_18323a9a8 ^ _DAT_18323acc8 ^ 0xfc0;
  _DAT_18323ac28 = (_DAT_18323ac28 ^ _DAT_18323acc8) + 0xfc0 ^ 0x902f4d47f6c27b38;
  _DAT_18323acc8 = (_DAT_18323acc8 * 0x5fb5f57888b25641 ^ _DAT_18323ac28) + _DAT_18323acc8;
  _DAT_18323aa28 = _DAT_18323acc8 ^ _DAT_18323ac28;
  _DAT_18323a9f8 = 0xfc0;
  uVar9 = (_DAT_18323aaf8 ^ _DAT_1814c8850) + _DAT_18323abf8 + 0xf29fbcd8;
  uVar10 = (_DAT_18323abf8 ^ _UNK_1814c8858) + _DAT_18323aaf8 + 0xffffffff;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323aaf8 ^ _DAT_1814c8850;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323abf8 ^ _UNK_1814c8858;
  _DAT_18323aa90 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323aaf8 + 0xffffffff) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323abf8 + 0xf29fbcd8));
  uVar9 = (_DAT_18323aa90 & 7) << 0x3c | _DAT_18323aa90 >> 4;
  _DAT_18323a9a0 = (_DAT_18323a9a0 ^ uVar9) + 0x89426002 ^ 0xeeb210fc12d708f6;
  _DAT_18323a968 = (_DAT_18323a968 * -0x686fa9250922e6ef ^ _DAT_18323a9a0) + uVar9;
  _DAT_18323a928 = _DAT_18323a968 ^ _DAT_18323a9a0;
  _DAT_18323acd0 = _DAT_18323aa10 ^ 0x89426002;
  _DAT_18323acb8 = 0x89426002;
  _DAT_18323ab70 = func_0x000189b57680(_DAT_18323a908 ^ 0xc40029a6002a45);
  uVar9 = (_DAT_18323ab70 ^ 0x76bd9ffd) << 0x22 | (_DAT_18323ab70 ^ 0x76bd9ffd) >> 0x1e;
  _DAT_18323aac8 = _DAT_18323aac8 ^ uVar9 ^ 0xa79ba91393934710;
  _DAT_18323ac18 = (_DAT_18323ac18 * -0x164f26a903568e9d ^ _DAT_18323aac8) + uVar9;
  _DAT_18323a9a8 = _DAT_18323ac18 ^ _DAT_18323aac8;
  _DAT_18323a998 = 0;
  uVar9 = (_DAT_18323ac58 ^ 0x84222ce5) + _DAT_18323aa00 + 0x84222ce5;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323ac58 ^ 0x84222ce5;
  uVar10 = ((_DAT_18323aa00 + _DAT_18323ac58) * 0x2000 | _DAT_18323aa00 + _DAT_18323ac58 >> 0x33) ^
           _DAT_18323aa00;
  _DAT_18323ab90 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_18323ac58 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323aa00 + 0x84222ce5));
  uVar9 = (_DAT_18323ab90 ^ 0xfc0) & 0x1fffffffffffffff;
  _DAT_18323aa20 = _DAT_18323ab48 ^ uVar9 ^ 0xfc0;
  _DAT_18323ab08 = (_DAT_18323ab08 ^ uVar9) + 0xfc0 ^ 0x2b64e31e3b1f8f8f;
  _DAT_18323abe0 = (_DAT_18323abe0 * -0x4673aaaa8ebf70ed ^ _DAT_18323ab08) + uVar9;
  _DAT_18323ac10 = _DAT_18323abe0 ^ _DAT_18323ab08;
  _DAT_18323aa48 = 0xfc0;
  uVar9 = (~_DAT_18323acf0 + 0x54b1917e) *
          ((_DAT_18323ac98 ^ 0xd093b258) + (ulonglong)((uint)_DAT_18323ac98 & 0xd093b258) * 2);
  uVar9 = (uVar9 | _DAT_18323ac48) + (uVar9 & _DAT_18323ac48);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323ab10 = func_0x000189b57680((uVar9 | 0x84222325) + (ulonglong)((uint)uVar9 & 0x84222325))
  ;
  _DAT_18323abc8 = _DAT_18323abc8 ^ _DAT_18323ac08 ^ 0x1d117f00ce4b586f;
  _DAT_18323acb0 = (_DAT_18323acb0 * -0x5d4562039d322fc3 ^ _DAT_18323abc8) + _DAT_18323ac08;
  _DAT_18323ac18 = _DAT_18323acb0 ^ _DAT_18323abc8;
  _DAT_18323ab70 = _DAT_18323ab00;
  _DAT_18323aa40 = 0;
  uVar9 = (_DAT_18323ac98 ^ 0x84222ce5) + _DAT_18323ac60 + 0x84222ce5;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323ac98 ^ 0x84222ce5;
  uVar10 = ((_DAT_18323ac60 + _DAT_18323ac98) * 0x2000 | _DAT_18323ac60 + _DAT_18323ac98 >> 0x33) ^
           _DAT_18323ac60;
  _DAT_18323aa48 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_18323ac98 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323ac60 + 0x84222ce5));
  uVar9 = (_DAT_18323aa48 & 0x7fffffffffffffff) * -0x171f6625f340cdd;
  _DAT_18323a9a0 = _DAT_18323ab58 ^ uVar9 ^ 0xfc0;
  _DAT_18323abf8 = (_DAT_18323abf8 ^ uVar9) + 0xfc0 ^ 0x70526d0fb5778e41;
  _DAT_18323aa40 = (_DAT_18323aa40 * -0x514ac453b9796523 ^ _DAT_18323abf8) + uVar9;
  _DAT_18323aa98 = _DAT_18323aa40 ^ _DAT_18323abf8;
  _DAT_18323acc0 = 0xfc0;
  *(uint *)((longlong)unaff_RBP + 0x4c) = unaff_ESI & 0xfc0;
  iVar1 = *(int *)(unaff_RBP + 10);
  _DAT_18323acd8 = func_0x000189b57680(_DAT_18323ab38 ^ 0x30ff5ccf000258);
  uVar9 = _DAT_18323acd8 >> 1 | _DAT_18323acd8;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = ((0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18323acd8) * 0x220c252a451e993d;
  _DAT_18323a9b8 = (_DAT_18323a9b8 ^ uVar9) + 0x5b2f707a ^ 0x5728bb3910c4ebee;
  _DAT_18323aa80 = (_DAT_18323aa80 * -0x10c19f1e82de96e5 ^ _DAT_18323a9b8) + uVar9;
  _DAT_18323ac20 = _DAT_18323aa80 ^ _DAT_18323a9b8;
  _DAT_18323acf0 = 0x5b2f707a;
  _DAT_18323aac0 = func_0x000189b57680(_DAT_18323aa88 + 0x3fffd1f1ffe3ff ^ 0xcd);
  uVar9 = _DAT_18323aac0 ^ 0xf000;
  _DAT_18323a928 = _DAT_18323a9f8 ^ uVar9 ^ 0xb23f833b;
  _DAT_18323a908 = (_DAT_18323a908 ^ uVar9) + 0xb23f833b ^ 0x3f267754c8e5c479;
  _DAT_18323ab48 = (_DAT_18323ab48 * 0x45178c7ac4dbbe3f ^ _DAT_18323a908) + uVar9;
  _DAT_18323aa88 = _DAT_18323ab48 ^ _DAT_18323a908;
  _DAT_18323a970 = 0xb23f833b;
  _DAT_18323acc0 = func_0x000189b57680(_DAT_18323aa50 + 0xffcc007a5affcbff ^ 0x59);
  uVar9 = (ulonglong)(~(uint)_DAT_18323acc0 & 0xb23f833b) ^ 0xb23f833b;
  _DAT_18323acc8 = _DAT_18323a9f8 ^ uVar9 ^ 0x10000f000;
  _DAT_18323ac78 = (_DAT_18323ac78 ^ uVar9) + 0x10000f000 ^ 0xab8a40c9b07ef6c8;
  _DAT_18323aa20 = (_DAT_18323aa20 * 0x3d6a7f3bf0b58e99 ^ _DAT_18323ac78) + uVar9;
  _DAT_18323aa88 = _DAT_18323aa20 ^ _DAT_18323ac78;
  _DAT_18323ab38 = 0xf000;
  uVar9 = (~_DAT_18323abe0 + 0xf5017901) *
          ((_DAT_18323a978 ^ 0x84222325) + (ulonglong)((uint)_DAT_18323a978 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_18323aa38) + (uVar9 & _DAT_18323aa38);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323ab48 = func_0x000189b57680((uVar9 | 0x71235a25) + (ulonglong)((uint)uVar9 & 0x71235a25))
  ;
  _DAT_18323ac10 = _DAT_18323ac10 - 0xf5017900 ^ 0x8e20a49dfa236840;
  _DAT_18323aa60 = _DAT_18323abe0 * -0x1a6c00a4027677a9;
  _DAT_18323abe0 = _DAT_18323aa60 ^ _DAT_18323ac10;
  _DAT_18323a908 = 0xafe8700;
  uVar9 = (~_DAT_18323abb8 + 0xf5017901) *
          ((_DAT_18323aa88 ^ 0x8422d325) + (ulonglong)((uint)_DAT_18323aa88 & 0x8422d325) * 2);
  uVar9 = (uVar9 | _DAT_18323aae8) + (uVar9 & _DAT_18323aae8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323abf8 = func_0x000189b57680((uVar9 | 0x7123aa25) + (ulonglong)((uint)uVar9 & 0x7123aa25))
  ;
  uVar9 = (ulonglong)(~(uint)_DAT_18323abf8 & 0xf000) ^ 0xf000;
  _DAT_18323ac68 = _DAT_18323a9b0 ^ uVar9 ^ 0xf5026900;
  _DAT_18323a9d8 = (_DAT_18323a9d8 ^ uVar9) + 0xf5026900 ^ 0x21fbe105b43e8364;
  _DAT_18323aa80 = (_DAT_18323aa80 * -0x2f972e6752a5819 ^ _DAT_18323a9d8) + uVar9;
  _DAT_18323ab60 = _DAT_18323aa80 ^ _DAT_18323a9d8;
  _DAT_18323ab80 = 0xf5026900;
  uVar9 = ((_DAT_18323aa88 ^ 0x71204a25) + (ulonglong)((uint)_DAT_18323aa88 & 0x71204a25) * 2) *
          -0xea03e200;
  uVar9 = (uVar9 | _DAT_18323abc8) + (uVar9 & _DAT_18323abc8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323acd8 = func_0x000189b57680((uVar9 | 0x7bdecd25) + (ulonglong)((uint)uVar9 & 0x7bdecd25))
  ;
  uVar9 = _DAT_18323acd8 << 0x39 | _DAT_18323acd8 >> 7 & 0xfffffffff8000000;
  _DAT_18323aa70 = _DAT_18323ac98 ^ uVar9 ^ 0x10000f000;
  _DAT_18323ab70 = (_DAT_18323ab70 ^ uVar9) + 0x10000f000 ^ 0x99a9cceb3741dab8;
  _DAT_18323acc0 = (_DAT_18323acc0 * -0x5f790cd49bb80765 ^ _DAT_18323ab70) + uVar9;
  _DAT_18323aaa8 = _DAT_18323acc0 ^ _DAT_18323ab70;
  _DAT_18323abd8 = 0xf000;
  uVar9 = (~_DAT_18323aaf0 + 0x21fade1) *
          ((_DAT_18323ace0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18323ace0 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_18323aa78) + (uVar9 & _DAT_18323aa78);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323abe0 = func_0x000189b57680((uVar9 | 0x863d8ec5) + (ulonglong)((uint)uVar9 & 0x863d8ec5))
  ;
  _DAT_18323aa50 = _DAT_18323aa50 - 0x21fade0 ^ 0xce2369301badc2d3;
  _DAT_18323aaf0 = _DAT_18323acd8 * -0x1dfc95b02d3acc99;
  _DAT_18323acd8 = _DAT_18323aaf0 ^ _DAT_18323aa50;
  _DAT_18323aab0 = 0xfde05220;
  uVar9 = (_DAT_18323aae0 ^ _DAT_1814c8860) + _DAT_18323aae8 + 0x333995fc;
  uVar10 = (_DAT_18323aae8 ^ _UNK_1814c8868) + _DAT_18323aae0 + 0x5b2f707a;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323aae0 ^ _DAT_1814c8860;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323aae8 ^ _UNK_1814c8868;
  _DAT_18323aa68 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323aae0 + 0x5b2f707a) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323aae8 + 0x333995fc));
  _DAT_18323a978 = _DAT_18323acf8 ^ _DAT_18323aa68 ^ 0x1124b2753;
  _DAT_18323ab70 = (_DAT_18323ab70 ^ _DAT_18323aa68) + 0x1124b2753 ^ 0xf6a32cb170b59081;
  _DAT_18323a948 = (_DAT_18323a948 * 0x1d98e341a6840fcf ^ _DAT_18323ab70) + _DAT_18323aa68;
  _DAT_18323a908 = _DAT_18323a948 ^ _DAT_18323ab70;
  _DAT_18323aaa0 = _DAT_18323a9c0 ^ 0x1124b2753;
  _DAT_18323aac0 = 0x124b2753;
  uVar9 = (~_DAT_18323aae0 + 0x5b2f707b) *
          ((_DAT_18323aca8 ^ 0x333995fc) + (ulonglong)((uint)_DAT_18323aca8 & 0x333995fc) * 2);
  uVar9 = (uVar9 | _DAT_18323aae8) + (uVar9 & _DAT_18323aae8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323ac50 = func_0x000189b57680((uVar9 | 0x6816e586) + (ulonglong)((uint)uVar9 & 0x6816e586))
  ;
  _DAT_18323ac60 = (_DAT_18323ac60 ^ _DAT_18323ac50 ^ 0xb71bb6d9) + 0x130b3058 ^ 0xab1f112ddf25acc0;
  _DAT_18323ac78 =
       (_DAT_18323ac78 * -0x719099605400b5d5 ^ _DAT_18323ac60) + (_DAT_18323ac50 ^ 0xb71bb6d9);
  _DAT_18323a948 = _DAT_18323ac78 ^ _DAT_18323ac60;
  _DAT_18323abe0 = 0x130b3058;
  _DAT_18323aae0 = func_0x000189b57680(_DAT_18323a9d0 ^ 0x830049c9ffff0c);
  _DAT_18323abf0 = _DAT_18323ab50 ^ _DAT_18323aae0 ^ 0x1124b2753;
  _DAT_18323aa68 = (_DAT_18323aa68 ^ _DAT_18323aae0) + 0x1124b2753 ^ 0x9385b13f8713ccc1;
  _DAT_18323aaf8 = (_DAT_18323aaf8 * 0x9c990894fddc623 ^ _DAT_18323aa68) + _DAT_18323aae0;
  _DAT_18323a9f0 = _DAT_18323aaf8 ^ _DAT_18323aa68;
  _DAT_18323a980 = 0x124b2753;
  uVar9 = (~_DAT_18323aab8 + 0x124b2754) *
          ((_DAT_18323a960 ^ 0x96690476) + (ulonglong)((uint)_DAT_18323a960 & 0x96690476) * 2);
  uVar9 = (uVar9 | _DAT_18323a908) + (uVar9 & _DAT_18323a908);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323aaf8 = func_0x000189b57680((uVar9 | 0x84222325) + (ulonglong)((uint)uVar9 & 0x84222325))
  ;
  uVar9 = _DAT_18323aaf8 >> 1 | _DAT_18323aaf8;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  _DAT_18323a920 =
       (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
       _DAT_18323aaf8;
  _DAT_18323ac30 = _DAT_18323ac30 ^ _DAT_18323a920 ^ 0x6f76a350375919d8;
  _DAT_18323aa30 = (_DAT_18323aa30 * -0x70738401a99dcfe3 ^ _DAT_18323ac30) + _DAT_18323a920;
  _DAT_18323a938 = _DAT_18323aa30 ^ _DAT_18323ac30;
  _DAT_18323ab10 = _DAT_18323ace0;
  _DAT_18323aa60 = 0;
  uVar9 = ((_DAT_18323aaa8 ^ 0x8422d325) + (ulonglong)((uint)_DAT_18323aaa8 & 0x8422d325) * 2) *
          -_DAT_18323a9a0;
  uVar9 = (uVar9 | _DAT_18323aa88) + (uVar9 & _DAT_18323aa88);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323abb0 = func_0x000189b57680((uVar9 | 0x8422d325) + (ulonglong)((uint)uVar9 & 0x8422d325))
  ;
  uVar9 = _DAT_18323abb0 - (_DAT_18323abb0 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18323abb0;
  _DAT_18323a960 = _DAT_18323ac10 ^ uVar9 ^ 0xf000;
  _DAT_18323abd8 = (_DAT_18323abd8 ^ uVar9) + 0xf000 ^ 0xb68620fe5c899e18;
  _DAT_18323a988 = (_DAT_18323a988 * 0x7145a97e2dbb2e2d ^ _DAT_18323abd8) + uVar9;
  _DAT_18323a948 = _DAT_18323a988 ^ _DAT_18323abd8;
  _DAT_18323aa28 = 0xf000;
  _DAT_18323ac38 = func_0x000189b57680(_DAT_18323aba0 + 0x69ffcbfeff39ff ^ 0x75);
  uVar9 = (_DAT_18323ac38 ^ 0xb71bb6d9) & 0x7fffffffffffff ^ 0xb71bb6d9;
  _DAT_18323ac18 = (_DAT_18323ac18 ^ uVar9) + 0x48e44926 ^ 0xf7e7a2a7b85dd232;
  _DAT_18323aae0 = (_DAT_18323aae0 * 0x19c41400656584ab ^ _DAT_18323ac18) + uVar9;
  _DAT_18323ab80 = _DAT_18323aae0 ^ _DAT_18323ac18;
  _DAT_18323ac28 = 0x48e44926;
  _DAT_18323ac30 = func_0x000189b57680(_DAT_18323a950 + 0xff43ffc749ff5cff ^ 0x53);
  _DAT_18323acb8 = _DAT_18323acb8 ^ _DAT_18323ac30 ^ 0x48e44926 ^ 0xb66dd4fa757c6946;
  _DAT_18323ab30 =
       (_DAT_18323ab30 * 0x2f310760080d1145 ^ _DAT_18323acb8) + (_DAT_18323ac30 ^ 0x48e44926);
  _DAT_18323ac60 = _DAT_18323ab30 ^ _DAT_18323acb8;
  _DAT_18323acc8 = 0;
  uVar9 = (_DAT_18323a900 ^ 0x8422d325) + _DAT_18323acb0 + 0x8422d325;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323a900 ^ 0x8422d325;
  uVar10 = ((_DAT_18323acb0 + _DAT_18323a900) * 0x2000 | _DAT_18323acb0 + _DAT_18323a900 >> 0x33) ^
           _DAT_18323acb0;
  _DAT_18323aba8 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_18323a900 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323acb0 + 0x8422d325));
  uVar9 = _DAT_18323aba8 ^ 0xf000;
  _DAT_18323ab40 = _DAT_18323a9e8 ^ uVar9 ^ 0xf000;
  _DAT_18323ab00 = (_DAT_18323ab00 ^ uVar9) + 0xf000 ^ 0xf4f85a7af8d223bc;
  _DAT_18323a998 = (_DAT_18323a998 * -0x7050a4250b48a16b ^ _DAT_18323ab00) + uVar9;
  _DAT_18323aa10 = _DAT_18323a998 ^ _DAT_18323ab00;
  _DAT_18323a948 = 0xf000;
  uVar9 = (_DAT_18323aae0 ^ 0x8422d325) + _DAT_18323aa00 + 0x8422d325;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323aae0 ^ 0x8422d325;
  uVar10 = ((_DAT_18323aa00 + _DAT_18323aae0) * 0x2000 | _DAT_18323aa00 + _DAT_18323aae0 >> 0x33) ^
           _DAT_18323aa00;
  _DAT_18323a988 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_18323aae0 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323aa00 + 0x8422d325));
  uVar9 = _DAT_18323a988 - (_DAT_18323a988 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = ((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18323a988) << 0x1c | _DAT_18323a988 >> 0x24;
  _DAT_18323aa38 = _DAT_18323aaf0 ^ uVar9 ^ 0xf000;
  _DAT_18323ac20 = (_DAT_18323ac20 ^ uVar9) + 0xf000 ^ 0x7123702610b4f4e8;
  _DAT_18323a948 = (_DAT_18323a948 * 0x743b9ec46133fbfd ^ _DAT_18323ac20) + uVar9;
  _DAT_18323ab70 = _DAT_18323a948 ^ _DAT_18323ac20;
  _DAT_18323a940 = 0xf000;
  uVar7 = (ulonglong)(uint)(iVar1 << 0xc);
  uVar9 = (~_DAT_18323aab8 + 0xf001) *
          ((uVar7 ^ 0x84222325 ^ _DAT_18323aa40) +
          (ulonglong)((uint)_DAT_18323aa40 & (uint)(uVar7 ^ 0x84222325)) * 2);
  uVar9 = (uVar9 | _DAT_18323ab40) + (uVar9 & _DAT_18323ab40);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323abf0 =
       func_0x000189b57680((uVar7 ^ 0x8422d325 | uVar9) +
                           (ulonglong)((uint)(uVar7 ^ 0x8422d325) & (uint)uVar9));
  uVar9 = _DAT_18323abf0 << 0xc | _DAT_18323abf0 >> 0x34;
  uVar7 = uVar7 & 0xffff;
  _DAT_18323a9f8 = (_DAT_18323a9f8 ^ uVar9) + uVar7 ^ 0x3743550c3df1fb3;
  _DAT_18323ac30 = (_DAT_18323ac30 * -0x2a6cbf68906d8fc7 ^ _DAT_18323a9f8) + uVar9;
  _DAT_18323a948 = _DAT_18323ac30 ^ _DAT_18323a9f8;
  uVar2 = *(uint *)((longlong)unaff_RBP + 0x4c);
  uVar10 = (ulonglong)uVar2 ^ 0x84222325;
  uVar9 = ((_DAT_18323a968 ^ uVar10) + (ulonglong)((uint)_DAT_18323a968 & (uint)uVar10) * 2) *
          (uVar7 - _DAT_18323ab38);
  uVar9 = (uVar9 | _DAT_18323aa20) + (uVar9 & _DAT_18323aa20);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323ab78 = uVar7;
  _DAT_18323abc8 =
       func_0x000189b57680((uVar10 ^ uVar7 | uVar9) +
                           (ulonglong)((uint)(uVar10 ^ uVar7) & (uint)uVar9));
  uVar7 = uVar2 | uVar7;
  _DAT_18323a928 =
       (_DAT_18323a928 ^ _DAT_18323abc8 * -0x72446039560f1345) + uVar7 ^ 0x476f65ed1b6d791c;
  _DAT_18323ac20 =
       (_DAT_18323ac20 * 0x2bbce6b0eedd4a3 ^ _DAT_18323a928) + _DAT_18323abc8 * -0x72446039560f1345;
  _DAT_18323acd8 = _DAT_18323ac20 ^ _DAT_18323a928;
  plVar3 = (longlong *)unaff_RBP[0xf];
  uVar4 = unaff_RBP[2];
  _DAT_18323ac10 = uVar7;
  lVar5 = (**(code **)(*plVar3 + 0x6f0))(plVar3,uVar4,0);
  *(int *)(unaff_RBP + 0x10) = (int)*(char *)(lVar5 + *(int *)(unaff_RBP + 0x11));
  (**(code **)(*plVar3 + 0x6f8))(plVar3,uVar4,lVar5,2);
  lVar6 = _DAT_18323ab70 + 0xdd4bf674;
  lVar5 = _DAT_18323a9c8 + 0xfe1ad35c;
  uVar9 = (_DAT_18323a9c8 ^ _DAT_1814c8870) + lVar6;
  uVar10 = (_DAT_18323ab70 ^ _UNK_1814c8878) + lVar5;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323a9c8 ^ _DAT_1814c8870;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323ab70 ^ _UNK_1814c8878;
  unaff_RBP[10] = (ulonglong)*(uint *)(unaff_RBP + 0x10);
  _DAT_18323abf8 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - lVar5 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar6);
  _DAT_18323a990 = (_DAT_18323a990 ^ _DAT_18323abf8 ^ 0xfe1ad35c) + 0xff7bd75d ^ 0xb0bbea3efc43e41a;
  _DAT_18323ac40 =
       (_DAT_18323ac40 * -0x73baac97da0d2d09 ^ _DAT_18323a990) + (_DAT_18323abf8 ^ 0xfe1ad35c);
  _DAT_18323aa68 = _DAT_18323ac40 ^ _DAT_18323a990;
  _DAT_18323aab8 = 0xff7bd75d;
  uVar9 = (~_DAT_18323ac48 + 0x4975af4b) *
          ((_DAT_18323aa50 ^ 0x6b7e7494) + (ulonglong)((uint)_DAT_18323aa50 & 0x6b7e7494) * 2);
  uVar9 = (uVar9 | _DAT_18323ac18) + (uVar9 & _DAT_18323ac18);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323aab8 = func_0x000189b57680((uVar9 | 0x220bdbde) + (ulonglong)((uint)uVar9 & 0x220bdbde))
  ;
  _DAT_18323a960 = (_DAT_18323a960 ^ _DAT_18323aab8) + 0xa629f8fb ^ 0x4eadbcd84a9337eb;
  _DAT_18323aa18 = (_DAT_18323aa18 * 0x2348265c487f270f ^ _DAT_18323a960) + _DAT_18323aab8;
  _DAT_18323a930 = _DAT_18323aa18 ^ _DAT_18323a960;
  _DAT_18323aca8 = 0xa629f8fb;
  uVar9 = (_DAT_18323ab00 ^ _DAT_1814c8880) + _DAT_18323a940 + 0x84222325;
  uVar10 = (_DAT_18323a940 ^ _UNK_1814c8888) + _DAT_18323ab00 + 0x88a84237;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323ab00 ^ _DAT_1814c8880;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323a940 ^ _UNK_1814c8888;
  _DAT_18323ab48 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323ab00 + 0x88a84237) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323a940 + 0x84222325));
  uVar9 = _DAT_18323ab48 << 8 | _DAT_18323ab48 >> 0x38;
  _DAT_18323acc8 = (_DAT_18323acc8 ^ uVar9) - 0x88a84237 ^ 0x372308067c63dfea;
  _DAT_18323a988 = (_DAT_18323a988 * -0x4c97cbf3f614c29d ^ _DAT_18323acc8) + uVar9;
  _DAT_18323ac58 = _DAT_18323a988 ^ _DAT_18323acc8;
  _DAT_18323aa88 = 0x7757bdc9;
  _DAT_18323a950 = func_0x000189b57680(_DAT_18323a930 ^ 0x60fff4230079d0);
  uVar9 = _DAT_18323ac70 ^ 0x3f;
  _DAT_18323ac68 = _DAT_18323abf0 ^ uVar9 ^ 0x88a84276;
  _DAT_18323ab30 = (_DAT_18323ac08 ^ uVar9) + 0x88a84276 ^ 0xf5e9ab4f64838bc3;
  _DAT_18323ac08 = (_DAT_18323ac08 * 0x6bb96a63e5537a4d ^ _DAT_18323ab30) + uVar9;
  _DAT_18323ab30 = _DAT_18323ac08 ^ _DAT_18323ab30;
  _DAT_18323ace0 = 0x88a84276;
  uVar9 = (_DAT_18323aaf8 ^ _DAT_1814c8890) + _DAT_18323acb0 + 0xc8a6153;
  uVar10 = (_DAT_18323acb0 ^ _UNK_1814c8898) + _DAT_18323aaf8 + 0x7757bdc9;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323aaf8 ^ _DAT_1814c8890;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323acb0 ^ _UNK_1814c8898;
  _DAT_18323ace8 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323aaf8 + 0x7757bdc9) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323acb0 + 0xc8a6153));
  uVar9 = _DAT_18323ace8 << 1 | (ulonglong)((longlong)_DAT_18323ace8 < 0);
  _DAT_18323abb0 = _DAT_18323aa10 ^ uVar9 ^ 0x10000003f;
  _DAT_18323aae0 = (_DAT_18323aae0 ^ uVar9) + 0x10000003f ^ 0xaf4ee6d2e502c16a;
  _DAT_18323ab78 = (_DAT_18323ab78 * 0xaaa32e8436ef1cf ^ _DAT_18323aae0) + uVar9;
  _DAT_18323a9e0 = _DAT_18323ab78 ^ _DAT_18323aae0;
  _DAT_18323a988 = 0x3f;
  uVar9 = (~_DAT_18323ac90 + 0x82a8fbea) *
          ((_DAT_18323aba0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18323aba0 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_18323ac98) + (uVar9 & _DAT_18323ac98);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323abc8 = func_0x000189b57680((uVar9 | 0x68ad8cc) + (ulonglong)((uint)uVar9 & 0x68ad8cc));
  _DAT_18323aaa8 =
       (_DAT_18323aaa8 ^ _DAT_18323abc8 & 0x7ffffffff8000000) - 0x82a8fbe9 ^ 0x55cb1d92836a2b74;
  _DAT_18323a908 =
       (_DAT_18323a908 * -0x711c59d70ee7fdf ^ _DAT_18323aaa8) +
       (_DAT_18323abc8 & 0x7ffffffff8000000);
  _DAT_18323a940 = _DAT_18323a908 ^ _DAT_18323aaa8;
  _DAT_18323ab78 = 0x7d570417;
  uVar9 = (~_DAT_18323a948 + 0x7d570418) *
          ((_DAT_18323aa38 ^ 0x68adf0d) + (ulonglong)((uint)_DAT_18323aa38 & 0x68adf0d) * 2);
  uVar9 = (uVar9 | _DAT_18323ac98) + (uVar9 & _DAT_18323ac98);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323a940 = func_0x000189b57680((uVar9 | 0x7bdddb1a) + (ulonglong)((uint)uVar9 & 0x7bdddb1a))
  ;
  _DAT_18323ab10 = _DAT_18323a930 ^ _DAT_18323a940 ^ 0x10000003f;
  _DAT_18323a9f0 = (_DAT_18323a9f0 ^ _DAT_18323a940) + 0x10000003f ^ 0xcd4f4a2c279da742;
  _DAT_18323aa70 = (_DAT_18323aa70 * 0x735629958109af33 ^ _DAT_18323a9f0) + _DAT_18323a940;
  _DAT_18323acb8 = _DAT_18323aa70 ^ _DAT_18323a9f0;
  _DAT_18323aa10 = 0x3f;
  _DAT_18323aa18 = func_0x000189b57680(_DAT_18323a958 ^ 0xffebfff0f60089d8);
  uVar9 = _DAT_18323aa18 << 0x37 | _DAT_18323aa18 >> 9;
  _DAT_18323ac98 = (_DAT_18323ac98 ^ uVar9) - 0x97943f2b ^ 0xa380f9c4cba04d59;
  _DAT_18323ac58 = (_DAT_18323ac58 * -0x72793aa50c9078c5 ^ _DAT_18323ac98) + uVar9;
  _DAT_18323acf0 = _DAT_18323ac58 ^ _DAT_18323ac98;
  _DAT_18323abc0 = 0x686bc0d5;
  _DAT_18323aa78 = func_0x000189b57680(_DAT_18323abc8 ^ 0xffa4007975ffb4f1);
  uVar9 = (_DAT_18323aa78 ^ 0x686bc095) & 0x1ffffffffffffff;
  _DAT_18323ab00 = _DAT_18323acb0 ^ uVar9 ^ 0x10000003f;
  _DAT_18323abb0 = (_DAT_18323abb0 ^ uVar9) + 0x10000003f ^ 0x48f79f159cd66c81;
  _DAT_18323aca8 = (_DAT_18323aca8 * 0x461271b7598e4a27 ^ _DAT_18323abb0) + uVar9;
  _DAT_18323ac10 = _DAT_18323aca8 ^ _DAT_18323abb0;
  _DAT_18323ab10 = 0x3f;
  _DAT_18323abc8 = func_0x000189b57680(_DAT_18323ab38 ^ 0xfff4002380ffef32);
  uVar9 = _DAT_18323abc8 ^ 0xa5d430f642f3402f;
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar9 = ((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar9)
          & 0x3ffffffffff;
  _DAT_18323ab90 = _DAT_18323ac18 ^ uVar9 ^ 0x1a5a5d058;
  _DAT_18323ab50 = (_DAT_18323ab50 ^ uVar9) + 0x1a5a5d058 ^ 0x7ef76c78033e450b;
  _DAT_18323aa80 = (_DAT_18323aa80 * -0x1f5d8d8896084a2f ^ _DAT_18323ab50) + uVar9;
  _DAT_18323a940 = _DAT_18323aa80 ^ _DAT_18323ab50;
  _DAT_18323aba0 = 0xa5a5d058;
  _DAT_18323a970 = func_0x000189b57680(_DAT_18323a9a0 + 0xfffbff3282ffcfff ^ 0x1c);
  _DAT_18323a978 = (_DAT_18323a978 ^ _DAT_18323a928) + 0x59522fa6 ^ 0xcc89ab2ed62cd0aa;
  _DAT_18323a988 = (_DAT_18323a988 * -0x1766e827055076f7 ^ _DAT_18323a978) + _DAT_18323a928;
  _DAT_18323a968 = _DAT_18323a988 ^ _DAT_18323a978;
  _DAT_18323a9b0 = 0x59522fa6;
  uVar9 = (~_DAT_18323ac68 + 0xa629f8fc) *
          ((_DAT_18323aa28 ^ 0x7b59f478) + (ulonglong)((uint)_DAT_18323aa28 & 0x7b59f478) * 2);
  uVar9 = (uVar9 | _DAT_18323a968) + (uVar9 & _DAT_18323a968);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323ab18 = func_0x000189b57680((uVar9 | 0xdd700c83) + (ulonglong)((uint)uVar9 & 0xdd700c83))
  ;
  uVar9 = (ulonglong)
          (~((uint)(_DAT_18323ab18 << 0x11) | (uint)(_DAT_18323ab18 >> 0x2f)) & 0xff7bd75d);
  _DAT_18323ab98 = (_DAT_18323ab98 ^ uVar9) + 0xa629d059 ^ 0x9f53083dcfe6f445;
  _DAT_18323aca0 = (_DAT_18323aca0 * 0x14d95793593ccd45 ^ _DAT_18323ab98) + uVar9;
  _DAT_18323aa80 = _DAT_18323aca0 ^ _DAT_18323ab98;
  _DAT_18323a968 = 0xa629d059;
  uVar9 = (_DAT_18323a9b0 ^ _DAT_1814c88a0) + _DAT_18323a950 + 0xdd700c83;
  uVar10 = (_DAT_18323a950 ^ _UNK_1814c88a8) + _DAT_18323a9b0 + 0x4c53a0b2;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18323a9b0 ^ _DAT_1814c88a0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18323a950 ^ _UNK_1814c88a8;
  _DAT_18323acc0 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323a9b0 + 0x4c53a0b2) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18323a950 + 0xdd700c83));
  uVar9 = _DAT_18323acc0 ^ 0x59522fa6;
  _DAT_18323aaf8 = _DAT_18323a9a0 ^ uVar9 ^ 0xa5a5d058;
  _DAT_18323a998 = (_DAT_18323a998 ^ uVar9) + 0xa5a5d058 ^ 0xd60f609a24c282fc;
  _DAT_18323ac38 = (_DAT_18323ac38 * -0x22e7fc651a4f21fb ^ _DAT_18323a998) + uVar9;
  _DAT_18323a990 = _DAT_18323ac38 ^ _DAT_18323a998;
  _DAT_18323ab48 = 0xa5a5d058;
  _DAT_18323abf8 = func_0x000189b57680(_DAT_18323abc8 ^ 0xffe30083f6001d61);
  _DAT_18323ac00 = _DAT_18323aa08 ^ _DAT_18323abf8 ^ 0x3f;
  _DAT_18323a978 = (_DAT_18323a978 ^ _DAT_18323abf8) + 0x3f ^ 0xe30e2d8c2f1851d6;
  _DAT_18323ab48 = (_DAT_18323ab48 * -0x35c42c234099e4f1 ^ _DAT_18323a978) + _DAT_18323abf8;
  _DAT_18323a970 = _DAT_18323ab48 ^ _DAT_18323a978;
  _DAT_18323aa08 = 0x3f;
  _DAT_18323aae8 = func_0x000189b57680(_DAT_18323a998 + 0x50084790099ff ^ 0x8a);
  uVar9 = _DAT_18323aae8 >> 0xd & 0xffffffffffffc000;
  _DAT_18323aa38 = (_DAT_18323aa38 ^ uVar9) + 0x8428a2 ^ 0x15b709863b26762c;
  _DAT_18323aa00 = (_DAT_18323aa00 * 0x912be9159f0f7cd ^ _DAT_18323aa38) + uVar9;
  _DAT_18323ab60 = _DAT_18323aa00 ^ _DAT_18323aa38;
  _DAT_18323aa50 = 0x8428a2;
  _DAT_18323ac60 = func_0x000189b57680(_DAT_18323acd0 + 0x210083f60021ff ^ 0xec);
  uVar9 = _DAT_18323ac60 - (_DAT_18323ac60 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_18323ac60;
  _DAT_18323a9a0 = _DAT_18323ab28 ^ uVar9 ^ 0x3f;
  _DAT_18323abb8 = (_DAT_18323abb8 ^ uVar9) + 0x3f ^ 0xeb9d746e21fcad44;
  _DAT_18323ace8 = (_DAT_18323ace8 * -0x5fc63b261a41b715 ^ _DAT_18323abb8) + uVar9;
  _DAT_18323ab08 = _DAT_18323ace8 ^ _DAT_18323abb8;
  _DAT_18323aab0 = 0x3f;
  _DAT_18323ac18 = func_0x000189b57680(_DAT_18323acb0 + 0x1d007be2ffe1ff ^ 9);
  uVar9 = _DAT_18323ac18 ^ 0x1f3ac2130031e3a1;
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar9 = ((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar9)
          * -0x5ebb690820b98571;
  _DAT_18323aa28 = _DAT_18323aa28 ^ uVar9 ^ 0x612301c5f8eb3011;
  _DAT_18323ab58 = (_DAT_18323ab58 * -0x3b13065a6c1aeb7f ^ _DAT_18323aa28) + uVar9;
  _DAT_18323acc0 = _DAT_18323ab58 ^ _DAT_18323aa28;
  _DAT_18323aca0 = 0;
  uVar9 = ((_DAT_18323acf0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18323acf0 & 0x8422231a) * 2) *
          -_DAT_18323aa60;
  uVar9 = (uVar9 | _DAT_18323abb8) + (uVar9 & _DAT_18323abb8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18323a908 = func_0x000189b57680((uVar9 | 0x8422231a) + (ulonglong)((uint)uVar9 & 0x8422231a))
  ;
  uVar9 = _DAT_18323a908 >> 1 | _DAT_18323a908;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18323a908;
  _DAT_18323a968 = _DAT_18323a968 ^ uVar9 ^ 0x3f;
  _DAT_18323ab28 = (_DAT_18323ab28 ^ uVar9) + 0x3f ^ 0xd8be3ea1ae2c5583;
  _DAT_18323acb0 = (_DAT_18323acb0 * -0x711f3ccf7b162241 ^ _DAT_18323ab28) + uVar9;
  _DAT_18323aab8 = _DAT_18323acb0 ^ _DAT_18323ab28;
  _DAT_18323aa18 = 0x3f;
  uVar9 = unaff_RBP[10];
  uVar10 = (~_DAT_18323acf8 + 0x40) *
           ((uVar9 ^ 0x84222325 ^ _DAT_18323ac18) +
           (ulonglong)((uint)_DAT_18323ac18 & (uint)(uVar9 ^ 0x84222325)) * 2);
  uVar10 = (uVar10 | _DAT_18323a980) + (uVar10 & _DAT_18323a980);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18323ac00 =
       func_0x000189b57680((uVar9 ^ 0x8422231a | uVar10) +
                           (ulonglong)((uint)(uVar9 ^ 0x8422231a) & (uint)uVar10));
  uVar10 = ((uVar9 | 0x3f) ^ _DAT_18323ac00) & 0x7fffffffffffffff;
  uVar8 = (ulonglong)((uint)uVar9 & 0x3f);
  _DAT_18323aaa0 = (_DAT_18323aaa0 ^ uVar10) + uVar8 ^ 0x5bab676ef42cb446;
  _DAT_18323ab20 = (_DAT_18323ab20 * 0x626a66c11c23b2bd ^ _DAT_18323aaa0) + uVar10;
  _DAT_18323a9f0 = _DAT_18323ab20 ^ _DAT_18323aaa0;
  uVar9 = uVar8 ^ 0x84222325 ^ _DAT_18323ac18;
  lVar5 = (uVar8 ^ 0x84222325) + _DAT_18323ac90;
  uVar10 = uVar9 + lVar5;
  uVar11 = (uVar7 ^ _DAT_18323ac90) + _DAT_18323ac18 + uVar7;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar9;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar7 ^ _DAT_18323ac90;
  _DAT_18323aa60 = uVar8;
  _DAT_18323a9b0 =
       func_0x000189b57680((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18323ac18 + uVar7) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar5);
  uVar7 = uVar7 | uVar8;
  _DAT_18323ac38 = (_DAT_18323ac38 ^ _DAT_18323a9b0 & 0x1fffffffff) + uVar7 ^ 0xc32157066996b33a;
  _DAT_18323a950 =
       (_DAT_18323a950 * -0xfa62b44ba0e6f59 ^ _DAT_18323ac38) + (_DAT_18323a9b0 & 0x1fffffffff) ^
       _DAT_18323ac38;
  _DAT_18323aa20 = uVar7;
  unaff_RBP[0x10] = *unaff_RBP;
  *(undefined4 *)(unaff_RBP + 0x11) = *(undefined4 *)(unaff_RBP + 0xd);
  *(int *)(unaff_RBP + 0x12) = (int)uVar7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 6)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9b5a19e (image 189b5a19e) =====

void FUN_189b5a19e(void)

{
  return;
}



// ===== continuation @ rva 9b59ff5 (image 189b59ff5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b59ff5(void)

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



// ===== continuation @ rva 9b5cba2 (image 189b5cba2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5cba2(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_R12;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9b5c8ac (image 189b5c8ac) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b5c8ac(void)

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



// ===== continuation @ rva 9b5ac38 (image 189b5ac38) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_189b5a62e(void)

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



// ===== continuation @ rva 9b5cc62 (image 189b5cc62) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5cc62(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9b5c909 (image 189b5c909) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5c909(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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



// ===== continuation @ rva 9b5d71d (image 189b5d71d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b5d71d(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x120))();
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



// ===== continuation @ rva 9b5d6de (image 189b5d6de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5d6de(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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



// ===== continuation @ rva 9b5e0a5 (image 189b5e0a5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b5e0a5(void)

{
  int iVar1;
  longlong *unaff_RBX;
  undefined8 uStack0000000000000040;
  int iStack0000000000000048;
  undefined8 in_stack_00000070;
  
  uStack0000000000000040 = in_stack_00000070;
  iStack0000000000000048 = 0;
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(iStack0000000000000048 < 0 || iVar1 <= iStack0000000000000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9b5aed8 (image 189b5aed8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5aed8(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9b5aa0e (image 189b5aa0e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5aa0e(void)

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



// ===== continuation @ rva 9b5d98b (image 189b5d98b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b5d98b(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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



// ===== continuation @ rva 9b5e9a3 (image 189b5e9a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b5e9a3(void)

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



// ===== continuation @ rva 9b5e94f (image 189b5e94f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5e94f(void)

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



// ===== continuation @ rva 9b5f708 (image 189b5f708) =====

void FUN_189b5f708(void)

{
  return;
}



// ===== continuation @ rva 9b5f17f (image 189b5f17f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5f17f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1814cfa18)();
  return;
}



// ===== continuation @ rva 9b5f6d3 (image 189b5f6d3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5f6d3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1814cfa88)();
  return;
}



// ===== continuation @ rva 9b5f67f (image 189b5f67f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5f67f(void)

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



// ===== continuation @ rva 9b5f716 (image 189b5f716) =====

void FUN_189b5f716(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9b5efb4 (image 189b5efb4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b5efb4(void)

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



// ===== continuation @ rva 9b5f30c (image 189b5f30c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b5f30c(void)

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



// ===== continuation @ rva 9b5ecb2 (image 189b5ecb2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5ecb2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1814cfda8)();
  return;
}



// ===== continuation @ rva 9b5f117 (image 189b5f117) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5f117(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_1814cfb28)();
  return;
}



// ===== continuation @ rva 9b5eba7 (image 189b5eba7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b5eba7(void)

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



// ===== continuation @ rva 9b6215d (image 189b6215d) =====

void FUN_189b6215d(void)

{
  return;
}



// ===== continuation @ rva 9b5f880 (image 189b5f880) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5f880(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1814d0618)();
  return;
}



// ===== continuation @ rva 9b61429 (image 189b61429) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b61429(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1814d0a58)();
  return;
}



// ===== continuation @ rva 9b61172 (image 189b61172) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b61172(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000060;
  
  uStack0000000000000060 = 0;
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1814d06c8)();
  return;
}



// ===== continuation @ rva 9b62062 (image 189b62062) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b62062(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1814d0bc8)();
  return;
}



// ===== continuation @ rva 9b5fb63 (image 189b5fb63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b5fb63(void)

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



// ===== continuation @ rva 9b60a6e (image 189b60a6e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b60a6e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1814d0ad8)();
  return;
}



// ===== continuation @ rva 9b62102 (image 189b62102) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b62102(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1814cffd8)();
  return;
}



// ===== continuation @ rva 9b601fb (image 189b601fb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b601fb(void)

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



// ===== continuation @ rva 9b6099d (image 189b6099d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b6099d(void)

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



// ===== continuation @ rva 9b60a59 (image 189b60a59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189b60a59(void)

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



// ===== continuation @ rva 9b61c71 (image 189b61c71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b61c71(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1814d0b18)();
  return;
}



// ===== continuation @ rva 9b616cf (image 189b616cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b616cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1814d0478)();
  return;
}



