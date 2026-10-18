// ===== continuation @ rva b157e20 (image 18b157e20) =====

void FUN_18b157e20(void)

{
  return;
}



// ===== continuation @ rva b157c6d (image 18b157c6d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157c6d(void)

{
  FUN_190ddfc90();
  (*_DAT_181a6dcf8)();
  return;
}



// ===== continuation @ rva b157e28 (image 18b157e28) =====

void FUN_18b157e28(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b157ddc (image 18b157ddc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b157ddc(void)

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



// ===== continuation @ rva b157e00 (image 18b157e00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157e00(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a6dc68)();
  return;
}



// ===== continuation @ rva b157d2c (image 18b157d2c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b157d2c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117db0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b157cc4 (image 18b157cc4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b157cc4(void)

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



// ===== continuation @ rva b157cda (image 18b157cda) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157cda(void)

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



// ===== continuation @ rva b157d13 (image 18b157d13) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157d13(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a6dc88)();
  return;
}



// ===== continuation @ rva b31a106 (image 18b31a106) =====

void FUN_18b31a106(void)

{
  return;
}



// ===== continuation @ rva b2f3f7b (image 18b2f3f7b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2f3fd1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2f3f7b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2f59ae (image 18b2f59ae) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2f59c5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2f59ae(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b316dcb (image 18b316dcb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b316dcb(void)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000048;
  int in_stack_00000058;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  bVar1 = *(byte *)(lVar3 + in_stack_00000058);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar4 = (~_DAT_183290e18 + 0x7f431015) *
          ((_DAT_183290dd0 ^ 0xea9047c3) + (ulonglong)((uint)_DAT_183290dd0 & 0xea9047c3) * 2);
  uVar4 = (uVar4 | _DAT_183291168) + (uVar4 & _DAT_183291168);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183290f28 = func_0x00018b31a2f0((uVar4 | 0x95d357d7) + (ulonglong)((uint)uVar4 & 0x95d357d7))
  ;
  _DAT_1832911a8 = (_DAT_1832911a8 ^ _DAT_1832911a0) + 0x7ff374f6 ^ 0x543744e4e847b587;
  _DAT_183290da0 = (_DAT_183290da0 * 0x7d6302c912106bf3 ^ _DAT_1832911a8) + _DAT_1832911a0;
  _DAT_183290e00 = _DAT_183290da0 ^ _DAT_1832911a8;
  _DAT_183291048 = _DAT_183291230 ^ 0x7ff374f6;
  _DAT_183290da8 = 0x7ff374f6;
  uVar4 = (_DAT_183291148 ^ _DAT_181ac19a0) + _DAT_183290ec0 + 0xce7b0be1;
  uVar6 = (_DAT_183290ec0 ^ _UNK_181ac19a8) + _DAT_183291148 + 0xdc0121a4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183291148 ^ _DAT_181ac19a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183290ec0 ^ _UNK_181ac19a8;
  _DAT_183290f78 =
       func_0x00018b31a2f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183291148 + 0xdc0121a4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183290ec0 + 0xce7b0be1));
  uVar4 = (ulonglong)(~(uint)_DAT_183290f78 & 0x4a5928c4) ^ 0x4a5928c4;
  _DAT_183291228 = (_DAT_183291228 ^ uVar4) + 0x96580960 ^ 0x1731b4ff90422856;
  _DAT_1832910e8 = (_DAT_183291020 * -0x4b8d2405a208cb21 ^ _DAT_183291228) + uVar4 ^ _DAT_183291228;
  _DAT_183291020 = 0x96580960;
  uVar4 = (_DAT_183291180 ^ _DAT_181ac19b0) + _DAT_183291208 + 0x84222325;
  uVar6 = (_DAT_183291208 ^ _UNK_181ac19b8) + _DAT_183291180 + 0xbf871644;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183291180 ^ _DAT_181ac19b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183291208 ^ _UNK_181ac19b8;
  _DAT_183290d20 =
       func_0x00018b31a2f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183291180 + 0xbf871644) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183291208 + 0x84222325));
  uVar4 = (_DAT_183290d20 ^ 0xbf871644) << 0x2b | (_DAT_183290d20 ^ 0xbf871644) >> 0x15;
  _DAT_183290e48 = (_DAT_183290e48 ^ uVar4) - 0xbf871644 ^ 0x5e7ab66346615d67;
  _DAT_183291268 = (_DAT_183291268 * 0x72e34593134cd4dd ^ _DAT_183290e48) + uVar4;
  _DAT_183290d00 = _DAT_183291268 ^ _DAT_183290e48;
  _DAT_183290fb0 = 0x4078e9bc;
  _DAT_1832912b0 = func_0x00018b31a2f0(_DAT_183290e18 ^ 0xd00349f004530);
  uVar4 = (_DAT_1832912b0 ^ 0xbf001644) & 0x7ffffffff;
  _DAT_1832912c8 = _DAT_1832910a0 ^ uVar4 ^ 0xc0861644;
  _DAT_183290e80 = (_DAT_183290e80 ^ uVar4) + 0xc0861644 ^ 0x2a7ae95ce979da9d;
  _DAT_183290f50 = (_DAT_183290f50 * 0x72ab557ff5b999db ^ _DAT_183290e80) + uVar4;
  _DAT_183291278 = _DAT_183290f50 ^ _DAT_183290e80;
  _DAT_183290fc8 = 0xc0861644;
  uVar4 = (_DAT_1832912f0 ^ _DAT_181ac19c0) + _DAT_183290ef8 + 0x84222325;
  uVar6 = (_DAT_183290ef8 ^ _UNK_181ac19c8) + _DAT_1832912f0 + 0x410f8f70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832912f0 ^ _DAT_181ac19c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183290ef8 ^ _UNK_181ac19c8;
  _DAT_183290dd8 =
       func_0x00018b31a2f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832912f0 + 0x410f8f70) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183290ef8 + 0x84222325));
  _DAT_183291008 = (_DAT_183291008 ^ _DAT_183290dd8 ^ 0x410f8f70) - 0x410f8f70 ^ 0xfcca2d529286db5f;
  _DAT_183291118 =
       (_DAT_183291118 * -0x2409b21f4b00f109 ^ _DAT_183291008) + (_DAT_183290dd8 ^ 0x410f8f70);
  _DAT_183291160 = _DAT_183291118 ^ _DAT_183291008;
  _DAT_183291120 = 0xbef07090;
  uVar4 = (_DAT_183290d30 ^ _DAT_181ac19d0) + _DAT_183290fc0 + 0x84dd2325;
  uVar6 = (_DAT_183290fc0 ^ _UNK_181ac19d8) + _DAT_183290d30 + 0x410f8f70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183290d30 ^ _DAT_181ac19d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183290fc0 ^ _UNK_181ac19d8;
  _DAT_183291060 =
       func_0x00018b31a2f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183290d30 + 0x410f8f70) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183290fc0 + 0x84dd2325));
  uVar4 = _DAT_183291060 << 0x2f | _DAT_183291060 >> 0x11;
  _DAT_1832911f8 = _DAT_183291138 ^ uVar4 ^ 0x420e8f70;
  _DAT_183290d40 = (_DAT_183290d40 ^ uVar4) + 0x420e8f70 ^ 0x43761ebdf1ff11f8;
  _DAT_183290d48 = (_DAT_183290d48 * 0x210340ee274417f5 ^ _DAT_183290d40) + uVar4;
  _DAT_183290f60 = _DAT_183290d48 ^ _DAT_183290d40;
  _DAT_183291098 = 0x420e8f70;
  uVar4 = (~_DAT_183290fc0 + 0xcc7d2711) *
          ((_DAT_183291268 ^ 0x84222325) + (ulonglong)((uint)_DAT_183291268 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183291038) + (uVar4 & _DAT_183291038);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832910b0 = func_0x00018b31a2f0((uVar4 | 0x485f0435) + (ulonglong)((uint)uVar4 & 0x485f0435))
  ;
  _DAT_1832912a8 = _DAT_183290e90 * -0x1388662bd1339d6b;
  _DAT_183290ed8 = _DAT_183290ed8 - 0xcc7d2710 ^ 0x41b6e85388a23263;
  _DAT_183290e90 = _DAT_1832912a8 ^ _DAT_183290ed8;
  _DAT_183291218 = 0x3382d8f0;
  _DAT_183290e38 = func_0x00018b31a2f0(_DAT_183291258 ^ 0xfffbffb7cd009f4f);
  uVar4 = (((_DAT_183290e38 ^ 0xbb0a9e8f00000) << 0xb | _DAT_183290e38 >> 0x35) >> 6) *
          0x3e91578d90ccdfc0;
  _DAT_183290d40 = _DAT_183290f20 ^ uVar4 ^ 0xcd7c2710;
  _DAT_1832911c0 = (_DAT_1832911c0 ^ uVar4) + 0xcd7c2710 ^ 0x4cf80f51a5ccb65;
  _DAT_183291038 = (_DAT_183291038 * 0x7b6a9fb7a7859f19 ^ _DAT_1832911c0) + uVar4;
  _DAT_183290ea0 = _DAT_183291038 ^ _DAT_1832911c0;
  _DAT_183290e80 = 0xcd7c2710;
  uVar4 = (_DAT_183290fd0 ^ _DAT_181ac19e0) + 0x116da2b45;
  uVar6 = (_UNK_181ac19e8 ^ 0xcd7c2710) + _DAT_183290fd0 + 0x3382d8f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183290fd0 ^ _DAT_181ac19e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _UNK_181ac19e8 ^ 0xcd7c2710;
  _DAT_183290f30 =
       func_0x00018b31a2f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183290fd0 + 0x3382d8f0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - 0x116da2b45);
  uVar4 = (_DAT_183290f30 << 0x2c | _DAT_183290f30 >> 0x14) * 0x7d1dbac361cb84ff;
  _DAT_183291080 = _DAT_183291070 ^ uVar4 ^ 0x100ff0000;
  _DAT_183291100 = (_DAT_183291100 ^ uVar4) + 0x100ff0000 ^ 0x532b70d88c0dbb58;
  _DAT_183290f28 = (_DAT_183290f28 * -0x7a876bfc9ca8c1 ^ _DAT_183291100) + uVar4;
  _DAT_1832910b0 = _DAT_183290f28 ^ _DAT_183291100;
  _DAT_183290ea8 = 0xff0000;
  uVar4 = (~_DAT_183291170 + 0x96580961) *
          ((_DAT_183290d50 ^ 0xfbd157d3) + (ulonglong)((uint)_DAT_183290d50 & 0xfbd157d3) * 2);
  uVar4 = (uVar4 | _DAT_183291038) + (uVar4 & _DAT_183291038);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183290e90 = func_0x00018b31a2f0((uVar4 | 0x6d895eb3) + (ulonglong)((uint)uVar4 & 0x6d895eb3))
  ;
  uVar4 = ((_DAT_183290e90 ^ 0x6e7e2f88240) & 0xfffffffffffffff8) * 0x200000;
  _DAT_183291070 = _DAT_183290fe0 ^ uVar4 ^ 0x1164b7e56;
  _DAT_183291030 = (_DAT_183291030 ^ uVar4) + 0x1164b7e56 ^ 0xb986bb4a82bd1796;
  _DAT_183290d28 = (_DAT_183290d28 * -0x6622939a116e1103 ^ _DAT_183291030) + uVar4;
  _DAT_183290eb0 = _DAT_183290d28 ^ _DAT_183291030;
  _DAT_1832910d8 = 0x164b7e56;
  _DAT_183290e00 = func_0x00018b31a2f0(_DAT_183290e60 ^ 0xffb1ff9ab3008606);
  _DAT_183290de0 = (_DAT_183290de0 ^ _DAT_183290e00 ^ 0x69a37496) + 0xe9ab7d96 ^ 0xb45a9489e744840e;
  _DAT_183291048 =
       (_DAT_183291048 * 0x5ab76330e71d55a7 ^ _DAT_183290de0) + (_DAT_183290e00 ^ 0x69a37496);
  _DAT_183291018 = _DAT_183291048 ^ _DAT_183290de0;
  _DAT_183290ed8 = 0xe9ab7d96;
  uVar4 = (~_DAT_183290f28 + 0x96580961) *
          ((_DAT_183290de8 ^ 0xfbd157d3) + (ulonglong)((uint)_DAT_183290de8 & 0xfbd157d3) * 2);
  uVar4 = (uVar4 | _DAT_183290fa8) + (uVar4 & _DAT_183290fa8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183291168 = func_0x00018b31a2f0((uVar4 | 0x6d895eb3) + (ulonglong)((uint)uVar4 & 0x6d895eb3))
  ;
  uVar4 = (_DAT_183291168 ^ 0x4b24a6e7e2f88240) << 0x25 |
          (_DAT_183291168 ^ 0x4b24a6e7e2f88240) >> 0x1b;
  _DAT_1832911e0 = (_DAT_1832911e0 ^ uVar4) + 0x16500060 ^ 0xc00eb2c244fde8fe;
  _DAT_183290d08 = (_DAT_183290d08 * 0x193cd660f44df341 ^ _DAT_1832911e0) + uVar4;
  _DAT_183290f18 = _DAT_183290d08 ^ _DAT_1832911e0;
  _DAT_183290eb0 = 0x16500060;
  _DAT_183290df8 = func_0x00018b31a2f0(_DAT_183291010 + 0xffc60040acffd8ffU ^ 0x5d);
  uVar4 = _DAT_183290df8 << 9 | _DAT_183290df8 >> 0x37;
  _DAT_183290f28 = _DAT_1832910a8 ^ uVar4 ^ 0x1164b7e56;
  _DAT_183290f68 = (_DAT_183290f68 ^ uVar4) + 0x1164b7e56 ^ 0xa15a8648b900a274;
  _DAT_183291108 = (_DAT_183291108 * 0x18f31799ae36df95 ^ _DAT_183290f68) + uVar4;
  _DAT_183290d58 = _DAT_183291108 ^ _DAT_183290f68;
  _DAT_183290fa8 = 0x164b7e56;
  uVar4 = (_DAT_183290d70 ^ _DAT_181ac19f0) + _DAT_183290da0 + 0xfbd157d3;
  uVar6 = (_DAT_183290da0 ^ _UNK_181ac19f8) + _DAT_183290d70 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183290d70 ^ _DAT_181ac19f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183290da0 ^ _UNK_181ac19f8;
  _DAT_1832910f8 =
       func_0x00018b31a2f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183290d70 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183290da0 + 0xfbd157d3));
  uVar4 = _DAT_1832910f8 >> 1 | _DAT_1832910f8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1832910f8;
  _DAT_1832911a8 = (_DAT_1832911a8 ^ uVar4) + 0x800c8b09 ^ 0x81aa04facfa1132c;
  _DAT_183291018 = (_DAT_183291018 * -0x5c93fe8001802d47 ^ _DAT_1832911a8) + uVar4;
  _DAT_1832912a8 = _DAT_183291018 ^ _DAT_1832911a8;
  _DAT_183291210 = 0x800c8b09;
  uVar4 = (~_DAT_1832910e8 + 0x800c8b0a) *
          ((_DAT_183290f30 ^ 0xfbd157d3) + (ulonglong)((uint)_DAT_183290f30 & 0xfbd157d3) * 2);
  uVar4 = (uVar4 | _DAT_183290ff0) + (uVar4 & _DAT_183290ff0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183290dd0 = func_0x00018b31a2f0((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda))
  ;
  _DAT_183290f70 = _DAT_183290f70 ^ _DAT_183290dd0 ^ 0x800c8b09 ^ 0x40d002c085ba7370;
  _DAT_183290f50 =
       (_DAT_183290f50 * -0xa2b1be684b2ce23 ^ _DAT_183290f70) + (_DAT_183290dd0 ^ 0x800c8b09);
  _DAT_183291000 = _DAT_183290f50 ^ _DAT_183290f70;
  _DAT_183291178 = 0;
  uVar4 = ((_DAT_183291198 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_183291198 & 0x84dd2325) * 2) *
          -_DAT_183290e40;
  uVar4 = (uVar4 | _DAT_183290f18) + (uVar4 & _DAT_183290f18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183290ea8 = func_0x00018b31a2f0((uVar4 | 0x84dd2325) + (ulonglong)((uint)uVar4 & 0x84dd2325))
  ;
  uVar4 = (_DAT_183290ea8 ^ 0xff0000) & 0x7fffffffffffffff;
  _DAT_1832912b0 = _DAT_1832912b0 ^ uVar4 ^ 0xff0000;
  _DAT_183291240 = (_DAT_183291240 ^ uVar4) + 0xff0000 ^ 0x9bcdc39650cded04;
  _DAT_183291118 = (_DAT_183291118 * 0x5eb35e5f6cb68195 ^ _DAT_183291240) + uVar4;
  _DAT_1832912c0 = _DAT_183291118 ^ _DAT_183291240;
  _DAT_183290f68 = 0xff0000;
  uVar4 = (_DAT_1832911c8 ^ _DAT_181ac1a00) + _DAT_183290de8 + 0xea9047c3;
  uVar6 = (_DAT_183290de8 ^ _UNK_181ac1a08) + _DAT_1832911c8 + 0x6eb264e6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832911c8 ^ _DAT_181ac1a00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183290de8 ^ _UNK_181ac1a08;
  _DAT_1832912f8 =
       func_0x00018b31a2f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832911c8 + 0x6eb264e6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183290de8 + 0xea9047c3));
  uVar4 = ((_DAT_1832912f8 ^ 0x2fddcb061f9c0000) & 0xfffffffffffe0000 ^ 0x6eb264e6) << 0x1c |
          (_DAT_1832912f8 ^ 0x2fddcb061f9c0000) >> 0x24;
  _DAT_183291128 = _DAT_183291128 ^ uVar4 ^ 0x50d942afee07ae0a;
  _DAT_183290ee8 = (_DAT_183290ee8 * 0x19ec4b082867e9e1 ^ _DAT_183291128) + uVar4;
  _DAT_183291240 = _DAT_183290ee8 ^ _DAT_183291128;
  _DAT_183290d58 = 0;
  uVar6 = (ulonglong)bVar1 * 0x10000;
  uVar4 = in_stack_00000048 ^ 0x84222325 ^ _DAT_183290e98;
  lVar3 = (in_stack_00000048 ^ 0x84222325) + _DAT_183290f98;
  uVar5 = uVar4 + lVar3;
  uVar7 = (uVar6 ^ _DAT_183290f98) + _DAT_183290e98 + uVar6;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6 ^ _DAT_183290f98;
  _DAT_183291128 =
       func_0x00018b31a2f0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183290e98 + uVar6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  _DAT_183291108 = in_stack_00000048 | uVar6;
  _DAT_183290f50 = (_DAT_183290f50 ^ _DAT_183291128) + _DAT_183291108 ^ 0x67f905ec095c4376;
  _DAT_183290d68 = (_DAT_183290d68 * -0x6a1100e8d8c5d8e5 ^ _DAT_183290f50) + _DAT_183291128;
  _DAT_183290d98 = _DAT_183290d68 ^ _DAT_183290f50;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa_00,in_stack_00000038);
  switch(iVar2 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b316d80 (image 18b316d80) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b316d80(void)

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



// ===== continuation @ rva b311ad1 (image 18b311ad1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b311ad1(void)

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



// ===== continuation @ rva b2f7999 (image 18b2f7999) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2f79b4 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2f7999(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2f58d9 (image 18b2f58d9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2f5971 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2f58d9(void)

{
  longlong *unaff_RSI;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined2 uStack000000000000013a;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000178;
  
  uStack0000000000000038 = in_stack_00000040;
  uStack0000000000000048 = CONCAT44((int)((ulonglong)in_stack_00000040 >> 0x20),2);
  uStack0000000000000178 = 0xf9c122fc;
  rdtsc();
  uStack000000000000013a = 0x44;
  uStack000000000000013c = 0x530045;
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2f7c62 (image 18b2f7c62) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2f7c9c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2f7c62(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2f7be6 (image 18b2f7be6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2f7c1c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2f7be6(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2f6c8c (image 18b2f6c8c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2f6caa */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2f6c8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b21452f (image 18b21452f) =====

void FUN_18b21452f(void)

{
  return;
}



// ===== continuation @ rva b212579 (image 18b212579) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b212579(void)

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



// ===== continuation @ rva b2446bf (image 18b2446bf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2446fa */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2446bf(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b28e91c (image 18b28e91c) =====

void FUN_18b28e91c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva b2418d9 (image 18b2418d9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b24193c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2418d9(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x120) = uVar1;
  (**(code **)(**(longlong **)(unaff_RBP + 0x140) + 0x720))(*(longlong **)(unaff_RBP + 0x140));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2767de (image 18b2767de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2767fc */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2767de(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x140));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2659af (image 18b2659af) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2659d1 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2659af(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  
  (**(code **)(in_RAX + 0x720))(*(undefined8 *)(unaff_RBP + 0x140));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b27aa60 (image 18b27aa60) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b27aaac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b27aa60(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x118) = uVar1;
  (**(code **)(*unaff_RDI + 0x720))(*(undefined8 *)(unaff_RBP + 0x140));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b27ca0d (image 18b27ca0d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b27ca47 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b27ca0d(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x140);
  uVar2 = FUN_190dd72e0(plVar1,param_2,0x12);
  *(undefined8 *)(unaff_RBP + 0x120) = uVar2;
  (**(code **)(*plVar1 + 0x720))(plVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2af4a6 (image 18b2af4a6) =====

void FUN_18b2af4a6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00018b2af4d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ab2a80 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva b2af453 (image 18b2af453) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2af489 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2af453(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2c5a1d (image 18b2c5a1d) =====

void FUN_18b2c5a1d(void)

{
  return;
}



// ===== continuation @ rva b2b4600 (image 18b2b4600) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2b4600(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  *(undefined8 *)(unaff_RBP + 0x50) = *(undefined8 *)(unaff_RBP + -0x30);
  *(longlong *)(unaff_RBP + 0x38) = param_3;
  *(longlong *)(unaff_RBP + 0x90) = param_3 + 1;
  _DAT_18328f808 = func_0x00018b2d9fb0(_DAT_18328f510 + 0xb7154da0b0154c31 ^ 0x24);
  _DAT_18328f7e0 = (_DAT_18328f7e0 ^ _DAT_18328f808) + 0xc931d43698a9a98b ^ 0x87d812fa71b77a86;
  _DAT_18328f840 = (_DAT_18328f840 * 0x1b1a0678a556d18d ^ _DAT_18328f7e0) + _DAT_18328f808;
  _DAT_18328f970 = _DAT_18328f840 ^ _DAT_18328f7e0;
  _DAT_18328fbc0 = 0xc931d43698a9a98b;
  uVar4 = (~_DAT_18328f5f0 + 0x36ce2bc967565676) *
          ((_DAT_18328fc78 ^ 0x84222cda) + (ulonglong)((uint)_DAT_18328fc78 & 0x84222cda) * 2);
  uVar4 = (uVar4 | _DAT_18328f628) + (uVar4 & _DAT_18328f628);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328fcf8 = func_0x00018b2d9fb0((uVar4 | 0x36ce2bc9e3747aaf) + (uVar4 & 0x36ce2bc9e3747aaf));
  uVar2 = (uint)_DAT_18328fcf8 ^ 0x67565fff;
  uVar4 = (ulonglong)(uVar2 & 0xfff);
  uVar3 = uVar4 - (uVar2 >> 1 & 0x555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar4;
  _DAT_18328fb60 = _DAT_18328fb00 ^ uVar4 ^ 0x36ce2bc967566674;
  _DAT_18328fab8 = (_DAT_18328fab8 ^ uVar4) + 0x36ce2bc967566674 ^ 0xab2e68a61d1d2f44;
  _DAT_18328fbb8 = (_DAT_18328fbb8 * 0x6f8d4e648d66dfaf ^ _DAT_18328fab8) + uVar4;
  _DAT_18328f6f0 = _DAT_18328fbb8 ^ _DAT_18328fab8;
  _DAT_18328faa0 = 0x36ce2bc967566674;
  uVar4 = (~_DAT_18328fa18 + 0xee8c8f947b3ecfdd) *
          ((_DAT_18328fc60 ^ 0x1173706b00e36306) + (_DAT_18328fc60 & 0x1173706b00e36306) * 2);
  uVar4 = (uVar4 | _DAT_18328f6e0) + (uVar4 & _DAT_18328f6e0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328f670 = func_0x00018b2d9fb0((uVar4 | 0xffffffff7bddacda) + (uVar4 & 0xffffffff7bddacda));
  uVar4 = _DAT_18328f670 << 0x19 | _DAT_18328f670 >> 0x27;
  _DAT_18328f5d0 = _DAT_18328fb78 ^ uVar4 ^ 0xfff;
  _DAT_18328f990 = (_DAT_18328f990 ^ uVar4) + 0xfff ^ 0xe5efc261cce54a85;
  _DAT_18328fb98 = (_DAT_18328fb98 * -0x3307ce6f32b3a107 ^ _DAT_18328f990) + uVar4;
  _DAT_18328f950 = _DAT_18328fb98 ^ _DAT_18328f990;
  _DAT_18328fc98 = 0xfff;
  _DAT_18328f900 = func_0x00018b2d9fb0(_DAT_18328f6b0 + 0x763dabbaf0739f75U ^ 0xc);
  _DAT_18328f990 = (_DAT_18328f990 ^ _DAT_18328f900) + 0x612a6b69863c92e6 ^ 0x380d053c6bc3d2f1;
  _DAT_18328fc30 = (_DAT_18328fc30 * 0x3d57e22ac3e04d39 ^ _DAT_18328f990) + _DAT_18328f900;
  _DAT_18328f910 = _DAT_18328fc30 ^ _DAT_18328f990;
  _DAT_18328f8a0 = 0x612a6b69863c92e6;
  uVar4 = (_DAT_18328f7e8 ^ _DAT_181ab3da0) + _DAT_18328fc98 + 0x84222cda;
  uVar3 = (_DAT_18328fc98 ^ _UNK_181ab3da8) + _DAT_18328f7e8 + 0x9ed5949679c36d1a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18328f7e8 ^ _DAT_181ab3da0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18328fc98 ^ _UNK_181ab3da8;
  _DAT_18328f8e0 =
       func_0x00018b2d9fb0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18328f7e8 + 0x9ed5949679c36d1a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18328fc98 + 0x84222cda));
  uVar4 = (_DAT_18328f8e0 ^ 0xfff) * 0x1ffbbeece67729ad;
  _DAT_18328fca0 = _DAT_18328fc70 ^ uVar4 ^ 0x9ed5949679c37d19;
  _DAT_18328f990 = (_DAT_18328f990 ^ uVar4) + 0x9ed5949679c37d19 ^ 0xc0a6251935941fd1;
  _DAT_18328fbf8 = (_DAT_18328fbf8 * 0xa0978df81e7fccb ^ _DAT_18328f990) + uVar4;
  _DAT_18328f5f0 = _DAT_18328fbf8 ^ _DAT_18328f990;
  _DAT_18328fa58 = 0x9ed5949679c37d19;
  uVar4 = (_DAT_18328f9e0 ^ _DAT_181ab3db0) + _DAT_18328f7f8 + 0x9ed59496fde15e3c;
  uVar3 = (_DAT_18328f7f8 ^ _UNK_181ab3db8) + _DAT_18328f9e0 + 0x612a6b69863c92e6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18328f9e0 ^ _DAT_181ab3db0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18328f7f8 ^ _UNK_181ab3db8;
  _DAT_18328f788 =
       func_0x00018b2d9fb0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18328f9e0 + 0x612a6b69863c92e6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18328f7f8 + 0x9ed59496fde15e3c));
  uVar4 = _DAT_18328f788 & 0xfffffffff0000000;
  _DAT_18328f5f8 = _DAT_18328f928 ^ uVar4 ^ 0xfff;
  _DAT_18328fca0 = (_DAT_18328fca0 ^ uVar4) + 0xfff ^ 0x3727439b5423ae86;
  _DAT_18328f920 = (_DAT_18328f920 * 0xf771dc04b69ce15 ^ _DAT_18328fca0) + uVar4;
  _DAT_18328f980 = _DAT_18328f920 ^ _DAT_18328fca0;
  _DAT_18328fb70 = 0xfff;
  uVar4 = (~_DAT_18328f9b0 + 0x423ff96fbc546d4e) *
          ((_DAT_18328f950 ^ 0x6ffedffb5bdff6d2) + (_DAT_18328f950 & 0x6ffedffb5bdff6d2) * 2);
  uVar4 = (uVar4 | _DAT_18328f900) + (uVar4 & _DAT_18328f900);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328f570 = func_0x00018b2d9fb0((uVar4 | 0x2dc12694e78b9b9f) + (uVar4 & 0x2dc12694e78b9b9f));
  uVar4 = _DAT_18328f570 ^ 0x6ffedffbdffdd5f7;
  _DAT_18328f9d0 = _DAT_18328fa70 ^ uVar4 ^ 0xb23ed96b9c524344;
  _DAT_18328f510 = (_DAT_18328f510 ^ uVar4) + 0xb23ed96b9c524344 ^ 0xb2daee1eac87defd;
  _DAT_18328f968 = (_DAT_18328f968 * -0x6c82651735243387 ^ _DAT_18328f510) + uVar4;
  _DAT_18328faa0 = _DAT_18328f968 ^ _DAT_18328f510;
  _DAT_18328f998 = -0x4dc1269463adbcbc;
  uVar4 = (~_DAT_18328f5d0 + 0x423ff96fbc546d4e) *
          ((_DAT_18328f550 ^ 0x6ffedffb5bdff6d2) + (_DAT_18328f550 & 0x6ffedffb5bdff6d2) * 2);
  uVar4 = (uVar4 | _DAT_18328f618) + (uVar4 & _DAT_18328f618);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328f960 = func_0x00018b2d9fb0((uVar4 | 0x2dc12694e78b9b9f) + (uVar4 & 0x2dc12694e78b9b9f));
  uVar4 = (_DAT_18328f960 << 0x16 | _DAT_18328f960 >> 0x2a) << 0x10 |
          (_DAT_18328f960 & 0x3ffffffffff) >> 0x1a;
  _DAT_18328fcd8 = (_DAT_18328fcd8 ^ uVar4) + 0x2dc1269463a9b8ba ^ 0xf475cb72f7ff1dfb;
  _DAT_18328fcc8 = (_DAT_18328fcc8 * -0x155c0fa6ec5b737f ^ _DAT_18328fcd8) + uVar4;
  _DAT_18328f868 = _DAT_18328fcc8 ^ _DAT_18328fcd8;
  _DAT_18328f658 = 0x2dc1269463a9b8ba;
  uVar4 = (~_DAT_18328fa80 + 0x847db2d738a88a8b) *
          ((_DAT_18328f6c0 ^ 0x2dc12694e78b9b9f) + (_DAT_18328f6c0 & 0x2dc12694e78b9b9f) * 2);
  uVar4 = (uVar4 | _DAT_18328f578) + (uVar4 & _DAT_18328f578);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328f948 = func_0x00018b2d9fb0((uVar4 | 0xa9bc9443df231115) + (uVar4 & 0xa9bc9443df231115));
  uVar4 = _DAT_18328f948 << 0x19 | _DAT_18328f948 >> 0x27;
  _DAT_18328f888 = _DAT_18328f7f0 ^ uVar4 ^ 0xb23ed96b9c524344;
  _DAT_18328f6a0 = (_DAT_18328f6a0 ^ uVar4) + 0xb23ed96b9c524344 ^ 0x827a2b30e0befd0f;
  _DAT_18328fb48 = (_DAT_18328fb48 * -0x4b823cacdcfa75bd ^ _DAT_18328f6a0) + uVar4;
  _DAT_18328f740 = _DAT_18328fb48 ^ _DAT_18328f6a0;
  _DAT_18328f9f0 = 0xb23ed96b9c524344;
  uVar4 = (~_DAT_18328fc88 + 0xb23ed96b9c524345) *
          ((_DAT_18328f5a0 ^ 0xb23ed96b18706061) + (_DAT_18328f5a0 & 0x323ed96b18706061) * 2);
  uVar4 = (uVar4 | 0xb23ed96b9c524344) + (uVar4 & 0xb23ed96b9c524344);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328f7b0 = func_0x00018b2d9fb0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_18328f848 = _DAT_18328f7b0 ^ 0xa731df42093caa10;
  _DAT_18328fc20 = _DAT_18328fc20 ^ _DAT_18328f848 ^ 0x6063f0657538790f;
  _DAT_18328fb68 = (_DAT_18328fb68 * 0x49ca29e4e714a93b ^ _DAT_18328fc20) + _DAT_18328f848;
  _DAT_18328f9c0 = _DAT_18328fb68 ^ _DAT_18328fc20;
  _DAT_18328f900 = 0;
  uVar4 = ~_DAT_18328fc70 *
          ((_DAT_18328f5f8 ^ 0x6ffedffb5bdff6d2) + (_DAT_18328f5f8 & 0x6ffedffb5bdff6d2) * 2);
  uVar4 = (uVar4 | _DAT_18328fb78) + (uVar4 & _DAT_18328fb78);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328f6f8 = func_0x00018b2d9fb0((uVar4 | 0x90012004a420092d) + (uVar4 & 0x90012004a420092d));
  uVar3 = _DAT_18328f6f8 ^ 0x9001200420022a09;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3) &
          0xfffffffffffffff0;
  _DAT_18328fa08 = (_DAT_18328fa08 ^ uVar4) + 0x9001200420022a08 ^ 0x204cc422f2a001a5;
  _DAT_18328fbf8 = (_DAT_18328fbf8 * -0xda2355b637dc4d1 ^ _DAT_18328fa08) + uVar4;
  _DAT_18328f920 = _DAT_18328fbf8 ^ _DAT_18328fa08;
  _DAT_18328fb90 = 0x9001200420022a08;
  _DAT_18328fa08 = func_0x00018b2d9fb0(_DAT_18328f630 ^ 0x22a4a94a565a5477);
  uVar4 = _DAT_18328fa08 - (_DAT_18328fa08 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ _DAT_18328fa08;
  _DAT_18328fb88 = _DAT_18328fb88 ^ uVar4 ^ 0x6650130bc6cfddea;
  _DAT_18328f580 = (_DAT_18328f580 * 0x753f2b6aa32db40b ^ _DAT_18328fb88) + uVar4;
  _DAT_18328f968 = _DAT_18328f580 ^ _DAT_18328fb88;
  _DAT_18328f7b0 = 0;
  uVar4 = ((_DAT_18328fb68 ^ 0x84222cda) + (ulonglong)((uint)_DAT_18328fb68 & 0x84222cda) * 2) *
          -_DAT_18328f920;
  uVar4 = (uVar4 | _DAT_18328f580) + (uVar4 & _DAT_18328f580);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328f840 = func_0x00018b2d9fb0((uVar4 | 0x84222cda) + (ulonglong)((uint)uVar4 & 0x84222cda))
  ;
  _DAT_18328f5d8 = _DAT_18328fb70 ^ _DAT_18328f840 ^ 0xfff;
  _DAT_18328fbe0 = (_DAT_18328fbe0 ^ _DAT_18328f840) + 0xfff ^ 0x2328b68fcbbb02da;
  _DAT_18328f768 = (_DAT_18328f768 * -0x4fa13bcef01a9755 ^ _DAT_18328fbe0) + _DAT_18328f840;
  _DAT_18328fbe0 = _DAT_18328f768 ^ _DAT_18328fbe0;
  _DAT_18328f9f8 = 0xfff;
  uVar4 = (~_DAT_18328f7f0 + 0x2cf20d73d3f85068) *
          ((_DAT_18328fc78 ^ 0x2cf20d7357da7342) + (_DAT_18328fc78 & 0x2cf20d7357da7342) * 2);
  uVar4 = (uVar4 | _DAT_18328f790) + (uVar4 & _DAT_18328f790);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328fce8 = func_0x00018b2d9fb0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_18328fab0 = _DAT_18328fab0 ^ _DAT_18328fce8 & 0x2cf20d73d3f85067 ^ 0x7b658f83b9bbd018;
  _DAT_18328f588 =
       (_DAT_18328f588 * 0x69105f3b4e6e74e7 ^ _DAT_18328fab0) +
       (_DAT_18328fce8 & 0x2cf20d73d3f85067);
  _DAT_18328fc78 = _DAT_18328f588 ^ _DAT_18328fab0;
  _DAT_18328f700 = 0;
  _DAT_18328fb20 = func_0x00018b2d9fb0(_DAT_18328f920 + 0xffdbff7b29ffe1ff ^ 0x23);
  uVar4 = (_DAT_18328fb20 >> 0x14) << 0x30 |
          ((_DAT_18328fb20 & 0x7ffff) << 0x2c | _DAT_18328fb20 >> 0x14) >> 0x10;
  _DAT_18328fa40 = _DAT_18328fa60 ^ uVar4 ^ 0xfff;
  _DAT_18328fba8 = (_DAT_18328fba8 ^ uVar4) + 0xfff ^ 0x4b38d3cd33192602;
  _DAT_18328f998 = (_DAT_18328f998 * -0x1a17faaef2da1b47 ^ _DAT_18328fba8) + uVar4;
  _DAT_18328fca0 = _DAT_18328f998 ^ _DAT_18328fba8;
  _DAT_18328fb40 = 0xfff;
  switch(0xfff < *(ulonglong *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b2c590d (image 18b2c590d) =====

undefined8 thunk_FUN_18b2af48c(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva b2b4159 (image 18b2b4159) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2b45fd */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2b4159(void)

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
  uint uVar12;
  ulonglong uVar13;
  ulonglong unaff_RBX;
  longlong lVar14;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar20;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 in_XMM0 [16];
  undefined1 auVar19 [16];
  uint uVar21;
  undefined1 auVar22 [16];
  uint uVar23;
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar26;
  undefined1 unaff_XMM6 [16];
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  
  auVar19 = pshufb(in_XMM0,_DAT_1800170c0);
  uVar15 = auVar19._8_8_ + auVar19._0_8_;
  uVar16 = uVar15 + _DAT_18328f860;
  if (auVar19._4_4_ < 0) {
    uVar16 = _DAT_18328fc90 ^ uVar15;
  }
  _DAT_18328fb80 = func_0x00018b2d9fb0(in_XMM0[5] ^ uVar16);
  uVar12 = _DAT_181ab3c90;
  uVar13 = ~(unaff_RBX * unaff_RDI ^ _DAT_18328fb80) & unaff_RBX;
  uVar20 = (uint)(unaff_RBX >> 0x20);
  auVar24._8_4_ = (int)unaff_RBX;
  auVar24._0_8_ = unaff_RBX;
  auVar24._12_4_ = uVar20;
  uVar25 = unaff_XMM6._0_4_;
  uVar26 = unaff_XMM6._4_4_;
  auVar22._0_8_ = unaff_XMM6._0_8_;
  auVar22._8_4_ = uVar25;
  auVar22._12_4_ = uVar26;
  uVar16 = (ulonglong)_DAT_181ab3c10;
  auVar19 = auVar24 ^ auVar22;
  uVar8 = (ulonglong)_DAT_181ab3c00;
  uVar15 = (ulonglong)_DAT_181ab3c00;
  uVar1 = (ulonglong)_DAT_181ab3c30;
  uVar9 = (ulonglong)_DAT_181ab3c20;
  uVar2 = (ulonglong)_DAT_181ab3c20;
  uVar3 = (ulonglong)_DAT_181ab3c60;
  uVar23 = SUB164(auVar24 & auVar22,0);
  uVar4 = (ulonglong)_DAT_181ab3c50;
  uVar27 = SUB168(auVar24 & auVar22,0);
  uVar10 = (ulonglong)_DAT_181ab3c50;
  uVar5 = (ulonglong)_DAT_181ab3c80;
  uVar21 = SUB164(auVar24 | auVar22,0);
  uVar6 = (ulonglong)_DAT_181ab3c70;
  uVar28 = SUB168(auVar24 | auVar22,0);
  uVar11 = (ulonglong)_DAT_181ab3c70;
  uVar7 = (ulonglong)_DAT_181ab3ca0;
  *(undefined1 (*) [16])(unaff_RBP + 0x50) = auVar19;
  auVar30._8_4_ = 0xffffffff;
  auVar30._0_8_ = 0xffffffffffffffff;
  auVar30._12_4_ = 0xffffffff;
  uVar29 = SUB164(auVar30 ^ auVar22,0);
  uVar17 = SUB168(auVar30 ^ auVar22,0);
  _DAT_18328f5d8 =
       (((ulonglong)_DAT_181ab3c40 * (ulonglong)uVar29 +
         ((ulonglong)_DAT_181ab3cb0 * (ulonglong)uVar29 +
          (uVar17 >> 0x20) * (ulonglong)_DAT_181ab3c40 << 0x20) +
        (ulonglong)uVar12 * (ulonglong)auVar19._0_4_ +
        (uVar7 * auVar19._0_4_ + (auVar19._0_8_ >> 0x20) * (ulonglong)uVar12 << 0x20) +
        uVar6 * uVar21 + (uVar5 * uVar21 + (uVar28 >> 0x20) * uVar11 << 0x20) +
        uVar4 * uVar23 + (uVar3 * uVar23 + (uVar27 >> 0x20) * uVar10 << 0x20) +
        (uVar1 * uVar25 + uVar2 * uVar26 << 0x20) + uVar25 * uVar9 +
        (uVar16 * (unaff_RBX & 0xffffffff) + uVar15 * uVar20 << 0x20) +
        (unaff_RBX & 0xffffffff) * uVar8) -
       ((ulonglong)uVar29 * (_DAT_181ab3d20 & 0xffffffff) +
        ((ulonglong)_DAT_181ab3d90 * (ulonglong)uVar29 +
         (uVar17 >> 0x20) * (_DAT_181ab3d20 & 0xffffffff) << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 0x50) * (ulonglong)_DAT_181ab3d70 +
       ((ulonglong)_DAT_181ab3d80 * (ulonglong)*(uint *)(unaff_RBP + 0x50) +
        (auVar19._0_8_ >> 0x20) * (ulonglong)_DAT_181ab3d70 << 0x20) +
       (ulonglong)uVar21 * (ulonglong)_DAT_181ab3d50 +
       ((ulonglong)_DAT_181ab3d60 * (ulonglong)uVar21 + (uVar28 >> 0x20) * (ulonglong)_DAT_181ab3d50
       << 0x20) +
       (ulonglong)uVar23 * (ulonglong)_DAT_181ab3d30 +
       ((ulonglong)_DAT_181ab3d40 * (ulonglong)uVar23 + (uVar27 >> 0x20) * (ulonglong)_DAT_181ab3d30
       << 0x20) +
       ((ulonglong)uVar25 * (ulonglong)_DAT_181ab3d10 +
        (ulonglong)uVar26 * (ulonglong)_DAT_181ab3d00 << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_181ab3d00 +
       ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181ab3cf0 +
        (ulonglong)uVar20 * (ulonglong)_DAT_181ab3ce0 << 0x20) +
       (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181ab3ce0)) + 0x55129a82d2ff2736;
  _DAT_18328f590 = _DAT_18328f5d8 ^ uVar13;
  _DAT_18328f6c8 = (_DAT_18328f6c8 ^ uVar13) + _DAT_18328f5d8 ^ 0x1e02186fe437c3d6;
  _DAT_18328f5a8 = (_DAT_18328f5a8 * -0x439c2647e02a7603 ^ _DAT_18328f6c8) + uVar13;
  _DAT_18328f6a0 = _DAT_18328f5a8 ^ _DAT_18328f6c8;
  lVar14 = unaff_RBP + -0x30;
  uVar18 = FUN_18414b520(lVar14);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar14 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(*unaff_RSI + 0x70))(uVar18,*(undefined8 *)(unaff_RBP + 8),lVar14);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2c5520 (image 18b2c5520) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2c5520(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  iVar1 = (**(code **)(*unaff_R15 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b2c588e (image 18b2c588e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2c588e(void)

{
  char cVar1;
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R15 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b2c587c (image 18b2c587c) =====

undefined8 FUN_18b2c587c(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva b2ba1a0 (image 18b2ba1a0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2ba1a0(undefined4 param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  *(undefined4 *)(unaff_RBP + 0x60) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x68) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x70) = param_1;
  iVar1 = (**(code **)(*unaff_R15 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x70) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x70)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b2bcf11 (image 18b2bcf11) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2bcf11(void)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  ulonglong uVar10;
  ulonglong unaff_R14;
  ulonglong uVar11;
  ulonglong uVar13;
  undefined1 auVar12 [16];
  uint uVar14;
  uint uVar15;
  undefined1 unaff_XMM10 [16];
  uint uVar16;
  uint uVar17;
  
  *(undefined4 *)(unaff_RBP + 0x2c) = unaff_EDI;
  *(int *)(unaff_RBP + 0x10) = unaff_ESI << 6;
  uVar11 = _DAT_18328f870;
  uVar7 = _DAT_18328f5c8;
  uVar9 = _DAT_18328f5c8 ^ 0x57bb2ebb;
  *(bool *)(unaff_RBP + 0x90) = *(longlong *)(unaff_RBP + -8) == 0;
  uVar10 = uVar11 ^ 0xa039a798;
  lVar6 = uVar11 + 0x57bb2ebb;
  uVar11 = uVar9 + lVar6;
  uVar13 = uVar10 + uVar7 + 0xa039a798;
  uVar9 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar9;
  uVar10 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar10;
  _DAT_18328f5e0 =
       func_0x00018b2d9fb0((uVar10 << 0x1d | uVar10 >> 0x23) - (uVar7 + 0xa039a798) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar6);
  _DAT_18328fb68 = (_DAT_18328fb68 ^ _DAT_18328f5e0 ^ 0xf3b9af9e) + 0xf3b9af9e ^ 0x942afc85a71a021c;
  _DAT_18328f548 =
       (_DAT_18328f548 * 0x528a4c9e28510835 ^ _DAT_18328fb68) + (_DAT_18328f5e0 ^ 0xf3b9af9e);
  _DAT_18328f598 = _DAT_18328f548 ^ _DAT_18328fb68;
  _DAT_18328fa00 = 0xf3b9af9e;
  _DAT_18328f668 = func_0x00018b2d9fb0(_DAT_18328fb28 + 0x8200159c003cff ^ 0xfa);
  _DAT_18328faf8 =
       (_DAT_18328faf8 ^ _DAT_18328f668 * 0x5a2727b0d357722b) + 0x9e67ad41 ^ 0xe4b139649ae25051;
  _DAT_18328f868 =
       (_DAT_18328f868 * -0x4db1473fe346ace3 ^ _DAT_18328faf8) + _DAT_18328f668 * 0x5a2727b0d357722b
  ;
  _DAT_18328f8e0 = _DAT_18328f868 ^ _DAT_18328faf8;
  _DAT_18328fa78 = 0x9e67ad41;
  uVar7 = (~_DAT_18328f7f0 + 0x2f45542d) *
          ((_DAT_18328f7c0 ^ unaff_R14) + (ulonglong)((uint)_DAT_18328f7c0 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_18328fbb0) + (uVar7 & _DAT_18328fbb0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328fce0 = func_0x00018b2d9fb0((uVar7 | 0xab677709) + (ulonglong)((uint)uVar7 & 0xab677709))
  ;
  uVar7 = _DAT_18328fce0 << 0x13 | _DAT_18328fce0 >> 0x2d;
  _DAT_18328f6e0 = (_DAT_18328f6e0 ^ uVar7) - 0x2f45542c ^ 0x4abf9c6e47defcad;
  _DAT_18328fb90 = (_DAT_18328fb90 * 0x20f3887028747f9 ^ _DAT_18328f6e0) + uVar7;
  _DAT_18328f9f0 = _DAT_18328fb90 ^ _DAT_18328f6e0;
  _DAT_18328f888 = _DAT_18328f828 ^ 0xffffffffd0baabd4;
  _DAT_18328f660 = 0xd0baabd4;
  uVar7 = (~_DAT_18328fac8 + 0x2f45542d) *
          ((_DAT_18328fa88 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_18328fa88 & 0x84222ce5) * 2);
  uVar7 = (uVar7 | _DAT_18328f6a8) + (uVar7 & _DAT_18328f6a8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f8f8 = func_0x00018b2d9fb0((uVar7 | 0xab6778c9) + (ulonglong)((uint)uVar7 & 0xab6778c9))
  ;
  uVar7 = (_DAT_18328f8f8 ^ 0x2e883edb500) & 0x3fffffffffffffff;
  _DAT_18328faf0 = _DAT_18328f9e0 ^ uVar7 ^ 0x2f4563ec;
  _DAT_18328f790 = (_DAT_18328f790 ^ uVar7) + 0x2f4563ec ^ 0xca25b11b2a2327f9;
  _DAT_18328fbe8 = (_DAT_18328fbe8 * 0xa8877435d6881e5 ^ _DAT_18328f790) + uVar7;
  _DAT_18328fc68 = _DAT_18328fbe8 ^ _DAT_18328f790;
  _DAT_18328fcc0 = 0x2f4563ec;
  uVar7 = (_DAT_18328f630 ^ _DAT_181ab36f0) + _DAT_18328f840 + 0xab6740c9;
  uVar11 = (_DAT_18328f840 ^ _UNK_181ab36f8) + _DAT_18328f630 + 0xd0baabd4;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f630 ^ _DAT_181ab36f0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328f840 ^ _UNK_181ab36f8;
  _DAT_18328f8b0 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328f630 + 0xd0baabd4) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f840 + 0xab6740c9));
  uVar7 = _DAT_18328f8b0 ^ 0x2f454028;
  _DAT_18328fc40 = _DAT_18328fb08 ^ uVar7 ^ 0x100000fc0;
  _DAT_18328f9f0 = (_DAT_18328f9f0 ^ uVar7) + 0x100000fc0 ^ 0xaa8b44838ba12ec8;
  _DAT_18328f5c8 = (_DAT_18328f5c8 * 0x543e8161e9f25d11 ^ _DAT_18328f9f0) + uVar7;
  _DAT_18328f658 = _DAT_18328f5c8 ^ _DAT_18328f9f0;
  _DAT_18328f890 = 0xfc0;
  _DAT_18328f780 = func_0x00018b2d9fb0(_DAT_18328f5d0 ^ 0xa4000963002c12);
  uVar7 = (_DAT_18328f780 ^ 0x38190cd9bd2cc000) & 0x7fffffffffffffff;
  _DAT_18328fa38 = _DAT_18328f868 ^ uVar7 ^ 0x100000fc0;
  _DAT_18328fcf0 = (_DAT_18328fcf0 ^ uVar7) + 0x100000fc0 ^ 0xf298986e5dcf2879;
  _DAT_18328f688 = (_DAT_18328f688 * -0x2177b984274fd145 ^ _DAT_18328fcf0) + uVar7;
  _DAT_18328fc48 = _DAT_18328f688 ^ _DAT_18328fcf0;
  _DAT_18328f718 = 0xfc0;
  _DAT_18328fb38 = func_0x00018b2d9fb0(_DAT_18328fad8 ^ 0xff99ffaa82ffe495);
  _DAT_18328fbe8 = (_DAT_18328fbe8 ^ _DAT_18328fb38) - 0x31c7bda0 ^ 0x9ca6cc09fed88e99;
  _DAT_18328f5f0 = (_DAT_18328f5f0 * 0x5d29eff526a77339 ^ _DAT_18328fbe8) + _DAT_18328fb38;
  _DAT_18328fa10 = _DAT_18328f5f0 ^ _DAT_18328fbe8;
  _DAT_18328fc90 = 0xce384260;
  uVar7 = (_DAT_18328f7d0 ^ _DAT_181ab3700) + _DAT_18328fc68 + 0x84222ce5;
  uVar11 = (_DAT_18328fc68 ^ _UNK_181ab3708) + _DAT_18328f7d0 + 0x31c7bda0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f7d0 ^ _DAT_181ab3700;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328fc68 ^ _UNK_181ab3708;
  _DAT_18328f830 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328f7d0 + 0x31c7bda0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328fc68 + 0x84222ce5));
  uVar7 = (_DAT_18328f830 ^ 0x31009ea9800) * -0x279ef8605008dbeb;
  uVar11 = uVar7 >> 1 | uVar7;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  _DAT_18328f538 = _DAT_18328fb90 ^ uVar7 ^ 0x31c7cd60;
  _DAT_18328f6a8 = (_DAT_18328f6a8 ^ uVar7) + 0x31c7cd60 ^ 0xecab03bdbf8c0ada;
  _DAT_18328f8b8 = (_DAT_18328f8b8 * -0x58dcfcb1e8a95725 ^ _DAT_18328f6a8) + uVar7;
  _DAT_18328fb28 = _DAT_18328f8b8 ^ _DAT_18328f6a8;
  _DAT_18328f6e0 = 0x31c7cd60;
  uVar7 = (_DAT_18328f560 ^ _DAT_181ab3710) + _DAT_18328f808 + 0xb5e5ee45;
  uVar11 = (_DAT_18328f808 ^ _UNK_181ab3718) + _DAT_18328f560 + 0xce384260;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f560 ^ _DAT_181ab3710;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328f808 ^ _UNK_181ab3718;
  _DAT_18328fce8 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328f560 + 0xce384260) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f808 + 0xb5e5ee45));
  uVar11 = _UNK_181ab3728;
  uVar7 = _DAT_181ab3720;
  _DAT_18328f870 = _DAT_18328f9c0 ^ _DAT_18328fce8 ^ 0x100000fc0;
  _DAT_18328fb40 = (_DAT_18328fb40 ^ _DAT_18328fce8) + 0x100000fc0 ^ 0x667cca7992f73c42;
  _DAT_18328f6e8 = (_DAT_18328f6e8 * 0x61e879aa8816f38d ^ _DAT_18328fb40) + _DAT_18328fce8;
  _DAT_18328fb20 = _DAT_18328f6e8 ^ _DAT_18328fb40;
  _DAT_18328fa68 = 0xfc0;
  uVar9 = (_DAT_18328f9c8 ^ _DAT_181ab3720) + _DAT_18328fc10 + 0x779b8cbb;
  uVar10 = (_DAT_18328fc10 ^ _UNK_181ab3728) + _DAT_18328f9c8 + 0x9e67ad41;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18328f9c8 ^ _DAT_181ab3720;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18328fc10 ^ _UNK_181ab3728;
  _DAT_18328fbb8 =
       func_0x00018b2d9fb0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18328f9c8 + 0x9e67ad41) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18328fc10 + 0x779b8cbb));
  uVar9 = _DAT_18328fbb8 << 7 | _DAT_18328fbb8 >> 0x39;
  _DAT_18328f8c8 = (_DAT_18328f8c8 ^ uVar9) + 0x6dde02df ^ 0xdae029fb2fa4918b;
  _DAT_18328f9c8 = (_DAT_18328f9c8 * -0xa6cf27340a0a0e3 ^ _DAT_18328f8c8) + uVar9;
  _DAT_18328f6f0 = _DAT_18328f9c8 ^ _DAT_18328f8c8;
  _DAT_18328f5d8 = 0x6dde02df;
  uVar9 = (_DAT_18328f760 ^ uVar7) + _DAT_18328fc58 + 0x779b8cbb;
  uVar10 = (_DAT_18328fc58 ^ uVar11) + _DAT_18328f760 + 0x9e67ad41;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18328f760 ^ uVar7;
  uVar11 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18328fc58 ^ uVar11;
  _DAT_18328f9e0 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328f760 + 0x9e67ad41) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328fc58 + 0x779b8cbb));
  _DAT_18328f840 = (_DAT_18328f840 ^ _DAT_18328f9e0) + 0x9221ad00 ^ 0xf827e992b62fb269;
  _DAT_18328fb20 = (_DAT_18328fb20 * -0x511db58f39d54b4d ^ _DAT_18328f840) + _DAT_18328f9e0;
  _DAT_18328fc58 = _DAT_18328fb20 ^ _DAT_18328f840;
  _DAT_18328f768 = 0x9221ad00;
  uVar7 = (~_DAT_18328fb10 + 0x92215ce0) *
          ((_DAT_18328f510 ^ 0x16037ffa) + (ulonglong)((uint)_DAT_18328f510 & 0x16037ffa) * 2);
  uVar7 = (uVar7 | _DAT_18328f758) + (uVar7 & _DAT_18328f758);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f588 = func_0x00018b2d9fb0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_18328f5f8 = (ulonglong)(((uint)_DAT_18328f588 ^ 0x9000549e) & 0x92215cdf);
  _DAT_18328fbe0 = _DAT_18328fbe0 ^ _DAT_18328f5f8 ^ 0x807ca0ea208a4809;
  _DAT_18328f7c8 = (_DAT_18328f7c8 * 0x60b1a8e68b1a3dcb ^ _DAT_18328fbe0) + _DAT_18328f5f8;
  _DAT_18328f520 = _DAT_18328f7c8 ^ _DAT_18328fbe0;
  _DAT_18328fc50 = 0;
  uVar7 = ((_DAT_18328fa28 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_18328fa28 & 0x84222ce5) * 2) *
          -_DAT_18328f870;
  uVar7 = (uVar7 | _DAT_18328fb40) + (uVar7 & _DAT_18328fb40);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f9b0 = func_0x00018b2d9fb0((uVar7 | 0x84222ce5) + (ulonglong)((uint)uVar7 & 0x84222ce5))
  ;
  uVar7 = _DAT_18328f9b0 >> 1 | _DAT_18328f9b0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_18328f9b0;
  _DAT_18328fc00 = _DAT_18328f9b8 ^ uVar7 ^ 0xfc0;
  _DAT_18328f558 = (_DAT_18328f558 ^ uVar7) + 0xfc0 ^ 0x6f038174e85a06d5;
  _DAT_18328fcd8 = (_DAT_18328fcd8 * 0x166da3cd6dd59e3b ^ _DAT_18328f558) + uVar7;
  _DAT_18328f890 = _DAT_18328fcd8 ^ _DAT_18328f558;
  _DAT_18328fb90 = _DAT_18328f820 ^ 0xfc0;
  _DAT_18328f690 = 0xfc0;
  uVar7 = (_DAT_18328fa80 ^ _DAT_181ab3730) + _DAT_18328f860 + 0x779b8cbb;
  uVar11 = (_DAT_18328f860 ^ _UNK_181ab3738) + _DAT_18328fa80 + 0xffffffff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328fa80 ^ _DAT_181ab3730;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328f860 ^ _UNK_181ab3738;
  _DAT_18328f970 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328fa80 + 0xffffffff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f860 + 0x779b8cbb));
  uVar7 = _DAT_18328f970 ^ 0xffffffff;
  uVar11 = uVar7 >> 1 | uVar7;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) ^ 0xf3b9af9e;
  _DAT_18328f838 = (_DAT_18328f838 ^ uVar7) + 0xc465061 ^ 0x235ca96ab23ddfc5;
  _DAT_18328f718 = (_DAT_18328f718 * 0x25a51f4dcd406abd ^ _DAT_18328f838) + uVar7;
  _DAT_18328f560 = _DAT_18328f718 ^ _DAT_18328f838;
  _DAT_18328f9d0 = 0xc465061;
  uVar7 = (_DAT_18328fc18 ^ _DAT_181ab3740) + _DAT_18328fa40 + 0x779b8cbb;
  uVar11 = (_DAT_18328fa40 ^ _UNK_181ab3748) + _DAT_18328fc18 + 0xc465061;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328fc18 ^ _DAT_181ab3740;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328fa40 ^ _UNK_181ab3748;
  _DAT_18328fcf0 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328fc18 + 0xc465061) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328fa40 + 0x779b8cbb));
  _DAT_18328f508 = _DAT_18328f508 ^ _DAT_18328fcf0 ^ 0xf3b9af9e ^ 0xf4e27644c96c63d5;
  _DAT_18328fca8 =
       (_DAT_18328fca8 * 0x694f496c4ed6b597 ^ _DAT_18328f508) + (_DAT_18328fcf0 ^ 0xf3b9af9e);
  _DAT_18328f650 = _DAT_18328fca8 ^ _DAT_18328f508;
  _DAT_18328f520 = 0;
  uVar7 = (_DAT_18328f628 ^ 0x84222ce5) + _DAT_18328f6d8 + 0x84222ce5;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f628 ^ 0x84222ce5;
  uVar11 = ((_DAT_18328f6d8 + _DAT_18328f628) * 0x2000 | _DAT_18328f6d8 + _DAT_18328f628 >> 0x33) ^
           _DAT_18328f6d8;
  _DAT_18328fb10 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_18328f628 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f6d8 + 0x84222ce5));
  uVar7 = (ulonglong)(~(uint)_DAT_18328fb10 & 0xfc0);
  _DAT_18328fba8 = _DAT_18328f9a0 ^ uVar7 ^ 0xfc0;
  _DAT_18328f680 = (_DAT_18328f680 ^ uVar7) + 0xfc0 ^ 0x6fcba22b01b081bf;
  _DAT_18328f958 = (_DAT_18328f958 * -0x3e873f1b671780e7 ^ _DAT_18328f680) + uVar7;
  _DAT_18328f748 = _DAT_18328f958 ^ _DAT_18328f680;
  _DAT_18328f8a8 = 0xfc0;
  uVar7 = (~_DAT_18328fbd0 + 0xd3990d9f) *
          ((_DAT_18328f960 ^ 0x57bb2ebb) + (ulonglong)((uint)_DAT_18328f960 & 0x57bb2ebb) * 2);
  uVar7 = (uVar7 | _DAT_18328f6a0) + (uVar7 & _DAT_18328f6a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f8d8 = func_0x00018b2d9fb0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_18328f8d0 = _DAT_18328f8d0 ^ _DAT_18328f8d8 ^ 0x1da9660e26e297b2;
  _DAT_18328fbd8 = (_DAT_18328fbd8 * 0x183dcfb84120aa45 ^ _DAT_18328f8d0) + _DAT_18328f8d8;
  _DAT_18328f8f8 = _DAT_18328fbd8 ^ _DAT_18328f8d0;
  _DAT_18328f790 = 0;
  _DAT_18328fa10 = func_0x00018b2d9fb0(_DAT_18328f748 ^ 0x1c008324ffdd31);
  uVar7 = _DAT_18328fa10 * -0x7f50b973ce800000 | _DAT_18328fa10 * 0x2b3091015e8d1863 >> 0x29;
  _DAT_18328f6d0 = _DAT_18328f6d0 ^ uVar7 ^ 0xfc0;
  _DAT_18328f898 = (_DAT_18328f898 ^ uVar7) + 0xfc0 ^ 0x31549f4de4930421;
  _DAT_18328fa78 = (_DAT_18328fa78 * 0x31306d5618bcddb3 ^ _DAT_18328f898) + uVar7;
  _DAT_18328f970 = _DAT_18328fa78 ^ _DAT_18328f898;
  _DAT_18328f7a0 = 0xfc0;
  uVar1 = *(uint *)(unaff_RBP + 0x10);
  uVar11 = (ulonglong)uVar1;
  uVar7 = (~_DAT_18328f788 + 0xfc1) *
          ((uVar11 ^ 0x84222325 ^ _DAT_18328f780) +
          (ulonglong)((uint)_DAT_18328f780 & (uint)(uVar11 ^ 0x84222325)) * 2);
  uVar7 = (uVar7 | _DAT_18328f9a8) + (uVar7 & _DAT_18328f9a8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f5f8 =
       func_0x00018b2d9fb0((uVar11 ^ 0x84222ce5 | uVar7) +
                           (ulonglong)((uint)(uVar11 ^ 0x84222ce5) & (uint)uVar7));
  uVar9 = (ulonglong)(uVar1 & 0xfc0);
  _DAT_18328f790 = (_DAT_18328f790 ^ ~_DAT_18328f9f0 & uVar11) + uVar9 ^ 0x19349cf771c1d580;
  _DAT_18328fcd8 =
       (_DAT_18328fcd8 * -0x7f202983bb9fa3e5 ^ _DAT_18328f790) + (~_DAT_18328f9f0 & uVar11);
  _DAT_18328f770 = _DAT_18328fcd8 ^ _DAT_18328f790;
  lVar8 = _DAT_18328fb40 + 0xda946e38;
  lVar6 = _DAT_18328fc78 + 0x2d700069;
  uVar7 = (_DAT_18328fc78 ^ _DAT_181ab3750) + lVar8;
  uVar11 = (_DAT_18328fb40 ^ _UNK_181ab3758) + lVar6;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328fc78 ^ _DAT_181ab3750;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328fb40 ^ _UNK_181ab3758;
  _DAT_18328fbb8 = uVar9;
  *(int *)(unaff_RBP + 0x50) = *(int *)(unaff_RBP + 0x50) << 0xc;
  _DAT_18328f588 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - lVar6 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
  uVar7 = _DAT_18328f588 - (_DAT_18328f588 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar11 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18328f588;
  uVar7 = uVar11 >> 1 | uVar11;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
           ^ uVar11;
  _DAT_18328f8e0 = (_DAT_18328f8e0 ^ uVar11) + 0x73c64d74 ^ 0x75f0be5d52bb022f;
  _DAT_18328fb18 = (_DAT_18328fb18 * -0x7c7dac1fac907643 ^ _DAT_18328f8e0) + uVar11;
  _DAT_18328f908 = _DAT_18328fb18 ^ _DAT_18328f8e0;
  _DAT_18328fa30 = 0x73c64d74;
  _DAT_18328f5f8 = func_0x00018b2d9fb0(_DAT_18328f550 + 0x54005c7d00b1ffU ^ 0xfc);
  uVar7 = _DAT_18328f5f8 ^ 0xf000;
  _DAT_18328f670 = _DAT_18328f9b8 ^ uVar7 ^ 0x3890f7a0;
  _DAT_18328fab8 = (_DAT_18328fab8 ^ uVar7) + 0x3890f7a0 ^ 0xb0f102f80cbdf7b6;
  _DAT_18328f660 = (_DAT_18328f660 * 0x7bbcc5db4fc170ab ^ _DAT_18328fab8) + uVar7;
  _DAT_18328f850 = _DAT_18328f660 ^ _DAT_18328fab8;
  _DAT_18328f548 = 0x3890f7a0;
  uVar7 = (~_DAT_18328f810 + 0x86530ba0) *
          ((_DAT_18328f8a0 ^ 0x8422d325) + (ulonglong)((uint)_DAT_18328f8a0 & 0x8422d325) * 2);
  uVar7 = (uVar7 | _DAT_18328f5c8) + (uVar7 & _DAT_18328f5c8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f810 = func_0x00018b2d9fb0((uVar7 | 0x271d8ba) + (ulonglong)((uint)uVar7 & 0x271d8ba));
  uVar7 = _DAT_18328f810 & 0x7fffffffffffffff;
  _DAT_18328fa08 = _DAT_18328f6e0 ^ uVar7 ^ 0x8653fb9f;
  _DAT_18328fb30 = (_DAT_18328fb30 ^ uVar7) + 0x8653fb9f ^ 0x83f2ec2d57867b34;
  _DAT_18328f540 = (_DAT_18328f540 * -0x799a6db24ad1b03 ^ _DAT_18328fb30) + uVar7;
  _DAT_18328fa18 = _DAT_18328f540 ^ _DAT_18328fb30;
  _DAT_18328f550 = 0x8653fb9f;
  _DAT_18328fb58 = func_0x00018b2d9fb0(_DAT_18328f518 ^ 0x24003a37002a20);
  uVar7 = (ulonglong)(~(uint)(_DAT_18328fb58 >> 0xd) & 0x8653fb9f) ^ 0x79acf461;
  _DAT_18328fab0 = _DAT_18328f730 ^ uVar7 ^ 0x10000f000;
  _DAT_18328fa08 = (_DAT_18328fa08 ^ uVar7) + 0x10000f000 ^ 0xb338ad4130c1fcc6;
  _DAT_18328f878 = (_DAT_18328f878 * 0x143c02bff6ff520b ^ _DAT_18328fa08) + uVar7;
  _DAT_18328f530 = _DAT_18328f878 ^ _DAT_18328fa08;
  _DAT_18328f928 = 0xf000;
  uVar7 = (_DAT_18328fc00 ^ _DAT_181ab3760) + _DAT_18328f908 + 0x84222325;
  uVar11 = (_DAT_18328f908 ^ _UNK_181ab3768) + _DAT_18328fc00 + 0xdd1ffdc0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328fc00 ^ _DAT_181ab3760;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328f908 ^ _UNK_181ab3768;
  _DAT_18328f5c8 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328fc00 + 0xdd1ffdc0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f908 + 0x84222325));
  _DAT_18328f5b8 = (_DAT_18328f5b8 ^ _DAT_18328f568) - 0xdd1ffdc0 ^ 0x8c6b9ca22412e62b;
  _DAT_18328fa68 = (_DAT_18328fa68 * 0x1f24bba2169cc2f ^ _DAT_18328f5b8) + _DAT_18328f568;
  _DAT_18328f848 = _DAT_18328fa68 ^ _DAT_18328f5b8;
  _DAT_18328fac8 = 0x22e00240;
  _DAT_18328fc68 = func_0x00018b2d9fb0(_DAT_18328fb88 ^ 0xffe1ffb863000249);
  _DAT_18328f588 = _DAT_18328fb38 ^ _DAT_18328fc68 ^ 0xdd20edc0;
  _DAT_18328faa8 = (_DAT_18328faa8 ^ _DAT_18328fc68) + 0xdd20edc0 ^ 0xa7b9594faaac9817;
  _DAT_18328f5e8 = (_DAT_18328f5e8 * -0x6e5a1a5da4ffd27b ^ _DAT_18328faa8) + _DAT_18328fc68;
  _DAT_18328fc88 = _DAT_18328f5e8 ^ _DAT_18328faa8;
  _DAT_18328f730 = 0xdd20edc0;
  uVar7 = (_DAT_18328f500 ^ _DAT_181ab3770) + _DAT_18328f848 + 0x5902cee5;
  uVar11 = (_DAT_18328f848 ^ _UNK_181ab3778) + _DAT_18328f500 + 0x22e00240;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f500 ^ _DAT_181ab3770;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328f848 ^ _UNK_181ab3778;
  _DAT_18328fb68 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328f500 + 0x22e00240) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f848 + 0x5902cee5));
  uVar7 = _DAT_18328fb68 - (_DAT_18328fb68 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_18328fb68;
  _DAT_18328faa8 = _DAT_18328fa48 ^ uVar7 ^ 0x10000f000;
  _DAT_18328f9d0 = (_DAT_18328f9d0 ^ uVar7) + 0x10000f000 ^ 0xf79fc1fbe9bf6cc2;
  _DAT_18328f610 = (_DAT_18328f610 * 0xcef1e9aebf5d0b9 ^ _DAT_18328f9d0) + uVar7;
  _DAT_18328fc68 = _DAT_18328f610 ^ _DAT_18328f9d0;
  _DAT_18328f9d8 = 0xf000;
  _DAT_18328f628 = func_0x00018b2d9fb0(_DAT_18328faa0 + 0xfff0006c5c0071ffU ^ 0xc1);
  uVar7 = _DAT_18328f628 ^ 0x73c64d74;
  _DAT_18328fa90 = _DAT_18328fa48 ^ uVar7 ^ 0xd83ccc29;
  _DAT_18328fb80 = (_DAT_18328fb80 ^ uVar7) + 0xd83ccc29 ^ 0xe8d87a9af9899846;
  _DAT_18328f580 = (_DAT_18328f580 * -0x258ce4828fb1eb51 ^ _DAT_18328fb80) + uVar7;
  _DAT_18328fbd8 = _DAT_18328f580 ^ _DAT_18328fb80;
  _DAT_18328f968 = 0xd83ccc29;
  uVar7 = (~_DAT_18328f508 + 0x73c64d75) *
          ((_DAT_18328fbe0 ^ 0xe0545d90) + (ulonglong)((uint)_DAT_18328fbe0 & 0xe0545d90) * 2);
  uVar7 = (uVar7 | _DAT_18328fa88) + (uVar7 & _DAT_18328fa88);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f858 = func_0x00018b2d9fb0((uVar7 | 0x939210e4) + (ulonglong)((uint)uVar7 & 0x939210e4))
  ;
  uVar7 = _DAT_18328f858 << 0x14 | _DAT_18328f858 >> 0x2c;
  _DAT_18328fb50 = (_DAT_18328fb50 ^ uVar7) + 0x17b033c1 ^ 0x31390448fc79eed7;
  _DAT_18328f6e8 = (_DAT_18328f6e8 * 0x41c57f7c31f5cf ^ _DAT_18328fb50) + uVar7;
  _DAT_18328f9d8 = _DAT_18328f6e8 ^ _DAT_18328fb50;
  _DAT_18328fab8 = 0x17b033c1;
  _DAT_18328f770 = func_0x00018b2d9fb0(_DAT_18328f788 ^ 0xffefff709c008d60);
  uVar7 = _DAT_18328f770 - (_DAT_18328f770 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar4 + (uint)bVar4 ^ _DAT_18328f770;
  _DAT_18328fc60 = (_DAT_18328fc60 ^ uVar7) + 0x60464c34 ^ 0xd586a040ab779706;
  _DAT_18328fc58 = (_DAT_18328fc58 * -0x7fa13b42ae9902b3 ^ _DAT_18328fc60) + uVar7;
  _DAT_18328fa58 = _DAT_18328fc58 ^ _DAT_18328fc60;
  _DAT_18328f8c8 = 0x60464c34;
  _DAT_18328f6f8 = func_0x00018b2d9fb0(_DAT_18328fc58 + 0xff88004d8c0009ff ^ 0x87);
  uVar7 = (_DAT_18328f6f8 ^ 0x1129474bdb9e68) & 0x3fffffffffffff;
  _DAT_18328fae8 = _DAT_18328fa38 ^ uVar7 ^ 0xd83ccc29;
  _DAT_18328f990 = (_DAT_18328f990 ^ uVar7) + 0xd83ccc29 ^ 0x36c3dbcb0e810a04;
  _DAT_18328f8d0 = (_DAT_18328f8d0 * 0x1c6be1ef241cde87 ^ _DAT_18328f990) + uVar7;
  _DAT_18328f7c0 = _DAT_18328f8d0 ^ _DAT_18328f990;
  _DAT_18328fa20 = 0xd83ccc29;
  uVar7 = (_DAT_18328faa8 ^ _DAT_181ab3780) + _DAT_18328fc88 + 0x5c1eef0c;
  uVar11 = (_DAT_18328fc88 ^ _UNK_181ab3788) + _DAT_18328faa8 + 0xd83ccc29;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328faa8 ^ _DAT_181ab3780;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328fc88 ^ _UNK_181ab3788;
  _DAT_18328f880 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328faa8 + 0xd83ccc29) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328fc88 + 0x5c1eef0c));
  uVar7 = _DAT_18328f880 >> 1 | _DAT_18328f880;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  _DAT_18328fcb0 =
       (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       _DAT_18328f880;
  _DAT_18328f620 = _DAT_18328f620 ^ _DAT_18328fcb0 ^ 0x44f70c55bd2dfcbe;
  _DAT_18328f980 = (_DAT_18328f980 * 0x4c75b678d5087a83 ^ _DAT_18328f620) + _DAT_18328fcb0;
  _DAT_18328fce8 = _DAT_18328f980 ^ _DAT_18328f620;
  _DAT_18328f8c0 = 0;
  _DAT_18328fc80 = func_0x00018b2d9fb0(_DAT_18328f740 ^ 0xd10083dd002110);
  uVar7 = (_DAT_18328fc80 & 0x1fffffffffffffff) >> 1 | _DAT_18328fc80 & 0x1fffffffffffffff;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
           ^ _DAT_18328fc80 & 0x1fffffffffffffff;
  _DAT_18328fc28 = _DAT_18328f610 ^ uVar11 ^ 0xf000;
  uVar7 = (_DAT_18328f7d8 ^ uVar11) + 0xf000;
  _DAT_18328f7d8 = uVar7 ^ 0x5e50fcfa43d0a704;
  _DAT_18328f810 = (_DAT_18328f810 * 0x4389b808407c41b5 ^ _DAT_18328f7d8) + uVar11;
  _DAT_18328f9b0 = _DAT_18328f810 ^ _DAT_18328f7d8;
  _DAT_18328f7e8 = 0xf000;
  uVar7 = (~_DAT_18328fa28 + 0x100000000) *
          ((uVar7 ^ 0x5e50fcfaa384fa94) + (ulonglong)((uint)_DAT_18328f7d8 & 0xe0545d90) * 2);
  uVar7 = (uVar7 | _DAT_18328fca8) + (uVar7 & _DAT_18328fca8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f868 = func_0x00018b2d9fb0((uVar7 | 0x1faba26f) + (ulonglong)((uint)uVar7 & 0x1faba26f))
  ;
  _DAT_18328f7d8 =
       (_DAT_18328f7d8 ^ _DAT_18328f868 & 0x1ffffffffff) + 0x9b89814a ^ 0xa3c79058f494f780;
  _DAT_18328fb90 =
       (_DAT_18328fb90 * 0x407bc72b06852383 ^ _DAT_18328f7d8) + (_DAT_18328f868 & 0x1ffffffffff);
  _DAT_18328f620 = _DAT_18328fb90 ^ _DAT_18328f7d8;
  _DAT_18328fbc0 = 0x9b89814a;
  uVar7 = (~_DAT_18328f808 + 0x9b89814b) *
          ((_DAT_18328f868 ^ 0xe0545d90) + (ulonglong)((uint)_DAT_18328f868 & 0xe0545d90) * 2);
  uVar7 = (uVar7 | _DAT_18328f968) + (uVar7 & _DAT_18328f968);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f978 = func_0x00018b2d9fb0((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  uVar7 = _DAT_18328f978 << 0x3a | _DAT_18328f978 >> 6;
  _DAT_18328fbd0 = _DAT_18328fbd0 ^ uVar7 ^ 0x3d1cbbd3bf710906;
  _DAT_18328f758 = (_DAT_18328f758 * 0x6fe0d70d70143419 ^ _DAT_18328fbd0) + uVar7;
  _DAT_18328f920 = _DAT_18328f758 ^ _DAT_18328fbd0;
  _DAT_18328fbe8 = 0;
  uVar7 = (~_DAT_18328f900 + 0x565215) *
          ((_DAT_18328f6a0 ^ 0x84747131) + (ulonglong)((uint)_DAT_18328f6a0 & 0x84747131) * 2);
  uVar7 = (uVar7 | _DAT_18328f768) + (uVar7 & _DAT_18328f768);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f5a0 = func_0x00018b2d9fb0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_18328fb48 = _DAT_18328fb48 ^ _DAT_18328f5a0 & 0x7fffffffffffffff ^ 0x6f9492a84ac626fb;
  _DAT_18328fca0 =
       (_DAT_18328fca0 * 0x4ab5697573422a39 ^ _DAT_18328fb48) +
       (_DAT_18328f5a0 & 0x7fffffffffffffff);
  _DAT_18328fa48 = _DAT_18328fca0 ^ _DAT_18328fb48;
  _DAT_18328fa68 = 0;
  _DAT_18328fb48 = func_0x00018b2d9fb0(_DAT_18328f8e8 ^ 0xb10083dcffdd8e);
  uVar7 = (ulonglong)(~(uint)_DAT_18328fb48 & 0xf000);
  _DAT_18328f540 = _DAT_18328f828 ^ uVar7 ^ 0xf000;
  _DAT_18328f840 = (_DAT_18328f840 ^ uVar7) + 0xf000 ^ 0xcfa6bb60405e3464;
  _DAT_18328f708 = (_DAT_18328f708 * 0x4e181b2cac803d57 ^ _DAT_18328f840) + uVar7;
  _DAT_18328f7f8 = _DAT_18328f708 ^ _DAT_18328f840;
  _DAT_18328fcf0 = 0xf000;
  uVar11 = (ulonglong)*(uint *)(unaff_RBP + 0x50);
  uVar7 = (~_DAT_18328f7c0 + 0xf001) *
          ((uVar11 ^ 0x84222325 ^ _DAT_18328f6e0) +
          (ulonglong)((uint)_DAT_18328f6e0 & (uint)(uVar11 ^ 0x84222325)) * 2);
  uVar7 = (uVar7 | _DAT_18328f610) + (uVar7 & _DAT_18328f610);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328fa10 =
       func_0x00018b2d9fb0((uVar11 ^ 0x8422d325 | uVar7) +
                           (ulonglong)((uint)(uVar11 ^ 0x8422d325) & (uint)uVar7));
  uVar7 = uVar11 * 0xf000 ^ _DAT_18328fa10;
  uVar7 = (uVar7 & 0x3ffff) << 0x2d | uVar7 >> 0x13;
  uVar11 = uVar11 & 0xffff;
  _DAT_18328f718 = (_DAT_18328f718 ^ uVar7) + uVar11 ^ 0xad46e61774cf3a71;
  _DAT_18328f748 = (_DAT_18328f748 * 0xe1f4b44524331ef ^ _DAT_18328f718) + uVar7;
  _DAT_18328fba0 = _DAT_18328f748 ^ _DAT_18328f718;
  _DAT_18328f770 = _DAT_18328fa50 ^ uVar11;
  uVar7 = uVar9 ^ 0x84222325 ^ _DAT_18328f8c8;
  lVar6 = (uVar9 ^ 0x84222325) + _DAT_18328fc60;
  uVar10 = uVar7 + lVar6;
  uVar13 = (uVar11 ^ _DAT_18328fc60) + _DAT_18328f8c8 + uVar11;
  uVar7 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar7;
  uVar10 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar11 ^ _DAT_18328fc60;
  _DAT_18328fce0 = uVar11;
  uVar7 = func_0x00018b2d9fb0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18328f8c8 + uVar11) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - lVar6);
  uVar7 = uVar9 ^ (uVar7 << 9 | uVar7 >> 0x37);
  _DAT_18328f718 = uVar9 | uVar11;
  *(ulonglong *)(unaff_RBP + 0x50) = _DAT_18328f718;
  _DAT_18328fbf8 = (_DAT_18328fbf8 ^ uVar7) + _DAT_18328f718 ^ 0x2ca8809d6caf9781;
  _DAT_18328fb18 = (_DAT_18328fb18 * -0x5653e7273a08e3d1 ^ _DAT_18328fbf8) + uVar7;
  _DAT_18328fba8 = _DAT_18328fb18 ^ _DAT_18328fbf8;
  plVar2 = *(longlong **)(unaff_RBP + 0x48);
  lVar6 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar7,0);
  *(int *)(unaff_RBP + 0x60) = (int)*(char *)(lVar6 + *(int *)(unaff_RBP + 0x68));
  (**(code **)(*plVar2 + 0x6f8))(plVar2);
  lVar8 = _DAT_18328fb50 + 0x26035cf5;
  lVar6 = _DAT_18328f728 + 0xa19b917f;
  uVar7 = (_DAT_18328f728 ^ _DAT_181ab3790) + lVar8;
  uVar11 = (_DAT_18328fb50 ^ _UNK_181ab3798) + lVar6;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f728 ^ _DAT_181ab3790;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328fb50 ^ _UNK_181ab3798;
  *(ulonglong *)(unaff_RBP + 0x10) = (ulonglong)*(uint *)(unaff_RBP + 0x60);
  _DAT_18328fb80 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - lVar6 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
  _DAT_18328f660 = (_DAT_18328f660 ^ _DAT_18328fcd8) + 0xa3bbffff ^ 0x9603679920079f79;
  _DAT_18328f978 = (_DAT_18328f978 * 0x4fcba83c1b87c4d7 ^ _DAT_18328f660) + _DAT_18328fcd8;
  _DAT_18328fa08 = _DAT_18328f978 ^ _DAT_18328f660;
  _DAT_18328faf0 = 0xa3bbffff;
  uVar7 = (_DAT_18328faf8 ^ _DAT_181ab37a0) + _DAT_18328f530 + 0x3db780a9;
  uVar11 = (_DAT_18328f530 ^ _UNK_181ab37a8) + _DAT_18328faf8 + 0x631bca54;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328faf8 ^ _DAT_181ab37a0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328f530 ^ _UNK_181ab37a8;
  _DAT_18328f9b8 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328faf8 + 0x631bca54) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f530 + 0x3db780a9));
  uVar7 = (_DAT_18328f9b8 & 0xffff) * 0x1000000;
  _DAT_18328f5b8 = (_DAT_18328f5b8 ^ uVar7) + 0xda8e69d8 ^ 0x2bc4f0fd089646a9;
  _DAT_18328f740 = (_DAT_18328f740 * 0x1238bb47bf23f99d ^ _DAT_18328f5b8) + uVar7;
  _DAT_18328f7d8 = _DAT_18328f740 ^ _DAT_18328f5b8;
  _DAT_18328fb10 = 0xda8e69d8;
  uVar7 = (_DAT_18328f988 ^ _DAT_181ab37b0) + _DAT_18328faf0 + 0x84222325;
  uVar11 = (_DAT_18328faf0 ^ _UNK_181ab37b8) + _DAT_18328f988 + 0xf80a2c00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f988 ^ _DAT_181ab37b0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328faf0 ^ _UNK_181ab37b8;
  _DAT_18328f900 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328f988 + 0xf80a2c00) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328faf0 + 0x84222325));
  uVar7 = _DAT_18328f900 << 0x3c | _DAT_18328f900 >> 4 & 0xffffffffffffff00;
  _DAT_18328f5d8 = (_DAT_18328f5d8 ^ uVar7) - 0xf80a2c00 ^ 0x77caa43445a531a5;
  _DAT_18328f8a8 = (_DAT_18328f8a8 * 0x1b057260452a2729 ^ _DAT_18328f5d8) + uVar7;
  _DAT_18328fba0 = 0x7f5d400;
  uVar7 = (~_DAT_18328fcb8 + 0xf80a2c01) *
          ((_DAT_18328f538 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18328f538 & 0x8422231a) * 2);
  uVar7 = (uVar7 | _DAT_18328f708) + (uVar7 & _DAT_18328f708);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328fcd0 = func_0x00018b2d9fb0((uVar7 | 0x7c280f1a) + (ulonglong)((uint)uVar7 & 0x7c280f1a))
  ;
  _DAT_18328f7d0 = _DAT_18328fa38 ^ _DAT_18328fcd0 ^ 0xf80a2c3f;
  _DAT_18328f510 = (_DAT_18328f510 ^ _DAT_18328fcd0) + 0xf80a2c3f ^ 0xc57b0f1123e45f07;
  _DAT_18328f798 = (_DAT_18328f798 * -0x5e71257469cd453d ^ _DAT_18328f510) + _DAT_18328fcd0;
  _DAT_18328fa48 = _DAT_18328f798 ^ _DAT_18328f510;
  _DAT_18328fbb8 = 0xf80a2c3f;
  uVar7 = (_DAT_18328fbc8 ^ _DAT_181ab37c0) + _DAT_18328f608 + 0x7c280f1a;
  uVar11 = (_DAT_18328f608 ^ _UNK_181ab37c8) + _DAT_18328fbc8 + 0x7f5d400;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328fbc8 ^ _DAT_181ab37c0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328f608 ^ _UNK_181ab37c8;
  _DAT_18328f658 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328fbc8 + 0x7f5d400) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f608 + 0x7c280f1a));
  _DAT_18328f518 = _DAT_18328f828 ^ _DAT_18328fa78 ^ 0x10000003f;
  _DAT_18328fcf0 = (_DAT_18328fcf0 ^ _DAT_18328fa78) + 0x10000003f ^ 0xb6413f1a55b7a258;
  _DAT_18328f9c8 = (_DAT_18328f9c8 * 0x2d3ac4656de1e149 ^ _DAT_18328fcf0) + _DAT_18328fa78;
  _DAT_18328fba0 = _DAT_18328f9c8 ^ _DAT_18328fcf0;
  _DAT_18328fbc0 = 0x3f;
  uVar7 = (~_DAT_18328f988 + 0x5ea90771) *
          ((_DAT_18328f578 ^ 0x84222325) + (ulonglong)((uint)_DAT_18328f578 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_18328fa30) + (uVar7 & _DAT_18328fa30);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328fba0 = func_0x00018b2d9fb0((uVar7 | 0xda8b2455) + (ulonglong)((uint)uVar7 & 0xda8b2455))
  ;
  uVar7 = _DAT_18328fba0 - (_DAT_18328fba0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_18328fba0;
  _DAT_18328f5d8 = (_DAT_18328f5d8 ^ uVar7) - 0x5ea90770 ^ 0xff589e3e20ca38be;
  _DAT_18328f8e0 = (_DAT_18328f8e0 * 0x364dad58f00e7cc3 ^ _DAT_18328f5d8) + uVar7;
  _DAT_18328fb48 = _DAT_18328f8e0 ^ _DAT_18328f5d8;
  _DAT_18328f940 = 0xa156f890;
  _DAT_18328f8e8 = func_0x00018b2d9fb0(_DAT_18328f720 ^ 0xffdbff49a9ff86bd);
  uVar7 = _DAT_18328f8e8 >> 1 | _DAT_18328f8e8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18328f8e8;
  _DAT_18328f840 = _DAT_18328fc98 ^ uVar7 ^ 0x5ea907af;
  _DAT_18328f8f8 = (_DAT_18328f8f8 ^ uVar7) + 0x5ea907af ^ 0xf7cce22c6bf1ea64;
  _DAT_18328f528 = (_DAT_18328f528 * -0x55869c4d6a826737 ^ _DAT_18328f8f8) + uVar7;
  _DAT_18328fcd0 = _DAT_18328f528 ^ _DAT_18328f8f8;
  _DAT_18328f5a0 = 0x5ea907af;
  uVar7 = (~_DAT_18328f600 + 0x5bed5981) *
          ((_DAT_18328f5e8 ^ 0x84222325) + (ulonglong)((uint)_DAT_18328f5e8 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_18328f900) + (uVar7 & _DAT_18328f900);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f5f0 = func_0x00018b2d9fb0((uVar7 | 0xdfcf7aa5) + (ulonglong)((uint)uVar7 & 0xdfcf7aa5))
  ;
  _DAT_18328f930 = (_DAT_18328f930 ^ _DAT_18328f5f0 ^ 0x5bed5980) - 0x5bed5980 ^ 0x722485259b60f933;
  _DAT_18328f7b8 =
       (_DAT_18328f7b8 * -0x2adb21be9db05a47 ^ _DAT_18328f930) + (_DAT_18328f5f0 ^ 0x5bed5980);
  _DAT_18328fc18 = _DAT_18328f7b8 ^ _DAT_18328f930;
  _DAT_18328f8f8 = 0xa412a680;
  uVar7 = (~_DAT_18328f620 + 0x5bed5981) *
          ((_DAT_18328fa18 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18328fa18 & 0x8422231a) * 2);
  uVar7 = (uVar7 | _DAT_18328fbf8) + (uVar7 & _DAT_18328fbf8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328fa98 = func_0x00018b2d9fb0((uVar7 | 0xdfcf7a9a) + (ulonglong)((uint)uVar7 & 0xdfcf7a9a))
  ;
  uVar7 = _DAT_18328fa98 >> 1 | _DAT_18328fa98;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18328fa98;
  _DAT_18328f688 = _DAT_18328f9c8 ^ uVar7 ^ 0x5bed59bf;
  _DAT_18328f6c0 = (_DAT_18328f6c0 ^ uVar7) + 0x5bed59bf ^ 0x79a7fa92b786dad0;
  _DAT_18328f920 = (_DAT_18328f920 * -0x1e582777dcbcdb79 ^ _DAT_18328f6c0) + uVar7;
  _DAT_18328f6d0 = _DAT_18328f920 ^ _DAT_18328f6c0;
  _DAT_18328f858 = 0x5bed59bf;
  uVar7 = (~_DAT_18328f680 + 0xa412a681) *
          ((_DAT_18328f9e0 ^ 0xdfcf7a9a) + (ulonglong)((uint)_DAT_18328f9e0 & 0xdfcf7a9a) * 2);
  uVar7 = (uVar7 | _DAT_18328f8d0) + (uVar7 & _DAT_18328f8d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328fc18 = func_0x00018b2d9fb0((uVar7 | 0x7bdddc1a) + (ulonglong)((uint)uVar7 & 0x7bdddc1a))
  ;
  uVar7 = _DAT_18328fc18 ^ 0xa412a680;
  _DAT_18328fc30 = _DAT_18328f710 ^ uVar7 ^ 0x10000003f;
  _DAT_18328f578 = (_DAT_18328f578 ^ uVar7) + 0x10000003f ^ 0xcd8bf1797cddaa45;
  _DAT_18328f940 = (_DAT_18328f940 * -0x72cad54ea4bc80bd ^ _DAT_18328f578) + uVar7;
  _DAT_18328f7d0 = _DAT_18328f940 ^ _DAT_18328f578;
  _DAT_18328f8e0 = 0x3f;
  _DAT_18328f820 = func_0x00018b2d9fb0(_DAT_18328fa38 ^ 0x950004fdffee3e);
  uVar7 = (_DAT_18328f820 << 0x11 | _DAT_18328f820 >> 0x2f) ^ 0xa3bbffff;
  _DAT_18328f678 = _DAT_18328f970 ^ uVar7 ^ 0x17e4a69d7;
  _DAT_18328fac8 = (_DAT_18328fac8 ^ uVar7) + 0x17e4a69d7 ^ 0x4ab71827b90cd40c;
  _DAT_18328fb30 = (_DAT_18328fb30 * -0x51c3d92c4db59475 ^ _DAT_18328fac8) + uVar7;
  _DAT_18328f600 = _DAT_18328fb30 ^ _DAT_18328fac8;
  _DAT_18328fbc8 = 0x7e4a69d7;
  _DAT_18328fae8 = func_0x00018b2d9fb0(_DAT_18328fc80 ^ 0xacffa2fe001651);
  uVar7 = _DAT_18328fae8 ^ 0x8bc92df968119628;
  uVar11 = uVar7 >> 1 | uVar7;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  _DAT_18328f710 = (_DAT_18328f710 ^ uVar7) + 0x828a69d8 ^ 0xe69b09ca62376e0b;
  _DAT_18328fcb0 = (_DAT_18328fcb0 * 0x167ea5cdd48aca7 ^ _DAT_18328f710) + uVar7;
  _DAT_18328f8f0 = _DAT_18328fcb0 ^ _DAT_18328f710;
  _DAT_18328f850 = 0x828a69d8;
  uVar7 = (_DAT_18328f790 ^ _DAT_181ab37d0) + _DAT_18328f558 + 0xfd17b502;
  uVar11 = (_DAT_18328f558 ^ _UNK_181ab37d8) + _DAT_18328f790 + 0x514d3b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f790 ^ _DAT_181ab37d0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328f558 ^ _UNK_181ab37d8;
  _DAT_18328f640 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328f790 + 0x514d3b0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328f558 + 0xfd17b502));
  _DAT_18328fbe8 = _DAT_18328f640 ^ 0x79359627;
  _DAT_18328fa90 = (_DAT_18328fa90 ^ _DAT_18328fbe8) + 0x7e4a69d7 ^ 0x170b9d05d4d5b31a;
  _DAT_18328fbe8 =
       ((_DAT_18328fcc8 ^ _DAT_18328fbe8 ^ 0x7e4a69d7) * -0x5ba14dd268170ae1 ^ _DAT_18328fa90) +
       _DAT_18328fbe8;
  _DAT_18328f678 = _DAT_18328fbe8 ^ _DAT_18328fa90;
  _DAT_18328f850 = 0x7e4a69d7;
  uVar7 = (_DAT_18328f8b0 ^ _DAT_181ab37e0) + _DAT_18328fc38 + 0xfa684af2;
  uVar11 = (_DAT_18328fc38 ^ _UNK_181ab37e8) + _DAT_18328f8b0 + 0x7e4a69d7;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328f8b0 ^ _DAT_181ab37e0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18328fc38 ^ _UNK_181ab37e8;
  _DAT_18328f848 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18328f8b0 + 0x7e4a69d7) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328fc38 + 0xfa684af2));
  _DAT_18328f958 =
       (_DAT_18328f848 & 0xffffffff) * (_DAT_181ab37f0 & 0xffffffff) +
       ((_DAT_18328f848 & 0xffffffff) * (ulonglong)_DAT_181ab3800 +
        (_DAT_18328f848 >> 0x20) * (_DAT_181ab37f0 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  _DAT_18328fc10 = _DAT_18328fc10 ^ _DAT_18328f958 ^ 0x24907d1ab1d6bcc7;
  _DAT_18328f6e8 = (_DAT_18328f6e8 * 0x592d00d538562c59 ^ _DAT_18328fc10) + _DAT_18328f958;
  _DAT_18328fbb0 = _DAT_18328f6e8 ^ _DAT_18328fc10;
  _DAT_18328f770 = 0;
  uVar7 = ((_DAT_18328fb38 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18328fb38 & 0x8422231a) * 2) *
          -_DAT_18328faa8;
  uVar7 = (uVar7 | _DAT_18328fba8) + (uVar7 & _DAT_18328fba8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f9f8 = func_0x00018b2d9fb0((uVar7 | 0x8422231a) + (ulonglong)((uint)uVar7 & 0x8422231a))
  ;
  uVar7 = _DAT_18328f9f8 ^ 0x3f;
  uVar11 = uVar7 >> 1 | uVar7;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  uVar7 = uVar7 << 0x33 | (uVar7 & 0x7fffffffffffffff) >> 0xd;
  _DAT_18328faa8 = _DAT_18328f750 ^ uVar7 ^ 0x3f;
  _DAT_18328f510 = (_DAT_18328f510 ^ uVar7) + 0x3f ^ 0x58324111a1b8b9c;
  _DAT_18328f8b8 = (_DAT_18328f8b8 * -0x3f4acec1a83e269 ^ _DAT_18328f510) + uVar7;
  _DAT_18328f650 = _DAT_18328f8b8 ^ _DAT_18328f510;
  _DAT_18328fc30 = 0x3f;
  uVar7 = (_DAT_18328fa10 ^ 0x8422231a) + _DAT_18328fc18 + 0x8422231a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18328fa10 ^ 0x8422231a;
  uVar11 = ((_DAT_18328fc18 + _DAT_18328fa10) * 0x2000 | _DAT_18328fc18 + _DAT_18328fa10 >> 0x33) ^
           _DAT_18328fc18;
  _DAT_18328f590 =
       func_0x00018b2d9fb0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_18328fa10 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18328fc18 + 0x8422231a));
  uVar7 = _DAT_18328f590 - (_DAT_18328f590 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar4 + (uint)bVar4 ^ _DAT_18328f590;
  _DAT_18328fc58 = _DAT_18328fa00 ^ uVar7 ^ 0x3f;
  _DAT_18328fa20 = (_DAT_18328fa20 ^ uVar7) + 0x3f ^ 0x9d54f7f198596996;
  _DAT_18328f770 = (_DAT_18328f770 * 0x66c024577d240b9d ^ _DAT_18328fa20) + uVar7;
  _DAT_18328fb58 = _DAT_18328f770 ^ _DAT_18328fa20;
  _DAT_18328f838 = 0x3f;
  uVar7 = ((_DAT_18328f8b8 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18328f8b8 & 0x8422231a) * 2) *
          -_DAT_18328fa98;
  uVar7 = (uVar7 | _DAT_18328f860) + (uVar7 & _DAT_18328f860);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18328f698 = func_0x00018b2d9fb0((uVar7 | 0x8422231a) + (ulonglong)((uint)uVar7 & 0x8422231a))
  ;
  uVar7 = (ulonglong)(~(uint)_DAT_18328f698 & 0x3f);
  _DAT_18328f5e0 = _DAT_18328f528 ^ uVar7 ^ 0x3f;
  _DAT_18328fb70 = (_DAT_18328fb70 ^ uVar7) + 0x3f ^ 0x8bcdb2451b980cb1;
  _DAT_18328fa60 = (_DAT_18328fa60 * 0x8cd545ac831cba7 ^ _DAT_18328fb70) + uVar7;
  _DAT_18328f628 = _DAT_18328fa60 ^ _DAT_18328fb70;
  _DAT_18328fae0 = 0x3f;
  uVar5 = (uint)*(undefined8 *)(unaff_RBP + 0x10) & 0x3f;
  uVar9 = (ulonglong)uVar5 ^ 0x84222325;
  uVar7 = *(ulonglong *)(unaff_RBP + 0x50);
  uVar11 = ((_DAT_18328f880 ^ uVar9) + (ulonglong)((uint)_DAT_18328f880 & (uint)uVar9) * 2) *
           (uVar7 - _DAT_18328f8c0);
  uVar11 = (uVar11 | _DAT_18328faf8) + (uVar11 & _DAT_18328faf8);
  uVar11 = uVar11 * 0x2000 ^ uVar11;
  uVar11 = uVar11 >> 7 ^ uVar11;
  uVar11 = uVar11 << 0x11 ^ uVar11;
  _DAT_18328f5f8 =
       func_0x00018b2d9fb0((uVar9 ^ uVar7 | uVar11) +
                           (ulonglong)((uint)(uVar9 ^ uVar7) & (uint)uVar11));
  uVar11 = _DAT_18328f5f8 >> 1 | _DAT_18328f5f8;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar9 = 0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_18328f5f8;
  uVar11 = uVar9 >> 1 | uVar9;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           uVar9) & 0x7fffffffffffffff;
  _DAT_18328fb58 = uVar7 | uVar5;
  _DAT_18328f6b0 = (_DAT_18328f6b0 ^ uVar11) + _DAT_18328fb58 ^ 0x318564604367e239;
  _DAT_18328fbc0 = (_DAT_18328fbc0 * 0x186385bdeb1adc5f ^ _DAT_18328f6b0) + uVar11;
  _DAT_18328fb68 = _DAT_18328fbc0 ^ _DAT_18328f6b0;
  *(undefined8 *)(unaff_RBP + 0x60) = *(undefined8 *)(unaff_RBP + 0x30);
  uVar1 = *(uint *)(unaff_RBP + 0x38);
  *(uint *)(unaff_RBP + 0x68) = uVar1;
  uVar9 = CONCAT44(0,uVar1);
  uVar11 = uVar9 ^ 0x84222325 ^ _DAT_18328f858;
  lVar6 = (uVar9 ^ 0x84222325) + _DAT_18328fa40;
  uVar10 = uVar11 + lVar6;
  uVar13 = (_DAT_18328fa40 ^ 1) + _DAT_18328f858 + 1;
  uVar11 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar11;
  uVar10 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_18328fa40 ^ 1;
  _DAT_18328f5e0 =
       func_0x00018b2d9fb0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18328f858 + 1) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - lVar6);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar9;
  uVar16 = uVar1 & unaff_XMM10._0_4_;
  uVar17 = uVar1 | unaff_XMM10._0_4_;
  uVar15 = SUB164(auVar12 ^ unaff_XMM10,0);
  auVar3._8_4_ = 0xffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  auVar3._12_4_ = 0xffffffff;
  uVar14 = SUB164(auVar12 ^ auVar3,0);
  uVar11 = (_DAT_18328f5e0 ^ uVar9) << 0x37 | (_DAT_18328f5e0 ^ uVar9) >> 9;
  _DAT_18328fc50 =
       (((ulonglong)uVar15 * (ulonglong)_DAT_181ab3870 +
         ((ulonglong)uVar15 * (ulonglong)_DAT_181ab3880 +
          (SUB168(auVar12 ^ unaff_XMM10,0) >> 0x20) * (ulonglong)_DAT_181ab3870 << 0x20) +
        ((ulonglong)uVar17 * (ulonglong)_DAT_181ab3860 << 0x20) +
        (ulonglong)uVar17 * (ulonglong)_DAT_181ab3850 +
        ((ulonglong)uVar16 * (ulonglong)_DAT_181ab3840 << 0x20 |
        (ulonglong)uVar16 * (ulonglong)_DAT_181ab3830) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_181ab3820 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_181ab3810) -
       ((ulonglong)uVar14 * (ulonglong)_DAT_181ab38f0 +
        ((ulonglong)uVar14 * (ulonglong)_DAT_181ab3900 +
         (SUB168(auVar12 ^ auVar3,0) >> 0x20) * (ulonglong)_DAT_181ab38f0 << 0x20) +
       ((ulonglong)uVar17 * (ulonglong)_DAT_181ab38e0 << 0x20) +
       (ulonglong)uVar17 * (ulonglong)_DAT_181ab38d0 +
       ((ulonglong)uVar16 * (ulonglong)_DAT_181ab38e0 << 0x20 |
       (ulonglong)uVar16 * (ulonglong)_DAT_181ab38d0) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_181ab38c0 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_181ab38b0)) + 0xc529a2d4d73d0019;
  _DAT_18328fb78 = _DAT_18328fcd0 ^ uVar11 ^ _DAT_18328fc50;
  _DAT_18328f728 = (_DAT_18328f728 ^ uVar11) + _DAT_18328fc50 ^ 0x5c8c21af12374ca5;
  _DAT_18328fa98 = (_DAT_18328fa98 * 0x7b7c6864d18f7521 ^ _DAT_18328f728) + uVar11;
  _DAT_18328f5f8 = _DAT_18328fa98 ^ _DAT_18328f728;
  _DAT_18328f950 = _DAT_18328faa8 ^ _DAT_18328fc50;
  _DAT_18328fc50 = _DAT_18328fc50 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x70) = (uint)uVar7 | uVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x90)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b2c5958 (image 18b2c5958) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b2c5996 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b2c5958(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b2dc943 (image 18b2dc943) =====

void FUN_18b2dc943(void)

{
  return;
}



// ===== continuation @ rva b2dc7a4 (image 18b2dc7a4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2dc7a4(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190ddce00();
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



// ===== continuation @ rva b2dd42b (image 18b2dd42b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2dd42b(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
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



// ===== continuation @ rva b2e0026 (image 18b2e0026) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e0026(void)

{
  char cVar1;
  longlong *unaff_R14;
  undefined8 in_stack_00000030;
  
  FUN_190ddfc90();
  cVar1 = (**(code **)(*unaff_R14 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b2defc8 (image 18b2defc8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18b2dcdd3(void)

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



// ===== continuation @ rva b2e0c19 (image 18b2e0c19) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e0c19(void)

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



// ===== continuation @ rva b2e0bc9 (image 18b2e0bc9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e0bc9(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x724,0x22);
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



// ===== continuation @ rva b2e0f8d (image 18b2e0f8d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e0f8d(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190ddce00();
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



// ===== continuation @ rva b2df73f (image 18b2df73f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2df73f(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b2df6fa (image 18b2df6fa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2df6fa(void)

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



// ===== continuation @ rva b2dfd81 (image 18b2dfd81) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2dfd81(void)

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



// ===== continuation @ rva b2e13c3 (image 18b2e13c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e13c3(void)

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



// ===== continuation @ rva b2e136f (image 18b2e136f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e136f(void)

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



// ===== continuation @ rva b2e2128 (image 18b2e2128) =====

void FUN_18b2e2128(void)

{
  return;
}



// ===== continuation @ rva b2e180f (image 18b2e180f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e180f(void)

{
  FUN_190ddfc90();
  (*_DAT_181ab9ce8)();
  return;
}



// ===== continuation @ rva b2e2136 (image 18b2e2136) =====

void FUN_18b2e2136(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b2e1ace (image 18b2e1ace) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e1ace(void)

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



// ===== continuation @ rva b2e1f9c (image 18b2e1f9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e1f9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181ab9f58)();
  return;
}



// ===== continuation @ rva b2e1b37 (image 18b2e1b37) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e1b37(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_181ab9f98)();
  return;
}



// ===== continuation @ rva b2e1535 (image 18b2e1535) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e1535(void)

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



// ===== continuation @ rva b2e14e1 (image 18b2e14e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e14e1(void)

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



// ===== continuation @ rva b2e18d0 (image 18b2e18d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e18d0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_18419fe70();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b2e187c (image 18b2e187c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e187c(void)

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



// ===== continuation @ rva b2e17d4 (image 18b2e17d4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e17d4(void)

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



// ===== continuation @ rva b2e1780 (image 18b2e1780) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e1780(void)

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



// ===== continuation @ rva b2e4b7d (image 18b2e4b7d) =====

void FUN_18b2e4b7d(void)

{
  return;
}



// ===== continuation @ rva b2e22a0 (image 18b2e22a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e22a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181aba678)();
  return;
}



// ===== continuation @ rva b2e4a82 (image 18b2e4a82) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e4a82(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181abad58)();
  return;
}



// ===== continuation @ rva b2e2d44 (image 18b2e2d44) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e2d44(void)

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



// ===== continuation @ rva b2e4b17 (image 18b2e4b17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e4b17(void)

{
  (*_DAT_181abae98)();
  return;
}



// ===== continuation @ rva b2e348e (image 18b2e348e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e348e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181abab58)();
  return;
}



// ===== continuation @ rva b2e2fa0 (image 18b2e2fa0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e2fa0(void)

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



// ===== continuation @ rva b2e35e7 (image 18b2e35e7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e35e7(void)

{
  FUN_190dd72e0();
  (*_DAT_181abab48)();
  return;
}



// ===== continuation @ rva b2e2f0b (image 18b2e2f0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e2f0b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181aba968)();
  return;
}



// ===== continuation @ rva b2e28a8 (image 18b2e28a8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e28a8(void)

{
  undefined8 uStack0000000000000060;
  undefined8 in_stack_000000d0;
  
  uStack0000000000000060 = in_stack_000000d0;
  FUN_190ddfc90();
  (*_DAT_181abab98)();
  return;
}



// ===== continuation @ rva b2e4b22 (image 18b2e4b22) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e4b22(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181abac28)();
  return;
}



// ===== continuation @ rva b2e2bb3 (image 18b2e2bb3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2e2bb3(void)

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



// ===== continuation @ rva b2e7972 (image 18b2e7972) =====

void FUN_18b2e7972(void)

{
  return;
}



// ===== continuation @ rva b2e77ce (image 18b2e77ce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e77ce(void)

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



// ===== continuation @ rva b2eb8cb (image 18b2eb8cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2eb8cb(void)

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



// ===== continuation @ rva b2ea762 (image 18b2ea762) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18b2ec445(void)

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



// ===== continuation @ rva b2ea3e6 (image 18b2ea3e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2ea3e6(void)

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



// ===== continuation @ rva b2e92e1 (image 18b2e92e1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e92e1(void)

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



// ===== continuation @ rva b2e9022 (image 18b2e9022) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e9022(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined2 in_stack_000000f0;
  
  (**(code **)(*in_stack_00000030 + 0x560))(in_stack_00000030,in_stack_00000040,in_stack_00000038,0)
  ;
  uStack00000000000000ac = 0xd7c4fef3;
  rdtsc();
  in_stack_000000d0 = 0x2f005300450044;
  rdtsc();
  in_stack_000000d8 = 0x2f004300420043;
  rdtsc();
  in_stack_000000e0 = 0x610050006f004e;
  rdtsc();
  in_stack_000000e8 = 0x6e006900640064;
  rdtsc();
  in_stack_000000f0 = 0x67;
  (**(code **)(*in_stack_00000030 + 0x518))(in_stack_00000030,&stack0x000000d0,0x11);
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



// ===== continuation @ rva b2eacb3 (image 18b2eacb3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2eacb3(void)

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



// ===== continuation @ rva b2eb4d7 (image 18b2eb4d7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18b2ec445(void)

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



// ===== continuation @ rva b2efc4a (image 18b2efc4a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2efc4a(void)

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



// ===== continuation @ rva b2f0212 (image 18b2f0212) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2f0212(void)

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



// ===== continuation @ rva b2f01be (image 18b2f01be) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f01be(void)

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



// ===== continuation @ rva b2f1085 (image 18b2f1085) =====

void FUN_18b2f1085(void)

{
  return;
}



// ===== continuation @ rva b2f0e29 (image 18b2f0e29) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f0e29(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181abd198)();
  return;
}



// ===== continuation @ rva b2f093c (image 18b2f093c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f093c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181abd058)();
  return;
}



// ===== continuation @ rva b2f0487 (image 18b2f0487) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2f0487(void)

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



// ===== continuation @ rva b2f0433 (image 18b2f0433) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f0433(void)

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



// ===== continuation @ rva b2f036b (image 18b2f036b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f036b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181abd338)();
  return;
}



// ===== continuation @ rva b2f1094 (image 18b2f1094) =====

void FUN_18b2f1094(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b2f1075 (image 18b2f1075) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f1075(void)

{
  (*_DAT_181abd3d8)();
  return;
}



// ===== continuation @ rva b2f0c8a (image 18b2f0c8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2f0c8a(void)

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



// ===== continuation @ rva b2f05c0 (image 18b2f05c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f05c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_181abd218)();
  return;
}



// ===== continuation @ rva b2f31a6 (image 18b2f31a6) =====

void FUN_18b2f31a6(void)

{
  return;
}



// ===== continuation @ rva b2f120c (image 18b2f120c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f120c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181abd668)();
  return;
}



// ===== continuation @ rva b2f2beb (image 18b2f2beb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f2beb(void)

{
  (*_DAT_181abe2e8)();
  return;
}



// ===== continuation @ rva b2f1bba (image 18b2f1bba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f1bba(void)

{
  (*_DAT_181abe488)();
  return;
}



// ===== continuation @ rva b2f3d4a (image 18b2f3d4a) =====

void FUN_18b2f3d4a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b2f1931 (image 18b2f1931) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2f1931(void)

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



// ===== continuation @ rva b2f1d4c (image 18b2f1d4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f1d4c(void)

{
  (*_DAT_181abe428)();
  return;
}



// ===== continuation @ rva b2f3c44 (image 18b2f3c44) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f3c44(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181abdee8)();
  return;
}



// ===== continuation @ rva b2f379b (image 18b2f379b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f379b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181abe028)();
  return;
}



// ===== continuation @ rva b2f21bb (image 18b2f21bb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f21bb(void)

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



// ===== continuation @ rva b2f396f (image 18b2f396f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2f396f(void)

{
  (*_DAT_181abe488)();
  return;
}



// ===== continuation @ rva b15d225 (image 18b15d225) =====

void FUN_18b15d225(void)

{
  return;
}



// ===== continuation @ rva b157fdd (image 18b157fdd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157fdd(void)

{
  FUN_190ddce00();
  (*_DAT_181a6df18)();
  return;
}



// ===== continuation @ rva b15b3ee (image 18b15b3ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15b3ee(void)

{
  (*_DAT_181a6f648)();
  return;
}



// ===== continuation @ rva b15fa5a (image 18b15fa5a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15fa5a(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a6dfb8)();
  return;
}



// ===== continuation @ rva b15cefc (image 18b15cefc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b15cefc(void)

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



// ===== continuation @ rva b15e1b0 (image 18b15e1b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15e1b0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a6e7f8)();
  return;
}



// ===== continuation @ rva b15bd66 (image 18b15bd66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b15bd66(void)

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



// ===== continuation @ rva b15be2f (image 18b15be2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15be2f(void)

{
  (*_DAT_181a6f128)();
  return;
}



// ===== continuation @ rva b15b3f9 (image 18b15b3f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15b3f9(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a6f1d8)();
  return;
}



// ===== continuation @ rva b15af6b (image 18b15af6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15af6b(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181a6f7d8)();
  return;
}



// ===== continuation @ rva b15b6bf (image 18b15b6bf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15b6bf(void)

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



// ===== continuation @ rva b15e37e (image 18b15e37e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15e37e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181a6f2c8)();
  return;
}



// ===== continuation @ rva b15e322 (image 18b15e322) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15e322(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a6deb8)();
  return;
}



// ===== continuation @ rva b2af1ee (image 18b2af1ee) =====

void FUN_18b2af1ee(void)

{
  return;
}



// ===== continuation @ rva b2a8062 (image 18b2a8062) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2a8062(void)

{
  FUN_190ddce00();
  (*_DAT_181ab0e08)();
  return;
}



// ===== continuation @ rva b2af1df (image 18b2af1df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2af1df(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181ab1938)();
  return;
}



// ===== continuation @ rva b2ab56a (image 18b2ab56a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2ab56a(void)

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



// ===== continuation @ rva b2adfb0 (image 18b2adfb0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2adfb0(void)

{
  FUN_190ddfc90();
  (*_DAT_181ab0f58)();
  return;
}



// ===== continuation @ rva b2acba8 (image 18b2acba8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2acba8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ab0958)();
  return;
}



// ===== continuation @ rva b2ac0d8 (image 18b2ac0d8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2ac0d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181ab0b78)();
  return;
}



// ===== continuation @ rva b2af25a (image 18b2af25a) =====

void FUN_18b2af25a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b2af077 (image 18b2af077) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2af077(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_181ab1198)();
  return;
}



// ===== continuation @ rva b2abd34 (image 18b2abd34) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b2abd34(void)

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



// ===== continuation @ rva b2af0cc (image 18b2af0cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2af0cc(void)

{
  FUN_190de3220();
  (*_DAT_181ab1098)();
  return;
}



// ===== continuation @ rva b2ad7ef (image 18b2ad7ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2ad7ef(void)

{
  FUN_190dd72e0();
  (*_DAT_181ab0588)();
  return;
}



// ===== continuation @ rva b31f1b5 (image 18b31f1b5) =====

void FUN_18b31f1b5(void)

{
  return;
}



// ===== continuation @ rva b31a44a (image 18b31a44a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b31a44a(void)

{
  FUN_190ddce00();
  (*_DAT_181ac2598)();
  return;
}



// ===== continuation @ rva b32114b (image 18b32114b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32114b(void)

{
  (*_DAT_181ac2f78)();
  return;
}



// ===== continuation @ rva b31ef62 (image 18b31ef62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b31ef62(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ac2fa8)();
  return;
}



// ===== continuation @ rva b31e178 (image 18b31e178) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b31e178(void)

{
  (*_DAT_181ac3298)();
  return;
}



// ===== continuation @ rva b31e5ac (image 18b31e5ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b31e5ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ac22f8)();
  return;
}



// ===== continuation @ rva b31e42e (image 18b31e42e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b31e42e(void)

{
  FUN_190de3220();
  (*_DAT_181ac2258)();
  return;
}



// ===== continuation @ rva b320062 (image 18b320062) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b320062(void)

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



// ===== continuation @ rva b31f897 (image 18b31f897) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b31f897(void)

{
  (*_DAT_181ac2ff8)();
  return;
}



// ===== continuation @ rva b321092 (image 18b321092) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b321092(void)

{
  (*_DAT_181ac2f78)();
  return;
}



// ===== continuation @ rva b31f76a (image 18b31f76a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b31f76a(void)

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



// ===== continuation @ rva b3200b8 (image 18b3200b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3200b8(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xc54c,0x21c);
  (*_DAT_181ac31f8)();
  return;
}



// ===== continuation @ rva b320031 (image 18b320031) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b320031(void)

{
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  (*_DAT_181ac1dc8)();
  return;
}



// ===== continuation @ rva b32132e (image 18b32132e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32132e(void)

{
  FUN_190dd72e0();
  (*_DAT_181ac4228)();
  return;
}



// ===== continuation @ rva b3212b0 (image 18b3212b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3212b0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ac4218)();
  return;
}



// ===== continuation @ rva b32173d (image 18b32173d) =====

void FUN_18b32173d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b32162c (image 18b32162c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b32162c(void)

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



// ===== continuation @ rva b321735 (image 18b321735) =====

void FUN_18b321735(void)

{
  return;
}



// ===== continuation @ rva b321526 (image 18b321526) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b321526(void)

{
  FUN_190dd72e0();
  (*_DAT_181ac41b8)();
  return;
}



// ===== continuation @ rva b32156f (image 18b32156f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32156f(void)

{
  FUN_190de3220();
  (*_DAT_181ac4108)();
  return;
}



// ===== continuation @ rva b3216a4 (image 18b3216a4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3216a4(void)

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



// ===== continuation @ rva b3214ea (image 18b3214ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3214ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x348))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ac40d8)();
  return;
}



// ===== continuation @ rva b321459 (image 18b321459) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b321459(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ac41c8)();
  return;
}



// ===== continuation @ rva b32170c (image 18b32170c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32170c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ac4248)();
  return;
}



// ===== continuation @ rva b3216ba (image 18b3216ba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3216ba(void)

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



// ===== continuation @ rva b326c8c (image 18b326c8c) =====

void FUN_18b326c8c(void)

{
  return;
}



// ===== continuation @ rva b3218bd (image 18b3218bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3218bd(void)

{
  FUN_190ddce00();
  (*_DAT_181ac4bd8)();
  return;
}



// ===== continuation @ rva b325862 (image 18b325862) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b325862(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ac4308)();
  return;
}



// ===== continuation @ rva b324d95 (image 18b324d95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b324d95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ac4f88)();
  return;
}



// ===== continuation @ rva b3278b0 (image 18b3278b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3278b0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181ac5398)();
  return;
}



// ===== continuation @ rva b32647f (image 18b32647f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b32647f(void)

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



// ===== continuation @ rva b3253ba (image 18b3253ba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3253ba(void)

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



// ===== continuation @ rva b324fd1 (image 18b324fd1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b324fd1(void)

{
  (*_DAT_181ac5368)();
  return;
}



// ===== continuation @ rva b326ed4 (image 18b326ed4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b326ed4(void)

{
  (*_DAT_181ac54e8)();
  return;
}



// ===== continuation @ rva b3276e2 (image 18b3276e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3276e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ac4498)();
  return;
}



// ===== continuation @ rva b325891 (image 18b325891) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b325891(void)

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



// ===== continuation @ rva b326fb0 (image 18b326fb0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b326fb0(void)

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



// ===== continuation @ rva b32b796 (image 18b32b796) =====

void FUN_18b32b796(void)

{
  return;
}



// ===== continuation @ rva b327ad4 (image 18b327ad4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b327ad4(void)

{
  FUN_190ddce00();
  (*_DAT_181ac65d8)();
  return;
}



// ===== continuation @ rva b32d1b6 (image 18b32d1b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32d1b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ac6878)();
  return;
}



// ===== continuation @ rva b32afc2 (image 18b32afc2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b32afc2(void)

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



// ===== continuation @ rva b32d397 (image 18b32d397) =====

void FUN_18b32d397(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b32c685 (image 18b32c685) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b32c685(void)

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



// ===== continuation @ rva b32bae0 (image 18b32bae0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32bae0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ac62c8)();
  return;
}



// ===== continuation @ rva b32b8dd (image 18b32b8dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b32b8dd(void)

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



// ===== continuation @ rva b32d14b (image 18b32d14b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32d14b(void)

{
  (*_DAT_181ac6b58)();
  return;
}



// ===== continuation @ rva b32cacc (image 18b32cacc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32cacc(undefined4 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(*unaff_RSI + 0x448))(param_1,in_stack_00000030);
  (*_DAT_181ac6158)();
  return;
}



// ===== continuation @ rva b32bdb4 (image 18b32bdb4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32bdb4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ac6738)();
  return;
}



// ===== continuation @ rva b32bbc0 (image 18b32bbc0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32bbc0(void)

{
  FUN_190ddfc90();
  (*_DAT_181ac7008)();
  return;
}



// ===== continuation @ rva b32a86f (image 18b32a86f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32a86f(void)

{
  FUN_190de3220();
  (*_DAT_181ac6c88)();
  return;
}



// ===== continuation @ rva b331601 (image 18b331601) =====

void FUN_18b331601(void)

{
  return;
}



// ===== continuation @ rva b32d5b4 (image 18b32d5b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b32d5b4(void)

{
  FUN_190ddce00();
  (*_DAT_181ac8218)();
  return;
}



// ===== continuation @ rva b33133d (image 18b33133d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b33133d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ac7e38)();
  return;
}



// ===== continuation @ rva b331a10 (image 18b331a10) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b331a10(void)

{
  (*_DAT_181ac8228)();
  return;
}



// ===== continuation @ rva b33102c (image 18b33102c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b33102c(void)

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



// ===== continuation @ rva b330f66 (image 18b330f66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b330f66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_181ac8128)();
  return;
}



// ===== continuation @ rva b330f12 (image 18b330f12) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b330f12(void)

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



// ===== continuation @ rva b3319f5 (image 18b3319f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3319f5(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181ac8228)();
    return;
  }
  (*_DAT_181ac8228)();
  return;
}



// ===== continuation @ rva b331119 (image 18b331119) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b331119(void)

{
  (*_DAT_181ac7d58)();
  return;
}



// ===== continuation @ rva b33174c (image 18b33174c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b33174c(void)

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



// ===== continuation @ rva b330d05 (image 18b330d05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b330d05(void)

{
  FUN_190dd72e0();
  (*_DAT_181ac8158)();
  return;
}



// ===== continuation @ rva b3349f2 (image 18b3349f2) =====

void FUN_18b3349f2(void)

{
  return;
}



// ===== continuation @ rva b331c0d (image 18b331c0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b331c0d(void)

{
  FUN_190ddce00();
  (*_DAT_181ac9998)();
  return;
}



// ===== continuation @ rva b33573c (image 18b33573c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b33573c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181acab28)();
  return;
}



// ===== continuation @ rva b3352d5 (image 18b3352d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3352d5(void)

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



// ===== continuation @ rva b339aab (image 18b339aab) =====

void FUN_18b339aab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b337f41 (image 18b337f41) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b337f41(void)

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



// ===== continuation @ rva b3387cd (image 18b3387cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3387cd(void)

{
  (*_DAT_181acaf88)();
  return;
}



// ===== continuation @ rva b334cc2 (image 18b334cc2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b334cc2(void)

{
  FUN_190ddfc90();
  (*_DAT_181ac9f58)();
  return;
}



// ===== continuation @ rva b339254 (image 18b339254) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b339254(void)

{
  FUN_190dd72e0();
  (*_DAT_181aca348)();
  return;
}



// ===== continuation @ rva b3391d7 (image 18b3391d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3391d7(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181acae68)();
  return;
}



// ===== continuation @ rva b339a9a (image 18b339a9a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b339a9a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181acaf78)();
  return;
}



// ===== continuation @ rva b337f8a (image 18b337f8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b337f8a(void)

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



// ===== continuation @ rva b335893 (image 18b335893) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b335893(void)

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



// ===== continuation @ rva b33fa21 (image 18b33fa21) =====

void FUN_18b33fa21(void)

{
  return;
}



// ===== continuation @ rva b339d00 (image 18b339d00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b339d00(void)

{
  FUN_190ddce00();
  (*_DAT_181acc538)();
  return;
}



// ===== continuation @ rva b341040 (image 18b341040) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b341040(void)

{
  (*_DAT_181acda88)();
  return;
}



// ===== continuation @ rva b34014e (image 18b34014e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b34014e(void)

{
  (*_DAT_181acd898)();
  return;
}



// ===== continuation @ rva b33f3ff (image 18b33f3ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b33f3ff(void)

{
  (*_DAT_181acdb78)();
  return;
}



// ===== continuation @ rva b33ecfe (image 18b33ecfe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b33ecfe(void)

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



// ===== continuation @ rva b33e868 (image 18b33e868) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b33e868(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x348))();
  (*_DAT_181acbfa8)();
  return;
}



// ===== continuation @ rva b341ca9 (image 18b341ca9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b341ca9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181acdaa8)();
  return;
}



// ===== continuation @ rva b33da95 (image 18b33da95) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b33da95(void)

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



// ===== continuation @ rva b33e5f7 (image 18b33e5f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b33e5f7(void)

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



// ===== continuation @ rva b340551 (image 18b340551) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b340551(void)

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



// ===== continuation @ rva b1651c6 (image 18b1651c6) =====

void FUN_18b1651c6(void)

{
  return;
}



// ===== continuation @ rva b15fd17 (image 18b15fd17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15fd17(void)

{
  FUN_190ddce00();
  (*_DAT_181a70b78)();
  return;
}



// ===== continuation @ rva b165232 (image 18b165232) =====

void FUN_18b165232(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b164544 (image 18b164544) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b164544(void)

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



// ===== continuation @ rva b164a89 (image 18b164a89) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b164a89(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a70e98)();
  return;
}



// ===== continuation @ rva b163934 (image 18b163934) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b163934(void)

{
  longlong *unaff_RSI;
  
  FUN_18436c0d0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a70af8)();
  return;
}



// ===== continuation @ rva b164e9d (image 18b164e9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b164e9d(void)

{
  (*_DAT_181a711d8)();
  return;
}



// ===== continuation @ rva b16457b (image 18b16457b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16457b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181a70818)();
  return;
}



// ===== continuation @ rva b164387 (image 18b164387) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b164387(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a709f8)();
  return;
}



// ===== continuation @ rva b15fd8f (image 18b15fd8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15fd8f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_181a709b8)();
  return;
}



// ===== continuation @ rva b164c20 (image 18b164c20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b164c20(void)

{
  (*_DAT_181a70fe8)();
  return;
}



// ===== continuation @ rva b164be1 (image 18b164be1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b164be1(void)

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



// ===== continuation @ rva b163625 (image 18b163625) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b163625(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a70f48)();
  return;
}



// ===== continuation @ rva b1632c5 (image 18b1632c5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1632c5(void)

{
  FUN_190dd72e0();
  (*_DAT_181a70c18)();
  return;
}



// ===== continuation @ rva b1664a8 (image 18b1664a8) =====

void FUN_18b1664a8(void)

{
  return;
}



// ===== continuation @ rva b1653bd (image 18b1653bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1653bd(void)

{
  FUN_190ddfc90();
  (*_DAT_181a726a8)();
  return;
}



// ===== continuation @ rva b166484 (image 18b166484) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b166484(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a72678)();
  return;
}



// ===== continuation @ rva b165c5b (image 18b165c5b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b165c5b(void)

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



// ===== continuation @ rva b1657fd (image 18b1657fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1657fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a72678)();
  return;
}



// ===== continuation @ rva b165e89 (image 18b165e89) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b165e89(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b1661cd (image 18b1661cd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1661cd(void)

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



// ===== continuation @ rva b1654fa (image 18b1654fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1654fa(void)

{
  FUN_190de3220();
  (*_DAT_181a72528)();
  return;
}



// ===== continuation @ rva b165709 (image 18b165709) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b165709(void)

{
  FUN_190dd72e0();
  (*_DAT_181a72638)();
  return;
}



// ===== continuation @ rva b165ece (image 18b165ece) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b165ece(void)

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



// ===== continuation @ rva b16ac70 (image 18b16ac70) =====

void FUN_18b16ac70(void)

{
  return;
}



// ===== continuation @ rva b1666c7 (image 18b1666c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1666c7(void)

{
  FUN_190ddce00();
  (*_DAT_181a73368)();
  return;
}



// ===== continuation @ rva b16c2c1 (image 18b16c2c1) =====

void FUN_18b16c2c1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b169f02 (image 18b169f02) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b169f02(void)

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



// ===== continuation @ rva b16a785 (image 18b16a785) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16a785(void)

{
  FUN_190ddce00();
  (*_DAT_181a73398)();
  return;
}



// ===== continuation @ rva b16c09d (image 18b16c09d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16c09d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181a72e88)();
  return;
}



// ===== continuation @ rva b16b4f4 (image 18b16b4f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b16b4f4(void)

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



// ===== continuation @ rva b16b5e8 (image 18b16b5e8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16b5e8(void)

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



// ===== continuation @ rva b16675e (image 18b16675e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b16675e(void)

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



// ===== continuation @ rva b16b97a (image 18b16b97a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16b97a(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a736c8)();
  return;
}



// ===== continuation @ rva b16b5c9 (image 18b16b5c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16b5c9(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181a72858)();
  return;
}



// ===== continuation @ rva b16aece (image 18b16aece) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16aece(void)

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



// ===== continuation @ rva b16c4ca (image 18b16c4ca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16c4ca(void)

{
  FUN_190dd72e0();
  (*_DAT_181a74688)();
  return;
}



// ===== continuation @ rva b16c44c (image 18b16c44c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16c44c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a74578)();
  return;
}



// ===== continuation @ rva b16cc97 (image 18b16cc97) =====

void FUN_18b16cc97(void)

{
  return;
}



// ===== continuation @ rva b16c490 (image 18b16c490) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16c490(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a74558)();
  return;
}



// ===== continuation @ rva b16cc9f (image 18b16cc9f) =====

void FUN_18b16cc9f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b16ca8d (image 18b16ca8d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b16ca8d(void)

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



// ===== continuation @ rva b16c7f1 (image 18b16c7f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b16c7f1(void)

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



// ===== continuation @ rva b16c79d (image 18b16c79d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16c79d(void)

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



// ===== continuation @ rva b16caae (image 18b16caae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16caae(void)

{
  FUN_190ddfc90();
  (*_DAT_181a74618)();
  return;
}



// ===== continuation @ rva b16c5f4 (image 18b16c5f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16c5f4(void)

{
  FUN_190ddfc90();
  (*_DAT_181a74508)();
  return;
}



// ===== continuation @ rva b16c8c3 (image 18b16c8c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b16c8c3(void)

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



// ===== continuation @ rva b16cc8c (image 18b16cc8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16cc8c(void)

{
  (*_DAT_181a74488)();
  return;
}



// ===== continuation @ rva b16cc4e (image 18b16cc4e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b16cc4e(void)

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



// ===== continuation @ rva b1702db (image 18b1702db) =====

void FUN_18b1702db(void)

{
  return;
}



// ===== continuation @ rva b16ce17 (image 18b16ce17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16ce17(void)

{
  FUN_190ddce00();
  (*_DAT_181a74c08)();
  return;
}



// ===== continuation @ rva b1709eb (image 18b1709eb) =====

void FUN_18b1709eb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b170660 (image 18b170660) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b170660(void)

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



// ===== continuation @ rva b16ce6e (image 18b16ce6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b16ce6e(void)

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



// ===== continuation @ rva b16ff57 (image 18b16ff57) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b16ff57(void)

{
  (*_DAT_181a74bd8)();
  return;
}



// ===== continuation @ rva b16fb9d (image 18b16fb9d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b16fb9d(void)

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



// ===== continuation @ rva b170826 (image 18b170826) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b170826(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  uint in_EAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  uVar2 = in_EAX ^ unaff_R15;
  uVar1 = (0xffffffff - param_2) *
          ((param_3 ^ uVar2) + (ulonglong)((uint)param_3 & (uint)uVar2) * 2);
  uVar1 = (uVar1 | param_1) + (uVar1 & param_1);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18328bd60 =
       func_0x00018b170a80((uVar1 | uVar2 ^ 0xffffffff) + (uVar1 & (uVar2 ^ 0xffffffff)));
  uVar1 = (_DAT_18328bd60 ^ in_EAX) << 0x24 | (_DAT_18328bd60 ^ in_EAX) >> 0x1c;
  uVar2 = ((ulonglong)in_EAX -
          (((ulonglong)(in_EAX ^ 0xffffffff) * (ulonglong)_DAT_181a758d0 + _DAT_181a758e0 << 0x20) +
           (ulonglong)_DAT_181a758c0 * (ulonglong)(in_EAX ^ 0xffffffff) +
          ((ulonglong)in_EAX * (ulonglong)_DAT_181a758b0 << 0x20) +
          (ulonglong)_DAT_181a758a0 * (ulonglong)in_EAX +
          ((ulonglong)_DAT_181a75890 * (ulonglong)in_EAX << 0x20) +
          (ulonglong)_DAT_181a75880 * (ulonglong)in_EAX)) + 0x4f7926581dac4476;
  _DAT_18328bc58 = _DAT_18328be30 ^ uVar1 ^ uVar2;
  _DAT_18328bc00 = (_DAT_18328bbe0 ^ uVar1) + uVar2 ^ 0x2fb2da9e26b9c2f4;
  _DAT_18328bde8 = (_DAT_18328bde8 * -0x2c970b0dc5ec7609 ^ _DAT_18328bc00) + uVar1;
  _DAT_18328bc00 = _DAT_18328bde8 ^ _DAT_18328bc00;
  _DAT_18328bbe0 = uVar2 & 0xffffffff;
  (*_DAT_181a74c98)();
  return;
}



// ===== continuation @ rva b1704c8 (image 18b1704c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1704c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a74988)();
  return;
}



// ===== continuation @ rva b17037a (image 18b17037a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b17037a(void)

{
  longlong unaff_R14;
  
  switch(unaff_R14 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b170251 (image 18b170251) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b170251(void)

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



// ===== continuation @ rva b174562 (image 18b174562) =====

void FUN_18b174562(void)

{
  return;
}



// ===== continuation @ rva b170bd4 (image 18b170bd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b170bd4(void)

{
  FUN_190ddce00();
  (*_DAT_181a75b98)();
  return;
}



// ===== continuation @ rva b174553 (image 18b174553) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b174553(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181a75e18)();
  return;
}



// ===== continuation @ rva b1740f2 (image 18b1740f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1740f2(void)

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



// ===== continuation @ rva b1745e4 (image 18b1745e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1745e4(void)

{
  (*_DAT_181a75fc8)();
  return;
}



// ===== continuation @ rva b173b34 (image 18b173b34) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b173b34(void)

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



// ===== continuation @ rva b174440 (image 18b174440) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b174440(void)

{
  FUN_190de3220();
  (*_DAT_181a75f88)();
  return;
}



// ===== continuation @ rva b1745ef (image 18b1745ef) =====

void FUN_18b1745ef(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b174390 (image 18b174390) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b174390(void)

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



// ===== continuation @ rva b173a9a (image 18b173a9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b173a9a(void)

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



// ===== continuation @ rva b17408c (image 18b17408c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b17408c(void)

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



// ===== continuation @ rva b1741be (image 18b1741be) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1741be(void)

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



// ===== continuation @ rva b177a46 (image 18b177a46) =====

void FUN_18b177a46(void)

{
  return;
}



// ===== continuation @ rva b1747a4 (image 18b1747a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1747a4(void)

{
  FUN_190ddce00();
  (*_DAT_181a76bc8)();
  return;
}



// ===== continuation @ rva b1770ec (image 18b1770ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1770ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a771e8)();
  return;
}



// ===== continuation @ rva b176df6 (image 18b176df6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b176df6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a76cc8)();
  return;
}



// ===== continuation @ rva b178206 (image 18b178206) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b178206(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a77228)();
  return;
}



// ===== continuation @ rva b17724d (image 18b17724d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b17724d(void)

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



// ===== continuation @ rva b177567 (image 18b177567) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b177567(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a770c8)();
  return;
}



// ===== continuation @ rva b1773ee (image 18b1773ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1773ee(void)

{
  FUN_190de3220();
  (*_DAT_181a77178)();
  return;
}



// ===== continuation @ rva b178269 (image 18b178269) =====

void FUN_18b178269(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b174889 (image 18b174889) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b174889(ulonglong param_1)

{
  char cVar1;
  longlong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_R15;
  ulonglong uVar10;
  uint uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  undefined1 auVar23 [16];
  ulonglong uVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uStack0000000000000070;
  ulonglong in_stack_00000078;
  
  uVar3 = _DAT_181a76990;
  uStack0000000000000070 = _DAT_181a76990 ^ 0x84222325;
  uVar5 = (-0x7f40e1d5105c7a1d - in_RAX) *
          ((param_1 ^ uStack0000000000000070) + (uStack0000000000000070 & param_1) * 2);
  uVar5 = (uVar5 | _DAT_18328c840) + (uVar5 & _DAT_18328c840);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18328c788 =
       func_0x00018b1782d0((_DAT_181a76990 ^ 0x80bf1e2a6b81a6c6 | uVar5) +
                           (uVar5 & (_DAT_181a76990 ^ 0x80bf1e2a6b81a6c6)));
  auVar13 = _DAT_1800170c0;
  uVar5 = (_DAT_18328c788 ^ uVar3 ^ 0x1f1e2aefa385e3) & 0x1fffffffffffff;
  uVar9 = uVar3 | 0x80bf1e2aefa385e3;
  _DAT_18328c870 = (_DAT_18328c870 ^ uVar5) + uVar9 ^ 0x3caca3a9725e2c6;
  _DAT_18328c7c8 = (_DAT_18328c7c8 * 0x259742644f0c32e5 ^ _DAT_18328c870) + uVar5;
  _DAT_18328c8e0 = _DAT_18328c7c8 ^ _DAT_18328c870;
  uVar8 = _DAT_181a76998 ^ 0xd70598394ccaf448;
  lVar2 = uVar3 * uVar3;
  auVar12._8_8_ = lVar2 * -0x61e9557a7aa65ea5;
  auVar12._0_8_ = _DAT_18001b640;
  auVar12 = pshufb(auVar12 ^ _DAT_181a772b0,_DAT_1800170c0);
  uVar4 = auVar12._8_8_ + auVar12._0_8_;
  uVar5 = uVar4 + _DAT_18328ca98;
  if (auVar12._4_4_ < 0) {
    uVar5 = _DAT_18328c8c0 ^ uVar4;
  }
  _DAT_18328c710 = uVar9;
  _DAT_18328c9a8 = func_0x00018b1782d0(uVar5 ^ 0x7e);
  uVar5 = _DAT_18328c9a8 >> 1 | _DAT_18328c9a8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_18328c9a8;
  uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar7;
  uVar4 = lVar2 * 0x61e9557a7aa65ea5;
  _DAT_18328c890 = (_DAT_18328c890 ^ uVar7) + lVar2 * 0x61e9557a7aa65ea5 ^ 0xc37b84bb293b0e9a;
  _DAT_18328c7a0 = (_DAT_18328c7a0 * 0x323c462347402f6d ^ _DAT_18328c890) + uVar7;
  _DAT_18328c9d0 = _DAT_18328c7a0 ^ _DAT_18328c890;
  uVar10 = unaff_R15 + lVar2 * -0x61e9557a7aa65ea5;
  auVar39._8_8_ = uVar4;
  auVar39._0_8_ = uVar10 ^ 0x84222325;
  auVar13 = pshufb(auVar39 ^ _DAT_181a772c0,auVar13);
  uVar7 = auVar13._8_8_ + auVar13._0_8_;
  uVar5 = uVar7 + _DAT_18328c7c0;
  if (auVar13._4_4_ < 0) {
    uVar5 = _DAT_18328c968 ^ uVar7;
  }
  _DAT_18328c830 = uVar4;
  _DAT_18328c9a0 = func_0x00018b1782d0(SUB161(auVar39 ^ _DAT_181a772c0,5) ^ uVar5);
  uVar5 = _DAT_181a76998;
  uVar17 = (uint)(uVar10 >> 0x20);
  auVar29._8_4_ = (int)uVar10;
  auVar29._0_8_ = uVar10;
  auVar29._12_4_ = uVar17;
  uVar28 = (uint)(uVar4 >> 0x20);
  auVar23._8_4_ = (int)uVar4;
  auVar23._0_8_ = uVar4;
  auVar23._12_4_ = uVar28;
  uVar22 = SUB164(auVar29 & auVar23,0);
  uVar26 = SUB168(auVar29 & auVar23,0);
  uVar18 = SUB164(auVar29 | auVar23,0);
  uVar34 = SUB168(auVar29 | auVar23,0);
  uVar33 = SUB164(auVar29 ^ auVar23,0);
  auVar36._8_4_ = 0xffffffff;
  auVar36._0_8_ = 0xffffffffffffffff;
  auVar36._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar29 ^ auVar36,0);
  uVar42 = SUB168(auVar29 ^ auVar36,0);
  uVar7 = _DAT_18328c9a0 * 0x3e025d518e43c5db;
  uVar34 = (((ulonglong)_DAT_181a77310 * (ulonglong)uVar11 +
             ((ulonglong)_DAT_181a77380 * (ulonglong)uVar11 +
              (uVar42 >> 0x20) * (ulonglong)_DAT_181a77310 << 0x20) +
            (ulonglong)uVar33 * (ulonglong)_DAT_181a77360 +
            ((ulonglong)_DAT_181a77370 * (ulonglong)uVar33 +
             (SUB168(auVar29 ^ auVar23,0) >> 0x20) * (ulonglong)_DAT_181a77360 << 0x20) +
            (ulonglong)_DAT_181a77340 * (ulonglong)uVar18 +
            ((ulonglong)_DAT_181a77350 * (ulonglong)uVar18 +
             (uVar34 >> 0x20) * (ulonglong)_DAT_181a77340 << 0x20) +
            (ulonglong)_DAT_181a77320 * (ulonglong)uVar22 +
            ((ulonglong)_DAT_181a77330 * (ulonglong)uVar22 +
             (uVar26 >> 0x20) * (ulonglong)_DAT_181a77320 << 0x20) +
            (ulonglong)_DAT_181a772f0 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_181a77300 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar28 * (ulonglong)_DAT_181a772f0 << 0x20) +
            (ulonglong)_DAT_181a772d0 * (uVar10 & 0xffffffff) +
            ((ulonglong)_DAT_181a772e0 * (uVar10 & 0xffffffff) +
             (ulonglong)uVar17 * (ulonglong)_DAT_181a772d0 << 0x20)) -
           ((ulonglong)uVar11 * (ulonglong)_DAT_181a773f0 +
            ((ulonglong)_DAT_181a77420 * (ulonglong)uVar11 +
             (uVar42 >> 0x20) * (ulonglong)_DAT_181a773f0 << 0x20) +
           (ulonglong)uVar18 * (ulonglong)_DAT_181a77410 +
           ((uVar34 >> 0x20) * (ulonglong)_DAT_181a77410 +
            (ulonglong)_DAT_181a77400 * (ulonglong)uVar18 << 0x20) +
           (ulonglong)uVar22 * (ulonglong)_DAT_181a77410 +
           ((uVar26 >> 0x20) * (ulonglong)_DAT_181a77410 +
            (ulonglong)uVar22 * (ulonglong)_DAT_181a77400 << 0x20) +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_181a773d0 +
           ((ulonglong)_DAT_181a773e0 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar28 * (ulonglong)_DAT_181a773d0 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_181a773b0 +
           ((ulonglong)_DAT_181a773c0 * (uVar10 & 0xffffffff) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181a773b0 << 0x20))) + _DAT_181a77430;
  _DAT_18328c838 = _DAT_18328c830 ^ uVar7 ^ uVar34;
  _DAT_18328c890 = (_DAT_18328c890 ^ uVar7) + uVar34 ^ 0x470f681ab4af0222;
  _DAT_18328c8e0 = (_DAT_18328c8e0 * 0x2b0519150253b175 ^ _DAT_18328c890) + uVar7;
  _DAT_18328c9a8 = _DAT_18328c8e0 ^ _DAT_18328c890;
  lVar2 = _DAT_181a76998 * _DAT_181a76998;
  uVar7 = lVar2 * 0x60bbdd1952356010;
  uVar4 = uVar34 ^ 0x84222325 ^ _DAT_18328ca20;
  lVar6 = (uVar34 ^ 0x84222325) + _DAT_18328c7d8;
  uVar10 = uVar4 + lVar6;
  uVar26 = (uVar7 ^ _DAT_18328c7d8) + _DAT_18328ca20 + uVar7;
  uVar4 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar4;
  uVar10 = (uVar26 * 0x2000 | uVar26 >> 0x33) ^ uVar7 ^ _DAT_18328c7d8;
  _DAT_18328c850 = uVar34;
  _DAT_18328c928 =
       func_0x00018b1782d0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18328ca20 + uVar7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar6);
  uVar35 = (uint)(uVar34 >> 0x20);
  auVar38._8_4_ = (int)uVar34;
  auVar38._0_8_ = uVar34;
  auVar38._12_4_ = uVar35;
  uVar17 = (uint)(uVar7 >> 0x20);
  auVar30._8_4_ = (int)uVar7;
  auVar30._0_8_ = uVar7;
  auVar30._12_4_ = uVar17;
  auVar27._8_4_ = 0xffffffff;
  auVar27._0_8_ = 0xffffffffffffffff;
  auVar27._12_4_ = 0xffffffff;
  uVar33 = SUB164(auVar38 & auVar30,0);
  uVar18 = SUB164(auVar38 | auVar30,0);
  uVar11 = SUB164(auVar38 ^ auVar30,0);
  uVar28 = SUB164(auVar30 ^ auVar27,0);
  uVar4 = SUB168(auVar30 ^ auVar27,0);
  uVar22 = SUB164(auVar38 ^ auVar27,0);
  _DAT_18328ca10 =
       (((ulonglong)_DAT_181a77480 * (ulonglong)uVar28 +
         ((ulonglong)_DAT_181a774f0 * (ulonglong)uVar28 +
          (uVar4 >> 0x20) * (ulonglong)_DAT_181a77480 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)_DAT_181a774d0 +
        ((ulonglong)_DAT_181a774e0 * (ulonglong)uVar11 +
         (SUB168(auVar38 ^ auVar30,0) >> 0x20) * (ulonglong)_DAT_181a774d0 << 0x20) +
        (ulonglong)uVar18 * (ulonglong)_DAT_181a774b0 +
        ((ulonglong)_DAT_181a774c0 * (ulonglong)uVar18 +
         (SUB168(auVar38 | auVar30,0) >> 0x20) * (ulonglong)_DAT_181a774b0 << 0x20) +
        (ulonglong)uVar33 * (ulonglong)_DAT_181a77490 +
        ((ulonglong)_DAT_181a774a0 * (ulonglong)uVar33 +
         (SUB168(auVar38 & auVar30,0) >> 0x20) * (ulonglong)_DAT_181a77490 << 0x20) +
        (ulonglong)_DAT_181a77460 * (uVar7 & 0xffffffff) +
        ((ulonglong)_DAT_181a77470 * (uVar7 & 0xffffffff) +
         (ulonglong)uVar17 * (ulonglong)_DAT_181a77460 << 0x20) +
        (ulonglong)_DAT_181a77440 * (uVar34 & 0xffffffff) +
        ((ulonglong)_DAT_181a77450 * (uVar34 & 0xffffffff) +
         (ulonglong)uVar35 * (ulonglong)_DAT_181a77440 << 0x20)) -
       ((ulonglong)uVar28 * (ulonglong)_DAT_181a77550 +
        ((uVar4 >> 0x20) * (ulonglong)_DAT_181a77550 + (ulonglong)_DAT_181a77540 * (ulonglong)uVar28
        << 0x20) +
        (uVar7 & 0xffffffff) * (ulonglong)_DAT_181a77550 +
        ((ulonglong)uVar17 * (ulonglong)_DAT_181a77550 +
         (uVar7 & 0xffffffff) * (ulonglong)_DAT_181a77540 << 0x20) +
        (uVar34 & 0xffffffff) * (ulonglong)_DAT_181a77530 +
        ((ulonglong)uVar35 * (ulonglong)_DAT_181a77530 +
         (uVar34 & 0xffffffff) * (ulonglong)_DAT_181a77520 << 0x20) +
       (ulonglong)uVar22 * (ulonglong)_DAT_181a77530 +
       ((SUB168(auVar38 ^ auVar27,0) >> 0x20) * (ulonglong)_DAT_181a77530 +
        (ulonglong)_DAT_181a77520 * (ulonglong)uVar22 << 0x20))) + 0x88d619a08ad095c;
  _DAT_18328ca90 = _DAT_18328c7d8 ^ _DAT_18328ca38 ^ _DAT_18328ca10;
  _DAT_18328c9e8 = (_DAT_18328c9e8 ^ _DAT_18328ca38) + _DAT_18328ca10 ^ 0x6f8cf68e88ba05a6;
  _DAT_18328c878 = (_DAT_18328c878 * 0x2cf914866721819f ^ _DAT_18328c9e8) + _DAT_18328ca38;
  _DAT_18328c818 = _DAT_18328c878 ^ _DAT_18328c9e8;
  uVar10 = _DAT_18328ca10 + lVar2 * -0x60bbdd1952356010;
  uVar26 = uVar3 * uVar5 * 0x6c9de2e078acaae8;
  uVar7 = uVar3 * uVar5 * -0x6c9de2e078acaae8;
  uVar4 = uVar10 ^ 0x84222325;
  uVar5 = ((_DAT_18328c870 ^ uVar4) + (uVar4 & _DAT_18328c870) * 2) * (uVar26 - _DAT_18328c728);
  uVar5 = (uVar5 | _DAT_18328c7f8) + (uVar5 & _DAT_18328c7f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018b1782d0((uVar4 ^ uVar26 | uVar5) + (uVar5 & (uVar4 ^ uVar26)));
  uVar11 = (uint)(uVar10 >> 0x20);
  auVar31._8_4_ = (int)uVar10;
  auVar31._0_8_ = uVar10;
  auVar31._12_4_ = uVar11;
  uVar17 = (uint)(uVar26 >> 0x20);
  auVar24._8_4_ = (int)uVar26;
  auVar24._0_8_ = uVar26;
  auVar24._12_4_ = uVar17;
  uVar42 = uVar10 ^ uVar26;
  uVar28 = SUB164(auVar31 & auVar24,0);
  uVar4 = SUB168(auVar31 & auVar24,0);
  uVar22 = SUB164(auVar31 | auVar24,0);
  uVar34 = SUB168(auVar31 | auVar24,0);
  uVar18 = SUB164(auVar24 ^ _DAT_18001a710,0);
  uVar10 = (((ulonglong)_DAT_181a77590 * (ulonglong)uVar22 +
             ((uVar34 >> 0x20) * (ulonglong)_DAT_181a77590 +
              (ulonglong)_DAT_181a77580 * (ulonglong)uVar22 << 0x20) +
            (ulonglong)uVar28 * (ulonglong)_DAT_181a77590 +
            ((uVar4 >> 0x20) * (ulonglong)_DAT_181a77590 +
             (ulonglong)uVar28 * (ulonglong)_DAT_181a77580 << 0x20) +
            (ulonglong)_DAT_181a77570 * (uVar26 & 0xffffffff) +
            ((ulonglong)uVar17 * (ulonglong)_DAT_181a77570 +
             (ulonglong)_DAT_181a77560 * (uVar26 & 0xffffffff) << 0x20) +
            (uVar10 & 0xffffffff) * (ulonglong)_DAT_181a77570 +
            ((ulonglong)uVar11 * (ulonglong)_DAT_181a77570 +
             (uVar10 & 0xffffffff) * (ulonglong)_DAT_181a77560 << 0x20)) -
           ((ulonglong)uVar18 * (_DAT_181a77600 & 0xffffffff) +
            ((ulonglong)_DAT_181a77670 * (ulonglong)uVar18 +
             (SUB168(auVar24 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_181a77600 & 0xffffffff) << 0x20) +
           (uVar42 & 0xffffffff) * (ulonglong)_DAT_181a77650 +
           ((ulonglong)_DAT_181a77660 * (uVar42 & 0xffffffff) +
            (uVar42 >> 0x20) * (ulonglong)_DAT_181a77650 << 0x20) +
           (ulonglong)uVar22 * (ulonglong)_DAT_181a77630 +
           ((ulonglong)_DAT_181a77640 * (ulonglong)uVar22 +
            (uVar34 >> 0x20) * (ulonglong)_DAT_181a77630 << 0x20) +
           (ulonglong)uVar28 * (ulonglong)_DAT_181a77610 +
           ((ulonglong)_DAT_181a77620 * (ulonglong)uVar28 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_181a77610 << 0x20) +
           (uVar26 & 0xffffffff) * (ulonglong)_DAT_181a775e0 +
           ((ulonglong)_DAT_181a775f0 * (uVar26 & 0xffffffff) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181a775e0 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_181a775c0 +
           ((ulonglong)_DAT_181a775d0 * (uVar10 & 0xffffffff) +
            (ulonglong)uVar11 * (ulonglong)_DAT_181a775c0 << 0x20))) - _DAT_181a77600;
  _DAT_18328c9c8 = _DAT_18328c8a8 ^ uVar5 ^ uVar10;
  _DAT_18328c938 = (_DAT_18328c938 ^ uVar5) + uVar10 ^ 0x8a9bb9b75f6cb431;
  _DAT_18328ca58 = (_DAT_18328ca58 * -0x4516dec70e70799d ^ _DAT_18328c938) + uVar5;
  _DAT_18328c908 = _DAT_18328ca58 ^ _DAT_18328c938;
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = uVar10 ^ 0x84222325;
  auVar12 = pshufb(auVar13 ^ _DAT_181a77680,_DAT_1800170c0);
  uVar4 = auVar12._8_8_ + auVar12._0_8_;
  uVar5 = uVar4 + _DAT_18328c998;
  if (auVar12._4_4_ < 0) {
    uVar5 = _DAT_18328caa8 ^ uVar4;
  }
  _DAT_18328c790 = uVar10;
  _DAT_18328ca30 = func_0x00018b1782d0(SUB161(auVar13 ^ _DAT_181a77680,5) ^ uVar5);
  auVar13 = _DAT_1800170c0;
  uVar5 = (uVar7 | uVar10) ^ _DAT_18328ca30 ^ uVar7;
  uVar22 = (uint)(uVar10 >> 0x20);
  auVar32._8_4_ = (int)uVar10;
  auVar32._0_8_ = uVar10;
  auVar32._12_4_ = uVar22;
  uVar28 = (uint)(uVar7 >> 0x20);
  auVar25._8_4_ = (int)uVar7;
  auVar25._0_8_ = uVar7;
  auVar25._12_4_ = uVar28;
  uVar17 = SUB164(auVar32 & auVar25,0);
  uVar42 = SUB168(auVar32 & auVar25,0);
  uVar18 = SUB164(auVar32 | auVar25,0);
  uVar41 = SUB168(auVar32 | auVar25,0);
  uVar11 = SUB164(auVar32 ^ auVar25,0);
  uVar34 = SUB168(auVar32 ^ auVar25,0);
  uVar33 = SUB164(auVar32 ^ _DAT_18001a710,0);
  uVar4 = SUB168(auVar32 ^ _DAT_18001a710,0);
  uVar26 = uVar9 ^ 0x84222325;
  auVar19._8_8_ = uVar8;
  auVar19._0_8_ = uVar26;
  auVar12 = pshufb(auVar19 ^ _DAT_181a77840,_DAT_1800170c0);
  uVar10 = (((_DAT_181a776d0 & 0xffffffff) * (ulonglong)uVar33 +
             ((_DAT_181a77740 & 0xffffffff) * (ulonglong)uVar33 +
              (uVar4 >> 0x20) * (_DAT_181a776d0 & 0xffffffff) << 0x20) +
            (_DAT_181a77720 & 0xffffffff) * (ulonglong)uVar11 +
            ((_DAT_181a77730 & 0xffffffff) * (ulonglong)uVar11 +
             (uVar34 >> 0x20) * (_DAT_181a77720 & 0xffffffff) << 0x20) +
            (_DAT_181a77700 & 0xffffffff) * (ulonglong)uVar18 +
            ((_DAT_181a77710 & 0xffffffff) * (ulonglong)uVar18 +
             (uVar41 >> 0x20) * (_DAT_181a77700 & 0xffffffff) << 0x20) +
            (_DAT_181a776e0 & 0xffffffff) * (ulonglong)uVar17 +
            ((_DAT_181a776f0 & 0xffffffff) * (ulonglong)uVar17 +
             (uVar42 >> 0x20) * (_DAT_181a776e0 & 0xffffffff) << 0x20) +
            (_DAT_181a776b0 & 0xffffffff) * (uVar7 & 0xffffffff) +
            ((_DAT_181a776c0 & 0xffffffff) * (uVar7 & 0xffffffff) +
             (ulonglong)uVar28 * (_DAT_181a776b0 & 0xffffffff) << 0x20) +
            (_DAT_181a77690 & 0xffffffff) * (uVar10 & 0xffffffff) +
            ((_DAT_181a776a0 & 0xffffffff) * (uVar10 & 0xffffffff) +
             (ulonglong)uVar22 * (_DAT_181a77690 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar33 * (_DAT_181a777b0 & 0xffffffff) +
            ((_DAT_181a77820 & 0xffffffff) * (ulonglong)uVar33 +
             (uVar4 >> 0x20) * (_DAT_181a777b0 & 0xffffffff) << 0x20) +
           (uVar34 & 0xffffffff) * (ulonglong)_DAT_181a77800 +
           ((_DAT_181a77810 & 0xffffffff) * (uVar34 & 0xffffffff) +
            (uVar34 >> 0x20) * (ulonglong)_DAT_181a77800 << 0x20) +
           (ulonglong)uVar18 * (ulonglong)_DAT_181a777e0 +
           ((_DAT_181a777f0 & 0xffffffff) * (ulonglong)uVar18 +
            (uVar41 >> 0x20) * (ulonglong)_DAT_181a777e0 << 0x20) +
           (ulonglong)uVar17 * (ulonglong)_DAT_181a777c0 +
           ((_DAT_181a777d0 & 0xffffffff) * (ulonglong)uVar17 +
            (uVar42 >> 0x20) * (ulonglong)_DAT_181a777c0 << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_181a77790 +
           ((_DAT_181a777a0 & 0xffffffff) * (uVar7 & 0xffffffff) +
            (ulonglong)uVar28 * (ulonglong)_DAT_181a77790 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_181a77770 +
           ((_DAT_181a77780 & 0xffffffff) * (uVar10 & 0xffffffff) +
            (ulonglong)uVar22 * (ulonglong)_DAT_181a77770 << 0x20))) + _DAT_181a77830;
  _DAT_18328c9b8 = _DAT_18328c930 ^ uVar5 ^ uVar10;
  _DAT_18328c728 = (_DAT_18328c728 ^ uVar5) + uVar10 ^ 0x8c755f689e0cde9f;
  _DAT_18328c788 = (_DAT_18328c788 * -0x579ac876bd8675ef ^ _DAT_18328c728) + uVar5;
  _DAT_18328c7d0 = _DAT_18328c788 ^ _DAT_18328c728;
  uVar7 = auVar12._8_8_ + auVar12._0_8_;
  uVar5 = uVar9 + uVar8;
  uVar4 = uVar7 + _DAT_18328c750;
  if (auVar12._4_4_ < 0) {
    uVar4 = _DAT_18328cac0 ^ uVar7;
  }
  _DAT_18328ca88 = uVar10;
  _DAT_18328c818 = func_0x00018b1782d0(SUB161(auVar19 ^ _DAT_181a77840,5) ^ uVar4);
  uVar4 = ~((uVar9 | uVar8) ^ _DAT_18328c818) & uVar9;
  uVar7 = uVar9 & uVar8;
  _DAT_18328c7c0 = uVar5 + uVar7 * -2;
  _DAT_18328c700 = (_DAT_18328c700 ^ uVar4) + _DAT_18328c7c0 ^ 0xb8447db224410508;
  _DAT_18328c988 = (_DAT_18328c988 * 0x7de7d9380340305 ^ _DAT_18328c700) + uVar4;
  _DAT_18328ca20 = _DAT_18328c988 ^ _DAT_18328c700;
  uVar4 = ((_DAT_18328c908 ^ uVar26) + (uVar26 & _DAT_18328c908) * 2) * (uVar8 - _DAT_18328c9b0);
  uVar4 = (uVar4 | _DAT_18328c9c8) + (uVar4 & _DAT_18328c9c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18328c750 = func_0x00018b1782d0((uVar8 ^ uVar26 | uVar4) + (uVar4 & (uVar8 ^ uVar26)));
  _DAT_18328c760 = (_DAT_18328c760 ^ _DAT_18328c750) + uVar7 ^ 0xd407334eec801854;
  _DAT_18328ca80 = (_DAT_18328ca80 * 0x1cc2abef84267ad ^ _DAT_18328c760) + _DAT_18328c750;
  _DAT_18328c858 = _DAT_18328ca80 ^ _DAT_18328c760;
  auVar14._8_8_ = uVar5;
  auVar14._0_8_ = uVar5 ^ 0x84222325;
  auVar13 = pshufb(auVar14 ^ _DAT_181a77850,auVar13);
  uVar8 = auVar13._8_8_ + auVar13._0_8_;
  uVar4 = uVar8 + _DAT_18328cae8;
  if (auVar13._4_4_ < 0) {
    uVar4 = _DAT_18328c9d0 ^ uVar8;
  }
  _DAT_18328ca40 = uVar7;
  _DAT_18328ca80 = func_0x00018b1782d0(SUB161(auVar14 ^ _DAT_181a77850,5) ^ uVar4);
  uVar4 = _DAT_18328ca80 ^ uVar5;
  uVar17 = (uint)(uVar5 >> 0x20);
  auVar15._8_4_ = (int)uVar5;
  auVar15._0_8_ = uVar5;
  auVar15._12_4_ = uVar17;
  uVar11 = SUB164(auVar15 ^ _DAT_18001a710,0);
  uVar8 = SUB168(auVar15 ^ _DAT_18001a710,0);
  uVar7 = (((ulonglong)_DAT_181a778a0 * (ulonglong)uVar11 +
            ((ulonglong)_DAT_181a778f0 * (ulonglong)uVar11 +
             (uVar8 >> 0x20) * (ulonglong)_DAT_181a778a0 << 0x20) +
           (ulonglong)_DAT_181a778d0 * (uVar5 & 0xffffffff) +
           ((ulonglong)_DAT_181a778e0 * (uVar5 & 0xffffffff) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181a778d0 << 0x20) +
           (ulonglong)_DAT_181a778b0 * (uVar5 & 0xffffffff) +
           ((ulonglong)_DAT_181a778c0 * (uVar5 & 0xffffffff) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181a778b0 << 0x20) +
           (ulonglong)_DAT_181a77880 * (uVar5 & 0xffffffff) +
           ((ulonglong)_DAT_181a77890 * (uVar5 & 0xffffffff) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181a77880 << 0x20) +
           (ulonglong)_DAT_181a77860 * (uVar5 & 0xffffffff) +
           ((ulonglong)_DAT_181a77870 * (uVar5 & 0xffffffff) +
            (ulonglong)uVar17 * (ulonglong)_DAT_181a77860 << 0x20)) -
          ((ulonglong)uVar11 * (_DAT_181a77960 & 0xffffffff) +
           ((ulonglong)_DAT_181a779b0 * (ulonglong)uVar11 +
            (uVar8 >> 0x20) * (_DAT_181a77960 & 0xffffffff) << 0x20) +
          (uVar5 & 0xffffffff) * (_DAT_181a77990 & 0xffffffff) +
          ((ulonglong)_DAT_181a779a0 * (uVar5 & 0xffffffff) +
           (ulonglong)uVar17 * (_DAT_181a77990 & 0xffffffff) << 0x20) +
          (ulonglong)_DAT_181a77970 * (uVar5 & 0xffffffff) +
          ((ulonglong)_DAT_181a77980 * (uVar5 & 0xffffffff) +
           (ulonglong)uVar17 * (ulonglong)_DAT_181a77970 << 0x20) +
          (ulonglong)_DAT_181a77940 * (uVar5 & 0xffffffff) +
          ((ulonglong)_DAT_181a77950 * (uVar5 & 0xffffffff) +
           (ulonglong)uVar17 * (ulonglong)_DAT_181a77940 << 0x20) +
          (ulonglong)_DAT_181a77920 * (uVar5 & 0xffffffff) +
          ((ulonglong)_DAT_181a77930 * (uVar5 & 0xffffffff) +
           (ulonglong)uVar17 * (ulonglong)_DAT_181a77920 << 0x20))) + _DAT_181a779c0;
  _DAT_18328c9f8 = uVar7 ^ uVar4;
  _DAT_18328ca40 = (_DAT_18328ca40 ^ uVar4) + uVar7 ^ 0x1a4034c644f76a21;
  _DAT_18328ca58 = (_DAT_18328ca58 * -0x64ee6b96dffa41e7 ^ _DAT_18328ca40) + uVar4;
  _DAT_18328c7e0 = _DAT_18328ca58 ^ _DAT_18328ca40;
  uVar4 = uVar10 ^ 0x84222325;
  uVar5 = ((_DAT_18328c9a0 ^ uVar4) + (uVar4 & _DAT_18328c9a0) * 2) * (uVar7 - _DAT_18328cad8);
  uVar5 = (uVar5 | _DAT_18328c800) + (uVar5 & _DAT_18328c800);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18328c738 = uVar7;
  _DAT_18328c758 = func_0x00018b1782d0((uVar4 ^ uVar7 | uVar5) + (uVar5 & (uVar4 ^ uVar7)));
  uVar5 = (uVar10 | uVar7) ^ _DAT_18328c758;
  uVar5 = (uVar5 << 0x37 | uVar5 >> 9) ^ uVar10;
  uVar18 = (uint)(uVar10 >> 0x20);
  auVar40._8_4_ = (int)uVar10;
  auVar40._0_8_ = uVar10;
  auVar40._12_4_ = uVar18;
  uVar28 = (uint)(uVar7 >> 0x20);
  auVar20._8_4_ = (int)uVar7;
  auVar20._0_8_ = uVar7;
  auVar20._12_4_ = uVar28;
  auVar12 = auVar40 & auVar20;
  auVar13 = auVar40 | auVar20;
  auVar39 = auVar40 ^ auVar20;
  uVar4 = auVar40._8_8_;
  uVar8 = auVar20._8_8_ >> 0x20;
  uVar22 = auVar12._0_4_;
  uVar34 = auVar12._8_8_;
  uVar11 = auVar13._0_4_;
  uVar17 = auVar13._8_4_;
  uVar42 = auVar13._8_8_ >> 0x20;
  auVar40 = auVar40 ^ _DAT_18001a710;
  auVar37._0_8_ =
       (((ulonglong)auVar39._0_4_ * (ulonglong)_DAT_181a77a30 +
         ((_DAT_181a77a40 & 0xffffffff) * (ulonglong)auVar39._0_4_ +
          (auVar39._0_8_ >> 0x20) * (ulonglong)_DAT_181a77a30 << 0x20) +
         (_DAT_181a77a10 & 0xffffffff) * (ulonglong)uVar11 +
         ((_DAT_181a77a20 & 0xffffffff) * (ulonglong)uVar11 +
          (auVar13._0_8_ >> 0x20) * (_DAT_181a77a10 & 0xffffffff) << 0x20) +
        (_DAT_181a779f0 & 0xffffffff) * (ulonglong)uVar22 +
        ((_DAT_181a77a00 & 0xffffffff) * (ulonglong)uVar22 +
         (auVar12._0_8_ >> 0x20) * (_DAT_181a779f0 & 0xffffffff) << 0x20) +
        (_DAT_181a779e0 & 0xffffffff) * (uVar7 & 0xffffffff) +
        ((ulonglong)uVar28 * (_DAT_181a779e0 & 0xffffffff) +
         (_DAT_181a779d0 & 0xffffffff) * (uVar7 & 0xffffffff) << 0x20) +
        (uVar10 & 0xffffffff) * (_DAT_181a779e0 & 0xffffffff) +
        ((ulonglong)uVar18 * (_DAT_181a779e0 & 0xffffffff) +
         (uVar10 & 0xffffffff) * (_DAT_181a779d0 & 0xffffffff) << 0x20)) -
       ((ulonglong)auVar40._0_4_ * (_DAT_181a77ab0 & 0xffffffff) +
        ((_DAT_181a77ae0 & 0xffffffff) * (ulonglong)auVar40._0_4_ +
         (auVar40._0_8_ >> 0x20) * (_DAT_181a77ab0 & 0xffffffff) << 0x20) +
       (ulonglong)uVar11 * (ulonglong)_DAT_181a77ad0 +
       ((auVar13._0_8_ >> 0x20) * (ulonglong)_DAT_181a77ad0 +
        (_DAT_181a77ac0 & 0xffffffff) * (ulonglong)uVar11 << 0x20) +
       (ulonglong)uVar22 * (ulonglong)_DAT_181a77ad0 +
       ((auVar12._0_8_ >> 0x20) * (ulonglong)_DAT_181a77ad0 +
        (ulonglong)uVar22 * (_DAT_181a77ac0 & 0xffffffff) << 0x20) +
       (uVar7 & 0xffffffff) * (ulonglong)_DAT_181a77a90 +
       ((_DAT_181a77aa0 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar28 * (ulonglong)_DAT_181a77a90 << 0x20) +
       (uVar10 & 0xffffffff) * (ulonglong)_DAT_181a77a70 +
       ((_DAT_181a77a80 & 0xffffffff) * (uVar10 & 0xffffffff) +
        (ulonglong)uVar18 * (ulonglong)_DAT_181a77a70 << 0x20))) - _DAT_181a77ab0;
  auVar37._8_8_ =
       (((auVar39._8_8_ & 0xffffffff) * (ulonglong)_UNK_181a77a38 +
         ((_UNK_181a77a48 & 0xffffffff) * (ulonglong)auVar39._8_4_ +
          (auVar39._8_8_ >> 0x20) * (ulonglong)_UNK_181a77a38 << 0x20) +
         (_UNK_181a77a18 & 0xffffffff) * (ulonglong)uVar17 +
         ((_UNK_181a77a28 & 0xffffffff) * (ulonglong)uVar17 + uVar42 * (_UNK_181a77a18 & 0xffffffff)
         << 0x20) +
        (_UNK_181a779f8 & 0xffffffff) * (ulonglong)auVar12._8_4_ +
        ((_UNK_181a77a08 & 0xffffffff) * (ulonglong)auVar12._8_4_ +
         (uVar34 >> 0x20) * (_UNK_181a779f8 & 0xffffffff) << 0x20) +
        (_UNK_181a779e8 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (uVar8 * (_UNK_181a779e8 & 0xffffffff) +
         (_UNK_181a779d8 & 0xffffffff) * (uVar7 & 0xffffffff) << 0x20) +
        (uVar4 & 0xffffffff) * (_UNK_181a779e8 & 0xffffffff) +
        ((uVar4 >> 0x20) * (_UNK_181a779e8 & 0xffffffff) +
         (uVar4 & 0xffffffff) * (_UNK_181a779d8 & 0xffffffff) << 0x20)) -
       ((auVar40._8_8_ & 0xffffffff) * (_UNK_181a77ab8 & 0xffffffff) +
        ((_UNK_181a77ae8 & 0xffffffff) * (ulonglong)auVar40._8_4_ +
         (auVar40._8_8_ >> 0x20) * (_UNK_181a77ab8 & 0xffffffff) << 0x20) +
       (auVar13._8_8_ & 0xffffffff) * (ulonglong)_UNK_181a77ad8 +
       (uVar42 * _UNK_181a77ad8 + (_UNK_181a77ac8 & 0xffffffff) * (ulonglong)uVar17 << 0x20) +
       (uVar34 & 0xffffffff) * (ulonglong)_UNK_181a77ad8 +
       ((uVar34 >> 0x20) * (ulonglong)_UNK_181a77ad8 +
        (uVar34 & 0xffffffff) * (_UNK_181a77ac8 & 0xffffffff) << 0x20) +
       (auVar20._8_8_ & 0xffffffff) * (ulonglong)_UNK_181a77a98 +
       ((_UNK_181a77aa8 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar8 * _UNK_181a77a98 << 0x20) +
       (uVar4 & 0xffffffff) * (ulonglong)_UNK_181a77a78 +
       ((_UNK_181a77a88 & 0xffffffff) * (uVar10 & 0xffffffff) +
        (uVar4 >> 0x20) * (ulonglong)_UNK_181a77a78 << 0x20))) - _UNK_181a77ab8;
  _DAT_18328c928 = _DAT_18328c880 ^ uVar5 ^ auVar37._0_8_;
  _DAT_18328c960 = (_DAT_18328c960 ^ uVar5) + auVar37._0_8_ ^ 0x55bdf83caf8c9f13;
  _DAT_18328ca78 = (_DAT_18328ca78 * 0x9c55a5fad5b45a5 ^ _DAT_18328c960) + uVar5;
  _DAT_18328c798 = _DAT_18328ca78 ^ _DAT_18328c960;
  uVar5 = ~_DAT_18328c790 * ((_DAT_18328c7a8 ^ uVar26) + (uVar26 & _DAT_18328c7a8) * 2);
  uVar5 = (uVar5 | _DAT_18328c7d8) + (uVar5 & _DAT_18328c7d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18328c9c8 = auVar37._0_8_;
  _DAT_18328c9b0 = func_0x00018b1782d0((~uVar26 | uVar5) + (uVar5 & ~uVar26));
  uVar5 = ~uVar9;
  _DAT_18328c738 =
       (_DAT_18328c738 ^ _DAT_18328c9b0 & 0x1fffffffffffffff) + uVar5 ^ 0xd646ea4d19573e16;
  _DAT_18328c918 =
       (_DAT_18328c918 * 0x38fb8e4b032dba53 ^ _DAT_18328c738) +
       (_DAT_18328c9b0 & 0x1fffffffffffffff);
  _DAT_18328ca40 = _DAT_18328c918 ^ _DAT_18328c738;
  uVar4 = (uVar26 ^ _DAT_18328c8f8) + uVar26 + _DAT_18328c9f0;
  uVar8 = (uVar5 ^ _DAT_18328c9f0) + _DAT_18328c8f8 + uVar5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar26 ^ _DAT_18328c8f8;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5 ^ _DAT_18328c9f0;
  _DAT_18328ca58 = uVar5;
  _DAT_18328ca00 =
       func_0x00018b1782d0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18328c8f8 + uVar5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uVar26 + _DAT_18328c9f0));
  uVar5 = uVar5 * uVar9 ^ _DAT_18328ca00;
  uVar5 = uVar5 << 0x26 | uVar5 >> 0x1a;
  _DAT_18328c970 = _DAT_18328c970 ^ uVar5 ^ 0xdb3735098f5578e9;
  _DAT_18328c9e8 = (_DAT_18328c9e8 * 0x3c521891009bb385 ^ _DAT_18328c970) + uVar5;
  _DAT_18328c980 = _DAT_18328c9e8 ^ _DAT_18328c970;
  _DAT_18328c998 = 0;
  uVar4 = auVar37._0_8_ ^ 0x84222325;
  uVar5 = ((_DAT_18328cac8 ^ uVar4) + (uVar4 & _DAT_18328cac8) * 2) * -_DAT_18328c840;
  uVar5 = (uVar5 | _DAT_18328c7f8) + (uVar5 & _DAT_18328c7f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18328ca50 = func_0x00018b1782d0((uVar5 | uVar4) + (uVar5 & uVar4));
  uVar5 = _DAT_18328ca50 << 0x34 | _DAT_18328ca50 >> 0xc;
  auVar21._8_4_ = 0xffffffff;
  auVar21._0_8_ = 0xffffffffffffffff;
  auVar21._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar21 ^ auVar37,0);
  uVar4 = (((ulonglong)_DAT_181a77b10 * (auVar37._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_181a77b20 * (auVar37._0_8_ & 0xffffffff) +
             (auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_181a77b10 << 0x20) +
           (ulonglong)_DAT_181a77af0 * (auVar37._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_181a77b00 * (auVar37._0_8_ & 0xffffffff) +
            (auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_181a77af0 << 0x20)) -
          ((ulonglong)uVar11 * (ulonglong)_DAT_181a77b70 +
           ((ulonglong)_DAT_181a77b80 * (ulonglong)uVar11 +
            (SUB168(auVar21 ^ auVar37,0) >> 0x20) * (ulonglong)_DAT_181a77b70 << 0x20) +
          (auVar37._0_8_ & 0xffffffff) * (ulonglong)_DAT_181a77b50 +
          ((ulonglong)_DAT_181a77b60 * (auVar37._0_8_ & 0xffffffff) +
           (auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_181a77b50 << 0x20) +
          (ulonglong)_DAT_181a77b30 * (auVar37._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_181a77b40 * (auVar37._0_8_ & 0xffffffff) +
           (auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_181a77b30 << 0x20))) + 0xdae4cab2146703d9;
  _DAT_18328ca68 = _DAT_18328c8a8 ^ uVar5 ^ uVar4;
  _DAT_18328c7b8 = (_DAT_18328c7b8 ^ uVar5) + uVar4 ^ 0x1c85032cc36fff4;
  _DAT_18328c760 = (_DAT_18328c760 * -0x305bf092b2f74f9b ^ _DAT_18328c7b8) + uVar5;
  _DAT_18328c8e8 = _DAT_18328c760 ^ _DAT_18328c7b8;
  auVar16._8_8_ = uVar3;
  auVar16._0_8_ = uStack0000000000000070;
  auVar13 = pshufb(auVar16 ^ _DAT_181a77b90,_DAT_1800170c0);
  uVar8 = auVar13._8_8_ + auVar13._0_8_;
  uVar5 = uVar8 + _DAT_18328ca30;
  if (auVar13._4_4_ < 0) {
    uVar5 = _DAT_18328c9e8 ^ uVar8;
  }
  _DAT_18328c8e0 = uVar4;
  _DAT_18328cac0 = func_0x00018b1782d0(SUB161(auVar16 ^ _DAT_181a77b90,5) ^ uVar5);
  _DAT_18328ca58 = _DAT_18328ca58 ^ _DAT_18328cac0 & uVar3 ^ 0x44beb1f16f056681;
  _DAT_18328ca78 = (_DAT_18328ca78 * 0x4a9e5577e67f92ef ^ _DAT_18328ca58) + (_DAT_18328cac0 & uVar3)
  ;
  _DAT_18328c7f8 = _DAT_18328ca78 ^ _DAT_18328ca58;
  _DAT_18328c978 = 0;
  uVar5 = in_stack_00000078 ^ 0x84222325;
  uVar3 = ((_DAT_18328c7f0 ^ uVar5) + (uVar5 & _DAT_18328c7f0) * 2) * (uVar4 - _DAT_18328c938);
  uVar3 = (uVar3 | _DAT_18328c8a0) + (uVar3 & _DAT_18328c8a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18328c880 = func_0x00018b1782d0((uVar5 ^ uVar4 | uVar3) + (uVar3 & (uVar5 ^ uVar4)));
  uVar3 = (in_stack_00000078 * uVar4 ^ _DAT_18328c880) * 0x313a80595ab85a4d;
  _DAT_18328c720 = uVar4 ^ in_stack_00000078;
  _DAT_18328c800 = (_DAT_18328c800 ^ uVar3) + _DAT_18328c720 ^ 0x5f6f5a2577e68ba0;
  _DAT_18328c928 = (_DAT_18328c928 * -0x316a17068d05e553 ^ _DAT_18328c800) + uVar3;
  _DAT_18328c9b0 = _DAT_18328c928 ^ _DAT_18328c800;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x8e00,0x18d);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b1780cd (image 18b1780cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1780cd(void)

{
  (*_DAT_181a77208)();
  return;
}



// ===== continuation @ rva b17799b (image 18b17799b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b17799b(void)

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



// ===== continuation @ rva b177b0d (image 18b177b0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b177b0d(void)

{
  (*_DAT_181a771c8)();
  return;
}



// ===== continuation @ rva b17a4ed (image 18b17a4ed) =====

void FUN_18b17a4ed(void)

{
  return;
}



// ===== continuation @ rva b178416 (image 18b178416) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b178416(void)

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



// ===== continuation @ rva b1f94dc (image 18b1f94dc) =====

void FUN_18b1f94dc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva b182a3a (image 18b182a3a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b182a3a(void)

{
  char cVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))(*(undefined8 *)(unaff_RBP + 0x120));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b1b130b (image 18b1b130b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b1b1365 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b1b130b(void)

{
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))(*(undefined8 *)(unaff_RBP + 0x120));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b1a879f (image 18b1a879f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b1a87bd */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b1a879f(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x120));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b1f93cb (image 18b1f93cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b1f93e6 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b1f93cb(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x120));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b1ac96d (image 18b1ac96d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b1ac9b9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b1ac96d(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0xf8) = uVar1;
  (**(code **)(*unaff_RDI + 0x720))(*(undefined8 *)(unaff_RBP + 0x120));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b1f1c89 (image 18b1f1c89) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b1f1cb8 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b1f1c89(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



