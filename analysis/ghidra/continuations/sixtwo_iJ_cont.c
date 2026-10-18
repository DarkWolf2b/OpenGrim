// ===== continuation @ rva 8856040 (image 188856040) =====

void FUN_188856040(void)

{
  return;
}



// ===== continuation @ rva 884ecdf (image 18884ecdf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884ecdf(void)

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



// ===== continuation @ rva 884f082 (image 18884f082) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884f082(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1b0))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 884f044 (image 18884f044) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884f044(void)

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



// ===== continuation @ rva 8854ba3 (image 188854ba3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188854ba3(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_XMM8_Qa;
  uint unaff_XMM14_Da;
  int in_stack_00000098;
  
  uVar3 = (in_RAX ^ _DAT_1831da710) + in_RAX + _DAT_1831da8d0;
  uVar4 = (unaff_R13 ^ _DAT_1831da8d0) + _DAT_1831da710 + unaff_R13;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ in_RAX ^ _DAT_1831da710;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ unaff_R13 ^ _DAT_1831da8d0;
  _DAT_1831da510 =
       func_0x000188856220((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831da710 + unaff_R13) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (in_RAX + _DAT_1831da8d0));
  uVar1 = (uint)unaff_R15;
  uVar2 = (uint)unaff_R13;
  uVar5 = unaff_R15 ^ unaff_XMM8_Qa;
  uVar3 = unaff_R13 ^ unaff_XMM8_Qa;
  uVar4 = (unaff_R15 * unaff_R13 ^ _DAT_1831da510) & 0x1ffffffffffffff0;
  uVar3 = (((uVar5 & 0xffffffff) * (ulonglong)_DAT_1810417b0 +
            ((uVar5 & 0xffffffff) * (ulonglong)_DAT_181041820 +
             (uVar5 >> 0x20) * (ulonglong)_DAT_1810417b0 << 0x20) +
           ((ulonglong)(uVar1 ^ uVar2) * (ulonglong)_DAT_181041810 << 0x20) +
           (ulonglong)(uVar1 ^ uVar2) * (ulonglong)_DAT_181041800 +
           ((ulonglong)(uVar1 | uVar2) * (ulonglong)_DAT_1810417f0 << 0x20) +
           (ulonglong)(uVar1 | uVar2) * (ulonglong)_DAT_1810417e0 +
           ((ulonglong)(uVar1 & uVar2) * (ulonglong)_DAT_1810417d0 << 0x20) +
           (ulonglong)(uVar1 & uVar2) * (ulonglong)_DAT_1810417c0 +
           ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_1810417a0 << 0x20) +
           (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_181041790 +
           ((unaff_R15 & 0xffffffff) * (ulonglong)_DAT_181041780 << 0x20) +
           (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_181041770) -
          ((uVar3 & 0xffffffff) * (ulonglong)unaff_XMM14_Da +
           ((uVar3 >> 0x20) * (ulonglong)unaff_XMM14_Da +
            (uVar3 & 0xffffffff) * (ulonglong)_DAT_181041850 << 0x20) +
          (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM14_Da +
          ((unaff_R13 >> 0x20) * (ulonglong)unaff_XMM14_Da +
           (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_181041850 << 0x20))) + 0x1bec34a160615158;
  _DAT_1831da528 = _DAT_1831da740 ^ uVar4 ^ uVar3;
  _DAT_1831da790 = (_DAT_1831da790 ^ uVar4) + uVar3 ^ 0x4b658e7ca75c47f7;
  _DAT_1831da640 = (_DAT_1831da640 * 0x4dffdb7d1d3e27e7 ^ _DAT_1831da790) + uVar4;
  _DAT_1831da7f8 = _DAT_1831da640 ^ _DAT_1831da790;
  _DAT_1831da898 = uVar3 & 0xffffffff;
  switch((int)uVar3 < in_stack_00000098) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8850e57 (image 188850e57) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188850e57(void)

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



// ===== continuation @ rva 8854ee9 (image 188854ee9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188854ee9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack00000000000000ec;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  undefined8 uStack00000000000001f0;
  undefined8 uStack00000000000001f8;
  undefined8 uStack0000000000000200;
  undefined8 uStack0000000000000208;
  undefined8 uStack0000000000000210;
  
  uStack00000000000000ec = 0x77d1c962;
  rdtsc();
  uStack0000000000000150 = 0x3300b6000b00d3;
  rdtsc();
  uStack0000000000000158 = 0x6e0019006300c4;
  rdtsc();
  uStack0000000000000160 = 0x4500db008200b4;
  rdtsc();
  uStack0000000000000168 = 0x7b00db00a0000e;
  rdtsc();
  uStack0000000000000170 = 0xe50076003800f5;
  rdtsc();
  uStack0000000000000178 = 0x91005600a10022;
  rdtsc();
  uStack0000000000000180 = 0x9e002b009d008a;
  rdtsc();
  uStack0000000000000188 = 0x2700a700bf0075;
  rdtsc();
  uStack0000000000000190 = 0xdc00e600d500b3;
  rdtsc();
  uStack0000000000000198 = 0x9600a400e80097;
  rdtsc();
  uStack00000000000001a0 = 0x12004e007300ea;
  rdtsc();
  uStack00000000000001a8 = 0x4100ad009f00d9;
  rdtsc();
  uStack00000000000001b0 = 0xc0004b00b0007a;
  rdtsc();
  uStack00000000000001b8 = 0x4600a100230024;
  rdtsc();
  uStack00000000000001c0 = 0x5e00e000810074;
  rdtsc();
  uStack00000000000001c8 = 0x35007c0062000e;
  rdtsc();
  uStack00000000000001d0 = 0x95007f00c200e2;
  rdtsc();
  uStack00000000000001d8 = 0x3900e200e300f3;
  rdtsc();
  uStack00000000000001e0 = 0xbb00f800230058;
  rdtsc();
  uStack00000000000001e8 = 0xb5008900910015;
  rdtsc();
  uStack00000000000001f0 = 0x580086006a00fd;
  rdtsc();
  uStack00000000000001f8 = 0x2d00f100fc00cb;
  rdtsc();
  uStack0000000000000200 = 0x200cc00ce0031;
  rdtsc();
  uStack0000000000000208 = 0xf000e9008f0026;
  rdtsc();
  uStack0000000000000210 = 0x7e002c0095002a;
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190de6cb0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8855a13 (image 188855a13) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188855a13(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_000000a8;
  
  uStack0000000000000040 = in_stack_000000a8;
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



// ===== continuation @ rva 8851083 (image 188851083) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188851083(void)

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



// ===== continuation @ rva 884f3d9 (image 18884f3d9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884f3d9(void)

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



// ===== continuation @ rva 8850e15 (image 188850e15) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188850e15(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8850d3d (image 188850d3d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188850d3d(void)

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



// ===== continuation @ rva 8811e4f (image 188811e4f) =====

undefined8 FUN_188811e4f(void)

{
  return 0;
}



// ===== continuation @ rva 8811d67 (image 188811d67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811d67(void)

{
  FUN_190ddfc90();
  (*_DAT_181035608)();
  return;
}



// ===== continuation @ rva 8811dbe (image 188811dbe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188811dbe(void)

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



// ===== continuation @ rva 8811e26 (image 188811e26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811e26(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181035618)();
  return;
}



// ===== continuation @ rva 8811d9a (image 188811d9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188811d9a(void)

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



// ===== continuation @ rva 8811dd4 (image 188811dd4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811dd4(void)

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



// ===== continuation @ rva 8811e0d (image 188811e0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811e0d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181035618)();
  return;
}



// ===== continuation @ rva 8811e8a (image 188811e8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811e8a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181035678)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 8811e96 (image 188811e96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188811e96(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 8811ebd (image 188811ebd) =====

undefined4 * FUN_188811ebd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 8811ebc (image 188811ebc) =====

void FUN_188811ebc(void)

{
  return;
}



// ===== continuation @ rva 881201f (image 18881201f) =====

undefined8 FUN_18881201f(void)

{
  return 0;
}



// ===== continuation @ rva 8811f37 (image 188811f37) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811f37(void)

{
  FUN_190ddfc90();
  (*_DAT_1810356c8)();
  return;
}



// ===== continuation @ rva 8811fdd (image 188811fdd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811fdd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1810356a8)();
  return;
}



// ===== continuation @ rva 8811ff6 (image 188811ff6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811ff6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1810356e8)();
  return;
}



// ===== continuation @ rva 8811fa4 (image 188811fa4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811fa4(void)

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



// ===== continuation @ rva 8812029 (image 188812029) =====

void FUN_188812029(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8811f6a (image 188811f6a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188811f6a(void)

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



// ===== continuation @ rva 8811f8e (image 188811f8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188811f8e(void)

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



// ===== continuation @ rva 881205a (image 18881205a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881205a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181035728)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 8812066 (image 188812066) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812066(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 88121ef (image 1888121ef) =====

undefined8 FUN_1888121ef(void)

{
  return 0;
}



// ===== continuation @ rva 8812107 (image 188812107) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812107(void)

{
  FUN_190ddfc90();
  (*_DAT_181035758)();
  return;
}



// ===== continuation @ rva 881215e (image 18881215e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881215e(void)

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



// ===== continuation @ rva 88121f9 (image 1888121f9) =====

void FUN_1888121f9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 881213a (image 18881213a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881213a(void)

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



// ===== continuation @ rva 88121c6 (image 1888121c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888121c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181035778)();
  return;
}



// ===== continuation @ rva 88121ad (image 1888121ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888121ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181035768)();
  return;
}



// ===== continuation @ rva 8812174 (image 188812174) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812174(void)

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



// ===== continuation @ rva 881222a (image 18881222a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881222a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1810357d8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 8812236 (image 188812236) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812236(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 88123bf (image 1888123bf) =====

undefined8 FUN_1888123bf(void)

{
  return 0;
}



// ===== continuation @ rva 88122d7 (image 1888122d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888122d7(void)

{
  FUN_190ddfc90();
  (*_DAT_181035828)();
  return;
}



// ===== continuation @ rva 88123c9 (image 1888123c9) =====

void FUN_1888123c9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8812396 (image 188812396) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812396(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1810357f8)();
  return;
}



// ===== continuation @ rva 881232e (image 18881232e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881232e(void)

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



// ===== continuation @ rva 881230a (image 18881230a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881230a(void)

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



// ===== continuation @ rva 8812344 (image 188812344) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812344(void)

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



// ===== continuation @ rva 881237d (image 18881237d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881237d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181035808)();
  return;
}



// ===== continuation @ rva 88123fa (image 1888123fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888123fa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181035878)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 8812406 (image 188812406) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812406(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 881258f (image 18881258f) =====

undefined8 FUN_18881258f(void)

{
  return 0;
}



// ===== continuation @ rva 88124a7 (image 1888124a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888124a7(void)

{
  FUN_190ddfc90();
  (*_DAT_1810358d8)();
  return;
}



// ===== continuation @ rva 8812566 (image 188812566) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812566(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1810358f8)();
  return;
}



// ===== continuation @ rva 881254d (image 18881254d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881254d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1810358a8)();
  return;
}



// ===== continuation @ rva 8812514 (image 188812514) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812514(void)

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



// ===== continuation @ rva 8812599 (image 188812599) =====

void FUN_188812599(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 88124da (image 1888124da) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888124da(void)

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



// ===== continuation @ rva 88124fe (image 1888124fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888124fe(void)

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



// ===== continuation @ rva 88125ca (image 1888125ca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888125ca(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181035918)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 88125d6 (image 1888125d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888125d6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 881275f (image 18881275f) =====

undefined8 FUN_18881275f(void)

{
  return 0;
}



// ===== continuation @ rva 8812677 (image 188812677) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812677(void)

{
  FUN_190ddfc90();
  (*_DAT_181035988)();
  return;
}



// ===== continuation @ rva 88126ce (image 1888126ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888126ce(void)

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



// ===== continuation @ rva 8812736 (image 188812736) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812736(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1810359a8)();
  return;
}



// ===== continuation @ rva 88126e4 (image 1888126e4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888126e4(void)

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



// ===== continuation @ rva 8812769 (image 188812769) =====

void FUN_188812769(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 88126aa (image 1888126aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888126aa(void)

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



// ===== continuation @ rva 881271d (image 18881271d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881271d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181035968)();
  return;
}



// ===== continuation @ rva 881279a (image 18881279a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881279a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1810359d8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 88127a6 (image 1888127a6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888127a6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 881292f (image 18881292f) =====

undefined8 FUN_18881292f(void)

{
  return 0;
}



// ===== continuation @ rva 8812847 (image 188812847) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812847(void)

{
  FUN_190ddfc90();
  (*_DAT_181035a48)();
  return;
}



// ===== continuation @ rva 88128ed (image 1888128ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888128ed(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181035a58)();
  return;
}



// ===== continuation @ rva 8812906 (image 188812906) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812906(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181035a28)();
  return;
}



// ===== continuation @ rva 88128b4 (image 1888128b4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888128b4(void)

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



// ===== continuation @ rva 8812939 (image 188812939) =====

void FUN_188812939(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 881289e (image 18881289e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881289e(void)

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



// ===== continuation @ rva 881287a (image 18881287a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881287a(void)

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



// ===== continuation @ rva 881296a (image 18881296a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881296a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181035a88)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 8812976 (image 188812976) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812976(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 8812aff (image 188812aff) =====

undefined8 FUN_188812aff(void)

{
  return 0;
}



// ===== continuation @ rva 8812a17 (image 188812a17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812a17(void)

{
  FUN_190ddfc90();
  (*_DAT_181035ae8)();
  return;
}



// ===== continuation @ rva 8812a6e (image 188812a6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812a6e(void)

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



// ===== continuation @ rva 8812ad6 (image 188812ad6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812ad6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181035ad8)();
  return;
}



// ===== continuation @ rva 8812a84 (image 188812a84) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812a84(void)

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



// ===== continuation @ rva 8812b09 (image 188812b09) =====

void FUN_188812b09(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8812a4a (image 188812a4a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812a4a(void)

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



// ===== continuation @ rva 8812abd (image 188812abd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812abd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181035ad8)();
  return;
}



// ===== continuation @ rva 8812b3a (image 188812b3a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812b3a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181035b18)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 8812b46 (image 188812b46) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812b46(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 8812b6d (image 188812b6d) =====

undefined4 * FUN_188812b6d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 8812ccf (image 188812ccf) =====

undefined8 FUN_188812ccf(void)

{
  return 0;
}



// ===== continuation @ rva 8812be7 (image 188812be7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812be7(void)

{
  FUN_190ddfc90();
  (*_DAT_181035b58)();
  return;
}



// ===== continuation @ rva 8812ca6 (image 188812ca6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812ca6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181035b88)();
  return;
}



// ===== continuation @ rva 8812c1a (image 188812c1a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812c1a(void)

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



// ===== continuation @ rva 8812c8d (image 188812c8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812c8d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181035ba8)();
  return;
}



// ===== continuation @ rva 8812c54 (image 188812c54) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812c54(void)

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



// ===== continuation @ rva 8812cd9 (image 188812cd9) =====

void FUN_188812cd9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8812c3e (image 188812c3e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188812c3e(void)

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



// ===== continuation @ rva 881b2cf (image 18881b2cf) =====

undefined8 FUN_18881b2cf(void)

{
  return 0;
}



// ===== continuation @ rva 881b1e7 (image 18881b1e7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b1e7(void)

{
  FUN_190ddfc90();
  (*_DAT_181038138)();
  return;
}



// ===== continuation @ rva 881b2a6 (image 18881b2a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b2a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181038148)();
  return;
}



// ===== continuation @ rva 881b2d9 (image 18881b2d9) =====

void FUN_18881b2d9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 881b21a (image 18881b21a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b21a(void)

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



// ===== continuation @ rva 881b254 (image 18881b254) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b254(void)

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



// ===== continuation @ rva 881b28d (image 18881b28d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b28d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181038128)();
  return;
}



// ===== continuation @ rva 881b23e (image 18881b23e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b23e(void)

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



// ===== continuation @ rva 881b30a (image 18881b30a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b30a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181038198)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 881b316 (image 18881b316) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b316(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 881b454 (image 18881b454) =====

void FUN_18881b454(void)

{
  return;
}



// ===== continuation @ rva 881b3ad (image 18881b3ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b3ad(void)

{
  FUN_190ddce00();
  (*_DAT_1810381d8)();
  return;
}



// ===== continuation @ rva 881b45c (image 18881b45c) =====

void FUN_18881b45c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 881b3e0 (image 18881b3e0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b3e0(void)

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



// ===== continuation @ rva 881b442 (image 18881b442) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b442(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1810381e8)();
  return;
}



// ===== continuation @ rva 881b404 (image 18881b404) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b404(void)

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



// ===== continuation @ rva 881b425 (image 18881b425) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b425(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (*_DAT_1810381f8)();
  return;
}



// ===== continuation @ rva 881b48a (image 18881b48a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b48a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181038248)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 881b496 (image 18881b496) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b496(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 881b4b3 (image 18881b4b3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b4b3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_181038258)();
  return;
}



// ===== continuation @ rva 881b4bc (image 18881b4bc) =====

void FUN_18881b4bc(void)

{
  return;
}



// ===== continuation @ rva 881b5db (image 18881b5db) =====

void FUN_18881b5db(void)

{
  return;
}



// ===== continuation @ rva 881b529 (image 18881b529) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b529(void)

{
  FUN_190ddce00();
  (*_DAT_181038298)();
  return;
}



// ===== continuation @ rva 881b5a1 (image 18881b5a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b5a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1810382b8)();
  return;
}



// ===== continuation @ rva 881b580 (image 18881b580) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b580(void)

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



// ===== continuation @ rva 881b5e2 (image 18881b5e2) =====

void FUN_18881b5e2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 881b55c (image 18881b55c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b55c(void)

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



// ===== continuation @ rva 881b5bb (image 18881b5bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b5bb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1810382a8)();
  return;
}



// ===== continuation @ rva 881b61a (image 18881b61a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b61a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1810382d8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 881b626 (image 18881b626) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881b626(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 881b64d (image 18881b64d) =====

undefined4 * FUN_18881b64d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 881b7fb (image 18881b7fb) =====

void FUN_18881b7fb(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(longlong **)(unaff_RBP + 0x58) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018881b834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181038900 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 881b7a6 (image 18881b7a6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018881b7dd */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18881b7a6(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8831713 (image 188831713) =====

void FUN_188831713(void)

{
  return;
}



// ===== continuation @ rva 8831635 (image 188831635) =====

undefined8 thunk_FUN_18881b7e0(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 8824bec (image 188824bec) =====

undefined8 FUN_188824bec(void)

{
  func_0x000180001044();
  return 0;
}



// ===== continuation @ rva 882e28c (image 18882e28c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18882e28c(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x58) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x58),*(undefined8 *)(unaff_RBP + 0x20));
  switch(*(int *)(unaff_RBP + 0x98) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x98)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8831495 (image 188831495) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188831495(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x58);
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



// ===== continuation @ rva 8826244 (image 188826244) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188826244(undefined4 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  longlong *unaff_R13;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM8 [16];
  
  *(undefined4 *)(unaff_RBP + 0x98) = param_1;
  (**(code **)(*unaff_R13 + 0x6f8))();
  uVar5 = *(uint *)(unaff_RBP + 0x90);
  uVar1 = *(uint *)(unaff_RBP + 0x98);
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar1 ^ 0x84222325;
  auVar7._8_4_ = uVar5;
  auVar7._12_4_ = 0;
  auVar8 = pshufb(auVar7 ^ _DAT_181038cb0,unaff_XMM8);
  uVar4 = auVar8._8_8_ + auVar8._0_8_;
  uVar6 = uVar4 + _DAT_1831d9a20;
  if (auVar8._4_4_ < 0) {
    uVar6 = _DAT_1831d9af0 ^ uVar4;
  }
  _DAT_1831d9988 = func_0x000188844250(SUB161(auVar7 ^ _DAT_181038cb0,5) ^ uVar6);
  uVar5 = uVar5 & uVar1;
  _DAT_1831d9968 = (ulonglong)uVar5;
  _DAT_1831d99c0 = (_DAT_1831d99c0 ^ _DAT_1831d9988) + _DAT_1831d9968 ^ 0xee0876ad1b313e80;
  _DAT_1831d9a48 = (_DAT_1831d9a48 * 0x5d3a2119cf3abc1b ^ _DAT_1831d99c0) + _DAT_1831d9988;
  _DAT_1831d9a98 = _DAT_1831d9a48 ^ _DAT_1831d99c0;
  *(uint *)(unaff_RBP + 0x90) = uVar5;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  lVar3 = _DAT_1831d9970 + 0x84222325;
  lVar2 = _DAT_1831d9a48 + 0xde02c18c;
  uVar6 = (_DAT_1831d9a48 ^ _DAT_181038cc0) + lVar3;
  uVar4 = (_DAT_1831d9970 ^ _UNK_181038cc8) + lVar2;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831d9a48 ^ _DAT_181038cc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831d9970 ^ _UNK_181038cc8;
  *(int *)(unaff_RBP + 0x80) = (int)*(undefined8 *)(unaff_RBP + 0x90);
  _DAT_1831d9970 =
       func_0x000188844250((uVar4 << 0x1d | uVar4 >> 0x23) - lVar2 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar3);
  _DAT_1831d99b8 = (_DAT_1831d99b8 ^ _DAT_1831d9a00) - 0xde02c18c ^ 0x559e70224915467f;
  _DAT_1831d9aa0 = (_DAT_1831d9aa0 * -0x12fe871b29a7191b ^ _DAT_1831d99b8) + _DAT_1831d9a00;
  _DAT_1831d9a30 = _DAT_1831d9aa0 ^ _DAT_1831d99b8;
  _DAT_1831d9ad8 = 0x21fd3e74;
  uVar6 = (_DAT_1831d9ac8 ^ _DAT_181038cd0) + 0xa61f620e;
  uVar4 = (_UNK_181038cd8 ^ 0x21fd3e74) + _DAT_1831d9ac8 + 0xde02c18c;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831d9ac8 ^ _DAT_181038cd0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _UNK_181038cd8 ^ 0x21fd3e74;
  _DAT_1831d9af0 =
       func_0x000188844250((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831d9ac8 + 0xde02c18c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - 0xa61f620e);
  uVar6 = _DAT_1831d9af0 << 0x30 | _DAT_1831d9af0 >> 0x10;
  _DAT_1831d9958 = _DAT_1831d9960 ^ uVar6 ^ 0xde02c24b;
  _DAT_1831d99c8 = (_DAT_1831d99c8 ^ uVar6) + 0xde02c24b ^ 0x40e509515c393889;
  _DAT_1831d9a88 = (_DAT_1831d9a88 * -0x5516c39fe337bd03 ^ _DAT_1831d99c8) + uVar6;
  _DAT_1831d9920 = _DAT_1831d9a88 ^ _DAT_1831d99c8;
  _DAT_1831d9900 = 0xde02c24b;
  uVar6 = (~_DAT_1831d99f0 + 0x21fd3e75) *
          ((_DAT_1831d9930 ^ 0x5a20e16e) + (ulonglong)((uint)_DAT_1831d9930 & 0x5a20e16e) * 2);
  uVar6 = (uVar6 | _DAT_1831d9a58) + (uVar6 & _DAT_1831d9a58);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1831d99d0 = func_0x000188844250((uVar6 | 0x7bdddf1a) + (ulonglong)((uint)uVar6 & 0x7bdddf1a))
  ;
  uVar6 = _DAT_1831d99d0 >> 1 | _DAT_1831d99d0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1831d99d0;
  _DAT_1831d9a40 = _DAT_1831d99e0 ^ uVar6 ^ 0x1000000bf;
  _DAT_1831d9a48 = (_DAT_1831d9a48 ^ uVar6) + 0x1000000bf ^ 0xf1d3626eb92130b2;
  _DAT_1831d9928 = (_DAT_1831d9928 * 0x7ba4ba82cbd91857 ^ _DAT_1831d9a48) + uVar6;
  _DAT_1831d9998 = _DAT_1831d9928 ^ _DAT_1831d9a48;
  _DAT_1831d9908 = 0xbf;
  uVar6 = (_DAT_1831d9aa8 ^ _DAT_181038ce0) + _DAT_1831d9a40 + 0x84222325;
  uVar4 = (_DAT_1831d9a40 ^ _UNK_181038ce8) + _DAT_1831d9aa8 + 0xa7d9cb9b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831d9aa8 ^ _DAT_181038ce0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831d9a40 ^ _UNK_181038ce8;
  _DAT_1831d9948 =
       func_0x000188844250((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831d9aa8 + 0xa7d9cb9b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831d9a40 + 0x84222325));
  _DAT_1831d9930 = _DAT_1831d9930 - 0xa7d9cb9b ^ 0x5fbf60ef9e1644b7;
  _DAT_1831d99d8 = _DAT_1831d9ad0 * 0x1f1fc50de1f285;
  _DAT_1831d9ad0 = _DAT_1831d99d8 ^ _DAT_1831d9930;
  _DAT_1831d9a20 = 0x58263465;
  uVar6 = (_DAT_1831d9a60 ^ _DAT_181038cf0) + _DAT_1831d9a90 + 0x8422239a;
  uVar4 = (_DAT_1831d9a90 ^ _UNK_181038cf8) + _DAT_1831d9a60 + 0xa7d9cb9b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831d9a60 ^ _DAT_181038cf0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831d9a90 ^ _UNK_181038cf8;
  uVar1 = func_0x000188844250((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831d9a60 + 0xa7d9cb9b) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831d9a90 + 0x8422239a));
  uVar6 = (ulonglong)(~uVar1 & 0xbf);
  _DAT_1831d99f0 = _DAT_1831d9a90 ^ uVar6 ^ 0xa7d9cc5a;
  _DAT_1831d99d0 = (_DAT_1831d99d0 ^ uVar6) + 0xa7d9cc5a ^ 0xc38dc23c8e16fe63;
  _DAT_1831d9a70 = (_DAT_1831d9a70 * -0x358e3796dbd35ad9 ^ _DAT_1831d99d0) + uVar6;
  _DAT_1831d9998 = _DAT_1831d9a70 ^ _DAT_1831d99d0;
  _DAT_1831d9ad0 = 0xa7d9cc5a;
  _DAT_1831d9a28 = func_0x000188844250(_DAT_1831d99b0 + 0xff5900570a0054ff ^ 0x27);
  uVar6 = _DAT_1831d9a28 - (_DAT_1831d9a28 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1831d9a28) * -0x4e22828b91c1cc55;
  _DAT_1831d9ac0 = _DAT_1831d9a88 ^ uVar6 ^ 0x1000000bf;
  _DAT_1831d99e0 = (_DAT_1831d99e0 ^ uVar6) + 0x1000000bf ^ 0x112b2c1107755a8b;
  _DAT_1831d9a80 = (_DAT_1831d9a80 * -0x5e6126065c519f6d ^ _DAT_1831d99e0) + uVar6;
  _DAT_1831d9998 = _DAT_1831d9a80 ^ _DAT_1831d99e0;
  _DAT_1831d9980 = 0xbf;
  uVar6 = (~_DAT_1831d9a68 + 0x591bd779) *
          ((_DAT_1831d9a60 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831d9a60 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_1831d9960) + (uVar6 & _DAT_1831d9960);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1831d9a50 = func_0x000188844250((uVar6 | 0xdd39f45d) + (ulonglong)((uint)uVar6 & 0xdd39f45d))
  ;
  uVar6 = _DAT_1831d9a50 & 0xfffffffff ^ 0x591bd778;
  uVar4 = uVar6 - (uVar6 >> 1 & 0x555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar6;
  _DAT_1831d9a28 = (_DAT_1831d9a28 ^ uVar6) - 0x591bd778 ^ 0xfb08889cea0b6830;
  _DAT_1831d9ac0 = (_DAT_1831d9ac0 * -0x5e3e2b19c87a9923 ^ _DAT_1831d9a28) + uVar6;
  _DAT_1831d9a00 = _DAT_1831d9ac0 ^ _DAT_1831d9a28;
  _DAT_1831d99c8 = _DAT_1831d9a10 ^ 0xffffffffa6e42888;
  _DAT_1831d9948 = 0xa6e42888;
  uVar6 = (~_DAT_1831d9928 + 0x1d83f6d) *
          ((_DAT_1831d9938 ^ 0x595d9dde) + (ulonglong)((uint)_DAT_1831d9938 & 0x595d9dde) * 2);
  uVar6 = (uVar6 | _DAT_1831d99b8) + (uVar6 & _DAT_1831d99b8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1831d9988 = func_0x000188844250((uVar6 | 0x5885a2b2) + (ulonglong)((uint)uVar6 & 0x5885a2b2))
  ;
  uVar6 = _DAT_1831d9988 ^ 0x1989a6800ac56e4;
  uVar6 = ((uVar6 << 0x20 | uVar6 >> 0x20) ^ 0xdd7fbefb) << 0x17 | (uVar6 & 0xffffffff) >> 9;
  _DAT_1831d9a28 = _DAT_1831d9970 ^ uVar6 ^ 0xdf57fe67;
  _DAT_1831d9ab0 = (_DAT_1831d9ab0 ^ uVar6) + 0xdf57fe67 ^ 0x793e2583bc5dd831;
  _DAT_1831d9ad8 = (_DAT_1831d9ad8 * -0x7d2ee8da5165e9f ^ _DAT_1831d9ab0) + uVar6;
  _DAT_1831d9a58 = _DAT_1831d9ad8 ^ _DAT_1831d9ab0;
  _DAT_1831d9a98 = 0xdf57fe67;
  _DAT_1831d9928 = func_0x000188844250(0xa1ffa84d57847e);
  _DAT_1831d9a08 =
       (_DAT_1831d9a08 ^ _DAT_1831d9928 & 0x7fffffffffffffff) + 0xdca78197 ^ 0xf00233850a9c8a2;
  _DAT_1831d9a68 =
       (_DAT_1831d9a68 * -0x2f472b50d74099ef ^ _DAT_1831d9a08) +
       (_DAT_1831d9928 & 0x7fffffffffffffff);
  _DAT_1831d9a48 = _DAT_1831d9a68 ^ _DAT_1831d9a08;
  _DAT_1831d9ae8 = 0xdca78197;
  _DAT_1831d9a08 = func_0x000188844250(_DAT_1831d9a88 ^ 0x620037b2007a25);
  uVar6 = (_DAT_1831d9a08 ^ 0x1989a68ddd3e81f) * -0x3331d5a30122494d;
  _DAT_1831d9a78 = (_DAT_1831d9a20 ^ uVar6) + 0x1583e68 ^ 0xa7bf206ef345a63b;
  _DAT_1831d9a20 = (_DAT_1831d9a20 * -0x56e385c5a7aa8525 ^ _DAT_1831d9a78) + uVar6;
  _DAT_1831d9a78 = _DAT_1831d9a20 ^ _DAT_1831d9a78;
  _DAT_1831d99e0 = 0x1583e68;
  uVar6 = (_DAT_1831d99c8 ^ _DAT_181038d00) + _DAT_1831d9aa0 + 0x5b75dd42;
  uVar4 = (_DAT_1831d9aa0 ^ _UNK_181038d08) + _DAT_1831d99c8 + 0xdf57fe67;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831d99c8 ^ _DAT_181038d00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831d9aa0 ^ _UNK_181038d08;
  _DAT_1831d99b0 =
       func_0x000188844250((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831d99c8 + 0xdf57fe67) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831d9aa0 + 0x5b75dd42));
  _DAT_1831d99d0 = (_DAT_1831d99b0 ^ 0xc2da6b7658d28d60) & 0xffffffffffffffe0;
  uVar6 = _DAT_1831d9908 ^ _DAT_1831d99d0;
  _DAT_1831d9908 = uVar6 ^ 0x7c2c31a677393b6a;
  _DAT_1831d9a60 = (_DAT_1831d9a60 * -0x5833c8a0d9557a6d ^ _DAT_1831d9908) + _DAT_1831d99d0;
  _DAT_1831d9af8 = _DAT_1831d9a60 ^ _DAT_1831d9908;
  _DAT_1831d9a98 = 0;
  uVar6 = ((uVar6 ^ 0x7c2c31a6f31b18f0) + (ulonglong)((uint)_DAT_1831d9908 & 0x8422239a) * 2) *
          -_DAT_1831d9a28;
  uVar6 = (uVar6 | _DAT_1831d9ad0) + (uVar6 & _DAT_1831d9ad0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1831d9908 = func_0x000188844250((uVar6 | 0x8422239a) + (ulonglong)((uint)uVar6 & 0x8422239a))
  ;
  uVar6 = _DAT_1831d9908 & 0x1fffffffff;
  _DAT_1831d9948 = _DAT_1831d9968 ^ uVar6 ^ 0xbf;
  _DAT_1831d9968 = (_DAT_1831d9968 ^ uVar6) + 0xbf ^ 0xf77d89566a8e66ea;
  _DAT_1831d99b0 = (_DAT_1831d99b0 * 0x5517177b3a4d283f ^ _DAT_1831d9968) + uVar6;
  _DAT_1831d9aa0 = _DAT_1831d99b0 ^ _DAT_1831d9968;
  _DAT_1831d9990 = 0xbf;
  uVar6 = (~_DAT_1831d9ac8 + 0x100000000) *
          ((_DAT_1831d9a48 ^ 0x595d9dde) + (ulonglong)((uint)_DAT_1831d9a48 & 0x595d9dde) * 2);
  uVar6 = (uVar6 | _DAT_1831d9a00) + (uVar6 & _DAT_1831d9a00);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1831d9ac8 = func_0x000188844250((uVar6 | 0xa6a26221) + (ulonglong)((uint)uVar6 & 0xa6a26221))
  ;
  uVar6 = (_DAT_1831d9ac8 ^ 0xdd7fbefb) << 0x23 |
          ((_DAT_1831d9ac8 ^ 0xdd7fbefb) & 0x3ffffffffffffff) >> 0x1d;
  _DAT_1831d9a28 = (_DAT_1831d9a28 ^ uVar6) + 0x22804104 ^ 0xa6ee0d9103987951;
  _DAT_1831d9a10 = (_DAT_1831d9a10 * 0x4061016a45f0d221 ^ _DAT_1831d9a28) + uVar6;
  _DAT_1831d9918 = _DAT_1831d9a10 ^ _DAT_1831d9a28;
  _DAT_1831d9ac0 = 0x22804104;
  uVar6 = (_DAT_1831d99f8 ^ 0x8422239a) + _DAT_1831d9948 + 0x8422239a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831d99f8 ^ 0x8422239a;
  uVar4 = ((_DAT_1831d9948 + _DAT_1831d99f8) * 0x2000 | _DAT_1831d9948 + _DAT_1831d99f8 >> 0x33) ^
          _DAT_1831d9948;
  _DAT_1831d9990 =
       func_0x000188844250((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1831d99f8 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831d9948 + 0x8422239a));
  uVar6 = _DAT_1831d9990 ^ 0xbf;
  _DAT_1831d99b8 = _DAT_1831d9a10 ^ uVar6 ^ 0xbf;
  _DAT_1831d9ad0 = (_DAT_1831d9aa8 ^ uVar6) + 0xbf ^ 0x3eb82a2c9edd6d80;
  _DAT_1831d9ad8 = (_DAT_1831d9ad8 * -0x5ec20bb186956ec3 ^ _DAT_1831d9ad0) + uVar6;
  _DAT_1831d9ad0 = _DAT_1831d9ad8 ^ _DAT_1831d9ad0;
  _DAT_1831d9aa8 = 0xbf;
  uVar6 = ((_DAT_1831d9948 ^ 0x8422239a) + (ulonglong)((uint)_DAT_1831d9948 & 0x8422239a) * 2) *
          -_DAT_1831d9918;
  uVar6 = (uVar6 | _DAT_1831d9ab8) + (uVar6 & _DAT_1831d9ab8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1831d9af8 = func_0x000188844250((uVar6 | 0x8422239a) + (ulonglong)((uint)uVar6 & 0x8422239a))
  ;
  uVar6 = _DAT_1831d9af8 >> 1 | _DAT_1831d9af8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ _DAT_1831d9af8) & 0x7fffffffffffffff;
  _DAT_1831d9950 = _DAT_1831d9a88 ^ uVar6 ^ 0xbf;
  _DAT_1831d99e8 = (_DAT_1831d99e8 ^ uVar6) + 0xbf ^ 0x2a47741b45d80bfe;
  _DAT_1831d9a40 = (_DAT_1831d9a40 * 0x61569a0aeb608ff5 ^ _DAT_1831d99e8) + uVar6;
  _DAT_1831d99e0 = _DAT_1831d9a40 ^ _DAT_1831d99e8;
  _DAT_1831d9aa0 = 0xbf;
  switch(0xbf < (int)uVar5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 882cb37 (image 18882cb37) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18882cb37(void)

{
  int *unaff_RBP;
  longlong *unaff_R13;
  
  *(short *)((longlong)unaff_RBP + 0x52) = (short)unaff_RBP[0x28];
  (**(code **)(*unaff_R13 + 0x688))();
  unaff_RBP[0x24] = unaff_RBP[0x15] + 1;
  unaff_RBP[0x26] = *unaff_RBP;
  switch(unaff_RBP[0x15] + 1 < *unaff_RBP) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 88316cc (image 1888316cc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888316cc(void)

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



// ===== continuation @ rva 881ba1c (image 18881ba1c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881ba1c(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint unaff_R13D;
  byte unaff_R15B;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  
  uVar1 = (in_RAX ^ unaff_XMM6_Qa) + param_1 + 0x84222330;
  uVar2 = (param_1 ^ unaff_XMM6_Qb) + in_RAX + 0xd1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ in_RAX ^ unaff_XMM6_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_1 ^ unaff_XMM6_Qb;
  _DAT_1831d9a60 =
       func_0x000188844250((uVar2 << 0x1d | uVar2 >> 0x23) - (in_RAX + 0xd1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (param_1 + 0x84222330));
  uVar1 = (_DAT_1831d9a60 ^ 0xd5) << 0x39 | (_DAT_1831d9a60 ^ 0xd5) >> 7;
  _DAT_1831d9aa8 = (_DAT_1831d9aa8 ^ uVar1) + 0xd5 ^ 0xc14d53405557c0fa;
  _DAT_1831d9970 = (_DAT_1831d9970 * -0x3b5d0d33ef298a83 ^ _DAT_1831d9aa8) + uVar1;
  _DAT_1831d9ae8 = _DAT_1831d9970 ^ _DAT_1831d9aa8;
  _DAT_1831d9af0 = 0xd5;
  uVar1 = (~_DAT_1831d9aa0 + 0xe7) *
          ((_DAT_1831d9a78 ^ unaff_RBX) + (ulonglong)((uint)_DAT_1831d9a78 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_1831d9a38) + (uVar1 & _DAT_1831d9a38);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831d9ac0 = func_0x000188844250((uVar1 | 0x842223f3) + (ulonglong)((uint)uVar1 & 0x842223f3))
  ;
  uVar1 = _DAT_1831d9ac0 ^ 0xf6;
  _DAT_1831d9a88 = _DAT_1831d9900 ^ uVar1 ^ 0x116;
  _DAT_1831d99e8 = (_DAT_1831d99e8 ^ uVar1) + 0x116 ^ 0x7ffb03a80b1d5da5;
  _DAT_1831d99a8 = (_DAT_1831d99a8 * -0x19155388856f4363 ^ _DAT_1831d99e8) + uVar1;
  _DAT_1831d9908 = _DAT_1831d99a8 ^ _DAT_1831d99e8;
  _DAT_1831d9910 = 0x16;
  _DAT_1831d9a40 = func_0x000188844250(_DAT_1831d9928 + 0x1f0083e6ffe1ff ^ 5);
  uVar1 = _DAT_1831d9a40 - (_DAT_1831d9a40 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1831d9a40;
  _DAT_1831d99c8 = _DAT_1831d9af0 ^ uVar1 ^ 0x30;
  _DAT_1831d99b0 = (_DAT_1831d99b0 ^ uVar1) + 0x30 ^ 0x8389ea353d1c696;
  _DAT_1831d9928 = (_DAT_1831d9928 * 0x77add1996a6b3bc9 ^ _DAT_1831d99b0) + uVar1;
  _DAT_1831d9930 = _DAT_1831d9928 ^ _DAT_1831d99b0;
  _DAT_1831d9910 = 0x30;
  _DAT_1831d99b8 = func_0x000188844250(_DAT_1831d99e0 + 0xffdeff8448001dff ^ 0xaf);
  _DAT_1831d9a18 = (_DAT_1831d9a18 ^ _DAT_1831d99b8 ^ 0xed) - 0xed ^ 0x6db274e5cd3ca8f6;
  _DAT_1831d9ae8 = (_DAT_1831d9ae8 * 0x12e24540e25f6961 ^ _DAT_1831d9a18) + (_DAT_1831d99b8 ^ 0xed);
  _DAT_1831d9950 = _DAT_1831d9ae8 ^ _DAT_1831d9a18;
  _DAT_1831d9a50 = 0x13;
  uVar1 = (~_DAT_1831d9ae8 + 0xee) *
          ((_DAT_1831d9ae0 ^ unaff_RBX) + (ulonglong)((uint)_DAT_1831d9ae0 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_1831d9978) + (uVar1 & _DAT_1831d9978);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831d9aa0 = func_0x000188844250((uVar1 | 0x842223f8) + (ulonglong)((uint)uVar1 & 0x842223f8))
  ;
  uVar1 = _DAT_1831d9aa0 ^ 0x10;
  _DAT_1831d9938 = _DAT_1831d9ad8 ^ uVar1 ^ 0x11d;
  _DAT_1831d9a40 = (_DAT_1831d9a40 ^ uVar1) + 0x11d ^ 0x6e5ab00e753cf549;
  _DAT_1831d99d8 = (_DAT_1831d99d8 * 0x79440183d9731fc3 ^ _DAT_1831d9a40) + uVar1;
  _DAT_1831d9970 = _DAT_1831d99d8 ^ _DAT_1831d9a40;
  _DAT_1831d9ab0 = 0x1d;
  uVar1 = (~_DAT_1831d9a58 + 0x14) *
          ((_DAT_1831d9968 ^ 0x84222338) + (ulonglong)((uint)_DAT_1831d9968 & 0x84222338) * 2);
  uVar1 = (uVar1 | _DAT_1831d99e8) + (uVar1 & _DAT_1831d99e8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831d9a88 = func_0x000188844250((uVar1 | 0x8422232b) + (ulonglong)((uint)uVar1 & 0x8422232b))
  ;
  uVar1 = _DAT_1831d9a88 ^ 2;
  _DAT_1831d9a48 = _DAT_1831d99e0 ^ uVar1 ^ 0x30;
  _DAT_1831d9920 = (_DAT_1831d9920 ^ uVar1) + 0x30 ^ 0x1fa17551ae27fe5a;
  _DAT_1831d9aa0 = (_DAT_1831d9aa0 * -0xcb349a681248121 ^ _DAT_1831d9920) + uVar1;
  _DAT_1831d9ac0 = _DAT_1831d9aa0 ^ _DAT_1831d9920;
  _DAT_1831d99f8 = 0x30;
  _DAT_1831d9ab8 = func_0x000188844250(_DAT_1831d99f0 + 0xffdcff84180021ff ^ 0x79);
  uVar1 = _DAT_1831d9ab8 << 0x22 | _DAT_1831d9ab8 >> 0x1e & 0xffffffffc0000000;
  _DAT_1831d9920 = (_DAT_1831d9920 ^ uVar1) - 0x3d ^ 0x8c5f71bf9c1f37e4;
  _DAT_1831d9a80 = (_DAT_1831d9a80 * -0x2537e544ee3af66f ^ _DAT_1831d9920) + uVar1;
  _DAT_1831d9a08 = _DAT_1831d9a80 ^ _DAT_1831d9920;
  _DAT_1831d9938 = _DAT_1831d9a20 ^ 0xffffffffffffffc3;
  _DAT_1831d99d8 = 0xc3;
  _DAT_1831d9938 = func_0x000188844250(_DAT_1831d9970 + 0x1d007c17ffe1ff ^ 0xa9);
  _DAT_1831d99a0 = _DAT_1831d9968 ^ _DAT_1831d9938 ^ 0x6d;
  _DAT_1831d9970 = (_DAT_1831d9970 ^ _DAT_1831d9938) + 0x6d ^ 0xad56ac3d903099d0;
  _DAT_1831d9938 = (_DAT_1831d9938 * -0x4eb95ca6607f5e0d ^ _DAT_1831d9970) + _DAT_1831d9938;
  _DAT_1831d9900 = _DAT_1831d9938 ^ _DAT_1831d9970;
  _DAT_1831d9a58 = _DAT_1831d9990 ^ 0x6d;
  _DAT_1831d9a10 = 0x6d;
  _DAT_1831d9a48 = func_0x000188844250(_DAT_1831d9a30 ^ 0x230083d40021c5);
  _DAT_1831d9958 = _DAT_1831d9908 ^ _DAT_1831d9a48 ^ 0x181;
  _DAT_1831d9908 = (_DAT_1831d9908 ^ _DAT_1831d9a48) + 0x181 ^ 0x4fe9b9b356d9977a;
  _DAT_1831d9a98 = (_DAT_1831d9a98 * -0x33855d3b95a005fb ^ _DAT_1831d9908) + _DAT_1831d9a48;
  _DAT_1831d9980 = _DAT_1831d9a98 ^ _DAT_1831d9908;
  _DAT_1831d9a18 = 0x81;
  uVar1 = (_DAT_1831d9920 ^ unaff_XMM7_Qa) + _DAT_1831d9938 + unaff_RSI;
  uVar2 = (_DAT_1831d9938 ^ unaff_XMM7_Qb) + _DAT_1831d9920 + 0xac;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831d9920 ^ unaff_XMM7_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831d9938 ^ unaff_XMM7_Qb;
  _DAT_1831d9ab0 =
       func_0x000188844250((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831d9920 + 0xac) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831d9938 + unaff_RSI));
  uVar1 = _DAT_1831d9a70 << 10 | _DAT_1831d9a70 >> 0x36;
  _DAT_1831d9a88 = (_DAT_1831d9a88 ^ uVar1) + 0x79 ^ 0xd899a7b59c690ca2;
  _DAT_1831d9a28 = (_DAT_1831d9a28 * 0x4f183a39f6c9ba5d ^ _DAT_1831d9a88) + uVar1;
  _DAT_1831d9a20 = _DAT_1831d9a28 ^ _DAT_1831d9a88;
  _DAT_1831d9a50 = 0x79;
  uVar1 = (_DAT_1831d99f0 ^ unaff_XMM7_Qa) + _DAT_1831d9af0 + unaff_RSI;
  uVar2 = (_DAT_1831d9af0 ^ unaff_XMM7_Qb) + _DAT_1831d99f0 + 0xac;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831d99f0 ^ unaff_XMM7_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831d9af0 ^ unaff_XMM7_Qb;
  _DAT_1831d9a88 =
       func_0x000188844250((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831d99f0 + 0xac) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831d9af0 + unaff_RSI));
  _DAT_1831d9950 = (_DAT_1831d9950 ^ _DAT_1831d9a88) + 0x84 ^ 0xf3ed416e280b0a57;
  _DAT_1831d9af0 = (_DAT_1831d9af0 * 0x7f0d8a951d304311 ^ _DAT_1831d9950) + _DAT_1831d9a88;
  _DAT_1831d9970 = _DAT_1831d9af0 ^ _DAT_1831d9950;
  _DAT_1831d9a40 = 0x84;
  uVar1 = (_DAT_1831d9ab0 ^ unaff_XMM8_Qa) + _DAT_1831d9a58 + 0x8422235c;
  uVar2 = (_DAT_1831d9a58 ^ unaff_XMM8_Qb) + _DAT_1831d9ab0 + 8;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831d9ab0 ^ unaff_XMM8_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831d9a58 ^ unaff_XMM8_Qb;
  _DAT_1831d9a50 =
       func_0x000188844250((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831d9ab0 + 8) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831d9a58 + 0x8422235c));
  uVar1 = _DAT_1831d9a50 ^ 0x79;
  _DAT_1831d9a20 = _DAT_1831d9a30 ^ uVar1 ^ 0x81;
  _DAT_1831d9a10 = (_DAT_1831d9a10 ^ uVar1) + 0x81 ^ 0x43c48a527e7eb921;
  _DAT_1831d9938 = (_DAT_1831d9938 * -0x5597e4021df17b1f ^ _DAT_1831d9a10) + uVar1;
  _DAT_1831d9a70 = _DAT_1831d9938 ^ _DAT_1831d9a10;
  _DAT_1831d9af0 = 0x81;
  _DAT_1831d9900 = func_0x000188844250(_DAT_1831d99a8 + 0x22ff7bf30021ff ^ 0x20);
  uVar1 = _DAT_1831d9ac8 ^ 0x30;
  _DAT_1831d9a98 = _DAT_1831d9948 ^ uVar1 ^ 0x30;
  _DAT_1831d9a50 = (_DAT_1831d9a50 ^ uVar1) + 0x30 ^ 0xedd4629febaee014;
  _DAT_1831d9aa0 = (_DAT_1831d9aa0 * -0x20216518ab4b8583 ^ _DAT_1831d9a50) + uVar1;
  _DAT_1831d9960 = _DAT_1831d9aa0 ^ _DAT_1831d9a50;
  _DAT_1831d9ab0 = 0x30;
  uVar1 = ((_DAT_1831d9ab8 ^ unaff_RBX) + (ulonglong)((uint)_DAT_1831d9ab8 & 0x84222315) * 2) *
          -_DAT_1831d9a00;
  uVar1 = (uVar1 | _DAT_1831d9a90) + (uVar1 & _DAT_1831d9a90);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831d9928 = func_0x000188844250((uVar1 | unaff_RBX) + (ulonglong)((uint)uVar1 & 0x84222315));
  uVar1 = (ulonglong)((uint)_DAT_1831d9928 ^ 0x30) << 0x29 | _DAT_1831d9928 >> 0x17;
  _DAT_1831d9970 = _DAT_1831d9950 ^ uVar1 ^ 0x30;
  _DAT_1831d9a50 = (_DAT_1831d9a50 ^ uVar1) + 0x30 ^ 0x285f832b37f1713f;
  _DAT_1831d99d0 = (_DAT_1831d99d0 * 0x2b61cc72fec58901 ^ _DAT_1831d9a50) + uVar1;
  _DAT_1831d9a18 = _DAT_1831d99d0 ^ _DAT_1831d9a50;
  _DAT_1831d9998 = 0x30;
  uVar1 = (~_DAT_1831d99e8 + 0x16) *
          ((_DAT_1831d99c8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831d99c8 & 0x84222330) * 2);
  uVar1 = (uVar1 | _DAT_1831d9938) + (uVar1 & _DAT_1831d9938);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831d9ad8 = func_0x000188844250((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = (_DAT_1831d9ad8 ^ 0x1b9) * -0x10d3d0febf38503f;
  _DAT_1831d9988 = _DAT_1831d9988 ^ uVar1 ^ 0x42e1ce57867ec600;
  _DAT_1831d9aa0 = (_DAT_1831d9aa0 * -0x199631f6339ca317 ^ _DAT_1831d9988) + uVar1;
  _DAT_1831d9af0 = _DAT_1831d9aa0 ^ _DAT_1831d9988;
  _DAT_1831d9940 = 0;
  _DAT_1831d99a0 = func_0x000188844250(_DAT_1831d9a00 + 0xffdcff7bed001dffU ^ 0x1a);
  uVar1 = (_DAT_1831d99a0 << 0x38 | _DAT_1831d99a0 >> 8) << 6 | (_DAT_1831d99a0 & 0xff) >> 2;
  _DAT_1831d9af0 = _DAT_1831d9958 ^ uVar1 ^ 0x30;
  _DAT_1831d9a40 = (_DAT_1831d9a40 ^ uVar1) + 0x30 ^ 0x5bb6ea3469fdc9f4;
  _DAT_1831d9920 = (_DAT_1831d9920 * -0x11bf9133ca722969 ^ _DAT_1831d9a40) + uVar1;
  _DAT_1831d9910 = _DAT_1831d9920 ^ _DAT_1831d9a40;
  _DAT_1831d9a18 = 0x30;
  uVar2 = (ulonglong)unaff_R15B;
  uVar1 = (~_DAT_1831d9900 + 0x31) *
          ((uVar2 ^ 0x84222315) + (ulonglong)((unaff_R15B ^ 0x84222325) & 0x30) * 2);
  uVar1 = (uVar1 | _DAT_1831d99f0) + (uVar1 & _DAT_1831d99f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831d9a88 =
       func_0x000188844250((uVar2 ^ unaff_RBX | uVar1) +
                           (ulonglong)((uint)(uVar2 ^ unaff_RBX) & (uint)uVar1));
  _DAT_1831d99d8 = uVar2 | 0x30;
  _DAT_1831d9ad0 = (_DAT_1831d9ad0 ^ _DAT_1831d9a18) + _DAT_1831d99d8 ^ 0x7b1126b9d7fbe773;
  _DAT_1831d9af0 = (_DAT_1831d9af0 * 0x6a4bc0c42a737213 ^ _DAT_1831d9ad0) + _DAT_1831d9a18;
  _DAT_1831d99f8 = _DAT_1831d9af0 ^ _DAT_1831d9ad0;
  *(char *)(unaff_RBP + -0x51 + unaff_RDI) = (char)_DAT_1831d99d8;
  switch(unaff_R13D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8820008 (image 188820008) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188820597 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188820008(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
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
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong in_RAX;
  longlong in_RCX;
  ulonglong uVar31;
  longlong *plVar32;
  longlong *unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  undefined1 auVar45 [16];
  uint uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  uVar35 = param_1 + in_RAX + param_2;
  uVar38 = param_3 + in_RCX + unaff_RDI;
  param_1 = (uVar35 * 0x2000 | uVar35 >> 0x33) ^ param_1;
  param_3 = (uVar38 * 0x2000 | uVar38 >> 0x33) ^ param_3;
  _DAT_1831d9970 =
       func_0x000188844250((param_3 << 0x1d | param_3 >> 0x23) - (in_RCX + unaff_RDI) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  auVar43._8_4_ = 0xffffffff;
  auVar43._0_8_ = 0xffffffffffffffff;
  auVar43._12_4_ = 0xffffffff;
  uVar31 = ~((unaff_RSI | unaff_RDI) ^ _DAT_1831d9970) & unaff_RSI;
  uVar36 = (uint)(unaff_RSI >> 0x20);
  auVar42._8_4_ = (int)unaff_RSI;
  auVar42._0_8_ = unaff_RSI;
  auVar42._12_4_ = uVar36;
  uVar37 = (uint)(unaff_RDI >> 0x20);
  auVar40._8_4_ = (int)unaff_RDI;
  auVar40._0_8_ = unaff_RDI;
  auVar40._12_4_ = uVar37;
  uVar39 = auVar42._8_8_ >> 0x20;
  unaff_RBP[0x10] = (ulonglong)uVar36;
  unaff_RBP[0x11] = uVar39;
  uVar30 = _UNK_181039848;
  uVar29 = _DAT_181039840;
  uVar28 = _UNK_181039838;
  uVar27 = _DAT_181039830;
  uVar26 = _UNK_181039818;
  uVar25 = _DAT_181039810;
  uVar24 = _UNK_1810397f8;
  uVar23 = _DAT_1810397f0;
  uVar3 = _DAT_181039800 & 0xffffffff;
  uVar15 = _UNK_181039808 & 0xffffffff;
  uVar35 = _DAT_181039800 & 0xffffffff;
  uVar9 = _UNK_181039808 & 0xffffffff;
  auVar41 = auVar42 & auVar40;
  auVar48 = auVar42 | auVar40;
  auVar43 = auVar42 ^ auVar43;
  uVar38 = _DAT_181039820 & 0xffffffff;
  uVar10 = _UNK_181039828 & 0xffffffff;
  uVar4 = _DAT_1810397f0 & 0xffffffff;
  uVar16 = _UNK_1810397f8 & 0xffffffff;
  uVar5 = _DAT_181039810 & 0xffffffff;
  uVar17 = _UNK_181039818 & 0xffffffff;
  uVar6 = _DAT_181039820 & 0xffffffff;
  uVar18 = _UNK_181039828 & 0xffffffff;
  uVar33 = auVar41._0_4_;
  uVar7 = _DAT_181039830 & 0xffffffff;
  uVar34 = auVar41._8_8_;
  uVar19 = _UNK_181039838 & 0xffffffff;
  unaff_RBP[0xe] = auVar41._0_8_ >> 0x20;
  unaff_RBP[0xf] = uVar34 >> 0x20;
  uVar1 = _DAT_181039860 & 0xffffffff;
  uVar11 = _UNK_181039868 & 0xffffffff;
  *(undefined1 (*) [16])(unaff_RBP + 0xc) = auVar48;
  uVar8 = _DAT_181039850 & 0xffffffff;
  uVar20 = _UNK_181039858 & 0xffffffff;
  uVar2 = _DAT_181039850 & 0xffffffff;
  uVar12 = _UNK_181039858 & 0xffffffff;
  auVar45 = auVar42 ^ auVar40;
  uVar44 = auVar45._0_4_;
  *(undefined1 (*) [16])(unaff_RBP + 6) = auVar43;
  uVar21 = _UNK_181039878 & 0xffffffff;
  uVar13 = _UNK_181039878 & 0xffffffff;
  auVar47._8_4_ = 0xffffffff;
  auVar47._0_8_ = 0xffffffffffffffff;
  auVar47._12_4_ = 0xffffffff;
  auVar47 = auVar47 ^ auVar40;
  uVar46 = auVar47._0_4_;
  uVar22 = _UNK_181039888 & 0xffffffff;
  uVar14 = _UNK_181039888 & 0xffffffff;
  *unaff_RBP = (_DAT_181039880 & 0xffffffff) * (ulonglong)uVar46 +
               ((auVar47._0_8_ >> 0x20) * (_DAT_181039880 & 0xffffffff) +
                (uVar25 & 0xffffffff) * (ulonglong)uVar46 << 0x20) +
               (_DAT_181039870 & 0xffffffff) * (ulonglong)auVar43._0_4_ +
               ((auVar43._0_8_ >> 0x20) * (_DAT_181039870 & 0xffffffff) +
                (uVar23 & 0xffffffff) * (ulonglong)auVar43._0_4_ << 0x20) +
               (uVar29 & 0xffffffff) * (ulonglong)uVar44 +
               ((auVar45._0_8_ >> 0x20) * (uVar29 & 0xffffffff) +
                (uVar27 & 0xffffffff) * (ulonglong)uVar44 << 0x20) +
               (ulonglong)uVar33 * (uVar29 & 0xffffffff) +
               ((auVar41._0_8_ >> 0x20) * (uVar29 & 0xffffffff) + uVar33 * uVar7 << 0x20) +
               uVar38 * (unaff_RDI & 0xffffffff) +
               (uVar37 * uVar6 + (unaff_RDI & 0xffffffff) * uVar5 << 0x20) +
               uVar35 * (unaff_RSI & 0xffffffff) +
               (uVar36 * uVar3 + (unaff_RSI & 0xffffffff) * uVar4 << 0x20) +
               uVar2 * auVar48._0_4_ +
               (uVar1 * auVar48._0_4_ + (auVar48._0_8_ >> 0x20) * uVar8 << 0x20);
  unaff_RBP[1] = uVar14 * auVar47._8_4_ +
                 ((auVar47._8_8_ >> 0x20) * uVar22 +
                  (uVar26 & 0xffffffff) * (ulonglong)auVar47._8_4_ << 0x20) +
                 uVar13 * auVar43._8_4_ +
                 ((auVar43._8_8_ >> 0x20) * uVar21 +
                  (uVar24 & 0xffffffff) * (ulonglong)auVar43._8_4_ << 0x20) +
                 (uVar30 & 0xffffffff) * (ulonglong)auVar45._8_4_ +
                 ((auVar45._8_8_ >> 0x20) * (uVar30 & 0xffffffff) +
                  (uVar28 & 0xffffffff) * (ulonglong)auVar45._8_4_ << 0x20) +
                 (uVar34 & 0xffffffff) * (uVar30 & 0xffffffff) +
                 ((uVar34 >> 0x20) * (uVar30 & 0xffffffff) + (uVar34 & 0xffffffff) * uVar19 << 0x20)
                 + uVar10 * (unaff_RDI & 0xffffffff) +
                   ((auVar40._8_8_ >> 0x20) * uVar18 + (auVar40._8_8_ & 0xffffffff) * uVar17 << 0x20
                   ) + uVar9 * (unaff_RSI & 0xffffffff) +
                       (uVar39 * uVar15 + (auVar42._8_8_ & 0xffffffff) * uVar16 << 0x20) +
                 uVar12 * auVar48._8_4_ +
                 (uVar11 * auVar48._8_4_ + (auVar48._8_8_ >> 0x20) * uVar20 << 0x20);
  _DAT_1831d9968 =
       (*unaff_RBP -
       ((ulonglong)uVar46 * (ulonglong)_DAT_1810398e0 +
        ((auVar47._0_8_ >> 0x20) * (ulonglong)_DAT_1810398e0 +
         (ulonglong)_DAT_1810398d0 * (ulonglong)uVar46 << 0x20) +
        (unaff_RBP[6] & 0xffffffffU) * (_DAT_1810398c0 & 0xffffffff) +
        ((auVar43._0_8_ >> 0x20) * (_DAT_1810398c0 & 0xffffffff) +
         (ulonglong)_DAT_1810398b0 * (unaff_RBP[6] & 0xffffffffU) << 0x20) +
        (ulonglong)uVar44 * (ulonglong)_DAT_181039900 +
        ((auVar45._0_8_ >> 0x20) * (ulonglong)_DAT_181039900 +
         (ulonglong)_DAT_1810398f0 * (ulonglong)uVar44 << 0x20) +
        (ulonglong)uVar33 * (ulonglong)_DAT_181039900 +
        ((ulonglong)*(uint *)(unaff_RBP + 0xe) * (ulonglong)_DAT_181039900 +
         (ulonglong)uVar33 * (ulonglong)_DAT_1810398f0 << 0x20) +
        (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1810398e0 +
        ((ulonglong)uVar37 * (ulonglong)_DAT_1810398e0 +
         (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1810398d0 << 0x20) +
        (unaff_RSI & 0xffffffff) * (_DAT_1810398c0 & 0xffffffff) +
        ((ulonglong)*(uint *)(unaff_RBP + 0x10) * (_DAT_1810398c0 & 0xffffffff) +
         (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_1810398b0 << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 0xc) * (ulonglong)_DAT_181039910 +
       ((ulonglong)_DAT_181039920 * (ulonglong)*(uint *)(unaff_RBP + 0xc) +
        (auVar48._0_8_ >> 0x20) * (ulonglong)_DAT_181039910 << 0x20))) + 0x318065c6afb22cf8;
  _DAT_1831d9ae0 = _DAT_1831d9968 ^ uVar31;
  _DAT_1831d99e0 = (_DAT_1831d99e0 ^ uVar31) + _DAT_1831d9968 ^ 0xc7489a5e28af6077;
  _DAT_1831d9990 = (_DAT_1831d9990 * -0x3cf8226699cd35af ^ _DAT_1831d99e0) + uVar31;
  _DAT_1831d9948 = _DAT_1831d9990 ^ _DAT_1831d99e0;
  plVar32 = unaff_RBP + -6;
  FUN_18414b520(plVar32);
  if (0xf < (ulonglong)unaff_RBP[-3]) {
    plVar32 = (longlong *)unaff_RBP[-6];
  }
  (**(code **)(*(longlong *)unaff_RBP[0xb] + 0x70))((longlong *)unaff_RBP[0xb],unaff_RBP[3],plVar32)
  ;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8846936 (image 188846936) =====

void FUN_188846936(void)

{
  return;
}



// ===== continuation @ rva 884679f (image 18884679f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884679f(void)

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



// ===== continuation @ rva 884b041 (image 18884b041) =====

void FUN_18884b041(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 8849ff7 (image 188849ff7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188849ff7(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x120))(in_stack_00000030);
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



// ===== continuation @ rva 8849fb3 (image 188849fb3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188849fb3(void)

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



// ===== continuation @ rva 8848c22 (image 188848c22) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188846db2(void)

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



// ===== continuation @ rva 88477f9 (image 1888477f9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188846db2(void)

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



// ===== continuation @ rva 884af3b (image 18884af3b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884af3b(void)

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



// ===== continuation @ rva 8848afb (image 188848afb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188848afb(void)

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



// ===== continuation @ rva 8848892 (image 188848892) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188848892(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0xd8))(in_stack_00000030,in_stack_00000038);
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



// ===== continuation @ rva 8848600 (image 188848600) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188846db2(void)

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



// ===== continuation @ rva 884b2e3 (image 18884b2e3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884b2e3(void)

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



// ===== continuation @ rva 884b28f (image 18884b28f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884b28f(void)

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



// ===== continuation @ rva 884c048 (image 18884c048) =====

void FUN_18884c048(void)

{
  return;
}



// ===== continuation @ rva 884b827 (image 18884b827) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884b827(void)

{
  FUN_190dd72e0();
  (*_DAT_18103f488)();
  return;
}



// ===== continuation @ rva 884c013 (image 18884c013) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884c013(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18103f308)();
  return;
}



// ===== continuation @ rva 884bcb6 (image 18884bcb6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884bcb6(void)

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



// ===== continuation @ rva 884c056 (image 18884c056) =====

void FUN_18884c056(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 884be22 (image 18884be22) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884be22(void)

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



// ===== continuation @ rva 884be08 (image 18884be08) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884be08(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_18103f068)();
  return;
}



// ===== continuation @ rva 884b648 (image 18884b648) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884b648(void)

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



// ===== continuation @ rva 884bf80 (image 18884bf80) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884bf80(void)

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



// ===== continuation @ rva 884b8f4 (image 18884b8f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884b8f4(void)

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



// ===== continuation @ rva 884bee3 (image 18884bee3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884bee3(void)

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



// ===== continuation @ rva 884ea9d (image 18884ea9d) =====

void FUN_18884ea9d(void)

{
  return;
}



// ===== continuation @ rva 884c1c0 (image 18884c1c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884c1c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18103fc98)();
  return;
}



// ===== continuation @ rva 884ea42 (image 18884ea42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884ea42(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18103feb8)();
  return;
}



// ===== continuation @ rva 884cec0 (image 18884cec0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884cec0(void)

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



// ===== continuation @ rva 884e7a4 (image 18884e7a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884e7a4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18103f7f8)();
  return;
}



// ===== continuation @ rva 884e38e (image 18884e38e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884e38e(void)

{
  FUN_190de3220();
  (*_DAT_18103fb38)();
  return;
}



// ===== continuation @ rva 884cd57 (image 18884cd57) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884cd57(void)

{
  (*_DAT_1810402c8)();
  return;
}



// ===== continuation @ rva 884e9a2 (image 18884e9a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884e9a2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18103f7d8)();
  return;
}



// ===== continuation @ rva 884d9da (image 18884d9da) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18884d9da(void)

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



// ===== continuation @ rva 884e8cb (image 18884e8cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884e8cb(void)

{
  (*_DAT_1810402c8)();
  return;
}



// ===== continuation @ rva 884c90c (image 18884c90c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884c90c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181040088)();
  return;
}



// ===== continuation @ rva 884c349 (image 18884c349) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884c349(void)

{
  FUN_190dd72e0();
  (*_DAT_1810401d8)();
  return;
}



// ===== continuation @ rva 884d2f2 (image 18884d2f2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18884d2f2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181040388)();
  return;
}



// ===== continuation @ rva 8809dbb (image 188809dbb) =====

void FUN_188809dbb(void)

{
  return;
}



// ===== continuation @ rva 87fe2a1 (image 1887fe2a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fe2a1(void)

{
  FUN_190ddce00();
  (*_DAT_181031378)();
  return;
}



// ===== continuation @ rva 8808d34 (image 188808d34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188808d34(void)

{
  (*_DAT_181031928)();
  return;
}



// ===== continuation @ rva 8808971 (image 188808971) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188808971(void)

{
  (*_DAT_1810319a8)();
  return;
}



// ===== continuation @ rva 8806ceb (image 188806ceb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188806ceb(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x120))(in_stack_00000040);
  (*_DAT_181030c78)();
  return;
}



// ===== continuation @ rva 8806ae7 (image 188806ae7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188806ae7(void)

{
  longlong *in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000040 + 0x720))(in_stack_00000040);
  (*_DAT_1810309d8)();
  return;
}



// ===== continuation @ rva 8808470 (image 188808470) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188808470(void)

{
  (*_DAT_181031928)();
  return;
}



// ===== continuation @ rva 8809739 (image 188809739) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188809739(void)

{
  (*_DAT_181031968)();
  return;
}



// ===== continuation @ rva 8809da8 (image 188809da8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188809da8(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x68))();
  (*_DAT_181031268)();
  return;
}



// ===== continuation @ rva 8807f11 (image 188807f11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188807f11(void)

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



// ===== continuation @ rva 8808c69 (image 188808c69) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188808c69(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181030ed8)();
  return;
}



// ===== continuation @ rva 88076a2 (image 1888076a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888076a2(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x570))(in_stack_00000040);
  (*_DAT_181030f28)();
  return;
}



// ===== continuation @ rva 881b030 (image 18881b030) =====

void FUN_18881b030(void)

{
  return;
}



// ===== continuation @ rva 8812e51 (image 188812e51) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188812e51(void)

{
  FUN_190ddce00();
  (*_DAT_1810368e8)();
  return;
}



// ===== continuation @ rva 881b028 (image 18881b028) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881b028(void)

{
  (*_DAT_181036be8)();
  return;
}



// ===== continuation @ rva 881a067 (image 18881a067) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881a067(void)

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



// ===== continuation @ rva 8819e79 (image 188819e79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188819e79(void)

{
  FUN_190ddfc90();
  (*_DAT_181035cc8)();
  return;
}



// ===== continuation @ rva 881a774 (image 18881a774) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881a774(void)

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



// ===== continuation @ rva 881afe5 (image 18881afe5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18881afe5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181036748)();
  return;
}



// ===== continuation @ rva 8818ba1 (image 188818ba1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188818ba1(void)

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



// ===== continuation @ rva 881a2fe (image 18881a2fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18881a2fe(void)

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



// ===== continuation @ rva 8819552 (image 188819552) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188819552(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1810367c8)();
  return;
}



// ===== continuation @ rva 88198b8 (image 1888198b8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888198b8(void)

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



// ===== continuation @ rva 88867de (image 1888867de) =====

void FUN_1888867de(void)

{
  return;
}



// ===== continuation @ rva 887dafe (image 18887dafe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18887dafe(void)

{
  FUN_190ddce00();
  (*_DAT_18104d938)();
  return;
}



// ===== continuation @ rva 8886895 (image 188886895) =====

void FUN_188886895(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8884278 (image 188884278) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188884278(void)

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



// ===== continuation @ rva 8885d1c (image 188885d1c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188885d1c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18104d928)();
  return;
}



// ===== continuation @ rva 8884dfd (image 188884dfd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188884dfd(void)

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



// ===== continuation @ rva 8884e61 (image 188884e61) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188884e61(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_18104d978)();
  return;
}



// ===== continuation @ rva 888688d (image 18888688d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18888688d(void)

{
  (*_DAT_18104db28)();
  return;
}



// ===== continuation @ rva 8884c22 (image 188884c22) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188884c22(void)

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



// ===== continuation @ rva 8884315 (image 188884315) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188884315(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_18104de68)();
  return;
}



// ===== continuation @ rva 888684a (image 18888684a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18888684a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_18104ddb8)();
  return;
}



// ===== continuation @ rva 8885004 (image 188885004) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188885004(void)

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



// ===== continuation @ rva 8884fd1 (image 188884fd1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188884fd1(void)

{
  FUN_190ddfc90();
  (*_DAT_18104cef8)();
  return;
}



// ===== continuation @ rva 88759be (image 1888759be) =====

void FUN_1888759be(void)

{
  return;
}



// ===== continuation @ rva 886da9e (image 18886da9e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18886da9e(void)

{
  FUN_190ddce00();
  (*_DAT_181048ae8)();
  return;
}



// ===== continuation @ rva 88759b6 (image 1888759b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888759b6(void)

{
  (*_DAT_1810489e8)();
  return;
}



// ===== continuation @ rva 8875998 (image 188875998) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188875998(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_1810489e8)();
    return;
  }
  (*_DAT_1810489e8)();
  return;
}



// ===== continuation @ rva 8875973 (image 188875973) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188875973(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181048688)();
  return;
}



// ===== continuation @ rva 8873a8a (image 188873a8a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188873a8a(void)

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



// ===== continuation @ rva 88757fc (image 1888757fc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888757fc(void)

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



// ===== continuation @ rva 8873083 (image 188873083) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188873083(void)

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



// ===== continuation @ rva 88740e6 (image 1888740e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888740e6(void)

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



// ===== continuation @ rva 88750ff (image 1888750ff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888750ff(void)

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



// ===== continuation @ rva 887399f (image 18887399f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18887399f(void)

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



// ===== continuation @ rva 888fd14 (image 18888fd14) =====

void FUN_18888fd14(void)

{
  return;
}



// ===== continuation @ rva 8886a81 (image 188886a81) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188886a81(void)

{
  FUN_190ddce00();
  (*_DAT_181050608)();
  return;
}



// ===== continuation @ rva 888fcc4 (image 18888fcc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18888fcc4(void)

{
  longlong *in_stack_00000060;
  
  (**(code **)(*in_stack_00000060 + 0x120))(in_stack_00000060);
  (*_DAT_18104fc28)();
  return;
}



// ===== continuation @ rva 888fc6b (image 18888fc6b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18888fc6b(void)

{
  char cVar1;
  longlong *in_stack_00000060;
  
  FUN_190dd72e0(in_stack_00000060,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*in_stack_00000060 + 0x720))(in_stack_00000060);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 888ed38 (image 18888ed38) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18888ed38(void)

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



// ===== continuation @ rva 888f12e (image 18888f12e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18888f12e(void)

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



// ===== continuation @ rva 888fd0c (image 18888fd0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18888fd0c(void)

{
  (*_DAT_1810503c8)();
  return;
}



// ===== continuation @ rva 888d511 (image 18888d511) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18888d511(void)

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



// ===== continuation @ rva 888f3cb (image 18888f3cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18888f3cb(void)

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



// ===== continuation @ rva 888e840 (image 18888e840) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18888e840(void)

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



// ===== continuation @ rva 888fbd5 (image 18888fbd5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18888fbd5(void)

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



// ===== continuation @ rva 87fe034 (image 1887fe034) =====

void FUN_1887fe034(void)

{
  return;
}



// ===== continuation @ rva 87f7252 (image 1887f7252) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887f7252(void)

{
  FUN_190ddce00();
  (*_DAT_18102e038)();
  return;
}



// ===== continuation @ rva 87fdfee (image 1887fdfee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fdfee(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_18102e348)();
  return;
}



// ===== continuation @ rva 87fdf9a (image 1887fdf9a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fdf9a(void)

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



// ===== continuation @ rva 87fdbd2 (image 1887fdbd2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fdbd2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_18102e188)();
  return;
}



// ===== continuation @ rva 87fda6d (image 1887fda6d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fda6d(void)

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



// ===== continuation @ rva 87fcec5 (image 1887fcec5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1887fcec5(void)

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



// ===== continuation @ rva 87fce88 (image 1887fce88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fce88(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  FUN_190dd72e0();
  (*_DAT_18102e018)();
  return;
}



// ===== continuation @ rva 87fe02c (image 1887fe02c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fe02c(void)

{
  (*_DAT_18102e618)();
  return;
}



// ===== continuation @ rva 87f7285 (image 1887f7285) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1887f7285(void)

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



// ===== continuation @ rva 87fd5b5 (image 1887fd5b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fd5b5(void)

{
  FUN_190de3220();
  (*_DAT_18102e418)();
  return;
}



// ===== continuation @ rva 87fdc6c (image 1887fdc6c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1887fdc6c(void)

{
  FUN_190ddfc90();
  (*_DAT_18102e5e8)();
  return;
}



// ===== continuation @ rva 886d850 (image 18886d850) =====

void FUN_18886d850(void)

{
  return;
}



// ===== continuation @ rva 8863831 (image 188863831) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188863831(void)

{
  FUN_190ddce00();
  (*_DAT_1810460e8)();
  return;
}



// ===== continuation @ rva 886d848 (image 18886d848) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18886d848(void)

{
  (*_DAT_181046858)();
  return;
}



// ===== continuation @ rva 886d0b6 (image 18886d0b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18886d0b6(void)

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



// ===== continuation @ rva 886c046 (image 18886c046) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18886c046(void)

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



// ===== continuation @ rva 88638f2 (image 1888638f2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888638f2(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *unaff_RSI;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar35;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar36;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar49;
  undefined1 auVar37 [16];
  ulonglong uVar50;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  ulonglong uVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  ulonglong uVar82;
  uint uVar85;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [16];
  ulonglong uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ulonglong uVar91;
  undefined1 auVar92 [16];
  ulonglong uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  ulonglong uStack00000000000000a8;
  ulonglong in_stack_000000b0;
  ulonglong uStack00000000000000f0;
  uint uStack0000000000000130;
  
  uVar50 = _DAT_181045938;
  uVar14 = _DAT_181045930;
  auVar22 = _DAT_1800170c0;
  uStack00000000000000a8 = in_stack_000000b0;
  uStack00000000000000f0 = _DAT_181045930 ^ 0x84222325;
  auVar23._8_8_ = _UNK_1810469f8;
  auVar23._0_8_ = uStack00000000000000f0;
  auVar21 = pshufb(auVar23 ^ _DAT_181046a00,_DAT_1800170c0);
  uVar15 = auVar21._8_8_ + auVar21._0_8_;
  uVar12 = uVar15 + _DAT_1831daee0;
  if (auVar21._4_4_ < 0) {
    uVar12 = _DAT_1831dad40 ^ uVar15;
  }
  _DAT_1831dad98 = func_0x00018886d920(SUB161(auVar23 ^ _DAT_181046a00,5) ^ uVar12);
  uVar12 = _DAT_1831dad98 & 0x7fffffffffffffff ^ 0xb1d06c21238be4e2;
  uVar18 = uVar14 | 0xb1d06c21238be4e2;
  _DAT_1831dad30 = (_DAT_1831dad30 ^ uVar12) + uVar18 ^ 0xb4adb5046c8a3468;
  _DAT_1831dadd8 = (_DAT_1831dad18 * 0x185af9f411588def ^ _DAT_1831dad30) + uVar12 ^ _DAT_1831dad30;
  _DAT_1831dad18 = _DAT_1831dadf8 ^ uVar18;
  uVar12 = uVar50 ^ 0x1792653ae9c5da00;
  lVar13 = uVar14 * uVar14;
  uVar19 = lVar13 * -0x1acf02bf86a912b9;
  uVar14 = ((_DAT_1831daea0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831daea0 & 0x84222325) * 2) *
           (uVar19 - _DAT_1831daef0);
  uVar14 = (uVar14 | _DAT_1831daed0) + (uVar14 & _DAT_1831daed0);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831daed8 = uVar18;
  _DAT_1831dadb8 =
       func_0x00018886d920((uVar19 ^ 0x84222325 | uVar14) + (uVar14 & (uVar19 ^ 0x84222325)));
  uVar15 = lVar13 * 0x1acf02bf86a912b9;
  _DAT_1831daea8 =
       (_DAT_1831daea8 ^ _DAT_1831dadb8) + lVar13 * 0x1acf02bf86a912b9 ^ 0xcfe961d708dd5a9a;
  _DAT_1831dadf8 = (_DAT_1831dadf8 * 0x1a12097cff58b1e3 ^ _DAT_1831daea8) + _DAT_1831dadb8;
  _DAT_1831dae68 = _DAT_1831dadf8 ^ _DAT_1831daea8;
  auVar21._8_8_ = uVar19;
  auVar21._0_8_ = _DAT_181046a10;
  auVar22 = pshufb(auVar21 ^ _DAT_181046a20,auVar22);
  uVar16 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar16 + _DAT_1831dad50;
  if (auVar22._4_4_ < 0) {
    uVar14 = _DAT_1831dae88 ^ uVar16;
  }
  _DAT_1831dad20 = uVar15;
  _DAT_1831dae30 = func_0x00018886d920(SUB161(auVar21 ^ _DAT_181046a20,5) ^ uVar14);
  uVar20 = (uint)(uVar19 >> 0x20);
  auVar61._8_4_ = (int)uVar19;
  auVar61._0_8_ = uVar19;
  auVar61._12_4_ = uVar20;
  uVar60 = SUB164(auVar61 & _DAT_181046a30,0);
  uVar82 = SUB168(auVar61 & _DAT_181046a30,0);
  uVar35 = SUB164(auVar61 | _DAT_181046a30,0);
  uVar16 = SUB168(auVar61 | _DAT_181046a30,0);
  uVar14 = _DAT_1831dae30 & 0xfffffffffffff800;
  auVar22._8_4_ = 0xffffffff;
  auVar22._0_8_ = 0xffffffffffffffff;
  auVar22._12_4_ = 0xffffffff;
  uVar49 = SUB164(_DAT_181046a30 ^ auVar61,0);
  uVar36 = SUB164(auVar61 ^ auVar22,0);
  uVar19 = (ulonglong)_DAT_181046a70 * (ulonglong)uVar35 +
           ((uVar16 >> 0x20) * (ulonglong)_DAT_181046a70 +
            (ulonglong)_DAT_181046a60 * (ulonglong)uVar35 << 0x20) +
           (ulonglong)uVar60 * (ulonglong)_DAT_181046a70 +
           ((uVar82 >> 0x20) * (ulonglong)_DAT_181046a70 +
            (ulonglong)uVar60 * (ulonglong)_DAT_181046a60 << 0x20) +
           (ulonglong)_DAT_181046a40 * (uVar19 & 0xffffffff) +
           ((ulonglong)_DAT_181046a50 * (uVar19 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_181046a40 << 0x20) +
           (-((ulonglong)uVar36 * (ulonglong)_DAT_181046b20 +
             ((ulonglong)_DAT_181046b30 * (ulonglong)uVar36 +
              (SUB168(auVar61 ^ auVar22,0) >> 0x20) * (ulonglong)_DAT_181046b20 << 0x20)) -
           ((ulonglong)uVar49 * (ulonglong)_DAT_181046b00 +
            ((ulonglong)_DAT_181046b10 * (ulonglong)uVar49 +
             (SUB168(_DAT_181046a30 ^ auVar61,0) >> 0x20) * (ulonglong)_DAT_181046b00 << 0x20) +
            (ulonglong)uVar35 * (ulonglong)_DAT_181046ae0 +
            ((ulonglong)_DAT_181046af0 * (ulonglong)uVar35 +
             (uVar16 >> 0x20) * (ulonglong)_DAT_181046ae0 << 0x20) +
           (ulonglong)uVar60 * (ulonglong)_DAT_181046ac0 +
           ((ulonglong)_DAT_181046ad0 * (ulonglong)uVar60 +
            (uVar82 >> 0x20) * (ulonglong)_DAT_181046ac0 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_181046aa0 +
           ((ulonglong)_DAT_181046ab0 * (uVar19 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_181046aa0 << 0x20))) + _DAT_181046b40;
  _DAT_1831dad60 = _DAT_1831daea8 ^ uVar14 ^ uVar19;
  _DAT_1831dada0 = (_DAT_1831dada0 ^ uVar14) + uVar19 ^ 0x99e00647df853d71;
  _DAT_1831dae40 = (_DAT_1831dae40 * 0x6128cfb1534e3f15 ^ _DAT_1831dada0) + uVar14;
  _DAT_1831dadf0 = _DAT_1831dae40 ^ _DAT_1831dada0;
  uVar16 = uVar19 ^ 0x84222325;
  uVar14 = ((_DAT_1831dae48 ^ uVar16) + (uVar16 & _DAT_1831dae48) * 2) * (uVar15 - _DAT_1831dae78);
  uVar14 = (uVar14 | _DAT_1831dad50) + (uVar14 & _DAT_1831dad50);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831daef0 = uVar19;
  _DAT_1831dadf0 = func_0x00018886d920((uVar16 ^ uVar15 | uVar14) + (uVar14 & (uVar16 ^ uVar15)));
  uVar60 = (uint)(uVar19 >> 0x20);
  auVar37._8_4_ = (int)uVar19;
  auVar37._0_8_ = uVar19;
  auVar37._12_4_ = uVar60;
  uVar35 = (uint)(uVar15 >> 0x20);
  auVar51._8_4_ = (int)uVar15;
  auVar51._0_8_ = uVar15;
  auVar51._12_4_ = uVar35;
  uVar49 = SUB164(auVar37 & auVar51,0);
  uVar82 = SUB168(auVar37 & auVar51,0);
  uVar69 = SUB164(auVar37 | auVar51,0);
  uVar20 = SUB164(auVar37 ^ auVar51,0);
  uVar16 = SUB168(auVar37 ^ auVar51,0);
  auVar95._8_4_ = 0xffffffff;
  auVar95._0_8_ = 0xffffffffffffffff;
  auVar95._12_4_ = 0xffffffff;
  uVar85 = SUB164(auVar51 ^ auVar95,0);
  auVar92._8_4_ = 0xffffffff;
  auVar92._0_8_ = 0xffffffffffffffff;
  auVar92._12_4_ = 0xffffffff;
  uVar36 = SUB164(auVar37 ^ auVar95,0);
  uVar14 = _DAT_1831dadf0 * 0x72d570a805a0dc6f;
  uVar82 = (((ulonglong)uVar85 * (ulonglong)_DAT_181046b90 +
             ((ulonglong)_DAT_181046c00 * (ulonglong)uVar85 +
              (SUB168(auVar51 ^ auVar95,0) >> 0x20) * (ulonglong)_DAT_181046b90 << 0x20) +
            (ulonglong)_DAT_181046be0 * (ulonglong)uVar20 +
            ((ulonglong)_DAT_181046bf0 * (ulonglong)uVar20 +
             (uVar16 >> 0x20) * (ulonglong)_DAT_181046be0 << 0x20) +
            (ulonglong)uVar69 * (ulonglong)_DAT_181046bc0 +
            ((ulonglong)_DAT_181046bd0 * (ulonglong)uVar69 +
             (SUB168(auVar37 | auVar51,0) >> 0x20) * (ulonglong)_DAT_181046bc0 << 0x20) +
            (ulonglong)_DAT_181046ba0 * (ulonglong)uVar49 +
            ((ulonglong)_DAT_181046bb0 * (ulonglong)uVar49 +
             (uVar82 >> 0x20) * (ulonglong)_DAT_181046ba0 << 0x20) +
            (ulonglong)_DAT_181046b70 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_181046b80 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar35 * (ulonglong)_DAT_181046b70 << 0x20) +
            (ulonglong)_DAT_181046b50 * (uVar19 & 0xffffffff) +
            ((ulonglong)_DAT_181046b60 * (uVar19 & 0xffffffff) +
             (ulonglong)uVar60 * (ulonglong)_DAT_181046b50 << 0x20)) -
           ((ulonglong)uVar36 * (ulonglong)_DAT_181046c70 +
            ((ulonglong)_DAT_181046cc0 * (ulonglong)uVar36 +
             (SUB168(auVar37 ^ auVar95,0) >> 0x20) * (ulonglong)_DAT_181046c70 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_181046ca0 +
            ((ulonglong)_DAT_181046cb0 * (ulonglong)uVar20 +
             (uVar16 >> 0x20) * (ulonglong)_DAT_181046ca0 << 0x20) +
           (ulonglong)uVar49 * (ulonglong)_DAT_181046c80 +
           ((ulonglong)_DAT_181046c90 * (ulonglong)uVar49 +
            (uVar82 >> 0x20) * (ulonglong)_DAT_181046c80 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_181046c50 +
           ((ulonglong)_DAT_181046c60 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar35 * (ulonglong)_DAT_181046c50 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_181046c30 +
           ((ulonglong)_DAT_181046c40 * (uVar19 & 0xffffffff) +
            (ulonglong)uVar60 * (ulonglong)_DAT_181046c30 << 0x20))) + _DAT_181046cd0;
  _DAT_1831dae98 = _DAT_1831daea8 ^ uVar14 ^ uVar82;
  _DAT_1831dadf8 = (_DAT_1831dadf8 ^ uVar14) + uVar82 ^ 0xd48854ae80295464;
  _DAT_1831daee8 = (_DAT_1831daee8 * -0x574124d35e7e30a7 ^ _DAT_1831dadf8) + uVar14;
  _DAT_1831dada0 = _DAT_1831daee8 ^ _DAT_1831dadf8;
  uVar15 = uVar50 * uVar50 * 0x77b427f9527f3252;
  uVar14 = uVar82 ^ 0x84222325 ^ _DAT_1831daed0;
  lVar13 = (uVar82 ^ 0x84222325) + _DAT_1831dad80;
  uVar16 = uVar14 + lVar13;
  uVar19 = (uVar15 ^ _DAT_1831dad80) + _DAT_1831daed0 + uVar15;
  uVar14 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ uVar14;
  uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar15 ^ _DAT_1831dad80;
  uVar16 = uVar50 * uVar50 * -0x77b427f9527f3252;
  _DAT_1831dad58 = uVar82;
  _DAT_1831dad08 =
       func_0x00018886d920((uVar19 << 0x1d | uVar19 >> 0x23) - (_DAT_1831daed0 + uVar15) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar13);
  uVar69 = (uint)(uVar82 >> 0x20);
  auVar62._8_4_ = (int)uVar82;
  auVar62._0_8_ = uVar82;
  auVar62._12_4_ = uVar69;
  uVar35 = (uint)(uVar15 >> 0x20);
  auVar52._8_4_ = (int)uVar15;
  auVar52._0_8_ = uVar15;
  auVar52._12_4_ = uVar35;
  uVar60 = SUB164(auVar62 & auVar52,0);
  uVar87 = SUB168(auVar62 & auVar52,0);
  uVar36 = SUB164(auVar62 ^ auVar52,0);
  uVar19 = SUB168(auVar62 ^ auVar52,0);
  uVar20 = SUB164(auVar62 ^ auVar92,0);
  uVar14 = SUB168(auVar62 ^ auVar92,0);
  uVar49 = SUB164(auVar62 | auVar52,0);
  uVar87 = (((_DAT_181046d20 & 0xffffffff) * (ulonglong)uVar20 +
             ((_DAT_181046d70 & 0xffffffff) * (ulonglong)uVar20 +
              (uVar14 >> 0x20) * (_DAT_181046d20 & 0xffffffff) << 0x20) +
             (_DAT_181046d50 & 0xffffffff) * (ulonglong)uVar36 +
             ((_DAT_181046d60 & 0xffffffff) * (ulonglong)uVar36 +
              (uVar19 >> 0x20) * (_DAT_181046d50 & 0xffffffff) << 0x20) +
            (_DAT_181046d30 & 0xffffffff) * (ulonglong)uVar60 +
            ((_DAT_181046d40 & 0xffffffff) * (ulonglong)uVar60 +
             (uVar87 >> 0x20) * (_DAT_181046d30 & 0xffffffff) << 0x20) +
            (_DAT_181046d00 & 0xffffffff) * (uVar15 & 0xffffffff) +
            ((_DAT_181046d10 & 0xffffffff) * (uVar15 & 0xffffffff) +
             (ulonglong)uVar35 * (_DAT_181046d00 & 0xffffffff) << 0x20) +
            (_DAT_181046ce0 & 0xffffffff) * (uVar82 & 0xffffffff) +
            ((_DAT_181046cf0 & 0xffffffff) * (uVar82 & 0xffffffff) +
             (ulonglong)uVar69 * (_DAT_181046ce0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar20 * (_DAT_181046de0 & 0xffffffff) +
            ((_DAT_181046e50 & 0xffffffff) * (ulonglong)uVar20 +
             (uVar14 >> 0x20) * (_DAT_181046de0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_181046e30 +
           ((_DAT_181046e40 & 0xffffffff) * (ulonglong)uVar36 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_181046e30 << 0x20) +
           (ulonglong)uVar49 * (ulonglong)_DAT_181046e10 +
           ((_DAT_181046e20 & 0xffffffff) * (ulonglong)uVar49 +
            (SUB168(auVar62 | auVar52,0) >> 0x20) * (ulonglong)_DAT_181046e10 << 0x20) +
           (ulonglong)uVar60 * (ulonglong)_DAT_181046df0 +
           ((_DAT_181046e00 & 0xffffffff) * (ulonglong)uVar60 +
            (uVar87 >> 0x20) * (ulonglong)_DAT_181046df0 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_181046dc0 +
           ((_DAT_181046dd0 & 0xffffffff) * (uVar15 & 0xffffffff) +
            (ulonglong)uVar35 * (ulonglong)_DAT_181046dc0 << 0x20) +
           (uVar82 & 0xffffffff) * (ulonglong)_DAT_181046da0 +
           ((_DAT_181046db0 & 0xffffffff) * (uVar82 & 0xffffffff) +
            (ulonglong)uVar69 * (ulonglong)_DAT_181046da0 << 0x20))) + _DAT_181046e60;
  _DAT_1831daea0 = _DAT_1831daec8 ^ _DAT_1831dad08 ^ uVar87;
  _DAT_1831daee0 = (_DAT_1831daee0 ^ _DAT_1831dad08) + uVar87 ^ 0x5b78f59c8556da3e;
  _DAT_1831dae60 = (_DAT_1831dae60 * 0x8e6fa53f1c0131b ^ _DAT_1831daee0) + _DAT_1831dad08;
  _DAT_1831dade8 = _DAT_1831dae60 ^ _DAT_1831daee0;
  uVar15 = uVar87 ^ 0x84222325;
  uVar14 = ((_DAT_1831dada8 ^ uVar15) + (uVar15 & _DAT_1831dada8) * 2) * (uVar16 - _DAT_1831dae00);
  uVar14 = (uVar14 | _DAT_1831dad20) + (uVar14 & _DAT_1831dad20);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831dad58 = uVar87;
  _DAT_1831daee8 = func_0x00018886d920((uVar15 ^ uVar16 | uVar14) + (uVar14 & (uVar15 ^ uVar16)));
  uVar14 = uVar87 * uVar16 ^ _DAT_1831daee8 ^ uVar87;
  uVar49 = (uint)(uVar87 >> 0x20);
  auVar70._8_4_ = (int)uVar87;
  auVar70._0_8_ = uVar87;
  auVar70._12_4_ = uVar49;
  uVar35 = (uint)(uVar16 >> 0x20);
  auVar53._8_4_ = (int)uVar16;
  auVar53._0_8_ = uVar16;
  auVar53._12_4_ = uVar35;
  uVar20 = SUB164(auVar70 & auVar53,0);
  uVar82 = SUB168(auVar70 & auVar53,0);
  uVar60 = SUB164(auVar70 | auVar53,0);
  uVar15 = SUB168(auVar70 | auVar53,0);
  uVar36 = SUB164(auVar70 ^ auVar53,0);
  uVar59 = SUB168(auVar70 ^ auVar53,0);
  uVar91 = uVar87 ^ _DAT_18001a710;
  uVar19 = uVar16 ^ _DAT_18001a710;
  uVar15 = (((uVar91 & 0xffffffff) * (ulonglong)_DAT_181046e90 +
             ((uVar91 >> 0x20) * (ulonglong)_DAT_181046e90 +
              (ulonglong)_DAT_181046e70 * (uVar91 & 0xffffffff) << 0x20) +
             (ulonglong)_DAT_181046eb0 * (ulonglong)uVar36 +
             ((uVar59 >> 0x20) * (ulonglong)_DAT_181046eb0 +
              (ulonglong)_DAT_181046ea0 * (ulonglong)uVar36 << 0x20) +
             (ulonglong)uVar20 * (ulonglong)_DAT_181046eb0 +
             ((uVar82 >> 0x20) * (ulonglong)_DAT_181046eb0 +
              (ulonglong)uVar20 * (ulonglong)_DAT_181046ea0 << 0x20) +
             (ulonglong)_DAT_181046e80 * (uVar87 & 0xffffffff) + uVar16 +
             ((ulonglong)uVar49 * (ulonglong)_DAT_181046e80 +
              (uVar87 & 0xffffffff) * (ulonglong)_DAT_181046e70 << 0x20) +
            (ulonglong)_DAT_181046ec0 * (ulonglong)uVar60 +
            ((ulonglong)_DAT_181046ed0 * (ulonglong)uVar60 +
             (uVar15 >> 0x20) * (ulonglong)_DAT_181046ec0 << 0x20)) -
           ((uVar19 & 0xffffffff) * (ulonglong)_DAT_181046f40 +
            ((ulonglong)_DAT_181046fb0 * (uVar19 & 0xffffffff) +
             (uVar19 >> 0x20) * (ulonglong)_DAT_181046f40 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_181046f90 +
           ((ulonglong)_DAT_181046fa0 * (ulonglong)uVar36 +
            (uVar59 >> 0x20) * (ulonglong)_DAT_181046f90 << 0x20) +
           (ulonglong)uVar60 * (ulonglong)_DAT_181046f70 +
           ((ulonglong)_DAT_181046f80 * (ulonglong)uVar60 +
            (uVar15 >> 0x20) * (ulonglong)_DAT_181046f70 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_181046f50 +
           ((ulonglong)_DAT_181046f60 * (ulonglong)uVar20 +
            (uVar82 >> 0x20) * (ulonglong)_DAT_181046f50 << 0x20) +
           (uVar16 & 0xffffffff) * (ulonglong)_DAT_181046f20 +
           ((ulonglong)_DAT_181046f30 * (uVar16 & 0xffffffff) +
            (ulonglong)uVar35 * (ulonglong)_DAT_181046f20 << 0x20) +
           (uVar87 & 0xffffffff) * (ulonglong)_DAT_181046f00 +
           ((ulonglong)_DAT_181046f10 * (uVar87 & 0xffffffff) +
            (ulonglong)uVar49 * (ulonglong)_DAT_181046f00 << 0x20))) + 0x6bb31f686e0b8981;
  _DAT_1831dad50 = _DAT_1831dadf0 ^ uVar14 ^ uVar15;
  _DAT_1831dad48 = (_DAT_1831dad88 ^ uVar14) + uVar15 ^ 0x6e56759c1786795d;
  _DAT_1831daed0 = (_DAT_1831daed0 * -0x4fc3405924361bff ^ _DAT_1831dad48) + uVar14;
  _DAT_1831dad48 = _DAT_1831daed0 ^ _DAT_1831dad48;
  lVar13 = uVar50 * _DAT_181045930;
  uVar16 = lVar13 * 0x9d017d778db7b57;
  uVar14 = (_DAT_1831daee0 ^ 0x84222325) + _DAT_1831dad40 + 0x84222325;
  uVar50 = (uVar16 ^ _DAT_1831dad40) + _DAT_1831daee0 + uVar16;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1831daee0 ^ 0x84222325;
  uVar50 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar16 ^ _DAT_1831dad40;
  _DAT_1831dad88 = uVar15;
  _DAT_1831dad18 =
       func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - (_DAT_1831daee0 + uVar16) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1831dad40 + 0x84222325));
  uVar14 = _DAT_1831dad18 ^ uVar16;
  uVar14 = (uVar14 << 0x26 | uVar14 >> 0x1a) << 0xf | (uVar14 & 0x3ffffff) >> 0xb;
  uVar50 = lVar13 * -0x9d017d778db7b57;
  _DAT_1831daec0 = (_DAT_1831daec0 ^ uVar14) + lVar13 * -0x9d017d778db7b57 ^ 0xc0f389e0ac777ead;
  _DAT_1831dad80 = (_DAT_1831dad80 * 0x4f9a617d18aa5563 ^ _DAT_1831daec0) + uVar14;
  _DAT_1831dae90 = _DAT_1831dad80 ^ _DAT_1831daec0;
  uVar15 = uVar15 + uVar16;
  uVar14 = uVar15 ^ 0x84222325 ^ _DAT_1831dad70;
  lVar17 = (uVar15 ^ 0x84222325) + _DAT_1831daec8;
  lVar13 = _DAT_1831dad70 + lVar13 * -0x9d017d778db7b57;
  uVar16 = uVar14 + lVar17;
  uVar19 = (uVar50 ^ _DAT_1831daec8) + lVar13;
  uVar14 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ uVar14;
  uVar16 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar50 ^ _DAT_1831daec8;
  _DAT_1831dad20 = uVar50;
  _DAT_1831dadd0 =
       func_0x00018886d920((uVar16 << 0x1d | uVar16 >> 0x23) - lVar13 ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar17);
  uVar14 = (_DAT_1831dadd0 << 0x38 | _DAT_1831dadd0 >> 8) ^ uVar15;
  uVar35 = (uint)(uVar15 >> 0x20);
  auVar54._8_4_ = (int)uVar15;
  auVar54._0_8_ = uVar15;
  auVar54._12_4_ = uVar35;
  uVar20 = (uint)(uVar50 >> 0x20);
  auVar38._8_4_ = (int)uVar50;
  auVar38._0_8_ = uVar50;
  auVar38._12_4_ = uVar20;
  auVar88._8_4_ = 0xffffffff;
  auVar88._0_8_ = 0xffffffffffffffff;
  auVar88._12_4_ = 0xffffffff;
  uVar49 = SUB164(auVar54 & auVar38,0);
  uVar19 = SUB168(auVar54 & auVar38,0);
  uVar85 = SUB164(auVar54 ^ auVar38,0);
  uVar16 = SUB168(auVar54 ^ auVar38,0);
  uVar60 = SUB164(auVar54 ^ auVar88,0);
  uVar69 = SUB164(auVar38 ^ auVar88,0);
  uVar82 = SUB168(auVar38 ^ auVar88,0);
  uVar36 = SUB164(auVar54 | auVar38,0);
  uVar19 = (((_DAT_181047060 & 0xffffffff) * (ulonglong)uVar69 +
             ((_DAT_181047070 & 0xffffffff) * (ulonglong)uVar69 +
              (uVar82 >> 0x20) * (_DAT_181047060 & 0xffffffff) << 0x20) +
            (ulonglong)uVar60 * (ulonglong)_DAT_181047040 +
            ((_DAT_181047050 & 0xffffffff) * (ulonglong)uVar60 +
             (SUB168(auVar54 ^ auVar88,0) >> 0x20) * (ulonglong)_DAT_181047040 << 0x20) +
            (_DAT_181047020 & 0xffffffff) * (ulonglong)uVar85 +
            ((_DAT_181047030 & 0xffffffff) * (ulonglong)uVar85 +
             (uVar16 >> 0x20) * (_DAT_181047020 & 0xffffffff) << 0x20) +
            (_DAT_181047000 & 0xffffffff) * (ulonglong)uVar49 +
            ((_DAT_181047010 & 0xffffffff) * (ulonglong)uVar49 +
             (uVar19 >> 0x20) * (_DAT_181047000 & 0xffffffff) << 0x20) +
            (_DAT_181046fe0 & 0xffffffff) * (uVar50 & 0xffffffff) +
            ((_DAT_181046ff0 & 0xffffffff) * (uVar50 & 0xffffffff) +
             (ulonglong)uVar20 * (_DAT_181046fe0 & 0xffffffff) << 0x20) +
            (_DAT_181046fc0 & 0xffffffff) * (uVar15 & 0xffffffff) +
            ((_DAT_181046fd0 & 0xffffffff) * (uVar15 & 0xffffffff) +
             (ulonglong)uVar35 * (_DAT_181046fc0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar69 * (ulonglong)_DAT_1810470e0 +
            ((_DAT_181047150 & 0xffffffff) * (ulonglong)uVar69 +
             (uVar82 >> 0x20) * (ulonglong)_DAT_1810470e0 << 0x20) +
           (uVar16 & 0xffffffff) * (ulonglong)_DAT_181047130 +
           ((_DAT_181047140 & 0xffffffff) * (uVar16 & 0xffffffff) +
            (uVar16 >> 0x20) * (ulonglong)_DAT_181047130 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_181047110 +
           ((_DAT_181047120 & 0xffffffff) * (ulonglong)uVar36 +
            (SUB168(auVar54 | auVar38,0) >> 0x20) * (ulonglong)_DAT_181047110 << 0x20) +
           (ulonglong)uVar49 * (ulonglong)_DAT_1810470f0 +
           ((_DAT_181047100 & 0xffffffff) * (ulonglong)uVar49 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_1810470f0 << 0x20) +
           (uVar50 & 0xffffffff) * (ulonglong)_DAT_1810470c0 +
           ((_DAT_1810470d0 & 0xffffffff) * (uVar50 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1810470c0 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_1810470a0 +
           ((_DAT_1810470b0 & 0xffffffff) * (uVar15 & 0xffffffff) +
            (ulonglong)uVar35 * (ulonglong)_DAT_1810470a0 << 0x20))) + _DAT_181047160;
  _DAT_1831daef8 = (_DAT_1831daef8 ^ uVar14) + uVar19 ^ 0x52be5a44cebee4f6;
  _DAT_1831dae78 = (_DAT_1831dae78 * 0x76e4b08c8995ab05 ^ _DAT_1831daef8) + uVar14;
  _DAT_1831dae98 = _DAT_1831dae78 ^ _DAT_1831daef8;
  uVar15 = uVar18 ^ 0x84222325;
  uVar14 = (uVar15 ^ _DAT_1831dad60) + _DAT_1831daed0 + uVar15;
  uVar50 = (uVar12 ^ _DAT_1831daed0) + _DAT_1831dad60 + uVar12;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar15 ^ _DAT_1831dad60;
  uVar50 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar12 ^ _DAT_1831daed0;
  _DAT_1831dad08 = uVar19;
  uVar14 = func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - (_DAT_1831dad60 + uVar12) ^
                               (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_1831daed0 + uVar15));
  uVar69 = (uint)(uVar18 >> 0x20);
  auVar71._8_4_ = (int)uVar18;
  auVar71._0_8_ = uVar18;
  auVar71._12_4_ = uVar69;
  uVar20 = (uint)(uVar12 >> 0x20);
  auVar63._8_4_ = (int)uVar12;
  auVar63._0_8_ = uVar12;
  auVar63._12_4_ = uVar20;
  auVar96._8_4_ = 0xffffffff;
  auVar96._0_8_ = 0xffffffffffffffff;
  auVar96._12_4_ = 0xffffffff;
  uVar35 = SUB164(auVar71 ^ auVar96,0);
  uVar50 = SUB168(auVar71 ^ auVar96,0);
  uVar36 = SUB164(auVar63 ^ auVar96,0);
  uVar16 = SUB168(auVar63 ^ auVar96,0);
  uVar60 = SUB164(auVar71 & auVar63,0);
  uVar49 = SUB164(auVar71 ^ auVar63,0);
  auVar39._8_8_ = uVar12;
  auVar39._0_8_ = uVar15;
  auVar22 = pshufb(auVar39 ^ _DAT_1810472b0,_DAT_1800170c0);
  uVar14 = uVar18 * uVar12 ^ uVar14;
  uVar16 = (((ulonglong)_DAT_1810471c0 * (ulonglong)uVar36 +
             ((uVar16 >> 0x20) * (ulonglong)_DAT_1810471c0 +
              (ulonglong)_DAT_181047190 * (ulonglong)uVar36 << 0x20) +
            (ulonglong)_DAT_1810471b0 * (ulonglong)uVar35 +
            ((uVar50 >> 0x20) * (ulonglong)_DAT_1810471b0 +
             (ulonglong)_DAT_181047170 * (ulonglong)uVar35 << 0x20) +
            (ulonglong)_DAT_1810471a0 * (uVar12 & 0xffffffff) +
            ((ulonglong)uVar20 * (ulonglong)_DAT_1810471a0 +
             (uVar12 & 0xffffffff) * (ulonglong)_DAT_181047190 << 0x20) +
            (ulonglong)_DAT_181047180 * (uVar18 & 0xffffffff) +
            ((ulonglong)uVar69 * (ulonglong)_DAT_181047180 +
             (uVar18 & 0xffffffff) * (ulonglong)_DAT_181047170 << 0x20)) -
           ((ulonglong)uVar36 * (_DAT_181047290 & 0xffffffff) +
            ((ulonglong)_DAT_1810472a0 * (ulonglong)uVar36 +
             (uVar16 >> 0x20) * (_DAT_181047290 & 0xffffffff) << 0x20) +
           (ulonglong)uVar35 * (ulonglong)_DAT_181047270 +
           ((ulonglong)_DAT_181047280 * (ulonglong)uVar35 +
            (uVar50 >> 0x20) * (ulonglong)_DAT_181047270 << 0x20) +
           (ulonglong)uVar49 * (ulonglong)_DAT_181047250 +
           ((ulonglong)_DAT_181047260 * (ulonglong)uVar49 +
            (SUB168(auVar71 ^ auVar63,0) >> 0x20) * (ulonglong)_DAT_181047250 << 0x20) +
           (ulonglong)uVar60 * (ulonglong)_DAT_181047230 +
           ((ulonglong)_DAT_181047240 * (ulonglong)uVar60 +
            (SUB168(auVar71 & auVar63,0) >> 0x20) * (ulonglong)_DAT_181047230 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_181047210 +
           ((ulonglong)_DAT_181047220 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_181047210 << 0x20) +
           (uVar18 & 0xffffffff) * (ulonglong)_DAT_1810471f0 +
           ((ulonglong)_DAT_181047200 * (uVar18 & 0xffffffff) +
            (ulonglong)uVar69 * (ulonglong)_DAT_1810471f0 << 0x20))) + 0x42b0db378cee1ff7;
  _DAT_1831dad58 = _DAT_1831dae90 ^ uVar14 ^ uVar16;
  _DAT_1831daee8 = uVar18 * uVar12 + uVar16 ^ 0x81b3c83068733e45;
  _DAT_1831dadb0 = (_DAT_1831dadb0 * 0x2d032286729c186b ^ _DAT_1831daee8) + uVar14;
  _DAT_1831dad00 = _DAT_1831dadb0 ^ _DAT_1831daee8;
  uVar50 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar50 + _DAT_1831dad08;
  if (auVar22._4_4_ < 0) {
    uVar14 = _DAT_1831dadf0 ^ uVar50;
  }
  _DAT_1831dae18 = uVar16;
  _DAT_1831daea8 = func_0x00018886d920(SUB161(auVar39 ^ _DAT_1810472b0,5) ^ uVar14);
  uVar87 = uVar18 ^ uVar12;
  _DAT_1831dad68 =
       (_DAT_1831dad68 ^ _DAT_1831daea8 & 0x7fffffffffffffff) + uVar87 ^ 0x9873c2127ad6909e;
  _DAT_1831dad98 =
       (_DAT_1831dad98 * -0x4ffa883fd02485c7 ^ _DAT_1831dad68) +
       (_DAT_1831daea8 & 0x7fffffffffffffff);
  _DAT_1831dae10 = _DAT_1831dad98 ^ _DAT_1831dad68;
  uVar14 = ((_DAT_1831dadb8 ^ uVar15) + (uVar15 & _DAT_1831dadb8) * 2) * (uVar12 - _DAT_1831dad58);
  uVar14 = (uVar14 | _DAT_1831dadd8) + (uVar14 & _DAT_1831dadd8);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831dae20 = uVar87;
  _DAT_1831dae10 = func_0x00018886d920((uVar15 ^ uVar12 | uVar14) + (uVar14 & (uVar15 ^ uVar12)));
  uVar14 = (uVar18 | uVar12) ^ _DAT_1831dae10;
  uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) ^ uVar18;
  uVar12 = uVar12 & uVar18;
  _DAT_1831dae28 = (_DAT_1831dae28 ^ uVar14) + uVar12 ^ 0x49946c70c1c09092;
  _DAT_1831dad88 = (_DAT_1831dad88 * 0x2d3ade1c95b74ec3 ^ _DAT_1831dae28) + uVar14;
  _DAT_1831dade8 = _DAT_1831dad88 ^ _DAT_1831dae28;
  uVar14 = uVar12 * 2;
  uVar82 = uVar87 ^ 0x84222325;
  uVar50 = ((_DAT_1831dade0 ^ uVar82) + (uVar82 & _DAT_1831dade0) * 2) * (uVar14 - _DAT_1831daee0);
  uVar50 = (uVar50 | _DAT_1831daed0) + (uVar50 & _DAT_1831daed0);
  uVar50 = uVar50 * 0x2000 ^ uVar50;
  uVar50 = uVar50 >> 7 ^ uVar50;
  uVar50 = uVar50 << 0x11 ^ uVar50;
  _DAT_1831daea8 = uVar12;
  _DAT_1831dae80 = func_0x00018886d920((uVar82 ^ uVar14 | uVar50) + (uVar50 & (uVar82 ^ uVar14)));
  uVar20 = (uint)(uVar87 >> 0x20);
  auVar55._8_4_ = (int)uVar87;
  auVar55._0_8_ = uVar87;
  auVar55._12_4_ = uVar20;
  auVar40._8_4_ = (int)uVar12;
  auVar40._0_8_ = uVar12;
  auVar40._12_4_ = (int)(uVar12 >> 0x20);
  uVar12 = uVar12 * 2;
  auVar41._8_8_ = auVar40._8_8_ * 2;
  auVar41._0_8_ = uVar12;
  auVar22 = auVar55 | auVar41;
  uVar35 = (uint)(uVar12 >> 0x20);
  uVar50 = (uVar87 & 0xffffffff) * (uVar12 & 0xffffffff) +
           ((uVar87 & 0xffffffff) * (ulonglong)uVar35 + (ulonglong)uVar20 * (uVar12 & 0xffffffff) <<
           0x20);
  uVar60 = SUB164(auVar55 & auVar41,0);
  uVar59 = SUB168(auVar55 & auVar41,0);
  uVar36 = auVar22._0_4_;
  uVar49 = SUB164(auVar55 ^ auVar41,0);
  uVar93 = SUB168(auVar55 ^ auVar41,0);
  auVar78._8_4_ = 0xffffffff;
  auVar78._0_8_ = 0xffffffffffffffff;
  auVar78._12_4_ = 0xffffffff;
  uVar69 = SUB164(auVar55 ^ auVar78,0);
  uVar91 = SUB168(auVar55 ^ auVar78,0);
  uVar85 = SUB164(auVar41 ^ auVar78,0);
  uVar82 = SUB168(auVar41 ^ auVar78,0);
  lVar13 = (uVar50 & 0xffffffff) * (ulonglong)_DAT_181047360 +
           ((ulonglong)_DAT_181047370 * (uVar50 & 0xffffffff) +
            (uVar50 >> 0x20) * (ulonglong)_DAT_181047360 << 0x20);
  uStack0000000000000130 = auVar22._4_4_;
  uVar14 = (uVar14 | uVar87) ^ _DAT_1831dae80;
  _DAT_1831daec0 =
       (((ulonglong)_DAT_181047350 * (ulonglong)uVar85 +
         ((uVar82 >> 0x20) * (ulonglong)_DAT_181047350 +
          (ulonglong)_DAT_1810472e0 * (ulonglong)uVar85 << 0x20) +
         (ulonglong)_DAT_181047340 * (ulonglong)uVar69 +
         ((uVar91 >> 0x20) * (ulonglong)_DAT_181047340 +
          (ulonglong)_DAT_1810472c0 * (ulonglong)uVar69 << 0x20) +
         (ulonglong)_DAT_181047310 * (ulonglong)uVar49 +
         ((uVar93 >> 0x20) * (ulonglong)_DAT_181047310 +
          (ulonglong)_DAT_181047300 * (ulonglong)uVar49 << 0x20) +
         (ulonglong)uVar60 * (ulonglong)_DAT_181047310 +
         ((uVar59 >> 0x20) * (ulonglong)_DAT_181047310 +
          (ulonglong)uVar60 * (ulonglong)_DAT_181047300 << 0x20) +
         (ulonglong)_DAT_1810472f0 * (uVar12 & 0xffffffff) +
         ((ulonglong)uVar35 * (ulonglong)_DAT_1810472f0 +
          (uVar12 & 0xffffffff) * (ulonglong)_DAT_1810472e0 << 0x20) +
         (ulonglong)_DAT_1810472d0 * (uVar87 & 0xffffffff) +
         ((ulonglong)uVar20 * (ulonglong)_DAT_1810472d0 +
          (uVar87 & 0xffffffff) * (ulonglong)_DAT_1810472c0 << 0x20) +
         (ulonglong)_DAT_181047320 * (ulonglong)uVar36 +
         ((ulonglong)_DAT_181047330 * (ulonglong)uVar36 +
          (auVar22._0_8_ >> 0x20) * (ulonglong)_DAT_181047320 << 0x20) + lVar13) -
       ((ulonglong)uVar85 * (ulonglong)_DAT_1810473b0 +
        ((uVar82 >> 0x20) * (ulonglong)_DAT_1810473b0 +
         (ulonglong)_DAT_1810473a0 * (ulonglong)uVar85 << 0x20) +
        (ulonglong)uVar69 * (ulonglong)_DAT_181047390 +
        ((uVar91 >> 0x20) * (ulonglong)_DAT_181047390 +
         (ulonglong)_DAT_181047380 * (ulonglong)uVar69 << 0x20) +
        (ulonglong)uVar49 * (ulonglong)_DAT_1810473d0 +
        ((uVar93 >> 0x20) * (ulonglong)_DAT_1810473d0 +
         (ulonglong)_DAT_1810473c0 * (ulonglong)uVar49 << 0x20) +
        (ulonglong)uVar60 * (ulonglong)_DAT_1810473d0 +
        ((uVar59 >> 0x20) * (ulonglong)_DAT_1810473d0 +
         (ulonglong)uVar60 * (ulonglong)_DAT_1810473c0 << 0x20) +
        (uVar12 & 0xffffffff) * (ulonglong)_DAT_1810473b0 +
        ((ulonglong)uVar35 * (ulonglong)_DAT_1810473b0 +
         (uVar12 & 0xffffffff) * (ulonglong)_DAT_1810473a0 << 0x20) +
        (uVar87 & 0xffffffff) * (ulonglong)_DAT_181047390 +
        ((ulonglong)uVar20 * (ulonglong)_DAT_181047390 +
         (uVar87 & 0xffffffff) * (ulonglong)_DAT_181047380 << 0x20) +
        (ulonglong)uVar36 * (ulonglong)_DAT_1810473e0 +
        ((ulonglong)_DAT_1810473f0 * (ulonglong)uVar36 +
         (ulonglong)uStack0000000000000130 * (ulonglong)_DAT_1810473e0 << 0x20) + lVar13)) +
       0xed2a0d642a9ca262;
  _DAT_1831daea0 = _DAT_1831daed0 ^ uVar14 ^ _DAT_1831daec0;
  _DAT_1831dadd8 = (_DAT_1831dadd8 ^ uVar14) + _DAT_1831daec0 ^ 0x5d9be4e4b947d4c1;
  _DAT_1831daec8 = (_DAT_1831daec8 * -0x652568e06f1ae21 ^ _DAT_1831dadd8) + uVar14;
  _DAT_1831dae88 = _DAT_1831daec8 ^ _DAT_1831dadd8;
  uVar16 = uVar16 - _DAT_1831daec0;
  uVar14 = uVar19 ^ 0x84222325 ^ _DAT_1831dade8;
  lVar13 = (uVar19 ^ 0x84222325) + _DAT_1831dad28;
  uVar50 = uVar14 + lVar13;
  uVar12 = (uVar16 ^ _DAT_1831dad28) + _DAT_1831dade8 + uVar16;
  uVar14 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar14;
  uVar50 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar16 ^ _DAT_1831dad28;
  _DAT_1831dae30 =
       func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - (_DAT_1831dade8 + uVar16) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar13);
  uVar14 = _DAT_1831dae30 ^ uVar19;
  uVar49 = (uint)(uVar19 >> 0x20);
  auVar64._8_4_ = (int)uVar19;
  auVar64._0_8_ = uVar19;
  auVar64._12_4_ = uVar49;
  uVar35 = (uint)(uVar16 >> 0x20);
  auVar72._8_4_ = (int)uVar16;
  auVar72._0_8_ = uVar16;
  auVar72._12_4_ = uVar35;
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar60 = SUB164(auVar64 & auVar72,0);
  uVar87 = SUB168(auVar64 & auVar72,0);
  uVar36 = SUB164(auVar64 | auVar72,0);
  uVar82 = SUB168(auVar64 | auVar72,0);
  uVar69 = SUB164(auVar64 ^ auVar72,0);
  uVar12 = SUB168(auVar64 ^ auVar72,0);
  uVar20 = SUB164(auVar72 ^ auVar1,0);
  uVar50 = SUB168(auVar72 ^ auVar1,0);
  uVar16 = (((ulonglong)_DAT_181047440 * (ulonglong)uVar20 +
             ((ulonglong)_DAT_1810474b0 * (ulonglong)uVar20 +
              (uVar50 >> 0x20) * (ulonglong)_DAT_181047440 << 0x20) +
            (ulonglong)_DAT_181047490 * (ulonglong)uVar69 +
            ((ulonglong)_DAT_1810474a0 * (ulonglong)uVar69 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_181047490 << 0x20) +
            (ulonglong)_DAT_181047470 * (ulonglong)uVar36 +
            ((ulonglong)_DAT_181047480 * (ulonglong)uVar36 +
             (uVar82 >> 0x20) * (ulonglong)_DAT_181047470 << 0x20) +
            (ulonglong)_DAT_181047450 * (ulonglong)uVar60 +
            ((ulonglong)_DAT_181047460 * (ulonglong)uVar60 +
             (uVar87 >> 0x20) * (ulonglong)_DAT_181047450 << 0x20) +
            (ulonglong)_DAT_181047420 * (uVar16 & 0xffffffff) +
            ((ulonglong)_DAT_181047430 * (uVar16 & 0xffffffff) +
             (ulonglong)uVar35 * (ulonglong)_DAT_181047420 << 0x20) +
            (uVar19 & 0xffffffff) * (ulonglong)_DAT_181047400 +
            ((ulonglong)_DAT_181047410 * (uVar19 & 0xffffffff) +
             (ulonglong)uVar49 * (ulonglong)_DAT_181047400 << 0x20)) -
           ((ulonglong)uVar20 * (ulonglong)_DAT_1810474f0 +
            ((uVar50 >> 0x20) * (ulonglong)_DAT_1810474f0 +
             (ulonglong)_DAT_1810474e0 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)uVar69 * (ulonglong)_DAT_181047510 +
            ((uVar12 >> 0x20) * (ulonglong)_DAT_181047510 +
             (ulonglong)_DAT_181047500 * (ulonglong)uVar69 << 0x20) +
            (ulonglong)uVar60 * (ulonglong)_DAT_181047510 +
            ((uVar87 >> 0x20) * (ulonglong)_DAT_181047510 +
             (ulonglong)uVar60 * (ulonglong)_DAT_181047500 << 0x20) +
            (uVar16 & 0xffffffff) * (ulonglong)_DAT_1810474f0 +
            ((ulonglong)uVar35 * (ulonglong)_DAT_1810474f0 +
             (uVar16 & 0xffffffff) * (ulonglong)_DAT_1810474e0 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_181047520 +
           ((ulonglong)_DAT_181047530 * (ulonglong)uVar36 +
            (uVar82 >> 0x20) * (ulonglong)_DAT_181047520 << 0x20))) + _DAT_181047540;
  _DAT_1831daea0 = _DAT_1831dae60 ^ uVar14 ^ uVar16;
  _DAT_1831dae38 = (_DAT_1831dae38 ^ uVar14) + uVar16 ^ 0x47d5d85b5702342b;
  _DAT_1831daef0 = (_DAT_1831daef0 * -0x5df7da3750cf69ff ^ _DAT_1831dae38) + uVar14;
  _DAT_1831daef8 = _DAT_1831daef0 ^ _DAT_1831dae38;
  uVar14 = (uVar15 ^ _DAT_1831dad68) + uVar15 + _DAT_1831dae48;
  uVar50 = ~_DAT_1831dae48 + (_DAT_1831dad68 - 1);
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar15 ^ _DAT_1831dad68;
  uVar50 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ ~_DAT_1831dae48;
  _DAT_1831dadf8 = uVar16;
  _DAT_1831daed0 =
       func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - (_DAT_1831dad68 - 1) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (uVar15 + _DAT_1831dae48));
  uVar14 = _DAT_1831daed0 << 0x2c | _DAT_1831daed0 >> 0x14;
  uVar50 = ~uVar18;
  _DAT_1831dae58 = (_DAT_1831dae58 ^ uVar14) + uVar50 ^ 0x288d7566e0925c4d;
  _DAT_1831dae18 = (_DAT_1831dae18 * -0x445b530465f57fe7 ^ _DAT_1831dae58) + uVar14;
  _DAT_1831dadd0 = _DAT_1831dae18 ^ _DAT_1831dae58;
  uVar14 = (uVar15 ^ _DAT_1831dae90) + uVar15 + _DAT_1831dada8;
  uVar12 = (uVar50 ^ _DAT_1831dada8) + _DAT_1831dae90 + uVar50;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar15 ^ _DAT_1831dae90;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar50 ^ _DAT_1831dada8;
  _DAT_1831dad20 = uVar50;
  _DAT_1831dad78 =
       func_0x00018886d920((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831dae90 + uVar50) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (uVar15 + _DAT_1831dada8));
  uVar14 = uVar50 * uVar18 ^ _DAT_1831dad78;
  uVar14 = uVar14 << 0x24 | uVar14 >> 0x1c;
  uVar50 = uVar14 >> 1 | uVar14;
  uVar50 = uVar50 >> 2 | uVar50;
  uVar50 = uVar50 >> 4 | uVar50;
  uVar50 = uVar50 >> 8 | uVar50;
  uVar50 = uVar50 >> 0x10 | uVar50;
  uVar50 = uVar50 >> 0x20 | uVar50;
  uVar50 = uVar50 - (uVar50 >> 1 & 0x5555555555555555);
  uVar50 = (uVar50 & 0x3333333333333333) + (uVar50 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar50 >> 4) + uVar50 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x80 ^ uVar14;
  _DAT_1831dae60 = _DAT_1831dae60 ^ uVar14 ^ 0x7dc06f717df1b11a;
  _DAT_1831dadc0 = (_DAT_1831dadc0 * -0x4c71fdb88c6e2283 ^ _DAT_1831dae60) + uVar14;
  _DAT_1831daec0 = _DAT_1831dadc0 ^ _DAT_1831dae60;
  _DAT_1831dada8 = 0;
  uVar14 = uVar16 ^ 0x84222325 ^ _DAT_1831daeb0;
  lVar13 = (uVar16 ^ 0x84222325) + _DAT_1831dad90;
  uVar50 = uVar14 + lVar13;
  uVar14 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar14;
  uVar50 = ((_DAT_1831dad90 + _DAT_1831daeb0) * 0x2000 | _DAT_1831dad90 + _DAT_1831daeb0 >> 0x33) ^
           _DAT_1831dad90;
  _DAT_1831dae20 =
       func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - _DAT_1831daeb0 ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar13);
  uVar35 = (uint)(uVar16 >> 0x20);
  auVar89._8_4_ = (int)uVar16;
  auVar89._0_8_ = uVar16;
  auVar89._12_4_ = uVar35;
  uVar50 = auVar89._8_8_;
  uVar12 = uVar50 >> 0x20;
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  auVar89 = auVar89 ^ auVar2;
  uVar20 = auVar89._0_4_;
  uVar36 = auVar89._8_4_;
  uVar15 = auVar89._8_8_ >> 0x20;
  uVar14 = _DAT_1831dae20 >> 1 | _DAT_1831dae20;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x80 ^ _DAT_1831dae20;
  auVar90._0_8_ =
       (((_DAT_181047590 & 0xffffffff) * (ulonglong)uVar20 +
         ((_DAT_1810475a0 & 0xffffffff) * (ulonglong)uVar20 +
          (auVar89._0_8_ >> 0x20) * (_DAT_181047590 & 0xffffffff) << 0x20) +
        (_DAT_181047570 & 0xffffffff) * (uVar16 & 0xffffffff) +
        ((_DAT_181047580 & 0xffffffff) * (uVar16 & 0xffffffff) +
         (ulonglong)uVar35 * (_DAT_181047570 & 0xffffffff) << 0x20) +
        (_DAT_181047550 & 0xffffffff) * (uVar16 & 0xffffffff) +
        ((_DAT_181047560 & 0xffffffff) * (uVar16 & 0xffffffff) +
         (ulonglong)uVar35 * (_DAT_181047550 & 0xffffffff) << 0x20)) -
       ((ulonglong)uVar20 * (ulonglong)_DAT_1810475c0 +
        ((auVar89._0_8_ >> 0x20) * (ulonglong)_DAT_1810475c0 +
         (_DAT_1810475b0 & 0xffffffff) * (ulonglong)uVar20 << 0x20) +
        (uVar16 & 0xffffffff) * (_DAT_1810475f0 & 0xffffffff) +
        ((_DAT_181047600 & 0xffffffff) * (uVar16 & 0xffffffff) +
         (ulonglong)uVar35 * (_DAT_1810475f0 & 0xffffffff) << 0x20) +
       (_DAT_1810475d0 & 0xffffffff) * (uVar16 & 0xffffffff) +
       ((_DAT_1810475e0 & 0xffffffff) * (uVar16 & 0xffffffff) +
        (ulonglong)uVar35 * (_DAT_1810475d0 & 0xffffffff) << 0x20) +
       (uVar16 & 0xffffffff) * (ulonglong)_DAT_1810475c0 +
       ((ulonglong)uVar35 * (ulonglong)_DAT_1810475c0 +
        (uVar16 & 0xffffffff) * (_DAT_1810475b0 & 0xffffffff) << 0x20))) + _DAT_181047610;
  auVar90._8_8_ =
       (((_UNK_181047598 & 0xffffffff) * (ulonglong)uVar36 +
         ((_UNK_1810475a8 & 0xffffffff) * (ulonglong)uVar36 + uVar15 * (_UNK_181047598 & 0xffffffff)
         << 0x20) +
        (_UNK_181047578 & 0xffffffff) * (uVar16 & 0xffffffff) +
        ((_UNK_181047588 & 0xffffffff) * (uVar16 & 0xffffffff) +
         uVar12 * (_UNK_181047578 & 0xffffffff) << 0x20) +
        (_UNK_181047558 & 0xffffffff) * (uVar16 & 0xffffffff) +
        ((_UNK_181047568 & 0xffffffff) * (uVar16 & 0xffffffff) +
         uVar12 * (_UNK_181047558 & 0xffffffff) << 0x20)) -
       ((auVar89._8_8_ & 0xffffffff) * (ulonglong)_UNK_1810475c8 +
        (uVar15 * _UNK_1810475c8 + (_UNK_1810475b8 & 0xffffffff) * (ulonglong)uVar36 << 0x20) +
        (uVar50 & 0xffffffff) * (_UNK_1810475f8 & 0xffffffff) +
        ((_UNK_181047608 & 0xffffffff) * (uVar16 & 0xffffffff) +
         uVar12 * (_UNK_1810475f8 & 0xffffffff) << 0x20) +
       (_UNK_1810475d8 & 0xffffffff) * (uVar16 & 0xffffffff) +
       ((_UNK_1810475e8 & 0xffffffff) * (uVar16 & 0xffffffff) +
        uVar12 * (_UNK_1810475d8 & 0xffffffff) << 0x20) +
       (uVar50 & 0xffffffff) * (ulonglong)_UNK_1810475c8 +
       (uVar12 * _UNK_1810475c8 + (uVar50 & 0xffffffff) * (_UNK_1810475b8 & 0xffffffff) << 0x20))) +
       _UNK_181047618;
  _DAT_1831dae88 = _DAT_1831dad60 ^ uVar14 ^ auVar90._0_8_;
  _DAT_1831dade0 = (_DAT_1831dade0 ^ uVar14) + auVar90._0_8_ ^ 0x38637e70fb419f9b;
  _DAT_1831dadf8 = (_DAT_1831dadf8 * -0x16bc719df2f2332b ^ _DAT_1831dade0) + uVar14 ^ _DAT_1831dade0
  ;
  uVar14 = ((uStack00000000000000f0 ^ _DAT_1831dae10) +
           (uStack00000000000000f0 & _DAT_1831dae10) * 2) * (_DAT_181045930 - _DAT_1831dae78);
  uVar14 = (uVar14 | _DAT_1831dad10) + (uVar14 & _DAT_1831dad10);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831dadc0 = auVar90._0_8_;
  _DAT_1831dadb0 =
       func_0x00018886d920((uVar14 | 0x84222325) + (ulonglong)((uint)uVar14 & 0x84222325));
  _DAT_1831dad50 = _DAT_1831dad50 ^ _DAT_1831dadb0 & 0xffffffffff800000 ^ 0xf5d9e504047c47b3;
  _DAT_1831dae58 =
       (_DAT_1831dae58 * 0x52a8d65c4e4942a5 ^ _DAT_1831dad50) +
       (_DAT_1831dadb0 & 0xffffffffff800000);
  _DAT_1831dae60 = _DAT_1831dae58 ^ _DAT_1831dad50;
  _DAT_1831dad08 = 0;
  uVar14 = auVar90._0_8_ ^ 0x84222325 ^ _DAT_1831dae60;
  lVar13 = (auVar90._0_8_ ^ 0x84222325) + _DAT_1831daea0;
  uVar50 = uVar14 + lVar13;
  uVar14 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar14;
  uVar50 = ((_DAT_1831daea0 + _DAT_1831dae60) * 0x2000 | _DAT_1831daea0 + _DAT_1831dae60 >> 0x33) ^
           _DAT_1831daea0;
  _DAT_1831dad78 =
       func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - _DAT_1831dae60 ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar13);
  uVar14 = uStack00000000000000a8;
  auVar22 = _DAT_1800170c0;
  uVar50 = ~(auVar90._0_8_ ^ _DAT_1831dad78) & auVar90._0_8_;
  uVar60 = (uint)(auVar90._0_8_ >> 0x20);
  auVar73._8_4_ = (int)auVar90._0_8_;
  auVar73._0_8_ = auVar90._0_8_;
  auVar73._12_4_ = uVar60;
  auVar21 = auVar90 ^ ZEXT816(0);
  uVar35 = SUB164(auVar73 | ZEXT816(0),0);
  uVar49 = auVar21._0_4_;
  auVar83._8_4_ = 0xffffffff;
  auVar83._0_8_ = 0xffffffffffffffff;
  auVar83._12_4_ = 0xffffffff;
  auVar23 = ZEXT816(0) ^ auVar83;
  uVar36 = SUB164(auVar73 ^ auVar83,0);
  uVar20 = auVar23._0_4_;
  uVar12 = (((ulonglong)uVar49 * (ulonglong)_DAT_181047680 +
             ((ulonglong)_DAT_181047690 * (ulonglong)uVar49 +
              (auVar21._0_8_ >> 0x20) * (ulonglong)_DAT_181047680 << 0x20) +
             (ulonglong)uVar35 * (ulonglong)_DAT_181047660 +
             ((ulonglong)_DAT_181047670 * (ulonglong)uVar35 +
              (SUB168(auVar73 | ZEXT816(0),0) >> 0x20) * (ulonglong)_DAT_181047660 << 0x20) +
            (auVar90._0_8_ & 0xffffffff) * (ulonglong)_DAT_181047630 +
            ((ulonglong)uVar60 * (ulonglong)_DAT_181047630 +
             (auVar90._0_8_ & 0xffffffff) * (ulonglong)_DAT_181047620 << 0x20)) -
           ((ulonglong)uVar20 * (ulonglong)_DAT_1810476f0 +
            ((auVar23._0_8_ >> 0x20) * (ulonglong)_DAT_1810476f0 +
             (ulonglong)_DAT_1810476e0 * (ulonglong)uVar20 << 0x20) +
            (auVar90._0_8_ & 0xffffffff) * (ulonglong)_DAT_1810476d0 +
            ((ulonglong)uVar60 * (ulonglong)_DAT_1810476d0 +
             (auVar90._0_8_ & 0xffffffff) * (ulonglong)_DAT_1810476c0 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_1810476d0 +
           ((SUB168(auVar73 ^ auVar83,0) >> 0x20) * (ulonglong)_DAT_1810476d0 +
            (ulonglong)_DAT_1810476c0 * (ulonglong)uVar36 << 0x20))) + 0xa7d8c84670b9971d;
  _DAT_1831dade8 = _DAT_1831dad40 ^ uVar50 ^ uVar12;
  _DAT_1831dad88 = (_DAT_1831dad88 ^ uVar50) + uVar12 ^ 0x91ddd7a6f5d1891d;
  _DAT_1831dadb0 = (_DAT_1831dadb0 * 0x6be303ed02590963 ^ _DAT_1831dad88) + uVar50;
  _DAT_1831dad80 = _DAT_1831dadb0 ^ _DAT_1831dad88;
  uStack00000000000000f0 = uStack00000000000000a8 ^ 0x84222325;
  auVar24._8_8_ = uVar12;
  auVar24._0_8_ = uStack00000000000000f0;
  auVar23 = pshufb(auVar24 ^ _DAT_181047700,_DAT_1800170c0);
  uVar15 = auVar23._8_8_ + auVar23._0_8_;
  uVar50 = uVar15 + _DAT_1831daed8;
  if (auVar23._4_4_ < 0) {
    uVar50 = _DAT_1831dae30 ^ uVar15;
  }
  _DAT_1831dada0 = uVar12;
  _DAT_1831daea0 = func_0x00018886d920(SUB161(auVar24 ^ _DAT_181047700,5) ^ uVar50);
  uVar50 = _DAT_181045940;
  uVar15 = uVar14 * uVar12 ^ _DAT_1831daea0;
  _DAT_1831dae40 = uVar12 ^ uVar14;
  _DAT_1831dad70 = (_DAT_1831dad70 ^ uVar15) + _DAT_1831dae40 ^ 0x2de6f5d5f95e9fde;
  _DAT_1831daeb0 = (_DAT_1831daeb0 * 0x72ae5f7d15cc38c5 ^ _DAT_1831dad70) + uVar15;
  _DAT_1831dadc8 = _DAT_1831daeb0 ^ _DAT_1831dad70;
  uVar12 = _DAT_181045940 ^ 0x84222325;
  auVar25._8_8_ = 0xdb217ca5a5ebea90;
  auVar25._0_8_ = uVar12;
  auVar23 = pshufb(auVar25 ^ _DAT_181047710,auVar22);
  uVar15 = auVar23._8_8_ + auVar23._0_8_;
  uVar14 = uVar15 + _DAT_1831dadb8;
  if (auVar23._4_4_ < 0) {
    uVar14 = _DAT_1831dad00 ^ uVar15;
  }
  _DAT_1831daee8 = func_0x00018886d920(SUB161(auVar25 ^ _DAT_181047710,5) ^ uVar14);
  uVar14 = uVar50 * -0x24de835a5a141570 ^ _DAT_1831daee8;
  uVar16 = uVar50 | 0xdb217ca5a5ebea90;
  _DAT_1831dae80 = (_DAT_1831dae80 ^ uVar14) + uVar16 ^ 0x221b02dbfea5a896;
  _DAT_1831dae60 = (_DAT_1831dae60 * 0x2e05ca7424e5e683 ^ _DAT_1831dae80) + uVar14;
  _DAT_1831dae28 = _DAT_1831dae60 ^ _DAT_1831dae80;
  uVar18 = _DAT_181045948 ^ 0xd842b5219cb9841d;
  lVar13 = uVar50 * uVar50;
  uVar19 = lVar13 * -0x35ba4eaaec424c5c;
  auVar26._8_8_ = uVar19;
  auVar26._0_8_ = _DAT_181047720;
  uVar50 = lVar13 * 0x35ba4eaaec424c5c;
  auVar22 = pshufb(auVar26 ^ _DAT_181047730,auVar22);
  uVar15 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar15 + uVar16;
  if (auVar22._4_4_ < 0) {
    uVar14 = _DAT_1831dada8 ^ uVar15;
  }
  _DAT_1831dae88 = uVar16;
  _DAT_1831daec8 = func_0x00018886d920(SUB161(auVar26 ^ _DAT_181047730,5) ^ uVar14);
  uVar35 = (uint)(uVar19 >> 0x20);
  auVar84._8_4_ = (int)uVar19;
  auVar84._0_8_ = uVar19;
  auVar84._12_4_ = uVar35;
  uVar60 = SUB164(auVar84 & _DAT_181047740,0);
  uVar82 = SUB168(auVar84 & _DAT_181047740,0);
  auVar3._8_8_ = _UNK_18001a718;
  auVar3._0_8_ = _DAT_18001a710;
  uVar49 = SUB164(auVar84 | _DAT_181047740,0);
  uVar20 = SUB164(auVar84 ^ auVar3,0);
  uVar87 = SUB168(auVar84 ^ auVar3,0);
  uVar15 = (lVar13 * 0x2ed10465feaf801c ^ _DAT_1831daec8) * 0x373c5dd8f06a274b;
  uVar14 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar15 = (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar15;
  uVar36 = SUB164(_DAT_181047740 ^ auVar84,0);
  uVar19 = (((ulonglong)uVar49 * (ulonglong)_DAT_181047780 +
             ((SUB168(auVar84 | _DAT_181047740,0) >> 0x20) * (ulonglong)_DAT_181047780 +
              (ulonglong)_DAT_181047770 * (ulonglong)uVar49 << 0x20) +
             (ulonglong)uVar60 * (ulonglong)_DAT_181047780 +
             ((uVar82 >> 0x20) * (ulonglong)_DAT_181047780 +
              (ulonglong)uVar60 * (ulonglong)_DAT_181047770 << 0x20) +
             (ulonglong)_DAT_181047750 * (uVar19 & 0xffffffff) +
             ((ulonglong)_DAT_181047760 * (uVar19 & 0xffffffff) +
              (ulonglong)uVar35 * (ulonglong)_DAT_181047750 << 0x20) +
            (ulonglong)_DAT_181047790 * (ulonglong)uVar20 +
            ((ulonglong)_DAT_1810477a0 * (ulonglong)uVar20 +
             (uVar87 >> 0x20) * (ulonglong)_DAT_181047790 << 0x20)) -
           ((ulonglong)uVar20 * (_DAT_181047830 & 0xffffffff) +
            ((ulonglong)_DAT_181047840 * (ulonglong)uVar20 +
             (uVar87 >> 0x20) * (_DAT_181047830 & 0xffffffff) << 0x20) +
            (ulonglong)uVar36 * (ulonglong)_DAT_181047810 +
            ((ulonglong)_DAT_181047820 * (ulonglong)uVar36 +
             (SUB168(_DAT_181047740 ^ auVar84,0) >> 0x20) * (ulonglong)_DAT_181047810 << 0x20) +
           (ulonglong)uVar60 * (ulonglong)_DAT_1810477f0 +
           ((ulonglong)_DAT_181047800 * (ulonglong)uVar60 +
            (uVar82 >> 0x20) * (ulonglong)_DAT_1810477f0 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_1810477d0 +
           ((ulonglong)_DAT_1810477e0 * (uVar19 & 0xffffffff) +
            (ulonglong)uVar35 * (ulonglong)_DAT_1810477d0 << 0x20))) + _DAT_181047850;
  _DAT_1831dad38 = _DAT_1831dae40 ^ uVar15 ^ uVar19;
  _DAT_1831dae40 = (_DAT_1831dae40 ^ uVar15) + uVar19 ^ 0x962240213c4cbca8;
  _DAT_1831dada8 = (_DAT_1831dada8 * 0x4f35d8b632acb93f ^ _DAT_1831dae40) + uVar15;
  _DAT_1831dae98 = _DAT_1831dada8 ^ _DAT_1831dae40;
  uVar15 = uVar19 ^ 0x84222325;
  uVar14 = ((_DAT_1831daea0 ^ uVar15) + (uVar15 & _DAT_1831daea0) * 2) * (uVar50 - _DAT_1831dae70);
  uVar14 = (uVar14 | _DAT_1831dae48) + (uVar14 & _DAT_1831dae48);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831dad70 = uVar19;
  _DAT_1831dad20 = func_0x00018886d920((uVar15 ^ uVar50 | uVar14) + (uVar14 & (uVar15 ^ uVar50)));
  uVar85 = (uint)(uVar19 >> 0x20);
  auVar65._8_4_ = (int)uVar19;
  auVar65._0_8_ = uVar19;
  auVar65._12_4_ = uVar85;
  uVar35 = (uint)(uVar50 >> 0x20);
  auVar42._8_4_ = (int)uVar50;
  auVar42._0_8_ = uVar50;
  auVar42._12_4_ = uVar35;
  auVar4._8_8_ = _UNK_18001a718;
  auVar4._0_8_ = _DAT_18001a710;
  uVar69 = SUB164(auVar65 & auVar42,0);
  uVar15 = SUB168(auVar65 & auVar42,0);
  uVar49 = SUB164(auVar65 ^ auVar42,0);
  uVar82 = SUB168(auVar65 ^ auVar42,0);
  uVar20 = SUB164(auVar65 ^ auVar4,0);
  uVar87 = SUB168(auVar65 ^ auVar4,0);
  uVar60 = SUB164(auVar65 | auVar42,0);
  auVar5._8_8_ = _UNK_18001a718;
  auVar5._0_8_ = _DAT_18001a710;
  uVar36 = SUB164(auVar42 ^ auVar5,0);
  uVar14 = _DAT_1831dad20 >> 1 | _DAT_1831dad20;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x20 ^ _DAT_1831dad20;
  uVar82 = (((_DAT_1810478a0 & 0xffffffff) * (ulonglong)uVar20 +
             ((_DAT_1810478f0 & 0xffffffff) * (ulonglong)uVar20 +
              (uVar87 >> 0x20) * (_DAT_1810478a0 & 0xffffffff) << 0x20) +
             (_DAT_1810478d0 & 0xffffffff) * (ulonglong)uVar49 +
             ((_DAT_1810478e0 & 0xffffffff) * (ulonglong)uVar49 +
              (uVar82 >> 0x20) * (_DAT_1810478d0 & 0xffffffff) << 0x20) +
            (_DAT_1810478b0 & 0xffffffff) * (ulonglong)uVar69 +
            ((_DAT_1810478c0 & 0xffffffff) * (ulonglong)uVar69 +
             (uVar15 >> 0x20) * (_DAT_1810478b0 & 0xffffffff) << 0x20) +
            (_DAT_181047880 & 0xffffffff) * (uVar50 & 0xffffffff) +
            ((_DAT_181047890 & 0xffffffff) * (uVar50 & 0xffffffff) +
             (ulonglong)uVar35 * (_DAT_181047880 & 0xffffffff) << 0x20) +
            (_DAT_181047860 & 0xffffffff) * (uVar19 & 0xffffffff) +
            ((_DAT_181047870 & 0xffffffff) * (uVar19 & 0xffffffff) +
             (ulonglong)uVar85 * (_DAT_181047860 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar36 * (ulonglong)_DAT_181047950 +
            ((SUB168(auVar42 ^ auVar5,0) >> 0x20) * (ulonglong)_DAT_181047950 +
             (ulonglong)_DAT_181047940 * (ulonglong)uVar36 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_181047930 +
            ((uVar87 >> 0x20) * (ulonglong)_DAT_181047930 +
             (ulonglong)_DAT_181047920 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)uVar49 * (ulonglong)_DAT_181047970 +
            ((uVar82 >> 0x20) * (ulonglong)_DAT_181047970 +
             (ulonglong)_DAT_181047960 * (ulonglong)uVar49 << 0x20) +
            (ulonglong)uVar69 * (ulonglong)_DAT_181047970 +
            ((uVar15 >> 0x20) * (ulonglong)_DAT_181047970 +
             (ulonglong)uVar69 * (ulonglong)_DAT_181047960 << 0x20) +
            (uVar50 & 0xffffffff) * (ulonglong)_DAT_181047950 +
            ((ulonglong)uVar35 * (ulonglong)_DAT_181047950 +
             (uVar50 & 0xffffffff) * (ulonglong)_DAT_181047940 << 0x20) +
            (uVar19 & 0xffffffff) * (ulonglong)_DAT_181047930 +
            ((ulonglong)uVar85 * (ulonglong)_DAT_181047930 +
             (uVar19 & 0xffffffff) * (ulonglong)_DAT_181047920 << 0x20) +
           (ulonglong)uVar60 * (ulonglong)_DAT_181047980 +
           ((ulonglong)_DAT_181047990 * (ulonglong)uVar60 +
            (SUB168(auVar65 | auVar42,0) >> 0x20) * (ulonglong)_DAT_181047980 << 0x20))) +
           _DAT_1810479a0;
  _DAT_1831daef8 = _DAT_1831dae98 ^ uVar14 ^ uVar82;
  _DAT_1831daed0 = (_DAT_1831daed0 ^ uVar14) + uVar82 ^ 0xc15f62bf8e6a9cfa;
  _DAT_1831dae40 = (_DAT_1831dae40 * 0x464692226194220f ^ _DAT_1831daed0) + uVar14;
  _DAT_1831dad80 = _DAT_1831dae40 ^ _DAT_1831daed0;
  uVar15 = _DAT_181045948 * _DAT_181045948 * -0x1f1ab393c84952a5;
  uVar14 = uVar82 ^ 0x84222325 ^ _DAT_1831dad60;
  lVar13 = (uVar82 ^ 0x84222325) + _DAT_1831dae98;
  uVar50 = uVar14 + lVar13;
  uVar19 = (uVar15 ^ _DAT_1831dae98) + _DAT_1831dad60 + uVar15;
  uVar14 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar14;
  uVar50 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar15 ^ _DAT_1831dae98;
  uVar19 = _DAT_181045948 * _DAT_181045948 * 0x1f1ab393c84952a5;
  _DAT_1831daef0 = uVar82;
  _DAT_1831dad60 =
       func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - (_DAT_1831dad60 + uVar15) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar13);
  uVar50 = _DAT_1831dad60 & 0x7fffffffffffffff ^ uVar82;
  uVar69 = (uint)(uVar82 >> 0x20);
  auVar79._8_4_ = (int)uVar82;
  auVar79._0_8_ = uVar82;
  auVar79._12_4_ = uVar69;
  uVar35 = (uint)(uVar15 >> 0x20);
  auVar94._8_4_ = (int)uVar15;
  auVar94._0_8_ = uVar15;
  auVar94._12_4_ = uVar35;
  auVar86._8_4_ = 0xffffffff;
  auVar86._0_8_ = 0xffffffffffffffff;
  auVar86._12_4_ = 0xffffffff;
  uVar85 = SUB164(auVar79 & auVar94,0);
  uVar49 = SUB164(auVar79 | auVar94,0);
  uVar36 = SUB164(auVar79 ^ auVar94,0);
  uVar20 = SUB164(auVar79 ^ auVar86,0);
  uVar87 = SUB168(auVar79 ^ auVar86,0);
  uVar14 = uVar50 >> 1 | uVar50;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar50 = (0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x40 ^ uVar50;
  auVar6._8_8_ = _UNK_18001a718;
  auVar6._0_8_ = _DAT_18001a710;
  uVar60 = SUB164(auVar94 ^ auVar6,0);
  uVar15 = (((ulonglong)_DAT_1810479f0 * (ulonglong)uVar20 +
             ((ulonglong)_DAT_181047a60 * (ulonglong)uVar20 +
              (uVar87 >> 0x20) * (ulonglong)_DAT_1810479f0 << 0x20) +
            (ulonglong)uVar36 * (ulonglong)_DAT_181047a40 +
            ((ulonglong)_DAT_181047a50 * (ulonglong)uVar36 +
             (SUB168(auVar79 ^ auVar94,0) >> 0x20) * (ulonglong)_DAT_181047a40 << 0x20) +
            (ulonglong)uVar49 * (ulonglong)_DAT_181047a20 +
            ((ulonglong)_DAT_181047a30 * (ulonglong)uVar49 +
             (SUB168(auVar79 | auVar94,0) >> 0x20) * (ulonglong)_DAT_181047a20 << 0x20) +
            (ulonglong)uVar85 * (ulonglong)_DAT_181047a00 +
            ((ulonglong)_DAT_181047a10 * (ulonglong)uVar85 +
             (SUB168(auVar79 & auVar94,0) >> 0x20) * (ulonglong)_DAT_181047a00 << 0x20) +
            (ulonglong)_DAT_1810479d0 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_1810479e0 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar35 * (ulonglong)_DAT_1810479d0 << 0x20) +
            (ulonglong)_DAT_1810479b0 * (uVar82 & 0xffffffff) +
            ((ulonglong)_DAT_1810479c0 * (uVar82 & 0xffffffff) +
             (ulonglong)uVar69 * (ulonglong)_DAT_1810479b0 << 0x20)) -
           ((ulonglong)uVar60 * (_DAT_181047ac0 & 0xffffffff) +
            ((SUB168(auVar94 ^ auVar6,0) >> 0x20) * (_DAT_181047ac0 & 0xffffffff) +
             (ulonglong)_DAT_181047ab0 * (ulonglong)uVar60 << 0x20) +
            (uVar15 & 0xffffffff) * (_DAT_181047ac0 & 0xffffffff) +
            ((ulonglong)uVar35 * (_DAT_181047ac0 & 0xffffffff) +
             (uVar15 & 0xffffffff) * (ulonglong)_DAT_181047ab0 << 0x20) +
            (uVar82 & 0xffffffff) * (ulonglong)_DAT_181047aa0 +
            ((ulonglong)uVar69 * (ulonglong)_DAT_181047aa0 +
             (uVar82 & 0xffffffff) * (ulonglong)_DAT_181047a90 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_181047aa0 +
           ((uVar87 >> 0x20) * (ulonglong)_DAT_181047aa0 +
            (ulonglong)_DAT_181047a90 * (ulonglong)uVar20 << 0x20))) + _DAT_181047ad0;
  _DAT_1831daef0 = _DAT_1831dae50 ^ uVar50 ^ uVar15;
  _DAT_1831dad10 = (_DAT_1831dad10 ^ uVar50) + uVar15 ^ 0x538863c5fd4b69b5;
  _DAT_1831dadb8 = (_DAT_1831dadb8 * -0x336318fd8274c60d ^ _DAT_1831dad10) + uVar50;
  _DAT_1831daed0 = _DAT_1831dadb8 ^ _DAT_1831dad10;
  auVar27._8_8_ = uVar19;
  auVar27._0_8_ = uVar15 ^ 0x84222325;
  auVar22 = pshufb(auVar27 ^ _DAT_181047ae0,_DAT_1800170c0);
  uVar50 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar50 + _DAT_1831dadd0;
  if (auVar22._4_4_ < 0) {
    uVar14 = uVar15 ^ uVar50;
  }
  _DAT_1831dae70 = uVar15;
  _DAT_1831dae30 = func_0x00018886d920(SUB161(auVar27 ^ _DAT_181047ae0,5) ^ uVar14);
  uVar14 = (uVar19 | uVar15) ^ _DAT_1831dae30;
  uVar14 = ~((uVar14 & 0xffffffff) * (ulonglong)_DAT_181047af0 +
            ((ulonglong)_DAT_181047b00 * (uVar14 & 0xffffffff) +
             (uVar14 >> 0x20) * (ulonglong)_DAT_181047af0 << 0x20)) & uVar15;
  uVar49 = (uint)(uVar15 >> 0x20);
  auVar28._8_4_ = (int)uVar15;
  auVar28._0_8_ = uVar15;
  auVar28._12_4_ = uVar49;
  uVar69 = (uint)(uVar19 >> 0x20);
  auVar66._8_4_ = (int)uVar19;
  auVar66._0_8_ = uVar19;
  auVar66._12_4_ = uVar69;
  uVar36 = SUB164(auVar28 & auVar66,0);
  uVar82 = SUB168(auVar28 & auVar66,0);
  uVar35 = SUB164(auVar28 | auVar66,0);
  uVar87 = SUB168(auVar28 | auVar66,0);
  uVar20 = SUB164(auVar28 ^ auVar66,0);
  uVar50 = SUB168(auVar28 ^ auVar66,0);
  auVar7._8_8_ = _UNK_18001a718;
  auVar7._0_8_ = _DAT_18001a710;
  uVar60 = SUB164(auVar28 ^ auVar7,0);
  uVar82 = (((ulonglong)_DAT_181047b70 * (ulonglong)uVar20 +
             ((ulonglong)_DAT_181047b80 * (ulonglong)uVar20 +
              (uVar50 >> 0x20) * (ulonglong)_DAT_181047b70 << 0x20) +
             (ulonglong)_DAT_181047b50 * (ulonglong)uVar35 +
             ((ulonglong)_DAT_181047b60 * (ulonglong)uVar35 +
              (uVar87 >> 0x20) * (ulonglong)_DAT_181047b50 << 0x20) +
            (ulonglong)_DAT_181047b30 * (ulonglong)uVar36 +
            ((ulonglong)_DAT_181047b40 * (ulonglong)uVar36 +
             (uVar82 >> 0x20) * (ulonglong)_DAT_181047b30 << 0x20) +
            (ulonglong)_DAT_181047b20 * (uVar19 & 0xffffffff) +
            ((ulonglong)uVar69 * (ulonglong)_DAT_181047b20 +
             (ulonglong)_DAT_181047b10 * (uVar19 & 0xffffffff) << 0x20) +
            (uVar15 & 0xffffffff) * (ulonglong)_DAT_181047b20 +
            ((ulonglong)uVar49 * (ulonglong)_DAT_181047b20 +
             (uVar15 & 0xffffffff) * (ulonglong)_DAT_181047b10 << 0x20)) -
           ((ulonglong)uVar60 * (_DAT_181047bf0 & 0xffffffff) +
            ((ulonglong)_DAT_181047c60 * (ulonglong)uVar60 +
             (SUB168(auVar28 ^ auVar7,0) >> 0x20) * (_DAT_181047bf0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_181047c40 +
           ((ulonglong)_DAT_181047c50 * (ulonglong)uVar20 +
            (uVar50 >> 0x20) * (ulonglong)_DAT_181047c40 << 0x20) +
           (ulonglong)uVar35 * (ulonglong)_DAT_181047c20 +
           ((ulonglong)_DAT_181047c30 * (ulonglong)uVar35 +
            (uVar87 >> 0x20) * (ulonglong)_DAT_181047c20 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_181047c00 +
           ((ulonglong)_DAT_181047c10 * (ulonglong)uVar36 +
            (uVar82 >> 0x20) * (ulonglong)_DAT_181047c00 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_181047bd0 +
           ((ulonglong)_DAT_181047be0 * (uVar19 & 0xffffffff) +
            (ulonglong)uVar69 * (ulonglong)_DAT_181047bd0 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_181047bb0 +
           ((ulonglong)_DAT_181047bc0 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar49 * (ulonglong)_DAT_181047bb0 << 0x20))) - _DAT_181047bf0;
  _DAT_1831dadd8 = _DAT_1831dae18 ^ uVar14 ^ uVar82;
  _DAT_1831dade8 = (_DAT_1831dade8 ^ uVar14) + uVar82 ^ 0x1d343f208f32015d;
  _DAT_1831daed0 = (_DAT_1831daed0 * -0x687cfb03f19fae13 ^ _DAT_1831dade8) + uVar14;
  _DAT_1831dae00 = _DAT_1831daed0 ^ _DAT_1831dade8;
  lVar13 = _DAT_181045948 * _DAT_181045940;
  uVar15 = lVar13 * -0x63d11997de7a0df9;
  uVar14 = ((_DAT_1831dadd8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831dadd8 & 0x84222325) * 2) *
           (uVar15 - _DAT_1831dade0);
  uVar14 = (uVar14 | _DAT_1831daed8) + (uVar14 & _DAT_1831daed8);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831daec0 = uVar82;
  _DAT_1831dad80 =
       func_0x00018886d920((uVar15 ^ 0x84222325 | uVar14) + (uVar14 & (uVar15 ^ 0x84222325)));
  uVar14 = (_DAT_1831dad80 & 0xffffffffffffffc0) << 0x2c | _DAT_1831dad80 >> 0x14;
  uVar50 = lVar13 * 0x63d11997de7a0df9;
  _DAT_1831dadd0 = (_DAT_1831dadd0 ^ uVar14) + lVar13 * 0x63d11997de7a0df9 ^ 0x17e4ad9948ab369f;
  _DAT_1831dad40 = (_DAT_1831dad40 * -0x6ae94dd4b7445e3f ^ _DAT_1831dadd0) + uVar14;
  _DAT_1831dadf0 = _DAT_1831dad40 ^ _DAT_1831dadd0;
  auVar29._8_8_ = uVar15;
  auVar29._0_8_ = uVar82 ^ 0x84222325;
  auVar22 = pshufb(auVar29 ^ _DAT_181047c70,_DAT_1800170c0);
  uVar19 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar19 + _DAT_1831dae60;
  if (auVar22._4_4_ < 0) {
    uVar14 = _DAT_1831dae58 ^ uVar19;
  }
  _DAT_1831dae08 = uVar50;
  uVar14 = func_0x00018886d920(SUB161(auVar29 ^ _DAT_181047c70,5) ^ uVar14);
  uVar14 = ~(uVar82 * uVar15 ^ uVar14) & uVar82;
  uVar69 = (uint)(uVar82 >> 0x20);
  auVar80._8_4_ = (int)uVar82;
  auVar80._0_8_ = uVar82;
  auVar80._12_4_ = uVar69;
  uVar49 = (uint)(uVar15 >> 0x20);
  auVar43._8_4_ = (int)uVar15;
  auVar43._0_8_ = uVar15;
  auVar43._12_4_ = uVar49;
  auVar67._8_4_ = 0xffffffff;
  auVar67._0_8_ = 0xffffffffffffffff;
  auVar67._12_4_ = 0xffffffff;
  uVar60 = SUB164(auVar80 & auVar43,0);
  uVar20 = SUB164(auVar80 ^ auVar43,0);
  uVar35 = SUB164(auVar43 ^ auVar67,0);
  uVar19 = SUB168(auVar43 ^ auVar67,0);
  auVar8._8_8_ = _UNK_18001a718;
  auVar8._0_8_ = _DAT_18001a710;
  uVar36 = SUB164(auVar80 ^ auVar8,0);
  uVar82 = (((ulonglong)_DAT_181047cc0 * (ulonglong)uVar35 +
             ((ulonglong)_DAT_181047d10 * (ulonglong)uVar35 +
              (uVar19 >> 0x20) * (ulonglong)_DAT_181047cc0 << 0x20) +
             (ulonglong)uVar20 * (ulonglong)_DAT_181047cf0 +
             ((ulonglong)_DAT_181047d00 * (ulonglong)uVar20 +
              (SUB168(auVar80 ^ auVar43,0) >> 0x20) * (ulonglong)_DAT_181047cf0 << 0x20) +
            (ulonglong)uVar60 * (ulonglong)_DAT_181047cd0 +
            ((ulonglong)_DAT_181047ce0 * (ulonglong)uVar60 +
             (SUB168(auVar80 & auVar43,0) >> 0x20) * (ulonglong)_DAT_181047cd0 << 0x20) +
            (ulonglong)_DAT_181047ca0 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_181047cb0 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar49 * (ulonglong)_DAT_181047ca0 << 0x20) +
            (ulonglong)_DAT_181047c80 * (uVar82 & 0xffffffff) +
            ((ulonglong)_DAT_181047c90 * (uVar82 & 0xffffffff) +
             (ulonglong)uVar69 * (ulonglong)_DAT_181047c80 << 0x20)) -
           ((ulonglong)uVar35 * (ulonglong)_DAT_181047d70 +
            ((uVar19 >> 0x20) * (ulonglong)_DAT_181047d70 +
             (ulonglong)_DAT_181047d60 * (ulonglong)uVar35 << 0x20) +
            (uVar15 & 0xffffffff) * (ulonglong)_DAT_181047d70 +
            ((ulonglong)uVar49 * (ulonglong)_DAT_181047d70 +
             (uVar15 & 0xffffffff) * (ulonglong)_DAT_181047d60 << 0x20) +
            (uVar82 & 0xffffffff) * (ulonglong)_DAT_181047d50 +
            ((ulonglong)uVar69 * (ulonglong)_DAT_181047d50 +
             (uVar82 & 0xffffffff) * (ulonglong)_DAT_181047d40 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_181047d50 +
           ((SUB168(auVar80 ^ auVar8,0) >> 0x20) * (ulonglong)_DAT_181047d50 +
            (ulonglong)_DAT_181047d40 * (ulonglong)uVar36 << 0x20))) + _DAT_181047d80;
  _DAT_1831daed8 = _DAT_1831dae08 ^ uVar14 ^ uVar82;
  _DAT_1831daec0 = (_DAT_1831daec0 ^ uVar14) + uVar82 ^ 0x8c44f2ca87a7abea;
  _DAT_1831dae00 = (_DAT_1831dae00 * -0x3d76c33373e2d773 ^ _DAT_1831daec0) + uVar14;
  _DAT_1831dad80 = _DAT_1831dae00 ^ _DAT_1831daec0;
  uVar14 = uVar82 ^ 0x84222325 ^ _DAT_1831daed8;
  lVar17 = (uVar82 ^ 0x84222325) + _DAT_1831dae78;
  lVar13 = _DAT_1831daed8 + lVar13 * 0x63d11997de7a0df9;
  uVar15 = uVar14 + lVar17;
  uVar19 = (uVar50 ^ _DAT_1831dae78) + lVar13;
  uVar14 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar14;
  uVar15 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar50 ^ _DAT_1831dae78;
  _DAT_1831dae30 = uVar82;
  _DAT_1831dad48 =
       func_0x00018886d920((uVar15 << 0x1d | uVar15 >> 0x23) - lVar13 ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar17);
  uVar60 = (uint)(uVar82 >> 0x20);
  auVar81._8_4_ = (int)uVar82;
  auVar81._0_8_ = uVar82;
  auVar81._12_4_ = uVar60;
  uVar35 = (uint)(uVar50 >> 0x20);
  auVar44._8_4_ = (int)uVar50;
  auVar44._0_8_ = uVar50;
  auVar44._12_4_ = uVar35;
  uVar36 = SUB164(auVar81 & auVar44,0);
  uVar15 = SUB168(auVar81 & auVar44,0);
  uVar49 = SUB164(auVar81 | auVar44,0);
  uVar20 = SUB164(auVar81 ^ auVar44,0);
  uVar19 = SUB168(auVar81 ^ auVar44,0);
  uVar14 = ((uVar82 | uVar50) ^ _DAT_1831dad48 ^ uVar82) * 0x75b56f8b0bdcc997;
  uVar87 = ((_DAT_181047df0 & 0xffffffff) * (ulonglong)uVar20 +
            ((_DAT_181047e00 & 0xffffffff) * (ulonglong)uVar20 +
             (uVar19 >> 0x20) * (_DAT_181047df0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar49 * (ulonglong)_DAT_181047dd0 +
            ((_DAT_181047de0 & 0xffffffff) * (ulonglong)uVar49 +
             (SUB168(auVar81 | auVar44,0) >> 0x20) * (ulonglong)_DAT_181047dd0 << 0x20) +
           (_DAT_181047db0 & 0xffffffff) * (ulonglong)uVar36 +
           ((_DAT_181047dc0 & 0xffffffff) * (ulonglong)uVar36 +
            (uVar15 >> 0x20) * (_DAT_181047db0 & 0xffffffff) << 0x20) +
           (_DAT_181047da0 & 0xffffffff) * (uVar50 & 0xffffffff) +
           ((ulonglong)uVar35 * (_DAT_181047da0 & 0xffffffff) +
            (_DAT_181047d90 & 0xffffffff) * (uVar50 & 0xffffffff) << 0x20) +
           (uVar82 & 0xffffffff) * (_DAT_181047da0 & 0xffffffff) +
           ((ulonglong)uVar60 * (_DAT_181047da0 & 0xffffffff) +
            (uVar82 & 0xffffffff) * (_DAT_181047d90 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar20 * (_DAT_181047e70 & 0xffffffff) +
            ((_DAT_181047e80 & 0xffffffff) * (ulonglong)uVar20 +
             (uVar19 >> 0x20) * (_DAT_181047e70 & 0xffffffff) << 0x20) +
           (ulonglong)uVar36 * (_DAT_181047e50 & 0xffffffff) +
           ((_DAT_181047e60 & 0xffffffff) * (ulonglong)uVar36 +
            (uVar15 >> 0x20) * (_DAT_181047e50 & 0xffffffff) << 0x20) +
           (uVar50 & 0xffffffff) * (ulonglong)_DAT_181047e40 +
           ((ulonglong)uVar35 * (ulonglong)_DAT_181047e40 +
            (_DAT_181047e30 & 0xffffffff) * (uVar50 & 0xffffffff) << 0x20) +
           (uVar82 & 0xffffffff) * (ulonglong)_DAT_181047e40 +
           ((ulonglong)uVar60 * (ulonglong)_DAT_181047e40 +
            (uVar82 & 0xffffffff) * (_DAT_181047e30 & 0xffffffff) << 0x20));
  _DAT_1831dad38 = _DAT_1831dad20 ^ uVar14 ^ uVar87;
  _DAT_1831dad00 = (_DAT_1831dad00 ^ uVar14) + uVar87 ^ 0x2f622b2828a2197b;
  _DAT_1831dada0 = (_DAT_1831dada0 * 0xadb9cd1b484cbab ^ _DAT_1831dad00) + uVar14;
  _DAT_1831daef0 = _DAT_1831dada0 ^ _DAT_1831dad00;
  uVar82 = uVar16 ^ 0x84222325;
  uVar14 = ((_DAT_1831dae98 ^ uVar82) + (uVar82 & _DAT_1831dae98) * 2) * (uVar18 - _DAT_1831dadd0);
  uVar14 = (uVar14 | _DAT_1831dad00) + (uVar14 & _DAT_1831dad00);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  uVar15 = uVar82 ^ uVar18;
  _DAT_1831daef8 = uVar87;
  _DAT_1831dad90 = func_0x00018886d920((uVar14 | uVar15) + (uVar14 & uVar15));
  uVar35 = (uint)(uVar16 >> 0x20);
  auVar56._8_4_ = (int)uVar16;
  auVar56._0_8_ = uVar16;
  auVar56._12_4_ = uVar35;
  uVar36 = (uint)(uVar18 >> 0x20);
  auVar45._8_4_ = (int)uVar18;
  auVar45._0_8_ = uVar18;
  auVar45._12_4_ = uVar36;
  uVar60 = SUB164(auVar56 & auVar45,0);
  uVar19 = SUB168(auVar56 & auVar45,0);
  uVar85 = SUB164(auVar56 ^ auVar45,0);
  uVar91 = SUB168(auVar56 ^ auVar45,0);
  auVar74._8_4_ = 0xffffffff;
  auVar74._0_8_ = 0xffffffffffffffff;
  auVar74._12_4_ = 0xffffffff;
  uVar69 = SUB164(auVar56 ^ auVar74,0);
  uVar20 = SUB164(auVar45 ^ auVar74,0);
  uVar49 = SUB164(auVar56 | auVar45,0);
  uVar14 = _DAT_1831dad90 << 1 | (ulonglong)((longlong)_DAT_1831dad90 < 0);
  uVar50 = _DAT_1831dad90 & 0x7fffffffffffffff | uVar14;
  uVar50 = uVar50 >> 2 | uVar50;
  uVar50 = uVar50 >> 4 | uVar50;
  uVar50 = uVar50 >> 8 | uVar50;
  uVar50 = uVar50 >> 0x10 | uVar50;
  uVar50 = uVar50 >> 0x20 | uVar50;
  uVar50 = uVar50 - (uVar50 >> 1 & 0x5555555555555555);
  uVar50 = (uVar50 & 0x3333333333333333) + (uVar50 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar50 >> 4) + uVar50 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x80 ^ uVar14;
  uVar91 = (((ulonglong)uVar20 * (ulonglong)_DAT_181047f30 +
             ((ulonglong)_DAT_181047f40 * (ulonglong)uVar20 +
              (SUB168(auVar45 ^ auVar74,0) >> 0x20) * (ulonglong)_DAT_181047f30 << 0x20) +
            (ulonglong)uVar69 * (ulonglong)_DAT_181047f10 +
            ((ulonglong)_DAT_181047f20 * (ulonglong)uVar69 +
             (SUB168(auVar56 ^ auVar74,0) >> 0x20) * (ulonglong)_DAT_181047f10 << 0x20) +
            (ulonglong)_DAT_181047ef0 * (ulonglong)uVar85 +
            ((ulonglong)_DAT_181047f00 * (ulonglong)uVar85 +
             (uVar91 >> 0x20) * (ulonglong)_DAT_181047ef0 << 0x20) +
            (ulonglong)_DAT_181047ed0 * (ulonglong)uVar60 +
            ((ulonglong)_DAT_181047ee0 * (ulonglong)uVar60 +
             (uVar19 >> 0x20) * (ulonglong)_DAT_181047ed0 << 0x20) +
            (ulonglong)_DAT_181047eb0 * (uVar18 & 0xffffffff) +
            ((ulonglong)_DAT_181047ec0 * (uVar18 & 0xffffffff) +
             (ulonglong)uVar36 * (ulonglong)_DAT_181047eb0 << 0x20) +
            (ulonglong)_DAT_181047e90 * (uVar16 & 0xffffffff) +
            ((ulonglong)_DAT_181047ea0 * (uVar16 & 0xffffffff) +
             (ulonglong)uVar35 * (ulonglong)_DAT_181047e90 << 0x20)) -
           ((ulonglong)uVar85 * (_DAT_181047fd0 & 0xffffffff) +
            ((ulonglong)_DAT_181047fe0 * (ulonglong)uVar85 +
             (uVar91 >> 0x20) * (_DAT_181047fd0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar49 * (ulonglong)_DAT_181047fb0 +
            ((ulonglong)_DAT_181047fc0 * (ulonglong)uVar49 +
             (SUB168(auVar56 | auVar45,0) >> 0x20) * (ulonglong)_DAT_181047fb0 << 0x20) +
           (ulonglong)uVar60 * (ulonglong)_DAT_181047f90 +
           ((ulonglong)_DAT_181047fa0 * (ulonglong)uVar60 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_181047f90 << 0x20) +
           (uVar18 & 0xffffffff) * (ulonglong)_DAT_181047f80 +
           ((ulonglong)uVar36 * (ulonglong)_DAT_181047f80 +
            (ulonglong)_DAT_181047f70 * (uVar18 & 0xffffffff) << 0x20) +
           (uVar16 & 0xffffffff) * (ulonglong)_DAT_181047f80 +
           ((ulonglong)uVar35 * (ulonglong)_DAT_181047f80 +
            (uVar16 & 0xffffffff) * (ulonglong)_DAT_181047f70 << 0x20))) + _DAT_181047ff0;
  _DAT_1831dadb0 = _DAT_1831dae88 ^ uVar14 ^ uVar91;
  _DAT_1831dae58 = (_DAT_1831dae58 ^ uVar14) + uVar91 ^ 0x3bbcf26d8589d40;
  _DAT_1831dae18 = (_DAT_1831dae18 * 0x1bb7d93504717f27 ^ _DAT_1831dae58) + uVar14;
  _DAT_1831daed0 = _DAT_1831dae18 ^ _DAT_1831dae58;
  uVar14 = ((_DAT_1831dae90 ^ uVar82) + (uVar82 & _DAT_1831dae90) * 2) * (uVar18 - _DAT_1831dadf8);
  uVar14 = (uVar14 | _DAT_1831dadb8) + (uVar14 & _DAT_1831dadb8);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831dae80 = uVar91;
  _DAT_1831dae90 = func_0x00018886d920((uVar14 | uVar15) + (uVar14 & uVar15));
  uVar19 = uVar18 & uVar16;
  uVar50 = uVar16 + uVar18 + uVar19 * -2;
  _DAT_1831dad48 = (_DAT_1831dad48 ^ _DAT_1831dae90) + uVar50 ^ 0xb41d938df4f075a0;
  _DAT_1831daef0 = (_DAT_1831daef0 * 0x32bef76d3452fe4f ^ _DAT_1831dad48) + _DAT_1831dae90;
  _DAT_1831daeb0 = _DAT_1831daef0 ^ _DAT_1831dad48;
  auVar30._8_8_ = uVar18;
  auVar30._0_8_ = uVar82;
  auVar22 = pshufb(auVar30 ^ _DAT_181048000,_DAT_1800170c0);
  uVar15 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar15 + _DAT_1831dad18;
  if (auVar22._4_4_ < 0) {
    uVar14 = _DAT_1831dad30 ^ uVar15;
  }
  _DAT_1831dae20 = uVar50;
  _DAT_1831dadd8 = func_0x00018886d920(SUB161(auVar30 ^ _DAT_181048000,5) ^ uVar14);
  uVar14 = (~_DAT_1831dadd8 & uVar16) * 0x2716c1e2dd479267;
  _DAT_1831dae70 = (_DAT_1831dae70 ^ uVar14) + uVar19 ^ 0x2783840ed7f82120;
  _DAT_1831daeb0 = (_DAT_1831daeb0 * -0x74b2fd60af5f1865 ^ _DAT_1831dae70) + uVar14;
  _DAT_1831dae88 = _DAT_1831daeb0 ^ _DAT_1831dae70;
  uVar14 = uVar50 ^ 0x84222325 ^ _DAT_1831dadb0;
  uVar15 = uVar19 * 2 ^ _DAT_1831dad78;
  lVar17 = (uVar50 ^ 0x84222325) + _DAT_1831dad78;
  lVar13 = _DAT_1831dadb0 + uVar19 * 2;
  uVar18 = uVar14 + lVar17;
  uVar59 = uVar15 + lVar13;
  uVar14 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar14;
  uVar15 = (uVar59 * 0x2000 | uVar59 >> 0x33) ^ uVar15;
  _DAT_1831daed8 = uVar19;
  _DAT_1831dae40 =
       func_0x00018886d920((uVar15 << 0x1d | uVar15 >> 0x23) - lVar13 ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar17);
  uVar35 = (uint)(uVar50 >> 0x20);
  auVar57._8_4_ = (int)uVar50;
  auVar57._0_8_ = uVar50;
  auVar57._12_4_ = uVar35;
  auVar46._8_4_ = (int)uVar19;
  auVar46._0_8_ = uVar19;
  auVar46._12_4_ = (int)(uVar19 >> 0x20);
  uVar14 = uVar19 * 2;
  auVar47._8_8_ = auVar46._8_8_ * 2;
  auVar47._0_8_ = uVar14;
  uVar49 = (uint)(uVar14 >> 0x20);
  uVar36 = SUB164(auVar57 & auVar47,0);
  uVar18 = SUB168(auVar57 & auVar47,0);
  uVar20 = SUB164(auVar57 | auVar47,0);
  uVar59 = SUB168(auVar57 | auVar47,0);
  uVar69 = SUB164(auVar57 ^ auVar47,0);
  auVar9._8_8_ = _UNK_18001a718;
  auVar9._0_8_ = _DAT_18001a710;
  uVar60 = SUB164(auVar47 ^ auVar9,0);
  uVar15 = (uVar19 * 2 | uVar50) ^ _DAT_1831dae40;
  uVar18 = (((ulonglong)uVar60 * (_DAT_181048050 & 0xffffffff) +
             ((ulonglong)_DAT_1810480c0 * (ulonglong)uVar60 +
              (SUB168(auVar47 ^ auVar9,0) >> 0x20) * (_DAT_181048050 & 0xffffffff) << 0x20) +
            (ulonglong)uVar69 * (ulonglong)_DAT_1810480a0 +
            ((ulonglong)_DAT_1810480b0 * (ulonglong)uVar69 +
             (SUB168(auVar57 ^ auVar47,0) >> 0x20) * (ulonglong)_DAT_1810480a0 << 0x20) +
            (ulonglong)_DAT_181048080 * (ulonglong)uVar20 +
            ((ulonglong)_DAT_181048090 * (ulonglong)uVar20 +
             (uVar59 >> 0x20) * (ulonglong)_DAT_181048080 << 0x20) +
            (ulonglong)_DAT_181048060 * (ulonglong)uVar36 +
            ((ulonglong)_DAT_181048070 * (ulonglong)uVar36 +
             (uVar18 >> 0x20) * (ulonglong)_DAT_181048060 << 0x20) +
            (ulonglong)_DAT_181048030 * (uVar14 & 0xffffffff) +
            ((ulonglong)_DAT_181048040 * (uVar14 & 0xffffffff) +
             (ulonglong)uVar49 * (ulonglong)_DAT_181048030 << 0x20) +
            (ulonglong)_DAT_181048010 * (uVar50 & 0xffffffff) +
            ((ulonglong)_DAT_181048020 * (uVar50 & 0xffffffff) +
             (ulonglong)uVar35 * (ulonglong)_DAT_181048010 << 0x20)) -
           ((ulonglong)uVar20 * (ulonglong)_DAT_181048120 +
            ((uVar59 >> 0x20) * (ulonglong)_DAT_181048120 +
             (ulonglong)_DAT_181048110 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_181048120 +
           ((uVar18 >> 0x20) * (ulonglong)_DAT_181048120 +
            (ulonglong)uVar36 * (ulonglong)_DAT_181048110 << 0x20) +
           (uVar14 & 0xffffffff) * (ulonglong)_DAT_181048100 +
           ((ulonglong)uVar49 * (ulonglong)_DAT_181048100 +
            (ulonglong)_DAT_1810480f0 * (uVar14 & 0xffffffff) << 0x20) +
           (uVar50 & 0xffffffff) * (ulonglong)_DAT_181048100 +
           ((ulonglong)uVar35 * (ulonglong)_DAT_181048100 +
            (uVar50 & 0xffffffff) * (ulonglong)_DAT_1810480f0 << 0x20))) + _DAT_181048050;
  auVar48._8_8_ = uVar18;
  auVar48._0_8_ = uVar91 ^ 0x84222325;
  auVar22 = pshufb(auVar48 ^ _DAT_181048130,_DAT_1800170c0);
  uVar14 = (uVar15 & 0x1fffff) << 0x2a | uVar15 >> 0x16;
  _DAT_1831dad50 = _DAT_1831dad78 ^ uVar14 ^ uVar18;
  _DAT_1831dad18 = (_DAT_1831dad18 ^ uVar14) + uVar18 ^ 0x97b3d49f23e68837;
  _DAT_1831dae30 = (_DAT_1831dae30 * 0x70caf63fc75af97b ^ _DAT_1831dad18) + uVar14;
  _DAT_1831dad88 = _DAT_1831dae30 ^ _DAT_1831dad18;
  uVar50 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar50 + _DAT_1831dad88;
  if (auVar22._4_4_ < 0) {
    uVar14 = _DAT_1831dae30 ^ uVar50;
  }
  _DAT_1831dad58 = uVar18;
  _DAT_1831daeb8 = func_0x00018886d920(SUB161(auVar48 ^ _DAT_181048130,5) ^ uVar14);
  uVar60 = (uint)(uVar91 >> 0x20);
  auVar68._8_4_ = (int)uVar91;
  auVar68._0_8_ = uVar91;
  auVar68._12_4_ = uVar60;
  uVar49 = (uint)(uVar18 >> 0x20);
  auVar58._8_4_ = (int)uVar18;
  auVar58._0_8_ = uVar18;
  auVar58._12_4_ = uVar49;
  uVar20 = SUB164(auVar68 & auVar58,0);
  uVar50 = SUB168(auVar68 & auVar58,0);
  uVar35 = SUB164(auVar68 | auVar58,0);
  uVar15 = SUB168(auVar68 | auVar58,0);
  uVar36 = SUB164(auVar68 ^ auVar58,0);
  uVar14 = uVar91 * uVar18 ^ _DAT_1831daeb8;
  uVar19 = uVar91 ^ _DAT_18001a710;
  uVar15 = (((ulonglong)uVar36 * (ulonglong)_DAT_1810481b0 +
             ((ulonglong)_DAT_1810481c0 * (ulonglong)uVar36 +
              (SUB168(auVar68 ^ auVar58,0) >> 0x20) * (ulonglong)_DAT_1810481b0 << 0x20) +
             (ulonglong)_DAT_181048190 * (ulonglong)uVar35 +
             ((ulonglong)_DAT_1810481a0 * (ulonglong)uVar35 +
              (uVar15 >> 0x20) * (ulonglong)_DAT_181048190 << 0x20) +
            (ulonglong)_DAT_181048170 * (ulonglong)uVar20 +
            ((ulonglong)_DAT_181048180 * (ulonglong)uVar20 +
             (uVar50 >> 0x20) * (ulonglong)_DAT_181048170 << 0x20) +
            (ulonglong)_DAT_181048160 * (uVar18 & 0xffffffff) +
            ((ulonglong)uVar49 * (ulonglong)_DAT_181048160 +
             (ulonglong)_DAT_181048140 * (uVar18 & 0xffffffff) << 0x20) +
            (ulonglong)_DAT_181048150 * (uVar91 & 0xffffffff) +
            ((ulonglong)uVar60 * (ulonglong)_DAT_181048150 +
             (uVar91 & 0xffffffff) * (ulonglong)_DAT_181048140 << 0x20)) -
           ((uVar19 & 0xffffffff) * (_DAT_181048230 & 0xffffffff) +
            ((ulonglong)_DAT_181048260 * (uVar19 & 0xffffffff) +
             (uVar19 >> 0x20) * (_DAT_181048230 & 0xffffffff) << 0x20) +
           (ulonglong)uVar35 * (ulonglong)_DAT_181048250 +
           ((uVar15 >> 0x20) * (ulonglong)_DAT_181048250 +
            (ulonglong)_DAT_181048240 * (ulonglong)uVar35 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_181048250 +
           ((uVar50 >> 0x20) * (ulonglong)_DAT_181048250 +
            (ulonglong)uVar20 * (ulonglong)_DAT_181048240 << 0x20) +
           (uVar18 & 0xffffffff) * (ulonglong)_DAT_181048210 +
           ((ulonglong)_DAT_181048220 * (uVar18 & 0xffffffff) +
            (ulonglong)uVar49 * (ulonglong)_DAT_181048210 << 0x20) +
           (uVar91 & 0xffffffff) * (ulonglong)_DAT_1810481f0 +
           ((ulonglong)_DAT_181048200 * (uVar91 & 0xffffffff) +
            (ulonglong)uVar60 * (ulonglong)_DAT_1810481f0 << 0x20))) - _DAT_181048230;
  _DAT_1831dad10 = uVar15 ^ uVar14;
  _DAT_1831dae00 = (_DAT_1831dae00 ^ uVar14) + uVar15 ^ 0x9c208441490ac99;
  _DAT_1831daeb0 = (_DAT_1831daeb0 * -0x3c015814ba6a81c9 ^ _DAT_1831dae00) + uVar14;
  _DAT_1831dae38 = _DAT_1831daeb0 ^ _DAT_1831dae00;
  uVar50 = uVar87 ^ 0x84222325;
  uVar14 = ((_DAT_1831dae78 ^ uVar50) + (uVar50 & _DAT_1831dae78) * 2) * (uVar15 - _DAT_1831dad20);
  uVar14 = (uVar14 | _DAT_1831dae30) + (uVar14 & _DAT_1831dae30);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_1831dade8 = uVar15;
  _DAT_1831dadf0 = func_0x00018886d920((uVar50 ^ uVar15 | uVar14) + (uVar14 & (uVar50 ^ uVar15)));
  uStack0000000000000070 = (undefined4)uVar87;
  uStack0000000000000074 = (uint)(uVar87 >> 0x20);
  auVar75._8_4_ = uStack0000000000000070;
  auVar75._0_8_ = uVar87;
  auVar75._12_4_ = uStack0000000000000074;
  uVar60 = (uint)(uVar15 >> 0x20);
  auVar31._8_4_ = (int)uVar15;
  auVar31._0_8_ = uVar15;
  auVar31._12_4_ = uVar60;
  uVar49 = SUB164(auVar75 & auVar31,0);
  uVar18 = SUB168(auVar75 & auVar31,0);
  uVar36 = SUB164(auVar75 | auVar31,0);
  uVar19 = SUB168(auVar75 | auVar31,0);
  uVar35 = SUB164(auVar75 ^ auVar31,0);
  uVar50 = SUB168(auVar75 ^ auVar31,0);
  auVar10._8_8_ = _UNK_18001a718;
  auVar10._0_8_ = _DAT_18001a710;
  uVar69 = SUB164(auVar75 ^ auVar10,0);
  auVar97._8_4_ = 0xffffffff;
  auVar97._0_8_ = 0xffffffffffffffff;
  auVar97._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar31 ^ auVar97,0);
  uVar14 = _DAT_1831dadf0 << 0x1f | _DAT_1831dadf0 >> 0x21;
  uVar18 = (((ulonglong)uVar69 * (ulonglong)_DAT_1810482b0 +
             ((ulonglong)_DAT_181048320 * (ulonglong)uVar69 +
              (SUB168(auVar75 ^ auVar10,0) >> 0x20) * (ulonglong)_DAT_1810482b0 << 0x20) +
            (ulonglong)_DAT_181048300 * (ulonglong)uVar35 +
            ((ulonglong)_DAT_181048310 * (ulonglong)uVar35 +
             (uVar50 >> 0x20) * (ulonglong)_DAT_181048300 << 0x20) +
            (ulonglong)_DAT_1810482e0 * (ulonglong)uVar36 +
            ((ulonglong)_DAT_1810482f0 * (ulonglong)uVar36 +
             (uVar19 >> 0x20) * (ulonglong)_DAT_1810482e0 << 0x20) +
            (ulonglong)_DAT_1810482c0 * (ulonglong)uVar49 +
            ((ulonglong)_DAT_1810482d0 * (ulonglong)uVar49 +
             (uVar18 >> 0x20) * (ulonglong)_DAT_1810482c0 << 0x20) +
            (ulonglong)_DAT_181048290 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_1810482a0 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar60 * (ulonglong)_DAT_181048290 << 0x20) +
            (ulonglong)_DAT_181048270 * (uVar87 & 0xffffffff) +
            ((ulonglong)_DAT_181048280 * (uVar87 & 0xffffffff) +
             (ulonglong)uStack0000000000000074 * (ulonglong)_DAT_181048270 << 0x20)) -
           ((ulonglong)uVar20 * (ulonglong)_DAT_181048390 +
            ((ulonglong)_DAT_181048400 * (ulonglong)uVar20 +
             (SUB168(auVar31 ^ auVar97,0) >> 0x20) * (ulonglong)_DAT_181048390 << 0x20) +
           (ulonglong)uVar35 * (ulonglong)_DAT_1810483e0 +
           ((ulonglong)_DAT_1810483f0 * (ulonglong)uVar35 +
            (uVar50 >> 0x20) * (ulonglong)_DAT_1810483e0 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_1810483c0 +
           ((ulonglong)_DAT_1810483d0 * (ulonglong)uVar36 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_1810483c0 << 0x20) +
           (ulonglong)uVar49 * (ulonglong)_DAT_1810483a0 +
           ((ulonglong)_DAT_1810483b0 * (ulonglong)uVar49 +
            (uVar18 >> 0x20) * (ulonglong)_DAT_1810483a0 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_181048370 +
           ((ulonglong)_DAT_181048380 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar60 * (ulonglong)_DAT_181048370 << 0x20) +
           (uVar87 & 0xffffffff) * (ulonglong)_DAT_181048350 +
           ((ulonglong)_DAT_181048360 * (uVar87 & 0xffffffff) +
            (ulonglong)uStack0000000000000074 * (ulonglong)_DAT_181048350 << 0x20))) +
           _DAT_181048410;
  _DAT_1831dae18 = _DAT_1831dad70 ^ uVar14 ^ uVar18;
  _DAT_1831dad50 = (_DAT_1831dad50 ^ uVar14) + uVar18 ^ 0xaac51093c47b4927;
  _DAT_1831dad18 = (_DAT_1831dad18 * 0x9394b29a2902531 ^ _DAT_1831dad50) + uVar14;
  _DAT_1831dad68 = _DAT_1831dad18 ^ _DAT_1831dad50;
  uVar14 = ~uVar16 ^ _DAT_1831daef0;
  lVar13 = ~uVar16 + _DAT_1831daec0;
  uVar50 = (uVar82 ^ _DAT_1831daec0) + uVar82 + _DAT_1831daef0;
  uVar15 = uVar14 + lVar13;
  uVar50 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar82 ^ _DAT_1831daec0;
  uVar14 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar14;
  _DAT_1831dadb0 = uVar18;
  uVar14 = func_0x00018886d920((uVar14 << 0x1d | uVar14 >> 0x23) - lVar13 ^
                               (uVar50 << 0x1d | uVar50 >> 0x23) - (uVar82 + _DAT_1831daef0));
  _DAT_1831dadb0 = _DAT_1831dadb0 ^ uVar14 & 0xffffffffffc00000 ^ 0xd672c076890e963c;
  _DAT_1831dadf0 =
       (_DAT_1831dadf0 * -0x45d1a20822a231c9 ^ _DAT_1831dadb0) + (uVar14 & 0xffffffffffc00000);
  _DAT_1831dae50 = _DAT_1831dadf0 ^ _DAT_1831dadb0;
  _DAT_1831daed0 = 0;
  uVar14 = uVar18 ^ 0x84222325 ^ _DAT_1831dae78;
  lVar13 = (uVar18 ^ 0x84222325) + _DAT_1831daea8;
  uVar50 = uVar14 + lVar13;
  uVar14 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar14;
  uVar50 = ((_DAT_1831daea8 + _DAT_1831dae78) * 0x2000 | _DAT_1831daea8 + _DAT_1831dae78 >> 0x33) ^
           _DAT_1831daea8;
  uVar14 = func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - _DAT_1831dae78 ^
                               (uVar14 << 0x1d | uVar14 >> 0x23) - lVar13);
  uVar35 = (uint)(uVar18 >> 0x20);
  auVar76._8_4_ = (int)uVar18;
  auVar76._0_8_ = uVar18;
  auVar76._12_4_ = uVar35;
  uVar50 = (uVar14 & 0x3fffffffff) - ((uVar14 & 0x3fffffffff) >> 1 & 0x5555555555555555);
  uVar50 = (uVar50 & 0x3333333333333333) + (uVar50 >> 2 & 0x3333333333333333);
  uVar15 = (((uVar50 >> 4) + uVar50 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
           uVar14 & 0x3fffffffff;
  uVar50 = uVar15 >> 1 | uVar15;
  uVar50 = uVar50 >> 2 | uVar50;
  uVar50 = uVar50 >> 4 | uVar50;
  uVar16 = uVar50 >> 8 | uVar50;
  uVar50 = uVar50 >> 0x20 | uVar16 >> 0x10 | uVar16;
  uVar50 = uVar50 - (uVar50 >> 1 & 0x5555555555555555);
  uVar50 = (uVar50 & 0x3333333333333333) + (uVar50 >> 2 & 0x3333333333333333);
  uVar15 = (0x40 - (((uVar50 >> 4) + uVar50 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar15;
  uVar20 = SUB164(auVar76 ^ auVar97,0);
  uVar16 = (((ulonglong)_DAT_181048460 * (uVar18 & 0xffffffff) +
             ((ulonglong)_DAT_181048470 * (uVar18 & 0xffffffff) +
              (ulonglong)uVar35 * (ulonglong)_DAT_181048460 << 0x20) +
            (ulonglong)_DAT_181048440 * (uVar18 & 0xffffffff) +
            ((ulonglong)_DAT_181048450 * (uVar18 & 0xffffffff) +
             (ulonglong)uVar35 * (ulonglong)_DAT_181048440 << 0x20) +
            (ulonglong)_DAT_181048420 * (uVar18 & 0xffffffff) +
            ((ulonglong)_DAT_181048430 * (uVar18 & 0xffffffff) +
             (ulonglong)uVar35 * (ulonglong)_DAT_181048420 << 0x20)) -
           ((ulonglong)uVar20 * (ulonglong)_DAT_181048490 +
            ((SUB168(auVar76 ^ auVar97,0) >> 0x20) * (ulonglong)_DAT_181048490 +
             (ulonglong)_DAT_181048480 * (ulonglong)uVar20 << 0x20) +
           (uVar18 & 0xffffffff) * (ulonglong)_DAT_181048490 +
           ((ulonglong)uVar35 * (ulonglong)_DAT_181048490 +
            (uVar18 & 0xffffffff) * (ulonglong)_DAT_181048480 << 0x20))) + _DAT_1810484a0;
  _DAT_1831dada0 = _DAT_1831dae30 ^ uVar15 ^ uVar16;
  _DAT_1831dad78 = (uVar14 ^ uVar15) + uVar16 ^ 0x146353dce18f9565;
  _DAT_1831dae40 = (_DAT_1831dae40 * 0x6004f7bb8d7c9db ^ _DAT_1831dad78) + uVar15;
  _DAT_1831dad50 = _DAT_1831dae40 ^ _DAT_1831dad78;
  auVar32._8_8_ = _DAT_181045940;
  auVar32._0_8_ = uVar12;
  auVar22 = pshufb(auVar32 ^ _DAT_1810484b0,_DAT_1800170c0);
  uVar50 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar50 + _DAT_1831dae58;
  if (auVar22._4_4_ < 0) {
    uVar14 = _DAT_1831dad00 ^ uVar50;
  }
  _DAT_1831daef8 = uVar16;
  _DAT_1831dad68 = func_0x00018886d920(SUB161(auVar32 ^ _DAT_1810484b0,5) ^ uVar14);
  _DAT_1831dae80 = _DAT_1831dae80 ^ _DAT_1831dad68 & 0xffffffff80000000 ^ 0x5c9de262b5634589;
  _DAT_1831dade8 =
       (_DAT_1831dade8 * -0x63ae3044dcead9e5 ^ _DAT_1831dae80) +
       (_DAT_1831dad68 & 0xffffffff80000000);
  _DAT_1831dada0 = _DAT_1831dade8 ^ _DAT_1831dae80;
  _DAT_1831dae70 = _DAT_1831dae88;
  _DAT_1831dad40 = 0;
  uVar14 = uVar16 ^ 0x84222325 ^ _DAT_1831dae00;
  lVar13 = (uVar16 ^ 0x84222325) + _DAT_1831dae20;
  uVar50 = uVar14 + lVar13;
  uVar14 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar14;
  uVar50 = ((_DAT_1831dae20 + _DAT_1831dae00) * 0x2000 | _DAT_1831dae20 + _DAT_1831dae00 >> 0x33) ^
           _DAT_1831dae20;
  _DAT_1831dadd0 =
       func_0x00018886d920((uVar50 << 0x1d | uVar50 >> 0x23) - _DAT_1831dae00 ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar13);
  uVar49 = (uint)(uVar16 >> 0x20);
  auVar77._8_4_ = (int)uVar16;
  auVar77._0_8_ = uVar16;
  auVar77._12_4_ = uVar49;
  auVar33._8_4_ = 0xffffffff;
  auVar33._0_8_ = 0xffffffffffffffff;
  auVar33._12_4_ = 0xffffffff;
  auVar22 = auVar77 | ZEXT816(0);
  uVar35 = auVar22._0_4_;
  uVar14 = auVar22._0_8_;
  auVar22 = auVar77 ^ ZEXT816(0);
  uVar20 = auVar22._0_4_;
  uVar50 = auVar22._0_8_;
  uVar60 = SUB164(auVar77 ^ auVar33,0);
  uVar36 = SUB164(ZEXT816(0) ^ auVar33,0);
  uVar50 = (((ulonglong)uVar36 * (ulonglong)_DAT_181048550 +
             ((SUB168(ZEXT816(0) ^ auVar33,0) >> 0x20) * (ulonglong)_DAT_181048550 +
              (ulonglong)_DAT_1810484e0 * (ulonglong)uVar36 << 0x20) +
             (ulonglong)uVar60 * (ulonglong)_DAT_181048540 +
             ((SUB168(auVar77 ^ auVar33,0) >> 0x20) * (ulonglong)_DAT_181048540 +
              (ulonglong)_DAT_1810484c0 * (ulonglong)uVar60 << 0x20) +
             (ulonglong)_DAT_181048510 * (ulonglong)uVar20 +
             ((uVar50 >> 0x20) * (ulonglong)_DAT_181048510 +
              (ulonglong)_DAT_181048500 * (ulonglong)uVar20 << 0x20) +
             (ulonglong)_DAT_1810484d0 * (uVar16 & 0xffffffff) +
             ((ulonglong)uVar49 * (ulonglong)_DAT_1810484d0 +
              (uVar16 & 0xffffffff) * (ulonglong)_DAT_1810484c0 << 0x20) +
            (ulonglong)_DAT_181048520 * (ulonglong)uVar35 +
            ((ulonglong)_DAT_181048530 * (ulonglong)uVar35 +
             (uVar14 >> 0x20) * (ulonglong)_DAT_181048520 << 0x20)) -
           ((ulonglong)uVar20 * (_DAT_1810485e0 & 0xffffffff) +
            ((ulonglong)_DAT_1810485f0 * (ulonglong)uVar20 +
             (uVar50 >> 0x20) * (_DAT_1810485e0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar35 * (ulonglong)_DAT_1810485c0 +
            ((ulonglong)_DAT_1810485d0 * (ulonglong)uVar35 +
             (uVar14 >> 0x20) * (ulonglong)_DAT_1810485c0 << 0x20) +
           (uVar16 & 0xffffffff) * (ulonglong)_DAT_181048590 +
           ((ulonglong)uVar49 * (ulonglong)_DAT_181048590 +
            (uVar16 & 0xffffffff) * (ulonglong)_DAT_181048580 << 0x20))) + 0x80b02050de413600;
  auVar34._8_8_ = uVar50;
  auVar34._0_8_ = uStack00000000000000f0;
  auVar22 = pshufb(auVar34 ^ _DAT_181048600,_DAT_1800170c0);
  uVar14 = (_DAT_1831dadd0 * -0x656d4976625b0235 & 0xffffffffffffff80) << 0x1b |
           _DAT_1831dadd0 * -0x656d4976625b0235 >> 0x25;
  _DAT_1831dad78 = _DAT_1831dae08 ^ uVar14 ^ uVar50;
  _DAT_1831dae10 = (_DAT_1831dae10 ^ uVar14) + uVar50 ^ 0xd6bc9d7086737869;
  _DAT_1831dada0 = (_DAT_1831dada0 * -0x64739433134fbed5 ^ _DAT_1831dae10) + uVar14;
  _DAT_1831dae18 = _DAT_1831dada0 ^ _DAT_1831dae10;
  uVar12 = auVar22._8_8_ + auVar22._0_8_;
  uVar14 = uVar12 + _DAT_1831dade0;
  if (auVar22._4_4_ < 0) {
    uVar14 = _DAT_1831daea0 ^ uVar12;
  }
  _DAT_1831dae00 = uVar50;
  _DAT_1831dada0 = func_0x00018886d920(SUB161(auVar34 ^ _DAT_181048600,5) ^ uVar14);
  uVar14 = _DAT_1831dada0 << 0x1f | _DAT_1831dada0 >> 0x21;
  _DAT_1831dae60 = uVar50 ^ uStack00000000000000a8;
  _DAT_1831dadd8 = (_DAT_1831dadd8 ^ uVar14) + _DAT_1831dae60 ^ 0x9f448f1e4bbde119;
  _DAT_1831dadd0 = (_DAT_1831dadd0 * 0x1812c4edb87222eb ^ _DAT_1831dadd8) + uVar14;
  _DAT_1831dae98 = _DAT_1831dadd0 ^ _DAT_1831dadd8;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x226,0xd);
  cVar11 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar11 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 886d805 (image 18886d805) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18886d805(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1810462f8)();
  return;
}



// ===== continuation @ rva 886ab3a (image 18886ab3a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18886ab3a(void)

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



// ===== continuation @ rva 886bf4e (image 18886bf4e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18886bf4e(void)

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



// ===== continuation @ rva 886c8d9 (image 18886c8d9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18886c8d9(void)

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



// ===== continuation @ rva 886c66f (image 18886c66f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18886c66f(void)

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



// ===== continuation @ rva 887d8a6 (image 18887d8a6) =====

void FUN_18887d8a6(void)

{
  return;
}



// ===== continuation @ rva 8875c0e (image 188875c0e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188875c0e(void)

{
  FUN_190ddce00();
  (*_DAT_18104b708)();
  return;
}



// ===== continuation @ rva 887d85b (image 18887d85b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18887d85b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_18104b1d8)();
  return;
}



// ===== continuation @ rva 887c2d8 (image 18887c2d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18887c2d8(void)

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



// ===== continuation @ rva 887c690 (image 18887c690) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18887c690(void)

{
  undefined8 in_stack_00000050;
  undefined8 uStack00000000000000b0;
  
  uStack00000000000000b0 = in_stack_00000050;
  FUN_190dd72e0();
  (*_DAT_18104b148)();
  return;
}



// ===== continuation @ rva 887d792 (image 18887d792) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18887d792(void)

{
  FUN_190ddfc90();
  (*_DAT_18104b218)();
  return;
}



// ===== continuation @ rva 887cee4 (image 18887cee4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18887cee4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_18104aeb8)();
  return;
}



// ===== continuation @ rva 887b3c4 (image 18887b3c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18887b3c4(void)

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



// ===== continuation @ rva 887c9fd (image 18887c9fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18887c9fd(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18104b528)();
  return;
}



// ===== continuation @ rva 887c581 (image 18887c581) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18887c581(void)

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



// ===== continuation @ rva 88997da (image 1888997da) =====

void FUN_1888997da(void)

{
  return;
}



// ===== continuation @ rva 888ff63 (image 18888ff63) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18888ff63(void)

{
  FUN_190ddce00();
  (*_DAT_1810523b8)();
  return;
}



// ===== continuation @ rva 88997d2 (image 1888997d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888997d2(void)

{
  (*_DAT_181052b48)();
  return;
}



// ===== continuation @ rva 8897208 (image 188897208) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188897208(void)

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



// ===== continuation @ rva 8896a95 (image 188896a95) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188896a95(void)

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



// ===== continuation @ rva 8898054 (image 188898054) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188898054(void)

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



// ===== continuation @ rva 8897df2 (image 188897df2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188897df2(void)

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



// ===== continuation @ rva 88992cd (image 1888992cd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1888992cd(void)

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



// ===== continuation @ rva 889779d (image 18889779d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18889779d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1810524f8)();
  return;
}



// ===== continuation @ rva 8896a11 (image 188896a11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188896a11(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181052c08)();
  return;
}



// ===== continuation @ rva 8811baf (image 188811baf) =====

void FUN_188811baf(void)

{
  return;
}



// ===== continuation @ rva 880a03b (image 18880a03b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18880a03b(void)

{
  FUN_190ddce00();
  (*_DAT_181033ae8)();
  return;
}



// ===== continuation @ rva 8811ba7 (image 188811ba7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811ba7(void)

{
  (*_DAT_181034068)();
  return;
}



// ===== continuation @ rva 8811197 (image 188811197) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811197(void)

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



// ===== continuation @ rva 8811b64 (image 188811b64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188811b64(void)

{
  longlong *in_stack_00000060;
  
  (**(code **)(*in_stack_00000060 + 0x120))(in_stack_00000060);
  (*_DAT_1810338f8)();
  return;
}



// ===== continuation @ rva 880fe9f (image 18880fe9f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18880fe9f(void)

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



// ===== continuation @ rva 8810881 (image 188810881) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188810881(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181034068)();
  return;
}



// ===== continuation @ rva 8810a8f (image 188810a8f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188810a8f(void)

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



// ===== continuation @ rva 8810d60 (image 188810d60) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188810d60(void)

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



// ===== continuation @ rva 880fb90 (image 18880fb90) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18880fb90(void)

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



// ===== continuation @ rva 880a12c (image 18880a12c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18880a12c(ulonglong param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  longlong in_RAX;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *unaff_RSI;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar30;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  uint uVar64;
  ulonglong uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  uint uVar66;
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  ulonglong uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ulonglong uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  ulonglong uStack0000000000000088;
  ulonglong in_stack_00000098;
  
  uVar11 = _DAT_1810333c8;
  uVar10 = _DAT_1810333c0;
  uStack0000000000000088 = _DAT_1810333c0 ^ 0x84222325;
  uVar12 = (-0x4829d3bc08dda621 - in_RAX) *
           ((param_1 ^ uStack0000000000000088) + (uStack0000000000000088 & param_1) * 2);
  uVar12 = (uVar12 | _DAT_1831d9208) + (uVar12 & _DAT_1831d9208);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831d9078 =
       func_0x000188811c80((_DAT_1810333c0 ^ 0xb7d62c4373007afa | uVar12) +
                           (uVar12 & (_DAT_1810333c0 ^ 0xb7d62c4373007afa)));
  uVar12 = _DAT_1831d9078 * 0x42b2109a601af581 ^ 0xb7d62c43f72259df;
  uVar16 = uVar10 | 0xb7d62c43f72259df;
  _DAT_1831d9128 = (_DAT_1831d9128 ^ uVar12) + uVar16 ^ 0x5f7c7c58711d0cee;
  _DAT_1831d91f8 = (_DAT_1831d91f8 * -0x1ea46124b97c089f ^ _DAT_1831d9128) + uVar12;
  _DAT_1831d9250 = _DAT_1831d91f8 ^ _DAT_1831d9128;
  uVar12 = uVar11 ^ 0x84222325 ^ _DAT_1831d8fb0;
  lVar13 = (uVar11 ^ 0x84222325) + _DAT_1831d9270;
  uVar32 = uVar12 + lVar13;
  uVar41 = (_DAT_1831d9270 ^ 0x985bad10ea68ee5e) + _DAT_1831d8fb0 + 0x985bad10ea68ee5e;
  uVar12 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar12;
  uVar32 = (uVar41 * 0x2000 | uVar41 >> 0x33) ^ _DAT_1831d9270 ^ 0x985bad10ea68ee5e;
  _DAT_1831d9188 = uVar16;
  _DAT_1831d9020 =
       func_0x000188811c80((uVar32 << 0x1d | uVar32 >> 0x23) - (_DAT_1831d8fb0 + 0x985bad10ea68ee5e)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) - lVar13);
  uVar12 = _DAT_1831d9020 >> 1 | _DAT_1831d9020;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = ((0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
            0x20 ^ _DAT_1831d9020) * -0x3b5a4a1c9809c905;
  uVar11 = uVar11 + 0x985bad10ea68ee5e + (uVar11 & 0x985bad10ea68ee5e) * -2;
  _DAT_1831d8f10 = (_DAT_1831d9070 ^ uVar12) + uVar11 ^ 0x5f146377fe2acc15;
  _DAT_1831d9070 = (_DAT_1831d9070 * 0x2fb35379bc7d06c7 ^ _DAT_1831d8f10) + uVar12;
  _DAT_1831d8f10 = _DAT_1831d9070 ^ _DAT_1831d8f10;
  uVar12 = uVar10 * uVar10 * -0x17911cc87bec0b37;
  auVar19._8_8_ = uVar12;
  auVar19._0_8_ = _DAT_181034120;
  uVar41 = uVar10 * uVar10 * 0x17911cc87bec0b37;
  auVar18 = pshufb(auVar19 ^ _DAT_181034130,_DAT_1800170c0);
  uVar32 = auVar18._8_8_ + auVar18._0_8_;
  uVar10 = uVar32 + _DAT_1831d90e0;
  if (auVar18._4_4_ < 0) {
    uVar10 = _DAT_1831d92c0 ^ uVar32;
  }
  _DAT_1831d92d8 = uVar11;
  _DAT_1831d9280 = func_0x000188811c80(SUB161(auVar19 ^ _DAT_181034130,5) ^ uVar10);
  uVar30 = (uint)(uVar12 >> 0x20);
  auVar58._8_4_ = (int)uVar12;
  auVar58._0_8_ = uVar12;
  auVar58._12_4_ = uVar30;
  auVar70._8_4_ = 0xffffffff;
  auVar70._0_8_ = 0xffffffffffffffff;
  auVar70._12_4_ = 0xffffffff;
  uVar52 = SUB164(auVar58 ^ auVar70,0);
  uVar32 = SUB168(auVar58 ^ auVar70,0);
  uVar42 = SUB164(auVar58 & _DAT_181034140,0);
  uVar10 = _DAT_1831d9280 - (_DAT_1831d9280 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1831d9280
  ;
  uVar31 = SUB164(auVar58 | _DAT_181034140,0);
  uVar17 = SUB164(_DAT_181034140 ^ auVar58,0);
  uVar32 = (ulonglong)_DAT_181034170 * (ulonglong)uVar52 +
           ((uVar32 >> 0x20) * (ulonglong)_DAT_181034170 +
            (ulonglong)_DAT_181034150 * (ulonglong)uVar52 << 0x20) +
           (ulonglong)_DAT_181034160 * (uVar12 & 0xffffffff) +
           ((ulonglong)uVar30 * (ulonglong)_DAT_181034160 +
            (uVar12 & 0xffffffff) * (ulonglong)_DAT_181034150 << 0x20) +
           (-((ulonglong)uVar52 * (ulonglong)_DAT_181034220 +
             ((ulonglong)_DAT_181034230 * (ulonglong)uVar52 +
              (uVar32 >> 0x20) * (ulonglong)_DAT_181034220 << 0x20)) -
           ((ulonglong)uVar17 * (ulonglong)_DAT_181034200 +
            ((ulonglong)_DAT_181034210 * (ulonglong)uVar17 +
             (SUB168(_DAT_181034140 ^ auVar58,0) >> 0x20) * (ulonglong)_DAT_181034200 << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_1810341e0 +
            ((ulonglong)_DAT_1810341f0 * (ulonglong)uVar31 +
             (SUB168(auVar58 | _DAT_181034140,0) >> 0x20) * (ulonglong)_DAT_1810341e0 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_1810341c0 +
           ((ulonglong)_DAT_1810341d0 * (ulonglong)uVar42 +
            (SUB168(auVar58 & _DAT_181034140,0) >> 0x20) * (ulonglong)_DAT_1810341c0 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_1810341a0 +
           ((ulonglong)_DAT_1810341b0 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_1810341a0 << 0x20))) + _DAT_181034240;
  _DAT_1831d90e8 = _DAT_1831d90f0 ^ uVar10 ^ uVar32;
  _DAT_1831d90b8 = (_DAT_1831d90b8 ^ uVar10) + uVar32 ^ 0xd6ee2ca019d8a91f;
  _DAT_1831d9188 = (_DAT_1831d9188 * -0x5b9cd4f189d2d76d ^ _DAT_1831d90b8) + uVar10;
  _DAT_1831d91e8 = _DAT_1831d9188 ^ _DAT_1831d90b8;
  auVar18._8_8_ = uVar41;
  auVar18._0_8_ = uVar32 ^ 0x84222325;
  auVar19 = pshufb(auVar18 ^ _DAT_181034250,_DAT_1800170c0);
  uVar12 = auVar19._8_8_ + auVar19._0_8_;
  uVar10 = uVar12 + _DAT_1831d90f0;
  if (auVar19._4_4_ < 0) {
    uVar10 = _DAT_1831d92c8 ^ uVar12;
  }
  _DAT_1831d90f8 = uVar32;
  _DAT_1831d92f0 = func_0x000188811c80(SUB161(auVar18 ^ _DAT_181034250,5) ^ uVar10);
  uVar10 = ~_DAT_1831d92f0 & uVar32;
  uVar52 = (uint)(uVar32 >> 0x20);
  auVar20._8_4_ = (int)uVar32;
  auVar20._0_8_ = uVar32;
  auVar20._12_4_ = uVar52;
  uVar66 = (uint)(uVar41 >> 0x20);
  auVar43._8_4_ = (int)uVar41;
  auVar43._0_8_ = uVar41;
  auVar43._12_4_ = uVar66;
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar31 = SUB164(auVar20 & auVar43,0);
  uVar61 = SUB168(auVar20 & auVar43,0);
  uVar30 = SUB164(auVar20 ^ auVar43,0);
  uVar12 = SUB168(auVar20 ^ auVar43,0);
  uVar64 = SUB164(auVar43 ^ auVar2,0);
  uVar42 = SUB164(auVar20 | auVar43,0);
  auVar74._8_4_ = 0xffffffff;
  auVar74._0_8_ = 0xffffffffffffffff;
  auVar74._12_4_ = 0xffffffff;
  uVar17 = SUB164(auVar20 ^ auVar74,0);
  lVar13 = _DAT_1810333c8 * _DAT_1810333c8;
  uVar15 = lVar13 * -0x5ce7bc050819968a;
  auVar21._8_8_ = uVar15;
  auVar21._0_8_ = _DAT_18001b640;
  auVar19 = pshufb(auVar21 ^ _DAT_1810343f0,_DAT_1800170c0);
  uVar32 = (((ulonglong)uVar64 * (ulonglong)_DAT_1810342a0 +
             ((ulonglong)_DAT_1810342f0 * (ulonglong)uVar64 +
              (SUB168(auVar43 ^ auVar2,0) >> 0x20) * (ulonglong)_DAT_1810342a0 << 0x20) +
             (ulonglong)_DAT_1810342d0 * (ulonglong)uVar30 +
             ((ulonglong)_DAT_1810342e0 * (ulonglong)uVar30 +
              (uVar12 >> 0x20) * (ulonglong)_DAT_1810342d0 << 0x20) +
            (ulonglong)_DAT_1810342b0 * (ulonglong)uVar31 +
            ((ulonglong)_DAT_1810342c0 * (ulonglong)uVar31 +
             (uVar61 >> 0x20) * (ulonglong)_DAT_1810342b0 << 0x20) +
            (ulonglong)_DAT_181034280 * (uVar41 & 0xffffffff) +
            ((ulonglong)_DAT_181034290 * (uVar41 & 0xffffffff) +
             (ulonglong)uVar66 * (ulonglong)_DAT_181034280 << 0x20) +
            (ulonglong)_DAT_181034260 * (uVar32 & 0xffffffff) +
            ((ulonglong)_DAT_181034270 * (uVar32 & 0xffffffff) +
             (ulonglong)uVar52 * (ulonglong)_DAT_181034260 << 0x20)) -
           ((ulonglong)uVar17 * (_DAT_181034360 & 0xffffffff) +
            ((ulonglong)_DAT_1810343d0 * (ulonglong)uVar17 +
             (SUB168(auVar20 ^ auVar74,0) >> 0x20) * (_DAT_181034360 & 0xffffffff) << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1810343b0 +
           ((ulonglong)_DAT_1810343c0 * (ulonglong)uVar30 +
            (uVar12 >> 0x20) * (ulonglong)_DAT_1810343b0 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_181034390 +
           ((ulonglong)_DAT_1810343a0 * (ulonglong)uVar42 +
            (SUB168(auVar20 | auVar43,0) >> 0x20) * (ulonglong)_DAT_181034390 << 0x20) +
           (ulonglong)uVar31 * (ulonglong)_DAT_181034370 +
           ((ulonglong)_DAT_181034380 * (ulonglong)uVar31 +
            (uVar61 >> 0x20) * (ulonglong)_DAT_181034370 << 0x20) +
           (uVar41 & 0xffffffff) * (ulonglong)_DAT_181034340 +
           ((ulonglong)_DAT_181034350 * (uVar41 & 0xffffffff) +
            (ulonglong)uVar66 * (ulonglong)_DAT_181034340 << 0x20) +
           (uVar32 & 0xffffffff) * (ulonglong)_DAT_181034320 +
           ((ulonglong)_DAT_181034330 * (uVar32 & 0xffffffff) +
            (ulonglong)uVar52 * (ulonglong)_DAT_181034320 << 0x20))) + _DAT_1810343e0;
  _DAT_1831d92a8 = _DAT_1831d8f90 ^ uVar10 ^ uVar32;
  _DAT_1831d91c0 = (_DAT_1831d91c0 ^ uVar10) + uVar32 ^ 0xac8af704446ec6da;
  _DAT_1831d8f18 = (_DAT_1831d8f18 * -0x6783ba81b64fdbfd ^ _DAT_1831d91c0) + uVar10;
  _DAT_1831d8f68 = _DAT_1831d8f18 ^ _DAT_1831d91c0;
  uVar12 = auVar19._8_8_ + auVar19._0_8_;
  uVar10 = uVar12 + _DAT_1831d9238;
  if (auVar19._4_4_ < 0) {
    uVar10 = _DAT_1831d8ff8 ^ uVar12;
  }
  _DAT_1831d91f0 = uVar32;
  _DAT_1831d9058 = func_0x000188811c80(SUB161(auVar21 ^ _DAT_1810343f0,5) ^ uVar10);
  uVar10 = _DAT_1831d9058 >> 1 | _DAT_1831d9058;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x40 ^ _DAT_1831d9058;
  uVar41 = lVar13 * 0x5ce7bc050819968a;
  _DAT_1831d8f20 = (_DAT_1831d8f20 ^ uVar10) + lVar13 * 0x5ce7bc050819968a ^ 0x1194a31fc4e78432;
  _DAT_1831d9030 = (_DAT_1831d9030 * 0x215cdcbc4e5667b ^ _DAT_1831d8f20) + uVar10;
  _DAT_1831d90c8 = _DAT_1831d9030 ^ _DAT_1831d8f20;
  uVar12 = uVar32 ^ 0x84222325;
  uVar10 = ((_DAT_1831d8fc0 ^ uVar12) + (uVar12 & _DAT_1831d8fc0) * 2) * (uVar15 - _DAT_1831d9038);
  uVar10 = (uVar10 | _DAT_1831d9018) + (uVar10 & _DAT_1831d9018);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d8f18 = uVar41;
  _DAT_1831d9080 = func_0x000188811c80((uVar12 ^ uVar15 | uVar10) + (uVar10 & (uVar12 ^ uVar15)));
  uVar10 = ((uVar32 | uVar15) ^ _DAT_1831d9080) & uVar32;
  uVar64 = (uint)(uVar32 >> 0x20);
  auVar33._8_4_ = (int)uVar32;
  auVar33._0_8_ = uVar32;
  auVar33._12_4_ = uVar64;
  uVar30 = (uint)(uVar15 >> 0x20);
  auVar44._8_4_ = (int)uVar15;
  auVar44._0_8_ = uVar15;
  auVar44._12_4_ = uVar30;
  uVar42 = SUB164(auVar33 & auVar44,0);
  uVar12 = SUB168(auVar33 & auVar44,0);
  uVar52 = SUB164(auVar33 | auVar44,0);
  uVar17 = SUB164(auVar33 ^ auVar44,0);
  uVar61 = SUB168(auVar33 ^ auVar44,0);
  auVar75._8_4_ = 0xffffffff;
  auVar75._0_8_ = 0xffffffffffffffff;
  auVar75._12_4_ = 0xffffffff;
  uVar66 = SUB164(auVar44 ^ auVar74,0);
  uVar31 = SUB164(auVar33 ^ auVar75,0);
  uVar10 = uVar10 << 0x16 | uVar10 >> 0x2a;
  uVar15 = (((ulonglong)uVar66 * (ulonglong)_DAT_181034440 +
             ((ulonglong)_DAT_1810344b0 * (ulonglong)uVar66 +
              (SUB168(auVar44 ^ auVar74,0) >> 0x20) * (ulonglong)_DAT_181034440 << 0x20) +
            (ulonglong)_DAT_181034490 * (ulonglong)uVar17 +
            ((ulonglong)_DAT_1810344a0 * (ulonglong)uVar17 +
             (uVar61 >> 0x20) * (ulonglong)_DAT_181034490 << 0x20) +
            (ulonglong)uVar52 * (ulonglong)_DAT_181034470 +
            ((ulonglong)_DAT_181034480 * (ulonglong)uVar52 +
             (SUB168(auVar33 | auVar44,0) >> 0x20) * (ulonglong)_DAT_181034470 << 0x20) +
            (ulonglong)_DAT_181034450 * (ulonglong)uVar42 +
            ((ulonglong)_DAT_181034460 * (ulonglong)uVar42 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_181034450 << 0x20) +
            (ulonglong)_DAT_181034420 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_181034430 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_181034420 << 0x20) +
            (ulonglong)_DAT_181034400 * (uVar32 & 0xffffffff) +
            ((ulonglong)_DAT_181034410 * (uVar32 & 0xffffffff) +
             (ulonglong)uVar64 * (ulonglong)_DAT_181034400 << 0x20)) -
           ((ulonglong)uVar31 * (_DAT_181034520 & 0xffffffff) +
            ((ulonglong)_DAT_181034570 * (ulonglong)uVar31 +
             (SUB168(auVar33 ^ auVar75,0) >> 0x20) * (_DAT_181034520 & 0xffffffff) << 0x20) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181034550 +
            ((ulonglong)_DAT_181034560 * (ulonglong)uVar17 +
             (uVar61 >> 0x20) * (ulonglong)_DAT_181034550 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_181034530 +
           ((ulonglong)_DAT_181034540 * (ulonglong)uVar42 +
            (uVar12 >> 0x20) * (ulonglong)_DAT_181034530 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034500 +
           ((ulonglong)_DAT_181034510 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_181034500 << 0x20) +
           (uVar32 & 0xffffffff) * (ulonglong)_DAT_1810344e0 +
           ((ulonglong)_DAT_1810344f0 * (uVar32 & 0xffffffff) +
            (ulonglong)uVar64 * (ulonglong)_DAT_1810344e0 << 0x20))) + _DAT_181034580;
  _DAT_1831d91b0 = _DAT_1831d9168 ^ uVar10 ^ uVar15;
  _DAT_1831d9068 = (_DAT_1831d9068 ^ uVar10) + uVar15 ^ 0xf1465edcb6353be0;
  _DAT_1831d9288 = (_DAT_1831d9288 * -0x628a39756042bfdb ^ _DAT_1831d9068) + uVar10;
  _DAT_1831d8f18 = _DAT_1831d9288 ^ _DAT_1831d9068;
  uVar12 = uVar15 ^ 0x84222325;
  uVar10 = ((_DAT_1831d92b0 ^ uVar12) + (uVar12 & _DAT_1831d92b0) * 2) * (uVar41 - _DAT_1831d9098);
  uVar10 = (uVar10 | _DAT_1831d9138) + (uVar10 & _DAT_1831d9138);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d8f48 = uVar15;
  _DAT_1831d9190 = func_0x000188811c80((uVar12 ^ uVar41 | uVar10) + (uVar10 & (uVar12 ^ uVar41)));
  uVar64 = (uint)(uVar15 >> 0x20);
  auVar53._8_4_ = (int)uVar15;
  auVar53._0_8_ = uVar15;
  auVar53._12_4_ = uVar64;
  uVar30 = (uint)(uVar41 >> 0x20);
  auVar34._8_4_ = (int)uVar41;
  auVar34._0_8_ = uVar41;
  auVar34._12_4_ = uVar30;
  auVar76._8_4_ = 0xffffffff;
  auVar76._0_8_ = 0xffffffffffffffff;
  auVar76._12_4_ = 0xffffffff;
  uVar42 = SUB164(auVar53 & auVar34,0);
  uVar12 = SUB168(auVar53 & auVar34,0);
  uVar17 = SUB164(auVar53 ^ auVar34,0);
  uVar61 = SUB168(auVar53 ^ auVar34,0);
  uVar52 = SUB164(auVar53 ^ auVar75,0);
  uVar31 = SUB164(auVar34 ^ auVar76,0);
  uVar10 = _DAT_1831d9190 << 0x22 | _DAT_1831d9190 >> 0x1e;
  lVar13 = _DAT_1810333c8 * _DAT_1810333c0;
  uVar32 = lVar13 * -0x13f8faf19f5649fa;
  auVar35._8_8_ = uVar32;
  auVar35._0_8_ = _DAT_18001b640;
  auVar19 = pshufb(auVar35 ^ _DAT_181034700,_DAT_1800170c0);
  uVar41 = (((ulonglong)uVar52 * (ulonglong)_DAT_1810345d0 +
             ((ulonglong)_DAT_181034620 * (ulonglong)uVar52 +
              (SUB168(auVar53 ^ auVar75,0) >> 0x20) * (ulonglong)_DAT_1810345d0 << 0x20) +
             (ulonglong)_DAT_181034600 * (ulonglong)uVar17 +
             ((ulonglong)_DAT_181034610 * (ulonglong)uVar17 +
              (uVar61 >> 0x20) * (ulonglong)_DAT_181034600 << 0x20) +
            (ulonglong)_DAT_1810345e0 * (ulonglong)uVar42 +
            ((ulonglong)_DAT_1810345f0 * (ulonglong)uVar42 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_1810345e0 << 0x20) +
            (ulonglong)_DAT_1810345b0 * (uVar41 & 0xffffffff) +
            ((ulonglong)_DAT_1810345c0 * (uVar41 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_1810345b0 << 0x20) +
            (ulonglong)_DAT_181034590 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_1810345a0 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar64 * (ulonglong)_DAT_181034590 << 0x20)) -
           ((ulonglong)uVar31 * (ulonglong)_DAT_181034690 +
            ((ulonglong)_DAT_1810346e0 * (ulonglong)uVar31 +
             (SUB168(auVar34 ^ auVar76,0) >> 0x20) * (ulonglong)_DAT_181034690 << 0x20) +
            (ulonglong)uVar17 * (ulonglong)_DAT_1810346c0 +
            ((ulonglong)_DAT_1810346d0 * (ulonglong)uVar17 +
             (uVar61 >> 0x20) * (ulonglong)_DAT_1810346c0 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_1810346a0 +
           ((ulonglong)_DAT_1810346b0 * (ulonglong)uVar42 +
            (uVar12 >> 0x20) * (ulonglong)_DAT_1810346a0 << 0x20) +
           (uVar41 & 0xffffffff) * (ulonglong)_DAT_181034670 +
           ((ulonglong)_DAT_181034680 * (uVar41 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_181034670 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034650 +
           ((ulonglong)_DAT_181034660 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar64 * (ulonglong)_DAT_181034650 << 0x20))) + _DAT_1810346f0;
  _DAT_1831d90a8 = _DAT_1831d9008 ^ uVar10 ^ uVar41;
  _DAT_1831d90e0 = (_DAT_1831d90e0 ^ uVar10) + uVar41 ^ 0xdd78413ecec0102d;
  _DAT_1831d9040 = (_DAT_1831d9040 * 0x19489d191a707ca7 ^ _DAT_1831d90e0) + uVar10;
  _DAT_1831d92c0 = _DAT_1831d9040 ^ _DAT_1831d90e0;
  uVar12 = auVar19._8_8_ + auVar19._0_8_;
  uVar10 = uVar12 + _DAT_1831d9100;
  if (auVar19._4_4_ < 0) {
    uVar10 = _DAT_1831d9260 ^ uVar12;
  }
  _DAT_1831d9000 = uVar41;
  uVar10 = func_0x000188811c80(SUB161(auVar35 ^ _DAT_181034700,5) ^ uVar10);
  uVar10 = uVar10 << 0xe | uVar10 >> 0x32;
  uVar15 = lVar13 * 0x13f8faf19f5649fa;
  _DAT_1831d9240 = (_DAT_1831d9240 ^ uVar10) + lVar13 * 0x13f8faf19f5649fa ^ 0x1fd912fa98b035be;
  _DAT_1831d9160 = (_DAT_1831d9160 * 0x51dbc392773ef385 ^ _DAT_1831d9240) + uVar10;
  _DAT_1831d91f8 = _DAT_1831d9160 ^ _DAT_1831d9240;
  uVar12 = uVar41 ^ 0x84222325;
  uVar10 = ((_DAT_1831d8f98 ^ uVar12) + (uVar12 & _DAT_1831d8f98) * 2) * (uVar32 - _DAT_1831d9008);
  uVar10 = (uVar10 | _DAT_1831d90a8) + (uVar10 & _DAT_1831d90a8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d9070 = uVar15;
  _DAT_1831d9128 = func_0x000188811c80((uVar12 ^ uVar32 | uVar10) + (uVar10 & (uVar12 ^ uVar32)));
  uVar52 = (uint)(uVar41 >> 0x20);
  auVar54._8_4_ = (int)uVar41;
  auVar54._0_8_ = uVar41;
  auVar54._12_4_ = uVar52;
  uVar30 = (uint)(uVar32 >> 0x20);
  auVar45._8_4_ = (int)uVar32;
  auVar45._0_8_ = uVar32;
  auVar45._12_4_ = uVar30;
  uVar73 = (uVar41 & 0xffffffff) * (uVar32 & 0xffffffff) +
           ((ulonglong)uVar52 * (uVar32 & 0xffffffff) + (uVar41 & 0xffffffff) * (ulonglong)uVar30 <<
           0x20);
  uVar42 = SUB164(auVar54 & auVar45,0);
  uVar12 = SUB168(auVar54 & auVar45,0);
  uVar31 = SUB164(auVar54 | auVar45,0);
  uVar61 = SUB168(auVar54 | auVar45,0);
  uVar17 = SUB164(auVar54 ^ auVar45,0);
  uVar10 = SUB168(auVar54 ^ auVar45,0);
  auVar3._8_8_ = _UNK_18001a718;
  auVar3._0_8_ = _DAT_18001a710;
  uVar64 = SUB164(auVar54 ^ auVar3,0);
  lVar13 = (uVar73 & 0xffffffff) * (ulonglong)_DAT_1810347d0 +
           ((ulonglong)_DAT_1810347e0 * (uVar73 & 0xffffffff) +
            (uVar73 >> 0x20) * (ulonglong)_DAT_1810347d0 << 0x20);
  uVar61 = (((ulonglong)uVar64 * (_DAT_181034750 & 0xffffffff) +
             ((ulonglong)_DAT_1810347c0 * (ulonglong)uVar64 +
              (SUB168(auVar54 ^ auVar3,0) >> 0x20) * (_DAT_181034750 & 0xffffffff) << 0x20) +
             (ulonglong)_DAT_1810347a0 * (ulonglong)uVar17 +
             ((ulonglong)_DAT_1810347b0 * (ulonglong)uVar17 +
              (uVar10 >> 0x20) * (ulonglong)_DAT_1810347a0 << 0x20) +
             (ulonglong)_DAT_181034780 * (ulonglong)uVar31 +
             ((ulonglong)_DAT_181034790 * (ulonglong)uVar31 +
              (uVar61 >> 0x20) * (ulonglong)_DAT_181034780 << 0x20) +
             (ulonglong)_DAT_181034760 * (ulonglong)uVar42 +
             ((ulonglong)_DAT_181034770 * (ulonglong)uVar42 +
              (uVar12 >> 0x20) * (ulonglong)_DAT_181034760 << 0x20) +
             (ulonglong)_DAT_181034730 * (uVar32 & 0xffffffff) +
             ((ulonglong)_DAT_181034740 * (uVar32 & 0xffffffff) +
              (ulonglong)uVar30 * (ulonglong)_DAT_181034730 << 0x20) +
             (ulonglong)_DAT_181034710 * (uVar41 & 0xffffffff) +
             ((ulonglong)_DAT_181034720 * (uVar41 & 0xffffffff) +
              (ulonglong)uVar52 * (ulonglong)_DAT_181034710 << 0x20) + lVar13) -
           ((ulonglong)uVar17 * (_DAT_181034850 & 0xffffffff) +
            ((ulonglong)_DAT_181034860 * (ulonglong)uVar17 +
             (uVar10 >> 0x20) * (_DAT_181034850 & 0xffffffff) << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_181034830 +
            ((ulonglong)_DAT_181034840 * (ulonglong)uVar31 +
             (uVar61 >> 0x20) * (ulonglong)_DAT_181034830 << 0x20) +
            (ulonglong)uVar42 * (ulonglong)_DAT_181034810 +
            ((ulonglong)_DAT_181034820 * (ulonglong)uVar42 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_181034810 << 0x20) +
            (uVar32 & 0xffffffff) * (ulonglong)_DAT_181034800 +
            ((ulonglong)uVar30 * (ulonglong)_DAT_181034800 +
             (ulonglong)_DAT_1810347f0 * (uVar32 & 0xffffffff) << 0x20) +
            (uVar41 & 0xffffffff) * (ulonglong)_DAT_181034800 +
            ((ulonglong)uVar52 * (ulonglong)_DAT_181034800 +
             (uVar41 & 0xffffffff) * (ulonglong)_DAT_1810347f0 << 0x20) + lVar13)) + _DAT_181034750;
  uVar10 = (uVar41 * uVar32 ^ _DAT_1831d9128) * -0x3073f69cec00f31b;
  _DAT_1831d9028 = _DAT_1831d9080 ^ uVar10 ^ uVar61;
  _DAT_1831d9090 = (_DAT_1831d9090 ^ uVar10) + uVar61 ^ 0x41e374c33df56406;
  _DAT_1831d9150 = (_DAT_1831d9150 * 0x7240ab8645ad8167 ^ _DAT_1831d9090) + uVar10;
  _DAT_1831d9288 = _DAT_1831d9150 ^ _DAT_1831d9090;
  uVar12 = uVar61 ^ 0x84222325;
  uVar10 = ((_DAT_1831d9270 ^ uVar12) + (uVar12 & _DAT_1831d9270) * 2) * (uVar15 - _DAT_1831d8ff8);
  uVar10 = (uVar10 | _DAT_1831d90c0) + (uVar10 & _DAT_1831d90c0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d92a0 = uVar61;
  _DAT_1831d8f40 = func_0x000188811c80((uVar12 ^ uVar15 | uVar10) + (uVar10 & (uVar12 ^ uVar15)));
  uVar42 = (uint)(uVar61 >> 0x20);
  auVar71._8_4_ = (int)uVar61;
  auVar71._0_8_ = uVar61;
  auVar71._12_4_ = uVar42;
  uVar30 = (uint)(uVar15 >> 0x20);
  auVar46._8_4_ = (int)uVar15;
  auVar46._0_8_ = uVar15;
  auVar46._12_4_ = uVar30;
  uVar52 = SUB164(auVar71 & auVar46,0);
  uVar32 = SUB168(auVar71 & auVar46,0);
  uVar17 = SUB164(auVar71 | auVar46,0);
  uVar12 = SUB168(auVar71 | auVar46,0);
  uVar66 = SUB164(auVar71 ^ auVar46,0);
  uVar10 = SUB168(auVar71 ^ auVar46,0);
  auVar4._8_8_ = _UNK_18001a718;
  auVar4._0_8_ = _DAT_18001a710;
  uVar31 = SUB164(auVar46 ^ auVar4,0);
  auVar5._8_8_ = _UNK_18001a718;
  auVar5._0_8_ = _DAT_18001a710;
  uVar64 = SUB164(auVar71 ^ auVar5,0);
  uVar15 = (((ulonglong)uVar31 * (ulonglong)_DAT_181034890 +
             ((SUB168(auVar46 ^ auVar4,0) >> 0x20) * (ulonglong)_DAT_181034890 +
              (_DAT_181034870 & 0xffffffff) * (ulonglong)uVar31 << 0x20) +
             (_DAT_1810348b0 & 0xffffffff) * (ulonglong)uVar66 +
             ((uVar10 >> 0x20) * (_DAT_1810348b0 & 0xffffffff) +
              (_DAT_1810348a0 & 0xffffffff) * (ulonglong)uVar66 << 0x20) +
             (ulonglong)uVar52 * (_DAT_1810348b0 & 0xffffffff) +
             ((uVar32 >> 0x20) * (_DAT_1810348b0 & 0xffffffff) +
              (ulonglong)uVar52 * (_DAT_1810348a0 & 0xffffffff) << 0x20) +
             (_DAT_181034880 & 0xffffffff) * (uVar15 & 0xffffffff) +
             ((ulonglong)uVar30 * (_DAT_181034880 & 0xffffffff) +
              (uVar15 & 0xffffffff) * (_DAT_181034870 & 0xffffffff) << 0x20) + uVar61 +
            (_DAT_1810348c0 & 0xffffffff) * (ulonglong)uVar17 +
            ((_DAT_1810348d0 & 0xffffffff) * (ulonglong)uVar17 +
             (uVar12 >> 0x20) * (_DAT_1810348c0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar64 * (ulonglong)_DAT_181034940 +
            ((_DAT_1810349b0 & 0xffffffff) * (ulonglong)uVar64 +
             (SUB168(auVar71 ^ auVar5,0) >> 0x20) * (ulonglong)_DAT_181034940 << 0x20) +
           (ulonglong)uVar66 * (ulonglong)_DAT_181034990 +
           ((_DAT_1810349a0 & 0xffffffff) * (ulonglong)uVar66 +
            (uVar10 >> 0x20) * (ulonglong)_DAT_181034990 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_181034970 +
           ((_DAT_181034980 & 0xffffffff) * (uVar12 & 0xffffffff) +
            (uVar12 >> 0x20) * (ulonglong)_DAT_181034970 << 0x20) +
           (ulonglong)uVar52 * (ulonglong)_DAT_181034950 +
           ((_DAT_181034960 & 0xffffffff) * (ulonglong)uVar52 +
            (uVar32 >> 0x20) * (ulonglong)_DAT_181034950 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034920 +
           ((_DAT_181034930 & 0xffffffff) * (uVar15 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_181034920 << 0x20) +
           (uVar61 & 0xffffffff) * (ulonglong)_DAT_181034900 +
           ((_DAT_181034910 & 0xffffffff) * (uVar61 & 0xffffffff) +
            (ulonglong)uVar42 * (ulonglong)_DAT_181034900 << 0x20))) + _DAT_1810349c0;
  _DAT_1831d91d8 = _DAT_1831d91a0 ^ _DAT_1831d8f40 ^ uVar15;
  _DAT_1831d9070 = (_DAT_1831d9070 ^ _DAT_1831d8f40) + uVar15 ^ 0x1becad8799ef69eb;
  _DAT_1831d9290 =
       (_DAT_1831d9290 * -0xb55c1a50c844d5b ^ _DAT_1831d9070) + _DAT_1831d8f40 ^ _DAT_1831d9070;
  uVar12 = uVar16 ^ 0x84222325;
  uVar10 = (uVar12 ^ _DAT_1831d90c0) + _DAT_1831d8fa0 + uVar12;
  uVar32 = (uVar11 ^ _DAT_1831d8fa0) + _DAT_1831d90c0 + uVar11;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar12 ^ _DAT_1831d90c0;
  uVar32 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar11 ^ _DAT_1831d8fa0;
  _DAT_1831d8fc8 = uVar15;
  _DAT_1831d92c8 =
       func_0x000188811c80((uVar32 << 0x1d | uVar32 >> 0x23) - (_DAT_1831d90c0 + uVar11) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831d8fa0 + uVar12));
  uVar10 = _DAT_1831d92c8 ^ uVar11;
  uVar17 = (uint)(uVar16 >> 0x20);
  auVar59._8_4_ = (int)uVar16;
  auVar59._0_8_ = uVar16;
  auVar59._12_4_ = uVar17;
  uVar30 = (uint)(uVar11 >> 0x20);
  auVar55._8_4_ = (int)uVar11;
  auVar55._0_8_ = uVar11;
  auVar55._12_4_ = uVar30;
  uVar32 = (uVar16 & 0xffffffff) * (uVar11 & 0xffffffff) +
           ((uVar16 & 0xffffffff) * (ulonglong)uVar30 + (ulonglong)uVar17 * (uVar11 & 0xffffffff) <<
           0x20);
  uVar31 = SUB164(auVar59 & auVar55,0);
  uVar68 = SUB168(auVar59 & auVar55,0);
  uVar42 = SUB164(auVar59 | auVar55,0);
  uVar73 = SUB168(auVar59 | auVar55,0);
  uVar52 = SUB164(auVar59 ^ auVar55,0);
  uVar41 = SUB168(auVar59 ^ auVar55,0);
  uVar61 = uVar16 ^ _DAT_18001a710;
  lVar13 = (uVar32 & 0xffffffff) * (ulonglong)_DAT_181034a90 +
           ((ulonglong)_DAT_181034aa0 * (uVar32 & 0xffffffff) +
            (uVar32 >> 0x20) * (ulonglong)_DAT_181034a90 << 0x20);
  uVar32 = uVar11 ^ _DAT_18001a710;
  uVar41 = (((uVar61 & 0xffffffff) * (ulonglong)_DAT_181034a10 +
             ((ulonglong)_DAT_181034a80 * (uVar61 & 0xffffffff) +
              (uVar61 >> 0x20) * (ulonglong)_DAT_181034a10 << 0x20) +
             (ulonglong)_DAT_181034a60 * (ulonglong)uVar52 +
             ((ulonglong)_DAT_181034a70 * (ulonglong)uVar52 +
              (uVar41 >> 0x20) * (ulonglong)_DAT_181034a60 << 0x20) +
             (ulonglong)_DAT_181034a40 * (ulonglong)uVar42 +
             ((ulonglong)_DAT_181034a50 * (ulonglong)uVar42 +
              (uVar73 >> 0x20) * (ulonglong)_DAT_181034a40 << 0x20) +
             (ulonglong)_DAT_181034a20 * (ulonglong)uVar31 +
             ((ulonglong)_DAT_181034a30 * (ulonglong)uVar31 +
              (uVar68 >> 0x20) * (ulonglong)_DAT_181034a20 << 0x20) +
             (ulonglong)_DAT_1810349f0 * (uVar11 & 0xffffffff) +
             ((ulonglong)_DAT_181034a00 * (uVar11 & 0xffffffff) +
              (ulonglong)uVar30 * (ulonglong)_DAT_1810349f0 << 0x20) +
             (ulonglong)_DAT_1810349d0 * (uVar16 & 0xffffffff) +
             ((ulonglong)_DAT_1810349e0 * (uVar16 & 0xffffffff) +
              (ulonglong)uVar17 * (ulonglong)_DAT_1810349d0 << 0x20) + lVar13) -
           ((uVar32 & 0xffffffff) * (ulonglong)_DAT_181034af0 +
            ((ulonglong)_DAT_181034b60 * (uVar32 & 0xffffffff) +
             (uVar32 >> 0x20) * (ulonglong)_DAT_181034af0 << 0x20) +
            (ulonglong)uVar52 * (ulonglong)_DAT_181034b40 +
            ((ulonglong)_DAT_181034b50 * (ulonglong)uVar52 +
             (uVar41 >> 0x20) * (ulonglong)_DAT_181034b40 << 0x20) +
            (ulonglong)uVar42 * (ulonglong)_DAT_181034b20 +
            ((ulonglong)_DAT_181034b30 * (ulonglong)uVar42 +
             (uVar73 >> 0x20) * (ulonglong)_DAT_181034b20 << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_181034b00 +
            ((ulonglong)_DAT_181034b10 * (ulonglong)uVar31 +
             (uVar68 >> 0x20) * (ulonglong)_DAT_181034b00 << 0x20) +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_181034ad0 +
            ((ulonglong)_DAT_181034ae0 * (uVar11 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_181034ad0 << 0x20) +
            (uVar16 & 0xffffffff) * (ulonglong)_DAT_181034ab0 +
            ((ulonglong)_DAT_181034ac0 * (uVar16 & 0xffffffff) +
             (ulonglong)uVar17 * (ulonglong)_DAT_181034ab0 << 0x20) + lVar13)) + 0x3e37bc1d48d9f08a;
  _DAT_1831d8fc0 = _DAT_1831d9120 ^ uVar10 ^ uVar41;
  _DAT_1831d9200 = (_DAT_1831d9200 ^ uVar10) + uVar41 ^ 0xec68bf448e8dbc29;
  _DAT_1831d9240 = (_DAT_1831d9240 * -0x61b4f08c7d87b39 ^ _DAT_1831d9200) + uVar10;
  _DAT_1831d8f20 = _DAT_1831d9240 ^ _DAT_1831d9200;
  uVar10 = (uVar12 ^ _DAT_1831d9220) + _DAT_1831d8f80 + uVar12;
  uVar32 = (uVar11 ^ _DAT_1831d8f80) + _DAT_1831d9220 + uVar11;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar12 ^ _DAT_1831d9220;
  uVar32 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar11 ^ _DAT_1831d8f80;
  _DAT_1831d9298 = uVar41;
  _DAT_1831d92b0 =
       func_0x000188811c80((uVar32 << 0x1d | uVar32 >> 0x23) - (_DAT_1831d9220 + uVar11) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831d8f80 + uVar12));
  uVar32 = uVar16 ^ uVar11;
  _DAT_1831d91e8 =
       (_DAT_1831d91e8 ^ _DAT_1831d92b0 & 0xfffffffffffffe00) + uVar32 ^ 0x70f710676139f5e5;
  _DAT_1831d92f8 =
       (_DAT_1831d92f8 * -0x43c708ad3bd7e089 ^ _DAT_1831d91e8) +
       (_DAT_1831d92b0 & 0xfffffffffffffe00);
  _DAT_1831d9058 = _DAT_1831d92f8 ^ _DAT_1831d91e8;
  uVar10 = (uVar12 ^ _DAT_1831d9290) + _DAT_1831d90b8 + uVar12;
  uVar61 = (uVar11 ^ _DAT_1831d90b8) + _DAT_1831d9290 + uVar11;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar12 ^ _DAT_1831d9290;
  uVar61 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar11 ^ _DAT_1831d90b8;
  _DAT_1831d9090 = uVar32;
  _DAT_1831d90e0 =
       func_0x000188811c80((uVar61 << 0x1d | uVar61 >> 0x23) - (_DAT_1831d9290 + uVar11) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831d90b8 + uVar12));
  uVar10 = _DAT_1831d90e0 >> 1 | _DAT_1831d90e0;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = 0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_1831d90e0;
  _DAT_1831d9288 = uVar11 & uVar16;
  _DAT_1831d90c0 = (_DAT_1831d90c0 ^ uVar10) + _DAT_1831d9288 ^ 0x95e2546751ec37ab;
  _DAT_1831d9178 = (_DAT_1831d9178 * -0xc5603ce628c8e7d ^ _DAT_1831d90c0) + uVar10;
  _DAT_1831d9008 = _DAT_1831d9178 ^ _DAT_1831d90c0;
  uVar41 = uVar41 - (uVar32 + _DAT_1831d9288 * 2);
  uVar10 = uVar15 ^ 0x84222325 ^ _DAT_1831d8f70;
  lVar13 = (uVar15 ^ 0x84222325) + _DAT_1831d9248;
  uVar11 = uVar10 + lVar13;
  uVar32 = (uVar41 ^ _DAT_1831d9248) + _DAT_1831d8f70 + uVar41;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar10;
  uVar11 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar41 ^ _DAT_1831d9248;
  _DAT_1831d9268 =
       func_0x000188811c80((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831d8f70 + uVar41) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - lVar13);
  uVar11 = (uVar15 | uVar41) ^ _DAT_1831d9268 ^ uVar15;
  uVar31 = (uint)(uVar15 >> 0x20);
  auVar60._8_4_ = (int)uVar15;
  auVar60._0_8_ = uVar15;
  auVar60._12_4_ = uVar31;
  uVar17 = (uint)(uVar41 >> 0x20);
  auVar57._8_4_ = (int)uVar41;
  auVar57._0_8_ = uVar41;
  auVar57._12_4_ = uVar17;
  uVar32 = (uVar15 & 0xffffffff) * (uVar41 & 0xffffffff) +
           ((ulonglong)uVar31 * (uVar41 & 0xffffffff) + (uVar15 & 0xffffffff) * (ulonglong)uVar17 <<
           0x20);
  uVar66 = SUB164(auVar60 & auVar57,0);
  uVar42 = SUB164(auVar60 | auVar57,0);
  uVar64 = SUB164(auVar60 ^ auVar57,0);
  uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = ((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar11
           ) & 0x1fffffffffffffff;
  lVar13 = (uVar32 & 0xffffffff) * (ulonglong)_DAT_181034bf0 +
           ((ulonglong)_DAT_181034c00 * (uVar32 & 0xffffffff) +
            (uVar32 >> 0x20) * (ulonglong)_DAT_181034bf0 << 0x20);
  auVar62._8_4_ = 0xffffffff;
  auVar62._0_8_ = 0xffffffffffffffff;
  auVar62._12_4_ = 0xffffffff;
  uVar52 = SUB164(auVar60 ^ auVar62,0);
  uVar30 = SUB164(auVar57 ^ auVar62,0);
  uVar32 = (((ulonglong)uVar64 * (ulonglong)_DAT_181034bd0 +
             ((ulonglong)_DAT_181034be0 * (ulonglong)uVar64 +
              (SUB168(auVar60 ^ auVar57,0) >> 0x20) * (ulonglong)_DAT_181034bd0 << 0x20) +
             (ulonglong)uVar42 * (ulonglong)_DAT_181034bb0 +
             ((ulonglong)_DAT_181034bc0 * (ulonglong)uVar42 +
              (SUB168(auVar60 | auVar57,0) >> 0x20) * (ulonglong)_DAT_181034bb0 << 0x20) +
             (ulonglong)uVar66 * (ulonglong)_DAT_181034b90 +
             ((ulonglong)_DAT_181034ba0 * (ulonglong)uVar66 +
              (SUB168(auVar60 & auVar57,0) >> 0x20) * (ulonglong)_DAT_181034b90 << 0x20) +
             (ulonglong)_DAT_181034b80 * (uVar41 & 0xffffffff) +
             ((ulonglong)uVar17 * (ulonglong)_DAT_181034b80 +
              (ulonglong)_DAT_181034b70 * (uVar41 & 0xffffffff) << 0x20) +
             (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034b80 +
             ((ulonglong)uVar31 * (ulonglong)_DAT_181034b80 +
              (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034b70 << 0x20) + lVar13) -
           ((ulonglong)uVar30 * (ulonglong)_DAT_181034c40 +
            ((SUB168(auVar57 ^ auVar62,0) >> 0x20) * (ulonglong)_DAT_181034c40 +
             (ulonglong)_DAT_181034c30 * (ulonglong)uVar30 << 0x20) +
            (uVar41 & 0xffffffff) * (ulonglong)_DAT_181034c40 +
            ((ulonglong)uVar17 * (ulonglong)_DAT_181034c40 +
             (uVar41 & 0xffffffff) * (ulonglong)_DAT_181034c30 << 0x20) +
            (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034c20 +
            ((ulonglong)uVar31 * (ulonglong)_DAT_181034c20 +
             (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034c10 << 0x20) +
            (ulonglong)uVar52 * (ulonglong)_DAT_181034c20 +
            ((SUB168(auVar60 ^ auVar62,0) >> 0x20) * (ulonglong)_DAT_181034c20 +
             (ulonglong)_DAT_181034c10 * (ulonglong)uVar52 << 0x20) + lVar13)) - _DAT_181034c50;
  _DAT_1831d9008 = _DAT_1831d9080 ^ uVar10 ^ uVar32;
  _DAT_1831d9048 = (_DAT_1831d9048 ^ uVar10) + uVar32 ^ 0xb35f035d37ca9576;
  _DAT_1831d92f8 = (_DAT_1831d92f8 * -0x5e9123dd1404ac3f ^ _DAT_1831d9048) + uVar10;
  _DAT_1831d8fe0 = _DAT_1831d92f8 ^ _DAT_1831d9048;
  uVar10 = (uVar12 ^ _DAT_1831d9000) + uVar12 + _DAT_1831d9188;
  uVar11 = ~_DAT_1831d9188 + (_DAT_1831d9000 - 1);
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar12 ^ _DAT_1831d9000;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ ~_DAT_1831d9188;
  _DAT_1831d9200 = uVar32;
  _DAT_1831d9120 =
       func_0x000188811c80((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831d9000 - 1) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (uVar12 + _DAT_1831d9188));
  _DAT_1831d8fc8 = ~uVar16;
  _DAT_1831d9148 = (_DAT_1831d9148 ^ _DAT_1831d9120) + _DAT_1831d8fc8 ^ 0xbcf2f40a0ba78e43;
  _DAT_1831d8fb0 = (_DAT_1831d8fb0 * 0x3ab5232ce53dc86d ^ _DAT_1831d9148) + _DAT_1831d9120;
  _DAT_1831d9088 = _DAT_1831d8fb0 ^ _DAT_1831d9148;
  uVar10 = (~_DAT_1831d9078 - uVar16) * ((_DAT_1831d9090 ^ uVar12) + (uVar12 & _DAT_1831d9090) * 2);
  uVar10 = (uVar10 | _DAT_1831d92e0) + (uVar10 & _DAT_1831d92e0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d92e0 =
       func_0x000188811c80((_DAT_1831d8fc8 ^ uVar12 | uVar10) + (uVar10 & (_DAT_1831d8fc8 ^ uVar12))
                          );
  auVar19 = _DAT_1800170c0;
  _DAT_1831d90a0 = _DAT_1831d90a0 ^ _DAT_1831d92e0 * -0x47254d2404a22fe1 ^ 0x470581acfd229f2b;
  _DAT_1831d8fc0 =
       (_DAT_1831d8fc0 * 0x6d38dd5baaa9fa05 ^ _DAT_1831d90a0) + _DAT_1831d92e0 * -0x47254d2404a22fe1
       ^ _DAT_1831d90a0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar32 ^ 0x84222325;
  _DAT_1831d8fe8 = 0;
  auVar18 = pshufb(auVar22 ^ _DAT_181034c60,_DAT_1800170c0);
  uVar11 = auVar18._8_8_ + auVar18._0_8_;
  uVar10 = uVar11 + _DAT_1831d9190;
  if (auVar18._4_4_ < 0) {
    uVar10 = _DAT_1831d9288 ^ uVar11;
  }
  _DAT_1831d8f18 = func_0x000188811c80(SUB161(auVar22 ^ _DAT_181034c60,5) ^ uVar10);
  uVar10 = _DAT_1810333c0;
  uVar17 = (uint)(uVar32 >> 0x20);
  auVar23._8_4_ = (int)uVar32;
  auVar23._0_8_ = uVar32;
  auVar23._12_4_ = uVar17;
  auVar6._8_8_ = _UNK_18001a718;
  auVar6._0_8_ = _DAT_18001a710;
  uVar30 = SUB164(auVar23 ^ auVar6,0);
  uVar11 = SUB168(auVar23 ^ auVar6,0);
  uVar32 = (((ulonglong)_DAT_181034cb0 * (ulonglong)uVar30 +
             ((ulonglong)_DAT_181034ce0 * (ulonglong)uVar30 +
              (uVar11 >> 0x20) * (ulonglong)_DAT_181034cb0 << 0x20) +
            (ulonglong)_DAT_181034cc0 * (uVar32 & 0xffffffff) +
            ((ulonglong)_DAT_181034cd0 * (uVar32 & 0xffffffff) +
             (ulonglong)uVar17 * (ulonglong)_DAT_181034cc0 << 0x20) +
            (ulonglong)_DAT_181034c90 * (uVar32 & 0xffffffff) +
            ((ulonglong)_DAT_181034ca0 * (uVar32 & 0xffffffff) +
             (ulonglong)uVar17 * (ulonglong)_DAT_181034c90 << 0x20) +
            (ulonglong)_DAT_181034c70 * (uVar32 & 0xffffffff) +
            ((ulonglong)_DAT_181034c80 * (uVar32 & 0xffffffff) +
             (ulonglong)uVar17 * (ulonglong)_DAT_181034c70 << 0x20)) -
           ((ulonglong)uVar30 * (_DAT_181034d30 & 0xffffffff) +
            ((ulonglong)_DAT_181034d40 * (ulonglong)uVar30 +
             (uVar11 >> 0x20) * (_DAT_181034d30 & 0xffffffff) << 0x20) +
           (uVar32 & 0xffffffff) * (ulonglong)_DAT_181034d10 +
           ((ulonglong)_DAT_181034d20 * (uVar32 & 0xffffffff) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181034d10 << 0x20) +
           (ulonglong)_DAT_181034cf0 * (uVar32 & 0xffffffff) +
           ((ulonglong)_DAT_181034d00 * (uVar32 & 0xffffffff) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181034cf0 << 0x20))) + _DAT_181034d50;
  _DAT_1831d8fd0 = _DAT_1831d90b0 ^ _DAT_1831d92b0 ^ uVar32;
  _DAT_1831d8f48 = (_DAT_1831d8f48 ^ _DAT_1831d92b0) + uVar32 ^ 0xa550735d589c96f2;
  _DAT_1831d9280 = (_DAT_1831d9280 * -0x2a5bacef429b892b ^ _DAT_1831d8f48) + _DAT_1831d92b0;
  _DAT_1831d9030 = _DAT_1831d9280 ^ _DAT_1831d8f48;
  auVar24._8_8_ = _DAT_1810333c0;
  auVar24._0_8_ = uStack0000000000000088;
  auVar18 = pshufb(auVar24 ^ _DAT_181034d60,auVar19);
  uVar12 = auVar18._8_8_ + auVar18._0_8_;
  uVar11 = uVar12 + _DAT_1831d9260;
  if (auVar18._4_4_ < 0) {
    uVar11 = _DAT_1831d8f98 ^ uVar12;
  }
  _DAT_1831d90b8 = uVar32;
  _DAT_1831d9050 = func_0x000188811c80(SUB161(auVar24 ^ _DAT_181034d60,5) ^ uVar11);
  _DAT_1831d8fc8 = _DAT_1831d8fc8 ^ _DAT_1831d9050 ^ uVar10 ^ 0xaf4de6ff9f3b771f;
  _DAT_1831d9130 = (_DAT_1831d9130 * 0x52c5cb1b1a58277 ^ _DAT_1831d8fc8) + (_DAT_1831d9050 ^ uVar10)
  ;
  _DAT_1831d92a8 = _DAT_1831d9130 ^ _DAT_1831d8fc8;
  uStack0000000000000088 = in_stack_00000098 ^ 0x84222325;
  auVar25._8_8_ = uVar32;
  auVar25._0_8_ = uStack0000000000000088;
  _DAT_1831d9120 = 0;
  auVar18 = pshufb(auVar25 ^ _DAT_181034d70,auVar19);
  uVar11 = auVar18._8_8_ + auVar18._0_8_;
  uVar10 = uVar11 + _DAT_1831d9090;
  if (auVar18._4_4_ < 0) {
    uVar10 = _DAT_1831d9068 ^ uVar11;
  }
  _DAT_1831d9290 = func_0x000188811c80(SUB161(auVar25 ^ _DAT_181034d70,5) ^ uVar10);
  uVar11 = _DAT_1810333d8;
  uVar10 = _DAT_1810333d0;
  uVar12 = _DAT_1831d9290 & 0x7ffffffffff ^ uVar32;
  uVar16 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar12 = (uint)bVar1 + (uint)bVar1 ^ uVar12;
  lVar13 = uVar32 + in_stack_00000098 + (uVar32 & in_stack_00000098) * -2;
  _DAT_1831d9148 = (_DAT_1831d9148 ^ uVar12) + lVar13 ^ 0x92ae87cace123fd8;
  _DAT_1831d8f00 = (_DAT_1831d9210 * -0x66df1397623671df ^ _DAT_1831d9148) + uVar12 ^ _DAT_1831d9148
  ;
  uVar12 = _DAT_1810333d8 ^ 0x84222325 ^ _DAT_1831d8fa0;
  lVar14 = (_DAT_1810333d8 ^ 0x84222325) + _DAT_1831d9038;
  uVar32 = uVar12 + lVar14;
  uVar16 = (_DAT_1831d9038 ^ 0x797f759f8e706cbc) + _DAT_1831d8fa0 + 0x797f759f8e706cbc;
  uVar12 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar12;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1831d9038 ^ 0x797f759f8e706cbc;
  uVar32 = _DAT_1810333d0 | 0x70e590a5a42a4f24;
  _DAT_1831d9210 = lVar13;
  _DAT_1831d9090 =
       func_0x000188811c80((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1831d8fa0 + 0x797f759f8e706cbc)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) - lVar14);
  uVar12 = _DAT_1831d9090 - (_DAT_1831d9090 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
           _DAT_1831d9090;
  uVar16 = uVar11 ^ 0x797f759f8e706cbc;
  _DAT_1831d91e0 = (_DAT_1831d91e0 ^ uVar12) + uVar16 ^ 0x627c5c9b7b782c4c;
  _DAT_1831d8fb8 = (_DAT_1831d8fb8 * 0x3fe57f84bb7a99ab ^ _DAT_1831d91e0) + uVar12;
  _DAT_1831d8f08 = _DAT_1831d8fb8 ^ _DAT_1831d91e0;
  lVar13 = uVar10 * uVar10;
  uVar15 = lVar13 * -0x4c59a0e8474865cd;
  uVar10 = ((_DAT_1831d8f68 ^ 0x446edb2046e3cf77) + (_DAT_1831d8f68 & 0x446edb2046e3cf77) * 2) *
           (uVar15 - _DAT_1831d9188);
  uVar10 = (uVar10 | _DAT_1831d91d8) + (uVar10 & _DAT_1831d91d8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d92c0 = uVar16;
  _DAT_1831d9268 =
       func_0x000188811c80((uVar15 ^ 0x446edb2046e3cf77 | uVar10) +
                           (uVar10 & (uVar15 ^ 0x446edb2046e3cf77)));
  auVar65._8_8_ = 0;
  auVar65._0_8_ = uVar15;
  uVar52 = (uint)(uVar15 >> 0x20);
  auVar47._8_4_ = (int)uVar15;
  auVar47._0_8_ = uVar15;
  auVar47._12_4_ = uVar52;
  uVar31 = SUB164(auVar47 & _DAT_181034d80,0);
  uVar73 = SUB168(auVar47 & _DAT_181034d80,0);
  uVar30 = SUB164(auVar47 | _DAT_181034d80,0);
  uVar68 = SUB168(auVar47 | _DAT_181034d80,0);
  uVar17 = SUB164(_DAT_181034d80 ^ auVar47,0);
  uVar61 = SUB168(_DAT_181034d80 ^ auVar47,0);
  auVar77._8_4_ = 0xffffffff;
  auVar77._0_8_ = 0xffffffffffffffff;
  auVar77._12_4_ = 0xffffffff;
  uVar42 = SUB164(auVar65 ^ auVar77,0);
  lVar14 = uVar11 * uVar11;
  uVar12 = lVar14 * 0x315f9186ab31867a;
  auVar26._8_8_ = uVar12;
  auVar26._0_8_ = _DAT_18001b640;
  auVar18 = pshufb(auVar26 ^ _DAT_181034ed0,auVar19);
  uVar10 = ((uVar15 | 0x446edb20c2c1ec52) ^ 0x446edb20c2c00000 ^ _DAT_1831d9268) &
           0xfffffffffff80000;
  uVar41 = uVar10 >> 1 | uVar10;
  uVar41 = uVar41 >> 2 | uVar41;
  uVar41 = uVar41 >> 4 | uVar41;
  uVar41 = uVar41 >> 8 | uVar41;
  uVar41 = uVar41 >> 0x10 | uVar41;
  uVar41 = uVar41 >> 0x20 | uVar41;
  uVar41 = uVar41 - (uVar41 >> 1 & 0x5555555555555555);
  uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
  uVar10 = 0x40 - (((uVar41 >> 4) + uVar41 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           uVar10;
  _DAT_1831d9108 =
       (((ulonglong)uVar42 * (ulonglong)_DAT_181034e10 +
         ((ulonglong)_DAT_181034e20 * (ulonglong)uVar42 +
          (SUB168(auVar65 ^ auVar77,0) >> 0x20) * (ulonglong)_DAT_181034e10 << 0x20) +
        (ulonglong)_DAT_181034df0 * (ulonglong)uVar17 +
        ((ulonglong)_DAT_181034e00 * (ulonglong)uVar17 +
         (uVar61 >> 0x20) * (ulonglong)_DAT_181034df0 << 0x20) +
        (ulonglong)_DAT_181034dd0 * (ulonglong)uVar30 +
        ((ulonglong)_DAT_181034de0 * (ulonglong)uVar30 +
         (uVar68 >> 0x20) * (ulonglong)_DAT_181034dd0 << 0x20) +
        (ulonglong)_DAT_181034db0 * (ulonglong)uVar31 +
        ((ulonglong)_DAT_181034dc0 * (ulonglong)uVar31 +
         (uVar73 >> 0x20) * (ulonglong)_DAT_181034db0 << 0x20) +
        (ulonglong)_DAT_181034d90 * (uVar15 & 0xffffffff) +
        ((ulonglong)_DAT_181034da0 * (uVar15 & 0xffffffff) +
         (ulonglong)uVar52 * (ulonglong)_DAT_181034d90 << 0x20)) -
       ((ulonglong)uVar17 * (ulonglong)_DAT_181034eb0 +
        ((ulonglong)_DAT_181034ec0 * (ulonglong)uVar17 +
         (uVar61 >> 0x20) * (ulonglong)_DAT_181034eb0 << 0x20) +
        (ulonglong)uVar30 * (ulonglong)_DAT_181034e90 +
        ((ulonglong)_DAT_181034ea0 * (ulonglong)uVar30 +
         (uVar68 >> 0x20) * (ulonglong)_DAT_181034e90 << 0x20) +
       (ulonglong)uVar31 * (ulonglong)_DAT_181034e70 +
       ((ulonglong)_DAT_181034e80 * (ulonglong)uVar31 + (uVar73 >> 0x20) * (ulonglong)_DAT_181034e70
       << 0x20) +
       (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034e50 +
       ((ulonglong)_DAT_181034e60 * (uVar15 & 0xffffffff) +
        (ulonglong)uVar52 * (ulonglong)_DAT_181034e50 << 0x20))) + 0x68a08bc85db3f47e;
  _DAT_1831d91b0 = _DAT_1831d8fa0 ^ uVar10 ^ _DAT_1831d9108;
  _DAT_1831d9118 = (_DAT_1831d9118 ^ uVar10) + _DAT_1831d9108 ^ 0xcb0d58fd392648d7;
  _DAT_1831d9078 = (_DAT_1831d9078 * 0x4571f3bb5a214989 ^ _DAT_1831d9118) + uVar10;
  _DAT_1831d9180 = _DAT_1831d9078 ^ _DAT_1831d9118;
  uVar15 = _DAT_1831d9108 + lVar13 * 0x4c59a0e8474865cd;
  uVar41 = auVar18._8_8_ + auVar18._0_8_;
  uVar10 = uVar41 + _DAT_1831d8f38;
  if (auVar18._4_4_ < 0) {
    uVar10 = _DAT_1831d9060 ^ uVar41;
  }
  _DAT_1831d9130 = func_0x000188811c80(SUB161(auVar26 ^ _DAT_181034ed0,5) ^ uVar10);
  uVar10 = ((_DAT_1831d9130 ^ uVar12) << 0x2b | (_DAT_1831d9130 ^ uVar12) >> 0x15) ^ uVar12;
  uVar61 = lVar14 * -0x315f9186ab31867a;
  _DAT_1831d92d0 = (_DAT_1831d8f20 ^ uVar10) + lVar14 * -0x315f9186ab31867a ^ 0xd26d9fd309e7027;
  _DAT_1831d8f20 = (_DAT_1831d8f20 * -0x3af7c4faebfd1885 ^ _DAT_1831d92d0) + uVar10;
  _DAT_1831d92d0 = _DAT_1831d8f20 ^ _DAT_1831d92d0;
  auVar27._8_8_ = uVar12;
  auVar27._0_8_ = uVar15 ^ 0x84222325;
  auVar19 = pshufb(auVar27 ^ _DAT_181034ee0,auVar19);
  uVar41 = auVar19._8_8_ + auVar19._0_8_;
  uVar10 = uVar41 + _DAT_1831d9198;
  if (auVar19._4_4_ < 0) {
    uVar10 = _DAT_1831d8f18 ^ uVar41;
  }
  _DAT_1831d9178 = uVar61;
  _DAT_1831d9028 = func_0x000188811c80(SUB161(auVar27 ^ _DAT_181034ee0,5) ^ uVar10);
  uVar30 = (uint)(uVar15 >> 0x20);
  auVar48._8_4_ = (int)uVar15;
  auVar48._0_8_ = uVar15;
  auVar48._12_4_ = uVar30;
  uVar52 = (uint)(uVar12 >> 0x20);
  auVar28._8_4_ = (int)uVar12;
  auVar28._0_8_ = uVar12;
  auVar28._12_4_ = uVar52;
  uVar64 = SUB164(auVar48 & auVar28,0);
  uVar73 = SUB168(auVar48 & auVar28,0);
  uVar31 = SUB164(auVar48 | auVar28,0);
  uVar41 = SUB168(auVar48 | auVar28,0);
  uVar66 = SUB164(auVar48 ^ auVar77,0);
  uVar42 = SUB164(auVar48 ^ auVar28,0);
  auVar7._8_8_ = _UNK_18001a718;
  auVar7._0_8_ = _DAT_18001a710;
  uVar17 = SUB164(auVar28 ^ auVar7,0);
  uVar10 = (_DAT_1831d9028 & 0xfffffffff ^ uVar12) & 0x7fffffffffffffff;
  uVar41 = (((ulonglong)uVar66 * (ulonglong)_DAT_181034f30 +
             ((ulonglong)_DAT_181034f60 * (ulonglong)uVar66 +
              (SUB168(auVar48 ^ auVar77,0) >> 0x20) * (ulonglong)_DAT_181034f30 << 0x20) +
            (ulonglong)_DAT_181034f50 * (ulonglong)uVar31 +
            ((uVar41 >> 0x20) * (ulonglong)_DAT_181034f50 +
             (ulonglong)_DAT_181034f40 * (ulonglong)uVar31 << 0x20) +
            (ulonglong)uVar64 * (ulonglong)_DAT_181034f50 +
            ((uVar73 >> 0x20) * (ulonglong)_DAT_181034f50 +
             (ulonglong)uVar64 * (ulonglong)_DAT_181034f40 << 0x20) +
            (ulonglong)_DAT_181034f10 * (uVar12 & 0xffffffff) +
            ((ulonglong)_DAT_181034f20 * (uVar12 & 0xffffffff) +
             (ulonglong)uVar52 * (ulonglong)_DAT_181034f10 << 0x20) +
            (ulonglong)_DAT_181034ef0 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_181034f00 * (uVar15 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_181034ef0 << 0x20)) -
           ((ulonglong)uVar17 * (_DAT_181034fd0 & 0xffffffff) +
            ((ulonglong)_DAT_181035040 * (ulonglong)uVar17 +
             (SUB168(auVar28 ^ auVar7,0) >> 0x20) * (_DAT_181034fd0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_181035020 +
           ((ulonglong)_DAT_181035030 * (ulonglong)uVar42 +
            (SUB168(auVar48 ^ auVar28,0) >> 0x20) * (ulonglong)_DAT_181035020 << 0x20) +
           (ulonglong)uVar31 * (ulonglong)_DAT_181035000 +
           ((ulonglong)_DAT_181035010 * (ulonglong)uVar31 +
            (uVar41 >> 0x20) * (ulonglong)_DAT_181035000 << 0x20) +
           (ulonglong)uVar64 * (ulonglong)_DAT_181034fe0 +
           ((ulonglong)_DAT_181034ff0 * (ulonglong)uVar64 +
            (uVar73 >> 0x20) * (ulonglong)_DAT_181034fe0 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_181034fb0 +
           ((ulonglong)_DAT_181034fc0 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar52 * (ulonglong)_DAT_181034fb0 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_181034f90 +
           ((ulonglong)_DAT_181034fa0 * (uVar15 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_181034f90 << 0x20))) + _DAT_181035050;
  _DAT_1831d90a8 = _DAT_1831d90c0 ^ uVar10 ^ uVar41;
  _DAT_1831d90b8 = (_DAT_1831d90b8 ^ uVar10) + uVar41 ^ 0x50898896e0e414d1;
  _DAT_1831d9068 = (_DAT_1831d9068 * -0x33739fc6e176ad0f ^ _DAT_1831d90b8) + uVar10;
  _DAT_1831d9138 = _DAT_1831d9068 ^ _DAT_1831d90b8;
  uVar12 = uVar41 ^ 0x84222325;
  uVar10 = ((_DAT_1831d91e0 ^ uVar12) + (uVar12 & _DAT_1831d91e0) * 2) * (uVar61 - _DAT_1831d9040);
  uVar10 = (uVar10 | _DAT_1831d8f18) + (uVar10 & _DAT_1831d8f18);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d9278 = uVar41;
  _DAT_1831d90a8 = func_0x000188811c80((uVar12 ^ uVar61 | uVar10) + (uVar10 & (uVar12 ^ uVar61)));
  uVar10 = ~_DAT_1831d90a8 & uVar41;
  uVar52 = (uint)(uVar41 >> 0x20);
  auVar36._8_4_ = (int)uVar41;
  auVar36._0_8_ = uVar41;
  auVar36._12_4_ = uVar52;
  uVar30 = (uint)(uVar61 >> 0x20);
  auVar49._8_4_ = (int)uVar61;
  auVar49._0_8_ = uVar61;
  auVar49._12_4_ = uVar30;
  uVar42 = SUB164(auVar36 & auVar49,0);
  uVar15 = SUB168(auVar36 & auVar49,0);
  uVar17 = SUB164(auVar36 | auVar49,0);
  uVar73 = SUB168(auVar36 | auVar49,0);
  uVar31 = SUB164(auVar36 ^ auVar49,0);
  uVar12 = SUB168(auVar36 ^ auVar49,0);
  auVar8._8_8_ = _UNK_18001a718;
  auVar8._0_8_ = _DAT_18001a710;
  uVar64 = SUB164(auVar49 ^ auVar8,0);
  uVar73 = (((ulonglong)uVar64 * (_DAT_1810350a0 & 0xffffffff) +
             ((_DAT_181035110 & 0xffffffff) * (ulonglong)uVar64 +
              (SUB168(auVar49 ^ auVar8,0) >> 0x20) * (_DAT_1810350a0 & 0xffffffff) << 0x20) +
            (_DAT_1810350f0 & 0xffffffff) * (ulonglong)uVar31 +
            ((_DAT_181035100 & 0xffffffff) * (ulonglong)uVar31 +
             (uVar12 >> 0x20) * (_DAT_1810350f0 & 0xffffffff) << 0x20) +
            (_DAT_1810350d0 & 0xffffffff) * (ulonglong)uVar17 +
            ((_DAT_1810350e0 & 0xffffffff) * (ulonglong)uVar17 +
             (uVar73 >> 0x20) * (_DAT_1810350d0 & 0xffffffff) << 0x20) +
            (_DAT_1810350b0 & 0xffffffff) * (ulonglong)uVar42 +
            ((_DAT_1810350c0 & 0xffffffff) * (ulonglong)uVar42 +
             (uVar15 >> 0x20) * (_DAT_1810350b0 & 0xffffffff) << 0x20) +
            (_DAT_181035080 & 0xffffffff) * (uVar61 & 0xffffffff) +
            ((_DAT_181035090 & 0xffffffff) * (uVar61 & 0xffffffff) +
             (ulonglong)uVar30 * (_DAT_181035080 & 0xffffffff) << 0x20) +
            (_DAT_181035060 & 0xffffffff) * (uVar41 & 0xffffffff) +
            ((_DAT_181035070 & 0xffffffff) * (uVar41 & 0xffffffff) +
             (ulonglong)uVar52 * (_DAT_181035060 & 0xffffffff) << 0x20)) -
           ((uVar12 & 0xffffffff) * (ulonglong)_DAT_1810351a0 +
            ((_DAT_1810351b0 & 0xffffffff) * (uVar12 & 0xffffffff) +
             (uVar12 >> 0x20) * (ulonglong)_DAT_1810351a0 << 0x20) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181035180 +
            ((_DAT_181035190 & 0xffffffff) * (ulonglong)uVar17 +
             (uVar73 >> 0x20) * (ulonglong)_DAT_181035180 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_181035160 +
           ((_DAT_181035170 & 0xffffffff) * (ulonglong)uVar42 +
            (uVar15 >> 0x20) * (ulonglong)_DAT_181035160 << 0x20) +
           (uVar61 & 0xffffffff) * (ulonglong)_DAT_181035150 +
           ((ulonglong)uVar30 * (ulonglong)_DAT_181035150 +
            (_DAT_181035140 & 0xffffffff) * (uVar61 & 0xffffffff) << 0x20) +
           (uVar41 & 0xffffffff) * (ulonglong)_DAT_181035150 +
           ((ulonglong)uVar52 * (ulonglong)_DAT_181035150 +
            (uVar41 & 0xffffffff) * (_DAT_181035140 & 0xffffffff) << 0x20))) + _DAT_1810350a0;
  _DAT_1831d92d8 = _DAT_1831d9010 ^ uVar10 ^ uVar73;
  _DAT_1831d9118 = (_DAT_1831d9118 ^ uVar10) + uVar73 ^ 0x5a3b693b307409d9;
  _DAT_1831d9040 = (_DAT_1831d9040 * 0x37964da821938eeb ^ _DAT_1831d9118) + uVar10;
  _DAT_1831d8f50 = _DAT_1831d9040 ^ _DAT_1831d9118;
  lVar14 = uVar11 * _DAT_1810333d0;
  uVar12 = lVar14 * 0x2a0c3ab35d3451a2;
  uVar10 = (_DAT_1831d8f30 ^ 0x84222325) + _DAT_1831d9108 + 0x84222325;
  uVar11 = (uVar12 ^ _DAT_1831d9108) + _DAT_1831d8f30 + uVar12;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831d8f30 ^ 0x84222325;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar12 ^ _DAT_1831d9108;
  _DAT_1831d8fc8 = uVar73;
  _DAT_1831d8f18 =
       func_0x000188811c80((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831d8f30 + uVar12) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831d9108 + 0x84222325));
  _DAT_1831d91d8 = lVar14 * -0x2a0c3ab35d3451a2;
  _DAT_1831d9000 =
       (_DAT_1831d9000 ^ _DAT_1831d8f18) + lVar14 * -0x2a0c3ab35d3451a2 ^ 0x62a6176677f45f75;
  _DAT_1831d9110 = (_DAT_1831d9110 * -0x5f72b90f1de5a03f ^ _DAT_1831d9000) + _DAT_1831d8f18;
  _DAT_1831d8f30 = _DAT_1831d9110 ^ _DAT_1831d9000;
  _DAT_1831d9180 = _DAT_1831d9080 ^ _DAT_1831d91d8;
  uVar11 = uVar73 ^ 0x84222325;
  uVar10 = ((_DAT_1831d90c0 ^ uVar11) + (uVar11 & _DAT_1831d90c0) * 2) * (uVar12 - _DAT_1831d92f0);
  uVar10 = (uVar10 | _DAT_1831d8f88) + (uVar10 & _DAT_1831d8f88);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  lVar13 = func_0x000188811c80((uVar11 ^ uVar12 | uVar10) + (uVar10 & (uVar11 ^ uVar12)));
  auVar19 = _DAT_1800170c0;
  uVar42 = (uint)(uVar73 >> 0x20);
  auVar56._8_4_ = (int)uVar73;
  auVar56._0_8_ = uVar73;
  auVar56._12_4_ = uVar42;
  uVar30 = (uint)(uVar12 >> 0x20);
  auVar37._8_4_ = (int)uVar12;
  auVar37._0_8_ = uVar12;
  auVar37._12_4_ = uVar30;
  uVar31 = SUB164(auVar56 & auVar37,0);
  uVar15 = SUB168(auVar56 & auVar37,0);
  uVar52 = SUB164(auVar56 | auVar37,0);
  uVar17 = SUB164(auVar56 ^ auVar37,0);
  uVar61 = SUB168(auVar56 ^ auVar37,0);
  uVar68 = uVar73 ^ _DAT_18001a710;
  uVar41 = uVar32 ^ 0x84222325;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = uVar16;
  auVar67._8_8_ = uVar16;
  auVar67._0_8_ = uVar41;
  auVar18 = pshufb(_DAT_181035300 ^ auVar67,_DAT_1800170c0);
  uVar11 = lVar13 * -0x4a116c0095c2d6ed;
  uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  _DAT_1831d9280 =
       ((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar11) &
       0x7fffffffffffffff;
  _DAT_1831d92e0 =
       (((ulonglong)_DAT_181035220 * (ulonglong)uVar17 +
         ((ulonglong)_DAT_181035230 * (ulonglong)uVar17 +
          (uVar61 >> 0x20) * (ulonglong)_DAT_181035220 << 0x20) +
         (ulonglong)uVar52 * (ulonglong)_DAT_181035200 +
         ((ulonglong)_DAT_181035210 * (ulonglong)uVar52 +
          (SUB168(auVar56 | auVar37,0) >> 0x20) * (ulonglong)_DAT_181035200 << 0x20) +
        (ulonglong)_DAT_1810351e0 * (ulonglong)uVar31 +
        ((ulonglong)_DAT_1810351f0 * (ulonglong)uVar31 +
         (uVar15 >> 0x20) * (ulonglong)_DAT_1810351e0 << 0x20) +
        (ulonglong)_DAT_1810351d0 * (uVar12 & 0xffffffff) +
        ((ulonglong)uVar30 * (ulonglong)_DAT_1810351d0 +
         (ulonglong)_DAT_1810351c0 * (uVar12 & 0xffffffff) << 0x20) +
        (uVar73 & 0xffffffff) * (ulonglong)_DAT_1810351d0 +
        ((ulonglong)uVar42 * (ulonglong)_DAT_1810351d0 +
         (uVar73 & 0xffffffff) * (ulonglong)_DAT_1810351c0 << 0x20)) -
       ((uVar68 & 0xffffffff) * (_DAT_1810352a0 & 0xffffffff) +
        ((ulonglong)_DAT_1810352f0 * (uVar68 & 0xffffffff) +
         (uVar68 >> 0x20) * (_DAT_1810352a0 & 0xffffffff) << 0x20) +
        (ulonglong)uVar17 * (ulonglong)_DAT_1810352d0 +
        ((ulonglong)_DAT_1810352e0 * (ulonglong)uVar17 +
         (uVar61 >> 0x20) * (ulonglong)_DAT_1810352d0 << 0x20) +
       (ulonglong)uVar31 * (ulonglong)_DAT_1810352b0 +
       ((ulonglong)_DAT_1810352c0 * (ulonglong)uVar31 + (uVar15 >> 0x20) * (ulonglong)_DAT_1810352b0
       << 0x20) +
       (uVar12 & 0xffffffff) * (ulonglong)_DAT_181035280 +
       ((ulonglong)_DAT_181035290 * (uVar12 & 0xffffffff) +
        (ulonglong)uVar30 * (ulonglong)_DAT_181035280 << 0x20) +
       (uVar73 & 0xffffffff) * (ulonglong)_DAT_181035260 +
       ((ulonglong)_DAT_181035270 * (uVar73 & 0xffffffff) +
        (ulonglong)uVar42 * (ulonglong)_DAT_181035260 << 0x20))) + 0x76b9b64c08c17fad;
  _DAT_1831d9000 = _DAT_1831d92d0 ^ _DAT_1831d9280 ^ _DAT_1831d92e0;
  _DAT_1831d91e8 = (_DAT_1831d91e8 ^ _DAT_1831d9280) + _DAT_1831d92e0 ^ 0x7ed4bd645417c40a;
  _DAT_1831d9280 = (lVar13 * -0x4e672f064cd80ae5 ^ _DAT_1831d91e8) + _DAT_1831d9280;
  _DAT_1831d9050 = _DAT_1831d9280 ^ _DAT_1831d91e8;
  lVar13 = _DAT_1831d92e0 + lVar14 * -0x2a0c3ab35d3451a2;
  uVar11 = auVar18._8_8_ + auVar18._0_8_;
  uVar10 = uVar11 + _DAT_1831d9278;
  if (auVar18._4_4_ < 0) {
    uVar10 = _DAT_1831d90d0 ^ uVar11;
  }
  _DAT_1831d9038 = func_0x000188811c80(SUB161(_DAT_181035300 ^ auVar67,5) ^ uVar10);
  uVar11 = ~_DAT_1831d9038 & uVar32;
  uVar52 = (uint)(uVar32 >> 0x20);
  auVar50._8_4_ = (int)uVar32;
  auVar50._0_8_ = uVar32;
  auVar50._12_4_ = uVar52;
  uVar64 = (uint)(uVar16 >> 0x20);
  auVar38._8_4_ = (int)uVar16;
  auVar38._0_8_ = uVar16;
  auVar38._12_4_ = uVar64;
  auVar72._8_4_ = 0xffffffff;
  auVar72._0_8_ = 0xffffffffffffffff;
  auVar72._12_4_ = 0xffffffff;
  uVar10 = (uVar32 & 0xffffffff) * (uVar16 & 0xffffffff) +
           ((uVar32 & 0xffffffff) * (ulonglong)uVar64 + (ulonglong)uVar52 * (uVar16 & 0xffffffff) <<
           0x20);
  uVar31 = SUB164(auVar50 ^ auVar72,0);
  uVar17 = SUB164(auVar69 ^ auVar72,0);
  lVar14 = (uVar10 & 0xffffffff) * (ulonglong)_DAT_181035370 +
           ((ulonglong)_DAT_181035380 * (uVar10 & 0xffffffff) +
            (uVar10 >> 0x20) * (ulonglong)_DAT_181035370 << 0x20);
  uVar10 = uVar16 ^ uVar32;
  uVar42 = SUB164(auVar50 & auVar38,0);
  uVar30 = SUB164(auVar50 | auVar38,0);
  uVar12 = (((ulonglong)uVar17 * (ulonglong)_DAT_181035360 +
             ((SUB168(auVar69 ^ auVar72,0) >> 0x20) * (ulonglong)_DAT_181035360 +
              (ulonglong)_DAT_181035330 * (ulonglong)uVar17 << 0x20) +
             (ulonglong)uVar31 * (ulonglong)_DAT_181035350 +
             ((SUB168(auVar50 ^ auVar72,0) >> 0x20) * (ulonglong)_DAT_181035350 +
              (ulonglong)_DAT_181035310 * (ulonglong)uVar31 << 0x20) +
             (ulonglong)_DAT_181035340 * (uVar16 & 0xffffffff) +
             ((ulonglong)uVar64 * (ulonglong)_DAT_181035340 +
              (uVar16 & 0xffffffff) * (ulonglong)_DAT_181035330 << 0x20) +
             (ulonglong)_DAT_181035320 * (uVar32 & 0xffffffff) +
             ((ulonglong)uVar52 * (ulonglong)_DAT_181035320 +
              (uVar32 & 0xffffffff) * (ulonglong)_DAT_181035310 << 0x20) + lVar14) -
           ((uVar10 & 0xffffffff) * (_DAT_1810353a0 & 0xffffffff) +
            ((uVar10 >> 0x20) * (_DAT_1810353a0 & 0xffffffff) +
             (ulonglong)_DAT_181035390 * (uVar10 & 0xffffffff) << 0x20) +
            (ulonglong)uVar42 * (_DAT_1810353a0 & 0xffffffff) +
            ((SUB168(auVar50 & auVar38,0) >> 0x20) * (_DAT_1810353a0 & 0xffffffff) +
             (ulonglong)uVar42 * (ulonglong)_DAT_181035390 << 0x20) +
            (ulonglong)uVar30 * (ulonglong)_DAT_1810353b0 +
            ((ulonglong)_DAT_1810353c0 * (ulonglong)uVar30 +
             (SUB168(auVar50 | auVar38,0) >> 0x20) * (ulonglong)_DAT_1810353b0 << 0x20) + lVar14)) +
           0x50c75ca44b9b92e6;
  _DAT_1831d8fc8 = _DAT_1831d90a0 ^ uVar11 ^ uVar12;
  _DAT_1831d8f08 = (_DAT_1831d8f08 ^ uVar11) + uVar12 ^ 0xf0823b44581f3185;
  _DAT_1831d8f10 = (_DAT_1831d8f10 * 0x2e54c92805cb69e3 ^ _DAT_1831d8f08) + uVar11;
  _DAT_1831d9178 = _DAT_1831d8f10 ^ _DAT_1831d8f08;
  auVar19 = pshufb(auVar67 ^ _DAT_1810353d0,auVar19);
  uVar11 = auVar19._8_8_ + auVar19._0_8_;
  uVar10 = uVar11 + _DAT_1831d9060;
  if (auVar19._4_4_ < 0) {
    uVar10 = _DAT_1831d91f8 ^ uVar11;
  }
  _DAT_1831d8ff8 = uVar12;
  _DAT_1831d9010 = func_0x000188811c80(SUB161(auVar67 ^ _DAT_1810353d0,5) ^ uVar10);
  uVar11 = uVar32 & uVar16;
  uVar10 = uVar11 * 2;
  uVar61 = uVar32 + uVar16 + uVar11 * -2;
  _DAT_1831d9068 = (_DAT_1831d9068 ^ _DAT_1831d9010 ^ uVar32) + uVar61 ^ 0xf15a2de5b0a28f03;
  _DAT_1831d8f80 =
       (_DAT_1831d8f80 * 0x6a24014219a735bb ^ _DAT_1831d9068) + (_DAT_1831d9010 ^ uVar32);
  _DAT_1831d92f0 = _DAT_1831d8f80 ^ _DAT_1831d9068;
  uVar15 = (uVar41 ^ _DAT_1831d9268) + _DAT_1831d90e8 + uVar41;
  uVar73 = (uVar16 ^ _DAT_1831d90e8) + uVar16 + _DAT_1831d9268;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar41 ^ _DAT_1831d9268;
  uVar73 = (uVar73 * 0x2000 | uVar73 >> 0x33) ^ uVar16 ^ _DAT_1831d90e8;
  _DAT_1831d8f88 = uVar61;
  _DAT_1831d8f38 =
       func_0x000188811c80((uVar73 << 0x1d | uVar73 >> 0x23) - (uVar16 + _DAT_1831d9268) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1831d90e8 + uVar41));
  uVar16 = _DAT_1831d8f38 - (_DAT_1831d8f38 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = ((((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
           _DAT_1831d8f38) & 0xffffffffffff;
  _DAT_1831d8f48 = (_DAT_1831d8f48 ^ uVar16) + uVar11 ^ 0x6429eb02e20c06af;
  _DAT_1831d9100 = (_DAT_1831d9100 * 0x29b58a2d314bdc09 ^ _DAT_1831d8f48) + uVar16 ^ _DAT_1831d8f48;
  uVar15 = uVar61 ^ 0x84222325;
  uVar16 = ((_DAT_1831d8fd0 ^ uVar15) + (uVar15 & _DAT_1831d8fd0) * 2) * (uVar10 - _DAT_1831d8f88);
  uVar16 = (uVar16 | _DAT_1831d8fb8) + (uVar16 & _DAT_1831d8fb8);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_1831d9128 = uVar11;
  _DAT_1831d9240 = func_0x000188811c80((uVar15 ^ uVar10 | uVar16) + (uVar16 & (uVar15 ^ uVar10)));
  uVar42 = (uint)(uVar61 >> 0x20);
  auVar63._8_4_ = (int)uVar61;
  auVar63._0_8_ = uVar61;
  auVar63._12_4_ = uVar42;
  auVar39._8_4_ = (int)uVar11;
  auVar39._0_8_ = uVar11;
  auVar39._12_4_ = (int)(uVar11 >> 0x20);
  uVar11 = uVar11 * 2;
  auVar40._8_8_ = auVar39._8_8_ * 2;
  auVar40._0_8_ = uVar11;
  uVar10 = uVar10 ^ uVar61;
  uVar31 = (uint)(uVar11 >> 0x20);
  uVar15 = (uVar61 & 0xffffffff) * (uVar11 & 0xffffffff) +
           ((uVar61 & 0xffffffff) * (ulonglong)uVar31 + (ulonglong)uVar42 * (uVar11 & 0xffffffff) <<
           0x20);
  uVar30 = SUB164(auVar63 & auVar40,0);
  uVar68 = SUB168(auVar63 & auVar40,0);
  uVar17 = SUB164(auVar63 | auVar40,0);
  uVar73 = SUB168(auVar63 | auVar40,0);
  uVar16 = _DAT_1831d9240 & 0xffffffffffffff80;
  lVar14 = (uVar15 & 0xffffffff) * (ulonglong)_DAT_181035460 +
           ((ulonglong)_DAT_181035470 * (uVar15 & 0xffffffff) +
            (uVar15 >> 0x20) * (ulonglong)_DAT_181035460 << 0x20);
  _DAT_1831d8f68 =
       ((uVar10 & 0xffffffff) * (ulonglong)_DAT_181035440 +
        ((ulonglong)_DAT_181035450 * (uVar10 & 0xffffffff) +
         (uVar10 >> 0x20) * (ulonglong)_DAT_181035440 << 0x20) +
        (ulonglong)_DAT_181035420 * (ulonglong)uVar17 +
        ((ulonglong)_DAT_181035430 * (ulonglong)uVar17 +
         (uVar73 >> 0x20) * (ulonglong)_DAT_181035420 << 0x20) +
        (ulonglong)_DAT_181035400 * (ulonglong)uVar30 +
        ((ulonglong)_DAT_181035410 * (ulonglong)uVar30 +
         (uVar68 >> 0x20) * (ulonglong)_DAT_181035400 << 0x20) +
        (ulonglong)_DAT_1810353f0 * (uVar11 & 0xffffffff) +
        ((ulonglong)uVar31 * (ulonglong)_DAT_1810353f0 +
         (ulonglong)_DAT_1810353e0 * (uVar11 & 0xffffffff) << 0x20) +
        (uVar61 & 0xffffffff) * (ulonglong)_DAT_1810353f0 +
        ((ulonglong)uVar42 * (ulonglong)_DAT_1810353f0 +
         (uVar61 & 0xffffffff) * (ulonglong)_DAT_1810353e0 << 0x20) + lVar14) -
       ((ulonglong)uVar17 * (_DAT_1810354b0 & 0xffffffff) +
        ((uVar73 >> 0x20) * (_DAT_1810354b0 & 0xffffffff) +
         (ulonglong)_DAT_1810354a0 * (ulonglong)uVar17 << 0x20) +
        (ulonglong)uVar30 * (_DAT_1810354b0 & 0xffffffff) +
        ((uVar68 >> 0x20) * (_DAT_1810354b0 & 0xffffffff) +
         (ulonglong)uVar30 * (ulonglong)_DAT_1810354a0 << 0x20) +
        (uVar11 & 0xffffffff) * (ulonglong)_DAT_181035490 +
        ((ulonglong)uVar31 * (ulonglong)_DAT_181035490 +
         (ulonglong)_DAT_181035480 * (uVar11 & 0xffffffff) << 0x20) +
        (uVar61 & 0xffffffff) * (ulonglong)_DAT_181035490 +
        ((ulonglong)uVar42 * (ulonglong)_DAT_181035490 +
         (uVar61 & 0xffffffff) * (ulonglong)_DAT_181035480 << 0x20) + lVar14);
  _DAT_1831d9228 = _DAT_1831d9090 ^ uVar16 ^ _DAT_1831d8f68;
  _DAT_1831d8f00 = (_DAT_1831d8f00 ^ uVar16) + _DAT_1831d8f68 ^ 0x770e016c0ad5e3e5;
  _DAT_1831d90c8 = (_DAT_1831d90c8 * -0x411daf2e54d2ed85 ^ _DAT_1831d8f00) + uVar16;
  _DAT_1831d90b0 = _DAT_1831d90c8 ^ _DAT_1831d8f00;
  uVar11 = (uVar12 - _DAT_1831d8f68) + lVar13;
  uVar10 = ~_DAT_1831d8f28 * ((_DAT_1831d8f08 ^ uVar41) + (uVar41 & _DAT_1831d8f08) * 2);
  uVar10 = (uVar10 | _DAT_1831d8ff0) + (uVar10 & _DAT_1831d8ff0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d9060 = func_0x000188811c80((~uVar41 | uVar10) + (uVar10 & ~uVar41));
  _DAT_1831d9078 = ~uVar32;
  _DAT_1831d9070 =
       (_DAT_1831d9070 ^ _DAT_1831d9060 * 0x6ffa87a6e5f3aaad) + _DAT_1831d9078 ^ 0xd5a98286c433f72d;
  _DAT_1831d8ff8 =
       (_DAT_1831d8ff8 * -0x617eadb2215f506d ^ _DAT_1831d9070) + _DAT_1831d9060 * 0x6ffa87a6e5f3aaad
  ;
  _DAT_1831d8f38 = _DAT_1831d8ff8 ^ _DAT_1831d9070;
  uVar10 = _DAT_1810333d0 ^ 0x84222325 ^ _DAT_1831d90d8;
  lVar13 = (_DAT_1810333d0 ^ 0x84222325) + _DAT_1831d9218;
  uVar12 = uVar10 + lVar13;
  uVar32 = (_DAT_1810333d0 ^ _DAT_1831d9218) + _DAT_1810333d0 + _DAT_1831d90d8;
  uVar10 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar10;
  uVar12 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ _DAT_1810333d0 ^ _DAT_1831d9218;
  _DAT_1831d9070 =
       func_0x000188811c80((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1810333d0 + _DAT_1831d90d8) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - lVar13);
  _DAT_1831d91a8 = _DAT_1831d8fe8 ^ _DAT_1831d9150 ^ 0xa4235b147a7c8b6a;
  _DAT_1831d8fe8 = (_DAT_1831d8fe8 * 0x2347500c16a9a081 ^ _DAT_1831d91a8) + _DAT_1831d9150;
  _DAT_1831d91a8 = _DAT_1831d8fe8 ^ _DAT_1831d91a8;
  _DAT_1831d8f48 = 0;
  uVar10 = uVar11 ^ 0x84222325 ^ _DAT_1831d9158;
  lVar13 = (uVar11 ^ 0x84222325) + _DAT_1831d8fa0;
  uVar12 = uVar10 + lVar13;
  uVar10 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar10;
  uVar12 = ((_DAT_1831d8fa0 + _DAT_1831d9158) * 0x2000 | _DAT_1831d8fa0 + _DAT_1831d9158 >> 0x33) ^
           _DAT_1831d8fa0;
  _DAT_1831d8f30 =
       func_0x000188811c80((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_1831d9158 ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - lVar13);
  uVar30 = (uint)(uVar11 >> 0x20);
  auVar51._8_4_ = (int)uVar11;
  auVar51._0_8_ = uVar11;
  auVar51._12_4_ = uVar30;
  auVar29._8_4_ = 0xffffffff;
  auVar29._0_8_ = 0xffffffffffffffff;
  auVar29._12_4_ = 0xffffffff;
  uVar17 = SUB164(auVar29 ^ auVar51,0);
  uVar10 = SUB168(auVar29 ^ auVar51,0);
  uVar11 = (((ulonglong)_DAT_181035520 * (ulonglong)uVar17 +
             ((uVar10 >> 0x20) * (ulonglong)_DAT_181035520 +
              (ulonglong)_DAT_1810354c0 * (ulonglong)uVar17 << 0x20) +
             (ulonglong)_DAT_181035500 * (uVar11 & 0xffffffff) +
             ((ulonglong)_DAT_181035510 * (uVar11 & 0xffffffff) +
              (ulonglong)uVar30 * (ulonglong)_DAT_181035500 << 0x20) +
            (ulonglong)_DAT_1810354e0 * (uVar11 & 0xffffffff) +
            ((ulonglong)_DAT_1810354f0 * (uVar11 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_1810354e0 << 0x20) +
            (ulonglong)_DAT_1810354d0 * (uVar11 & 0xffffffff) +
            ((ulonglong)uVar30 * (ulonglong)_DAT_1810354d0 +
             (uVar11 & 0xffffffff) * (ulonglong)_DAT_1810354c0 << 0x20)) -
           ((ulonglong)uVar17 * (_DAT_181035570 & 0xffffffff) +
            ((ulonglong)_DAT_181035580 * (ulonglong)uVar17 +
             (uVar10 >> 0x20) * (_DAT_181035570 & 0xffffffff) << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_181035550 +
           ((ulonglong)_DAT_181035560 * (uVar11 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_181035550 << 0x20) +
           (ulonglong)_DAT_181035530 * (uVar11 & 0xffffffff) +
           ((ulonglong)_DAT_181035540 * (uVar11 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_181035530 << 0x20))) + _DAT_181035590;
  _DAT_1831d9148 = _DAT_1831d9058 ^ _DAT_1831d8f30 ^ uVar11;
  _DAT_1831d8fa0 = (_DAT_1831d8fa0 ^ _DAT_1831d8f30) + uVar11 ^ 0xeb2ea9940f30a64b;
  _DAT_1831d90c8 = (_DAT_1831d90c8 * -0x395fe565f1e317e9 ^ _DAT_1831d8fa0) + _DAT_1831d8f30;
  _DAT_1831d8fa0 = _DAT_1831d90c8 ^ _DAT_1831d8fa0;
  uVar10 = ((_DAT_1831d90b0 ^ uStack0000000000000088) +
           (uStack0000000000000088 & _DAT_1831d90b0) * 2) * (uVar11 - _DAT_1831d9130);
  uVar10 = (uVar10 | _DAT_1831d8f78) + (uVar10 & _DAT_1831d8f78);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831d8f20 = uVar11;
  _DAT_1831d91c0 =
       func_0x000188811c80((uStack0000000000000088 ^ uVar11 | uVar10) +
                           (uVar10 & (uStack0000000000000088 ^ uVar11)));
  uVar10 = in_stack_00000098 ^ uVar11 ^ _DAT_1831d91c0;
  _DAT_1831d9058 = in_stack_00000098 + uVar11 + (in_stack_00000098 & uVar11) * -2;
  _DAT_1831d9130 = (_DAT_1831d9130 ^ uVar10) + _DAT_1831d9058 ^ 0xfc3fade62d598f42;
  _DAT_1831d9280 = (_DAT_1831d9280 * 0x64944d606296d6b9 ^ _DAT_1831d9130) + uVar10;
  _DAT_1831d9100 = _DAT_1831d9280 ^ _DAT_1831d9130;
  FUN_190dd72e0(unaff_RSI,*_DAT_18301ee50 + 0x226,0xd);
  cVar9 = (**(code **)(*unaff_RSI + 0x720))(unaff_RSI);
  switch(cVar9 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 885f932 (image 18885f932) =====

void FUN_18885f932(void)

{
  return;
}



// ===== continuation @ rva 88563cf (image 1888563cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888563cf(void)

{
  FUN_190ddce00();
  (*_DAT_181041d88)();
  return;
}



// ===== continuation @ rva 8862633 (image 188862633) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188862633(void)

{
  (*_DAT_181044138)();
  return;
}



// ===== continuation @ rva 885ff7e (image 18885ff7e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18885ff7e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181043648)();
  return;
}



// ===== continuation @ rva 8863613 (image 188863613) =====

void FUN_188863613(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8862006 (image 188862006) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188862006(void)

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



// ===== continuation @ rva 8862d8f (image 188862d8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188862d8f(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x78))(in_stack_00000050);
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1810427c8)();
  return;
}



// ===== continuation @ rva 8861600 (image 188861600) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188861600(void)

{
  undefined8 in_stack_00000050;
  
  FUN_190ddfc90(in_stack_00000050,&stack0x00000068,*_DAT_18301ee50 + 0x656e,*_DAT_18301ee50 + 0x657c
                ,0x58e);
  (*_DAT_181042808)();
  return;
}



// ===== continuation @ rva 88620ae (image 1888620ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1888620ae(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x78))(in_stack_00000050);
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181043f48)();
  return;
}



// ===== continuation @ rva 8860aaf (image 188860aaf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188860aaf(void)

{
  undefined8 in_stack_00000050;
  
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0x2b3,0x10);
  (*_DAT_181041ff8)();
  return;
}



// ===== continuation @ rva 885dda2 (image 18885dda2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18885dda2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_181044128)();
  return;
}



// ===== continuation @ rva 885f597 (image 18885f597) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18885f597(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1810427a8)();
  return;
}



// ===== continuation @ rva 885e71f (image 18885e71f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18885e71f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181044118)();
  return;
}



