// ===== continuation @ rva 54bae60 (image 1854bae60) =====

void FUN_1854bae60(void)

{
  return;
}



// ===== continuation @ rva 54b4dcf (image 1854b4dcf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b4dcf(void)

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



// ===== continuation @ rva 54b5361 (image 1854b5361) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b5361(void)

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



// ===== continuation @ rva 54b6e3a (image 1854b6e3a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b6e3a(void)

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



// ===== continuation @ rva 54b6c36 (image 1854b6c36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b6c36(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x580))();
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



// ===== continuation @ rva 54b6bf9 (image 1854b6bf9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b6bf9(void)

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



// ===== continuation @ rva 54b7769 (image 1854b7769) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b7769(uint param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  uint uVar6;
  uint uVar7;
  
  uVar2 = (ulonglong)param_1 ^ 0x84222325;
  uVar2 = (~_DAT_1830d2ef0 + 2) *
          ((_DAT_1830d2e30 ^ uVar2) + (ulonglong)((uint)_DAT_1830d2e30 & (uint)uVar2) * 2);
  uVar3 = (uVar2 | _DAT_1830d2ef8) + (uVar2 & _DAT_1830d2ef8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar2 = (ulonglong)param_1 ^ 0x84222324;
  _DAT_1830d2e40 = func_0x0001854bb040((uVar2 | uVar3) + (ulonglong)((uint)uVar2 & (uint)uVar3));
  uVar6 = param_1 & unaff_XMM6_Da;
  uVar7 = param_1 ^ unaff_XMM6_Da;
  lVar5 = ((ulonglong)param_1 * (ulonglong)_DAT_1804f41d0 << 0x20) +
          (ulonglong)param_1 * (ulonglong)_DAT_1804f41c0;
  lVar4 = (ulonglong)(param_1 ^ unaff_XMM8_Da) * (ulonglong)_DAT_1804f4240;
  uVar2 = _DAT_1830d2e40 >> 1 | _DAT_1830d2e40;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_1830d2e40;
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
  _DAT_1830d2ed0 =
       ((((ulonglong)uVar7 * (ulonglong)_DAT_1804f41b0 << 0x20) +
         (ulonglong)uVar7 * (ulonglong)_DAT_1804f41a0 +
         ((ulonglong)(param_1 | unaff_XMM6_Da) * (ulonglong)_DAT_1804f4190 << 0x20) +
         (ulonglong)(param_1 | unaff_XMM6_Da) * (ulonglong)_DAT_1804f4180 +
         ((ulonglong)uVar6 * (ulonglong)_DAT_1804f4170 << 0x20 |
         (ulonglong)uVar6 * (ulonglong)_DAT_1804f4160) +
         ((ulonglong)param_1 * (ulonglong)_DAT_1804f4150 << 0x20) +
         (ulonglong)param_1 * (ulonglong)_DAT_1804f4140 + lVar5) -
       (((ulonglong)(param_1 ^ unaff_XMM8_Da) * (ulonglong)_DAT_1804f4250 + _DAT_1804f4260 << 0x20)
        + lVar4 + ((ulonglong)uVar7 * (ulonglong)_DAT_1804f4230 << 0x20) +
                  (ulonglong)uVar7 * (ulonglong)_DAT_1804f4220 +
        ((ulonglong)uVar6 * (ulonglong)_DAT_1804f4210 << 0x20 |
        (ulonglong)uVar6 * (ulonglong)_DAT_1804f4200) +
        ((ulonglong)param_1 * (ulonglong)_DAT_1804f41f0 << 0x20) +
        (ulonglong)param_1 * (ulonglong)_DAT_1804f41e0 + lVar5)) + 0xc4354eb7c768095a;
  _DAT_1830d2ec0 = _DAT_1830d2ec8 ^ uVar3 ^ _DAT_1830d2ed0;
  _DAT_1830d2e80 = (_DAT_1830d2e80 ^ uVar3) + _DAT_1830d2ed0 ^ 0x278bcdbb6e466057;
  _DAT_1830d2e38 = (_DAT_1830d2e38 * -0x646a51cc01e7098b ^ _DAT_1830d2e80) + uVar3;
  _DAT_1830d2d48 = _DAT_1830d2e38 ^ _DAT_1830d2e80;
  _DAT_1830d2ed8 = _DAT_1830d2d08 ^ _DAT_1830d2ed0;
  _DAT_1830d2ed0 = _DAT_1830d2ed0 & 0xffffffff;
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



// ===== continuation @ rva 54babb8 (image 1854babb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854babb8(void)

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



// ===== continuation @ rva 54b5055 (image 1854b5055) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b5055(void)

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



// ===== continuation @ rva 54804eb (image 1854804eb) =====

void FUN_1854804eb(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0xa0) = uVar1;
  *(undefined8 *)(unaff_RBP + 0xa8) = *(undefined8 *)(unaff_RBP + 0xa0);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x000185480524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804eb0d0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 5480496 (image 185480496) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001854804cd */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185480496(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5496dea (image 185496dea) =====

void FUN_185496dea(void)

{
  return;
}



// ===== continuation @ rva 5496bb0 (image 185496bb0) =====

undefined8 FUN_185496bb0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 5496f42 (image 185496f42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185496f42(longlong param_1)

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



// ===== continuation @ rva 5493c82 (image 185493c82) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185493c82(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  longlong unaff_R12;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  
  *(undefined4 *)(unaff_RBP + 8) = unaff_EDI;
  *(int *)(unaff_RBP + 0x70) = unaff_ESI << 6;
  *(bool *)(unaff_RBP + 0x60) = *(longlong *)(unaff_RBP + -0x10) == 0;
  _DAT_1830d1980 = func_0x0001854a9b90(_DAT_1830d1700 + 0xfffbff15b2ffe7ff ^ 0xe5);
  uVar3 = _DAT_1830d1980 << 0x20 | _DAT_1830d1980 >> 0x20;
  _DAT_1830d16d0 = (_DAT_1830d16d0 ^ uVar3) + 0x720a276a ^ 0x52d77f86227f1f67;
  _DAT_1830d1a78 = (_DAT_1830d1a78 * 0x209e2f9623220469 ^ _DAT_1830d16d0) + uVar3;
  _DAT_1830d18c8 = _DAT_1830d1a78 ^ _DAT_1830d16d0;
  _DAT_1830d1588 = 0x720a276a;
  _DAT_1830d1528 = func_0x0001854a9b90(_DAT_1830d1908 ^ 0xfff38b2ffb424);
  _DAT_1830d1ab0 = _DAT_1830d1948 ^ _DAT_1830d1528 ^ 0x4df55c78;
  _DAT_1830d1610 = (_DAT_1830d1610 ^ _DAT_1830d1528) + 0x4df55c78 ^ 0x828b94b65d5b9acc;
  _DAT_1830d1588 = (_DAT_1830d1588 * -0x7bee82a31d15b23b ^ _DAT_1830d1610) + _DAT_1830d1528;
  _DAT_1830d1748 = _DAT_1830d1588 ^ _DAT_1830d1610;
  _DAT_1830d1980 = 0x4df55c78;
  uVar3 = (~_DAT_1830d16b8 + 0xb20aab49) *
          ((_DAT_1830d1870 ^ 0xc9d77f5d) + (ulonglong)((uint)_DAT_1830d1870 & 0xc9d77f5d) * 2);
  uVar3 = (uVar3 | _DAT_1830d1810) + (uVar3 & _DAT_1830d1810);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d16f0 = func_0x0001854a9b90((uVar3 | 0x7bddd415) + (ulonglong)((uint)uVar3 & 0x7bddd415))
  ;
  _DAT_1830d1720 = _DAT_1830d1790 ^ _DAT_1830d1998 ^ 0x1000007c0;
  _DAT_1830d18f0 = (_DAT_1830d18f0 ^ _DAT_1830d1998) + 0x1000007c0 ^ 0xfb091fb6e6074b27;
  _DAT_1830d1870 = (_DAT_1830d1870 * 0x61c1ba676b6891eb ^ _DAT_1830d18f0) + _DAT_1830d1998;
  _DAT_1830d1830 = _DAT_1830d1870 ^ _DAT_1830d18f0;
  _DAT_1830d1658 = 0x7c0;
  uVar3 = (_DAT_1830d1930 ^ _DAT_1804eb6e0) + _DAT_1830d1768 + unaff_R12;
  uVar11 = (_DAT_1830d1768 ^ _UNK_1804eb6e8) + _DAT_1830d1930 + 0xd9ea5270;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d1930 ^ _DAT_1804eb6e0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d1768 ^ _UNK_1804eb6e8;
  _DAT_1830d1730 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d1930 + 0xd9ea5270) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d1768 + unaff_R12));
  _DAT_1830d1970 =
       (_DAT_1830d1970 ^ _DAT_1830d1730 & 0xfffffffff0000000) - 0xd9ea5270 ^ 0xc955c2dab84e2114;
  _DAT_1830d1818 =
       (_DAT_1830d1818 * -0x5ba4c5fd49ae15dd ^ _DAT_1830d1970) +
       (_DAT_1830d1730 & 0xfffffffff0000000);
  _DAT_1830d1a50 = _DAT_1830d1818 ^ _DAT_1830d1970;
  _DAT_1830d1668 = 0x2615ad90;
  uVar3 = (_DAT_1830d18a8 ^ _DAT_1804eb6f0) + _DAT_1830d15c8 + 0x842224e5;
  uVar11 = (_DAT_1830d15c8 ^ _UNK_1804eb6f8) + _DAT_1830d18a8 + 0xd9ea5270;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d18a8 ^ _DAT_1804eb6f0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d15c8 ^ _UNK_1804eb6f8;
  _DAT_1830d1aa8 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d18a8 + 0xd9ea5270) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d15c8 + 0x842224e5));
  uVar3 = _DAT_1830d1aa8 ^ 0x7c0;
  _DAT_1830d1588 = _DAT_1830d1910 ^ uVar3 ^ 0xd9ea5a30;
  _DAT_1830d16e8 = (_DAT_1830d16e8 ^ uVar3) + 0xd9ea5a30 ^ 0x302b2fe9b5e30af0;
  _DAT_1830d1a40 = (_DAT_1830d1a40 * -0x18a2454eaef1a491 ^ _DAT_1830d16e8) + uVar3;
  _DAT_1830d1918 = _DAT_1830d1a40 ^ _DAT_1830d16e8;
  _DAT_1830d1718 = 0xd9ea5a30;
  uVar3 = (~_DAT_1830d19a8 + 0x2615ad91) *
          ((_DAT_1830d18c8 ^ 0x5dc87915) + (ulonglong)((uint)_DAT_1830d18c8 & 0x5dc87915) * 2);
  uVar3 = (uVar3 | _DAT_1830d16b8) + (uVar3 & _DAT_1830d16b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d1708 = func_0x0001854a9b90((uVar3 | 0x7bddd485) + (ulonglong)((uint)uVar3 & 0x7bddd485))
  ;
  uVar3 = _DAT_1830d1708 ^ 0xffffffb0;
  _DAT_1830d1938 = _DAT_1830d18e0 ^ uVar3 ^ 0x1000007c0;
  _DAT_1830d1670 = (_DAT_1830d1688 ^ uVar3) + 0x1000007c0 ^ 0x10f2a99326a0878e;
  _DAT_1830d1688 = (_DAT_1830d1688 * 0x2b76cf7897941095 ^ _DAT_1830d1670) + uVar3;
  _DAT_1830d1670 = _DAT_1830d1688 ^ _DAT_1830d1670;
  _DAT_1830d18f0 = 0x7c0;
  _DAT_1830d16c8 = func_0x0001854a9b90(_DAT_1830d1500 + 0x390037930085ff ^ 0x20);
  _DAT_1830d18c8 = (_DAT_1830d18c8 ^ _DAT_1830d16c8) - 0xdca81c58 ^ 0xd5efaa3b715a5157;
  _DAT_1830d1ab8 = (_DAT_1830d1ab8 * -0x5e7d9e7bcf72b591 ^ _DAT_1830d18c8) + _DAT_1830d16c8;
  _DAT_1830d1540 = _DAT_1830d1ab8 ^ _DAT_1830d18c8;
  _DAT_1830d1890 = 0x2357e3a8;
  uVar3 = (~_DAT_1830d1830 + 0xdca81c59) *
          ((_DAT_1830d1960 ^ 0x842224e5) + (ulonglong)((uint)_DAT_1830d1960 & 0x842224e5) * 2);
  uVar3 = (uVar3 | _DAT_1830d1898) + (uVar3 & _DAT_1830d1898);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d1698 = func_0x0001854a9b90((uVar3 | 0x588a38bd) + (ulonglong)((uint)uVar3 & 0x588a38bd))
  ;
  _DAT_1830d1920 = _DAT_1830d1558 ^ _DAT_1830d1698 ^ 0xdca82418;
  _DAT_1830d16e8 = (_DAT_1830d16e8 ^ _DAT_1830d1698) + 0xdca82418 ^ 0x3f4fcdfefd5724aa;
  _DAT_1830d16c8 = (_DAT_1830d16c8 * 0x730b815311f903f3 ^ _DAT_1830d16e8) + _DAT_1830d1698;
  _DAT_1830d16a0 = _DAT_1830d16c8 ^ _DAT_1830d16e8;
  _DAT_1830d1ad0 = 0xdca82418;
  uVar3 = (~_DAT_1830d1a20 + 0x720a276b) *
          ((_DAT_1830d1ad8 ^ 0x63df7fde) + (ulonglong)((uint)_DAT_1830d1ad8 & 0x63df7fde) * 2);
  uVar3 = (uVar3 | _DAT_1830d15d0) + (uVar3 & _DAT_1830d15d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d19d0 = func_0x0001854a9b90((uVar3 | 0x11d558b4) + (ulonglong)((uint)uVar3 & 0x11d558b4))
  ;
  uVar3 = _DAT_1830d19d0 >> 1 | _DAT_1830d19d0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1830d19d0;
  _DAT_1830d1508 = _DAT_1830d18a8 ^ uVar3 ^ 0x15a078465;
  _DAT_1830d17c0 = (_DAT_1830d17c0 ^ uVar3) + 0x15a078465 ^ 0x1112bf858eddbe1c;
  _DAT_1830d1a58 = (_DAT_1830d1a58 * -0x53a965ad5e970dc1 ^ _DAT_1830d17c0) + uVar3;
  _DAT_1830d1600 = _DAT_1830d1a58 ^ _DAT_1830d17c0;
  _DAT_1830d19e8 = _DAT_1830d1a70 ^ 0x15a078465;
  _DAT_1830d1910 = 0x5a078465;
  uVar3 = (~_DAT_1830d1a30 + 0x720a276b) *
          ((_DAT_1830d16d8 ^ 0x63df7fde) + (ulonglong)((uint)_DAT_1830d16d8 & 0x63df7fde) * 2);
  uVar3 = (uVar3 | _DAT_1830d1948) + (uVar3 & _DAT_1830d1948);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d1a38 = func_0x0001854a9b90((uVar3 | 0x11d558b4) + (ulonglong)((uint)uVar3 & 0x11d558b4))
  ;
  _DAT_1830d1aa8 = (_DAT_1830d1aa8 ^ _DAT_1830d1a38 ^ 0xe7fd5cfb) + 0x95f77b91 ^ 0xb5f48cd0f8ec356a;
  _DAT_1830d19e0 =
       (_DAT_1830d19e0 * -0x566f89905791d0fb ^ _DAT_1830d1aa8) + (_DAT_1830d1a38 ^ 0xe7fd5cfb);
  _DAT_1830d19a8 = _DAT_1830d19e0 ^ _DAT_1830d1aa8;
  _DAT_1830d19b0 = 0x95f77b91;
  _DAT_1830d16b0 = func_0x0001854a9b90(_DAT_1830d17b8 ^ 0xffa7fff16c00cc51);
  _DAT_1830d15b0 =
       (_DAT_1830d15b0 ^ _DAT_1830d16b0 & 0xffffffffffffffc0) + 0x6208046a ^ 0xe829e65cebbe48ee;
  _DAT_1830d1730 =
       (_DAT_1830d1730 * -0x16cb96883b9f67ab ^ _DAT_1830d15b0) +
       (_DAT_1830d16b0 & 0xffffffffffffffc0);
  _DAT_1830d1740 = _DAT_1830d1730 ^ _DAT_1830d15b0;
  _DAT_1830d15c0 = 0x6208046a;
  uVar3 = (_DAT_1830d1640 ^ _DAT_1804eb700) + _DAT_1830d1778 + 0x11d558b4;
  uVar11 = (_DAT_1830d1778 ^ _UNK_1804eb708) + _DAT_1830d1640 + 0xc41008d4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d1640 ^ _DAT_1804eb700;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d1778 ^ _UNK_1804eb708;
  _DAT_1830d1a88 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d1640 + 0xc41008d4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d1778 + 0x11d558b4));
  uVar3 = _DAT_1830d1a88 ^ 0x95f77b91;
  _DAT_1830d1ab8 = _DAT_1830d1938 ^ uVar3 ^ 0x15a078465;
  _DAT_1830d1ad8 = (_DAT_1830d1ad8 ^ uVar3) + 0x15a078465 ^ 0x459e456db821b7;
  _DAT_1830d1808 = (_DAT_1830d1808 * 0x3f96678c122838a3 ^ _DAT_1830d1ad8) + uVar3;
  _DAT_1830d1698 = _DAT_1830d1808 ^ _DAT_1830d1ad8;
  _DAT_1830d1998 = 0x5a078465;
  uVar3 = (_DAT_1830d1618 ^ _DAT_1804eb710) + _DAT_1830d1660 + 0xde25a740;
  uVar11 = (_DAT_1830d1660 ^ _UNK_1804eb718) + _DAT_1830d1618 + 0x5a078465;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d1618 ^ _DAT_1804eb710;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d1660 ^ _UNK_1804eb718;
  _DAT_1830d1ad8 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d1618 + 0x5a078465) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d1660 + 0xde25a740));
  _DAT_1830d1598 = _DAT_1830d1ad8 << 0xe | _DAT_1830d1ad8 >> 0x32;
  _DAT_1830d16c8 = _DAT_1830d16c8 ^ _DAT_1830d1598 ^ 0x14f67e4ab0c62daf;
  _DAT_1830d1688 = (_DAT_1830d1688 * -0x474400ece1230331 ^ _DAT_1830d16c8) + _DAT_1830d1598;
  _DAT_1830d1558 = _DAT_1830d1688 ^ _DAT_1830d16c8;
  _DAT_1830d1620 = 0;
  uVar3 = (_DAT_1830d16c0 ^ 0x842224e5) + _DAT_1830d1a20 + 0x842224e5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d16c0 ^ 0x842224e5;
  uVar11 = ((_DAT_1830d1a20 + _DAT_1830d16c0) * 0x2000 | _DAT_1830d1a20 + _DAT_1830d16c0 >> 0x33) ^
           _DAT_1830d1a20;
  _DAT_1830d17c8 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_1830d16c0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d1a20 + 0x842224e5));
  uVar3 = (ulonglong)
          (~((uint)(_DAT_1830d17c8 << 9) | (uint)((ulonglong)_DAT_1830d17c8 >> 0x37)) & 0x7c0);
  _DAT_1830d1aa0 = _DAT_1830d18e8 ^ uVar3 ^ 0x7c0;
  _DAT_1830d16a8 = (_DAT_1830d16a8 ^ uVar3) + 0x7c0 ^ 0x24711bc3c19f96e9;
  _DAT_1830d1a28 = (_DAT_1830d1a28 * 0x69dd754f795f8b6f ^ _DAT_1830d16a8) + uVar3;
  _DAT_1830d19f0 = _DAT_1830d1a28 ^ _DAT_1830d16a8;
  _DAT_1830d17b0 = 0x7c0;
  _DAT_1830d15e8 = func_0x0001854a9b90(_DAT_1830d1770 + 0xff7fff7be1001fff ^ 0xaa);
  _DAT_1830d1748 = (_DAT_1830d1748 ^ _DAT_1830d15e8) + 0x1802a304 ^ 0xd810571e706d66c2;
  _DAT_1830d1560 = (_DAT_1830d1560 * -0x2440d92684a9d6fb ^ _DAT_1830d1748) + _DAT_1830d15e8;
  _DAT_1830d1598 = _DAT_1830d1560 ^ _DAT_1830d1748;
  _DAT_1830d16f0 = 0x1802a304;
  uVar3 = (_DAT_1830d1900 ^ _DAT_1804eb720) + _DAT_1830d18d8 + 0x63df7fde;
  uVar11 = (_DAT_1830d18d8 ^ _UNK_1804eb728) + _DAT_1830d1900 + 0x1802a304;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d1900 ^ _DAT_1804eb720;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d18d8 ^ _UNK_1804eb728;
  _DAT_1830d18d0 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d1900 + 0x1802a304) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d18d8 + 0x63df7fde));
  _DAT_1830d1808 = _DAT_1830d1808 ^ _DAT_1830d18d0 ^ 0x69c30e586398be14;
  _DAT_1830d15b8 = (_DAT_1830d15b8 * -0x13a03e357c40a6dd ^ _DAT_1830d1808) + _DAT_1830d18d0;
  _DAT_1830d19a8 = _DAT_1830d15b8 ^ _DAT_1830d1808;
  _DAT_1830d17d0 = 0;
  uVar3 = ((_DAT_1830d1768 ^ 0x842224e5) + (ulonglong)((uint)_DAT_1830d1768 & 0x842224e5) * 2) *
          -_DAT_1830d1580;
  uVar3 = (uVar3 | _DAT_1830d1538) + (uVar3 & _DAT_1830d1538);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d1a48 = func_0x0001854a9b90((uVar3 | 0x842224e5) + (ulonglong)((uint)uVar3 & 0x842224e5))
  ;
  uVar3 = _DAT_1830d1a48 >> 1 | _DAT_1830d1a48;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1830d1a48;
  _DAT_1830d18e0 = _DAT_1830d1678 ^ uVar3 ^ 0x7c0;
  _DAT_1830d1818 = (_DAT_1830d1818 ^ uVar3) + 0x7c0 ^ 0x6b9acc423220869b;
  _DAT_1830d17e8 = (_DAT_1830d17e8 * -0x661fc7ad18b08699 ^ _DAT_1830d1818) + uVar3;
  _DAT_1830d1588 = _DAT_1830d17e8 ^ _DAT_1830d1818;
  _DAT_1830d1918 = 0x7c0;
  _DAT_1830d1820 = func_0x0001854a9b90(_DAT_1830d15e8 + 0xffe1007c23001dff ^ 0xa8);
  uVar3 = _DAT_1830d1820 & 0xffffffff80000000;
  uVar11 = uVar3 >> 1 | uVar3;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uVar3;
  _DAT_1830d1528 = _DAT_1830d1528 ^ uVar3 ^ 0xb9ee4af7751689bf;
  _DAT_1830d1500 = (_DAT_1830d1500 * 0x6475fb7797e811ad ^ _DAT_1830d1528) + uVar3;
  _DAT_1830d1580 = _DAT_1830d1500 ^ _DAT_1830d1528;
  _DAT_1830d15e0 = 0;
  uVar5 = *(uint *)(unaff_RBP + 0x70);
  auVar9._8_8_ = _UNK_180144c38;
  auVar9._0_8_ = (ulonglong)uVar5 ^ 0x84222325;
  auVar10 = pshufb(auVar9 ^ _DAT_1804eb730,_DAT_1800170c0);
  uVar11 = auVar10._8_8_ + auVar10._0_8_;
  uVar3 = uVar11 + _DAT_1830d1990;
  if (auVar10._4_4_ < 0) {
    uVar3 = _DAT_1830d1740 ^ uVar11;
  }
  _DAT_1830d1898 = func_0x0001854a9b90(SUB161(auVar9 ^ _DAT_1804eb730,5) ^ uVar3);
  uVar3 = _DAT_1830d1898 >> 1 | _DAT_1830d1898;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1830d1898;
  _DAT_1830d1660 = (ulonglong)(uVar5 & 0x7c0);
  *(ulonglong *)(unaff_RBP + 0x38) = _DAT_1830d1660;
  _DAT_1830d1a68 = (_DAT_1830d1a68 ^ uVar3) + _DAT_1830d1660 ^ 0xcbe6ce8ecd077c8;
  _DAT_1830d1580 = (_DAT_1830d1580 * 0x534f21cf66c74e2f ^ _DAT_1830d1a68) + uVar3;
  _DAT_1830d16b0 = _DAT_1830d1580 ^ _DAT_1830d1a68;
  plVar1 = *(longlong **)(unaff_RBP + 0x20);
  uVar2 = *(undefined8 *)(unaff_RBP + 0x40);
  lVar4 = (**(code **)(*plVar1 + 0x6f0))(plVar1,uVar2,0);
  *(int *)(unaff_RBP + 0xa0) = (int)*(char *)(lVar4 + *(int *)(unaff_RBP + 0xa8));
  (**(code **)(*plVar1 + 0x6f8))(plVar1,uVar2,lVar4,2);
  *(ulonglong *)(unaff_RBP + 0x70) = (ulonglong)*(uint *)(unaff_RBP + 0xa0);
  uVar3 = (~_DAT_1830d1980 + 0xb1f2802b) *
          ((_DAT_1830d1540 ^ 0x424ad5c0) + (ulonglong)((uint)_DAT_1830d1540 & 0x424ad5c0) * 2);
  uVar3 = (uVar3 | _DAT_1830d1678) + (uVar3 & _DAT_1830d1678);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d1988 = func_0x0001854a9b90((uVar3 | 0xf3b855ea) + (ulonglong)((uint)uVar3 & 0xf3b855ea))
  ;
  uVar3 = (_DAT_1830d1988 ^ 0xf7faf600) & 0xfffffffffffffe00 ^ 0xc668f600;
  _DAT_1830d1840 = (_DAT_1830d1840 ^ uVar3) + 0x779a76cf ^ 0x791306a744109a9a;
  _DAT_1830d1810 = (_DAT_1830d1810 * 0xb9bc9d996f59915 ^ _DAT_1830d1840) + uVar3;
  _DAT_1830d1850 = _DAT_1830d1810 ^ _DAT_1830d1840;
  _DAT_1830d1528 = 0x779a76cf;
  uVar3 = (~_DAT_1830d1770 + 0x868b0cc9) *
          ((_DAT_1830d15a8 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1830d15a8 & 0x8422231a) * 2);
  uVar3 = (uVar3 | _DAT_1830d18d0) + (uVar3 & _DAT_1830d18d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d18e8 = func_0x0001854a9b90((uVar3 | 0x2a92fd2) + (ulonglong)((uint)uVar3 & 0x2a92fd2));
  uVar3 = _DAT_1830d18e8 ^ 0x868b0cc0;
  _DAT_1830d18e0 = _DAT_1830d19f0 ^ uVar3 ^ 0x868b0d07;
  _DAT_1830d1700 = (_DAT_1830d1700 ^ uVar3) + 0x868b0d07 ^ 0x28a22dfd95fc29c5;
  _DAT_1830d1880 = (_DAT_1830d1880 * -0x5569f3c482d2c519 ^ _DAT_1830d1700) + uVar3;
  _DAT_1830d1ab8 = _DAT_1830d1880 ^ _DAT_1830d1700;
  _DAT_1830d1a58 = 0x868b0d07;
  _DAT_1830d1950 = func_0x0001854a9b90(_DAT_1830d18c0 + 0xff2cffa6fa0042ffU ^ 0x3e);
  uVar3 = (_DAT_1830d1950 ^ 0xf8000000) & 0xfffffffff8000000;
  _DAT_1830d1ab8 = _DAT_1830d1528 ^ uVar3 ^ 0x10000003f;
  _DAT_1830d1650 = (_DAT_1830d1650 ^ uVar3) + 0x10000003f ^ 0x92d7123d4cafbdd7;
  _DAT_1830d1798 = (_DAT_1830d1798 * 0x71bf548f8d956553 ^ _DAT_1830d1650) + uVar3;
  _DAT_1830d1690 = _DAT_1830d1798 ^ _DAT_1830d1650;
  _DAT_1830d1758 = 0x3f;
  _DAT_1830d1680 = func_0x0001854a9b90(_DAT_1830d1a10 + 0xffe8ffb1580059ffU ^ 0xae);
  _DAT_1830d1560 =
       (_DAT_1830d1560 ^ _DAT_1830d1680 * 0x28bd659535a2846d) - 0x75880cfd ^ 0x8603879ce3278aae;
  _DAT_1830d18a8 =
       (_DAT_1830d18a8 * -0x125d3c697b1d1e0d ^ _DAT_1830d1560) + _DAT_1830d1680 * 0x28bd659535a2846d
  ;
  _DAT_1830d16e8 = _DAT_1830d18a8 ^ _DAT_1830d1560;
  _DAT_1830d18c8 = 0x8a77f303;
  _DAT_1830d15d0 = func_0x0001854a9b90(_DAT_1830d1778 ^ 0xffe700ee6100a5fa);
  uVar3 = _DAT_1830d15d0 & 0xffffffffffe00000;
  _DAT_1830d17a0 = _DAT_1830d1650 ^ uVar3 ^ 0x75880d3c;
  _DAT_1830d17d8 = (_DAT_1830d17d8 ^ uVar3) + 0x75880d3c ^ 0x2edb5cb3395dac0;
  _DAT_1830d1a90 = (_DAT_1830d1a90 * -0x648ce98ea8e5069d ^ _DAT_1830d17d8) + uVar3;
  _DAT_1830d1538 = _DAT_1830d1a90 ^ _DAT_1830d17d8;
  _DAT_1830d19e8 = 0x75880d3c;
  uVar3 = (_DAT_1830d1a08 ^ _DAT_1804eb740) + _DAT_1830d18a0 + 0xf1aa2e19;
  uVar11 = (_DAT_1830d18a0 ^ _UNK_1804eb748) + _DAT_1830d1a08 + 0x8a77f303;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d1a08 ^ _DAT_1804eb740;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d18a0 ^ _UNK_1804eb748;
  _DAT_1830d17f8 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d1a08 + 0x8a77f303) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d18a0 + 0xf1aa2e19));
  uVar3 = (_DAT_1830d17f8 ^ 0xfffff000) & 0xfffffffffffff000 ^ 0x75880d3c;
  uVar3 = uVar3 << 0x28 | uVar3 >> 0x18;
  _DAT_1830d1aa8 = _DAT_1830d1980 ^ uVar3 ^ 0x10000003f;
  _DAT_1830d1788 = (_DAT_1830d1788 ^ uVar3) + 0x10000003f ^ 0x27c104dec1b4b438;
  _DAT_1830d1a58 = (_DAT_1830d1a58 * -0x702b74345a44f4c7 ^ _DAT_1830d1788) + uVar3;
  _DAT_1830d1830 = _DAT_1830d1a58 ^ _DAT_1830d1788;
  _DAT_1830d1940 = 0x3f;
  uVar3 = (~_DAT_1830d1818 + 0xed1b94df) *
          ((_DAT_1830d1700 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830d1700 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830d19a8) + (uVar3 & _DAT_1830d19a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d1688 = func_0x0001854a9b90((uVar3 | 0x6939b7fb) + (ulonglong)((uint)uVar3 & 0x6939b7fb))
  ;
  uVar3 = _DAT_1830d1688 * 0x579a40ea244bf403 & 0x1fffffffff;
  _DAT_1830d1670 = (_DAT_1830d1670 ^ uVar3) - 0xed1b94de ^ 0x837015de3e39524;
  _DAT_1830d1830 = (_DAT_1830d1830 * 0x3e7605502952343f ^ _DAT_1830d1670) + uVar3;
  _DAT_1830d1780 = _DAT_1830d1830 ^ _DAT_1830d1670;
  _DAT_1830d1918 = 0x12e46b22;
  uVar3 = (~_DAT_1830d1978 + 0x12e46b23) *
          ((_DAT_1830d1668 ^ 0x6939b638) + (ulonglong)((uint)_DAT_1830d1668 & 0x6939b638) * 2);
  uVar3 = (uVar3 | _DAT_1830d19d0) + (uVar3 & _DAT_1830d19d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d1920 = func_0x0001854a9b90((uVar3 | 0x7bdddd1a) + (ulonglong)((uint)uVar3 & 0x7bdddd1a))
  ;
  uVar3 = _DAT_1830d1920 ^ 0x12e46b22;
  _DAT_1830d1588 = _DAT_1830d1a30 ^ uVar3 ^ 0x10000003f;
  _DAT_1830d1a38 = (_DAT_1830d1a38 ^ uVar3) + 0x10000003f ^ 0xc63dfe0480bc20a;
  _DAT_1830d1850 = (_DAT_1830d1850 * 0x623bd5b2a98a0b43 ^ _DAT_1830d1a38) + uVar3;
  _DAT_1830d19a0 = _DAT_1830d1850 ^ _DAT_1830d1a38;
  _DAT_1830d1af8 = _DAT_1830d15a0 ^ 0x10000003f;
  _DAT_1830d16f0 = 0x3f;
  uVar3 = (~_DAT_1830d19c0 + 0x779a76d0) *
          ((_DAT_1830d1650 ^ 0xbbc5fcda) + (ulonglong)((uint)_DAT_1830d1650 & 0xbbc5fcda) * 2);
  uVar3 = (uVar3 | _DAT_1830d1a00) + (uVar3 & _DAT_1830d1a00);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d17f0 = func_0x0001854a9b90((uVar3 | 0xcc5f8a15) + (ulonglong)((uint)uVar3 & 0xcc5f8a15))
  ;
  _DAT_1830d15c8 = (ulonglong)(((uint)_DAT_1830d17f0 ^ 0x29c456ce) & 0x3fe7dfff) ^ 0x3fe7dfff;
  _DAT_1830d1a38 = (_DAT_1830d1a38 ^ _DAT_1830d15c8) + 0xb78256ce ^ 0xd17000efc18700cb;
  _DAT_1830d15c8 =
       ((_DAT_1830d1560 ^ _DAT_1830d15c8 ^ 0xb78256ce) * -0x3516fc0e3d663dad ^ _DAT_1830d1a38) +
       _DAT_1830d15c8;
  _DAT_1830d1a00 = _DAT_1830d15c8 ^ _DAT_1830d1a38;
  _DAT_1830d1858 = 0xb78256ce;
  uVar3 = (_DAT_1830d15b8 ^ _DAT_1804eb750) + _DAT_1830d19e8 + 0xbbc5fcda;
  uVar11 = (_DAT_1830d19e8 ^ _UNK_1804eb758) + _DAT_1830d15b8 + 0x779a76cf;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d15b8 ^ _DAT_1804eb750;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d19e8 ^ _UNK_1804eb758;
  _DAT_1830d1630 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d15b8 + 0x779a76cf) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d19e8 + 0xbbc5fcda));
  _DAT_1830d1810 = (_DAT_1830d1810 ^ _DAT_1830d1630) + 0x487da930 ^ 0x56078a9636034063;
  _DAT_1830d1620 = (_DAT_1830d1620 * -0x51810d8dc7e3ee93 ^ _DAT_1830d1810) + _DAT_1830d1630;
  _DAT_1830d18d8 = _DAT_1830d1620 ^ _DAT_1830d1810;
  _DAT_1830d16b0 = 0x487da930;
  uVar3 = (~_DAT_1830d1538 + 0x779a76d0) *
          ((_DAT_1830d1a28 ^ 0xbbc5fcda) + (ulonglong)((uint)_DAT_1830d1a28 & 0xbbc5fcda) * 2);
  uVar3 = (uVar3 | _DAT_1830d1948) + (uVar3 & _DAT_1830d1948);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d16d0 = func_0x0001854a9b90((uVar3 | 0xcc5f8a15) + (ulonglong)((uint)uVar3 & 0xcc5f8a15))
  ;
  uVar3 = (_DAT_1830d16d0 & 0x7fffffffffffffff) -
          ((_DAT_1830d16d0 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1830d16d0 & 0x7fffffffffffffff;
  _DAT_1830d1678 = (_DAT_1830d1678 ^ uVar3) + 0x378256cf ^ 0xab265d813b102ee0;
  _DAT_1830d16f8 = (_DAT_1830d16f8 * 0x6d6e1547ff1c096b ^ _DAT_1830d1678) + uVar3;
  _DAT_1830d16e8 = _DAT_1830d16f8 ^ _DAT_1830d1678;
  _DAT_1830d18c0 = 0x378256cf;
  uVar3 = (_DAT_1830d1738 ^ _DAT_1804eb760) + _DAT_1830d1670 + 0xcc5f8a15;
  uVar11 = (_DAT_1830d1670 ^ _UNK_1804eb768) + _DAT_1830d1738 + 0x6f04ad9e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d1738 ^ _DAT_1804eb760;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d1670 ^ _UNK_1804eb768;
  _DAT_1830d18b0 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d1738 + 0x6f04ad9e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d1670 + 0xcc5f8a15));
  uVar3 = (_DAT_1830d18b0 << 5 | _DAT_1830d18b0 >> 0x3b) * -0x782a9c00bc768463;
  _DAT_1830d1860 = _DAT_1830d1698 ^ uVar3 ^ 0xb78256ce;
  _DAT_1830d1668 = (_DAT_1830d1668 ^ uVar3) + 0xb78256ce ^ 0x31a63a72bf9985ad;
  _DAT_1830d1590 = (_DAT_1830d1590 * -0x6dfe3fa6561253a3 ^ _DAT_1830d1668) + uVar3;
  _DAT_1830d1ac8 = _DAT_1830d1590 ^ _DAT_1830d1668;
  _DAT_1830d16b0 = 0xb78256ce;
  uVar3 = (~_DAT_1830d1568 + 0xb78256cf) *
          ((_DAT_1830d1ac8 ^ 0x33a075eb) + (ulonglong)((uint)_DAT_1830d1ac8 & 0x33a075eb) * 2);
  uVar3 = (uVar3 | _DAT_1830d17a8) + (uVar3 & _DAT_1830d17a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x0001854a9b90((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  _DAT_1830d18e0 = (uVar3 & 0x3fffffff) << 10 | uVar3 >> 0x36;
  _DAT_1830d1aa8 = _DAT_1830d1aa8 ^ _DAT_1830d18e0 ^ 0xf5080342c9452def;
  _DAT_1830d1708 = (_DAT_1830d1708 * -0x3dbcf4054ab44f27 ^ _DAT_1830d1aa8) + _DAT_1830d18e0;
  _DAT_1830d19f8 = _DAT_1830d1708 ^ _DAT_1830d1aa8;
  _DAT_1830d1ac8 = 0;
  uVar3 = (_DAT_1830d1a70 ^ 0x8422231a) + _DAT_1830d1af0 + 0x8422231a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d1a70 ^ 0x8422231a;
  uVar11 = ((_DAT_1830d1af0 + _DAT_1830d1a70) * 0x2000 | _DAT_1830d1af0 + _DAT_1830d1a70 >> 0x33) ^
           _DAT_1830d1af0;
  _DAT_1830d1780 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_1830d1a70 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d1af0 + 0x8422231a));
  uVar3 = _DAT_1830d1780 ^ 0x3f;
  uVar11 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar3;
  _DAT_1830d1510 = _DAT_1830d1ac8 ^ uVar3 ^ 0x3f;
  _DAT_1830d1ad8 = (_DAT_1830d1ad8 ^ uVar3) + 0x3f ^ 0x2aaf005c087152c3;
  _DAT_1830d19a0 = (_DAT_1830d19a0 * -0x1a357500e3a95629 ^ _DAT_1830d1ad8) + uVar3;
  _DAT_1830d1880 = _DAT_1830d19a0 ^ _DAT_1830d1ad8;
  _DAT_1830d1708 = 0x3f;
  uVar3 = (_DAT_1830d15b0 ^ _DAT_1804eb770) + _DAT_1830d1890 + 0xbbc5fcda;
  uVar11 = (_DAT_1830d1890 ^ _UNK_1804eb778) + _DAT_1830d15b0 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d15b0 ^ _DAT_1804eb770;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d1890 ^ _UNK_1804eb778;
  _DAT_1830d1810 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d15b0 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d1890 + 0xbbc5fcda));
  uVar3 = (_DAT_1830d1690 ^ 0x3fe7dfff) << 0x2e | (_DAT_1830d1690 ^ 0x3fe7dfff) >> 0x12;
  _DAT_1830d1700 = (_DAT_1830d1700 ^ uVar3) + 0xc0182000 ^ 0x401ca4ec71d6fce8;
  _DAT_1830d1938 = (_DAT_1830d1938 * -0x3f1d18b11fbffa85 ^ _DAT_1830d1700) + uVar3;
  _DAT_1830d15f8 = _DAT_1830d1938 ^ _DAT_1830d1700;
  _DAT_1830d1680 = 0xc0182000;
  uVar3 = (_DAT_1830d1510 ^ _DAT_1804eb780) + _DAT_1830d16e0 + 0xbbc5fcda;
  uVar11 = (_DAT_1830d16e0 ^ _UNK_1804eb788) + _DAT_1830d1510 + 0xc0182000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d1510 ^ _DAT_1804eb780;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1830d16e0 ^ _UNK_1804eb788;
  _DAT_1830d1520 =
       func_0x0001854a9b90((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1830d1510 + 0xc0182000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d16e0 + 0xbbc5fcda));
  uVar3 = _DAT_1830d1520 ^ 0x2ff3edb93be7e000;
  uVar11 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3 ^
          0x3fe7dfff;
  _DAT_1830d15a8 = _DAT_1830d15a8 ^ uVar3 ^ 0x6b026d4e6c596670;
  _DAT_1830d1908 = (_DAT_1830d1908 * -0x65f113be0c358715 ^ _DAT_1830d15a8) + uVar3;
  _DAT_1830d1840 = _DAT_1830d1908 ^ _DAT_1830d15a8;
  _DAT_1830d15f0 = 0;
  _DAT_1830d1858 = func_0x0001854a9b90(_DAT_1830d1680 ^ 0x210083ea002167);
  uVar3 = _DAT_1830d1858 << 4 | _DAT_1830d1858 >> 0x3c;
  _DAT_1830d1aa0 = _DAT_1830d18b8 ^ uVar3 ^ 0x3f;
  _DAT_1830d1810 = (_DAT_1830d1810 ^ uVar3) + 0x3f ^ 0x47ed82e5ac572191;
  _DAT_1830d1990 = (_DAT_1830d1990 * -0x18f8c8762555e209 ^ _DAT_1830d1810) + uVar3;
  _DAT_1830d1890 = _DAT_1830d1990 ^ _DAT_1830d1810;
  _DAT_1830d1540 = 0x3f;
  uVar3 = (~_DAT_1830d1568 + 0x1c03d97b) *
          ((_DAT_1830d1960 ^ 0x9821fa5f) + (ulonglong)((uint)_DAT_1830d1960 & 0x9821fa5f) * 2);
  uVar3 = (uVar3 | _DAT_1830d1760) + (uVar3 & _DAT_1830d1760);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d1880 = func_0x0001854a9b90((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar5 = ~(uint)_DAT_1830d1880 & 0x1c03d97a;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar3 = (ulonglong)uVar7 - (ulonglong)(uVar7 >> 1 & 0x55555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          (ulonglong)uVar5;
  _DAT_1830d17f8 = _DAT_1830d17f8 ^ uVar3 ^ 0xe65fc67505689d80;
  _DAT_1830d17b0 = (_DAT_1830d17b0 * 0x156304891cfd8d7 ^ _DAT_1830d17f8) + uVar3;
  _DAT_1830d1508 = _DAT_1830d17b0 ^ _DAT_1830d17f8;
  _DAT_1830d16a8 = 0;
  uVar8 = (ulonglong)((uint)*(undefined8 *)(unaff_RBP + 0x70) & 0x3f);
  uVar11 = uVar8 ^ 0x84222325;
  uVar3 = *(ulonglong *)(unaff_RBP + 0x38);
  uVar6 = ((_DAT_1830d1a48 ^ uVar11) + (ulonglong)((uint)_DAT_1830d1a48 & (uint)uVar11) * 2) *
          (uVar3 - _DAT_1830d1740);
  uVar6 = (uVar6 | _DAT_1830d1808) + (uVar6 & _DAT_1830d1808);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830d1958 =
       func_0x0001854a9b90((uVar11 ^ uVar3 | uVar6) +
                           (ulonglong)((uint)(uVar11 ^ uVar3) & (uint)uVar6));
  uVar11 = _DAT_1830d1958 << 0x2c | _DAT_1830d1958 >> 0x14;
  uVar8 = uVar8 | uVar3;
  _DAT_1830d1860 = (_DAT_1830d1860 ^ uVar11) + uVar8 ^ 0xfd813eb9914201a3;
  _DAT_1830d19d8 = (_DAT_1830d19d8 * -0x73ea77ba42c5fd8b ^ _DAT_1830d1860) + uVar11;
  _DAT_1830d1978 = _DAT_1830d19d8 ^ _DAT_1830d1860;
  _DAT_1830d1648 = uVar8;
  *(undefined8 *)(unaff_RBP + 0xa0) = *(undefined8 *)(unaff_RBP + 0x10);
  uVar5 = *(uint *)(unaff_RBP + 0x80);
  *(uint *)(unaff_RBP + 0xa8) = uVar5;
  uVar3 = (ulonglong)uVar5 ^ 0x84222325;
  uVar11 = uVar3 ^ _DAT_1830d1658;
  lVar4 = uVar3 + _DAT_1830d1a58;
  uVar3 = uVar11 + lVar4;
  uVar6 = (_DAT_1830d1a58 ^ 1) + _DAT_1830d1658 + 1;
  uVar11 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar11;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1830d1a58 ^ 1;
  _DAT_1830d1ac0 =
       func_0x0001854a9b90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d1658 + 1) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - lVar4);
  uVar3 = ~_DAT_1830d1ac0 & (ulonglong)uVar5;
  uVar7 = uVar5 ^ unaff_XMM6_Da;
  _DAT_1830d19d0 =
       ((ulonglong)uVar7 * (ulonglong)_DAT_1804eb790 + _DAT_1804eb7c0 << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_1804eb7b0 +
       (ulonglong)uVar5 * (ulonglong)_DAT_1804eb7a0 +
       ((ulonglong)uVar5 * (ulonglong)_DAT_1804eb790 << 0x20) +
       (-(((ulonglong)uVar7 * (ulonglong)_DAT_1804eb880 + _DAT_1804eb890 << 0x20) +
         (ulonglong)uVar7 * (ulonglong)_DAT_1804eb870) -
       (((ulonglong)(uVar5 ^ unaff_XMM7_Da) * (ulonglong)_DAT_1804eb860 << 0x20) +
        (ulonglong)(uVar5 ^ unaff_XMM7_Da) * (ulonglong)_DAT_1804eb850 +
        ((ulonglong)(uVar5 | unaff_XMM7_Da) * (ulonglong)_DAT_1804eb840 << 0x20) +
        (ulonglong)(uVar5 | unaff_XMM7_Da) * (ulonglong)_DAT_1804eb830 +
       ((ulonglong)(uVar5 & unaff_XMM7_Da) * (ulonglong)_DAT_1804eb820 << 0x20 |
       (ulonglong)(uVar5 & unaff_XMM7_Da) * (ulonglong)_DAT_1804eb810) +
       ((ulonglong)uVar5 * (ulonglong)_DAT_1804eb800 << 0x20) +
       (ulonglong)uVar5 * (ulonglong)_DAT_1804eb7f0)) + 0xf00777aeb009d78f;
  _DAT_1830d1500 = _DAT_1830d19c0 ^ uVar3 ^ _DAT_1830d19d0;
  _DAT_1830d1788 = (_DAT_1830d1788 ^ uVar3) + _DAT_1830d19d0 ^ 0xa89b8a1d0d4e700e;
  _DAT_1830d1910 = (_DAT_1830d1910 * -0x299cdc69af07a151 ^ _DAT_1830d1788) + uVar3;
  _DAT_1830d17c0 = _DAT_1830d1910 ^ _DAT_1830d1788;
  _DAT_1830d19d0 = _DAT_1830d19d0 & 0xffffffff;
  *(int *)(unaff_RBP + 0xb0) = (int)uVar8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x60)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 5496c09 (image 185496c09) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185496c09(void)

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



// ===== continuation @ rva 5496de5 (image 185496de5) =====

undefined8 thunk_FUN_1854804d0(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 548505c (image 18548505c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185485573 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18548505c(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar20;
  uint uVar22;
  uint uVar23;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  
  uVar1 = unaff_RBP - 0x3b;
  uVar17 = uVar1 ^ 0x84222325;
  plVar2 = *(longlong **)(unaff_RBP + 0x20);
  uVar20 = (unaff_RDI - _DAT_1830d1508) *
           ((_DAT_1830d1548 ^ uVar17) + (uVar17 & _DAT_1830d1548) * 2);
  uVar20 = (uVar20 | _DAT_1830d1800) + (uVar20 & _DAT_1830d1800);
  uVar20 = uVar20 * 0x2000 ^ uVar20;
  uVar20 = uVar20 >> 7 ^ uVar20;
  uVar20 = uVar20 << 0x11 ^ uVar20;
  _DAT_1830d16d0 =
       func_0x0001854a9b90((uVar17 ^ unaff_RDI | uVar20) + (uVar20 & (uVar17 ^ unaff_RDI)));
  uVar14 = _DAT_1804ec110;
  uVar13 = _DAT_1804ec100;
  uVar22 = (uint)(uVar1 >> 0x20);
  auVar26._8_4_ = (int)uVar1;
  auVar26._0_8_ = uVar1;
  auVar26._12_4_ = uVar22;
  uVar23 = (uint)(unaff_RDI >> 0x20);
  auVar25._8_4_ = (int)unaff_RDI;
  auVar25._0_8_ = unaff_RDI;
  auVar25._12_4_ = uVar23;
  uVar17 = (ulonglong)_DAT_1804ec0d0;
  auVar31 = auVar26 | auVar25;
  auVar21._8_4_ = 0xffffffff;
  auVar21._0_8_ = 0xffffffffffffffff;
  auVar21._12_4_ = 0xffffffff;
  auVar24._8_4_ = 0xffffffff;
  auVar24._0_8_ = 0xffffffffffffffff;
  auVar24._12_4_ = 0xffffffff;
  auVar24 = auVar24 ^ auVar25;
  uVar6 = (ulonglong)_DAT_1804ec0c0;
  uVar20 = (ulonglong)_DAT_1804ec0c0;
  uVar3 = (ulonglong)_DAT_1804ec0f0;
  uVar7 = (ulonglong)_DAT_1804ec0e0;
  uVar4 = (ulonglong)_DAT_1804ec0e0;
  uVar30 = SUB164(auVar26 & auVar25,0);
  uVar8 = (ulonglong)_DAT_1804ec100;
  uVar29 = SUB168(auVar26 & auVar25,0);
  uVar9 = (ulonglong)_DAT_1804ec110;
  uVar10 = (ulonglong)_DAT_1804ec110;
  *(undefined1 (*) [16])(unaff_RBP + 0x80) = auVar31;
  uVar16 = _DAT_1804ec150;
  uVar15 = _DAT_1804ec140;
  uVar5 = (ulonglong)_DAT_1804ec130;
  uVar27 = SUB164(auVar26 ^ auVar21,0);
  uVar11 = (ulonglong)_DAT_1804ec120;
  uVar12 = (ulonglong)_DAT_1804ec120;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = auVar24;
  uVar18 = _DAT_1830d16d0 << 0x3e | (_DAT_1830d16d0 & 0x3fffffffffffffff) >> 2;
  uVar28 = SUB164(auVar26 ^ auVar25,0);
  _DAT_1830d17d0 =
       (((ulonglong)uVar15 * (ulonglong)auVar24._0_4_ +
         ((ulonglong)uVar16 * (ulonglong)auVar24._0_4_ + (auVar24._0_8_ >> 0x20) * (ulonglong)uVar15
         << 0x20) +
        uVar27 * uVar12 + (uVar5 * uVar27 + (SUB168(auVar26 ^ auVar21,0) >> 0x20) * uVar11 << 0x20)
        + (ulonglong)uVar14 * (ulonglong)auVar31._0_4_ +
          ((auVar31._0_8_ >> 0x20) * (ulonglong)uVar14 +
           (ulonglong)uVar13 * (ulonglong)auVar31._0_4_ << 0x20) +
        uVar30 * uVar10 + ((uVar29 >> 0x20) * uVar9 + uVar30 * uVar8 << 0x20) +
        (uVar17 * (uVar1 & 0xffffffff) + uVar20 * uVar22 << 0x20) + (uVar1 & 0xffffffff) * uVar6 +
        (uVar3 * (unaff_RDI & 0xffffffff) + uVar4 * uVar23 << 0x20) +
        (unaff_RDI & 0xffffffff) * uVar7) -
       ((ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_1804ec1c0 +
        ((ulonglong)_DAT_1804ec230 * (ulonglong)*(uint *)(unaff_RBP + 0x60) +
         (auVar24._0_8_ >> 0x20) * (ulonglong)_DAT_1804ec1c0 << 0x20) +
       (ulonglong)uVar28 * (ulonglong)_DAT_1804ec210 +
       ((ulonglong)_DAT_1804ec220 * (ulonglong)uVar28 +
        (SUB168(auVar26 ^ auVar25,0) >> 0x20) * (ulonglong)_DAT_1804ec210 << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 0x80) * (ulonglong)_DAT_1804ec1f0 +
       ((ulonglong)_DAT_1804ec200 * (ulonglong)*(uint *)(unaff_RBP + 0x80) +
        (auVar31._0_8_ >> 0x20) * (ulonglong)_DAT_1804ec1f0 << 0x20) +
       (ulonglong)uVar30 * (ulonglong)_DAT_1804ec1d0 +
       ((ulonglong)_DAT_1804ec1e0 * (ulonglong)uVar30 + (uVar29 >> 0x20) * (ulonglong)_DAT_1804ec1d0
       << 0x20) +
       ((unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1804ec1b0 +
        (ulonglong)uVar23 * (ulonglong)_DAT_1804ec1a0 << 0x20) +
       (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1804ec1a0 +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_1804ec190 +
        (ulonglong)uVar22 * (ulonglong)_DAT_1804ec180 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_1804ec180)) + 0xf65757719bbf5af4;
  _DAT_1830d1930 = _DAT_1830d17d0 ^ uVar18;
  _DAT_1830d18b8 = (_DAT_1830d18b8 ^ uVar18) + _DAT_1830d17d0 ^ 0xb31efeabca8bced5;
  _DAT_1830d1850 = (_DAT_1830d1850 * -0x53628f930daa3a0d ^ _DAT_1830d18b8) + uVar18;
  _DAT_1830d1790 = _DAT_1830d1850 ^ _DAT_1830d18b8;
  lVar19 = unaff_RBP + -0x30;
  FUN_18414b520(lVar19);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar19 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(unaff_RBP + 0x30),lVar19);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 5496d5f (image 185496d5f) =====

undefined8 thunk_FUN_1854804d0(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 54acad1 (image 1854acad1) =====

void FUN_1854acad1(void)

{
  return;
}



// ===== continuation @ rva 54ac928 (image 1854ac928) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854ac928(void)

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



// ===== continuation @ rva 54b0b91 (image 1854b0b91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b0b91(void)

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



// ===== continuation @ rva 54b1140 (image 1854b1140) =====

void FUN_1854b1140(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 54b005a (image 1854b005a) =====

undefined8 thunk_FUN_1854afe3e(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 54af47c (image 1854af47c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854af47c(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x78))();
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



// ===== continuation @ rva 54af189 (image 1854af189) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854af189(void)

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



// ===== continuation @ rva 54aff82 (image 1854aff82) =====

undefined8 thunk_FUN_1854afe3e(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 54ad138 (image 1854ad138) =====

undefined8 FUN_1854ad138(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x68))();
  return 0;
}



// ===== continuation @ rva 54b13d3 (image 1854b13d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b13d3(void)

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



// ===== continuation @ rva 54b137f (image 1854b137f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b137f(void)

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



// ===== continuation @ rva 54b1ef8 (image 1854b1ef8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b1ef8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1804f2048)();
  return;
}



// ===== continuation @ rva 54b1948 (image 1854b1948) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b1948(void)

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



// ===== continuation @ rva 54b2138 (image 1854b2138) =====

void FUN_1854b2138(void)

{
  return;
}



// ===== continuation @ rva 54b20e8 (image 1854b20e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b20e8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1804f22e8)();
  return;
}



// ===== continuation @ rva 54b1aab (image 1854b1aab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b1aab(void)

{
  FUN_190de3220();
  (*_DAT_1804f22f8)();
  return;
}



// ===== continuation @ rva 54b2103 (image 1854b2103) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b2103(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1804f2158)();
  return;
}



// ===== continuation @ rva 54b1b26 (image 1854b1b26) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b1b26(void)

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



// ===== continuation @ rva 54b17e4 (image 1854b17e4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b17e4(void)

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



// ===== continuation @ rva 54b1790 (image 1854b1790) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b1790(void)

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



// ===== continuation @ rva 54b19c0 (image 1854b19c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b19c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1804f22d8)();
  return;
}



// ===== continuation @ rva 54b17c9 (image 1854b17c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b17c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1804f21e8)();
  return;
}



// ===== continuation @ rva 54b4b8d (image 1854b4b8d) =====

void FUN_1854b4b8d(void)

{
  return;
}



// ===== continuation @ rva 54b22b0 (image 1854b22b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b22b0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1804f2a28)();
  return;
}



// ===== continuation @ rva 54b482e (image 1854b482e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b482e(void)

{
  (*_DAT_1804f3198)();
  return;
}



// ===== continuation @ rva 54b4bac (image 1854b4bac) =====

void FUN_1854b4bac(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 54b407f (image 1854b407f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b407f(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000078;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000078 < 0 || iVar1 <= in_stack_00000078) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 54b32df (image 1854b32df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b32df(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1804f31d8)();
  return;
}



// ===== continuation @ rva 54b3a2c (image 1854b3a2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854b3a2c(void)

{
  FUN_190ddfc90();
  (*_DAT_1804f27d8)();
  return;
}



// ===== continuation @ rva 54b4298 (image 1854b4298) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b4298(void)

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



// ===== continuation @ rva 54b2cf1 (image 1854b2cf1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b2cf1(void)

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



// ===== continuation @ rva 54b422d (image 1854b422d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854b422d(void)

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



// ===== continuation @ rva 547b27f (image 18547b27f) =====

void FUN_18547b27f(void)

{
  return;
}



// ===== continuation @ rva 547769a (image 18547769a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547769a(void)

{
  FUN_190ddce00();
  (*_DAT_1804e8818)();
  return;
}



// ===== continuation @ rva 547b5b2 (image 18547b5b2) =====

void FUN_18547b5b2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 547ae9a (image 18547ae9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547ae9a(void)

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



// ===== continuation @ rva 547b41a (image 18547b41a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547b41a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1804e8938)();
  return;
}



// ===== continuation @ rva 5479eab (image 185479eab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185479eab(void)

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



// ===== continuation @ rva 547b346 (image 18547b346) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547b346(void)

{
  (*_DAT_1804e8ba8)();
  return;
}



// ===== continuation @ rva 547a385 (image 18547a385) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547a385(void)

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



// ===== continuation @ rva 547aca0 (image 18547aca0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547aca0(void)

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



// ===== continuation @ rva 5479f95 (image 185479f95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185479f95(void)

{
  FUN_190dd72e0();
  (*_DAT_1804e8878)();
  return;
}



// ===== continuation @ rva 547a694 (image 18547a694) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547a694(void)

{
  (*_DAT_1804e8ba8)();
  return;
}



// ===== continuation @ rva 547adf7 (image 18547adf7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547adf7(void)

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



// ===== continuation @ rva 548004a (image 18548004a) =====

void FUN_18548004a(void)

{
  return;
}



// ===== continuation @ rva 547b77a (image 18547b77a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547b77a(void)

{
  FUN_190ddce00();
  (*_DAT_1804e9e58)();
  return;
}



// ===== continuation @ rva 547eaf4 (image 18547eaf4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547eaf4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1804e9d28)();
  return;
}



// ===== continuation @ rva 54800c1 (image 1854800c1) =====

void FUN_1854800c1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 547ee2e (image 18547ee2e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547ee2e(void)

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



// ===== continuation @ rva 547eadf (image 18547eadf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547eadf(void)

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



// ===== continuation @ rva 547ffef (image 18547ffef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547ffef(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1804e9d68)();
  return;
}



// ===== continuation @ rva 547f7ea (image 18547f7ea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547f7ea(void)

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



// ===== continuation @ rva 547f3ff (image 18547f3ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547f3ff(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1804e9a78)();
  return;
}



// ===== continuation @ rva 547f149 (image 18547f149) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547f149(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1804e9508)();
  return;
}



// ===== continuation @ rva 547ea10 (image 18547ea10) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547ea10(void)

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



// ===== continuation @ rva 547ed28 (image 18547ed28) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547ed28(void)

{
  (*_DAT_1804e9dc8)();
  return;
}



// ===== continuation @ rva 54bf29d (image 1854bf29d) =====

void FUN_1854bf29d(void)

{
  return;
}



// ===== continuation @ rva 54bb197 (image 1854bb197) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854bb197(void)

{
  FUN_190ddce00();
  (*_DAT_1804f4f38)();
  return;
}



// ===== continuation @ rva 54bf5d0 (image 1854bf5d0) =====

void FUN_1854bf5d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 54be8fc (image 1854be8fc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854be8fc(void)

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



// ===== continuation @ rva 54bf56a (image 1854bf56a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854bf56a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1804f49b8)();
  return;
}



// ===== continuation @ rva 54beec4 (image 1854beec4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854beec4(void)

{
  longlong in_stack_00000088;
  
  switch(in_stack_00000088 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 54bf28b (image 1854bf28b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854bf28b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1804f5158)();
  return;
}



// ===== continuation @ rva 54bec97 (image 1854bec97) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854bec97(void)

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



// ===== continuation @ rva 54bf504 (image 1854bf504) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854bf504(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1804f4e38)();
  return;
}



// ===== continuation @ rva 54bf17b (image 1854bf17b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854bf17b(void)

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



// ===== continuation @ rva 54be41b (image 1854be41b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854be41b(void)

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



// ===== continuation @ rva 54bef13 (image 1854bef13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854bef13(void)

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



// ===== continuation @ rva 54c3597 (image 1854c3597) =====

void FUN_1854c3597(void)

{
  return;
}



// ===== continuation @ rva 54bf797 (image 1854bf797) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854bf797(void)

{
  FUN_190ddce00();
  (*_DAT_1804f6008)();
  return;
}



// ===== continuation @ rva 54c38ca (image 1854c38ca) =====

void FUN_1854c38ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 54c2fdb (image 1854c2fdb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854c2fdb(void)

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



// ===== continuation @ rva 54c2bbf (image 1854c2bbf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854c2bbf(void)

{
  (*_DAT_1804f6348)();
  return;
}



// ===== continuation @ rva 54c28e7 (image 1854c28e7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854c28e7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_1804f5e18)();
  return;
}



// ===== continuation @ rva 54c2d00 (image 1854c2d00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854c2d00(void)

{
  (*_DAT_1804f6058)();
  return;
}



// ===== continuation @ rva 54c2ef8 (image 1854c2ef8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854c2ef8(void)

{
  FUN_190de3220();
  (*_DAT_1804f6358)();
  return;
}



// ===== continuation @ rva 54c3864 (image 1854c3864) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854c3864(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1804f6238)();
  return;
}



// ===== continuation @ rva 54c31c9 (image 1854c31c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854c31c9(void)

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



// ===== continuation @ rva 54c369a (image 1854c369a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854c369a(void)

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



// ===== continuation @ rva 54f869b (image 1854f869b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f869b(void)

{
  FUN_190dd72e0();
  (*_DAT_180506738)();
  return;
}



// ===== continuation @ rva 54f8628 (image 1854f8628) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8628(void)

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



// ===== continuation @ rva 54f876c (image 1854f876c) =====

void FUN_1854f876c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 54f8762 (image 1854f8762) =====

void FUN_1854f8762(void)

{
  return;
}



// ===== continuation @ rva 54f86c3 (image 1854f86c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f86c3(void)

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



// ===== continuation @ rva 54f873b (image 1854f873b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f873b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180506728)();
  return;
}



// ===== continuation @ rva 54f8717 (image 1854f8717) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8717(void)

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



// ===== continuation @ rva 54f86e4 (image 1854f86e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f86e4(void)

{
  FUN_190dd9df0();
  (*_DAT_180506758)();
  return;
}



// ===== continuation @ rva 54f8686 (image 1854f8686) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8686(void)

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



// ===== continuation @ rva 54f888b (image 1854f888b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f888b(void)

{
  FUN_190dd72e0();
  (*_DAT_1805067f8)();
  return;
}



// ===== continuation @ rva 54f8818 (image 1854f8818) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8818(void)

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



// ===== continuation @ rva 54f895c (image 1854f895c) =====

void FUN_1854f895c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 54f88b3 (image 1854f88b3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f88b3(void)

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



// ===== continuation @ rva 54f8907 (image 1854f8907) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8907(void)

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



// ===== continuation @ rva 54f8952 (image 1854f8952) =====

void FUN_1854f8952(void)

{
  return;
}



// ===== continuation @ rva 54f8851 (image 1854f8851) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8851(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180506848)();
  return;
}



// ===== continuation @ rva 54f8876 (image 1854f8876) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8876(void)

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



// ===== continuation @ rva 54f88d4 (image 1854f88d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f88d4(void)

{
  FUN_190dd9df0();
  (*_DAT_180506808)();
  return;
}



// ===== continuation @ rva 54f8ad4 (image 1854f8ad4) =====

void FUN_1854f8ad4(void)

{
  return;
}



// ===== continuation @ rva 54f8a2d (image 1854f8a2d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8a2d(void)

{
  FUN_190ddce00();
  (*_DAT_1805068f8)();
  return;
}



// ===== continuation @ rva 54f8a84 (image 1854f8a84) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8a84(void)

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



// ===== continuation @ rva 54f8adc (image 1854f8adc) =====

void FUN_1854f8adc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 54f8ac2 (image 1854f8ac2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8ac2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1805068d8)();
  return;
}



// ===== continuation @ rva 54f8a60 (image 1854f8a60) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8a60(void)

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



// ===== continuation @ rva 54f8aa5 (image 1854f8aa5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8aa5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d8))();
  (*_DAT_1805068e8)();
  return;
}



// ===== continuation @ rva 54f8b0a (image 1854f8b0a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8b0a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180506928)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 54f8b16 (image 1854f8b16) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8b16(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 54f8b3d (image 1854f8b3d) =====

undefined4 * FUN_1854f8b3d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 54f8c5a (image 1854f8c5a) =====

void FUN_1854f8c5a(void)

{
  return;
}



// ===== continuation @ rva 54f8baa (image 1854f8baa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8baa(void)

{
  FUN_190ddce00();
  (*_DAT_180506968)();
  return;
}



// ===== continuation @ rva 54f8c62 (image 1854f8c62) =====

void FUN_1854f8c62(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 54f8bdd (image 1854f8bdd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8bdd(void)

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



// ===== continuation @ rva 54f8c01 (image 1854f8c01) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f8c01(void)

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



// ===== continuation @ rva 54f8c22 (image 1854f8c22) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8c22(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x490))();
  (*_DAT_1805069a8)();
  return;
}



// ===== continuation @ rva 54f8c3c (image 1854f8c3c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8c3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180506998)(0);
  return;
}



// ===== continuation @ rva 548029f (image 18548029f) =====

void FUN_18548029f(void)

{
  return;
}



// ===== continuation @ rva 548020a (image 18548020a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18548020a(void)

{
  FUN_190de3220();
  (*_DAT_1804eab78)();
  return;
}



// ===== continuation @ rva 54802a7 (image 1854802a7) =====

void FUN_1854802a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 5480294 (image 185480294) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185480294(void)

{
  (*_DAT_1804eab58)();
  return;
}



// ===== continuation @ rva 548023d (image 18548023d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18548023d(void)

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



// ===== continuation @ rva 5480261 (image 185480261) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185480261(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_18436c0d0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 548030a (image 18548030a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18548030a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1804eabb8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 5480316 (image 185480316) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_185480316(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 548033d (image 18548033d) =====

undefined4 * FUN_18548033d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 548033c (image 18548033c) =====

void FUN_18548033c(void)

{
  return;
}



// ===== continuation @ rva 54deffb (image 1854deffb) =====

void FUN_1854deffb(void)

{
  return;
}



// ===== continuation @ rva 54c3ac8 (image 1854c3ac8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854c3ac8(void)

{
  FUN_190ddce00();
  (*_DAT_1804f7a78)();
  return;
}



// ===== continuation @ rva 54cfe57 (image 1854cfe57) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854cfe57(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1804faa68)();
  return;
}



// ===== continuation @ rva 54cec1a (image 1854cec1a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854cec1a(void)

{
  FUN_190dd72e0();
  (*_DAT_1804f91e8)();
  return;
}



// ===== continuation @ rva 54de616 (image 1854de616) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854de616(void)

{
  (*_DAT_1804fb518)();
  return;
}



// ===== continuation @ rva 54defec (image 1854defec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854defec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1804f9098)();
  return;
}



// ===== continuation @ rva 54daf47 (image 1854daf47) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854daf47(void)

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



// ===== continuation @ rva 54dec7b (image 1854dec7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854dec7b(void)

{
  (*_DAT_1804fb3b8)();
  return;
}



// ===== continuation @ rva 54ddff0 (image 1854ddff0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854ddff0(void)

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



// ===== continuation @ rva 54dbee0 (image 1854dbee0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854dbee0(void)

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



// ===== continuation @ rva 54da73b (image 1854da73b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854da73b(void)

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



// ===== continuation @ rva 54f757b (image 1854f757b) =====

void FUN_1854f757b(void)

{
  return;
}



// ===== continuation @ rva 54df283 (image 1854df283) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854df283(void)

{
  FUN_190ddce00();
  (*_DAT_180500008)();
  return;
}



// ===== continuation @ rva 54f446d (image 1854f446d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f446d(void)

{
  (*_DAT_180502eb8)();
  return;
}



// ===== continuation @ rva 54f52e9 (image 1854f52e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f52e9(void)

{
  (*_DAT_180503228)();
  return;
}



// ===== continuation @ rva 54f5283 (image 1854f5283) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f5283(void)

{
  (*_DAT_180503128)();
  return;
}



// ===== continuation @ rva 54f84a2 (image 1854f84a2) =====

void FUN_1854f84a2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 54e9365 (image 1854e9365) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854e9365(void)

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



// ===== continuation @ rva 54e8773 (image 1854e8773) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854e8773(void)

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



// ===== continuation @ rva 54f2c65 (image 1854f2c65) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854f2c65(void)

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



// ===== continuation @ rva 54f1e14 (image 1854f1e14) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f1e14(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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



