// ===== continuation @ rva f1b3221 (image 18f1b3221) =====

void FUN_18f1b3221(void)

{
  return;
}



// ===== continuation @ rva f1b0557 (image 18f1b0557) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b0557(void)

{
  FUN_190ddce00();
  (*_DAT_182852108)();
  return;
}



// ===== continuation @ rva f1b3063 (image 18f1b3063) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b3063(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (*_DAT_1828521d8)();
  return;
}



// ===== continuation @ rva f1b328d (image 18f1b328d) =====

void FUN_18f1b328d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1b2f73 (image 18f1b2f73) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b2f73(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b0630 (image 18f1b0630) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b0630(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar16;
  ulonglong uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar12 [16];
  uint uVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar17;
  uint uVar18;
  uint uVar23;
  uint uVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulonglong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulonglong uVar41;
  undefined1 auVar42 [16];
  ulonglong uVar43;
  undefined1 auVar44 [16];
  ulonglong uStack0000000000000060;
  ulonglong uStack0000000000000088;
  
  uVar17 = _DAT_182851f48;
  uVar11 = _DAT_182851f40;
  uStack0000000000000088 = _DAT_182851f40 ^ 0x84222325;
  uVar5 = (0x127bd0700b6bb585 - param_1) *
          ((param_2 ^ uStack0000000000000088) + (uStack0000000000000088 & param_2) * 2);
  uVar5 = (uVar5 | in_RAX) + (uVar5 & in_RAX);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833f0ee8 =
       func_0x00018f1b32f0((_DAT_182851f40 ^ 0x127bd0708f4996a0 | uVar5) +
                           (uVar5 & (_DAT_182851f40 ^ 0x127bd0708f4996a0)));
  uVar3 = uVar11 | 0x127bd0700b6bb585;
  _DAT_1833f0d60 =
       (_DAT_1833f0d60 ^ _DAT_1833f0e08 ^ 0x127bd0700b6bb585) + uVar3 ^ 0xf255e10c2efb4126;
  _DAT_1833f0e60 =
       (_DAT_1833f0e60 * 0x26fa0bbb2474bcf9 ^ _DAT_1833f0d60) +
       (_DAT_1833f0e08 ^ 0x127bd0700b6bb585);
  _DAT_1833f0b00 = _DAT_1833f0e60 ^ _DAT_1833f0d60;
  uVar5 = ((_DAT_1833f0d80 ^ uVar17 ^ 0x84222325) + ((uVar17 ^ 0x84222325) & _DAT_1833f0d80) * 2) *
          (0x26f139c26481bec3 - _DAT_1833f0dd0);
  uVar5 = (uVar5 | _DAT_1833f0be0) + (uVar5 & _DAT_1833f0be0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833f0e58 = uVar3;
  _DAT_1833f0dc0 =
       func_0x00018f1b32f0((uVar17 ^ 0x26f139c2e0a39de6 | uVar5) +
                           (uVar5 & (uVar17 ^ 0x26f139c2e0a39de6)));
  uVar5 = (uVar17 | 0x26f139c26481bec3) ^ _DAT_1833f0dc0;
  uVar4 = uVar5 << 0x1c | uVar5 >> 0x24;
  uVar5 = uVar17 + 0x26f139c26481bec3 + (uVar17 & 0x26f139c26481bec3) * -2;
  _DAT_1833f0b80 = (_DAT_1833f0b80 ^ uVar4) + uVar5 ^ 0x81e99a50f4fdfc2f;
  _DAT_1833f0ed8 = (_DAT_1833f0ed8 * -0x3201812884f630b9 ^ _DAT_1833f0b80) + uVar4;
  _DAT_1833f0bb0 = _DAT_1833f0ed8 ^ _DAT_1833f0b80;
  lVar2 = uVar11 * uVar11;
  uVar8 = lVar2 * -0x33e48050dea99a0b;
  auVar13._8_8_ = uVar8;
  auVar13._0_8_ = _DAT_182852240;
  uVar9 = lVar2 * 0x33e48050dea99a0b;
  auVar12 = pshufb(auVar13 ^ _DAT_182852250,_DAT_1800170c0);
  uVar6 = auVar12._8_8_ + auVar12._0_8_;
  uVar4 = uVar6 + _DAT_1833f0e70;
  if (auVar12._4_4_ < 0) {
    uVar4 = _DAT_1833f0bc8 ^ uVar6;
  }
  _DAT_1833f0d58 = uVar5;
  _DAT_1833f0d70 = func_0x00018f1b32f0(SUB161(auVar13 ^ _DAT_182852250,5) ^ uVar4);
  uVar10 = (uint)(uVar8 >> 0x20);
  auVar40._8_4_ = (int)uVar8;
  auVar40._0_8_ = uVar8;
  auVar40._12_4_ = uVar10;
  uVar23 = SUB164(auVar40 & _DAT_182852260,0);
  uVar43 = SUB168(auVar40 & _DAT_182852260,0);
  uVar16 = SUB164(auVar40 | _DAT_182852260,0);
  uVar38 = SUB168(auVar40 | _DAT_182852260,0);
  auVar42._8_4_ = 0xffffffff;
  auVar42._0_8_ = 0xffffffffffffffff;
  auVar42._12_4_ = 0xffffffff;
  uVar15 = SUB164(auVar40 ^ auVar42,0);
  uVar6 = (_DAT_1833f0d70 ^ 0x155064b403f0) << 0x1a | (_DAT_1833f0d70 ^ 0x155064b403f0) >> 0x26;
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar6;
  uVar18 = SUB164(_DAT_182852260 ^ auVar40,0);
  uVar38 = (((ulonglong)_DAT_1828522a0 * (ulonglong)uVar16 +
             ((uVar38 >> 0x20) * (ulonglong)_DAT_1828522a0 +
              (ulonglong)_DAT_182852290 * (ulonglong)uVar16 << 0x20) +
             (ulonglong)uVar23 * (ulonglong)_DAT_1828522a0 +
             ((uVar43 >> 0x20) * (ulonglong)_DAT_1828522a0 +
              (ulonglong)uVar23 * (ulonglong)_DAT_182852290 << 0x20) +
             (ulonglong)_DAT_182852270 * (uVar8 & 0xffffffff) +
             ((ulonglong)_DAT_182852280 * (uVar8 & 0xffffffff) +
              (ulonglong)uVar10 * (ulonglong)_DAT_182852270 << 0x20) +
            (ulonglong)uVar15 * (ulonglong)_DAT_1828522b0 +
            ((ulonglong)_DAT_1828522c0 * (ulonglong)uVar15 +
             (SUB168(auVar40 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_1828522b0 << 0x20)) -
           ((ulonglong)uVar18 * (ulonglong)_DAT_182852350 +
            ((ulonglong)_DAT_182852360 * (ulonglong)uVar18 +
             (SUB168(_DAT_182852260 ^ auVar40,0) >> 0x20) * (ulonglong)_DAT_182852350 << 0x20) +
            (ulonglong)uVar16 * (ulonglong)_DAT_182852330 +
            ((ulonglong)_DAT_182852340 * (ulonglong)uVar16 +
             (uVar38 >> 0x20) * (ulonglong)_DAT_182852330 << 0x20) +
           (ulonglong)uVar23 * (ulonglong)_DAT_182852310 +
           ((ulonglong)_DAT_182852320 * (ulonglong)uVar23 +
            (uVar43 >> 0x20) * (ulonglong)_DAT_182852310 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1828522f0 +
           ((ulonglong)_DAT_182852300 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1828522f0 << 0x20))) + _DAT_182852370;
  _DAT_1833f0ee0 = _DAT_1833f0ba8 ^ uVar6 ^ uVar38;
  _DAT_1833f0c10 = (_DAT_1833f0c10 ^ uVar6) + uVar38 ^ 0x604fa00ea6ce71f7;
  _DAT_1833f0d10 = (_DAT_1833f0d10 * -0x7b0e359955971fd7 ^ _DAT_1833f0c10) + uVar6;
  _DAT_1833f0ca0 = _DAT_1833f0d10 ^ _DAT_1833f0c10;
  uVar4 = uVar38 ^ 0x84222325 ^ _DAT_1833f0e30;
  lVar7 = (uVar38 ^ 0x84222325) + _DAT_1833f0e48;
  lVar2 = _DAT_1833f0e30 + lVar2 * 0x33e48050dea99a0b;
  uVar6 = uVar4 + lVar7;
  uVar8 = (uVar9 ^ _DAT_1833f0e48) + lVar2;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar9 ^ _DAT_1833f0e48;
  _DAT_1833f0bf8 = uVar38;
  _DAT_1833f0d68 =
       func_0x00018f1b32f0((uVar6 << 0x1d | uVar6 >> 0x23) - lVar2 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar7);
  uVar16 = (uint)(uVar38 >> 0x20);
  auVar39._8_4_ = (int)uVar38;
  auVar39._0_8_ = uVar38;
  auVar39._12_4_ = uVar16;
  uVar15 = (uint)(uVar9 >> 0x20);
  auVar29._8_4_ = (int)uVar9;
  auVar29._0_8_ = uVar9;
  auVar29._12_4_ = uVar15;
  uVar18 = SUB164(auVar39 & auVar29,0);
  uVar8 = SUB168(auVar39 & auVar29,0);
  uVar23 = SUB164(auVar39 | auVar29,0);
  uVar43 = SUB168(auVar39 | auVar29,0);
  uVar24 = SUB164(auVar39 ^ auVar29,0);
  uVar4 = SUB168(auVar39 ^ auVar29,0);
  auVar12._8_8_ = _UNK_18001a718;
  auVar12._0_8_ = _DAT_18001a710;
  uVar10 = SUB164(auVar29 ^ auVar12,0);
  uVar6 = SUB168(auVar29 ^ auVar12,0);
  uVar9 = (((_DAT_1828523a0 & 0xffffffff) * (ulonglong)uVar10 +
            ((uVar6 >> 0x20) * (_DAT_1828523a0 & 0xffffffff) +
             (_DAT_182852380 & 0xffffffff) * (ulonglong)uVar10 << 0x20) +
            (_DAT_1828523c0 & 0xffffffff) * (ulonglong)uVar24 +
            ((uVar4 >> 0x20) * (_DAT_1828523c0 & 0xffffffff) +
             (_DAT_1828523b0 & 0xffffffff) * (ulonglong)uVar24 << 0x20) +
            (ulonglong)uVar18 * (_DAT_1828523c0 & 0xffffffff) +
            ((uVar8 >> 0x20) * (_DAT_1828523c0 & 0xffffffff) +
             (ulonglong)uVar18 * (_DAT_1828523b0 & 0xffffffff) << 0x20) +
            (_DAT_182852390 & 0xffffffff) * (uVar9 & 0xffffffff) +
            ((ulonglong)uVar15 * (_DAT_182852390 & 0xffffffff) +
             (uVar9 & 0xffffffff) * (_DAT_182852380 & 0xffffffff) << 0x20) + uVar38 +
           (_DAT_1828523d0 & 0xffffffff) * (ulonglong)uVar23 +
           ((_DAT_1828523e0 & 0xffffffff) * (ulonglong)uVar23 +
            (uVar43 >> 0x20) * (_DAT_1828523d0 & 0xffffffff) << 0x20)) -
          ((ulonglong)uVar10 * (_DAT_182852450 & 0xffffffff) +
           ((_DAT_1828524c0 & 0xffffffff) * (ulonglong)uVar10 +
            (uVar6 >> 0x20) * (_DAT_182852450 & 0xffffffff) << 0x20) +
          (ulonglong)uVar24 * (ulonglong)_DAT_1828524a0 +
          ((_DAT_1828524b0 & 0xffffffff) * (ulonglong)uVar24 +
           (uVar4 >> 0x20) * (ulonglong)_DAT_1828524a0 << 0x20) +
          (ulonglong)uVar23 * (ulonglong)_DAT_182852480 +
          ((_DAT_182852490 & 0xffffffff) * (ulonglong)uVar23 +
           (uVar43 >> 0x20) * (ulonglong)_DAT_182852480 << 0x20) +
          (ulonglong)uVar18 * (ulonglong)_DAT_182852460 +
          ((_DAT_182852470 & 0xffffffff) * (ulonglong)uVar18 +
           (uVar8 >> 0x20) * (ulonglong)_DAT_182852460 << 0x20) +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_182852430 +
          ((_DAT_182852440 & 0xffffffff) * (uVar9 & 0xffffffff) +
           (ulonglong)uVar15 * (ulonglong)_DAT_182852430 << 0x20) +
          (uVar38 & 0xffffffff) * (ulonglong)_DAT_182852410 +
          ((_DAT_182852420 & 0xffffffff) * (uVar38 & 0xffffffff) +
           (ulonglong)uVar16 * (ulonglong)_DAT_182852410 << 0x20))) + _DAT_1828524d0;
  uVar8 = uVar17 * uVar17 * 0x62d33bb97d3c91c8;
  auVar32._8_8_ = uVar8;
  auVar32._0_8_ = uVar9 ^ 0x84222325;
  auVar13 = pshufb(auVar32 ^ _DAT_1828524e0,_DAT_1800170c0);
  _DAT_1833f0d88 = _DAT_1833f0c88 ^ _DAT_1833f0d68 ^ uVar9;
  _DAT_1833f0e28 = (_DAT_1833f0e28 ^ _DAT_1833f0d68) + uVar9 ^ 0xcaa1c6c92e9c228f;
  _DAT_1833f0eb0 = (_DAT_1833f0eb0 * -0x645428cb2a67242b ^ _DAT_1833f0e28) + _DAT_1833f0d68;
  _DAT_1833f0c28 = _DAT_1833f0eb0 ^ _DAT_1833f0e28;
  uVar6 = auVar13._8_8_ + auVar13._0_8_;
  uVar4 = uVar6 + _DAT_1833f0ce8;
  if (auVar13._4_4_ < 0) {
    uVar4 = _DAT_1833f0df8 ^ uVar6;
  }
  _DAT_1833f0bd0 = uVar9;
  _DAT_1833f0e88 = func_0x00018f1b32f0(SUB161(auVar32 ^ _DAT_1828524e0,5) ^ uVar4);
  uVar18 = (uint)(uVar9 >> 0x20);
  auVar34._8_4_ = (int)uVar9;
  auVar34._0_8_ = uVar9;
  auVar34._12_4_ = uVar18;
  uVar15 = (uint)(uVar8 >> 0x20);
  auVar19._8_4_ = (int)uVar8;
  auVar19._0_8_ = uVar8;
  auVar19._12_4_ = uVar15;
  uStack0000000000000060 = uVar9 | uVar8;
  uVar10 = SUB164(auVar34 & auVar19,0);
  uVar6 = SUB168(auVar34 & auVar19,0);
  uVar16 = SUB164(auVar34 ^ auVar19,0);
  uVar38 = SUB168(auVar34 ^ auVar19,0);
  uVar4 = uVar9 ^ _DAT_18001a710;
  _DAT_1833f0d30 =
       (((ulonglong)_DAT_182852530 * (ulonglong)uVar16 +
         ((ulonglong)_DAT_182852540 * (ulonglong)uVar16 +
          (uVar38 >> 0x20) * (ulonglong)_DAT_182852530 << 0x20) +
        (ulonglong)_DAT_182852510 * (ulonglong)uVar10 +
        ((ulonglong)_DAT_182852520 * (ulonglong)uVar10 + (uVar6 >> 0x20) * (ulonglong)_DAT_182852510
        << 0x20) +
        (ulonglong)_DAT_182852500 * (uVar8 & 0xffffffff) +
        ((ulonglong)uVar15 * (ulonglong)_DAT_182852500 +
         (ulonglong)_DAT_1828524f0 * (uVar8 & 0xffffffff) << 0x20) +
        (uVar9 & 0xffffffff) * (ulonglong)_DAT_182852500 +
        ((ulonglong)uVar18 * (ulonglong)_DAT_182852500 +
         (uVar9 & 0xffffffff) * (ulonglong)_DAT_1828524f0 << 0x20)) -
       ((uVar4 & 0xffffffff) * (_DAT_1828525b0 & 0xffffffff) +
        ((ulonglong)_DAT_182852620 * (uVar4 & 0xffffffff) +
         (uVar4 >> 0x20) * (_DAT_1828525b0 & 0xffffffff) << 0x20) +
       (ulonglong)uVar16 * (ulonglong)_DAT_182852600 +
       ((ulonglong)_DAT_182852610 * (ulonglong)uVar16 + (uVar38 >> 0x20) * (ulonglong)_DAT_182852600
       << 0x20) +
       (uStack0000000000000060 & 0xffffffff) * (ulonglong)_DAT_1828525e0 +
       ((ulonglong)_DAT_1828525f0 * (uStack0000000000000060 & 0xffffffff) +
        (uStack0000000000000060 >> 0x20) * (ulonglong)_DAT_1828525e0 << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_1828525c0 +
       ((ulonglong)_DAT_1828525d0 * (ulonglong)uVar10 + (uVar6 >> 0x20) * (ulonglong)_DAT_1828525c0
       << 0x20) +
       (uVar8 & 0xffffffff) * (ulonglong)_DAT_182852590 +
       ((ulonglong)_DAT_1828525a0 * (uVar8 & 0xffffffff) +
        (ulonglong)uVar15 * (ulonglong)_DAT_182852590 << 0x20) +
       (uVar9 & 0xffffffff) * (ulonglong)_DAT_182852570 +
       ((ulonglong)_DAT_182852580 * (uVar9 & 0xffffffff) +
        (ulonglong)uVar18 * (ulonglong)_DAT_182852570 << 0x20))) + 0xe79fa0f395c0b08a;
  _DAT_1833f0e18 = _DAT_1833f0be8 ^ _DAT_1833f0e88 ^ _DAT_1833f0d30;
  _DAT_1833f0b50 = (_DAT_1833f0b50 ^ _DAT_1833f0e88) + _DAT_1833f0d30 ^ 0xe4e4b4965145056c;
  _DAT_1833f0de0 = (_DAT_1833f0de0 * 0x5acb2f82dfcd2ed5 ^ _DAT_1833f0b50) + _DAT_1833f0e88;
  _DAT_1833f0c38 = _DAT_1833f0de0 ^ _DAT_1833f0b50;
  uVar8 = _DAT_1833f0d30 + uVar17 * uVar17 * -0x62d33bb97d3c91c8;
  uVar9 = uVar17 * uVar11 * -0x5a50c1cea5ae117e;
  uVar6 = uVar8 ^ 0x84222325;
  uVar4 = ((_DAT_1833f0ee0 ^ uVar6) + (uVar6 & _DAT_1833f0ee0) * 2) * (uVar9 - _DAT_1833f0e70);
  uVar4 = (uVar4 | _DAT_1833f0c60) + (uVar4 & _DAT_1833f0c60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833f0d98 = func_0x00018f1b32f0((uVar6 ^ uVar9 | uVar4) + (uVar4 & (uVar6 ^ uVar9)));
  uVar4 = _DAT_1833f0d98 & 0x7fffffffffffffff ^ uVar8;
  uVar10 = (uint)(uVar8 >> 0x20);
  auVar14._8_4_ = (int)uVar8;
  auVar14._0_8_ = uVar8;
  auVar14._12_4_ = uVar10;
  uVar15 = (uint)(uVar9 >> 0x20);
  auVar20._8_4_ = (int)uVar9;
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = uVar15;
  uVar6 = (uVar8 & 0xffffffff) * (uVar9 & 0xffffffff) +
          ((ulonglong)uVar10 * (uVar9 & 0xffffffff) + (uVar8 & 0xffffffff) * (ulonglong)uVar15 <<
          0x20);
  uVar23 = SUB164(auVar14 & auVar20,0);
  uVar16 = SUB164(auVar14 | auVar20,0);
  auVar44._8_4_ = 0xffffffff;
  auVar44._0_8_ = 0xffffffffffffffff;
  auVar44._12_4_ = 0xffffffff;
  uVar28 = SUB164(auVar14 ^ auVar20,0);
  uVar18 = SUB164(auVar20 ^ auVar44,0);
  uVar38 = SUB168(auVar20 ^ auVar44,0);
  lVar2 = (uVar6 & 0xffffffff) * (ulonglong)_DAT_1828526a0 +
          ((ulonglong)_DAT_1828526b0 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_DAT_1828526a0 << 0x20);
  uVar24 = SUB164(auVar14 ^ auVar44,0);
  _DAT_1833f0c10 =
       (((ulonglong)_DAT_182852650 * (ulonglong)uVar18 +
         ((uVar38 >> 0x20) * (ulonglong)_DAT_182852650 +
          (ulonglong)_DAT_182852630 * (ulonglong)uVar18 << 0x20) +
         (ulonglong)uVar28 * (ulonglong)_DAT_182852670 +
         ((SUB168(auVar14 ^ auVar20,0) >> 0x20) * (ulonglong)_DAT_182852670 +
          (ulonglong)_DAT_182852660 * (ulonglong)uVar28 << 0x20) +
         (ulonglong)uVar23 * (ulonglong)_DAT_182852670 +
         ((SUB168(auVar14 & auVar20,0) >> 0x20) * (ulonglong)_DAT_182852670 +
          (ulonglong)uVar23 * (ulonglong)_DAT_182852660 << 0x20) +
         (ulonglong)_DAT_182852640 * (uVar9 & 0xffffffff) +
         ((ulonglong)uVar15 * (ulonglong)_DAT_182852640 +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_182852630 << 0x20) + uVar8 +
         (ulonglong)uVar16 * (ulonglong)_DAT_182852680 +
         ((ulonglong)_DAT_182852690 * (ulonglong)uVar16 +
          (SUB168(auVar14 | auVar20,0) >> 0x20) * (ulonglong)_DAT_182852680 << 0x20) + lVar2) -
       ((ulonglong)uVar18 * (ulonglong)_DAT_1828526f0 +
        ((uVar38 >> 0x20) * (ulonglong)_DAT_1828526f0 +
         (ulonglong)_DAT_1828526e0 * (ulonglong)uVar18 << 0x20) +
        (uVar9 & 0xffffffff) * (ulonglong)_DAT_1828526f0 +
        ((ulonglong)uVar15 * (ulonglong)_DAT_1828526f0 +
         (uVar9 & 0xffffffff) * (ulonglong)_DAT_1828526e0 << 0x20) +
        (uVar8 & 0xffffffff) * (ulonglong)_DAT_1828526d0 +
        ((ulonglong)uVar10 * (ulonglong)_DAT_1828526d0 +
         (uVar8 & 0xffffffff) * (ulonglong)_DAT_1828526c0 << 0x20) +
        (ulonglong)uVar24 * (ulonglong)_DAT_1828526d0 +
        ((SUB168(auVar14 ^ auVar44,0) >> 0x20) * (ulonglong)_DAT_1828526d0 +
         (ulonglong)_DAT_1828526c0 * (ulonglong)uVar24 << 0x20) + lVar2)) + 0x8f4c10418357bc5d;
  _DAT_1833f0bb8 = _DAT_1833f0bf8 ^ uVar4 ^ _DAT_1833f0c10;
  _DAT_1833f0c18 = (_DAT_1833f0c18 ^ uVar4) + _DAT_1833f0c10 ^ 0xde6adfdeaa67c012;
  _DAT_1833f0cd8 = (_DAT_1833f0cd8 * 0x77a8c20ffcb41b7b ^ _DAT_1833f0c18) + uVar4;
  _DAT_1833f0e10 = _DAT_1833f0cd8 ^ _DAT_1833f0c18;
  uVar6 = uVar3 ^ 0x84222325;
  uVar4 = (uVar6 ^ _DAT_1833f0b50) + _DAT_1833f0da8 + uVar6;
  uVar8 = (uVar5 ^ _DAT_1833f0da8) + _DAT_1833f0b50 + uVar5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6 ^ _DAT_1833f0b50;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5 ^ _DAT_1833f0da8;
  uVar38 = _DAT_1833f0c10 + uVar17 * uVar11 * 0x5a50c1cea5ae117e;
  _DAT_1833f0c20 =
       func_0x00018f1b32f0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1833f0b50 + uVar5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833f0da8 + uVar6));
  uVar15 = (uint)(uVar3 >> 0x20);
  auVar30._8_4_ = (int)uVar3;
  auVar30._0_8_ = uVar3;
  auVar30._12_4_ = uVar15;
  uVar16 = (uint)(uVar5 >> 0x20);
  auVar36._8_4_ = (int)uVar5;
  auVar36._0_8_ = uVar5;
  auVar36._12_4_ = uVar16;
  uVar23 = SUB164(auVar30 & auVar36,0);
  uVar8 = SUB168(auVar30 & auVar36,0);
  uVar18 = SUB164(auVar30 | auVar36,0);
  uVar4 = SUB168(auVar30 | auVar36,0);
  uVar10 = SUB164(auVar30 ^ auVar36,0);
  uVar17 = SUB168(auVar30 ^ auVar36,0);
  uVar11 = uVar3 ^ _DAT_18001a710;
  uVar8 = (((ulonglong)_DAT_182852760 * (ulonglong)uVar10 +
            ((ulonglong)_DAT_182852770 * (ulonglong)uVar10 +
             (uVar17 >> 0x20) * (ulonglong)_DAT_182852760 << 0x20) +
            (ulonglong)_DAT_182852740 * (ulonglong)uVar18 +
            ((ulonglong)_DAT_182852750 * (ulonglong)uVar18 +
             (uVar4 >> 0x20) * (ulonglong)_DAT_182852740 << 0x20) +
           (ulonglong)_DAT_182852720 * (ulonglong)uVar23 +
           ((ulonglong)_DAT_182852730 * (ulonglong)uVar23 +
            (uVar8 >> 0x20) * (ulonglong)_DAT_182852720 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_182852710 +
           ((ulonglong)uVar16 * (ulonglong)_DAT_182852710 +
            (ulonglong)_DAT_182852700 * (uVar5 & 0xffffffff) << 0x20) +
           (uVar3 & 0xffffffff) * (ulonglong)_DAT_182852710 +
           ((ulonglong)uVar15 * (ulonglong)_DAT_182852710 +
            (uVar3 & 0xffffffff) * (ulonglong)_DAT_182852700 << 0x20)) -
          ((uVar11 & 0xffffffff) * (ulonglong)_DAT_1828527b0 +
           ((uVar11 >> 0x20) * (ulonglong)_DAT_1828527b0 +
            (ulonglong)_DAT_1828527a0 * (uVar11 & 0xffffffff) << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_1828527d0 +
           ((uVar17 >> 0x20) * (ulonglong)_DAT_1828527d0 +
            (ulonglong)_DAT_1828527c0 * (ulonglong)uVar10 << 0x20) +
           (ulonglong)uVar23 * (ulonglong)_DAT_1828527d0 +
           ((uVar8 >> 0x20) * (ulonglong)_DAT_1828527d0 +
            (ulonglong)uVar23 * (ulonglong)_DAT_1828527c0 << 0x20) +
           (uVar3 & 0xffffffff) * (ulonglong)_DAT_1828527b0 +
           ((ulonglong)uVar15 * (ulonglong)_DAT_1828527b0 +
            (uVar3 & 0xffffffff) * (ulonglong)_DAT_1828527a0 << 0x20) +
          (ulonglong)uVar18 * (ulonglong)_DAT_1828527e0 +
          ((ulonglong)_DAT_1828527f0 * (ulonglong)uVar18 +
           (uVar4 >> 0x20) * (ulonglong)_DAT_1828527e0 << 0x20))) + 0x38958171e2d6284d;
  _DAT_1833f0c58 = _DAT_1833f0eb8 ^ _DAT_1833f0c20 ^ uVar8;
  _DAT_1833f0d30 = (_DAT_1833f0d30 ^ _DAT_1833f0c20) + uVar8 ^ 0x8c32cc3a2a1c2577;
  _DAT_1833f0da8 = (_DAT_1833f0da8 * 0x71498b72d6584c1f ^ _DAT_1833f0d30) + _DAT_1833f0c20;
  _DAT_1833f0be0 = _DAT_1833f0da8 ^ _DAT_1833f0d30;
  uVar11 = (uVar6 ^ _DAT_1833f0e20) + _DAT_1833f0be0 + uVar6;
  uVar17 = (uVar5 ^ _DAT_1833f0be0) + _DAT_1833f0e20 + uVar5;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar6 ^ _DAT_1833f0e20;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ uVar5 ^ _DAT_1833f0be0;
  uVar9 = uVar3 ^ uVar5;
  _DAT_1833f0d18 = uVar8;
  _DAT_1833f0d88 =
       func_0x00018f1b32f0((uVar17 << 0x1d | uVar17 >> 0x23) - (_DAT_1833f0e20 + uVar5) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833f0be0 + uVar6));
  uVar11 = ((uVar3 | uVar5) ^ _DAT_1833f0d88) * -0x640f2b16314937ef;
  uVar5 = uVar5 & uVar3;
  _DAT_1833f0ea0 = (_DAT_1833f0ea0 ^ uVar11) + uVar5 ^ 0xf74a51d6622635d3;
  _DAT_1833f0ee0 = (_DAT_1833f0ee0 * -0x255c9cf4d462a731 ^ _DAT_1833f0ea0) + uVar11;
  _DAT_1833f0e18 = _DAT_1833f0ee0 ^ _DAT_1833f0ea0;
  uVar11 = uVar5 * 2;
  uVar4 = uVar9 ^ 0x84222325;
  uVar17 = ((_DAT_1833f0d18 ^ uVar4) + (uVar4 & _DAT_1833f0d18) * 2) * (uVar11 - _DAT_1833f0c80);
  uVar17 = (uVar17 | _DAT_1833f0ea0) + (uVar17 & _DAT_1833f0ea0);
  uVar17 = uVar17 * 0x2000 ^ uVar17;
  uVar17 = uVar17 >> 7 ^ uVar17;
  uVar17 = uVar17 << 0x11 ^ uVar17;
  _DAT_1833f0ca8 = uVar5;
  _DAT_1833f0d48 = func_0x00018f1b32f0((uVar4 ^ uVar11 | uVar17) + (uVar17 & (uVar4 ^ uVar11)));
  uVar15 = (uint)(uVar9 >> 0x20);
  auVar31._8_4_ = (int)uVar9;
  auVar31._0_8_ = uVar9;
  auVar31._12_4_ = uVar15;
  auVar25._8_4_ = (int)uVar5;
  auVar25._0_8_ = uVar5;
  auVar25._12_4_ = (int)(uVar5 >> 0x20);
  uVar5 = uVar5 * 2;
  auVar26._8_8_ = auVar25._8_8_ * 2;
  auVar26._0_8_ = uVar5;
  uVar23 = (uint)(uVar5 >> 0x20);
  uVar18 = SUB164(auVar31 & auVar26,0);
  uVar43 = SUB168(auVar31 & auVar26,0);
  uVar16 = SUB164(auVar31 | auVar26,0);
  uVar41 = SUB168(auVar31 | auVar26,0);
  uVar10 = SUB164(auVar31 ^ auVar26,0);
  uVar4 = SUB168(auVar31 ^ auVar26,0);
  uVar11 = uVar11 ^ _DAT_18001a710;
  _DAT_1833f0ce0 = _DAT_1833f0d48 << 0x14 | _DAT_1833f0d48 >> 0x2c;
  uVar17 = _DAT_1833f0ce0 - (_DAT_1833f0ce0 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  _DAT_1833f0ce0 =
       (((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
       _DAT_1833f0ce0;
  _DAT_1833f0b80 =
       (((uVar11 & 0xffffffff) * (ulonglong)_DAT_182852840 +
         ((ulonglong)_DAT_1828528b0 * (uVar11 & 0xffffffff) +
          (uVar11 >> 0x20) * (ulonglong)_DAT_182852840 << 0x20) +
        (ulonglong)_DAT_182852890 * (ulonglong)uVar10 +
        ((ulonglong)_DAT_1828528a0 * (ulonglong)uVar10 + (uVar4 >> 0x20) * (ulonglong)_DAT_182852890
        << 0x20) +
        (ulonglong)_DAT_182852870 * (ulonglong)uVar16 +
        ((ulonglong)_DAT_182852880 * (ulonglong)uVar16 +
         (uVar41 >> 0x20) * (ulonglong)_DAT_182852870 << 0x20) +
        (ulonglong)_DAT_182852850 * (ulonglong)uVar18 +
        ((ulonglong)_DAT_182852860 * (ulonglong)uVar18 +
         (uVar43 >> 0x20) * (ulonglong)_DAT_182852850 << 0x20) +
        (ulonglong)_DAT_182852820 * (uVar5 & 0xffffffff) +
        ((ulonglong)_DAT_182852830 * (uVar5 & 0xffffffff) +
         (ulonglong)uVar23 * (ulonglong)_DAT_182852820 << 0x20) +
        (ulonglong)_DAT_182852800 * (uVar9 & 0xffffffff) +
        ((ulonglong)_DAT_182852810 * (uVar9 & 0xffffffff) +
         (ulonglong)uVar15 * (ulonglong)_DAT_182852800 << 0x20)) -
       ((ulonglong)uVar10 * (_DAT_182852940 & 0xffffffff) +
        ((ulonglong)_DAT_182852950 * (ulonglong)uVar10 +
         (uVar4 >> 0x20) * (_DAT_182852940 & 0xffffffff) << 0x20) +
        (ulonglong)uVar16 * (ulonglong)_DAT_182852920 +
        ((ulonglong)_DAT_182852930 * (ulonglong)uVar16 +
         (uVar41 >> 0x20) * (ulonglong)_DAT_182852920 << 0x20) +
       (ulonglong)uVar18 * (ulonglong)_DAT_182852900 +
       ((ulonglong)_DAT_182852910 * (ulonglong)uVar18 + (uVar43 >> 0x20) * (ulonglong)_DAT_182852900
       << 0x20) +
       (uVar5 & 0xffffffff) * (ulonglong)_DAT_1828528f0 +
       ((ulonglong)uVar23 * (ulonglong)_DAT_1828528f0 +
        (ulonglong)_DAT_1828528e0 * (uVar5 & 0xffffffff) << 0x20) +
       (uVar9 & 0xffffffff) * (ulonglong)_DAT_1828528f0 +
       ((ulonglong)uVar15 * (ulonglong)_DAT_1828528f0 +
        (uVar9 & 0xffffffff) * (ulonglong)_DAT_1828528e0 << 0x20))) + 0x6fa7092570b9535a;
  _DAT_1833f0e38 = (_DAT_1833f0e38 ^ _DAT_1833f0ce0) + _DAT_1833f0b80 ^ 0xe932b4846705b2ed;
  _DAT_1833f0ce0 =
       ((_DAT_1833f0ed0 ^ _DAT_1833f0ce0 ^ _DAT_1833f0b80) * -0x3f6d0423cc907ed9 ^ _DAT_1833f0e38) +
       _DAT_1833f0ce0;
  _DAT_1833f0e60 = _DAT_1833f0ce0 ^ _DAT_1833f0e38;
  uVar8 = uVar8 - _DAT_1833f0b80;
  uVar11 = uVar38 ^ 0x84222325;
  uVar5 = ((_DAT_1833f0ee8 ^ uVar11) + (uVar11 & _DAT_1833f0ee8) * 2) * (uVar8 - _DAT_1833f0d70);
  uVar5 = (uVar5 | _DAT_1833f0bb0) + (uVar5 & _DAT_1833f0bb0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833f0bc8 = func_0x00018f1b32f0((uVar11 ^ uVar8 | uVar5) + (uVar5 & (uVar11 ^ uVar8)));
  uVar5 = _DAT_1833f0bc8 >> 1 | _DAT_1833f0bc8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_1833f0bc8 ^ uVar38;
  uVar23 = (uint)(uVar38 >> 0x20);
  auVar35._8_4_ = (int)uVar38;
  auVar35._0_8_ = uVar38;
  auVar35._12_4_ = uVar23;
  uVar15 = (uint)(uVar8 >> 0x20);
  auVar27._8_4_ = (int)uVar8;
  auVar27._0_8_ = uVar8;
  auVar27._12_4_ = uVar15;
  uVar11 = auVar35._8_8_ >> 0x20;
  auVar32 = auVar35 & auVar27;
  auVar13 = auVar35 | auVar27;
  auVar40 = auVar35 ^ auVar27;
  auVar21._8_8_ = _UNK_18001a718;
  auVar21._0_8_ = _DAT_18001a710;
  auVar21 = auVar27 ^ auVar21;
  uVar4 = auVar27._8_8_ >> 0x20;
  uVar28 = auVar32._0_4_;
  uVar9 = auVar32._8_8_;
  uVar10 = auVar13._0_4_;
  uVar16 = auVar13._8_4_;
  uVar17 = auVar13._8_8_ >> 0x20;
  uVar18 = auVar21._0_4_;
  uVar24 = auVar21._8_4_;
  uVar43 = auVar21._8_8_ >> 0x20;
  auVar22._8_8_ = ~uVar3;
  auVar22._0_8_ = uVar6;
  auVar12 = pshufb(auVar22 ^ _DAT_182852ad0,_DAT_1800170c0);
  auVar37._0_8_ =
       (((_DAT_1828529a0 & 0xffffffff) * (ulonglong)uVar18 +
         ((_DAT_182852a10 & 0xffffffff) * (ulonglong)uVar18 +
          (auVar21._0_8_ >> 0x20) * (_DAT_1828529a0 & 0xffffffff) << 0x20) +
        (ulonglong)auVar40._0_4_ * (ulonglong)_DAT_1828529f0 +
        ((_DAT_182852a00 & 0xffffffff) * (ulonglong)auVar40._0_4_ +
         (auVar40._0_8_ >> 0x20) * (ulonglong)_DAT_1828529f0 << 0x20) +
        (_DAT_1828529d0 & 0xffffffff) * (ulonglong)uVar10 +
        ((_DAT_1828529e0 & 0xffffffff) * (ulonglong)uVar10 +
         (auVar13._0_8_ >> 0x20) * (_DAT_1828529d0 & 0xffffffff) << 0x20) +
        (_DAT_1828529b0 & 0xffffffff) * (ulonglong)uVar28 +
        ((_DAT_1828529c0 & 0xffffffff) * (ulonglong)uVar28 +
         (auVar32._0_8_ >> 0x20) * (_DAT_1828529b0 & 0xffffffff) << 0x20) +
        (_DAT_182852980 & 0xffffffff) * (uVar8 & 0xffffffff) +
        ((_DAT_182852990 & 0xffffffff) * (uVar8 & 0xffffffff) +
         (ulonglong)uVar15 * (_DAT_182852980 & 0xffffffff) << 0x20) +
        (_DAT_182852960 & 0xffffffff) * (uVar38 & 0xffffffff) +
        ((_DAT_182852970 & 0xffffffff) * (uVar38 & 0xffffffff) +
         (ulonglong)uVar23 * (_DAT_182852960 & 0xffffffff) << 0x20)) -
       ((ulonglong)uVar18 * (_DAT_182852a80 & 0xffffffff) +
        ((_DAT_182852ab0 & 0xffffffff) * (ulonglong)uVar18 +
         (auVar21._0_8_ >> 0x20) * (_DAT_182852a80 & 0xffffffff) << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_182852aa0 +
       ((auVar13._0_8_ >> 0x20) * (ulonglong)_DAT_182852aa0 +
        (_DAT_182852a90 & 0xffffffff) * (ulonglong)uVar10 << 0x20) +
       (ulonglong)uVar28 * (ulonglong)_DAT_182852aa0 +
       ((auVar32._0_8_ >> 0x20) * (ulonglong)_DAT_182852aa0 +
        (ulonglong)uVar28 * (_DAT_182852a90 & 0xffffffff) << 0x20) +
       (uVar8 & 0xffffffff) * (ulonglong)_DAT_182852a60 +
       ((_DAT_182852a70 & 0xffffffff) * (uVar8 & 0xffffffff) +
        (ulonglong)uVar15 * (ulonglong)_DAT_182852a60 << 0x20) +
       (uVar38 & 0xffffffff) * (ulonglong)_DAT_182852a40 +
       ((_DAT_182852a50 & 0xffffffff) * (uVar38 & 0xffffffff) +
        (ulonglong)uVar23 * (ulonglong)_DAT_182852a40 << 0x20))) + _DAT_182852ac0;
  auVar37._8_8_ =
       (((_UNK_1828529a8 & 0xffffffff) * (ulonglong)uVar24 +
         ((_UNK_182852a18 & 0xffffffff) * (ulonglong)uVar24 + uVar43 * (_UNK_1828529a8 & 0xffffffff)
         << 0x20) +
        (auVar40._8_8_ & 0xffffffff) * (ulonglong)_UNK_1828529f8 +
        ((_UNK_182852a08 & 0xffffffff) * (ulonglong)auVar40._8_4_ +
         (auVar40._8_8_ >> 0x20) * (ulonglong)_UNK_1828529f8 << 0x20) +
        (_UNK_1828529d8 & 0xffffffff) * (ulonglong)uVar16 +
        ((_UNK_1828529e8 & 0xffffffff) * (ulonglong)uVar16 + uVar17 * (_UNK_1828529d8 & 0xffffffff)
        << 0x20) +
        (_UNK_1828529b8 & 0xffffffff) * (ulonglong)auVar32._8_4_ +
        ((_UNK_1828529c8 & 0xffffffff) * (ulonglong)auVar32._8_4_ +
         (uVar9 >> 0x20) * (_UNK_1828529b8 & 0xffffffff) << 0x20) +
        (_UNK_182852988 & 0xffffffff) * (uVar8 & 0xffffffff) +
        ((_UNK_182852998 & 0xffffffff) * (uVar8 & 0xffffffff) +
         uVar4 * (_UNK_182852988 & 0xffffffff) << 0x20) +
        (_UNK_182852968 & 0xffffffff) * (uVar38 & 0xffffffff) +
        ((_UNK_182852978 & 0xffffffff) * (uVar38 & 0xffffffff) +
         uVar11 * (_UNK_182852968 & 0xffffffff) << 0x20)) -
       ((auVar21._8_8_ & 0xffffffff) * (_UNK_182852a88 & 0xffffffff) +
        ((_UNK_182852ab8 & 0xffffffff) * (ulonglong)uVar24 + uVar43 * (_UNK_182852a88 & 0xffffffff)
        << 0x20) +
       (auVar13._8_8_ & 0xffffffff) * (ulonglong)_UNK_182852aa8 +
       (uVar17 * _UNK_182852aa8 + (_UNK_182852a98 & 0xffffffff) * (ulonglong)uVar16 << 0x20) +
       (uVar9 & 0xffffffff) * (ulonglong)_UNK_182852aa8 +
       ((uVar9 >> 0x20) * (ulonglong)_UNK_182852aa8 +
        (uVar9 & 0xffffffff) * (_UNK_182852a98 & 0xffffffff) << 0x20) +
       (auVar27._8_8_ & 0xffffffff) * (ulonglong)_UNK_182852a68 +
       ((_UNK_182852a78 & 0xffffffff) * (uVar8 & 0xffffffff) + uVar4 * _UNK_182852a68 << 0x20) +
       (auVar35._8_8_ & 0xffffffff) * (ulonglong)_UNK_182852a48 +
       ((_UNK_182852a58 & 0xffffffff) * (uVar38 & 0xffffffff) + uVar11 * _UNK_182852a48 << 0x20))) +
       _UNK_182852ac8;
  _DAT_1833f0c20 = _DAT_1833f0ca0 ^ uVar5 ^ auVar37._0_8_;
  _DAT_1833f0e70 = (_DAT_1833f0e70 ^ uVar5) + auVar37._0_8_ ^ 0x636b7537f3874e4b;
  _DAT_1833f0c70 = (_DAT_1833f0c70 * -0x2797c2d37bd08e31 ^ _DAT_1833f0e70) + uVar5;
  _DAT_1833f0ca0 = _DAT_1833f0c70 ^ _DAT_1833f0e70;
  uVar11 = auVar12._8_8_ + auVar12._0_8_;
  uVar5 = uVar11 + _DAT_1833f0c10;
  if (auVar12._4_4_ < 0) {
    uVar5 = _DAT_1833f0e10 ^ uVar11;
  }
  _DAT_1833f0d08 = auVar37._0_8_;
  _DAT_1833f0c20 = func_0x00018f1b32f0(SUB161(auVar22 ^ _DAT_182852ad0,5) ^ uVar5);
  _DAT_1833f0c08 = _DAT_1833f0c08 ^ _DAT_1833f0c20 ^ 0x20cbd4625ccb696c;
  _DAT_1833f0cf0 = (_DAT_1833f0cf0 * -0x6363669540b526ef ^ _DAT_1833f0c08) + _DAT_1833f0c20;
  _DAT_1833f0c08 = _DAT_1833f0cf0 ^ _DAT_1833f0c08;
  _DAT_1833f0e08 = 0;
  uVar5 = auVar37._0_8_ ^ 0x84222325 ^ _DAT_1833f0e68;
  lVar2 = (auVar37._0_8_ ^ 0x84222325) + _DAT_1833f0bf0;
  uVar11 = uVar5 + lVar2;
  uVar5 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar5;
  uVar11 = ((_DAT_1833f0bf0 + _DAT_1833f0e68) * 0x2000 | _DAT_1833f0bf0 + _DAT_1833f0e68 >> 0x33) ^
           _DAT_1833f0bf0;
  _DAT_1833f0c98 =
       func_0x00018f1b32f0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_1833f0e68 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar2);
  auVar33._8_4_ = 0xffffffff;
  auVar33._0_8_ = 0xffffffffffffffff;
  auVar33._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar33 ^ auVar37,0);
  _DAT_1833f0c58 =
       (((ulonglong)uVar10 * (ulonglong)_DAT_182852b00 +
         ((ulonglong)_DAT_182852b50 * (ulonglong)uVar10 +
          (SUB168(auVar33 ^ auVar37,0) >> 0x20) * (ulonglong)_DAT_182852b00 << 0x20) +
        (ulonglong)_DAT_182852b30 * (auVar37._0_8_ & 0xffffffff) +
        ((ulonglong)_DAT_182852b40 * (auVar37._0_8_ & 0xffffffff) +
         (auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_182852b30 << 0x20) +
        (ulonglong)_DAT_182852b10 * (auVar37._0_8_ & 0xffffffff) +
        ((ulonglong)_DAT_182852b20 * (auVar37._0_8_ & 0xffffffff) +
         (auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_182852b10 << 0x20) +
        (ulonglong)_DAT_182852ae0 * (auVar37._0_8_ & 0xffffffff) +
        ((ulonglong)_DAT_182852af0 * (auVar37._0_8_ & 0xffffffff) +
         (auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_182852ae0 << 0x20)) -
       ((auVar37._0_8_ & 0xffffffff) * (_DAT_182852b80 & 0xffffffff) +
        ((ulonglong)_DAT_182852b90 * (auVar37._0_8_ & 0xffffffff) +
         (auVar37._0_8_ >> 0x20) * (_DAT_182852b80 & 0xffffffff) << 0x20) +
       (ulonglong)_DAT_182852b60 * (auVar37._0_8_ & 0xffffffff) +
       ((ulonglong)_DAT_182852b70 * (auVar37._0_8_ & 0xffffffff) +
        (auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_182852b60 << 0x20))) + 0x18d3eaf4aa34e4f2;
  _DAT_1833f0b90 = (_DAT_1833f0b90 ^ _DAT_1833f0d48) + _DAT_1833f0c58 ^ 0x10c0740710f3a15c;
  _DAT_1833f0ef0 = (_DAT_1833f0ef0 * -0x1bda278bd5cebf3d ^ _DAT_1833f0b90) + _DAT_1833f0d48;
  _DAT_1833f0bd8 = _DAT_1833f0ef0 ^ _DAT_1833f0b90;
  uVar5 = ((uStack0000000000000088 ^ _DAT_1833f0d58) + (uStack0000000000000088 & _DAT_1833f0d58) * 2
          ) * (_DAT_182851f40 - _DAT_1833f0ec0);
  uVar5 = (uVar5 | _DAT_1833f0ee8) + (uVar5 & _DAT_1833f0ee8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833f0ca8 = func_0x00018f1b32f0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1833f0e28 = _DAT_1833f0e28 ^ _DAT_1833f0ca8 & 0x1ffffffffffff ^ 0xc268c3fc6b1ce0d2;
  _DAT_1833f0e08 =
       (_DAT_1833f0e08 * 0x7d10ad87cb2bf5dd ^ _DAT_1833f0e28) + (_DAT_1833f0ca8 & 0x1ffffffffffff);
  _DAT_1833f0ba8 = _DAT_1833f0e08 ^ _DAT_1833f0e28;
  _DAT_1833f0b08 = 0;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x6760,299);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b30a2 (image 18f1b30a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b30a2(void)

{
  FUN_190dd9df0();
  (*_DAT_182852168)();
  return;
}



// ===== continuation @ rva f1b2ca7 (image 18f1b2ca7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b2ca7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1847d4a10();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b31dd (image 18f1b31dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b31dd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x418))();
  (*_DAT_182852208)();
  return;
}



// ===== continuation @ rva f1b313d (image 18f1b313d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b313d(void)

{
  FUN_190dd72e0();
  (*_DAT_182852088)();
  return;
}



// ===== continuation @ rva f1c1430 (image 18f1c1430) =====

void FUN_18f1c1430(void)

{
  return;
}



// ===== continuation @ rva f1b34a2 (image 18f1b34a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b34a2(void)

{
  FUN_190ddce00();
  (*_DAT_182855a98)();
  return;
}



// ===== continuation @ rva f1c149c (image 18f1c149c) =====

void FUN_18f1c149c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1ba6c4 (image 18f1ba6c4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1ba6c4(void)

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



// ===== continuation @ rva f1bfa0d (image 18f1bfa0d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1bfa0d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b6cfc (image 18f1b6cfc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b6cfc(void)

{
  FUN_190dd72e0();
  (*_DAT_182854278)();
  return;
}



// ===== continuation @ rva f1b69d8 (image 18f1b69d8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b69d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1828553f8)();
  return;
}



// ===== continuation @ rva f1b7a5d (image 18f1b7a5d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b7a5d(void)

{
  FUN_190dd72e0();
  (*_DAT_182855358)();
  return;
}



// ===== continuation @ rva f1b6232 (image 18f1b6232) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b6232(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b5be3 (image 18f1b5be3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b5be3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c16e6 (image 18f1c16e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c16e6(void)

{
  FUN_190dd72e0();
  (*_DAT_1828575e8)();
  return;
}



// ===== continuation @ rva f1c1673 (image 18f1c1673) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1673(void)

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



// ===== continuation @ rva f1c17c6 (image 18f1c17c6) =====

void FUN_18f1c17c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1c17be (image 18f1c17be) =====

void FUN_18f1c17be(void)

{
  return;
}



// ===== continuation @ rva f1c17ad (image 18f1c17ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c17ad(void)

{
  (*_DAT_1828575c8)();
  return;
}



// ===== continuation @ rva f1c170e (image 18f1c170e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c170e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c1762 (image 18f1c1762) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c1762(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c16ac (image 18f1c16ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c16ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182857638)();
  return;
}



// ===== continuation @ rva f1c172f (image 18f1c172f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c172f(void)

{
  FUN_190dd9df0();
  (*_DAT_1828575f8)();
  return;
}



// ===== continuation @ rva f1c1786 (image 18f1c1786) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1786(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828575d8)();
  return;
}



// ===== continuation @ rva f1c18f1 (image 18f1c18f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c18f1(void)

{
  FUN_190dd72e0();
  (*_DAT_182857718)();
  return;
}



// ===== continuation @ rva f1c1878 (image 18f1c1878) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1878(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c19ce (image 18f1c19ce) =====

void FUN_18f1c19ce(void)

{
  return;
}



// ===== continuation @ rva f1c18b4 (image 18f1c18b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c18b4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828576f8)();
  return;
}



// ===== continuation @ rva f1c193d (image 18f1c193d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c193d(void)

{
  FUN_190dd9df0();
  (*_DAT_1828576c8)();
  return;
}



// ===== continuation @ rva f1c19db (image 18f1c19db) =====

void FUN_18f1c19db(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1c1970 (image 18f1c1970) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c1970(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c1997 (image 18f1c1997) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1997(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828576e8)();
  return;
}



// ===== continuation @ rva f1c19be (image 18f1c19be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c19be(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182857708)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva f1c18d9 (image 18f1c18d9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c18d9(void)

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



// ===== continuation @ rva f1c1b01 (image 18f1c1b01) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1b01(void)

{
  FUN_190dd72e0();
  (*_DAT_1828577c8)();
  return;
}



// ===== continuation @ rva f1c1a88 (image 18f1c1a88) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1a88(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c1beb (image 18f1c1beb) =====

void FUN_18f1c1beb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1c1ae9 (image 18f1c1ae9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c1ae9(void)

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



// ===== continuation @ rva f1c1bce (image 18f1c1bce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1bce(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_1828577a8)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva f1c1bde (image 18f1c1bde) =====

void FUN_18f1c1bde(void)

{
  return;
}



// ===== continuation @ rva f1c1b80 (image 18f1c1b80) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c1b80(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c1b29 (image 18f1c1b29) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c1b29(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c1ac4 (image 18f1c1ac4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1ac4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182857788)();
  return;
}



// ===== continuation @ rva f1c1b4d (image 18f1c1b4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1b4d(void)

{
  FUN_190dd9df0();
  (*_DAT_1828577b8)();
  return;
}



// ===== continuation @ rva f1c1d11 (image 18f1c1d11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1d11(void)

{
  FUN_190dd72e0();
  (*_DAT_1828578e8)();
  return;
}



// ===== continuation @ rva f1c1c98 (image 18f1c1c98) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1c98(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c1dee (image 18f1c1dee) =====

void FUN_18f1c1dee(void)

{
  return;
}



// ===== continuation @ rva f1c1d5d (image 18f1c1d5d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1d5d(void)

{
  FUN_190dd9df0();
  (*_DAT_182857898)();
  return;
}



// ===== continuation @ rva f1c1dfb (image 18f1c1dfb) =====

void FUN_18f1c1dfb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1c1dde (image 18f1c1dde) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1dde(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_1828578d8)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva f1c1d90 (image 18f1c1d90) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c1d90(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c1db7 (image 18f1c1db7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1db7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182857878)();
  return;
}



// ===== continuation @ rva f1c1cf9 (image 18f1c1cf9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c1cf9(void)

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



// ===== continuation @ rva f1c1cd4 (image 18f1c1cd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1cd4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828578b8)();
  return;
}



// ===== continuation @ rva f1c75e9 (image 18f1c75e9) =====

void FUN_18f1c75e9(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(*unaff_RSI + 0x558))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0xb0) = unaff_RSI;
                    /* WARNING: Could not recover jumptable at 0x00018f1c7625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182859a80 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva f1c7596 (image 18f1c7596) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f1c75cc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f1c7596(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f1cb300 (image 18f1cb300) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1cb300(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  uint unaff_ESI;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  _DAT_1833f18c0 = func_0x00018f1f1360(_DAT_1833f1838 + 0x23007bd1001dff ^ 0xef);
  uVar1 = _DAT_1833f18c0 << 0x39 | _DAT_1833f18c0 >> 7;
  _DAT_1833f17d8 = (_DAT_1833f17d8 ^ uVar1) + 0xff ^ 0xbf250805da0edcd6;
  _DAT_1833f17e0 = (_DAT_1833f17e0 * -0x1808e3149ef3f7e1 ^ _DAT_1833f17d8) + uVar1;
  _DAT_1833f1818 = _DAT_1833f17e0 ^ _DAT_1833f17d8;
  _DAT_1833f18a0 = 0xff;
  uVar1 = (~_DAT_1833f1888 + 0x70) *
          ((_DAT_1833f1750 ^ 0x84222380) + (ulonglong)((uint)_DAT_1833f1750 & 0x84222380) * 2);
  uVar1 = (uVar1 | _DAT_1833f17b8) + (uVar1 & _DAT_1833f17b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f1828 = func_0x00018f1f1360((uVar1 | 0x842223ef) + (ulonglong)((uint)uVar1 & 0x842223ef))
  ;
  _DAT_1833f1790 = (_DAT_1833f1790 ^ _DAT_1833f1828 ^ 0xef) + 0xca ^ 0xc8ed63f7b17280bf;
  _DAT_1833f17e8 = (_DAT_1833f17e8 * -0x737075bfa5895e69 ^ _DAT_1833f1790) + (_DAT_1833f1828 ^ 0xef)
  ;
  _DAT_1833f18e8 = _DAT_1833f17e8 ^ _DAT_1833f1790;
  _DAT_1833f1700 = 0xca;
  uVar1 = (_DAT_1833f1798 ^ _DAT_18225f490) + _DAT_1833f1840 + 0x84222325;
  uVar4 = (_DAT_1833f1840 ^ _UNK_18225f498) + _DAT_1833f1798 + 0xe;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833f1798 ^ _DAT_18225f490;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833f1840 ^ _UNK_18225f498;
  _DAT_1833f1888 =
       func_0x00018f1f1360((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833f1798 + 0xe) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833f1840 + 0x84222325));
  _DAT_1833f1790 = (_DAT_1833f1790 ^ _DAT_1833f1888 & 0xfffffffffffffe00) - 0xe ^ 0xa1547c0b40c336e0
  ;
  _DAT_1833f18e0 =
       (_DAT_1833f18e0 * 0x3efdd50929971617 ^ _DAT_1833f1790) +
       (_DAT_1833f1888 & 0xfffffffffffffe00);
  _DAT_1833f17c0 = _DAT_1833f18e0 ^ _DAT_1833f1790;
  _DAT_1833f17b8 = 0xf2;
  _DAT_1833f1898 = func_0x00018f1f1360(_DAT_1833f17f8 ^ 0xffe0ff7c17001db5);
  uVar1 = _DAT_1833f1898 & 0x7fffffffffffffff;
  _DAT_1833f1860 = _DAT_1833f1750 ^ uVar1 ^ 0x130;
  _DAT_1833f1700 = (_DAT_1833f1700 ^ uVar1) + 0x130 ^ 0xb42ed149ec2cbc38;
  _DAT_1833f18d0 = (_DAT_1833f18d0 * -0x4de0c456cc31075d ^ _DAT_1833f1700) + uVar1;
  _DAT_1833f1878 = _DAT_1833f18d0 ^ _DAT_1833f1700;
  _DAT_1833f1708 = 0x30;
  _DAT_1833f1738 = func_0x00018f1f1360(_DAT_1833f1888 ^ 0xffdeff7c5f001d23);
  _DAT_1833f1778 = _DAT_1833f1838 ^ _DAT_1833f1738 ^ 0xa6;
  _DAT_1833f17c8 = (_DAT_1833f17c8 ^ _DAT_1833f1738) + 0xa6 ^ 0xeba5e9d3df6fd57f;
  _DAT_1833f1728 = (_DAT_1833f1728 * 0x4ecab267a88d760b ^ _DAT_1833f17c8) + _DAT_1833f1738;
  _DAT_1833f1830 = _DAT_1833f1728 ^ _DAT_1833f17c8;
  _DAT_1833f1770 = 0xa6;
  uVar1 = (_DAT_1833f1870 ^ _DAT_18285a560) + _DAT_1833f1808 + 0x84222383;
  uVar4 = (_DAT_1833f1808 ^ _UNK_18285a568) + _DAT_1833f1870 + 0x8a;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833f1870 ^ _DAT_18285a560;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833f1808 ^ _UNK_18285a568;
  _DAT_1833f18f0 =
       func_0x00018f1f1360((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833f1870 + 0x8a) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833f1808 + 0x84222383));
  uVar1 = (ulonglong)((uint)_DAT_1833f18f0 ^ 0xae);
  uVar1 = ((uVar1 << 0x24 | _DAT_1833f18f0 >> 0x1c) << 1 | (uVar1 & 0xfffffff) >> 0x1b) *
          -0x3e85e03b2d96ff;
  _DAT_1833f1708 = _DAT_1833f17f0 ^ uVar1 ^ 0x130;
  _DAT_1833f18d0 = (_DAT_1833f18d0 ^ uVar1) + 0x130 ^ 0x92d5b6092a738a73;
  _DAT_1833f17f8 = (_DAT_1833f17f8 * 0x7eacdf5904a0095f ^ _DAT_1833f18d0) + uVar1;
  _DAT_1833f1808 = _DAT_1833f17f8 ^ _DAT_1833f18d0;
  _DAT_1833f1720 = 0x30;
  uVar1 = (~_DAT_1833f18c8 + 0xcb) *
          ((_DAT_1833f1700 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833f1700 & 0x842223da) * 2);
  uVar1 = (uVar1 | _DAT_1833f1728) + (uVar1 & _DAT_1833f1728);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f18e0 = func_0x00018f1f1360((uVar1 | 0x84222310) + (ulonglong)((uint)uVar1 & 0x84222310))
  ;
  uVar4 = _UNK_18285a578;
  uVar1 = _DAT_18285a570;
  _DAT_1833f1858 = _DAT_1833f18f0 ^ _DAT_1833f1738 ^ 0x1c9;
  _DAT_1833f18b0 = (_DAT_1833f18b0 ^ _DAT_1833f1738) + 0x1c9 ^ 0x9e64cabf9ac416a4;
  _DAT_1833f1790 = (_DAT_1833f1790 * -0x234865b85e52df7 ^ _DAT_1833f18b0) + _DAT_1833f1738;
  _DAT_1833f1848 = _DAT_1833f1790 ^ _DAT_1833f18b0;
  _DAT_1833f1840 = 0xc9;
  uVar3 = (_DAT_1833f1720 ^ _DAT_18285a570) + _DAT_1833f1800 + 0x842223da;
  uVar5 = (_DAT_1833f1800 ^ _UNK_18285a578) + _DAT_1833f1720 + 0xca;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f1720 ^ _DAT_18285a570;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833f1800 ^ _UNK_18285a578;
  _DAT_1833f1898 =
       func_0x00018f1f1360((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833f1720 + 0xca) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833f1800 + 0x842223da));
  _DAT_1833f18f0 = (_DAT_1833f18f0 ^ _DAT_1833f1898 & 0x1ffffffff) + 0x35 ^ 0x73206f17d6519480;
  _DAT_1833f1750 =
       (_DAT_1833f1750 * 0x74df6ce68a30982d ^ _DAT_1833f18f0) + (_DAT_1833f1898 & 0x1ffffffff);
  _DAT_1833f18c8 = _DAT_1833f1750 ^ _DAT_1833f18f0;
  _DAT_1833f1870 = 0x35;
  uVar3 = (_DAT_1833f1738 ^ uVar1) + _DAT_1833f1878 + 0x842223da;
  uVar5 = (_DAT_1833f1878 ^ uVar4) + _DAT_1833f1738 + 0xca;
  uVar1 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f1738 ^ uVar1;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833f1878 ^ uVar4;
  _DAT_1833f1820 =
       func_0x00018f1f1360((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833f1738 + 0xca) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833f1878 + 0x842223da));
  _DAT_1833f17a0 = (_DAT_1833f17a0 ^ _DAT_1833f1820 ^ 0x35) + 0xca ^ 0x28c66ae8b0260e19;
  _DAT_1833f18a0 = (_DAT_1833f18a0 * -0x7f3219529aeb6429 ^ _DAT_1833f17a0) + (_DAT_1833f1820 ^ 0x35)
  ;
  _DAT_1833f1880 = _DAT_1833f18a0 ^ _DAT_1833f17a0;
  _DAT_1833f17e0 = 0xca;
  uVar1 = (~_DAT_1833f18b8 + 0x95) *
          ((_DAT_1833f1720 ^ 0x84222310) + (ulonglong)((uint)_DAT_1833f1720 & 0x84222310) * 2);
  uVar1 = (uVar1 | _DAT_1833f1788) + (uVar1 & _DAT_1833f1788);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f18d0 = func_0x00018f1f1360((uVar1 | 0x84222384) + (ulonglong)((uint)uVar1 & 0x84222384))
  ;
  _DAT_1833f1778 = _DAT_1833f17d0 ^ _DAT_1833f18d0 ^ 0xc9;
  _DAT_1833f1798 = (_DAT_1833f1798 ^ _DAT_1833f18d0) + 0xc9 ^ 0xddda8d71ccb1de23;
  _DAT_1833f1898 = (_DAT_1833f1898 * 0x3f49d411f7a228e9 ^ _DAT_1833f1798) + _DAT_1833f18d0;
  _DAT_1833f1748 = _DAT_1833f1898 ^ _DAT_1833f1798;
  _DAT_1833f1808 = 0xc9;
  _DAT_1833f1820 = func_0x00018f1f1360(_DAT_1833f1898 ^ 0xffe3008423001d03);
  _DAT_1833f1758 = (_DAT_1833f1820 >> 2) * 0x3cdde628384390e4 ^ 0xc9;
  _DAT_1833f1740 = _DAT_1833f1740 ^ _DAT_1833f1758 ^ 0xd96519d446a49c29;
  _DAT_1833f1878 = (_DAT_1833f1878 * -0x15c8155366eac8a5 ^ _DAT_1833f1740) + _DAT_1833f1758;
  _DAT_1833f17a0 = 0;
  _DAT_1833f1870 = func_0x00018f1f1360(_DAT_1833f17e8 + 0xffe0ff7bf30021ff ^ 0xe0);
  _DAT_1833f18d8 = _DAT_1833f1760 ^ _DAT_1833f1870 ^ 0x30;
  _DAT_1833f1818 = (_DAT_1833f1818 ^ _DAT_1833f1870) + 0x30 ^ 0xb1858915aa5acf0a;
  _DAT_1833f1730 = (_DAT_1833f1730 * -0x4f53a957aeee4c8f ^ _DAT_1833f1818) + _DAT_1833f1870;
  _DAT_1833f1708 = _DAT_1833f1730 ^ _DAT_1833f1818;
  _DAT_1833f18a8 = 0x30;
  _DAT_1833f18d0 = func_0x00018f1f1360(_DAT_1833f18a0 + 0x22ff7c250021ff ^ 0x23);
  _DAT_1833f18e0 = _DAT_1833f18e0 ^ _DAT_1833f18d0 * -0x20eecede8791913 ^ 0xa60c09e4a1393fcb;
  _DAT_1833f1760 =
       (_DAT_1833f1760 * -0x6d46f1fc9c77cea5 ^ _DAT_1833f18e0) + _DAT_1833f18d0 * -0x20eecede8791913
  ;
  _DAT_1833f18d8 = _DAT_1833f1760 ^ _DAT_1833f18e0;
  _DAT_1833f1700 = 0;
  uVar1 = (_DAT_1833f17e8 ^ 0x84222315) + _DAT_1833f1898 + 0x84222315;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833f17e8 ^ 0x84222315;
  uVar4 = ((_DAT_1833f1898 + _DAT_1833f17e8) * 0x2000 | _DAT_1833f1898 + _DAT_1833f17e8 >> 0x33) ^
          _DAT_1833f1898;
  uVar1 = func_0x00018f1f1360((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1833f17e8 ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833f1898 + 0x84222315));
  uVar1 = (uVar1 ^ 0x30) * 0x4868ad9f839dac75;
  _DAT_1833f1738 = _DAT_1833f18e0 ^ uVar1 ^ 0x30;
  _DAT_1833f1898 = (_DAT_1833f1898 ^ uVar1) + 0x30 ^ 0x9dd2c865bd32467b;
  _DAT_1833f17a0 = (_DAT_1833f17a0 * 0x5b0e3b9914e6b4a9 ^ _DAT_1833f1898) + uVar1;
  _DAT_1833f1858 = _DAT_1833f17a0 ^ _DAT_1833f1898;
  _DAT_1833f1770 = 0x30;
  uVar1 = (ulonglong)(unaff_ESI % 10) ^ 0x84222325;
  uVar4 = uVar1 ^ _DAT_1833f1868;
  lVar2 = uVar1 + _DAT_1833f1868;
  uVar1 = uVar4 + lVar2;
  uVar3 = (_DAT_1833f1868 ^ 0x30) + _DAT_1833f1868 + 0x30;
  uVar4 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ uVar4;
  uVar1 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f1868 ^ 0x30;
  _DAT_1833f18a0 =
       func_0x00018f1f1360((uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833f1868 + 0x30) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  _DAT_1833f1760 = (ulonglong)(unaff_ESI % 10) | 0x30;
  _DAT_1833f1700 =
       (_DAT_1833f1700 ^ _DAT_1833f18a0 & 0x7fffffffffffffff) + _DAT_1833f1760 ^ 0x3b3d1f0b9f722423;
  _DAT_1833f1850 =
       (_DAT_1833f1850 * -0x1f4595c1cc677af3 ^ _DAT_1833f1700) +
       (_DAT_1833f18a0 & 0x7fffffffffffffff);
  _DAT_1833f1898 = _DAT_1833f1850 ^ _DAT_1833f1700;
  *(char *)(in_RAX + -1) = (char)_DAT_1833f1760;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c768c (image 18f1c768c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c768c(void)

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
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *unaff_RBP;
  ulonglong uVar17;
  undefined8 unaff_RDI;
  uint unaff_R12D;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  *(undefined8 *)(unaff_RBP + 0x1a) = unaff_RDI;
  auVar18._8_4_ = unaff_R12D;
  auVar18._0_8_ = _DAT_18001b640;
  auVar18._12_4_ = 0;
  auVar19 = pshufb(auVar18 ^ _DAT_18285a580,_DAT_1800170c0);
  uVar16 = auVar19._8_8_ + auVar19._0_8_;
  uVar15 = uVar16 + _DAT_1833f1848;
  if (auVar19._4_4_ < 0) {
    uVar15 = _DAT_1833f1880 ^ uVar16;
  }
  _DAT_1833f1720 = func_0x00018f1f1360(SUB161(auVar18 ^ _DAT_18285a580,5) ^ uVar15);
  uVar12 = _UNK_18285a5d8;
  uVar11 = _DAT_18285a5d0;
  uVar10 = _UNK_18285a5c8;
  uVar9 = _DAT_18285a5c0;
  uVar8 = _UNK_18285a5b8;
  uVar7 = _DAT_18285a5b0;
  uVar6 = _UNK_18285a5a8;
  uVar5 = _DAT_18285a5a0;
  uVar4 = _UNK_18285a598;
  uVar3 = _DAT_18285a590;
  uVar2 = _UNK_18030b8f8;
  uVar1 = _DAT_18030b8f0;
  uVar16 = _UNK_180269ea8;
  uVar15 = _DAT_180269ea0;
  uVar13 = _DAT_1833f1720 << 0x1e | (_DAT_1833f1720 & 0x7fffffffffffffff) >> 0x22;
  uVar17 = -(ulonglong)unaff_R12D;
  _DAT_1833f1850 = (_DAT_1833f1850 ^ uVar13) - (ulonglong)unaff_R12D ^ 0x2136dfadccc7bead;
  _DAT_1833f1890 = (_DAT_1833f1890 * -0x2a956b59e7636a11 ^ _DAT_1833f1850) + uVar13;
  _DAT_1833f18e8 = _DAT_1833f1890 ^ _DAT_1833f1850;
  _DAT_1833f1838 = uVar17 & 0xffffffff;
  unaff_RBP[0x1c] = 0x15;
  unaff_RBP[0x1d] = 0;
  unaff_RBP[0xc] = (uint)uVar17;
  *unaff_RBP = (uint)uVar17;
  *(char *)(unaff_RBP + 0x10) = (char)uVar17 + (char)((uVar17 & 0xffffffff) / 10) * -10;
  uVar13 = (~_DAT_1833f1788 + 0x2c) *
           ((_DAT_1833f1740 ^ 0x8422234a) + (ulonglong)((uint)_DAT_1833f1740 & 0x8422234a) * 2);
  uVar13 = (uVar13 | _DAT_1833f17c8) + (uVar13 & _DAT_1833f17c8);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_1833f1760 =
       func_0x00018f1f1360((uVar13 | 0x84222361) + (ulonglong)((uint)uVar13 & 0x84222361));
  uVar13 = (_DAT_1833f1760 ^ 0x6f) << 0x36 | _DAT_1833f1760 >> 10;
  _DAT_1833f18b0 = (_DAT_1833f18b0 ^ uVar13) + 0x6f ^ 0xb394bc4633019b14;
  _DAT_1833f1738 = (_DAT_1833f1738 * -0x4e2de04ae48ebcb3 ^ _DAT_1833f18b0) + uVar13;
  _DAT_1833f1708 = _DAT_1833f1738 ^ _DAT_1833f18b0;
  _DAT_1833f1830 = _DAT_1833f1798 ^ 0x6f;
  _DAT_1833f1820 = 0x6f;
  uVar13 = (_DAT_1833f1858 ^ uVar15) + _DAT_1833f1730 + 0x84222325;
  uVar17 = (_DAT_1833f1730 ^ uVar16) + _DAT_1833f1858 + 2;
  uVar15 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1833f1858 ^ uVar15;
  uVar16 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_1833f1730 ^ uVar16;
  _DAT_1833f1860 =
       func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1833f1858 + 2) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f1730 + 0x84222325));
  _DAT_1833f1718 = (_DAT_1833f1718 ^ _DAT_1833f1860) - 2 ^ 0x95b51b41299c6894;
  _DAT_1833f1828 = (_DAT_1833f1828 * 0x27fb12c56937d0cd ^ _DAT_1833f1718) + _DAT_1833f1860;
  _DAT_1833f1888 = _DAT_1833f1828 ^ _DAT_1833f1718;
  _DAT_1833f18c0 = 0xfe;
  uVar15 = (~_DAT_1833f1738 + 3) *
           ((_DAT_1833f18f8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1833f18f8 & 0x84222315) * 2);
  uVar15 = (uVar15 | 0xfe) + (uVar15 & 0xfe);
  uVar15 = uVar15 * 0x2000 ^ uVar15;
  uVar15 = uVar15 >> 7 ^ uVar15;
  uVar15 = uVar15 << 0x11 ^ uVar15;
  func_0x00018f1f1360((uVar15 | 0x84222317) + (ulonglong)((uint)uVar15 & 0x84222317));
  _DAT_1833f1850 = _DAT_1833f1808 ^ _DAT_1833f17c8 ^ 0x32;
  _DAT_1833f1708 = (_DAT_1833f1708 ^ _DAT_1833f17c8) + 0x32 ^ 0xfb85a2c24a0cba66;
  _DAT_1833f1878 = (_DAT_1833f1878 * 0x751bb05956dbf33b ^ _DAT_1833f1708) + _DAT_1833f17c8;
  _DAT_1833f1710 = _DAT_1833f1878 ^ _DAT_1833f1708;
  _DAT_1833f17d0 = 0x32;
  uVar15 = (_DAT_1833f1740 ^ uVar3) + _DAT_1833f1790 + 0x84222317;
  uVar16 = (_DAT_1833f1790 ^ uVar4) + _DAT_1833f1740 + 0xfe;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1833f1740 ^ uVar3;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1833f1790 ^ uVar4;
  _DAT_1833f1700 =
       func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1833f1740 + 0xfe) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f1790 + 0x84222317));
  uVar15 = (_DAT_1833f1700 ^ 0xfe) * 0x933a18943b6dcf;
  _DAT_1833f17c8 = _DAT_1833f18d8 ^ uVar15 ^ 0x130;
  _DAT_1833f1800 = (_DAT_1833f1800 ^ uVar15) + 0x130 ^ 0x937c325d1515362c;
  _DAT_1833f17e8 = (_DAT_1833f17e8 * 0x5da3b509c31f2807 ^ _DAT_1833f1800) + uVar15;
  _DAT_1833f1838 = _DAT_1833f17e8 ^ _DAT_1833f1800;
  _DAT_1833f1758 = 0x30;
  uVar15 = ((_DAT_1833f1770 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833f1770 & 0x84222325) * 2) *
           0x93;
  uVar15 = (uVar15 | _DAT_1833f1848) + (uVar15 & _DAT_1833f1848);
  uVar15 = uVar15 * 0x2000 ^ uVar15;
  uVar15 = uVar15 >> 7 ^ uVar15;
  uVar15 = uVar15 << 0x11 ^ uVar15;
  _DAT_1833f1860 =
       func_0x00018f1f1360((uVar15 | 0x842223e6) + (ulonglong)((uint)uVar15 & 0x842223e6));
  _DAT_1833f18d0 = _DAT_1833f18d0 - 0xc3 ^ 0x8d00f746dfa4877c;
  _DAT_1833f1738 = _DAT_1833f1828 * 0x26c78c41f32830d7;
  _DAT_1833f1828 = _DAT_1833f1738 ^ _DAT_1833f18d0;
  _DAT_1833f1750 = 0x3d;
  uVar15 = (_DAT_1833f1880 ^ uVar5) + _DAT_1833f18b8 + 0x84222315;
  uVar16 = (_DAT_1833f18b8 ^ uVar6) + _DAT_1833f1880 + 0xc3;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1833f1880 ^ uVar5;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1833f18b8 ^ uVar6;
  _DAT_1833f1780 =
       func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1833f1880 + 0xc3) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f18b8 + 0x84222315));
  uVar15 = _DAT_1833f1780 & 0xffffffffffffffc0;
  _DAT_1833f17c0 = _DAT_1833f1740 ^ uVar15 ^ 0xf3;
  _DAT_1833f18c8 = (_DAT_1833f18c8 ^ uVar15) + 0xf3 ^ 0x11e7a77ce41a8c7f;
  _DAT_1833f18d0 = (_DAT_1833f18d0 * 0x3eba940558514fd3 ^ _DAT_1833f18c8) + uVar15;
  _DAT_1833f18b8 = _DAT_1833f18d0 ^ _DAT_1833f18c8;
  _DAT_1833f1748 = 0xf3;
  uVar15 = (~_DAT_1833f1860 + 0x3e) *
           ((_DAT_1833f1880 ^ 0x842223d6) + (ulonglong)((uint)_DAT_1833f1880 & 0x842223d6) * 2);
  uVar15 = (uVar15 | _DAT_1833f18f0) + (uVar15 & _DAT_1833f18f0);
  uVar15 = uVar15 * 0x2000 ^ uVar15;
  uVar15 = uVar15 >> 7 ^ uVar15;
  uVar15 = uVar15 << 0x11 ^ uVar15;
  _DAT_1833f17d8 =
       func_0x00018f1f1360((uVar15 | 0x842223eb) + (ulonglong)((uint)uVar15 & 0x842223eb));
  uVar15 = _DAT_1833f17d8 ^ 0xf3;
  _DAT_1833f1878 = _DAT_1833f17a0 ^ uVar15 ^ 0x130;
  _DAT_1833f1838 = (_DAT_1833f1838 ^ uVar15) + 0x130 ^ 0x7b5d28a3e176eb63;
  _DAT_1833f1850 = (_DAT_1833f1850 * 0x7dfa6e66c886584b ^ _DAT_1833f1838) + uVar15;
  _DAT_1833f1700 = _DAT_1833f1850 ^ _DAT_1833f1838;
  _DAT_1833f1830 = 0x30;
  uVar15 = (_DAT_1833f18d8 ^ uVar1) + _DAT_1833f18c8 + 0x84222315;
  uVar16 = (_DAT_1833f18c8 ^ uVar2) + _DAT_1833f18d8 + 0x1a;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1833f18d8 ^ uVar1;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1833f18c8 ^ uVar2;
  _DAT_1833f17b8 =
       func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1833f18d8 + 0x1a) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f18c8 + 0x84222315));
  uVar15 = (ulonglong)(~(uint)_DAT_1833f17b8 & 0x30) ^ 0x30;
  _DAT_1833f18f8 = _DAT_1833f17c8 ^ uVar15 ^ 0x4a;
  _DAT_1833f18c0 = (_DAT_1833f18c0 ^ uVar15) + 0x4a ^ 0x503d3e8d34e48055;
  _DAT_1833f1898 = (_DAT_1833f1898 * -0x195e2703aa45e22d ^ _DAT_1833f18c0) + uVar15;
  _DAT_1833f18a8 = _DAT_1833f1898 ^ _DAT_1833f18c0;
  _DAT_1833f1850 = 0x4a;
  uVar15 = (~_DAT_1833f1888 + 0xe7) *
           ((_DAT_1833f18d0 ^ 0x8422236f) + (ulonglong)((uint)_DAT_1833f18d0 & 0x8422236f) * 2);
  uVar15 = (uVar15 | _DAT_1833f1770) + (uVar15 & _DAT_1833f1770);
  uVar15 = uVar15 * 0x2000 ^ uVar15;
  uVar15 = uVar15 >> 7 ^ uVar15;
  uVar15 = uVar15 << 0x11 ^ uVar15;
  uVar15 = func_0x00018f1f1360((uVar15 | 0x84222389) + (ulonglong)((uint)uVar15 & 0x84222389));
  uVar15 = (uVar15 << 0x2e | uVar15 >> 0x12) >> 0x1a | (uVar15 >> 0x12) << 0x26;
  _DAT_1833f1830 = _DAT_1833f1720 ^ uVar15 ^ 0x130;
  _DAT_1833f1870 = (_DAT_1833f1870 ^ uVar15) + 0x130 ^ 0xccccb9682840c059;
  _DAT_1833f17c0 = (_DAT_1833f17c0 * 0x403a533ae8291189 ^ _DAT_1833f1870) + uVar15;
  _DAT_1833f17b8 = _DAT_1833f17c0 ^ _DAT_1833f1870;
  _DAT_1833f17f8 = 0x30;
  uVar15 = (_DAT_1833f1808 ^ uVar7) + _DAT_1833f1788 + 0x8422234a;
  uVar16 = (_DAT_1833f1788 ^ uVar8) + _DAT_1833f1808 + 0x93;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1833f1808 ^ uVar7;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1833f1788 ^ uVar8;
  _DAT_1833f17e8 =
       func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1833f1808 + 0x93) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f1788 + 0x8422234a));
  uVar15 = _DAT_1833f17e8 ^ 0x90;
  _DAT_1833f18e0 = _DAT_1833f1858 ^ uVar15 ^ 0x102;
  _DAT_1833f1760 = (_DAT_1833f1760 ^ uVar15) + 0x102 ^ 0x13273494ad8c75fe;
  _DAT_1833f18a8 = (_DAT_1833f18a8 * 0x730a68912bd7495f ^ _DAT_1833f1760) + uVar15;
  _DAT_1833f1840 = _DAT_1833f18a8 ^ _DAT_1833f1760;
  _DAT_1833f17b8 = 2;
  uVar15 = (~_DAT_1833f1888 + 0x94) *
           ((_DAT_1833f1708 ^ 0x8422234a) + (ulonglong)((uint)_DAT_1833f1708 & 0x8422234a) * 2);
  uVar15 = (uVar15 | _DAT_1833f1858) + (uVar15 & _DAT_1833f1858);
  uVar15 = uVar15 * 0x2000 ^ uVar15;
  uVar15 = uVar15 >> 7 ^ uVar15;
  uVar15 = uVar15 << 0x11 ^ uVar15;
  _DAT_1833f18f8 =
       func_0x00018f1f1360((uVar15 | 0x842223d9) + (ulonglong)((uint)uVar15 & 0x842223d9));
  uVar15 = _DAT_1833f18f8 - (_DAT_1833f18f8 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar15 = (((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
           _DAT_1833f18f8 ^ 0x6f;
  _DAT_1833f1760 = (_DAT_1833f1760 ^ uVar15) + 0xfc ^ 0xb093045830722180;
  _DAT_1833f17e0 = (_DAT_1833f17e0 * -0x4de60e8d5edf3189 ^ _DAT_1833f1760) + uVar15;
  _DAT_1833f1898 = _DAT_1833f17e0 ^ _DAT_1833f1760;
  _DAT_1833f1788 = 0xfc;
  _DAT_1833f18d8 = func_0x00018f1f1360(_DAT_1833f1778 + 0xffdeff7c59001dffU ^ 0xc3);
  _DAT_1833f18c8 = (_DAT_1833f18c8 ^ _DAT_1833f18d8) + 3 ^ 0x830b1301038520e9;
  _DAT_1833f1770 = (_DAT_1833f1770 * 0x39d91840bf3d9719 ^ _DAT_1833f18c8) + _DAT_1833f18d8;
  _DAT_1833f1708 = _DAT_1833f1770 ^ _DAT_1833f18c8;
  _DAT_1833f17e0 = 3;
  uVar15 = (_DAT_1833f17d0 ^ uVar9) + _DAT_1833f1700 + 0x842223d9;
  uVar16 = (_DAT_1833f1700 ^ uVar10) + _DAT_1833f17d0 + 6;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1833f17d0 ^ uVar9;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1833f1700 ^ uVar10;
  _DAT_1833f18f8 =
       func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1833f17d0 + 6) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f1700 + 0x842223d9));
  uVar15 = _DAT_1833f18f8 * -0x67747f90a4673113;
  _DAT_1833f1898 = _DAT_1833f18a8 ^ uVar15 ^ 0x102;
  _DAT_1833f1730 = (_DAT_1833f1730 ^ uVar15) + 0x102 ^ 0x6740e53ac316fcf4;
  _DAT_1833f1818 = (_DAT_1833f1818 * 0x1dcf21877773986b ^ _DAT_1833f1730) + uVar15;
  _DAT_1833f18e0 = _DAT_1833f1818 ^ _DAT_1833f1730;
  _DAT_1833f1708 = 2;
  uVar15 = (~_DAT_1833f1828 + 0x100) *
           ((_DAT_1833f1888 ^ 0x8422234a) + (ulonglong)((uint)_DAT_1833f1888 & 0x8422234a) * 2);
  uVar15 = (uVar15 | _DAT_1833f18d0) + (uVar15 & _DAT_1833f18d0);
  uVar15 = uVar15 * 0x2000 ^ uVar15;
  uVar15 = uVar15 >> 7 ^ uVar15;
  uVar15 = uVar15 << 0x11 ^ uVar15;
  _DAT_1833f1870 =
       func_0x00018f1f1360((uVar15 | 0x842223b5) + (ulonglong)((uint)uVar15 & 0x842223b5));
  uVar15 = _DAT_1833f1870 & 0x7fffffffffffffff ^ 0x6f;
  _DAT_1833f1708 = (_DAT_1833f1708 ^ uVar15) + 0x90 ^ 0x3e79b0a4df84431e;
  _DAT_1833f18c0 = (_DAT_1833f18c0 * -0x5b3073d82ec56d37 ^ _DAT_1833f1708) + uVar15;
  _DAT_1833f17c8 = _DAT_1833f18c0 ^ _DAT_1833f1708;
  _DAT_1833f1848 = 0x90;
  uVar15 = (_DAT_1833f1788 ^ uVar11) + _DAT_1833f1868 + 0x8422234a;
  uVar16 = (_DAT_1833f1868 ^ uVar12) + _DAT_1833f1788 + 0x90;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1833f1788 ^ uVar11;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1833f1868 ^ uVar12;
  _DAT_1833f1768 =
       func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1833f1788 + 0x90) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f1868 + 0x8422234a));
  uVar15 = _DAT_1833f1768 - (_DAT_1833f1768 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar15 = (((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
           _DAT_1833f1768;
  _DAT_1833f1708 = _DAT_1833f1708 ^ uVar15 ^ 0xf311be350e75f0e1;
  _DAT_1833f18c8 = (_DAT_1833f18c8 * 0x4f5c81aa0389efcf ^ _DAT_1833f1708) + uVar15;
  _DAT_1833f17b8 = _DAT_1833f18c8 ^ _DAT_1833f1708;
  _DAT_1833f1738 = 0;
  uVar15 = (_DAT_1833f1780 ^ 0x84222315) + _DAT_1833f18b8 + 0x84222315;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1833f1780 ^ 0x84222315;
  uVar16 = ((_DAT_1833f18b8 + _DAT_1833f1780) * 0x2000 | _DAT_1833f18b8 + _DAT_1833f1780 >> 0x33) ^
           _DAT_1833f18b8;
  lVar14 = func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - _DAT_1833f1780 ^
                               (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f18b8 + 0x84222315));
  _DAT_1833f18e8 = (ulonglong)(~(uint)lVar14 & 0x30) << 0x3a;
  _DAT_1833f1720 = _DAT_1833f1768 ^ _DAT_1833f18e8 ^ 0x30;
  _DAT_1833f18e0 = (_DAT_1833f18e0 ^ _DAT_1833f18e8) + 0x30 ^ 0xd159fa94940bca3d;
  _DAT_1833f18e8 = (lVar14 * 0x4a7f2b34460abc69 ^ _DAT_1833f18e0) + _DAT_1833f18e8;
  _DAT_1833f1770 = _DAT_1833f18e8 ^ _DAT_1833f18e0;
  _DAT_1833f1758 = 0x30;
  uVar15 = (~_DAT_1833f17a0 + 0x70) *
           ((_DAT_1833f1858 ^ 0x8422234a) + (ulonglong)((uint)_DAT_1833f1858 & 0x8422234a) * 2);
  uVar15 = (uVar15 | _DAT_1833f18e8) + (uVar15 & _DAT_1833f18e8);
  uVar15 = uVar15 * 0x2000 ^ uVar15;
  uVar15 = uVar15 >> 7 ^ uVar15;
  uVar15 = uVar15 << 0x11 ^ uVar15;
  _DAT_1833f1708 =
       func_0x00018f1f1360((uVar15 | 0x84222325) + (ulonglong)((uint)uVar15 & 0x84222325));
  uVar15 = _DAT_1833f1708 & 0x7ffffffffffff ^ 0x6f;
  _DAT_1833f18e8 = _DAT_1833f18e8 ^ uVar15 ^ 0x10a0435a20ba2871;
  _DAT_1833f17b0 = (_DAT_1833f17b0 * -0x504bb97ace9b28cd ^ _DAT_1833f18e8) + uVar15;
  _DAT_1833f17e8 = _DAT_1833f17b0 ^ _DAT_1833f18e8;
  _DAT_1833f1770 = 0;
  uVar15 = (_DAT_1833f1730 ^ 0x84222315) + _DAT_1833f17f8 + 0x84222315;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_1833f1730 ^ 0x84222315;
  uVar16 = ((_DAT_1833f17f8 + _DAT_1833f1730) * 0x2000 | _DAT_1833f17f8 + _DAT_1833f1730 >> 0x33) ^
           _DAT_1833f17f8;
  _DAT_1833f1780 =
       func_0x00018f1f1360((uVar16 << 0x1d | uVar16 >> 0x23) - _DAT_1833f1730 ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1833f17f8 + 0x84222315));
  uVar15 = _DAT_1833f1780 & 0xffffffffe0000000;
  _DAT_1833f1798 = (_DAT_1833f17f0 ^ uVar15 ^ 0x30 ^ uVar15) + 0x30 ^ 0x9812d8ad267e6a4d;
  _DAT_1833f1808 = (_DAT_1833f1808 * -0x55419a66d45afdd ^ _DAT_1833f1798) + uVar15;
  _DAT_1833f1788 = _DAT_1833f1808 ^ _DAT_1833f1798;
  _DAT_1833f1710 = 0x30;
  *(byte *)((longlong)unaff_RBP + *(longlong *)(unaff_RBP + 0x1c) + -0x51) =
       (byte)unaff_RBP[0x10] | 0x30;
  switch(*unaff_RBP < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1d43ae (image 18f1d43ae) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1d43ae(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  ulonglong uVar2;
  
  uVar1 = (~param_1 + 0xc94cb73e) * ((param_2 ^ 0x3d98f818) + param_3 * 2);
  uVar1 = (uVar1 | in_RAX) + (uVar1 & in_RAX);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f17f0 = func_0x00018f1f1360((uVar1 | 0xf4d44f25) + (ulonglong)((uint)uVar1 & 0xf4d44f25))
  ;
  _DAT_1833f1790 = (_DAT_1833f1790 ^ _DAT_1833f17f0 ^ 0xb9badb3d) + 0xf9feff3d ^ 0x4a271621b96b0fa6;
  _DAT_1833f1898 =
       (_DAT_1833f1898 * 0x1c07d5d668a12709 ^ _DAT_1833f1790) + (_DAT_1833f17f0 ^ 0xb9badb3d);
  _DAT_1833f17f8 = _DAT_1833f1898 ^ _DAT_1833f1790;
  _DAT_1833f18b0 = 0xf9feff3d;
  uVar1 = (~_DAT_1833f17d8 + 0x320e7632) *
          ((_DAT_1833f17f8 ^ 0x3aa722a1) + (ulonglong)((uint)_DAT_1833f17f8 & 0x3aa722a1) * 2);
  uVar1 = (uVar1 | _DAT_1833f17e0) + (uVar1 & _DAT_1833f17e0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f17d8 = func_0x00018f1f1360((uVar1 | 0x8a95490) + (ulonglong)((uint)uVar1 & 0x8a95490));
  uVar1 = (_DAT_1833f17d8 ^ 0xbe850184) & 0x7fffffffffffffff;
  _DAT_1833f17c0 = (_DAT_1833f17c0 ^ uVar1) + 0x8c8b77b5 ^ 0x4969dc3d401b24b2;
  _DAT_1833f18b8 = (_DAT_1833f18b8 * -0x6878a9fccf214679 ^ _DAT_1833f17c0) + uVar1;
  _DAT_1833f18e0 = _DAT_1833f18b8 ^ _DAT_1833f17c0;
  _DAT_1833f1858 = 0x8c8b77b5;
  uVar1 = (~_DAT_1833f1738 + 0x89bd238c) *
          ((_DAT_1833f18a8 ^ unaff_R15) + (ulonglong)((uint)_DAT_1833f18a8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1833f1790) + (uVar1 & _DAT_1833f1790);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f17d0 = func_0x00018f1f1360((uVar1 | 0xd9f00ae) + (ulonglong)((uint)uVar1 & 0xd9f00ae));
  uVar1 = _DAT_1833f17d0 << 0x37 | _DAT_1833f17d0 >> 9;
  _DAT_1833f1860 = (_DAT_1833f1860 ^ uVar1) - 0x89bd238b ^ 0xe45c0c2c91cf5a3c;
  _DAT_1833f18a0 = (_DAT_1833f18a0 * 0x3c936a2052c05da3 ^ _DAT_1833f1860) + uVar1;
  _DAT_1833f17c8 = _DAT_1833f18a0 ^ _DAT_1833f1860;
  _DAT_1833f1880 = 0x7642dc75;
  _DAT_1833f1830 = func_0x00018f1f1360(_DAT_1833f1810 + 0xaceff7aff ^ 0x3f);
  _DAT_1833f1760 = _DAT_1833f1770 ^ _DAT_1833f1840 ^ 0x89bd246a;
  _DAT_1833f1828 = (_DAT_1833f1828 ^ _DAT_1833f1840) + 0x89bd246a ^ 0x963a8c2d654784f7;
  _DAT_1833f17e0 = (_DAT_1833f17e0 * 0x608e2a85d9936439 ^ _DAT_1833f1828) + _DAT_1833f1840;
  _DAT_1833f17c0 = _DAT_1833f17e0 ^ _DAT_1833f1828;
  _DAT_1833f17c8 = 0x89bd246a;
  _DAT_1833f17c8 = func_0x00018f1f1360(_DAT_1833f17c0 + 0xffab003916003aff ^ 2);
  _DAT_1833f1820 = _DAT_1833f17d8 ^ _DAT_1833f17c8 ^ 0x1000000df;
  _DAT_1833f1850 = (_DAT_1833f1850 ^ _DAT_1833f17c8) + 0x1000000df ^ 0xb7b6b717fa0e37ff;
  _DAT_1833f18b8 = (_DAT_1833f18b8 * 0xec347b7eae313b5 ^ _DAT_1833f1850) + _DAT_1833f17c8;
  _DAT_1833f1738 = _DAT_1833f18b8 ^ _DAT_1833f1850;
  _DAT_1833f17b8 = 0xdf;
  uVar1 = (~_DAT_1833f17e0 + 0x88b1f8b1) *
          ((_DAT_1833f18e8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1833f18e8 & 0x842223fa) * 2);
  uVar1 = (uVar1 | _DAT_1833f1700) + (uVar1 & _DAT_1833f1700);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f17d8 = func_0x00018f1f1360((uVar1 | 0xc93db4a) + (ulonglong)((uint)uVar1 & 0xc93db4a));
  uVar1 = _DAT_1833f17d8 - (_DAT_1833f17d8 >> 1 & unaff_RBX);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (ulonglong)
          (~((uint)_DAT_1833f17d8 ^
            (uint)((((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * unaff_RDI >> 0x38) << 4)) & 0xdf) ^
          0x88b1f8b0;
  _DAT_1833f1760 = _DAT_1833f1890 ^ uVar1 ^ 0x88b1f98f;
  _DAT_1833f1840 = (_DAT_1833f18a8 ^ uVar1) + 0x88b1f98f ^ 0x3dc798b59aa9fc0f;
  _DAT_1833f17a0 = (_DAT_1833f17a0 * -0x639c942d9ab4ccd1 ^ _DAT_1833f1840) + uVar1;
  _DAT_1833f1840 = _DAT_1833f17a0 ^ _DAT_1833f1840;
  _DAT_1833f18a8 = 0x88b1f98f;
  _DAT_1833f1858 = func_0x00018f1f1360(_DAT_1833f1810 + 0xffa500228700beff ^ 5);
  uVar1 = _DAT_1833f1858 << 0x1b | _DAT_1833f1858 >> 0x25;
  _DAT_1833f17a8 = (_DAT_1833f17a8 ^ uVar1) - 0xa7e3585c ^ 0x31ccc7ab3f603b90;
  _DAT_1833f18e8 = (_DAT_1833f18e8 * -0x64137415191b85e3 ^ _DAT_1833f17a8) + uVar1;
  _DAT_1833f1848 = _DAT_1833f18e8 ^ _DAT_1833f17a8;
  _DAT_1833f1728 = 0x581ca7a4;
  uVar1 = (~_DAT_1833f1868 + 0xa7e3585d) *
          ((_DAT_1833f17d8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1833f17d8 & 0x842223fa) * 2);
  uVar1 = (uVar1 | _DAT_1833f1868) + (uVar1 & _DAT_1833f1868);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f1880 = func_0x00018f1f1360((uVar1 | 0x23c17ba6) + (ulonglong)((uint)uVar1 & 0x23c17ba6))
  ;
  uVar1 = (_DAT_1833f1880 ^ 0x923f09f824) * -0x7fdd4a6e313bda7b;
  _DAT_1833f1898 = _DAT_1833f18f0 ^ uVar1 ^ 0xa7e3593b;
  _DAT_1833f1890 = (_DAT_1833f1890 ^ uVar1) + 0xa7e3593b ^ 0x932a39d399e4e7bc;
  _DAT_1833f1810 = (_DAT_1833f1810 * -0x383207ce06d91355 ^ _DAT_1833f1890) + uVar1;
  _DAT_1833f17d0 = _DAT_1833f1810 ^ _DAT_1833f1890;
  _DAT_1833f1888 = 0xa7e3593b;
  uVar1 = (~_DAT_1833f1700 + 0x581ca7a5) *
          ((_DAT_1833f1700 ^ 0x23c17a1e) + (ulonglong)((uint)_DAT_1833f1700 & 0x23c17a1e) * 2);
  uVar1 = (uVar1 | _DAT_1833f18a8) + (uVar1 & _DAT_1833f18a8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f17f0 = func_0x00018f1f1360((uVar1 | 0x7bddddba) + (ulonglong)((uint)uVar1 & 0x7bddddba))
  ;
  uVar1 = (_DAT_1833f17f0 ^ 0x39c8f17ae74ea6cc) >> 1 | _DAT_1833f17f0 ^ 0x39c8f17ae74ea6cc;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & unaff_RBX);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = _DAT_1833f17f0 ^ 0x39c8f17a18b15853 ^
          0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * unaff_RDI >> 0x38);
  _DAT_1833f1888 = (_DAT_1833f1860 ^ uVar1 ^ 0x1000000df ^ uVar1) + 0x1000000df ^ 0x9b6ffb9383edd727
  ;
  _DAT_1833f1840 = (_DAT_1833f1840 * 0x5e94f1bb24f5e0fd ^ _DAT_1833f1888) + uVar1;
  _DAT_1833f18d8 = _DAT_1833f1840 ^ _DAT_1833f1888;
  _DAT_1833f1818 = 0xdf;
  _DAT_1833f1838 = func_0x00018f1f1360(_DAT_1833f17f8 ^ 0x6700b06300340d);
  uVar1 = _DAT_1833f1838 >> 1 | _DAT_1833f1838;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & unaff_RBX);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * unaff_RDI >> 0x38)) * 0x40 ^
          _DAT_1833f1838;
  uVar1 = uVar1 << 10 | uVar1 >> 0x36;
  _DAT_1833f1768 = (_DAT_1833f1768 ^ uVar1) + 0x75758888 ^ 0x74ff9a3ba1390914;
  _DAT_1833f1748 = (_DAT_1833f1748 * 0x718a5cc78cd72a93 ^ _DAT_1833f1768) + uVar1;
  _DAT_1833f1828 = _DAT_1833f1748 ^ _DAT_1833f1768;
  _DAT_1833f18b0 = 0x75758888;
  uVar1 = (~_DAT_1833f17e0 + 0x1114ee6b) *
          ((_DAT_1833f18e0 ^ 0xf157abad) + (ulonglong)((uint)_DAT_1833f18e0 & 0xf157abad) * 2);
  uVar1 = (uVar1 | _DAT_1833f1890) + (uVar1 & _DAT_1833f1890);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f1808 = func_0x00018f1f1360((uVar1 | 0xe04345c7) + (ulonglong)((uint)uVar1 & 0xe04345c7))
  ;
  uVar1 = _DAT_1833f1808 & 0x7fffffffffffffff ^ 0x1114ee6a;
  _DAT_1833f1860 = _DAT_1833f17f8 ^ uVar1 ^ 0x868a76f2;
  _DAT_1833f17b0 = (_DAT_1833f17b0 ^ uVar1) + 0x868a76f2 ^ 0x322f1e168bea9c12;
  _DAT_1833f18e8 = (_DAT_1833f18e8 * -0x1fce02d285e30291 ^ _DAT_1833f17b0) + uVar1;
  _DAT_1833f1840 = _DAT_1833f18e8 ^ _DAT_1833f17b0;
  _DAT_1833f1718 = 0x868a76f2;
  uVar1 = (_DAT_1833f17d0 ^ _DAT_182859f30) + _DAT_1833f1888 + 0x2a855d7;
  uVar2 = (_DAT_1833f1888 ^ _UNK_182859f38) + _DAT_1833f17d0 + 0x868a76f2;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833f17d0 ^ _DAT_182859f30;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833f1888 ^ _UNK_182859f38;
  _DAT_1833f17a8 =
       func_0x00018f1f1360((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833f17d0 + 0x868a76f2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833f1888 + 0x2a855d7));
  _DAT_1833f1790 =
       (_DAT_1833f17a8 ^ 0x46b53f69cc2bfcc4) << 0x2c | (_DAT_1833f17a8 ^ 0x46b53f69cc2bfcc4) >> 0x14
  ;
  _DAT_1833f1768 = _DAT_1833f1768 ^ _DAT_1833f1790 ^ 0x9df6bedfdca9199c;
  _DAT_1833f1710 = (_DAT_1833f1710 * -0x371c56c0d5aa7b5d ^ _DAT_1833f1768) + _DAT_1833f1790;
  _DAT_1833f1880 = _DAT_1833f1710 ^ _DAT_1833f1768;
  _DAT_1833f17f0 = 0;
  uVar1 = ((_DAT_1833f1868 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1833f1868 & 0x842223fa) * 2) *
          -_DAT_1833f1718;
  uVar1 = (uVar1 | _DAT_1833f1770) + (uVar1 & _DAT_1833f1770);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f1898 = func_0x00018f1f1360((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  uVar1 = _DAT_1833f1898 * -0x3f9e3be904e48b35;
  _DAT_1833f18e8 = _DAT_1833f1728 ^ uVar1 ^ 0xdf;
  _DAT_1833f1808 = (_DAT_1833f1808 ^ uVar1) + 0xdf ^ 0x9756be70d6da53cd;
  _DAT_1833f18a8 = (_DAT_1833f18a8 * -0x5f3e661c84e495c9 ^ _DAT_1833f1808) + uVar1;
  _DAT_1833f1890 = _DAT_1833f18a8 ^ _DAT_1833f1808;
  _DAT_1833f18e0 = 0xdf;
  uVar1 = (~_DAT_1833f1740 + 0x100000000) *
          ((_DAT_1833f1710 ^ 0x7ddcdc18) + (ulonglong)((uint)_DAT_1833f1710 & 0x7ddcdc18) * 2);
  uVar1 = (uVar1 | _DAT_1833f1788) + (uVar1 & _DAT_1833f1788);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f1710 = func_0x00018f1f1360((uVar1 | 0x822323e7) + (ulonglong)((uint)uVar1 & 0x822323e7))
  ;
  _DAT_1833f1798 =
       (_DAT_1833f1798 ^ _DAT_1833f1710 * -0x7c29b73928960f81) + 0x60100c2 ^ 0xf1b939f97a390df6;
  _DAT_1833f1760 =
       (_DAT_1833f1760 * -0x3444f423cf91d271 ^ _DAT_1833f1798) +
       _DAT_1833f1710 * -0x7c29b73928960f81;
  _DAT_1833f1828 = _DAT_1833f1760 ^ _DAT_1833f1798;
  _DAT_1833f1790 = 0x60100c2;
  uVar1 = (_DAT_1833f18f0 ^ _DAT_182859f40) + _DAT_1833f18e0 + 0x7ddcdc18;
  uVar2 = (_DAT_1833f18e0 ^ _UNK_182859f48) + _DAT_1833f18f0 + 0x60100c2;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833f18f0 ^ _DAT_182859f40;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833f18e0 ^ _UNK_182859f48;
  _DAT_1833f17d8 =
       func_0x00018f1f1360((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833f18f0 + 0x60100c2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833f18e0 + 0x7ddcdc18));
  uVar1 = (ulonglong)(~(uint)_DAT_1833f17d8 & 0xf9feff3d);
  _DAT_1833f1830 = _DAT_1833f1830 ^ uVar1 ^ 0xd24243cca79305c1;
  _DAT_1833f1888 = (_DAT_1833f1888 * -0x1e3bfad55ac6fe75 ^ _DAT_1833f1830) + uVar1;
  _DAT_1833f1838 = _DAT_1833f1888 ^ _DAT_1833f1830;
  _DAT_1833f1730 = 0;
  uVar1 = ((_DAT_1833f17e8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1833f17e8 & 0x842223fa) * 2) *
          -_DAT_1833f1880;
  uVar1 = (uVar1 | _DAT_1833f18a0) + (uVar1 & _DAT_1833f18a0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833f1788 = func_0x00018f1f1360((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  uVar1 = (ulonglong)(~(uint)_DAT_1833f1788 & 0xdf);
  _DAT_1833f18e8 = _DAT_1833f1768 ^ uVar1 ^ 0xdf;
  _DAT_1833f17c8 = (_DAT_1833f17c8 ^ uVar1) + 0xdf ^ 0xad569dfe214f82dc;
  _DAT_1833f1850 = (_DAT_1833f1850 * 0x73fa364385a55a91 ^ _DAT_1833f17c8) + uVar1;
  _DAT_1833f1808 = _DAT_1833f1850 ^ _DAT_1833f17c8;
  _DAT_1833f1730 = 0xdf;
  _DAT_1833f18a8 = func_0x00018f1f1360(_DAT_1833f1838 + 0xffdf007be50021ff ^ 0x9a);
  uVar1 = _DAT_1833f1888 ^ _DAT_1833f18a8;
  _DAT_1833f1888 = uVar1 ^ 0x12223b125798aeda;
  _DAT_1833f1740 = (_DAT_1833f1740 * 0x43c146186052a4d3 ^ _DAT_1833f1888) + _DAT_1833f18a8;
  _DAT_1833f1720 = _DAT_1833f1740 ^ _DAT_1833f1888;
  _DAT_1833f1780 = 0;
  uVar1 = uVar1 ^ 0x12223b12d3ba8d20;
  uVar2 = uVar1 + _DAT_1833f1838 + 0x842223fa;
  uVar1 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar1;
  uVar2 = ((_DAT_1833f1838 + _DAT_1833f1888) * 0x2000 | _DAT_1833f1838 + _DAT_1833f1888 >> 0x33) ^
          _DAT_1833f1838;
  _DAT_1833f1810 =
       func_0x00018f1f1360((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1833f1888 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833f1838 + 0x842223fa));
  uVar1 = _DAT_1833f1810 ^ 0xdf;
  _DAT_1833f17e8 = _DAT_1833f1868 ^ uVar1 ^ 0xdf;
  uVar2 = (_DAT_1833f17f0 ^ uVar1) + 0xdf ^ 0xcfe7b8ba70283f4a;
  _DAT_1833f1728 = (_DAT_1833f1728 * 0x2654eb779a6d34af ^ uVar2) + uVar1;
  _DAT_1833f17f0 = _DAT_1833f1728 ^ uVar2;
  _DAT_1833f1800 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x70)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1dddff (image 18f1dddff) =====

void FUN_18f1dddff(void)

{
  return;
}



// ===== continuation @ rva f1c75cf (image 18f1c75cf) =====

undefined8 FUN_18f1c75cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva f1ddf52 (image 18f1ddf52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1ddf52(longlong param_1)

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



// ===== continuation @ rva f1cc610 (image 18f1cc610) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1cc610(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar4;
  uint uVar5;
  byte in_XMM0_Bf;
  uint uVar6;
  ulonglong uVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar12;
  undefined1 auVar11 [16];
  
  uVar3 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar7 = uVar3 + _DAT_1833f17b0;
  if (in_XMM1._4_4_ < 0) {
    uVar7 = _DAT_1833f18e0 ^ uVar3;
  }
  _DAT_1833f1860 = func_0x00018f1f1360(in_XMM0_Bf ^ uVar7);
  *(ulonglong *)(unaff_RBP + 0x30) = unaff_RSI;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = unaff_RSI;
  uVar6 = (uint)unaff_RSI;
  uVar12 = (uint)(unaff_RSI >> 0x20);
  uVar5 = uVar6 & (uint)DAT_18001a990;
  auVar1._8_4_ = uVar6;
  auVar1._0_8_ = unaff_RSI;
  auVar1._12_4_ = uVar12;
  auVar2._8_4_ = uVar6;
  auVar2._0_8_ = unaff_RSI;
  auVar2._12_4_ = uVar12;
  auVar8._8_4_ = 0xffffffff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar1 | _DAT_18001a990,0);
  uVar7 = SUB168(auVar1 | _DAT_18001a990,0);
  uVar9 = SUB164(_DAT_18001a990 ^ auVar2,0);
  uVar3 = SUB168(_DAT_18001a990 ^ auVar2,0);
  uVar6 = SUB164(auVar8 ^ auVar11,0);
  uVar4 = (ulonglong)uVar6 * (ulonglong)_DAT_18285a960 +
          ((ulonglong)_DAT_18285a9b0 * (ulonglong)uVar6 +
           (SUB168(auVar8 ^ auVar11,0) >> 0x20) * (ulonglong)_DAT_18285a960 << 0x20) +
          (ulonglong)_DAT_18285a990 * (ulonglong)uVar9 +
          ((ulonglong)_DAT_18285a9a0 * (ulonglong)uVar9 +
           (uVar3 >> 0x20) * (ulonglong)_DAT_18285a990 << 0x20) +
          (ulonglong)_DAT_18285a970 * (ulonglong)uVar10 +
          ((ulonglong)_DAT_18285a980 * (ulonglong)uVar10 +
           (uVar7 >> 0x20) * (ulonglong)_DAT_18285a970 << 0x20) +
          ((ulonglong)_DAT_18285a950 * (ulonglong)uVar5 << 0x20 |
          (ulonglong)_DAT_18285a940 * (ulonglong)uVar5) +
          ((ulonglong)_DAT_18285a930 * (unaff_RSI & 0xffffffff) +
           (ulonglong)_DAT_18285a920 * (ulonglong)uVar12 << 0x20) +
          (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_18285a920 +
          (-((ulonglong)uVar9 * (ulonglong)_DAT_18285aa40 +
            ((ulonglong)_DAT_18285aa50 * (ulonglong)uVar9 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_18285aa40 << 0x20)) -
          ((ulonglong)uVar10 * (ulonglong)_DAT_18285aa20 +
           ((ulonglong)_DAT_18285aa30 * (ulonglong)uVar10 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_18285aa20 << 0x20) +
          ((ulonglong)uVar5 * (ulonglong)_DAT_18285aa10 << 0x20 |
          (ulonglong)_DAT_18285aa00 * (ulonglong)uVar5) +
          ((ulonglong)_DAT_18285a9f0 * (unaff_RSI & 0xffffffff) +
           (ulonglong)_DAT_18285a9e0 * (ulonglong)uVar12 << 0x20) +
          (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_18285a9e0)) + 0xd1d4e3c219ea13cb;
  _DAT_1833f18d0 = _DAT_1833f1748 ^ _DAT_1833f1860 ^ uVar4;
  _DAT_1833f17a8 = (_DAT_1833f17a8 ^ _DAT_1833f1860) + uVar4 ^ 0x316d62a3c5ded84c;
  _DAT_1833f1778 = (_DAT_1833f1778 * 0xf5cdab03c2e0b2b ^ _DAT_1833f17a8) + _DAT_1833f1860;
  _DAT_1833f17d8 = _DAT_1833f1778 ^ _DAT_1833f17a8;
  uVar7 = (_DAT_1833f1710 ^ _DAT_18285aa60) + _DAT_1833f18f0 + 0x6bd32156a952fc86;
  uVar3 = (_DAT_1833f18f0 ^ _UNK_18285aa68) + _DAT_1833f1710 + 0x1b4ad7ad02dfa0ae;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833f1710 ^ _DAT_18285aa60;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f18f0 ^ _UNK_18285aa68;
  _DAT_1833f18e0 = uVar4;
  _DAT_1833f17b0 =
       func_0x00018f1f1360((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833f1710 + 0x1b4ad7ad02dfa0ae) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833f18f0 + 0x6bd32156a952fc86));
  uVar7 = ((_DAT_1833f17b0 ^ 0x7bdbe0000fffffaf) & 0x1fffffff) << 0x13 |
          (_DAT_1833f17b0 ^ 0x7bdbe0000fffffaf) >> 0x2d;
  _DAT_1833f17d0 = (_DAT_1833f17d0 ^ uVar7) + 0x7bdbf7ff2fffffaf ^ 0xbe2a24deed6aa797;
  _DAT_1833f17a8 = (_DAT_1833f17a8 * 0x115b0d3007756b05 ^ _DAT_1833f17d0) + uVar7;
  _DAT_1833f1790 = _DAT_1833f17a8 ^ _DAT_1833f17d0;
  _DAT_1833f17e0 = 0x7bdbf7ff2fffffaf;
  uVar7 = (_DAT_1833f1728 ^ _DAT_18285aa70) + _DAT_1833f1798 + 0x9b275e60123df457;
  uVar3 = (_DAT_1833f1798 ^ _UNK_18285aa78) + _DAT_1833f1728 + 0x1cfea0cadf48db1c;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833f1728 ^ _DAT_18285aa70;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f1798 ^ _UNK_18285aa78;
  uVar7 = func_0x00018f1f1360((uVar3 << 0x1d | uVar3 >> 0x23) -
                              (_DAT_1833f1728 + 0x1cfea0cadf48db1c) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) -
                              (_DAT_1833f1798 + 0x9b275e60123df457));
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) << 0x18 | (uVar7 & 0x7ffffffffffff) >> 0x1b;
  _DAT_1833f17f8 = (_DAT_1833f17f8 ^ uVar7) + 0x87d9feaa49570c6e ^ 0xee9b38ef4782c03a;
  _DAT_1833f1748 = (_DAT_1833f1748 * 0x6d6c886979b24063 ^ _DAT_1833f17f8) + uVar7;
  _DAT_1833f1730 = _DAT_1833f1748 ^ _DAT_1833f17f8;
  _DAT_1833f18e8 = 0x87d9feaa49570c6e;
  uVar7 = (~_DAT_1833f1860 + 0xfc73ddf173497b1d) *
          ((_DAT_1833f18e0 ^ 0x84222cda) + (ulonglong)((uint)_DAT_1833f18e0 & 0x84222cda) * 2);
  uVar7 = (uVar7 | _DAT_1833f1740) + (uVar7 & _DAT_1833f1740);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833f18b8 = func_0x00018f1f1360((uVar7 | 0xfc73ddf1f76b57c6) + (uVar7 & 0xfc73ddf1f76b57c6));
  uVar7 = _DAT_1833f18b8 << 0x30 | _DAT_1833f18b8 >> 0x10;
  _DAT_1833f1748 = _DAT_1833f1870 ^ uVar7 ^ 0xfc73ddf173498b1b;
  _DAT_1833f18f0 = (_DAT_1833f18f0 ^ uVar7) + 0xfc73ddf173498b1b ^ 0x23219e91d4267490;
  _DAT_1833f17e8 = (_DAT_1833f17e8 * 0x5f22a6eeedea3401 ^ _DAT_1833f18f0) + uVar7;
  _DAT_1833f1848 = _DAT_1833f17e8 ^ _DAT_1833f18f0;
  _DAT_1833f17b0 = 0xfc73ddf173498b1b;
  _DAT_1833f1878 = func_0x00018f1f1360(_DAT_1833f17b8 + 0x131360fbca672ae0 ^ 0xb3);
  _DAT_1833f1708 = _DAT_1833f17b0 ^ _DAT_1833f1878 ^ 0xfff;
  _DAT_1833f1898 = (_DAT_1833f1898 ^ _DAT_1833f1878) + 0xfff ^ 0xccaaf8e47e5af246;
  _DAT_1833f1728 = (_DAT_1833f1728 * -0x1cc8ca6eb97bfccf ^ _DAT_1833f1898) + _DAT_1833f1878;
  _DAT_1833f18d8 = _DAT_1833f1728 ^ _DAT_1833f1898;
  _DAT_1833f17f0 = 0xfff;
  uVar7 = (_DAT_1833f1838 ^ _DAT_18285aa80) + _DAT_1833f1858 + 0x21938772bae7791a;
  uVar3 = (_DAT_1833f1858 ^ _UNK_18285aa88) + _DAT_1833f1838 + 0xde6c788dc13ab5c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833f1838 ^ _DAT_18285aa80;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f1858 ^ _UNK_18285aa88;
  _DAT_1833f1770 =
       func_0x00018f1f1360((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833f1838 + 0xde6c788dc13ab5c0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833f1858 + 0x21938772bae7791a));
  _DAT_1833f17a8 = _DAT_1833f1858 ^ _DAT_1833f1770 ^ 0xfff;
  _DAT_1833f1780 = (_DAT_1833f1780 ^ _DAT_1833f1770) + 0xfff ^ 0xc42da170ccf995bf;
  _DAT_1833f1800 = (_DAT_1833f1800 * -0x27e4358ddb448e33 ^ _DAT_1833f1780) + _DAT_1833f1770;
  _DAT_1833f1870 = _DAT_1833f1800 ^ _DAT_1833f1780;
  _DAT_1833f1730 = 0xfff;
  uVar7 = (_DAT_1833f1750 ^ _DAT_18285aa90) + _DAT_1833f1770 + unaff_RDI;
  uVar3 = (_DAT_1833f1770 ^ _UNK_18285aa98) + _DAT_1833f1750 + 0x3fbb724b97a719f2;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833f1750 ^ _DAT_18285aa90;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f1770 ^ _UNK_18285aa98;
  _DAT_1833f1818 =
       func_0x00018f1f1360((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833f1750 + 0x3fbb724b97a719f2) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833f1770 + unaff_RDI));
  _DAT_1833f1840 =
       (_DAT_1833f1840 ^ _DAT_1833f1818 * -0x6c5f46b7eef08ff) + 0xc0448db46858e60e ^
       0x1b5d6bd8828d53de;
  _DAT_1833f1748 =
       (_DAT_1833f1748 * 0x332b689c0061891 ^ _DAT_1833f1840) + _DAT_1833f1818 * -0x6c5f46b7eef08ff;
  _DAT_1833f18d0 = _DAT_1833f1748 ^ _DAT_1833f1840;
  _DAT_1833f17b8 = 0xc0448db46858e60e;
  _DAT_1833f1810 = func_0x00018f1f1360(_DAT_1833f1728 ^ 0x470d5911178d7a50);
  uVar7 = (_DAT_1833f1810 & 0x1fffffffffff) << 2 | _DAT_1833f1810 >> 0x3e;
  _DAT_1833f18b0 = _DAT_1833f1830 ^ uVar7 ^ 0x3fbb724b97a729f1;
  _DAT_1833f18c0 = (_DAT_1833f18c0 ^ uVar7) + 0x3fbb724b97a729f1 ^ 0xf2fe7bdeec549b35;
  _DAT_1833f1748 = 0x3fbb724b97a729f1;
  uVar7 = (_DAT_1833f18f0 ^ _DAT_18285aaa0) + _DAT_1833f1828 + 0x3fbb724b13850ad4;
  uVar3 = (_DAT_1833f1828 ^ _UNK_18285aaa8) + _DAT_1833f18f0 + 0xc0448db46858e60e;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833f18f0 ^ _DAT_18285aaa0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f1828 ^ _UNK_18285aaa8;
  _DAT_1833f1838 =
       func_0x00018f1f1360((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833f18f0 + 0xc0448db46858e60e) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833f1828 + 0x3fbb724b13850ad4));
  uVar7 = (_DAT_1833f1838 ^ 0x1ffffefff) & 0x1ffffffff;
  _DAT_1833f1868 = _DAT_1833f1870 ^ uVar7 ^ 0xfff;
  _DAT_1833f1750 = (_DAT_1833f1750 ^ uVar7) + 0xfff ^ 0x2033b4447cbd385b;
  _DAT_1833f1738 = (_DAT_1833f1738 * -0x49dba6528bc58961 ^ _DAT_1833f1750) + uVar7;
  _DAT_1833f1830 = _DAT_1833f1738 ^ _DAT_1833f1750;
  _DAT_1833f1720 = 0xfff;
  _DAT_1833f1798 = func_0x00018f1f1360(_DAT_1833f1770 ^ 0x542ffddedc077673);
  uVar7 = _DAT_1833f1798 << 0x2c | _DAT_1833f1798 >> 0x14;
  _DAT_1833f1860 = _DAT_1833f1878 ^ uVar7 ^ 0x3b5f6a979570c1d;
  _DAT_1833f1770 = (_DAT_1833f1880 ^ uVar7) + 0x3b5f6a979570c1d ^ 0x54883a4e428b03e6;
  _DAT_1833f1880 = (_DAT_1833f1880 * -0x108cdd9908de0113 ^ _DAT_1833f1770) + uVar7;
  _DAT_1833f1770 = _DAT_1833f1880 ^ _DAT_1833f1770;
  _DAT_1833f17b0 = 0x3b5f6a979570c1d;
  _DAT_1833f17a0 = func_0x00018f1f1360(_DAT_1833f1770 ^ 0x4a5001e15c068ae5);
  _DAT_1833f1870 = (_DAT_1833f1870 ^ _DAT_1833f18b0) + 0xfc02095566a8f3c1 ^ 0x94e447dd77f7ad82;
  _DAT_1833f1898 = (_DAT_1833f1898 * -0x5a82e92641d42ff1 ^ _DAT_1833f1870) + _DAT_1833f18b0;
  _DAT_1833f1800 = _DAT_1833f1898 ^ _DAT_1833f1870;
  _DAT_1833f1790 = 0xfc02095566a8f3c1;
  uVar7 = (~_DAT_1833f1878 + 0x87d9feaa49570c6f) *
          ((_DAT_1833f1890 ^ 0x7bdbf7ffabdddc8a) + (_DAT_1833f1890 & 0x7bdbf7ffabdddc8a) * 2);
  uVar7 = (uVar7 | _DAT_1833f18e8) + (uVar7 & _DAT_1833f18e8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833f18c8 = func_0x00018f1f1360((uVar7 | 0xfc020955e28ad0e4) + (uVar7 & 0xfc020955e28ad0e4));
  _DAT_1833f1878 =
       (_DAT_1833f1878 ^ _DAT_1833f18c8 ^ 0x8400080040000040) + 0x3d9f6aa09570c2e ^
       0xe62815e972f77f8b;
  _DAT_1833f1868 =
       (_DAT_1833f1868 * 0xeb2051445a355cf ^ _DAT_1833f1878) + (_DAT_1833f18c8 ^ 0x8400080040000040)
  ;
  _DAT_1833f1770 = _DAT_1833f1868 ^ _DAT_1833f1878;
  _DAT_1833f1740 = 0x3d9f6aa09570c2e;
  uVar7 = (_DAT_1833f17a0 ^ _DAT_18285aab0) + _DAT_1833f1860 + 0xfc020955e28ad0e4;
  uVar3 = (_DAT_1833f1860 ^ _UNK_18285aab8) + _DAT_1833f17a0 + 0x7b3ed5412ae185c;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833f17a0 ^ _DAT_18285aab0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833f1860 ^ _UNK_18285aab8;
  uVar7 = func_0x00018f1f1360((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833f17a0 + 0x7b3ed5412ae185c)
                              ^ (uVar7 << 0x1d | uVar7 >> 0x23) -
                                (_DAT_1833f1860 + 0xfc020955e28ad0e4));
  uVar3 = ~uVar7 & 0xfc02095566a8f3c1;
  uVar7 = uVar3 - (~uVar7 >> 1 & 0x5401040011545140);
  uVar7 = (uVar7 & 0x3333333333333301) + (uVar7 >> 2 & 0x3333333333333330);
  uVar3 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f07) * 0x101010101010101 >> 0x38 ^ uVar3;
  _DAT_1833f1718 = _DAT_1833f1790 ^ uVar3 ^ 0x3b5f6a979570c1d;
  _DAT_1833f1770 = (_DAT_1833f1770 ^ uVar3) + 0x3b5f6a979570c1d ^ 0x264b28202d0cb6ab;
  _DAT_1833f17d0 = (_DAT_1833f17d0 * 0x372f6684ef3ffe73 ^ _DAT_1833f1770) + uVar3;
  _DAT_1833f1780 = _DAT_1833f17d0 ^ _DAT_1833f1770;
  _DAT_1833f17c0 = 0x3b5f6a979570c1d;
  uVar7 = (~_DAT_1833f17b8 + 0x3b5f6a979570c1e) *
          ((_DAT_1833f1830 ^ 0x3b5f6a9fd752f38) + (_DAT_1833f1830 & 0x3b5f6a9fd752f38) * 2);
  uVar7 = (uVar7 | _DAT_1833f17d0) + (uVar7 & _DAT_1833f17d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833f18b8 = func_0x00018f1f1360((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_1833f17e0 =
       ((_DAT_1833f18b8 << 0x2f | _DAT_1833f18b8 >> 0x11) ^ 0x3b5f6a979570c1d) & 0x7fffffffffffffff;
  _DAT_1833f1810 = _DAT_1833f1810 ^ _DAT_1833f17e0 ^ 0x361fea37dc818c32;
  _DAT_1833f1788 = (_DAT_1833f1788 * -0x371262e390b88ae1 ^ _DAT_1833f1810) + _DAT_1833f17e0;
  _DAT_1833f17f0 = _DAT_1833f1788 ^ _DAT_1833f1810;
  _DAT_1833f1848 = 0;
  uVar7 = (_DAT_1833f18f8 ^ 0x84222cda) + _DAT_1833f1718 + 0x84222cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833f18f8 ^ 0x84222cda;
  uVar3 = ((_DAT_1833f1718 + _DAT_1833f18f8) * 0x2000 | _DAT_1833f1718 + _DAT_1833f18f8 >> 0x33) ^
          _DAT_1833f1718;
  _DAT_1833f18d8 =
       func_0x00018f1f1360((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1833f18f8 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833f1718 + 0x84222cda));
  uVar5 = ~(uint)_DAT_1833f18d8 & 0xfff;
  uVar7 = (ulonglong)uVar5 - (ulonglong)(~(uint)_DAT_1833f18d8 >> 1 & 0x555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (ulonglong)
          ((uint)((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2) ^
          uVar5) * -0x661b67ebfef58e6d;
  _DAT_1833f1788 = (_DAT_1833f1860 ^ uVar7 ^ 0xfff ^ uVar7) + 0xfff ^ 0xcea92afa1e2d1574;
  _DAT_1833f1868 = (_DAT_1833f1868 * 0x289f666d12a7d891 ^ _DAT_1833f1788) + uVar7;
  _DAT_1833f18f0 = 0xfff;
  uVar7 = ~_DAT_1833f18c0 *
          ((_DAT_1833f17a8 ^ 0x7bdbf7ffabdddc8a) + (_DAT_1833f17a8 & 0x7bdbf7ffabdddc8a) * 2);
  uVar7 = (uVar7 | _DAT_1833f1720) + (uVar7 & _DAT_1833f1720);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833f1738 = func_0x00018f1f1360((uVar7 | 0x8424080054222375) + (uVar7 & 0x8424080054222375));
  _DAT_1833f17b8 =
       (_DAT_1833f17b8 ^ _DAT_1833f1738 ^ 0xfffffffffffffffe) + 0x84240800d0000050 ^
       0xc595d2e12f95dc56;
  _DAT_1833f17b0 =
       (_DAT_1833f17b0 * 0x55dfe3b27b5d1267 ^ _DAT_1833f17b8) +
       (_DAT_1833f1738 ^ 0xfffffffffffffffe);
  _DAT_1833f1858 = _DAT_1833f17b0 ^ _DAT_1833f17b8;
  _DAT_1833f1798 = 0x84240800d0000050;
  _DAT_1833f1728 = func_0x00018f1f1360(_DAT_1833f1810 + 0x6c36306a9b3a28e ^ 0x59);
  _DAT_1833f1850 = _DAT_1833f1850 ^ _DAT_1833f1728 ^ 0x84240800d0000050 ^ 0x5e5031a1c197f28e;
  _DAT_1833f1710 =
       (_DAT_1833f1710 * -0x1969aa5115c0b41d ^ _DAT_1833f1850) +
       (_DAT_1833f1728 ^ 0x84240800d0000050);
  _DAT_1833f1718 = _DAT_1833f1710 ^ _DAT_1833f1850;
  _DAT_1833f1740 = 0;
  _DAT_1833f18b0 = func_0x00018f1f1360(_DAT_1833f1738 ^ 0xffd40083a5ffe166);
  uVar7 = _DAT_1833f18b0 << 0x1a | _DAT_1833f18b0 >> 0x26;
  _DAT_1833f1808 = _DAT_1833f18d0 ^ uVar7 ^ 0xfff;
  _DAT_1833f18a0 = (_DAT_1833f18a0 ^ uVar7) + 0xfff ^ 0x9360ec7248bda7c9;
  _DAT_1833f1730 = (_DAT_1833f1730 * 0x620f09df61025907 ^ _DAT_1833f18a0) + uVar7;
  _DAT_1833f1800 = _DAT_1833f1730 ^ _DAT_1833f18a0;
  _DAT_1833f17d0 = 0xfff;
  uVar7 = (~_DAT_1833f1880 + 0x6bd321562d70dfa4) *
          ((_DAT_1833f1830 ^ 0x6bd32156a952fc86) + (_DAT_1833f1830 & 0x6bd32156a952fc86) * 2);
  uVar7 = (uVar7 | _DAT_1833f17f8) + (uVar7 & _DAT_1833f17f8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833f1800 = func_0x00018f1f1360((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_1833f17c8 = _DAT_1833f17c8 ^ _DAT_1833f1800 ^ 0xf13756ac6bf3e2e2;
  _DAT_1833f17b0 = (_DAT_1833f17b0 * -0x2368687c6deff167 ^ _DAT_1833f17c8) + _DAT_1833f1800;
  _DAT_1833f18d0 = _DAT_1833f17b0 ^ _DAT_1833f17c8;
  _DAT_1833f18f8 = 0;
  _DAT_1833f1850 = func_0x00018f1f1360(_DAT_1833f17f8 ^ 0x2c007ba6002188);
  uVar7 = _DAT_1833f1850 & 0xffffffff80000000;
  _DAT_1833f18a0 = _DAT_1833f1780 ^ uVar7 ^ 0xfff;
  _DAT_1833f17d8 = (_DAT_1833f17d8 ^ uVar7) + 0xfff ^ 0x1186df809b7a5690;
  _DAT_1833f17f8 = (_DAT_1833f17f8 * 0x62c5682df6bede7d ^ _DAT_1833f17d8) + uVar7;
  _DAT_1833f18b8 = _DAT_1833f17f8 ^ _DAT_1833f17d8;
  _DAT_1833f1738 = 0xfff;
  switch(0xfff < uVar4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1ddc43 (image 18f1ddc43) =====

undefined8 thunk_FUN_18f1c75cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva f1f3a02 (image 18f1f3a02) =====

void FUN_18f1f3a02(void)

{
  return;
}



// ===== continuation @ rva f1f3859 (image 18f1f3859) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f3859(void)

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



// ===== continuation @ rva f1f6e44 (image 18f1f6e44) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f6e44(void)

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



// ===== continuation @ rva f1f5858 (image 18f1f5858) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f5858(void)

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



// ===== continuation @ rva f1f7582 (image 18f1f7582) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f7582(void)

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



// ===== continuation @ rva f1f8007 (image 18f1f8007) =====

void FUN_18f1f8007(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x568))();
  return;
}



// ===== continuation @ rva f1f7fbb (image 18f1f7fbb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f7fbb(void)

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



// ===== continuation @ rva f1f5bb0 (image 18f1f5bb0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f5bb0(void)

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



// ===== continuation @ rva f1f597b (image 18f1f597b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f597b(void)

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



// ===== continuation @ rva f1f55ad (image 18f1f55ad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f55ad(void)

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



// ===== continuation @ rva f1f5391 (image 18f1f5391) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f5391(void)

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



// ===== continuation @ rva f1f66ca (image 18f1f66ca) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f66ca(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1f668e (image 18f1f668e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f668e(void)

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



// ===== continuation @ rva f1f82b3 (image 18f1f82b3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f82b3(void)

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



// ===== continuation @ rva f1f825f (image 18f1f825f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f825f(void)

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



// ===== continuation @ rva f1f9018 (image 18f1f9018) =====

void FUN_18f1f9018(void)

{
  return;
}



// ===== continuation @ rva f1f89e2 (image 18f1f89e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f89e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182860ac8)();
  return;
}



// ===== continuation @ rva f1f87c0 (image 18f1f87c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f87c0(void)

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



// ===== continuation @ rva f1f876c (image 18f1f876c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f876c(void)

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



// ===== continuation @ rva f1f8fe3 (image 18f1f8fe3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f8fe3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182860eb8)();
  return;
}



// ===== continuation @ rva f1f896a (image 18f1f896a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f896a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1f9026 (image 18f1f9026) =====

void FUN_18f1f9026(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1f8efc (image 18f1f8efc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f8efc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1f84b7 (image 18f1f84b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f84b7(void)

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



// ===== continuation @ rva f1f8425 (image 18f1f8425) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f8425(void)

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



// ===== continuation @ rva f1f83d1 (image 18f1f83d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f83d1(void)

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



// ===== continuation @ rva f1f8298 (image 18f1f8298) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f8298(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182860e38)();
  return;
}



// ===== continuation @ rva f1fba6d (image 18f1fba6d) =====

void FUN_18f1fba6d(void)

{
  return;
}



// ===== continuation @ rva f1f9190 (image 18f1f9190) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f9190(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182861c68)();
  return;
}



// ===== continuation @ rva f1fba81 (image 18f1fba81) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1fba81(void)

{
  (*_DAT_182861d58)();
  return;
}



// ===== continuation @ rva f1fba41 (image 18f1fba41) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1fba41(void)

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



// ===== continuation @ rva f1fb967 (image 18f1fb967) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1fb967(void)

{
  (*_DAT_182861c78)();
  return;
}



// ===== continuation @ rva f1fa804 (image 18f1fa804) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1fa804(void)

{
  (*_DAT_182861a58)();
  return;
}



// ===== continuation @ rva f1fa8db (image 18f1fa8db) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1fa8db(void)

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



// ===== continuation @ rva f1fa59d (image 18f1fa59d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1fa59d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182861c58)();
  return;
}



// ===== continuation @ rva f1f9dfb (image 18f1f9dfb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f9dfb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1828610f8)();
  return;
}



// ===== continuation @ rva f1f9798 (image 18f1f9798) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f9798(void)

{
  undefined8 uStack0000000000000060;
  undefined8 in_stack_000000d0;
  
  uStack0000000000000060 = in_stack_000000d0;
  FUN_190ddfc90();
  (*_DAT_1828616a8)();
  return;
}



// ===== continuation @ rva f1fba12 (image 18f1fba12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1fba12(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182860f58)();
  return;
}



// ===== continuation @ rva f1f984b (image 18f1f984b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1f984b(void)

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



// ===== continuation @ rva f1fe5bf (image 18f1fe5bf) =====

void FUN_18f1fe5bf(void)

{
  return;
}



// ===== continuation @ rva f1fe41e (image 18f1fe41e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1fe41e(void)

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



// ===== continuation @ rva f206f4d (image 18f206f4d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f206f4d(void)

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



// ===== continuation @ rva f206f07 (image 18f206f07) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f206f07(void)

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



// ===== continuation @ rva f200dbe (image 18f200dbe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f200dbe(void)

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



// ===== continuation @ rva f20706c (image 18f20706c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f20706c(void)

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



// ===== continuation @ rva f20294c (image 18f20294c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18f203097(void)

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



// ===== continuation @ rva f2072f7 (image 18f2072f7) =====

void FUN_18f2072f7(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva f1fe930 (image 18f1fe930) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1fe930(void)

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



// ===== continuation @ rva f2046a8 (image 18f2046a8) =====

undefined8 thunk_FUN_18f1ff5ce(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva f2075d2 (image 18f2075d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2075d2(void)

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



// ===== continuation @ rva f20757e (image 18f20757e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f20757e(void)

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



// ===== continuation @ rva f208411 (image 18f208411) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f208411(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828640c8)();
  return;
}



// ===== continuation @ rva f2083bd (image 18f2083bd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2083bd(void)

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



// ===== continuation @ rva f208445 (image 18f208445) =====

void FUN_18f208445(void)

{
  return;
}



// ===== continuation @ rva f207980 (image 18f207980) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f207980(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_182863f98)();
  return;
}



// ===== continuation @ rva f207b45 (image 18f207b45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f207b45(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = in_stack_00000040;
  FUN_190dd72e0();
  (*_DAT_182863fc8)();
  return;
}



// ===== continuation @ rva f2083f6 (image 18f2083f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2083f6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182864278)();
  return;
}



// ===== continuation @ rva f207d3c (image 18f207d3c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f207d3c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de6ea0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f208454 (image 18f208454) =====

void FUN_18f208454(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f20837e (image 18f20837e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f20837e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f207ebd (image 18f207ebd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f207ebd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_1828643b8)();
  return;
}



// ===== continuation @ rva f20a566 (image 18f20a566) =====

void FUN_18f20a566(void)

{
  return;
}



// ===== continuation @ rva f2085cc (image 18f2085cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2085cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182864a08)();
  return;
}



// ===== continuation @ rva f20b10a (image 18f20b10a) =====

void FUN_18f20b10a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f20a870 (image 18f20a870) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f20a870(void)

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



// ===== continuation @ rva f209ab1 (image 18f209ab1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f209ab1(void)

{
  FUN_190dd72e0();
  (*_DAT_1828648a8)();
  return;
}



// ===== continuation @ rva f209821 (image 18f209821) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f209821(void)

{
  longlong *unaff_RSI;
  longlong in_stack_00000060;
  
  (**(code **)(*unaff_RSI + 0x518))();
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f20a70b (image 18f20a70b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f20a70b(void)

{
  (*_DAT_1828653b8)();
  return;
}



// ===== continuation @ rva f20a05a (image 18f20a05a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f20a05a(void)

{
  FUN_190ddfc90();
  (*_DAT_182864d08)();
  return;
}



// ===== continuation @ rva f20a7e0 (image 18f20a7e0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f20a7e0(void)

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



// ===== continuation @ rva f2098b9 (image 18f2098b9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2098b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_182864dc8)();
  return;
}



// ===== continuation @ rva f20985b (image 18f20985b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f20985b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182864ef8)();
  return;
}



// ===== continuation @ rva f1944e6 (image 18f1944e6) =====

void FUN_18f1944e6(void)

{
  return;
}



// ===== continuation @ rva f190ffe (image 18f190ffe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f190ffe(void)

{
  FUN_190ddce00();
  (*_DAT_18284a5e8)();
  return;
}



// ===== continuation @ rva f1ab27a (image 18f1ab27a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1ab27a(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x78))(in_stack_00000050);
  FUN_190dd72e0(in_stack_00000050,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182847988)();
  return;
}



// ===== continuation @ rva f1a967b (image 18f1a967b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1a967b(void)

{
  undefined8 in_stack_00000048;
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x70))(in_stack_00000050,in_stack_00000048,&UNK_182f702a8);
  (*_DAT_18284f9d8)();
  return;
}



// ===== continuation @ rva f1af813 (image 18f1af813) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1af813(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x68))();
  (*_DAT_18284fa98)();
  return;
}



// ===== continuation @ rva f1a0541 (image 18f1a0541) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1a0541(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1ae8d2 (image 18f1ae8d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1ae8d2(void)

{
  (*_DAT_18284fa28)();
  return;
}



// ===== continuation @ rva f1ada32 (image 18f1ada32) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f1ada5d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f1ada32(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x100))(in_stack_00000050);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f19f42d (image 18f19f42d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f19f42d(void)

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



// ===== continuation @ rva f19509a (image 18f19509a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f19509a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1ab3b0 (image 18f1ab3b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1ab3b0(void)

{
  (*_DAT_18284cce8)();
  return;
}



// ===== continuation @ rva f199f39 (image 18f199f39) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f199f39(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_18284d428)();
  return;
}



// ===== continuation @ rva f243ee6 (image 18f243ee6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f243ee6(void)

{
  FUN_190dd72e0();
  (*_DAT_1828713f8)();
  return;
}



// ===== continuation @ rva f243e73 (image 18f243e73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f243e73(void)

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



// ===== continuation @ rva f243fc6 (image 18f243fc6) =====

void FUN_18f243fc6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f243ed1 (image 18f243ed1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f243ed1(void)

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



// ===== continuation @ rva f243fbe (image 18f243fbe) =====

void FUN_18f243fbe(void)

{
  return;
}



// ===== continuation @ rva f243eac (image 18f243eac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f243eac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828713d8)();
  return;
}



// ===== continuation @ rva f243f0e (image 18f243f0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f243f0e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f243f86 (image 18f243f86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f243f86(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182871448)();
  return;
}



// ===== continuation @ rva f243f2f (image 18f243f2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f243f2f(void)

{
  FUN_190dd9df0();
  (*_DAT_182871458)();
  return;
}



// ===== continuation @ rva f2440e6 (image 18f2440e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2440e6(void)

{
  FUN_190dd72e0();
  (*_DAT_182871528)();
  return;
}



// ===== continuation @ rva f244073 (image 18f244073) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f244073(void)

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



// ===== continuation @ rva f2441c6 (image 18f2441c6) =====

void FUN_18f2441c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f2440d1 (image 18f2440d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2440d1(void)

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



// ===== continuation @ rva f2441be (image 18f2441be) =====

void FUN_18f2441be(void)

{
  return;
}



// ===== continuation @ rva f244186 (image 18f244186) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f244186(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182871508)();
  return;
}



// ===== continuation @ rva f24412f (image 18f24412f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f24412f(void)

{
  FUN_190dd9df0();
  (*_DAT_1828714e8)();
  return;
}



// ===== continuation @ rva f244162 (image 18f244162) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f244162(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f2440ac (image 18f2440ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2440ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828714b8)();
  return;
}



// ===== continuation @ rva f2441ad (image 18f2441ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2441ad(void)

{
  (*_DAT_182871518)();
  return;
}



// ===== continuation @ rva f2442e6 (image 18f2442e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2442e6(void)

{
  FUN_190dd72e0();
  (*_DAT_1828715f8)();
  return;
}



// ===== continuation @ rva f244273 (image 18f244273) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f244273(void)

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



// ===== continuation @ rva f2443c6 (image 18f2443c6) =====

void FUN_18f2443c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f2443ad (image 18f2443ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2443ad(void)

{
  (*_DAT_182871618)();
  return;
}



// ===== continuation @ rva f2443be (image 18f2443be) =====

void FUN_18f2443be(void)

{
  return;
}



// ===== continuation @ rva f2442ac (image 18f2442ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2442ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828715c8)();
  return;
}



// ===== continuation @ rva f2442d1 (image 18f2442d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2442d1(void)

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



// ===== continuation @ rva f24432f (image 18f24432f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f24432f(void)

{
  FUN_190dd9df0();
  (*_DAT_182871608)();
  return;
}



// ===== continuation @ rva f244386 (image 18f244386) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f244386(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182871598)();
  return;
}



// ===== continuation @ rva f24430e (image 18f24430e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f24430e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f2444e6 (image 18f2444e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2444e6(void)

{
  FUN_190dd72e0();
  (*_DAT_182871688)();
  return;
}



// ===== continuation @ rva f244473 (image 18f244473) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f244473(void)

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



// ===== continuation @ rva f2445c6 (image 18f2445c6) =====

void FUN_18f2445c6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f2445be (image 18f2445be) =====

void FUN_18f2445be(void)

{
  return;
}



// ===== continuation @ rva f24450e (image 18f24450e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f24450e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f244586 (image 18f244586) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f244586(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828716f8)();
  return;
}



// ===== continuation @ rva f244562 (image 18f244562) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f244562(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f24452f (image 18f24452f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f24452f(void)

{
  FUN_190dd9df0();
  (*_DAT_1828716a8)();
  return;
}



// ===== continuation @ rva f2444ac (image 18f2444ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2444ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1828716d8)();
  return;
}



// ===== continuation @ rva f2444d1 (image 18f2444d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2444d1(void)

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



// ===== continuation @ rva f1afa76 (image 18f1afa76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afa76(void)

{
  FUN_190dd72e0();
  (*_DAT_182851b48)();
  return;
}



// ===== continuation @ rva f1afa03 (image 18f1afa03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afa03(void)

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



// ===== continuation @ rva f1afb56 (image 18f1afb56) =====

void FUN_18f1afb56(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1afaf2 (image 18f1afaf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afaf2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1afb3d (image 18f1afb3d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afb3d(void)

{
  (*_DAT_182851b38)();
  return;
}



// ===== continuation @ rva f1afb4e (image 18f1afb4e) =====

void FUN_18f1afb4e(void)

{
  return;
}



// ===== continuation @ rva f1afb16 (image 18f1afb16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afb16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182851b08)();
  return;
}



// ===== continuation @ rva f1afa61 (image 18f1afa61) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afa61(void)

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



// ===== continuation @ rva f1afa9e (image 18f1afa9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afa9e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1afa3c (image 18f1afa3c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afa3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182851b28)();
  return;
}



// ===== continuation @ rva f1afc76 (image 18f1afc76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afc76(void)

{
  FUN_190dd72e0();
  (*_DAT_182851bd8)();
  return;
}



// ===== continuation @ rva f1afc03 (image 18f1afc03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afc03(void)

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



// ===== continuation @ rva f1afd56 (image 18f1afd56) =====

void FUN_18f1afd56(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1afc9e (image 18f1afc9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afc9e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1afd3d (image 18f1afd3d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afd3d(void)

{
  (*_DAT_182851c08)();
  return;
}



// ===== continuation @ rva f1afc61 (image 18f1afc61) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afc61(void)

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



// ===== continuation @ rva f1afd4e (image 18f1afd4e) =====

void FUN_18f1afd4e(void)

{
  return;
}



// ===== continuation @ rva f1afd16 (image 18f1afd16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afd16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182851be8)();
  return;
}



// ===== continuation @ rva f1afcf2 (image 18f1afcf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afcf2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1afe76 (image 18f1afe76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afe76(void)

{
  FUN_190dd72e0();
  (*_DAT_182851d18)();
  return;
}



// ===== continuation @ rva f1afe03 (image 18f1afe03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afe03(void)

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



// ===== continuation @ rva f1aff54 (image 18f1aff54) =====

void FUN_18f1aff54(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1afe61 (image 18f1afe61) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afe61(void)

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



// ===== continuation @ rva f1aff4c (image 18f1aff4c) =====

void FUN_18f1aff4c(void)

{
  return;
}



// ===== continuation @ rva f1aff16 (image 18f1aff16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1aff16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182851d38)();
  return;
}



// ===== continuation @ rva f1afef2 (image 18f1afef2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afef2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1afebf (image 18f1afebf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1afebf(void)

{
  FUN_190dd9df0();
  (*_DAT_182851cf8)();
  return;
}



// ===== continuation @ rva f1afe9e (image 18f1afe9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1afe9e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b0085 (image 18f1b0085) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b0085(void)

{
  FUN_190dd72e0();
  (*_DAT_182851e28)();
  return;
}



// ===== continuation @ rva f1b0012 (image 18f1b0012) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b0012(void)

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



// ===== continuation @ rva f1b0400 (image 18f1b0400) =====

void FUN_18f1b0400(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f1b0313 (image 18f1b0313) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b0313(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b03a1 (image 18f1b03a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b03a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_182851dd8)();
  return;
}



// ===== continuation @ rva f1b0101 (image 18f1b0101) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b0101(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b0275 (image 18f1b0275) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b0275(void)

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



// ===== continuation @ rva f1b03f1 (image 18f1b03f1) =====

void FUN_18f1b03f1(void)

{
  return;
}



// ===== continuation @ rva f1b028a (image 18f1b028a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1b028a(void)

{
  float unaff_XMM6_Da;
  double dStack0000000000000040;
  
  dStack0000000000000040 = (double)unaff_XMM6_Da;
  FUN_190dd72e0(dStack0000000000000040,*_DAT_18301ee50 + 0x6bda,0x131);
  (*_DAT_182851e18)();
  return;
}



// ===== continuation @ rva f1b03c5 (image 18f1b03c5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b03c5(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1b0337 (image 18f1b0337) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b0337(void)

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



// ===== continuation @ rva f1b01e2 (image 18f1b01e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1b01e2(void)

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



// ===== continuation @ rva f2275c7 (image 18f2275c7) =====

void FUN_18f2275c7(void)

{
  return;
}



// ===== continuation @ rva f20b33b (image 18f20b33b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f20b391 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f20b33b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f20e740 (image 18f20e740) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f20e757 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f20e740(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f226e6e (image 18f226e6e) =====

void thunk_FUN_18f20dae8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva f211961 (image 18f211961) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f21199b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f211961(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f2117de (image 18f2117de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f211814 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f2117de(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f211460 (image 18f211460) =====

void thunk_FUN_18f20dae8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva f20e7df (image 18f20e7df) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f20e7f6 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f20e7df(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f2127e5 (image 18f2127e5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f212824 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f2127e5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f2127a7 (image 18f2127a7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f2127dd */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f2127a7(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f2205b2 (image 18f2205b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2205b2(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f227228 (image 18f227228) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f227228(void)

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



// ===== continuation @ rva f190df8 (image 18f190df8) =====

void FUN_18f190df8(void)

{
  return;
}



// ===== continuation @ rva f18f8e8 (image 18f18f8e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f18f8e8(void)

{
  FUN_190ddfc90();
  (*_DAT_182847598)();
  return;
}



// ===== continuation @ rva f190e0c (image 18f190e0c) =====

void FUN_18f190e0c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f190245 (image 18f190245) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f190245(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f190dd4 (image 18f190dd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f190dd4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182847508)();
  return;
}



// ===== continuation @ rva f190c78 (image 18f190c78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f190c78(void)

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



// ===== continuation @ rva f18fbae (image 18f18fbae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f18fbae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1828474a8)();
  return;
}



// ===== continuation @ rva f18fa1d (image 18f18fa1d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f18fa1d(void)

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



// ===== continuation @ rva f190285 (image 18f190285) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f190285(void)

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



// ===== continuation @ rva f190a51 (image 18f190a51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f190a51(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f18ff83 (image 18f18ff83) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f18ff83(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f1c69a7 (image 18f1c69a7) =====

void FUN_18f1c69a7(void)

{
  return;
}



// ===== continuation @ rva f1c1f53 (image 18f1c1f53) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c1f53(void)

{
  FUN_190ddce00();
  (*_DAT_1828581b8)();
  return;
}



// ===== continuation @ rva f1c7359 (image 18f1c7359) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c7359(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1828586e8)();
  return;
}



// ===== continuation @ rva f1c665e (image 18f1c665e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c665e(void)

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



// ===== continuation @ rva f1c7048 (image 18f1c7048) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c7048(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182857bb8)();
  return;
}



// ===== continuation @ rva f1c6ec0 (image 18f1c6ec0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c6ec0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182858418)();
  return;
}



// ===== continuation @ rva f1c638b (image 18f1c638b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c638b(void)

{
  FUN_190de3220();
  (*_DAT_182857a28)();
  return;
}



// ===== continuation @ rva f1c65e2 (image 18f1c65e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c65e2(void)

{
  (*_DAT_182858998)();
  return;
}



// ===== continuation @ rva f1c6598 (image 18f1c6598) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c6598(void)

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



// ===== continuation @ rva f1c59c2 (image 18f1c59c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c59c2(void)

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



// ===== continuation @ rva f1c67b6 (image 18f1c67b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c67b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_182858248)();
  return;
}



// ===== continuation @ rva f1c6831 (image 18f1c6831) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1c6831(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000048 = param_2;
  uStack0000000000000050 = param_1;
  FUN_190dd72e0(param_1,*_DAT_18301ee50 + 0x6bda,0x131);
  (*_DAT_182857e58)();
  return;
}



// ===== continuation @ rva f1c6793 (image 18f1c6793) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f1c6793(void)

{
  int unaff_EBP;
  int unaff_R13D;
  
  switch(unaff_R13D + 1 == unaff_EBP) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f2278fb (image 18f2278fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2278fb(void)

{
  FUN_190dd72e0();
  (*_DAT_182868568)();
  return;
}



// ===== continuation @ rva f22787d (image 18f22787d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f22787d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182868608)();
  return;
}



// ===== continuation @ rva f227c94 (image 18f227c94) =====

void FUN_18f227c94(void)

{
  return;
}



// ===== continuation @ rva f227a40 (image 18f227a40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f227a40(void)

{
  FUN_190ddfc90();
  (*_DAT_182868508)();
  return;
}



// ===== continuation @ rva f227cb0 (image 18f227cb0) =====

void FUN_18f227cb0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f227a73 (image 18f227a73) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f227a73(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f227aff (image 18f227aff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f227aff(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182868678)();
  return;
}



// ===== continuation @ rva f227aad (image 18f227aad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f227aad(void)

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



// ===== continuation @ rva f227b79 (image 18f227b79) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f227b79(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f227ae6 (image 18f227ae6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f227ae6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1828685c8)();
  return;
}



// ===== continuation @ rva f2279fb (image 18f2279fb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2279fb(void)

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



// ===== continuation @ rva f23f5ff (image 18f23f5ff) =====

void FUN_18f23f5ff(void)

{
  return;
}



// ===== continuation @ rva f227e62 (image 18f227e62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f227e62(void)

{
  FUN_190ddce00();
  (*_DAT_182869818)();
  return;
}



// ===== continuation @ rva f23f5cc (image 18f23f5cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f23f5cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_18286ce48)();
  return;
}



// ===== continuation @ rva f23d18d (image 18f23d18d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f23d18d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f233b69 (image 18f233b69) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f233b69(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18286c878)();
  return;
}



// ===== continuation @ rva f2321c3 (image 18f2321c3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2321c3(void)

{
  FUN_190de3220();
  (*_DAT_18286b548)();
  return;
}



// ===== continuation @ rva f23f014 (image 18f23f014) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f23f014(void)

{
  (*_DAT_18286be08)();
  return;
}



// ===== continuation @ rva f239a84 (image 18f239a84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f239a84(void)

{
  (*_DAT_18286d458)();
  return;
}



// ===== continuation @ rva f233aa6 (image 18f233aa6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f233aa6(void)

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



// ===== continuation @ rva f227ef9 (image 18f227ef9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f227f17 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f227ef9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva f238c66 (image 18f238c66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f238c66(void)

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



// ===== continuation @ rva f23dcf9 (image 18f23dcf9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f23dcf9(void)

{
  (*_DAT_18286b488)();
  return;
}



// ===== continuation @ rva f243ad4 (image 18f243ad4) =====

void FUN_18f243ad4(void)

{
  return;
}



// ===== continuation @ rva f23f8b7 (image 18f23f8b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f23f8b7(void)

{
  FUN_190ddce00();
  (*_DAT_1828702d8)();
  return;
}



// ===== continuation @ rva f24373a (image 18f24373a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f24373a(void)

{
  (*_DAT_182870578)();
  return;
}



// ===== continuation @ rva f243d81 (image 18f243d81) =====

void FUN_18f243d81(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva f243988 (image 18f243988) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f243988(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f243c09 (image 18f243c09) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f243c09(void)

{
  int in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f24305e (image 18f24305e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f24305e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f243462 (image 18f243462) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f243462(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1828703f8)();
  return;
}



// ===== continuation @ rva f24312a (image 18f24312a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f24312a(void)

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



// ===== continuation @ rva f2438aa (image 18f2438aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2438aa(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva f24370e (image 18f24370e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f24370e(void)

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



// ===== continuation @ rva f242f7e (image 18f242f7e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f242f7e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



