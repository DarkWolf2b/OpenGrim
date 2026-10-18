// ===== continuation @ rva af2b9f3 (image 18af2b9f3) =====

void FUN_18af2b9f3(void)

{
  return;
}



// ===== continuation @ rva af10b9b (image 18af10b9b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af10bf1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af10b9b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva af1ffe6 (image 18af1ffe6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af1ffe6(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000058;
  int in_stack_00000068;
  
  lVar4 = (**(code **)(*unaff_RSI + 0x6f0))();
  bVar1 = *(byte *)(lVar4 + in_stack_00000068);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar4,2);
  uVar6 = (~_DAT_18327df30 + 0x931e9975) *
          ((_DAT_18327e3f0 ^ 0x74e45e92) + (ulonglong)((uint)_DAT_18327e3f0 & 0x74e45e92) * 2);
  uVar6 = (uVar6 | _DAT_18327e0d0) + (uVar6 & _DAT_18327e0d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e300 = func_0x00018af2bbd0((uVar6 | 0xe7fac7e6) + (ulonglong)((uint)uVar6 & 0xe7fac7e6))
  ;
  uVar5 = _DAT_18327e300 ^ 0x8a5ec1c68b8555ec;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar2 + (uint)bVar2 ^ uVar5;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5) &
          0x7fffffffffffffff;
  _DAT_18327df78 = (_DAT_18327df78 ^ uVar6) + 0xf3defdf7 ^ 0xd0de86cc26cf0b82;
  _DAT_18327e150 = (_DAT_18327e150 * -0x73be16ca46ea35eb ^ _DAT_18327df78) + uVar6;
  _DAT_18327df90 = _DAT_18327e150 ^ _DAT_18327df78;
  _DAT_18327e4c8 = 0xf3defdf7;
  _DAT_18327e250 = func_0x00018af2bbd0(_DAT_18327e3f8 ^ 0xfffc001c38ffb476);
  uVar6 = _DAT_18327e250 << 0x39 | _DAT_18327e250 >> 7;
  _DAT_18327e3b0 = (_DAT_18327e3b0 ^ uVar6) + 0xa0f7276c ^ 0xcb3764a5203813f7;
  _DAT_18327e2c8 = (_DAT_18327e2c8 * -0x74dca5cdaab80233 ^ _DAT_18327e3b0) + uVar6;
  _DAT_18327e380 = _DAT_18327e2c8 ^ _DAT_18327e3b0;
  _DAT_18327e200 = 0xa0f7276c;
  uVar6 = (_DAT_18327dfa0 ^ _DAT_181a07690) + _DAT_18327e4d0 + 0x84222325;
  uVar5 = (_DAT_18327e4d0 ^ _UNK_181a07698) + _DAT_18327dfa0 + 0x11a44d8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18327dfa0 ^ _DAT_181a07690;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18327e4d0 ^ _UNK_181a07698;
  _DAT_18327e300 =
       func_0x00018af2bbd0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18327dfa0 + 0x11a44d8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18327e4d0 + 0x84222325));
  uVar6 = _DAT_18327e300 * 0x312cfc3ed42ff81b ^ 0x11a44d8;
  _DAT_18327e110 = (_DAT_18327e110 ^ uVar6) - 0x11a44d8 ^ 0x2c4243384055384f;
  _DAT_18327e258 = (_DAT_18327e258 * -0x4ae3c428f3849d8b ^ _DAT_18327e110) + uVar6;
  _DAT_18327e2c0 = _DAT_18327e258 ^ _DAT_18327e110;
  _DAT_18327e330 = 0xfee5bb28;
  uVar6 = (_DAT_18327e1b8 ^ _DAT_181a076a0) + _DAT_18327e438 + 0x863b67fd;
  uVar5 = (_DAT_18327e438 ^ _UNK_181a076a8) + _DAT_18327e1b8 + 0xfee5bb28;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18327e1b8 ^ _DAT_181a076a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18327e438 ^ _UNK_181a076a8;
  _DAT_18327e3f0 =
       func_0x00018af2bbd0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18327e1b8 + 0xfee5bb28) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18327e438 + 0x863b67fd));
  uVar6 = (ulonglong)(~(uint)_DAT_18327e3f0 & 0x21944d8);
  _DAT_18327df00 = _DAT_18327dfa8 ^ uVar6 ^ 0x100ff0000;
  _DAT_18327e198 = (_DAT_18327e198 ^ uVar6) + 0x100ff0000 ^ 0x9b72c546bd7a8c94;
  _DAT_18327e108 = (_DAT_18327e108 * -0x13604ef24051ac9f ^ _DAT_18327e198) + uVar6;
  _DAT_18327e1f0 = _DAT_18327e108 ^ _DAT_18327e198;
  _DAT_18327e260 = 0xff0000;
  _DAT_18327e050 = func_0x00018af2bbd0(_DAT_18327e1b0 + 0x2d0041410016ffU ^ 0x20);
  _DAT_18327e318 =
       (_DAT_18327e318 ^ _DAT_18327e050 * -0x199b802001e95399) - 0xc54bfce4 ^ 0xd42b395882af8568;
  _DAT_18327e428 =
       (_DAT_18327e428 * -0x3b08870b54acdd33 ^ _DAT_18327e318) +
       _DAT_18327e050 * -0x199b802001e95399;
  _DAT_18327e280 = _DAT_18327e428 ^ _DAT_18327e318;
  _DAT_18327e268 = 0x3ab4031c;
  _DAT_18327e448 = func_0x00018af2bbd0(_DAT_18327e1b8 + 0x4affc1beff89ff ^ 0x7b);
  uVar6 = _DAT_18327e448 * -0x61f238672f3ff6f3;
  _DAT_18327e258 = _DAT_18327e018 ^ uVar6 ^ 0xc64afce4;
  _DAT_18327e130 = (_DAT_18327e130 ^ uVar6) + 0xc64afce4 ^ 0x1a9d3b69c9049db2;
  _DAT_18327e000 = (_DAT_18327e000 * 0x66df523bac8c6eed ^ _DAT_18327e130) + uVar6;
  _DAT_18327e2c8 = _DAT_18327e000 ^ _DAT_18327e130;
  _DAT_18327e0e0 = 0xc64afce4;
  uVar6 = (~_DAT_18327dfd0 + 0x3ab4031d) *
          ((_DAT_18327e478 ^ 0x4268dfc1) + (ulonglong)((uint)_DAT_18327e478 & 0x4268dfc1) * 2);
  uVar6 = (uVar6 | _DAT_18327e398) + (uVar6 & _DAT_18327e398);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e470 = func_0x00018af2bbd0((uVar6 | 0x78dcdcdd) + (ulonglong)((uint)uVar6 & 0x78dcdcdd))
  ;
  _DAT_18327e088 = _DAT_18327e190 ^ _DAT_18327e470 ^ 0x100ff0000;
  _DAT_18327e3a0 = (_DAT_18327e3a0 ^ _DAT_18327e470) + 0x100ff0000 ^ 0x83a886227ce048ee;
  _DAT_18327e4f0 = (_DAT_18327e4f0 * -0x7e4463e98ce0405f ^ _DAT_18327e3a0) + _DAT_18327e470;
  _DAT_18327e488 = _DAT_18327e4f0 ^ _DAT_18327e3a0;
  _DAT_18327df88 = 0xff0000;
  uVar6 = (_DAT_18327e0d8 ^ _DAT_181a076b0) + _DAT_18327e270 + 0xb1bc2095;
  uVar5 = (_DAT_18327e270 ^ _UNK_181a076b8) + _DAT_18327e0d8 + 0xcb60fc50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18327e0d8 ^ _DAT_181a076b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18327e270 ^ _UNK_181a076b8;
  _DAT_18327e0a0 =
       func_0x00018af2bbd0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18327e0d8 + 0xcb60fc50) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18327e270 + 0xb1bc2095));
  uVar6 = _DAT_18327e0a0 ^ 0x359e03b0;
  _DAT_18327e1a8 = _DAT_18327e040 ^ uVar6 ^ 0x100ff0000;
  _DAT_18327e0f0 = (_DAT_18327e0f0 ^ uVar6) + 0x100ff0000 ^ 0x4e184ffeb18a3c6d;
  _DAT_18327e340 = (_DAT_18327e340 * -0x95cd37a97ea8f9 ^ _DAT_18327e0f0) + uVar6;
  _DAT_18327e3d8 = _DAT_18327e340 ^ _DAT_18327e0f0;
  _DAT_18327e2c8 = 0xff0000;
  _DAT_18327e110 = func_0x00018af2bbd0(_DAT_18327e420 ^ 0xe900ca5dfff855);
  uVar6 = _DAT_18327e110 - (_DAT_18327e110 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18327e110;
  _DAT_18327e008 = _DAT_18327e1a0 ^ uVar6 ^ 0x194d62563;
  _DAT_18327df70 = (_DAT_18327df70 ^ uVar6) + 0x194d62563 ^ 0x7763b05df65da404;
  _DAT_18327e340 = (_DAT_18327e340 * 0x6c9146badda9804f ^ _DAT_18327df70) + uVar6;
  _DAT_18327e0f8 = _DAT_18327e340 ^ _DAT_18327df70;
  _DAT_18327e0e8 = 0x94d62563;
  uVar6 = (~_DAT_18327e488 + 0xa0f7276d) *
          ((_DAT_18327e310 ^ 0x77fcded2) + (ulonglong)((uint)_DAT_18327e310 & 0x77fcded2) * 2);
  uVar6 = (uVar6 | _DAT_18327e3f8) + (uVar6 & _DAT_18327e3f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327df70 = func_0x00018af2bbd0((uVar6 | 0xd70bf9be) + (ulonglong)((uint)uVar6 & 0xd70bf9be))
  ;
  _DAT_18327e160 = (_DAT_18327e160 ^ _DAT_18327df70) + 0x5329da9b ^ 0x9446a8dde42b5dfd;
  _DAT_18327e150 = (_DAT_18327e150 * -0x3ccc7b6ac473501b ^ _DAT_18327e160) + _DAT_18327df70;
  _DAT_18327e1f0 = _DAT_18327e150 ^ _DAT_18327e160;
  _DAT_18327e438 = 0x5329da9b;
  uVar6 = (~_DAT_18327e308 + 0xa0f7276d) *
          ((_DAT_18327df20 ^ 0x77fcded2) + (ulonglong)((uint)_DAT_18327df20 & 0x77fcded2) * 2);
  uVar6 = (uVar6 | _DAT_18327e0b8) + (uVar6 & _DAT_18327e0b8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e300 = func_0x00018af2bbd0((uVar6 | 0xd70bf9be) + (ulonglong)((uint)uVar6 & 0xd70bf9be))
  ;
  _DAT_18327e1d8 = (_DAT_18327e1d8 ^ _DAT_18327e300) + 0xa0d62564 ^ 0x5c2555c71d909e90;
  _DAT_18327e430 = (_DAT_18327e430 * 0x31d6ab3af3403b69 ^ _DAT_18327e1d8) + _DAT_18327e300;
  _DAT_18327e160 = _DAT_18327e430 ^ _DAT_18327e1d8;
  _DAT_18327e1c8 = 0xa0d62564;
  _DAT_18327df88 = func_0x00018af2bbd0(_DAT_18327df38 ^ 0x8eff91d5ffa030);
  uVar6 = (_DAT_18327df88 ^ 0x155598eb4d000000) & 0xffffffffff800000;
  _DAT_18327e3f8 = _DAT_18327e120 ^ uVar6 ^ 0x94d62563;
  _DAT_18327df98 = (_DAT_18327df98 ^ uVar6) + 0x94d62563 ^ 0xc2d45f8a698ba3c0;
  _DAT_18327df80 = (_DAT_18327df80 * 0x87d64f81efa6753 ^ _DAT_18327df98) + uVar6;
  _DAT_18327e450 = _DAT_18327df80 ^ _DAT_18327df98;
  _DAT_18327e180 = 0x94d62563;
  _DAT_18327e3f8 = func_0x00018af2bbd0(_DAT_18327e2e0 + 0x20ff7bdcffe1ffU ^ 0x52);
  _DAT_18327e000 = _DAT_18327e3f8 ^ 0x94d62563;
  _DAT_18327e230 = _DAT_18327e230 ^ _DAT_18327e000 ^ 0xf37ccce0ef001fac;
  _DAT_18327dfe8 = (_DAT_18327dfe8 * -0x5b902925f980b0af ^ _DAT_18327e230) + _DAT_18327e000;
  _DAT_18327e288 = _DAT_18327dfe8 ^ _DAT_18327e230;
  _DAT_18327e3c0 = 0;
  uVar6 = ((_DAT_18327e3c8 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18327e3c8 & 0x84dd2325) * 2) *
          -_DAT_18327e4c0;
  uVar6 = (uVar6 | _DAT_18327df48) + (uVar6 & _DAT_18327df48);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e060 = func_0x00018af2bbd0((uVar6 | 0x84dd2325) + (ulonglong)((uint)uVar6 & 0x84dd2325))
  ;
  uVar6 = (_DAT_18327e060 >> 0x3d) << 0x3e | (_DAT_18327e060 & 0x1ffffffffffe0000) << 1;
  _DAT_18327e180 = _DAT_18327e220 ^ uVar6 ^ 0xff0000;
  _DAT_18327e4c8 = (_DAT_18327e4c8 ^ uVar6) + 0xff0000 ^ 0xccf8b9f7cb9419b7;
  _DAT_18327e330 = (_DAT_18327e330 * -0x3e0341b0f762d4fd ^ _DAT_18327e4c8) + uVar6;
  _DAT_18327e350 = _DAT_18327e330 ^ _DAT_18327e4c8;
  _DAT_18327e390 = 0xff0000;
  _DAT_18327e2f0 = func_0x00018af2bbd0(_DAT_18327e290 + 0xffdeff7be5002cffU ^ 0xaf);
  _DAT_18327e030 = _DAT_18327e3c0 ^ _DAT_18327e2f0 ^ 0xff0000;
  _DAT_18327e2b8 = (_DAT_18327e2b8 ^ _DAT_18327e2f0) + 0xff0000 ^ 0xfe66c8262aa4524;
  _DAT_18327e448 = (_DAT_18327e448 * -0x4fb4dbf9eba59235 ^ _DAT_18327e2b8) + _DAT_18327e2f0;
  _DAT_18327e0c8 = _DAT_18327e448 ^ _DAT_18327e2b8;
  _DAT_18327e2d8 = 0xff0000;
  uVar6 = (~_DAT_18327e228 + 0xf0c67db8) *
          ((_DAT_18327e3d0 ^ 0x74e45e92) + (ulonglong)((uint)_DAT_18327e3d0 & 0x74e45e92) * 2);
  uVar6 = (uVar6 | _DAT_18327e1f0) + (uVar6 & _DAT_18327e1f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018af2bbd0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uVar6 = uVar6 << 5 | uVar6 >> 0x3b;
  _DAT_18327dfe0 = _DAT_18327dfe0 ^ uVar6 ^ 0x324753ef09c54916;
  _DAT_18327e340 = (_DAT_18327e340 * 0x61310e200c107333 ^ _DAT_18327dfe0) + uVar6;
  _DAT_18327e0c0 = _DAT_18327e340 ^ _DAT_18327dfe0;
  _DAT_18327e2f8 = 0;
  uVar6 = ((_DAT_18327df78 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18327df78 & 0x84dd2325) * 2) *
          -_DAT_18327e038;
  uVar6 = (uVar6 | _DAT_18327e410) + (uVar6 & _DAT_18327e410);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e2f0 = func_0x00018af2bbd0((uVar6 | 0x84dd2325) + (ulonglong)((uint)uVar6 & 0x84dd2325))
  ;
  uVar6 = (ulonglong)(~(uint)_DAT_18327e2f0 & 0xff0000) ^ 0xff0000;
  _DAT_18327e0b8 = _DAT_18327e3b0 ^ uVar6 ^ 0xff0000;
  _DAT_18327e138 = (_DAT_18327e138 ^ uVar6) + 0xff0000 ^ 0x93386445214b115f;
  _DAT_18327e098 = (_DAT_18327e098 * 0x4b8fcfe5885f2acd ^ _DAT_18327e138) + uVar6;
  _DAT_18327e338 = _DAT_18327e098 ^ _DAT_18327e138;
  _DAT_18327e3b8 = 0xff0000;
  uVar7 = (ulonglong)bVar1 * 0x10000;
  uVar5 = in_stack_00000058 ^ 0x84222325;
  uVar6 = ((_DAT_18327e228 ^ uVar5) + (uVar5 & _DAT_18327e228) * 2) * (uVar7 - _DAT_18327e028);
  uVar6 = (uVar6 | _DAT_18327e0a8) + (uVar6 & _DAT_18327e0a8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327df40 = func_0x00018af2bbd0((uVar5 ^ uVar7 | uVar6) + (uVar6 & (uVar5 ^ uVar7)));
  uVar6 = in_stack_00000058 * uVar7 ^ _DAT_18327df40;
  uVar6 = uVar6 << 0x2d | uVar6 >> 0x13;
  _DAT_18327df08 = in_stack_00000058 | uVar7;
  _DAT_18327e1f8 = (_DAT_18327e1f8 ^ uVar6) + _DAT_18327df08 ^ 0xdac6454459f864a1;
  _DAT_18327e3e8 = (_DAT_18327e3e8 * -0x70fe0e1e8ec75e8d ^ _DAT_18327e1f8) + uVar6;
  _DAT_18327e3b0 = _DAT_18327e3e8 ^ _DAT_18327e1f8;
  iVar3 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa_00,in_stack_00000038);
  switch(iVar3 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva af2b29f (image 18af2b29f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af2b29f(void)

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



// ===== continuation @ rva af2ad57 (image 18af2ad57) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af2ad57(void)

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



// ===== continuation @ rva af13779 (image 18af13779) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af13790 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af13779(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva af27cde (image 18af27cde) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af27cde(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar5 = (ulonglong)(uint)((int)cVar1 << 0x18);
  uVar4 = in_stack_00000050 ^ 0x84222325 ^ _DAT_18327e040;
  lVar3 = (in_stack_00000050 ^ 0x84222325) + _DAT_18327df10;
  uVar6 = uVar4 + lVar3;
  uVar7 = (uVar5 ^ _DAT_18327df10) + _DAT_18327e040 + uVar5;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5 ^ _DAT_18327df10;
  _DAT_18327e3f0 =
       func_0x00018af2bbd0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18327e040 + uVar5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  _DAT_18327e250 = in_stack_00000050 | uVar5;
  _DAT_18327e068 =
       (_DAT_18327e068 ^ _DAT_18327e3f0 * -0x11773e8f84d6f7cd) + _DAT_18327e250 ^ 0x7d67fee0404e16ed
  ;
  _DAT_18327e300 =
       (_DAT_18327e300 * -0x60db3c7232e95cf1 ^ _DAT_18327e068) +
       _DAT_18327e3f0 * -0x11773e8f84d6f7cd;
  _DAT_18327e098 = _DAT_18327e300 ^ _DAT_18327e068;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa_00,in_stack_00000038);
  switch(iVar2 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva af2b8c7 (image 18af2b8c7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af2b8c7(void)

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



// ===== continuation @ rva af10d23 (image 18af10d23) =====

void FUN_18af10d23(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva af143d0 (image 18af143d0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af1445f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af143d0(void)

{
  longlong *unaff_RSI;
  undefined8 uStack0000000000000168;
  undefined4 uStack0000000000000170;
  
  uStack0000000000000168 = 0x39003500380038;
  rdtsc();
  uStack0000000000000170 = 0x31002d;
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva af2b537 (image 18af2b537) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af2b537(void)

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



// ===== continuation @ rva aefe8fb (image 18aefe8fb) =====

void FUN_18aefe8fb(void)

{
  return;
}



// ===== continuation @ rva aefaa90 (image 18aefaa90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aefaa90(void)

{
  FUN_190ddce00();
  (*_DAT_181a00908)();
  return;
}



// ===== continuation @ rva aeffd9b (image 18aeffd9b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aeffd9b(void)

{
  (*_DAT_181a00e28)();
  return;
}



// ===== continuation @ rva aeffed5 (image 18aeffed5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aeffed5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181a00918)();
  return;
}



// ===== continuation @ rva aefe575 (image 18aefe575) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aefe575(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a01238)();
  return;
}



// ===== continuation @ rva aefec49 (image 18aefec49) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aefec49(void)

{
  FUN_190dd72e0();
  (*_DAT_181a00418)();
  return;
}



// ===== continuation @ rva af01970 (image 18af01970) =====

void FUN_18af01970(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva aeffc5b (image 18aeffc5b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aeffc5b(void)

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



// ===== continuation @ rva af0195f (image 18af0195f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0195f(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_181a01648)();
  return;
}



// ===== continuation @ rva af000bb (image 18af000bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af000bb(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva af01847 (image 18af01847) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01847(void)

{
  FUN_190de3220();
  (*_DAT_181a00e78)();
  return;
}



// ===== continuation @ rva af01ba1 (image 18af01ba1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01ba1(void)

{
  FUN_190dd72e0();
  (*_DAT_181a02578)();
  return;
}



// ===== continuation @ rva af01b23 (image 18af01b23) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01b23(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a02418)();
  return;
}



// ===== continuation @ rva af01ec0 (image 18af01ec0) =====

void FUN_18af01ec0(void)

{
  return;
}



// ===== continuation @ rva af01bea (image 18af01bea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01bea(void)

{
  FUN_190dd9df0();
  (*_DAT_181a02508)();
  return;
}



// ===== continuation @ rva af01eb8 (image 18af01eb8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01eb8(void)

{
  (*_DAT_181a02458)();
  return;
}



// ===== continuation @ rva af01b52 (image 18af01b52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af01b52(void)

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



// ===== continuation @ rva af01b67 (image 18af01b67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01b67(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a02568)();
  return;
}



// ===== continuation @ rva af01c41 (image 18af01c41) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01c41(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181a024f8)();
  return;
}



// ===== continuation @ rva af01ec8 (image 18af01ec8) =====

void FUN_18af01ec8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva af01d79 (image 18af01d79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01d79(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a02448)();
  return;
}



// ===== continuation @ rva af041d4 (image 18af041d4) =====

void FUN_18af041d4(void)

{
  return;
}



// ===== continuation @ rva af04030 (image 18af04030) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af04030(void)

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



// ===== continuation @ rva af04d98 (image 18af04d98) =====

undefined8 thunk_FUN_18af051b5(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva af08a04 (image 18af08a04) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af08a04(void)

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



// ===== continuation @ rva af0c931 (image 18af0c931) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0c931(void)

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



// ===== continuation @ rva af0b558 (image 18af0b558) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0b558(void)

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



// ===== continuation @ rva af0449c (image 18af0449c) =====

undefined8 thunk_FUN_18af041bc(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva af067d8 (image 18af067d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af067d8(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x2e8))();
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



// ===== continuation @ rva af06549 (image 18af06549) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af06549(void)

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



// ===== continuation @ rva af08724 (image 18af08724) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af08724(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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



// ===== continuation @ rva af0ce32 (image 18af0ce32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0ce32(void)

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



// ===== continuation @ rva af0cdde (image 18af0cdde) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0cdde(void)

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



// ===== continuation @ rva af0dca5 (image 18af0dca5) =====

void FUN_18af0dca5(void)

{
  return;
}



// ===== continuation @ rva af0cf8b (image 18af0cf8b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0cf8b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a04b18)();
  return;
}



// ===== continuation @ rva af0ce17 (image 18af0ce17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0ce17(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a04b98)();
  return;
}



// ===== continuation @ rva af0dac3 (image 18af0dac3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0dac3(void)

{
  FUN_190de3220();
  (*_DAT_181a04918)();
  return;
}



// ===== continuation @ rva af0d08c (image 18af0d08c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0d08c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a04b18)();
  return;
}



// ===== continuation @ rva af0dcb4 (image 18af0dcb4) =====

void FUN_18af0dcb4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva af0d517 (image 18af0d517) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0d517(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva af0d8aa (image 18af0d8aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0d8aa(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva af0d359 (image 18af0d359) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0d359(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181a04b28)();
  return;
}



// ===== continuation @ rva af0fdc6 (image 18af0fdc6) =====

void FUN_18af0fdc6(void)

{
  return;
}



// ===== continuation @ rva af0de2c (image 18af0de2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0de2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181a05578)();
  return;
}



// ===== continuation @ rva af1096a (image 18af1096a) =====

void FUN_18af1096a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva af0f1a3 (image 18af0f1a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0f1a3(void)

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



// ===== continuation @ rva af0e877 (image 18af0e877) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0e877(void)

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



// ===== continuation @ rva af10666 (image 18af10666) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af10666(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a05658)();
  return;
}



// ===== continuation @ rva af10255 (image 18af10255) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af10255(void)

{
  FUN_190de3220();
  (*_DAT_181a04d78)();
  return;
}



// ===== continuation @ rva af0e373 (image 18af0e373) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0e373(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva af0eafb (image 18af0eafb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0eafb(void)

{
  (*_DAT_181a05ad8)();
  return;
}



// ===== continuation @ rva af10904 (image 18af10904) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af10904(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181a058e8)();
  return;
}



// ===== continuation @ rva af10417 (image 18af10417) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af10417(void)

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



// ===== continuation @ rva af0eeaa (image 18af0eeaa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0eeaa(void)

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



// ===== continuation @ rva af0ee4c (image 18af0ee4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0ee4c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181a05628)();
  return;
}



