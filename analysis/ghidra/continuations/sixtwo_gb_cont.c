// ===== continuation @ rva a704419 (image 18a704419) =====

void FUN_18a704419(void)

{
  return;
}



// ===== continuation @ rva a702cfc (image 18a702cfc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a702cfc(void)

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



// ===== continuation @ rva a702eb6 (image 18a702eb6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a702eb6(void)

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



// ===== continuation @ rva a704522 (image 18a704522) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a704522(void)

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



// ===== continuation @ rva a703105 (image 18a703105) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a703105(void)

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



// ===== continuation @ rva a703193 (image 18a703193) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a703193(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  
  uVar1 = (~_DAT_183256038 + 2) *
          ((_DAT_183255fa0 ^ in_RAX) + (ulonglong)((uint)in_RAX & (uint)_DAT_183255fa0) * 2);
  uVar1 = (uVar1 | _DAT_183255e58) + (uVar1 & _DAT_183255e58);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183255d38 =
       func_0x00018a704ef0((in_RAX ^ 1 | uVar1) + (ulonglong)((uint)(in_RAX ^ 1) & (uint)uVar1));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = unaff_RDI;
  auVar4._8_4_ = 0xffffffff;
  auVar4._0_8_ = 0xffffffffffffffff;
  auVar4._12_4_ = 0xffffffff;
  uVar8 = (uint)unaff_RDI & (uint)DAT_18001a990;
  uVar3 = SUB164(auVar4 ^ auVar7,0);
  uVar1 = _DAT_183255d38 ^ unaff_RDI;
  uVar1 = (uVar1 << 0x21 | uVar1 >> 0x1f) << 0x10 | (uVar1 & 0x7fffffff) >> 0xf;
  uVar5 = SUB164(_DAT_18001a990 | auVar7,0);
  uVar2 = (((ulonglong)uVar3 * (ulonglong)_DAT_181867520 +
            ((SUB168(auVar4 ^ auVar7,0) >> 0x20) * (ulonglong)_DAT_181867520 +
             (ulonglong)_DAT_181867500 * (ulonglong)uVar3 << 0x20) +
           (ulonglong)_DAT_181867510 * (unaff_RDI & 0xffffffff) +
           ((unaff_RDI >> 0x20) * (ulonglong)_DAT_181867510 +
            (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_181867500 << 0x20)) -
          ((ulonglong)uVar5 * (_DAT_181867570 & 0xffffffff) +
           ((SUB168(_DAT_18001a990 | auVar7,0) >> 0x20) * (_DAT_181867570 & 0xffffffff) +
            (ulonglong)_DAT_181867580 * (ulonglong)uVar5 << 0x20) +
          ((ulonglong)uVar8 * (ulonglong)_DAT_181867580 << 0x20 |
          (ulonglong)uVar8 * (_DAT_181867570 & 0xffffffff)) +
          ((unaff_RDI & 0xffffffff) * (ulonglong)_DAT_181867560 +
           (unaff_RDI >> 0x20) * (ulonglong)_DAT_181867550 << 0x20) +
          (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_181867550)) + 0x60fbdd46c043c73b;
  _DAT_183255c80 = _DAT_183256128 ^ uVar1 ^ uVar2;
  _DAT_183256068 = (_DAT_183256068 ^ uVar1) + uVar2 ^ 0x39c6d27bef3088b0;
  _DAT_183255c90 = (_DAT_183255c90 * -0x53b6235d89954e1d ^ _DAT_183256068) + uVar1;
  _DAT_183255fe8 = _DAT_183255c90 ^ _DAT_183256068;
  _DAT_1832562f0 = uVar2 & 0xffffffff;
  _DAT_183255e10 = func_0x00018a704ef0(_DAT_183256208 + 0xffb3000419002eff ^ 1);
  uVar1 = (ulonglong)(~(uint)_DAT_183255e10 & 0xc33c9753);
  _DAT_183255f18 = (_DAT_183255f18 ^ uVar1) + 0xfb3ff7df ^ 0x5c5dba67b9d018f8;
  _DAT_183255f88 = (_DAT_183255f88 * 0x691a7a09b734fc15 ^ _DAT_183255f18) + uVar1;
  _DAT_183256098 = _DAT_183255f88 ^ _DAT_183255f18;
  _DAT_183256088 = 0xfb3ff7df;
  _DAT_183256170 = func_0x00018a704ef0(_DAT_183256010 + 0x33ff9261ff65ff ^ 0x28);
  _DAT_183255c18 = (_DAT_183255c18 ^ _DAT_183256170 ^ 0xb7ec6fef) + 0x16c86fc7 ^ 0x5eaf04565d2db203;
  _DAT_183255e80 =
       (_DAT_183255e80 * 0x47b69f54e46aeba3 ^ _DAT_183255c18) + (_DAT_183256170 ^ 0xb7ec6fef);
  _DAT_183255b80 = _DAT_183255e80 ^ _DAT_183255c18;
  _DAT_183255ea0 = 0x16c86fc7;
  _DAT_1832561f0 = func_0x00018a704ef0(_DAT_183255ce0 ^ 0x3b00a2f9000c9b);
  uVar1 = (ulonglong)(((uint)_DAT_1832561f0 & 0x40) << 0xd);
  _DAT_183256108 = _DAT_183255e40 ^ uVar1 ^ 0x27d7f85c;
  _DAT_1832560b0 = (_DAT_1832560b0 ^ uVar1) + 0x27d7f85c ^ 0xed66d36c89350bf4;
  _DAT_183255c60 = (_DAT_183255c60 * 0x7512d7b8edc7fb69 ^ _DAT_1832560b0) + uVar1;
  _DAT_183256088 = _DAT_183255c60 ^ _DAT_1832560b0;
  _DAT_183255e58 = 0x27d7f85c;
  uVar1 = (~_DAT_1832561a8 + 0x81b01e01) *
          ((_DAT_1832562f8 ^ 0xfa6dc165) + (ulonglong)((uint)_DAT_1832562f8 & 0xfa6dc165) * 2);
  uVar1 = (uVar1 | _DAT_183256290) + (uVar1 & _DAT_183256290);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183256220 = func_0x00018a704ef0((uVar1 | 0x7bdddf65) + (ulonglong)((uint)uVar1 & 0x7bdddf65))
  ;
  uVar1 = _DAT_183256220 << 0xd | _DAT_183256220 >> 0x33;
  _DAT_183255fc8 = _DAT_1832561a8 ^ uVar1 ^ 0x100000040;
  _DAT_183255ed8 = (_DAT_183255ed8 ^ uVar1) + 0x100000040 ^ 0x458b1401464e615a;
  _DAT_183256208 = (_DAT_183256208 * 0x278c40a9243f9adf ^ _DAT_183255ed8) + uVar1;
  _DAT_183255d38 = _DAT_183256208 ^ _DAT_183255ed8;
  _DAT_183255e70 = 0x40;
  uVar1 = (~_DAT_183255c88 + 0xf7617cd9) *
          ((_DAT_183255b78 ^ 0x84222325) + (ulonglong)((uint)_DAT_183255b78 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183255e00) + (uVar1 & _DAT_183255e00);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183256038 = func_0x00018a704ef0((uVar1 | 0x73435ffd) + (ulonglong)((uint)uVar1 & 0x73435ffd))
  ;
  _DAT_183255db8 = (_DAT_183255db8 ^ _DAT_183256038 ^ 0xf7617cd8) - 0xf7617cd8 ^ 0x1dfad5a9b21b35c9;
  _DAT_183255c08 =
       (_DAT_183255c08 * -0x1940d720081a273f ^ _DAT_183255db8) + (_DAT_183256038 ^ 0xf7617cd8);
  _DAT_183255c80 = _DAT_183255c08 ^ _DAT_183255db8;
  _DAT_183255ce0 = 0x89e8328;
  uVar1 = (~_DAT_183255c90 + 0xf7617cd9) *
          ((_DAT_183255f50 ^ 0x84222365) + (ulonglong)((uint)_DAT_183255f50 & 0x84222365) * 2);
  uVar1 = (uVar1 | _DAT_183256240) + (uVar1 & _DAT_183256240);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183256048 = func_0x00018a704ef0((uVar1 | 0x73435fbd) + (ulonglong)((uint)uVar1 & 0x73435fbd))
  ;
  _DAT_183255f88 = _DAT_183255db8 ^ _DAT_183256048 ^ 0xf7617d18;
  _DAT_183255bd8 = (_DAT_183255bd8 ^ _DAT_183256048) + 0xf7617d18 ^ 0xd05fd78a1b3eb252;
  _DAT_183256040 = (_DAT_183256040 * 0x31d819f94e83e8a1 ^ _DAT_183255bd8) + _DAT_183256048;
  _DAT_183256050 = _DAT_183256040 ^ _DAT_183255bd8;
  _DAT_183255c88 = 0xf7617d18;
  uVar1 = (_DAT_183255d50 ^ _DAT_181867590) + _DAT_183256120 + 0x73435e3d;
  uVar6 = (_DAT_183256120 ^ _UNK_181867598) + _DAT_183255d50 + 0x89e8328;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183255d50 ^ _DAT_181867590;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183256120 ^ _UNK_181867598;
  _DAT_183255ee8 =
       func_0x00018a704ef0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183255d50 + 0x89e8328) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183256120 + 0x73435e3d));
  uVar1 = _DAT_183255ee8 << 0x33 | _DAT_183255ee8 >> 0xd;
  _DAT_183255eb0 = _DAT_183255da0 ^ uVar1 ^ 0x100000040;
  _DAT_1832561c8 = (_DAT_1832561c8 ^ uVar1) + 0x100000040 ^ 0x71c213cd6bf03d3d;
  _DAT_183256070 = (_DAT_183256070 * 0x3e15d0e6acd98667 ^ _DAT_1832561c8) + uVar1;
  _DAT_183256018 = _DAT_183256070 ^ _DAT_1832561c8;
  _DAT_183255c80 = 0x40;
  _DAT_183255c40 = func_0x00018a704ef0(_DAT_1832560e8 ^ 0xffbaff98e300d427);
  _DAT_183255f68 = _DAT_183255c78 ^ _DAT_183255c40 ^ 0x1120867a6;
  _DAT_183255e10 = (_DAT_183255e10 ^ _DAT_183255c40) + 0x1120867a6 ^ 0x46d0544c353d04d9;
  _DAT_183256248 = (_DAT_183256248 * 0x2bdc17c782fc5d4f ^ _DAT_183255e10) + _DAT_183255c40;
  _DAT_1832562f0 = _DAT_183256248 ^ _DAT_183255e10;
  _DAT_183255e70 = 0x120867a6;
  _DAT_183256168 = func_0x00018a704ef0(_DAT_183255de0 + 0xff76ffe8d300aaffU ^ 0x70);
  uVar1 = (_DAT_183256168 ^ 0xffffffdf) << 0x30 | (_DAT_183256168 ^ 0xffffffdf) >> 0x10;
  _DAT_183255eb8 = (_DAT_183255eb8 ^ uVar1) + 0xedf79818 ^ 0x6d92baa7c2daca43;
  _DAT_183255fb8 = (_DAT_183255fb8 * -0x24de36a4eef2b04d ^ _DAT_183255eb8) + uVar1;
  _DAT_183256190 = _DAT_183255fb8 ^ _DAT_183255eb8;
  _DAT_1832561e0 = 0xedf79818;
  uVar1 = (~_DAT_183255c38 + 0x16c86fc8) *
          ((_DAT_183255ca0 ^ 0x7f1dd4fa) + (ulonglong)((uint)_DAT_183255ca0 & 0x7f1dd4fa) * 2);
  uVar1 = (uVar1 | _DAT_183255df0) + (uVar1 & _DAT_183255df0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183255f58 = func_0x00018a704ef0((uVar1 | 0x69d5bb3d) + (ulonglong)((uint)uVar1 & 0x69d5bb3d))
  ;
  _DAT_183256010 =
       (_DAT_183256010 ^ _DAT_183255f58 * -0x1e6413ed7df39649) + 0x120867c7 ^ 0x820a167e64b97d9b;
  _DAT_1832562b0 =
       (_DAT_1832562b0 * -0x50fe37ed51a4b931 ^ _DAT_183256010) +
       _DAT_183255f58 * -0x1e6413ed7df39649;
  _DAT_183255fe8 = _DAT_1832562b0 ^ _DAT_183256010;
  _DAT_183255d00 = 0x120867c7;
  uVar1 = (~_DAT_183255d18 + 0x2410cf8f) *
          ((_DAT_183256258 ^ 0x69d5bb3d) + (ulonglong)((uint)_DAT_183256258 & 0x69d5bb3d) * 2);
  uVar1 = (uVar1 | _DAT_183256190) + (uVar1 & _DAT_183256190);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183255f98 = func_0x00018a704ef0((uVar1 | 0x4dc574b3) + (ulonglong)((uint)uVar1 & 0x4dc574b3))
  ;
  uVar1 = (ulonglong)(~(uint)_DAT_183255f98 & 0xedf79818) * 0x20000;
  _DAT_183255d30 = _DAT_183255d88 ^ uVar1 ^ 0x1120867a6;
  _DAT_1832561f0 = (_DAT_1832561f0 ^ uVar1) + 0x1120867a6 ^ 0x56bdfdcb564a5ba;
  _DAT_183255bd0 = (_DAT_183255bd0 * -0x23d2966dd4044cfb ^ _DAT_1832561f0) + uVar1;
  _DAT_183255f48 = _DAT_183255bd0 ^ _DAT_1832561f0;
  _DAT_183255e18 = 0x120867a6;
  uVar1 = (_DAT_1832562e0 ^ _DAT_1818675a0) + _DAT_183255c70 + 0x962a4483;
  uVar6 = (_DAT_183255c70 ^ _UNK_1818675a8) + _DAT_1832562e0 + 0x120867a6;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832562e0 ^ _DAT_1818675a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183255c70 ^ _UNK_1818675a8;
  _DAT_1832560e0 =
       func_0x00018a704ef0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832562e0 + 0x120867a6) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183255c70 + 0x962a4483));
  _DAT_183256068 = _DAT_1832560e0 * 0x6f56ee369dc1052b;
  _DAT_183255cb8 = _DAT_183255cb8 ^ _DAT_183256068 ^ 0xc38244fbb06d82e5;
  _DAT_183255d40 = (_DAT_183255d40 * -0x582d626ca20e1c7d ^ _DAT_183255cb8) + _DAT_183256068;
  _DAT_183255c40 = _DAT_183255d40 ^ _DAT_183255cb8;
  _DAT_183255b88 = 0;
  uVar1 = (_DAT_183256138 ^ 0x84222365) + _DAT_183255e38 + 0x84222365;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183256138 ^ 0x84222365;
  uVar6 = ((_DAT_183255e38 + _DAT_183256138) * 0x2000 | _DAT_183255e38 + _DAT_183256138 >> 0x33) ^
          _DAT_183255e38;
  _DAT_183255b88 =
       func_0x00018a704ef0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183256138 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183255e38 + 0x84222365));
  _DAT_183255fc8 = _DAT_183255f98 ^ _DAT_183255b88 ^ 0x40;
  _DAT_183256010 = (_DAT_183256010 ^ _DAT_183255b88) + 0x40 ^ 0xdb2afcd0bfccd09;
  _DAT_183255d98 = (_DAT_183255d98 * -0x40a240969ae57947 ^ _DAT_183256010) + _DAT_183255b88;
  _DAT_183255ee8 = _DAT_183255d98 ^ _DAT_183256010;
  _DAT_183256120 = 0x40;
  uVar1 = (_DAT_183255ed8 ^ _DAT_1818675b0) + _DAT_183255cb0 + 0x7f1dd4fa;
  uVar6 = (_DAT_183255cb0 ^ _UNK_1818675b8) + _DAT_183255ed8 + 0xffffffff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183255ed8 ^ _DAT_1818675b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183255cb0 ^ _UNK_1818675b8;
  _DAT_183255f30 =
       func_0x00018a704ef0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183255ed8 + 0xffffffff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183255cb0 + 0x7f1dd4fa));
  _DAT_183255f78 = (_DAT_183255f78 ^ _DAT_183255f30 ^ 0xfb3ff7df) + 0x4c00820 ^ 0xabe6391f54f4b91;
  _DAT_183256200 =
       (_DAT_183256200 * 0x42d4156224c71d5b ^ _DAT_183255f78) + (_DAT_183255f30 ^ 0xfb3ff7df);
  _DAT_183255dc8 = _DAT_183256200 ^ _DAT_183255f78;
  _DAT_183255b48 = 0x4c00820;
  uVar1 = (~_DAT_183255d90 + 0x4c00821) *
          ((_DAT_183255eb8 ^ 0x7f1dd4fa) + (ulonglong)((uint)_DAT_183255eb8 & 0x7f1dd4fa) * 2);
  uVar1 = (uVar1 | _DAT_1832561b0) + (uVar1 & _DAT_1832561b0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183255c20 = func_0x00018a704ef0((uVar1 | 0x7bdddcda) + (ulonglong)((uint)uVar1 & 0x7bdddcda))
  ;
  uVar1 = (ulonglong)
          (~((uint)(_DAT_183256000 << 0xc) | (uint)((ulonglong)_DAT_183256000 >> 0x34)) & 0xfb3ff7df
          );
  _DAT_183256118 = _DAT_183256118 ^ uVar1 ^ 0x75dc35796bad34b6;
  _DAT_183255de8 = (_DAT_183255de8 * -0x3ceb582c848a785d ^ _DAT_183256118) + uVar1;
  _DAT_183255c08 = _DAT_183255de8 ^ _DAT_183256118;
  _DAT_183255c60 = _DAT_183255ce0;
  _DAT_183256078 = 0;
  uVar1 = ((_DAT_183255d90 ^ 0x84222365) + (ulonglong)((uint)_DAT_183255d90 & 0x84222365) * 2) *
          -_DAT_183255c20;
  uVar1 = (uVar1 | _DAT_183255e58) + (uVar1 & _DAT_183255e58);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x00018a704ef0((uVar1 | 0x84222365) + (ulonglong)((uint)uVar1 & 0x84222365));
  uVar6 = uVar1 * 0x1121ee3f53b7ee83;
  _DAT_183255cd0 = _DAT_183255cc8 ^ uVar6 ^ 0x40;
  _DAT_183255b98 = (uVar1 ^ uVar6) + 0x40 ^ 0xf57c8548ae8c4753;
  _DAT_183256188 = (_DAT_183256188 * -0x137ad4d49d5d7425 ^ _DAT_183255b98) + uVar6;
  _DAT_183256240 = _DAT_183256188 ^ _DAT_183255b98;
  _DAT_1832561b8 = 0x40;
  switch((int)uVar2 == 0x40) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a704813 (image 18a704813) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a704813(void)

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



// ===== continuation @ rva a704404 (image 18a704404) =====

void FUN_18a704404(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva a7048d8 (image 18a7048d8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7048d8(void)

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



// ===== continuation @ rva a73d050 (image 18a73d050) =====

void FUN_18a73d050(void)

{
  return;
}



// ===== continuation @ rva a73c69e (image 18a73c69e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73c69e(void)

{
  FUN_190ddfc90();
  (*_DAT_181869eb8)();
  return;
}



// ===== continuation @ rva a73d012 (image 18a73d012) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d012(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1b0))();
  (*_DAT_181869ba8)();
  return;
}



// ===== continuation @ rva a73ca65 (image 18a73ca65) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73ca65(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R14;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong in_stack_00000048;
  ulonglong in_stack_00000050;
  
  auVar3._8_8_ = in_stack_00000048;
  auVar3._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_181869f90,_DAT_1800170c0);
  uVar1 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar1 + _DAT_183256820;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_183256640 ^ uVar1;
  }
  _DAT_183256700 = func_0x00018a73d070(SUB161(auVar3 ^ _DAT_181869f90,5) ^ uVar2);
  _DAT_183256520 =
       in_stack_00000048 + in_stack_00000050 + (in_stack_00000050 & in_stack_00000048) * -2;
  _DAT_183256888 = (_DAT_183256888 ^ _DAT_183256700) + _DAT_183256520 ^ 0xf106cb941b23a429;
  _DAT_1832567a0 = (_DAT_1832567a0 * -0x5cb9efe880030235 ^ _DAT_183256888) + _DAT_183256700;
  _DAT_183256790 = _DAT_1832567a0 ^ _DAT_183256888;
  switch(unaff_R14 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a73cefe (image 18a73cefe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73cefe(void)

{
  FUN_190dd72e0();
  (*_DAT_181869db8)();
  return;
}



// ===== continuation @ rva a73cd16 (image 18a73cd16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73cd16(void)

{
  FUN_190dd9df0();
  (*_DAT_181869c78)();
  return;
}



// ===== continuation @ rva a73d061 (image 18a73d061) =====

void FUN_18a73d061(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a73d02f (image 18a73d02f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d02f(void)

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



// ===== continuation @ rva a73cedd (image 18a73cedd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73cedd(void)

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



// ===== continuation @ rva a73c78d (image 18a73c78d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73c78d(void)

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



// ===== continuation @ rva a73d842 (image 18a73d842) =====

void FUN_18a73d842(void)

{
  return;
}



// ===== continuation @ rva a73d320 (image 18a73d320) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d320(void)

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



// ===== continuation @ rva a73d75a (image 18a73d75a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d75a(void)

{
  FUN_190ddfc90();
  (*_DAT_18186a178)();
  return;
}



// ===== continuation @ rva a73d62b (image 18a73d62b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d62b(void)

{
  FUN_190dd72e0();
  (*_DAT_18186a0e8)();
  return;
}



// ===== continuation @ rva a73d5b8 (image 18a73d5b8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d5b8(void)

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



// ===== continuation @ rva a73d819 (image 18a73d819) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d819(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18186a1d8)();
  return;
}



// ===== continuation @ rva a73d653 (image 18a73d653) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d653(void)

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



// ===== continuation @ rva a73d4ea (image 18a73d4ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d4ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18186a1e8)();
  return;
}



// ===== continuation @ rva a73d84c (image 18a73d84c) =====

void FUN_18a73d84c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a73d394 (image 18a73d394) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d394(void)

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



// ===== continuation @ rva a73d425 (image 18a73d425) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d425(void)

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



// ===== continuation @ rva a52b6bb (image 18a52b6bb) =====

void FUN_18a52b6bb(void)

{
  return;
}



// ===== continuation @ rva a52b609 (image 18a52b609) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52b609(void)

{
  FUN_190ddce00();
  (*_DAT_1817ab6d8)();
  return;
}



// ===== continuation @ rva a52b6c2 (image 18a52b6c2) =====

void FUN_18a52b6c2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a52b69b (image 18a52b69b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52b69b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1817ab6f8)();
  return;
}



// ===== continuation @ rva a52b660 (image 18a52b660) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52b660(void)

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



// ===== continuation @ rva a52b63c (image 18a52b63c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52b63c(void)

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



// ===== continuation @ rva a52b681 (image 18a52b681) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52b681(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1817ab6b8)();
  return;
}



// ===== continuation @ rva a52b6fa (image 18a52b6fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52b6fa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1817ab718)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva a52b706 (image 18a52b706) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52b706(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva a52b72d (image 18a52b72d) =====

undefined4 * FUN_18a52b72d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva a52bd16 (image 18a52bd16) =====

void FUN_18a52bd16(void)

{
  return;
}



// ===== continuation @ rva a52b7ca (image 18a52b7ca) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52b7ca(void)

{
  FUN_190de3220();
  (*_DAT_1817ab788)();
  return;
}



// ===== continuation @ rva a52bcd4 (image 18a52bcd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52bcd4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_1817ab808)();
  return;
}



// ===== continuation @ rva a52bc80 (image 18a52bc80) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52bc80(void)

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



// ===== continuation @ rva a52bb80 (image 18a52bb80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52bb80(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1817ab7d8)();
  return;
}



// ===== continuation @ rva a52b7fd (image 18a52b7fd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52b7fd(void)

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



// ===== continuation @ rva a52bd20 (image 18a52bd20) =====

void FUN_18a52bd20(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a52bb3b (image 18a52bb3b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52bb3b(void)

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



// ===== continuation @ rva a52b861 (image 18a52b861) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52b861(void)

{
  FUN_190dd72e0();
  (*_DAT_1817ab908)();
  return;
}



// ===== continuation @ rva a52ba49 (image 18a52ba49) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52ba49(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1817ab7f8)();
  return;
}



// ===== continuation @ rva a7025b1 (image 18a7025b1) =====

void FUN_18a7025b1(void)

{
  return;
}



// ===== continuation @ rva a701a4e (image 18a701a4e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a701a4e(void)

{
  FUN_190ddce00();
  (*_DAT_181866908)();
  return;
}



// ===== continuation @ rva a702b4a (image 18a702b4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a702b4a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_1818667d8)();
  return;
}



// ===== continuation @ rva a70202a (image 18a70202a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a70202a(void)

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



// ===== continuation @ rva a702b86 (image 18a702b86) =====

void FUN_18a702b86(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a701f29 (image 18a701f29) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a701f29(void)

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



// ===== continuation @ rva a701ea9 (image 18a701ea9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a701ea9(void)

{
  FUN_190dd72e0();
  (*_DAT_181866828)();
  return;
}



// ===== continuation @ rva a7021be (image 18a7021be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7021be(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181866be8)();
  return;
}



// ===== continuation @ rva a701f68 (image 18a701f68) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a701f68(void)

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



// ===== continuation @ rva a7025ed (image 18a7025ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7025ed(void)

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



// ===== continuation @ rva a701b05 (image 18a701b05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a701b05(void)

{
  undefined4 uStack0000000000000050;
  
  uStack0000000000000050 = 0x3f;
  FUN_190ddce00();
  (*_DAT_181866838)();
  return;
}



// ===== continuation @ rva a701d95 (image 18a701d95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a701d95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b0))();
  (*_DAT_181866d48)();
  return;
}



// ===== continuation @ rva a7050fd (image 18a7050fd) =====

void FUN_18a7050fd(void)

{
  return;
}



// ===== continuation @ rva a704fd0 (image 18a704fd0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a704fd0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181867658)();
  return;
}



// ===== continuation @ rva a705097 (image 18a705097) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a705097(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181867668)();
  return;
}



// ===== continuation @ rva a705105 (image 18a705105) =====

void FUN_18a705105(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a7050da (image 18a7050da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7050da(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181867638)();
    return;
  }
  (*_DAT_181867638)();
  return;
}



// ===== continuation @ rva a7050f5 (image 18a7050f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7050f5(void)

{
  (*_DAT_181867638)();
  return;
}



// ===== continuation @ rva a705048 (image 18a705048) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a705048(void)

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



// ===== continuation @ rva a704fef (image 18a704fef) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a704fef(void)

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



// ===== continuation @ rva a7050b2 (image 18a7050b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7050b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_181867628)();
  return;
}



// ===== continuation @ rva a70505e (image 18a70505e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a70505e(void)

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



// ===== continuation @ rva a705634 (image 18a705634) =====

void FUN_18a705634(void)

{
  return;
}



// ===== continuation @ rva a7051df (image 18a7051df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7051df(void)

{
  FUN_190ddce00();
  (*_DAT_1818677d8)();
  return;
}



// ===== continuation @ rva a7053ce (image 18a7053ce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7053ce(void)

{
  FUN_190ddce00();
  (*_DAT_1818677f8)();
  return;
}



// ===== continuation @ rva a705614 (image 18a705614) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a705614(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1818677b8)();
  return;
}



// ===== continuation @ rva a7055c2 (image 18a7055c2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7055c2(void)

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



// ===== continuation @ rva a70563e (image 18a70563e) =====

void FUN_18a70563e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a705588 (image 18a705588) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a705588(void)

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



// ===== continuation @ rva a70539d (image 18a70539d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a70539d(void)

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



// ===== continuation @ rva a70534b (image 18a70534b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a70534b(void)

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



// ===== continuation @ rva a705534 (image 18a705534) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a705534(void)

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



// ===== continuation @ rva a705384 (image 18a705384) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a705384(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1818677b8)();
  return;
}



// ===== continuation @ rva a73c2c7 (image 18a73c2c7) =====

void FUN_18a73c2c7(void)

{
  return;
}



// ===== continuation @ rva a7057c7 (image 18a7057c7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a705818 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a7057c7(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a7146ce (image 18a7146ce) =====

void thunk_FUN_18a73c2b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva a70a60c (image 18a70a60c) =====

void thunk_FUN_18a73c2b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva a70a64e (image 18a70a64e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a70a64e(void)

{
  code *in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  int iStack000000000000002c;
  
  iStack000000000000002c = (*in_RAX)();
  uVar1 = (_DAT_1832564c0 ^ _DAT_181868d20) + _DAT_183256458 + 0xa6a08c60;
  uVar2 = (_DAT_183256458 ^ _UNK_181868d28) + _DAT_1832564c0 + 0xe8143b55;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832564c0 ^ _DAT_181868d20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183256458 ^ _UNK_181868d28;
  _DAT_1832563f8 =
       func_0x00018a73c5a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832564c0 + 0xe8143b55) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183256458 + 0xa6a08c60));
  uVar1 = _DAT_1832563f8 << 0xd | _DAT_1832563f8 >> 0x33 & 0xfffffffffffffffe;
  uVar2 = (_DAT_183256490 ^ uVar1) + 0xea96bf55;
  _DAT_183256490 = uVar2 ^ 0xb37e566dd16b50e4;
  _DAT_183256410 = (_DAT_183256410 * 0x7a6e681ff9a1bcff ^ _DAT_183256490) + uVar1;
  _DAT_1832563c0 = _DAT_183256410 ^ _DAT_183256490;
  _DAT_1832564d8 = 0xea96bf55;
  uVar1 = (~_DAT_183256318 + 0xdd7cc877) *
          ((uVar2 ^ 0xb37e566d554973c1) + (ulonglong)((uint)_DAT_183256490 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183256378) + (uVar1 & _DAT_183256378);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183256420 = func_0x00018a73c5a0((uVar1 | 0x595eeb53) + (ulonglong)((uint)uVar1 & 0x595eeb53))
  ;
  uVar1 = (_DAT_183256420 << 0x11 | _DAT_183256420 >> 0x2f) * -0x57604e80905af01f;
  _DAT_1832563a8 = (_DAT_1832563a8 ^ uVar1) - 0xdd7cc876 ^ 0xb81b411b6f99ad3a;
  _DAT_1832564d0 = (_DAT_1832564d0 * 0x209c9018647d5fe7 ^ _DAT_1832563a8) + uVar1;
  _DAT_183256400 = _DAT_1832564d0 ^ _DAT_1832563a8;
  _DAT_183256498 = 0x2283378a;
  _DAT_183256360 = func_0x00018a73c5a0(_DAT_183256340 + 0xffa900473b0055ffU ^ 0xe8);
  _DAT_1832563f8 = _DAT_183256328 ^ _DAT_183256360 ^ 0xdd7cc88a;
  _DAT_183256478 = (_DAT_183256478 ^ _DAT_183256360) + 0xdd7cc88a ^ 0x6fa20367ded5ee78;
  _DAT_1832564f8 = (_DAT_1832564f8 * -0x578fcdd13456f463 ^ _DAT_183256478) + _DAT_183256360;
  _DAT_183256468 = _DAT_1832564f8 ^ _DAT_183256478;
  _DAT_1832563f0 = 0xdd7cc88a;
  _DAT_183256460 = func_0x00018a73c5a0(_DAT_183256480 + 0xff3fff8507ffcbff ^ 2);
  uVar1 = (_DAT_183256460 ^ 0xfe56e3dd) * -0x4e3449a8552876db;
  _DAT_183256368 = _DAT_1832564e0 ^ uVar1 ^ 0xfe56e3dd;
  _DAT_183256488 = (_DAT_183256488 ^ uVar1) + 0xfe56e3dd ^ 0xdeef8ffa4314b3dc;
  _DAT_183256320 = (_DAT_183256320 * -0x70f17adf6070baaf ^ _DAT_183256488) + uVar1;
  _DAT_1832564d0 = _DAT_183256320 ^ _DAT_183256488;
  _DAT_1832564d8 = _DAT_183256378 ^ 0xfe56e3dd;
  _DAT_183256480 = 0xfe56e3dd;
  _DAT_1832563c8 = func_0x00018a73c5a0(_DAT_183256418 + 0xff53ff85ccffa4ff ^ 0x78);
  uVar1 = _DAT_1832563c8 * 0x617fa218544afe45;
  _DAT_1832563a8 = _DAT_1832563f8 ^ uVar1 ^ 0x100000014;
  _DAT_1832564b0 = (_DAT_1832564b0 ^ uVar1) + 0x100000014 ^ 0x3abf4a3f7789874a;
  _DAT_1832563b8 = (_DAT_1832563b8 * -0x390aaf2bfb1bd151 ^ _DAT_1832564b0) + uVar1;
  _DAT_1832563f0 = _DAT_1832563b8 ^ _DAT_1832564b0;
  _DAT_183256450 = 0x14;
  uVar1 = (~_DAT_183256300 + 0x8b328828) *
          ((_DAT_1832563f8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832563f8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183256470) + (uVar1 & _DAT_183256470);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x00018a73c5a0((uVar1 | 0xf10ab02) + (ulonglong)((uint)uVar1 & 0xf10ab02));
  _DAT_183256480 = (_DAT_183256480 ^ uVar1 & 0xffffffff80000000) - 0x8b328827 ^ 0x571ff9b2c6c02269;
  _DAT_183256338 =
       (_DAT_183256338 * 0x4d42b75ca170a1e7 ^ _DAT_183256480) + (uVar1 & 0xffffffff80000000);
  _DAT_1832564d0 = _DAT_183256338 ^ _DAT_183256480;
  _DAT_183256400 = 0x74cd77d9;
  uVar1 = (_DAT_1832564e0 ^ _DAT_181868d30) + _DAT_183256438 + 0x84222331;
  uVar2 = (_DAT_183256438 ^ _UNK_181868d38) + _DAT_1832564e0 + 0x8b328827;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832564e0 ^ _DAT_181868d30;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183256438 ^ _UNK_181868d38;
  _DAT_183256350 =
       func_0x00018a73c5a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832564e0 + 0x8b328827) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183256438 + 0x84222331));
  uVar1 = (_DAT_183256350 ^ 0xadff2a30c) * 0x7df56b9d09074b15;
  uVar1 = uVar1 << 0x38 | uVar1 >> 8;
  _DAT_183256488 = _DAT_183256360 ^ uVar1 ^ 0x8b32883b;
  _DAT_1832564f0 = (_DAT_1832564f0 ^ uVar1) + 0x8b32883b ^ 0x6bcf9ca2011fbd87;
  _DAT_1832564d8 = (_DAT_1832564d8 * 0x4b18100414a880fb ^ _DAT_1832564f0) + uVar1;
  _DAT_1832563d8 = _DAT_1832564d8 ^ _DAT_1832564f0;
  _DAT_183256330 = 0x8b32883b;
  _DAT_1832564c8 = func_0x00018a73c5a0(_DAT_1832563b0 ^ 0x4bffa74500a2ec);
  uVar1 = (_DAT_1832564c8 ^ 0x3f829e5c4e67e703) << 0x2b |
          (_DAT_1832564c8 ^ 0x3f829e5c4e67e703) >> 0x15;
  _DAT_183256470 = _DAT_183256358 ^ uVar1 ^ 0x100000014;
  _DAT_183256318 = (_DAT_183256318 ^ uVar1) + 0x100000014 ^ 0xa4281fa326cba25a;
  _DAT_183256388 = (_DAT_183256388 * 0x781f109a38ef455f ^ _DAT_183256318) + uVar1;
  _DAT_183256490 = _DAT_183256388 ^ _DAT_183256318;
  _DAT_1832563c8 = 0x14;
  uVar1 = (_DAT_1832564e8 ^ _DAT_181868d40) + _DAT_183256420 + 0x6eb49c70;
  uVar2 = (_DAT_183256420 ^ _UNK_181868d48) + _DAT_1832564e8 + 0x9f9d34b2;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832564e8 ^ _DAT_181868d40;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183256420 ^ _UNK_181868d48;
  _DAT_1832564b0 =
       func_0x00018a73c5a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832564e8 + 0x9f9d34b2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183256420 + 0x6eb49c70));
  uVar1 = _DAT_1832564b0 * -0x237c77afa9d7d9e5;
  _DAT_1832564e8 = _DAT_1832564e0 ^ uVar1 ^ 0x18a33f407;
  _DAT_183256328 = (ulonglong)(&UNK_18a33f407 + (_DAT_183256328 ^ uVar1)) ^ 0xa16fd642183ffe59;
  _DAT_1832564d8 = (_DAT_1832564d8 * -0x6362fbf28472ea61 ^ _DAT_183256328) + uVar1;
  _DAT_183256418 = _DAT_1832564d8 ^ _DAT_183256328;
  _DAT_183256410 = 0x8a33f407;
  uVar1 = (~_DAT_183256440 + 0x9f9d34b3) *
          ((_DAT_183256458 ^ 0x6eb49c70) + (ulonglong)((uint)_DAT_183256458 & 0x6eb49c70) * 2);
  uVar1 = (uVar1 | _DAT_1832564b8) + (uVar1 & _DAT_1832564b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x00018a73c5a0((uVar1 | 0xf129a8c2) + (ulonglong)((uint)uVar1 & 0xf129a8c2));
  _DAT_183256328 = (_DAT_183256470 ^ uVar1) + 0x750b8be7;
  _DAT_183256470 = _DAT_183256328 ^ 0xbcb5fa5f3f718e94;
  _DAT_1832563a8 = (_DAT_1832563a8 * 0x6969f070f74398bf ^ _DAT_183256470) + uVar1;
  _DAT_183256450 = _DAT_1832563a8 ^ _DAT_183256470;
  _DAT_183256328 = _DAT_183256328 ^ 0xbcb5fa5f4a7a0573;
  _DAT_1832564f8 = 0x750b8be7;
  uVar1 = (~_DAT_1832564c0 + 0x9f9d34b3) *
          ((_DAT_183256358 ^ 0x6eb49c70) + (ulonglong)((uint)_DAT_183256358 & 0x6eb49c70) * 2);
  uVar1 = (uVar1 | _DAT_1832564a0) + (uVar1 & _DAT_1832564a0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183256358 = func_0x00018a73c5a0((uVar1 | 0xf129a8c2) + (ulonglong)((uint)uVar1 & 0xf129a8c2))
  ;
  uVar1 = (_DAT_183256358 ^ 0x9243af92ddcf4d1a) << 0x3a | (_DAT_183256358 ^ 0x9243af92ddcf4d1a) >> 6
  ;
  _DAT_183256338 = (_DAT_183256338 ^ uVar1) + 0x8a943410 ^ 0x35de9f2eaa0a8d8e;
  _DAT_183256360 = (_DAT_183256360 * -0x7ac3d57bad3a093f ^ _DAT_183256338) + uVar1;
  _DAT_183256420 = _DAT_183256360 ^ _DAT_183256338;
  _DAT_183256480 = 0x8a943410;
  _DAT_183256498 = func_0x00018a73c5a0(_DAT_183256378 ^ 0xffc000235dfffe28);
  uVar1 = (_DAT_183256498 ^ 0x750b8be7) << 0x23 | (_DAT_183256498 ^ 0x750b8be7) >> 0x1d;
  _DAT_183256428 = _DAT_183256488 ^ uVar1 ^ 0x8a33f407;
  _DAT_1832564c0 = (_DAT_1832564c0 ^ uVar1) + 0x8a33f407 ^ 0xd3ccfedb5958f8c1;
  _DAT_183256310 = (_DAT_183256310 * 0x2157d7f4c2cb088f ^ _DAT_1832564c0) + uVar1;
  _DAT_183256400 = 0x8a33f407;
  uVar1 = (_DAT_183256380 ^ _DAT_181868d50) + _DAT_183256320 + 0xe11d722;
  uVar2 = (_DAT_183256320 ^ _UNK_181868d58) + _DAT_183256380 + 0x8a33f407;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183256380 ^ _DAT_181868d50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183256320 ^ _UNK_181868d58;
  _DAT_183256398 =
       func_0x00018a73c5a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183256380 + 0x8a33f407) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183256320 + 0xe11d722));
  _DAT_183256330 = (_DAT_183256398 ^ 0x8a33f407) & 0x7fffffffffffffff;
  _DAT_183256300 = _DAT_183256460 ^ _DAT_183256330 ^ 0xe188c4b30752b4e1;
  _DAT_183256460 = (_DAT_183256460 * -0x493bdc1cea5d5dcb ^ _DAT_183256300) + _DAT_183256330;
  _DAT_183256300 = _DAT_183256460 ^ _DAT_183256300;
  _DAT_183256458 = 0;
  uVar1 = (_DAT_1832564f0 ^ _DAT_181868d60) + _DAT_183256360 + 0x6eb49c70;
  uVar2 = (_DAT_183256360 ^ _UNK_181868d68) + _DAT_1832564f0 + 0xffffffff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832564f0 ^ _DAT_181868d60;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183256360 ^ _UNK_181868d68;
  _DAT_1832564b0 =
       func_0x00018a73c5a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832564f0 + 0xffffffff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183256360 + 0x6eb49c70));
  _DAT_1832563b8 = (_DAT_183256430 ^ _DAT_1832563d0) + 0x156940aa ^ 0x677aa63b9e0dd3b1;
  _DAT_1832563e0 = (_DAT_1832563e0 * 0xa28b6c700cc2e03 ^ _DAT_1832563b8) + _DAT_1832563d0;
  _DAT_1832563b8 = _DAT_1832563e0 ^ _DAT_1832563b8;
  _DAT_183256430 = 0x156940aa;
  uVar1 = (~_DAT_183256308 + 0x156940ab) *
          ((_DAT_183256478 ^ 0x6eb49c70) + (ulonglong)((uint)_DAT_183256478 & 0x6eb49c70) * 2);
  uVar1 = (uVar1 | _DAT_183256490) + (uVar1 & _DAT_183256490);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183256470 = func_0x00018a73c5a0((uVar1 | 0x7bdddcda) + (ulonglong)((uint)uVar1 & 0x7bdddcda))
  ;
  uVar1 = _DAT_183256470 & 0xfffffffffffffc00 ^ 0xea96bf55;
  _DAT_183256360 = _DAT_183256360 ^ uVar1 ^ 0x82a9858f661bae5d;
  _DAT_183256350 = (_DAT_183256350 * -0x775bd3c072f35701 ^ _DAT_183256360) + uVar1;
  _DAT_1832564c0 = _DAT_183256350 ^ _DAT_183256360;
  _DAT_1832564d0 = _DAT_1832563a0;
  _DAT_183256490 = 0;
  uVar1 = _DAT_183256348 + 0x108444662;
  uVar2 = (_DAT_183256348 * 0x2000 | _DAT_183256348 >> 0x33) ^ _DAT_183256348;
  _DAT_183256450 =
       func_0x00018a73c5a0((uVar2 << 0x1d | uVar2 >> 0x23) ^
                           (((uVar1 * 0x2000 | uVar1 >> 0x33) ^ 0x84222331) << 0x1d |
                           (uVar1 & 0x7ffffffffffff) >> 0x16) - (_DAT_183256348 + 0x84222331));
  uVar1 = (ulonglong)(~(uint)_DAT_183256450 & 0x14);
  _DAT_183256488 = _DAT_183256368 ^ uVar1 ^ 0x14;
  _DAT_183256390 = (_DAT_183256390 ^ uVar1) + 0x14 ^ 0x913a995e209aea6c;
  _DAT_1832564d0 = (_DAT_1832564d0 * 0x3112de67fd544277 ^ _DAT_183256390) + uVar1;
  _DAT_183256498 = _DAT_1832564d0 ^ _DAT_183256390;
  _DAT_183256448 = 0x14;
  uVar1 = (~_DAT_183256388 + 0x2282af46) *
          ((_DAT_1832563b8 ^ 0xa6a08c60) + (ulonglong)((uint)_DAT_1832563b8 & 0xa6a08c60) * 2);
  uVar1 = (uVar1 | _DAT_183256308) + (uVar1 & _DAT_183256308);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832564b0 = func_0x00018a73c5a0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = _DAT_1832564b0 - (_DAT_1832564b0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1832564b0;
  _DAT_1832564f8 = _DAT_1832564f8 ^ uVar1 ^ 0xcc762d510293a58f;
  _DAT_183256328 = (_DAT_183256328 * 0x1bc5667f5ba0b0f1 ^ _DAT_1832564f8) + uVar1;
  _DAT_183256418 = _DAT_183256328 ^ _DAT_1832564f8;
  _DAT_1832564e0 = _DAT_183256480;
  _DAT_1832563b0 = 0;
  switch(iStack000000000000002c < 0x14) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a705c52 (image 18a705c52) =====

void thunk_FUN_18a73c2b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva a70de8e (image 18a70de8e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a70dea5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a70de8e(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a7313b5 (image 18a7313b5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7313b5(void)

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



// ===== continuation @ rva a73229f (image 18a73229f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73229f(void)

{
  longlong lVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iStack000000000000002c;
  undefined4 uStack000000000000005c;
  
  uStack000000000000005c = 0x25;
  puVar4 = (undefined1 *)&stack0x0000005c;
  (**(code **)(*unaff_RSI + 0x698))();
  iStack000000000000002c = (**(code **)(*unaff_RSI + 0x558))();
  _DAT_183256430 = func_0x00018a73c5a0(_DAT_183256440 ^ 0xa1ff7c4c00898b);
  _DAT_183256470 = (_DAT_183256470 ^ _DAT_183256448) + 0x7cb4fff7 ^ 0x2a83f37c4725a648;
  _DAT_183256400 = (_DAT_183256400 * 0x3bd5686303261303 ^ _DAT_183256470) + _DAT_183256448;
  _DAT_1832563b8 = _DAT_183256400 ^ _DAT_183256470;
  _DAT_183256420 = 0x7cb4fff7;
  lVar1 = _DAT_183256478 + 0xf014837f;
  uVar2 = (_DAT_183256478 ^ _DAT_181869800) + _DAT_183256430 + 0x6ce3de2b;
  uVar3 = (_DAT_183256430 ^ _UNK_181869808) + lVar1;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183256478 ^ _DAT_181869800;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183256430 ^ _UNK_181869808;
  _DAT_1832563a0 =
       func_0x00018a73c5a0((uVar3 << 0x1d | uVar3 >> 0x23) - lVar1 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183256430 + 0x6ce3de2b),lVar1,
                           _DAT_1832563b8,uVar2,puVar4);
  _DAT_183256488 =
       (_DAT_183256488 ^ _DAT_1832563a0 * -0x9cd87a39cd947b) + 0x18d57e71 ^ 0xc34ea17998c9bd78;
  _DAT_1832563a8 =
       (_DAT_1832563a8 * -0x5792a6f843cc964d ^ _DAT_183256488) + _DAT_1832563a0 * -0x9cd87a39cd947b;
  _DAT_183256418 = _DAT_1832563a8 ^ _DAT_183256488;
  _DAT_1832563d0 = 0x18d57e71;
  uVar2 = (_DAT_183256330 ^ _DAT_181869810) + _DAT_1832564a0 + 0x84222325;
  uVar3 = (_DAT_1832564a0 ^ _UNK_181869818) + _DAT_183256330 + 0xe6aeb72e;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183256330 ^ _DAT_181869810;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832564a0 ^ _UNK_181869818;
  _DAT_183256360 =
       func_0x00018a73c5a0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183256330 + 0xe6aeb72e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832564a0 + 0x84222325));
  _DAT_183256388 = (_DAT_183256388 ^ _DAT_183256360) - 0xe6aeb72e ^ 0xf18d89fc93e0582c;
  _DAT_183256308 = (_DAT_183256308 * 0x3728329235a1b323 ^ _DAT_183256388) + _DAT_183256360;
  _DAT_183256488 = _DAT_183256308 ^ _DAT_183256388;
  _DAT_1832564f8 = 0x195148d2;
  uVar2 = (_DAT_183256308 ^ _DAT_181869820) + _DAT_183256360 + 0x628c9443;
  uVar3 = (_DAT_183256360 ^ _UNK_181869828) + _DAT_183256308 + 0x195148d2;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183256308 ^ _DAT_181869820;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183256360 ^ _UNK_181869828;
  _DAT_183256488 =
       func_0x00018a73c5a0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183256308 + 0x195148d2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183256360 + 0x628c9443));
  uVar2 = _DAT_183256488 - (_DAT_183256488 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (_DAT_183256488 ^ 0xe6aeb766 ^
          (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6) &
          0x7ffffffffffffff;
  _DAT_183256380 = _DAT_1832563d0 ^ uVar2 ^ 0x100000038;
  _DAT_183256490 = (_DAT_183256490 ^ uVar2) + 0x100000038 ^ 0xa7cead094b4473f7;
  _DAT_1832563b0 = (_DAT_1832563b0 * 0x1797c77a0a6cbc1b ^ _DAT_183256490) + uVar2;
  _DAT_1832564a0 = _DAT_1832563b0 ^ _DAT_183256490;
  _DAT_183256390 = 0x38;
  _DAT_183256370 = func_0x00018a73c5a0(_DAT_1832563b8 ^ 0xff54ffa18effcac5);
  _DAT_1832563c8 =
       (_DAT_1832563c8 ^ _DAT_183256370 * -0x3021e25aba89b7e7) - 0x26ddc8b4 ^ 0x295452cf7d41d6d0;
  _DAT_1832564f0 =
       (_DAT_1832564f0 * -0x68ea53538c490e7f ^ _DAT_1832563c8) +
       _DAT_183256370 * -0x3021e25aba89b7e7;
  _DAT_1832563b8 = _DAT_1832564f0 ^ _DAT_1832563c8;
  _DAT_183256330 = 0xd922374c;
  uVar2 = func_0x00018a73c5a0(_DAT_183256360 + 0xdaff6158ff6eff ^ 0x73);
  _DAT_183256380 = _DAT_183256358 ^ uVar2 ^ 0x26ddc8ec;
  _DAT_1832563d0 = (_DAT_1832563d0 ^ uVar2) + 0x26ddc8ec ^ 0x315b468c0acb8c51;
  _DAT_183256310 = (_DAT_183256310 * -0x264597385a9d129d ^ _DAT_1832563d0) + uVar2;
  _DAT_183256340 = _DAT_183256310 ^ _DAT_1832563d0;
  _DAT_1832564e0 = 0x26ddc8ec;
  uVar2 = (~_DAT_183256360 + 0xd922374d) *
          ((_DAT_1832564b8 ^ 0xa2ffebc9) + (ulonglong)((uint)_DAT_1832564b8 & 0xa2ffebc9) * 2);
  uVar2 = (uVar2 | _DAT_183256368) + (uVar2 & _DAT_183256368);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183256458 = func_0x00018a73c5a0((uVar2 | 0x7bdddc85) + (ulonglong)((uint)uVar2 & 0x7bdddc85))
  ;
  _DAT_183256400 = _DAT_183256358 ^ _DAT_183256458 ^ 0x100000038;
  _DAT_183256360 = (_DAT_183256360 ^ _DAT_183256458) + 0x100000038 ^ 0x3ac2a37515407032;
  _DAT_183256340 = (_DAT_183256340 * 0x66b57d8cc7fbb8d1 ^ _DAT_183256360) + _DAT_183256458;
  _DAT_183256300 = _DAT_183256340 ^ _DAT_183256360;
  _DAT_183256478 = 0x38;
  uVar2 = (~_DAT_1832564d8 + 0x3ffebb0d) *
          ((_DAT_1832563f8 ^ 0x8422231d) + (ulonglong)((uint)_DAT_1832563f8 & 0x8422231d) * 2);
  uVar2 = (uVar2 | _DAT_1832564a8) + (uVar2 & _DAT_1832564a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183256340 = func_0x00018a73c5a0((uVar2 | 0xbbdc9811) + (ulonglong)((uint)uVar2 & 0xbbdc9811))
  ;
  _DAT_1832564f8 = _DAT_183256340 ^ 0x3ffebb3c;
  _DAT_183256460 = (_DAT_183256460 ^ _DAT_1832564f8) + 0x3ffebb44 ^ 0x9dc970b2fb38d985;
  _DAT_1832564f8 =
       ((_DAT_1832563d0 ^ _DAT_1832564f8 ^ 0x3ffebb44) * -0x7d279e9a56d225b3 ^ _DAT_183256460) +
       _DAT_1832564f8;
  _DAT_1832563c8 = _DAT_1832564f8 ^ _DAT_183256460;
  _DAT_1832564e8 = 0x3ffebb44;
  uVar2 = (~_DAT_183256348 + 0xc00144f5) *
          ((_DAT_1832564c8 ^ 0xbbdc9861) + (ulonglong)((uint)_DAT_1832564c8 & 0xbbdc9861) * 2);
  uVar2 = (uVar2 | _DAT_1832564e0) + (uVar2 & _DAT_1832564e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183256348 = func_0x00018a73c5a0((uVar2 | 0x7bdddc95) + (ulonglong)((uint)uVar2 & 0x7bdddc95))
  ;
  uVar2 = (ulonglong)((uint)~((int)_DAT_183256348 * 2) >> 1 & 0x3ffebb44);
  _DAT_1832563b0 = (_DAT_183256330 ^ uVar2 ^ 0x100000038 ^ uVar2) + 0x100000038 ^ 0xe7c34d886d441936
  ;
  _DAT_1832563c8 = (_DAT_1832563c8 * 0x792d41ce6fe9a3cb ^ _DAT_1832563b0) + uVar2;
  _DAT_1832564b8 = _DAT_1832563c8 ^ _DAT_1832563b0;
  _DAT_183256318 = 0x38;
  _DAT_183256480 = func_0x00018a73c5a0(_DAT_183256488 + 0xffa2006062ffc0ff ^ 0xeb);
  uVar2 = _DAT_183256480 ^ 0x7cb4fff7;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2;
  _DAT_183256450 = _DAT_1832564d8 ^ uVar2 ^ 0x958a7e68;
  _DAT_1832564f0 = (_DAT_1832564f0 ^ uVar2) + 0x958a7e68 ^ 0x758fe62da199a487;
  _DAT_183256320 = (_DAT_183256320 * 0x67dc6ea48de72abd ^ _DAT_1832564f0) + uVar2;
  _DAT_1832563a0 = _DAT_183256320 ^ _DAT_1832564f0;
  _DAT_183256448 = 0x958a7e68;
  uVar2 = (_DAT_181869830 ^ 0x958a7e68) + _DAT_1832564b0 + 0xf896dcd2;
  uVar3 = (_DAT_1832564b0 ^ _UNK_181869838) + 0xae5ffcd9;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_181869830 ^ 0x958a7e68;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832564b0 ^ _UNK_181869838;
  _DAT_1832563a0 =
       func_0x00018a73c5a0((uVar3 << 0x1d | uVar3 >> 0x23) - 0xae5ffcd9 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832564b0 + 0xf896dcd2));
  uVar2 = _DAT_1832563a0 ^ 0xc18f83042638e07;
  uVar2 = (uVar2 & 0xffffffff) * (_DAT_181869840 & 0xffffffff) +
          ((ulonglong)_DAT_181869850 * (uVar2 & 0xffffffff) +
           (uVar2 >> 0x20) * (_DAT_181869840 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  _DAT_183256308 = (_DAT_183256308 ^ uVar2) + 0x64618186 ^ 0x328a86b2e993a668;
  _DAT_183256398 = (_DAT_183256398 * -0x6544c3de593265d1 ^ _DAT_183256308) + uVar2;
  _DAT_1832563f8 = _DAT_183256398 ^ _DAT_183256308;
  _DAT_1832563c8 = 0x64618186;
  _DAT_183256418 = func_0x00018a73c5a0(_DAT_183256308 + 0xa1ff6060ffbeff ^ 0x7a);
  uVar2 = ((_DAT_183256418 << 0x3c | _DAT_183256418 >> 4) ^ 0x7cb4fff7) * 0x6f44f999dc7ee9bb;
  _DAT_1832564e0 = (_DAT_1832564e0 ^ uVar2) + 0x18947e71 ^ 0x9481ffadad0b3c5e;
  _DAT_183256490 = (_DAT_183256490 * 0x3ac300c066190f6b ^ _DAT_1832564e0) + uVar2;
  _DAT_1832563c8 = _DAT_183256490 ^ _DAT_1832564e0;
  _DAT_1832564f0 = 0x18947e71;
  uVar2 = (~_DAT_183256340 + 0x3128fce3) *
          ((_DAT_183256330 ^ 0xe043a2a3) + (ulonglong)((uint)_DAT_183256330 & 0xe043a2a3) * 2);
  uVar2 = (uVar2 | _DAT_183256308) + (uVar2 & _DAT_183256308);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832563e0 = func_0x00018a73c5a0((uVar2 | 0xd16b5e41) + (ulonglong)((uint)uVar2 & 0xd16b5e41))
  ;
  uVar2 = (_DAT_1832563e0 ^ 0x64618186) << 0x2f | (_DAT_1832563e0 ^ 0x64618186) >> 0x11;
  _DAT_183256390 = _DAT_183256460 ^ uVar2 ^ 0x958a7e68;
  _DAT_183256378 = (_DAT_183256378 ^ uVar2) + 0x958a7e68 ^ 0x716f9f4ef50a2b82;
  _DAT_183256388 = (_DAT_183256388 * -0x58b241042415c877 ^ _DAT_183256378) + uVar2;
  _DAT_183256408 = _DAT_183256388 ^ _DAT_183256378;
  _DAT_1832564f0 = 0x958a7e68;
  uVar2 = (~_DAT_183256438 + 0x958a7e69) *
          ((_DAT_183256318 ^ 0x11a85d4d) + (ulonglong)((uint)_DAT_183256318 & 0x11a85d4d) * 2);
  uVar2 = (uVar2 | _DAT_183256438) + (uVar2 & _DAT_183256438);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832564d0 = func_0x00018a73c5a0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_183256480 = _DAT_1832564d0 ^ 0x575a82110300f428;
  _DAT_1832564e0 = _DAT_1832564e0 ^ _DAT_183256480 ^ 0x5aa377f7ff9ba251;
  _DAT_183256428 = (_DAT_183256428 * -0x42874d1e33796c3d ^ _DAT_1832564e0) + _DAT_183256480;
  _DAT_183256440 = _DAT_183256428 ^ _DAT_1832564e0;
  _DAT_1832563a8 = 0;
  uVar2 = ((_DAT_1832563d8 ^ 0x8422231d) + (ulonglong)((uint)_DAT_1832563d8 & 0x8422231d) * 2) *
          -_DAT_1832563b8;
  uVar2 = (uVar2 | _DAT_183256398) + (uVar2 & _DAT_183256398);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183256388 = func_0x00018a73c5a0((uVar2 | 0x8422231d) + (ulonglong)((uint)uVar2 & 0x8422231d))
  ;
  uVar2 = _DAT_183256388 & 0xffffffffe0000000;
  _DAT_1832563d0 = _DAT_183256460 ^ uVar2 ^ 0x38;
  _DAT_183256468 = (_DAT_183256468 ^ uVar2) + 0x38 ^ 0xb704ff4add01a56e;
  _DAT_183256478 = (_DAT_183256478 * 0x237c0103692629ab ^ _DAT_183256468) + uVar2;
  _DAT_183256470 = _DAT_183256478 ^ _DAT_183256468;
  _DAT_183256328 = 0x38;
  uVar2 = (~_DAT_1832564f0 + 0x100000000) *
          ((_DAT_183256368 ^ 0xf896dcd2) + (ulonglong)((uint)_DAT_183256368 & 0xf896dcd2) * 2);
  uVar2 = (uVar2 | _DAT_183256378) + (uVar2 & _DAT_183256378);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183256390 = func_0x00018a73c5a0((uVar2 | 0x769232d) + (ulonglong)((uint)uVar2 & 0x769232d));
  uVar2 = (_DAT_183256390 ^ 0xffffffff) * -0x919abe99c04df81;
  _DAT_183256490 = (_DAT_183256490 ^ uVar2) + 0x834b0008 ^ 0xd6e93e26e30951e3;
  _DAT_183256420 = (_DAT_183256420 * 0x14bf725f577921dd ^ _DAT_183256490) + uVar2;
  _DAT_183256438 = _DAT_183256420 ^ _DAT_183256490;
  _DAT_183256350 = 0x834b0008;
  uVar2 = (~_DAT_1832563d0 + 0x834b0009) *
          ((_DAT_183256398 ^ 0xf896dcd2) + (ulonglong)((uint)_DAT_183256398 & 0xf896dcd2) * 2);
  uVar2 = (uVar2 | _DAT_1832563e8) + (uVar2 & _DAT_1832563e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183256348 = func_0x00018a73c5a0((uVar2 | 0x7bdddcda) + (ulonglong)((uint)uVar2 & 0x7bdddcda))
  ;
  _DAT_183256420 = _DAT_183256420 ^ _DAT_183256348 ^ 0xff23d53b22a303de;
  _DAT_1832564d0 = (_DAT_1832564d0 * -0x3aefa9b6d1582f85 ^ _DAT_183256420) + _DAT_183256348;
  _DAT_183256358 = _DAT_1832564d0 ^ _DAT_183256420;
  _DAT_1832564b8 = 0;
  _DAT_183256460 = func_0x00018a73c5a0(_DAT_183256438 ^ 0xffdd0083e5002160);
  _DAT_183256378 = _DAT_183256378 ^ _DAT_183256460 & 0xffffffffffffffc0 ^ 0xdfea1b41fbf92137;
  _DAT_183256428 =
       (_DAT_183256428 * 0x305eda93be331ec5 ^ _DAT_183256378) +
       (_DAT_183256460 & 0xffffffffffffffc0);
  _DAT_183256470 = 0;
  uVar2 = ((_DAT_1832563e8 ^ 0x8422231d) + (ulonglong)((uint)_DAT_1832563e8 & 0x8422231d) * 2) *
          -_DAT_183256388;
  uVar2 = (uVar2 | _DAT_183256498) + (uVar2 & _DAT_183256498);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018a73c5a0((uVar2 | 0x8422231d) + (ulonglong)((uint)uVar2 & 0x8422231d));
  uVar3 = uVar2 & 0x7fffffffffffffff;
  _DAT_183256400 = _DAT_183256478 ^ uVar3 ^ 0x38;
  _DAT_183256420 = (uVar2 ^ uVar3) + 0x38 ^ 0xacfa3663d0cd841f;
  _DAT_183256490 = (_DAT_183256490 * 0x4ea7fe9fff3ef493 ^ _DAT_183256420) + uVar3;
  _DAT_1832563c8 = _DAT_183256490 ^ _DAT_183256420;
  _DAT_183256468 = 0x38;
  switch(iStack000000000000002c < 0x38) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a732254 (image 18a732254) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a732254(void)

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



// ===== continuation @ rva a52cc7a (image 18a52cc7a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cc7a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1817abf48)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva a52cc86 (image 18a52cc86) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52cc86(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva a52cca3 (image 18a52cca3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cca3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1817abf58)();
  return;
}



// ===== continuation @ rva a52ccac (image 18a52ccac) =====

void FUN_18a52ccac(void)

{
  return;
}



// ===== continuation @ rva a52ccad (image 18a52ccad) =====

undefined4 * FUN_18a52ccad(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva a52cd6f (image 18a52cd6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cd6f(void)

{
  FUN_190dd72e0();
  (*_DAT_1817abfa8)();
  return;
}



// ===== continuation @ rva a52ccfc (image 18a52ccfc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52ccfc(void)

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



// ===== continuation @ rva a52d12f (image 18a52d12f) =====

void FUN_18a52d12f(void)

{
  return;
}



// ===== continuation @ rva a52cede (image 18a52cede) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cede(void)

{
  FUN_190dd9df0();
  (*_DAT_1817ac138)();
  return;
}



// ===== continuation @ rva a52cbc8 (image 18a52cbc8) =====

void FUN_18a52cbc8(void)

{
  return;
}



// ===== continuation @ rva a52cb07 (image 18a52cb07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cb07(void)

{
  FUN_190ddfc90();
  (*_DAT_1817abe48)();
  return;
}



// ===== continuation @ rva a52cc3c (image 18a52cc3c) =====

void FUN_18a52cc3c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a52cc19 (image 18a52cc19) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cc19(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_1817abe08)();
    return;
  }
  (*_DAT_1817abe08)();
  return;
}



// ===== continuation @ rva a52cbec (image 18a52cbec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cbec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2a0))();
  (*_DAT_1817abdf8)();
  return;
}



// ===== continuation @ rva a52cb74 (image 18a52cb74) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cb74(void)

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



// ===== continuation @ rva a52cb5e (image 18a52cb5e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52cb5e(void)

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



// ===== continuation @ rva a52cbad (image 18a52cbad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52cbad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1817abe08)();
  return;
}



// ===== continuation @ rva a52cb3a (image 18a52cb3a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52cb3a(void)

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



// ===== continuation @ rva a52d13a (image 18a52d13a) =====

void FUN_18a52d13a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a52d0c4 (image 18a52d0c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52d0c4(void)

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



// ===== continuation @ rva a52d127 (image 18a52d127) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52d127(void)

{
  (*_DAT_1817ac118)();
  return;
}



// ===== continuation @ rva a52cd97 (image 18a52cd97) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52cd97(void)

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



// ===== continuation @ rva a52ce4d (image 18a52ce4d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52ce4d(void)

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



// ===== continuation @ rva a52d02f (image 18a52d02f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52d02f(void)

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



// ===== continuation @ rva a52d0e8 (image 18a52d0e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52d0e8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x430))();
  (*_DAT_1817ac068)();
  return;
}



// ===== continuation @ rva a52d2b3 (image 18a52d2b3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52d2b3(void)

{
  int iVar1;
  longlong *unaff_RDI;
  undefined4 in_R9D;
  undefined4 uStack00000000000000a4;
  
  uStack00000000000000a4 = in_R9D;
  iVar1 = (**(code **)(*unaff_RDI + 0x558))();
  switch(0 < iVar1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a52d25f (image 18a52d25f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52d25f(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a52d2fe (image 18a52d2fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52d2fe(void)

{
  FUN_190dd72e0();
  (*_DAT_1817ac3b0)();
  return;
}



// ===== continuation @ rva a5303ee (image 18a5303ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a5303ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000080;
  
  uStack0000000000000080 = param_2;
  (*_DAT_1817ac380)(_DAT_183254c58,_DAT_183255048);
  return;
}



// ===== continuation @ rva a53a075 (image 18a53a075) =====

void FUN_18a53a075(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a52d615 (image 18a52d615) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52d615(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong unaff_RBX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong unaff_RSI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uStack000000000000004c;
  uint uStack000000000000009c;
  
  auVar23._8_8_ = unaff_RSI;
  auVar23._0_8_ = _DAT_18001b640;
  auVar15 = pshufb(auVar23 ^ _DAT_1817ac3f0,_DAT_1800170c0);
  uVar10 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar10 + _DAT_183254ce8;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_183254e20 ^ uVar10;
  }
  _DAT_183254d08 = func_0x00018a53a080(SUB161(auVar23 ^ _DAT_1817ac3f0,5) ^ uVar3);
  uVar8 = _DAT_1817ac144;
  uVar6 = _DAT_1817ac140;
  auVar23 = _DAT_1800170c0;
  _DAT_183255008 =
       (_DAT_183255008 ^ _DAT_183254d08 & 0x7fffffffffffffff) - unaff_RSI ^ 0xef853661f81f80d8;
  _DAT_183254cf0 =
       (_DAT_183254cf0 * 0x171cb0409c3fcb1f ^ _DAT_183255008) +
       (_DAT_183254d08 & 0x7fffffffffffffff) ^ _DAT_183255008;
  _DAT_183254db8 = (ulonglong)(uint)-(int)unaff_RSI;
  uVar2 = (ulonglong)_DAT_1817ac140;
  uStack000000000000004c = _DAT_1817ac140;
  uVar9 = (ulonglong)_DAT_1817ac144;
  uVar10 = uVar2 | 0xc4d8e4c0;
  auVar15._8_8_ = _UNK_1817ac408;
  auVar15._0_8_ = uVar9 ^ unaff_RBX;
  uVar5 = (uint)uVar10;
  auVar16 = pshufb(auVar15 ^ _DAT_1817ac410,_DAT_1800170c0);
  uVar11 = auVar16._8_8_ + auVar16._0_8_;
  uVar3 = uVar11 + _DAT_1832550c0;
  if (auVar16._4_4_ < 0) {
    uVar3 = _DAT_183254ff0 ^ uVar11;
  }
  _DAT_183254d20 = func_0x00018a53a080(SUB161(auVar15 ^ _DAT_1817ac410,5) ^ uVar3);
  uVar3 = ((uVar9 * 0x135577c5 ^ _DAT_183254d20) & 0x7fffffffffffffff) * 0x46dc8d336f700243;
  uVar9 = uVar9 ^ 0x135577c5;
  _DAT_183254dc8 = (_DAT_183254dc8 ^ uVar3) + uVar9 ^ 0x5b04bd187482bb06;
  _DAT_183254d60 = (_DAT_183254d60 * -0x1f01ec366e377dbf ^ _DAT_183254dc8) + uVar3;
  _DAT_183254ef0 = _DAT_183254d60 ^ _DAT_183254dc8;
  iVar1 = uVar6 * uVar6;
  uVar6 = iVar1 * -0x5cadfdd7;
  auVar16._8_4_ = uVar6;
  auVar16._0_8_ = _DAT_18001b640;
  auVar16._12_4_ = 0;
  auVar15 = pshufb(auVar16 ^ _DAT_1817ac420,auVar23);
  uVar11 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar11 + _DAT_1832550b8;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_183255058 ^ uVar11;
  }
  _DAT_183254d68 = uVar9;
  _DAT_183255060 = func_0x00018a53a080(SUB161(auVar16 ^ _DAT_1817ac420,5) ^ uVar3);
  auVar33._8_4_ = 0xffffffff;
  auVar33._0_8_ = 0xffffffffffffffff;
  auVar33._12_4_ = 0xffffffff;
  uVar7 = iVar1 * 0x5cadfdd7;
  _DAT_183254e40 = (ulonglong)uVar7;
  _DAT_183254fd0 = _DAT_183254fd0 - uVar6 ^ 0x1633db2e854a39a1;
  _DAT_183254b60 = _DAT_183254da0 * 0x7f1bb8b182b50105;
  _DAT_183254da0 = _DAT_183254b60 ^ _DAT_183254fd0;
  auVar17._8_4_ = uVar6;
  auVar17._0_8_ = _DAT_18010f5d0;
  auVar17._12_4_ = 0;
  auVar15 = pshufb(auVar17 ^ _DAT_1817ac430,auVar23);
  uVar11 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar11 + _DAT_183254ea8;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_183254eb0 ^ uVar11;
  }
  _DAT_183255048 = func_0x00018a53a080(uVar3 ^ 0xb0);
  uVar14 = _DAT_1800f7550 ^ uVar6;
  uVar26 = uVar6 & _DAT_1800f7550;
  uVar3 = ((ulonglong)uVar6 * 0x3f ^ _DAT_183255048) & 0x7fffffffffffffff;
  uVar11 = ((ulonglong)_DAT_1817ac4b0 * (ulonglong)uVar14 << 0x20) +
           (ulonglong)_DAT_1817ac4a0 * (ulonglong)uVar14 +
           ((ulonglong)(uVar6 | _DAT_1800f7550) * (ulonglong)_DAT_1817ac490 << 0x20) +
           (ulonglong)_DAT_1817ac480 * (ulonglong)(uVar6 | _DAT_1800f7550) +
           ((ulonglong)_DAT_1817ac470 * (ulonglong)uVar26 << 0x20) +
           (ulonglong)_DAT_1817ac460 * (ulonglong)uVar26 +
           ((ulonglong)_DAT_1817ac450 * (ulonglong)uVar6 << 0x20) +
           (ulonglong)_DAT_1817ac440 * (ulonglong)uVar6 +
           (-(((ulonglong)uVar14 * (ulonglong)_DAT_1817ac530 << 0x20) +
             (ulonglong)_DAT_1817ac520 * (ulonglong)uVar14) -
           (((ulonglong)uVar26 * (ulonglong)_DAT_1817ac510 << 0x20) +
            (ulonglong)_DAT_1817ac500 * (ulonglong)uVar26 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_1817ac4f0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_1817ac4e0)) + 0x9a86fe17f5015b94;
  _DAT_183254c80 = _DAT_183255048 ^ uVar3 ^ uVar11;
  _DAT_183255098 = (_DAT_183255098 ^ uVar3) + uVar11 ^ 0xafc88dccd3444c63;
  _DAT_183254c30 = (_DAT_183254c30 * 0x62e36a896897d2c5 ^ _DAT_183255098) + uVar3;
  _DAT_183254c88 = _DAT_183254c30 ^ _DAT_183255098;
  uVar6 = (uint)uVar11;
  auVar18._4_4_ = 0;
  auVar18._0_4_ = uVar6 ^ 0x84222325;
  auVar18._8_4_ = uVar7;
  auVar18._12_4_ = 0;
  auVar15 = pshufb(auVar18 ^ _DAT_1817ac540,auVar23);
  uVar12 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar12 + _DAT_183254f10;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_183254bb8 ^ uVar12;
  }
  _DAT_183254ec0 = uVar11 & 0xffffffff;
  uVar3 = func_0x00018a53a080(SUB161(auVar18 ^ _DAT_1817ac540,5) ^ uVar3);
  uVar12 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = ~(ulonglong)
            ((uint)uVar3 ^
            (uint)((((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4))
           & uVar11 & 0xffffffff;
  uVar38 = uVar6 & uVar7;
  uVar14 = uVar6 ^ uVar7;
  uVar26 = uVar7 ^ 0xffffffff;
  uVar4 = ((ulonglong)_DAT_1817ac610 * (ulonglong)uVar26 + _DAT_1817ac620 << 0x20) +
          (ulonglong)_DAT_1817ac600 * (ulonglong)uVar26 +
          ((ulonglong)(uVar6 ^ 0xffffffff) * (ulonglong)_DAT_1817ac5e0 + _DAT_1817ac5f0 << 0x20) +
          (ulonglong)_DAT_1817ac5d0 * (ulonglong)(uVar6 ^ 0xffffffff) +
          ((ulonglong)_DAT_1817ac5c0 * (ulonglong)uVar14 << 0x20) +
          (ulonglong)_DAT_1817ac5b0 * (ulonglong)uVar14 +
          ((ulonglong)_DAT_1817ac5a0 * (ulonglong)uVar38 << 0x20) +
          (ulonglong)_DAT_1817ac590 * (ulonglong)uVar38 +
          ((ulonglong)_DAT_1817ac580 * (ulonglong)uVar7 << 0x20) +
          (ulonglong)_DAT_1817ac570 * (ulonglong)uVar7 +
          (ulonglong)_DAT_1817ac550 * (uVar11 & 0xffffffff) +
          ((ulonglong)_DAT_1817ac560 * (uVar11 & 0xffffffff) << 0x20) +
          (-(((ulonglong)uVar26 * (ulonglong)_DAT_1817ac700 + _DAT_1817ac710 << 0x20) +
            (ulonglong)_DAT_1817ac6f0 * (ulonglong)uVar26) -
          (((ulonglong)uVar14 * (ulonglong)_DAT_1817ac6e0 << 0x20) +
           (ulonglong)_DAT_1817ac6d0 * (ulonglong)uVar14 +
           ((ulonglong)(uVar6 | uVar7) * (ulonglong)_DAT_1817ac6c0 << 0x20) +
           (ulonglong)_DAT_1817ac6b0 * (ulonglong)(uVar6 | uVar7) +
          ((ulonglong)uVar38 * (ulonglong)_DAT_1817ac6a0 << 0x20) +
          (ulonglong)_DAT_1817ac690 * (ulonglong)uVar38 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_1817ac680 << 0x20) +
          (ulonglong)_DAT_1817ac670 * (ulonglong)uVar7 +
          (ulonglong)_DAT_1817ac650 * (uVar11 & 0xffffffff) +
          ((uVar11 & 0xffffffff) * (ulonglong)_DAT_1817ac660 << 0x20))) + 0x4d16ad969ced61bf;
  _DAT_183254fb0 = _DAT_183254bf0 ^ uVar12 ^ uVar4;
  _DAT_1832550e8 = (uVar3 ^ uVar12) + uVar4 ^ 0x264139f0d37caa38;
  _DAT_183254b48 = (_DAT_183254b48 * 0x373d05ec8b4bfedd ^ _DAT_1832550e8) + uVar12;
  _DAT_183254f58 = _DAT_183254b48 ^ _DAT_1832550e8;
  uVar11 = uVar4 & 0xffffffff;
  uVar7 = uVar8 * uVar8 * -0x5235e72c;
  uVar13 = CONCAT44(0,uVar7);
  uVar3 = (_DAT_183254d90 ^ 0x84222325) + _DAT_183254eb8 + 0x84222325;
  uVar12 = (uVar13 ^ _DAT_183254eb8) + _DAT_183254d90 + uVar13;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183254d90 ^ 0x84222325;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar13 ^ _DAT_183254eb8;
  _DAT_183254b38 = uVar11;
  _DAT_1832550b0 =
       func_0x00018a53a080((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183254d90 + uVar13) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183254eb8 + 0x84222325));
  uVar14 = uVar8 * uVar8 * 0x5235e72c;
  _DAT_183254b48 = (ulonglong)uVar14;
  _DAT_183254c98 = _DAT_183254c98 - uVar13 ^ 0xad4a6a9c29d4a9a5;
  _DAT_183254f18 = _DAT_183254b50 * -0x2a86b5f0f672d3ed;
  _DAT_183254b50 = _DAT_183254f18 ^ _DAT_183254c98;
  uVar12 = uVar11 ^ 0x84222325;
  uVar3 = ((_DAT_183254f60 ^ uVar12) + (ulonglong)((uint)_DAT_183254f60 & (uint)uVar12) * 2) *
          (uVar13 - _DAT_183254b88);
  uVar3 = (uVar3 | _DAT_1832550a8) + (uVar3 & _DAT_1832550a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183255070 =
       func_0x00018a53a080((uVar12 ^ uVar13 | uVar3) +
                           (ulonglong)((uint)(uVar12 ^ uVar13) & (uint)uVar3));
  uVar11 = ~_DAT_183255070 & uVar11;
  uVar3 = uVar11 >> 1 | uVar11;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           uVar11;
  uVar3 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar11 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar11;
  uVar6 = (uint)uVar4;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar13;
  uVar38 = uVar6 & uVar7;
  uVar26 = uVar6 | uVar7;
  uVar6 = uVar6 ^ uVar7;
  uVar37 = SUB164(auVar28 ^ auVar33,0);
  uVar12 = ((((ulonglong)_DAT_1817ac790 * (ulonglong)uVar6 << 0x20) +
             (ulonglong)_DAT_1817ac780 * (ulonglong)uVar6 +
             ((ulonglong)_DAT_1817ac770 * (ulonglong)uVar26 << 0x20) +
             (ulonglong)_DAT_1817ac760 * (ulonglong)uVar26 +
            ((ulonglong)_DAT_1817ac750 * (ulonglong)uVar38 << 0x20) +
            (ulonglong)_DAT_1817ac740 * (ulonglong)uVar38 +
            ((ulonglong)_DAT_1817ac730 * (ulonglong)uVar7 << 0x20) +
            (ulonglong)_DAT_1817ac720 * (ulonglong)uVar7 +
            (uVar4 & 0xffffffff) * (ulonglong)_DAT_1817ac720 +
            ((uVar4 & 0xffffffff) * (ulonglong)_DAT_1817ac730 << 0x20)) -
           ((ulonglong)uVar37 * (ulonglong)_DAT_1817ac7c0 +
            ((SUB168(auVar28 ^ auVar33,0) >> 0x20) * (ulonglong)_DAT_1817ac7c0 +
             (ulonglong)_DAT_1817ac7d0 * (ulonglong)uVar37 << 0x20) +
            ((ulonglong)uVar6 * (ulonglong)_DAT_1817ac7f0 << 0x20) +
            (ulonglong)_DAT_1817ac7e0 * (ulonglong)uVar6 +
            ((ulonglong)uVar38 * (ulonglong)_DAT_1817ac7f0 << 0x20) +
            (ulonglong)uVar38 * (ulonglong)_DAT_1817ac7e0 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_1817ac7d0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_1817ac7c0 +
           ((ulonglong)uVar26 * (ulonglong)_DAT_1817ac810 << 0x20) +
           (ulonglong)_DAT_1817ac800 * (ulonglong)uVar26)) + 0x24972cdae48ebd96;
  _DAT_1832550a8 = _DAT_183254f48 ^ uVar11 ^ uVar12;
  _DAT_183254e38 = (_DAT_183254e38 ^ uVar11) + uVar12 ^ 0x12b3500056752ba5;
  _DAT_183254e40 = (_DAT_183254e40 * 0x15e4c2d43576eeab ^ _DAT_183254e38) + uVar11;
  _DAT_183255048 = _DAT_183254e40 ^ _DAT_183254e38;
  uVar6 = (uint)uVar12;
  _DAT_183254eb8 = uVar12 & 0xffffffff;
  auVar19._4_4_ = 0;
  auVar19._0_4_ = uVar6 ^ 0x84222325;
  auVar19._8_4_ = uVar14;
  auVar19._12_4_ = 0;
  auVar15 = pshufb(auVar19 ^ _DAT_1817ac820,auVar23);
  uVar11 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar11 + _DAT_183254e48;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_183254e30 ^ uVar11;
  }
  _DAT_183254fa0 = func_0x00018a53a080(SUB161(auVar19 ^ _DAT_1817ac820,5) ^ uVar3);
  uVar11 = (uVar12 & 0xffffffff) * (ulonglong)uVar14;
  uVar7 = uVar14 ^ 0xffffffff;
  uVar3 = _DAT_183254fa0 << 0xb | _DAT_183254fa0 >> 0x35;
  lVar29 = (uVar11 & 0xffffffff) * (ulonglong)_DAT_1817ac8b0 +
           ((ulonglong)_DAT_1817ac8c0 * (uVar11 & 0xffffffff) +
            (uVar11 >> 0x20) * (ulonglong)_DAT_1817ac8b0 << 0x20);
  uVar11 = ((((ulonglong)_DAT_1817ac850 * (ulonglong)uVar7 + _DAT_1817ac8a0 << 0x20) +
             (ulonglong)_DAT_1817ac890 * (ulonglong)uVar7 +
             (ulonglong)_DAT_1817ac860 * (ulonglong)uVar14 +
             ((ulonglong)uVar14 * (ulonglong)_DAT_1817ac850 << 0x20) +
             ((uVar12 & 0xffffffff) * (ulonglong)_DAT_1817ac840 << 0x20) +
             (ulonglong)_DAT_1817ac830 * (uVar12 & 0xffffffff) +
             ((ulonglong)(uVar6 ^ 0xffffffff) * (ulonglong)_DAT_1817ac840 + _DAT_1817ac880 << 0x20)
             + (ulonglong)_DAT_1817ac870 * (ulonglong)(uVar6 ^ 0xffffffff) + lVar29) -
           (((ulonglong)uVar7 * (ulonglong)_DAT_1817ac980 + _DAT_1817ac990 << 0x20) +
            (ulonglong)_DAT_1817ac970 * (ulonglong)uVar7 + lVar29 +
           ((ulonglong)(uVar6 ^ uVar14) * (ulonglong)_DAT_1817ac960 << 0x20) +
           (ulonglong)_DAT_1817ac950 * (ulonglong)(uVar6 ^ uVar14) +
           ((ulonglong)(uVar6 | uVar14) * (ulonglong)_DAT_1817ac940 << 0x20) +
           (ulonglong)_DAT_1817ac930 * (ulonglong)(uVar6 | uVar14) +
           ((ulonglong)(uVar6 & uVar14) * (ulonglong)_DAT_1817ac920 << 0x20) +
           (ulonglong)_DAT_1817ac910 * (ulonglong)(uVar6 & uVar14) +
           ((ulonglong)uVar14 * (ulonglong)_DAT_1817ac900 << 0x20) +
           (ulonglong)_DAT_1817ac8f0 * (ulonglong)uVar14 +
           (ulonglong)_DAT_1817ac8d0 * (uVar12 & 0xffffffff) +
           ((uVar12 & 0xffffffff) * (ulonglong)_DAT_1817ac8e0 << 0x20))) + 0x8a4cf26c429d641d;
  _DAT_183254f80 = _DAT_183254bd0 ^ uVar3 ^ uVar11;
  _DAT_183254e98 = (_DAT_183254e98 ^ uVar3) + uVar11 ^ 0xeadc14fd2eeccb9d;
  _DAT_183254df8 = (_DAT_183254df8 * 0x704bc6e99f624209 ^ _DAT_183254e98) + uVar3;
  _DAT_183254ee0 = _DAT_183254df8 ^ _DAT_183254e98;
  uVar6 = (uint)uVar11;
  iVar1 = uStack000000000000004c * uVar8;
  uVar8 = iVar1 * 0x35871db7;
  uVar4 = CONCAT44(0,uVar8);
  auVar34._8_4_ = uVar8;
  auVar34._0_8_ = _DAT_18001b640;
  auVar34._12_4_ = 0;
  auVar15 = pshufb(auVar34 ^ _DAT_1817ac9a0,auVar23);
  uVar12 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar12 + _DAT_183254b70;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_183254da0 ^ uVar12;
  }
  _DAT_183254fd8 = uVar11 & 0xffffffff;
  _DAT_183254b70 = func_0x00018a53a080(SUB161(auVar34 ^ _DAT_1817ac9a0,5) ^ uVar3);
  uVar3 = _DAT_183254b70 >> 1 | _DAT_183254b70;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_183254b70;
  uVar7 = iVar1 * -0x35871db7;
  uVar12 = (ulonglong)uVar7;
  _DAT_183254c08 = (_DAT_183254c08 ^ uVar3) - uVar4 ^ 0x724c225ef8d7367;
  _DAT_183254ec8 = (_DAT_183254ec8 * -0x2a3700e647c21861 ^ _DAT_183254c08) + uVar3;
  _DAT_183254e10 = _DAT_183254ec8 ^ _DAT_183254c08;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar4;
  auVar20._4_4_ = 0;
  auVar20._0_4_ = uVar6 ^ 0x84222325;
  auVar20._8_4_ = uVar8;
  auVar20._12_4_ = 0;
  auVar15 = pshufb(auVar20 ^ _DAT_1817ac9b0,auVar23);
  uVar13 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar13 + _DAT_183254b18;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_183254df8 ^ uVar13;
  }
  _DAT_183254ff8 = uVar12;
  _DAT_183254b18 = func_0x00018a53a080(SUB161(auVar20 ^ _DAT_1817ac9b0,5) ^ uVar3);
  uVar26 = uVar6 & uVar8;
  uVar14 = uVar6 ^ uVar8;
  uVar3 = (uVar11 & 0xffffffff | uVar4) ^ _DAT_183254b18;
  auVar31._8_4_ = 0xffffffff;
  auVar31._0_8_ = 0xffffffffffffffff;
  auVar31._12_4_ = 0xffffffff;
  uVar38 = SUB164(auVar35 ^ auVar31,0);
  uVar4 = ((((ulonglong)_DAT_1817aca30 * (ulonglong)uVar14 << 0x20) +
            (ulonglong)_DAT_1817aca20 * (ulonglong)uVar14 +
            ((ulonglong)(uVar6 | uVar8) * (ulonglong)_DAT_1817aca10 << 0x20) +
            (ulonglong)_DAT_1817aca00 * (ulonglong)(uVar6 | uVar8) +
           ((ulonglong)_DAT_1817ac9f0 * (ulonglong)uVar26 << 0x20) +
           (ulonglong)_DAT_1817ac9e0 * (ulonglong)uVar26 +
           ((ulonglong)_DAT_1817ac9d0 * (ulonglong)uVar8 << 0x20) +
           (ulonglong)_DAT_1817ac9c0 * (ulonglong)uVar8 +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_1817ac9c0 +
           ((uVar11 & 0xffffffff) * (ulonglong)_DAT_1817ac9d0 << 0x20)) -
          ((ulonglong)uVar38 * (ulonglong)_DAT_1817acb10 +
           ((ulonglong)_DAT_1817acb20 * (ulonglong)uVar38 +
            (SUB168(auVar35 ^ auVar31,0) >> 0x20) * (ulonglong)_DAT_1817acb10 << 0x20) +
           ((ulonglong)(uVar6 ^ 0xffffffff) * (ulonglong)_DAT_1817acaf0 + _DAT_1817acb00 << 0x20) +
           (ulonglong)_DAT_1817acae0 * (ulonglong)(uVar6 ^ 0xffffffff) +
          ((ulonglong)uVar14 * (ulonglong)_DAT_1817acad0 << 0x20) +
          (ulonglong)_DAT_1817acac0 * (ulonglong)uVar14 +
          ((ulonglong)uVar26 * (ulonglong)_DAT_1817acab0 << 0x20) +
          (ulonglong)_DAT_1817acaa0 * (ulonglong)uVar26 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_1817aca90 << 0x20) +
          (ulonglong)_DAT_1817aca80 * (ulonglong)uVar8 +
          (ulonglong)_DAT_1817aca60 * (uVar11 & 0xffffffff) +
          ((uVar11 & 0xffffffff) * (ulonglong)_DAT_1817aca70 << 0x20))) + 0x90329068b7b46b21;
  _DAT_1832550f0 = _DAT_183254ca0 ^ uVar3 ^ uVar4;
  _DAT_183254ba0 = (_DAT_183254ba0 ^ uVar3) + uVar4 ^ 0xa4565c8933ae1daf;
  _DAT_183254bc8 = (_DAT_183254bc8 * -0x7e79e6c4c95cb827 ^ _DAT_183254ba0) + uVar3;
  _DAT_183254be0 = _DAT_183254bc8 ^ _DAT_183254ba0;
  uVar13 = uVar4 & 0xffffffff;
  uVar3 = uVar13 ^ 0x84222325 ^ _DAT_183254b88;
  lVar29 = (uVar13 ^ 0x84222325) + _DAT_183254d98;
  uVar11 = uVar3 + lVar29;
  uVar27 = (uVar12 ^ _DAT_183254d98) + _DAT_183254b88 + uVar12;
  uVar3 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar3;
  uVar11 = (uVar27 * 0x2000 | uVar27 >> 0x33) ^ uVar12 ^ _DAT_183254d98;
  _DAT_183254f98 = uVar13;
  _DAT_183254be8 =
       func_0x00018a53a080((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183254b88 + uVar12) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar29);
  uVar6 = (uint)uVar4;
  uVar8 = uVar7 ^ 0xffffffff;
  uVar11 = _DAT_183254be8 << 0x15 | _DAT_183254be8 >> 0x2b;
  uVar3 = uVar11 >> 1 | uVar11;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           uVar11;
  uVar12 = ((ulonglong)_DAT_1817acb30 * (ulonglong)uVar8 + _DAT_1817acb60 << 0x20) +
           (ulonglong)_DAT_1817acb50 * (ulonglong)uVar8 +
           (ulonglong)uVar7 * (ulonglong)_DAT_1817acb40 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_1817acb30 << 0x20) + uVar13 +
           (-(((ulonglong)uVar8 * (ulonglong)_DAT_1817acc40 + _DAT_1817acc50 << 0x20) +
             (ulonglong)_DAT_1817acc30 * (ulonglong)uVar8) -
           (((ulonglong)(uVar6 ^ uVar7) * (ulonglong)_DAT_1817acc20 << 0x20) +
            (ulonglong)_DAT_1817acc10 * (ulonglong)(uVar6 ^ uVar7) +
            ((ulonglong)(uVar6 | uVar7) * (ulonglong)_DAT_1817acc00 << 0x20) +
            (ulonglong)_DAT_1817acbf0 * (ulonglong)(uVar6 | uVar7) +
           ((ulonglong)(uVar6 & uVar7) * (ulonglong)_DAT_1817acbe0 << 0x20) +
           (ulonglong)_DAT_1817acbd0 * (ulonglong)(uVar6 & uVar7) +
           ((ulonglong)uVar7 * (ulonglong)_DAT_1817acbc0 << 0x20) +
           (ulonglong)_DAT_1817acbb0 * (ulonglong)uVar7 +
           (ulonglong)_DAT_1817acb90 * (uVar4 & 0xffffffff) +
           ((uVar4 & 0xffffffff) * (ulonglong)_DAT_1817acba0 << 0x20))) + 0x413a36043264d57e;
  _DAT_183254d90 = _DAT_183254d90 ^ uVar11 ^ uVar12;
  _DAT_183254e88 = (_DAT_183254e88 ^ uVar11) + uVar12 ^ 0x1067b3c462b4696b;
  _DAT_183254ea0 = (_DAT_183254ea0 * 0x710563615eb43407 ^ _DAT_183254e88) + uVar11;
  _DAT_183254d78 = _DAT_183254ea0 ^ _DAT_183254e88;
  _DAT_1832550a0 = uVar12 & 0xffffffff;
  uStack000000000000009c = (uint)uVar9 + uVar5;
  uVar4 = uVar10 ^ 0x84222325;
  uStack000000000000004c = (uint)uVar4;
  uVar3 = ((_DAT_183254c60 ^ uVar4) + (ulonglong)(uStack000000000000004c & (uint)_DAT_183254c60) * 2
          ) * (uVar9 - _DAT_183254dc0);
  uVar3 = (uVar3 | _DAT_1832550c0) + (uVar3 & _DAT_1832550c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183254f10 =
       func_0x00018a53a080((uVar4 ^ uVar9 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ uVar9) & (uint)uVar3));
  uVar3 = (uVar10 * uVar9 ^ _DAT_183254f10) & 0x7ffffffffff;
  uVar13 = uVar10 ^ uVar9;
  _DAT_183254e88 = (_DAT_183254e88 ^ uVar3) + uVar13 ^ 0xfcbfbcd2b501a7be;
  _DAT_183254ee0 = (_DAT_183254ee0 * 0x13de94eeb2cc09cb ^ _DAT_183254e88) + uVar3;
  _DAT_183255088 = _DAT_183254ee0 ^ _DAT_183254e88;
  auVar21._8_8_ = uVar9;
  auVar21._0_8_ = uVar4;
  auVar15 = pshufb(auVar21 ^ _DAT_1817acc60,auVar23);
  uVar11 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar11 + _DAT_183255040;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_183254c98 ^ uVar11;
  }
  _DAT_183254b70 = uVar13;
  _DAT_183254e00 = func_0x00018a53a080(SUB161(auVar21 ^ _DAT_1817acc60,5) ^ uVar3);
  uVar3 = (_DAT_183254e00 << 0x21 | _DAT_183254e00 >> 0x1f) ^ uVar10;
  uVar6 = uVar5 & (uint)uVar9;
  _DAT_183254ba0 = (ulonglong)uVar6;
  _DAT_183254c50 = (_DAT_183254c50 ^ uVar3) + _DAT_183254ba0 ^ 0x5d4e5df2634f8dd;
  _DAT_183254de8 = (_DAT_183254de8 * -0x81535fbc9234809 ^ _DAT_183254c50) + uVar3;
  _DAT_183254c90 = _DAT_183254de8 ^ _DAT_183254c50;
  uVar6 = uVar6 * 2;
  uVar9 = CONCAT44(0,uVar6);
  uVar3 = uVar13 ^ 0x84222325 ^ _DAT_183254c40;
  lVar29 = (uVar13 ^ 0x84222325) + _DAT_183254bf8;
  uVar11 = uVar3 + lVar29;
  uVar27 = (uVar9 ^ _DAT_183254bf8) + _DAT_183254c40 + uVar9;
  uVar3 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar3;
  uVar11 = (uVar27 * 0x2000 | uVar27 >> 0x33) ^ uVar9 ^ _DAT_183254bf8;
  _DAT_183254c80 =
       func_0x00018a53a080((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183254c40 + uVar9) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar29);
  uVar7 = uStack000000000000009c;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar9;
  uVar8 = (uint)uVar13;
  uVar38 = uVar8 & uVar6;
  uVar14 = uVar8 | uVar6;
  uVar8 = uVar8 ^ uVar6;
  auVar32._8_4_ = 0xffffffff;
  auVar32._0_8_ = 0xffffffffffffffff;
  auVar32._12_4_ = 0xffffffff;
  uVar26 = SUB164(auVar30 ^ auVar32,0);
  uVar11 = (((ulonglong)uVar26 * (ulonglong)_DAT_1817acc90 +
             ((SUB168(auVar30 ^ auVar32,0) >> 0x20) * (ulonglong)_DAT_1817acc90 +
              (ulonglong)_DAT_1817acc80 * (ulonglong)uVar26 << 0x20) +
             ((ulonglong)_DAT_1817accb0 * (ulonglong)uVar8 << 0x20) +
             (ulonglong)_DAT_1817acca0 * (ulonglong)uVar8 +
             ((ulonglong)uVar38 * (ulonglong)_DAT_1817accb0 << 0x20) +
             (ulonglong)uVar38 * (ulonglong)_DAT_1817acca0 +
             ((ulonglong)uVar6 * (ulonglong)_DAT_1817acc80 << 0x20) + uVar13 +
             (ulonglong)_DAT_1817acc70 * (ulonglong)uVar6 +
            ((ulonglong)_DAT_1817accd0 * (ulonglong)uVar14 << 0x20) +
            (ulonglong)_DAT_1817accc0 * (ulonglong)uVar14) -
           (((ulonglong)uVar8 * (ulonglong)_DAT_1817acd70 << 0x20) +
            (ulonglong)_DAT_1817acd60 * (ulonglong)uVar8 +
            ((ulonglong)uVar14 * (ulonglong)_DAT_1817acd50 << 0x20) +
            (ulonglong)_DAT_1817acd40 * (ulonglong)uVar14 +
           ((ulonglong)uVar38 * (ulonglong)_DAT_1817acd30 << 0x20) +
           (ulonglong)_DAT_1817acd20 * (ulonglong)uVar38 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_1817acd10 << 0x20) +
           (ulonglong)_DAT_1817acd00 * (ulonglong)uVar6 +
           (uVar13 * _DAT_1817acd10 << 0x20) + uVar13 * _DAT_1817acd00)) + 0xaa4d58f00daa52b5;
  uVar6 = (uint)uVar11;
  _DAT_183254f00 = uVar11 & 0xffffffff;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = _DAT_183254f00;
  auVar22._4_4_ = 0;
  auVar22._0_4_ = uStack000000000000009c ^ 0x84222325;
  auVar22._8_8_ = _DAT_183254f00;
  auVar23 = pshufb(auVar22 ^ _DAT_1817acd80,auVar23);
  uVar3 = _DAT_183254c80 - (_DAT_183254c80 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183254c80;
  _DAT_183254bf0 = _DAT_183254b30 ^ uVar3 ^ uVar11;
  _DAT_183254b98 = (_DAT_183254b98 ^ uVar3) + uVar11 ^ 0x7c8d84a682fccab5;
  _DAT_183254b58 = (_DAT_183254b58 * -0x3184ad4c6969728f ^ _DAT_183254b98) + uVar3;
  _DAT_183254bb8 = _DAT_183254b58 ^ _DAT_183254b98;
  uVar13 = auVar23._8_8_ + auVar23._0_8_;
  uVar9 = (ulonglong)uStack000000000000009c;
  uVar3 = uVar13 + _DAT_183254e20;
  if (auVar23._4_4_ < 0) {
    uVar3 = _DAT_183254f90 ^ uVar13;
  }
  _DAT_1832550e8 = func_0x00018a53a080(SUB161(auVar22 ^ _DAT_1817acd80,5) ^ uVar3);
  uVar3 = SUB168(auVar36 ^ auVar32,0);
  uVar9 = (((uint)_DAT_1832550e8 ^ (uVar7 | uVar6)) ^ uVar3) & uVar9;
  uVar26 = uVar7 & uVar6;
  uVar8 = uVar7 | uVar6;
  uVar14 = SUB164(auVar36 ^ auVar32,0);
  uVar3 = ((ulonglong)_DAT_1817acdd0 * (ulonglong)uVar8 << 0x20) +
          (ulonglong)_DAT_1817acdc0 * (ulonglong)uVar8 +
          ((ulonglong)uVar26 * (ulonglong)_DAT_1817acdd0 << 0x20) +
          (ulonglong)uVar26 * (ulonglong)_DAT_1817acdc0 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_1817acda0 << 0x20) +
          (ulonglong)_DAT_1817acd90 * (ulonglong)uVar7 +
          ((ulonglong)_DAT_1817acda0 * (uVar11 & 0xffffffff) << 0x20) +
          (ulonglong)_DAT_1817acdb0 * (uVar11 & 0xffffffff) +
          (-((ulonglong)uVar14 * (_DAT_1817ace40 & 0xffffffff) +
            ((ulonglong)_DAT_1817aceb0 * (ulonglong)uVar14 +
             (uVar3 >> 0x20) * (_DAT_1817ace40 & 0xffffffff) << 0x20)) -
          (((ulonglong)(uVar7 ^ uVar6) * (ulonglong)_DAT_1817acea0 << 0x20) +
           (ulonglong)_DAT_1817ace90 * (ulonglong)(uVar7 ^ uVar6) +
           ((ulonglong)uVar8 * (ulonglong)_DAT_1817ace80 << 0x20) +
           (ulonglong)_DAT_1817ace70 * (ulonglong)uVar8 +
          ((ulonglong)uVar26 * (ulonglong)_DAT_1817ace60 << 0x20) +
          (ulonglong)_DAT_1817ace50 * (ulonglong)uVar26 +
          ((uVar11 & 0xffffffff) * (ulonglong)_DAT_1817ace30 << 0x20) +
          (ulonglong)_DAT_1817ace20 * (uVar11 & 0xffffffff) +
          ((ulonglong)uVar7 * (ulonglong)_DAT_1817ace10 << 0x20) +
          (ulonglong)_DAT_1817ace00 * (ulonglong)uVar7)) + 0x545dbc06f394074c;
  _DAT_183254ff8 = uVar3 ^ uVar9;
  _DAT_183254d40 = (_DAT_183254d40 ^ uVar9) + uVar3 ^ 0xbaa23a6d725b4ba2;
  _DAT_183254bd0 = (_DAT_183254bd0 * -0x782a9566b0f2ca89 ^ _DAT_183254d40) + uVar9;
  _DAT_183254e38 = _DAT_183254bd0 ^ _DAT_183254d40;
  _DAT_183254f48 = _DAT_183254fa8 ^ uVar3;
  _DAT_183254e80 = uVar3 & 0xffffffff;
  uVar6 = (int)uVar12 + (int)uVar3;
  uVar3 = ((_DAT_1832550b0 ^ uVar4) + (ulonglong)((uint)_DAT_1832550b0 & uStack000000000000004c) * 2
          ) * (0xffffffff - _DAT_183254d70);
  uVar3 = (uVar3 | _DAT_183254c10) + (uVar3 & _DAT_183254c10);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183254b28 =
       func_0x00018a53a080((uVar10 ^ 0x7bdddcda | uVar3) + (uVar3 & (uVar10 ^ 0x7bdddcda)));
  auVar23 = _DAT_1800170c0;
  uVar10 = uVar10 ^ 0xffffffff;
  _DAT_183254e90 = (_DAT_183254e90 ^ _DAT_183254b28 ^ 0xffffffff) + uVar10 ^ 0xaf74f4ab4ebd3c63;
  _DAT_183254cd0 =
       (_DAT_183254cd0 * 0xc42d265ca88331b ^ _DAT_183254e90) + (_DAT_183254b28 ^ 0xffffffff);
  _DAT_183255008 = _DAT_183254cd0 ^ _DAT_183254e90;
  auVar24._8_8_ = uVar10;
  auVar24._0_8_ = uVar4;
  auVar15 = pshufb(auVar24 ^ _DAT_1817acec0,_DAT_1800170c0);
  uVar9 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar9 + _DAT_183254b98;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_1832550c0 ^ uVar9;
  }
  _DAT_183254b00 = uVar10;
  _DAT_183254b10 = func_0x00018a53a080(SUB161(auVar24 ^ _DAT_1817acec0,5) ^ uVar3);
  uVar5 = (uint)uVar10 & uVar5;
  _DAT_183254dd0 = (ulonglong)uVar5;
  _DAT_183254dc8 = (_DAT_183254dc8 ^ uVar10 ^ _DAT_183254b10) + _DAT_183254dd0 ^ 0xcc00d957eccb4d5;
  _DAT_183254f68 = (_DAT_183254f68 * 0x81723820be04e23 ^ _DAT_183254dc8) + (uVar10 ^ _DAT_183254b10)
  ;
  _DAT_183254d58 = _DAT_183254f68 ^ _DAT_183254dc8;
  uVar5 = uVar5 * -0x5beeeec4;
  auVar25._4_4_ = 0;
  auVar25._0_4_ = uVar6 ^ 0x84222325;
  auVar25._8_4_ = uVar5;
  auVar25._12_4_ = 0;
  auVar23 = pshufb(auVar25 ^ _DAT_1817aced0,auVar23);
  uVar10 = auVar23._8_8_ + auVar23._0_8_;
  uVar3 = uVar10 + _DAT_183255070;
  if (auVar23._4_4_ < 0) {
    uVar3 = _DAT_183254d68 ^ uVar10;
  }
  _DAT_183254d88 = func_0x00018a53a080(SUB161(auVar25 ^ _DAT_1817aced0,5) ^ uVar3);
  uVar7 = uVar6 ^ (uint)DAT_18001a710;
  uVar8 = uVar5 ^ 0xffffffff;
  uVar3 = _DAT_183254d88 & 0x7fffffffffffffff;
  uVar10 = ((((ulonglong)_DAT_1817acf10 * (ulonglong)uVar8 + _DAT_1817acf50 << 0x20) +
             (ulonglong)_DAT_1817acf40 * (ulonglong)uVar8 +
             ((ulonglong)uVar5 * (ulonglong)_DAT_1817acf10 << 0x20) +
             (ulonglong)_DAT_1817acf00 * (ulonglong)uVar5 +
             ((ulonglong)uVar6 * (ulonglong)_DAT_1817acef0 << 0x20) +
             (ulonglong)_DAT_1817acee0 * (ulonglong)uVar6 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_1817acef0 + _DAT_1817acf30 << 0x20) +
            (ulonglong)_DAT_1817acf20 * (ulonglong)uVar7) -
           (((ulonglong)uVar8 * (ulonglong)_DAT_1817acff0 + _DAT_1817ad000 << 0x20) +
            (ulonglong)_DAT_1817acfe0 * (ulonglong)uVar8 +
            ((ulonglong)(uVar6 | uVar5) * (ulonglong)_DAT_1817acfd0 << 0x20) +
            (ulonglong)_DAT_1817acfc0 * (ulonglong)(uVar6 | uVar5) +
            ((ulonglong)(uVar6 & uVar5) * (ulonglong)_DAT_1817acfd0 << 0x20) +
            (ulonglong)(uVar6 & uVar5) * (ulonglong)_DAT_1817acfc0 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_1817acfb0 << 0x20) +
           (ulonglong)_DAT_1817acfa0 * (ulonglong)uVar5 +
           (ulonglong)_DAT_1817acf80 * (ulonglong)uVar6 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_1817acf90 << 0x20))) + 0xc60226f1c5fbb004;
  _DAT_183254e18 = _DAT_183254de8 ^ uVar3 ^ uVar10;
  _DAT_183254f30 = (_DAT_183254f30 ^ uVar3) + uVar10 ^ 0x52690c1b1a60f0b5;
  _DAT_183254be8 = (_DAT_183254be8 * -0x60347f75f40858f7 ^ _DAT_183254f30) + uVar3;
  _DAT_183255018 = _DAT_183254be8 ^ _DAT_183254f30;
  _DAT_183254c60 = uVar10 & 0xffffffff;
  uVar3 = ((uVar2 ^ 0x84222325 ^ _DAT_183254e48) +
          (ulonglong)((uint)_DAT_183254e48 & (uint)(uVar2 ^ 0x84222325)) * 2) *
          (uVar2 - _DAT_183254cc8);
  uVar3 = (uVar3 | _DAT_183254b18) + (uVar3 & _DAT_183254b18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183254ee8 = func_0x00018a53a080((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar3 = _DAT_183254ee8 - (_DAT_183254ee8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183254ee8;
  _DAT_183254e50 = _DAT_183254e50 ^ uVar3 ^ 0xc454707ff333ff63;
  _DAT_183255008 = (_DAT_183255008 * -0x6e65dabed1d2a23 ^ _DAT_183254e50) + uVar3;
  _DAT_183254e58 = _DAT_183255008 ^ _DAT_183254e50;
  _DAT_183254b78 = 0;
  (*_DAT_1817ac290)(-(int)unaff_RSI & (uint)uVar10);
  return;
}



// ===== continuation @ rva a539edf (image 18a539edf) =====

void FUN_18a539edf(void)

{
  return;
}



// ===== continuation @ rva a52ff55 (image 18a52ff55) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52ff55(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_stack_00000050;
  
  uVar1 = unaff_RSI ^ unaff_RBX ^ in_RAX;
  lVar2 = (unaff_RSI ^ unaff_RBX) + param_1;
  uVar3 = uVar1 + lVar2;
  uVar4 = (in_stack_00000050 ^ param_1) + in_RAX + in_stack_00000050;
  uVar1 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar1;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ in_stack_00000050 ^ param_1;
  _DAT_183254ba0 =
       func_0x00018a53a080((uVar3 << 0x1d | uVar3 >> 0x23) - (in_RAX + in_stack_00000050) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - lVar2);
  uVar1 = unaff_RSI & (unaff_RSI * in_stack_00000050 ^ _DAT_183254ba0);
  _DAT_183254f20 = unaff_RSI | in_stack_00000050;
  _DAT_183254e50 = (_DAT_183254e50 ^ uVar1) + _DAT_183254f20 ^ 0xbf8a689b8d8bcac2;
  _DAT_183254c38 = (_DAT_183254c38 * -0x222f1d69a20913f5 ^ _DAT_183254e50) + uVar1;
  _DAT_183254ec8 = _DAT_183254c38 ^ _DAT_183254e50;
  (*_DAT_1817ac370)();
  return;
}



// ===== continuation @ rva a53a00f (image 18a53a00f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53a00f(void)

{
  FUN_190dd72e0();
  (*_DAT_1817ac320)();
  return;
}



// ===== continuation @ rva a52d592 (image 18a52d592) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52d592(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x6f0))();
  (*_DAT_1817ac300)();
  return;
}



// ===== continuation @ rva a539f77 (image 18a539f77) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a539f77(void)

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



// ===== continuation @ rva a52d41b (image 18a52d41b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52d41b(void)

{
  int iVar1;
  longlong *unaff_RDI;
  longlong unaff_R13;
  
  iVar1 = (**(code **)(*unaff_RDI + 0x558))();
  switch(unaff_R13 < iVar1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a539f4b (image 18a539f4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a539f4b(void)

{
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_1817ac210)();
  return;
}



// ===== continuation @ rva a53a9c4 (image 18a53a9c4) =====

void FUN_18a53a9c4(void)

{
  return;
}



// ===== continuation @ rva a53a16d (image 18a53a16d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53a16d(void)

{
  FUN_190ddce00();
  (*_DAT_1817b06f8)();
  return;
}



// ===== continuation @ rva a53a2c8 (image 18a53a2c8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53a2c8(void)

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



// ===== continuation @ rva a53a9d6 (image 18a53a9d6) =====

void FUN_18a53a9d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a53a913 (image 18a53a913) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53a913(void)

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



// ===== continuation @ rva a53a204 (image 18a53a204) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53a204(void)

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



// ===== continuation @ rva a53a85f (image 18a53a85f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53a85f(void)

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



// ===== continuation @ rva a53a361 (image 18a53a361) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53a361(void)

{
  (*_DAT_1817b0698)(_DAT_183255138,_DAT_183255260,_DAT_183255200);
  return;
}



// ===== continuation @ rva a53a330 (image 18a53a330) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53a330(void)

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



// ===== continuation @ rva a53a2de (image 18a53a2de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53a2de(void)

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



// ===== continuation @ rva a53a2a4 (image 18a53a2a4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53a2a4(void)

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



// ===== continuation @ rva a53b07a (image 18a53b07a) =====

void FUN_18a53b07a(void)

{
  return;
}



// ===== continuation @ rva a53aadb (image 18a53aadb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53aadb(void)

{
  (*_DAT_1817b09f8)(_DAT_183255388);
  return;
}



// ===== continuation @ rva a53ad97 (image 18a53ad97) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53ad97(void)

{
  FUN_190ddce00();
  (*_DAT_1817b0a28)();
  return;
}



// ===== continuation @ rva a53b098 (image 18a53b098) =====

void FUN_18a53b098(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a53b068 (image 18a53b068) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53b068(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1817b09a8)();
  return;
}



// ===== continuation @ rva a53b025 (image 18a53b025) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53b025(void)

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



// ===== continuation @ rva a53aef6 (image 18a53aef6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53aef6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x478))();
  (*_DAT_1817b0998)();
  return;
}



// ===== continuation @ rva a53af15 (image 18a53af15) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53af15(void)

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



// ===== continuation @ rva a53ae4c (image 18a53ae4c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53ae4c(void)

{
  int unaff_EBP;
  int unaff_R12D;
  
  switch(unaff_R12D < unaff_EBP) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a53b66e (image 18a53b66e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53b66e(void)

{
  (*_DAT_1817b0c78)();
  return;
}



// ===== continuation @ rva a53b1c2 (image 18a53b1c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53b1c2(void)

{
  int unaff_EBP;
  int unaff_EDI;
  
  switch(unaff_EDI < unaff_EBP) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a53cc8b (image 18a53cc8b) =====

void FUN_18a53cc8b(void)

{
  return;
}



// ===== continuation @ rva a53bdab (image 18a53bdab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53bdab(void)

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



// ===== continuation @ rva a53b276 (image 18a53b276) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53b276(void)

{
  FUN_190ddfc90();
  (*_DAT_1817b0c38)();
  return;
}



// ===== continuation @ rva a53cce5 (image 18a53cce5) =====

void FUN_18a53cce5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a53c50e (image 18a53c50e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53c50e(void)

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



// ===== continuation @ rva a53b6ec (image 18a53b6ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53b6ec(void)

{
  FUN_190ddfc90();
  (*_DAT_1817b10d8)();
  return;
}



// ===== continuation @ rva a53c273 (image 18a53c273) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53c273(void)

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



// ===== continuation @ rva a53bd96 (image 18a53bd96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53bd96(void)

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



// ===== continuation @ rva a53bd24 (image 18a53bd24) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53bd24(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_1817b0e18)();
  return;
}



// ===== continuation @ rva a53ca8e (image 18a53ca8e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a53ca8e(void)

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



// ===== continuation @ rva a53ce4e (image 18a53ce4e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a53ce4e(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x698))();
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



// ===== continuation @ rva a53cdf8 (image 18a53cdf8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a53ce36 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a53cdf8(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a701708 (image 18a701708) =====

void FUN_18a701708(void)

{
  return;
}



// ===== continuation @ rva a6a52de (image 18a6a52de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a6a5315 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a6a52de(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a5759ef (image 18a5759ef) =====

void thunk_FUN_18a53ce39(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva a66dac8 (image 18a66dac8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a66dae3 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a66dac8(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a68b00a (image 18a68b00a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a68b05b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a68b00a(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a5f48e9 (image 18a5f48e9) =====

void thunk_FUN_18a53ce39(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva a58f4ef (image 18a58f4ef) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a58f50d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a58f4ef(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva a6fa40f (image 18a6fa40f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a6fa40f(void)

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



// ===== continuation @ rva a52c686 (image 18a52c686) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c686(void)

{
  FUN_190dd72e0();
  (*_DAT_1817abd78)();
  return;
}



// ===== continuation @ rva a52c613 (image 18a52c613) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c613(void)

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



// ===== continuation @ rva a52c766 (image 18a52c766) =====

void FUN_18a52c766(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a52c702 (image 18a52c702) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52c702(void)

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



// ===== continuation @ rva a52c75e (image 18a52c75e) =====

void FUN_18a52c75e(void)

{
  return;
}



// ===== continuation @ rva a52c726 (image 18a52c726) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c726(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1817abd88)();
  return;
}



// ===== continuation @ rva a52c64c (image 18a52c64c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c64c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1817abd98)();
  return;
}



// ===== continuation @ rva a52c6cf (image 18a52c6cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c6cf(void)

{
  FUN_190dd9df0();
  (*_DAT_1817abd18)();
  return;
}



// ===== continuation @ rva a52c6ae (image 18a52c6ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52c6ae(void)

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



// ===== continuation @ rva a73d19b (image 18a73d19b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d19b(void)

{
  FUN_190dd72e0();
  (*_DAT_18186a038)();
  return;
}



// ===== continuation @ rva a73d128 (image 18a73d128) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d128(void)

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



// ===== continuation @ rva a73d262 (image 18a73d262) =====

void FUN_18a73d262(void)

{
  return;
}



// ===== continuation @ rva a73d26c (image 18a73d26c) =====

void FUN_18a73d26c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a73d217 (image 18a73d217) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d217(void)

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



// ===== continuation @ rva a73d23b (image 18a73d23b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d23b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x370))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18186a008)();
  return;
}



// ===== continuation @ rva a73d1c3 (image 18a73d1c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d1c3(void)

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



// ===== continuation @ rva a73d161 (image 18a73d161) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d161(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18186a058)();
  return;
}



// ===== continuation @ rva a73d186 (image 18a73d186) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d186(void)

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



// ===== continuation @ rva a52c55c (image 18a52c55c) =====

void FUN_18a52c55c(void)

{
  return;
}



// ===== continuation @ rva a52c1f5 (image 18a52c1f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c1f5(void)

{
  FUN_190dd72e0();
  (*_DAT_1817abbd8)();
  return;
}



// ===== continuation @ rva a52c566 (image 18a52c566) =====

void FUN_18a52c566(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a52c3f8 (image 18a52c3f8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52c3f8(void)

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



// ===== continuation @ rva a52c419 (image 18a52c419) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c419(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1817abc38)();
  return;
}



// ===== continuation @ rva a52c381 (image 18a52c381) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52c381(void)

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



// ===== continuation @ rva a52c27e (image 18a52c27e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c27e(void)

{
  undefined4 uStack0000000000000038;
  undefined4 uStack0000000000000040;
  
  uStack0000000000000038 = 0x38;
  uStack0000000000000040 = 0x3f;
  (*_DAT_1817abbf8)();
  return;
}



// ===== continuation @ rva a52c2ea (image 18a52c2ea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52c2ea(void)

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



// ===== continuation @ rva a52c12f (image 18a52c12f) =====

void FUN_18a52c12f(void)

{
  return;
}



// ===== continuation @ rva a52bde5 (image 18a52bde5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52bde5(void)

{
  FUN_190dd72e0();
  (*_DAT_1817aba48)();
  return;
}



// ===== continuation @ rva a52c11c (image 18a52c11c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c11c(void)

{
  (*_DAT_1817abae8)();
  return;
}



// ===== continuation @ rva a52c139 (image 18a52c139) =====

void FUN_18a52c139(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a52c041 (image 18a52c041) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52c041(void)

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



// ===== continuation @ rva a52c062 (image 18a52c062) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52c062(void)

{
  longlong in_stack_00000038;
  
  switch(in_stack_00000038 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a52bff4 (image 18a52bff4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52bff4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1817abb08)();
  return;
}



// ===== continuation @ rva a52bfd3 (image 18a52bfd3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a52bfd3(void)

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



// ===== continuation @ rva a52c0b6 (image 18a52c0b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c0b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1817abb08)();
  return;
}



// ===== continuation @ rva a52c011 (image 18a52c011) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52c011(void)

{
  undefined4 uStack0000000000000040;
  
  uStack0000000000000040 = 0x38;
  FUN_190dd72e0();
  (*_DAT_1817ab9e8)();
  return;
}



// ===== continuation @ rva a52bfab (image 18a52bfab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a52bfab(void)

{
  FUN_190dd72e0();
  (*_DAT_1817aba18)();
  return;
}



// ===== continuation @ rva a73da43 (image 18a73da43) =====

void FUN_18a73da43(void)

{
  return;
}



// ===== continuation @ rva a73d92a (image 18a73d92a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d92a(void)

{
  FUN_190ddfc90();
  (*_DAT_18186a398)();
  return;
}



// ===== continuation @ rva a73d9eb (image 18a73d9eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d9eb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2a0))();
  (*_DAT_18186a3b8)();
  return;
}



// ===== continuation @ rva a73d997 (image 18a73d997) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d997(void)

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



// ===== continuation @ rva a73da4b (image 18a73da4b) =====

void FUN_18a73da4b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva a73d9d0 (image 18a73d9d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a73d9d0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18186a3a8)();
  return;
}



// ===== continuation @ rva a73d981 (image 18a73d981) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d981(void)

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



// ===== continuation @ rva a73d95d (image 18a73d95d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73d95d(void)

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



// ===== continuation @ rva a73da18 (image 18a73da18) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a73da18(void)

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



