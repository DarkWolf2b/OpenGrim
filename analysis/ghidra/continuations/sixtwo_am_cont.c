// ===== continuation @ rva fe063f7 (image 18fe063f7) =====

void FUN_18fe063f7(void)

{
  return;
}



// ===== continuation @ rva fdf9b6b (image 18fdf9b6b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf9b6b(void)

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



// ===== continuation @ rva fdff007 (image 18fdff007) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdff007(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R15;
  int iStack0000000000000048;
  ulonglong uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  iStack0000000000000048 = 5;
  uStack0000000000000058 = 0x10;
  uStack0000000000000050 =
       (ulonglong)
       CONCAT24((short)((ulonglong)unaff_R15 >> 0x30),(int)(char)((ulonglong)unaff_R15 >> 0x10));
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iStack0000000000000048 < 0 || iVar1 <= iStack0000000000000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe029aa (image 18fe029aa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe029aa(int param_1)

{
  int iVar1;
  longlong *unaff_RSI;
  longlong lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong in_stack_00000038;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar3 = param_1 << 0x10;
  _DAT_18343ad80 = func_0x00018fe065e0(_DAT_18343acb8 ^ 0xffc5ffc7ecff50ca);
  _DAT_18343b010 =
       (_DAT_18343b010 ^ _DAT_18343ad80 & 0x7ffffffffff) + 0x7cfdf930 ^ 0xe6cef51985fdabb3;
  _DAT_18343ac68 =
       (_DAT_18343ac68 * 0x393321b0a11e64b7 ^ _DAT_18343b010) + (_DAT_18343ad80 & 0x7ffffffffff);
  _DAT_18343af30 = _DAT_18343ac68 ^ _DAT_18343b010;
  _DAT_18343af40 = 0x7cfdf930;
  uVar8 = (_DAT_18343ab48 ^ _DAT_182b2ca10) + _DAT_18343ae90 + 0x84222325;
  uVar9 = (_DAT_18343ae90 ^ _UNK_182b2ca18) + _DAT_18343ab48 + 0x51b065ab;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18343ab48 ^ _DAT_182b2ca10;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18343ae90 ^ _UNK_182b2ca18;
  _DAT_18343aca8 =
       func_0x00018fe065e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18343ab48 + 0x51b065ab) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18343ae90 + 0x84222325));
  uVar8 = (_DAT_18343aca8 ^ 0x51b065ab) << 0x27 | (_DAT_18343aca8 ^ 0x51b065ab) >> 0x19;
  _DAT_18343b218 = (_DAT_18343b218 ^ uVar8) - 0x51b065ab ^ 0xd65ad0bf99058863;
  _DAT_18343af68 = (_DAT_18343af68 * 0x7f262e79994db6df ^ _DAT_18343b218) + uVar8;
  _DAT_18343add0 = _DAT_18343af68 ^ _DAT_18343b218;
  _DAT_18343ab20 = 0xae4f9a55;
  uVar8 = (~_DAT_18343ac48 + 0x51b065ac) *
          ((_DAT_18343ab80 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18343ab80 & 0x84dd2325) * 2);
  uVar8 = (uVar8 | _DAT_18343afd0) + (uVar8 & _DAT_18343afd0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18343ad98 = func_0x00018fe065e0((uVar8 | 0xd56d468e) + (ulonglong)((uint)uVar8 & 0xd56d468e))
  ;
  uVar8 = _DAT_18343ad98 & 0xfffffffff;
  _DAT_18343ac30 = _DAT_18343abc0 ^ uVar8 ^ 0x52af65ab;
  _DAT_18343b2c8 = (_DAT_18343b2c8 ^ uVar8) + 0x52af65ab ^ 0x912c7138a665fd1;
  _DAT_18343b148 = (_DAT_18343b148 * 0x5aadb39cdf55aacd ^ _DAT_18343b2c8) + uVar8;
  _DAT_18343ad70 = _DAT_18343b148 ^ _DAT_18343b2c8;
  _DAT_18343aca0 = 0x52af65ab;
  uVar8 = (_DAT_18343b280 ^ _DAT_182b2ca20) + _DAT_18343ac28 + 0xd68d468e;
  uVar9 = (_DAT_18343ac28 ^ _UNK_182b2ca28) + _DAT_18343b280 + 0xae4f9a55;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18343b280 ^ _DAT_182b2ca20;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18343ac28 ^ _UNK_182b2ca28;
  _DAT_18343adb8 =
       func_0x00018fe065e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18343b280 + 0xae4f9a55) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18343ac28 + 0xd68d468e));
  uVar8 = (_DAT_18343adb8 ^ 0xfeefffff) << 0x11 | _DAT_18343adb8 >> 0x2f;
  _DAT_18343b1e0 = _DAT_18343b038 ^ uVar8 ^ 0x100ff0000;
  _DAT_18343ac18 = (_DAT_18343ac18 ^ uVar8) + 0x100ff0000 ^ 0xa41ed1df350bd120;
  _DAT_18343b250 = (_DAT_18343b250 * 0x7961cad8177db675 ^ _DAT_18343ac18) + uVar8;
  _DAT_18343b170 = _DAT_18343b250 ^ _DAT_18343ac18;
  _DAT_18343b228 = 0xff0000;
  uVar8 = (~_DAT_18343abb8 + 0x14f83be5) *
          ((_DAT_18343ace0 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18343ace0 & 0x84dd2325) * 2);
  uVar8 = (uVar8 | _DAT_18343b208) + (uVar8 & _DAT_18343b208);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18343af58 = func_0x00018fe065e0((uVar8 | 0x902518c1) + (ulonglong)((uint)uVar8 & 0x902518c1))
  ;
  uVar8 = _DAT_18343af58 & 0xfffffffffffffff;
  _DAT_18343b290 = _DAT_18343b2c8 ^ uVar8 ^ 0x15f73be4;
  _DAT_18343aee0 = (_DAT_18343aee0 ^ uVar8) + 0x15f73be4 ^ 0x297345397277dfa;
  _DAT_18343aef0 = (_DAT_18343aef0 * -0x21dbf58429f2b41d ^ _DAT_18343aee0) + uVar8;
  _DAT_18343af70 = _DAT_18343aef0 ^ _DAT_18343aee0;
  _DAT_18343b000 = 0x15f73be4;
  uVar8 = (~_DAT_18343abf0 + 0xb76096b) *
          ((_DAT_18343b138 ^ 0x84222325) + (ulonglong)((uint)_DAT_18343b138 & 0x84222325) * 2);
  uVar8 = (uVar8 | _DAT_18343b008) + (uVar8 & _DAT_18343b008);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18343abd0 = func_0x00018fe065e0((uVar8 | 0x8f542a4f) + (ulonglong)((uint)uVar8 & 0x8f542a4f))
  ;
  _DAT_18343b2c8 = _DAT_18343b2c8 - 0xb76096a ^ 0xe64fc5f6df9567e8;
  _DAT_18343b290 = _DAT_18343ab18 * 0x45e0a0f10a1ed57;
  _DAT_18343ab18 = _DAT_18343b290 ^ _DAT_18343b2c8;
  _DAT_18343b030 = 0xf489f696;
  _DAT_18343b110 = func_0x00018fe065e0(_DAT_18343b2e0 ^ 0x2a0085350058c2);
  uVar8 = _DAT_18343b110 ^ 0xb76096a;
  _DAT_18343afe8 = _DAT_18343ad98 ^ uVar8 ^ 0xc75096a;
  _DAT_18343ad88 = (_DAT_18343ad88 ^ uVar8) + 0xc75096a ^ 0xd3336961c95be81c;
  _DAT_18343aed8 = (_DAT_18343aed8 * -0x6b4aaf05fe8d99 ^ _DAT_18343ad88) + uVar8;
  _DAT_18343b0a0 = _DAT_18343aed8 ^ _DAT_18343ad88;
  _DAT_18343b288 = 0xc75096a;
  _DAT_18343ad58 = func_0x00018fe065e0(_DAT_18343add8 ^ 0x5c007ca900398f);
  uVar8 = _DAT_18343ad58 ^ 0xf489f696;
  _DAT_18343ae08 = _DAT_18343af50 ^ uVar8 ^ 0x100ff0000;
  _DAT_18343ac28 = (_DAT_18343ac28 ^ uVar8) + 0x100ff0000 ^ 0x6658998b31220689;
  _DAT_18343b118 = (_DAT_18343b118 * -0x1279df047324505f ^ _DAT_18343ac28) + uVar8;
  _DAT_18343ac68 = _DAT_18343b118 ^ _DAT_18343ac28;
  _DAT_18343ac10 = 0xff0000;
  uVar8 = (~_DAT_18343b1c8 + 0x7cfdf931) *
          ((_DAT_18343aed0 ^ 0x4b95d45e) + (ulonglong)((uint)_DAT_18343aed0 & 0x4b95d45e) * 2);
  uVar8 = (uVar8 | _DAT_18343b1a0) + (uVar8 & _DAT_18343b1a0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18343b2b0 = func_0x00018fe065e0((uVar8 | 0x37682d6e) + (ulonglong)((uint)uVar8 & 0x37682d6e))
  ;
  uVar8 = _DAT_18343b2b0 & 0xfffffffffffff000;
  _DAT_18343b2c0 = _DAT_18343b288 ^ uVar8 ^ 0x14cb5f0ab;
  _DAT_18343b1b8 = (_DAT_18343b098 ^ uVar8) + 0x14cb5f0ab ^ 0x6fbf81a694707f;
  _DAT_18343af58 = (_DAT_18343af58 * 0x3d5d026813113f3d ^ _DAT_18343b1b8) + uVar8;
  _DAT_18343b1b8 = _DAT_18343af58 ^ _DAT_18343b1b8;
  _DAT_18343b098 = 0x4cb5f0ab;
  uVar8 = (_DAT_18343acd8 ^ _DAT_182b2ca30) + _DAT_18343b048 + 0x4b95d45e;
  uVar9 = (_DAT_18343b048 ^ _UNK_182b2ca38) + _DAT_18343acd8 + 0x7cfdf930;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18343acd8 ^ _DAT_182b2ca30;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18343b048 ^ _UNK_182b2ca38;
  _DAT_18343b1d8 =
       func_0x00018fe065e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18343acd8 + 0x7cfdf930) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18343b048 + 0x4b95d45e));
  uVar8 = (_DAT_18343b1d8 ^ 0xffffff7b) << 0x21 | (_DAT_18343b1d8 ^ 0xffffff7b) >> 0x1f;
  _DAT_18343ac78 = (_DAT_18343ac78 ^ uVar8) + 0xb34a0e4b ^ 0xcf8f1ac0acad9a04;
  _DAT_18343b248 = (_DAT_18343b248 * 0x58adc283e0d30df7 ^ _DAT_18343ac78) + uVar8;
  _DAT_18343ab08 = _DAT_18343b248 ^ _DAT_18343ac78;
  _DAT_18343ae90 = 0xb34a0e4b;
  uVar8 = (~_DAT_18343ad38 + 0x996be261) *
          ((_DAT_18343ac80 ^ 0x37682d6e) + (ulonglong)((uint)_DAT_18343ac80 & 0x37682d6e) * 2);
  uVar8 = (uVar8 | _DAT_18343ab88) + (uVar8 & _DAT_18343ab88);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18343ae10 = func_0x00018fe065e0((uVar8 | 0xae03cf0e) + (ulonglong)((uint)uVar8 & 0xae03cf0e))
  ;
  uVar8 = _DAT_18343ae10 & 0x7ffffffffff;
  _DAT_18343b0a8 = _DAT_18343ade8 ^ uVar8 ^ 0x14cb5f0ab;
  _DAT_18343abb8 = (_DAT_18343abb8 ^ uVar8) + 0x14cb5f0ab ^ 0x5761332b63768a7a;
  _DAT_18343b1d8 = (_DAT_18343b1d8 * 0x6792d8df488060a3 ^ _DAT_18343abb8) + uVar8;
  _DAT_18343b158 = _DAT_18343b1d8 ^ _DAT_18343abb8;
  _DAT_18343b180 = 0x4cb5f0ab;
  _DAT_18343adc8 = func_0x00018fe065e0(_DAT_18343b220 + 0x1f007c1b001dffU ^ 0xba);
  _DAT_18343b2e8 = _DAT_18343adc8 & 0xfffffffffffffff8;
  _DAT_18343b0e0 = _DAT_18343b0e0 ^ _DAT_18343b2e8 ^ 0x6318f2b9dc63213c;
  _DAT_18343aed8 = (_DAT_18343aed8 * -0x6dc35627d334bfbd ^ _DAT_18343b0e0) + _DAT_18343b2e8;
  _DAT_18343acf0 = _DAT_18343aed8 ^ _DAT_18343b0e0;
  _DAT_18343acc8 = 0;
  uVar8 = ((_DAT_18343b050 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18343b050 & 0x84dd2325) * 2) *
          -_DAT_18343b0e0;
  uVar8 = (uVar8 | _DAT_18343ac78) + (uVar8 & _DAT_18343ac78);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18343b100 = func_0x00018fe065e0((uVar8 | 0x84dd2325) + (ulonglong)((uint)uVar8 & 0x84dd2325))
  ;
  _DAT_18343b240 = _DAT_18343b188 ^ _DAT_18343b100 ^ 0xff0000;
  _DAT_18343b108 = (_DAT_18343b108 ^ _DAT_18343b100) + 0xff0000 ^ 0x35788d102a4432fe;
  _DAT_18343af28 = (_DAT_18343af28 * 0x561112c1e46bf049 ^ _DAT_18343b108) + _DAT_18343b100;
  _DAT_18343acd0 = _DAT_18343af28 ^ _DAT_18343b108;
  _DAT_18343ab28 = 0xff0000;
  _DAT_18343b130 = func_0x00018fe065e0(_DAT_18343b158 + 0xffeb008b610069ff ^ 0xb);
  uVar8 = (_DAT_18343b130 >> 0xf & 0x1fff8000000 |
          (_DAT_18343b130 << 8 | _DAT_18343b130 >> 0x38) << 0x29) >> 0x1b |
          (_DAT_18343b130 >> 0xf) << 0x25;
  _DAT_18343b280 = (_DAT_18343b280 ^ uVar8) + 0x30480884 ^ 0x9b4cb62c2fbafee6;
  _DAT_18343acd8 = (_DAT_18343acd8 * 0x4c5afac8b8452c05 ^ _DAT_18343b280) + uVar8;
  _DAT_18343b278 = _DAT_18343acd8 ^ _DAT_18343b280;
  _DAT_18343ac08 = 0x30480884;
  uVar8 = (_DAT_18343af28 ^ _DAT_182b2ca40) + _DAT_18343ace8 + 0x4b95d45e;
  uVar9 = (_DAT_18343ace8 ^ _UNK_182b2ca48) + _DAT_18343af28 + 0x30480884;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18343af28 ^ _DAT_182b2ca40;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18343ace8 ^ _UNK_182b2ca48;
  _DAT_18343ad78 =
       func_0x00018fe065e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18343af28 + 0x30480884) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18343ace8 + 0x4b95d45e));
  uVar8 = (_DAT_18343ad78 ^ 0x272cf10d852f736c) << 0x33 |
          (_DAT_18343ad78 ^ 0x272cf10d852f736c) >> 0xd;
  _DAT_18343af08 = _DAT_18343af08 ^ uVar8 ^ 0x8c8203b4cc31f469;
  _DAT_18343b0a8 = (_DAT_18343b0a8 * 0x63fbee8baa1f0a7 ^ _DAT_18343af08) + uVar8;
  _DAT_18343acc0 = _DAT_18343b0a8 ^ _DAT_18343af08;
  _DAT_18343b048 = 0;
  _DAT_18343ac30 = func_0x00018fe065e0(_DAT_18343ab68 + 0xffe2ff841d0021ff ^ 0xdf);
  _DAT_18343add0 = _DAT_18343add0 ^ _DAT_18343ac30 ^ 0x87b3f17b ^ 0x6e4fd72bc3c252ea;
  _DAT_18343b2f0 =
       (_DAT_18343b2f0 * 0x3818fafb20800097 ^ _DAT_18343add0) + (_DAT_18343ac30 ^ 0x87b3f17b);
  _DAT_18343b128 = _DAT_18343b2f0 ^ _DAT_18343add0;
  _DAT_18343ae68 = 0;
  _DAT_18343ad10 = func_0x00018fe065e0(_DAT_18343aea8 ^ 0x1eff7c1affc4a5);
  uVar8 = (_DAT_18343ad10 ^ 0xff0000) * -0x3bc168568428f913;
  _DAT_18343b128 = _DAT_18343b090 ^ uVar8 ^ 0xff0000;
  _DAT_18343afb8 = (_DAT_18343afb8 ^ uVar8) + 0xff0000 ^ 0x3a23730b6f2dce48;
  _DAT_18343b110 = (_DAT_18343b110 * 0x2e78d46001fcc5ff ^ _DAT_18343afb8) + uVar8;
  _DAT_18343ac70 = _DAT_18343b110 ^ _DAT_18343afb8;
  auVar4._8_8_ = _UNK_180131b48;
  auVar4._0_8_ = (ulonglong)uVar3 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_182b2ca50,_DAT_1800170c0);
  _DAT_18343ab18 = 0xff0000;
  uVar9 = auVar5._8_8_ + auVar5._0_8_;
  uVar8 = uVar9 + _DAT_18343ab70;
  if (auVar5._4_4_ < 0) {
    uVar8 = _DAT_18343b078 ^ uVar9;
  }
  _DAT_18343b018 = func_0x00018fe065e0(SUB161(auVar4 ^ _DAT_182b2ca50,5) ^ uVar8);
  uVar8 = uVar3 ^ _DAT_18343b018;
  uVar9 = (ulonglong)(uVar3 & 0xff0000);
  _DAT_18343ae18 = (_DAT_18343ae18 ^ uVar8) + uVar9 ^ 0x784c22f2be9e75dd;
  _DAT_18343ab68 = (_DAT_18343ab68 * -0x38a20ced9c000931 ^ _DAT_18343ae18) + uVar8;
  _DAT_18343b158 = _DAT_18343ab68 ^ _DAT_18343ae18;
  uVar8 = in_stack_00000038 ^ 0x84222325 ^ _DAT_18343b1d8;
  lVar2 = (in_stack_00000038 ^ 0x84222325) + _DAT_18343abe8;
  uVar6 = uVar8 + lVar2;
  uVar7 = (uVar9 ^ _DAT_18343abe8) + _DAT_18343b1d8 + uVar9;
  uVar8 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar8;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar9 ^ _DAT_18343abe8;
  _DAT_18343b070 = uVar9;
  _DAT_18343af70 =
       func_0x00018fe065e0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343b1d8 + uVar9) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar2);
  _DAT_18343af18 = in_stack_00000038 | uVar9;
  _DAT_18343b2d0 = (_DAT_18343b2d0 ^ _DAT_18343af70) + _DAT_18343af18 ^ 0x81aa5899e1331b62;
  _DAT_18343ac98 = (_DAT_18343ac98 * -0x368681b9b25f4b1d ^ _DAT_18343b2d0) + _DAT_18343af70;
  _DAT_18343ae30 = _DAT_18343ac98 ^ _DAT_18343b2d0;
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fdfdd93 (image 18fdfdd93) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdfdd93(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined2 uStack0000000000000126;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined2 uStack0000000000000140;
  
  uStack0000000000000126 = 0x2f;
  rdtsc();
  uStack0000000000000128 = 0x2f004300420043;
  rdtsc();
  uStack0000000000000130 = 0x610050006f004e;
  rdtsc();
  uStack0000000000000138 = 0x6e006900640064;
  rdtsc();
  uStack0000000000000140 = 0x67;
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



// ===== continuation @ rva fe02970 (image 18fe02970) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe02970(void)

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



// ===== continuation @ rva fdfd07c (image 18fdfd07c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdfd07c(void)

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



// ===== continuation @ rva fe05125 (image 18fe05125) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe05125(void)

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



// ===== continuation @ rva fdff174 (image 18fdff174) =====

void thunk_FUN_18fdfc2fe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva fdeae3f (image 18fdeae3f) =====

void FUN_18fdeae3f(void)

{
  return;
}



// ===== continuation @ rva fde648e (image 18fde648e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fde648e(void)

{
  FUN_190ddce00();
  (*_DAT_182b270e0)();
  return;
}



// ===== continuation @ rva fdf6898 (image 18fdf6898) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf6898(void)

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



// ===== continuation @ rva fdf42ff (image 18fdf42ff) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdf42ff(void)

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



// ===== continuation @ rva fdf424a (image 18fdf424a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf424a(void)

{
  (*_DAT_182b274d0)();
  return;
}



// ===== continuation @ rva fdf6846 (image 18fdf6846) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf6846(void)

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



// ===== continuation @ rva fdf3e88 (image 18fdf3e88) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdf3e88(void)

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



// ===== continuation @ rva fdf61d2 (image 18fdf61d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdf61d2(void)

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



// ===== continuation @ rva fdeb4d0 (image 18fdeb4d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdeb4d0(void)

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



// ===== continuation @ rva fdf63de (image 18fdf63de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdf63de(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fdf3593 (image 18fdf3593) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf3593(void)

{
  (*_DAT_182b274d0)();
  return;
}



// ===== continuation @ rva fe0a7a7 (image 18fe0a7a7) =====

void FUN_18fe0a7a7(void)

{
  return;
}



// ===== continuation @ rva fe0673a (image 18fe0673a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0673a(void)

{
  FUN_190ddce00();
  (*_DAT_182b2d0f8)();
  return;
}



// ===== continuation @ rva fe0a5bb (image 18fe0a5bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0a5bb(void)

{
  (*_DAT_182b2d288)();
  return;
}



// ===== continuation @ rva fe0a4ef (image 18fe0a4ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0a4ef(void)

{
  (*_DAT_182b2cfb8)();
  return;
}



// ===== continuation @ rva fe0a84c (image 18fe0a84c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0a84c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b2d198)();
  return;
}



// ===== continuation @ rva fe0a2aa (image 18fe0a2aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0a2aa(void)

{
  (*_DAT_182b2d178)();
  return;
}



// ===== continuation @ rva fe0a71d (image 18fe0a71d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe0a71d(void)

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



// ===== continuation @ rva fe09da3 (image 18fe09da3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe09da3(void)

{
  int in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe09c03 (image 18fe09c03) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe09c03(void)

{
  (*_DAT_182b2cd88)();
  return;
}



// ===== continuation @ rva fe0a796 (image 18fe0a796) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0a796(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182b2d0a8)();
  return;
}



// ===== continuation @ rva fe09e59 (image 18fe09e59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe09e59(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fdf9780 (image 18fdf9780) =====

void FUN_18fdf9780(void)

{
  return;
}



// ===== continuation @ rva fdf6b67 (image 18fdf6b67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf6b67(void)

{
  FUN_190ddce00();
  (*_DAT_182b2a398)();
  return;
}



// ===== continuation @ rva fdf8518 (image 18fdf8518) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf8518(void)

{
  FUN_190dd72e0();
  (*_DAT_182b29fe8)();
  return;
}



// ===== continuation @ rva fdf97cf (image 18fdf97cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf97cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b2a2c8)();
  return;
}



// ===== continuation @ rva fdf85b8 (image 18fdf85b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf85b8(undefined4 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000048;
  
  (**(code **)(*unaff_RSI + 0x330))(param_1,in_stack_00000048);
  (*_DAT_182b2a728)();
  return;
}



// ===== continuation @ rva fdf8927 (image 18fdf8927) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf8927(void)

{
  FUN_190dd72e0();
  (*_DAT_182b2a8c8)();
  return;
}



// ===== continuation @ rva fdf988c (image 18fdf988c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf988c(void)

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



// ===== continuation @ rva fdf9638 (image 18fdf9638) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdf9638(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fdf8dc8 (image 18fdf8dc8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fdf8dc8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b29f78)();
  return;
}



// ===== continuation @ rva fdf7ef6 (image 18fdf7ef6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdf7ef6(void)

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



// ===== continuation @ rva fdf98de (image 18fdf98de) =====

void FUN_18fdf98de(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fdf78a1 (image 18fdf78a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fdf78a1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe0aa76 (image 18fe0aa76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0aa76(void)

{
  FUN_190dd72e0();
  (*_DAT_182b2dec8)();
  return;
}



// ===== continuation @ rva fe0aa03 (image 18fe0aa03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0aa03(void)

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



// ===== continuation @ rva fe0ab4e (image 18fe0ab4e) =====

void FUN_18fe0ab4e(void)

{
  return;
}



// ===== continuation @ rva fe0ab56 (image 18fe0ab56) =====

void FUN_18fe0ab56(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe0ab3d (image 18fe0ab3d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0ab3d(void)

{
  (*_DAT_182b2de98)();
  return;
}



// ===== continuation @ rva fe0aaf2 (image 18fe0aaf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe0aaf2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe0aa3c (image 18fe0aa3c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0aa3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b2deb8)();
  return;
}



// ===== continuation @ rva fe0aa61 (image 18fe0aa61) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe0aa61(void)

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



// ===== continuation @ rva fe0aa9e (image 18fe0aa9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe0aa9e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe0ac76 (image 18fe0ac76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0ac76(void)

{
  FUN_190dd72e0();
  (*_DAT_182b2df78)();
  return;
}



// ===== continuation @ rva fe0ac03 (image 18fe0ac03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0ac03(void)

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



// ===== continuation @ rva fe0ad4e (image 18fe0ad4e) =====

void FUN_18fe0ad4e(void)

{
  return;
}



// ===== continuation @ rva fe0ac3c (image 18fe0ac3c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0ac3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b2dfc8)();
  return;
}



// ===== continuation @ rva fe0acbf (image 18fe0acbf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0acbf(void)

{
  FUN_190dd9df0();
  (*_DAT_182b2dfa8)();
  return;
}



// ===== continuation @ rva fe0ad16 (image 18fe0ad16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe0ad16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b2dfb8)();
  return;
}



// ===== continuation @ rva fe0ad56 (image 18fe0ad56) =====

void FUN_18fe0ad56(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe0ac9e (image 18fe0ac9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe0ac9e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe0acf2 (image 18fe0acf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe0acf2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe0af66 (image 18fe0af66) =====

void FUN_18fe0af66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong unaff_RBP;
  longlong *unaff_R14;
  
  lVar1 = *unaff_R14;
  *(undefined8 *)(unaff_RBP + 0x40) = param_3;
  uVar2 = (**(code **)(lVar1 + 0x558))();
  *(uint *)(unaff_RBP + 0x50) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
  *(longlong **)(unaff_RBP + 0x48) = unaff_R14;
                    /* WARNING: Could not recover jumptable at 0x00018fe0af96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b2e420 + (ulonglong)(uVar2 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva fe0af13 (image 18fe0af13) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018fe0af49 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18fe0af13(void)

{
  longlong *unaff_R14;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R14 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva fe1f41f (image 18fe1f41f) =====

void FUN_18fe1f41f(void)

{
  return;
}



// ===== continuation @ rva fe0af4c (image 18fe0af4c) =====

undefined8 FUN_18fe0af4c(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva fe1f125 (image 18fe1f125) =====

undefined8 thunk_FUN_18fe0af4c(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva fe17223 (image 18fe17223) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe17223(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  ulonglong uVar4;
  uint unaff_R12D;
  longlong *unaff_R14;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  undefined1 unaff_XMM13 [16];
  
  lVar2 = (**(code **)(*unaff_R14 + 0x6f0))();
  *(int *)(unaff_RBP + 0x50) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x58));
  (**(code **)(*unaff_R14 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x60) = 6;
  *(undefined8 *)(unaff_RBP + 0x50) = unaff_RDI;
  uVar5 = (ulonglong)unaff_R12D;
  auVar6._8_8_ = _UNK_180019298;
  auVar6._0_8_ = uVar5 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_182b2ed80,unaff_XMM13);
  uVar3 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar3 + _DAT_18343b900;
  if (auVar7._4_4_ < 0) {
    uVar4 = _DAT_18343b998 ^ uVar3;
  }
  _DAT_18343b978 = func_0x00018fe32860(SUB161(auVar6 ^ _DAT_182b2ed80,5) ^ uVar4);
  uVar4 = _DAT_18343b978 ^ uVar5;
  uVar9 = unaff_R12D & (uint)_DAT_180017990;
  uVar8 = unaff_R12D | (uint)_DAT_180017990;
  uVar3 = ((((uVar5 ^ _DAT_180017990) & 0xffffffff) * (ulonglong)_DAT_182b2edf0 +
            (((uVar5 ^ _DAT_180017990) & 0xffffffff) * (ulonglong)_DAT_182b2ee00 +
             (_DAT_180017990 >> 0x20) * (ulonglong)_DAT_182b2edf0 << 0x20) +
           ((ulonglong)uVar8 * (ulonglong)_DAT_182b2ede0 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_182b2edd0 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_182b2edc0 << 0x20 |
           (ulonglong)uVar9 * (ulonglong)_DAT_182b2edb0) +
           ((ulonglong)unaff_R12D * (ulonglong)_DAT_182b2eda0 << 0x20) +
           (ulonglong)unaff_R12D * (ulonglong)_DAT_182b2ed90) -
          (((ulonglong)uVar8 * (ulonglong)_DAT_182b2ee60 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_182b2ee50 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_182b2ee60 << 0x20 |
           (ulonglong)uVar9 * (ulonglong)_DAT_182b2ee50) +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_182b2ee40 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_182b2ee30)) + 0x6a81003bc25a2b54;
  _DAT_18343baa0 = _DAT_18343ba20 ^ uVar4 ^ uVar3;
  _DAT_18343b908 = (_DAT_18343b908 ^ uVar4) + uVar3 ^ 0xe6c8599ccec5419b;
  _DAT_18343bac8 = (_DAT_18343bac8 * 0x47e8c0ba8e485b8f ^ _DAT_18343b908) + uVar4;
  _DAT_18343b9d8 = _DAT_18343bac8 ^ _DAT_18343b908;
  _DAT_18343b9a8 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x58) = (int)uVar3;
  iVar1 = (**(code **)(*unaff_R14 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x58) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x58)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe1f314 (image 18fe1f314) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018fe1f352 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18fe1f314(void)

{
  longlong *unaff_R14;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R14 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva fe164f8 (image 18fe164f8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe164f8(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  _DAT_18343b958 = func_0x00018fe32860(_DAT_18343b9b0 ^ 0xffe1ff7616003cdb);
  uVar1 = _DAT_18343b958 ^ 0xdf;
  _DAT_18343ba70 = _DAT_18343ba28 ^ uVar1 ^ 0x3ee106bf;
  _DAT_18343bab0 = (_DAT_18343bab0 ^ uVar1) + 0x3ee106bf ^ 0xfdfc63c30e1d60b5;
  _DAT_18343b938 = (_DAT_18343b938 * 0x3cc56357fbf42baf ^ _DAT_18343bab0) + uVar1;
  _DAT_18343baf8 = _DAT_18343b938 ^ _DAT_18343bab0;
  _DAT_18343b900 = 0x3ee106bf;
  uVar1 = (_DAT_18343b948 ^ _DAT_182b2ea80) + _DAT_18343b9f0 + 0xbac3259a;
  uVar2 = (_DAT_18343b9f0 ^ _UNK_182b2ea88) + _DAT_18343b948 + 0xc11efa20;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18343b948 ^ _DAT_182b2ea80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18343b9f0 ^ _UNK_182b2ea88;
  _DAT_18343ba18 =
       func_0x00018fe32860((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18343b948 + 0xc11efa20) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18343b9f0 + 0xbac3259a));
  uVar1 = _DAT_18343ba18 ^ 0x3ee106bf;
  _DAT_18343ba08 = _DAT_18343baf0 ^ uVar1 ^ 0x1000000df;
  _DAT_18343b968 = (_DAT_18343b968 ^ uVar1) + 0x1000000df ^ 0x61632da96f2f477d;
  _DAT_18343b930 = (_DAT_18343b930 * -0x19552d5f20cb4fcf ^ _DAT_18343b968) + uVar1;
  _DAT_18343baa8 = _DAT_18343b930 ^ _DAT_18343b968;
  _DAT_18343ba30 = 0xdf;
  uVar1 = (_DAT_18343ba18 ^ _DAT_182b2ea90) + _DAT_18343ba28 + 0xd10c2be6;
  uVar2 = (_DAT_18343ba28 ^ _UNK_182b2ea98) + _DAT_18343ba18 + 0xaad1f81c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18343ba18 ^ _DAT_182b2ea90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18343ba28 ^ _UNK_182b2ea98;
  uVar1 = func_0x00018fe32860((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18343ba18 + 0xaad1f81c) ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18343ba28 + 0xd10c2be6));
  _DAT_18343b9b8 = uVar1 ^ 0x38d66ef48eb8dd54;
  _DAT_18343b938 = _DAT_18343ba68 ^ _DAT_18343b9b8 ^ 0x1000000df;
  _DAT_18343b9e8 = (_DAT_18343b9e8 ^ _DAT_18343b9b8) + 0x1000000df ^ 0x53f49df2871252b1;
  _DAT_18343b9b8 = (uVar1 * -0x18556996c5a1763d ^ _DAT_18343b9e8) + _DAT_18343b9b8;
  _DAT_18343b9d8 = _DAT_18343b9b8 ^ _DAT_18343b9e8;
  _DAT_18343b9a0 = 0xdf;
  _DAT_18343ba30 = func_0x00018fe32860(_DAT_18343b920 + 0xff8d0019900033ffU ^ 0x56);
  uVar1 = (_DAT_18343ba30 ^ 0x9215e45fe000000) & 0xfffffffffe000000;
  _DAT_18343ba40 = _DAT_18343ba90 ^ uVar1 ^ 0xf21130c9;
  _DAT_18343b930 = (_DAT_18343b930 ^ uVar1) + 0xf21130c9 ^ 0x13e382af31faefbf;
  _DAT_18343b9f0 = (_DAT_18343b9f0 * 0x3a3a3bb9a1f1a86d ^ _DAT_18343b930) + uVar1;
  _DAT_18343b990 = _DAT_18343b9f0 ^ _DAT_18343b930;
  _DAT_18343b9b0 = _DAT_18343b9c0 ^ 0xf21130c9;
  _DAT_18343b940 = 0xf21130c9;
  uVar1 = (_DAT_18343ba68 ^ _DAT_182b2eaa0) + _DAT_18343ba48 + 0x63dfccbe;
  uVar2 = (_DAT_18343ba48 ^ _UNK_182b2eaa8) + _DAT_18343ba68 + 0xa13412e;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18343ba68 ^ _DAT_182b2eaa0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18343ba48 ^ _UNK_182b2eaa8;
  _DAT_18343b930 =
       func_0x00018fe32860((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18343ba68 + 0xa13412e) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18343ba48 + 0x63dfccbe));
  _DAT_18343ba00 =
       (_DAT_18343ba00 ^ _DAT_18343b930 & 0x3fffffffffff) + 0xedeeaeb5 ^ 0xcb4438683c3eef65;
  _DAT_18343bad0 =
       (_DAT_18343bad0 * 0x1abaa761f3ff1de5 ^ _DAT_18343ba00) + (_DAT_18343b930 & 0x3fffffffffff);
  _DAT_18343ba68 = _DAT_18343bad0 ^ _DAT_18343ba00;
  _DAT_18343bab8 = 0xedeeaeb5;
  uVar1 = (~_DAT_18343ba00 + 0xf21130ca) *
          ((_DAT_18343bac8 ^ 0x763313ec) + (ulonglong)((uint)_DAT_18343bac8 & 0x763313ec) * 2);
  uVar1 = (uVar1 | _DAT_18343b9a0) + (uVar1 & _DAT_18343b9a0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18343baf8 = func_0x00018fe32860((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_18343b9f0 = _DAT_18343bab0;
  _DAT_18343b980 = _DAT_18343b980 ^ _DAT_18343bab0 ^ 0xa302f7cc4c97a3ee;
  _DAT_18343b998 = (_DAT_18343b998 * -0x64baf8502f04e2d3 ^ _DAT_18343b980) + _DAT_18343bab0;
  _DAT_18343ba50 = _DAT_18343b998 ^ _DAT_18343b980;
  _DAT_18343b9f8 = 0;
  uVar1 = (~_DAT_18343b9e0 + 0x100000000) *
          ((_DAT_18343bac0 ^ 0x63dfccbe) + (ulonglong)((uint)_DAT_18343bac0 & 0x63dfccbe) * 2);
  uVar1 = (uVar1 | _DAT_18343b990) + (uVar1 & _DAT_18343b990);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18343b930 = func_0x00018fe32860((uVar1 | 0x9c203341) + (ulonglong)((uint)uVar1 & 0x9c203341))
  ;
  uVar1 = _DAT_18343b930 << 0x31 | _DAT_18343b930 >> 0xf;
  _DAT_18343bac8 = (_DAT_18343bac8 ^ uVar1) + 0x18021064 ^ 0x7beae8027fc5d885;
  _DAT_18343bae0 = (_DAT_18343bae0 * 0x14464dc7a88d60c7 ^ _DAT_18343bac8) + uVar1;
  _DAT_18343ba28 = _DAT_18343bae0 ^ _DAT_18343bac8;
  _DAT_18343ba88 = 0x18021064;
  uVar1 = (~_DAT_18343b9a0 + 0x18021065) *
          ((_DAT_18343ba58 ^ 0x63dfccbe) + (ulonglong)((uint)_DAT_18343ba58 & 0x63dfccbe) * 2);
  uVar1 = (uVar1 | _DAT_18343b9d8) + (uVar1 & _DAT_18343b9d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18343b958 = func_0x00018fe32860((uVar1 | 0x7bdddcda) + (ulonglong)((uint)uVar1 & 0x7bdddcda))
  ;
  _DAT_18343bac0 = _DAT_18343bac0 ^ _DAT_18343bac8 ^ 0x96e794a7df79c017;
  _DAT_18343ba88 = (_DAT_18343ba88 * -0xff137ce194e51cb ^ _DAT_18343bac0) + _DAT_18343bac8;
  _DAT_18343ba80 = _DAT_18343ba88 ^ _DAT_18343bac0;
  _DAT_18343b970 = 0;
  uVar1 = (_DAT_18343bae8 ^ 0x842223fa) + _DAT_18343ba90 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18343bae8 ^ 0x842223fa;
  uVar2 = ((_DAT_18343ba90 + _DAT_18343bae8) * 0x2000 | _DAT_18343ba90 + _DAT_18343bae8 >> 0x33) ^
          _DAT_18343ba90;
  _DAT_18343b990 =
       func_0x00018fe32860((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_18343bae8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18343ba90 + 0x842223fa));
  _DAT_18343b9d8 = _DAT_18343b940 ^ _DAT_18343b990 ^ 0xdf;
  _DAT_18343ba80 = (_DAT_18343ba80 ^ _DAT_18343b990) + 0xdf ^ 0xc29a29846c91ac6e;
  _DAT_18343ba88 =
       (_DAT_18343ba88 * 0x3204857c82ed13e9 ^ _DAT_18343ba80) + _DAT_18343b990 ^ _DAT_18343ba80;
  _DAT_18343baa8 = 0xdf;
  uVar1 = (_DAT_18343b9f8 ^ _DAT_182b2eab0) + _DAT_18343b9e8 + 0x637f842e;
  uVar2 = (_DAT_18343b9e8 ^ _UNK_182b2eab8) + _DAT_18343b9f8 + 0xe75da70b;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18343b9f8 ^ _DAT_182b2eab0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18343b9e8 ^ _UNK_182b2eab8;
  _DAT_18343ba28 =
       func_0x00018fe32860((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18343b9f8 + 0xe75da70b) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18343b9e8 + 0x637f842e));
  _DAT_18343b9b8 = _DAT_18343b9b8 ^ _DAT_18343b960 ^ 0x87d018e5d9fd4521;
  _DAT_18343b978 = (_DAT_18343b978 * 0x616e7c6c3664c4d9 ^ _DAT_18343b9b8) + _DAT_18343b960;
  _DAT_18343ba80 = _DAT_18343b978 ^ _DAT_18343b9b8;
  _DAT_18343b970 = _DAT_18343b9b0;
  _DAT_18343ba98 = 0;
  switch(0xdf < *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe142c3 (image 18fe142c3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe142c3(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong unaff_RBP;
  ulonglong uVar6;
  
  _DAT_18343ba20 = func_0x00018fe32860(_DAT_18343b900 + 0x56ffea41ff9bff ^ 0x45);
  uVar4 = _DAT_18343ba20 >> 1 | _DAT_18343ba20;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ _DAT_18343ba20) * 0x7abb967a6505a217;
  _DAT_18343b920 = (_DAT_18343b920 ^ uVar4) + 0xaac6faeb ^ 0x2137f21f6f196de0;
  _DAT_18343b9e8 = (_DAT_18343b9e8 * -0x146c4894b86856ab ^ _DAT_18343b920) + uVar4;
  _DAT_18343bad8 = _DAT_18343b9e8 ^ _DAT_18343b920;
  _DAT_18343b9a0 = 0xaac6faeb;
  uVar4 = (_DAT_18343baa8 ^ _DAT_182b2e850) + _DAT_18343b9f8 + 0x84222325;
  uVar6 = (_DAT_18343b9f8 ^ _UNK_182b2e858) + _DAT_18343baa8 + 0xf66f7190;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343baa8 ^ _DAT_182b2e850;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343b9f8 ^ _UNK_182b2e858;
  _DAT_18343b948 =
       func_0x00018fe32860((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343baa8 + 0xf66f7190) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343b9f8 + 0x84222325));
  _DAT_18343b990 =
       (_DAT_18343b990 ^ _DAT_18343b948 & 0x3ffffffffffffff) - 0xf66f7190 ^ 0xb9c08f7042c3c748;
  _DAT_18343baf8 =
       (_DAT_18343baf8 * 0x602c0d86e8d63bab ^ _DAT_18343b990) + (_DAT_18343b948 & 0x3ffffffffffffff)
  ;
  _DAT_18343b9e0 = _DAT_18343baf8 ^ _DAT_18343b990;
  _DAT_18343bac0 = 0x9908e70;
  uVar4 = (_DAT_18343b9c0 ^ _DAT_182b2e860) + _DAT_18343bab0 + 0x7bdddcdb;
  uVar6 = (_DAT_18343bab0 ^ _UNK_182b2e868) + _DAT_18343b9c0 + 0xf66f7190;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343b9c0 ^ _DAT_182b2e860;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343bab0 ^ _UNK_182b2e868;
  _DAT_18343bab8 =
       func_0x00018fe32860((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343b9c0 + 0xf66f7190) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343bab0 + 0x7bdddcdb));
  _DAT_18343ba30 = _DAT_18343b9f8 ^ _DAT_18343bab8;
  _DAT_18343ba48 = _DAT_18343ba30 ^ 0x1f66f718e;
  _DAT_18343ba88 = (_DAT_18343ba88 ^ _DAT_18343bab8) + 0x1f66f718e ^ 0x4309fec374888dc3;
  _DAT_18343ba58 = (_DAT_18343ba58 * -0x9fd507ff635211b ^ _DAT_18343ba88) + _DAT_18343bab8;
  _DAT_18343bab0 = _DAT_18343ba58 ^ _DAT_18343ba88;
  _DAT_18343b9f0 = 0xf66f718e;
  uVar4 = (_DAT_18343baf8 ^ _DAT_182b2e870) + _DAT_18343ba80 + 0x724d52ab;
  uVar6 = (_DAT_18343ba80 ^ _UNK_182b2e878) + _DAT_18343baf8 + 0x9908e70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343baf8 ^ _DAT_182b2e870;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343ba80 ^ _UNK_182b2e878;
  _DAT_18343b960 =
       func_0x00018fe32860((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343baf8 + 0x9908e70) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343ba80 + 0x724d52ab));
  uVar4 = _DAT_18343b960 ^ 0xfffffffe;
  _DAT_18343b900 = _DAT_18343b908 ^ uVar4 ^ 0xfffffffe;
  _DAT_18343bad0 = (_DAT_18343bad0 ^ uVar4) + 0xfffffffe ^ 0x487b028ef7ace280;
  _DAT_18343ba08 = (_DAT_18343bab0 * 0x4fba336d34bf00c1 ^ _DAT_18343bad0) + uVar4 ^ _DAT_18343bad0;
  _DAT_18343bab0 = 0xfffffffe;
  uVar4 = (~_DAT_18343ba90 + 0x9d7337e) *
          ((_DAT_18343b9d0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18343b9d0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18343bac0) + (uVar4 & _DAT_18343bac0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18343b920 = func_0x00018fe32860((uVar4 | 0x8df51058) + (ulonglong)((uint)uVar4 & 0x8df51058))
  ;
  uVar4 = _DAT_18343b920 << 0x3d | _DAT_18343b920 >> 3;
  _DAT_18343b9f0 = (_DAT_18343b9f0 ^ uVar4) - 0x9d7337d ^ 0x247d3ba47d3d8e54;
  _DAT_18343b9d8 = (_DAT_18343b9d8 * 0x2eda87adbb1810e3 ^ _DAT_18343b9f0) + uVar4;
  _DAT_18343b940 = _DAT_18343b9d8 ^ _DAT_18343b9f0;
  _DAT_18343ba80 = 0xf628cc83;
  _DAT_18343ba28 = func_0x00018fe32860(_DAT_18343b9a8 ^ 0xacffad59fff588);
  uVar4 = _DAT_18343ba28 ^ 0x9d7337d;
  uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4) <<
          0x16 | _DAT_18343ba28 >> 0x2a;
  _DAT_18343b910 = _DAT_18343b960 ^ uVar4 ^ 0x109d7337b;
  _DAT_18343b960 = (_DAT_18343b960 ^ uVar4) + 0x109d7337b ^ 0x3c591bf3aaaf301d;
  _DAT_18343b980 = (_DAT_18343b980 * -0x41b17f454a207b5f ^ _DAT_18343b960) + uVar4;
  _DAT_18343ba80 = _DAT_18343b980 ^ _DAT_18343b960;
  _DAT_18343b900 = 0x9d7337b;
  uVar4 = ((_DAT_18343ba70 ^ 0x8df5105e) + (ulonglong)((uint)_DAT_18343ba70 & 0x8df5105e) * 2) *
          0xec519908;
  uVar4 = (uVar4 | _DAT_18343b948) + (uVar4 & _DAT_18343b948);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18343b930 = func_0x00018fe32860((uVar4 | 0x7bdddcdd) + (ulonglong)((uint)uVar4 & 0x7bdddcdd))
  ;
  _DAT_18343bae0 = _DAT_18343b950 ^ _DAT_18343b930 ^ 0xfffffffe;
  _DAT_18343b970 = (_DAT_18343b970 ^ _DAT_18343b930) + 0xfffffffe ^ 0x164023a0586400ec;
  _DAT_18343ba68 = (_DAT_18343ba68 * -0x60687b7d713e8219 ^ _DAT_18343b970) + _DAT_18343b930;
  _DAT_18343b9a0 = _DAT_18343ba68 ^ _DAT_18343b970;
  _DAT_18343b9c0 = 0xfffffffe;
  uVar4 = (~_DAT_18343b978 + 0xaac6faec) *
          ((_DAT_18343ba40 ^ 0x73cdd851) + (ulonglong)((uint)_DAT_18343ba40 & 0x73cdd851) * 2);
  uVar4 = (uVar4 | _DAT_18343b930) + (uVar4 & _DAT_18343b930);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18343b9e0 = func_0x00018fe32860((uVar4 | 0xd90b22ba) + (ulonglong)((uint)uVar4 & 0xd90b22ba))
  ;
  uVar4 = _DAT_18343b9e0 ^ 0xf7effb74;
  _DAT_18343ba68 = _DAT_18343b990 ^ uVar4 ^ 0x1a2b6f65f;
  _DAT_18343ba88 = (_DAT_18343ba88 ^ uVar4) + 0x1a2b6f65f ^ 0x2ea5bd3f29b358e;
  _DAT_18343b988 = (_DAT_18343b988 * -0x658e53d585626fdf ^ _DAT_18343ba88) + uVar4;
  _DAT_18343bad0 = _DAT_18343b988 ^ _DAT_18343ba88;
  _DAT_18343b950 = 0xa2b6f65f;
  uVar4 = (_DAT_18343b9f8 ^ _DAT_182b2e880) + _DAT_18343b910 + 0x73cdd851;
  uVar6 = (_DAT_18343b910 ^ _UNK_182b2e888) + _DAT_18343b9f8 + 0xaac6faeb;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343b9f8 ^ _DAT_182b2e880;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343b910 ^ _UNK_182b2e888;
  _DAT_18343ba18 =
       func_0x00018fe32860((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343b9f8 + 0xaac6faeb) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343b910 + 0x73cdd851));
  uVar4 = _DAT_18343ba18 - (_DAT_18343ba18 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = ~((uint)_DAT_18343ba18 ^ (uint)bVar1 + (uint)bVar1) & 0xf7effb74;
  uVar3 = uVar5 >> 1 | uVar5;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          (ulonglong)uVar5;
  _DAT_18343b930 = (_DAT_18343b930 ^ uVar4) + 0x5d29019f ^ 0xc624d1a8527e89b;
  _DAT_18343b9b8 = (_DAT_18343b9b8 * 0x68dccb93c80b907b ^ _DAT_18343b930) + uVar4;
  _DAT_18343ba60 = _DAT_18343b9b8 ^ _DAT_18343b930;
  _DAT_18343bad8 = 0x5d29019f;
  uVar4 = (_DAT_18343bae8 ^ _DAT_182b2e890) + _DAT_18343ba28 + 0xd90b22ba;
  uVar6 = (_DAT_18343ba28 ^ _UNK_182b2e898) + _DAT_18343bae8 + 0x458df4c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343bae8 ^ _DAT_182b2e890;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343ba28 ^ _UNK_182b2e898;
  _DAT_18343b930 =
       func_0x00018fe32860((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343bae8 + 0x458df4c0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343ba28 + 0xd90b22ba));
  uVar4 = (_DAT_18343b930 ^ 0x5dadf5df) << 0x37 | (_DAT_18343b930 ^ 0x5dadf5df) >> 9;
  _DAT_18343ba18 = _DAT_18343bad0 ^ uVar4 ^ 0xa2b6f65f;
  _DAT_18343b9f0 = (_DAT_18343b9f0 ^ uVar4) + 0xa2b6f65f ^ 0x1e409409165fc058;
  _DAT_18343ba60 = (_DAT_18343ba60 * -0x621d48562aed4da7 ^ _DAT_18343b9f0) + uVar4;
  _DAT_18343bab8 = _DAT_18343ba60 ^ _DAT_18343b9f0;
  _DAT_18343b928 = 0xa2b6f65f;
  uVar4 = (~_DAT_18343b980 + 0xa2b6f660) *
          ((_DAT_18343b9a0 ^ 0x2694d57a) + (ulonglong)((uint)_DAT_18343b9a0 & 0x2694d57a) * 2);
  uVar4 = (uVar4 | _DAT_18343baf0) + (uVar4 & _DAT_18343baf0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18343ba00 = func_0x00018fe32860((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_18343b938 = _DAT_18343ba00 << 0x1d | _DAT_18343ba00 >> 0x23;
  _DAT_18343bab0 = _DAT_18343bab0 ^ _DAT_18343b938 ^ 0x26335d719767167;
  _DAT_18343bab8 = (_DAT_18343bab8 * -0x64fc9b403b78d413 ^ _DAT_18343bab0) + _DAT_18343b938;
  _DAT_18343b920 = _DAT_18343bab8 ^ _DAT_18343bab0;
  _DAT_18343b9f8 = 0;
  uVar4 = ((_DAT_18343bac8 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_18343bac8 & 0x7bdddcdb) * 2) *
          -_DAT_18343ba30;
  uVar4 = (uVar4 | _DAT_18343b970) + (uVar4 & _DAT_18343b970);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18343baa0 = func_0x00018fe32860((uVar4 | 0x7bdddcdb) + (ulonglong)((uint)uVar4 & 0x7bdddcdb))
  ;
  uVar4 = _DAT_18343baa0 ^ 0xfffffffe;
  _DAT_18343b910 = _DAT_18343b9e8 ^ uVar4 ^ 0xfffffffe;
  _DAT_18343b9e0 = (_DAT_18343b9e0 ^ uVar4) + 0xfffffffe ^ 0x9e3cce2c3b5fbee2;
  _DAT_18343ba50 = (_DAT_18343ba50 * 0x57f02a2011b7c12b ^ _DAT_18343b9e0) + uVar4;
  _DAT_18343bad8 = _DAT_18343ba50 ^ _DAT_18343b9e0;
  _DAT_18343ba00 = 0xfffffffe;
  uVar4 = (_DAT_18343ba98 ^ _DAT_182b2e8a0) + _DAT_18343b940 + 0x73cdd851;
  uVar6 = (_DAT_18343b940 ^ _UNK_182b2e8a8) + _DAT_18343ba98 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343ba98 ^ _DAT_182b2e8a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343b940 ^ _UNK_182b2e8a8;
  _DAT_18343ba80 =
       func_0x00018fe32860((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343ba98 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343b940 + 0x73cdd851));
  uVar6 = _DAT_18343ba80 ^ 0xf7effb730810048c;
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar6;
  _DAT_18343ba58 = (_DAT_18343ba58 ^ uVar6) + 0x810048b ^ 0xefee087e3a117781;
  _DAT_18343ba18 = (_DAT_18343ba18 * 0x29ac58fb1921439 ^ _DAT_18343ba58) + uVar6;
  _DAT_18343b9b0 = _DAT_18343ba18 ^ _DAT_18343ba58;
  _DAT_18343b9e0 = 0x810048b;
  _DAT_18343ba48 = func_0x00018fe32860(_DAT_18343bae8 ^ 0xff4c005737005cc5);
  uVar4 = _DAT_18343ba48 & 0x3ffffffff;
  _DAT_18343baa0 = _DAT_18343b9c8 ^ uVar4 ^ 0xfffffffe;
  _DAT_18343ba30 = (_DAT_18343ba30 ^ uVar4) + 0xfffffffe ^ 0xa22b7cece967a9d5;
  _DAT_18343bab8 = (_DAT_18343bab8 * 0x1a72602be6b7be7d ^ _DAT_18343ba30) + uVar4;
  _DAT_18343ba20 = _DAT_18343bab8 ^ _DAT_18343ba30;
  _DAT_18343b9a8 = 0xfffffffe;
  uVar4 = ((_DAT_18343b950 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_18343b950 & 0x7bdddcdb) * 2) *
          -_DAT_18343b928;
  uVar4 = (uVar4 | 0xfffffffe) + (uVar4 & 0xfffffffe);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18343b998 = func_0x00018fe32860((uVar4 | 0x7bdddcdb) + (ulonglong)((uint)uVar4 & 0x7bdddcdb))
  ;
  uVar4 = _DAT_18343b998 & 0x3ffffffff;
  _DAT_18343bae0 = _DAT_18343b970 ^ uVar4 ^ 0xfffffffe;
  _DAT_18343b900 = (_DAT_18343b900 ^ uVar4) + 0xfffffffe ^ 0x961ef4aad3740e93;
  _DAT_18343b9d8 = (_DAT_18343b9d8 * 0x703d47bc7ecd8db9 ^ _DAT_18343b900) + uVar4;
  _DAT_18343ba20 = _DAT_18343b9d8 ^ _DAT_18343b900;
  _DAT_18343b968 = 0xfffffffe;
  *(int *)(unaff_RBP + -0x10) = *(int *)(unaff_RBP + 4) + -2;
  *(undefined4 *)(unaff_RBP + 0x30) = 0;
  *(undefined4 *)(unaff_RBP + 0x50) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x40);
  *(undefined4 *)(unaff_RBP + 0x60) = 0;
  iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x48) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x48),*(undefined8 *)(unaff_RBP + 0x40));
  switch(*(int *)(unaff_RBP + 0x60) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x60)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe14278 (image 18fe14278) =====

undefined8 FUN_18fe14278(void)

{
  func_0x000180001044();
  return 0;
}



// ===== continuation @ rva fe17242 (image 18fe17242) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe17242(undefined4 param_1)

{
  int iVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_R12D;
  longlong *unaff_R14;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined1 unaff_XMM13 [16];
  
  *(undefined4 *)(unaff_RBP + 0x50) = param_1;
  (**(code **)(*unaff_R14 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x60) = 6;
  *(undefined8 *)(unaff_RBP + 0x50) = unaff_RDI;
  uVar4 = (ulonglong)unaff_R12D;
  auVar5._8_8_ = _UNK_180019298;
  auVar5._0_8_ = uVar4 ^ unaff_RBX;
  auVar6 = pshufb(auVar5 ^ _DAT_182b2ed80,unaff_XMM13);
  uVar2 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar2 + _DAT_18343b900;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_18343b998 ^ uVar2;
  }
  _DAT_18343b978 = func_0x00018fe32860(SUB161(auVar5 ^ _DAT_182b2ed80,5) ^ uVar3);
  uVar3 = _DAT_18343b978 ^ uVar4;
  uVar8 = unaff_R12D & (uint)_DAT_180017990;
  uVar7 = unaff_R12D | (uint)_DAT_180017990;
  uVar2 = ((((uVar4 ^ _DAT_180017990) & 0xffffffff) * (ulonglong)_DAT_182b2edf0 +
            (((uVar4 ^ _DAT_180017990) & 0xffffffff) * (ulonglong)_DAT_182b2ee00 +
             (_DAT_180017990 >> 0x20) * (ulonglong)_DAT_182b2edf0 << 0x20) +
           ((ulonglong)uVar7 * (ulonglong)_DAT_182b2ede0 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_182b2edd0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_182b2edc0 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_182b2edb0) +
           ((ulonglong)unaff_R12D * (ulonglong)_DAT_182b2eda0 << 0x20) +
           (ulonglong)unaff_R12D * (ulonglong)_DAT_182b2ed90) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_182b2ee60 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_182b2ee50 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_182b2ee60 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_182b2ee50) +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_182b2ee40 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_182b2ee30)) + 0x6a81003bc25a2b54;
  _DAT_18343baa0 = _DAT_18343ba20 ^ uVar3 ^ uVar2;
  _DAT_18343b908 = (_DAT_18343b908 ^ uVar3) + uVar2 ^ 0xe6c8599ccec5419b;
  _DAT_18343bac8 = (_DAT_18343bac8 * 0x47e8c0ba8e485b8f ^ _DAT_18343b908) + uVar3;
  _DAT_18343b9d8 = _DAT_18343bac8 ^ _DAT_18343b908;
  _DAT_18343b9a8 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x58) = (int)uVar2;
  iVar1 = (**(code **)(*unaff_R14 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x58) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x58)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe34b0a (image 18fe34b0a) =====

void FUN_18fe34b0a(void)

{
  return;
}



// ===== continuation @ rva fe34961 (image 18fe34961) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe34961(void)

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



// ===== continuation @ rva fe36c54 (image 18fe36c54) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe36c54(void)

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



// ===== continuation @ rva fe369fc (image 18fe369fc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe369fc(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0xd8))();
  (**(code **)(*unaff_R13 + 0x580))();
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



// ===== continuation @ rva fe35cc1 (image 18fe35cc1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18fe34f98(void)

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



// ===== continuation @ rva fe38eeb (image 18fe38eeb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe38eeb(void)

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



// ===== continuation @ rva fe34bce (image 18fe34bce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe34bce(void)

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



// ===== continuation @ rva fe34e2d (image 18fe34e2d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18fe34f98(void)

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



// ===== continuation @ rva fe35ec4 (image 18fe35ec4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe35ec4(void)

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



// ===== continuation @ rva fe36da7 (image 18fe36da7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe36da7(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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



// ===== continuation @ rva fe39323 (image 18fe39323) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe39323(void)

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



// ===== continuation @ rva fe392cf (image 18fe392cf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe392cf(void)

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



// ===== continuation @ rva fe39495 (image 18fe39495) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe39495(void)

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



// ===== continuation @ rva fe39441 (image 18fe39441) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe39441(void)

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



// ===== continuation @ rva fe3a088 (image 18fe3a088) =====

void FUN_18fe3a088(void)

{
  return;
}



// ===== continuation @ rva fe399fb (image 18fe399fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe399fb(void)

{
  FUN_190de3220();
  (*_DAT_182b34f28)();
  return;
}



// ===== continuation @ rva fe3a096 (image 18fe3a096) =====

void FUN_18fe3a096(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe39898 (image 18fe39898) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe39898(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe39934 (image 18fe39934) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe39934(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe39da8 (image 18fe39da8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe39da8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_182b34fc8)();
  return;
}



// ===== continuation @ rva fe39cf6 (image 18fe39cf6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe39cf6(void)

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



// ===== continuation @ rva fe39e2b (image 18fe39e2b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe39e2b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b352c8)();
  return;
}



// ===== continuation @ rva fe3cadd (image 18fe3cadd) =====

void FUN_18fe3cadd(void)

{
  return;
}



// ===== continuation @ rva fe3a200 (image 18fe3a200) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3a200(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182b353a8)();
  return;
}



// ===== continuation @ rva fe3c64c (image 18fe3c64c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3c64c(void)

{
  (*_DAT_182b361e8)();
  return;
}



// ===== continuation @ rva fe3c21a (image 18fe3c21a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3c21a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b36198)();
  return;
}



// ===== continuation @ rva fe3bebe (image 18fe3bebe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3bebe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b35538)();
  return;
}



// ===== continuation @ rva fe3ca82 (image 18fe3ca82) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3ca82(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b35f48)();
  return;
}



// ===== continuation @ rva fe3a21f (image 18fe3a21f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3a21f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000150;
  
  uStack0000000000000060 = in_stack_00000150;
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



// ===== continuation @ rva fe3bd8c (image 18fe3bd8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3bd8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b359b8)();
  return;
}



// ===== continuation @ rva fe3b34f (image 18fe3b34f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3b34f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_182b35918)();
  return;
}



// ===== continuation @ rva fe3b2f1 (image 18fe3b2f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3b2f1(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b35568)();
  return;
}



// ===== continuation @ rva fe3c30b (image 18fe3c30b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe3c30b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe3cafc (image 18fe3cafc) =====

void FUN_18fe3cafc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe3c129 (image 18fe3c129) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe3c129(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



