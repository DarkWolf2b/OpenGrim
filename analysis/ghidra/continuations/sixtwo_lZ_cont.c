// ===== continuation @ rva 7912bfc (image 187912bfc) =====

void FUN_187912bfc(void)

{
  return;
}



// ===== continuation @ rva 78ff4ab (image 1878ff4ab) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001878ff501 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1878ff4ab(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 79123e6 (image 1879123e6) =====

void thunk_FUN_187901578(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 7902293 (image 187902293) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187902344 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187902293(void)

{
  longlong *unaff_RSI;
  undefined2 uStack0000000000000156;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined2 uStack0000000000000170;
  
  uStack0000000000000156 = 0x2f;
  rdtsc();
  uStack0000000000000158 = 0x2f004300420043;
  rdtsc();
  uStack0000000000000160 = 0x610050006f004e;
  rdtsc();
  uStack0000000000000168 = 0x6e006900640064;
  rdtsc();
  uStack0000000000000170 = 0x67;
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7901e2b (image 187901e2b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187901e42 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187901e2b(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7912705 (image 187912705) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_187912705(void)

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



// ===== continuation @ rva 7902b88 (image 187902b88) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187902b9f */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187902b88(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 7901ef0 (image 187901ef0) =====

void thunk_FUN_1878ff633(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 79034dc (image 1879034dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1879034dc(void)

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



// ===== continuation @ rva 78a6a51 (image 1878a6a51) =====

void FUN_1878a6a51(void)

{
  return;
}



// ===== continuation @ rva 789c9ee (image 18789c9ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18789c9ee(void)

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



// ===== continuation @ rva 789f9c6 (image 18789f9c6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789f9c6(void)

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



// ===== continuation @ rva 78a2516 (image 1878a2516) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878a2516(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(unaff_RBP + -8) = iVar1;
  switch(iVar1 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78a24d4 (image 1878a24d4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878a24d4(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0xb0) = uVar2;
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78a68c0 (image 1878a68c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878a68c0(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  *(undefined8 *)(unaff_RBP + 0xb0) = in_RAX;
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



// ===== continuation @ rva 78a1cf8 (image 1878a1cf8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878a1cf8(void)

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



// ===== continuation @ rva 78a1f5f (image 1878a1f5f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878a1f5f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(*unaff_RSI + 0x570))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78a34c0 (image 1878a34c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878a34c0(void)

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



// ===== continuation @ rva 78a691b (image 1878a691b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878a691b(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  *(undefined8 *)(unaff_RBP + 0xb0) = in_RAX;
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78c5b7a (image 1878c5b7a) =====

void FUN_1878c5b7a(void)

{
  return;
}



// ===== continuation @ rva 78c1674 (image 1878c1674) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c1674(void)

{
  FUN_190ddce00();
  (*_DAT_180cb48b8)();
  return;
}



// ===== continuation @ rva 78c4f46 (image 1878c4f46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c4f46(void)

{
  (*_DAT_180cb4bc8)();
  return;
}



// ===== continuation @ rva 78c686d (image 1878c686d) =====

void FUN_1878c686d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 78c4c9d (image 1878c4c9d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878c4c9d(void)

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



// ===== continuation @ rva 78c5425 (image 1878c5425) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c5425(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180cb4598)();
  return;
}



// ===== continuation @ rva 78c4dc3 (image 1878c4dc3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c4dc3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180cb4458)();
  return;
}



// ===== continuation @ rva 78c5de4 (image 1878c5de4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c5de4(void)

{
  FUN_190de3220();
  (*_DAT_180cb4958)();
  return;
}



// ===== continuation @ rva 78c685c (image 1878c685c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c685c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180cb4918)();
  return;
}



// ===== continuation @ rva 78c46c1 (image 1878c46c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878c46c1(void)

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



// ===== continuation @ rva 78c5b4c (image 1878c5b4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c5b4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180cb4fc8)();
  return;
}



// ===== continuation @ rva 78c548f (image 1878c548f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c548f(void)

{
  (*_DAT_180cb4bc8)();
  return;
}



// ===== continuation @ rva 78c6b46 (image 1878c6b46) =====

void FUN_1878c6b46(void)

{
  uint uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = (**(code **)(*unaff_RBX + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x48) = unaff_RBX;
                    /* WARNING: Could not recover jumptable at 0x0001878c6b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cb6140 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 78c6af3 (image 1878c6af3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001878c6b29 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1878c6af3(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 78dbfb8 (image 1878dbfb8) =====

undefined8 FUN_1878dbfb8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x48);
  (**(code **)(*plVar1 + 0x2e8))(plVar1,param_2,*(undefined8 *)(unaff_RBP + 0x18));
  cVar2 = (**(code **)(*plVar1 + 0x720))(plVar1);
  if (cVar2 == '\0') {
    uVar3 = *(undefined8 *)(unaff_RBP + 0x70);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// ===== continuation @ rva 78dbf35 (image 1878dbf35) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878dbf35(void)

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



// ===== continuation @ rva 78dc3b2 (image 1878dc3b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878dc3b2(longlong param_1)

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



// ===== continuation @ rva 78dc263 (image 1878dc263) =====

void FUN_1878dc263(void)

{
  return;
}



// ===== continuation @ rva 78dc218 (image 1878dc218) =====

undefined8 thunk_FUN_1878c6b2c(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva 78d7ec8 (image 1878d7ec8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878d7ec8(void)

{
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar1;
  
  *(undefined2 *)(unaff_RBP + 0x46) = *(undefined2 *)(unaff_RBP + 0x80);
  (**(code **)(*unaff_RBX + 0x688))();
  iVar1 = *(int *)(unaff_RBP + -4) + 1;
  *(int *)(unaff_RBP + 0x70) = iVar1;
  *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x5c);
  switch(iVar1 < *(int *)(unaff_RBP + 0x5c)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78dc21d (image 1878dc21d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878dc21d(void)

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



// ===== continuation @ rva 78d3efb (image 1878d3efb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878d3efb(undefined4 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  *(undefined4 *)(unaff_RBP + 0x70) = param_1;
  (**(code **)(*unaff_RBX + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x80) = 6;
  *(undefined8 *)(unaff_RBP + 0x70) = unaff_R12;
  uVar2 = (~_DAT_1831908b0 + 3) *
          ((unaff_R14 ^ unaff_R13 ^ _DAT_183190a40) +
          (ulonglong)((uint)_DAT_183190a40 & (uint)(unaff_R14 ^ unaff_R13)) * 2);
  uVar2 = (uVar2 | _DAT_183190df0) + (uVar2 & _DAT_183190df0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183190860 =
       func_0x0001878f0190((unaff_R14 ^ 0x84222327 | uVar2) +
                           (ulonglong)((uint)(unaff_R14 ^ 0x84222327) & (uint)uVar2));
  uVar2 = unaff_R14 * 2 ^ _DAT_183190860 ^ unaff_R14;
  uVar7 = (uint)unaff_R14;
  uVar6 = uVar7 & _DAT_180017990;
  uVar4 = uVar7 | _DAT_180017990;
  uVar7 = uVar7 ^ _DAT_180017990;
  lVar5 = ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180cb6c60 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180cb6c50;
  uVar2 = uVar2 << 2 | uVar2 >> 0x3e;
  uVar3 = ((((ulonglong)uVar7 * (ulonglong)_DAT_180cb6c40 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_180cb6c30 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_180cb6c20 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_180cb6c10 +
            ((ulonglong)uVar6 * (ulonglong)_DAT_180cb6c00 << 0x20 |
            (ulonglong)uVar6 * (ulonglong)_DAT_180cb6bf0) +
            ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180cb6be0 << 0x20) +
            (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180cb6bd0 + lVar5) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_180cb6ce0 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180cb6cd0 +
           ((ulonglong)uVar4 * (ulonglong)_DAT_180cb6cc0 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_180cb6cb0 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_180cb6ca0 << 0x20 |
           (ulonglong)uVar6 * (ulonglong)_DAT_180cb6c90) +
           ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180cb6c80 << 0x20) +
           (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180cb6c70 + lVar5)) + 0xec3cf73af3bdf60a;
  _DAT_183190a78 = _DAT_183190948 ^ uVar2 ^ uVar3;
  _DAT_183190a48 = (_DAT_183190a48 ^ uVar2) + uVar3 ^ 0x5c35fde3c7f0cdb;
  _DAT_183190898 = (_DAT_183190898 * 0x9562bcf85e29229 ^ _DAT_183190a48) + uVar2;
  _DAT_183190798 = _DAT_183190898 ^ _DAT_183190a48;
  _DAT_183190710 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar3;
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78c6de0 (image 1878c6de0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878c6de0(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint unaff_EBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar3;
  longlong in_R9;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint uVar8;
  undefined1 unaff_XMM14 [16];
  
  *(uint *)(unaff_RBP + 0x30) = unaff_EBX;
  *(uint *)(unaff_RBP + 0x60) = unaff_EBX;
  *(char *)(unaff_RBP + 0x20) =
       (char)unaff_EBX + (char)(uint)((ulonglong)unaff_EBX * in_R9 >> 0x23) * -10;
  uVar4 = (_DAT_183190ad8 ^ _DAT_180cb6f60) + _DAT_183190788 + 0x84222370;
  uVar5 = (_DAT_183190788 ^ _UNK_180cb6f68) + _DAT_183190ad8 + 0x68;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183190ad8 ^ _DAT_180cb6f60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183190788 ^ _UNK_180cb6f68;
  _DAT_183190c20 =
       func_0x0001878f0190((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183190ad8 + 0x68) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183190788 + 0x84222370));
  _DAT_1831908c8 = (_DAT_1831908c8 ^ _DAT_183190c20) + 0x7d ^ 0xbeb8b0abdd27764;
  _DAT_183190b70 = (_DAT_183190b70 * -0x36a73116ba915355 ^ _DAT_1831908c8) + _DAT_183190c20;
  _DAT_183190b60 = _DAT_183190b70 ^ _DAT_1831908c8;
  _DAT_183190a00 = 0x7d;
  uVar4 = (~_DAT_183190c50 + 0x93) *
          ((_DAT_183190928 ^ unaff_RDI) + (ulonglong)((uint)_DAT_183190928 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183190e18) + (uVar4 & _DAT_183190e18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183190830 = func_0x0001878f0190((uVar4 | 0x842223b7) + (ulonglong)((uint)uVar4 & 0x842223b7))
  ;
  uVar4 = (_DAT_183190830 & 0x3fffffffffffffff) - (_DAT_183190830 >> 1 & 0x1555555555555555);
  uVar4 = (uVar4 & unaff_RSI) + (uVar4 >> 2 & unaff_RSI);
  uVar4 = (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183190830 & 0x3fffffffffffffff;
  _DAT_183190c10 = (_DAT_183190c10 ^ uVar4) - 0x92 ^ 0x31b0ee4358111952;
  _DAT_183190ae0 = (_DAT_183190ae0 * 0x1b24733ea54b2fd ^ _DAT_183190c10) + uVar4;
  _DAT_183190b08 = _DAT_183190ae0 ^ _DAT_183190c10;
  _DAT_183190c08 = 0x6e;
  _DAT_183190cb8 = func_0x0001878f0190(_DAT_183190910 ^ 0xffdf008382ffe172);
  uVar4 = _DAT_183190cb8 - (_DAT_183190cb8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RSI) + (uVar4 >> 2 & unaff_RSI);
  uVar4 = (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38) << 7 ^ _DAT_183190cb8;
  _DAT_183190d38 = _DAT_183190ae8 ^ uVar4 ^ 0xc2;
  _DAT_183190d00 = (_DAT_183190d00 ^ uVar4) + 0xc2 ^ 0xe72f7f09653f74df;
  _DAT_1831907c8 = (_DAT_1831907c8 * -0x2b3f310513bc0c37 ^ _DAT_183190d00) + uVar4;
  _DAT_183190e70 = _DAT_1831907c8 ^ _DAT_183190d00;
  _DAT_183190b28 = 0xc2;
  uVar4 = (~_DAT_183190788 + 0x6f) *
          ((_DAT_183190b88 ^ 0x842223e7) + (ulonglong)((uint)_DAT_183190b88 & 0x842223e7) * 2);
  uVar4 = (uVar4 | _DAT_183190b80) + (uVar4 & _DAT_183190b80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183190880 = func_0x0001878f0190((uVar4 | 0x84222389) + (ulonglong)((uint)uVar4 & 0x84222389))
  ;
  uVar4 = (_DAT_183190880 ^ 0x535c) * -0x78d0742745a7d47b & 0xfffffffffffe0000;
  _DAT_183190ba0 = _DAT_183190be0 ^ uVar4 ^ 0x130;
  _DAT_183190af8 = (_DAT_183190af8 ^ uVar4) + 0x130 ^ 0xbfd99e7b6f002892;
  _DAT_183190eb0 = (_DAT_183190eb0 * -0x31ddfe9367774afd ^ _DAT_183190af8) + uVar4;
  _DAT_183190d28 = _DAT_183190eb0 ^ _DAT_183190af8;
  _DAT_183190d40 = 0x30;
  _DAT_183190dc0 = func_0x0001878f0190(_DAT_183190c48 ^ 0x1cff844d002107);
  uVar4 = (_DAT_183190dc0 & 0xffffff800) >> 1 | _DAT_183190dc0 & 0xffffff800;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar5 = uVar4 >> 4 | uVar4;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar4 = uVar4 >> 0x20 | uVar5 >> 0x10 | uVar5;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RSI) + (uVar4 >> 2 & unaff_RSI);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183190dc0 & 0xffffff800;
  _DAT_183190a70 = (_DAT_183190a70 ^ uVar4) - 0x90 ^ 0x3bc6323d54363b0f;
  _DAT_183190878 = (_DAT_183190878 * -0x6cb491eff1d77107 ^ _DAT_183190a70) + uVar4;
  _DAT_183190a20 = _DAT_183190878 ^ _DAT_183190a70;
  _DAT_183190d68 = 0x70;
  _DAT_183190eb0 = func_0x0001878f0190(_DAT_183190948 + 0xffe0ff8382ffe1ffU ^ 0xb6);
  _DAT_183190d00 = _DAT_183190ed0 ^ 0xc0;
  _DAT_183190cc0 = _DAT_183190cc0 + 0xc0 ^ 0xf69efd36104e3fa9;
  _DAT_183190dd0 = _DAT_183190c38 * -0x7d8d2b24bfa67e4b;
  _DAT_183190c38 = _DAT_183190dd0 ^ _DAT_183190cc0;
  _DAT_183190ef8 = 0xc0;
  uVar4 = (~_DAT_183190c58 + 0x1d) *
          ((_DAT_183190c10 ^ 0x84222325) + (ulonglong)((uint)_DAT_183190c10 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183190e70) + (uVar4 & _DAT_183190e70);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183190b98 = func_0x0001878f0190((uVar4 | 0x84222339) + (ulonglong)((uint)uVar4 & 0x84222339))
  ;
  _DAT_183190aa8 = (_DAT_183190aa8 ^ _DAT_183190b98) - 0x1c ^ 0xb5189b8f22264aa8;
  _DAT_183190990 = (_DAT_183190990 * 0xc0a4fab14b7efbb ^ _DAT_183190aa8) + _DAT_183190b98;
  _DAT_1831908b0 = _DAT_183190990 ^ _DAT_183190aa8;
  _DAT_183190e28 = 0xe4;
  uVar4 = (_DAT_183190d88 ^ _DAT_1805b4a90) + _DAT_1831909b0 + 0x84222315;
  uVar5 = (_DAT_1831909b0 ^ _UNK_1805b4a98) + _DAT_183190d88 + 0x1c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183190d88 ^ _DAT_1805b4a90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831909b0 ^ _UNK_1805b4a98;
  _DAT_183190e90 =
       func_0x0001878f0190((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183190d88 + 0x1c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831909b0 + 0x84222315));
  uVar4 = (ulonglong)((((uint)_DAT_183190e90 ^ 4) << 3 ^ 0x20) & 0x30);
  _DAT_1831907f8 = _DAT_183190de0 ^ uVar4 ^ 0x4c;
  _DAT_183190818 = (_DAT_183190818 ^ uVar4) + 0x4c ^ 0xcdcf6079ae37a120;
  _DAT_183190760 = (_DAT_183190760 * -0x424bdce24a8206d1 ^ _DAT_183190818) + uVar4;
  _DAT_183190840 = _DAT_183190760 ^ _DAT_183190818;
  _DAT_183190d70 = 0x4c;
  uVar4 = (_DAT_183190a88 ^ _DAT_180cb6f70) + _DAT_183190890 + 0x84222369;
  uVar5 = (_DAT_183190890 ^ _UNK_180cb6f78) + _DAT_183190a88 + 0xe4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183190a88 ^ _DAT_180cb6f70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183190890 ^ _UNK_180cb6f78;
  _DAT_1831908d8 =
       func_0x0001878f0190((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183190a88 + 0xe4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183190890 + 0x84222369));
  uVar4 = (_DAT_1831908d8 & 0x7fffffffffffffff) -
          ((_DAT_1831908d8 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar4 = (uVar4 & unaff_RSI) + (uVar4 >> 2 & unaff_RSI);
  uVar4 = ((((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1831908d8 & 0x7fffffffffffffff) * -0x2298bd82e70551a9;
  _DAT_183190a98 = _DAT_183190a28 ^ uVar4 ^ 0x130;
  _DAT_183190bc0 = (_DAT_183190bc0 ^ uVar4) + 0x130 ^ 0x4c2293e0c18c6e1e;
  _DAT_183190d68 = (_DAT_183190d68 * 0x42fc4523bdcf9dd1 ^ _DAT_183190bc0) + uVar4;
  _DAT_183190c28 = _DAT_183190d68 ^ _DAT_183190bc0;
  _DAT_183190c50 = 0x30;
  uVar4 = (_DAT_183190d98 ^ _DAT_180cb6f80) + _DAT_183190708 + 0x84222358;
  uVar5 = (_DAT_183190708 ^ _UNK_180cb6f88) + _DAT_183190d98 + 0x71;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183190d98 ^ _DAT_180cb6f80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183190708 ^ _UNK_180cb6f88;
  _DAT_183190e48 =
       func_0x0001878f0190((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183190d98 + 0x71) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183190708 + 0x84222358));
  uVar4 = ((_DAT_183190e48 & 0x7fffffffffffffff) >> 0x1f) * 0x46ab87a280000000;
  _DAT_183190c58 = _DAT_183190dd8 ^ uVar4 ^ 0xee;
  _DAT_183190bc0 = (_DAT_183190bc0 ^ uVar4) + 0xee ^ 0xecf69bcbcc6272f6;
  _DAT_183190940 = (_DAT_183190940 * 0x46cf719cf8b46f23 ^ _DAT_183190bc0) + uVar4;
  _DAT_1831909a8 = _DAT_183190940 ^ _DAT_183190bc0;
  _DAT_183190e50 = 0xee;
  _DAT_1831907a0 = func_0x0001878f0190(_DAT_183190750 ^ 0x1d008426ffe154);
  uVar4 = _DAT_1831907a0 - (_DAT_1831907a0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RSI) + (uVar4 >> 2 & unaff_RSI);
  uVar5 = ((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38 ^ _DAT_1831907a0;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RSI) + (uVar4 >> 2 & unaff_RSI);
  uVar5 = 0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38) ^ uVar5;
  _DAT_183190a08 = (_DAT_183190a08 ^ uVar5) + 0x71 ^ 0xcb6330132fca95a;
  _DAT_183190e10 = (_DAT_183190e10 * -0x2f377f41ff041b6f ^ _DAT_183190a08) + uVar5;
  _DAT_183190bb8 = _DAT_183190e10 ^ _DAT_183190a08;
  _DAT_183190b08 = 0x71;
  uVar4 = (_DAT_183190cf0 ^ _DAT_180cb6f90) + _DAT_183190850 + 0x84222329;
  uVar5 = (_DAT_183190850 ^ _UNK_180cb6f98) + _DAT_183190cf0 + 0xe2;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183190cf0 ^ _DAT_180cb6f90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183190850 ^ _UNK_180cb6f98;
  _DAT_183190be0 =
       func_0x0001878f0190((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183190cf0 + 0xe2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183190850 + 0x84222329));
  uVar4 = _DAT_183190be0 >> 1 | _DAT_183190be0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RSI) + (uVar4 >> 2 & unaff_RSI);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183190be0;
  _DAT_183190890 = _DAT_183190b98 ^ uVar4 ^ 0xee;
  _DAT_1831907f0 = (_DAT_1831907f0 ^ uVar4) + 0xee ^ 0x59c2e984e3689af0;
  _DAT_183190c70 = (_DAT_183190c70 * -0x2cdacd9136eacbf1 ^ _DAT_1831907f0) + uVar4;
  _DAT_1831907c8 = _DAT_183190c70 ^ _DAT_1831907f0;
  _DAT_183190e80 = 0xee;
  _DAT_183190da8 = func_0x0001878f0190(_DAT_183190d00 ^ 0x23007be5001d79);
  _DAT_183190db0 = _DAT_183190da8 & 0x7fffffffffffffff;
  _DAT_183190dd0 = _DAT_183190dd0 ^ _DAT_183190db0 ^ 0x922474ab0c373a3c;
  _DAT_183190a20 = (_DAT_183190a20 * 0x2eb4852b2073077d ^ _DAT_183190dd0) + _DAT_183190db0;
  _DAT_183190a18 = _DAT_183190a20 ^ _DAT_183190dd0;
  _DAT_183190c18 = 0;
  uVar4 = (_DAT_1831908c8 ^ _DAT_180cb6fa0) + _DAT_183190a40 + 0x84222358;
  uVar5 = (_DAT_183190a40 ^ _UNK_180cb6fa8) + _DAT_1831908c8 + 0xff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831908c8 ^ _DAT_180cb6fa0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183190a40 ^ _UNK_180cb6fa8;
  _DAT_183190718 =
       func_0x0001878f0190((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831908c8 + 0xff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183190a40 + 0x84222358));
  uVar4 = ((_DAT_183190718 << 0x1f | _DAT_183190718 >> 0x21) << 1 |
          (_DAT_183190718 & 0x1ffffffff) >> 0x20) ^ 0xff;
  _DAT_1831908b0 = (_DAT_1831908b0 ^ uVar4) + 0x82 ^ 0xfdefcc4c8207b282;
  _DAT_183190728 = (_DAT_183190728 * 0x25c18c470ab6936b ^ _DAT_1831908b0) + uVar4;
  _DAT_183190ef0 = _DAT_183190728 ^ _DAT_1831908b0;
  _DAT_183190978 = 0x82;
  uVar4 = (~_DAT_183190a38 + 0x83) *
          ((_DAT_183190960 ^ 0x84222358) + (ulonglong)((uint)_DAT_183190960 & 0x84222358) * 2);
  uVar4 = (uVar4 | _DAT_1831907b0) + (uVar4 & _DAT_1831907b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183190ca0 = func_0x0001878f0190((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  uVar4 = (ulonglong)(~(((uint)_DAT_183190ca0 ^ 0xff) * 2) >> 1 & 0x7d);
  _DAT_183190d08 = _DAT_183190d08 ^ uVar4 ^ 0xfa3779ca3a77863;
  _DAT_1831909d0 = (_DAT_1831909d0 * -0x4d58b8728650d091 ^ _DAT_183190d08) + uVar4;
  _DAT_183190dc0 = _DAT_1831909d0 ^ _DAT_183190d08;
  _DAT_183190938 = 0;
  uVar4 = (_DAT_1831908e0 ^ 0x84222315) + _DAT_1831909e0 + 0x84222315;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831908e0 ^ 0x84222315;
  uVar5 = ((_DAT_1831909e0 + _DAT_1831908e0) * 0x2000 | _DAT_1831909e0 + _DAT_1831908e0 >> 0x33) ^
          _DAT_1831909e0;
  _DAT_183190d00 =
       func_0x0001878f0190((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_1831908e0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831909e0 + 0x84222315));
  uVar4 = (_DAT_183190d00 ^ 0x30) & 0x7fffffffffffffff;
  _DAT_183190a78 = _DAT_1831909f0 ^ uVar4 ^ 0x30;
  _DAT_1831909b0 = (_DAT_1831909b0 ^ uVar4) + 0x30 ^ 0x8977189bade78831;
  _DAT_183190bc0 = (_DAT_183190bc0 * -0x1b082a3d82614d3 ^ _DAT_1831909b0) + uVar4;
  _DAT_183190c90 = _DAT_183190bc0 ^ _DAT_1831909b0;
  _DAT_183190c80 = 0x30;
  uVar4 = unaff_R13 ^ 0x84222325 ^ _DAT_1831907c8;
  lVar3 = (unaff_R13 ^ 0x84222325) + _DAT_1831909c0;
  uVar5 = uVar4 + lVar3;
  uVar6 = ~_DAT_1831909c0 + (_DAT_1831907c8 - 1);
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ ~_DAT_1831909c0;
  bVar1 = *(byte *)(unaff_RBP + 0x20);
  _DAT_183190eb8 =
       func_0x0001878f0190((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831907c8 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar8 = (uint)(unaff_R13 >> 0x20);
  auVar2._8_4_ = (int)unaff_R13;
  auVar2._0_8_ = unaff_R13;
  auVar2._12_4_ = uVar8;
  uVar7 = SUB164(auVar2 ^ unaff_XMM14,0);
  uVar4 = SUB168(auVar2 ^ unaff_XMM14,0);
  lVar3 = ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180cb6ff0 +
           (ulonglong)uVar8 * (ulonglong)unaff_XMM6_Da << 0x20) +
          (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM6_Da;
  _DAT_1831908d0 =
       ((ulonglong)uVar7 * (ulonglong)unaff_XMM8_Da +
        ((ulonglong)uVar7 * (ulonglong)_DAT_180cb7070 + (uVar4 >> 0x20) * (ulonglong)unaff_XMM8_Da
        << 0x20) + lVar3 +
        (ulonglong)uVar7 * (ulonglong)unaff_XMM10_Da +
        ((ulonglong)uVar7 * (ulonglong)_DAT_180cb7060 + (uVar4 >> 0x20) * (ulonglong)unaff_XMM10_Da
        << 0x20) +
        ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180cb7030 +
         (ulonglong)uVar8 * (ulonglong)unaff_XMM11_Da << 0x20) +
        (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM11_Da +
        ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180cb7010 +
         (ulonglong)uVar8 * (ulonglong)unaff_XMM9_Da << 0x20) +
        (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM9_Da ^ unaff_XMM14._0_8_) +
       (ulonglong)uVar7 * (ulonglong)_DAT_180cb6fd0 +
       ((uVar4 >> 0x20) * (ulonglong)_DAT_180cb6fd0 + (ulonglong)uVar7 * (ulonglong)_DAT_180cb6fb0
       << 0x20) +
       (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180cb6fc0 +
       ((unaff_R13 >> 0x20) * (ulonglong)_DAT_180cb6fc0 +
        (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180cb6fb0 << 0x20) + lVar3 + 0xe28fe62961a83e0c;
  _DAT_1831909a8 = _DAT_183190c68 ^ _DAT_183190eb8 ^ _DAT_1831908d0;
  _DAT_183190c40 = (_DAT_183190c40 ^ _DAT_183190eb8) + _DAT_1831908d0 ^ 0x9652075462447449;
  _DAT_183190c50 = (_DAT_183190c50 * -0x72372fd2113cf653 ^ _DAT_183190c40) + _DAT_183190eb8;
  _DAT_183190c88 = _DAT_183190c50 ^ _DAT_183190c40;
  *(byte *)(unaff_RBP + -0x50 + _DAT_1831908d0) = bVar1 | 0x30;
  switch(*(uint *)(unaff_RBP + 0x60) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78ca9d0 (image 1878ca9d0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878ca9d0(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar1;
  ulonglong uVar2;
  
  *(uint *)(unaff_RBP + 0x30) = unaff_ESI;
  *(uint *)(unaff_RBP + 0x60) = unaff_ESI;
  *(char *)(unaff_RBP + 0x20) = (char)unaff_ESI + (char)(unaff_ESI / 10) * -10;
  uVar1 = (_DAT_183190a28 ^ _DAT_180cb6f40) + _DAT_183190720 + 0x8422230e;
  uVar2 = (_DAT_183190720 ^ _UNK_180cb6f48) + _DAT_183190a28 + 0x1f;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183190a28 ^ _DAT_180cb6f40;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183190720 ^ _UNK_180cb6f48;
  _DAT_183190d50 =
       func_0x0001878f0190((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183190a28 + 0x1f) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183190720 + 0x8422230e));
  uVar1 = _DAT_183190d50 << 0x18 | _DAT_183190d50 >> 0x28;
  _DAT_183190cf8 = (_DAT_183190cf8 ^ uVar1) + 0x3f ^ 0x80136447c8337207;
  _DAT_183190ea8 = (_DAT_183190ea8 * 0x2e056128c9d8171f ^ _DAT_183190cf8) + uVar1;
  _DAT_1831907f8 = _DAT_183190ea8 ^ _DAT_183190cf8;
  _DAT_183190ac8 = 0x3f;
  uVar1 = (~_DAT_183190cb8 + 0x4e) *
          ((_DAT_183190ba8 ^ 0x842223d6) + (ulonglong)((uint)_DAT_183190ba8 & 0x842223d6) * 2);
  uVar1 = (uVar1 | _DAT_183190e08) + (uVar1 & _DAT_183190e08);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183190ac0 = func_0x0001878f0190((uVar1 | 0x8422239b) + (ulonglong)((uint)uVar1 & 0x8422239b))
  ;
  uVar1 = (_DAT_183190ac0 ^ 0x4917) & 0x7fffffffffffffff;
  uVar2 = uVar1 - (((_DAT_183190ac0 ^ 0x4917) & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1) <<
          0x2b | uVar1 >> 0x15;
  _DAT_183190760 = (_DAT_183190760 ^ uVar1) + 0xbe ^ 0xa6d3620f588dca82;
  _DAT_183190e28 = (_DAT_183190e28 * 0x48bbe337e5b9fa4d ^ _DAT_183190760) + uVar1;
  _DAT_183190a30 = _DAT_183190e28 ^ _DAT_183190760;
  _DAT_183190d00 = 0xbe;
  _DAT_183190bd0 = func_0x0001878f0190(_DAT_183190c40 + 0xffe1007c860021ffU ^ 0x2f);
  _DAT_183190de0 =
       (_DAT_183190de0 ^ _DAT_183190bd0 & 0x7fffffffe0000000) - 0xdb ^ 0xd3c9fa2bb894b0cb;
  _DAT_183190ce0 =
       (_DAT_183190ce0 * -0x3733e811c3754379 ^ _DAT_183190de0) +
       (_DAT_183190bd0 & 0x7fffffffe0000000);
  _DAT_1831907c8 = _DAT_183190ce0 ^ _DAT_183190de0;
  _DAT_183190aa8 = 0x25;
  uVar1 = (_DAT_1831907e0 ^ _DAT_180cb6f50) + _DAT_183190c30 + 0x84222315;
  uVar2 = (_DAT_183190c30 ^ _UNK_180cb6f58) + _DAT_1831907e0 + 0xdb;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831907e0 ^ _DAT_180cb6f50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183190c30 ^ _UNK_180cb6f58;
  _DAT_183190aa8 =
       func_0x0001878f0190((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831907e0 + 0xdb) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183190c30 + 0x84222315));
  uVar1 = _DAT_183190aa8 >> 5 & 0xffffffffffffe000;
  _DAT_183190890 = _DAT_1831909c8 ^ uVar1 ^ 0x10b;
  _DAT_183190778 = (_DAT_183190778 ^ uVar1) + 0x10b ^ 0x8ff2d432c2ab41b6;
  _DAT_183190ba0 = (_DAT_183190ba0 * 0x5bbcb6a46e9a854d ^ _DAT_183190778) + uVar1;
  _DAT_1831908e8 = _DAT_183190ba0 ^ _DAT_183190778;
  _DAT_1831907f8 = 0xb;
  uVar1 = (~_DAT_183190950 + 0x26) *
          ((_DAT_183190c70 ^ 0x8422232e) + (ulonglong)((uint)_DAT_183190c70 & 0x8422232e) * 2);
  uVar1 = (uVar1 | _DAT_183190b48) + (uVar1 & _DAT_183190b48);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183190be8 = func_0x0001878f0190((uVar1 | 0x8422230b) + (ulonglong)((uint)uVar1 & 0x8422230b))
  ;
  _DAT_183190750 = (_DAT_183190be8 & 0x3fffffffffffff) * -0x54c7f95453b3cd03;
  _DAT_183190e18 = (_DAT_183190e18 ^ _DAT_183190750) + 0x30 ^ 0x8cadf42c4ed7f501;
  _DAT_183190750 =
       ((_DAT_183190d48 ^ _DAT_183190750 ^ 0x30) * -0x7a509fc6bc2d587d ^ _DAT_183190e18) +
       _DAT_183190750;
  _DAT_183190d60 = _DAT_183190750 ^ _DAT_183190e18;
  _DAT_183190780 = 0x30;
  _DAT_183190a08 = func_0x0001878f0190(_DAT_1831907b8 ^ 0xffe0ff8425ffe1be);
  uVar1 = (_DAT_183190a08 & 0x7fffffffffffffff) >> 1 | _DAT_183190a08 & 0x7fffffffffffffff;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_183190a08 & 0x7fffffffffffffff;
  _DAT_183190a68 = (_DAT_183190a68 ^ uVar1) - 0xff ^ 0xd4fee6c8199cacc5;
  _DAT_183190cf8 = (_DAT_183190cf8 * -0x7078476eb7cef9d ^ _DAT_183190a68) + uVar1;
  _DAT_183190ef8 = _DAT_183190cf8 ^ _DAT_183190a68;
  _DAT_183190718 = 1;
  uVar1 = (~_DAT_1831907f8 + 0x100) *
          ((_DAT_183190e48 ^ 0x84222315) + (ulonglong)((uint)_DAT_183190e48 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_183190958) + (uVar1 & _DAT_183190958);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831908a8 = func_0x0001878f0190((uVar1 | 0x842223ea) + (ulonglong)((uint)uVar1 & 0x842223ea))
  ;
  uVar1 = _DAT_1831908e8 >> 1 | _DAT_1831908e8;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1831908e8;
  _DAT_183190878 = _DAT_183190960 ^ uVar1 ^ 0x12f;
  _DAT_183190930 = (_DAT_183190930 ^ uVar1) + 0x12f ^ 0x90c931abeedfd1de;
  _DAT_183190d98 = (_DAT_183190d98 * 0x2e690269049d11e3 ^ _DAT_183190930) + uVar1;
  _DAT_183190c48 = _DAT_183190d98 ^ _DAT_183190930;
  _DAT_183190aa0 = 0x2f;
  uVar1 = (~_DAT_183190d10 + 2) *
          ((_DAT_183190ef0 ^ 0x8422230a) + (ulonglong)((uint)_DAT_183190ef0 & 0x8422230a) * 2);
  uVar1 = (uVar1 | _DAT_183190db8) + (uVar1 & _DAT_183190db8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183190c08 = func_0x0001878f0190((uVar1 | 0x8422230b) + (ulonglong)((uint)uVar1 & 0x8422230b))
  ;
  uVar1 = (_DAT_183190c08 & 0x1ffffffff800) * 0x80000;
  _DAT_183190a88 = _DAT_183190a68 ^ uVar1 ^ 0x30;
  _DAT_183190e90 = (_DAT_183190e90 ^ uVar1) + 0x30 ^ 0x4fc6c4e7429cbebc;
  _DAT_183190950 = (_DAT_183190950 * -0x20b4a9c37c944acd ^ _DAT_183190e90) + uVar1;
  _DAT_183190758 = _DAT_183190950 ^ _DAT_183190e90;
  _DAT_183190ac0 = 0x30;
  _DAT_1831907d0 = func_0x0001878f0190(_DAT_1831908f8 ^ 0x230083c9001d3a);
  _DAT_183190d70 =
       (_DAT_183190d70 ^ _DAT_1831907d0 & 0xfffffffffffffffe) - 0x7e ^ 0xe3f9eb6487d7818f;
  _DAT_183190740 =
       (_DAT_183190740 * -0x6b20060fecb27e8b ^ _DAT_183190d70) +
       (_DAT_1831907d0 & 0xfffffffffffffffe);
  _DAT_183190ae8 = _DAT_183190740 ^ _DAT_183190d70;
  _DAT_1831908d0 = 0x82;
  uVar1 = (~_DAT_183190778 + 0x83) *
          ((_DAT_183190ec0 ^ 0x8422238b) + (ulonglong)((uint)_DAT_183190ec0 & 0x8422238b) * 2);
  uVar1 = (uVar1 | _DAT_183190850) + (uVar1 & _DAT_183190850);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183190b98 = func_0x0001878f0190((uVar1 | 0x84222309) + (ulonglong)((uint)uVar1 & 0x84222309))
  ;
  uVar1 = ((_DAT_183190b98 ^ 0x5850) & 0xfffffffffffffff0) << 5 | _DAT_183190b98 >> 0x3b;
  _DAT_1831908b0 = _DAT_1831909f8 ^ uVar1 ^ 0x130;
  _DAT_183190c78 = (_DAT_183190c78 ^ uVar1) + 0x130 ^ 0x320ff4b0920e3883;
  _DAT_183190b00 = (_DAT_183190b00 * -0x30d0d39455767127 ^ _DAT_183190c78) + uVar1;
  _DAT_183190d40 = _DAT_183190b00 ^ _DAT_183190c78;
  _DAT_1831909a0 = 0x30;
  _DAT_1831908b8 = func_0x0001878f0190(_DAT_183190d88 ^ 0x22ff8463ffddb2);
  uVar1 = _DAT_1831908b8 - (_DAT_1831908b8 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1831908b8;
  uVar1 = uVar2 >> 1 | uVar2;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uVar2) & 0xfffffffffffffff8;
  _DAT_1831907a8 = (_DAT_1831907a8 ^ uVar1) + 0x81 ^ 0xbc0d9ff08704608e;
  _DAT_183190898 = (_DAT_183190898 * 0x54d7da6b65a68611 ^ _DAT_1831907a8) + uVar1;
  _DAT_183190b10 = _DAT_183190898 ^ _DAT_1831907a8;
  _DAT_1831907e8 = 0x81;
  _DAT_183190908 = func_0x0001878f0190(_DAT_183190de8 + 0xffe100845bffe1ffU ^ 0x22);
  uVar1 = _DAT_183190908 & 0x7fffffffffffffff ^ 0xbe;
  _DAT_183190750 = (_DAT_183190750 ^ uVar1) + 0x3e ^ 0x5f977b8ed1fe7199;
  _DAT_183190e78 = (_DAT_183190e78 * -0x38b5361e1eaa6b3d ^ _DAT_183190750) + uVar1;
  _DAT_183190840 = _DAT_183190e78 ^ _DAT_183190750;
  _DAT_183190c80 = 0x3e;
  uVar1 = (~_DAT_183190b40 + 0x7d) *
          ((_DAT_183190df0 ^ 0x842223a4) + (ulonglong)((uint)_DAT_183190df0 & 0x842223a4) * 2);
  uVar1 = (uVar1 | _DAT_183190a70) + (uVar1 & _DAT_183190a70);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183190b08 = func_0x0001878f0190((uVar1 | 0x842223d8) + (ulonglong)((uint)uVar1 & 0x842223d8))
  ;
  uVar1 = (_DAT_183190b08 ^ 0x3e7c) & 0x7fffffffffffffff;
  uVar2 = uVar1 - (((_DAT_183190b08 ^ 0x3e7c) & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar1;
  _DAT_183190ca8 = _DAT_183190840 ^ uVar1 ^ 0xfd;
  _DAT_183190c28 = (_DAT_183190c28 ^ uVar1) + 0xfd ^ 0x9ad37c25956d4551;
  _DAT_183190b30 = (_DAT_183190b30 * -0x27c7f419885d7595 ^ _DAT_183190c28) + uVar1;
  _DAT_1831909c8 = _DAT_183190b30 ^ _DAT_183190c28;
  _DAT_183190de0 = _DAT_183190c70 ^ 0xfd;
  _DAT_183190770 = 0xfd;
  _DAT_183190c68 = func_0x0001878f0190(_DAT_183190a38 ^ 0x1cff7c1b0021e5);
  _DAT_183190c20 = _DAT_183190920;
  _DAT_183190c30 = _DAT_183190c30 ^ _DAT_183190920 ^ 0x5290b54b744a9b0c;
  _DAT_1831908a0 = (_DAT_1831908a0 * -0x39f99c3180b4ae65 ^ _DAT_183190c30) + _DAT_183190920;
  _DAT_183190840 = _DAT_1831908a0 ^ _DAT_183190c30;
  _DAT_183190a18 = 0;
  uVar1 = (_DAT_183190870 ^ 0x84222315) + _DAT_183190ca8 + 0x84222315;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183190870 ^ 0x84222315;
  uVar2 = ((_DAT_183190ca8 + _DAT_183190870) * 0x2000 | _DAT_183190ca8 + _DAT_183190870 >> 0x33) ^
          _DAT_183190ca8;
  _DAT_183190a20 =
       func_0x0001878f0190((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183190870 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183190ca8 + 0x84222315));
  uVar1 = _DAT_183190a20 ^ 0x30;
  _DAT_183190ee8 = _DAT_183190800 ^ uVar1 ^ 0x30;
  _DAT_183190e68 = (_DAT_183190e68 ^ uVar1) + 0x30 ^ 0x73eeacba5c2bc2b3;
  _DAT_183190760 = (_DAT_183190760 * 0x3bbaa97084df72b ^ _DAT_183190e68) + uVar1;
  _DAT_1831907b0 = _DAT_183190760 ^ _DAT_183190e68;
  _DAT_183190a28 = 0x30;
  uVar1 = (_DAT_183190e78 ^ 0x84222315) + _DAT_183190b88 + 0x84222315;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183190e78 ^ 0x84222315;
  uVar2 = ((_DAT_183190b88 + _DAT_183190e78) * 0x2000 | _DAT_183190b88 + _DAT_183190e78 >> 0x33) ^
          _DAT_183190b88;
  _DAT_183190c68 =
       func_0x0001878f0190((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183190e78 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183190b88 + 0x84222315));
  uVar1 = (_DAT_183190c68 ^ 0x30) * -0x56e0d908ab89653d;
  _DAT_1831908f8 = _DAT_183190828 ^ uVar1 ^ 0x30;
  _DAT_183190c58 = (_DAT_183190c58 ^ uVar1) + 0x30 ^ 0x4df79208202ee650;
  _DAT_1831907b8 = (_DAT_1831907b8 * 0xde87c835d7db5e7 ^ _DAT_183190c58) + uVar1;
  _DAT_183190ec8 = _DAT_1831907b8 ^ _DAT_183190c58;
  _DAT_183190c88 = 0x30;
  _DAT_183190990 = func_0x0001878f0190(_DAT_183190888 ^ 0xffdf007bdb0021c0);
  _DAT_183190850 = _DAT_183190850 ^ _DAT_183190990 ^ 0x2b ^ 0xe9079ca82378aa13;
  _DAT_183190878 = (_DAT_183190878 * 0x5b89125e7b29f961 ^ _DAT_183190850) + (_DAT_183190990 ^ 0x2b);
  _DAT_183190710 = _DAT_183190878 ^ _DAT_183190850;
  _DAT_183190a68 = 0;
  *(byte *)(in_RAX + -1) = *(byte *)(unaff_RBP + 0x20) | 0x30;
  switch(*(uint *)(unaff_RBP + 0x60) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78cbb1e (image 1878cbb1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001878cc01f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1878cbb1e(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_RBP;
  ulonglong uVar12;
  ulonglong unaff_R15;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  undefined1 auVar20 [16];
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar27;
  undefined1 auVar26 [16];
  ulonglong uVar28;
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar12 = uVar1 ^ 0x84222325 ^ _DAT_183190a80;
  lVar10 = (uVar1 ^ 0x84222325) + _DAT_183190940;
  uVar15 = uVar12 + lVar10;
  uVar17 = (unaff_R15 ^ _DAT_183190940) + _DAT_183190a80 + unaff_R15;
  uVar12 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar12;
  uVar15 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ unaff_R15 ^ _DAT_183190940;
  _DAT_183190778 =
       func_0x0001878f0190((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_183190a80 + unaff_R15) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - lVar10);
  uVar14 = (uint)(uVar1 >> 0x20);
  auVar16._8_4_ = (int)uVar1;
  auVar16._0_8_ = uVar1;
  auVar16._12_4_ = uVar14;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = unaff_R15;
  uVar24 = (undefined4)unaff_R15;
  uVar27 = (uint)(unaff_R15 >> 0x20);
  *(ulonglong *)(unaff_RBP + 0x60) = (ulonglong)uVar14;
  *(ulonglong *)(unaff_RBP + 0x68) = auVar16._8_8_ >> 0x20;
  uVar9 = _DAT_180cb72a0;
  uVar8 = _DAT_180cb7290;
  uVar3 = (ulonglong)_DAT_180cb7260;
  uVar17 = (ulonglong)_DAT_180cb7260;
  auVar18._8_4_ = uVar24;
  auVar18._0_8_ = unaff_R15;
  auVar18._12_4_ = uVar27;
  auVar18 = auVar16 & auVar18;
  auVar20._8_4_ = 0xffffffff;
  auVar20._0_8_ = 0xffffffffffffffff;
  auVar20._12_4_ = 0xffffffff;
  uVar2 = (ulonglong)_DAT_180cb7280;
  uVar12 = (ulonglong)_DAT_180cb7250;
  uVar15 = (ulonglong)_DAT_180cb7270;
  uVar4 = (ulonglong)_DAT_180cb7280;
  uVar13 = auVar18._0_4_;
  uVar5 = (ulonglong)_DAT_180cb7290;
  *(ulonglong *)(unaff_RBP + 0x30) = auVar18._0_8_ >> 0x20;
  *(ulonglong *)(unaff_RBP + 0x38) = auVar18._8_8_ >> 0x20;
  auVar6._8_4_ = uVar24;
  auVar6._0_8_ = unaff_R15;
  auVar6._12_4_ = uVar27;
  uVar19 = SUB164(auVar16 | auVar6,0);
  uVar21 = SUB168(auVar16 | auVar6,0);
  auVar7._8_4_ = uVar24;
  auVar7._0_8_ = unaff_R15;
  auVar7._12_4_ = uVar27;
  uVar23 = SUB164(auVar16 ^ auVar7,0);
  uVar28 = SUB168(auVar16 ^ auVar7,0);
  uVar22 = SUB164(auVar16 ^ auVar20,0);
  uVar25 = SUB164(auVar26 ^ auVar20,0);
  uVar11 = _DAT_183190778 & 0x7fffffffffffffff;
  _DAT_183190e10 =
       (((ulonglong)uVar25 * (ulonglong)_DAT_180cb72e0 +
         ((SUB168(auVar26 ^ auVar20,0) >> 0x20) * (ulonglong)_DAT_180cb72e0 +
          (ulonglong)_DAT_180cb7270 * (ulonglong)uVar25 << 0x20) +
         (ulonglong)uVar22 * (ulonglong)_DAT_180cb72d0 +
         ((SUB168(auVar16 ^ auVar20,0) >> 0x20) * (ulonglong)_DAT_180cb72d0 +
          (ulonglong)_DAT_180cb7250 * (ulonglong)uVar22 << 0x20) +
        (ulonglong)uVar9 * (ulonglong)uVar23 +
        ((uVar28 >> 0x20) * (ulonglong)uVar9 + (ulonglong)uVar8 * (ulonglong)uVar23 << 0x20) +
        (ulonglong)uVar13 * (ulonglong)uVar9 +
        ((auVar18._0_8_ >> 0x20) * (ulonglong)uVar9 + uVar13 * uVar5 << 0x20) +
        uVar2 * (unaff_R15 & 0xffffffff) +
        (uVar27 * uVar4 + (unaff_R15 & 0xffffffff) * uVar15 << 0x20) +
        uVar17 * (uVar1 & 0xffffffff) + (uVar14 * uVar3 + (uVar1 & 0xffffffff) * uVar12 << 0x20) +
        (ulonglong)_DAT_180cb72b0 * (ulonglong)uVar19 +
        ((ulonglong)_DAT_180cb72c0 * (ulonglong)uVar19 +
         (uVar21 >> 0x20) * (ulonglong)_DAT_180cb72b0 << 0x20)) -
       ((ulonglong)uVar23 * (_DAT_180cb7370 & 0xffffffff) +
        ((ulonglong)_DAT_180cb7380 * (ulonglong)uVar23 +
         (uVar28 >> 0x20) * (_DAT_180cb7370 & 0xffffffff) << 0x20) +
        (ulonglong)uVar19 * (ulonglong)_DAT_180cb7350 +
        ((ulonglong)_DAT_180cb7360 * (ulonglong)uVar19 +
         (uVar21 >> 0x20) * (ulonglong)_DAT_180cb7350 << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_180cb7330 +
       ((ulonglong)_DAT_180cb7340 * (ulonglong)uVar13 +
        (ulonglong)*(uint *)(unaff_RBP + 0x30) * (ulonglong)_DAT_180cb7330 << 0x20) +
       (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180cb7320 +
       ((ulonglong)uVar27 * (ulonglong)_DAT_180cb7320 +
        (ulonglong)_DAT_180cb7310 * (unaff_R15 & 0xffffffff) << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_180cb7320 +
       ((ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_180cb7320 +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_180cb7310 << 0x20))) + 0xefe27a7700d720a6;
  _DAT_183190cf8 = _DAT_183190e10 ^ uVar11;
  _DAT_183190a40 = (_DAT_183190a40 ^ uVar11) + _DAT_183190e10 ^ 0x4597ba80d3650acf;
  _DAT_183190cc8 = (_DAT_183190cc8 * 0x51abf71a9237482b ^ _DAT_183190a40) + uVar11;
  _DAT_1831908e0 = _DAT_183190cc8 ^ _DAT_183190a40;
  lVar10 = unaff_RBP + -0x30;
  FUN_18414b520(lVar10);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar10 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x48) + 0x70))
            (*(longlong **)(unaff_RBP + 0x48),*(undefined8 *)(unaff_RBP + 0x18),lVar10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 78f2ccf (image 1878f2ccf) =====

void FUN_1878f2ccf(void)

{
  return;
}



// ===== continuation @ rva 78f2b2b (image 1878f2b2b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f2b2b(void)

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



// ===== continuation @ rva 78f8c7d (image 1878f8c7d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f8c7d(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong unaff_R12;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar7;
  undefined1 auVar6 [16];
  longlong *in_stack_00000030;
  uint in_stack_00000040;
  undefined8 in_stack_00000078;
  
  (**(code **)(*in_stack_00000030 + 0x6f8))(in_stack_00000030,in_stack_00000078);
  uVar5 = (_DAT_183191b60 ^ _DAT_180cbd840) + _DAT_183191b58 + 0x5901782c;
  uVar7 = (_DAT_183191b58 ^ _UNK_180cbd848) + _DAT_183191b60 + 0x47bf9efe;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183191b60 ^ _DAT_180cbd840;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183191b58 ^ _UNK_180cbd848;
  _DAT_183191b98 =
       func_0x0001878fb610((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183191b60 + 0x47bf9efe) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183191b58 + 0x5901782c));
  _DAT_183191c10 = (_DAT_183191c10 ^ _DAT_183191f78) + 0xdfbfdfff ^ 0xd8b08327e9d27a5e;
  _DAT_183192028 = (_DAT_183192028 * 0x5959caf12bacd26f ^ _DAT_183191c10) + _DAT_183191f78;
  _DAT_183191b70 = _DAT_183192028 ^ _DAT_183191c10;
  _DAT_183191a60 = 0xdfbfdfff;
  _DAT_183191c68 = func_0x0001878fb610(_DAT_183191a48 + 0xff0e0002330025ffU ^ 0xb4);
  _DAT_183191db0 = (_DAT_183191db0 ^ _DAT_183191c68 ^ 0xbf3cfd77) + 0x821cdd72 ^ 0x8ed2ca909eb613d0;
  _DAT_1831919c0 =
       (_DAT_1831919c0 * 0x591b6c05b7a2c0c3 ^ _DAT_183191db0) + (_DAT_183191c68 ^ 0xbf3cfd77);
  _DAT_1831919d0 = _DAT_1831919c0 ^ _DAT_183191db0;
  _DAT_1831920e8 = 0x821cdd72;
  _DAT_183191c20 = func_0x0001878fb610(_DAT_183191b10 + 0x3fffa695004dffU ^ 0xe8);
  uVar5 = ((_DAT_183191c20 ^ 0x63fcff8e) << 0x28 | (_DAT_183191c20 ^ 0x63fcff8e) >> 0x18) *
          0xa057c4f8a44fa07;
  _DAT_183191c80 = _DAT_183191e18 ^ uVar5 ^ 0x63fd1b8e;
  _DAT_183191c68 = (_DAT_183191c68 ^ uVar5) + 0x63fd1b8e ^ 0x4e0faa3ce512bacc;
  _DAT_183191fc8 = (_DAT_183191fc8 * 0x38f7a3d543c2ad0b ^ _DAT_183191c68) + uVar5;
  _DAT_183191ac8 = _DAT_183191fc8 ^ _DAT_183191c68;
  _DAT_183191e48 = 0x63fd1b8e;
  _DAT_183191fb8 = func_0x0001878fb610(_DAT_183192028 ^ 0xffbb002ac6ffbb90);
  uVar5 = (ulonglong)(~(uint)_DAT_183191fb8 & 0x63fd1b8e) ^ 0x9c03e372;
  _DAT_183191a40 = _DAT_183191c88 ^ uVar5 ^ 0x10000ff00;
  _DAT_183191c00 = (_DAT_183191c00 ^ uVar5) + 0x10000ff00 ^ 0x440b77bfe138ef1f;
  _DAT_183191f90 = (_DAT_183191f90 * -0x6d56f6143cc278b ^ _DAT_183191c00) + uVar5;
  _DAT_183191a58 = _DAT_183191f90 ^ _DAT_183191c00;
  _DAT_183191d38 = 0xff00;
  _DAT_183191d78 = func_0x0001878fb610(_DAT_183191f70 ^ 0xff6800c66fffed20);
  _DAT_183191970 = (_DAT_183191970 ^ _DAT_183191d78) - 0x42309bb5 ^ 0x5b124d5ddc3c0a86;
  _DAT_183191cb0 = (_DAT_183191cb0 * 0x2d13fa98d6e495cd ^ _DAT_183191970) + _DAT_183191d78;
  _DAT_183191d00 = _DAT_183191cb0 ^ _DAT_183191970;
  _DAT_183191ea0 = 0xbdcf644b;
  uVar5 = (~_DAT_183191cb8 + 0xbdcf644c) *
          ((_DAT_183191b08 ^ 0xc613b990) + (ulonglong)((uint)_DAT_183191b08 & 0xc613b990) * 2);
  uVar5 = (uVar5 | _DAT_183192068) + (uVar5 & _DAT_183192068);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183191e10 = func_0x0001878fb610((uVar5 | 0x7bdcdddb) + (ulonglong)((uint)uVar5 & 0x7bdcdddb))
  ;
  uVar5 = _DAT_183191e10 & 0xfffffffffffffffc;
  _DAT_183191980 = _DAT_183191a68 ^ uVar5 ^ 0x10000ff00;
  _DAT_183191d08 = (_DAT_183191d08 ^ uVar5) + 0x10000ff00 ^ 0x66f43e20b416b1f5;
  _DAT_183191d28 = (_DAT_183191d28 * -0x71c09ee63e5b201f ^ _DAT_183191d08) + uVar5;
  _DAT_183191e78 = _DAT_183191d28 ^ _DAT_183191d08;
  _DAT_183191fb0 = 0xff00;
  uVar5 = (_DAT_183192018 ^ _DAT_180cbd850) + _DAT_183191980 + 0x84222325;
  uVar7 = (_DAT_183191980 ^ _UNK_180cbd858) + _DAT_183192018 + 0xaee0d414;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183192018 ^ _DAT_180cbd850;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183191980 ^ _UNK_180cbd858;
  _DAT_183191ee0 =
       func_0x0001878fb610((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183192018 + 0xaee0d414) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183191980 + 0x84222325));
  _DAT_183191b40 = (_DAT_183191b40 ^ _DAT_183191ee0) - 0xaee0d414 ^ 0xcfb763d4a23a8760;
  _DAT_183191ba0 = (_DAT_183191ba0 * -0x3b29e59cc31cef9 ^ _DAT_183191b40) + _DAT_183191ee0;
  _DAT_183192058 = _DAT_183191ba0 ^ _DAT_183191b40;
  _DAT_183191c70 = 0x511f2bec;
  uVar5 = (~_DAT_183191cd0 + 0xaee0d415) *
          ((_DAT_183191a58 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183191a58 & 0x8422dc25) * 2);
  uVar5 = (uVar5 | _DAT_183191d00) + (uVar5 & _DAT_183191d00);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183191950 = func_0x0001878fb610((uVar5 | 0x2ac20831) + (ulonglong)((uint)uVar5 & 0x2ac20831))
  ;
  uVar5 = _DAT_183191950 >> 1 | _DAT_183191950;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R12) + (uVar5 >> 2 & unaff_R12);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183191950;
  _DAT_183191ae0 = _DAT_183191e70 ^ uVar5 ^ 0xaee1d314;
  _DAT_183191a90 = (_DAT_183191b50 ^ uVar5) + 0xaee1d314;
  _DAT_183191b50 = _DAT_183191a90 ^ 0xf617766beb2b1064;
  _DAT_183191ee8 = (_DAT_183191ee8 * 0x9cbef7e48bf4a79 ^ _DAT_183191b50) + uVar5;
  _DAT_183191d60 = _DAT_183191ee8 ^ _DAT_183191b50;
  _DAT_183191a90 = _DAT_183191a90 ^ 0xf617766b45cac370;
  _DAT_1831920b0 = 0xaee1d314;
  uVar5 = (_DAT_183191e48 ^ _DAT_180cbd860) + _DAT_183191cb8 + 0x5b9dfcda;
  uVar7 = (_DAT_183191cb8 ^ _UNK_180cbd868) + _DAT_183191e48 + 0x821cdd72;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183191e48 ^ _DAT_180cbd860;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183191cb8 ^ _UNK_180cbd868;
  _DAT_183191d78 =
       func_0x0001878fb610((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183191e48 + 0x821cdd72) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183191cb8 + 0x5b9dfcda));
  _DAT_183191e50 =
       (_DAT_183191e50 ^ _DAT_183191d78 * 0x14e6d85c00051d41) + 0x5da3028d ^ 0x92543dfef770d;
  _DAT_183191920 =
       (_DAT_183191920 * 0x76d191535b70e7fb ^ _DAT_183191e50) + _DAT_183191d78 * 0x14e6d85c00051d41;
  _DAT_183191f68 = _DAT_183191920 ^ _DAT_183191e50;
  _DAT_183191c58 = 0x5da3028d;
  uVar5 = (_DAT_183191c60 ^ _DAT_180cbd870) + _DAT_183191938 + 0xd98121a8;
  uVar7 = (_DAT_183191938 ^ _UNK_180cbd878) + _DAT_183191c60 + 0x439bae4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183191c60 ^ _DAT_180cbd870;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183191938 ^ _UNK_180cbd878;
  _DAT_183191e10 =
       func_0x0001878fb610((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183191c60 + 0x439bae4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183191938 + 0xd98121a8));
  uVar5 = _DAT_183191e10 * 0x4405e6d0754f4991;
  _DAT_183192038 = _DAT_183191b18 ^ uVar5 ^ 0x61dcbd71;
  _DAT_183191a50 = (_DAT_183191a50 ^ uVar5) + 0x61dcbd71 ^ 0x95944bec58b711a7;
  _DAT_183191d20 = (_DAT_183191d20 * -0x4e59d96dfc23112d ^ _DAT_183191a50) + uVar5;
  _DAT_183191c30 = _DAT_183191d20 ^ _DAT_183191a50;
  _DAT_183191d88 = 0x61dcbd71;
  _DAT_183191f60 = func_0x0001878fb610(_DAT_183191a88 + 0xfffeff9bdaffa1ffU ^ 0x81);
  _DAT_183191c58 =
       (_DAT_183191c58 ^ _DAT_183191f60 & 0xffffffffffffc000) + 0x20402000 ^ 0x522956f436ec0fb2;
  _DAT_183191d30 =
       (_DAT_183191d30 * -0x55a0722f741a734d ^ _DAT_183191c58) +
       (_DAT_183191f60 & 0xffffffffffffc000);
  _DAT_183191ec8 = _DAT_183191d30 ^ _DAT_183191c58;
  _DAT_1831919e0 = 0x20402000;
  uVar5 = (_DAT_183191938 ^ _DAT_180cbd880) + _DAT_183191b68 + 0x5b9dfcda;
  uVar7 = (_DAT_183191b68 ^ _UNK_180cbd888) + _DAT_183191938 + 0x20402000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183191938 ^ _DAT_180cbd880;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183191b68 ^ _UNK_180cbd888;
  _DAT_183191e70 =
       func_0x0001878fb610((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183191938 + 0x20402000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183191b68 + 0x5b9dfcda));
  uVar5 = (_DAT_183191e70 ^ 0xf0000000) & 0xfffffffff0000000;
  _DAT_1831920f0 = _DAT_1831920f0 ^ uVar5 ^ 0x90ab3552dabff9fb;
  _DAT_183191b40 = (_DAT_183191b40 * -0x196f087d925e8e47 ^ _DAT_1831920f0) + uVar5;
  _DAT_183191ea8 = _DAT_183191b40 ^ _DAT_1831920f0;
  _DAT_183191930 = 0;
  _DAT_183191e70 = func_0x0001878fb610(_DAT_183191e80 + 0x2c00841b0021ff ^ 0x1f);
  uVar5 = _DAT_183191e70 << 0x22 | _DAT_183191e70 >> 0x1e;
  _DAT_183191a80 = _DAT_183191920 ^ uVar5 ^ 0xff00;
  _DAT_183191d80 = (_DAT_183191d80 ^ uVar5) + 0xff00 ^ 0x5d7f1fbda4d47245;
  _DAT_183191d98 = (_DAT_183191d98 * 0x562c48e1d376cba1 ^ _DAT_183191d80) + uVar5;
  _DAT_183191918 = _DAT_183191d98 ^ _DAT_183191d80;
  _DAT_183191ff0 = 0xff00;
  uVar5 = (~_DAT_183192020 + 0xdd235b0a) *
          ((_DAT_183191e80 ^ 0x5901782c) + (ulonglong)((uint)_DAT_183191e80 & 0x5901782c) * 2);
  uVar5 = (uVar5 | _DAT_183191e10) + (uVar5 & _DAT_183191e10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831920a8 = func_0x0001878fb610((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  auVar6 = _DAT_1800170c0;
  _DAT_183191af8 = _DAT_183191af8 ^ _DAT_1831920a8 ^ 0x9ad2c8c736f73f37;
  _DAT_183191e60 = (_DAT_183191e60 * -0x64fa8058818e9cbd ^ _DAT_183191af8) + _DAT_1831920a8;
  _DAT_1831919b0 = _DAT_183191e60 ^ _DAT_183191af8;
  uVar7 = (ulonglong)(uint)(param_1 << 8);
  auVar3._8_8_ = _UNK_180131998;
  auVar3._0_8_ = uVar7 ^ 0x84222325;
  _DAT_183191b68 = 0;
  auVar4 = pshufb(auVar3 ^ _DAT_180cbd890,_DAT_1800170c0);
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar5 = uVar2 + _DAT_183191920;
  if (auVar4._4_4_ < 0) {
    uVar5 = _DAT_183191b38 ^ uVar2;
  }
  _DAT_183191e80 = func_0x0001878fb610(SUB161(auVar3 ^ _DAT_180cbd890,5) ^ uVar5);
  uVar2 = uVar7 * 0xff00 ^ _DAT_183191e80;
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R12) + (uVar5 >> 2 & unaff_R12);
  uVar2 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2;
  uVar7 = uVar7 & 0xffff;
  _DAT_183191e18 = (_DAT_183191e18 ^ uVar2) + uVar7 ^ 0x2a3770abd0c9a4a2;
  _DAT_183191d58 = (_DAT_183191d58 * -0x406759597bfb2673 ^ _DAT_183191e18) + uVar2;
  _DAT_183192090 = _DAT_183191d58 ^ _DAT_183191e18;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = in_stack_00000040 ^ 0x84222325;
  auVar4._8_8_ = uVar7;
  auVar6 = pshufb(auVar4 ^ _DAT_180cbd8a0,auVar6);
  uVar2 = auVar6._8_8_ + auVar6._0_8_;
  uVar5 = uVar2 + _DAT_183191ef0;
  if (auVar6._4_4_ < 0) {
    uVar5 = _DAT_1831919d8 ^ uVar2;
  }
  _DAT_183191a58 = uVar7;
  _DAT_183191c48 = func_0x0001878fb610(SUB161(auVar4 ^ _DAT_180cbd8a0,5) ^ uVar5);
  uVar5 = _DAT_183191c48 >> 1 | _DAT_183191c48;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R12) + (uVar5 >> 2 & unaff_R12);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183191c48;
  _DAT_183191930 = in_stack_00000040 | uVar7;
  _DAT_183191e98 = (_DAT_183191e98 ^ uVar5) + _DAT_183191930 ^ 0x3ded2aeac6c4477;
  _DAT_183191b60 = (_DAT_183191b60 * -0x4d46101aee1e0c17 ^ _DAT_183191e98) + uVar5;
  _DAT_183191a68 = _DAT_183191b60 ^ _DAT_183191e98;
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(iVar1 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 78f4756 (image 1878f4756) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1878f781c(void)

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



// ===== continuation @ rva 78f46fa (image 1878f46fa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f46fa(void)

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



// ===== continuation @ rva 78f44d5 (image 1878f44d5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f44d5(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb4a,0x2e);
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



// ===== continuation @ rva 78f73c0 (image 1878f73c0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f73c0(void)

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



// ===== continuation @ rva 78f722d (image 1878f722d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878f722d(void)

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



// ===== continuation @ rva 78f7897 (image 1878f7897) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f7897(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined4 uStack00000000000000a4;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined2 uStack00000000000000c0;
  
  uStack00000000000000a4 = 0x6a153a5e;
  rdtsc();
  uStack00000000000000b0 = 0x74007800690073;
  rdtsc();
  uStack00000000000000b8 = 0x6c002f006f0077;
  rdtsc();
  uStack00000000000000c0 = 0x5a;
  in_stack_00000050 =
       (**(code **)(*in_stack_00000030 + 0x518))(in_stack_00000030,&stack0x000000b0,9);
  FUN_190ddfc90(in_stack_00000030,&stack0x00000038,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xdad,
                0x43);
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



// ===== continuation @ rva 78f5208 (image 1878f5208) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f5208(void)

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



// ===== continuation @ rva 78f4eb8 (image 1878f4eb8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f4eb8(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0x70))(in_stack_00000030,in_stack_00000038,&UNK_182f702a8);
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



// ===== continuation @ rva 78f3d2a (image 1878f3d2a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878f3d2a(void)

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



// ===== continuation @ rva 78fb742 (image 1878fb742) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fb742(void)

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



// ===== continuation @ rva 78fb6ee (image 1878fb6ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fb6ee(void)

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



// ===== continuation @ rva 78fc5c4 (image 1878fc5c4) =====

void FUN_1878fc5c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 78fc137 (image 1878fc137) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fc137(void)

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



// ===== continuation @ rva 78fb8b6 (image 1878fb8b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fb8b6(void)

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



// ===== continuation @ rva 78fb862 (image 1878fb862) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fb862(void)

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



// ===== continuation @ rva 78fc5b5 (image 1878fc5b5) =====

void FUN_1878fc5b5(void)

{
  return;
}



// ===== continuation @ rva 78fb831 (image 1878fb831) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fb831(void)

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



// ===== continuation @ rva 78fb89b (image 1878fb89b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fb89b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180cbdcb8)();
  return;
}



// ===== continuation @ rva 78fbb66 (image 1878fbb66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fbb66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180cbde28)();
  return;
}



// ===== continuation @ rva 78fc42a (image 1878fc42a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fc42a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180cbdb28)();
  return;
}



// ===== continuation @ rva 78fc5a5 (image 1878fc5a5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fc5a5(void)

{
  (*_DAT_180cbdb18)();
  return;
}



// ===== continuation @ rva 78fe6d6 (image 1878fe6d6) =====

void FUN_1878fe6d6(void)

{
  return;
}



// ===== continuation @ rva 78fc73c (image 1878fc73c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fc73c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180cbee08)();
  return;
}



// ===== continuation @ rva 78ff27a (image 1878ff27a) =====

void FUN_1878ff27a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 78fe9e0 (image 1878fe9e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fe9e0(void)

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



// ===== continuation @ rva 78fea17 (image 1878fea17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fea17(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180cbe3f8)();
  return;
}



// ===== continuation @ rva 78fe8ec (image 1878fe8ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fe8ec(void)

{
  FUN_190dd72e0();
  (*_DAT_180cbe348)();
  return;
}



// ===== continuation @ rva 78fe5de (image 1878fe5de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fe5de(void)

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



// ===== continuation @ rva 78ff214 (image 1878ff214) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878ff214(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180cbed98)();
  return;
}



// ===== continuation @ rva 78fd513 (image 1878fd513) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fd513(void)

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



// ===== continuation @ rva 78fd53a (image 1878fd53a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fd53a(void)

{
  (*_DAT_180cbeac8)();
  return;
}



// ===== continuation @ rva 78fe0c0 (image 1878fe0c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fe0c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180cbe398)();
  return;
}



// ===== continuation @ rva 78fddc1 (image 1878fddc1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878fddc1(void)

{
  FUN_190ddfc90();
  (*_DAT_180cbe128)();
  return;
}



// ===== continuation @ rva 78fe6aa (image 1878fe6aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878fe6aa(void)

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



