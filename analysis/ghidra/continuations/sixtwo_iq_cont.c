// ===== continuation @ rva 9376d89 (image 189376d89) =====

void FUN_189376d89(void)

{
  return;
}



// ===== continuation @ rva 937142f (image 18937142f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937142f(void)

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



// ===== continuation @ rva 93763b4 (image 1893763b4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893763b4(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *unaff_RSI;
  uint unaff_R14D;
  longlong lVar3;
  longlong lVar4;
  uint unaff_XMM8_Da;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = (~param_2 + 2) * (param_3 + param_4);
  uVar2 = (uVar2 | param_1) + (uVar2 & param_1);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320f6c0 =
       func_0x000189376f70((in_RAX ^ 1 | uVar2) + (ulonglong)((uint)(in_RAX ^ 1) & (uint)uVar2));
  uVar5 = unaff_R14D & _DAT_18001a990;
  uVar6 = unaff_R14D | _DAT_18001a990;
  uVar7 = unaff_R14D ^ _DAT_18001a990;
  lVar4 = ((ulonglong)unaff_R14D * (ulonglong)_DAT_1812f8bd0 << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_1812f8bc0;
  lVar3 = ((ulonglong)uVar7 * (ulonglong)_DAT_1812f8c50 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_1812f8c40 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_1812f8c30 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_1812f8c20 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_1812f8c10 << 0x20 |
          (ulonglong)uVar5 * (ulonglong)_DAT_1812f8c00) +
          ((ulonglong)unaff_R14D * (ulonglong)_DAT_1812f8bf0 << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_1812f8be0 + lVar4;
  uVar2 = _DAT_18320f6c0 << 0x26 | _DAT_18320f6c0 >> 0x1a & 0xffffffffffffff80;
  _DAT_18320f6b0 =
       ((((ulonglong)(unaff_R14D ^ unaff_XMM8_Da) * (ulonglong)_DAT_1812f8ba0 + _DAT_1812f8bb0 <<
         0x20) + (ulonglong)(unaff_R14D ^ unaff_XMM8_Da) * (ulonglong)_DAT_1812f8b90 + lVar4 +
        ((ulonglong)uVar7 * (ulonglong)_DAT_1812f8b80 << 0x20) +
        (ulonglong)uVar7 * (ulonglong)_DAT_1812f8b70 +
        ((ulonglong)uVar6 * (ulonglong)_DAT_1812f8b60 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_1812f8b50 +
        ((ulonglong)uVar5 * (ulonglong)_DAT_1812f8b40 << 0x20 |
        (ulonglong)uVar5 * (ulonglong)_DAT_1812f8b30) +
        ((ulonglong)unaff_R14D * (ulonglong)_DAT_1812f8b20 << 0x20) +
        (ulonglong)unaff_R14D * (ulonglong)_DAT_1812f8b10) - lVar3) + 0x4e0865d5607762c9;
  _DAT_18320f518 = _DAT_18320f508 ^ uVar2 ^ _DAT_18320f6b0;
  _DAT_18320f528 = (_DAT_18320f528 ^ uVar2) + _DAT_18320f6b0 ^ 0x3c7b9dcd95031ade;
  _DAT_18320f5a0 = (_DAT_18320f5a0 * -0x13573b0b6dac2d97 ^ _DAT_18320f528) + uVar2;
  _DAT_18320f6f0 = _DAT_18320f5a0 ^ _DAT_18320f528;
  _DAT_18320f6b0 = _DAT_18320f6b0 & 0xffffffff;
  FUN_190dd72e0(lVar3,*_DAT_18301ee50 + 0x2e9,0x12);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9376df5 (image 189376df5) =====

void FUN_189376df5(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 93766db (image 1893766db) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893766db(void)

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



// ===== continuation @ rva 93715b1 (image 1893715b1) =====

void FUN_1893715b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 93761bc (image 1893761bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893761bc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000148;
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
  undefined2 uStack00000000000001d0;
  
  uStack0000000000000148 = 0x9400de00470048;
  rdtsc();
  uStack0000000000000150 = 0xea0034004a004d;
  rdtsc();
  uStack0000000000000158 = 0x7f00b200d800a8;
  rdtsc();
  uStack0000000000000160 = 0x770052000800a8;
  rdtsc();
  uStack0000000000000168 = 0x8200dc00770085;
  rdtsc();
  uStack0000000000000170 = 0x39005400e3004d;
  rdtsc();
  uStack0000000000000178 = 0xff008800fc00f6;
  rdtsc();
  uStack0000000000000180 = 0xbb0077007e0028;
  rdtsc();
  uStack0000000000000188 = 0x2e00e500c40071;
  rdtsc();
  uStack0000000000000190 = 0x6f002800c5008b;
  rdtsc();
  uStack0000000000000198 = 0xac00e6001c0007;
  rdtsc();
  uStack00000000000001a0 = 0xd20004009b00e4;
  rdtsc();
  uStack00000000000001a8 = 0xcf005000c800f9;
  rdtsc();
  uStack00000000000001b0 = 0xb00e800c80014;
  rdtsc();
  uStack00000000000001b8 = 0x9a004100fc0031;
  rdtsc();
  uStack00000000000001c0 = 0x7100e100f300f4;
  rdtsc();
  uStack00000000000001c8 = 0xab000700cb00ce;
  rdtsc();
  uStack00000000000001d0 = 0xf6;
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



// ===== continuation @ rva 93737de (image 1893737de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893737de(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000060;
  undefined8 uStack0000000000000068;
  
  uStack0000000000000068 = in_stack_00000060;
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



// ===== continuation @ rva 9376731 (image 189376731) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189376731(void)

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



// ===== continuation @ rva 92d9612 (image 1892d9612) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d9612(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d2278)();
  return;
}



// ===== continuation @ rva 92d9594 (image 1892d9594) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d9594(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812d1b18)();
  return;
}



// ===== continuation @ rva 92db85e (image 1892db85e) =====

void FUN_1892db85e(void)

{
  return;
}



// ===== continuation @ rva 92dad8c (image 1892dad8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dad8c(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d1ff8)();
  return;
}



// ===== continuation @ rva 92dafda (image 1892dafda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dafda(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_1812d2078)();
  return;
}



// ===== continuation @ rva 92db654 (image 1892db654) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892db654(void)

{
  FUN_190de3220();
  (*_DAT_1812d1938)();
  return;
}



// ===== continuation @ rva 92da1e1 (image 1892da1e1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892da1e1(void)

{
  FUN_190ddfc90();
  (*_DAT_1812d1d38)();
  return;
}



// ===== continuation @ rva 92db856 (image 1892db856) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892db856(void)

{
  (*_DAT_1812d2188)();
  return;
}



// ===== continuation @ rva 92da4d0 (image 1892da4d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892da4d0(void)

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



// ===== continuation @ rva 92db81c (image 1892db81c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892db81c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1812d1888)();
  return;
}



// ===== continuation @ rva 92dac0b (image 1892dac0b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892dac0b(void)

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



// ===== continuation @ rva 92db54e (image 1892db54e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892db54e(void)

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



// ===== continuation @ rva 92dfae6 (image 1892dfae6) =====

void FUN_1892dfae6(void)

{
  return;
}



// ===== continuation @ rva 92dba24 (image 1892dba24) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dba24(void)

{
  FUN_190ddce00();
  (*_DAT_1812d2818)();
  return;
}



// ===== continuation @ rva 92dfb52 (image 1892dfb52) =====

void FUN_1892dfb52(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92df232 (image 1892df232) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892df232(void)

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



// ===== continuation @ rva 92dec8c (image 1892dec8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dec8c(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d26a8)();
  return;
}



// ===== continuation @ rva 92dec0f (image 1892dec0f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dec0f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812d2608)();
  return;
}



// ===== continuation @ rva 92ded8b (image 1892ded8b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892ded8b(undefined8 param_1,longlong param_2)

{
  switch(param_2 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 92def1c (image 1892def1c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892def1c(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d24d8)();
  return;
}



// ===== continuation @ rva 92debf9 (image 1892debf9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892debf9(void)

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



// ===== continuation @ rva 92de9ab (image 1892de9ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892de9ab(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d2478)();
  return;
}



// ===== continuation @ rva 92de92e (image 1892de92e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892de92e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812d27a8)();
  return;
}



// ===== continuation @ rva 92df7d7 (image 1892df7d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892df7d7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812d2498)();
  return;
}



// ===== continuation @ rva 92df4e3 (image 1892df4e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892df4e3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812d2628)();
  return;
}



// ===== continuation @ rva 92dfa1b (image 1892dfa1b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dfa1b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1812d2b78)();
  return;
}



// ===== continuation @ rva 9303f83 (image 189303f83) =====

void FUN_189303f83(void)

{
  return;
}



// ===== continuation @ rva 92fe397 (image 1892fe397) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fe397(void)

{
  FUN_190ddce00();
  (*_DAT_1812dd128)();
  return;
}



// ===== continuation @ rva 930440f (image 18930440f) =====

void FUN_18930440f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 930240a (image 18930240a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930240a(void)

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



// ===== continuation @ rva 9301b91 (image 189301b91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189301b91(void)

{
  FUN_190ddfc90();
  (*_DAT_1812dd168)();
  return;
}



// ===== continuation @ rva 93032c5 (image 1893032c5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893032c5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812dccf8)();
  return;
}



// ===== continuation @ rva 93021a4 (image 1893021a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893021a4(void)

{
  FUN_190dd72e0();
  (*_DAT_1812dd9d8)();
  return;
}



// ===== continuation @ rva 93043eb (image 1893043eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893043eb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812ddb28)();
  return;
}



// ===== continuation @ rva 93035c1 (image 1893035c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893035c1(void)

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



// ===== continuation @ rva 9302482 (image 189302482) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189302482(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_1812dd4f8)();
  return;
}



// ===== continuation @ rva 9301be8 (image 189301be8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189301be8(void)

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



// ===== continuation @ rva 93032ba (image 1893032ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893032ba(void)

{
  (*_DAT_1812ddaf8)();
  return;
}



// ===== continuation @ rva 931ad71 (image 18931ad71) =====

void FUN_18931ad71(void)

{
  return;
}



// ===== continuation @ rva 9318163 (image 189318163) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189318163(void)

{
  FUN_190ddce00();
  (*_DAT_1812e5498)();
  return;
}



// ===== continuation @ rva 931e381 (image 18931e381) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18931e381(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(*unaff_RSI + 0xa8))();
  FUN_190dcd3d0(0xab3,uVar1);
  (*_DAT_1812e5468)();
  return;
}



// ===== continuation @ rva 931fe51 (image 18931fe51) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18931fe51(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1812e5358)();
  return;
}



// ===== continuation @ rva 931f508 (image 18931f508) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18931f508(void)

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



// ===== continuation @ rva 931ea58 (image 18931ea58) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18931ea58(void)

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



// ===== continuation @ rva 931f942 (image 18931f942) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18931f942(void)

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



// ===== continuation @ rva 931e614 (image 18931e614) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18931e614(void)

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



// ===== continuation @ rva 931fd95 (image 18931fd95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18931fd95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1812e53f8)();
  return;
}



// ===== continuation @ rva 931e319 (image 18931e319) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18931e319(void)

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



// ===== continuation @ rva 933c50a (image 18933c50a) =====

void FUN_18933c50a(void)

{
  return;
}



// ===== continuation @ rva 933c263 (image 18933c263) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c263(void)

{
  FUN_190ddce00();
  (*_DAT_1812eee78)();
  return;
}



// ===== continuation @ rva 933c36d (image 18933c36d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c36d(void)

{
  longlong *unaff_RSI;
  
  FUN_18436c0d0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812eee48)();
  return;
}



// ===== continuation @ rva 933c446 (image 18933c446) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c446(void)

{
  FUN_190dd72e0();
  (*_DAT_1812eee68)();
  return;
}



// ===== continuation @ rva 933c40a (image 18933c40a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c40a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812eedd8)();
  return;
}



// ===== continuation @ rva 933c515 (image 18933c515) =====

void FUN_18933c515(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 933c2f5 (image 18933c2f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c2f5(void)

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



// ===== continuation @ rva 933c2db (image 18933c2db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c2db(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_1812eedb8)();
  return;
}



// ===== continuation @ rva 933c425 (image 18933c425) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c425(void)

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



// ===== continuation @ rva 933c3b3 (image 18933c3b3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c3b3(void)

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



// ===== continuation @ rva 937a881 (image 18937a881) =====

void FUN_18937a881(void)

{
  return;
}



// ===== continuation @ rva 93770c7 (image 1893770c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893770c7(void)

{
  FUN_190ddce00();
  (*_DAT_1812f8f98)();
  return;
}



// ===== continuation @ rva 937a868 (image 18937a868) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18937a868(void)

{
  longlong in_stack_00000068;
  
  switch(in_stack_00000068 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 937ad04 (image 18937ad04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937ad04(void)

{
  (*_DAT_1812f9538)();
  return;
}



// ===== continuation @ rva 937b56b (image 18937b56b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18937b56b(void)

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



// ===== continuation @ rva 937b1e5 (image 18937b1e5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937b1e5(void)

{
  (*_DAT_1812f9298)();
  return;
}



// ===== continuation @ rva 937b058 (image 18937b058) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937b058(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812f8d48)();
  return;
}



// ===== continuation @ rva 937aefc (image 18937aefc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937aefc(void)

{
  FUN_190dd72e0();
  (*_DAT_1812f8df8)();
  return;
}



// ===== continuation @ rva 937b65b (image 18937b65b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937b65b(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812f9148)();
  return;
}



// ===== continuation @ rva 937ab66 (image 18937ab66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937ab66(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_1812f9258)();
  return;
}



// ===== continuation @ rva 937bced (image 18937bced) =====

void FUN_18937bced(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 937719b (image 18937719b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937719b(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *unaff_RSI;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong unaff_R14;
  ulonglong uVar18;
  uint uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar36;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ulonglong uVar37;
  uint uVar42;
  ulonglong uVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ulonglong uVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  uint uVar61;
  ulonglong uVar62;
  undefined1 auVar63 [16];
  ulonglong uVar64;
  ulonglong in_stack_00000040;
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  undefined4 uStack0000000000000090;
  uint uStack0000000000000094;
  ulonglong uStack00000000000000b0;
  ulonglong uStack00000000000000b8;
  
  uVar17 = _DAT_1812f8c68;
  uVar12 = _DAT_1812f8c60;
  auVar23 = _DAT_1800170c0;
  uStack00000000000000b8 = in_stack_00000040;
  uStack00000000000000b0 = _DAT_1812f8c60 ^ 0x84222325;
  auVar21._8_8_ = _UNK_1812f9578;
  auVar21._0_8_ = uStack00000000000000b0;
  auVar20 = pshufb(auVar21 ^ _DAT_1812f9580,_DAT_1800170c0);
  uVar14 = auVar20._8_8_ + auVar20._0_8_;
  uVar13 = uVar14 + _DAT_18320f930;
  if (auVar20._4_4_ < 0) {
    uVar13 = _DAT_18320fae0 ^ uVar14;
  }
  _DAT_18320fd20 = func_0x00018937bd50(SUB161(auVar21 ^ _DAT_1812f9580,5) ^ uVar13);
  uVar14 = uVar12 | 0x5257eeec0eaeb92;
  _DAT_18320f748 = (_DAT_18320f748 ^ _DAT_18320fd20) + uVar14 ^ 0x48723e6fa3fee6f8;
  _DAT_18320fb90 = (_DAT_18320fb90 * -0x50cf270611835acd ^ _DAT_18320f748) + _DAT_18320fd20;
  _DAT_18320fb20 = _DAT_18320fb90 ^ _DAT_18320f748;
  auVar20._8_8_ = _UNK_1812f9598;
  auVar20._0_8_ = uVar17 ^ 0x84222325;
  auVar21 = pshufb(auVar20 ^ _DAT_1812f95a0,auVar23);
  uVar15 = auVar21._8_8_ + auVar21._0_8_;
  uVar13 = uVar15 + _DAT_18320fc38;
  if (auVar21._4_4_ < 0) {
    uVar13 = _DAT_18320fd98 ^ uVar15;
  }
  _DAT_18320f818 = uVar14;
  _DAT_18320f7b8 = func_0x00018937bd50(SUB161(auVar20 ^ _DAT_1812f95a0,5) ^ uVar13);
  uVar13 = (uVar17 | 0xcf7c82f06dc1265a) ^ _DAT_18320f7b8;
  uVar13 = uVar13 << 0x15 | uVar13 >> 0x2b;
  uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar15 = ~((uint)bVar1 + (uint)bVar1 ^ uVar13) & uVar17;
  uVar13 = uVar17 + 0xcf7c82f06dc1265a + (uVar17 & 0xcf7c82f06dc1265a) * -2;
  _DAT_18320f8a0 = (_DAT_18320f8a0 ^ uVar15) + uVar13 ^ 0xd4185a1079a5921e;
  _DAT_18320fdc8 = (_DAT_18320fdc8 * -0x6838c8e84f32ab1d ^ _DAT_18320f8a0) + uVar15;
  _DAT_18320fc88 = _DAT_18320fdc8 ^ _DAT_18320f8a0;
  lVar11 = uVar12 * uVar12;
  uVar18 = lVar11 * -0x5f97ac7bf6d21a6a;
  auVar22._8_8_ = uVar18;
  auVar22._0_8_ = _DAT_18001b640;
  auVar23 = pshufb(auVar22 ^ _DAT_1812f95b0,auVar23);
  uVar15 = auVar23._8_8_ + auVar23._0_8_;
  uVar12 = uVar15 + _DAT_18320fec0;
  if (auVar23._4_4_ < 0) {
    uVar12 = _DAT_18320fe60 ^ uVar15;
  }
  _DAT_18320fbc0 = uVar13;
  uVar12 = func_0x00018937bd50(SUB161(auVar22 ^ _DAT_1812f95b0,5) ^ uVar12);
  uVar15 = lVar11 * 0x5f97ac7bf6d21a6a;
  _DAT_18320fc70 = (_DAT_18320fc70 ^ uVar12) + lVar11 * 0x5f97ac7bf6d21a6a ^ 0x6554bbc11ea7b8cc;
  _DAT_18320f720 = (_DAT_18320f720 * 0x49628050f01fab05 ^ _DAT_18320fc70) + uVar12;
  _DAT_18320fed8 = _DAT_18320f720 ^ _DAT_18320fc70;
  uVar12 = (unaff_R14 ^ _DAT_18320fc28) + unaff_R14 + _DAT_18320fe70;
  uVar43 = (uVar18 ^ _DAT_18320fe70) + _DAT_18320fc28 + uVar18;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ unaff_R14 ^ _DAT_18320fc28;
  uVar43 = (uVar43 * 0x2000 | uVar43 >> 0x33) ^ uVar18 ^ _DAT_18320fe70;
  _DAT_18320f800 = uVar15;
  _DAT_18320f790 =
       func_0x00018937bd50((uVar43 << 0x1d | uVar43 >> 0x23) - (_DAT_18320fc28 + uVar18) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (unaff_R14 + _DAT_18320fe70));
  uVar12 = _DAT_18320f790 ^ uVar18;
  uVar42 = (uint)(uVar18 >> 0x20);
  auVar56._8_4_ = (int)uVar18;
  auVar56._0_8_ = uVar18;
  auVar56._12_4_ = uVar42;
  uVar51 = SUB164(auVar56 & _DAT_1812f95c0,0);
  uVar50 = SUB168(auVar56 & _DAT_1812f95c0,0);
  uVar36 = SUB164(auVar56 | _DAT_1812f95c0,0);
  uVar19 = SUB164(_DAT_1812f95c0 ^ auVar56,0);
  uVar43 = SUB168(_DAT_1812f95c0 ^ auVar56,0);
  uVar43 = (ulonglong)_DAT_1812f9630 * (ulonglong)uVar19 +
           ((ulonglong)_DAT_1812f9640 * (ulonglong)uVar19 +
            (uVar43 >> 0x20) * (ulonglong)_DAT_1812f9630 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_1812f9610 +
           ((ulonglong)_DAT_1812f9620 * (ulonglong)uVar36 +
            (SUB168(auVar56 | _DAT_1812f95c0,0) >> 0x20) * (ulonglong)_DAT_1812f9610 << 0x20) +
           (ulonglong)_DAT_1812f95f0 * (ulonglong)uVar51 +
           ((ulonglong)_DAT_1812f9600 * (ulonglong)uVar51 +
            (uVar50 >> 0x20) * (ulonglong)_DAT_1812f95f0 << 0x20) +
           (ulonglong)_DAT_1812f95d0 * (uVar18 & 0xffffffff) +
           ((ulonglong)_DAT_1812f95e0 * (uVar18 & 0xffffffff) +
            (ulonglong)uVar42 * (ulonglong)_DAT_1812f95d0 << 0x20) +
           (-((ulonglong)uVar19 * (_DAT_1812f96b0 & 0xffffffff) +
             ((ulonglong)_DAT_1812f96c0 * (ulonglong)uVar19 +
              (uVar43 >> 0x20) * (_DAT_1812f96b0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar51 * (_DAT_1812f9690 & 0xffffffff) +
            ((ulonglong)_DAT_1812f96a0 * (ulonglong)uVar51 +
             (uVar50 >> 0x20) * (_DAT_1812f9690 & 0xffffffff) << 0x20) +
           (uVar18 & 0xffffffff) * (ulonglong)_DAT_1812f9670 +
           ((ulonglong)_DAT_1812f9680 * (uVar18 & 0xffffffff) +
            (ulonglong)uVar42 * (ulonglong)_DAT_1812f9670 << 0x20))) + _DAT_1812f96d0;
  _DAT_18320f978 = _DAT_18320fce8 ^ uVar12 ^ uVar43;
  _DAT_18320fc20 = (_DAT_18320fc20 ^ uVar12) + uVar43 ^ 0x3ae64db8bf3fde6a;
  _DAT_18320fd88 = (_DAT_18320fd88 * -0x706bec345149e987 ^ _DAT_18320fc20) + uVar12;
  _DAT_18320fc38 = _DAT_18320fd88 ^ _DAT_18320fc20;
  auVar23._8_8_ = uVar15;
  auVar23._0_8_ = uVar43 ^ 0x84222325;
  auVar21 = pshufb(auVar23 ^ _DAT_1812f96e0,_DAT_1800170c0);
  uVar18 = auVar21._8_8_ + auVar21._0_8_;
  uVar12 = uVar18 + _DAT_18320fb10;
  if (auVar21._4_4_ < 0) {
    uVar12 = _DAT_18320fbb8 ^ uVar18;
  }
  _DAT_18320fc40 = uVar43;
  _DAT_18320fb88 = func_0x00018937bd50(SUB161(auVar23 ^ _DAT_1812f96e0,5) ^ uVar12);
  uVar54 = (uint)(uVar43 >> 0x20);
  auVar55._8_4_ = (int)uVar43;
  auVar55._0_8_ = uVar43;
  auVar55._12_4_ = uVar54;
  uVar51 = (uint)(uVar15 >> 0x20);
  auVar59._8_4_ = (int)uVar15;
  auVar59._0_8_ = uVar15;
  auVar59._12_4_ = uVar51;
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar58 = SUB164(auVar59 ^ auVar2,0);
  uVar18 = SUB168(auVar59 ^ auVar2,0);
  uVar12 = _DAT_18320fb88 - (_DAT_18320fb88 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
           _DAT_18320fb88;
  uVar42 = SUB164(auVar55 & auVar59,0);
  uVar36 = SUB164(auVar55 | auVar59,0);
  uVar19 = SUB164(auVar55 ^ auVar59,0);
  uVar43 = (((_DAT_1812f9710 & 0xffffffff) * (ulonglong)uVar58 +
             ((uVar18 >> 0x20) * (_DAT_1812f9710 & 0xffffffff) +
              (_DAT_1812f96f0 & 0xffffffff) * (ulonglong)uVar58 << 0x20) +
             (_DAT_1812f9700 & 0xffffffff) * (uVar15 & 0xffffffff) +
             ((ulonglong)uVar51 * (_DAT_1812f9700 & 0xffffffff) +
              (uVar15 & 0xffffffff) * (_DAT_1812f96f0 & 0xffffffff) << 0x20) + uVar43) -
           ((ulonglong)uVar58 * (ulonglong)_DAT_1812f9780 +
            ((_DAT_1812f97f0 & 0xffffffff) * (ulonglong)uVar58 +
             (uVar18 >> 0x20) * (ulonglong)_DAT_1812f9780 << 0x20) +
           (ulonglong)uVar19 * (ulonglong)_DAT_1812f97d0 +
           ((_DAT_1812f97e0 & 0xffffffff) * (ulonglong)uVar19 +
            (SUB168(auVar55 ^ auVar59,0) >> 0x20) * (ulonglong)_DAT_1812f97d0 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_1812f97b0 +
           ((_DAT_1812f97c0 & 0xffffffff) * (ulonglong)uVar36 +
            (SUB168(auVar55 | auVar59,0) >> 0x20) * (ulonglong)_DAT_1812f97b0 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_1812f9790 +
           ((_DAT_1812f97a0 & 0xffffffff) * (ulonglong)uVar42 +
            (SUB168(auVar55 & auVar59,0) >> 0x20) * (ulonglong)_DAT_1812f9790 << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_1812f9760 +
           ((_DAT_1812f9770 & 0xffffffff) * (uVar15 & 0xffffffff) +
            (ulonglong)uVar51 * (ulonglong)_DAT_1812f9760 << 0x20) +
           (uVar43 & 0xffffffff) * (ulonglong)_DAT_1812f9740 +
           ((_DAT_1812f9750 & 0xffffffff) * (uVar43 & 0xffffffff) +
            (ulonglong)uVar54 * (ulonglong)_DAT_1812f9740 << 0x20))) + _DAT_1812f9800;
  _DAT_18320fb68 = _DAT_18320fb50 ^ uVar12 ^ uVar43;
  _DAT_18320fd48 = (_DAT_18320fcc0 ^ uVar12) + uVar43 ^ 0x8e00990baa06ecf6;
  _DAT_18320fc30 = (_DAT_18320fc30 * -0x1e04ae57b06ddf3f ^ _DAT_18320fd48) + uVar12;
  _DAT_18320fd48 = _DAT_18320fc30 ^ _DAT_18320fd48;
  uVar15 = uVar17 * uVar17 * 0xd584c4b81e0f5b;
  auVar24._8_8_ = uVar15;
  auVar24._0_8_ = uVar43 ^ 0x84222325;
  auVar23 = pshufb(auVar24 ^ _DAT_1812f9810,_DAT_1800170c0);
  uVar18 = auVar23._8_8_ + auVar23._0_8_;
  uVar12 = uVar18 + _DAT_18320f7a8;
  if (auVar23._4_4_ < 0) {
    uVar12 = _DAT_18320fad0 ^ uVar18;
  }
  _DAT_18320fcc0 = uVar43;
  _DAT_18320fc70 = func_0x00018937bd50(SUB161(auVar24 ^ _DAT_1812f9810,5) ^ uVar12);
  uVar12 = _DAT_18320fc70 ^ uVar15;
  uVar54 = (uint)(uVar43 >> 0x20);
  auVar38._8_4_ = (int)uVar43;
  auVar38._0_8_ = uVar43;
  auVar38._12_4_ = uVar54;
  uVar51 = (uint)(uVar15 >> 0x20);
  auVar25._8_4_ = (int)uVar15;
  auVar25._0_8_ = uVar15;
  auVar25._12_4_ = uVar51;
  uVar36 = SUB164(auVar38 & auVar25,0);
  uVar62 = SUB168(auVar38 & auVar25,0);
  uVar42 = SUB164(auVar38 | auVar25,0);
  uVar50 = SUB168(auVar38 | auVar25,0);
  uVar37 = uVar43 ^ _DAT_18001a710;
  uVar19 = SUB164(auVar38 ^ auVar25,0);
  uVar64 = uVar15 ^ _DAT_18001a710;
  lVar11 = uVar17 * _DAT_1812f8c60;
  uVar18 = lVar11 * -0x2efd0ff35ba908ee;
  auVar26._8_8_ = uVar18;
  auVar26._0_8_ = _DAT_18001b640;
  auVar23 = pshufb(auVar26 ^ _DAT_1812f9980,_DAT_1800170c0);
  _DAT_18320f718 =
       (((uVar37 & 0xffffffff) * (ulonglong)_DAT_1812f9860 +
         ((ulonglong)_DAT_1812f9890 * (uVar37 & 0xffffffff) +
          (uVar37 >> 0x20) * (ulonglong)_DAT_1812f9860 << 0x20) +
        (ulonglong)_DAT_1812f9880 * (ulonglong)uVar42 +
        ((uVar50 >> 0x20) * (ulonglong)_DAT_1812f9880 +
         (ulonglong)_DAT_1812f9870 * (ulonglong)uVar42 << 0x20) +
        (ulonglong)uVar36 * (ulonglong)_DAT_1812f9880 +
        ((uVar62 >> 0x20) * (ulonglong)_DAT_1812f9880 +
         (ulonglong)uVar36 * (ulonglong)_DAT_1812f9870 << 0x20) +
        (ulonglong)_DAT_1812f9840 * (uVar15 & 0xffffffff) +
        ((ulonglong)_DAT_1812f9850 * (uVar15 & 0xffffffff) +
         (ulonglong)uVar51 * (ulonglong)_DAT_1812f9840 << 0x20) +
        (ulonglong)_DAT_1812f9820 * (uVar43 & 0xffffffff) +
        ((ulonglong)_DAT_1812f9830 * (uVar43 & 0xffffffff) +
         (ulonglong)uVar54 * (ulonglong)_DAT_1812f9820 << 0x20)) -
       ((uVar64 & 0xffffffff) * (_DAT_1812f9900 & 0xffffffff) +
        ((ulonglong)_DAT_1812f9970 * (uVar64 & 0xffffffff) +
         (uVar64 >> 0x20) * (_DAT_1812f9900 & 0xffffffff) << 0x20) +
       (ulonglong)uVar19 * (ulonglong)_DAT_1812f9950 +
       ((ulonglong)_DAT_1812f9960 * (ulonglong)uVar19 +
        (SUB168(auVar38 ^ auVar25,0) >> 0x20) * (ulonglong)_DAT_1812f9950 << 0x20) +
       (ulonglong)uVar42 * (ulonglong)_DAT_1812f9930 +
       ((ulonglong)_DAT_1812f9940 * (ulonglong)uVar42 + (uVar50 >> 0x20) * (ulonglong)_DAT_1812f9930
       << 0x20) +
       (ulonglong)uVar36 * (ulonglong)_DAT_1812f9910 +
       ((ulonglong)_DAT_1812f9920 * (ulonglong)uVar36 + (uVar62 >> 0x20) * (ulonglong)_DAT_1812f9910
       << 0x20) +
       (uVar15 & 0xffffffff) * (ulonglong)_DAT_1812f98e0 +
       ((ulonglong)_DAT_1812f98f0 * (uVar15 & 0xffffffff) +
        (ulonglong)uVar51 * (ulonglong)_DAT_1812f98e0 << 0x20) +
       (uVar43 & 0xffffffff) * (ulonglong)_DAT_1812f98c0 +
       ((ulonglong)_DAT_1812f98d0 * (uVar43 & 0xffffffff) +
        (ulonglong)uVar54 * (ulonglong)_DAT_1812f98c0 << 0x20))) + 0xf656cd43ed685360;
  _DAT_18320fec0 = _DAT_18320fd50 ^ uVar12 ^ _DAT_18320f718;
  _DAT_18320fbf0 = (_DAT_18320fbf0 ^ uVar12) + _DAT_18320f718 ^ 0x8938d50706ac38e7;
  _DAT_18320f900 = (_DAT_18320f900 * -0x315febd15859b669 ^ _DAT_18320fbf0) + uVar12;
  _DAT_18320fcb8 = _DAT_18320f900 ^ _DAT_18320fbf0;
  uVar15 = _DAT_18320f718 + uVar17 * uVar17 * -0xd584c4b81e0f5b;
  uVar17 = auVar23._8_8_ + auVar23._0_8_;
  uVar12 = uVar17 + _DAT_18320f888;
  if (auVar23._4_4_ < 0) {
    uVar12 = _DAT_18320fc50 ^ uVar17;
  }
  _DAT_18320f7a8 = func_0x00018937bd50(SUB161(auVar26 ^ _DAT_1812f9980,5) ^ uVar12);
  uVar43 = lVar11 * 0x2efd0ff35ba908ee;
  _DAT_18320fb90 = _DAT_18320fb90 + lVar11 * 0x2efd0ff35ba908ee ^ 0x575576c523c30adb;
  _DAT_18320f9f8 = _DAT_18320f838 * -0x1045b8e37959f761;
  _DAT_18320f838 = _DAT_18320f9f8 ^ _DAT_18320fb90;
  uVar12 = uVar15 ^ 0x84222325 ^ _DAT_18320f9b8;
  lVar11 = (uVar15 ^ 0x84222325) + _DAT_18320fb90;
  uVar17 = uVar12 + lVar11;
  uVar50 = (uVar18 ^ _DAT_18320fb90) + _DAT_18320f9b8 + uVar18;
  uVar12 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ uVar12;
  uVar17 = (uVar50 * 0x2000 | uVar50 >> 0x33) ^ uVar18 ^ _DAT_18320fb90;
  _DAT_18320fcf8 = uVar43;
  _DAT_18320f838 =
       func_0x00018937bd50((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18320f9b8 + uVar18) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - lVar11);
  uVar19 = (uint)(uVar15 >> 0x20);
  auVar63._8_4_ = (int)uVar15;
  auVar63._0_8_ = uVar15;
  auVar63._12_4_ = uVar19;
  uVar42 = (uint)(uVar18 >> 0x20);
  auVar27._8_4_ = (int)uVar18;
  auVar27._0_8_ = uVar18;
  auVar27._12_4_ = uVar42;
  uVar64 = (uVar15 & 0xffffffff) * (uVar18 & 0xffffffff) +
           ((ulonglong)uVar19 * (uVar18 & 0xffffffff) + (uVar15 & 0xffffffff) * (ulonglong)uVar42 <<
           0x20);
  uVar54 = SUB164(auVar63 & auVar27,0);
  uVar12 = SUB168(auVar63 & auVar27,0);
  uVar51 = SUB164(auVar63 | auVar27,0);
  uVar37 = SUB168(auVar63 | auVar27,0);
  uVar36 = SUB164(auVar63 ^ auVar27,0);
  uVar50 = SUB168(auVar63 ^ auVar27,0);
  auVar3._8_8_ = _UNK_18001a718;
  auVar3._0_8_ = _DAT_18001a710;
  uVar58 = SUB164(auVar27 ^ auVar3,0);
  uVar17 = SUB168(auVar27 ^ auVar3,0);
  lVar11 = (uVar64 & 0xffffffff) * (ulonglong)_DAT_1812f9a50 +
           ((ulonglong)_DAT_1812f9a60 * (uVar64 & 0xffffffff) +
            (uVar64 >> 0x20) * (ulonglong)_DAT_1812f9a50 << 0x20);
  auVar60._8_4_ = 0xffffffff;
  auVar60._0_8_ = 0xffffffffffffffff;
  auVar60._12_4_ = 0xffffffff;
  uVar61 = SUB164(auVar63 ^ auVar60,0);
  uVar50 = (((ulonglong)_DAT_1812f99d0 * (ulonglong)uVar58 +
             ((ulonglong)_DAT_1812f9a40 * (ulonglong)uVar58 +
              (uVar17 >> 0x20) * (ulonglong)_DAT_1812f99d0 << 0x20) +
             (ulonglong)_DAT_1812f9a20 * (ulonglong)uVar36 +
             ((ulonglong)_DAT_1812f9a30 * (ulonglong)uVar36 +
              (uVar50 >> 0x20) * (ulonglong)_DAT_1812f9a20 << 0x20) +
             (ulonglong)_DAT_1812f9a00 * (ulonglong)uVar51 +
             ((ulonglong)_DAT_1812f9a10 * (ulonglong)uVar51 +
              (uVar37 >> 0x20) * (ulonglong)_DAT_1812f9a00 << 0x20) +
             (ulonglong)_DAT_1812f99e0 * (ulonglong)uVar54 +
             ((ulonglong)_DAT_1812f99f0 * (ulonglong)uVar54 +
              (uVar12 >> 0x20) * (ulonglong)_DAT_1812f99e0 << 0x20) +
             (ulonglong)_DAT_1812f99b0 * (uVar18 & 0xffffffff) +
             ((ulonglong)_DAT_1812f99c0 * (uVar18 & 0xffffffff) +
              (ulonglong)uVar42 * (ulonglong)_DAT_1812f99b0 << 0x20) +
             (ulonglong)_DAT_1812f9990 * (uVar15 & 0xffffffff) +
             ((ulonglong)_DAT_1812f99a0 * (uVar15 & 0xffffffff) +
              (ulonglong)uVar19 * (ulonglong)_DAT_1812f9990 << 0x20) + lVar11) -
           ((ulonglong)uVar58 * (ulonglong)_DAT_1812f9aa0 +
            ((uVar17 >> 0x20) * (ulonglong)_DAT_1812f9aa0 +
             (ulonglong)_DAT_1812f9a90 * (ulonglong)uVar58 << 0x20) +
            (ulonglong)uVar61 * (ulonglong)_DAT_1812f9a80 +
            ((SUB168(auVar63 ^ auVar60,0) >> 0x20) * (ulonglong)_DAT_1812f9a80 +
             (ulonglong)_DAT_1812f9a70 * (ulonglong)uVar61 << 0x20) +
            (ulonglong)uVar36 * (ulonglong)_DAT_1812f9ac0 +
            ((uVar50 >> 0x20) * (ulonglong)_DAT_1812f9ac0 +
             (ulonglong)_DAT_1812f9ab0 * (ulonglong)uVar36 << 0x20) +
            (ulonglong)uVar54 * (ulonglong)_DAT_1812f9ac0 +
            ((uVar12 >> 0x20) * (ulonglong)_DAT_1812f9ac0 +
             (ulonglong)uVar54 * (ulonglong)_DAT_1812f9ab0 << 0x20) +
            (uVar18 & 0xffffffff) * (ulonglong)_DAT_1812f9aa0 +
            ((ulonglong)uVar42 * (ulonglong)_DAT_1812f9aa0 +
             (uVar18 & 0xffffffff) * (ulonglong)_DAT_1812f9a90 << 0x20) +
            (uVar15 & 0xffffffff) * (ulonglong)_DAT_1812f9a80 +
            ((ulonglong)uVar19 * (ulonglong)_DAT_1812f9a80 +
             (uVar15 & 0xffffffff) * (ulonglong)_DAT_1812f9a70 << 0x20) +
            (ulonglong)uVar51 * (ulonglong)_DAT_1812f9ad0 +
            ((ulonglong)_DAT_1812f9ae0 * (ulonglong)uVar51 +
             (uVar37 >> 0x20) * (ulonglong)_DAT_1812f9ad0 << 0x20) + lVar11)) + _DAT_1812f9af0;
  auVar28._8_8_ = uVar43;
  auVar28._0_8_ = uVar50 ^ 0x84222325;
  auVar23 = pshufb(auVar28 ^ _DAT_1812f9b00,_DAT_1800170c0);
  uVar12 = uVar15 * uVar18 ^ _DAT_18320f838;
  _DAT_18320fe60 = _DAT_18320fd30 ^ uVar12 ^ uVar50;
  _DAT_18320fa10 = (_DAT_18320fa10 ^ uVar12) + uVar50 ^ 0x251294031ea0fda4;
  _DAT_18320fcf0 = (_DAT_18320fcf0 * -0x5302bfd2c9a5dd79 ^ _DAT_18320fa10) + uVar12;
  _DAT_18320f8e8 = _DAT_18320fcf0 ^ _DAT_18320fa10;
  uVar17 = auVar23._8_8_ + auVar23._0_8_;
  uVar12 = uVar17 + _DAT_18320f748;
  if (auVar23._4_4_ < 0) {
    uVar12 = _DAT_18320fda0 ^ uVar17;
  }
  _DAT_18320f9d8 = uVar50;
  _DAT_18320fca0 = func_0x00018937bd50(SUB161(auVar28 ^ _DAT_1812f9b00,5) ^ uVar12);
  uVar58 = (uint)(uVar50 >> 0x20);
  auVar52._8_4_ = (int)uVar50;
  auVar52._0_8_ = uVar50;
  auVar52._12_4_ = uVar58;
  uVar54 = (uint)(uVar43 >> 0x20);
  auVar44._8_4_ = (int)uVar43;
  auVar44._0_8_ = uVar43;
  auVar44._12_4_ = uVar54;
  uVar51 = SUB164(auVar52 & auVar44,0);
  uVar18 = SUB168(auVar52 & auVar44,0);
  uVar36 = SUB164(auVar52 ^ auVar44,0);
  uVar15 = SUB168(auVar52 ^ auVar44,0);
  uVar19 = SUB164(auVar52 ^ auVar60,0);
  uVar17 = SUB168(auVar52 ^ auVar60,0);
  auVar4._8_8_ = _UNK_18001a718;
  auVar4._0_8_ = _DAT_18001a710;
  uVar61 = SUB164(auVar44 ^ auVar4,0);
  uVar42 = SUB164(auVar52 | auVar44,0);
  uVar12 = uVar43 * uVar50 ^ _DAT_18320fca0;
  uVar12 = uVar12 << 0x2e | uVar12 >> 0x12;
  uVar43 = (((ulonglong)uVar61 * (ulonglong)_DAT_1812f9bb0 +
             ((_DAT_1812f9bc0 & 0xffffffff) * (ulonglong)uVar61 +
              (SUB168(auVar44 ^ auVar4,0) >> 0x20) * (ulonglong)_DAT_1812f9bb0 << 0x20) +
            (_DAT_1812f9b90 & 0xffffffff) * (ulonglong)uVar19 +
            ((_DAT_1812f9ba0 & 0xffffffff) * (ulonglong)uVar19 +
             (uVar17 >> 0x20) * (_DAT_1812f9b90 & 0xffffffff) << 0x20) +
            (_DAT_1812f9b70 & 0xffffffff) * (ulonglong)uVar36 +
            ((_DAT_1812f9b80 & 0xffffffff) * (ulonglong)uVar36 +
             (uVar15 >> 0x20) * (_DAT_1812f9b70 & 0xffffffff) << 0x20) +
            (_DAT_1812f9b50 & 0xffffffff) * (ulonglong)uVar51 +
            ((_DAT_1812f9b60 & 0xffffffff) * (ulonglong)uVar51 +
             (uVar18 >> 0x20) * (_DAT_1812f9b50 & 0xffffffff) << 0x20) +
            (_DAT_1812f9b30 & 0xffffffff) * (uVar43 & 0xffffffff) +
            ((_DAT_1812f9b40 & 0xffffffff) * (uVar43 & 0xffffffff) +
             (ulonglong)uVar54 * (_DAT_1812f9b30 & 0xffffffff) << 0x20) +
            (_DAT_1812f9b10 & 0xffffffff) * (uVar50 & 0xffffffff) +
            ((_DAT_1812f9b20 & 0xffffffff) * (uVar50 & 0xffffffff) +
             (ulonglong)uVar58 * (_DAT_1812f9b10 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar19 * (_DAT_1812f9c30 & 0xffffffff) +
            ((_DAT_1812f9ca0 & 0xffffffff) * (ulonglong)uVar19 +
             (uVar17 >> 0x20) * (_DAT_1812f9c30 & 0xffffffff) << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_1812f9c80 +
           ((_DAT_1812f9c90 & 0xffffffff) * (ulonglong)uVar36 +
            (uVar15 >> 0x20) * (ulonglong)_DAT_1812f9c80 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_1812f9c60 +
           ((_DAT_1812f9c70 & 0xffffffff) * (ulonglong)uVar42 +
            (SUB168(auVar52 | auVar44,0) >> 0x20) * (ulonglong)_DAT_1812f9c60 << 0x20) +
           (ulonglong)uVar51 * (ulonglong)_DAT_1812f9c40 +
           ((_DAT_1812f9c50 & 0xffffffff) * (ulonglong)uVar51 +
            (uVar18 >> 0x20) * (ulonglong)_DAT_1812f9c40 << 0x20) +
           (uVar43 & 0xffffffff) * (ulonglong)_DAT_1812f9c10 +
           ((_DAT_1812f9c20 & 0xffffffff) * (uVar43 & 0xffffffff) +
            (ulonglong)uVar54 * (ulonglong)_DAT_1812f9c10 << 0x20) +
           (uVar50 & 0xffffffff) * (ulonglong)_DAT_1812f9bf0 +
           ((_DAT_1812f9c00 & 0xffffffff) * (uVar50 & 0xffffffff) +
            (ulonglong)uVar58 * (ulonglong)_DAT_1812f9bf0 << 0x20))) + _DAT_1812f9cb0;
  _DAT_18320fb78 = _DAT_18320fb08 ^ uVar12 ^ uVar43;
  _DAT_18320f850 = (_DAT_18320f850 ^ uVar12) + uVar43 ^ 0xc3a0a56bb08e679c;
  _DAT_18320fa28 = (_DAT_18320fa28 * 0x60fbd12b125093f9 ^ _DAT_18320f850) + uVar12;
  _DAT_18320f788 = _DAT_18320fa28 ^ _DAT_18320f850;
  uVar18 = uVar14 ^ 0x84222325;
  uVar12 = ((_DAT_18320f720 ^ uVar18) + (uVar18 & _DAT_18320f720) * 2) * (uVar13 - _DAT_18320feb8);
  uVar12 = (uVar12 | _DAT_18320faf0) + (uVar12 & _DAT_18320faf0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  uVar15 = uVar18 ^ uVar13;
  _DAT_18320f780 = uVar43;
  _DAT_18320fc90 = func_0x00018937bd50((uVar12 | uVar15) + (uVar12 & uVar15));
  uVar19 = (uint)(uVar14 >> 0x20);
  auVar45._8_4_ = (int)uVar14;
  auVar45._0_8_ = uVar14;
  auVar45._12_4_ = uVar19;
  uVar36 = (uint)(uVar13 >> 0x20);
  auVar39._8_4_ = (int)uVar13;
  auVar39._0_8_ = uVar13;
  auVar39._12_4_ = uVar36;
  auVar5._8_8_ = _UNK_18001a718;
  auVar5._0_8_ = _DAT_18001a710;
  uVar51 = SUB164(auVar45 & auVar39,0);
  uVar17 = SUB168(auVar45 & auVar39,0);
  uVar54 = SUB164(auVar45 ^ auVar39,0);
  uVar12 = SUB168(auVar45 ^ auVar39,0);
  uVar58 = SUB164(auVar45 ^ auVar5,0);
  uVar42 = SUB164(auVar45 | auVar39,0);
  uVar50 = (((ulonglong)uVar58 * (_DAT_1812f9d00 & 0xffffffff) +
             ((_DAT_1812f9d50 & 0xffffffff) * (ulonglong)uVar58 +
              (SUB168(auVar45 ^ auVar5,0) >> 0x20) * (_DAT_1812f9d00 & 0xffffffff) << 0x20) +
             (_DAT_1812f9d30 & 0xffffffff) * (ulonglong)uVar54 +
             ((_DAT_1812f9d40 & 0xffffffff) * (ulonglong)uVar54 +
              (uVar12 >> 0x20) * (_DAT_1812f9d30 & 0xffffffff) << 0x20) +
            (_DAT_1812f9d10 & 0xffffffff) * (ulonglong)uVar51 +
            ((_DAT_1812f9d20 & 0xffffffff) * (ulonglong)uVar51 +
             (uVar17 >> 0x20) * (_DAT_1812f9d10 & 0xffffffff) << 0x20) +
            (_DAT_1812f9ce0 & 0xffffffff) * (uVar13 & 0xffffffff) +
            ((_DAT_1812f9cf0 & 0xffffffff) * (uVar13 & 0xffffffff) +
             (ulonglong)uVar36 * (_DAT_1812f9ce0 & 0xffffffff) << 0x20) +
            (_DAT_1812f9cc0 & 0xffffffff) * (uVar14 & 0xffffffff) +
            ((_DAT_1812f9cd0 & 0xffffffff) * (uVar14 & 0xffffffff) +
             (ulonglong)uVar19 * (_DAT_1812f9cc0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar54 * (_DAT_1812f9de0 & 0xffffffff) +
            ((_DAT_1812f9df0 & 0xffffffff) * (ulonglong)uVar54 +
             (uVar12 >> 0x20) * (_DAT_1812f9de0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar42 * (ulonglong)_DAT_1812f9dc0 +
            ((_DAT_1812f9dd0 & 0xffffffff) * (ulonglong)uVar42 +
             (SUB168(auVar45 | auVar39,0) >> 0x20) * (ulonglong)_DAT_1812f9dc0 << 0x20) +
           (ulonglong)uVar51 * (ulonglong)_DAT_1812f9da0 +
           ((_DAT_1812f9db0 & 0xffffffff) * (ulonglong)uVar51 +
            (uVar17 >> 0x20) * (ulonglong)_DAT_1812f9da0 << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812f9d90 +
           ((ulonglong)uVar36 * (ulonglong)_DAT_1812f9d90 +
            (_DAT_1812f9d80 & 0xffffffff) * (uVar13 & 0xffffffff) << 0x20) +
           (uVar14 & 0xffffffff) * (ulonglong)_DAT_1812f9d90 +
           ((ulonglong)uVar19 * (ulonglong)_DAT_1812f9d90 +
            (uVar14 & 0xffffffff) * (_DAT_1812f9d80 & 0xffffffff) << 0x20))) + _DAT_1812f9d00;
  uVar12 = _DAT_18320fc90 ^ (uVar14 | uVar13);
  uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar12 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar12;
  _DAT_18320f7e8 = _DAT_18320fb00 ^ uVar12 ^ uVar50;
  _DAT_18320fba0 = (_DAT_18320fba0 ^ uVar12) + uVar50 ^ 0x352a40ebde2e2df0;
  _DAT_18320fd08 = (_DAT_18320fd08 * 0x57b7f36983d6eea5 ^ _DAT_18320fba0) + uVar12;
  _DAT_18320f9c8 = _DAT_18320fd08 ^ _DAT_18320fba0;
  uVar12 = ((_DAT_18320f738 ^ uVar18) + (uVar18 & _DAT_18320f738) * 2) * (uVar13 - _DAT_18320f7e0);
  uVar12 = (uVar12 | _DAT_18320fd40) + (uVar12 & _DAT_18320fd40);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18320fd70 = uVar50;
  _DAT_18320fa78 = func_0x00018937bd50((uVar12 | uVar15) + (uVar12 & uVar15));
  uVar12 = uVar14 * uVar13 ^ _DAT_18320fa78;
  uVar17 = uVar14 ^ uVar13;
  _DAT_18320fd28 = (_DAT_18320fd28 ^ uVar12) + uVar17 ^ 0x21e681be23379901;
  _DAT_18320fe88 = (_DAT_18320fe88 * -0x4169e075746f520d ^ _DAT_18320fd28) + uVar12;
  _DAT_18320fd50 = _DAT_18320fe88 ^ _DAT_18320fd28;
  auVar29._8_8_ = uVar13;
  auVar29._0_8_ = uVar18;
  auVar23 = pshufb(auVar29 ^ _DAT_1812f9e00,_DAT_1800170c0);
  uVar15 = auVar23._8_8_ + auVar23._0_8_;
  uVar12 = uVar15 + _DAT_18320fcb8;
  if (auVar23._4_4_ < 0) {
    uVar12 = _DAT_18320fbe0 ^ uVar15;
  }
  _DAT_18320fa80 = uVar17;
  _DAT_18320fa88 = func_0x00018937bd50(SUB161(auVar29 ^ _DAT_1812f9e00,5) ^ uVar12);
  uVar12 = (uVar14 | uVar13) ^ _DAT_18320fa88;
  uVar13 = uVar13 & uVar14;
  _DAT_18320fd08 = (_DAT_18320fd08 ^ uVar12) + uVar13 ^ 0x86124c37d58301bf;
  _DAT_18320f898 = (_DAT_18320f898 * 0x4e45f33246d2cf13 ^ _DAT_18320fd08) + uVar12;
  _DAT_18320fc58 = _DAT_18320f898 ^ _DAT_18320fd08;
  uVar15 = uVar17 ^ 0x84222325 ^ _DAT_18320fe00;
  uVar12 = uVar13 * 2 ^ _DAT_18320f900;
  lVar16 = (uVar17 ^ 0x84222325) + _DAT_18320f900;
  lVar11 = _DAT_18320fe00 + uVar13 * 2;
  uVar37 = uVar15 + lVar16;
  uVar64 = uVar12 + lVar11;
  uVar15 = (uVar37 * 0x2000 | uVar37 >> 0x33) ^ uVar15;
  uVar12 = (uVar64 * 0x2000 | uVar64 >> 0x33) ^ uVar12;
  _DAT_18320f758 = uVar13;
  _DAT_18320fd28 =
       func_0x00018937bd50((uVar12 << 0x1d | uVar12 >> 0x23) - lVar11 ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - lVar16);
  uVar19 = (uint)(uVar17 >> 0x20);
  auVar40._8_4_ = (int)uVar17;
  auVar40._0_8_ = uVar17;
  auVar40._12_4_ = uVar19;
  auVar46._8_4_ = (int)uVar13;
  auVar46._0_8_ = uVar13;
  auVar46._12_4_ = (int)(uVar13 >> 0x20);
  uVar13 = uVar13 * 2;
  auVar47._8_8_ = auVar46._8_8_ * 2;
  auVar47._0_8_ = uVar13;
  uVar61 = (uint)(uVar13 >> 0x20);
  uVar42 = SUB164(auVar40 & auVar47,0);
  uVar15 = SUB168(auVar40 & auVar47,0);
  uVar58 = SUB164(auVar40 | auVar47,0);
  uVar12 = SUB168(auVar40 | auVar47,0);
  uVar51 = SUB164(auVar40 ^ auVar47,0);
  auVar6._8_8_ = _UNK_18001a718;
  auVar6._0_8_ = _DAT_18001a710;
  uVar54 = SUB164(auVar47 ^ auVar6,0);
  uVar37 = SUB168(auVar47 ^ auVar6,0);
  auVar7._8_8_ = _UNK_18001a718;
  auVar7._0_8_ = _DAT_18001a710;
  uVar36 = SUB164(auVar40 ^ auVar7,0);
  uVar13 = (((ulonglong)_DAT_1812f9e50 * (ulonglong)uVar54 +
             ((ulonglong)_DAT_1812f9ec0 * (ulonglong)uVar54 +
              (uVar37 >> 0x20) * (ulonglong)_DAT_1812f9e50 << 0x20) +
            (ulonglong)uVar51 * (ulonglong)_DAT_1812f9ea0 +
            ((ulonglong)_DAT_1812f9eb0 * (ulonglong)uVar51 +
             (SUB168(auVar40 ^ auVar47,0) >> 0x20) * (ulonglong)_DAT_1812f9ea0 << 0x20) +
            (ulonglong)_DAT_1812f9e80 * (ulonglong)uVar58 +
            ((ulonglong)_DAT_1812f9e90 * (ulonglong)uVar58 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_1812f9e80 << 0x20) +
            (ulonglong)_DAT_1812f9e60 * (ulonglong)uVar42 +
            ((ulonglong)_DAT_1812f9e70 * (ulonglong)uVar42 +
             (uVar15 >> 0x20) * (ulonglong)_DAT_1812f9e60 << 0x20) +
            (ulonglong)_DAT_1812f9e30 * (uVar13 & 0xffffffff) +
            ((ulonglong)_DAT_1812f9e40 * (uVar13 & 0xffffffff) +
             (ulonglong)uVar61 * (ulonglong)_DAT_1812f9e30 << 0x20) +
            (ulonglong)_DAT_1812f9e10 * (uVar17 & 0xffffffff) +
            ((ulonglong)_DAT_1812f9e20 * (uVar17 & 0xffffffff) +
             (ulonglong)uVar19 * (ulonglong)_DAT_1812f9e10 << 0x20)) -
           ((ulonglong)uVar54 * (_DAT_1812f9f70 & 0xffffffff) +
            ((ulonglong)_DAT_1812f9f80 * (ulonglong)uVar54 +
             (uVar37 >> 0x20) * (_DAT_1812f9f70 & 0xffffffff) << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_1812f9f50 +
           ((ulonglong)_DAT_1812f9f60 * (ulonglong)uVar36 +
            (SUB168(auVar40 ^ auVar7,0) >> 0x20) * (ulonglong)_DAT_1812f9f50 << 0x20) +
           (ulonglong)uVar58 * (ulonglong)_DAT_1812f9f40 +
           ((uVar12 >> 0x20) * (ulonglong)_DAT_1812f9f40 +
            (ulonglong)_DAT_1812f9f30 * (ulonglong)uVar58 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_1812f9f40 +
           ((uVar15 >> 0x20) * (ulonglong)_DAT_1812f9f40 +
            (ulonglong)uVar42 * (ulonglong)_DAT_1812f9f30 << 0x20) +
           (uVar17 & 0xffffffff) * (ulonglong)_DAT_1812f9ef0 +
           ((ulonglong)_DAT_1812f9f00 * (uVar17 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_1812f9ef0 << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812f9f10 +
           ((ulonglong)_DAT_1812f9f20 * (uVar13 & 0xffffffff) +
            (ulonglong)uVar61 * (ulonglong)_DAT_1812f9f10 << 0x20))) + _DAT_1812f9f90;
  auVar30._8_8_ = uVar13;
  auVar30._0_8_ = uVar50 ^ 0x84222325;
  auVar23 = pshufb(auVar30 ^ _DAT_1812f9fa0,_DAT_1800170c0);
  uVar12 = _DAT_18320fd28 << 0x1f | _DAT_18320fd28 >> 0x21;
  uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar12 = ((((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar12
           ) & 0xfffffffffffffffe;
  _DAT_18320fcc0 = _DAT_18320fe00 ^ uVar12 ^ uVar13;
  _DAT_18320fa20 = (_DAT_18320fa20 ^ uVar12) + uVar13 ^ 0xf6981569e22a87e9;
  _DAT_18320f888 = (_DAT_18320f888 * 0x74c9381743a290bb ^ _DAT_18320fa20) + uVar12;
  _DAT_18320fb88 = _DAT_18320f888 ^ _DAT_18320fa20;
  uVar17 = auVar23._8_8_ + auVar23._0_8_;
  uVar12 = uVar17 + _DAT_18320f9a0;
  if (auVar23._4_4_ < 0) {
    uVar12 = _DAT_18320fbe8 ^ uVar17;
  }
  _DAT_18320fd30 = uVar13;
  _DAT_18320fab0 = func_0x00018937bd50(SUB161(auVar30 ^ _DAT_1812f9fa0,5) ^ uVar12);
  uStack0000000000000090 = (undefined4)uVar50;
  uStack0000000000000094 = (uint)(uVar50 >> 0x20);
  auVar48._8_4_ = uStack0000000000000090;
  auVar48._0_8_ = uVar50;
  auVar48._12_4_ = uStack0000000000000094;
  uVar42 = (uint)(uVar13 >> 0x20);
  auVar31._8_4_ = (int)uVar13;
  auVar31._0_8_ = uVar13;
  auVar31._12_4_ = uVar42;
  uVar36 = SUB164(auVar48 & auVar31,0);
  uVar17 = SUB168(auVar48 & auVar31,0);
  uVar51 = SUB164(auVar48 | auVar31,0);
  uVar58 = SUB164(auVar48 ^ auVar31,0);
  uVar12 = SUB168(auVar48 ^ auVar31,0);
  auVar53._8_4_ = 0xffffffff;
  auVar53._0_8_ = 0xffffffffffffffff;
  auVar53._12_4_ = 0xffffffff;
  uVar19 = SUB164(auVar48 ^ auVar53,0);
  uVar54 = SUB164(auVar31 ^ auVar53,0);
  uVar15 = SUB168(auVar31 ^ auVar53,0);
  uVar13 = (((ulonglong)_DAT_1812fa040 * (ulonglong)uVar54 +
             ((uVar15 >> 0x20) * (ulonglong)_DAT_1812fa040 +
              (ulonglong)_DAT_1812f9fd0 * (ulonglong)uVar54 << 0x20) +
             (ulonglong)uVar19 * (ulonglong)_DAT_1812fa030 +
             ((SUB168(auVar48 ^ auVar53,0) >> 0x20) * (ulonglong)_DAT_1812fa030 +
              (ulonglong)_DAT_1812f9fb0 * (ulonglong)uVar19 << 0x20) +
             (ulonglong)_DAT_1812fa000 * (ulonglong)uVar58 +
             ((uVar12 >> 0x20) * (ulonglong)_DAT_1812fa000 +
              (ulonglong)_DAT_1812f9ff0 * (ulonglong)uVar58 << 0x20) +
             (ulonglong)uVar36 * (ulonglong)_DAT_1812fa000 +
             ((uVar17 >> 0x20) * (ulonglong)_DAT_1812fa000 +
              (ulonglong)uVar36 * (ulonglong)_DAT_1812f9ff0 << 0x20) +
             (ulonglong)_DAT_1812f9fe0 * (uVar13 & 0xffffffff) +
             ((ulonglong)uVar42 * (ulonglong)_DAT_1812f9fe0 +
              (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812f9fd0 << 0x20) +
             (ulonglong)_DAT_1812f9fc0 * (uVar50 & 0xffffffff) +
             ((ulonglong)uStack0000000000000094 * (ulonglong)_DAT_1812f9fc0 +
              (uVar50 & 0xffffffff) * (ulonglong)_DAT_1812f9fb0 << 0x20) +
            (ulonglong)uVar51 * (ulonglong)_DAT_1812fa010 +
            ((ulonglong)_DAT_1812fa020 * (ulonglong)uVar51 +
             (SUB168(auVar48 | auVar31,0) >> 0x20) * (ulonglong)_DAT_1812fa010 << 0x20)) -
           ((ulonglong)uVar54 * (_DAT_1812fa0b0 & 0xffffffff) +
            ((ulonglong)_DAT_1812fa100 * (ulonglong)uVar54 +
             (uVar15 >> 0x20) * (_DAT_1812fa0b0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar58 * (ulonglong)_DAT_1812fa0e0 +
            ((ulonglong)_DAT_1812fa0f0 * (ulonglong)uVar58 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_1812fa0e0 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_1812fa0c0 +
           ((ulonglong)_DAT_1812fa0d0 * (ulonglong)uVar36 +
            (uVar17 >> 0x20) * (ulonglong)_DAT_1812fa0c0 << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812fa090 +
           ((ulonglong)_DAT_1812fa0a0 * (uVar13 & 0xffffffff) +
            (ulonglong)uVar42 * (ulonglong)_DAT_1812fa090 << 0x20) +
           (uVar50 & 0xffffffff) * (ulonglong)_DAT_1812fa070 +
           ((ulonglong)_DAT_1812fa080 * (uVar50 & 0xffffffff) +
            (ulonglong)uStack0000000000000094 * (ulonglong)_DAT_1812fa070 << 0x20))) +
           _DAT_1812fa110;
  auVar32._8_8_ = uVar13;
  auVar32._0_8_ = uVar43 ^ 0x84222325;
  auVar23 = pshufb(auVar32 ^ _DAT_1812fa120,_DAT_1800170c0);
  uVar12 = (_DAT_18320fab0 & 0x3fffffffe0000) * 0x4000;
  _DAT_18320fbc0 = uVar13 ^ uVar12;
  _DAT_18320fd60 = (_DAT_18320fd60 ^ uVar12) + uVar13 ^ 0x82ade470a38e35a9;
  _DAT_18320f788 = (_DAT_18320f788 * -0x55623eb85d32786d ^ _DAT_18320fd60) + uVar12;
  _DAT_18320fdd8 = _DAT_18320f788 ^ _DAT_18320fd60;
  uVar17 = auVar23._8_8_ + auVar23._0_8_;
  uVar12 = uVar17 + _DAT_18320fcc8;
  if (auVar23._4_4_ < 0) {
    uVar12 = _DAT_18320f768 ^ uVar17;
  }
  _DAT_18320fbf0 = uVar13;
  _DAT_18320fd78 = func_0x00018937bd50(SUB161(auVar32 ^ _DAT_1812fa120,5) ^ uVar12);
  uStack0000000000000070 = (undefined4)uVar43;
  uStack0000000000000074 = (uint)(uVar43 >> 0x20);
  auVar57._8_4_ = uStack0000000000000070;
  auVar57._0_8_ = uVar43;
  auVar57._12_4_ = uStack0000000000000074;
  uVar54 = (uint)(uVar13 >> 0x20);
  auVar49._8_4_ = (int)uVar13;
  auVar49._0_8_ = uVar13;
  auVar49._12_4_ = uVar54;
  uVar42 = SUB164(auVar57 & auVar49,0);
  auVar8._8_8_ = _UNK_18001a718;
  auVar8._0_8_ = _DAT_18001a710;
  uVar19 = SUB164(auVar57 | auVar49,0);
  uVar51 = SUB164(auVar49 ^ auVar8,0);
  uVar17 = SUB168(auVar49 ^ auVar8,0);
  uVar12 = _DAT_18320fd78 & 0x1ffffffffffffff;
  auVar9._8_8_ = _UNK_18001a718;
  auVar9._0_8_ = _DAT_18001a710;
  uVar36 = SUB164(auVar57 ^ auVar9,0);
  uVar13 = (((ulonglong)_DAT_1812fa170 * (ulonglong)uVar51 +
             ((ulonglong)_DAT_1812fa1a0 * (ulonglong)uVar51 +
              (uVar17 >> 0x20) * (ulonglong)_DAT_1812fa170 << 0x20) +
            (ulonglong)uVar19 * (ulonglong)_DAT_1812fa190 +
            ((SUB168(auVar57 | auVar49,0) >> 0x20) * (ulonglong)_DAT_1812fa190 +
             (ulonglong)_DAT_1812fa180 * (ulonglong)uVar19 << 0x20) +
            (ulonglong)uVar42 * (ulonglong)_DAT_1812fa190 +
            ((SUB168(auVar57 & auVar49,0) >> 0x20) * (ulonglong)_DAT_1812fa190 +
             (ulonglong)uVar42 * (ulonglong)_DAT_1812fa180 << 0x20) +
            (ulonglong)_DAT_1812fa150 * (uVar13 & 0xffffffff) +
            ((ulonglong)_DAT_1812fa160 * (uVar13 & 0xffffffff) +
             (ulonglong)uVar54 * (ulonglong)_DAT_1812fa150 << 0x20) +
            (ulonglong)_DAT_1812fa130 * (uVar43 & 0xffffffff) +
            ((ulonglong)_DAT_1812fa140 * (uVar43 & 0xffffffff) +
             (ulonglong)uStack0000000000000074 * (ulonglong)_DAT_1812fa130 << 0x20)) -
           ((ulonglong)uVar51 * (ulonglong)_DAT_1812fa200 +
            ((uVar17 >> 0x20) * (ulonglong)_DAT_1812fa200 +
             (ulonglong)_DAT_1812fa1f0 * (ulonglong)uVar51 << 0x20) +
            (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812fa200 +
            ((ulonglong)uVar54 * (ulonglong)_DAT_1812fa200 +
             (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812fa1f0 << 0x20) +
            (uVar43 & 0xffffffff) * (ulonglong)_DAT_1812fa1e0 +
            ((ulonglong)uStack0000000000000074 * (ulonglong)_DAT_1812fa1e0 +
             (uVar43 & 0xffffffff) * (ulonglong)_DAT_1812fa1d0 << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_1812fa1e0 +
           ((SUB168(auVar57 ^ auVar9,0) >> 0x20) * (ulonglong)_DAT_1812fa1e0 +
            (ulonglong)_DAT_1812fa1d0 * (ulonglong)uVar36 << 0x20))) + _DAT_1812fa210;
  _DAT_18320f9e8 = _DAT_18320fa18 ^ uVar12 ^ uVar13;
  _DAT_18320fbc0 = (_DAT_18320fbc0 ^ uVar12) + uVar13 ^ 0x2eee83aba06bb8e8;
  _DAT_18320f8d8 = (_DAT_18320f8d8 * -0x4ec6bcc79db4d87b ^ _DAT_18320fbc0) + uVar12;
  _DAT_18320f950 = _DAT_18320f8d8 ^ _DAT_18320fbc0;
  uVar12 = (uVar18 ^ _DAT_18320fd98) + _DAT_18320fcd0 + uVar18;
  uVar17 = ~_DAT_18320fcd0 + (_DAT_18320fd98 - 1);
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar18 ^ _DAT_18320fd98;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ ~_DAT_18320fcd0;
  _DAT_18320fbb0 = uVar13;
  _DAT_18320f9d8 =
       func_0x00018937bd50((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_18320fd98 - 1) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18320fcd0 + uVar18));
  uVar17 = ~uVar14;
  _DAT_18320f9f8 = (_DAT_18320f9f8 ^ _DAT_18320f9d8) + uVar17 ^ 0x1a3ba2d03dd9baa8;
  _DAT_18320fb00 = (_DAT_18320fb00 * -0x6e4f36dde629da01 ^ _DAT_18320f9f8) + _DAT_18320f9d8;
  _DAT_18320fc00 = _DAT_18320fb00 ^ _DAT_18320f9f8;
  uVar12 = (~_DAT_18320f830 - uVar14) * ((_DAT_18320f9d0 ^ uVar18) + (uVar18 & _DAT_18320f9d0) * 2);
  uVar12 = (uVar12 | _DAT_18320f7d0) + (uVar12 & _DAT_18320f7d0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18320fb98 = uVar17;
  _DAT_18320f928 = func_0x00018937bd50((uVar18 ^ uVar17 | uVar12) + (uVar12 & (uVar18 ^ uVar17)));
  _DAT_18320fc98 = _DAT_18320fc98 ^ uVar17 ^ _DAT_18320f928 ^ 0x7ba0fd53364a9f8b;
  _DAT_18320f800 =
       (_DAT_18320f800 * -0x23ebb6ef94e90595 ^ _DAT_18320fc98) + (uVar17 ^ _DAT_18320f928);
  _DAT_18320fe48 = _DAT_18320f800 ^ _DAT_18320fc98;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar13 ^ 0x84222325;
  _DAT_18320f918 = 0;
  auVar23 = pshufb(auVar33 ^ _DAT_1812fa220,_DAT_1800170c0);
  uVar17 = auVar23._8_8_ + auVar23._0_8_;
  uVar12 = uVar17 + _DAT_18320fa68;
  if (auVar23._4_4_ < 0) {
    uVar12 = _DAT_18320f988 ^ uVar17;
  }
  _DAT_18320f800 = func_0x00018937bd50(SUB161(auVar33 ^ _DAT_1812fa220,5) ^ uVar12);
  uVar12 = _DAT_1812f8c60;
  uVar36 = (uint)(uVar13 >> 0x20);
  auVar41._8_4_ = (int)uVar13;
  auVar41._0_8_ = uVar13;
  auVar41._12_4_ = uVar36;
  auVar34._8_4_ = 0xffffffff;
  auVar34._0_8_ = 0xffffffffffffffff;
  auVar34._12_4_ = 0xffffffff;
  uVar14 = _DAT_18320f800 ^ uVar13;
  uVar17 = uVar14 >> 1 | uVar14;
  uVar17 = uVar17 >> 2 | uVar17;
  uVar17 = uVar17 >> 4 | uVar17;
  uVar17 = uVar17 >> 8 | uVar17;
  uVar17 = uVar17 >> 0x10 | uVar17;
  uVar17 = uVar17 >> 0x20 | uVar17;
  uVar17 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           uVar14;
  uVar19 = SUB164(auVar34 ^ auVar41,0);
  uVar15 = (((ulonglong)_DAT_1812fa270 * (uVar13 & 0xffffffff) +
             ((ulonglong)_DAT_1812fa280 * (uVar13 & 0xffffffff) +
              (ulonglong)uVar36 * (ulonglong)_DAT_1812fa270 << 0x20) +
            (ulonglong)_DAT_1812fa250 * (uVar13 & 0xffffffff) +
            ((ulonglong)_DAT_1812fa260 * (uVar13 & 0xffffffff) +
             (ulonglong)uVar36 * (ulonglong)_DAT_1812fa250 << 0x20) +
            (ulonglong)_DAT_1812fa230 * (uVar13 & 0xffffffff) +
            ((ulonglong)_DAT_1812fa240 * (uVar13 & 0xffffffff) +
             (ulonglong)uVar36 * (ulonglong)_DAT_1812fa230 << 0x20)) -
           ((ulonglong)uVar19 * (_DAT_1812fa2d0 & 0xffffffff) +
            ((ulonglong)_DAT_1812fa300 * (ulonglong)uVar19 +
             (SUB168(auVar34 ^ auVar41,0) >> 0x20) * (_DAT_1812fa2d0 & 0xffffffff) << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812fa2e0 +
           ((ulonglong)_DAT_1812fa2f0 * (uVar13 & 0xffffffff) +
            (ulonglong)uVar36 * (ulonglong)_DAT_1812fa2e0 << 0x20) +
           (ulonglong)_DAT_1812fa2b0 * (uVar13 & 0xffffffff) +
           ((ulonglong)_DAT_1812fa2c0 * (uVar13 & 0xffffffff) +
            (ulonglong)uVar36 * (ulonglong)_DAT_1812fa2b0 << 0x20) +
           (ulonglong)_DAT_1812fa290 * (uVar13 & 0xffffffff) +
           ((ulonglong)_DAT_1812fa2a0 * (uVar13 & 0xffffffff) +
            (ulonglong)uVar36 * (ulonglong)_DAT_1812fa290 << 0x20))) - _DAT_1812fa2d0;
  _DAT_18320fac8 = _DAT_18320fe80 ^ uVar14 ^ uVar15;
  _DAT_18320f9b8 = (_DAT_18320f9b8 ^ uVar14) + uVar15 ^ 0x96232920724c05fd;
  _DAT_18320fa40 = (_DAT_18320fa40 * 0x60bf46cba8b7aff ^ _DAT_18320f9b8) + uVar14;
  _DAT_18320fe28 = _DAT_18320fa40 ^ _DAT_18320f9b8;
  auVar35._8_8_ = _DAT_1812f8c60;
  auVar35._0_8_ = uStack00000000000000b0;
  auVar23 = pshufb(auVar35 ^ _DAT_1812fa310,_DAT_1800170c0);
  uVar13 = auVar23._8_8_ + auVar23._0_8_;
  uVar17 = uVar13 + _DAT_18320f760;
  if (auVar23._4_4_ < 0) {
    uVar17 = _DAT_18320fc58 ^ uVar13;
  }
  _DAT_18320f990 = uVar15;
  _DAT_18320fee0 = func_0x00018937bd50(SUB161(auVar35 ^ _DAT_1812fa310,5) ^ uVar17);
  _DAT_18320fc78 = _DAT_18320fc78 ^ _DAT_18320fee0 ^ uVar12 ^ 0x70d22f3386991fe6;
  _DAT_18320fc88 =
       (_DAT_18320fc88 * -0x7ebdc7aa81ba350d ^ _DAT_18320fc78) + (_DAT_18320fee0 ^ uVar12);
  _DAT_18320fec8 = _DAT_18320fc88 ^ _DAT_18320fc78;
  _DAT_18320fb88 = 0;
  uVar17 = uVar15 ^ 0x84222325;
  uVar12 = ((_DAT_18320fba8 ^ uVar17) + (uVar17 & _DAT_18320fba8) * 2) * -_DAT_18320fbe8;
  uVar12 = (uVar12 | _DAT_18320fba0) + (uVar12 & _DAT_18320fba0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18320fdd8 = func_0x00018937bd50((uVar12 | uVar17) + (uVar12 & uVar17));
  uVar12 = uStack00000000000000b8;
  uVar17 = _DAT_18320fdd8 ^ uVar15;
  uVar13 = ((ulonglong)_DAT_1812fa360 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_1812fa370 * (uVar15 & 0xffffffff) +
             (uVar15 >> 0x20) * (ulonglong)_DAT_1812fa360 << 0x20) +
           (ulonglong)_DAT_1812fa340 * (uVar15 & 0xffffffff) +
           ((ulonglong)_DAT_1812fa350 * (uVar15 & 0xffffffff) +
            (uVar15 >> 0x20) * (ulonglong)_DAT_1812fa340 << 0x20) +
           (ulonglong)_DAT_1812fa320 * (uVar15 & 0xffffffff) +
           ((ulonglong)_DAT_1812fa330 * (uVar15 & 0xffffffff) +
            (uVar15 >> 0x20) * (ulonglong)_DAT_1812fa320 << 0x20)) -
           ((uVar15 & 0xffffffff) * (ulonglong)_DAT_1812fa3c0 +
            ((ulonglong)_DAT_1812fa3d0 * (uVar15 & 0xffffffff) +
             (uVar15 >> 0x20) * (ulonglong)_DAT_1812fa3c0 << 0x20) +
           (ulonglong)_DAT_1812fa3a0 * (uVar15 & 0xffffffff) +
           ((ulonglong)_DAT_1812fa3b0 * (uVar15 & 0xffffffff) +
            (uVar15 >> 0x20) * (ulonglong)_DAT_1812fa3a0 << 0x20) +
           (ulonglong)_DAT_1812fa380 * (uVar15 & 0xffffffff) +
           ((ulonglong)_DAT_1812fa390 * (uVar15 & 0xffffffff) +
            (uVar15 >> 0x20) * (ulonglong)_DAT_1812fa380 << 0x20));
  _DAT_18320fc58 = _DAT_18320fc10 ^ uVar17 ^ uVar13;
  _DAT_18320f800 = (_DAT_18320f800 ^ uVar17) + uVar13 ^ 0xeba6297d12ac67c;
  _DAT_18320fd08 = (_DAT_18320fd08 * 0x3184a89e91357c9d ^ _DAT_18320f800) + uVar17;
  _DAT_18320f760 = _DAT_18320fd08 ^ _DAT_18320f800;
  uVar17 = uStack00000000000000b8 ^ 0x84222325 ^ _DAT_18320f8d8;
  lVar11 = (uStack00000000000000b8 ^ 0x84222325) + _DAT_18320fb30;
  uVar14 = uVar17 + lVar11;
  uVar15 = (uVar13 ^ _DAT_18320fb30) + _DAT_18320f8d8 + uVar13;
  uVar17 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar17;
  uVar14 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar13 ^ _DAT_18320fb30;
  _DAT_18320fc28 = uVar13;
  _DAT_18320f8f0 =
       func_0x00018937bd50((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18320f8d8 + uVar13) ^
                           (uVar17 << 0x1d | uVar17 >> 0x23) - lVar11);
  uVar17 = _DAT_18320f8f0 - (_DAT_18320f8f0 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar17 = (((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
           _DAT_18320f8f0;
  _DAT_18320fb68 = uVar12 ^ uVar13;
  _DAT_18320f710 = (_DAT_18320f710 ^ uVar17) + _DAT_18320fb68 ^ 0x514a9e87737042ad;
  _DAT_18320fde8 = (_DAT_18320fde8 * 0x7bd71c4a9cc3071 ^ _DAT_18320f710) + uVar17;
  _DAT_18320fd48 = _DAT_18320fde8 ^ _DAT_18320f710;
  in_stack_00000040 = _DAT_18320fb68;
  FUN_190de3220(extraout_XMM0_Qa,&stack0x00000030,*_DAT_18301ee50 + 0x1763a,*_DAT_18301ee50 + 0xe42,
                0x11e6);
  cVar10 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar10 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 937bf22 (image 18937bf22) =====

void FUN_18937bf22(void)

{
  return;
}



// ===== continuation @ rva 937be40 (image 18937be40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937be40(void)

{
  FUN_190ddce00();
  (*_DAT_1812fac78)();
  return;
}



// ===== continuation @ rva 937d00c (image 18937d00c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937d00c(void)

{
  FUN_190ddfc90();
  (*_DAT_1812fa6a8)();
  return;
}



// ===== continuation @ rva 937d7cb (image 18937d7cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18937d7cb(void)

{
  longlong in_stack_00000048;
  
  switch(in_stack_00000048 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 937c1c7 (image 18937c1c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937c1c7(void)

{
  (*_DAT_1812fab98)();
  return;
}



// ===== continuation @ rva 937c513 (image 18937c513) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937c513(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812fa7f8)();
  return;
}



// ===== continuation @ rva 937c3d3 (image 18937c3d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18937c3d3(void)

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



// ===== continuation @ rva 937d674 (image 18937d674) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18937d674(void)

{
  longlong in_stack_00000098;
  
  switch(in_stack_00000098 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 937c329 (image 18937c329) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18937c329(void)

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



// ===== continuation @ rva 937d87c (image 18937d87c) =====

void FUN_18937d87c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 937c0ae (image 18937c0ae) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937c0ae(void)

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



// ===== continuation @ rva 9382026 (image 189382026) =====

void FUN_189382026(void)

{
  return;
}



// ===== continuation @ rva 937da7d (image 18937da7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937da7d(void)

{
  FUN_190ddce00();
  (*_DAT_1812fb558)();
  return;
}



// ===== continuation @ rva 938353a (image 18938353a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938353a(void)

{
  FUN_190dd72e0();
  (*_DAT_1812fba28)();
  return;
}



// ===== continuation @ rva 9381d46 (image 189381d46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189381d46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1812fb728)();
  return;
}



// ===== continuation @ rva 938196c (image 18938196c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938196c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812fbc78)();
  return;
}



// ===== continuation @ rva 93825ec (image 1893825ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893825ec(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812fb0f8)();
  return;
}



// ===== continuation @ rva 9381bf9 (image 189381bf9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189381bf9(void)

{
  (*_DAT_1812fbdd8)();
  return;
}



// ===== continuation @ rva 938438f (image 18938438f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938438f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812fbd78)();
  return;
}



// ===== continuation @ rva 93843ea (image 1893843ea) =====

void FUN_1893843ea(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9383766 (image 189383766) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189383766(void)

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



// ===== continuation @ rva 9382828 (image 189382828) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189382828(void)

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



// ===== continuation @ rva 9388924 (image 189388924) =====

void FUN_189388924(void)

{
  return;
}



// ===== continuation @ rva 9384628 (image 189384628) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189384628(void)

{
  FUN_190ddce00();
  (*_DAT_1812fd6e8)();
  return;
}



// ===== continuation @ rva 938a557 (image 18938a557) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938a557(void)

{
  (*_DAT_1812fded8)();
  return;
}



// ===== continuation @ rva 9387a08 (image 189387a08) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189387a08(void)

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



// ===== continuation @ rva 93884ca (image 1893884ca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893884ca(void)

{
  (*_DAT_1812fde18)();
  return;
}



// ===== continuation @ rva 938a205 (image 18938a205) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18938a205(void)

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



// ===== continuation @ rva 9388f59 (image 189388f59) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189388f59(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812fded8)();
  return;
}



// ===== continuation @ rva 9389172 (image 189389172) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189389172(void)

{
  FUN_190de3220();
  (*_DAT_1812fd6c8)();
  return;
}



// ===== continuation @ rva 9389644 (image 189389644) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189389644(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_1812fd228)();
  return;
}



// ===== continuation @ rva 9389001 (image 189389001) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189389001(void)

{
  FUN_190ddfc90();
  (*_DAT_1812fda58)();
  return;
}



// ===== continuation @ rva 9391052 (image 189391052) =====

void FUN_189391052(void)

{
  return;
}



// ===== continuation @ rva 938a79a (image 18938a79a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938a79a(void)

{
  FUN_190ddce00();
  (*_DAT_1812fec18)();
  return;
}



// ===== continuation @ rva 938fe57 (image 18938fe57) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938fe57(void)

{
  FUN_190de3220();
  (*_DAT_1812fff38)();
  return;
}



// ===== continuation @ rva 93904b4 (image 1893904b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893904b4(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ffae8)();
  return;
}



// ===== continuation @ rva 938f562 (image 18938f562) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938f562(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_1812feae8)();
  return;
}



// ===== continuation @ rva 938ead1 (image 18938ead1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18938ead1(void)

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



// ===== continuation @ rva 938d562 (image 18938d562) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938d562(void)

{
  FUN_190ddfc90();
  (*_DAT_1812feb58)();
  return;
}



// ===== continuation @ rva 938d509 (image 18938d509) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938d509(void)

{
  undefined8 uStack0000000000000090;
  undefined8 in_stack_000000e0;
  
  uStack0000000000000090 = in_stack_000000e0;
  FUN_190dd72e0();
  (*_DAT_1812fec48)();
  return;
}



// ===== continuation @ rva 938f4b4 (image 18938f4b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18938f4b4(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ff518)();
  return;
}



// ===== continuation @ rva 92e5a98 (image 1892e5a98) =====

void FUN_1892e5a98(void)

{
  return;
}



// ===== continuation @ rva 92dfd38 (image 1892dfd38) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dfd38(void)

{
  FUN_190ddce00();
  (*_DAT_1812d3dd8)();
  return;
}



// ===== continuation @ rva 92e5b04 (image 1892e5b04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892e5b04(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1812d3d38)();
  return;
}



// ===== continuation @ rva 92e5705 (image 1892e5705) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892e5705(void)

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



// ===== continuation @ rva 92e5b44 (image 1892e5b44) =====

void FUN_1892e5b44(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92e3f2e (image 1892e3f2e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892e3f2e(void)

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



// ===== continuation @ rva 92e53f9 (image 1892e53f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892e53f9(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d3f38)();
  return;
}



// ===== continuation @ rva 92e5665 (image 1892e5665) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892e5665(void)

{
  (*_DAT_1812d45a8)();
  return;
}



// ===== continuation @ rva 92e4d95 (image 1892e4d95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892e4d95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x538))();
  FUN_184117d80();
  (*_DAT_1812d3c08)();
  return;
}



// ===== continuation @ rva 92e53a3 (image 1892e53a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892e53a3(void)

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



// ===== continuation @ rva 92e5b3c (image 1892e5b3c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892e5b3c(void)

{
  (*_DAT_1812d3d48)();
  return;
}



// ===== continuation @ rva 92e38f3 (image 1892e38f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892e38f3(void)

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



// ===== continuation @ rva 92eef4c (image 1892eef4c) =====

void FUN_1892eef4c(void)

{
  return;
}



// ===== continuation @ rva 92e5d40 (image 1892e5d40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892e5d40(void)

{
  FUN_190ddce00();
  (*_DAT_1812d5ed8)();
  return;
}



// ===== continuation @ rva 92ed3a1 (image 1892ed3a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892ed3a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812d6ef8)();
  return;
}



// ===== continuation @ rva 92ecf9d (image 1892ecf9d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892ecf9d(void)

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



// ===== continuation @ rva 92eef3b (image 1892eef3b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892eef3b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1812d7528)();
  return;
}



// ===== continuation @ rva 92ee310 (image 1892ee310) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892ee310(void)

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



// ===== continuation @ rva 92ed9f9 (image 1892ed9f9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892ed9f9(void)

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



// ===== continuation @ rva 92ec2af (image 1892ec2af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892ec2af(void)

{
  (*_DAT_1812d77e8)();
  return;
}



// ===== continuation @ rva 92ec16e (image 1892ec16e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892ec16e(void)

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



// ===== continuation @ rva 92ea351 (image 1892ea351) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892ea351(void)

{
  FUN_190ddfc90();
  (*_DAT_1812d5528)();
  return;
}



// ===== continuation @ rva 92eaf6b (image 1892eaf6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892eaf6b(void)

{
  (*_DAT_1812d77e8)();
  return;
}



// ===== continuation @ rva 92f6ec8 (image 1892f6ec8) =====

void FUN_1892f6ec8(void)

{
  return;
}



// ===== continuation @ rva 92ef1fc (image 1892ef1fc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892ef1fc(void)

{
  FUN_190ddce00();
  (*_DAT_1812d8870)();
  return;
}



// ===== continuation @ rva 92f6f34 (image 1892f6f34) =====

void FUN_1892f6f34(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92f678c (image 1892f678c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892f678c(void)

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



// ===== continuation @ rva 92f5aa1 (image 1892f5aa1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892f5aa1(void)

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



// ===== continuation @ rva 92f55e5 (image 1892f55e5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892f55e5(void)

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



// ===== continuation @ rva 92f58d8 (image 1892f58d8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892f58d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1812d85b0)();
  return;
}



// ===== continuation @ rva 92f6a1e (image 1892f6a1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892f6a1e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (**(code **)(*unaff_RSI + 0x570))();
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



// ===== continuation @ rva 92f6591 (image 1892f6591) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892f6591(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d8b50)();
  return;
}



// ===== continuation @ rva 92f549f (image 1892f549f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892f549f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  FUN_190dd72e0();
  (*_DAT_1812d8ca0)();
  return;
}



// ===== continuation @ rva 92fae07 (image 1892fae07) =====

void FUN_1892fae07(void)

{
  return;
}



// ===== continuation @ rva 92f7127 (image 1892f7127) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892f7127(void)

{
  FUN_190ddce00();
  (*_DAT_1812dada8)();
  return;
}



// ===== continuation @ rva 92fa218 (image 1892fa218) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fa218(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812daed8)();
  return;
}



// ===== continuation @ rva 92fae73 (image 1892fae73) =====

void FUN_1892fae73(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92faaae (image 1892faaae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892faaae(void)

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



// ===== continuation @ rva 92face1 (image 1892face1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892face1(void)

{
  FUN_190de3220();
  (*_DAT_1812daa68)();
  return;
}



// ===== continuation @ rva 92fabef (image 1892fabef) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fabef(void)

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



// ===== continuation @ rva 92fa26c (image 1892fa26c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fa26c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812daed8)();
  return;
}



// ===== continuation @ rva 92fa09d (image 1892fa09d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fa09d(void)

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



// ===== continuation @ rva 92fadf6 (image 1892fadf6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fadf6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1812dae18)();
  return;
}



// ===== continuation @ rva 92f98a5 (image 1892f98a5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892f98a5(void)

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



// ===== continuation @ rva 92fd08b (image 1892fd08b) =====

void FUN_1892fd08b(void)

{
  return;
}



// ===== continuation @ rva 92fb000 (image 1892fb000) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fb000(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1812dbd98)();
  return;
}



// ===== continuation @ rva 92fd043 (image 1892fd043) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fd043(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_1812dc188)();
  return;
}



// ===== continuation @ rva 92fcfef (image 1892fcfef) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fcfef(void)

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



// ===== continuation @ rva 92fb4f0 (image 1892fb4f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fb4f0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812dc128)();
  return;
}



// ===== continuation @ rva 92fbed1 (image 1892fbed1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fbed1(void)

{
  FUN_190ddfc90();
  (*_DAT_1812db808)();
  return;
}



// ===== continuation @ rva 92fd083 (image 1892fd083) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fd083(void)

{
  (*_DAT_1812dc128)();
  return;
}



// ===== continuation @ rva 92fb565 (image 1892fb565) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fb565(void)

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



// ===== continuation @ rva 92fc7e6 (image 1892fc7e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fc7e6(void)

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



// ===== continuation @ rva 92fc946 (image 1892fc946) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fc946(void)

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



// ===== continuation @ rva 92fcae4 (image 1892fcae4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fcae4(void)

{
  FUN_190ddfc90();
  (*_DAT_1812dbb88)();
  return;
}



// ===== continuation @ rva 92fd9fd (image 1892fd9fd) =====

void FUN_1892fd9fd(void)

{
  return;
}



// ===== continuation @ rva 92fd202 (image 1892fd202) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fd202(void)

{
  FUN_190ddce00();
  (*_DAT_1812dc5a8)();
  return;
}



// ===== continuation @ rva 92fda0a (image 1892fda0a) =====

void FUN_1892fda0a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92fd52c (image 1892fd52c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fd52c(void)

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



// ===== continuation @ rva 92fd9b2 (image 1892fd9b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fd9b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_1812dc4f8)();
  return;
}



// ===== continuation @ rva 92fd95e (image 1892fd95e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fd95e(void)

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



// ===== continuation @ rva 92fd2e8 (image 1892fd2e8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fd2e8(void)

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



// ===== continuation @ rva 92fd997 (image 1892fd997) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fd997(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812dc6d8)();
  return;
}



// ===== continuation @ rva 92fd49b (image 1892fd49b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fd49b(void)

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



// ===== continuation @ rva 92fd8f1 (image 1892fd8f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fd8f1(void)

{
  FUN_190ddfc90();
  (*_DAT_1812dc618)();
  return;
}



// ===== continuation @ rva 92fd9da (image 1892fd9da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fd9da(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_1812dc6b8)();
    return;
  }
  (*_DAT_1812dc6b8)();
  return;
}



// ===== continuation @ rva 92fdb8b (image 1892fdb8b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdb8b(void)

{
  FUN_190dd72e0();
  (*_DAT_1812dc808)();
  return;
}



// ===== continuation @ rva 92fdb18 (image 1892fdb18) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdb18(void)

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



// ===== continuation @ rva 92fdc4f (image 1892fdc4f) =====

void FUN_1892fdc4f(void)

{
  return;
}



// ===== continuation @ rva 92fdc59 (image 1892fdc59) =====

void FUN_1892fdc59(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92fdc28 (image 1892fdc28) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdc28(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812dc7d8)();
  return;
}



// ===== continuation @ rva 92fdb76 (image 1892fdb76) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fdb76(void)

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



// ===== continuation @ rva 92fdbb3 (image 1892fdbb3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fdbb3(void)

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



// ===== continuation @ rva 92fdc04 (image 1892fdc04) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fdc04(void)

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



// ===== continuation @ rva 92fdb51 (image 1892fdb51) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdb51(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812dc7f8)();
  return;
}



// ===== continuation @ rva 92fdd7b (image 1892fdd7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdd7b(void)

{
  FUN_190dd72e0();
  (*_DAT_1812dc8b8)();
  return;
}



// ===== continuation @ rva 92fdd08 (image 1892fdd08) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdd08(void)

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



// ===== continuation @ rva 92fde42 (image 1892fde42) =====

void FUN_1892fde42(void)

{
  return;
}



// ===== continuation @ rva 92fdd41 (image 1892fdd41) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdd41(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812dc8f8)();
  return;
}



// ===== continuation @ rva 92fde4c (image 1892fde4c) =====

void FUN_1892fde4c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92fdda3 (image 1892fdda3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fdda3(void)

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



// ===== continuation @ rva 92fddc4 (image 1892fddc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fddc4(void)

{
  FUN_190dd9df0();
  (*_DAT_1812dc8d8)();
  return;
}



// ===== continuation @ rva 92fddf7 (image 1892fddf7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fddf7(void)

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



// ===== continuation @ rva 92fdd66 (image 1892fdd66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fdd66(void)

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



// ===== continuation @ rva 92fdf66 (image 1892fdf66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdf66(void)

{
  FUN_190dd72e0();
  (*_DAT_1812dc968)();
  return;
}



// ===== continuation @ rva 92fdef3 (image 1892fdef3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdef3(void)

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



// ===== continuation @ rva 92fe046 (image 1892fe046) =====

void FUN_1892fe046(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92fdf8e (image 1892fdf8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fdf8e(void)

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



// ===== continuation @ rva 92fdf51 (image 1892fdf51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fdf51(void)

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



// ===== continuation @ rva 92fe03e (image 1892fe03e) =====

void FUN_1892fe03e(void)

{
  return;
}



// ===== continuation @ rva 92fe006 (image 1892fe006) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fe006(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812dc9e8)();
  return;
}



// ===== continuation @ rva 92fdf2c (image 1892fdf2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdf2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812dc978)();
  return;
}



// ===== continuation @ rva 92fdfaf (image 1892fdfaf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fdfaf(void)

{
  FUN_190dd9df0();
  (*_DAT_1812dc9c8)();
  return;
}



// ===== continuation @ rva 92fdfe2 (image 1892fdfe2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fdfe2(void)

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



// ===== continuation @ rva 92fe166 (image 1892fe166) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fe166(void)

{
  FUN_190dd72e0();
  (*_DAT_1812dcab8)();
  return;
}



// ===== continuation @ rva 92fe0f3 (image 1892fe0f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fe0f3(void)

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



// ===== continuation @ rva 92fe23e (image 1892fe23e) =====

void FUN_1892fe23e(void)

{
  return;
}



// ===== continuation @ rva 92fe1af (image 1892fe1af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fe1af(void)

{
  FUN_190dd9df0();
  (*_DAT_1812dca88)();
  return;
}



// ===== continuation @ rva 92fe12c (image 1892fe12c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fe12c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812dcac8)();
  return;
}



// ===== continuation @ rva 92fe246 (image 1892fe246) =====

void FUN_1892fe246(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 92fe22d (image 1892fe22d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fe22d(void)

{
  (*_DAT_1812dca68)();
  return;
}



// ===== continuation @ rva 92fe1e2 (image 1892fe1e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892fe1e2(void)

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



// ===== continuation @ rva 92fe206 (image 1892fe206) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892fe206(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812dca78)();
  return;
}



// ===== continuation @ rva 93711ed (image 1893711ed) =====

void FUN_1893711ed(void)

{
  return;
}



// ===== continuation @ rva 936e910 (image 18936e910) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936e910(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1812f7688)();
  return;
}



// ===== continuation @ rva 937108c (image 18937108c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18937108c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812f7008)();
  return;
}



// ===== continuation @ rva 9370c29 (image 189370c29) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189370c29(void)

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



// ===== continuation @ rva 9370e99 (image 189370e99) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189370e99(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_1812f73b8)();
  return;
}



// ===== continuation @ rva 93708cc (image 1893708cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893708cc(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812f6d78)();
  return;
}



// ===== continuation @ rva 936fa9d (image 18936fa9d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936fa9d(void)

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



// ===== continuation @ rva 9370e8e (image 189370e8e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189370e8e(void)

{
  (*_DAT_1812f75c8)();
  return;
}



// ===== continuation @ rva 936ea4b (image 18936ea4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936ea4b(void)

{
  FUN_190dd72e0();
  (*_DAT_1812f6b88)();
  return;
}



// ===== continuation @ rva 93710f2 (image 1893710f2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893710f2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812f6c38)();
  return;
}



// ===== continuation @ rva 936ed9c (image 18936ed9c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936ed9c(void)

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



// ===== continuation @ rva 937005b (image 18937005b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18937005b(void)

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



// ===== continuation @ rva 936fd1d (image 18936fd1d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936fd1d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812f7588)();
  return;
}



// ===== continuation @ rva 9304626 (image 189304626) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189304626(void)

{
  FUN_190dd72e0();
  (*_DAT_1812deb08)();
  return;
}



// ===== continuation @ rva 93045b3 (image 1893045b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893045b3(void)

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



// ===== continuation @ rva 93046fe (image 1893046fe) =====

void FUN_1893046fe(void)

{
  return;
}



// ===== continuation @ rva 930466f (image 18930466f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930466f(void)

{
  FUN_190dd9df0();
  (*_DAT_1812deae8)();
  return;
}



// ===== continuation @ rva 93046c6 (image 1893046c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893046c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812deb18)();
  return;
}



// ===== continuation @ rva 9304706 (image 189304706) =====

void FUN_189304706(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9304611 (image 189304611) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189304611(void)

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



// ===== continuation @ rva 93046a2 (image 1893046a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893046a2(void)

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



// ===== continuation @ rva 93045ec (image 1893045ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893045ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812dead8)();
  return;
}



// ===== continuation @ rva 930464e (image 18930464e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930464e(void)

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



// ===== continuation @ rva 930bec1 (image 18930bec1) =====

void FUN_18930bec1(void)

{
  return;
}



// ===== continuation @ rva 930486f (image 18930486f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930486f(void)

{
  FUN_190ddce00();
  (*_DAT_1812dedc8)();
  return;
}



// ===== continuation @ rva 930b73f (image 18930b73f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930b73f(void)

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



// ===== continuation @ rva 930beb9 (image 18930beb9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930beb9(void)

{
  (*_DAT_1812df008)();
  return;
}



// ===== continuation @ rva 930b961 (image 18930b961) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930b961(void)

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



// ===== continuation @ rva 930b457 (image 18930b457) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930b457(void)

{
  FUN_190dd72e0();
  (*_DAT_1812deda8)();
  return;
}



// ===== continuation @ rva 930bc22 (image 18930bc22) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930bc22(void)

{
  FUN_190ddfc90();
  (*_DAT_1812deeb8)();
  return;
}



// ===== continuation @ rva 930b4a0 (image 18930b4a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930b4a0(void)

{
  FUN_190ddfc90();
  (*_DAT_1812debf8)();
  return;
}



// ===== continuation @ rva 930bf2d (image 18930bf2d) =====

void FUN_18930bf2d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 930b4d3 (image 18930b4d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930b4d3(void)

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



// ===== continuation @ rva 9307355 (image 189307355) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189307355(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1812deff8)();
  return;
}



// ===== continuation @ rva 930c0b6 (image 18930c0b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c0b6(void)

{
  FUN_190dd72e0();
  (*_DAT_1812e0c98)();
  return;
}



// ===== continuation @ rva 930c043 (image 18930c043) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c043(void)

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



// ===== continuation @ rva 930c18c (image 18930c18c) =====

void FUN_18930c18c(void)

{
  return;
}



// ===== continuation @ rva 930c07c (image 18930c07c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c07c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e0c28)();
  return;
}



// ===== continuation @ rva 930c194 (image 18930c194) =====

void FUN_18930c194(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 930c0a1 (image 18930c0a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930c0a1(void)

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



// ===== continuation @ rva 930c156 (image 18930c156) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c156(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e0c68)();
  return;
}



// ===== continuation @ rva 930c17c (image 18930c17c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c17c(void)

{
  (*_DAT_1812e0c58)(0);
  return;
}



// ===== continuation @ rva 930c132 (image 18930c132) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930c132(void)

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



// ===== continuation @ rva 930c2b6 (image 18930c2b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c2b6(void)

{
  FUN_190dd72e0();
  (*_DAT_1812e0d28)();
  return;
}



// ===== continuation @ rva 930c243 (image 18930c243) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c243(void)

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



// ===== continuation @ rva 930c38b (image 18930c38b) =====

void FUN_18930c38b(void)

{
  return;
}



// ===== continuation @ rva 930c353 (image 18930c353) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c353(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e0d38)();
  return;
}



// ===== continuation @ rva 930c393 (image 18930c393) =====

void FUN_18930c393(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 930c2a1 (image 18930c2a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930c2a1(void)

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



// ===== continuation @ rva 930c2de (image 18930c2de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930c2de(void)

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



// ===== continuation @ rva 930c37a (image 18930c37a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c37a(void)

{
  (*_DAT_1812e0d68)();
  return;
}



// ===== continuation @ rva 930c27c (image 18930c27c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c27c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e0d18)();
  return;
}



// ===== continuation @ rva 930c2ff (image 18930c2ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c2ff(void)

{
  FUN_190dd9df0();
  (*_DAT_1812e0d78)();
  return;
}



// ===== continuation @ rva 9311744 (image 189311744) =====

void FUN_189311744(void)

{
  return;
}



// ===== continuation @ rva 930c523 (image 18930c523) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930c523(void)

{
  FUN_190ddce00();
  (*_DAT_1812e1318)();
  return;
}



// ===== continuation @ rva 9310ddb (image 189310ddb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189310ddb(void)

{
  FUN_190ddfc90();
  (*_DAT_1812e1678)();
  return;
}



// ===== continuation @ rva 93117b0 (image 1893117b0) =====

void FUN_1893117b0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 930facf (image 18930facf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930facf(void)

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



// ===== continuation @ rva 9310f04 (image 189310f04) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189310f04(void)

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



// ===== continuation @ rva 9310995 (image 189310995) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189310995(void)

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



// ===== continuation @ rva 930fe54 (image 18930fe54) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18930fe54(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1812e14b8)();
  return;
}



// ===== continuation @ rva 930fcd2 (image 18930fcd2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18930fcd2(void)

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



// ===== continuation @ rva 931173c (image 18931173c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18931173c(void)

{
  (*_DAT_1812e1518)();
  return;
}



// ===== continuation @ rva 9310149 (image 189310149) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189310149(void)

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



// ===== continuation @ rva 9311a1f (image 189311a1f) =====

void FUN_189311a1f(void)

{
  return;
}



// ===== continuation @ rva 9311937 (image 189311937) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189311937(void)

{
  FUN_190ddfc90();
  (*_DAT_1812e2768)();
  return;
}



// ===== continuation @ rva 9311a27 (image 189311a27) =====

void FUN_189311a27(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 931198e (image 18931198e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18931198e(void)

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



// ===== continuation @ rva 93119dd (image 1893119dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893119dd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812e2748)();
  return;
}



// ===== continuation @ rva 93119f6 (image 1893119f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893119f6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e2718)();
  return;
}



// ===== continuation @ rva 93119a4 (image 1893119a4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893119a4(void)

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



// ===== continuation @ rva 931196a (image 18931196a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18931196a(void)

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



// ===== continuation @ rva 93157bf (image 1893157bf) =====

void FUN_1893157bf(void)

{
  return;
}



// ===== continuation @ rva 9311b77 (image 189311b77) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189311b77(void)

{
  FUN_190ddce00();
  (*_DAT_1812e2bb8)();
  return;
}



// ===== continuation @ rva 9315684 (image 189315684) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189315684(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1812e2a98)();
  return;
}



// ===== continuation @ rva 9315626 (image 189315626) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189315626(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e2a18)();
  return;
}



// ===== continuation @ rva 931560b (image 18931560b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18931560b(void)

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



// ===== continuation @ rva 931582b (image 18931582b) =====

void FUN_18931582b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93151b6 (image 1893151b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893151b6(void)

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



// ===== continuation @ rva 93157b7 (image 1893157b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893157b7(void)

{
  (*_DAT_1812e2a58)();
  return;
}



// ===== continuation @ rva 93154e3 (image 1893154e3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893154e3(void)

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



// ===== continuation @ rva 93156bb (image 1893156bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893156bb(void)

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



// ===== continuation @ rva 93155ea (image 1893155ea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893155ea(void)

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



// ===== continuation @ rva 9311bce (image 189311bce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189311bce(void)

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



// ===== continuation @ rva 931610e (image 18931610e) =====

void FUN_18931610e(void)

{
  return;
}



// ===== continuation @ rva 9315950 (image 189315950) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189315950(void)

{
  FUN_190ddce00();
  (*_DAT_1812e3b58)();
  return;
}



// ===== continuation @ rva 931615c (image 18931615c) =====

void FUN_18931615c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9316139 (image 189316139) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189316139(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_1812e3ad8)();
    return;
  }
  (*_DAT_1812e3ad8)();
  return;
}



// ===== continuation @ rva 93159c8 (image 1893159c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893159c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_1812e3918)();
  return;
}



// ===== continuation @ rva 9315f22 (image 189315f22) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189315f22(void)

{
  (*_DAT_1812e3b88)();
  return;
}



// ===== continuation @ rva 93160fd (image 1893160fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893160fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1812e3ad8)();
  return;
}



// ===== continuation @ rva 931609f (image 18931609f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18931609f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e3a48)();
  return;
}



// ===== continuation @ rva 9315bb6 (image 189315bb6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189315bb6(void)

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



// ===== continuation @ rva 931611a (image 18931611a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18931611a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1812e3838)();
  return;
}



// ===== continuation @ rva 9315da7 (image 189315da7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189315da7(void)

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



// ===== continuation @ rva 931795a (image 18931795a) =====

void FUN_18931795a(void)

{
  return;
}



// ===== continuation @ rva 931626c (image 18931626c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18931626c(void)

{
  FUN_190ddce00();
  (*_DAT_1812e3d78)();
  return;
}



// ===== continuation @ rva 931796e (image 18931796e) =====

void FUN_18931796e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9316514 (image 189316514) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189316514(void)

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



// ===== continuation @ rva 9316e6f (image 189316e6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189316e6f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1812e42c8)();
  return;
}



// ===== continuation @ rva 93162c3 (image 1893162c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893162c3(void)

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



// ===== continuation @ rva 931791d (image 18931791d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18931791d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e4048)();
  return;
}



// ===== continuation @ rva 9316451 (image 189316451) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189316451(void)

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



// ===== continuation @ rva 93174fb (image 1893174fb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893174fb(void)

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



// ===== continuation @ rva 93176dc (image 1893176dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893176dc(void)

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



// ===== continuation @ rva 9316906 (image 189316906) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189316906(void)

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



// ===== continuation @ rva 9317b1b (image 189317b1b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189317b1b(void)

{
  FUN_190dd72e0();
  (*_DAT_1812e44f8)();
  return;
}



// ===== continuation @ rva 9317aa8 (image 189317aa8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189317aa8(void)

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



// ===== continuation @ rva 9317fb3 (image 189317fb3) =====

void FUN_189317fb3(void)

{
  return;
}



// ===== continuation @ rva 9317ec0 (image 189317ec0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189317ec0(void)

{
  FUN_190ddfc90();
  (*_DAT_1812e4628)();
  return;
}



// ===== continuation @ rva 9317cff (image 189317cff) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189317cff(void)

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



// ===== continuation @ rva 9317cad (image 189317cad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189317cad(void)

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



// ===== continuation @ rva 9317d7f (image 189317d7f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189317d7f(void)

{
  FUN_190ddfc90();
  (*_DAT_1812e4528)();
  return;
}



// ===== continuation @ rva 9317d36 (image 189317d36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189317d36(void)

{
  FUN_190dd72e0();
  (*_DAT_1812e4538)();
  return;
}



// ===== continuation @ rva 9317f7f (image 189317f7f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189317f7f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1812e4548)();
  return;
}



// ===== continuation @ rva 9317e25 (image 189317e25) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189317e25(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1812e4488)();
  return;
}



// ===== continuation @ rva 9317b97 (image 189317b97) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189317b97(void)

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



// ===== continuation @ rva 9324b54 (image 189324b54) =====

void FUN_189324b54(void)

{
  return;
}



// ===== continuation @ rva 93200c8 (image 1893200c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893200c8(void)

{
  FUN_190ddce00();
  (*_DAT_1812e6f08)();
  return;
}



// ===== continuation @ rva 9324e5c (image 189324e5c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189324e5c(void)

{
  longlong *in_stack_000000b0;
  
  (**(code **)(*in_stack_000000b0 + 0x1f8))(in_stack_000000b0);
  (**(code **)(*in_stack_000000b0 + 0x720))(in_stack_000000b0);
  (*_DAT_1812e7348)();
  return;
}



// ===== continuation @ rva 9324576 (image 189324576) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189324576(void)

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



// ===== continuation @ rva 9320140 (image 189320140) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189320140(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_1812e7448)();
  return;
}



// ===== continuation @ rva 93248ce (image 1893248ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893248ce(void)

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



// ===== continuation @ rva 9324198 (image 189324198) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189324198(void)

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



// ===== continuation @ rva 9323ea7 (image 189323ea7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189323ea7(void)

{
  FUN_190dd72e0();
  (*_DAT_1812e7198)();
  return;
}



// ===== continuation @ rva 9324e9d (image 189324e9d) =====

void FUN_189324e9d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9323b8a (image 189323b8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189323b8a(void)

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



// ===== continuation @ rva 9324b43 (image 189324b43) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189324b43(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1812e77f8)();
  return;
}



// ===== continuation @ rva 9324ae5 (image 189324ae5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189324ae5(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e6ea8)();
  return;
}



// ===== continuation @ rva 93298bb (image 1893298bb) =====

void FUN_1893298bb(void)

{
  return;
}



// ===== continuation @ rva 932508a (image 18932508a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18932508a(void)

{
  FUN_190ddce00();
  (*_DAT_1812e8488)();
  return;
}



// ===== continuation @ rva 9329927 (image 189329927) =====

void FUN_189329927(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9328d60 (image 189328d60) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189328d60(void)

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



// ===== continuation @ rva 93296b8 (image 1893296b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893296b8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812e8888)();
  return;
}



// ===== continuation @ rva 9328df3 (image 189328df3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189328df3(void)

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



// ===== continuation @ rva 932987c (image 18932987c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18932987c(void)

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



// ===== continuation @ rva 9329145 (image 189329145) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189329145(void)

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



// ===== continuation @ rva 9328984 (image 189328984) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189328984(void)

{
  FUN_190dd72e0();
  (*_DAT_1812e8818)();
  return;
}



// ===== continuation @ rva 93298ac (image 1893298ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893298ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1812e8878)();
  return;
}



// ===== continuation @ rva 93290b6 (image 1893290b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893290b6(void)

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



// ===== continuation @ rva 9325142 (image 189325142) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189325142(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000060;
  undefined8 uStack00000000000000b8;
  
  uStack0000000000000060 = 0x5e8ad02dd61f;
  uStack0000000000000048 = 0x5e8ad02dd61f;
  uStack00000000000000b8 = in_stack_00000040;
  (*_DAT_1812e8a88)();
  return;
}



// ===== continuation @ rva 932d9ba (image 18932d9ba) =====

void FUN_18932d9ba(void)

{
  return;
}



// ===== continuation @ rva 9329b17 (image 189329b17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189329b17(void)

{
  FUN_190ddce00();
  (*_DAT_1812e9ca8)();
  return;
}



// ===== continuation @ rva 9330505 (image 189330505) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189330505(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812ea058)();
  return;
}



// ===== continuation @ rva 932ec9a (image 18932ec9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18932ec9a(void)

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



// ===== continuation @ rva 9330c55 (image 189330c55) =====

void FUN_189330c55(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93300d5 (image 1893300d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893300d5(void)

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



// ===== continuation @ rva 932fdb6 (image 18932fdb6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18932fdb6(void)

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



// ===== continuation @ rva 932f29e (image 18932f29e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18932f29e(void)

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



// ===== continuation @ rva 932f46a (image 18932f46a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18932f46a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812e9a48)();
  return;
}



// ===== continuation @ rva 932dd2c (image 18932dd2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18932dd2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1812e9dc8)();
  return;
}



// ===== continuation @ rva 9330043 (image 189330043) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189330043(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812e9e28)();
  return;
}



// ===== continuation @ rva 932e747 (image 18932e747) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18932e747(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x538))();
  FUN_184117d80();
  (*_DAT_1812ea9f8)();
  return;
}



// ===== continuation @ rva 932f1fe (image 18932f1fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18932f1fe(void)

{
  (*_DAT_1812eaa08)();
  return;
}



// ===== continuation @ rva 9330e1b (image 189330e1b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189330e1b(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ebb28)();
  return;
}



// ===== continuation @ rva 9330da8 (image 189330da8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189330da8(void)

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



// ===== continuation @ rva 93312bd (image 1893312bd) =====

void FUN_1893312bd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 933119f (image 18933119f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933119f(void)

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



// ===== continuation @ rva 933105e (image 18933105e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933105e(void)

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



// ===== continuation @ rva 93312a1 (image 1893312a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893312a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812ebb88)();
  return;
}



// ===== continuation @ rva 93312b3 (image 1893312b3) =====

void FUN_1893312b3(void)

{
  return;
}



// ===== continuation @ rva 9330e64 (image 189330e64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189330e64(void)

{
  FUN_190dd9df0();
  (*_DAT_1812ebaf8)();
  return;
}



// ===== continuation @ rva 9330ebb (image 189330ebb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189330ebb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812eba38)();
  return;
}



// ===== continuation @ rva 93310b2 (image 1893310b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893310b2(void)

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



// ===== continuation @ rva 9330f97 (image 189330f97) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189330f97(void)

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



// ===== continuation @ rva 9331450 (image 189331450) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189331450(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ebff8)();
  return;
}



// ===== continuation @ rva 93313d2 (image 1893313d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893313d2(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812ebcd8)();
  return;
}



// ===== continuation @ rva 933297b (image 18933297b) =====

void FUN_18933297b(void)

{
  return;
}



// ===== continuation @ rva 9331a68 (image 189331a68) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189331a68(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1812ebdd8)();
  return;
}



// ===== continuation @ rva 9332973 (image 189332973) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189332973(void)

{
  (*_DAT_1812ec258)();
  return;
}



// ===== continuation @ rva 93321dd (image 1893321dd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893321dd(void)

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



// ===== continuation @ rva 9331cc3 (image 189331cc3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189331cc3(void)

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



// ===== continuation @ rva 9331575 (image 189331575) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189331575(void)

{
  FUN_190ddfc90();
  (*_DAT_1812ec238)();
  return;
}



// ===== continuation @ rva 93319d8 (image 1893319d8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893319d8(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812ebda8)();
  return;
}



// ===== continuation @ rva 933292d (image 18933292d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933292d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1812ec1e8)();
  return;
}



// ===== continuation @ rva 9331517 (image 189331517) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189331517(void)

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



// ===== continuation @ rva 93318ad (image 1893318ad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893318ad(void)

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



// ===== continuation @ rva 9333f0b (image 189333f0b) =====

undefined8 FUN_189333f0b(void)

{
  return 0;
}



// ===== continuation @ rva 9332b86 (image 189332b86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189332b86(void)

{
  FUN_190ddce00();
  (*_DAT_1812ec658)();
  return;
}



// ===== continuation @ rva 9333edf (image 189333edf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189333edf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812ec458)();
  return;
}



// ===== continuation @ rva 9332f66 (image 189332f66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189332f66(void)

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



// ===== continuation @ rva 9333f21 (image 189333f21) =====

void FUN_189333f21(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9333d49 (image 189333d49) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189333d49(void)

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



// ===== continuation @ rva 9333dd5 (image 189333dd5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189333dd5(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ec478)();
  return;
}



// ===== continuation @ rva 93336b7 (image 1893336b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893336b7(void)

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



// ===== continuation @ rva 9333160 (image 189333160) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189333160(void)

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



// ===== continuation @ rva 9333cf5 (image 189333cf5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189333cf5(void)

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



// ===== continuation @ rva 9333dfd (image 189333dfd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189333dfd(void)

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



// ===== continuation @ rva 933bc26 (image 18933bc26) =====

void FUN_18933bc26(void)

{
  return;
}



// ===== continuation @ rva 93340ef (image 1893340ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893340ef(void)

{
  FUN_190ddce00();
  (*_DAT_1812ecba8)();
  return;
}



// ===== continuation @ rva 933bb15 (image 18933bb15) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933bb15(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ecc78)();
  return;
}



// ===== continuation @ rva 933bc92 (image 18933bc92) =====

void FUN_18933bc92(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 933b1c0 (image 18933b1c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933b1c0(void)

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



// ===== continuation @ rva 933b133 (image 18933b133) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933b133(void)

{
  FUN_190ddfc90();
  (*_DAT_1812ed038)();
  return;
}



// ===== continuation @ rva 933b061 (image 18933b061) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933b061(void)

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



// ===== continuation @ rva 9334122 (image 189334122) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189334122(void)

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



// ===== continuation @ rva 933aebf (image 18933aebf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933aebf(void)

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



// ===== continuation @ rva 933b9dc (image 18933b9dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933b9dc(void)

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



// ===== continuation @ rva 933bfc8 (image 18933bfc8) =====

void FUN_18933bfc8(void)

{
  return;
}



// ===== continuation @ rva 933bdec (image 18933bdec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933bdec(void)

{
  FUN_190ddfc90();
  (*_DAT_1812eebf8)();
  return;
}



// ===== continuation @ rva 933bfd2 (image 18933bfd2) =====

void FUN_18933bfd2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 933beae (image 18933beae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933beae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812eec68)();
  return;
}



// ===== continuation @ rva 933be1f (image 18933be1f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933be1f(void)

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



// ===== continuation @ rva 933beec (image 18933beec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933beec(void)

{
  FUN_190ddfc90();
  (*_DAT_1812eec38)();
  return;
}



// ===== continuation @ rva 933be59 (image 18933be59) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933be59(void)

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



// ===== continuation @ rva 933bfa0 (image 18933bfa0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933bfa0(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812eebe8)();
  return;
}



// ===== continuation @ rva 933bf63 (image 18933bf63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933bf63(void)

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



// ===== continuation @ rva 933bf24 (image 18933bf24) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933bf24(void)

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



// ===== continuation @ rva 933be43 (image 18933be43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933be43(void)

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



// ===== continuation @ rva 933c184 (image 18933c184) =====

void FUN_18933c184(void)

{
  return;
}



// ===== continuation @ rva 933c0dd (image 18933c0dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c0dd(void)

{
  FUN_190ddce00();
  (*_DAT_1812eecf8)();
  return;
}



// ===== continuation @ rva 933c155 (image 18933c155) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c155(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d8))();
  (*_DAT_1812eed28)();
  return;
}



// ===== continuation @ rva 933c18c (image 18933c18c) =====

void FUN_18933c18c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 933c110 (image 18933c110) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c110(void)

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



// ===== continuation @ rva 933c134 (image 18933c134) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c134(void)

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



// ===== continuation @ rva 933c172 (image 18933c172) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c172(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812eed18)();
  return;
}



// ===== continuation @ rva 933c1ba (image 18933c1ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c1ba(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1812eed68)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 933c1c6 (image 18933c1c6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c1c6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 933c1e3 (image 18933c1e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c1e3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1812eed58)();
  return;
}



// ===== continuation @ rva 933c1ec (image 18933c1ec) =====

void FUN_18933c1ec(void)

{
  return;
}



// ===== continuation @ rva 933c6ca (image 18933c6ca) =====

void FUN_18933c6ca(void)

{
  return;
}



// ===== continuation @ rva 933c61a (image 18933c61a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c61a(void)

{
  FUN_190ddce00();
  (*_DAT_1812eef08)();
  return;
}



// ===== continuation @ rva 933c6d2 (image 18933c6d2) =====

void FUN_18933c6d2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 933c64d (image 18933c64d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c64d(void)

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



// ===== continuation @ rva 933c6ac (image 18933c6ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c6ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812eef48)(0);
  return;
}



// ===== continuation @ rva 933c671 (image 18933c671) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c671(void)

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



// ===== continuation @ rva 933c692 (image 18933c692) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c692(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x490))();
  (*_DAT_1812eef18)();
  return;
}



// ===== continuation @ rva 933c70a (image 18933c70a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c70a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1812eef88)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 933c716 (image 18933c716) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c716(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 933c73d (image 18933c73d) =====

undefined4 * FUN_18933c73d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 933c73c (image 18933c73c) =====

void FUN_18933c73c(void)

{
  return;
}



// ===== continuation @ rva 933c83f (image 18933c83f) =====

void FUN_18933c83f(void)

{
  return;
}



// ===== continuation @ rva 933c7aa (image 18933c7aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c7aa(void)

{
  FUN_190de3220();
  (*_DAT_1812eefc8)();
  return;
}



// ===== continuation @ rva 933c801 (image 18933c801) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c801(void)

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



// ===== continuation @ rva 933c847 (image 18933c847) =====

void FUN_18933c847(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 933c7dd (image 18933c7dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c7dd(void)

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



// ===== continuation @ rva 933c834 (image 18933c834) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c834(void)

{
  (*_DAT_1812eefb8)();
  return;
}



// ===== continuation @ rva 933c8aa (image 18933c8aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c8aa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1812ef008)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 933c8b6 (image 18933c8b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18933c8b6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 933c8d3 (image 18933c8d3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933c8d3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1812ef018)();
  return;
}



// ===== continuation @ rva 933c8dc (image 18933c8dc) =====

void FUN_18933c8dc(void)

{
  return;
}



// ===== continuation @ rva 933c8dd (image 18933c8dd) =====

undefined4 * FUN_18933c8dd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 933ca88 (image 18933ca88) =====

void FUN_18933ca88(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x68) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018933cab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812ef560 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 933ca33 (image 18933ca33) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018933ca6a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18933ca33(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 933cc90 (image 18933cc90) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933cc90(void)

{
  undefined1 auVar1 [16];
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong lVar2;
  longlong in_R9;
  ulonglong unaff_R12;
  uint unaff_R13D;
  longlong unaff_R15;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  
  _DAT_18320e2d0 = func_0x000189366aa0(_DAT_18320e0d0 + 0xffe2ff8378ffe1ff ^ 0xdb);
  _DAT_18320e320 = (_DAT_18320e320 ^ _DAT_18320e2d0 ^ 0x2c) + 0xfe ^ 0xafe12b608eed1cb;
  _DAT_18320e118 = (_DAT_18320e118 * 0x15b825ca0a620faf ^ _DAT_18320e320) + (_DAT_18320e2d0 ^ 0x2c);
  _DAT_18320e168 = _DAT_18320e118 ^ _DAT_18320e320;
  _DAT_18320df88 = 0xfe;
  uVar3 = (_DAT_18320e2e0 ^ _DAT_180f47600) + _DAT_18320e2a0 + unaff_RDI;
  uVar5 = (_DAT_18320e2a0 ^ _UNK_180f47608) + _DAT_18320e2e0 + 0xd8;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18320e2e0 ^ _DAT_180f47600;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18320e2a0 ^ _UNK_180f47608;
  _DAT_18320e2f0 =
       func_0x000189366aa0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18320e2e0 + 0xd8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18320e2a0 + unaff_RDI));
  uVar3 = _DAT_18320e2f0 & 0xfffffffffffff;
  _DAT_18320dfb8 = _DAT_18320e368 ^ uVar3 ^ 0x108;
  _DAT_18320e100 = (_DAT_18320e100 ^ uVar3) + 0x108 ^ 0xb825db47edabf059;
  _DAT_18320df20 = (_DAT_18320df20 * 0x37cc187f00d0aec3 ^ _DAT_18320e100) + uVar3;
  _DAT_18320e090 = _DAT_18320df20 ^ _DAT_18320e100;
  _DAT_18320e2e8 = 8;
  uVar3 = (~_DAT_18320e4f8 + 0x29) *
          ((_DAT_18320e3d0 ^ 0x8422232d) + (ulonglong)((uint)_DAT_18320e3d0 & 0x8422232d) * 2);
  uVar3 = (uVar3 | _DAT_18320e478) + (uVar3 & _DAT_18320e478);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18320e308 = func_0x000189366aa0((uVar3 | 0x84222305) + (ulonglong)((uint)uVar3 & 0x84222305))
  ;
  uVar3 = _DAT_18320e308 & 0x1fffffff0000000;
  _DAT_18320e3a0 = _DAT_18320e0d8 ^ uVar3 ^ 0x30;
  _DAT_18320e370 = (_DAT_18320e370 ^ uVar3) + 0x30 ^ 0x480514fed81f86c1;
  _DAT_18320e130 = (_DAT_18320e130 * 0x58d7a4b7dac6f08f ^ _DAT_18320e370) + uVar3;
  _DAT_18320df78 = _DAT_18320e130 ^ _DAT_18320e370;
  _DAT_18320df18 = 0x30;
  _DAT_18320e2d8 = func_0x000189366aa0(_DAT_18320e3b0 + 0x21008460ffe1ffU ^ 0xd0);
  uVar3 = _DAT_18320e2d8 ^ 0x84;
  _DAT_18320e428 = _DAT_18320e3c8 ^ uVar3 ^ 0xe4;
  _DAT_18320e138 = (_DAT_18320e138 ^ uVar3) + 0xe4 ^ 0xc3526a88ce9772c3;
  _DAT_18320e348 = (_DAT_18320e348 * 0x57a650d137936a51 ^ _DAT_18320e138) + uVar3;
  _DAT_18320e228 = _DAT_18320e348 ^ _DAT_18320e138;
  _DAT_18320e370 = 0xe4;
  uVar3 = (~_DAT_18320e3c0 + 0x4d) *
          ((_DAT_18320dfc0 ^ 0x842223c1) + (ulonglong)((uint)_DAT_18320dfc0 & 0x842223c1) * 2);
  uVar3 = (uVar3 | _DAT_18320df18) + (uVar3 & _DAT_18320df18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18320e1b0 = func_0x000189366aa0((uVar3 | 0x8422238d) + (ulonglong)((uint)uVar3 & 0x8422238d))
  ;
  uVar3 = _DAT_18320e2c8 - (_DAT_18320e2c8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18320e2c8;
  _DAT_18320e0e8 = _DAT_18320e470 ^ uVar3 ^ 0x130;
  _DAT_18320e498 = (_DAT_18320e498 ^ uVar3) + 0x130 ^ 0x33555d7e54af1e0d;
  _DAT_18320e440 = (_DAT_18320e440 * -0x743b289a4ad940e5 ^ _DAT_18320e498) + uVar3;
  _DAT_18320e1f8 = _DAT_18320e440 ^ _DAT_18320e498;
  _DAT_18320e3b0 = 0x30;
  uVar3 = (_DAT_18320e2e0 ^ _DAT_1812f0290) + _DAT_18320e2b8 + 0x842223e1;
  uVar5 = (_DAT_18320e2b8 ^ _UNK_1812f0298) + _DAT_18320e2e0 + 0x6c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18320e2e0 ^ _DAT_1812f0290;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18320e2b8 ^ _UNK_1812f0298;
  _DAT_18320dff8 =
       func_0x000189366aa0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18320e2e0 + 0x6c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18320e2b8 + 0x842223e1));
  uVar5 = _UNK_1812f02a8;
  uVar3 = _DAT_1812f02a0;
  _DAT_18320e388 = _DAT_18320e280 ^ _DAT_18320dff8 ^ 0x130;
  _DAT_18320e1c0 = (_DAT_18320e1c0 ^ _DAT_18320dff8) + 0x130 ^ 0x439788eb8c6f729e;
  _DAT_18320e070 = (_DAT_18320e070 * 0x46d17df59f7c130d ^ _DAT_18320e1c0) + _DAT_18320dff8;
  _DAT_18320e120 = _DAT_18320e070 ^ _DAT_18320e1c0;
  _DAT_18320e038 = 0x30;
  uVar4 = (_DAT_18320e018 ^ _DAT_1812f02a0) + _DAT_18320e0b8 + unaff_R15;
  uVar6 = (_DAT_18320e0b8 ^ _UNK_1812f02a8) + _DAT_18320e018 + 0x78;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18320e018 ^ _DAT_1812f02a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18320e0b8 ^ _UNK_1812f02a8;
  _DAT_18320e3f0 =
       func_0x000189366aa0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18320e018 + 0x78) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18320e0b8 + unaff_R15));
  uVar4 = _DAT_18320e3f0 ^ 0x77ee;
  _DAT_18320e3c8 = _DAT_18320e0d8 ^ uVar4 ^ 0x176;
  _DAT_18320e1f8 = (_DAT_18320e1f8 ^ uVar4) + 0x176 ^ 0x9dacc4fa93dab7cf;
  _DAT_18320e130 = (_DAT_18320e130 * 0x72bfb2d10a58413d ^ _DAT_18320e1f8) + uVar4;
  _DAT_18320e468 = _DAT_18320e130 ^ _DAT_18320e1f8;
  _DAT_18320df10 = 0x76;
  _DAT_18320e4b0 = func_0x000189366aa0(_DAT_18320e250 ^ 0x1d00839cffddb4);
  uVar4 = (_DAT_18320e4b0 ^ 0xfe) << 0x2c | _DAT_18320e4b0 >> 0x14;
  _DAT_18320e078 = (_DAT_18320e078 ^ uVar4) + 0x86 ^ 0xa8228e5f266fc9c0;
  _DAT_18320e300 = (_DAT_18320e300 * -0x27bda9359dbcb1c1 ^ _DAT_18320e078) + uVar4;
  _DAT_18320e488 = _DAT_18320e300 ^ _DAT_18320e078;
  _DAT_18320e288 = 0x86;
  uVar4 = (_DAT_18320e4c0 ^ uVar3) + _DAT_18320e010 + unaff_R15;
  uVar6 = (_DAT_18320e010 ^ uVar5) + _DAT_18320e4c0 + 0x78;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18320e4c0 ^ uVar3;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18320e010 ^ uVar5;
  _DAT_18320e4d8 =
       func_0x000189366aa0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18320e4c0 + 0x78) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18320e010 + unaff_R15));
  _DAT_18320e000 = (_DAT_18320e000 ^ _DAT_18320e4d8 ^ 0x86) + 0x78 ^ 0x28172c400090fd28;
  _DAT_18320e450 = (_DAT_18320e450 * -0xabcff228251b751 ^ _DAT_18320e000) + (_DAT_18320e4d8 ^ 0x86);
  _DAT_18320e398 = _DAT_18320e450 ^ _DAT_18320e000;
  _DAT_18320df88 = 0x78;
  _DAT_18320e060 = func_0x000189366aa0(_DAT_18320e488 + 0xffdeff7bcd0021ff ^ 0x2a);
  uVar3 = (ulonglong)(((uint)_DAT_18320e060 ^ 6) & 0x86);
  _DAT_18320e118 = _DAT_18320e130 ^ uVar3 ^ 0x176;
  _DAT_18320e098 = (_DAT_18320e098 ^ uVar3) + 0x176 ^ 0x928c8df1bdfb4418;
  _DAT_18320e070 = (_DAT_18320e070 * 0x2e6b7647b1a20983 ^ _DAT_18320e098) + uVar3;
  _DAT_18320dfb8 = _DAT_18320e070 ^ _DAT_18320e098;
  _DAT_18320e110 = 0x76;
  uVar3 = ((_DAT_18320e258 ^ unaff_RDI) + (ulonglong)((uint)_DAT_18320e258 & 0x84222315) * 2) *
          -_DAT_18320e1c8;
  uVar3 = (uVar3 | _DAT_18320e1f0) + (uVar3 & _DAT_18320e1f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18320e1a8 = func_0x000189366aa0((uVar3 | unaff_RDI) + (ulonglong)((uint)uVar3 & 0x84222315));
  uVar3 = _DAT_18320e1a8 << 9 | _DAT_18320e1a8 >> 0x37;
  _DAT_18320e430 = _DAT_18320e110 ^ uVar3 ^ 0x30;
  _DAT_18320e198 = (_DAT_18320e198 ^ uVar3) + 0x30 ^ 0x300a15e9b72fdffa;
  _DAT_18320df00 = (_DAT_18320df00 * -0x3d84cf29ded5cead ^ _DAT_18320e198) + uVar3;
  _DAT_18320e070 = _DAT_18320df00 ^ _DAT_18320e198;
  _DAT_18320df38 = 0x30;
  _DAT_18320e1a8 = func_0x000189366aa0(_DAT_18320e1e0 ^ 0x22ff7be3ffddae);
  uVar3 = ((_DAT_18320e1a8 & 0xffffffff) * (ulonglong)_DAT_1812f02c0 +
           (_DAT_18320e1a8 >> 0x20) * (ulonglong)_DAT_1812f02b0 << 0x20) +
          (_DAT_18320e1a8 & 0xffffffff) * (ulonglong)_DAT_1812f02b0 & 0x7fffffffffffffff;
  _DAT_18320e350 = (_DAT_18320e350 ^ uVar3) + 1 ^ 0x2929e0dbe3d19afd;
  _DAT_18320e150 = (_DAT_18320e150 * 0x129e2ee12b23906d ^ _DAT_18320e350) + uVar3;
  _DAT_18320e4b8 = _DAT_18320e150 ^ _DAT_18320e350;
  _DAT_18320e488 = 1;
  uVar3 = (_DAT_18320e0a0 ^ _DAT_1803d59d0) + _DAT_18320e0d0 + unaff_R15;
  uVar5 = (_DAT_18320e0d0 ^ _UNK_1803d59d8) + _DAT_18320e0a0 + 1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18320e0a0 ^ _DAT_1803d59d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18320e0d0 ^ _UNK_1803d59d8;
  _DAT_18320e118 =
       func_0x000189366aa0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18320e0a0 + 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18320e0d0 + unaff_R15));
  uVar3 = _DAT_18320e118 * 0x2b62782b4b0febb9 & 0x1fffffe000;
  _DAT_18320df68 = _DAT_18320df68 ^ uVar3 ^ 0xda02e10826b174c6;
  _DAT_18320e478 = (_DAT_18320e478 * -0x2ae079a588b2b1a5 ^ _DAT_18320df68) + uVar3;
  _DAT_18320df50 = _DAT_18320e478 ^ _DAT_18320df68;
  _DAT_18320df58 = 0;
  uVar3 = (_DAT_18320e100 ^ unaff_RDI) + _DAT_18320e3d8 + unaff_RDI;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18320e100 ^ unaff_RDI;
  uVar5 = ((_DAT_18320e3d8 + _DAT_18320e100) * 0x2000 | _DAT_18320e3d8 + _DAT_18320e100 >> 0x33) ^
          _DAT_18320e3d8;
  _DAT_18320e450 =
       func_0x000189366aa0((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_18320e100 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18320e3d8 + unaff_RDI));
  uVar3 = _DAT_18320e450 << 0x3b | _DAT_18320e450 >> 5;
  _DAT_18320e0b0 = _DAT_18320e0b0 ^ uVar3 ^ 0x30;
  _DAT_18320e0b8 = (_DAT_18320e0b8 ^ uVar3) + 0x30 ^ 0xf05bae8d86294fff;
  _DAT_18320e318 = (_DAT_18320e318 * 0x70701c56d51c3d6b ^ _DAT_18320e0b8) + uVar3;
  _DAT_18320e038 = _DAT_18320e318 ^ _DAT_18320e0b8;
  _DAT_18320df30 = 0x30;
  uVar3 = (~_DAT_18320e300 + 0xf3) *
          ((_DAT_18320e330 ^ 0x842223d7) + (ulonglong)((uint)_DAT_18320e330 & 0x842223d7) * 2);
  uVar3 = (uVar3 | _DAT_18320e0c0) + (uVar3 & _DAT_18320e0c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18320e228 = func_0x000189366aa0((uVar3 | unaff_R12) + (ulonglong)((uint)uVar3 & 0x84222325));
  _DAT_18320df90 = _DAT_18320df90 ^ _DAT_18320e228 ^ 0xe4c4 ^ 0x953c0f5fa77722ab;
  _DAT_18320e4e8 =
       (_DAT_18320e4e8 * -0x2b19bd079008843f ^ _DAT_18320df90) + (_DAT_18320e228 ^ 0xe4c4);
  _DAT_18320e2b0 = _DAT_18320e4e8 ^ _DAT_18320df90;
  _DAT_18320e420 = 0;
  uVar3 = ((_DAT_18320e3c8 ^ unaff_RDI) + (ulonglong)((uint)_DAT_18320e3c8 & 0x84222315) * 2) *
          -_DAT_18320e2a0;
  uVar3 = (uVar3 | _DAT_18320e3d0) + (uVar3 & _DAT_18320e3d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18320e4e0 = func_0x000189366aa0((uVar3 | unaff_RDI) + (ulonglong)((uint)uVar3 & 0x84222315));
  uVar3 = (ulonglong)((uint)_DAT_18320e4e0 & 0x30);
  _DAT_18320e360 = _DAT_18320e280 ^ uVar3 ^ 0x30;
  _DAT_18320e168 = (_DAT_18320e168 ^ uVar3) + 0x30 ^ 0x468395f38ffc2969;
  _DAT_18320e138 = (_DAT_18320e138 * -0x53f09faf82c1679d ^ _DAT_18320e168) + uVar3;
  _DAT_18320e150 = _DAT_18320e138 ^ _DAT_18320e168;
  _DAT_18320df28 = 0x30;
  uVar5 = (ulonglong)(unaff_R13D + (uint)((ulonglong)unaff_R13D * in_R9 >> 0x23) * -10 & 0xff);
  uVar3 = (~_DAT_18320df70 + 0x31) *
          ((uVar5 ^ unaff_R12 ^ _DAT_18320e4f0) +
          (ulonglong)((uint)_DAT_18320e4f0 & (uint)(uVar5 ^ unaff_R12)) * 2);
  uVar3 = (uVar3 | _DAT_18320e2f8) + (uVar3 & _DAT_18320e2f8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18320df78 =
       func_0x000189366aa0((uVar5 ^ unaff_RDI | uVar3) +
                           (ulonglong)((uint)(uVar5 ^ unaff_RDI) & (uint)uVar3));
  uVar5 = uVar5 | 0x30;
  _DAT_18320e2e8 = (_DAT_18320e2e8 ^ _DAT_18320df78) + uVar5 ^ 0x122b07bd17263a6e;
  _DAT_18320e3b8 = (_DAT_18320e3b8 * -0x16718990f19cd791 ^ _DAT_18320e2e8) + _DAT_18320df78;
  _DAT_18320dfd0 = _DAT_18320e3b8 ^ _DAT_18320e2e8;
  uVar3 = in_RAX ^ unaff_R12 ^ _DAT_18320e468;
  lVar2 = (in_RAX ^ unaff_R12) + _DAT_18320e1e0;
  uVar4 = uVar3 + lVar2;
  uVar6 = ~_DAT_18320e1e0 + (_DAT_18320e468 - 1);
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ ~_DAT_18320e1e0;
  _DAT_18320e248 = uVar5;
  _DAT_18320e1b8 =
       func_0x000189366aa0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18320e468 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  auVar1._8_4_ = (int)in_RAX;
  auVar1._0_8_ = in_RAX;
  auVar1._12_4_ = (int)(in_RAX >> 0x20);
  uVar7 = SUB164(auVar1 ^ _DAT_18001a710,0);
  uVar4 = SUB168(auVar1 ^ _DAT_18001a710,0);
  uVar3 = (_DAT_18320e1b8 ^ in_RAX) << 0x10 | (_DAT_18320e1b8 ^ in_RAX) >> 0x30;
  _DAT_18320e410 =
       (((ulonglong)uVar7 * (ulonglong)unaff_XMM12_Da +
         ((uVar4 >> 0x20) * (ulonglong)unaff_XMM12_Da + (ulonglong)uVar7 * (ulonglong)unaff_XMM8_Da
         << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM9_Da +
        ((in_RAX >> 0x20) * (ulonglong)unaff_XMM9_Da +
         (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM8_Da << 0x20)) -
       ((ulonglong)uVar7 * (ulonglong)unaff_XMM10_Da +
        ((uVar4 >> 0x20) * (ulonglong)unaff_XMM10_Da + (ulonglong)uVar7 * (ulonglong)unaff_XMM13_Da
        << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM10_Da +
       ((in_RAX >> 0x20) * (ulonglong)unaff_XMM10_Da +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM13_Da << 0x20))) + 0x8ab56ee4ab06ea8d;
  _DAT_18320e148 = _DAT_18320e2a8 ^ uVar3 ^ _DAT_18320e410;
  _DAT_18320e038 = (_DAT_18320e038 ^ uVar3) + _DAT_18320e410 ^ 0x7aca88afa152ef96;
  _DAT_18320e180 = (_DAT_18320e180 * -0x3e947f685bafebe3 ^ _DAT_18320e038) + uVar3;
  _DAT_18320e220 = _DAT_18320e180 ^ _DAT_18320e038;
  *(char *)(unaff_RBP + -0x50 + _DAT_18320e410) = (char)uVar5;
  switch(unaff_R13D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 933df72 (image 18933df72) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18933df72(void)

{
  undefined1 auVar1 [16];
  longlong unaff_RBP;
  ulonglong uVar2;
  ulonglong unaff_R14;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint unaff_XMM7_Da;
  undefined1 auVar11 [16];
  longlong lVar12;
  uint uVar13;
  undefined1 unaff_XMM11 [16];
  uint unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  
  _DAT_18320e360 = func_0x000189366aa0(_DAT_18320e210 + 0x24dc417858e222c8 ^ 0x4a);
  _DAT_18320e128 =
       (_DAT_18320e128 ^ _DAT_18320e360 ^ 0x41a47d627ba9cf44) + 0xdf6732df9f5fcffc ^
       0xbc7696097b5e3ca4;
  _DAT_18320df60 =
       (_DAT_18320df60 * -0x7d37f5ae4d9eadb5 ^ _DAT_18320e128) +
       (_DAT_18320e360 ^ 0x41a47d627ba9cf44);
  _DAT_18320e368 = _DAT_18320df60 ^ _DAT_18320e128;
  _DAT_18320e1c0 = 0xdf6732df9f5fcffc;
  _DAT_18320e440 = func_0x000189366aa0(_DAT_18320e1d8 + 0x97d9d9cbe50378efU ^ 0x32);
  _DAT_18320e150 =
       (_DAT_18320e150 ^ _DAT_18320e440 & 0x7fffffffffffffff) + 0x302a1d98c8ab0d00 ^
       0x693458b9298f6f4f;
  _DAT_18320e3d0 =
       (_DAT_18320e3d0 * 0x70d6b1845f481b39 ^ _DAT_18320e150) +
       (_DAT_18320e440 & 0x7fffffffffffffff);
  _DAT_18320e200 = _DAT_18320e3d0 ^ _DAT_18320e150;
  _DAT_18320e208 = 0x302a1d98c8ab0d00;
  uVar2 = (~_DAT_18320e400 + 0xdf490c007af75e01) *
          ((_DAT_18320e240 ^ 0xffffffff7bdddcdb) + (_DAT_18320e240 & 0x7fffffff7bdddcdb) * 2);
  uVar2 = (uVar2 | 0x302a1d98c8ab0d00) + (uVar2 & 0x302a1d98c8ab0d00);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e110 = func_0x000189366aa0((uVar2 | 0x20b6f3ff012a82db) + (uVar2 & 0x20b6f3ff012a82db));
  uVar2 = _DAT_18320e110 * 0x5e92b6cf59d731;
  _DAT_18320e390 = _DAT_18320e150 ^ uVar2 ^ 0xdf490c007af75dfe;
  _DAT_18320e228 = (_DAT_18320e228 ^ uVar2) + 0xdf490c007af75dfe ^ 0xe14681af240490b7;
  _DAT_18320e328 = (_DAT_18320e328 * 0x423e92df3d3e3381 ^ _DAT_18320e228) + uVar2;
  _DAT_18320e2c8 = _DAT_18320e328 ^ _DAT_18320e228;
  _DAT_18320e120 = 0xdf490c007af75dfe;
  uVar2 = (~_DAT_18320e010 + 0x20b6f3ff8508a201) *
          ((_DAT_18320e300 ^ 0xdf490c00fed57edb) + (_DAT_18320e300 & 0x5f490c00fed57edb) * 2);
  uVar2 = (uVar2 | _DAT_18320df30) + (uVar2 & _DAT_18320df30);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320dff0 = func_0x000189366aa0((uVar2 | 0xffffffff7bdddcdb) + (uVar2 & 0xffffffff7bdddcdb));
  uVar2 = _DAT_18320dff0 << 0x12 | _DAT_18320dff0 >> 0x2e;
  _DAT_18320dfe0 = _DAT_18320dfd0 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_18320e1a8 = (_DAT_18320e1a8 ^ uVar2) - 2 ^ 0xe4cb49cf12a3a026;
  _DAT_18320e158 = (_DAT_18320e158 * 0x128bd571c3e8a1ff ^ _DAT_18320e1a8) + uVar2;
  _DAT_18320e160 = _DAT_18320e158 ^ _DAT_18320e1a8;
  _DAT_18320e308 = 0xfffffffffffffffe;
  _DAT_18320e2f0 = func_0x000189366aa0(_DAT_18320e208 + 0x1ae7e653a3d26b74 ^ 0x81);
  _DAT_18320e128 =
       (_DAT_18320e128 ^ _DAT_18320e2f0 & 0x7fffffffffffffff) + 0x6ae4d1dad642f477 ^
       0x3f01bc92a6f11962;
  _DAT_18320e4d0 =
       (_DAT_18320e4d0 * -0x1b432e2e3e59014f ^ _DAT_18320e128) +
       (_DAT_18320e2f0 & 0x7fffffffffffffff);
  _DAT_18320e4b0 = _DAT_18320e4d0 ^ _DAT_18320e128;
  _DAT_18320e140 = 0x6ae4d1dad642f477;
  _DAT_18320e2e0 = func_0x000189366aa0(_DAT_18320e0f0 ^ 0xd5d6a3cdcdd1207c);
  uVar2 = (_DAT_18320e2e0 ^ 0x1fffffffffffe) & 0x1ffffffffffff;
  _DAT_18320e428 = _DAT_18320dfa0 ^ uVar2 ^ 0x951b2e2529bd0b87;
  _DAT_18320e230 = (_DAT_18320e230 ^ uVar2) + 0x951b2e2529bd0b87 ^ 0xa8465387cf61b4b8;
  _DAT_18320e478 = (_DAT_18320e478 * -0x7315764d19ef1da3 ^ _DAT_18320e230) + uVar2;
  _DAT_18320e198 = _DAT_18320e478 ^ _DAT_18320e230;
  _DAT_18320e290 = 0x951b2e2529bd0b87;
  uVar2 = (_DAT_18320df98 ^ _DAT_1812f0340) + _DAT_18320e180 + 0x951b2e25ad9f28a2;
  uVar8 = (_DAT_18320e180 ^ _UNK_1812f0348) + _DAT_18320df98 + 0x6ae4d1dad642f477;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18320df98 ^ _DAT_1812f0340;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18320e180 ^ _UNK_1812f0348;
  _DAT_18320e0c0 =
       func_0x000189366aa0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18320df98 + 0x6ae4d1dad642f477) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18320e180 + 0x951b2e25ad9f28a2));
  uVar2 = _DAT_18320e0c0 ^ 0xfffffffffffffff0;
  _DAT_18320e1a8 = _DAT_18320e1e8 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_18320e3f0 = (_DAT_18320e3f0 ^ uVar2) - 2 ^ 0x734bac34d1cd4d03;
  _DAT_18320dfa8 = (_DAT_18320dfa8 * 0x4b244cdda38f1973 ^ _DAT_18320e3f0) + uVar2;
  _DAT_18320dfe8 = _DAT_18320dfa8 ^ _DAT_18320e3f0;
  _DAT_18320e030 = 0xfffffffffffffffe;
  uVar2 = (~_DAT_18320e2e0 + 0xef98c8d880fbd499) *
          ((_DAT_18320e378 ^ 0x84222325) + (ulonglong)((uint)_DAT_18320e378 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18320dfe0) + (uVar2 & _DAT_18320dfe0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e260 = func_0x000189366aa0((uVar2 | 0xef98c8d804d9f7bd) + (uVar2 & 0xef98c8d804d9f7bd));
  uVar2 = _DAT_18320e260 >> 1 | _DAT_18320e260;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_18320e260;
  _DAT_18320e108 = (_DAT_18320e108 ^ uVar2) + 0x106737277f042b68 ^ 0xdc798390317e4014;
  _DAT_18320e248 = (_DAT_18320e248 * 0x1fc654a9811d1243 ^ _DAT_18320e108) + uVar2;
  _DAT_18320e038 = _DAT_18320e248 ^ _DAT_18320e108;
  _DAT_18320e350 = 0x106737277f042b68;
  _DAT_18320e3a0 = func_0x000189366aa0(_DAT_18320e068 ^ 0x862be2c6db8c45dc);
  _DAT_18320e2f8 = _DAT_18320e008 ^ _DAT_18320e3a0 ^ 0xfffffffffffffffe;
  _DAT_18320e018 = (_DAT_18320e018 ^ _DAT_18320e3a0) - 2 ^ 0xe4fd59ab79b8d57f;
  _DAT_18320e420 = (_DAT_18320e420 * 0x66781088537a35c5 ^ _DAT_18320e018) + _DAT_18320e3a0;
  _DAT_18320e120 = _DAT_18320e420 ^ _DAT_18320e018;
  _DAT_18320e000 = 0xfffffffffffffffe;
  uVar2 = (~_DAT_18320df30 + 0x302a1d98c8ab0d01) *
          ((_DAT_18320e4b0 ^ 0xdf6732df1b7decd9) + (_DAT_18320e4b0 & 0x5f6732df1b7decd9) * 2);
  uVar2 = (uVar2 | _DAT_18320e318) + (uVar2 & _DAT_18320e318);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e380 = func_0x000189366aa0((uVar2 | 0xef4d2f47d3d6e1d9) + (uVar2 & 0xef4d2f47d3d6e1d9));
  uVar8 = _UNK_1812f0358;
  uVar2 = _DAT_1812f0350;
  _DAT_18320e028 = _DAT_18320e280 ^ _DAT_18320e3f8 ^ 0xf915078680adcfc;
  _DAT_18320e468 = (_DAT_18320e468 ^ _DAT_18320e3f8) + 0xf915078680adcfc ^ 0xec12d0ad33b4a8a2;
  _DAT_18320e170 = (_DAT_18320e170 * 0x7c7e10706089d953 ^ _DAT_18320e468) + _DAT_18320e3f8;
  _DAT_18320dfe8 = _DAT_18320e170 ^ _DAT_18320e468;
  _DAT_18320dfb0 = 0xf915078680adcfc;
  uVar7 = (_DAT_18320df58 ^ _DAT_1812f0350) + _DAT_18320e3e8 + 0xdf6732df1b7decd9;
  uVar9 = (_DAT_18320e3e8 ^ _UNK_1812f0358) + _DAT_18320df58 + 0x302a1d98c8ab0d00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18320df58 ^ _DAT_1812f0350;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18320e3e8 ^ _UNK_1812f0358;
  _DAT_18320e4f8 =
       func_0x000189366aa0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18320df58 + 0x302a1d98c8ab0d00) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18320e3e8 + 0xdf6732df1b7decd9));
  uVar7 = ~_DAT_18320e4f8 & 0xdf6732df9f5fcffc | 0x1fcffc;
  _DAT_18320df68 = (_DAT_18320df68 ^ uVar7) + 0xef4d2f4757f4c2fc ^ 0x35f659ce6085b941;
  _DAT_18320e280 = (_DAT_18320e280 * -0x4215412c618da583 ^ _DAT_18320df68) + uVar7;
  _DAT_18320e490 = _DAT_18320e280 ^ _DAT_18320df68;
  _DAT_18320e340 = _DAT_18320e2e0 ^ 0xef4d2f4757f4c2fc;
  _DAT_18320e0d0 = 0xef4d2f4757f4c2fc;
  uVar7 = (_DAT_18320e000 ^ uVar2) + _DAT_18320e450 + 0xdf6732df1b7decd9;
  uVar9 = (_DAT_18320e450 ^ uVar8) + _DAT_18320e000 + 0x302a1d98c8ab0d00;
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18320e000 ^ uVar2;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18320e450 ^ uVar8;
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  _DAT_18320e360 =
       func_0x000189366aa0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18320e000 + 0x302a1d98c8ab0d00) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18320e450 + 0xdf6732df1b7decd9));
  uVar2 = _DAT_18320e360 >> 1 | _DAT_18320e360;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_18320e360;
  _DAT_18320e108 = (_DAT_18320e108 ^ uVar2) + 0x10221098880b0d00 ^ 0x8d29916aed3afbb8;
  _DAT_18320e040 = (_DAT_18320e040 * 0x6ae4ddfa4736ca23 ^ _DAT_18320e108) + uVar2;
  _DAT_18320e398 = _DAT_18320e040 ^ _DAT_18320e108;
  _DAT_18320e3d0 = 0x10221098880b0d00;
  uVar2 = (~_DAT_18320e300 + 0x2044213110161a01) *
          ((_DAT_18320e470 ^ 0xef4d2f47d3d6e1d9) + (_DAT_18320e470 & 0x6f4d2f47d3d6e1d9) * 2);
  uVar2 = (uVar2 | _DAT_18320df38) + (uVar2 & _DAT_18320df38);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e130 = func_0x000189366aa0((uVar2 | 0xcf090e76c3c0fbd9) + (uVar2 & 0xcf090e76c3c0fbd9));
  uVar8 = ~_DAT_18320e130 & 0xef4d2f4757f4c2fc;
  uVar2 = uVar8 - (~_DAT_18320e130 >> 1 & 0x5504150101504154);
  uVar2 = (uVar2 & 0x3333333333333330) + (uVar2 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar8;
  _DAT_18320df70 = _DAT_18320e030 ^ uVar8 ^ 0xf915078680adcfc;
  _DAT_18320df50 = (_DAT_18320df50 ^ uVar8) + 0xf915078680adcfc ^ 0x4d4ecf2f5871c8e3;
  _DAT_18320e2c8 = (_DAT_18320e2c8 * 0x5b19af5928a46743 ^ _DAT_18320df50) + uVar8;
  _DAT_18320e200 = _DAT_18320e2c8 ^ _DAT_18320df50;
  _DAT_18320e398 = 0xf915078680adcfc;
  uVar2 = (_DAT_18320e148 ^ _DAT_1812f0360) + _DAT_18320df38 + 0xf915078ec28ffd9;
  uVar8 = (_DAT_18320df38 ^ _UNK_1812f0368) + _DAT_18320e148 + 0xf915078680adcfc;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18320e148 ^ _DAT_1812f0360;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18320df38 ^ _UNK_1812f0368;
  _DAT_18320e3b8 =
       func_0x000189366aa0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18320e148 + 0xf915078680adcfc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18320df38 + 0xf915078ec28ffd9));
  _DAT_18320e3b8 = _DAT_18320e3b8 ^ 0xf915078680adcfc;
  _DAT_18320e220 = _DAT_18320e220 ^ _DAT_18320e3b8 ^ 0xb4ae4ef6df4f53bf;
  _DAT_18320e048 = (_DAT_18320e048 * -0x1ad8bfae488e22bf ^ _DAT_18320e220) + _DAT_18320e3b8;
  _DAT_18320e078 = _DAT_18320e048 ^ _DAT_18320e220;
  _DAT_18320e1f8 = 0;
  _DAT_18320df30 = func_0x000189366aa0(_DAT_18320e498 ^ 0x1ff378dbe13c7e18);
  _DAT_18320e3f8 =
       (_DAT_18320e3f8 ^ ~_DAT_18320df30 & 0xdf6732df9f5fcffc) + 0x2098cd2060a03003 ^
       0x98d4467e32f56a73;
  _DAT_18320e0c0 =
       (_DAT_18320e0c0 * 0x1da2a79adf82714b ^ _DAT_18320e3f8) +
       (~_DAT_18320df30 & 0xdf6732df9f5fcffc);
  _DAT_18320e410 = _DAT_18320e0c0 ^ _DAT_18320e3f8;
  _DAT_18320e0c8 = 0x2098cd2060a03003;
  uVar2 = ((_DAT_18320e290 ^ 0xffffffff7bdddcdb) + (_DAT_18320e290 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_18320dfd8;
  uVar2 = (uVar2 | _DAT_18320e1b8) + (uVar2 & _DAT_18320e1b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e0c8 = func_0x000189366aa0((uVar2 | 0xffffffff7bdddcdb) + (uVar2 & 0xffffffff7bdddcdb));
  uVar2 = _DAT_18320e0c8 & 0xfffffffffc000000;
  _DAT_18320e2d0 = _DAT_18320e070 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_18320e058 = (_DAT_18320e058 ^ uVar2) - 2 ^ 0xa40e482a2e5b422d;
  _DAT_18320df98 = (_DAT_18320df98 * -0x4c6d322224cfb7a1 ^ _DAT_18320e058) + uVar2;
  _DAT_18320df20 = _DAT_18320df98 ^ _DAT_18320e058;
  _DAT_18320e348 = -2;
  _DAT_18320df00 = func_0x000189366aa0(_DAT_18320e1e0 + 0xffe0ff83e5001dff ^ 0x10);
  uVar2 = _DAT_18320e300 ^ _DAT_18320df00;
  _DAT_18320e300 = uVar2 ^ 0x8df3d34b7125b67a;
  _DAT_18320e280 = (_DAT_18320e280 * -0x78f65e7eb2e7e5cd ^ _DAT_18320e300) + _DAT_18320df00;
  _DAT_18320e358 = _DAT_18320e280 ^ _DAT_18320e300;
  _DAT_18320e160 = 0;
  uVar2 = uVar2 ^ 0x720c2cb40af86aa1;
  uVar8 = uVar2 + (_DAT_18320df20 - 0x84222325);
  uVar2 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2;
  uVar8 = ((_DAT_18320df20 + _DAT_18320e300) * 0x2000 | _DAT_18320df20 + _DAT_18320e300 >> 0x33) ^
          _DAT_18320df20;
  _DAT_18320dff0 =
       func_0x000189366aa0((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_18320e300 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18320df20 - 0x84222325));
  uVar2 = ~_DAT_18320dff0 & 0xfffffffffffffffe | 0xfffe;
  _DAT_18320df88 = _DAT_18320e058 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_18320e1b0 = (_DAT_18320e1b0 ^ uVar2) - 2 ^ 0x72d41c2aa6870a39;
  _DAT_18320e2d8 = (_DAT_18320e2d8 * -0x1175064262e56263 ^ _DAT_18320e1b0) + uVar2;
  _DAT_18320dfd0 = _DAT_18320e2d8 ^ _DAT_18320e1b0;
  auVar4._8_8_ = _UNK_1801ec418;
  auVar4._0_8_ = unaff_R14 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_1812f0370,_DAT_1800170c0);
  _DAT_18320dfc0 = 0xfffffffffffffffe;
  uVar8 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar8 + _DAT_18320e470;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_18320e288 ^ uVar8;
  }
  _DAT_18320e3f8 = func_0x000189366aa0(SUB161(auVar4 ^ _DAT_1812f0370,5) ^ uVar2);
  auVar5._4_4_ = unaff_XMM15_Db;
  auVar5._0_4_ = unaff_XMM15_Da;
  auVar5._8_4_ = unaff_XMM15_Dc;
  auVar5._12_4_ = unaff_XMM15_Dd;
  uVar3 = unaff_XMM15_Da | (uint)DAT_1800b8c60;
  auVar1._4_4_ = unaff_XMM15_Db;
  auVar1._0_4_ = unaff_XMM15_Da;
  auVar1._8_4_ = unaff_XMM15_Dc;
  auVar1._12_4_ = unaff_XMM15_Dd;
  uVar10 = SUB164(auVar5 & _DAT_1800b8c60,0);
  uVar8 = SUB168(auVar5 & _DAT_1800b8c60,0);
  uVar6 = SUB164(_DAT_1800b8c60 ^ auVar1,0);
  uVar7 = SUB168(_DAT_1800b8c60 ^ auVar1,0);
  uVar2 = _DAT_18320e3f8 & 0x7fffffffffffffff;
  uVar13 = SUB164(unaff_XMM11 ^ auVar11,0);
  lVar12 = ((ulonglong)_DAT_1812f0440 * (ulonglong)unaff_XMM15_Da +
            (ulonglong)_DAT_1812f0430 * (ulonglong)unaff_XMM7_Da << 0x20) +
           (ulonglong)unaff_XMM15_Da * (ulonglong)_DAT_1812f0430;
  uVar7 = (ulonglong)uVar13 * (ulonglong)_DAT_1812f03c0 +
          ((ulonglong)_DAT_1812f0420 * (ulonglong)uVar13 +
           (SUB168(unaff_XMM11 ^ auVar11,0) >> 0x20) * (ulonglong)_DAT_1812f03c0 << 0x20) + lVar12 +
          (ulonglong)_DAT_1812f0400 * (ulonglong)uVar6 +
          ((ulonglong)_DAT_1812f0410 * (ulonglong)uVar6 +
           (uVar7 >> 0x20) * (ulonglong)_DAT_1812f0400 << 0x20) +
          ((ulonglong)_DAT_1812f03e0 * (ulonglong)uVar3 + _DAT_1812f03f0 << 0x20) +
          (ulonglong)_DAT_1812f03d0 * (ulonglong)uVar3 +
          (ulonglong)_DAT_1812f03a0 * (ulonglong)uVar10 +
          ((ulonglong)_DAT_1812f03b0 * (ulonglong)uVar10 +
           (uVar8 >> 0x20) * (ulonglong)_DAT_1812f03a0 << 0x20) +
          ((ulonglong)_DAT_1812f0390 * (ulonglong)unaff_XMM15_Da +
           (ulonglong)_DAT_1812f0380 * (ulonglong)unaff_XMM7_Da << 0x20) +
          (ulonglong)unaff_XMM15_Da * (ulonglong)_DAT_1812f0380 +
          (-lVar12 -
          ((ulonglong)uVar6 * (_DAT_1812f04c0 & 0xffffffff) +
           ((ulonglong)_DAT_1812f04d0 * (ulonglong)uVar6 +
            (uVar7 >> 0x20) * (_DAT_1812f04c0 & 0xffffffff) << 0x20) +
           ((ulonglong)uVar3 * (ulonglong)_DAT_1812f04a0 + _DAT_1812f04b0 << 0x20) +
           (ulonglong)_DAT_1812f0490 * (ulonglong)uVar3 +
          (ulonglong)uVar10 * (ulonglong)_DAT_1812f0470 +
          ((ulonglong)_DAT_1812f0480 * (ulonglong)uVar10 +
           (uVar8 >> 0x20) * (ulonglong)_DAT_1812f0470 << 0x20) +
          ((ulonglong)(unaff_XMM15_Da * _DAT_1812f0460 + unaff_XMM7_Da * _DAT_1812f0450) << 0x20) +
          (ulonglong)unaff_XMM15_Da * (ulonglong)_DAT_1812f0450)) + 0x9d1cb95e0ab3e903;
  _DAT_18320e180 = _DAT_18320e2b0 ^ uVar2 ^ uVar7;
  _DAT_18320df00 = (_DAT_18320df00 ^ uVar2) + uVar7 ^ 0x41ab24ea514260c0;
  _DAT_18320e430 = (_DAT_18320e430 * -0xdd250f98969cdb5 ^ _DAT_18320df00) + uVar2;
  _DAT_18320e370 = _DAT_18320e430 ^ _DAT_18320df00;
  _DAT_18320e3b8 = uVar7;
  *(ulonglong *)(unaff_RBP + 0x50) = uVar7 + unaff_RBP + -0x50;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar7) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar2 = (~_DAT_18320df48 + 0xc0b0bcf05d924966) *
          ((_DAT_18320e170 ^ 0x473167617ca81874) + (_DAT_18320e170 & 0x473167617ca81874) * 2);
  uVar2 = (uVar2 | _DAT_18320e440) + (uVar2 & _DAT_18320e440);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320dfd8 = func_0x000189366aa0((uVar2 | 0x8781db91213a5111) + (uVar2 & 0x8781db91213a5111));
  _DAT_18320e028 = (_DAT_18320e028 ^ _DAT_18320dfd8) + 0xc7b1fff1fd9a7b75 ^ 0xb67322b5c6a12c68;
  _DAT_18320e260 = (_DAT_18320e260 * 0x71837a7905c05775 ^ _DAT_18320e028) + _DAT_18320dfd8;
  _DAT_18320e2a8 = _DAT_18320e260 ^ _DAT_18320e028;
  _DAT_18320e148 = 0xc7b1fff1fd9a7b75;
  uVar2 = (_DAT_18320e2d0 ^ _DAT_1812f04e0) + _DAT_18320e240 + 0xe26cc73f0f93380a;
  uVar8 = (_DAT_18320e240 ^ _UNK_1812f04e8) + _DAT_18320e2d0 + 0xd02619ab7bcd6124;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18320e2d0 ^ _DAT_1812f04e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18320e240 ^ _UNK_1812f04e8;
  _DAT_18320e2b8 =
       func_0x000189366aa0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18320e2d0 + 0xd02619ab7bcd6124) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18320e240 + 0xe26cc73f0f93380a));
  uVar2 = _DAT_18320e2b8 << 0x3d | _DAT_18320e2b8 >> 3;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          _DAT_18320e2b8 >> 3) & 0x1ffffffffffffff;
  _DAT_18320e038 = (_DAT_18320e038 ^ uVar2) + 0x324ade94f07c7a0b ^ 0xf9bfba6d16b6a8c8;
  _DAT_18320e028 = (_DAT_18320e028 * 0x4edc58c990cf8d59 ^ _DAT_18320e038) + uVar2;
  _DAT_18320e1c8 = _DAT_18320e028 ^ _DAT_18320e038;
  _DAT_18320df08 = 0x324ade94f07c7a0b;
  _DAT_18320df50 = func_0x000189366aa0(_DAT_18320e1f8 ^ 0xcfa5ad644948d51b);
  uVar2 = _DAT_18320df50 ^ 0x15;
  _DAT_18320e1b8 = _DAT_18320e170 ^ uVar2 ^ 0xcffdf950e04c78fe;
  _DAT_18320e270 = (_DAT_18320e270 ^ uVar2) + 0xcffdf950e04c78fe ^ 0x268f2e909e8350d3;
  _DAT_18320e128 = (_DAT_18320e128 * -0x4be5d2ebb2daf78b ^ _DAT_18320e270) + uVar2;
  _DAT_18320e050 = _DAT_18320e128 ^ _DAT_18320e270;
  _DAT_18320e0c8 = 0xcffdf950e04c78fe;
  uVar2 = (~_DAT_18320e180 + 0x300206af1fb38718) *
          ((_DAT_18320df78 ^ 0xcffdf950646e5bdb) + (_DAT_18320df78 & 0x4ffdf950646e5bdb) * 2);
  uVar2 = (uVar2 | _DAT_18320e0a0) + (uVar2 & _DAT_18320e0a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e3c0 = func_0x000189366aa0((uVar2 | 0xffffffff7bdddccc) + (uVar2 & 0xffffffff7bdddccc));
  uVar2 = (_DAT_18320e3c0 ^ 0x81e431102008282c) & 0xcffdf950e04c78fe;
  _DAT_18320e098 = _DAT_18320e220 ^ uVar2 ^ 0x15;
  _DAT_18320e220 = (_DAT_18320e220 ^ uVar2) + 0x15 ^ 0x23f508fc6148ab01;
  _DAT_18320e490 = (_DAT_18320e490 * 0x12891f9c688fa4b9 ^ _DAT_18320e220) + uVar2;
  _DAT_18320e2b8 = _DAT_18320e490 ^ _DAT_18320e220;
  _DAT_18320e450 = 0x15;
  uVar2 = (~_DAT_18320e440 + 0x87709319ce9a6911) *
          ((_DAT_18320e050 ^ 0x84222325) + (ulonglong)((uint)_DAT_18320e050 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18320e048) + (uVar2 & _DAT_18320e048);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e0e0 = func_0x000189366aa0((uVar2 | 0x877093194ab84a35) + (uVar2 & 0x877093194ab84a35));
  uVar2 = _DAT_18320e0e0 ^ 0x87709319ce9a6910;
  uVar8 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar2;
  _DAT_18320e2b0 = (_DAT_18320e2b0 ^ uVar2) + 0x788f6ce6316596f0 ^ 0x23dc041bec782dad;
  _DAT_18320e400 = (_DAT_18320e400 * 0x2bee16f4a74d07c1 ^ _DAT_18320e2b0) + uVar2;
  _DAT_18320dff0 = _DAT_18320e400 ^ _DAT_18320e2b0;
  _DAT_18320e4e8 = 0x788f6ce6316596f0;
  uVar2 = (~_DAT_18320e190 + 0x87709319ce9a6911) *
          ((_DAT_18320e448 ^ 0x84222330) + (ulonglong)((uint)_DAT_18320e448 & 0x84222330) * 2);
  uVar2 = (uVar2 | _DAT_18320df58) + (uVar2 & _DAT_18320df58);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320dfb0 = func_0x000189366aa0((uVar2 | 0x877093194ab84a20) + (uVar2 & 0x877093194ab84a20));
  uVar2 = _DAT_18320dfb0 ^ 0x87709319ce9a6910;
  _DAT_18320dfa8 = _DAT_18320e358 ^ uVar2 ^ 0x87709319ce9a6925;
  _DAT_18320df00 = (_DAT_18320df00 ^ uVar2) + 0x87709319ce9a6925 ^ 0x881c87fc81170c2d;
  _DAT_18320e1e0 = (_DAT_18320e1e0 * 0x47547fae7e473407 ^ _DAT_18320df00) + uVar2;
  _DAT_18320e270 = _DAT_18320e1e0 ^ _DAT_18320df00;
  _DAT_18320e2a8 = 0x87709319ce9a6925;
  uVar2 = (~_DAT_18320e3b8 + 0xab8bf5f34e7791a1) *
          ((_DAT_18320e430 ^ 0x84222325) + (ulonglong)((uint)_DAT_18320e430 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18320e040) + (uVar2 & _DAT_18320e040);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e280 = func_0x000189366aa0((uVar2 | 0xab8bf5f3ca55b285) + (uVar2 & 0xab8bf5f3ca55b285));
  uVar2 = _DAT_18320e280 >> 1 | _DAT_18320e280;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18320e280;
  _DAT_18320e458 = (_DAT_18320e458 ^ uVar2) + 0x54740a0cb1886e60 ^ 0xd007ce7c3de9c871;
  _DAT_18320e080 = (_DAT_18320e080 * 0x2b9768ee6dc5368d ^ _DAT_18320e458) + uVar2;
  _DAT_18320e040 = _DAT_18320e080 ^ _DAT_18320e458;
  _DAT_18320e248 = _DAT_18320e2a0 ^ 0x54740a0cb1886e60;
  _DAT_18320e1a8 = 0x54740a0cb1886e60;
  uVar2 = (~_DAT_18320df28 + 0xab8bf5f34e7791a1) *
          ((_DAT_18320dfa8 ^ 0x84222330) + (ulonglong)((uint)_DAT_18320dfa8 & 0x84222330) * 2);
  uVar2 = (uVar2 | _DAT_18320e170) + (uVar2 & _DAT_18320e170);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e210 = func_0x000189366aa0((uVar2 | 0xab8bf5f3ca55b290) + (uVar2 & 0xab8bf5f3ca55b290));
  uVar2 = (_DAT_18320e210 & 0xfffffffffffff000) << 0xf | _DAT_18320e210 >> 0x31;
  _DAT_18320e360 = _DAT_18320e2f8 ^ uVar2 ^ 0xab8bf5f34e7791b5;
  _DAT_18320e2c8 = (_DAT_18320e2c8 ^ uVar2) + 0xab8bf5f34e7791b5 ^ 0xc202e4b1d9db059c;
  _DAT_18320e110 = (_DAT_18320e110 * 0x1633ecb80360dacb ^ _DAT_18320e2c8) + uVar2;
  _DAT_18320e250 = _DAT_18320e110 ^ _DAT_18320e2c8;
  _DAT_18320e2b8 = 0xab8bf5f34e7791b5;
  uVar2 = (~_DAT_18320e2c8 + 0x54740a0cb1886e61) *
          ((_DAT_18320e3f8 ^ 0xab8bf5f3ca55b290) + (_DAT_18320e3f8 & 0x2b8bf5f3ca55b290) * 2);
  uVar2 = (uVar2 | _DAT_18320e260) + (uVar2 & _DAT_18320e260);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320dfe0 = func_0x000189366aa0((uVar2 | 0xffffffff7bdddcf0) + (uVar2 & 0xffffffff7bdddcf0));
  uVar2 = _DAT_18320dfe0 ^ 0x1dfd08b45a9a69e0;
  uVar2 = (uVar2 << 7 | uVar2 >> 0x39) << 2 | (uVar2 & 0x1ffffffffffffff) >> 0x37;
  _DAT_18320e0d8 = _DAT_18320e490 ^ uVar2 ^ 0x15;
  _DAT_18320e130 = (_DAT_18320e130 ^ uVar2) + 0x15 ^ 0x9789db2864a8d748;
  _DAT_18320e1a0 = (_DAT_18320e1a0 * -0x497b56a49cd10cd9 ^ _DAT_18320e130) + uVar2;
  _DAT_18320e360 = _DAT_18320e1a0 ^ _DAT_18320e130;
  _DAT_18320e1c0 = 0x15;
  _DAT_18320e300 = func_0x000189366aa0(_DAT_18320e3f0 + 0x5b1e0689571ec3d2 ^ 0x74);
  _DAT_18320e1b8 = (_DAT_18320e1b8 ^ _DAT_18320e300) + 0x200de90f0187a01 ^ 0x68abda9dd09f19c7;
  _DAT_18320e028 = (_DAT_18320e028 * 0x5e815928a508bdfd ^ _DAT_18320e1b8) + _DAT_18320e300;
  _DAT_18320df68 = _DAT_18320e028 ^ _DAT_18320e1b8;
  _DAT_18320e0b0 = 0x200de90f0187a01;
  uVar2 = (_DAT_18320e130 ^ _DAT_1812f04f0) + _DAT_18320e1e0 + 0xf5fb216589c4225b;
  uVar8 = (_DAT_18320e1e0 ^ _UNK_1812f04f8) + _DAT_18320e130 + 0x401bd21e030f402;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18320e130 ^ _DAT_1812f04f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18320e1e0 ^ _UNK_1812f04f8;
  _DAT_18320e208 =
       func_0x000189366aa0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18320e130 + 0x401bd21e030f402) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18320e1e0 + 0xf5fb216589c4225b));
  uVar2 = _DAT_18320e208 & 0xffffffffe000000;
  _DAT_18320e0b8 = _DAT_18320dfb8 ^ uVar2 ^ 0xf9fcde86ee16f580;
  _DAT_18320e1a8 = (_DAT_18320e1a8 ^ uVar2) + 0xf9fcde86ee16f580 ^ 0xf8ccc53982ac70d5;
  _DAT_18320e310 = (_DAT_18320e310 * 0x37a9131a434085a9 ^ _DAT_18320e1a8) + uVar2;
  _DAT_18320e4e8 = _DAT_18320e310 ^ _DAT_18320e1a8;
  _DAT_18320e3b0 = 0xf9fcde86ee16f580;
  uVar2 = (~_DAT_18320e378 + 0xf9fcde86ee16f581) *
          ((_DAT_18320e218 ^ 0xf9fcde866a34d6a5) + (_DAT_18320e218 & 0x79fcde866a34d6a5) * 2);
  uVar2 = (uVar2 | _DAT_18320e090) + (uVar2 & _DAT_18320e090);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320e130 = func_0x000189366aa0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_18320e260 = _DAT_18320e260 ^ _DAT_18320e130 ^ 0x13c1b04473a242f3;
  _DAT_18320e288 = (_DAT_18320e288 * -0x5d495456774848e1 ^ _DAT_18320e260) + _DAT_18320e130;
  _DAT_18320e4e8 = _DAT_18320e288 ^ _DAT_18320e260;
  _DAT_18320e298 = 0;
  _DAT_18320e1f8 = _DAT_18320e130;
  _DAT_18320e000 = func_0x000189366aa0(_DAT_18320e4c8 ^ 0xa67498257003b0a);
  uVar2 = _DAT_18320e000 << 10 | _DAT_18320e000 >> 0x36;
  _DAT_18320e4f0 = (_DAT_18320e4f0 ^ uVar2) + 0x384e000e0265848a ^ 0xa0f2d25f0215d611;
  _DAT_18320e338 = (_DAT_18320e338 * -0x6b39fa73e64bc93d ^ _DAT_18320e4f0) + uVar2;
  _DAT_18320e0c8 = _DAT_18320e338 ^ _DAT_18320e4f0;
  _DAT_18320e2d0 = 0x384e000e0265848a;
  uVar2 = ((_DAT_18320df00 ^ 0x84222330) + (ulonglong)((uint)_DAT_18320df00 & 0x84222330) * 2) *
          -_DAT_18320e498;
  uVar2 = (uVar2 | _DAT_18320e180) + (uVar2 & _DAT_18320e180);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18320dfc8 = func_0x000189366aa0((uVar2 | 0x84222330) + (ulonglong)((uint)uVar2 & 0x84222330))
  ;
  uVar2 = _DAT_18320dfc8 << 0x30 | _DAT_18320dfc8 >> 0x10;
  _DAT_18320e300 = _DAT_18320dfd0 ^ uVar2 ^ 0x15;
  _DAT_18320e400 = (_DAT_18320e400 ^ uVar2) + 0x15 ^ 0x849c415f5447a448;
  _DAT_18320e4f0 = (_DAT_18320e4f0 * 0x334eeb09732094a9 ^ _DAT_18320e400) + uVar2;
  _DAT_18320e298 = _DAT_18320e4f0 ^ _DAT_18320e400;
  _DAT_18320e478 = 0x15;
  _DAT_18320e3d8 = func_0x000189366aa0(_DAT_18320e480 + 0x1f007c1b001dffU ^ 0x38);
  uVar2 = ((_DAT_18320e3d8 ^ 0x61f88a3b50) & 0xfffffffffe) * 0x80;
  _DAT_18320dfb8 = _DAT_18320dfb8 ^ uVar2 ^ 0xf766a3a7e851a17f;
  _DAT_18320e348 = (_DAT_18320e348 * 0x800a05f37c2be89 ^ _DAT_18320dfb8) + uVar2;
  _DAT_18320e340 = _DAT_18320e348 ^ _DAT_18320dfb8;
  _DAT_18320e088 = 0;
  _DAT_18320e318 = func_0x000189366aa0(_DAT_18320e168 + 0x1f007c300021ffU ^ 0x94);
  uVar2 = _DAT_18320e318 - (_DAT_18320e318 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18320e318;
  _DAT_18320e458 = _DAT_18320e330 ^ uVar2 ^ 0x15;
  _DAT_18320e3b8 = (_DAT_18320e3b8 ^ uVar2) + 0x15 ^ 0x9070f463cb3b97e4;
  _DAT_18320e180 = (_DAT_18320e180 * 0x2219094b6bed8bb ^ _DAT_18320e3b8) + uVar2;
  _DAT_18320e398 = _DAT_18320e180 ^ _DAT_18320e3b8;
  _DAT_18320df10 = 0x15;
  switch(uVar7 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9342f12 (image 189342f12) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189342f12(void)

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
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong unaff_RBP;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar18;
  undefined1 auVar17 [16];
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  uint uVar23;
  undefined1 auVar24 [16];
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  
  _DAT_18320e0c8 = func_0x000189366aa0(_DAT_18320e0c8 + 0xfdee78ac35455c47 ^ 0xb2);
  _DAT_18320e158 = (_DAT_18320e158 ^ _DAT_18320e0c8) + 0xee9ddf6a36677d7f ^ 0xb1c1c429f97e924c;
  _DAT_18320e1d0 = (_DAT_18320e1d0 * 0x509dcd5de784434d ^ _DAT_18320e158) + _DAT_18320e0c8;
  _DAT_18320df10 = _DAT_18320e1d0 ^ _DAT_18320e158;
  _DAT_18320df80 = 0xee9ddf6a36677d7f;
  _DAT_18320e260 = func_0x000189366aa0(_DAT_18320e3d0 + 0x3a51f2e755cf9638 ^ 0xa1);
  uVar13 = _DAT_18320e260 >> 1 | _DAT_18320e260;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = 0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_18320e260;
  _DAT_18320e028 = (_DAT_18320e028 ^ uVar13) + 0x4733704a9f8851f3 ^ 0xf78ec1c5a5f06a7c;
  _DAT_18320e110 = (_DAT_18320e110 * 0x55992aef77abde4f ^ _DAT_18320e028) + uVar13;
  _DAT_18320e0c8 = _DAT_18320e110 ^ _DAT_18320e028;
  _DAT_18320e048 = 0x4733704a9f8851f3;
  _DAT_18320e0a8 = func_0x000189366aa0(_DAT_18320e470 + 0xe45233d4ee66d8b5 ^ 0x13);
  _DAT_18320e4f8 =
       (_DAT_18320e4f8 ^ _DAT_18320e0a8 & 0xfffffffffe000000) + 0x45b341e2240232ac ^
       0xbc3cd879440828d6;
  _DAT_18320e250 =
       (_DAT_18320e250 * 0x165d8c9a70c004d1 ^ _DAT_18320e4f8) +
       (_DAT_18320e0a8 & 0xfffffffffe000000);
  _DAT_18320e2b8 = _DAT_18320e250 ^ _DAT_18320e4f8;
  _DAT_18320e200 = 0x45b341e2240232ac;
  _DAT_18320e1c0 = func_0x000189366aa0(_DAT_18320e498 ^ 0x21f0516086bedfc6);
  uVar13 = _DAT_18320e1c0 ^ 4;
  _DAT_18320e1b0 = _DAT_18320e470 ^ uVar13 ^ 0xba4cbe1ddbfdcd4c;
  _DAT_18320dfc8 = (_DAT_18320dfc8 ^ uVar13) + 0xba4cbe1ddbfdcd4c ^ 0x59c514214eb7ce92;
  _DAT_18320dfd8 = (_DAT_18320dfd8 * -0x42ca5c15e877dee9 ^ _DAT_18320dfc8) + uVar13;
  _DAT_18320e210 = _DAT_18320dfd8 ^ _DAT_18320dfc8;
  _DAT_18320e200 = 0xba4cbe1ddbfdcd4c;
  uVar13 = (~_DAT_18320e058 + 0x45b341e2240232ad) *
           ((_DAT_18320e008 ^ 0xba4cbe1d5fdfee69) + (_DAT_18320e008 & 0x3a4cbe1d5fdfee69) * 2);
  uVar13 = (uVar13 | _DAT_18320e4e8) + (uVar13 & _DAT_18320e4e8);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_18320dfe8 =
       func_0x000189366aa0((uVar13 | 0xffffffff7bdddcc5) + (uVar13 & 0xffffffff7bdddcc5));
  uVar13 = ~_DAT_18320dfe8 & 0xba4cbe1ddbfdc000 ^ 0xba4cbe1ddbfdcd4c;
  _DAT_18320e110 = _DAT_18320e338 ^ uVar13 ^ 0xfffffffffffffff8;
  _DAT_18320e240 = (_DAT_18320e240 ^ uVar13) - 8 ^ 0x564dfd2309b0f2ca;
  _DAT_18320e178 = (_DAT_18320e178 * 0x13639b70d71ec35 ^ _DAT_18320e240) + uVar13;
  _DAT_18320e3c0 = _DAT_18320e178 ^ _DAT_18320e240;
  _DAT_18320e218 = 0xfffffffffffffff8;
  uVar13 = (_DAT_18320e470 ^ _DAT_1812f07c0) + _DAT_18320e498 + 0x84222325;
  uVar20 = (_DAT_18320e498 ^ _UNK_1812f07c8) + _DAT_18320e470 + 0x615604a863b2a773;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e470 ^ _DAT_1812f07c0;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e498 ^ _UNK_1812f07c8;
  auVar17._8_4_ = 0xffffffff;
  auVar17._0_8_ = 0xffffffffffffffff;
  auVar17._12_4_ = 0xffffffff;
  uVar13 = func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) -
                               (_DAT_18320e470 + 0x615604a863b2a773) ^
                               (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18320e498 + 0x84222325));
  _DAT_18320e418 = (_DAT_18320e418 ^ uVar13) + 0x9ea9fb579c4d588d ^ 0xa246a2eb91500bb2;
  _DAT_18320e358 = (_DAT_18320e358 * -0x22680ba83d45be75 ^ _DAT_18320e418) + uVar13;
  _DAT_18320e018 = _DAT_18320e358 ^ _DAT_18320e418;
  _DAT_18320e048 = 0x9ea9fb579c4d588d;
  uVar13 = (_DAT_18320e260 ^ _DAT_1812f07d0) + (_DAT_18320e0f8 - 0x84222323);
  uVar20 = (_DAT_18320e0f8 ^ _UNK_1812f07d8) + _DAT_18320e260 + 0x615604a863b2a773;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e260 ^ _DAT_1812f07d0;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e0f8 ^ _UNK_1812f07d8;
  _DAT_18320e3b0 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e260 + 0x615604a863b2a773)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18320e0f8 - 0x84222323));
  uVar13 = _DAT_18320e3b0 - (_DAT_18320e3b0 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
           _DAT_18320e3b0;
  _DAT_18320e0f8 = _DAT_18320e070 ^ uVar13 ^ 0x615604a863b2a76b;
  _DAT_18320e220 = (_DAT_18320e220 ^ uVar13) + 0x615604a863b2a76b ^ 0xf21fbdb3e12fd6c3;
  _DAT_18320e1b0 = (_DAT_18320e1b0 * -0x2b95f037654d0bf7 ^ _DAT_18320e220) + uVar13;
  _DAT_18320e288 = _DAT_18320e1b0 ^ _DAT_18320e220;
  _DAT_18320e3f0 = _DAT_18320e148 ^ 0x615604a863b2a76b;
  _DAT_18320e058 = 0x615604a863b2a76b;
  uVar13 = (~_DAT_18320df70 + 0x7148e54da6b40619) *
           ((_DAT_18320e0c0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18320e0c0 & 0x84222325) * 2);
  uVar13 = (uVar13 | _DAT_18320e300) + (uVar13 & _DAT_18320e300);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_18320e4d8 =
       func_0x000189366aa0((uVar13 | 0x7148e54d2296253d) + (uVar13 & 0x7148e54d2296253d));
  uVar13 = _DAT_18320e4d8 >> 1 | _DAT_18320e4d8;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           _DAT_18320e4d8;
  _DAT_18320e0c8 = (_DAT_18320e0c8 ^ uVar13) + 0x8eb71ab2594bf9e8 ^ 0x2d791575d1526f67;
  _DAT_18320e1b0 = (_DAT_18320e1b0 * 0x72f9ea539b239c7d ^ _DAT_18320e0c8) + uVar13;
  _DAT_18320e2e8 = _DAT_18320e1b0 ^ _DAT_18320e0c8;
  _DAT_18320e3b0 = 0x8eb71ab2594bf9e8;
  _DAT_18320e1d0 = func_0x000189366aa0(_DAT_18320e430 + 0x72d6ad4b3b162681 ^ 0x59);
  uVar13 = _DAT_18320e1d0 << 9 | _DAT_18320e1d0 >> 0x37;
  _DAT_18320dfb8 = _DAT_18320e078 ^ uVar13 ^ 0x7148e54da6b40610;
  _DAT_18320e0e0 = (_DAT_18320e0e0 ^ uVar13) + 0x7148e54da6b40610 ^ 0xde5ed06945b33b13;
  _DAT_18320e4b8 = (_DAT_18320e4b8 * -0x1e839faf403fb8c3 ^ _DAT_18320e0e0) + uVar13;
  _DAT_18320e150 = _DAT_18320e4b8 ^ _DAT_18320e0e0;
  _DAT_18320e258 = 0x7148e54da6b40610;
  uVar13 = (_DAT_18320e4a0 ^ _DAT_1812f07e0) + _DAT_18320e078 + 0x7148e54d22962535;
  uVar20 = (_DAT_18320e078 ^ _UNK_1812f07e8) + _DAT_18320e4a0 + 0x8eb71ab2594bf9e8;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e4a0 ^ _DAT_1812f07e0;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e078 ^ _UNK_1812f07e8;
  _DAT_18320e0b0 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e4a0 + 0x8eb71ab2594bf9e8)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_18320e078 + 0x7148e54d22962535));
  uVar13 = _DAT_18320e0b0 ^ 0x8eb71ab2594bf9e8;
  _DAT_18320e408 = _DAT_18320e380 ^ uVar13 ^ 0xfffffffffffffff8;
  _DAT_18320dfa0 = (_DAT_18320dfa0 ^ uVar13) - 8 ^ 0xfc54234f37272dc3;
  _DAT_18320e310 = (_DAT_18320e310 * 0x6335b53608407dcd ^ _DAT_18320dfa0) + uVar13;
  _DAT_18320df58 = _DAT_18320e310 ^ _DAT_18320dfa0;
  _DAT_18320e218 = 0xfffffffffffffff8;
  uVar13 = (_DAT_18320e168 ^ _DAT_1812f07f0) + _DAT_18320dfb8 + 0xee9ddf6ab2455e5a;
  uVar20 = (_DAT_18320dfb8 ^ _UNK_1812f07f8) + _DAT_18320e168 + 0x4733704a9f8851f3;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e168 ^ _DAT_1812f07f0;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320dfb8 ^ _UNK_1812f07f8;
  _DAT_18320e3d8 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e168 + 0x4733704a9f8851f3)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_18320dfb8 + 0xee9ddf6ab2455e5a));
  uVar13 = _DAT_18320e3d8 & 0xee9ddf6a36677d7f;
  _DAT_18320e1b0 = _DAT_18320e4e0 ^ uVar13 ^ 0x35d14fb4d5efcf72;
  _DAT_18320e398 = (_DAT_18320e398 ^ uVar13) + 0x35d14fb4d5efcf72 ^ 0xaf30e6c131c49cba;
  _DAT_18320e350 = (_DAT_18320e350 * 0x7ce384f8f0e25815 ^ _DAT_18320e398) + uVar13;
  _DAT_18320e270 = _DAT_18320e350 ^ _DAT_18320e398;
  _DAT_18320e480 = 0x35d14fb4d5efcf72;
  _DAT_18320e370 = func_0x000189366aa0(_DAT_18320e3d0 ^ 0x1ffa5e149769bb8a);
  _DAT_18320e098 =
       (_DAT_18320e098 ^ _DAT_18320e370 ^ 0xee9ddf6a36677d7f) + 0xa9aeaf20a9ef2c8c ^
       0x5523ed243e4ae706;
  _DAT_18320df40 =
       (_DAT_18320df40 * 0x329cb83315562053 ^ _DAT_18320e098) +
       (_DAT_18320e370 ^ 0xee9ddf6a36677d7f);
  _DAT_18320e030 = _DAT_18320df40 ^ _DAT_18320e098;
  _DAT_18320e200 = 0xa9aeaf20a9ef2c8c;
  uVar13 = (_DAT_18320e3d0 ^ _DAT_1812f0800) + _DAT_18320e4b8 + 0xa9aeaf202dcd0fa9;
  uVar20 = (_DAT_18320e4b8 ^ _UNK_1812f0808) + _DAT_18320e3d0 + 0x8c22a0942c00a2e6;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e3d0 ^ _DAT_1812f0800;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e4b8 ^ _UNK_1812f0808;
  _DAT_18320e3b8 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e3d0 + 0x8c22a0942c00a2e6)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_18320e4b8 + 0xa9aeaf202dcd0fa9));
  uVar13 = (_DAT_18320e3b8 << 0x18 | _DAT_18320e3b8 >> 0x28) >> 10 |
           (_DAT_18320e3b8 >> 0x28) << 0x36;
  _DAT_18320e170 = _DAT_18320e000 ^ uVar13 ^ 0x35d14fb4d5efcf72;
  _DAT_18320e448 = (_DAT_18320e448 ^ uVar13) + 0x35d14fb4d5efcf72 ^ 0xf3d53145a2c05ab6;
  _DAT_18320e1f8 = (_DAT_18320e1f8 * 0x401f318b0b0865bd ^ _DAT_18320e448) + uVar13;
  _DAT_18320e480 = _DAT_18320e1f8 ^ _DAT_18320e448;
  _DAT_18320e030 = 0x35d14fb4d5efcf72;
  uVar13 = ((_DAT_18320df98 ^ 0xffffffff7bdddcdd) + (_DAT_18320df98 & 0x7fffffff7bdddcdd) * 2) *
           -_DAT_18320e268;
  uVar13 = (uVar13 | _DAT_18320e008) + (uVar13 & _DAT_18320e008);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_18320e160 =
       func_0x000189366aa0((uVar13 | 0xffffffff7bdddcdd) + (uVar13 & 0xffffffff7bdddcdd));
  uVar20 = _DAT_18320e160 * 0x39b35e77485cd655;
  uVar13 = uVar20 >> 1 | uVar20;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar20 = 0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           uVar20;
  _DAT_18320e3e0 = _DAT_18320e2d0 ^ uVar20 ^ 0xfffffffffffffff8;
  _DAT_18320e238 = (_DAT_18320e238 ^ uVar20) - 8 ^ 0x5b86d075ceff416e;
  _DAT_18320e3f8 = (_DAT_18320e3f8 * 0x751c108ef0828549 ^ _DAT_18320e238) + uVar20;
  _DAT_18320e210 = _DAT_18320e3f8 ^ _DAT_18320e238;
  _DAT_18320e148 = 0xfffffffffffffff8;
  uVar13 = (_DAT_18320e0b0 ^ _DAT_1812f0810) + _DAT_18320dfb0 + 0xee9ddf6ab2455e5a;
  uVar20 = (_DAT_18320dfb0 ^ _UNK_1812f0818) + (_DAT_18320e0b0 - 1);
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e0b0 ^ _DAT_1812f0810;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320dfb0 ^ _UNK_1812f0818;
  _DAT_18320e218 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e0b0 - 1) ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18320dfb0 + 0xee9ddf6ab2455e5a)
                          );
  uVar13 = _DAT_18320e218 - (_DAT_18320e218 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar20 = (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
           _DAT_18320e218;
  uVar13 = uVar20 >> 1 | uVar20;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar20 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x40 ^ uVar20;
  _DAT_18320e3c0 = (_DAT_18320e3c0 ^ uVar20) + 0x11622095c9988280 ^ 0x363887df9d5c48e3;
  _DAT_18320e278 = (_DAT_18320e278 * 0x28161c5a086b34d5 ^ _DAT_18320e3c0) + uVar20;
  _DAT_18320e380 = _DAT_18320e278 ^ _DAT_18320e3c0;
  _DAT_18320e228 = 0x11622095c9988280;
  uVar13 = (_DAT_18320e490 ^ _DAT_1812f0820) + _DAT_18320e200 + 0xee9ddf6ab2455e5a;
  uVar20 = (_DAT_18320e200 ^ _UNK_1812f0828) + _DAT_18320e490 + 0x11622095c9988280;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e490 ^ _DAT_1812f0820;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e200 ^ _UNK_1812f0828;
  _DAT_18320e2e0 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e490 + 0x11622095c9988280)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_18320e200 + 0xee9ddf6ab2455e5a));
  _DAT_18320e060 = _DAT_18320e060 ^ ~_DAT_18320e2e0 & 0xee9ddf6a36677d7f ^ 0x27d4a5929fdf1adf;
  _DAT_18320df50 =
       (_DAT_18320df50 * 0x4e7a247b4bd45ba7 ^ _DAT_18320e060) +
       (~_DAT_18320e2e0 & 0xee9ddf6a36677d7f);
  _DAT_18320e4e0 = _DAT_18320df50 ^ _DAT_18320e060;
  _DAT_18320e0c8 = 0;
  uVar13 = *(ulonglong *)(unaff_RBP + 0x50);
  uVar20 = (~_DAT_18320e3c0 - 7) *
           ((uVar13 ^ 0x84222325 ^ _DAT_18320e0b0) + ((uVar13 ^ 0x84222325) & _DAT_18320e0b0) * 2);
  uVar20 = (uVar20 | _DAT_18320e358) + (uVar20 & _DAT_18320e358);
  uVar20 = uVar20 * 0x2000 ^ uVar20;
  uVar20 = uVar20 >> 7 ^ uVar20;
  uVar20 = uVar20 << 0x11 ^ uVar20;
  _DAT_18320df58 =
       func_0x000189366aa0((uVar13 ^ 0xffffffff7bdddcdd | uVar20) +
                           (uVar20 & (uVar13 ^ 0xffffffff7bdddcdd)));
  uVar12 = _DAT_1812f0830;
  uVar18 = (uint)(uVar13 >> 0x20);
  auVar28._8_4_ = (uint)uVar13;
  auVar28._0_8_ = uVar13;
  auVar28._12_4_ = uVar18;
  auVar22 = _DAT_1800627b0 ^ auVar28;
  uVar20 = (ulonglong)_DAT_1812f0840;
  auVar29 = auVar28 & _DAT_1800627b0;
  uVar23 = (uint)uVar13 | (uint)DAT_1800627b0;
  uVar15 = (ulonglong)_DAT_1812f0830;
  *(ulonglong *)(unaff_RBP + 0x50) = (ulonglong)uVar18;
  *(ulonglong *)(unaff_RBP + 0x58) = auVar28._8_8_ >> 0x20;
  uVar27 = auVar29._0_4_;
  uVar31 = auVar29._0_8_;
  uVar21 = auVar22._0_4_;
  uVar25 = auVar22._0_8_;
  uVar19 = SUB164(auVar28 ^ auVar17,0);
  uVar25 = (ulonglong)uVar19 * (ulonglong)_DAT_1812f0870 +
           ((ulonglong)_DAT_1812f08d0 * (ulonglong)uVar19 +
            (SUB168(auVar28 ^ auVar17,0) >> 0x20) * (ulonglong)_DAT_1812f0870 << 0x20) +
           (ulonglong)_DAT_1812f08b0 * (ulonglong)uVar21 +
           ((ulonglong)_DAT_1812f08c0 * (ulonglong)uVar21 +
            (uVar25 >> 0x20) * (ulonglong)_DAT_1812f08b0 << 0x20) +
           ((ulonglong)uVar23 * (ulonglong)_DAT_1812f0890 + _DAT_1812f08a0 << 0x20) +
           (ulonglong)_DAT_1812f0880 * (ulonglong)uVar23 +
           (ulonglong)_DAT_1812f0850 * (ulonglong)uVar27 +
           ((ulonglong)_DAT_1812f0860 * (ulonglong)uVar27 +
            (uVar31 >> 0x20) * (ulonglong)_DAT_1812f0850 << 0x20) +
           (uVar20 * (uVar13 & 0xffffffff) + (ulonglong)uVar12 * (ulonglong)uVar18 << 0x20) +
           (uVar13 & 0xffffffff) * uVar15 +
           (-((ulonglong)uVar21 * (ulonglong)_DAT_1812f0940 +
             ((ulonglong)_DAT_1812f0950 * (ulonglong)uVar21 +
              (uVar25 >> 0x20) * (ulonglong)_DAT_1812f0940 << 0x20)) -
           ((ulonglong)uVar27 * (ulonglong)_DAT_1812f0920 +
            ((ulonglong)_DAT_1812f0930 * (ulonglong)uVar27 +
             (uVar31 >> 0x20) * (ulonglong)_DAT_1812f0920 << 0x20) +
           ((uVar13 & 0xffffffff) * (ulonglong)_DAT_1812f0910 +
            (ulonglong)*(uint *)(unaff_RBP + 0x50) * (ulonglong)_DAT_1812f0900 << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812f0900)) + _DAT_1812f0960;
  _DAT_18320e148 = _DAT_18320e1c8 ^ _DAT_18320dfa8 ^ uVar25;
  _DAT_18320e160 = (_DAT_18320e160 ^ _DAT_18320dfa8) + uVar25 ^ 0xa60129c9e8f2c755;
  _DAT_18320e120 = (_DAT_18320e120 * 0xe697852d44fee2b ^ _DAT_18320e160) + _DAT_18320dfa8;
  _DAT_18320e4d0 = _DAT_18320e120 ^ _DAT_18320e160;
  auVar22._0_8_ = _DAT_1800632f0 ^ uVar25;
  uVar13 = *(ulonglong *)(unaff_RBP + 0x40);
  auVar22._8_8_ = uVar13;
  auVar17 = pshufb(auVar22 ^ _DAT_1812f0970,_DAT_1800170c0);
  uVar15 = auVar17._8_8_ + auVar17._0_8_;
  uVar20 = uVar15 + _DAT_18320e0a8;
  if (auVar17._4_4_ < 0) {
    uVar20 = _DAT_18320dfb0 ^ uVar15;
  }
  _DAT_18320e150 = uVar25;
  _DAT_18320e0d0 = func_0x000189366aa0(SUB161(auVar22 ^ _DAT_1812f0970,5) ^ uVar20);
  uVar12 = _DAT_1812f0a10;
  uVar21 = (uint)(uVar25 >> 0x20);
  auVar24._8_4_ = (int)uVar25;
  auVar24._0_8_ = uVar25;
  auVar24._12_4_ = uVar21;
  uVar23 = (uint)(uVar13 >> 0x20);
  auVar29._8_4_ = (int)uVar13;
  auVar29._0_8_ = uVar13;
  auVar29._12_4_ = uVar23;
  uVar7 = (ulonglong)_DAT_1812f0980;
  uVar20 = (ulonglong)_DAT_1812f0990;
  uVar15 = (ulonglong)_DAT_1812f0980;
  auVar22 = auVar24 ^ auVar29;
  uVar31 = (ulonglong)_DAT_1812f09b0;
  uVar8 = (ulonglong)_DAT_1812f09a0;
  uVar1 = (ulonglong)_DAT_1812f09a0;
  uVar2 = (ulonglong)_DAT_1812f09e0;
  uVar19 = SUB164(auVar24 & auVar29,0);
  uVar3 = (ulonglong)_DAT_1812f09d0;
  uVar26 = SUB168(auVar24 & auVar29,0);
  uVar9 = (ulonglong)_DAT_1812f09d0;
  uVar4 = (ulonglong)_DAT_1812f0a00;
  uVar18 = SUB164(auVar24 | auVar29,0);
  uVar5 = (ulonglong)_DAT_1812f09f0;
  uVar30 = SUB168(auVar24 | auVar29,0);
  uVar10 = (ulonglong)_DAT_1812f09f0;
  uVar6 = (ulonglong)_DAT_1812f0a20;
  *(undefined1 (*) [16])(unaff_RBP + 0x50) = auVar22;
  auVar32._8_4_ = 0xffffffff;
  auVar32._0_8_ = 0xffffffffffffffff;
  auVar32._12_4_ = 0xffffffff;
  uVar27 = SUB164(auVar32 ^ auVar24,0);
  uVar16 = SUB168(auVar32 ^ auVar24,0);
  uVar14 = (_DAT_18320e0d0 ^ uVar25) << 2 | (_DAT_18320e0d0 ^ uVar25) >> 0x3e;
  _DAT_18320e0b0 =
       (((ulonglong)_DAT_1812f09c0 * (ulonglong)uVar27 +
         ((ulonglong)_DAT_1812f0a30 * (ulonglong)uVar27 +
          (uVar16 >> 0x20) * (ulonglong)_DAT_1812f09c0 << 0x20) +
        (ulonglong)uVar12 * (ulonglong)auVar22._0_4_ +
        (uVar6 * auVar22._0_4_ + (auVar22._0_8_ >> 0x20) * (ulonglong)uVar12 << 0x20) +
        uVar5 * uVar18 + (uVar4 * uVar18 + (uVar30 >> 0x20) * uVar10 << 0x20) +
        uVar3 * uVar19 + (uVar2 * uVar19 + (uVar26 >> 0x20) * uVar9 << 0x20) +
        (uVar31 * (uVar13 & 0xffffffff) + uVar1 * uVar23 << 0x20) + (uVar13 & 0xffffffff) * uVar8 +
        uVar15 * (uVar25 & 0xffffffff) + (uVar20 * (uVar25 & 0xffffffff) + uVar21 * uVar7 << 0x20))
       - ((ulonglong)uVar27 * (ulonglong)_DAT_1812f0aa0 +
          ((ulonglong)_DAT_1812f0b10 * (ulonglong)uVar27 +
           (uVar16 >> 0x20) * (ulonglong)_DAT_1812f0aa0 << 0x20) +
         (ulonglong)*(uint *)(unaff_RBP + 0x50) * (ulonglong)_DAT_1812f0af0 +
         ((ulonglong)_DAT_1812f0b00 * (ulonglong)*(uint *)(unaff_RBP + 0x50) +
          (auVar22._0_8_ >> 0x20) * (ulonglong)_DAT_1812f0af0 << 0x20) +
         (ulonglong)uVar18 * (ulonglong)_DAT_1812f0ad0 +
         ((ulonglong)_DAT_1812f0ae0 * (ulonglong)uVar18 +
          (uVar30 >> 0x20) * (ulonglong)_DAT_1812f0ad0 << 0x20) +
         (ulonglong)uVar19 * (ulonglong)_DAT_1812f0ab0 +
         ((ulonglong)_DAT_1812f0ac0 * (ulonglong)uVar19 +
          (uVar26 >> 0x20) * (ulonglong)_DAT_1812f0ab0 << 0x20) +
         ((uVar13 & 0xffffffff) * (ulonglong)_DAT_1812f0a90 +
          (ulonglong)uVar23 * (ulonglong)_DAT_1812f0a80 << 0x20) +
         (uVar13 & 0xffffffff) * (ulonglong)_DAT_1812f0a80 +
         (uVar25 & 0xffffffff) * (ulonglong)_DAT_1812f0a60 +
         ((ulonglong)_DAT_1812f0a70 * (uVar25 & 0xffffffff) +
          (ulonglong)uVar21 * (ulonglong)_DAT_1812f0a60 << 0x20))) + 0x8fd21061df596e4;
  _DAT_18320e350 = _DAT_18320e0b0 ^ uVar14;
  *(ulonglong *)(unaff_RBP + 0x50) = _DAT_18320e0b0;
  _DAT_18320e2c8 = (_DAT_18320e2c8 ^ uVar14) + _DAT_18320e0b0 ^ 0x5d6ad7fd6fa02fa5;
  _DAT_18320e1e8 = (_DAT_18320e1e8 * 0x34cf9349162517a3 ^ _DAT_18320e2c8) + uVar14;
  _DAT_18320e120 = _DAT_18320e1e8 ^ _DAT_18320e2c8;
  uVar13 = (_DAT_18320e1a0 ^ _DAT_1812f0b20) + _DAT_18320e330 + 0xa0ead00d00a776f3;
  uVar20 = (_DAT_18320e330 ^ _UNK_1812f0b28) + _DAT_18320e1a0 + 0xb5d9eb86fc4d4375;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e1a0 ^ _DAT_1812f0b20;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e330 ^ _UNK_1812f0b28;
  _DAT_18320dfe0 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e1a0 + 0xb5d9eb86fc4d4375)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_18320e330 + 0xa0ead00d00a776f3));
  uVar13 = _DAT_18320dfe0 - (_DAT_18320dfe0 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  bVar11 = (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar13 = (uint)bVar11 + (uint)bVar11 ^ _DAT_18320dfe0;
  _DAT_18320e1a8 = (_DAT_18320e1a8 ^ uVar13) + 0x15333b8b78c816a3 ^ 0x14a3b54208910f3e;
  _DAT_18320e238 = (_DAT_18320e238 * -0x3941d6cceba23899 ^ _DAT_18320e1a8) + uVar13;
  _DAT_18320e360 = _DAT_18320e238 ^ _DAT_18320e1a8;
  _DAT_18320e018 = 0x15333b8b78c816a3;
  uVar13 = (_DAT_18320e0b0 ^ _DAT_1812f0b30) + _DAT_18320e008 + 0x84222305;
  uVar20 = (_DAT_18320e008 ^ _UNK_1812f0b38) + _DAT_18320e0b0 + 0x903d53aa908c4ff0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e0b0 ^ _DAT_1812f0b30;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e008 ^ _UNK_1812f0b38;
  _DAT_18320e270 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e0b0 + 0x903d53aa908c4ff0)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18320e008 + 0x84222305));
  uVar13 = _DAT_18320e270 * -0x6889e545f7ff033 ^ 0x903d53aa908c4ff0;
  _DAT_18320e3a0 = _DAT_18320e340 ^ uVar13 ^ 0x903d53aa908c5010;
  _DAT_18320dfa0 = (_DAT_18320dfa0 ^ uVar13) + 0x903d53aa908c5010 ^ 0x481743349f28c0e7;
  _DAT_18320df48 = (_DAT_18320df48 * 0x61b8b5e8bbd4a1b3 ^ _DAT_18320dfa0) + uVar13;
  _DAT_18320df88 = _DAT_18320df48 ^ _DAT_18320dfa0;
  _DAT_18320dfd0 = 0x903d53aa908c5010;
  _DAT_18320dfc8 = func_0x000189366aa0(_DAT_18320df20 + 0x77bf674ae57ccbdaU ^ 0xbe);
  _DAT_18320e108 = _DAT_18320e328 ^ _DAT_18320dfc8 ^ 0x20;
  _DAT_18320e350 = (_DAT_18320e350 ^ _DAT_18320dfc8) + 0x20 ^ 0xd6365e65767b3921;
  _DAT_18320e310 = (_DAT_18320e310 * 0x18fc4c826342b8c1 ^ _DAT_18320e350) + _DAT_18320dfc8;
  _DAT_18320e1a0 = _DAT_18320e310 ^ _DAT_18320e350;
  _DAT_18320e3f0 = 0x20;
  _DAT_18320e0a0 = func_0x000189366aa0(_DAT_18320dfb0 + 0xbca84c32e147bb8b ^ 0xfa);
  _DAT_18320e358 =
       (_DAT_18320e358 ^ _DAT_18320e0a0 * -0x2aeedd8d08a75655) + 0x63acb73c8d9a043c ^
       0x1562a053a69acb4a;
  _DAT_18320e0a8 =
       (_DAT_18320e0a8 * -0xfae3073670716c1 ^ _DAT_18320e358) + _DAT_18320e0a0 * -0x2aeedd8d08a75655
  ;
  _DAT_18320e0d0 = _DAT_18320e0a8 ^ _DAT_18320e358;
  _DAT_18320e220 = 0x63acb73c8d9a043c;
  _DAT_18320e300 = func_0x000189366aa0(_DAT_18320e218 + 0xc1282e153f483893 ^ 0xda);
  uVar13 = _DAT_18320e300 & 0xffffffffffffffc0;
  _DAT_18320e2b8 = _DAT_18320e1c0 ^ uVar13 ^ 0x9c5348c37265fbe4;
  _DAT_18320e358 = (_DAT_18320e358 ^ uVar13) + 0x9c5348c37265fbe4 ^ 0x665e4a6634131fd4;
  _DAT_18320e250 = (_DAT_18320e250 * -0x6430bf5918d21465 ^ _DAT_18320e358) + uVar13;
  _DAT_18320e378 = _DAT_18320e250 ^ _DAT_18320e358;
  _DAT_18320e400 = 0x9c5348c37265fbe4;
  uVar13 = (_DAT_18320e3c0 ^ _DAT_1812f0b40) + _DAT_18320e1b8 + 0x9c5348c3f647d8c1;
  uVar20 = (_DAT_18320e1b8 ^ _UNK_1812f0b48) + _DAT_18320e3c0 + 0x63acb73c8d9a043c;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e3c0 ^ _DAT_1812f0b40;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e1b8 ^ _UNK_1812f0b48;
  _DAT_18320e378 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e3c0 + 0x63acb73c8d9a043c)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_18320e1b8 + 0x9c5348c3f647d8c1));
  _DAT_18320e238 = _DAT_18320e280 ^ _DAT_18320e4f0 ^ 0x20;
  _DAT_18320e1a8 = (_DAT_18320e1a8 ^ _DAT_18320e4f0) + 0x20 ^ 0x1001c02d49c97303;
  _DAT_18320e348 = (_DAT_18320e348 * -0x1f2c98f800d0b6b9 ^ _DAT_18320e1a8) + _DAT_18320e4f0;
  _DAT_18320e248 = _DAT_18320e348 ^ _DAT_18320e1a8;
  _DAT_18320dfe0 = 0x20;
  uVar13 = (_DAT_18320e2a8 ^ _DAT_1812f0b50) + _DAT_18320e018 + 0x84222325;
  uVar20 = (_DAT_18320e018 ^ _UNK_1812f0b58) + _DAT_18320e2a8 + 0x28ee4e16a88345a0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e2a8 ^ _DAT_1812f0b50;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e018 ^ _UNK_1812f0b58;
  _DAT_18320df10 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e2a8 + 0x28ee4e16a88345a0)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_18320e018 + 0x84222325));
  uVar13 = _DAT_18320df10 << 0x11 | (_DAT_18320df10 & 0x7fffffffffffffff) >> 0x2f;
  _DAT_18320e140 = (_DAT_18320e140 ^ uVar13) + 0xd711b1e9577cba60 ^ 0x79bed9c54a4b2d9c;
  _DAT_18320e0a8 = (_DAT_18320e0a8 * 0x69a2f34ce794ceaf ^ _DAT_18320e140) + uVar13;
  _DAT_18320e018 = _DAT_18320e0a8 ^ _DAT_18320e140;
  _DAT_18320e468 = 0xd711b1e9577cba60;
  _DAT_18320e208 = func_0x000189366aa0(_DAT_18320dfa8 ^ 0x999a1ec5b4e5f79);
  uVar20 = _UNK_1812f0b68;
  uVar13 = _DAT_1812f0b60;
  uVar15 = (_DAT_18320e208 ^ 0x28ee4e16a88345a0) * 0x5818c48553e190b9;
  _DAT_18320e468 = _DAT_18320df00 ^ uVar15 ^ 0x28ee4e16a88345c0;
  _DAT_18320df50 = (_DAT_18320df50 ^ uVar15) + 0x28ee4e16a88345c0 ^ 0xe0e2271b282e8704;
  _DAT_18320e288 = (_DAT_18320e288 * 0x323c10cd4e2fcf8d ^ _DAT_18320df50) + uVar15;
  _DAT_18320e318 = _DAT_18320e288 ^ _DAT_18320df50;
  _DAT_18320e1d8 = 0x28ee4e16a88345c0;
  uVar15 = (_DAT_18320dff0 ^ _DAT_1812f0b60) + _DAT_18320e4e0 + 0xedd7ffee73fc84da;
  uVar25 = (_DAT_18320e4e0 ^ _UNK_1812f0b68) + _DAT_18320dff0 + 0x15333b8b78c816a3;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_18320dff0 ^ _DAT_1812f0b60;
  uVar25 = (uVar25 * 0x2000 | uVar25 >> 0x33) ^ _DAT_18320e4e0 ^ _UNK_1812f0b68;
  _DAT_18320e0a8 =
       func_0x000189366aa0((uVar25 << 0x1d | uVar25 >> 0x23) - (_DAT_18320dff0 + 0x15333b8b78c816a3)
                           ^ (uVar15 << 0x1d | uVar15 >> 0x23) -
                             (_DAT_18320e4e0 + 0xedd7ffee73fc84da));
  uVar15 = ~_DAT_18320e0a8 & 0xedd7ffeef7dea7ff;
  _DAT_18320dfb0 = _DAT_18320e2e0 ^ uVar15 ^ 0x30b3b7a70a6bea2;
  _DAT_18320dff0 = (_DAT_18320dff0 ^ uVar15) + 0x30b3b7a70a6bea2 ^ 0xbe364f9760d862ce;
  _DAT_18320e2b0 = (_DAT_18320e2b0 * -0x15132c70ffe1541d ^ _DAT_18320dff0) + uVar15;
  _DAT_18320e4c0 = _DAT_18320e2b0 ^ _DAT_18320dff0;
  _DAT_18320e4e8 = 0x30b3b7a70a6bea2;
  uVar15 = (~_DAT_18320e2e8 + 0x15333b8b78c816a4) *
           ((_DAT_18320e488 ^ 0xedd7ffee73fc84da) + (_DAT_18320e488 & 0x6dd7ffee73fc84da) * 2);
  uVar15 = (uVar15 | _DAT_18320e1a8) + (uVar15 & _DAT_18320e1a8);
  uVar15 = uVar15 * 0x2000 ^ uVar15;
  uVar15 = uVar15 >> 7 ^ uVar15;
  uVar15 = uVar15 << 0x11 ^ uVar15;
  uVar15 = func_0x000189366aa0((uVar15 | 0xf8e4c4650b349279) + (uVar15 & 0xf8e4c4650b349279));
  uVar25 = uVar15 >> 1 | uVar15;
  uVar25 = uVar25 >> 2 | uVar25;
  uVar25 = uVar25 >> 4 | uVar25;
  uVar25 = uVar25 >> 8 | uVar25;
  uVar25 = uVar25 >> 0x10 | uVar25;
  uVar25 = uVar25 >> 0x20 | uVar25;
  uVar25 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
  uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
  uVar15 = uVar15 ^ 0xedd7ffeef7dea7ff ^
           (0x40 - (((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10;
  _DAT_18320e210 = (_DAT_18320e210 ^ uVar15) + 0xf8e4c4658f16b15c ^ 0xc1f5aedc8fd1a238;
  _DAT_18320df38 = (_DAT_18320df38 * 0x553f11a6c81b0785 ^ _DAT_18320e210) + uVar15;
  _DAT_18320dfa0 = _DAT_18320df38 ^ _DAT_18320e210;
  _DAT_18320e430 = 0xf8e4c4658f16b15c;
  uVar15 = (_DAT_18320e0d8 ^ uVar13) + _DAT_18320e240 + 0xedd7ffee73fc84da;
  uVar25 = (_DAT_18320e240 ^ uVar20) + _DAT_18320e0d8 + 0x15333b8b78c816a3;
  uVar13 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_18320e0d8 ^ uVar13;
  uVar20 = (uVar25 * 0x2000 | uVar25 >> 0x33) ^ _DAT_18320e240 ^ uVar20;
  _DAT_18320e248 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e0d8 + 0x15333b8b78c816a3)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_18320e240 + 0xedd7ffee73fc84da));
  uVar13 = (_DAT_18320e248 & 0x3fff) << 0x31 | _DAT_18320e248 >> 0xf;
  _DAT_18320e4f0 = (_DAT_18320e4f0 ^ uVar13) + 0x5133b8a70c806a3 ^ 0xf4d91e2c662d9fbf;
  _DAT_18320e440 = (_DAT_18320e440 * 0x4d52ecdcabc9ed6f ^ _DAT_18320e4f0) + uVar13;
  _DAT_18320e158 = _DAT_18320e440 ^ _DAT_18320e4f0;
  _DAT_18320e4e8 = 0x5133b8a70c806a3;
  uVar13 = (_DAT_18320e140 ^ _DAT_1812f0b70) + _DAT_18320e108 + 0xf8e4c4650b349279;
  uVar20 = (_DAT_18320e108 ^ _UNK_1812f0b78) + _DAT_18320e140 + 0xa267714e1900d46;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18320e140 ^ _DAT_1812f0b70;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ _DAT_18320e108 ^ _UNK_1812f0b78;
  _DAT_18320e0b8 =
       func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_18320e140 + 0xa267714e1900d46)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_18320e108 + 0xf8e4c4650b349279));
  uVar13 = ~_DAT_18320e0b8 & 0xf8e4c4658f16b15c | 0x315c;
  _DAT_18320e368 = _DAT_18320e008 ^ uVar13 ^ 0x30b3b7a70a6bea2;
  _DAT_18320e060 = (_DAT_18320e060 ^ uVar13) + 0x30b3b7a70a6bea2 ^ 0x898120867eefc1ed;
  _DAT_18320e250 = (_DAT_18320e250 * 0x71c8004d39ddd87b ^ _DAT_18320e060) + uVar13;
  _DAT_18320e028 = _DAT_18320e250 ^ _DAT_18320e060;
  _DAT_18320e3f0 = 0x30b3b7a70a6bea2;
  _DAT_18320e488 = func_0x000189366aa0(_DAT_18320e0c8 ^ 0xffe0ff8422ffdd8d);
  uVar13 = _DAT_18320e488 - (_DAT_18320e488 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar20 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18320e488
  ;
  uVar13 = uVar20 >> 1 | uVar20;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  _DAT_18320e438 =
       ((0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       uVar20) & 0xfffffffffff;
  _DAT_18320e100 = _DAT_18320e100 ^ _DAT_18320e438 ^ 0x734a600fd66bf0f9;
  _DAT_18320e300 = (_DAT_18320e300 * 0x5f6b19910f8b8b17 ^ _DAT_18320e100) + _DAT_18320e438;
  _DAT_18320e3e8 = _DAT_18320e300 ^ _DAT_18320e100;
  _DAT_18320e370 = 0;
  uVar13 = _DAT_18320e118 + 0x10844460a;
  uVar20 = (_DAT_18320e118 * 0x2000 | _DAT_18320e118 >> 0x33) ^ _DAT_18320e118;
  uVar12 = func_0x000189366aa0((uVar20 << 0x1d | uVar20 >> 0x23) ^
                               (((uVar13 * 0x2000 | uVar13 >> 0x33) ^ 0x84222305) << 0x1d |
                               (uVar13 & 0x7ffffffffffff) >> 0x16) - (_DAT_18320e118 + 0x84222305));
  uVar13 = (ulonglong)(~uVar12 & 0x20);
  _DAT_18320e1f0 = _DAT_18320e008 ^ uVar13 ^ 0x20;
  _DAT_18320e2d0 = (_DAT_18320e2d0 ^ uVar13) + 0x20 ^ 0x76f2af447561641a;
  _DAT_18320e420 = (_DAT_18320e420 * -0x6dbc27dadfaf350f ^ _DAT_18320e2d0) + uVar13;
  _DAT_18320e0f8 = _DAT_18320e420 ^ _DAT_18320e2d0;
  _DAT_18320e2b8 = 0x20;
  uVar13 = ~_DAT_18320e260 *
           ((_DAT_18320e078 ^ 0xedd7ffee73fc84da) + (_DAT_18320e078 & 0x6dd7ffee73fc84da) * 2);
  uVar13 = (uVar13 | _DAT_18320e430) + (uVar13 & _DAT_18320e430);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_18320e288 =
       func_0x000189366aa0((uVar13 | 0x122800118c037b25) + (uVar13 & 0x122800118c037b25));
  uVar13 = _DAT_18320e288 & 0xedd7ffeef7dea7ff | 0xec00000000000000;
  _DAT_18320e098 = (_DAT_18320e098 ^ uVar13) + 0x1228001108215800 ^ 0x7e0da10a45e63d43;
  _DAT_18320e190 = (_DAT_18320e190 * 0x73cb6af9fee69443 ^ _DAT_18320e098) + uVar13;
  _DAT_18320e108 = _DAT_18320e190 ^ _DAT_18320e098;
  _DAT_18320e230 = 0x1228001108215800;
  _DAT_18320df78 = func_0x000189366aa0(_DAT_18320e4d8 ^ 0xffe0ff7c04ffe11e);
  uVar13 = _DAT_18320df78 & 0xfffffffffffffe00;
  _DAT_18320e4a8 = _DAT_18320e1d8 ^ uVar13 ^ 0x20;
  _DAT_18320e168 = (_DAT_18320e168 ^ uVar13) + 0x20 ^ 0xe0d71a7e930ca235;
  _DAT_18320e0f0 = (_DAT_18320e0f0 * 0x5d3df9715ed94671 ^ _DAT_18320e168) + uVar13;
  _DAT_18320df10 = _DAT_18320e0f0 ^ _DAT_18320e168;
  _DAT_18320e450 = 0x20;
  _DAT_18320dff8 = func_0x000189366aa0(_DAT_18320e478 + 0xffe0ff84050021ffU ^ 0x81);
  uVar13 = _DAT_18320dff8 ^ 0x20;
  _DAT_18320e398 = _DAT_18320dfb8 ^ uVar13 ^ 0x20;
  _DAT_18320e490 = (_DAT_18320e490 ^ uVar13) + 0x20 ^ 0x7fabdc4af7435cfb;
  _DAT_18320e3a8 = (_DAT_18320e3a8 * -0x43850ae248273c27 ^ _DAT_18320e490) + uVar13;
  _DAT_18320df00 = _DAT_18320e3a8 ^ _DAT_18320e490;
  _DAT_18320e0a8 = 0x20;
  switch(*(ulonglong *)(unaff_RBP + 0x50) < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 935288b (image 18935288b) =====

void FUN_18935288b(void)

{
  return;
}



// ===== continuation @ rva 933cb04 (image 18933cb04) =====

void FUN_18933cb04(void)

{
  longlong unaff_RBP;
  uint unaff_EDI;
  
                    /* WARNING: Could not recover jumptable at 0x00018933cb1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812ef420 + (ulonglong)(unaff_EDI >> 0x1f) * 8))
            ((ulonglong)(unaff_EDI >> 0x1f),&UNK_1812ef420,unaff_RBP + -0x3b);
  return;
}



// ===== continuation @ rva 9352578 (image 189352578) =====

undefined8 thunk_FUN_18933ca6d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 93525c4 (image 1893525c4) =====

undefined8 FUN_1893525c4(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x2e8))();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x70);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== continuation @ rva 935253e (image 18935253e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18935253e(void)

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



// ===== continuation @ rva 934a9a4 (image 18934a9a4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18934a9a4(undefined4 param_1)

{
  int iVar1;
  longlong unaff_RBP;
  int unaff_R12D;
  longlong *unaff_R13;
  undefined8 unaff_R15;
  
  *(undefined4 *)(unaff_RBP + 0x70) = param_1;
  (**(code **)(*unaff_R13 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x80) = 6;
  *(undefined8 *)(unaff_RBP + 0x70) = unaff_R15;
  *(int *)(unaff_RBP + 0x78) = unaff_R12D + 2;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93525e8 (image 1893525e8) =====

undefined8 FUN_1893525e8(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x70);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== continuation @ rva 9369010 (image 189369010) =====

void FUN_189369010(void)

{
  return;
}



// ===== continuation @ rva 9368e67 (image 189368e67) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189368e67(void)

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



// ===== continuation @ rva 936c6d1 (image 18936c6d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936c6d1(void)

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



// ===== continuation @ rva 9368ff8 (image 189368ff8) =====

undefined8 FUN_189368ff8(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva 936d11b (image 18936d11b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936d11b(void)

{
  int iVar1;
  longlong *unaff_RBX;
  int iStack0000000000000058;
  
  iStack0000000000000058 = 0;
  iVar1 = (**(code **)(*unaff_RBX + 0x558))();
  switch(iStack0000000000000058 < 0 || iVar1 <= iStack0000000000000058) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 936a86f (image 18936a86f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936a86f(void)

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



// ===== continuation @ rva 936cc35 (image 18936cc35) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1893694a0(void)

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



// ===== continuation @ rva 936d1d5 (image 18936d1d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936d1d5(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,param_2,0x2e);
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



// ===== continuation @ rva 9369c0b (image 189369c0b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189369c0b(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
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



// ===== continuation @ rva 936da33 (image 18936da33) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936da33(void)

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



// ===== continuation @ rva 936d9df (image 18936d9df) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936d9df(void)

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



// ===== continuation @ rva 936dca1 (image 18936dca1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936dca1(void)

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



// ===== continuation @ rva 936dc4d (image 18936dc4d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936dc4d(void)

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



// ===== continuation @ rva 936e558 (image 18936e558) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936e558(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1812f6598)();
  return;
}



// ===== continuation @ rva 936e4f2 (image 18936e4f2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936e4f2(void)

{
  FUN_190dd72e0();
  (*_DAT_1812f6438)();
  return;
}



// ===== continuation @ rva 936e7a6 (image 18936e7a6) =====

void FUN_18936e7a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 936e633 (image 18936e633) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936e633(void)

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



// ===== continuation @ rva 936e763 (image 18936e763) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936e763(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1812f65d8)();
  return;
}



// ===== continuation @ rva 936dffc (image 18936dffc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936dffc(void)

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



// ===== continuation @ rva 936e798 (image 18936e798) =====

void FUN_18936e798(void)

{
  return;
}



// ===== continuation @ rva 936e6f4 (image 18936e6f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18936e6f4(void)

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



// ===== continuation @ rva 936de7f (image 18936de7f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936de7f(void)

{
  FUN_190ddfc90();
  (*_DAT_1812f6368)();
  return;
}



// ===== continuation @ rva 936e406 (image 18936e406) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18936e406(void)

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



