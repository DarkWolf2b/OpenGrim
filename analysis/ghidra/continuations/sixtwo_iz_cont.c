// ===== continuation @ rva 8e8fcfb (image 188e8fcfb) =====

void FUN_188e8fcfb(void)

{
  return;
}



// ===== continuation @ rva 8e721ab (image 188e721ab) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188e72201 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188e721ab(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8e8eec2 (image 188e8eec2) =====

void thunk_FUN_188e72333(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 8e74144 (image 188e74144) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188e741d3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188e74144(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  in_stack_00000060 = (**(code **)(*unaff_RSI + 0xd8))();
  uVar1 = in_stack_00000058;
  in_stack_00000068 = in_stack_00000058;
  in_stack_00000058 = in_stack_00000060;
  FUN_190ddfc90(uVar1,&stack0x00000030,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xc5a,0x38);
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8e7422a (image 188e7422a) =====

void thunk_FUN_188e72333(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 8e78d2d (image 188e78d2d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188e78d64 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188e78d2d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8e79bbf (image 188e79bbf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188e79bd6 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188e79bbf(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8e79fb4 (image 188e79fb4) =====

void thunk_FUN_188e72333(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 8e740a4 (image 188e740a4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e740a4(void)

{
  longlong *unaff_RSI;
  longlong unaff_R15;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000c6;
  
  uStack00000000000000c6 = in_stack_00000070;
  (**(code **)(*unaff_RSI + 0x680))();
  switch(unaff_R15 == 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e7426c (image 188e7426c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188e742af */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188e7426c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8d814eb (image 188d814eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d814eb(void)

{
  FUN_190dd72e0();
  (*_DAT_181187c88)();
  return;
}



// ===== continuation @ rva 8d81478 (image 188d81478) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81478(void)

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



// ===== continuation @ rva 8d815bc (image 188d815bc) =====

void FUN_188d815bc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d814d6 (image 188d814d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d814d6(void)

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



// ===== continuation @ rva 8d815b2 (image 188d815b2) =====

void FUN_188d815b2(void)

{
  return;
}



// ===== continuation @ rva 8d8158b (image 188d8158b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8158b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187c38)();
  return;
}



// ===== continuation @ rva 8d81567 (image 188d81567) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81567(void)

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



// ===== continuation @ rva 8d814b1 (image 188d814b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d814b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187c28)();
  return;
}



// ===== continuation @ rva 8d81513 (image 188d81513) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81513(void)

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



// ===== continuation @ rva 8d816db (image 188d816db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d816db(void)

{
  FUN_190dd72e0();
  (*_DAT_181187d48)();
  return;
}



// ===== continuation @ rva 8d81668 (image 188d81668) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81668(void)

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



// ===== continuation @ rva 8d817a2 (image 188d817a2) =====

void FUN_188d817a2(void)

{
  return;
}



// ===== continuation @ rva 8d81724 (image 188d81724) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81724(void)

{
  FUN_190dd9df0();
  (*_DAT_181187d68)();
  return;
}



// ===== continuation @ rva 8d817ac (image 188d817ac) =====

void FUN_188d817ac(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d816c6 (image 188d816c6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d816c6(void)

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



// ===== continuation @ rva 8d8177b (image 188d8177b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8177b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187d38)();
  return;
}



// ===== continuation @ rva 8d816a1 (image 188d816a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d816a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187d08)();
  return;
}



// ===== continuation @ rva 8d81703 (image 188d81703) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81703(void)

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



// ===== continuation @ rva 8d818cb (image 188d818cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d818cb(void)

{
  FUN_190dd72e0();
  (*_DAT_181187de8)();
  return;
}



// ===== continuation @ rva 8d81858 (image 188d81858) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81858(void)

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



// ===== continuation @ rva 8d8199c (image 188d8199c) =====

void FUN_188d8199c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d81947 (image 188d81947) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81947(void)

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



// ===== continuation @ rva 8d81992 (image 188d81992) =====

void FUN_188d81992(void)

{
  return;
}



// ===== continuation @ rva 8d81914 (image 188d81914) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81914(void)

{
  FUN_190dd9df0();
  (*_DAT_181187dc8)();
  return;
}



// ===== continuation @ rva 8d818f3 (image 188d818f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d818f3(void)

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



// ===== continuation @ rva 8d81891 (image 188d81891) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81891(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187e28)();
  return;
}



// ===== continuation @ rva 8d8196b (image 188d8196b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8196b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187e18)();
  return;
}



// ===== continuation @ rva 8d818b6 (image 188d818b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d818b6(void)

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



// ===== continuation @ rva 8d81abb (image 188d81abb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81abb(void)

{
  FUN_190dd72e0();
  (*_DAT_181187ea8)();
  return;
}



// ===== continuation @ rva 8d81a48 (image 188d81a48) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81a48(void)

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



// ===== continuation @ rva 8d81b8c (image 188d81b8c) =====

void FUN_188d81b8c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d81b37 (image 188d81b37) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81b37(void)

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



// ===== continuation @ rva 8d81ae3 (image 188d81ae3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81ae3(void)

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



// ===== continuation @ rva 8d81b82 (image 188d81b82) =====

void FUN_188d81b82(void)

{
  return;
}



// ===== continuation @ rva 8d81b04 (image 188d81b04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81b04(void)

{
  FUN_190dd9df0();
  (*_DAT_181187e98)();
  return;
}



// ===== continuation @ rva 8d81b5b (image 188d81b5b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81b5b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187ec8)();
  return;
}



// ===== continuation @ rva 8d81a81 (image 188d81a81) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81a81(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187f08)();
  return;
}



// ===== continuation @ rva 8d8fa94 (image 188d8fa94) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8fa94(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x100))();
  (*_DAT_18118ce88)();
  return;
}



// ===== continuation @ rva 8d8fab1 (image 188d8fab1) =====

void FUN_188d8fab1(void)

{
  return;
}



// ===== continuation @ rva 8d8fab9 (image 188d8fab9) =====

void FUN_188d8fab9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e3190b (image 188e3190b) =====

void FUN_188e3190b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(longlong **)(unaff_RBP + 0x30) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x000188e31944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811bb100 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 8e318b6 (image 188e318b6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188e318ed */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188e318b6(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8e3e8f8 (image 188e3e8f8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e3e8f8(void)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  uint uVar6;
  undefined4 unaff_EDI;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar14;
  undefined1 unaff_XMM11 [16];
  
  *(undefined4 *)((longlong)unaff_RBP + 0x6c) = unaff_EDI;
  uVar13 = _DAT_1831f8c00;
  uVar12 = _DAT_1831f88e8;
  uVar5 = _DAT_1831f8830;
  uVar6 = unaff_ESI << 6;
  *(bool *)(unaff_RBP + 0x11) = unaff_RBP[-1] == 0;
  uVar5 = (~uVar13 + 0x93fdf3f7) *
          ((uVar5 ^ 0xde10d556) + (ulonglong)((uint)uVar5 & 0xde10d556) * 2);
  uVar5 = (uVar5 | uVar12) + (uVar5 & uVar12);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8a30 = func_0x000188e58c70((uVar5 | 0x4ded26a0) + (ulonglong)((uint)uVar5 & 0x4ded26a0))
  ;
  uVar5 = (_DAT_1831f8a30 & 0xffffffffff000000) << 0x25 | _DAT_1831f8a30 >> 0x1b;
  _DAT_1831f87f0 = (_DAT_1831f8aa8 ^ uVar5) + 0xdbfff7f7 ^ 0xec339674168066a1;
  _DAT_1831f8a80 = (_DAT_1831f8a80 * 0x36cddd269c001e6f ^ _DAT_1831f87f0) + uVar5;
  _DAT_1831f87f0 = _DAT_1831f8a80 ^ _DAT_1831f87f0;
  _DAT_1831f88e8 = _DAT_1831f89f0 ^ 0xdbfff7f7;
  _DAT_1831f8aa8 = 0xdbfff7f7;
  _DAT_1831f87e0 = func_0x000188e58c70(_DAT_1831f8ad8 ^ 0x13000df2005fb3);
  uVar5 = _DAT_1831f87e0 * 0x4a3fc16320d55965 ^ 0x3c8f8df8;
  _DAT_1831f8868 = (_DAT_1831f8868 ^ uVar5) + 0x764230d7 ^ 0xfaf39bc295c980a8;
  _DAT_1831f8828 = (_DAT_1831f8828 * -0x6aa723498a0f8319 ^ _DAT_1831f8868) + uVar5;
  _DAT_1831f8c10 = _DAT_1831f8828 ^ _DAT_1831f8868;
  _DAT_1831f8b30 = 0x764230d7;
  uVar5 = (_DAT_1831f8878 ^ _DAT_1811bbc40) + _DAT_1831f8cb0 + 0x84222325;
  uVar12 = (_DAT_1831f8cb0 ^ _UNK_1811bbc48) + _DAT_1831f8878 + 0xbec263eb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8878 ^ _DAT_1811bbc40;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831f8cb0 ^ _UNK_1811bbc48;
  _DAT_1831f8b80 =
       func_0x000188e58c70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831f8878 + 0xbec263eb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8cb0 + 0x84222325));
  _DAT_1831f87c8 = (_DAT_1831f87c8 ^ _DAT_1831f8b80 ^ 0xbec263eb) - 0xbec263eb ^ 0x6ea88f9cee780be2;
  _DAT_1831f8a20 =
       (_DAT_1831f8a20 * -0x13bd2ac189d68523 ^ _DAT_1831f87c8) + (_DAT_1831f8b80 ^ 0xbec263eb);
  _DAT_1831f8a68 = _DAT_1831f8a20 ^ _DAT_1831f87c8;
  _DAT_1831f8bc8 = 0x413d9c15;
  uVar5 = (_DAT_1831f8af0 ^ _DAT_1811bbc50) + _DAT_1831f89a8 + 0x84222ce5;
  uVar12 = (_DAT_1831f89a8 ^ _UNK_1811bbc58) + _DAT_1831f8af0 + 0xbec263eb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8af0 ^ _DAT_1811bbc50;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831f89a8 ^ _UNK_1811bbc58;
  _DAT_1831f8b88 =
       func_0x000188e58c70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831f8af0 + 0xbec263eb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f89a8 + 0x84222ce5));
  _DAT_1831f8b08 = _DAT_1831f89a8 ^ 0xbec273ab;
  _DAT_1831f8880 = _DAT_1831f8880 + 0xbec273ab ^ 0x9ce432fae1260728;
  _DAT_1831f88f0 = _DAT_1831f8c40 * -0x5b2cca597b3728a3;
  _DAT_1831f8c40 = _DAT_1831f88f0 ^ _DAT_1831f8880;
  _DAT_1831f8770 = 0xbec273ab;
  _DAT_1831f8868 = func_0x000188e58c70(_DAT_1831f8860 + 0x3bffcb68ff42ff ^ 0x9b);
  uVar5 = (_DAT_1831f8868 & 0x3ffffffffffff) - (_DAT_1831f8868 >> 1 & 0x1555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1831f8868 & 0x3ffffffffffff;
  _DAT_1831f8a90 = _DAT_1831f8758 ^ uVar5 ^ 0x100000fc0;
  _DAT_1831f87d8 = (_DAT_1831f87d8 ^ uVar5) + 0x100000fc0 ^ 0x6c361d6b1e920fb7;
  _DAT_1831f8810 = (_DAT_1831f8810 * 0x7543781ad9410609 ^ _DAT_1831f87d8) + uVar5;
  _DAT_1831f88f8 = _DAT_1831f8810 ^ _DAT_1831f87d8;
  _DAT_1831f8a98 = 0xfc0;
  uVar5 = (_DAT_1831f8af0 ^ _DAT_1811bbc60) + _DAT_1831f8af0 + 0x84222ce5;
  uVar12 = (_DAT_1831f8af0 ^ _UNK_1811bbc68) + _DAT_1831f8af0 + 0x297f12c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8af0 ^ _DAT_1811bbc60;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831f8af0 ^ _UNK_1811bbc68;
  _DAT_1831f8ac0 =
       func_0x000188e58c70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831f8af0 + 0x297f12c0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8af0 + 0x84222ce5));
  uVar5 = _DAT_1831f8ac0 ^ 0x297f12c0;
  _DAT_1831f8cd8 = _DAT_1831f8ba0 ^ uVar5 ^ 0x297f2280;
  _DAT_1831f8930 = (_DAT_1831f8930 ^ uVar5) + 0x297f2280 ^ 0x5462337c968f9e09;
  _DAT_1831f89a0 = (_DAT_1831f89a0 * -0x1a7b8a364a896ee5 ^ _DAT_1831f8930) + uVar5;
  _DAT_1831f8ca8 = _DAT_1831f89a0 ^ _DAT_1831f8930;
  _DAT_1831f8850 = _DAT_1831f8950 ^ 0x297f2280;
  _DAT_1831f8c60 = 0x297f2280;
  uVar5 = (~_DAT_1831f87b8 + 0x4a338d31) *
          ((_DAT_1831f8b88 ^ 0x31eea1b5) + (ulonglong)((uint)_DAT_1831f8b88 & 0x31eea1b5) * 2);
  uVar5 = (uVar5 | _DAT_1831f8840) + (uVar5 & _DAT_1831f8840);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f89a0 = func_0x000188e58c70((uVar5 | 0x7bdd2c85) + (ulonglong)((uint)uVar5 & 0x7bdd2c85))
  ;
  _DAT_1831f8c98 = _DAT_1831f8ba0 ^ _DAT_1831f89a0 ^ 0x100000fc0;
  _DAT_1831f88e0 = (_DAT_1831f88e0 ^ _DAT_1831f89a0) + 0x100000fc0 ^ 0x2b0a19b8eed28a97;
  _DAT_1831f8970 = (_DAT_1831f8970 * 0x3003d2a18759a16f ^ _DAT_1831f88e0) + _DAT_1831f89a0;
  _DAT_1831f8898 = _DAT_1831f8970 ^ _DAT_1831f88e0;
  _DAT_1831f8810 = 0xfc0;
  _DAT_1831f8a08 = func_0x000188e58c70(_DAT_1831f8a58 ^ 0xa4002703006a99);
  _DAT_1831f8be8 = (_DAT_1831f8be8 ^ _DAT_1831f8a08) + 0xadbdc720 ^ 0xb3b4a465f3d6976a;
  _DAT_1831f8c20 = (_DAT_1831f8c20 * -0x1243b2b8f3041fd3 ^ _DAT_1831f8be8) + _DAT_1831f8a08;
  _DAT_1831f8c18 = _DAT_1831f8c20 ^ _DAT_1831f8be8;
  _DAT_1831f8b38 = 0xadbdc720;
  uVar5 = (_DAT_1831f8b40 ^ _DAT_1811bbc70) + _DAT_1831f8a20 + 0x5fddd4d2;
  uVar12 = (_DAT_1831f8a20 ^ _UNK_1811bbc78) + _DAT_1831f8b40 + 0x764230d7;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8b40 ^ _DAT_1811bbc70;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831f8a20 ^ _UNK_1811bbc78;
  _DAT_1831f8b30 =
       func_0x000188e58c70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831f8b40 + 0x764230d7) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8a20 + 0x5fddd4d2));
  uVar5 = _DAT_1831f8b30 ^ 0x65a0de428a259071;
  uVar5 = (uVar5 & 0xffffffff) * (_DAT_1811bbc80 & 0xffffffff) +
          ((uVar5 & 0xffffffff) * (ulonglong)_DAT_1811bbc90 +
           (uVar5 >> 0x20) * (_DAT_1811bbc80 & 0xffffffff) << 0x20) & 0x7fffffffffffffff ^
          0xdbfff7f7;
  _DAT_1831f8cc8 = (_DAT_1831f8cc8 ^ uVar5) + 0x524230d7 ^ 0xc68447b6300c784f;
  _DAT_1831f8b80 = (_DAT_1831f8b80 * -0x10af41de080deb75 ^ _DAT_1831f8cc8) + uVar5;
  _DAT_1831f88f8 = _DAT_1831f8b80 ^ _DAT_1831f8cc8;
  _DAT_1831f8908 = 0x524230d7;
  uVar5 = (~_DAT_1831f8b20 + 0xa48461af) *
          ((_DAT_1831f8a78 ^ 0x299fe405) + (ulonglong)((uint)_DAT_1831f8a78 & 0x299fe405) * 2);
  uVar5 = (uVar5 | _DAT_1831f8820) + (uVar5 & _DAT_1831f8820);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f87b0 = func_0x000188e58c70((uVar5 | 0x8d1b85ab) + (ulonglong)((uint)uVar5 & 0x8d1b85ab))
  ;
  uVar5 = (_DAT_1831f87b0 << 5 | _DAT_1831f87b0 >> 0x3b) * -0xb94067e3cf609f5;
  _DAT_1831f8838 = _DAT_1831f8770 ^ uVar5 ^ 0x1524228ce;
  _DAT_1831f87d8 = (_DAT_1831f87d8 ^ uVar5) + 0x1524228ce ^ 0xd6b86e3c9c89d3d3;
  _DAT_1831f8c60 = (_DAT_1831f8c60 * 0x19c1804a86863ff9 ^ _DAT_1831f87d8) + uVar5;
  _DAT_1831f8a98 = _DAT_1831f8c60 ^ _DAT_1831f87d8;
  _DAT_1831f8be0 = 0x524228ce;
  _DAT_1831f8c30 = func_0x000188e58c70(_DAT_1831f88a0 + 0x210083e5001dff ^ 0xe3);
  _DAT_1831f8a08 = (_DAT_1831f8c30 ^ 0x26e733d08b905c4) & 0x3ffffffffffffff;
  _DAT_1831f8978 = _DAT_1831f8978 ^ _DAT_1831f8a08 ^ 0x35314fe2f5478410;
  _DAT_1831f8a60 = (_DAT_1831f8a60 * 0xbcb26027d9a79ff ^ _DAT_1831f8978) + _DAT_1831f8a08;
  _DAT_1831f8ba0 = _DAT_1831f8a60 ^ _DAT_1831f8978;
  _DAT_1831f8718 = 0;
  _DAT_1831f8c28 = func_0x000188e58c70(_DAT_1831f8a50 + 0x2bff8462ffe1ff ^ 0x58);
  uVar5 = (_DAT_1831f8c28 & 0xfffffffffc000000) - (_DAT_1831f8c28 >> 1 & 0x5555555554000000);
  uVar5 = (uVar5 & 0x3333333330000000) + (uVar5 >> 2 & 0x3333333333000000);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f000000) * 0x101010101010101 >> 0x38 |
          _DAT_1831f8c28 & 0xfffffffffc000000;
  _DAT_1831f8af8 = _DAT_1831f8850 ^ uVar5 ^ 0xfc0;
  _DAT_1831f8b58 = (_DAT_1831f8b58 ^ uVar5) + 0xfc0 ^ 0xee6022857b478cc7;
  _DAT_1831f8ae0 = (_DAT_1831f8ae0 * -0x2339f9526c215953 ^ _DAT_1831f8b58) + uVar5;
  _DAT_1831f8c38 = _DAT_1831f8ae0 ^ _DAT_1831f8b58;
  _DAT_1831f8b20 = 0xfc0;
  uVar5 = (_DAT_1831f8b68 ^ _DAT_1811bbca0) + _DAT_1831f88b8 + 0x5fddd4d2;
  uVar12 = (_DAT_1831f88b8 ^ _UNK_1811bbca8) + _DAT_1831f8b68 + 0x24000808;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8b68 ^ _DAT_1811bbca0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831f88b8 ^ _UNK_1811bbca8;
  _DAT_1831f8710 =
       func_0x000188e58c70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831f8b68 + 0x24000808) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f88b8 + 0x5fddd4d2));
  _DAT_1831f8958 = _DAT_1831f8958 ^ _DAT_1831f8940 ^ 0x4d2b87f4a5944a18;
  _DAT_1831f8c60 = (_DAT_1831f8c60 * -0x1bbfc9962f8a123b ^ _DAT_1831f8958) + _DAT_1831f8940;
  _DAT_1831f8c68 = _DAT_1831f8c60 ^ _DAT_1831f8958;
  _DAT_1831f8708 = 0;
  uVar5 = ((_DAT_1831f8758 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1831f8758 & 0x84222ce5) * 2) *
          -_DAT_1831f8908;
  uVar5 = (uVar5 | _DAT_1831f89c8) + (uVar5 & _DAT_1831f89c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f89e0 = func_0x000188e58c70((uVar5 | 0x84222ce5) + (ulonglong)((uint)uVar5 & 0x84222ce5))
  ;
  uVar5 = (ulonglong)((uint)_DAT_1831f89e0 & 0xfc0);
  _DAT_1831f87c0 = _DAT_1831f8b50 ^ uVar5 ^ 0xfc0;
  _DAT_1831f8770 = (_DAT_1831f8770 ^ uVar5) + 0xfc0 ^ 0xeb2cd8d54eb85694;
  _DAT_1831f8b80 = (_DAT_1831f8b80 * -0x3efa72174f523abf ^ _DAT_1831f8770) + uVar5;
  _DAT_1831f8738 = _DAT_1831f8b80 ^ _DAT_1831f8770;
  _DAT_1831f8b50 = 0xfc0;
  auVar9._8_8_ = _UNK_180144f68;
  auVar9._0_8_ = (ulonglong)uVar6 ^ 0x84222325;
  auVar8 = pshufb(auVar9 ^ _DAT_1811bbcb0,unaff_XMM11);
  uVar12 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar12 + _DAT_1831f88c8;
  if (auVar8._4_4_ < 0) {
    uVar5 = _DAT_1831f8828 ^ uVar12;
  }
  _DAT_1831f8b98 = func_0x000188e58c70(SUB161(auVar9 ^ _DAT_1811bbcb0,5) ^ uVar5);
  uVar5 = ((ulonglong)uVar6 * 0xfc0 ^ _DAT_1831f8b98) * -0x2f0a2ba5019998a1;
  uVar12 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar5;
  uVar12 = (ulonglong)(uVar6 & 0xfc0);
  _DAT_1831f8968 = (_DAT_1831f8968 ^ uVar5) + uVar12 ^ 0xed92e7184f7c26df;
  _DAT_1831f8cc0 = (_DAT_1831f8cc0 * 0x483deee36b47a663 ^ _DAT_1831f8968) + uVar5;
  _DAT_1831f8b10 = _DAT_1831f8cc0 ^ _DAT_1831f8968;
  iVar1 = *(int *)(unaff_RBP + 0xe);
  uVar5 = (~_DAT_1831f8a90 + 0x2e8c08f4) *
          ((_DAT_1831f8ac0 ^ 0x3ad405c) + (ulonglong)((uint)_DAT_1831f8ac0 & 0x3ad405c) * 2);
  uVar5 = (uVar5 | _DAT_1831f8b10) + (uVar5 & _DAT_1831f8b10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8cd0 = uVar12;
  _DAT_1831f8b08 = func_0x000188e58c70((uVar5 | 0x2d2148af) + (ulonglong)((uint)uVar5 & 0x2d2148af))
  ;
  _DAT_1831f8730 =
       (_DAT_1831f8730 ^ _DAT_1831f8b08 & 0x3fffffffffffff) + 0xa9036b8a ^ 0x22b35fa0f333ee75;
  _DAT_1831f8c48 =
       (_DAT_1831f8c48 * -0x187d9b9b8b625c61 ^ _DAT_1831f8730) + (_DAT_1831f8b08 & 0x3fffffffffffff)
  ;
  _DAT_1831f8c08 = _DAT_1831f8c48 ^ _DAT_1831f8730;
  _DAT_1831f8908 = 0xa9036b8a;
  _DAT_1831f8cc0 = func_0x000188e58c70(_DAT_1831f88c8 ^ 0x1c0063ac004c74);
  _DAT_1831f8c00 = (_DAT_1831f8c00 ^ _DAT_1831f8cc0 ^ 0xf8df4751) - 0xf8df4751 ^ 0x42de7b2a6403247a;
  _DAT_1831f8aa0 =
       (_DAT_1831f8aa0 * -0x11683c4a44be6021 ^ _DAT_1831f8c00) + (_DAT_1831f8cc0 ^ 0xf8df4751);
  _DAT_1831f8bc0 = _DAT_1831f8aa0 ^ _DAT_1831f8c00;
  _DAT_1831f8900 = 0x720b8af;
  uVar5 = (~_DAT_1831f8718 + 0x720b8b0) *
          ((_DAT_1831f8a18 ^ 0x7cc21474) + (ulonglong)((uint)_DAT_1831f8a18 & 0x7cc21474) * 2);
  uVar5 = (uVar5 | _DAT_1831f8c10) + (uVar5 & _DAT_1831f8c10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8b30 = func_0x000188e58c70((uVar5 | 0x7be2acdb) + (ulonglong)((uint)uVar5 & 0x7be2acdb))
  ;
  uVar5 = _DAT_1831f8c20 * -0x2f6e24a70824cd25;
  _DAT_1831f8830 = _DAT_1831f8988 ^ uVar5 ^ 0x10000f000;
  _DAT_1831f8780 = (_DAT_1831f8780 ^ uVar5) + 0x10000f000 ^ 0x34bd17ad2826e7ef;
  _DAT_1831f8b80 = (_DAT_1831f8b80 * -0x6b96ca67a84f2b6f ^ _DAT_1831f8780) + uVar5;
  _DAT_1831f8848 = _DAT_1831f8b80 ^ _DAT_1831f8780;
  _DAT_1831f8a48 = 0xf000;
  uVar5 = (~_DAT_1831f89b8 + 0x61cf9c3b) *
          ((_DAT_1831f8818 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831f8818 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1831f89b0) + (uVar5 & _DAT_1831f89b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8c78 = func_0x000188e58c70((uVar5 | 0xe5edbf1f) + (ulonglong)((uint)uVar5 & 0xe5edbf1f))
  ;
  _DAT_1831f8b58 = _DAT_1831f8b58 - 0x61cf9c3a ^ 0xfc364f086a845bd5;
  _DAT_1831f88d8 = _DAT_1831f8cc0 * -0x24e181bdf31ece7b;
  _DAT_1831f8cc0 = _DAT_1831f88d8 ^ _DAT_1831f8b58;
  _DAT_1831f89c8 = 0x9e3063c6;
  uVar5 = (~_DAT_1831f8970 + 0x61cf9c3b) *
          ((_DAT_1831f8ad0 ^ 0x8422d325) + (ulonglong)((uint)_DAT_1831f8ad0 & 0x8422d325) * 2);
  uVar5 = (uVar5 | _DAT_1831f8ae8) + (uVar5 & _DAT_1831f8ae8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8710 = func_0x000188e58c70((uVar5 | 0xe5ed4f1f) + (ulonglong)((uint)uVar5 & 0xe5ed4f1f))
  ;
  uVar5 = _DAT_1831f8710 & 0x3ffffffffff;
  _DAT_1831f8af0 = _DAT_1831f8c48 ^ uVar5 ^ 0x61d08c3a;
  _DAT_1831f8730 = (_DAT_1831f8730 ^ uVar5) + 0x61d08c3a ^ 0x2f2c6550f2874dfd;
  _DAT_1831f8858 = (_DAT_1831f8858 * 0x68f5af24d92e10f5 ^ _DAT_1831f8730) + uVar5;
  _DAT_1831f8890 = _DAT_1831f8858 ^ _DAT_1831f8730;
  _DAT_1831f8868 = 0x61d08c3a;
  uVar5 = (~_DAT_1831f8928 + 0x8af58551) *
          ((_DAT_1831f87d8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831f87d8 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1831f87e0) + (uVar5 & _DAT_1831f87e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8980 = func_0x000188e58c70((uVar5 | 0xed7a675) + (ulonglong)((uint)uVar5 & 0xed7a675));
  _DAT_1831f8b48 =
       (_DAT_1831f8b48 ^ _DAT_1831f8980 & 0x7fffffffffffffff) - 0x8af58550 ^ 0x613e780223b66456;
  _DAT_1831f8ba8 =
       (_DAT_1831f8ba8 * 0x97ac98365c9244f ^ _DAT_1831f8b48) + (_DAT_1831f8980 & 0x7fffffffffffffff)
  ;
  _DAT_1831f8ba0 = _DAT_1831f8ba8 ^ _DAT_1831f8b48;
  _DAT_1831f87c0 = 0x750a7ab0;
  uVar5 = (_DAT_1831f8b80 ^ _DAT_1811bbcc0) + _DAT_1831f8b78 + 0x8422d325;
  uVar13 = (_DAT_1831f8b78 ^ _UNK_1811bbcc8) + _DAT_1831f8b80 + 0x8af58550;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8b80 ^ _DAT_1811bbcc0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831f8b78 ^ _UNK_1811bbcc8;
  _DAT_1831f8a78 =
       func_0x000188e58c70((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831f8b80 + 0x8af58550) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8b78 + 0x8422d325));
  uVar5 = _DAT_1831f8a78 * -0x34caf192c4e93e61;
  _DAT_1831f8838 = _DAT_1831f8b90 ^ uVar5 ^ 0x8af67550;
  _DAT_1831f8c08 = (_DAT_1831f8c08 ^ uVar5) + 0x8af67550 ^ 0x4d930c358b0fc085;
  _DAT_1831f8b18 = (_DAT_1831f8b18 * -0x3948af391f6abcb7 ^ _DAT_1831f8c08) + uVar5;
  _DAT_1831f89f0 = _DAT_1831f8b18 ^ _DAT_1831f8c08;
  _DAT_1831f8918 = 0x8af67550;
  _DAT_1831f8730 = func_0x000188e58c70(_DAT_1831f88d0 + 0x2bffa73d00b5ffU ^ 0xbc);
  uVar5 = (_DAT_1831f8730 ^ 0xfffe7ff0) >> 3 | _DAT_1831f8730 << 0x3d;
  _DAT_1831f8be0 = _DAT_1831f89f0 ^ uVar5 ^ 0x10000f000;
  _DAT_1831f8898 = (_DAT_1831f8898 ^ uVar5) + 0x10000f000 ^ 0x3e37a4788b00cf7e;
  _DAT_1831f8c10 = (_DAT_1831f8c10 * -0x7510a75452d4ff59 ^ _DAT_1831f8898) + uVar5;
  _DAT_1831f89c8 = _DAT_1831f8c10 ^ _DAT_1831f8898;
  _DAT_1831f8b50 = 0xf000;
  _DAT_1831f8ce0 = func_0x000188e58c70(_DAT_1831f8b20 + 0x94ff0dd1ff8dff ^ 0x3a);
  _DAT_1831f8a98 = _DAT_1831f8cd0 ^ _DAT_1831f8ce0 ^ 0x188b74987;
  _DAT_1831f8a90 =
       (ulonglong)(&UNK_188b74987 + (_DAT_1831f8a90 ^ _DAT_1831f8ce0)) ^ 0x5dd82ac6c3ebbfc8;
  _DAT_1831f8968 = (_DAT_1831f8968 * 0x30a4897aa872c429 ^ _DAT_1831f8a90) + _DAT_1831f8ce0;
  _DAT_1831f8cd0 = _DAT_1831f8968 ^ _DAT_1831f8a90;
  _DAT_1831f8998 = 0x88b74987;
  uVar5 = (~_DAT_1831f8ce0 + 0xa9036b8b) *
          ((_DAT_1831f8970 ^ 0x5b91fed8) + (ulonglong)((uint)_DAT_1831f8970 & 0x5b91fed8) * 2);
  uVar5 = (uVar5 | _DAT_1831f8a60) + (uVar5 & _DAT_1831f8a60);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8a38 = func_0x000188e58c70((uVar5 | 0xf2929552) + (ulonglong)((uint)uVar5 & 0xf2929552))
  ;
  _DAT_1831f8978 = (_DAT_1831f8978 ^ _DAT_1831f8a38) + 0x76b0b677 ^ 0xe32232baa4332ca5;
  _DAT_1831f88f0 = (_DAT_1831f88f0 * -0x3a9821531200de3d ^ _DAT_1831f8978) + _DAT_1831f8a38;
  _DAT_1831f8720 = _DAT_1831f88f0 ^ _DAT_1831f8978;
  _DAT_1831f8b60 = 0x76b0b677;
  _DAT_1831f8c00 = func_0x000188e58c70(_DAT_1831f8bc0 ^ 0xff9300ce2dff6dff);
  uVar5 = _DAT_1831f8c00 << 0x22 | (_DAT_1831f8c00 & 0x7fffffffffffffff) >> 0x1e;
  _DAT_1831f8b40 = (_DAT_1831f8b40 ^ uVar5) + 0x89034988 ^ 0xc2f84e10a6865e48;
  _DAT_1831f8790 = (_DAT_1831f8790 * 0x13ac9119c630e553 ^ _DAT_1831f8b40) + uVar5;
  _DAT_1831f8708 = _DAT_1831f8790 ^ _DAT_1831f8b40;
  _DAT_1831f8be8 = 0x89034988;
  uVar5 = (~_DAT_1831f8790 + 0x12069311) *
          ((_DAT_1831f8c08 ^ 0xf2929552) + (ulonglong)((uint)_DAT_1831f8c08 & 0xf2929552) * 2);
  uVar5 = (uVar5 | _DAT_1831f89c8) + (uVar5 & _DAT_1831f89c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8b98 = func_0x000188e58c70((uVar5 | 0xe0940642) + (ulonglong)((uint)uVar5 & 0xe0940642))
  ;
  uVar5 = (_DAT_1831f8b98 ^ 0x76b0b677) * -0x2cf768e01243e137;
  _DAT_1831f8a68 = _DAT_1831f8bd8 ^ uVar5 ^ 0x88b74987;
  _DAT_1831f8be8 = (_DAT_1831f8be8 ^ uVar5) + 0x88b74987 ^ 0x4682038aa6d5ce1a;
  _DAT_1831f87e0 = (_DAT_1831f87e0 * 0x782f816f0a87270b ^ _DAT_1831f8be8) + uVar5;
  _DAT_1831f8740 = _DAT_1831f87e0 ^ _DAT_1831f8be8;
  _DAT_1831f8bb8 = 0x88b74987;
  uVar5 = (~_DAT_1831f8898 + 0x88b74988) *
          ((_DAT_1831f8b78 ^ 0xc956aa2) + (ulonglong)((uint)_DAT_1831f8b78 & 0xc956aa2) * 2);
  uVar5 = (uVar5 | _DAT_1831f8888) + (uVar5 & _DAT_1831f8888);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8a08 = func_0x000188e58c70((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1831f8c20 = _DAT_1831f8a08 ^ 0x88b74987;
  _DAT_1831f8a18 = _DAT_1831f8a18 ^ _DAT_1831f8c20 ^ 0x96b6178975cbb3b4;
  _DAT_1831f8908 = (_DAT_1831f8908 * 0x9bf6a6a02f0b5db ^ _DAT_1831f8a18) + _DAT_1831f8c20;
  _DAT_1831f8758 = _DAT_1831f8908 ^ _DAT_1831f8a18;
  _DAT_1831f8bf0 = 0;
  _DAT_1831f88f8 = func_0x000188e58c70(_DAT_1831f8b60 ^ 0xb2ff7c1affddcf);
  uVar5 = _DAT_1831f88f8 ^ 0xf000;
  _DAT_1831f8ca8 = _DAT_1831f8b40 ^ uVar5 ^ 0xf000;
  _DAT_1831f87a8 = (_DAT_1831f87a8 ^ uVar5) + 0xf000 ^ 0x275137855fb53d4c;
  _DAT_1831f8c98 = (_DAT_1831f8c98 * 0x5df01946d69fe0fd ^ _DAT_1831f87a8) + uVar5;
  _DAT_1831f8ae8 = _DAT_1831f8c98 ^ _DAT_1831f87a8;
  _DAT_1831f8958 = 0xf000;
  _DAT_1831f8770 = func_0x000188e58c70(_DAT_1831f8be8 + 0xff5bdf002dff ^ 0xa9);
  _DAT_1831f8a30 = (_DAT_1831f8a30 ^ _DAT_1831f8770) + 0x204c2202 ^ 0x88f55f3a2fe3f5df;
  _DAT_1831f8c18 = (_DAT_1831f8c18 * -0x61fca984248ef1f5 ^ _DAT_1831f8a30) + _DAT_1831f8770;
  _DAT_1831f8ad8 = _DAT_1831f8c18 ^ _DAT_1831f8a30;
  _DAT_1831f8918 = 0x204c2202;
  _DAT_1831f8c00 = func_0x000188e58c70(_DAT_1831f87b8 + 0xabffdb5a004aff ^ 0xda);
  _DAT_1831f8728 = _DAT_1831f8728 ^ _DAT_1831f8c00 * 0x1b13230474852ea1 ^ 0x62db0daa732ff67e;
  _DAT_1831f89e8 =
       (_DAT_1831f89e8 * -0x5914200383e19bcb ^ _DAT_1831f8728) + _DAT_1831f8c00 * 0x1b13230474852ea1
  ;
  _DAT_1831f89c0 = _DAT_1831f89e8 ^ _DAT_1831f8728;
  _DAT_1831f8830 = 0;
  uVar5 = (_DAT_1831f8740 ^ 0x8422d325) + _DAT_1831f89d0 + 0x8422d325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8740 ^ 0x8422d325;
  uVar13 = ((_DAT_1831f89d0 + _DAT_1831f8740) * 0x2000 | _DAT_1831f89d0 + _DAT_1831f8740 >> 0x33) ^
           _DAT_1831f89d0;
  _DAT_1831f8768 =
       func_0x000188e58c70((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_1831f8740 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f89d0 + 0x8422d325));
  uVar3 = ~(uint)_DAT_1831f8768 & 0xf000;
  uVar5 = (ulonglong)uVar3 - (ulonglong)(~(uint)_DAT_1831f8768 >> 1 & 0x5000);
  uVar5 = (uVar5 & 0x3333333333333000) + (uVar5 >> 2 & 0x3333333333333000);
  uVar5 = (ulonglong)
          ((uint)((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0700) * 0x101010101010101 >> 0x38) << 6) ^
          uVar3);
  _DAT_1831f8990 = _DAT_1831f8bc8 ^ uVar5 ^ 0xf000;
  _DAT_1831f8a68 = (_DAT_1831f8a68 ^ uVar5) + 0xf000 ^ 0x998965f7627d5a08;
  _DAT_1831f8940 = (_DAT_1831f8940 * 0x3b69e714f18bcc05 ^ _DAT_1831f8a68) + uVar5;
  _DAT_1831f8908 = _DAT_1831f8940 ^ _DAT_1831f8a68;
  _DAT_1831f8c98 = 0xf000;
  _DAT_1831f88e0 = func_0x000188e58c70(_DAT_1831f8b58 + 0x20ff84250021ff ^ 0x1d);
  uVar5 = (ulonglong)(~(uint)_DAT_1831f88e0 & 0xdfa345ed);
  _DAT_1831f8a38 = _DAT_1831f8a38 ^ uVar5 ^ 0xd5963356f9b23cc8;
  _DAT_1831f8978 = (_DAT_1831f8978 * -0x38813a2f8d17d673 ^ _DAT_1831f8a38) + uVar5;
  _DAT_1831f8700 = _DAT_1831f8978 ^ _DAT_1831f8a38;
  _DAT_1831f8a60 = 0;
  uVar5 = (_DAT_1831f87f0 ^ 0x8422d325) + _DAT_1831f8a88 + 0x8422d325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f87f0 ^ 0x8422d325;
  uVar13 = ((_DAT_1831f8a88 + _DAT_1831f87f0) * 0x2000 | _DAT_1831f8a88 + _DAT_1831f87f0 >> 0x33) ^
           _DAT_1831f8a88;
  _DAT_1831f8bc0 =
       func_0x000188e58c70((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_1831f87f0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8a88 + 0x8422d325));
  uVar5 = _DAT_1831f8bc0 ^ 0xf000;
  _DAT_1831f8b80 = _DAT_1831f8c10 ^ uVar5 ^ 0xf000;
  _DAT_1831f88a0 = (_DAT_1831f88a0 ^ uVar5) + 0xf000 ^ 0xbbc9c0af5de4a1a0;
  _DAT_1831f8cc0 = (_DAT_1831f8cc0 * 0x446f9fd2c7576c6b ^ _DAT_1831f88a0) + uVar5;
  _DAT_1831f8a50 = _DAT_1831f8cc0 ^ _DAT_1831f88a0;
  _DAT_1831f8c38 = 0xf000;
  auVar8._8_8_ = _UNK_180144ff8;
  auVar8._0_8_ = (ulonglong)(uint)(iVar1 << 0xc) ^ 0x84222325;
  auVar9 = pshufb(auVar8 ^ _DAT_1811bbcd0,unaff_XMM11);
  uVar13 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar13 + _DAT_1831f88d8;
  if (auVar9._4_4_ < 0) {
    uVar5 = _DAT_1831f87c8 ^ uVar13;
  }
  _DAT_1831f8860 = func_0x000188e58c70(SUB161(auVar8 ^ _DAT_1811bbcd0,5) ^ uVar5);
  uVar5 = _DAT_1831f8860 - (_DAT_1831f8860 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1831f8860;
  uVar13 = (ulonglong)(uint)(iVar1 << 0xc) & 0xffff;
  _DAT_1831f89a8 = (_DAT_1831f89a8 ^ uVar5) + uVar13 ^ 0x4c5f73e3a1f565d8;
  _DAT_1831f8750 = (_DAT_1831f8750 * 0x2319713c3564ab05 ^ _DAT_1831f89a8) + uVar5;
  _DAT_1831f8a10 = _DAT_1831f8750 ^ _DAT_1831f89a8;
  auVar10._4_4_ = 0;
  auVar10._0_4_ = uVar6 & 0xfc0 ^ 0x84222325;
  auVar10._8_8_ = uVar13;
  auVar9 = pshufb(auVar10 ^ _DAT_1811bbce0,unaff_XMM11);
  uVar7 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar7 + _DAT_1831f8ab8;
  if (auVar9._4_4_ < 0) {
    uVar5 = _DAT_1831f8ac0 ^ uVar7;
  }
  _DAT_1831f8cd0 = uVar13;
  _DAT_1831f8b38 = func_0x000188e58c70(SUB161(auVar10 ^ _DAT_1811bbce0,5) ^ uVar5);
  uVar5 = uVar12 & _DAT_1831f8b38;
  uVar12 = uVar12 | uVar13;
  _DAT_1831f8720 = (_DAT_1831f8720 ^ uVar5) + uVar12 ^ 0xfbae00b64bef83d1;
  _DAT_1831f8930 = (_DAT_1831f8930 * 0x7cbb6c67c529683d ^ _DAT_1831f8720) + uVar5;
  _DAT_1831f8b48 = _DAT_1831f8930 ^ _DAT_1831f8720;
  plVar2 = (longlong *)unaff_RBP[6];
  _DAT_1831f8c60 = uVar12;
  lVar4 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar5,0);
  *(int *)(unaff_RBP + 0x12) = (int)*(char *)(lVar4 + *(int *)(unaff_RBP + 0x13));
  (**(code **)(*plVar2 + 0x6f8))(plVar2);
  unaff_RBP[0xe] = (ulonglong)*(uint *)(unaff_RBP + 0x12);
  _DAT_1831f8b70 = func_0x000188e58c70(_DAT_1831f89b8 ^ 0xff86ffb87700441e);
  uVar5 = (_DAT_1831f8b70 ^ 0x1f2b0b30fe2b3cad) & 0x7fffffffffffffff;
  _DAT_1831f8cf0 = (_DAT_1831f8cf0 ^ uVar5) + 0xeff9adfd ^ 0x83915762e5007138;
  _DAT_1831f8c90 = (_DAT_1831f8c90 * -0x772b32c7e34571a9 ^ _DAT_1831f8cf0) + uVar5;
  _DAT_1831f8c48 = _DAT_1831f8c90 ^ _DAT_1831f8cf0;
  _DAT_1831f8798 = 0xeff9adfd;
  uVar5 = (_DAT_1831f89e0 ^ _DAT_1811bbcf0) + _DAT_1831f8ad0 + 0x7cd4587e;
  uVar13 = (_DAT_1831f8ad0 ^ _UNK_1811bbcf8) + _DAT_1831f89e0 + 0xc331b8ff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f89e0 ^ _DAT_1811bbcf0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831f8ad0 ^ _UNK_1811bbcf8;
  _DAT_1831f8900 =
       func_0x000188e58c70((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831f89e0 + 0xc331b8ff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8ad0 + 0x7cd4587e));
  uVar5 = _DAT_1831f8900 << 0xe | _DAT_1831f8900 >> 0x32;
  _DAT_1831f8870 = (_DAT_1831f8870 ^ uVar5) + 0x3bc7c3a4 ^ 0x8ae99c19055a261;
  _DAT_1831f8c48 = (_DAT_1831f8c48 * 0x86a2d827f2a4c7d ^ _DAT_1831f8870) + uVar5;
  _DAT_1831f8c08 = _DAT_1831f8c48 ^ _DAT_1831f8870;
  _DAT_1831f8bb0 = 0x3bc7c3a4;
  uVar5 = (~_DAT_1831f8c30 + 0x9511b01e) *
          ((_DAT_1831f87a0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831f87a0 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1831f8840) + (uVar5 & _DAT_1831f8840);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8ca0 = func_0x000188e58c70((uVar5 | 0x11339338) + (ulonglong)((uint)uVar5 & 0x11339338))
  ;
  uVar5 = (_DAT_1831f8ca0 & 0x7fffffffffffffff) * -0x6698e2ce17577f6f;
  _DAT_1831f8a10 = (_DAT_1831f8a10 ^ uVar5) - 0x9511b01d ^ 0x6ab1aedcb9a00191;
  _DAT_1831f8950 = (_DAT_1831f8950 * -0x4b3b8c7dce1a6ed7 ^ _DAT_1831f8a10) + uVar5;
  _DAT_1831f88c0 = _DAT_1831f8950 ^ _DAT_1831f8a10;
  _DAT_1831f87f8 = 0x6aee4fe3;
  uVar5 = (~_DAT_1831f8ae0 + 0x6aee4fe4) *
          ((_DAT_1831f8718 ^ 0x11339379) + (ulonglong)((uint)_DAT_1831f8718 & 0x11339379) * 2);
  uVar5 = (uVar5 | _DAT_1831f8900) + (uVar5 & _DAT_1831f8900);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8a00 = func_0x000188e58c70((uVar5 | 0x7bdddc9a) + (ulonglong)((uint)uVar5 & 0x7bdddc9a))
  ;
  uVar5 = (_DAT_1831f8a00 ^ 0xfe000000) & 0xfffffffffe000000;
  _DAT_1831f8928 = _DAT_1831f8900 ^ uVar5 ^ 0x10000003f;
  _DAT_1831f87c8 = (_DAT_1831f87c8 ^ uVar5) + 0x10000003f ^ 0xb1ee68e81ec5c42d;
  _DAT_1831f8b58 = (_DAT_1831f8b58 * -0x745b24e3efdf84ab ^ _DAT_1831f87c8) + uVar5;
  _DAT_1831f8be8 = _DAT_1831f8b58 ^ _DAT_1831f87c8;
  _DAT_1831f88d8 = 0x3f;
  _DAT_1831f8c10 = func_0x000188e58c70(_DAT_1831f8c30 ^ 0x7100116dff7114);
  _DAT_1831f89a0 = (_DAT_1831f89a0 ^ _DAT_1831f8c10) - 0xb5acb257 ^ 0x14d48cf012928c64;
  _DAT_1831f8728 = (_DAT_1831f8728 * -0x4a5cd9e5bc773c41 ^ _DAT_1831f89a0) + _DAT_1831f8c10;
  _DAT_1831f8b58 = _DAT_1831f8728 ^ _DAT_1831f89a0;
  _DAT_1831f8818 = 0x4a534da9;
  uVar5 = (_DAT_1831f8b00 ^ _DAT_1811bbd00) + _DAT_1831f8af0 + 0x318e91b3;
  uVar13 = (_DAT_1831f8af0 ^ _UNK_1811bbd08) + _DAT_1831f8b00 + 0x4a534da9;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8b00 ^ _DAT_1811bbd00;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831f8af0 ^ _UNK_1811bbd08;
  _DAT_1831f8748 =
       func_0x000188e58c70((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831f8b00 + 0x4a534da9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8af0 + 0x318e91b3));
  uVar5 = _DAT_1831f8748 - (_DAT_1831f8748 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1831f8748;
  _DAT_1831f8bb8 = _DAT_1831f8928 ^ uVar5 ^ 0x10000003f;
  _DAT_1831f8a48 = (_DAT_1831f8a48 ^ uVar5) + 0x10000003f ^ 0x2877d07472d48d9d;
  _DAT_1831f87d8 = (_DAT_1831f87d8 * 0x6b027d920246bc51 ^ _DAT_1831f8a48) + uVar5;
  _DAT_1831f8c88 = _DAT_1831f87d8 ^ _DAT_1831f8a48;
  _DAT_1831f87d0 = 0x3f;
  uVar5 = (_DAT_1831f8bd0 ^ _DAT_1811bbd10) + _DAT_1831f8ac8 + 0x84222325;
  uVar13 = (_DAT_1831f8ac8 ^ _UNK_1811bbd18) + _DAT_1831f8bd0 + 0x81390ca;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8bd0 ^ _DAT_1811bbd10;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831f8ac8 ^ _UNK_1811bbd18;
  _DAT_1831f89e8 =
       func_0x000188e58c70((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831f8bd0 + 0x81390ca) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8ac8 + 0x84222325));
  uVar5 = (_DAT_1831f89e8 ^ 0x8000000) & 0x1fffe00000;
  _DAT_1831f8808 = (_DAT_1831f8808 ^ uVar5) - 0x81390ca ^ 0x8c913f4d815a966b;
  _DAT_1831f8c40 = (_DAT_1831f8c40 * -0x43724c4f6932a2fb ^ _DAT_1831f8808) + uVar5;
  _DAT_1831f8ab8 = _DAT_1831f8c40 ^ _DAT_1831f8808;
  _DAT_1831f8b40 = 0xf7ec6f36;
  uVar5 = (~_DAT_1831f8a08 + 0x81390cb) *
          ((_DAT_1831f8750 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1831f8750 & 0x8422231a) * 2);
  uVar5 = (uVar5 | _DAT_1831f8b90) + (uVar5 & _DAT_1831f8b90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8c08 = func_0x000188e58c70((uVar5 | 0x8c31b3d0) + (ulonglong)((uint)uVar5 & 0x8c31b3d0))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_1831f8c08 & 0x3f);
  _DAT_1831f8880 = _DAT_1831f8760 ^ uVar5 ^ 0x8139109;
  _DAT_1831f8cf0 = (_DAT_1831f8cf0 ^ uVar5) + 0x8139109 ^ 0xe955dfe0251ea405;
  _DAT_1831f8b80 = (_DAT_1831f8b80 * 0x62aff0ee0b58e451 ^ _DAT_1831f8cf0) + uVar5;
  _DAT_1831f8b90 = _DAT_1831f8b80 ^ _DAT_1831f8cf0;
  _DAT_1831f8af0 = 0x8139109;
  uVar5 = (~_DAT_1831f89d8 + 0x3bc7c3a5) *
          ((_DAT_1831f88d8 ^ 0x6bdb8ed8) + (ulonglong)((uint)_DAT_1831f88d8 & 0x6bdb8ed8) * 2);
  uVar5 = (uVar5 | _DAT_1831f8c28) + (uVar5 & _DAT_1831f8c28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8900 = func_0x000188e58c70((uVar5 | 0x501c4d7c) + (ulonglong)((uint)uVar5 & 0x501c4d7c))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_1831f8900 & 0xeff9adfd);
  _DAT_1831f8a98 = _DAT_1831f8c60 ^ uVar5 ^ 0x12bc171a1;
  _DAT_1831f8838 = (_DAT_1831f8838 ^ uVar5) + 0x12bc171a1 ^ 0x6f2a6e328cef51ee;
  _DAT_1831f88c0 = (_DAT_1831f88c0 * -0x73de4ca63e158199 ^ _DAT_1831f8838) + uVar5;
  _DAT_1831f8788 = _DAT_1831f88c0 ^ _DAT_1831f8838;
  _DAT_1831f8b08 = 0x2bc171a1;
  _DAT_1831f8720 = func_0x000188e58c70(_DAT_1831f8c48 ^ 0x45005043ffebb8);
  _DAT_1831f8b38 = (_DAT_1831f8b38 ^ _DAT_1831f8720) + 0xd43e6e59 ^ 0xe95d2aae801d07fb;
  _DAT_1831f88c0 = (_DAT_1831f88c0 * -0x1f8643f4fb17db0f ^ _DAT_1831f8b38) + _DAT_1831f8720;
  _DAT_1831f8840 = _DAT_1831f88c0 ^ _DAT_1831f8b38;
  _DAT_1831f89c8 = 0xd43e6e59;
  _DAT_1831f8b08 = func_0x000188e58c70(_DAT_1831f8978 ^ 0xffc5004f9bffebff);
  _DAT_1831f88f8 =
       (_DAT_1831f88f8 ^ _DAT_1831f8b08 ^ 0x3809cd9495df80e9) + 0x2bc181a4 ^ 0xedf7af54ce0c520a;
  _DAT_1831f8c70 =
       (_DAT_1831f8c70 * -0x380b3983cb12fca7 ^ _DAT_1831f88f8) +
       (_DAT_1831f8b08 ^ 0x3809cd9495df80e9);
  _DAT_1831f8cc0 = _DAT_1831f8c70 ^ _DAT_1831f88f8;
  _DAT_1831f8938 = 0x2bc181a4;
  uVar5 = (_DAT_1831f8730 ^ _DAT_1811bbd20) + _DAT_1831f8bf0 + 0x501c4d7c;
  uVar13 = (_DAT_1831f8bf0 ^ _UNK_1811bbd28) + _DAT_1831f8730 + 0x57830348;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8730 ^ _DAT_1811bbd20;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831f8bf0 ^ _UNK_1811bbd28;
  _DAT_1831f8ab8 =
       func_0x000188e58c70((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831f8730 + 0x57830348) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f8bf0 + 0x501c4d7c));
  uVar5 = (_DAT_1831f8ab8 ^ 0xd7bf6f59) & 0x7fffffffffffffff;
  _DAT_1831f8c78 = _DAT_1831f8a50 ^ uVar5 ^ 0x12bc171a1;
  _DAT_1831f89d0 = (_DAT_1831f89d0 ^ uVar5) + 0x12bc171a1 ^ 0x97279031fc7f0def;
  _DAT_1831f8bf8 = (_DAT_1831f8bf8 * 0x35d8af071a97b6f1 ^ _DAT_1831f89d0) + uVar5;
  _DAT_1831f8a30 = _DAT_1831f8bf8 ^ _DAT_1831f89d0;
  _DAT_1831f8a20 = 0x2bc171a1;
  _DAT_1831f8728 = func_0x000188e58c70(_DAT_1831f8b78 + 0xffe2ff841cffe1ff ^ 0x62);
  _DAT_1831f8728 = _DAT_1831f8728 ^ 0x2bc171a1;
  _DAT_1831f89f0 = _DAT_1831f89f0 ^ _DAT_1831f8728 ^ 0x1610389b5c789de6;
  _DAT_1831f87c8 = (_DAT_1831f87c8 * 0x411ae8f31dfdf8b ^ _DAT_1831f89f0) + _DAT_1831f8728;
  _DAT_1831f89f8 = _DAT_1831f87c8 ^ _DAT_1831f89f0;
  _DAT_1831f8b38 = 0;
  uVar5 = (_DAT_1831f8738 ^ 0x8422231a) + _DAT_1831f89c0 + 0x8422231a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831f8738 ^ 0x8422231a;
  uVar13 = ((_DAT_1831f89c0 + _DAT_1831f8738) * 0x2000 | _DAT_1831f89c0 + _DAT_1831f8738 >> 0x33) ^
           _DAT_1831f89c0;
  _DAT_1831f8b28 =
       func_0x000188e58c70((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_1831f8738 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831f89c0 + 0x8422231a));
  uVar5 = _DAT_1831f8b28 & 0x3fffffffffff ^ 0x3f;
  _DAT_1831f8c18 = _DAT_1831f8a28 ^ uVar5 ^ 0x3f;
  _DAT_1831f8a38 = (_DAT_1831f8a38 ^ uVar5) + 0x3f ^ 0x288141afed6edbce;
  _DAT_1831f8a40 = (_DAT_1831f8a40 * 0x163278e8c83e4df7 ^ _DAT_1831f8a38) + uVar5;
  _DAT_1831f8be0 = _DAT_1831f8a40 ^ _DAT_1831f8a38;
  _DAT_1831f8b78 = 0x3f;
  _DAT_1831f8a80 = func_0x000188e58c70(_DAT_1831f8cd0 + 0xdc002449ff24ff ^ 0x3b);
  _DAT_1831f87c8 = _DAT_1831f87c8 ^ _DAT_1831f8a80 ^ 0x1ca317575d91d1e3;
  _DAT_1831f8ab0 = (_DAT_1831f8ab0 * -0x7aa976379539e65b ^ _DAT_1831f87c8) + _DAT_1831f8a80;
  _DAT_1831f8828 = _DAT_1831f8ab0 ^ _DAT_1831f87c8;
  _DAT_1831f87f8 = 0;
  uVar5 = ((_DAT_1831f8938 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1831f8938 & 0x8422231a) * 2) *
          -_DAT_1831f8898;
  uVar5 = (uVar5 | _DAT_1831f8c18) + (uVar5 & _DAT_1831f8c18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831f8990 = func_0x000188e58c70((uVar5 | 0x8422231a) + (ulonglong)((uint)uVar5 & 0x8422231a))
  ;
  uVar5 = _DAT_1831f8990 - (_DAT_1831f8990 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_1831f8990;
  uVar5 = uVar5 << 0x37 | uVar5 >> 9;
  _DAT_1831f8700 = _DAT_1831f8bf0 ^ uVar5 ^ 0x3f;
  _DAT_1831f8878 = (_DAT_1831f8878 ^ uVar5) + 0x3f ^ 0x3733efc28538ee16;
  _DAT_1831f88c8 = (_DAT_1831f88c8 * 0x47348a56ca3614e1 ^ _DAT_1831f8878) + uVar5;
  _DAT_1831f8a80 = _DAT_1831f88c8 ^ _DAT_1831f8878;
  _DAT_1831f89f8 = 0x3f;
  uVar5 = unaff_RBP[0xe];
  uVar13 = uVar5 ^ 0x84222325 ^ _DAT_1831f8c90;
  lVar4 = (uVar5 ^ 0x84222325) + _DAT_1831f8a08;
  uVar7 = uVar13 + lVar4;
  uVar14 = (_DAT_1831f8a08 ^ 0x3f) + _DAT_1831f8c90 + 0x3f;
  uVar13 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar13;
  uVar7 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1831f8a08 ^ 0x3f;
  _DAT_1831f88c8 =
       func_0x000188e58c70((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831f8c90 + 0x3f) ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - lVar4);
  uVar13 = (uVar5 ^ _DAT_1831f88c8) & 0x1ffffffffff;
  uVar6 = (uint)uVar5 & 0x3f;
  uVar7 = (ulonglong)uVar6;
  _DAT_1831f88c0 = (_DAT_1831f88c0 ^ uVar13) + uVar7 ^ 0x4feb2dc34c94b929;
  _DAT_1831f8898 = (_DAT_1831f8898 * 0xce8fee7df0f5e7d ^ _DAT_1831f88c0) + uVar13;
  _DAT_1831f8b38 = _DAT_1831f8898 ^ _DAT_1831f88c0;
  auVar11._4_4_ = 0;
  auVar11._0_4_ = uVar6 ^ 0x84222325;
  auVar11._8_8_ = uVar12;
  auVar9 = pshufb(auVar11 ^ _DAT_1811bbd30,unaff_XMM11);
  uVar13 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar13 + _DAT_1831f8870;
  if (auVar9._4_4_ < 0) {
    uVar5 = _DAT_1831f89c8 ^ uVar13;
  }
  _DAT_1831f8a78 = uVar7;
  _DAT_1831f87d0 = func_0x000188e58c70(SUB161(auVar11 ^ _DAT_1811bbd30,5) ^ uVar5);
  uVar5 = uVar7 | _DAT_1831f87d0 & 0x3ffffffffffe00;
  uVar12 = uVar12 | uVar7;
  _DAT_1831f8788 = (_DAT_1831f8788 ^ uVar5) + uVar12 ^ 0xb9b9bd7a579062ef;
  _DAT_1831f8a18 = (_DAT_1831f8a18 * 0x48fecc7f31e2dd99 ^ _DAT_1831f8788) + uVar5;
  _DAT_1831f8720 = _DAT_1831f8a18 ^ _DAT_1831f8788;
  _DAT_1831f8880 = uVar12;
  unaff_RBP[0x12] = *unaff_RBP;
  *(undefined4 *)(unaff_RBP + 0x13) = *(undefined4 *)(unaff_RBP + 10);
  *(int *)(unaff_RBP + 0x14) = (int)uVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x11)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e4601f (image 188e4601f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e4601f(void)

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



// ===== continuation @ rva 8e460ec (image 188e460ec) =====

void FUN_188e460ec(void)

{
  return;
}



// ===== continuation @ rva 8e45d9a (image 188e45d9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e45d9a(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x98) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e46242 (image 188e46242) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e46242(longlong param_1)

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



// ===== continuation @ rva 8e45d0d (image 188e45d0d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e45d0d(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  undefined8 unaff_R15;
  
  uVar2 = (**(code **)(*unaff_R13 + 0xd8))();
  *(undefined8 *)(unaff_RBP + 0x90) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x98) = uVar2;
  *(undefined8 *)(unaff_RBP + 0xa0) = unaff_R15;
  *(undefined4 *)(unaff_RBP + 0xa8) = 0;
  *(undefined4 *)(unaff_RBP + 0xb0) = unaff_EDI;
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



// ===== continuation @ rva 8e31990 (image 188e31990) =====

void FUN_188e31990(void)

{
  longlong unaff_RBP;
  uint unaff_EDI;
  
                    /* WARNING: Could not recover jumptable at 0x000188e319a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811bb3f0 + (ulonglong)(unaff_EDI >> 0x1f) * 8))
            ((ulonglong)(unaff_EDI >> 0x1f),&UNK_1811bb3f0,unaff_RBP + -0x3b);
  return;
}



// ===== continuation @ rva 8e3641b (image 188e3641b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e3641b(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar9;
  undefined1 auVar8 [16];
  
  uVar1 = (~param_2 + 2) * (param_4 + param_3);
  uVar1 = (uVar1 | param_1) + (uVar1 & param_1);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831f8c10 = func_0x000188e58c70((in_RAX ^ 1 | uVar1) + (uVar1 & (in_RAX ^ 1)));
  uVar1 = _DAT_1831f8c10 ^ unaff_RSI;
  *(ulonglong *)(unaff_RBP + 0x50) = unaff_RSI;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = unaff_RSI;
  uVar1 = uVar1 & 0x1fffffffffff ^ unaff_RSI;
  uVar9 = (uint)(unaff_RSI >> 0x20);
  uVar5 = (uint)unaff_RSI & (uint)DAT_18001a990;
  uVar3 = SUB164(_DAT_18001a990 ^ auVar8,0);
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = 0xffffffffffffffff;
  auVar7._12_4_ = 0xffffffff;
  uVar6 = SUB164(auVar7 ^ auVar8,0);
  uVar2 = (((ulonglong)uVar3 * (ulonglong)_DAT_1811bc0d0 +
            ((ulonglong)_DAT_1811bc0e0 * (ulonglong)uVar3 +
             (SUB168(_DAT_18001a990 ^ auVar8,0) >> 0x20) * (ulonglong)_DAT_1811bc0d0 << 0x20) +
           ((ulonglong)uVar5 * (ulonglong)_DAT_1811bc0c0 << 0x20 |
           (ulonglong)_DAT_1811bc0b0 * (ulonglong)uVar5) +
           ((ulonglong)_DAT_1811bc0a0 * (unaff_RSI & 0xffffffff) +
            (ulonglong)_DAT_1811bc090 * (ulonglong)uVar9 << 0x20) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_1811bc090) -
          ((ulonglong)uVar6 * (ulonglong)_DAT_1811bc120 +
           ((SUB168(auVar7 ^ auVar8,0) >> 0x20) * (ulonglong)_DAT_1811bc120 +
            (ulonglong)_DAT_1811bc110 * (ulonglong)uVar6 << 0x20) +
          (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_1811bc120 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_1811bc120 +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_1811bc110 << 0x20))) + 0xb407c6472031fa45;
  _DAT_1831f8780 = _DAT_1831f8bd0 ^ uVar1 ^ uVar2;
  _DAT_1831f8b88 = (_DAT_1831f8b88 ^ uVar1) + uVar2 ^ 0x75c846e6fddff2ab;
  _DAT_1831f8838 = (_DAT_1831f8838 * -0x18c671eb2300aa2d ^ _DAT_1831f8b88) + uVar1;
  _DAT_1831f8ac8 = _DAT_1831f8838 ^ _DAT_1831f8b88;
  _DAT_1831f8948 = uVar2;
  _DAT_1831f8be0 = func_0x000188e58c70(_DAT_1831f8828 ^ 0x6655dd1f071d66a8);
  uVar1 = _DAT_1831f8be0 >> 1 | _DAT_1831f8be0;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1831f8be0;
  _DAT_1831f8838 = (_DAT_1831f8838 ^ uVar1) + 0x7fae3febe74df7da ^ 0x53c2dc8b047caeaf;
  _DAT_1831f88b0 = (_DAT_1831f88b0 * -0x38c65f67d0374deb ^ _DAT_1831f8838) + uVar1;
  _DAT_1831f8c88 = _DAT_1831f88b0 ^ _DAT_1831f8838;
  _DAT_1831f8860 = 0x7fae3febe74df7da;
  uVar1 = (_DAT_1831f8bb0 ^ _DAT_1811bc130) + _DAT_1831f8c10 + 0xbe7f7d21b722f27a;
  uVar4 = (_DAT_1831f8c10 ^ _UNK_1811bc138) + _DAT_1831f8bb0 + 0x66ebbd0181143ba0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831f8bb0 ^ _DAT_1811bc130;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831f8c10 ^ _UNK_1811bc138;
  _DAT_1831f8a00 =
       func_0x000188e58c70((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831f8bb0 + 0x66ebbd0181143ba0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831f8c10 + 0xbe7f7d21b722f27a));
  _DAT_1831f8c38 = (_DAT_1831f8c38 ^ _DAT_1831f8a00) + 0xd894c020b214eaff ^ 0xdbb1cf04e5ca57d8;
  _DAT_1831f87e0 = (_DAT_1831f87e0 * -0x2ee7df81cf947be9 ^ _DAT_1831f8c38) + _DAT_1831f8a00;
  _DAT_1831f8be0 = _DAT_1831f87e0 ^ _DAT_1831f8c38;
  _DAT_1831f8a78 = 0xd894c020b214eaff;
  _DAT_1831f8b00 = func_0x000188e58c70(_DAT_1831f8940 ^ 0x31222a99134afe9b);
  _DAT_1831f8a58 = (_DAT_1831f8a58 ^ _DAT_1831f8b00) + 0x1ea2b4cdd2de3e28 ^ 0x7919810308b7ffec;
  _DAT_1831f88b8 = (_DAT_1831f88b8 * -0x7d463f92eaa93403 ^ _DAT_1831f8a58) + _DAT_1831f8b00;
  _DAT_1831f8c28 = _DAT_1831f88b8 ^ _DAT_1831f8a58;
  _DAT_1831f8848 = 0x1ea2b4cdd2de3e28;
  uVar1 = (_DAT_1831f88d8 ^ _DAT_1811bc140) + _DAT_1831f8af0 + 0x84222cda;
  uVar4 = (_DAT_1831f8af0 ^ _UNK_1811bc148) + _DAT_1831f88d8 + 0xe15d4b322d21c1d8;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831f88d8 ^ _DAT_1811bc140;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831f8af0 ^ _UNK_1811bc148;
  _DAT_1831f8bf8 =
       func_0x000188e58c70((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831f88d8 + 0xe15d4b322d21c1d8) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831f8af0 + 0x84222cda));
  uVar1 = (ulonglong)((uint)_DAT_1831f8bf8 & 0xfff);
  _DAT_1831f8a00 = _DAT_1831f8770 ^ uVar1 ^ 0xe15d4b322d21d1d7;
  _DAT_1831f8ce0 = (_DAT_1831f8ce0 ^ uVar1) + 0xe15d4b322d21d1d7 ^ 0xef795272ddb16861;
  _DAT_1831f8cf8 = (_DAT_1831f8cf8 * -0x6c374b95eb1dc5c9 ^ _DAT_1831f8ce0) + uVar1;
  _DAT_1831f8a10 = _DAT_1831f8cf8 ^ _DAT_1831f8ce0;
  _DAT_1831f8bb8 = 0xe15d4b322d21d1d7;
  _DAT_1831f8b70 = func_0x000188e58c70(_DAT_1831f8bf0 ^ 0x6e3ba12bc975b4ce);
  uVar1 = _DAT_1831f8b70 << 0x17 | _DAT_1831f8b70 >> 0x29;
  _DAT_1831f8c00 = _DAT_1831f8950 ^ uVar1 ^ 0xfff;
  _DAT_1831f8768 = (_DAT_1831f8768 ^ uVar1) + 0xfff ^ 0xfb7d3ef95258be53;
  _DAT_1831f88b8 = (_DAT_1831f88b8 * 0x7f541225c0e6d3c3 ^ _DAT_1831f8768) + uVar1;
  _DAT_1831f8870 = _DAT_1831f88b8 ^ _DAT_1831f8768;
  _DAT_1831f8c58 = 0xfff;
  uVar1 = (~_DAT_1831f8b48 + 0x933d478a8ca3a150) *
          ((_DAT_1831f8908 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831f8908 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1831f8bd8) + (uVar1 & _DAT_1831f8bd8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831f8970 = func_0x000188e58c70((uVar1 | 0x933d478a0881826a) + (uVar1 & 0x933d478a0881826a));
  uVar1 = _DAT_1831f8970 ^ 0x933d478a8ca3a14f;
  uVar4 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_1831f8a88 = (_DAT_1831f8a88 ^ uVar1) + 0x6cc2b875735c5eb1 ^ 0x560efc94146c5dd2;
  _DAT_1831f8bd8 = (_DAT_1831f8bd8 * 0x54c5e018d36f0c03 ^ _DAT_1831f8a88) + uVar1;
  _DAT_1831f8be8 = _DAT_1831f8bd8 ^ _DAT_1831f8a88;
  _DAT_1831f8b08 = 0x6cc2b875735c5eb1;
  uVar1 = (_DAT_1831f89b0 ^ _DAT_1811bc150) + _DAT_1831f88a0 + 0x84222cda;
  uVar4 = (_DAT_1831f88a0 ^ _UNK_1811bc158) + _DAT_1831f89b0 + 0x933d478a8ca3a14f;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831f89b0 ^ _DAT_1811bc150;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831f88a0 ^ _UNK_1811bc158;
  _DAT_1831f8a70 =
       func_0x000188e58c70((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831f89b0 + 0x933d478a8ca3a14f) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831f88a0 + 0x84222cda));
  uVar1 = (_DAT_1831f8780 & 0xffffffffffffff) * -0x1916c3abef19b981;
  _DAT_1831f8960 = _DAT_1831f8c80 ^ uVar1 ^ 0x933d478a8ca3b14e;
  _DAT_1831f8730 = (_DAT_1831f8730 ^ uVar1) + 0x933d478a8ca3b14e ^ 0xaf5722adbee22a1a;
  _DAT_1831f8cd8 = (_DAT_1831f8cd8 * -0xd0696df3d1ff1f ^ _DAT_1831f8730) + uVar1;
  _DAT_1831f87c0 = _DAT_1831f8cd8 ^ _DAT_1831f8730;
  _DAT_1831f88b8 = 0x933d478a8ca3b14e;
  uVar1 = (_DAT_1831f89f0 ^ _DAT_1811bc160) + _DAT_1831f8930 + 0x933d478a0881926b;
  uVar4 = (_DAT_1831f8930 ^ _UNK_1811bc168) + _DAT_1831f89f0 + 0x6cc2b875735c5eb1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831f89f0 ^ _DAT_1811bc160;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831f8930 ^ _UNK_1811bc168;
  _DAT_1831f8760 =
       func_0x000188e58c70((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831f89f0 + 0x6cc2b875735c5eb1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831f8930 + 0x933d478a0881926b));
  _DAT_1831f8860 = _DAT_1831f8a48 ^ _DAT_1831f8c78 ^ 0xfff;
  _DAT_1831f89c8 = (_DAT_1831f89c8 ^ _DAT_1831f8c78) + 0xfff ^ 0xd90f727f76474b49;
  _DAT_1831f8b00 = (_DAT_1831f8b00 * -0x5670af7b870d9f95 ^ _DAT_1831f89c8) + _DAT_1831f8c78;
  _DAT_1831f8768 = _DAT_1831f8b00 ^ _DAT_1831f89c8;
  _DAT_1831f8b48 = 0xfff;
  uVar1 = (~_DAT_1831f8ab0 + 0x3c4b11856ed0d289) *
          ((_DAT_1831f8b18 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831f8b18 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1831f8b90) + (uVar1 & _DAT_1831f8b90);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831f8bf8 = func_0x000188e58c70((uVar1 | 0x3c4b1185eaf2f1ad) + (uVar1 & 0x3c4b1185eaf2f1ad));
  _DAT_1831f8920 = (_DAT_1831f8920 ^ _DAT_1831f8bf8) + 0xc3b4ee7a912f2d78 ^ 0x53ed882acbf1f478;
  _DAT_1831f8788 = (_DAT_1831f8788 * -0xdb43032567bef41 ^ _DAT_1831f8920) + _DAT_1831f8bf8;
  _DAT_1831f8ce8 = _DAT_1831f8788 ^ _DAT_1831f8920;
  _DAT_1831f87a0 = 0xc3b4ee7a912f2d78;
  uVar1 = (~_DAT_1831f8810 + 0xc3b4ee7a912f2d79) *
          ((_DAT_1831f8a00 ^ 0x3c4b1185eaf2c1a2) + (_DAT_1831f8a00 & 0x3c4b1185eaf2c1a2) * 2);
  uVar1 = (uVar1 | _DAT_1831f88d8) + (uVar1 & _DAT_1831f88d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x000188e58c70((uVar1 | 0xffffffff7bddecda) + (uVar1 & 0xffffffff7bddecda));
  _DAT_1831f8920 = uVar1 ^ 0x9d2d247e26abc730;
  uVar4 = _DAT_1831f8920 >> 1 | _DAT_1831f8920;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_1831f8920 =
       (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
       _DAT_1831f8920;
  _DAT_1831f8b18 = _DAT_1831f8748 ^ _DAT_1831f8920 ^ 0xfff;
  _DAT_1831f8808 = (_DAT_1831f8808 ^ _DAT_1831f8920) + 0xfff ^ 0x1df1f5d14496b18b;
  _DAT_1831f8920 = (uVar1 * -0x52b2a03b8d602529 ^ _DAT_1831f8808) + _DAT_1831f8920;
  _DAT_1831f8948 = _DAT_1831f8920 ^ _DAT_1831f8808;
  _DAT_1831f8b88 = 0xfff;
  uVar1 = (_DAT_1831f8be0 ^ _DAT_1811bc170) + _DAT_1831f8890 + 0x7fae3feb636fd4ff;
  uVar4 = (_DAT_1831f8890 ^ _UNK_1811bc178) + _DAT_1831f8be0 + 0xd894c020b214eaff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831f8be0 ^ _DAT_1811bc170;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831f8890 ^ _UNK_1811bc178;
  _DAT_1831f8818 =
       func_0x000188e58c70((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831f8be0 + 0xd894c020b214eaff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831f8890 + 0x7fae3feb636fd4ff));
  uVar1 = (_DAT_1831f8818 & 0x7fffffffffffffff) -
          ((_DAT_1831f8818 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1831f8818 & 0x7fffffffffffffff;
  _DAT_1831f8b80 = (_DAT_1831f8b80 ^ uVar1) + 0x58840020a204e2da ^ 0x58051c206ab4f8da;
  _DAT_1831f8cd0 = (_DAT_1831f8cd0 * -0x2172c6ed2d4a44a1 ^ _DAT_1831f8b80) + uVar1;
  _DAT_1831f8a78 = _DAT_1831f8cd0 ^ _DAT_1831f8b80;
  _DAT_1831f8c78 = 0x58840020a204e2da;
  uVar1 = (_DAT_1831f8bb0 ^ _DAT_1811bc180) + _DAT_1831f8c08 + 0xa73affcbd17b3e00;
  uVar4 = (_DAT_1831f8c08 ^ _UNK_1811bc188) + _DAT_1831f8bb0 + 0xb10800414409c5b4;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831f8bb0 ^ _DAT_1811bc180;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831f8c08 ^ _UNK_1811bc188;
  _DAT_1831f8b08 =
       func_0x000188e58c70((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831f8bb0 + 0xb10800414409c5b4) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831f8c08 + 0xa73affcbd17b3e00));
  uVar4 = _DAT_1831f8b08 ^ 0xa73affcb55591d25;
  _DAT_1831f8870 = _DAT_1831f8a58 ^ uVar4 ^ 0x5843000c9962e2d9;
  uVar1 = (_DAT_1831f8c80 ^ uVar4) + 0x5843000c9962e2d9;
  _DAT_1831f8c80 = uVar1 ^ 0x1ac70cc9bbd54b8b;
  _DAT_1831f8cb8 = (_DAT_1831f8cb8 * 0x48ea98b090b1725 ^ _DAT_1831f8c80) + uVar4;
  _DAT_1831f8a40 = _DAT_1831f8cb8 ^ _DAT_1831f8c80;
  _DAT_1831f8ce0 = 0x5843000c9962e2d9;
  _DAT_1831f8998 = func_0x000188e58c70(uVar1 ^ 0xe5180c4d992aaa1f);
  _DAT_1831f8bc0 = (_DAT_1831f8998 & 0x5843000c9962e2d9) * -0x17a94657b859974d;
  _DAT_1831f8bb8 = _DAT_1831f8bb8 ^ _DAT_1831f8bc0 ^ 0xdcb6dce4a8366da6;
  _DAT_1831f8780 = (_DAT_1831f8780 * 0x2d40996eccab1621 ^ _DAT_1831f8bb8) + _DAT_1831f8bc0;
  _DAT_1831f8948 = _DAT_1831f8780 ^ _DAT_1831f8bb8;
  _DAT_1831f8860 = 0;
  _DAT_1831f8a18 = func_0x000188e58c70(_DAT_1831f8b28 ^ 0xffec0084d9ffdd06);
  _DAT_1831f89d0 = _DAT_1831f87e8 ^ _DAT_1831f8a18 ^ 0xfff;
  _DAT_1831f8bb8 = (_DAT_1831f8bb8 ^ _DAT_1831f8a18) + 0xfff ^ 0x59effaba51e5fb94;
  _DAT_1831f8b60 = (_DAT_1831f8b60 * 0x69fbc814e877a8c1 ^ _DAT_1831f8bb8) + _DAT_1831f8a18;
  _DAT_1831f8a88 = _DAT_1831f8b60 ^ _DAT_1831f8bb8;
  _DAT_1831f8798 = 0xfff;
  uVar1 = ((_DAT_1831f8780 ^ 0x84222cda) + (ulonglong)((uint)_DAT_1831f8780 & 0x84222cda) * 2) *
          -_DAT_1831f8918;
  uVar1 = (uVar1 | _DAT_1831f8ac8) + (uVar1 & _DAT_1831f8ac8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x000188e58c70((uVar1 | 0x84222cda) + (ulonglong)((uint)uVar1 & 0x84222cda));
  uVar1 = (uVar1 ^ 0xfff) & 0x7fffffffffffffff;
  _DAT_1831f89b8 = _DAT_1831f8b60 ^ uVar1 ^ 0xfff;
  _DAT_1831f8a60 = (_DAT_1831f8a60 ^ uVar1) + 0xfff ^ 0xa0722fcd05227d39;
  _DAT_1831f8868 = (_DAT_1831f8868 * 0x3aee6d66b8530285 ^ _DAT_1831f8a60) + uVar1;
  _DAT_1831f8bf8 = _DAT_1831f8868 ^ _DAT_1831f8a60;
  _DAT_1831f88a8 = 0xfff;
  switch(0xfff < uVar2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e5b726 (image 188e5b726) =====

void FUN_188e5b726(void)

{
  return;
}



// ===== continuation @ rva 8e5b57f (image 188e5b57f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e5b57f(void)

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



// ===== continuation @ rva 8e5d03d (image 188e5d03d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e5d03d(void)

{
  char cVar1;
  longlong *unaff_R13;
  undefined4 uStack000000000000007a;
  undefined2 uStack000000000000007e;
  
  rdtsc();
  uStack000000000000007a = 0x450044;
  uStack000000000000007e = 0x53;
  (**(code **)(*unaff_R13 + 0x518))();
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



// ===== continuation @ rva 8e5fb1e (image 188e5fb1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e5fb1e(void)

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



// ===== continuation @ rva 8e5b7bd (image 188e5b7bd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e5b7bd(void)

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



// ===== continuation @ rva 8e5fae7 (image 188e5fae7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e5fae7(void)

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



// ===== continuation @ rva 8e5c57d (image 188e5c57d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188e5bbb6(void)

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



// ===== continuation @ rva 8e5d7c4 (image 188e5d7c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e5d7c4(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva 8e5cfa9 (image 188e5cfa9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188e5bbb6(void)

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



// ===== continuation @ rva 8e5eb50 (image 188e5eb50) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e5eb50(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x568))();
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



// ===== continuation @ rva 8e5eb01 (image 188e5eb01) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e5eb01(void)

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



// ===== continuation @ rva 8e5ffa3 (image 188e5ffa3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e5ffa3(void)

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



// ===== continuation @ rva 8e5ff4f (image 188e5ff4f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e5ff4f(void)

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



// ===== continuation @ rva 8e60d16 (image 188e60d16) =====

void FUN_188e60d16(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e605b4 (image 188e605b4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e605b4(void)

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



// ===== continuation @ rva 8e60cd3 (image 188e60cd3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e60cd3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c1f48)();
  return;
}



// ===== continuation @ rva 8e60183 (image 188e60183) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e60183(void)

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



// ===== continuation @ rva 8e602cd (image 188e602cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e602cd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  FUN_190dd72e0();
  (*_DAT_1811c1ce8)();
  return;
}



// ===== continuation @ rva 8e6026b (image 188e6026b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6026b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c1fd8)();
  return;
}



// ===== continuation @ rva 8e60d08 (image 188e60d08) =====

void FUN_188e60d08(void)

{
  return;
}



// ===== continuation @ rva 8e601a7 (image 188e601a7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e601a7(void)

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



// ===== continuation @ rva 8e60b25 (image 188e60b25) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e60b25(void)

{
  FUN_190de3220();
  (*_DAT_1811c1ee8)();
  return;
}



// ===== continuation @ rva 8e60c64 (image 188e60c64) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e60c64(void)

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



// ===== continuation @ rva 8e60011 (image 188e60011) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e60011(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1811c20d8)();
  return;
}



// ===== continuation @ rva 8e6375d (image 188e6375d) =====

void FUN_188e6375d(void)

{
  return;
}



// ===== continuation @ rva 8e60e80 (image 188e60e80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e60e80(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1811c2c58)();
  return;
}



// ===== continuation @ rva 8e62499 (image 188e62499) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e62499(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1811c23b8)();
  return;
}



// ===== continuation @ rva 8e6231b (image 188e6231b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6231b(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c2808)();
  return;
}



// ===== continuation @ rva 8e619bc (image 188e619bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e619bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1811c2d08)();
  return;
}



// ===== continuation @ rva 8e61387 (image 188e61387) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e61387(void)

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



// ===== continuation @ rva 8e61e53 (image 188e61e53) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e61e53(void)

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



// ===== continuation @ rva 8e615c1 (image 188e615c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e615c1(void)

{
  (*_DAT_1811c2e48)();
  return;
}



// ===== continuation @ rva 8e62d7c (image 188e62d7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e62d7c(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c2f88)();
  return;
}



// ===== continuation @ rva 8e63771 (image 188e63771) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e63771(void)

{
  (*_DAT_1811c2ef8)();
  return;
}



// ===== continuation @ rva 8e629f7 (image 188e629f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e629f7(void)

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



// ===== continuation @ rva 8e635fc (image 188e635fc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e635fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1811c24e8)();
  return;
}



// ===== continuation @ rva 8e63199 (image 188e63199) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e63199(void)

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



// ===== continuation @ rva 8e6e34a (image 188e6e34a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6e34a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1811c5028)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 8e65dd5 (image 188e65dd5) =====

void FUN_188e65dd5(void)

{
  return;
}



// ===== continuation @ rva 8e65c33 (image 188e65c33) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e65c33(void)

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



// ===== continuation @ rva 8e672e0 (image 188e672e0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e672e0(void)

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



// ===== continuation @ rva 8e6a4cd (image 188e6a4cd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6a4cd(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RBP;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e6a1d5 (image 188e6a1d5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6a1d5(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RBP;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RBP + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e66df8 (image 188e66df8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e66df8(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e67ddd (image 188e67ddd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188e6a73e(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e67d83 (image 188e67d83) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e67d83(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e67b4e (image 188e67b4e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e67b4e(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x3a0))();
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e67f91 (image 188e67f91) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188e6a73e(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e6793c (image 188e6793c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6793c(void)

{
  char cVar1;
  code *in_RAX;
  longlong *unaff_RBP;
  
  (*in_RAX)();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8e6e442 (image 188e6e442) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e6e442(void)

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



// ===== continuation @ rva 8e6e3ee (image 188e6e3ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6e3ee(void)

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



// ===== continuation @ rva 8e6e793 (image 188e6e793) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6e793(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_1811c50b8)();
  return;
}



// ===== continuation @ rva 8e6e72d (image 188e6e72d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6e72d(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c55c8)();
  return;
}



// ===== continuation @ rva 8e6f2b5 (image 188e6f2b5) =====

void FUN_188e6f2b5(void)

{
  return;
}



// ===== continuation @ rva 8e6ef75 (image 188e6ef75) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e6ef75(void)

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



// ===== continuation @ rva 8e6f076 (image 188e6f076) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6f076(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1811c5528)();
  return;
}



// ===== continuation @ rva 8e6f010 (image 188e6f010) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6f010(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c55b8)();
  return;
}



// ===== continuation @ rva 8e6f172 (image 188e6f172) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6f172(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c5108)();
  return;
}



// ===== continuation @ rva 8e6f2c4 (image 188e6f2c4) =====

void FUN_188e6f2c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e6ecea (image 188e6ecea) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6ecea(void)

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



// ===== continuation @ rva 8e6f281 (image 188e6f281) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6f281(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c5288)();
  return;
}



// ===== continuation @ rva 8e6e7ad (image 188e6e7ad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6e7ad(void)

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



// ===== continuation @ rva 8e6ec5c (image 188e6ec5c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e6ec5c(void)

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



// ===== continuation @ rva 8e713d6 (image 188e713d6) =====

void FUN_188e713d6(void)

{
  return;
}



// ===== continuation @ rva 8e6f43c (image 188e6f43c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6f43c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1811c5eb8)();
  return;
}



// ===== continuation @ rva 8e70bf3 (image 188e70bf3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e70bf3(void)

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



// ===== continuation @ rva 8e709e7 (image 188e709e7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e709e7(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c5748)();
  return;
}



// ===== continuation @ rva 8e71f7a (image 188e71f7a) =====

void FUN_188e71f7a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e71a27 (image 188e71a27) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e71a27(void)

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



// ===== continuation @ rva 8e71e03 (image 188e71e03) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e71e03(void)

{
  (*_DAT_1811c64b8)();
  return;
}



// ===== continuation @ rva 8e71f14 (image 188e71f14) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e71f14(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1811c5ea8)();
  return;
}



// ===== continuation @ rva 8e70b62 (image 188e70b62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e70b62(void)

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



// ===== continuation @ rva 8e7017c (image 188e7017c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e7017c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1811c5c88)();
  return;
}



// ===== continuation @ rva 8e6fa4a (image 188e6fa4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e6fa4a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c5e98)();
  return;
}



// ===== continuation @ rva 8e70951 (image 188e70951) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e70951(void)

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



// ===== continuation @ rva 8e71e0e (image 188e71e0e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e71e0e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1811c63c8)();
  return;
}



// ===== continuation @ rva 8e705f4 (image 188e705f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e705f4(void)

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



// ===== continuation @ rva 8d7fb66 (image 188d7fb66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fb66(void)

{
  FUN_190dd72e0();
  (*_DAT_181187188)();
  return;
}



// ===== continuation @ rva 8d7faf3 (image 188d7faf3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7faf3(void)

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



// ===== continuation @ rva 8d7fc3e (image 188d7fc3e) =====

void FUN_188d7fc3e(void)

{
  return;
}



// ===== continuation @ rva 8d7fc06 (image 188d7fc06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fc06(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187198)();
  return;
}



// ===== continuation @ rva 8d7fc46 (image 188d7fc46) =====

void FUN_188d7fc46(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d7fb51 (image 188d7fb51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7fb51(void)

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



// ===== continuation @ rva 8d7fbe2 (image 188d7fbe2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7fbe2(void)

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



// ===== continuation @ rva 8d7fbaf (image 188d7fbaf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fbaf(void)

{
  FUN_190dd9df0();
  (*_DAT_181187168)();
  return;
}



// ===== continuation @ rva 8d7fb8e (image 188d7fb8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7fb8e(void)

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



// ===== continuation @ rva 8d7fc2d (image 188d7fc2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fc2d(void)

{
  (*_DAT_1811871c8)();
  return;
}



// ===== continuation @ rva 8d810f6 (image 188d810f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d810f6(void)

{
  FUN_190dd72e0();
  (*_DAT_181187ab8)();
  return;
}



// ===== continuation @ rva 8d81083 (image 188d81083) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81083(void)

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



// ===== continuation @ rva 8d811d6 (image 188d811d6) =====

void FUN_188d811d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d811ce (image 188d811ce) =====

void FUN_188d811ce(void)

{
  return;
}



// ===== continuation @ rva 8d81172 (image 188d81172) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81172(void)

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



// ===== continuation @ rva 8d810e1 (image 188d810e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d810e1(void)

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



// ===== continuation @ rva 8d8111e (image 188d8111e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d8111e(void)

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



// ===== continuation @ rva 8d8113f (image 188d8113f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8113f(void)

{
  FUN_190dd9df0();
  (*_DAT_181187a88)();
  return;
}



// ===== continuation @ rva 8d810bc (image 188d810bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d810bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187aa8)();
  return;
}



// ===== continuation @ rva 8e316a6 (image 188e316a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e316a6(void)

{
  FUN_190dd72e0();
  (*_DAT_1811bae08)();
  return;
}



// ===== continuation @ rva 8e31633 (image 188e31633) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e31633(void)

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



// ===== continuation @ rva 8e31786 (image 188e31786) =====

void FUN_188e31786(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e3176d (image 188e3176d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e3176d(void)

{
  (*_DAT_1811bada8)();
  return;
}



// ===== continuation @ rva 8e3177e (image 188e3177e) =====

void FUN_188e3177e(void)

{
  return;
}



// ===== continuation @ rva 8e3166c (image 188e3166c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e3166c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811bade8)();
  return;
}



// ===== continuation @ rva 8e31746 (image 188e31746) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e31746(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811bad98)();
  return;
}



// ===== continuation @ rva 8e31691 (image 188e31691) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e31691(void)

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



// ===== continuation @ rva 8e316ef (image 188e316ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e316ef(void)

{
  FUN_190dd9df0();
  (*_DAT_1811bae18)();
  return;
}



// ===== continuation @ rva 8e90006 (image 188e90006) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90006(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c9948)();
  return;
}



// ===== continuation @ rva 8e8ff93 (image 188e8ff93) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e8ff93(void)

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



// ===== continuation @ rva 8e900de (image 188e900de) =====

void FUN_188e900de(void)

{
  return;
}



// ===== continuation @ rva 8e900e6 (image 188e900e6) =====

void FUN_188e900e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e90082 (image 188e90082) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e90082(void)

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



// ===== continuation @ rva 8e900a6 (image 188e900a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e900a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c9918)();
  return;
}



// ===== continuation @ rva 8e8ffcc (image 188e8ffcc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e8ffcc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c9928)();
  return;
}



// ===== continuation @ rva 8e900cd (image 188e900cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e900cd(void)

{
  (*_DAT_1811c9908)();
  return;
}



// ===== continuation @ rva 8e8fff1 (image 188e8fff1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e8fff1(void)

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



// ===== continuation @ rva 8e90206 (image 188e90206) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90206(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c9a18)();
  return;
}



// ===== continuation @ rva 8e90193 (image 188e90193) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90193(void)

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



// ===== continuation @ rva 8e902e6 (image 188e902e6) =====

void FUN_188e902e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e901f1 (image 188e901f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e901f1(void)

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



// ===== continuation @ rva 8e902de (image 188e902de) =====

void FUN_188e902de(void)

{
  return;
}



// ===== continuation @ rva 8e901cc (image 188e901cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e901cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c99a8)();
  return;
}



// ===== continuation @ rva 8e902a6 (image 188e902a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e902a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c9a08)();
  return;
}



// ===== continuation @ rva 8e90282 (image 188e90282) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e90282(void)

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



// ===== continuation @ rva 8e902cd (image 188e902cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e902cd(void)

{
  (*_DAT_1811c99e8)();
  return;
}



// ===== continuation @ rva 8e90406 (image 188e90406) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90406(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c9b08)();
  return;
}



// ===== continuation @ rva 8e90393 (image 188e90393) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90393(void)

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



// ===== continuation @ rva 8e904de (image 188e904de) =====

void FUN_188e904de(void)

{
  return;
}



// ===== continuation @ rva 8e9044f (image 188e9044f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e9044f(void)

{
  FUN_190dd9df0();
  (*_DAT_1811c9ab8)();
  return;
}



// ===== continuation @ rva 8e904e6 (image 188e904e6) =====

void FUN_188e904e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e904a6 (image 188e904a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e904a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c9ae8)();
  return;
}



// ===== continuation @ rva 8e90482 (image 188e90482) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e90482(void)

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



// ===== continuation @ rva 8e903cc (image 188e903cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e903cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c9af8)();
  return;
}



// ===== continuation @ rva 8e904cd (image 188e904cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e904cd(void)

{
  (*_DAT_1811c9a98)();
  return;
}



// ===== continuation @ rva 8e90606 (image 188e90606) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90606(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c9b68)();
  return;
}



// ===== continuation @ rva 8e90593 (image 188e90593) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90593(void)

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



// ===== continuation @ rva 8e906e6 (image 188e906e6) =====

void FUN_188e906e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e9062e (image 188e9062e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e9062e(void)

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



// ===== continuation @ rva 8e906de (image 188e906de) =====

void FUN_188e906de(void)

{
  return;
}



// ===== continuation @ rva 8e905cc (image 188e905cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e905cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811c9b98)();
  return;
}



// ===== continuation @ rva 8e905f1 (image 188e905f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e905f1(void)

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



// ===== continuation @ rva 8e9064f (image 188e9064f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e9064f(void)

{
  FUN_190dd9df0();
  (*_DAT_1811c9bb8)();
  return;
}



// ===== continuation @ rva 8e90682 (image 188e90682) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e90682(void)

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



// ===== continuation @ rva 8e90806 (image 188e90806) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90806(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c9c98)();
  return;
}



// ===== continuation @ rva 8e90793 (image 188e90793) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90793(void)

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



// ===== continuation @ rva 8e908e6 (image 188e908e6) =====

void FUN_188e908e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e90882 (image 188e90882) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e90882(void)

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



// ===== continuation @ rva 8e908de (image 188e908de) =====

void FUN_188e908de(void)

{
  return;
}



// ===== continuation @ rva 8e9084f (image 188e9084f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e9084f(void)

{
  FUN_190dd9df0();
  (*_DAT_1811c9c48)();
  return;
}



// ===== continuation @ rva 8e908cd (image 188e908cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e908cd(void)

{
  (*_DAT_1811c9c78)();
  return;
}



// ===== continuation @ rva 8e9082e (image 188e9082e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e9082e(void)

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



// ===== continuation @ rva 8e907f1 (image 188e907f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e907f1(void)

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



// ===== continuation @ rva 8e90a06 (image 188e90a06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90a06(void)

{
  FUN_190dd72e0();
  (*_DAT_1811c9d58)();
  return;
}



// ===== continuation @ rva 8e90993 (image 188e90993) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90993(void)

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



// ===== continuation @ rva 8e90ae6 (image 188e90ae6) =====

void FUN_188e90ae6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8e90acd (image 188e90acd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90acd(void)

{
  (*_DAT_1811c9d48)();
  return;
}



// ===== continuation @ rva 8e90ade (image 188e90ade) =====

void FUN_188e90ade(void)

{
  return;
}



// ===== continuation @ rva 8e90a4f (image 188e90a4f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e90a4f(void)

{
  FUN_190dd9df0();
  (*_DAT_1811c9d88)();
  return;
}



// ===== continuation @ rva 8e90a2e (image 188e90a2e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e90a2e(void)

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



// ===== continuation @ rva 8e909f1 (image 188e909f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e909f1(void)

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



// ===== continuation @ rva 8e90a82 (image 188e90a82) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e90a82(void)

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



// ===== continuation @ rva 8d7fd66 (image 188d7fd66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fd66(void)

{
  FUN_190dd72e0();
  (*_DAT_181187238)();
  return;
}



// ===== continuation @ rva 8d7fcf3 (image 188d7fcf3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fcf3(void)

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



// ===== continuation @ rva 8d7fe46 (image 188d7fe46) =====

void FUN_188d7fe46(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d7fe3e (image 188d7fe3e) =====

void FUN_188d7fe3e(void)

{
  return;
}



// ===== continuation @ rva 8d7fd8e (image 188d7fd8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7fd8e(void)

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



// ===== continuation @ rva 8d7fde2 (image 188d7fde2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7fde2(void)

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



// ===== continuation @ rva 8d7fe2d (image 188d7fe2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fe2d(void)

{
  (*_DAT_181187228)();
  return;
}



// ===== continuation @ rva 8d7fe06 (image 188d7fe06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fe06(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187258)();
  return;
}



// ===== continuation @ rva 8d7fd2c (image 188d7fd2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fd2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811872a8)();
  return;
}



// ===== continuation @ rva 8d7ff66 (image 188d7ff66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7ff66(void)

{
  FUN_190dd72e0();
  (*_DAT_181187308)();
  return;
}



// ===== continuation @ rva 8d7fef3 (image 188d7fef3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7fef3(void)

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



// ===== continuation @ rva 8d80046 (image 188d80046) =====

void FUN_188d80046(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d7ff8e (image 188d7ff8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7ff8e(void)

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



// ===== continuation @ rva 8d7ffe2 (image 188d7ffe2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7ffe2(void)

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



// ===== continuation @ rva 8d8002d (image 188d8002d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8002d(void)

{
  (*_DAT_181187378)();
  return;
}



// ===== continuation @ rva 8d8003e (image 188d8003e) =====

void FUN_188d8003e(void)

{
  return;
}



// ===== continuation @ rva 8d7ff2c (image 188d7ff2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7ff2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187358)();
  return;
}



// ===== continuation @ rva 8d7ff51 (image 188d7ff51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7ff51(void)

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



// ===== continuation @ rva 8d7ffaf (image 188d7ffaf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7ffaf(void)

{
  FUN_190dd9df0();
  (*_DAT_181187318)();
  return;
}



// ===== continuation @ rva 8d80166 (image 188d80166) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80166(void)

{
  FUN_190dd72e0();
  (*_DAT_181187438)();
  return;
}



// ===== continuation @ rva 8d800f3 (image 188d800f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d800f3(void)

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



// ===== continuation @ rva 8d8023e (image 188d8023e) =====

void FUN_188d8023e(void)

{
  return;
}



// ===== continuation @ rva 8d80206 (image 188d80206) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80206(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187468)();
  return;
}



// ===== continuation @ rva 8d8012c (image 188d8012c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8012c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187418)();
  return;
}



// ===== continuation @ rva 8d80246 (image 188d80246) =====

void FUN_188d80246(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d80151 (image 188d80151) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80151(void)

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



// ===== continuation @ rva 8d801e2 (image 188d801e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d801e2(void)

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



// ===== continuation @ rva 8d8018e (image 188d8018e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d8018e(void)

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



// ===== continuation @ rva 8d801af (image 188d801af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d801af(void)

{
  FUN_190dd9df0();
  (*_DAT_181187428)();
  return;
}



// ===== continuation @ rva 8d8036b (image 188d8036b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8036b(void)

{
  FUN_190dd72e0();
  (*_DAT_1811874d8)();
  return;
}



// ===== continuation @ rva 8d802f8 (image 188d802f8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d802f8(void)

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



// ===== continuation @ rva 8d80432 (image 188d80432) =====

void FUN_188d80432(void)

{
  return;
}



// ===== continuation @ rva 8d8043c (image 188d8043c) =====

void FUN_188d8043c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d80393 (image 188d80393) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80393(void)

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



// ===== continuation @ rva 8d8040b (image 188d8040b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8040b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187508)();
  return;
}



// ===== continuation @ rva 8d80331 (image 188d80331) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80331(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187538)();
  return;
}



// ===== continuation @ rva 8d803b4 (image 188d803b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d803b4(void)

{
  FUN_190dd9df0();
  (*_DAT_181187528)();
  return;
}



// ===== continuation @ rva 8d803e7 (image 188d803e7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d803e7(void)

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



// ===== continuation @ rva 8d8055b (image 188d8055b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8055b(void)

{
  FUN_190dd72e0();
  (*_DAT_1811875f8)();
  return;
}



// ===== continuation @ rva 8d804e8 (image 188d804e8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d804e8(void)

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



// ===== continuation @ rva 8d80622 (image 188d80622) =====

void FUN_188d80622(void)

{
  return;
}



// ===== continuation @ rva 8d805a4 (image 188d805a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d805a4(void)

{
  FUN_190dd9df0();
  (*_DAT_181187608)();
  return;
}



// ===== continuation @ rva 8d8062c (image 188d8062c) =====

void FUN_188d8062c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d80546 (image 188d80546) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80546(void)

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



// ===== continuation @ rva 8d805fb (image 188d805fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d805fb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811875a8)();
  return;
}



// ===== continuation @ rva 8d80521 (image 188d80521) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80521(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811875b8)();
  return;
}



// ===== continuation @ rva 8d80583 (image 188d80583) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80583(void)

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



// ===== continuation @ rva 8d8074b (image 188d8074b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8074b(void)

{
  FUN_190dd72e0();
  (*_DAT_181187678)();
  return;
}



// ===== continuation @ rva 8d806d8 (image 188d806d8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d806d8(void)

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



// ===== continuation @ rva 8d8081c (image 188d8081c) =====

void FUN_188d8081c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d80812 (image 188d80812) =====

void FUN_188d80812(void)

{
  return;
}



// ===== continuation @ rva 8d80773 (image 188d80773) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80773(void)

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



// ===== continuation @ rva 8d80711 (image 188d80711) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80711(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811876b8)();
  return;
}



// ===== continuation @ rva 8d807eb (image 188d807eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d807eb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187668)();
  return;
}



// ===== continuation @ rva 8d80736 (image 188d80736) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80736(void)

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



// ===== continuation @ rva 8d80794 (image 188d80794) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80794(void)

{
  FUN_190dd9df0();
  (*_DAT_1811876d8)();
  return;
}



// ===== continuation @ rva 8d8093b (image 188d8093b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8093b(void)

{
  FUN_190dd72e0();
  (*_DAT_181187788)();
  return;
}



// ===== continuation @ rva 8d808c8 (image 188d808c8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d808c8(void)

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



// ===== continuation @ rva 8d80a0c (image 188d80a0c) =====

void FUN_188d80a0c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d809b7 (image 188d809b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d809b7(void)

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



// ===== continuation @ rva 8d80a02 (image 188d80a02) =====

void FUN_188d80a02(void)

{
  return;
}



// ===== continuation @ rva 8d80984 (image 188d80984) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80984(void)

{
  FUN_190dd9df0();
  (*_DAT_181187738)();
  return;
}



// ===== continuation @ rva 8d80901 (image 188d80901) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80901(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187778)();
  return;
}



// ===== continuation @ rva 8d80926 (image 188d80926) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80926(void)

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



// ===== continuation @ rva 8d80963 (image 188d80963) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80963(void)

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



// ===== continuation @ rva 8d809db (image 188d809db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d809db(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811877a8)();
  return;
}



// ===== continuation @ rva 8d80b2b (image 188d80b2b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80b2b(void)

{
  FUN_190dd72e0();
  (*_DAT_181187838)();
  return;
}



// ===== continuation @ rva 8d80ab8 (image 188d80ab8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80ab8(void)

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



// ===== continuation @ rva 8d80bf2 (image 188d80bf2) =====

void FUN_188d80bf2(void)

{
  return;
}



// ===== continuation @ rva 8d80af1 (image 188d80af1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80af1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187868)();
  return;
}



// ===== continuation @ rva 8d80bfc (image 188d80bfc) =====

void FUN_188d80bfc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d80bcb (image 188d80bcb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80bcb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187818)();
  return;
}



// ===== continuation @ rva 8d80b53 (image 188d80b53) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80b53(void)

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



// ===== continuation @ rva 8d80ba7 (image 188d80ba7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80ba7(void)

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



// ===== continuation @ rva 8d80b74 (image 188d80b74) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80b74(void)

{
  FUN_190dd9df0();
  (*_DAT_181187848)();
  return;
}



// ===== continuation @ rva 8d80b16 (image 188d80b16) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80b16(void)

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



// ===== continuation @ rva 8d80d1b (image 188d80d1b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80d1b(void)

{
  FUN_190dd72e0();
  (*_DAT_181187928)();
  return;
}



// ===== continuation @ rva 8d80ca8 (image 188d80ca8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80ca8(void)

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



// ===== continuation @ rva 8d80dec (image 188d80dec) =====

void FUN_188d80dec(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d80de2 (image 188d80de2) =====

void FUN_188d80de2(void)

{
  return;
}



// ===== continuation @ rva 8d80d64 (image 188d80d64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80d64(void)

{
  FUN_190dd9df0();
  (*_DAT_1811878f8)();
  return;
}



// ===== continuation @ rva 8d80d97 (image 188d80d97) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80d97(void)

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



// ===== continuation @ rva 8d80dbb (image 188d80dbb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80dbb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811878d8)();
  return;
}



// ===== continuation @ rva 8d80d43 (image 188d80d43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80d43(void)

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



// ===== continuation @ rva 8d80d06 (image 188d80d06) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80d06(void)

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



// ===== continuation @ rva 8d80f0b (image 188d80f0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80f0b(void)

{
  FUN_190dd72e0();
  (*_DAT_1811879a8)();
  return;
}



// ===== continuation @ rva 8d80e98 (image 188d80e98) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80e98(void)

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



// ===== continuation @ rva 8d80fdc (image 188d80fdc) =====

void FUN_188d80fdc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d80f33 (image 188d80f33) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80f33(void)

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



// ===== continuation @ rva 8d80fd2 (image 188d80fd2) =====

void FUN_188d80fd2(void)

{
  return;
}



// ===== continuation @ rva 8d80f54 (image 188d80f54) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80f54(void)

{
  FUN_190dd9df0();
  (*_DAT_181187a18)();
  return;
}



// ===== continuation @ rva 8d80ed1 (image 188d80ed1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80ed1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811879f8)();
  return;
}



// ===== continuation @ rva 8d80ef6 (image 188d80ef6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d80ef6(void)

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



// ===== continuation @ rva 8d80fab (image 188d80fab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d80fab(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1811879c8)();
  return;
}



// ===== continuation @ rva 8d812fb (image 188d812fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d812fb(void)

{
  FUN_190dd72e0();
  (*_DAT_181187b58)();
  return;
}



// ===== continuation @ rva 8d81288 (image 188d81288) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81288(void)

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



// ===== continuation @ rva 8d813cc (image 188d813cc) =====

void FUN_188d813cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d81323 (image 188d81323) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81323(void)

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



// ===== continuation @ rva 8d812e6 (image 188d812e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d812e6(void)

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



// ===== continuation @ rva 8d813c2 (image 188d813c2) =====

void FUN_188d813c2(void)

{
  return;
}



// ===== continuation @ rva 8d812c1 (image 188d812c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d812c1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181187b68)();
  return;
}



// ===== continuation @ rva 8d81344 (image 188d81344) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81344(void)

{
  FUN_190dd9df0();
  (*_DAT_181187bb8)();
  return;
}



// ===== continuation @ rva 8d81377 (image 188d81377) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d81377(void)

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



// ===== continuation @ rva 8d86aca (image 188d86aca) =====

void FUN_188d86aca(void)

{
  return;
}



// ===== continuation @ rva 8d81ce0 (image 188d81ce0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d81ce0(void)

{
  FUN_190ddce00();
  (*_DAT_1811882b8)();
  return;
}



// ===== continuation @ rva 8d89356 (image 188d89356) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d89356(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_18118b288)();
  return;
}



// ===== continuation @ rva 8d88edc (image 188d88edc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d88edc(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18118abd8)();
  return;
}



// ===== continuation @ rva 8d8e10c (image 188d8e10c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8e10c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181189328)();
  return;
}



// ===== continuation @ rva 8d8dea8 (image 188d8dea8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8dea8(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181188058)();
  return;
}



// ===== continuation @ rva 8d8cf07 (image 188d8cf07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8cf07(void)

{
  (*_DAT_18118a068)();
  return;
}



// ===== continuation @ rva 8d857f8 (image 188d857f8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d857f8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  (*_DAT_181188f08)();
  return;
}



// ===== continuation @ rva 8d857c4 (image 188d857c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d857c4(void)

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



// ===== continuation @ rva 8d8f947 (image 188d8f947) =====

void FUN_188d8f947(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d8c5e1 (image 188d8c5e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d8c5e1(void)

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



// ===== continuation @ rva 8d8a493 (image 188d8a493) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8a493(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_18118c078)();
  return;
}



// ===== continuation @ rva 8d8a28e (image 188d8a28e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8a28e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18118bc88)();
  return;
}



// ===== continuation @ rva 8d88604 (image 188d88604) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d88604(void)

{
  (*_DAT_18118bf78)();
  return;
}



// ===== continuation @ rva 8d88554 (image 188d88554) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d88554(void)

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



// ===== continuation @ rva 8d7f965 (image 188d7f965) =====

void FUN_188d7f965(void)

{
  return;
}



// ===== continuation @ rva 8d4d71b (image 188d4d71b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d4d71b(void)

{
  FUN_190ddce00();
  (*_DAT_18117ce38)();
  return;
}



// ===== continuation @ rva 8d735b2 (image 188d735b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d735b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18117dc28)();
  return;
}



// ===== continuation @ rva 8d7f9d1 (image 188d7f9d1) =====

void FUN_188d7f9d1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8d6af18 (image 188d6af18) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188d6af6e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188d6af18(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8d5add0 (image 188d5add0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d5add0(void)

{
  FUN_190de3220();
  (*_DAT_18117ac08)();
  return;
}



// ===== continuation @ rva 8d7680c (image 188d7680c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7680c(void)

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



// ===== continuation @ rva 8d7f7f3 (image 188d7f7f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7f7f3(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x120))(in_stack_00000040);
  (*_DAT_181179e38)();
  return;
}



// ===== continuation @ rva 8d7f643 (image 188d7f643) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188d7f643(void)

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



// ===== continuation @ rva 8d7a45b (image 188d7a45b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d7a45b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_184117d50();
  (*_DAT_18117cf68)();
  return;
}



// ===== continuation @ rva 8d62acd (image 188d62acd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188d62aeb */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188d62acd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8dfd6e5 (image 188dfd6e5) =====

void FUN_188dfd6e5(void)

{
  return;
}



// ===== continuation @ rva 8d8fc36 (image 188d8fc36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d8fc36(void)

{
  FUN_190ddce00();
  (*_DAT_181192728)();
  return;
}



// ===== continuation @ rva 8dfd751 (image 188dfd751) =====

void FUN_188dfd751(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8de2150 (image 188de2150) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188de2179 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188de2150(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8dfd6d2 (image 188dfd6d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188dfd6d2(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x68))();
  (*_DAT_1811a0f18)();
  return;
}



// ===== continuation @ rva 8ddb26a (image 188ddb26a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188ddb293 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188ddb26a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8dd21fe (image 188dd21fe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188dd2227 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188dd21fe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8debc81 (image 188debc81) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188debca5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188debc81(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8ddc0c4 (image 188ddc0c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188ddc0c4(void)

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



// ===== continuation @ rva 8df8fba (image 188df8fba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188df8fba(void)

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



// ===== continuation @ rva 8d9e3f7 (image 188d9e3f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d9e3f7(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000040;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18118e208)();
  return;
}



// ===== continuation @ rva 8d98642 (image 188d98642) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188d98642(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000040;
  undefined8 in_stack_000000c0;
  
  (**(code **)(in_RAX + 0x538))(in_stack_00000040,&UNK_182f6fe10);
  FUN_184117d80(in_stack_00000040,in_stack_000000c0);
  (*_DAT_18119e6c8)();
  return;
}



// ===== continuation @ rva 8e3141c (image 188e3141c) =====

void FUN_188e3141c(void)

{
  return;
}



// ===== continuation @ rva 8dfd971 (image 188dfd971) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188dfd971(void)

{
  FUN_190ddce00();
  (*_DAT_1811afd48)();
  return;
}



// ===== continuation @ rva 8e0a36b (image 188e0a36b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e0a36b(void)

{
  FUN_190de3220();
  (*_DAT_1811ad4f8)();
  return;
}



// ===== continuation @ rva 8e1cc7e (image 188e1cc7e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e1cc7e(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1811afdf8)();
  return;
}



// ===== continuation @ rva 8e00a18 (image 188e00a18) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e00a18(void)

{
  FUN_190de3220();
  (*_DAT_1811b0508)();
  return;
}



// ===== continuation @ rva 8e0dcdf (image 188e0dcdf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e0dcdf(void)

{
  FUN_190dd72e0();
  (*_DAT_1811ad938)();
  return;
}



// ===== continuation @ rva 8e31414 (image 188e31414) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e31414(void)

{
  (*_DAT_1811b0768)();
  return;
}



// ===== continuation @ rva 8e28837 (image 188e28837) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188e28837(void)

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



// ===== continuation @ rva 8e2fcc4 (image 188e2fcc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e2fcc4(void)

{
  FUN_190ddce00();
  (*_DAT_1811aefd8)();
  return;
}



// ===== continuation @ rva 8e1fa46 (image 188e1fa46) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188e1fa69 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188e1fa46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



