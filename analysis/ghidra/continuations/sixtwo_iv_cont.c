// ===== continuation @ rva 90334a0 (image 1890334a0) =====

void FUN_1890334a0(void)

{
  return;
}



// ===== continuation @ rva 90307ff (image 1890307ff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890307ff(void)

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



// ===== continuation @ rva 9030dff (image 189030dff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189030dff(ulonglong param_1)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong unaff_R14;
  ulonglong uVar6;
  longlong in_stack_00000048;
  ulonglong in_stack_000000a0;
  
  uVar4 = (~in_RAX + 0xea02af4cfb331f8c) *
          ((param_1 ^ 0x6d3e4a0631ef2213) + (param_1 & 0x6d3e4a0631ef2213) * 2);
  uVar4 = (uVar4 | _DAT_183202090) + (uVar4 & _DAT_183202090);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832022b8 = func_0x000189033680((uVar4 | 0x873ce54acadc3d98) + (uVar4 & 0x873ce54acadc3d98));
  uVar4 = (_DAT_1832022b8 ^ 0xef3eef4efffc0000) & 0xfffffffffffc0000;
  _DAT_183202090 = (_DAT_183202090 ^ uVar4) + 0x873ce54a4efe1ebd ^ 0xee5aac3bfd61d3d;
  _DAT_183201d90 = (_DAT_183201d90 * -0x50d2ecd00dcb19 ^ _DAT_183202090) + uVar4;
  _DAT_183202388 = _DAT_183201d90 ^ _DAT_183202090;
  _DAT_183201ff8 = 0x873ce54a4efe1ebd;
  _DAT_183202300 = func_0x000189033680(_DAT_183201f98 ^ 0xba03b2cd97fc3c53);
  uVar4 = _DAT_183202300 << 0x14 | _DAT_183202300 >> 0x2c;
  _DAT_183202460 = (_DAT_183202460 ^ uVar4) + 0x370af3b52c99d963 ^ 0x3622a61001186364;
  _DAT_183202178 = (_DAT_183202178 * 0x568017b498de2dc1 ^ _DAT_183202460) + uVar4;
  _DAT_183202088 = _DAT_183202178 ^ _DAT_183202460;
  _DAT_183201d08 = 0x370af3b52c99d963;
  uVar4 = (~_DAT_183201f10 + 0x370af3b52c99d964) *
          ((_DAT_183202118 ^ 0xc8f54c406d663381) + (_DAT_183202118 & 0x48f54c406d663381) * 2);
  uVar4 = (uVar4 | _DAT_183201d70) + (uVar4 & _DAT_183201d70);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183201ee0 = func_0x000189033680((uVar4 | 0xffffbff541ffeae2) + (uVar4 & 0xffffbff541ffeae2));
  _DAT_183201d90 = _DAT_183201f30 ^ _DAT_183201d98 ^ unaff_R14;
  uVar4 = (_DAT_183201e78 ^ _DAT_183201d98) + unaff_R14;
  _DAT_183201e78 = uVar4 ^ 0xc9596e0538e858f5;
  _DAT_183201ff0 = (_DAT_183201ff0 * -0x4f555957125bc1a5 ^ _DAT_183201e78) + _DAT_183201d98;
  _DAT_1832022e8 = _DAT_183201ff0 ^ _DAT_183201e78;
  _DAT_1832022b8 = unaff_R14;
  _DAT_1832021b0 = func_0x000189033680(uVar4 ^ 0xc7b5e9776213d6f8);
  uVar4 = _DAT_1832021b0 - (_DAT_1832021b0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832021b0;
  _DAT_1832022f0 = (_DAT_1832022f0 ^ uVar4) + 0x5387c2f0e94cc9a8 ^ 0xbceffa4a2938c1b3;
  _DAT_183202278 = (_DAT_183202278 * 0x2742323994f62aa7 ^ _DAT_1832022f0) + uVar4;
  _DAT_183202070 = _DAT_183202278 ^ _DAT_1832022f0;
  _DAT_183201d18 = 0x5387c2f0e94cc9a8;
  _DAT_183202338 = func_0x000189033680(_DAT_183202050 ^ 0x3623187eaa01c42c);
  uVar4 = _DAT_183202338 ^ unaff_R14;
  _DAT_1832024e8 = _DAT_183201e78 ^ uVar4 ^ 0xac787d052c91205f;
  _DAT_1832023f0 = (_DAT_1832023f0 ^ uVar4) + 0xac787d052c91205f ^ 0x2400d645ee1b5007;
  _DAT_183202450 = (_DAT_183202450 * -0x6f04842d5f90e89b ^ _DAT_1832023f0) + uVar4;
  _DAT_183202388 = _DAT_183202450 ^ _DAT_1832023f0;
  _DAT_183201ff8 = 0xac787d052c91205f;
  uVar4 = (~_DAT_183202120 + 0x5387c2f0e94cc9a9) *
          ((_DAT_183201e18 ^ 0xac787d05a8b3037a) + (_DAT_183201e18 & 0x2c787d05a8b3037a) * 2);
  uVar4 = (uVar4 | _DAT_183201ff0) + (uVar4 & _DAT_183201ff0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832022c8 = func_0x000189033680((uVar4 | 0xffffbff541ffcad2) + (uVar4 & 0xffffbff541ffcad2));
  uVar2 = _DAT_1832022c8 ^ 0x927bbefa684af507;
  uVar4 = uVar2 >> 1 | uVar2;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2;
  _DAT_183201e18 = _DAT_183202398 ^ uVar2 ^ unaff_R14;
  _DAT_1832022a8 = (_DAT_1832022a8 ^ uVar2) + unaff_R14 ^ 0xf9ee1dcd527c95f0;
  _DAT_183202330 = (_DAT_183202330 * 0x5e0c70812f53c75d ^ _DAT_1832022a8) + uVar2;
  _DAT_1832023a0 = _DAT_183202330 ^ _DAT_1832022a8;
  uVar4 = (~_DAT_183201f88 + 0x6873fc4099d667d9) *
          ((_DAT_183201d40 ^ 0x84222325) + (ulonglong)((uint)_DAT_183201d40 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183201e18) + (uVar4 & _DAT_183201e18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183202338 = unaff_R14;
  _DAT_1832024d0 = func_0x000189033680((uVar4 | 0x6873fc401df444fd) + (uVar4 & 0x6873fc401df444fd));
  _DAT_183202390 = (_DAT_183202390 ^ _DAT_183202330) + 0x978c03bf66299828 ^ 0xf93204d7d78856ef;
  _DAT_183201dc0 = (_DAT_183201dc0 * -0x1de68b0d6f91f385 ^ _DAT_183202390) + _DAT_183202330;
  _DAT_183201ef0 = _DAT_183201dc0 ^ _DAT_183202390;
  _DAT_183201d68 = 0x978c03bf66299828;
  _DAT_183201df8 = func_0x000189033680(_DAT_1832022b8 + 0x789a87b34e1e7098 ^ 0xef);
  uVar2 = _UNK_181228d08;
  uVar4 = _DAT_181228d00;
  uVar3 = _DAT_183201df8 * 0x3e3f23e03c3ac6ff;
  _DAT_183202430 = _DAT_183202158 ^ uVar3 ^ unaff_R14;
  _DAT_183202450 = (_DAT_183202450 ^ uVar3) + unaff_R14 ^ 0x3c7e3f2bf0d2ec2e;
  _DAT_183202208 = (_DAT_183202208 * 0x383bd524b1e503cf ^ _DAT_183202450) + uVar3;
  _DAT_183201f18 = _DAT_183202208 ^ _DAT_183202450;
  uVar3 = (_DAT_1832021c0 ^ _DAT_181228d00) + _DAT_183202208 + 0x293dfb0f339f74da;
  uVar6 = (_DAT_183202208 ^ _UNK_181228d08) + _DAT_1832021c0 + 0x873ce54a4efe1ebd;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832021c0 ^ _DAT_181228d00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183202208 ^ _UNK_181228d08;
  _DAT_183201d58 = unaff_R14;
  _DAT_183201fe0 =
       func_0x000189033680((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832021c0 + 0x873ce54a4efe1ebd) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183202208 + 0x293dfb0f339f74da));
  _DAT_1832024f8 =
       (_DAT_1832024f8 ^ ~_DAT_183201fe0 & 0x293dfb0fb7bd57ff) + 0xae011e45f9434942 ^
       0x3b3d2f2472892cee;
  _DAT_183201e80 =
       (_DAT_183201e80 * 0x1096a71c14e44131 ^ _DAT_1832024f8) +
       (~_DAT_183201fe0 & 0x293dfb0fb7bd57ff);
  _DAT_183201dc0 = _DAT_183201e80 ^ _DAT_1832024f8;
  _DAT_1832021a0 = 0xae011e45f9434942;
  uVar3 = (_DAT_1832024b8 ^ uVar4) + _DAT_183201d58 + 0x293dfb0f339f74da;
  uVar6 = (_DAT_183201d58 ^ uVar2) + _DAT_1832024b8 + 0x873ce54a4efe1ebd;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832024b8 ^ uVar4;
  uVar2 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183201d58 ^ uVar2;
  _DAT_183201dc8 =
       func_0x000189033680((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832024b8 + 0x873ce54a4efe1ebd) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183201d58 + 0x293dfb0f339f74da));
  _DAT_183202298 =
       (_DAT_183202298 ^ _DAT_183201dc0 & 0x7fffffffffffffff) + 0x13ce10a06bc16bd ^
       0xce40d69ac2cc4765;
  _DAT_1832022c8 =
       (_DAT_1832022c8 * -0x3da3b6978eb89827 ^ _DAT_183202298) +
       (_DAT_183201dc0 & 0x7fffffffffffffff);
  _DAT_183202058 = _DAT_1832022c8 ^ _DAT_183202298;
  _DAT_183202450 = 0x13ce10a06bc16bd;
  _DAT_1832020b0 = func_0x000189033680(_DAT_183201e88 + 0x4ebcf86fe2bc0693U ^ 0x4c);
  uVar4 = (_DAT_1832020b0 ^ 0x2801180448410140) & 0xae011e45f9434942;
  _DAT_183202108 = _DAT_183201dc0 ^ uVar4 ^ 0xb07ae05a06bb76bc;
  _DAT_183202090 = (_DAT_183202078 ^ uVar4) + 0xb07ae05a06bb76bc ^ 0x11a8b8ef2b94758;
  _DAT_183202078 = (_DAT_183202078 * 0x2d0920f53ea82e5f ^ _DAT_183202090) + uVar4;
  _DAT_183202090 = _DAT_183202078 ^ _DAT_183202090;
  _DAT_1832023e0 = 0xb07ae05a06bb76bc;
  _DAT_183202370 = func_0x000189033680(_DAT_183201da8 + 0xffe0ff7be4ffe1ffU ^ 0xd7);
  _DAT_1832020b8 = _DAT_183201e08;
  _DAT_183201d40 = _DAT_183201d40 ^ _DAT_183201e08 ^ 0xc67aff3b60b33a57;
  _DAT_1832020d0 = (_DAT_1832020d0 * -0x2112bacc422cbf17 ^ _DAT_183201d40) + _DAT_183201e08;
  _DAT_1832021e0 = _DAT_1832020d0 ^ _DAT_183201d40;
  _DAT_183202408 = 0;
  uVar4 = (_DAT_183202048 ^ 0x3ff691ffc922) + _DAT_183201e08 + 0x3ff691ffc922;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183202048 ^ 0x3ff691ffc922;
  uVar2 = ((_DAT_183201e08 + _DAT_183202048) * 0x2000 | _DAT_183201e08 + _DAT_183202048 >> 0x33) ^
          _DAT_183201e08;
  _DAT_183202468 =
       func_0x000189033680((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183202048 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183201e08 + 0x3ff691ffc922));
  _DAT_183202220 = (_DAT_183202220 ^ _DAT_183202468) + unaff_R14 ^ 0xaa84adf5f83743a6;
  _DAT_183201db8 = (_DAT_183201db8 * -0x3680b55ab90c1265 ^ _DAT_183202220) + _DAT_183202468;
  _DAT_183201e08 = _DAT_183201db8 ^ _DAT_183202220;
  uVar4 = (_DAT_183202268 ^ _DAT_181228d10) + _DAT_183201d60 + 0x293dfb0f339f74da;
  uVar2 = (_DAT_183201d60 ^ _UNK_181228d18) + (_DAT_183202268 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183202268 ^ _DAT_181228d10;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183201d60 ^ _UNK_181228d18;
  _DAT_1832022b8 = unaff_R14;
  _DAT_1832021b0 =
       func_0x000189033680((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183202268 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183201d60 + 0x293dfb0f339f74da));
  _DAT_1832020e0 = (_DAT_1832020e0 ^ _DAT_1832021b0) + 0xd6c204f04842a800 ^ 0x93f34505d25b2d77;
  _DAT_183202128 = (_DAT_183202128 * -0x4d7b3b1f42c75d25 ^ _DAT_1832020e0) + _DAT_1832021b0;
  _DAT_183202418 = _DAT_183202128 ^ _DAT_1832020e0;
  _DAT_183201d40 = 0xd6c204f04842a800;
  uVar4 = (_DAT_183201ea8 ^ _DAT_181228d20) + _DAT_1832024f0 + 0x293dfb0f339f74da;
  uVar2 = (_DAT_1832024f0 ^ _UNK_181228d28) + _DAT_183201ea8 + 0xd6c204f04842a800;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183201ea8 ^ _DAT_181228d20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832024f0 ^ _UNK_181228d28;
  _DAT_183202218 =
       func_0x000189033680((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183201ea8 + 0xd6c204f04842a800) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832024f0 + 0x293dfb0f339f74da));
  uVar4 = (_DAT_183202218 ^ 0x293dfb0fb7bd57ff) << 0xf |
          (_DAT_183202218 ^ 0x293dfb0fb7bd57ff) >> 0x31;
  _DAT_1832020c0 = _DAT_1832020c0 ^ uVar4 ^ 0xc01dc5eeb4b01494;
  _DAT_183202390 = (_DAT_183202390 * 0x24f583a03ba6b39f ^ _DAT_1832020c0) + uVar4;
  _DAT_183201fa0 = _DAT_183202390 ^ _DAT_1832020c0;
  _DAT_183202250 = 0;
  _DAT_183201f40 = func_0x000189033680(_DAT_1832023b0 + 0xc9c8ff90e1cceaffU ^ 0x46);
  uVar4 = _DAT_183201f40 * -0x652ab4100c83e329 ^ unaff_R14;
  _DAT_183202298 = _DAT_183202400 ^ uVar4 ^ unaff_R14;
  _DAT_183201d98 = (_DAT_183201d98 ^ uVar4) + unaff_R14 ^ 0x9385f7f39ee14e3e;
  _DAT_183202228 = (_DAT_183202228 * 0x198773483f180a5 ^ _DAT_183201d98) + uVar4;
  _DAT_183202108 = _DAT_183202228 ^ _DAT_183201d98;
  uVar4 = (_DAT_183201fe8 ^ _DAT_181228d30) + _DAT_183201ec0 + 0x2138d90b318a6552;
  uVar2 = (_DAT_183201ec0 ^ _UNK_181228d38) + _DAT_183201fe8 + 0x2138d90bb5a84677;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183201fe8 ^ _DAT_181228d30;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183201ec0 ^ _UNK_181228d38;
  _DAT_183202458 = unaff_R14;
  _DAT_183201e30 =
       func_0x000189033680((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183201fe8 + 0x2138d90bb5a84677) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183201ec0 + 0x2138d90b318a6552));
  uVar4 = ((_DAT_183201e30 ^ 0x2138d90bb5a84677) << 4 |
          (_DAT_183201e30 ^ 0x2138d90bb5a84677) >> 0x3c) ^ 0x2138d90bb5a84677;
  _DAT_1832020b8 = _DAT_1832020b8 ^ uVar4 ^ 0xd7ff44e53aadb00a;
  _DAT_183201fc8 = (_DAT_183201fc8 * 0x291e9f93ed4f52f9 ^ _DAT_1832020b8) + uVar4;
  _DAT_1832023c0 = _DAT_183201fc8 ^ _DAT_1832020b8;
  _DAT_183202100 = 0;
  _DAT_183201ef0 = func_0x000189033680(_DAT_1832022a8 ^ 0x55c700712203881e);
  uVar2 = in_stack_000000a0;
  _DAT_183202090 = _DAT_183201ee0 ^ _DAT_183202330 ^ unaff_R14;
  _DAT_183202190 = (_DAT_183202190 ^ _DAT_183202330) + unaff_R14 ^ 0x1389a0b1ad4d9d7a;
  _DAT_183202308 = (_DAT_183202308 * -0x48ee5084dc7b2255 ^ _DAT_183202190) + _DAT_183202330;
  _DAT_183201e40 = _DAT_183202308 ^ _DAT_183202190;
  uVar4 = in_stack_000000a0 ^ 0x84222325 ^ _DAT_183201d30;
  lVar5 = (in_stack_000000a0 ^ 0x84222325) + _DAT_183201f20;
  uVar3 = uVar4 + lVar5;
  uVar6 = (_DAT_183201f20 ^ unaff_R14) + _DAT_183201d30 + unaff_R14;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar4;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183201f20 ^ unaff_R14;
  _DAT_183202380 = unaff_R14;
  _DAT_183202220 =
       func_0x000189033680((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183201d30 + unaff_R14) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar3 = uVar2 * unaff_R14 ^ _DAT_183202220;
  uVar4 = uVar2 ^ uVar3;
  _DAT_1832021c8 = uVar2 + (uVar2 & unaff_R14) * -2 + unaff_R14;
  _DAT_183202148 = (_DAT_183202148 ^ uVar4) + _DAT_1832021c8 ^ 0xf89767fb5df31a5f;
  _DAT_183202468 = (_DAT_183202468 * -0x3f1b6174c726d2c9 ^ _DAT_183202148) + uVar4;
  _DAT_183202410 = _DAT_183202468 ^ _DAT_183202148;
  in_stack_00000048 = _DAT_1832021c8;
  FUN_190de3220(uVar3,&stack0x00000028,*_DAT_18301ee50 + 0x17b49,*_DAT_18301ee50 + 0x627,0x1239);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 90329c3 (image 1890329c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890329c3(void)

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



// ===== continuation @ rva 90328ed (image 1890328ed) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890328ed(void)

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



// ===== continuation @ rva 90322c8 (image 1890322c8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890322c8(void)

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



// ===== continuation @ rva 903347b (image 18903347b) =====

void FUN_18903347b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (**(code **)(*unaff_RSI + 0x720))();
  return;
}



// ===== continuation @ rva 9032e07 (image 189032e07) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189032e07(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack0000000000000110;
  undefined2 uStack0000000000000114;
  undefined2 uStack0000000000000116;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  
  uStack00000000000000b0 = 0x65ac4cb8;
  rdtsc();
  uStack0000000000000110 = 0xc10046;
  uStack0000000000000114 = 0xb;
  uStack0000000000000116 = 0xc0;
  rdtsc();
  uStack0000000000000118 = 0x1a007b000f0047;
  rdtsc();
  uStack0000000000000120 = 0xe200b400980098;
  rdtsc();
  uStack0000000000000128 = 0x6000d0009e001f;
  rdtsc();
  uStack0000000000000130 = 0x20040008b00d3;
  rdtsc();
  uStack0000000000000138 = 0xca00e2006000f1;
  rdtsc();
  uStack0000000000000140 = 0x3800f300b300b1;
  rdtsc();
  uStack0000000000000148 = 0x50001000d10079;
  (**(code **)(*unaff_RSI + 0x518))();
  uStack00000000000000ac = 0x8ac53255;
  rdtsc();
  rdtsc();
  rdtsc();
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



// ===== continuation @ rva 9033106 (image 189033106) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189033106(void)

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



// ===== continuation @ rva 9032070 (image 189032070) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189032070(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined2 uStack00000000000000e6;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  
  uStack00000000000000e6 = 0x2f;
  rdtsc();
  uStack00000000000000e8 = 0x2f004300420043;
  rdtsc();
  uStack00000000000000f0 = 0x530043004b0050;
  rdtsc();
  uStack00000000000000f8 = 0x64006100500035;
  rdtsc();
  uStack0000000000000100 = 0x67006e00690064;
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



// ===== continuation @ rva 90056ab (image 1890056ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890056ab(void)

{
  FUN_190dd72e0();
  (*_DAT_181222808)();
  return;
}



// ===== continuation @ rva 9005638 (image 189005638) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189005638(void)

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



// ===== continuation @ rva 90058d9 (image 1890058d9) =====

void FUN_1890058d9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 90057b9 (image 1890057b9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890057b9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 90058cf (image 1890058cf) =====

void FUN_1890058cf(void)

{
  return;
}



// ===== continuation @ rva 900578c (image 18900578c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18900578c(void)

{
  FUN_190dd72e0();
  (*_DAT_1812227b8)();
  return;
}



// ===== continuation @ rva 9005671 (image 189005671) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189005671(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181222818)();
  return;
}



// ===== continuation @ rva 9005899 (image 189005899) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189005899(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_181222838)();
  return;
}



// ===== continuation @ rva 9005847 (image 189005847) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189005847(void)

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



// ===== continuation @ rva 9005880 (image 189005880) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189005880(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181222898)();
  return;
}



// ===== continuation @ rva 90056d3 (image 1890056d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890056d3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9005696 (image 189005696) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189005696(void)

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



// ===== continuation @ rva 9005a46 (image 189005a46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189005a46(void)

{
  FUN_190dd72e0();
  (*_DAT_181222d08)();
  return;
}



// ===== continuation @ rva 90059c8 (image 1890059c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890059c8(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181222a48)();
  return;
}



// ===== continuation @ rva 9006e9e (image 189006e9e) =====

void FUN_189006e9e(void)

{
  return;
}



// ===== continuation @ rva 90063c7 (image 1890063c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890063c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_181223058)();
  return;
}



// ===== continuation @ rva 900603a (image 18900603a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18900603a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_181222c48)();
  return;
}



// ===== continuation @ rva 9005c47 (image 189005c47) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189005c47(void)

{
  FUN_190ddce00();
  (*_DAT_181222cf8)();
  return;
}



// ===== continuation @ rva 9006d68 (image 189006d68) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189006d68(void)

{
  FUN_190dd72e0();
  (*_DAT_181222aa8)();
  return;
}



// ===== continuation @ rva 9005e37 (image 189005e37) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189005e37(void)

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



// ===== continuation @ rva 900627c (image 18900627c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18900627c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_181222f28)();
  return;
}



// ===== continuation @ rva 9005f60 (image 189005f60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189005f60(void)

{
  FUN_190ddce00();
  (*_DAT_181222e78)();
  return;
}



// ===== continuation @ rva 9033b01 (image 189033b01) =====

void FUN_189033b01(void)

{
  return;
}



// ===== continuation @ rva 9033762 (image 189033762) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189033762(void)

{
  FUN_190ddce00();
  (*_DAT_181228f88)();
  return;
}



// ===== continuation @ rva 90337b9 (image 1890337b9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890337b9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9033ae1 (image 189033ae1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189033ae1(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181228f08)();
  return;
}



// ===== continuation @ rva 9033b0b (image 189033b0b) =====

void FUN_189033b0b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 90337f4 (image 1890337f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890337f4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 90338f5 (image 1890338f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890338f5(void)

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



// ===== continuation @ rva 90339c2 (image 1890339c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890339c2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9033ac8 (image 189033ac8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189033ac8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181228ea8)();
  return;
}



// ===== continuation @ rva 9033946 (image 189033946) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189033946(void)

{
  FUN_190dd72e0();
  (*_DAT_181228f38)();
  return;
}



// ===== continuation @ rva 90338c9 (image 1890338c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890338c9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181228ec8)();
  return;
}



// ===== continuation @ rva 90373d1 (image 1890373d1) =====

void FUN_1890373d1(void)

{
  return;
}



// ===== continuation @ rva 9033cea (image 189033cea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189033cea(void)

{
  FUN_190ddce00();
  (*_DAT_18122a538)();
  return;
}



// ===== continuation @ rva 9039b16 (image 189039b16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189039b16(void)

{
  (*_DAT_18122ade8)();
  return;
}



// ===== continuation @ rva 903c706 (image 18903c706) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903c706(void)

{
  (*_DAT_18122acc8)();
  return;
}



// ===== continuation @ rva 90389b9 (image 1890389b9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890389b9(void)

{
  (*_DAT_18122ade8)();
  return;
}



// ===== continuation @ rva 903b8ba (image 18903b8ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903b8ba(void)

{
  (*_DAT_18122acc8)();
  return;
}



// ===== continuation @ rva 903c711 (image 18903c711) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903c711(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181229878)();
  return;
}



// ===== continuation @ rva 9038a63 (image 189038a63) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189038a63(void)

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



// ===== continuation @ rva 9038b05 (image 189038b05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189038b05(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181229e98)();
  return;
}



// ===== continuation @ rva 903775e (image 18903775e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903775e(void)

{
  undefined8 in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x541,0x1b);
  (*_DAT_1812294d8)();
  return;
}



// ===== continuation @ rva 90394c1 (image 1890394c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890394c1(void)

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



// ===== continuation @ rva 903c906 (image 18903c906) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903c906(void)

{
  FUN_190dd72e0();
  (*_DAT_18122b9c8)();
  return;
}



// ===== continuation @ rva 903c893 (image 18903c893) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903c893(void)

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



// ===== continuation @ rva 903c9e6 (image 18903c9e6) =====

void FUN_18903c9e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 903c8f1 (image 18903c8f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903c8f1(void)

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



// ===== continuation @ rva 903c9cd (image 18903c9cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903c9cd(void)

{
  (*_DAT_18122b998)();
  return;
}



// ===== continuation @ rva 903c9de (image 18903c9de) =====

void FUN_18903c9de(void)

{
  return;
}



// ===== continuation @ rva 903c982 (image 18903c982) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903c982(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903c8cc (image 18903c8cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903c8cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18122b978)();
  return;
}



// ===== continuation @ rva 903c92e (image 18903c92e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903c92e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903cd04 (image 18903cd04) =====

undefined8 FUN_18903cd04(void)

{
  return 0;
}



// ===== continuation @ rva 903cab9 (image 18903cab9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903cab9(void)

{
  FUN_190ddce00();
  (*_DAT_18122ba78)();
  return;
}



// ===== continuation @ rva 903cd0d (image 18903cd0d) =====

void FUN_18903cd0d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 903cb4b (image 18903cb4b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903cb4b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903caec (image 18903caec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903caec(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903cbf3 (image 18903cbf3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903cbf3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_18122baa8)();
  return;
}



// ===== continuation @ rva 903cb31 (image 18903cb31) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903cb31(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_18122ba58)();
  return;
}



// ===== continuation @ rva 903cc12 (image 18903cc12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903cc12(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903ccd3 (image 18903ccd3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903ccd3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x478))();
  (*_DAT_18122bb28)();
  return;
}



// ===== continuation @ rva 903cee7 (image 18903cee7) =====

void FUN_18903cee7(void)

{
  return;
}



// ===== continuation @ rva 903cdec (image 18903cdec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903cdec(void)

{
  FUN_190ddfc90();
  (*_DAT_18122bba8)();
  return;
}



// ===== continuation @ rva 903cef1 (image 18903cef1) =====

void FUN_18903cef1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 903ce1f (image 18903ce1f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903ce1f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903ce92 (image 18903ce92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903ce92(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18122bbe8)();
  return;
}



// ===== continuation @ rva 903cead (image 18903cead) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903cead(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18122bbd8)();
  return;
}



// ===== continuation @ rva 903ce59 (image 18903ce59) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903ce59(void)

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



// ===== continuation @ rva 903ced6 (image 18903ced6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903ced6(void)

{
  (*_DAT_18122bbe8)();
  return;
}



// ===== continuation @ rva 903ce43 (image 18903ce43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903ce43(void)

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



// ===== continuation @ rva 903cf2a (image 18903cf2a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903cf2a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18122bc38)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 903cf36 (image 18903cf36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903cf36(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 903d074 (image 18903d074) =====

void FUN_18903d074(void)

{
  return;
}



// ===== continuation @ rva 903cfcd (image 18903cfcd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903cfcd(void)

{
  FUN_190ddce00();
  (*_DAT_18122bc88)();
  return;
}



// ===== continuation @ rva 903d07c (image 18903d07c) =====

void FUN_18903d07c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 903d062 (image 18903d062) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903d062(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18122bc98)();
  return;
}



// ===== continuation @ rva 903d045 (image 18903d045) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903d045(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (*_DAT_18122bc58)();
  return;
}



// ===== continuation @ rva 903d024 (image 18903d024) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903d024(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903d000 (image 18903d000) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903d000(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903d0aa (image 18903d0aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903d0aa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18122bcc8)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 903d0b6 (image 18903d0b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903d0b6(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 903d0dd (image 18903d0dd) =====

undefined4 * FUN_18903d0dd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 903d0dc (image 18903d0dc) =====

void FUN_18903d0dc(void)

{
  return;
}



// ===== continuation @ rva 903d1fb (image 18903d1fb) =====

void FUN_18903d1fb(void)

{
  return;
}



// ===== continuation @ rva 903d149 (image 18903d149) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903d149(void)

{
  FUN_190ddce00();
  (*_DAT_18122bd38)();
  return;
}



// ===== continuation @ rva 903d202 (image 18903d202) =====

void FUN_18903d202(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 903d1db (image 18903d1db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903d1db(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18122bd18)();
  return;
}



// ===== continuation @ rva 903d1c1 (image 18903d1c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903d1c1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_18122bcf8)();
  return;
}



// ===== continuation @ rva 903d1a0 (image 18903d1a0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903d1a0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903d17c (image 18903d17c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903d17c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 903d23a (image 18903d23a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903d23a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18122bd68)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 903d246 (image 18903d246) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18903d246(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 903d26d (image 18903d26d) =====

undefined4 * FUN_18903d26d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 903d26c (image 18903d26c) =====

void FUN_18903d26c(void)

{
  return;
}



// ===== continuation @ rva 9007098 (image 189007098) =====

void FUN_189007098(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001890070c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812234e0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 9007043 (image 189007043) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018900707a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189007043(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 901d416 (image 18901d416) =====

void FUN_18901d416(void)

{
  return;
}



// ===== continuation @ rva 900707d (image 18900707d) =====

undefined8 FUN_18900707d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 901d478 (image 18901d478) =====

void FUN_18901d478(void)

{
  code *pcVar1;
  
  FUN_18000544c(0,0,0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9010304 (image 189010304) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_189010304(void)

{
  longlong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (_DAT_183201088 ^ 0x79c9bc7f0c9e53c7) + _DAT_1832012e0 + 0x79c9bc7f0c9e53c7;
  uVar2 = (_DAT_1832012e0 ^ 0x9f7bc6b57a0598ba) + _DAT_183201088 + 0x9f7bc6b57a0598ba;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201088 ^ 0x79c9bc7f0c9e53c7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832012e0 ^ 0x9f7bc6b57a0598ba;
  _DAT_183201258 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183201088 + 0x9f7bc6b57a0598ba) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832012e0 + 0x79c9bc7f0c9e53c7));
  uVar1 = ~(_DAT_183201258 << 0x35 | _DAT_183201258 >> 0xb) & 0x79c9bc7f88bc70e2;
  _DAT_183200f60 = (_DAT_183200f60 ^ uVar1) + 0xfffbfefffabdf8fa ^ 0xd6ac1bc20c287255;
  _DAT_183201058 = (_DAT_183201058 * 0x3f30577ed52d2e43 ^ _DAT_183200f60) + uVar1;
  _DAT_183201288 = _DAT_183201058 ^ _DAT_183200f60;
  _DAT_183200f78 = 0xfffbfefffabdf8fa;
  uVar1 = (~_DAT_183201238 + 0x733a7d4493bfda52) *
          ((_DAT_183201118 ^ 0x26790a280d67a4c6) + (_DAT_183201118 & 0x26790a280d67a4c6) * 2);
  uVar1 = (uVar1 | _DAT_183201458) + (uVar1 & _DAT_183201458);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201090 = func_0x000189030690((uVar1 | 0x5543776c9ed87e97) + (uVar1 & 0x5543776c9ed87e97));
  uVar1 = ~_DAT_183201090 & 0x26790a28894587e3 | 0x2679000000000000;
  _DAT_183201428 = (_DAT_183201428 ^ uVar1) + 0x5543776c1afa5db2 ^ 0x1ec1aafa9c7eeeb9;
  _DAT_183201460 = (_DAT_183201460 * 0x6c9c8e3fe5f77bd9 ^ _DAT_183201428) + uVar1;
  _DAT_183200f98 = _DAT_183201460 ^ _DAT_183201428;
  _DAT_1832014e8 = 0x5543776c1afa5db2;
  uVar1 = (~_DAT_183201430 + 0x870e27edb8fc7e25) *
          ((_DAT_183201328 ^ 0x84222325) + (ulonglong)((uint)_DAT_183201328 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832013c8) + (uVar1 & _DAT_1832013c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201188 = func_0x000189030690((uVar1 | 0x870e27ed3cde5d01) + (uVar1 & 0x870e27ed3cde5d01));
  uVar1 = (_DAT_183201188 ^ 0x7edb8fc7e24) << 0x1c |
          ((_DAT_183201188 ^ 0x7edb8fc7e24) & 0xfffffffffff) >> 0x24;
  _DAT_183200f30 = (_DAT_183200f30 ^ uVar1) + 0x78f1d812470381dc ^ 0x3cf09b7f1183b83e;
  _DAT_1832014e0 = (_DAT_1832014e0 * 0x71f5cc367fe2cf95 ^ _DAT_183200f30) + uVar1;
  _DAT_1832012d0 = _DAT_1832014e0 ^ _DAT_183200f30;
  _DAT_1832011b8 = 0x78f1d812470381dc;
  uVar1 = (~_DAT_1832014b0 + 0x870e27edb8fc7e25) *
          ((_DAT_183201338 ^ 0x8422230d) + (ulonglong)((uint)_DAT_183201338 & 0x8422230d) * 2);
  uVar1 = (uVar1 | _DAT_183201130) + (uVar1 & _DAT_183201130);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x000189030690((uVar1 | 0x870e27ed3cde5d29) + (uVar1 & 0x870e27ed3cde5d29));
  uVar1 = (uVar1 ^ 0x870e27edb8fc7000) & 0xfffffffffffff000;
  _DAT_183201088 = _DAT_183201218 ^ uVar1 ^ 0x870e27edb8fc7e4c;
  _DAT_1832011c8 = (_DAT_1832011c8 ^ uVar1) + 0x870e27edb8fc7e4c ^ 0x387541874c3d6271;
  _DAT_1832012e8 = (_DAT_1832012e8 * 0x6c480a5a9d4f3be9 ^ _DAT_1832011c8) + uVar1;
  _DAT_183200ff0 = _DAT_1832012e8 ^ _DAT_1832011c8;
  _DAT_1832013e8 = 0x870e27edb8fc7e4c;
  uVar1 = (_DAT_183201148 ^ _DAT_181224a50) + _DAT_183200f08 + 0x84222325;
  uVar2 = (_DAT_183200f08 ^ _UNK_181224a58) + _DAT_183201148 + 0x16dfdbba34178461;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201148 ^ _DAT_181224a50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183200f08 ^ _UNK_181224a58;
  _DAT_183200f28 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183201148 + 0x16dfdbba34178461) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183200f08 + 0x84222325));
  _DAT_183201328 = _DAT_183201328 + 0xe9202445cbe87b9f ^ 0x5ae5e401cc09dfa6;
  _DAT_183201140 = _DAT_183201200 * -0x1faa4e41e905a009;
  _DAT_183201200 = 0xe9202445cbe87b9f;
  uVar1 = (_DAT_183201040 ^ _DAT_181224a60) + _DAT_183201008 + 0x16dfdbbab035a7ac;
  uVar2 = (_DAT_183201008 ^ _UNK_181224a68) + _DAT_183201040 + 0xe9202445cbe87b9f;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201040 ^ _DAT_181224a60;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183201008 ^ _UNK_181224a68;
  _DAT_183201170 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183201040 + 0xe9202445cbe87b9f) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183201008 + 0x16dfdbbab035a7ac));
  uVar1 = _DAT_183201170 & 0xffffffffffe00000;
  _DAT_183201298 = _DAT_1832011f0 ^ uVar1 ^ 0x28;
  _DAT_1832013e0 = (_DAT_1832013e0 ^ uVar1) + 0x28 ^ 0x5e027d6513a3861a;
  _DAT_1832012d8 = (_DAT_1832012d8 * 0x6064e7d1017cb767 ^ _DAT_1832013e0) + uVar1;
  _DAT_183201218 = _DAT_1832012d8 ^ _DAT_1832013e0;
  _DAT_1832010f8 = 0x28;
  _DAT_1832011f0 = func_0x000189030690(_DAT_183200f30 ^ 0xfb72cb954b094767);
  uVar1 = (ulonglong)((uint)_DAT_1832011f0 & 0x28) ^ 0x28;
  _DAT_183201468 = _DAT_183201400 ^ uVar1 ^ 0x16741a1ffeedbcda;
  _DAT_1832014a0 = (_DAT_1832014a0 ^ uVar1) + 0x16741a1ffeedbcda ^ 0xe3126f9a14a17b8a;
  _DAT_183201480 = (_DAT_183201480 * 0x5bf13aa028e571e1 ^ _DAT_1832014a0) + uVar1;
  _DAT_1832013b0 = _DAT_183201480 ^ _DAT_1832014a0;
  _DAT_1832011f8 = 0x16741a1ffeedbcda;
  uVar1 = (_DAT_1832012f8 ^ _DAT_181224a70) + _DAT_1832014e8 + 0x16741a1f7acf9fff;
  uVar2 = (_DAT_1832014e8 ^ _UNK_181224a78) + _DAT_1832012f8 + 0xe98be5e00112434e;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832012f8 ^ _DAT_181224a70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832014e8 ^ _UNK_181224a78;
  _DAT_183201158 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832012f8 + 0xe98be5e00112434e) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832014e8 + 0x16741a1f7acf9fff));
  uVar1 = ~_DAT_183201158 & 0x7ffffffffffffc00;
  _DAT_183201140 = _DAT_1832010d0 ^ uVar1 ^ 0x28;
  _DAT_183200fb0 = (_DAT_183200fb0 ^ uVar1) + 0x28 ^ 0x4bad48dde12a5d26;
  _DAT_183201330 = (_DAT_183201330 * -0x4dc3ddc98cd64d91 ^ _DAT_183200fb0) + uVar1;
  _DAT_1832011f8 = _DAT_183201330 ^ _DAT_183200fb0;
  _DAT_1832011c0 = 0x28;
  uVar1 = (~_DAT_183201400 + 0x5543776c1afa5db3) *
          ((_DAT_1832014c0 ^ 0xfffbfeff7e9fdbdf) + (_DAT_1832014c0 & 0x7ffbfeff7e9fdbdf) * 2);
  uVar1 = (uVar1 | _DAT_183201088) + (uVar1 & _DAT_183201088);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832011d8 = func_0x000189030690((uVar1 | 0xaab889936465866d) + (uVar1 & 0xaab889936465866d));
  uVar1 = _DAT_1832011d8 & 0x7fffffff800;
  _DAT_183201350 = _DAT_1832014e8 ^ uVar1 ^ 0x553f766c15b856ac;
  _DAT_1832013c8 = (_DAT_1832013c8 ^ uVar1) + 0x553f766c15b856ac ^ 0x9f20857c3329efbe;
  _DAT_183201228 = (_DAT_183201228 * 0x18c535ce75471c81 ^ _DAT_1832013c8) + uVar1;
  _DAT_1832010f8 = _DAT_183201228 ^ _DAT_1832013c8;
  _DAT_1832012e0 = 0x553f766c15b856ac;
  uVar1 = (~_DAT_183201388 + 0x5543776c1afa5db3) *
          ((_DAT_183200f98 ^ 0xfffbfeff7e9fdbdf) + (_DAT_183200f98 & 0x7ffbfeff7e9fdbdf) * 2);
  uVar1 = (uVar1 | _DAT_1832014f8) + (uVar1 & _DAT_1832014f8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201278 = func_0x000189030690((uVar1 | 0xaab889936465866d) + (uVar1 & 0xaab889936465866d));
  _DAT_1832011e0 = (_DAT_1832011e0 ^ _DAT_1832013f0) + 0xaab88993e047a548 ^ 0xfb705ef26cc357c2;
  _DAT_183201048 = (_DAT_183201048 * -0x29efe0bd9039fe7b ^ _DAT_1832011e0) + _DAT_1832013f0;
  _DAT_183200fd8 = _DAT_183201048 ^ _DAT_1832011e0;
  _DAT_1832012a0 = 0xaab88993e047a548;
  _DAT_1832014d8 = func_0x000189030690(_DAT_1832012f0 ^ 0x6f7eb7a415895cf8);
  _DAT_183201110 =
       (_DAT_183201110 ^ _DAT_1832014d8 & 0xfffffffffff) + 0x5543766c1ab858b2 ^ 0xf70c09e97cabada;
  _DAT_183201238 =
       (_DAT_183201238 * -0x2fc5b6ca932cf0f7 ^ _DAT_183201110) + (_DAT_1832014d8 & 0xfffffffffff);
  _DAT_183200f78 = _DAT_183201238 ^ _DAT_183201110;
  _DAT_1832013a8 = 0x5543766c1ab858b2;
  uVar1 = (_DAT_183200fe0 ^ _DAT_181224a80) + _DAT_183200fd8 + 0xaab889936465866d;
  uVar2 = (_DAT_183200fd8 ^ _UNK_181224a88) + _DAT_183200fe0 + 0xaa86ecd83570b164;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183200fe0 ^ _DAT_181224a80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183200fd8 ^ _UNK_181224a88;
  _DAT_1832014e0 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183200fe0 + 0xaa86ecd83570b164) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183200fd8 + 0xaab889936465866d));
  uVar1 = (_DAT_1832014e0 << 0x3a | _DAT_1832014e0 >> 6) * -0x3c68d15937e4cc5f;
  _DAT_1832013f8 = _DAT_1832012d8 ^ uVar1 ^ 0x553f766c15b856ac;
  _DAT_183201148 = (_DAT_183201148 ^ uVar1) + 0x553f766c15b856ac ^ 0x14b9119243febe7b;
  _DAT_183201210 = (_DAT_183201210 * 0x6c9f36ae0bd91b7b ^ _DAT_183201148) + uVar1;
  _DAT_1832012a0 = _DAT_183201210 ^ _DAT_183201148;
  _DAT_1832012e0 = _DAT_183201400 ^ 0x553f766c15b856ac;
  _DAT_1832011c8 = 0x553f766c15b856ac;
  uVar1 = (_DAT_1832014c0 ^ _DAT_181224a90) + _DAT_183201450 + 0x553f766c919a7589;
  uVar2 = (_DAT_183201450 ^ _UNK_181224a98) + _DAT_1832014c0 + 0x553f766c15b856ac;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832014c0 ^ _DAT_181224a90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183201450 ^ _UNK_181224a98;
  _DAT_183201440 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832014c0 + 0x553f766c15b856ac) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183201450 + 0x553f766c919a7589));
  _DAT_183201310 = _DAT_183201440 ^ 0x70d00278f920553c;
  _DAT_1832014d0 = _DAT_1832014d0 ^ _DAT_183201310 ^ 0x1f4dd79480f94e05;
  _DAT_1832010f8 = (_DAT_1832010f8 * -0x21b9a0c6277a5de1 ^ _DAT_1832014d0) + _DAT_183201310;
  _DAT_183201318 = _DAT_1832010f8 ^ _DAT_1832014d0;
  _DAT_183201208 = 0;
  uVar1 = (_DAT_183201260 ^ 0x8422230d) + _DAT_183201450 + 0x8422230d;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201260 ^ 0x8422230d;
  uVar2 = ((_DAT_183201450 + _DAT_183201260) * 0x2000 | _DAT_183201450 + _DAT_183201260 >> 0x33) ^
          _DAT_183201450;
  _DAT_183201258 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183201260 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183201450 + 0x8422230d));
  _DAT_183201270 = _DAT_1832014d0 ^ _DAT_183201258 ^ 0x28;
  _DAT_1832011f8 = (_DAT_1832011f8 ^ _DAT_183201258) + 0x28 ^ 0x796d7ef9e52bc3b2;
  _DAT_183201058 = (_DAT_183201058 * -0x7fcfe5f53ff31485 ^ _DAT_1832011f8) + _DAT_183201258;
  _DAT_183201198 = _DAT_183201058 ^ _DAT_1832011f8;
  _DAT_183201068 = 0x28;
  _DAT_183200f00 = func_0x000189030690(_DAT_183201170 ^ 0x1bfc7f20015f2c);
  _DAT_183201498 = (_DAT_183201498 ^ _DAT_183200f00) + 0x4010005420705 ^ 0xc1c7b4b5dd1c0e64;
  _DAT_183201220 = (_DAT_183201220 * 0x73ba586367b2727f ^ _DAT_183201498) + _DAT_183200f00;
  _DAT_1832010e0 = _DAT_183201220 ^ _DAT_183201498;
  _DAT_1832011f0 = 0x4010005420705;
  uVar1 = (~_DAT_183201468 + 0x4010005420706) *
          ((_DAT_183201308 ^ 0xfffbfeff7e9fdbdf) + (_DAT_183201308 & 0x7ffbfeff7e9fdbdf) * 2);
  uVar1 = (uVar1 | _DAT_1832010b8) + (uVar1 & _DAT_1832010b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832013d0 = func_0x000189030690((uVar1 | 0xffffffff7bdddcda) + (uVar1 & 0xffffffff7bdddcda));
  uVar1 = _DAT_1832013d0 & 0x7ffffffffff ^ 0xfffbfefffabdf8fa;
  _DAT_1832011b8 = _DAT_1832011b8 ^ uVar1 ^ 0xdda44505ab38a19f;
  _DAT_183200fd8 = (_DAT_183200fd8 * 0x49d59cdf846307cd ^ _DAT_1832011b8) + uVar1;
  _DAT_183200f20 = _DAT_183200fd8 ^ _DAT_1832011b8;
  _DAT_1832014f0 = 0;
  uVar1 = (_DAT_183201048 ^ 0x8422230d) + _DAT_183201048 + 0x8422230d;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201048 ^ 0x8422230d;
  uVar2 = (_DAT_183201048 << 0xe | (_DAT_183201048 & 0x7fffffffffffffff) >> 0x32) ^ _DAT_183201048;
  _DAT_183200f58 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183201048 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183201048 + 0x8422230d));
  _DAT_183201218 = _DAT_1832011a0 ^ _DAT_183200f58 ^ 0x28;
  _DAT_183201490 = (_DAT_183201490 ^ _DAT_183200f58) + 0x28 ^ 0x32cb39f1ecfd89aa;
  _DAT_1832014d8 = (_DAT_1832014d8 * 0x3b14930362cc235f ^ _DAT_183201490) + _DAT_183200f58;
  _DAT_183200fe0 = _DAT_1832014d8 ^ _DAT_183201490;
  _DAT_183200f20 = 0x28;
  uVar1 = (~_DAT_183200ff0 + 0x79c9bc7f88bc70e3) *
          ((_DAT_183201378 ^ 0x79c9bc7f0c9e53c7) + (_DAT_183201378 & 0x79c9bc7f0c9e53c7) * 2);
  uVar1 = (uVar1 | _DAT_183200f68) + (uVar1 & _DAT_183200f68);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201058 = func_0x000189030690((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = _DAT_183201058 << 0x1d | _DAT_183201058 >> 0x23;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar1;
  _DAT_183201158 = _DAT_183201158 ^ uVar1 ^ 0xf5a2eb99a92d440a;
  _DAT_183201448 = (_DAT_183201448 * -0x7138424f703fab5b ^ _DAT_183201158) + uVar1;
  _DAT_183201190 = _DAT_183201448 ^ _DAT_183201158;
  _DAT_183201150 = 0;
  uVar1 = (_DAT_183201260 ^ 0x8422230d) + _DAT_183201360 + 0x8422230d;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201260 ^ 0x8422230d;
  uVar2 = ((_DAT_183201360 + _DAT_183201260) * 0x2000 | _DAT_183201360 + _DAT_183201260 >> 0x33) ^
          _DAT_183201360;
  _DAT_1832011a0 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183201260 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183201360 + 0x8422230d));
  uVar1 = _DAT_1832011a0 & 0x7fffffffffffffff;
  _DAT_183200f18 = _DAT_183201238 ^ uVar1 ^ 0x28;
  _DAT_183200f80 = (_DAT_183200f80 ^ uVar1) + 0x28 ^ 0x5d48852a4279c68f;
  _DAT_183201070 = (_DAT_183201070 * 0x536ba0eab19db1bd ^ _DAT_183200f80) + uVar1;
  _DAT_183200f20 = _DAT_183201070 ^ _DAT_183200f80;
  _DAT_183201018 = 0x28;
  func_0x000180001044(*(undefined8 *)(unaff_RBP + 0x78),*(longlong *)(unaff_RBP + 0x48) + 0x28);
  return 0;
}



// ===== continuation @ rva 9018efd (image 189018efd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189018efd(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong *unaff_RBP;
  longlong lVar4;
  ulonglong unaff_R12;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *unaff_RBP;
  uVar3 = (~_DAT_183201028 + 0xb089a3ab) *
          ((in_RAX ^ 0xa0cbcd1a) + (ulonglong)((uint)in_RAX & 0xa0cbcd1a) * 2);
  uVar3 = (uVar3 | _DAT_1832014e8) + (uVar3 & _DAT_1832014e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183201420 = func_0x000189030690((uVar3 | 0x10426eb0) + (ulonglong)((uint)uVar3 & 0x10426eb0))
  ;
  uVar3 = _DAT_183201420 * 0x52b420497c723bff ^ 0x24e9ee3f;
  _DAT_1832010c8 = (_DAT_1832010c8 ^ uVar3) + 0xb4e9efbf ^ 0xadd4837c0d90191b;
  _DAT_1832012a0 = (_DAT_1832012a0 * -0x1db0027b970e1c25 ^ _DAT_1832010c8) + uVar3;
  _DAT_183201220 = _DAT_1832012a0 ^ _DAT_1832010c8;
  _DAT_183200ff8 = 0xb4e9efbf;
  uVar3 = (_DAT_1832010e8 ^ _DAT_181223a70) + _DAT_183200f38 + 0x189acc8d;
  uVar5 = (_DAT_183200f38 ^ _UNK_181223a78) + _DAT_1832010e8 + 0xff4b9ea1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832010e8 ^ _DAT_181223a70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183200f38 ^ _UNK_181223a78;
  _DAT_183200fc0 =
       func_0x000189030690((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832010e8 + 0xff4b9ea1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183200f38 + 0x189acc8d));
  _DAT_183201410 = (_DAT_183201410 ^ _DAT_183200fc0 ^ 0xff4b9ea1) + 0x63f37109 ^ 0x4275c05ceab9b693;
  _DAT_183201360 =
       (_DAT_183201360 * -0x1b32cc69d9a8eb85 ^ _DAT_183201410) + (_DAT_183200fc0 ^ 0xff4b9ea1);
  _DAT_1832012b8 = _DAT_183201360 ^ _DAT_183201410;
  _DAT_183201218 = 0x63f37109;
  uVar3 = (_DAT_183201408 ^ _DAT_181223a80) + _DAT_1832012c8 + unaff_R12;
  uVar5 = (_DAT_1832012c8 ^ _UNK_181223a88) + _DAT_183201408 + 0x403b4aa2;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183201408 ^ _DAT_181223a80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832012c8 ^ _UNK_181223a88;
  _DAT_1832013c0 =
       func_0x000189030690((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183201408 + 0x403b4aa2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832012c8 + unaff_R12));
  _DAT_183201438 = (_DAT_183201438 ^ _DAT_1832013c0) - 0x403b4aa2 ^ 0xe0f34d2d4ede7869;
  _DAT_183200f08 = (_DAT_183200f08 * 0x665c786e0267cb7d ^ _DAT_183201438) + _DAT_1832013c0;
  _DAT_183200f80 = _DAT_183200f08 ^ _DAT_183201438;
  _DAT_183200f48 = 0xbfc4b55e;
  uVar3 = (_DAT_1832013f8 ^ _DAT_181223a90) + _DAT_1832014d8 + 0x8422dcda;
  uVar5 = (_DAT_1832014d8 ^ _UNK_181223a98) + _DAT_1832013f8 + 0x403b4aa2;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832013f8 ^ _DAT_181223a90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832014d8 ^ _UNK_181223a98;
  _DAT_183201258 =
       func_0x000189030690((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832013f8 + 0x403b4aa2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832014d8 + 0x8422dcda));
  uVar3 = (_DAT_183201258 & 0xfffffffffff00000) << 8 | _DAT_183201258 >> 0x38;
  _DAT_183201208 = _DAT_1832010b8 ^ uVar3 ^ 0x403c4aa1;
  _DAT_183201328 = (_DAT_183201328 ^ uVar3) + 0x403c4aa1 ^ 0xb221c98625f57582;
  _DAT_183201178 = (_DAT_183201178 * -0x18078c1ba80f6045 ^ _DAT_183201328) + uVar3;
  _DAT_183201158 = _DAT_183201178 ^ _DAT_183201328;
  _DAT_183201078 = 0x403c4aa1;
  uVar3 = (_DAT_183201158 ^ _DAT_181223aa0) + _DAT_1832013e8 + 0xc41e6984;
  uVar5 = (_DAT_1832013e8 ^ _UNK_181223aa8) + _DAT_183201158 + 0xbfc4b55e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183201158 ^ _DAT_181223aa0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832013e8 ^ _UNK_181223aa8;
  _DAT_183201020 =
       func_0x000189030690((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183201158 + 0xbfc4b55e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832013e8 + 0xc41e6984));
  uVar3 = _DAT_183201020 ^ 0xbfc4b55e;
  _DAT_1832010c8 = _DAT_183201420 ^ uVar3 ^ 0x10000ffff;
  _DAT_1832013f8 = (_DAT_1832013f8 ^ uVar3) + 0x10000ffff ^ 0x247841c59b9089ad;
  _DAT_183201368 = (_DAT_183201368 * -0x1a640bad47c4fdb9 ^ _DAT_1832013f8) + uVar3;
  _DAT_183200fd8 = _DAT_183201368 ^ _DAT_1832013f8;
  _DAT_183201110 = 0xffff;
  uVar3 = (~_DAT_183201310 + 0xc78b2541) *
          ((_DAT_183200f28 ^ unaff_R12) + (ulonglong)((uint)_DAT_183200f28 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1832011a0) + (uVar3 & _DAT_1832011a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183201400 = func_0x000189030690((uVar3 | 0x43a90665) + (ulonglong)((uint)uVar3 & 0x43a90665))
  ;
  _DAT_1832013a0 = (_DAT_1832013a0 ^ _DAT_183201400) - 0xc78b2540 ^ 0x18e2ee6167690aa2;
  _DAT_183201048 = (_DAT_183201048 * -0x672e51821edb7ff7 ^ _DAT_1832013a0) + _DAT_183201400;
  _DAT_183201178 = _DAT_183201048 ^ _DAT_1832013a0;
  _DAT_1832013d8 = 0x3874dac0;
  uVar3 = (_DAT_1832013c0 ^ _DAT_181223ab0) + _DAT_183201488 + 0x8422dcda;
  uVar5 = (_DAT_183201488 ^ _UNK_181223ab8) + _DAT_1832013c0 + 0xc78b2540;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832013c0 ^ _DAT_181223ab0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183201488 ^ _UNK_181223ab8;
  _DAT_183201448 =
       func_0x000189030690((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832013c0 + 0xc78b2540) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183201488 + 0x8422dcda));
  uVar3 = _DAT_183201448 & 0xffffffffffffffc0;
  _DAT_183201008 = _DAT_1832013a0 ^ uVar3 ^ 0xc78c253f;
  _DAT_183201218 = (_DAT_183201218 ^ uVar3) + 0xc78c253f ^ 0x6211a19492cf301e;
  _DAT_1832012d0 = (_DAT_1832012d0 * 0x5c33f115bf5127cb ^ _DAT_183201218) + uVar3;
  _DAT_183201320 = _DAT_1832012d0 ^ _DAT_183201218;
  _DAT_183201290 = 0xc78c253f;
  uVar3 = (~_DAT_183201200 + 0x3874dac1) *
          ((_DAT_1832013b0 ^ 0x43ae061a) + (ulonglong)((uint)_DAT_1832013b0 & 0x43ae061a) * 2);
  uVar3 = (uVar3 | _DAT_1832013c0) + (uVar3 & _DAT_1832013c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183201348 = func_0x000189030690((uVar3 | 0x7bdadcda) + (ulonglong)((uint)uVar3 & 0x7bdadcda))
  ;
  uVar3 = _DAT_183201348 << 0x1b | _DAT_183201348 >> 0x25;
  _DAT_183201050 = _DAT_1832014d8 ^ uVar3 ^ 0x10000ffff;
  _DAT_1832013d8 = (_DAT_1832013d8 ^ uVar3) + 0x10000ffff ^ 0x9b499a4b3b856756;
  _DAT_1832012f8 = (_DAT_1832012f8 * 0x7d838725c0f5a95 ^ _DAT_1832013d8) + uVar3;
  _DAT_183201240 = _DAT_1832012f8 ^ _DAT_1832013d8;
  _DAT_183201030 = 0xffff;
  uVar3 = (~_DAT_183200f30 + 0x76841631) *
          ((_DAT_183201108 ^ unaff_R12) + (ulonglong)((uint)_DAT_183201108 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183201358) + (uVar3 & _DAT_183201358);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183200fe8 = func_0x000189030690((uVar3 | 0xf2a63515) + (ulonglong)((uint)uVar3 & 0xf2a63515))
  ;
  _DAT_1832014e0 = _DAT_1832014e0 - 0x76841630 ^ 0x43c94ec3311d44bb;
  _DAT_183201228 = _DAT_183200f00 * 0x2fa53b979517b54d;
  _DAT_183200f00 = _DAT_183201228 ^ _DAT_1832014e0;
  _DAT_1832010e0 = 0x897be9d0;
  uVar3 = (_DAT_183200f80 ^ _DAT_181223ac0) + _DAT_183200fa0 + 0x8422dcda;
  uVar5 = (_DAT_183200fa0 ^ _UNK_181223ac8) + _DAT_183200f80 + 0x76841630;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183200f80 ^ _DAT_181223ac0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183200fa0 ^ _UNK_181223ac8;
  _DAT_183201260 =
       func_0x000189030690((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183200f80 + 0x76841630) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183200fa0 + 0x8422dcda));
  uVar3 = _DAT_183201260 & 0x7fffffffffffffff;
  _DAT_183200f70 = _DAT_183201328 ^ uVar3 ^ 0x7685162f;
  _DAT_183200f48 = (_DAT_183200f48 ^ uVar3) + 0x7685162f ^ 0x9fd6df77d5b80dcd;
  _DAT_1832010e8 = (_DAT_1832010e8 * -0x1b29eadd407c7b1b ^ _DAT_183200f48) + uVar3;
  _DAT_183201418 = _DAT_1832010e8 ^ _DAT_183200f48;
  _DAT_1832013d0 = 0x7685162f;
  _DAT_183200f78 = func_0x000189030690(_DAT_183201378 ^ 0xffa3ffe9b5ff4b15);
  uVar3 = _DAT_183200f78 ^ 0x7685162f;
  _DAT_183201408 = _DAT_183200f08 ^ uVar3 ^ 0x10000ffff;
  _DAT_183201030 = (_DAT_183201030 ^ uVar3) + 0x10000ffff ^ 0xfc39bcc97d24b1d0;
  _DAT_183201020 = (_DAT_183201020 * 0x4d757ac0bdc0f837 ^ _DAT_183201030) + uVar3;
  _DAT_183200fc0 = _DAT_183201020 ^ _DAT_183201030;
  _DAT_1832013d0 = 0xffff;
  uVar3 = (_DAT_183201358 ^ _DAT_181223ad0) + _DAT_183201250 + 0x30cbcc9a;
  uVar5 = (_DAT_183201250 ^ _UNK_181223ad8) + _DAT_183201358 + 0x63f37109;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183201358 ^ _DAT_181223ad0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183201250 ^ _UNK_181223ad8;
  _DAT_183200f28 =
       func_0x000189030690((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183201358 + 0x63f37109) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183201250 + 0x30cbcc9a));
  uVar3 = (_DAT_183200f28 & 0x7ffffffff ^ 0x63f37109) * 0x189f78c2b76c7979;
  _DAT_183200f90 = _DAT_183201278 ^ uVar3 ^ 0x118dd60c8;
  _DAT_1832013d0 = (_DAT_1832013d0 ^ uVar3) + 0x118dd60c8 ^ 0x822d738240d9fe13;
  _DAT_183201068 = (_DAT_183201068 * 0x222f142547618b8d ^ _DAT_1832013d0) + uVar3;
  _DAT_183201290 = _DAT_183201068 ^ _DAT_1832013d0;
  _DAT_1832011a0 = 0x18dd60c8;
  _DAT_183201240 = func_0x000189030690(_DAT_1832011e8 + 0xff6affad8efff7ffU ^ 0x31);
  uVar3 = _DAT_183201240 ^ 0xf7fbffbf;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3;
  _DAT_1832010f8 = (_DAT_1832010f8 ^ uVar3) + 0x20e16109 ^ 0xa4816c7c66be5a36;
  _DAT_183200f70 = (_DAT_183200f70 * -0x6d77ad076db5e82b ^ _DAT_1832010f8) + uVar3;
  _DAT_183201300 = _DAT_183200f70 ^ _DAT_1832010f8;
  _DAT_1832013c0 = 0x20e16109;
  uVar3 = (_DAT_1832011b0 ^ _DAT_181223ae0) + _DAT_183201330 + 0x5338bd93;
  uVar5 = (_DAT_183201330 ^ _UNK_181223ae8) + _DAT_1832011b0 + 0x41c2c212;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832011b0 ^ _DAT_181223ae0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183201330 ^ _UNK_181223ae8;
  _DAT_1832012c0 =
       func_0x000189030690((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832011b0 + 0x41c2c212) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183201330 + 0x5338bd93));
  uVar3 = (ulonglong)(~(uint)(_DAT_1832012c0 >> 0x1c) & 0xd71a9eb6);
  _DAT_1832010c8 = _DAT_183201380 ^ uVar3 ^ 0x118dd60c8;
  _DAT_183201070 = (_DAT_183201070 ^ uVar3) + 0x118dd60c8 ^ 0x624b82739b4a6568;
  _DAT_183201390 = (_DAT_183201390 * -0x274e67527dd0fb7d ^ _DAT_183201070) + uVar3;
  _DAT_183201458 = _DAT_183201390 ^ _DAT_183201070;
  _DAT_183201098 = 0x18dd60c8;
  uVar3 = ((_DAT_183201160 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183201160 & 0x8422dcda) * 2) *
          -_DAT_183201230;
  uVar3 = (uVar3 | _DAT_183201100) + (uVar3 & _DAT_183201100);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183201050 = func_0x000189030690((uVar3 | 0x8422dcda) + (ulonglong)((uint)uVar3 & 0x8422dcda))
  ;
  uVar3 = (ulonglong)(~(uint)_DAT_183201050 & 0xffff) << 0x25;
  _DAT_183201320 = _DAT_1832013a8 ^ uVar3 ^ 0xffff;
  _DAT_183201088 = (_DAT_183201088 ^ uVar3) + 0xffff ^ 0x8e36844456030616;
  _DAT_183200f58 = (_DAT_183200f58 * 0x7f09c351cff35f75 ^ _DAT_183201088) + uVar3;
  _DAT_1832010c0 = _DAT_183200f58 ^ _DAT_183201088;
  _DAT_1832010a8 = 0xffff;
  uVar3 = (~_DAT_183201490 + 0x100000000) *
          ((_DAT_1832010d0 ^ 0x30cbcc9a) + (ulonglong)((uint)_DAT_1832010d0 & 0x30cbcc9a) * 2);
  uVar3 = (uVar3 | _DAT_183201050) + (uVar3 & _DAT_183201050);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183200f90 = func_0x000189030690((uVar3 | 0xcf343365) + (ulonglong)((uint)uVar3 & 0xcf343365))
  ;
  uVar3 = _DAT_183200f90 << 10 | _DAT_183200f90 >> 0x36;
  _DAT_183201060 = (_DAT_183201060 ^ uVar3) + 0x4b161040 ^ 0xde217e6c198cf95a;
  _DAT_183201108 = (_DAT_183201108 * 0x10214496e97f1979 ^ _DAT_183201060) + uVar3;
  _DAT_1832012e0 = _DAT_183201108 ^ _DAT_183201060;
  _DAT_183201148 = 0x4b161040;
  _DAT_1832013e0 = func_0x000189030690(_DAT_183201000 ^ 0x1f007bdaffe117);
  _DAT_1832012d8 = _DAT_1832012d8 ^ _DAT_183200f48 ^ 0x861469c55393fed;
  _DAT_183200fb8 = (_DAT_183200fb8 * 0x4ce7413f9d5adfc9 ^ _DAT_1832012d8) + _DAT_183200f48;
  _DAT_183200f18 = _DAT_183200fb8 ^ _DAT_1832012d8;
  _DAT_183201168 = 0;
  uVar1 = *(uint *)(unaff_RBP + 0x10);
  uVar3 = uVar1 ^ unaff_R12;
  uVar5 = uVar3 ^ _DAT_1832010d8;
  lVar4 = uVar3 + _DAT_183201310;
  uVar3 = uVar5 + lVar4;
  uVar6 = (_DAT_183201310 ^ 0xffff) + _DAT_1832010d8 + 0xffff;
  uVar5 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar5;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183201310 ^ 0xffff;
  _DAT_183200fd8 =
       func_0x000189030690((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832010d8 + 0xffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  _DAT_1832013d0 = (ulonglong)uVar1 & 0xffff;
  _DAT_183200f38 = (_DAT_183200f38 ^ _DAT_1832012b8) + _DAT_1832013d0 ^ 0x2b4c70064909c801;
  _DAT_1832010e0 = (_DAT_1832010e0 * -0x1b89b2717f45080f ^ _DAT_183200f38) + _DAT_1832012b8;
  _DAT_183201408 = _DAT_1832010e0 ^ _DAT_183200f38;
  *(int *)(unaff_RBP + 0xc) = (int)_DAT_1832013d0;
  switch(lVar2 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 901d192 (image 18901d192) =====

undefined8 FUN_18901d192(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x50);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== continuation @ rva 9013fc2 (image 189013fc2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189013fc2(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  ulonglong uVar2;
  
  uVar1 = (~param_1 + 0x65964618) * ((param_2 ^ 0x78aa0f2c) + param_3 * 2);
  uVar1 = (uVar1 | in_RAX) + (uVar1 & in_RAX);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201138 = func_0x000189030690((uVar1 | 0x1d3c493b) + (ulonglong)((uint)uVar1 & 0x1d3c493b))
  ;
  _DAT_1832011d0 = (_DAT_1832011d0 ^ _DAT_183201138 ^ 0xfc882c09) + 0xfd9e6e1f ^ 0x7eb4d54c6a233aee;
  _DAT_183200f80 =
       (_DAT_183200f80 * 0x3c99b0452c99975f ^ _DAT_1832011d0) + (_DAT_183201138 ^ 0xfc882c09);
  _DAT_1832012a8 = _DAT_183200f80 ^ _DAT_1832011d0;
  _DAT_183201098 = 0xfd9e6e1f;
  uVar1 = (_DAT_183201448 ^ _DAT_181223af0) + _DAT_1832010d8 + unaff_R12;
  uVar2 = (_DAT_1832010d8 ^ _UNK_181223af8) + _DAT_183201448 + 0xef27c8a2;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201448 ^ _DAT_181223af0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832010d8 ^ _UNK_181223af8;
  _DAT_183201210 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183201448 + 0xef27c8a2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832010d8 + unaff_R12));
  _DAT_183201128 = (_DAT_183201128 ^ _DAT_183201210) - 0xef27c8a2 ^ 0x89f05ea297214608;
  _DAT_183201448 = (_DAT_183201448 * -0x6d4b9fadab6a1d7f ^ _DAT_183201128) + _DAT_183201210;
  _DAT_1832011e0 = _DAT_183201448 ^ _DAT_183201128;
  _DAT_1832014a0 = 0x10d8375e;
  uVar1 = (_DAT_1832013e8 ^ _DAT_181223b00) + _DAT_1832010f0 + 0x842223fa;
  uVar2 = (_DAT_1832010f0 ^ _UNK_181223b08) + _DAT_1832013e8 + 0xef27c8a2;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832013e8 ^ _DAT_181223b00;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832010f0 ^ _UNK_181223b08;
  _DAT_183200f28 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832013e8 + 0xef27c8a2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832010f0 + 0x842223fa));
  uVar1 = _DAT_183200f28 & 0xfffffffffffffff8 ^ 0xdf;
  _DAT_183201008 = _DAT_1832011d0 ^ uVar1 ^ 0xef27c981;
  _DAT_183201288 = (_DAT_183201288 ^ uVar1) + 0xef27c981 ^ 0x9390af94b78574b0;
  _DAT_183201120 = (_DAT_183201120 * -0x230aa4dd881a2ff1 ^ _DAT_183201288) + uVar1;
  _DAT_183201018 = _DAT_183201120 ^ _DAT_183201288;
  _DAT_183201290 = 0xef27c981;
  uVar1 = (~_DAT_183201390 + 0xec0a9301) *
          ((_DAT_183201418 ^ unaff_R12) + (ulonglong)((uint)_DAT_183201418 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183201150) + (uVar1 & _DAT_183201150);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201450 = func_0x000189030690((uVar1 | 0x6828b025) + (ulonglong)((uint)uVar1 & 0x6828b025))
  ;
  uVar1 = _DAT_183201450 << 0x19 | _DAT_183201450 >> 0x27;
  _DAT_1832011a8 = (_DAT_1832011a8 ^ uVar1) - 0xec0a9300 ^ 0xf36d15ac3e860fd2;
  _DAT_183200f28 = (_DAT_183200f28 * -0x44fa43338a805237 ^ _DAT_1832011a8) + uVar1 ^ _DAT_1832011a8;
  _DAT_1832010a0 = 0x13f56d00;
  uVar1 = (~_DAT_183201018 + 0x13f56d01) *
          ((_DAT_1832014a0 ^ 0x6828b0fa) + (ulonglong)((uint)_DAT_1832014a0 & 0x6828b0fa) * 2);
  uVar1 = (uVar1 | _DAT_183201208) + (uVar1 & _DAT_183201208);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201360 = func_0x000189030690((uVar1 | 0x7bddddfa) + (ulonglong)((uint)uVar1 & 0x7bddddfa))
  ;
  uVar1 = _DAT_183201360 - (_DAT_183201360 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_RBX) + (uVar1 >> 2 & unaff_RBX);
  uVar1 = (ulonglong)
          (~((uint)_DAT_183201360 ^
            (uint)((((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2)) &
          0xec0a93df);
  _DAT_183201130 = _DAT_183201028 ^ uVar1 ^ 0x1000000df;
  _DAT_1832014c8 = (_DAT_1832014c8 ^ uVar1) + 0x1000000df ^ 0xe3870ebb60a3f9bc;
  _DAT_1832014a0 = (_DAT_1832014a0 * -0x766b38181afadf11 ^ _DAT_1832014c8) + uVar1;
  _DAT_1832013f0 = _DAT_1832014a0 ^ _DAT_1832014c8;
  _DAT_183201468 = 0xdf;
  _DAT_1832014a8 = func_0x000189030690(_DAT_183201100 + 0xff7dfff5730090ffU ^ 0xf);
  uVar1 = _DAT_1832014a8 << 0x17 | _DAT_1832014a8 >> 0x29;
  _DAT_183200f50 = (_DAT_183200f50 ^ uVar1) - 0xf18da590 ^ 0xfa3f4ab098ec5161;
  _DAT_183201188 = (_DAT_1832013e0 * 0x74cc14b4c1fa4f4f ^ _DAT_183200f50) + uVar1 ^ _DAT_183200f50;
  _DAT_1832013e0 = 0xe725a70;
  _DAT_1832010f8 = func_0x000189030690(_DAT_183200f68 + 0xff7a00555600a8ffU ^ 0x51);
  uVar1 = (ulonglong)((uint)_DAT_1832010f8 & 0xdf);
  _DAT_183201070 = _DAT_183201240 ^ uVar1 ^ 0xf18da66f;
  _DAT_1832012e8 = (_DAT_1832012e8 ^ uVar1) + 0xf18da66f ^ 0x1359e706af0e307c;
  _DAT_183201178 = (_DAT_183201178 * -0xbe05e3a5cdbc897 ^ _DAT_1832012e8) + uVar1;
  _DAT_183201130 = _DAT_183201178 ^ _DAT_1832012e8;
  _DAT_183201250 = 0xf18da66f;
  uVar1 = (~_DAT_183201280 + 0xe725a71) *
          ((_DAT_183201118 ^ 0x75af854a) + (ulonglong)((uint)_DAT_183201118 & 0x75af854a) * 2);
  uVar1 = (uVar1 | _DAT_1832010e8) + (uVar1 & _DAT_1832010e8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201370 = func_0x000189030690((uVar1 | 0x7bdddf3a) + (ulonglong)((uint)uVar1 & 0x7bdddf3a))
  ;
  uVar1 = _DAT_183201370 & 0xffffffffff000000;
  _DAT_183201350 = _DAT_183200f00 ^ uVar1 ^ 0x1000000df;
  _DAT_183200f98 = (_DAT_183200f98 ^ uVar1) + 0x1000000df ^ 0xfebf2dd15d91268a;
  _DAT_183201230 = (_DAT_183201230 * -0x4cb56f0f1c30959b ^ _DAT_183200f98) + uVar1;
  _DAT_1832014c8 = _DAT_183201230 ^ _DAT_183200f98;
  _DAT_183201190 = 0xdf;
  uVar1 = (~_DAT_1832010a8 + 0x2a6029b9) *
          ((_DAT_1832014e0 ^ 0x79bc4d3a) + (ulonglong)((uint)_DAT_1832014e0 & 0x79bc4d3a) * 2);
  uVar1 = (uVar1 | _DAT_1832012f8) + (uVar1 & _DAT_1832012f8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832012c0 = func_0x000189030690((uVar1 | 0x53dc6482) + (ulonglong)((uint)uVar1 & 0x53dc6482))
  ;
  _DAT_183200f48 = _DAT_183201488 ^ _DAT_1832012c0 ^ 0x127fe97d7;
  _DAT_183200f00 = (_DAT_183200f00 ^ _DAT_1832012c0) + 0x127fe97d7 ^ 0x7eda14ebc0d92694;
  _DAT_183201458 = (_DAT_183201458 * -0x706e20827c6ff089 ^ _DAT_183200f00) + _DAT_1832012c0;
  _DAT_1832014f8 = _DAT_183201458 ^ _DAT_183200f00;
  _DAT_183201000 = 0x27fe97d7;
  uVar1 = (~_DAT_183201108 + 0x2a6029b9) *
          ((_DAT_1832012b0 ^ 0x79bc4d3a) + (ulonglong)((uint)_DAT_1832012b0 & 0x79bc4d3a) * 2);
  uVar1 = (uVar1 | _DAT_1832011f0) + (uVar1 & _DAT_1832011f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832010c8 = func_0x000189030690((uVar1 | 0x53dc6482) + (ulonglong)((uint)uVar1 & 0x53dc6482))
  ;
  _DAT_1832012f8 = (_DAT_1832012f8 ^ _DAT_1832010c8) + 0xd7fe47a7 ^ 0xdf6d543a094db66c;
  _DAT_183201200 = (_DAT_183201200 * -0x56c1fc6635ffdf7b ^ _DAT_1832012f8) + _DAT_1832010c8;
  _DAT_183200fa8 = _DAT_183201200 ^ _DAT_1832012f8;
  _DAT_183201248 = 0xd7fe47a7;
  uVar1 = (_DAT_183201020 ^ _DAT_181223b10) + _DAT_183200fb0 + 0x79bc4d3a;
  uVar2 = (_DAT_183200fb0 ^ _UNK_181223b18) + _DAT_183201020 + 0x2a6029b8;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201020 ^ _DAT_181223b10;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183200fb0 ^ _UNK_181223b18;
  _DAT_183201110 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183201020 + 0x2a6029b8) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183200fb0 + 0x79bc4d3a));
  _DAT_183200f80 =
       (_DAT_183200f80 ^ _DAT_183201110 ^ 0x29fb42cf0b221d48) + 0x28002818 ^ 0x16ba2839ec4fe5ef;
  _DAT_1832014f0 =
       (_DAT_1832014f0 * 0x51eb1b84e7866131 ^ _DAT_183200f80) +
       (_DAT_183201110 ^ 0x29fb42cf0b221d48);
  _DAT_183200fb0 = _DAT_1832014f0 ^ _DAT_183200f80;
  _DAT_1832010e0 = 0x28002818;
  _DAT_183201160 = func_0x000189030690(_DAT_183200f60 + 0xc00026e00bbffU ^ 0x10);
  _DAT_1832012f0 = (_DAT_1832012f0 ^ _DAT_183201160) + 0x127fe97d7 ^ 0x4b9c66c893d5d28a;
  _DAT_1832011e0 =
       ((_DAT_1832011c0 ^ _DAT_183201160 ^ 0x127fe97d7) * -0x2cbe0bf6096cb7b3 ^ _DAT_1832012f0) +
       _DAT_183201160;
  _DAT_1832013c0 = _DAT_1832011e0 ^ _DAT_1832012f0;
  _DAT_183201100 = 0x27fe97d7;
  uVar1 = ((_DAT_183201308 ^ 0x842223fa) + (ulonglong)((uint)_DAT_183201308 & 0x842223fa) * 2) *
          -_DAT_1832014e8;
  uVar1 = (uVar1 | _DAT_1832013c8) + (uVar1 & _DAT_1832013c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832011e8 = func_0x000189030690((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  uVar1 = (ulonglong)(~(uint)_DAT_1832011e8 & 0xdf);
  _DAT_1832012e8 = _DAT_183201140 ^ uVar1 ^ 0xdf;
  _DAT_183200f98 = (_DAT_183200f98 ^ uVar1) + 0xdf ^ 0x4748df241e53c8cf;
  _DAT_183201490 = (_DAT_183201490 * 0x20e05621e17df14d ^ _DAT_183200f98) + uVar1;
  _DAT_183200fd0 = _DAT_183201490 ^ _DAT_183200f98;
  _DAT_183201160 = 0xdf;
  uVar1 = (~_DAT_1832014e8 + 0x100000000) *
          ((_DAT_183200f10 ^ 0x79bc4d3a) + (ulonglong)((uint)_DAT_183200f10 & 0x79bc4d3a) * 2);
  uVar1 = (uVar1 | _DAT_183201290) + (uVar1 & _DAT_183201290);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183201058 = func_0x000189030690((uVar1 | 0x8643b2c5) + (ulonglong)((uint)uVar1 & 0x8643b2c5))
  ;
  uVar1 = (_DAT_183201058 << 0x1f | _DAT_183201058 >> 0x21) ^ 0xffffffff;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_RBX) + (uVar2 >> 2 & unaff_RBX);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar1;
  _DAT_183201448 = (_DAT_183201120 ^ uVar1) + 0x26191e0 ^ 0xfd04c775889179c8;
  _DAT_183201480 = (_DAT_183201480 * 0x4ca82f6cdf1e0b97 ^ _DAT_183201448) + uVar1;
  _DAT_183201448 = _DAT_183201480 ^ _DAT_183201448;
  _DAT_183201120 = 0x26191e0;
  _DAT_183200f28 = func_0x000189030690(_DAT_183201438 + 0x53fff8b5ffccffU ^ 0x3a);
  _DAT_183201380 = _DAT_183201380 ^ _DAT_183200f28 * 0x668c4817371e9837 ^ 0x3afd2ee42e5858b7;
  _DAT_183201090 =
       (_DAT_183201090 * -0x5cd1a4bb0b363bef ^ _DAT_183201380) + _DAT_183200f28 * 0x668c4817371e9837
  ;
  _DAT_183201060 = _DAT_183201090 ^ _DAT_183201380;
  _DAT_1832013e8 = 0;
  uVar1 = (_DAT_183201478 ^ 0x842223fa) + _DAT_183201470 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183201478 ^ 0x842223fa;
  uVar2 = ((_DAT_183201470 + _DAT_183201478) * 0x2000 | _DAT_183201470 + _DAT_183201478 >> 0x33) ^
          _DAT_183201470;
  _DAT_1832014c0 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183201478 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183201470 + 0x842223fa));
  uVar1 = (_DAT_1832014c0 & 0xffffffffffff0000) - (_DAT_1832014c0 >> 1 & 0x5555555555550000);
  uVar1 = (uVar1 & 0x3333333333330000) + (uVar1 >> 2 & 0x3333333333330000);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0000) * 0x101010101010101 >> 0x38) << 4 |
          _DAT_1832014c0 & 0xffffffffffff0000;
  _DAT_1832012d8 = _DAT_183201130 ^ uVar1 ^ 0xdf;
  _DAT_183200f58 = (_DAT_183200f58 ^ uVar1) + 0xdf ^ 0xdb5305090ded951e;
  _DAT_183201140 = (_DAT_183201140 * -0x700d4826ed1cc9db ^ _DAT_183200f58) + uVar1;
  _DAT_183200f00 = _DAT_183201140 ^ _DAT_183200f58;
  _DAT_183201428 = 0xdf;
  uVar1 = (_DAT_183200f00 ^ _DAT_181223b20) + _DAT_1832010c8 + 0x78aa0f2c;
  uVar2 = (_DAT_1832010c8 ^ _UNK_181223b28) + _DAT_183200f00 + 0xfc882c09;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183200f00 ^ _DAT_181223b20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832010c8 ^ _UNK_181223b28;
  _DAT_183201318 =
       func_0x000189030690((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183200f00 + 0xfc882c09) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832010c8 + 0x78aa0f2c));
  _DAT_183200f40 = _DAT_183200f40 ^ _DAT_183201090 ^ 0xab7b6022a0afe6bd;
  _DAT_1832010f0 = (_DAT_1832010f0 * -0x684120b9779382c5 ^ _DAT_183200f40) + _DAT_183201090;
  _DAT_183201020 = 0;
  switch(0xdf < *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9007161 (image 189007161) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189007161(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar7 = param_2 * (unaff_RSI - param_1);
  uVar7 = (uVar7 | in_RAX) + (uVar7 & in_RAX);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183201098 =
       func_0x000189030690((unaff_RSI ^ param_4 | uVar7) +
                           (ulonglong)((uint)(unaff_RSI ^ param_4) & (uint)uVar7));
  uVar6 = _DAT_1812243d0;
  uVar5 = _DAT_1812243c0;
  uVar4 = _DAT_1812243a0;
  uVar3 = _DAT_181224380;
  uVar2 = _DAT_181224330;
  uVar7 = _DAT_183201098 - (_DAT_183201098 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_183201098;
  uVar8 = -unaff_RSI;
  _DAT_183200fe0 = (_DAT_183200fe0 ^ uVar7) - unaff_RSI ^ 0xae5e62106d8d238;
  _DAT_183201128 = (_DAT_183201128 * -0x474f74c37072351 ^ _DAT_183200fe0) + uVar7;
  _DAT_183200f78 = _DAT_183201128 ^ _DAT_183200fe0;
  _DAT_183201018 = uVar8 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar8;
  *(int *)(unaff_RBP + 0x80) = (int)uVar8;
  *(char *)(unaff_RBP + 0x48) = (char)uVar8 + (char)((uVar8 & 0xffffffff) / 10) * -10;
  uVar7 = (~_DAT_183201240 + 0x3c) *
          ((_DAT_183201360 ^ 0x84222371) + (ulonglong)((uint)_DAT_183201360 & 0x84222371) * 2);
  uVar7 = (uVar7 | _DAT_1832011b0) + (uVar7 & _DAT_1832011b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183201320 = func_0x000189030690((uVar7 | 0x8422234a) + (ulonglong)((uint)uVar7 & 0x8422234a))
  ;
  uVar7 = _DAT_183201320 - (_DAT_183201320 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183201320;
  uVar7 = uVar8 >> 1 | uVar8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar8;
  _DAT_183200f28 = (_DAT_183200f28 ^ uVar8) + 0x7f ^ 0x10fcebc08447285a;
  _DAT_183201160 = (_DAT_183201160 * 0x2c99c22be36f7969 ^ _DAT_183200f28) + uVar8;
  _DAT_183201038 = _DAT_183201160 ^ _DAT_183200f28;
  _DAT_183201298 = 0x7f;
  uVar7 = (~_DAT_1832012e0 + 0x61) *
          ((_DAT_183200fc8 ^ 0x84222325) + (ulonglong)((uint)_DAT_183200fc8 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_1832010a0) + (uVar7 & _DAT_1832010a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183201490 = func_0x000189030690((uVar7 | 0x84222345) + (ulonglong)((uint)uVar7 & 0x84222345))
  ;
  _DAT_1832013f8 = (_DAT_1832013f8 ^ _DAT_183201490) - 0x60 ^ 0x7dffe27a7c722c62;
  _DAT_1832011e0 = (_DAT_1832011e0 * -0x190dbe8d865c1f1f ^ _DAT_1832013f8) + _DAT_183201490;
  _DAT_183201090 = _DAT_1832011e0 ^ _DAT_1832013f8;
  _DAT_183201140 = 0xa0;
  uVar7 = (~_DAT_1832013e8 + 0x61) *
          ((_DAT_183201050 ^ 0x84222315) + (ulonglong)((uint)_DAT_183201050 & 0x84222315) * 2);
  uVar7 = (uVar7 | _DAT_183201408) + (uVar7 & _DAT_183201408);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832014f0 = func_0x000189030690((uVar7 | 0x84222375) + (ulonglong)((uint)uVar7 & 0x84222375))
  ;
  uVar7 = (_DAT_1832014f0 & 0xffffffffffff0000) << 0x2e | _DAT_1832014f0 >> 0x12;
  _DAT_183201150 = _DAT_183201098 ^ uVar7 ^ 0x90;
  _DAT_183201310 = (_DAT_183201310 ^ uVar7) + 0x90 ^ 0xc4714e9b513111e7;
  _DAT_183201458 = (_DAT_183201458 * 0x4a8ad499ba558ab9 ^ _DAT_183201310) + uVar7;
  _DAT_183201430 = _DAT_183201458 ^ _DAT_183201310;
  _DAT_183201368 = 0x90;
  _DAT_183201470 = func_0x000189030690(_DAT_183200f38 ^ 0xffdd007c14ffdde7);
  uVar7 = (_DAT_183201470 & 0x1ffffffff) << 0x1c | _DAT_183201470 >> 0x24;
  _DAT_1832013f0 = _DAT_183201390 ^ uVar7 ^ 0x130;
  _DAT_183201400 = (_DAT_183201400 ^ uVar7) + 0x130 ^ 0xaa748fc903c906c7;
  _DAT_183201450 = (_DAT_183201450 * 0x52eea272d0ce3def ^ _DAT_183201400) + uVar7;
  _DAT_183201148 = _DAT_183201450 ^ _DAT_183201400;
  _DAT_183201448 = 0x30;
  uVar7 = (~_DAT_183201010 + 0x9b) *
          ((_DAT_183201310 ^ 0x84222325) + (ulonglong)((uint)_DAT_183201310 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_183201190) + (uVar7 & _DAT_183201190);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183200ff0 = func_0x000189030690((uVar7 | 0x842223bf) + (ulonglong)((uint)uVar7 & 0x842223bf))
  ;
  _DAT_183201150 = (_DAT_183201150 ^ _DAT_183200ff0 & 0xfffffff000) - 0x9a ^ 0xeb19f7a291efea9d;
  _DAT_1832012b8 =
       (_DAT_1832012b8 * 0x7a801a1d77a42453 ^ _DAT_183201150) + (_DAT_183200ff0 & 0xfffffff000);
  _DAT_1832011a8 = _DAT_1832012b8 ^ _DAT_183201150;
  _DAT_1832010d0 = 0x66;
  _DAT_1832014f8 = func_0x000189030690(_DAT_183200fb8 + 0x1d0084890021ff ^ 0x2e);
  uVar7 = ((_DAT_1832014f8 << 0x12 | _DAT_1832014f8 >> 0x2e) >> 0xc) * 0x6788a08691d89000;
  _DAT_183200fb8 = _DAT_183201460 ^ uVar7 ^ 0x130;
  _DAT_1832012a0 = (_DAT_1832012a0 ^ uVar7) + 0x130 ^ 0x5c13e0d0da4a49dc;
  _DAT_183200fd0 = (_DAT_183200fd0 * -0x4e60ded4a84fbe75 ^ _DAT_1832012a0) + uVar7;
  _DAT_1832010f0 = _DAT_183200fd0 ^ _DAT_1832012a0;
  _DAT_183201490 = 0x30;
  uVar7 = (_DAT_183200f58 ^ _DAT_180556930) + _DAT_1832012a0 + 0x84222325;
  uVar8 = (_DAT_1832012a0 ^ _UNK_180556938) + _DAT_183200f58 + 0xb0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183200f58 ^ _DAT_180556930;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832012a0 ^ _UNK_180556938;
  _DAT_183200f08 =
       func_0x000189030690((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183200f58 + 0xb0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832012a0 + 0x84222325));
  _DAT_183201088 = (_DAT_183201088 ^ _DAT_183200f08 & 0x1fffffffff) - 0xb0 ^ 0xe4c753712c519e88;
  _DAT_183200f98 =
       (_DAT_183200f98 * -0x3516f29bcff6c26d ^ _DAT_183201088) + (_DAT_183200f08 & 0x1fffffffff);
  _DAT_1832013b0 = _DAT_183200f98 ^ _DAT_183201088;
  _DAT_183200fc8 = _DAT_183201198 ^ 0xffffffffffffff50;
  _DAT_183201248 = 0x50;
  uVar7 = (_DAT_183201080 ^ _DAT_1808a5090) + _DAT_183201228 + 0x84222315;
  uVar8 = (_DAT_183201228 ^ _UNK_1808a5098) + _DAT_183201080 + 0xb0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183201080 ^ _DAT_1808a5090;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183201228 ^ _UNK_1808a5098;
  _DAT_183200fd0 =
       func_0x000189030690((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183201080 + 0xb0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183201228 + 0x84222315));
  uVar7 = _DAT_183200fd0 ^ 0x2100;
  _DAT_1832010b8 = _DAT_183200fb0 ^ uVar7 ^ 0xe0;
  _DAT_183201148 = (_DAT_183201148 ^ uVar7) + 0xe0 ^ 0x7ae630a4f6e9fda4;
  _DAT_183200f40 = (_DAT_183200f40 * -0x4906b6a13794dc5b ^ _DAT_183201148) + uVar7;
  _DAT_1832012a0 = _DAT_183200f40 ^ _DAT_183201148;
  _DAT_183200f60 = 0xe0;
  _DAT_1832011e8 = func_0x000189030690(_DAT_183201110 + 0x21007c6affddffU ^ 0x4c);
  uVar7 = _DAT_1832011e8 ^ 0xe0;
  _DAT_183201288 = _DAT_183200fa8 ^ uVar7 ^ 0x130;
  _DAT_183201448 = (_DAT_183201448 ^ uVar7) + 0x130 ^ 0x2f8b39a236bc637d;
  _DAT_183201400 = (_DAT_183201400 * -0x623ae163f526adbb ^ _DAT_183201448) + uVar7;
  _DAT_1832011a8 = _DAT_183201400 ^ _DAT_183201448;
  _DAT_1832013c0 = 0x30;
  uVar7 = (~_DAT_183200f60 + 0x5a) *
          ((_DAT_183201098 ^ 0x8422235a) + (ulonglong)((uint)_DAT_183201098 & 0x8422235a) * 2);
  uVar7 = (uVar7 | _DAT_1832012e8) + (uVar7 & _DAT_1832012e8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183201288 = func_0x000189030690((uVar7 | 0x84222303) + (ulonglong)((uint)uVar7 & 0x84222303))
  ;
  uVar7 = _DAT_183201288 - (_DAT_183201288 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183201288) & 0x7fffffffffffffff;
  _DAT_183201178 = (_DAT_183201178 ^ uVar7) + 0x59 ^ 0x74e9f6e7c7466002;
  _DAT_183201128 = (_DAT_183201128 * 0x4b6957e799b02d7 ^ _DAT_183201178) + uVar7;
  _DAT_183201280 = _DAT_183201128 ^ _DAT_183201178;
  _DAT_183200fd8 = 0x59;
  _DAT_183200fe0 = func_0x000189030690(_DAT_183201328 + 0xffe300838effe1ffU ^ 0x62);
  _DAT_1832012a0 = _DAT_183201400 ^ _DAT_183200fe0 ^ 0xd8;
  _DAT_183200f78 = (_DAT_183200f78 ^ _DAT_183200fe0) + 0xd8 ^ 0x66b21708a80839f0;
  _DAT_183201488 = (_DAT_183201488 * -0x161c92f92fee5b71 ^ _DAT_183200f78) + _DAT_183200fe0;
  _DAT_183201350 = _DAT_183201488 ^ _DAT_183200f78;
  _DAT_183201380 = 0xd8;
  _DAT_183201280 = func_0x000189030690(_DAT_1832014b0 + 0xffdcff7c22ffddffU ^ 0x72);
  _DAT_183201098 = (ulonglong)(~(uint)_DAT_183201280 & 0xd8);
  _DAT_183200fc0 = _DAT_183200fc0 ^ _DAT_183201098 ^ 0x26a1bf8ce746e8bd;
  _DAT_1832011b8 = (_DAT_1832011b8 * -0x50add2ac05002f83 ^ _DAT_183200fc0) + _DAT_183201098;
  _DAT_183201348 = _DAT_1832011b8 ^ _DAT_183200fc0;
  _DAT_183201158 = 0;
  uVar7 = ((_DAT_183200f98 ^ 0x84222315) + (ulonglong)((uint)_DAT_183200f98 & 0x84222315) * 2) *
          -_DAT_1832013b8;
  uVar7 = (uVar7 | _DAT_183201278) + (uVar7 & _DAT_183201278);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832011e8 = func_0x000189030690((uVar7 | 0x84222315) + (ulonglong)((uint)uVar7 & 0x84222315))
  ;
  uVar7 = _DAT_1832011e8 ^ 0x30;
  _DAT_183201428 = _DAT_183200f08 ^ uVar7 ^ 0x30;
  _DAT_1832013c8 = (_DAT_1832013c8 ^ uVar7) + 0x30 ^ 0x906b2ce7dcd77b9d;
  _DAT_1832011c0 = (_DAT_1832011c0 * 0x3e0a094315c6b1fb ^ _DAT_1832013c8) + uVar7;
  _DAT_183201150 = _DAT_1832011c0 ^ _DAT_1832013c8;
  _DAT_1832014b0 = 0x30;
  _DAT_1832013c8 = func_0x000189030690(_DAT_1832011a0 + 0xffdd007ba2ffe1ff ^ 0x83);
  uVar7 = _DAT_1832013c8 * 0x2eb964a4c4eee44b ^ 0x7f;
  _DAT_183200f38 = (_DAT_183201130 ^ uVar7) + 0x80 ^ 0x669b677a8ab8dffb;
  _DAT_183201320 = (_DAT_183201320 * 0x1157b2723e7c0fb7 ^ _DAT_183200f38) + uVar7;
  _DAT_183200f38 = _DAT_183201320 ^ _DAT_183200f38;
  _DAT_183201130 = 0x80;
  uVar7 = (~_DAT_183200f20 + 0x81) *
          ((_DAT_1832013d8 ^ 0x8422235a) + (ulonglong)((uint)_DAT_1832013d8 & 0x8422235a) * 2);
  uVar7 = (uVar7 | _DAT_183201390) + (uVar7 & _DAT_183201390);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183201478 = func_0x000189030690((uVar7 | 0x842223da) + (ulonglong)((uint)uVar7 & 0x842223da))
  ;
  _DAT_183201058 = _DAT_183201058 ^ _DAT_1832011a0 ^ 0xbad9ed2955e6b902;
  _DAT_183200f68 = (_DAT_183200f68 * 0x6ac13b260f581b97 ^ _DAT_183201058) + _DAT_1832011a0;
  _DAT_183201258 = _DAT_183200f68 ^ _DAT_183201058;
  _DAT_183201370 = 0;
  uVar7 = (_DAT_1832013a0 ^ _DAT_1812242d0) + _DAT_183201450 + 0x84222371;
  uVar8 = (_DAT_183201450 ^ _UNK_1812242d8) + _DAT_1832013a0 + 0x54;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832013a0 ^ _DAT_1812242d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183201450 ^ _UNK_1812242d8;
  _DAT_1832013c0 =
       func_0x000189030690((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832013a0 + 0x54) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183201450 + 0x84222371));
  _DAT_183200ff8 = _DAT_183200ff8 ^ _DAT_1832013c0 ^ 0x1bc4 ^ 0x8b2eeb3870990541;
  _DAT_1832013d0 =
       (_DAT_1832013d0 * -0x1e599cd2dd5140e7 ^ _DAT_183200ff8) + (_DAT_1832013c0 ^ 0x1bc4);
  _DAT_1832014d0 = _DAT_1832013d0 ^ _DAT_183200ff8;
  _DAT_1832011f0 = 0;
  _DAT_1832012c8 = func_0x000189030690(_DAT_1832011f8 + 0x22ff7c15001dffU ^ 0xd1);
  uVar7 = _DAT_1832012c8 - (_DAT_1832012c8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1832012c8;
  uVar7 = uVar8 & 0x1fffffffffff;
  uVar8 = uVar7 - (uVar8 >> 1 & 0x55555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar7;
  _DAT_1832013e8 = _DAT_183201410 ^ uVar7 ^ 0x30;
  _DAT_1832013f8 = (_DAT_1832013f8 ^ uVar7) + 0x30 ^ 0xe8e310d1d5958cf1;
  _DAT_183201430 = (_DAT_183201430 * 0xe395a5044eec309 ^ _DAT_1832013f8) + uVar7;
  _DAT_1832010b8 = _DAT_183201430 ^ _DAT_1832013f8;
  _DAT_183200f40 = 0x30;
  uVar8 = (ulonglong)*(byte *)(unaff_RBP + 0x48);
  uVar7 = (~_DAT_1832011b0 + 0x31) *
          ((uVar8 ^ 0x84222325 ^ _DAT_183201340) +
          (ulonglong)((uint)_DAT_183201340 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar7 = (uVar7 | _DAT_1832013a8) + (uVar7 & _DAT_1832013a8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183201000 =
       func_0x000189030690((uVar8 ^ 0x84222315 | uVar7) +
                           (ulonglong)((uint)(uVar8 ^ 0x84222315) & (uint)uVar7));
  uVar7 = _DAT_183201000 << 0x39 | _DAT_183201000 >> 7;
  uVar8 = uVar8 | 0x30;
  _DAT_1832014e8 = (_DAT_1832014e8 ^ uVar7) + uVar8 ^ 0xe3df1576bc59d186;
  _DAT_183201178 = (_DAT_183201178 * 0x432d211a9b4a653d ^ _DAT_1832014e8) + uVar7;
  _DAT_183201188 = _DAT_183201178 ^ _DAT_1832014e8;
  uVar7 = ~_DAT_183200ff0 * ((_DAT_183201200 ^ 0x84222330) + (_DAT_183201200 & 0x84222330) * 2);
  uVar7 = (uVar7 | _DAT_1832011b0) + (uVar7 & _DAT_1832011b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183201470 = uVar8;
  _DAT_1832013b8 = func_0x000189030690((uVar7 | 0xffffffff7bdddccf) + (uVar7 & 0xffffffff7bdddccf));
  auVar1._8_4_ = 0x15;
  auVar1._0_8_ = 0x15;
  auVar1._12_4_ = 0;
  uVar10 = SUB168(auVar1 ^ _DAT_18001a710,0);
  uVar9 = SUB164(auVar1 ^ _DAT_18001a710,0);
  uVar7 = _DAT_1832013b8 & 0xffffffffffffff80;
  _DAT_1832014d8 =
       (ulonglong)uVar9 * (ulonglong)_DAT_181224320 +
       ((ulonglong)uVar9 * (ulonglong)_DAT_181224350 + (uVar10 >> 0x20) * (ulonglong)_DAT_181224320
       << 0x20) +
       (ulonglong)uVar9 * (ulonglong)uVar2 +
       ((ulonglong)uVar9 * (ulonglong)_DAT_181224340 + (uVar10 >> 0x20) * (ulonglong)uVar2 << 0x20)
       + ((ulonglong)_DAT_181224310 * 0x15 << 0x20) + (ulonglong)_DAT_181224300 * 0x15 +
         ((ulonglong)_DAT_1812242f0 * 0x15 << 0x20) + (ulonglong)_DAT_1812242e0 * 0x15 +
       (-((ulonglong)uVar9 * (ulonglong)uVar5 +
         ((ulonglong)uVar9 * (ulonglong)_DAT_1812243f0 + (uVar10 >> 0x20) * (ulonglong)uVar5 << 0x20
         )) - ((ulonglong)uVar9 * (ulonglong)uVar6 +
               ((ulonglong)uVar9 * (ulonglong)_DAT_1812243e0 + (uVar10 >> 0x20) * (ulonglong)uVar6
               << 0x20) +
              ((ulonglong)_DAT_1812243b0 * 0x15 << 0x20) + (ulonglong)uVar4 * 0x15 +
              ((ulonglong)_DAT_181224390 * 0x15 << 0x20) + (ulonglong)uVar3 * 0x15)) +
       0xc044ec98bda9f11e;
  _DAT_183200fb8 = _DAT_183200fb0 ^ uVar7 ^ _DAT_1832014d8;
  _DAT_1832010c0 = (_DAT_1832010c0 ^ uVar7) + _DAT_1832014d8 ^ 0xb2ade7cb5684c485;
  _DAT_1832010e8 = (_DAT_1832010e8 * 0x3edfc7bd880f8453 ^ _DAT_1832010c0) + uVar7;
  _DAT_183201230 = _DAT_1832010e8 ^ _DAT_1832010c0;
  *(char *)(unaff_RBP + -0x50 + _DAT_1832014d8) = (char)uVar8;
  switch(*(uint *)(unaff_RBP + 0x80) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 901d169 (image 18901d169) =====

undefined8 thunk_FUN_18900707d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



