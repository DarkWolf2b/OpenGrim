// ===== Lsixtwo/bh; Dj (DD)V (handler @ image 18efce2c0, runtime 6ffff6bde2c0) =====

void FUN_18efce2c0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x3600,0xba);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018efce32a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827e1580 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; Dk (Lsixtwo/lC;)V (handler @ image 18f006410, runtime 6ffff6c16410) =====

void FUN_18f006410(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x7089,0x13d);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f006503 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827ed718 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; Dl (Lsixtwo/gg;Lsixtwo/ab;)V (handler @ image 18f025380, runtime 6ffff6c35380) =====

void FUN_18f025380(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x4125,0xd3);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0253d9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827f6980 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; Dm (Lsixtwo/gg;Lsixtwo/ab;)V (handler @ image 18f0256d0, runtime 6ffff6c356d0) =====

void FUN_18f0256d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x4125,0xd3);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f025729 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827f6ab0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; Dn (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18f025a20, runtime 6ffff6c35a20) =====

undefined8 FUN_18f025a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/bh; Do ([B)Ljava/lang/String; (handler @ image 18f025ab0, runtime 6ffff6c35ab0) =====

void FUN_18f025ab0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f025b50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827f6d70 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bh; Dp (IJ)Ljava/lang/String; (handler @ image 18f04f9f0, runtime 6ffff6c5f9f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f04f9f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (uRam00000001833e7160 ^ _UNK_1827fe270) + uRam00000001833e71c0 + 0xec93f13c9a98066c;
  uVar8 = (uRam00000001833e71c0 ^ _UNK_1827fe278) + uRam00000001833e7160 + 0x8a0f0071645d1a08;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e7160 ^ _UNK_1827fe270;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e71c0 ^ _UNK_1827fe278;
  uRam00000001833e7350 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833e7160 + 0x8a0f0071645d1a08) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833e71c0 + 0xec93f13c9a98066c));
  uRam00000001833e7510 =
       (uRam00000001833e7510 ^ uRam00000001833e7350 & 0x7fffffffffffffff) + 0xee9ff17d7eff3f49 ^
       0xdf736de2b2d735c5;
  uRam00000001833e7688 =
       (uRam00000001833e7688 * -0x6351543a5703d98f ^ uRam00000001833e7510) +
       (uRam00000001833e7350 & 0x7fffffffffffffff);
  uRam00000001833e7530 = uRam00000001833e7688 ^ uRam00000001833e7510;
  uRam00000001833e71c0 = 0xee9ff17d7eff3f49;
  uVar7 = (uRam00000001833e7480 ^ _UNK_1827fe280) + uRam00000001833e74a8 + 0x84225cda;
  uVar8 = (uRam00000001833e74a8 ^ _UNK_1827fe288) + uRam00000001833e7480 + 0xc38e090dc390c585;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e7480 ^ _UNK_1827fe280;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e74a8 ^ _UNK_1827fe288;
  uRam00000001833e7300 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833e7480 + 0xc38e090dc390c585) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833e74a8 + 0x84225cda));
  uVar7 = uRam00000001833e7300 ^ 0x40f8d8ba9f31c584;
  uRam00000001833e7340 = uRam00000001833e7260 ^ uVar7 ^ 0xc38e090dc3914584;
  uRam00000001833e7270 = (uRam00000001833e7270 ^ uVar7) + 0xc38e090dc3914584 ^ 0x9b68392ebe9f2b16;
  uRam00000001833e7288 = (uRam00000001833e7288 * 0x4b37a7e25033c807 ^ uRam00000001833e7270) + uVar7;
  uRam00000001833e73c8 = uRam00000001833e7288 ^ uRam00000001833e7270;
  uRam00000001833e7228 = 0xc38e090dc3914584;
  uRam00000001833e75c8 = func_0x00018f056980(uRam00000001833e7460 ^ 0x2e255b06377dd723);
  uRam00000001833e7678 =
       (uRam00000001833e7678 ^ uRam00000001833e75c8 & 0x7fffffffffffffff) + 0x3ca27a817d26f994 ^
       0xeeb9d7e94c2b4ec0;
  uRam00000001833e72b0 =
       (uRam00000001833e72b0 * 0x60e9d4d0279c2791 ^ uRam00000001833e7678) +
       (uRam00000001833e75c8 & 0x7fffffffffffffff);
  uRam00000001833e7460 = uRam00000001833e72b0 ^ uRam00000001833e7678;
  uRam00000001833e7568 = 0x3ca27a817d26f994;
  uRam00000001833e72c0 = func_0x00018f056980(uRam00000001833e7250 + 0xa90ffbc3fbde51b8 ^ 0xfa);
  uVar7 = uRam00000001833e72c0 << 0x3d | (uRam00000001833e72c0 & 0x3fffffffff) >> 3;
  uRam00000001833e73c0 = (uRam00000001833e73c0 ^ uVar7) + 0x34e3191007a3ccd8 ^ 0xc406d4749ad9dea9;
  uRam00000001833e7538 = (uRam00000001833e7538 * -0x2b10665a88aa9f1 ^ uRam00000001833e73c0) + uVar7;
  uRam00000001833e7638 = uRam00000001833e7538 ^ uRam00000001833e73c0;
  uRam00000001833e7690 = 0x34e3191007a3ccd8;
  uVar7 = (~uRam00000001833e7360 + 0xcb1ce6eff85c3329) *
          ((uRam00000001833e7188 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833e7188 & 0x84225cda) * 2);
  uVar7 = (uVar7 | uRam00000001833e7198) + (uVar7 & uRam00000001833e7198);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7498 =
       func_0x00018f056980((uVar7 | 0xcb1ce6ef7c7e6ff2) + (uVar7 & 0xcb1ce6ef7c7e6ff2));
  uVar7 = uRam00000001833e7498 ^ 0xcb1ce6eff85c3328;
  uRam00000001833e73e0 = uRam00000001833e7490 ^ uVar7 ^ 0xcb1ce6eff85cb327;
  uRam00000001833e7660 = (uRam00000001833e7660 ^ uVar7) + 0xcb1ce6eff85cb327 ^ 0xdb99852a79bd6b05;
  uRam00000001833e7290 = (uRam00000001833e7290 * -0x2ca7aa006f2a6d2d ^ uRam00000001833e7660) + uVar7
  ;
  uRam00000001833e7178 = uRam00000001833e7290 ^ uRam00000001833e7660;
  uRam00000001833e7430 = 0xcb1ce6eff85cb327;
  uVar7 = (~uRam00000001833e71e0 + 0x34e3191007a3ccd9) *
          ((uRam00000001833e7200 ^ 0xcb1ce6ef7c7e9002) +
          (uRam00000001833e7200 & 0x4b1ce6ef7c7e9002) * 2);
  uVar7 = (uVar7 | uRam00000001833e71f8) + (uVar7 & uRam00000001833e71f8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7658 =
       func_0x00018f056980((uVar7 | 0xffffffff7bdd5cda) + (uVar7 & 0xffffffff7bdd5cda));
  uRam00000001833e71b0 = uRam00000001833e71f0 ^ uRam00000001833e7658 ^ 0x7fff;
  uRam00000001833e7278 = (uRam00000001833e7278 ^ uRam00000001833e7658) + 0x7fff ^ 0x761e39874b22ce83
  ;
  uRam00000001833e75b0 =
       (uRam00000001833e75b0 * 0x294f6ba9f684ef59 ^ uRam00000001833e7278) + uRam00000001833e7658;
  uRam00000001833e74a8 = uRam00000001833e75b0 ^ uRam00000001833e7278;
  uRam00000001833e7688 = 0x7fff;
  uVar7 = (uRam00000001833e7340 ^ _UNK_1827fe290) + uRam00000001833e73f8 + 0xee9ff17dfadd1c6c;
  uVar8 = (uRam00000001833e73f8 ^ _UNK_1827fe298) + uRam00000001833e7340 + 0x5096160220c52774;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e7340 ^ _UNK_1827fe290;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e73f8 ^ _UNK_1827fe298;
  uRam00000001833e76b8 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833e7340 + 0x5096160220c52774) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833e73f8 + 0xee9ff17dfadd1c6c));
  uRam00000001833e75d8 =
       (uRam00000001833e75d8 ^ uRam00000001833e76b8 & 0xffffffffffffff) + 0xbe09e77f5e3a183d ^
       0x29ca01a004443ef4;
  uRam00000001833e7268 =
       (uRam00000001833e7268 * 0x6177d35aedf13d63 ^ uRam00000001833e75d8) +
       (uRam00000001833e76b8 & 0xffffffffffffff);
  uRam00000001833e72b8 = uRam00000001833e7268 ^ uRam00000001833e75d8;
  uRam00000001833e7558 = 0xbe09e77f5e3a183d;
  uVar7 = (uRam00000001833e7390 ^ _UNK_1827fe2a0) + uRam00000001833e7620 + 0x3f36077f1be64598;
  uVar8 = (uRam00000001833e7620 ^ _UNK_1827fe2a8) + uRam00000001833e7390 + 0x3f36077f9fc466bd;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e7390 ^ _UNK_1827fe2a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e7620 ^ _UNK_1827fe2a8;
  uRam00000001833e7600 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833e7390 + 0x3f36077f9fc466bd) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833e7620 + 0x3f36077f1be64598));
  uVar7 = uRam00000001833e7330 - (uRam00000001833e7330 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uRam00000001833e7370 =
       (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
       uRam00000001833e7330;
  uRam00000001833e72b8 = uRam00000001833e72b8 ^ uRam00000001833e7370 ^ 0xf9a15a24ce2b55e1;
  uRam00000001833e7320 =
       (uRam00000001833e7320 * 0x67f2b58c5eb2aacd ^ uRam00000001833e72b8) + uRam00000001833e7370;
  uRam00000001833e7540 = uRam00000001833e7320 ^ uRam00000001833e72b8;
  uRam00000001833e7608 = 0;
  uVar7 = (uRam00000001833e7410 ^ 0x84225cda) + uRam00000001833e7110 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e7410 ^ 0x84225cda;
  uVar8 = ((uRam00000001833e7110 + uRam00000001833e7410) * 0x2000 |
          uRam00000001833e7110 + uRam00000001833e7410 >> 0x33) ^ uRam00000001833e7110;
  lRam00000001833e75a8 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001833e7410 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833e7110 + 0x84225cda));
  uVar7 = lRam00000001833e75a8 * 0xd04ad9fb5722c07;
  uRam00000001833e71b0 = uRam00000001833e7250 ^ uVar7 ^ 0x7fff;
  uRam00000001833e74e0 = (uRam00000001833e74e0 ^ uVar7) + 0x7fff ^ 0x2fb1f042515d5827;
  uRam00000001833e7320 = (uRam00000001833e7320 * 0x4a49400020ebc06b ^ uRam00000001833e74e0) + uVar7;
  uRam00000001833e7330 = uRam00000001833e7320 ^ uRam00000001833e74e0;
  uRam00000001833e75b0 = 0x7fff;
  uRam00000001833e74e8 = func_0x00018f056980(uRam00000001833e7148 ^ 0x7d62e00590f62142);
  uRam00000001833e74d0 =
       (uRam00000001833e74d0 ^ uRam00000001833e7158) + 0x11600e828100c0b6 ^ 0xeb458f9b9db434c6;
  uRam00000001833e7648 =
       (uRam00000001833e7648 * 0x836ee0edd3b7ad1 ^ uRam00000001833e74d0) + uRam00000001833e7158;
  uRam00000001833e76f0 = uRam00000001833e7648 ^ uRam00000001833e74d0;
  uRam00000001833e74d8 = 0x11600e828100c0b6;
  uVar7 = (uRam00000001833e71c8 ^ _UNK_1827fe2b0) + uRam00000001833e7128 + 0xee9ff17dfadd1c6c;
  uVar8 = (uRam00000001833e7128 ^ _UNK_1827fe2b8) + uRam00000001833e71c8 + 0x11600e828100c0b6;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e71c8 ^ _UNK_1827fe2b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e7128 ^ _UNK_1827fe2b8;
  uRam00000001833e7160 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833e71c8 + 0x11600e828100c0b6) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833e7128 + 0xee9ff17dfadd1c6c));
  uVar7 = (uRam00000001833e7160 ^ 0xdf468e6d81edbde6) << 0x38 |
          ((uRam00000001833e7160 ^ 0xdf468e6d81edbde6) & 0x7fffffffffffffff) >> 8;
  uRam00000001833e7618 = uRam00000001833e7618 ^ uVar7 ^ 0x34ee2753db140977;
  uRam00000001833e72c8 = (uRam00000001833e72c8 * -0x2b26688aa0e9e00f ^ uRam00000001833e7618) + uVar7
  ;
  uRam00000001833e74d0 = uRam00000001833e72c8 ^ uRam00000001833e7618;
  uRam00000001833e7448 = 0;
  uRam00000001833e73d0 = func_0x00018f056980(uRam00000001833e7500 ^ 0x23ff7c3a001dbd);
  uVar7 = uRam00000001833e73d0 >> 1 | uRam00000001833e73d0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001833e73d0;
  uRam00000001833e74e8 = uRam00000001833e7170 ^ uVar7 ^ 0x7fff;
  uRam00000001833e7190 = (uRam00000001833e7190 ^ uVar7) + 0x7fff ^ 0x5a93fcc86f04df97;
  uRam00000001833e7580 = (uRam00000001833e7580 * -0x80a089b5ede6b99 ^ uRam00000001833e7190) + uVar7;
  uRam00000001833e7398 = uRam00000001833e7580 ^ uRam00000001833e7190;
  uRam00000001833e75e8 = 0x7fff;
  uVar7 = (~uRam00000001833e76d0 + 0xec93f13c1eba254a) *
          ((uRam00000001833e7430 ^ 0xec93f13c9a98066c) +
          (uRam00000001833e7430 & 0x6c93f13c9a98066c) * 2);
  uVar7 = (uVar7 | uRam00000001833e7360) + (uVar7 & uRam00000001833e7360);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7440 =
       func_0x00018f056980((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam00000001833e7188 =
       uRam00000001833e7188 ^ uRam00000001833e7440 ^ 0xec93f13c1eba2549 ^ 0x9705ddaf00bef137;
  uRam00000001833e7120 =
       (uRam00000001833e7120 * 0x505d54040fbc8707 ^ uRam00000001833e7188) +
       (uRam00000001833e7440 ^ 0xec93f13c1eba2549);
  uRam00000001833e7488 = uRam00000001833e7120 ^ uRam00000001833e7188;
  uRam00000001833e7280 = 0;
  uVar7 = ((uRam00000001833e71b0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833e71b0 & 0x84225cda) * 2) * -uRam00000001833e7200;
  uVar7 = (uVar7 | uRam00000001833e7250) + (uVar7 & uRam00000001833e7250);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7310 =
       func_0x00018f056980((uVar7 | 0x84225cda) + (ulonglong)((uint)uVar7 & 0x84225cda));
  auVar6 = _UNK_1800170c0;
  uVar7 = uRam00000001833e7200 >> 1 | uRam00000001833e7200;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001833e7200) & 0x7fffffffffffffff;
  uRam00000001833e76c0 = uRam00000001833e71a0 ^ uVar7 ^ 0x7fff;
  uRam00000001833e7288 = (uRam00000001833e7288 ^ uVar7) + 0x7fff ^ 0x474792780592656b;
  uRam00000001833e7688 = (uRam00000001833e7688 * 0x126846a0d3bd2a35 ^ uRam00000001833e7288) + uVar7;
  uRam00000001833e7170 = uRam00000001833e7688 ^ uRam00000001833e7288;
  auVar4._8_8_ = _UNK_18019c088;
  auVar4._0_8_ = param_4 ^ 0x84222325;
  uRam00000001833e7510 = 0x7fff;
  auVar5 = pshufb(auVar4 ^ _UNK_1827fe2c0,_UNK_1800170c0);
  uVar8 = auVar5._8_8_ + auVar5._0_8_;
  uVar7 = uVar8 + uRam00000001833e7638;
  if (auVar5._4_4_ < 0) {
    uVar7 = uRam00000001833e7600 ^ uVar8;
  }
  uRam00000001833e7370 = func_0x00018f056980(SUB161(auVar4 ^ _UNK_1827fe2c0,5) ^ uVar7);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001833e75d0 = (ulonglong)uVar2;
  uRam00000001833e7528 =
       (uRam00000001833e7528 ^ uRam00000001833e7370) + uRam00000001833e75d0 ^ 0x98e2c6eb367e6b97;
  uRam00000001833e76c8 =
       (uRam00000001833e76c8 * 0x7fd59e3ab10fc7f3 ^ uRam00000001833e7528) + uRam00000001833e7370;
  uRam00000001833e7588 = uRam00000001833e76c8 ^ uRam00000001833e7528;
  uVar7 = (uRam00000001833e7680 ^ _UNK_1827fe2d0) + uRam00000001833e7338 + 0x77070642;
  uVar8 = (uRam00000001833e7338 ^ _UNK_1827fe2d8) + uRam00000001833e7680 + 0x187c943a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e7680 ^ _UNK_1827fe2d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e7338 ^ _UNK_1827fe2d8;
  uRam00000001833e7410 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833e7680 + 0x187c943a) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833e7338 + 0x77070642));
  uRam00000001833e75b0 =
       (uRam00000001833e75b0 ^ uRam00000001833e7410 ^ 0xf3252567) + 0xfb7db57f ^ 0xf6b215c4ea4654a5;
  uRam00000001833e73e8 =
       (uRam00000001833e73e8 * -0x1dfb09ae99b22b77 ^ uRam00000001833e75b0) +
       (uRam00000001833e7410 ^ 0xf3252567);
  uRam00000001833e73a0 = uRam00000001833e73e8 ^ uRam00000001833e75b0;
  uRam00000001833e7398 = 0xfb7db57f;
  uVar7 = (~uRam00000001833e7488 + 0x833b9586) *
          ((uRam00000001833e7468 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833e7468 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam00000001833e7130) + (uVar7 & uRam00000001833e7130);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7628 =
       func_0x00018f056980((uVar7 | 0x719b6a0) + (ulonglong)((uint)uVar7 & 0x719b6a0));
  uRam00000001833e7300 =
       (uRam00000001833e7300 ^ uRam00000001833e7628 ^ 0x833b9585) - 0x833b9585 ^ 0xd49b59306ff4bb2e;
  uRam00000001833e7240 =
       (uRam00000001833e7240 * -0x13cf72165f147c0b ^ uRam00000001833e7300) +
       (uRam00000001833e7628 ^ 0x833b9585);
  uRam00000001833e7210 = uRam00000001833e7240 ^ uRam00000001833e7300;
  uRam00000001833e7330 = 0x7cc46a7b;
  uVar7 = (uRam00000001833e7130 ^ _UNK_1827fe2e0) + uRam00000001833e7578 + 0x84222085;
  uVar8 = (uRam00000001833e7578 ^ _UNK_1827fe2e8) + uRam00000001833e7130 + 0x833b9585;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e7130 ^ _UNK_1827fe2e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e7578 ^ _UNK_1827fe2e8;
  uRam00000001833e76d0 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833e7130 + 0x833b9585) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833e7578 + 0x84222085));
  uVar8 = uRam00000001833e76d0 ^ 0x833b9585;
  uVar7 = uVar8 >> 1 | uVar8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar8;
  uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8;
  uRam00000001833e72f8 = uRam00000001833e7538 ^ uVar8 ^ 0x833b9925;
  uRam00000001833e73c8 = (uRam00000001833e73c8 ^ uVar8) + 0x833b9925 ^ 0xd5edfc7c1edd7263;
  uRam00000001833e7528 = (uRam00000001833e7528 * -0x64872b6b92a91e1d ^ uRam00000001833e73c8) + uVar8
  ;
  uRam00000001833e7378 = uRam00000001833e7528 ^ uRam00000001833e73c8;
  uRam00000001833e75d0 = 0x833b9925;
  uVar7 = (~uRam00000001833e74b8 + 0x7cc46a7c) *
          ((uRam00000001833e72b8 ^ 0x719ba00) +
          (ulonglong)((uint)uRam00000001833e72b8 & 0x719ba00) * 2);
  uVar7 = (uVar7 | uRam00000001833e7408) + (uVar7 & uRam00000001833e7408);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7370 =
       func_0x00018f056980((uVar7 | 0x7bddd07b) + (ulonglong)((uint)uVar7 & 0x7bddd07b));
  uVar7 = uRam00000001833e7370 & 0xfffffffffffffc00;
  uRam00000001833e74b0 = uRam00000001833e7300 ^ uVar7 ^ 0x1000003a0;
  uRam00000001833e74f8 = (uRam00000001833e74f8 ^ uVar7) + 0x1000003a0 ^ 0x239b25d09f7b3691;
  uRam00000001833e7350 = (uRam00000001833e7350 * 0x1fe7699784281df9 ^ uRam00000001833e74f8) + uVar7;
  uRam00000001833e7178 = uRam00000001833e7350 ^ uRam00000001833e74f8;
  uRam00000001833e7608 = 0x3a0;
  uVar7 = (~uRam00000001833e72a0 + 0x9a1ddad5) *
          ((uRam00000001833e7508 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833e7508 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam00000001833e7528) + (uVar7 & uRam00000001833e7528);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7410 =
       func_0x00018f056980((uVar7 | 0x1e3ff9f1) + (ulonglong)((uint)uVar7 & 0x1e3ff9f1));
  uRam00000001833e72c0 =
       (uRam00000001833e72c0 ^ uRam00000001833e7410 & 0x7fffffffffffffff) - 0x9a1ddad4 ^
       0xd4865c5c5f477c65;
  uRam00000001833e7470 =
       (uRam00000001833e7470 * -0x55c7fc53c0cd075 ^ uRam00000001833e72c0) +
       (uRam00000001833e7410 & 0x7fffffffffffffff);
  uRam00000001833e7270 = uRam00000001833e7470 ^ uRam00000001833e72c0;
  uRam00000001833e7408 = 0x65e2252c;
  uVar7 = (~uRam00000001833e71f0 + 0x9a1ddad5) *
          ((uRam00000001833e7500 ^ 0x84222085) +
          (ulonglong)((uint)uRam00000001833e7500 & 0x84222085) * 2);
  uVar7 = (uVar7 | uRam00000001833e7230) + (uVar7 & uRam00000001833e7230);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e74f8 =
       func_0x00018f056980((uVar7 | 0x1e3ffa51) + (ulonglong)((uint)uVar7 & 0x1e3ffa51));
  uRam00000001833e7480 = uRam00000001833e7210 ^ uRam00000001833e74f8 ^ 0x9a1dde74;
  uRam00000001833e7410 =
       (uRam00000001833e7410 ^ uRam00000001833e74f8) + 0x9a1dde74 ^ 0x8891f295943d67f3;
  uRam00000001833e71d8 =
       (uRam00000001833e71d8 * -0x572f80989522fc77 ^ uRam00000001833e7410) + uRam00000001833e74f8;
  uRam00000001833e73f0 = uRam00000001833e71d8 ^ uRam00000001833e7410;
  uRam00000001833e7450 = 0x9a1dde74;
  uRam00000001833e7230 = func_0x00018f056980(uRam00000001833e74e8 ^ 0xffc80004f300c265);
  uVar7 = (uRam00000001833e7230 ^ 0x3d55ed82f4b0fff0) & 0xfffffffffffffff8;
  uRam00000001833e7698 = uRam00000001833e7180 ^ uVar7 ^ 0x1000003a0;
  uRam00000001833e75c0 = (uRam00000001833e75c0 ^ uVar7) + 0x1000003a0 ^ 0xd6c3c2f6b2e511d;
  uRam00000001833e7248 = (uRam00000001833e7248 * -0x274c143ba5086dc7 ^ uRam00000001833e75c0) + uVar7
  ;
  uRam00000001833e7520 = uRam00000001833e7248 ^ uRam00000001833e75c0;
  uRam00000001833e7508 = uRam00000001833e74d8 ^ 0x1000003a0;
  uRam00000001833e7200 = 0x3a0;
  uRam00000001833e73f8 = func_0x00018f056980(uRam00000001833e7520 ^ 0xffdf003d08ffca7d);
  uRam00000001833e7660 =
       (uRam00000001833e7660 ^ uRam00000001833e73f8 & 0x7fffffffffffffff) - 0xc179443c ^
       0xd4aa8b88f14c697b;
  uRam00000001833e71e0 =
       (uRam00000001833e71e0 * 0x18940dda5f0550b5 ^ uRam00000001833e7660) +
       (uRam00000001833e73f8 & 0x7fffffffffffffff);
  uRam00000001833e7240 = uRam00000001833e71e0 ^ uRam00000001833e7660;
  uRam00000001833e73a0 = 0x3e86bbc4;
  uVar7 = (~uRam00000001833e7550 + 0xc179443d) *
          ((uRam00000001833e75e8 ^ 0x84222085) +
          (ulonglong)((uint)uRam00000001833e75e8 & 0x84222085) * 2);
  uVar7 = (uVar7 | uRam00000001833e7540) + (uVar7 & uRam00000001833e7540);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7110 =
       func_0x00018f056980((uVar7 | 0x455b64b9) + (ulonglong)((uint)uVar7 & 0x455b64b9));
  uVar7 = uRam00000001833e7110 ^ 0x2bd57975980;
  uRam00000001833e7600 = uRam00000001833e7248 ^ uVar7 ^ 0xc17947dc;
  uRam00000001833e71e8 = (uRam00000001833e71e8 ^ uVar7) + 0xc17947dc ^ 0xcf1fb168561628a4;
  uRam00000001833e76b8 = (uRam00000001833e76b8 * 0x6207f69b2fe6937b ^ uRam00000001833e71e8) + uVar7;
  uRam00000001833e7610 = uRam00000001833e76b8 ^ uRam00000001833e71e8;
  uRam00000001833e72a0 = 0xc17947dc;
  uVar7 = (uRam00000001833e7140 ^ _UNK_1827fe2f0) + uRam00000001833e7588 + 0x455b64f9;
  uVar8 = (uRam00000001833e7588 ^ _UNK_1827fe2f8) + uRam00000001833e7140 + 0x3e86bbc4;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e7140 ^ _UNK_1827fe2f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e7588 ^ _UNK_1827fe2f8;
  uRam00000001833e7100 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833e7140 + 0x3e86bbc4) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833e7588 + 0x455b64f9));
  uVar7 = uRam00000001833e7100 * 0x571e0f573cdf720b ^ 0xc17947dc;
  uRam00000001833e71a8 = uRam00000001833e7100 ^ uVar7 ^ 0x1000003a0;
  uRam00000001833e7258 = (uRam00000001833e7258 ^ uVar7) + 0x1000003a0 ^ 0xe966c0943328cb9b;
  uRam00000001833e73a8 = (uRam00000001833e73a8 * -0x629b9bb87b3b8f0d ^ uRam00000001833e7258) + uVar7
  ;
  uRam00000001833e7650 = uRam00000001833e73a8 ^ uRam00000001833e7258;
  uRam00000001833e73f8 = uRam00000001833e76a0 ^ 0x1000003a0;
  uRam00000001833e7660 = 0x3a0;
  uVar7 = (uRam00000001833e73d8 ^ _UNK_1827fe300) + uRam00000001833e7690 + 0x8772d75a;
  uVar8 = (uRam00000001833e7690 ^ _UNK_1827fe308) + uRam00000001833e73d8 + 0xf05a0200;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833e73d8 ^ _UNK_1827fe300;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833e7690 ^ _UNK_1827fe308;
  uRam00000001833e7280 =
       func_0x00018f056980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833e73d8 + 0xf05a0200) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833e7690 + 0x8772d75a));
  uVar7 = (uRam00000001833e7280 ^ 0xf35af67f) * -0x22f877e264ec8a6b ^ 0xf05a0200;
  uRam00000001833e76b0 = uRam00000001833e72e0 ^ uVar7 ^ 0xf3aaf67f;
  uRam00000001833e7258 = (uRam00000001833e7258 ^ uVar7) + 0xf3aaf67f ^ 0xf6fef4950a556f6c;
  uRam00000001833e75f0 = (uRam00000001833e75f0 * 0x42080be04b864bed ^ uRam00000001833e7258) + uVar7;
  uRam00000001833e7508 = uRam00000001833e75f0 ^ uRam00000001833e7258;
  uRam00000001833e7188 = 0xf3aaf67f;
  uVar7 = (~uRam00000001833e7198 + 0xf3aaf680) *
          ((uRam00000001833e76e8 ^ 0x7788d55a) +
          (ulonglong)((uint)uRam00000001833e76e8 & 0x7788d55a) * 2);
  uVar7 = (uVar7 | uRam00000001833e7368) + (uVar7 & uRam00000001833e7368);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7288 =
       func_0x00018f056980((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam00000001833e7450 = uRam00000001833e7450 ^ uRam00000001833e7288 ^ 0x7397871868776302;
  uRam00000001833e75c8 =
       (uRam00000001833e75c8 * -0x6b53a02883ffa1c9 ^ uRam00000001833e7450) + uRam00000001833e7288;
  uRam00000001833e75e8 = uRam00000001833e75c8 ^ uRam00000001833e7450;
  uRam00000001833e7458 = 0;
  uVar7 = ((uRam00000001833e7488 ^ 0x84222085) +
          (ulonglong)((uint)uRam00000001833e7488 & 0x84222085) * 2) * -uRam00000001833e73f0;
  uVar7 = (uVar7 | uRam00000001833e7668) + (uVar7 & uRam00000001833e7668);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e7478 = uRam00000001833e7288;
  uRam00000001833e7290 =
       func_0x00018f056980((uVar7 | 0x84222085) + (ulonglong)((uint)uVar7 & 0x84222085));
  uRam00000001833e76a0 = (uRam00000001833e76a0 ^ uRam00000001833e7390) + 0x3a0 ^ 0x3eb94a2233132ae2;
  uRam00000001833e7378 =
       (uRam00000001833e7378 * -0x780c5f0ca498ee11 ^ uRam00000001833e76a0) + uRam00000001833e7390;
  uRam00000001833e7240 = uRam00000001833e7378 ^ uRam00000001833e76a0;
  uRam00000001833e7478 = 0x3a0;
  uRam00000001833e7390 = uRam00000001833e74f8 ^ uRam00000001833e7390 ^ 0x3a0;
  uRam00000001833e7358 = func_0x00018f056980(uRam00000001833e7248 + 0x29007f65009fff ^ 10);
  uVar7 = (ulonglong)(~(uint)(uRam00000001833e7358 >> 3) & 0xfb7db57f);
  uRam00000001833e7618 = (uRam00000001833e7618 ^ uVar7) + 0x4824a80 ^ 0xaae4664451fc7cb6;
  uRam00000001833e71a0 = (uRam00000001833e71a0 * -0x153632ba00512ddd ^ uRam00000001833e7618) + uVar7
  ;
  uRam00000001833e7448 = uRam00000001833e71a0 ^ uRam00000001833e7618;
  uRam00000001833e7208 = 0x4824a80;
  uRam00000001833e7178 = func_0x00018f056980(uRam00000001833e7520 + 0xabffb725ff2aff ^ 0x3e);
  uVar7 = ((uRam00000001833e7178 ^ 0xfb7db540) & 0xffffffffffffffc0) * 0x400;
  uRam00000001833e74e8 = uRam00000001833e74e8 ^ uVar7 ^ 0x32c1140fc83fe8bb;
  uRam00000001833e75f8 = (uRam00000001833e75f8 * -0x17f0726e1600e8f1 ^ uRam00000001833e74e8) + uVar7
  ;
  uRam00000001833e7368 = uRam00000001833e75f8 ^ uRam00000001833e74e8;
  uRam00000001833e7620 = 0;
  uRam00000001833e72b0 = func_0x00018f056980(uRam00000001833e7200 ^ 0x2000837b001da7);
  uVar7 = uRam00000001833e72b0 >> 1 | uRam00000001833e72b0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001833e72b0;
  uRam00000001833e7400 = uRam00000001833e7270 ^ uVar7 ^ 0x3a0;
  uRam00000001833e7388 = (uRam00000001833e7388 ^ uVar7) + 0x3a0 ^ 0x61e86fe26176f6f4;
  uRam00000001833e7560 = (uRam00000001833e7560 * 0x1588cc828b80a1f5 ^ uRam00000001833e7388) + uVar7;
  uRam00000001833e7220 = uRam00000001833e7560 ^ uRam00000001833e7388;
  uRam00000001833e7240 = 0x3a0;
  uVar7 = (~uRam00000001833e7680 + 0xf3252568) *
          ((uRam00000001833e72f8 ^ 0x77070642) +
          (ulonglong)((uint)uRam00000001833e72f8 & 0x77070642) * 2);
  uVar7 = (uVar7 | uRam00000001833e76c8) + (uVar7 & uRam00000001833e76c8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e74a0 =
       func_0x00018f056980((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uVar7 = uRam00000001833e75e8 - (uRam00000001833e75e8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001833e75e8;
  uRam00000001833e7330 = uRam00000001833e7330 ^ uVar7 ^ 0x283e954e46763016;
  uRam00000001833e71d8 = (uRam00000001833e71d8 * 0x716d5e72c2629f6b ^ uRam00000001833e7330) + uVar7;
  uRam00000001833e71b0 = uRam00000001833e71d8 ^ uRam00000001833e7330;
  uRam00000001833e7500 = 0;
  uVar7 = uRam00000001833e7148 * 0x2000 ^ uRam00000001833e7148;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833e72b8 =
       func_0x00018f056980((uVar7 | 0x84222085) + (ulonglong)((uint)uVar7 & 0x84222085));
  uRam00000001833e76f0 = uRam00000001833e75e8 ^ uRam00000001833e72b8 ^ 0x3a0;
  uRam00000001833e75f8 = (uRam00000001833e75f8 ^ uRam00000001833e72b8) + 0x3a0 ^ 0xc008ab13dc4e449;
  uRam00000001833e7140 =
       (uRam00000001833e7140 * -0x59f51b2ca13a8587 ^ uRam00000001833e75f8) + uRam00000001833e72b8;
  uRam00000001833e7258 = uRam00000001833e7140 ^ uRam00000001833e75f8;
  uVar8 = (ulonglong)(uVar2 ^ param_3);
  auVar5._8_8_ = _UNK_1827fe318;
  auVar5._0_8_ = uVar8 ^ 0x84222325;
  uRam00000001833e72c8 = 0x3a0;
  auVar6 = pshufb(auVar5 ^ _UNK_1827fe320,auVar6);
  uVar3 = auVar6._8_8_ + auVar6._0_8_;
  uVar7 = uVar3 + lRam00000001833e76e0;
  if (auVar6._4_4_ < 0) {
    uVar7 = uRam00000001833e7410 ^ uVar3;
  }
  uRam00000001833e7608 = func_0x00018f056980(SUB161(auVar5 ^ _UNK_1827fe320,5) ^ uVar7);
  uVar7 = uRam00000001833e7608 >> 1 | uRam00000001833e7608;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001833e7608;
  uRam00000001833e7420 = uVar8 ^ 0x3a0;
  uRam00000001833e7298 = (uRam00000001833e7298 ^ uVar7) + uRam00000001833e7420 ^ 0x34d584e0c8bb1e;
  uRam00000001833e7618 = (uRam00000001833e7618 * 0x5c1d1acf0d825a97 ^ uRam00000001833e7298) + uVar7;
  uRam00000001833e7230 = uRam00000001833e7618 ^ uRam00000001833e7298;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x7089,0x13d);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f051dd8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827fc8e8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; Dq (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18f056a10, runtime 6ffff6c66a10) =====

void FUN_18f056a10(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018f056a4c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827fe4c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bh; Dr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18efcea20, runtime 6ffff6bdea20) =====

void FUN_18efcea20(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018efcea9d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827e18a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; Ds (IJ)I (handler @ image 18efd14e0, runtime 6ffff6be14e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18efd14e0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar10;
  undefined1 auVar9 [16];
  ulonglong uVar11;
  
  uRam00000001833e4ac0 = func_0x00018efdca20(uRam00000001833e4a90 + 0xb72c2e7154945186 ^ 0xe1);
  uRam00000001833e4ae8 =
       (uRam00000001833e4ae8 ^ uRam00000001833e4a98 * 0x755db7da7d4880a5) + 0xbbb5effffdfcffed ^
       0x76ed9236d17fa414;
  uRam00000001833e4958 =
       (uRam00000001833e4a58 * 0x161ce092cf35734b ^ uRam00000001833e4ae8) +
       uRam00000001833e4a98 * 0x755db7da7d4880a5 ^ uRam00000001833e4ae8;
  uRam00000001833e4a58 = 0xbbb5effffdfcffed;
  uVar4 = (~uRam00000001833e4a00 + 0xfbcfcfd2fd6bbaf1) *
          ((uRam00000001833e4ad0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833e4ad0 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001833e49f0) + (uVar4 & uRam00000001833e49f0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e4900 =
       func_0x00018efdca20((uVar4 | 0xfbcfcfd2794999d5) + (uVar4 & 0xfbcfcfd2794999d5));
  uRam00000001833e4a08 =
       (uRam00000001833e4a08 ^ uRam00000001833e4aa8) + 0x430302d02944510 ^ 0xb0f989bd795a009f;
  uRam00000001833e4a98 =
       (uRam00000001833e4a98 * -0x1171701c642a3d03 ^ uRam00000001833e4a08) + uRam00000001833e4aa8;
  uRam00000001833e4960 = uRam00000001833e4a98 ^ uRam00000001833e4a08;
  uRam00000001833e4978 = 0x430302d02944510;
  uRam00000001833e49f0 = func_0x00018efdca20(uRam00000001833e4ac8 ^ 0xaedd3ca6d942c7b3);
  uVar4 = uRam00000001833e49f0 ^ 0xec19aee2e00c3aef;
  uRam00000001833e4a80 = uRam00000001833e4970 ^ uVar4 ^ 0xfbcfcfd2fd6c3aef;
  uRam00000001833e4aa8 = (uRam00000001833e4aa8 ^ uVar4) + 0xfbcfcfd2fd6c3aef ^ 0x98f807e32dda276f;
  uRam00000001833e4a90 = (uRam00000001833e4a90 * 0x3bb60d5212c2a1cb ^ uRam00000001833e4aa8) + uVar4;
  uRam00000001833e4ad8 = uRam00000001833e4a90 ^ uRam00000001833e4aa8;
  uRam00000001833e4980 = 0xfbcfcfd2fd6c3aef;
  uVar4 = (uRam00000001833e4a20 ^ _UNK_1827e4600) + uRam00000001833e4a60 + 0xfbcfcfd2794e19ca;
  uVar10 = (uRam00000001833e4a60 ^ _UNK_1827e4608) + uRam00000001833e4a20 + 0x430302d02944510;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e4a20 ^ _UNK_1827e4600;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833e4a60 ^ _UNK_1827e4608;
  uRam00000001833e4ac0 =
       func_0x00018efdca20((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001833e4a20 + 0x430302d02944510) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001833e4a60 + 0xfbcfcfd2794e19ca));
  uVar4 = uRam00000001833e4900 - (uRam00000001833e4900 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001833e4900;
  uRam00000001833e4960 = uRam00000001833e49e8 ^ uVar4 ^ 0x7fff;
  uRam00000001833e4a38 = (uRam00000001833e4a38 ^ uVar4) + 0x7fff ^ 0x2242948aae9ce0e4;
  uRam00000001833e4ab0 = (uRam00000001833e4ab0 * 0x59acf2e818ac903 ^ uRam00000001833e4a38) + uVar4;
  uRam00000001833e4908 = uRam00000001833e4ab0 ^ uRam00000001833e4a38;
  uRam00000001833e49c0 = 0x7fff;
  uRam00000001833e4910 = func_0x00018efdca20(uRam00000001833e4a10 ^ 0x98b968f1b55768cc);
  uRam00000001833e4ab0 =
       (uRam00000001833e4ab0 ^ uRam00000001833e4910 ^ 0xb199d99b95da7cf0) + 0x4e6626646a258310 ^
       0x61c888e4f82c55d4;
  uRam00000001833e4a28 =
       (uRam00000001833e4a28 * -0x3d7fe6b1db3d8bef ^ uRam00000001833e4ab0) +
       (uRam00000001833e4910 ^ 0xb199d99b95da7cf0);
  uRam00000001833e4ad0 = uRam00000001833e4a28 ^ uRam00000001833e4ab0;
  uRam00000001833e49a0 = 0x4e6626646a258310;
  uVar4 = (uRam00000001833e49e0 ^ _UNK_1827e4610) + uRam00000001833e4928 + 0x84225cda;
  uVar10 = (uRam00000001833e4928 ^ _UNK_1827e4618) + uRam00000001833e49e0 + 0xb199d99b95da7cf0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e49e0 ^ _UNK_1827e4610;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833e4928 ^ _UNK_1827e4618;
  uVar4 = func_0x00018efdca20((uVar10 << 0x1d | uVar10 >> 0x23) -
                              (uRam00000001833e49e0 + 0xb199d99b95da7cf0) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e4928 + 0x84225cda))
  ;
  uRam00000001833e4930 = uRam00000001833e4a28 ^ uVar4 ^ 0xb199d99b95dafcef;
  uRam00000001833e4a10 = (uRam00000001833e4a10 ^ uVar4) + 0xb199d99b95dafcef ^ 0x94ef0615d6c6740a;
  uRam00000001833e4ac0 = (uRam00000001833e4ac0 * 0x14fe5589032c9787 ^ uRam00000001833e4a10) + uVar4;
  uRam00000001833e4a78 = uRam00000001833e4ac0 ^ uRam00000001833e4a10;
  uRam00000001833e4908 = 0xb199d99b95dafcef;
  uVar4 = (~uRam00000001833e4928 + 0x4e6626646a258311) *
          ((uRam00000001833e4ab0 ^ 0xb199d99b11f8dfca) +
          (uRam00000001833e4ab0 & 0x3199d99b11f8dfca) * 2);
  uVar4 = (uVar4 | uRam00000001833e4978) + (uVar4 & uRam00000001833e4978);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e49f8 =
       func_0x00018efdca20((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = uRam00000001833e49f8 << 0x10 | uRam00000001833e49f8 >> 0x30;
  uRam00000001833e4aa8 = uRam00000001833e4a60 ^ uVar4 ^ 0x7fff;
  uRam00000001833e4930 = (uRam00000001833e4930 ^ uVar4) + 0x7fff ^ 0xa1b59a69f7e502b;
  uRam00000001833e4950 = (uRam00000001833e4950 * -0x6708b52b00dbed3b ^ uRam00000001833e4930) + uVar4
  ;
  uRam00000001833e4a48 = uRam00000001833e4950 ^ uRam00000001833e4930;
  uRam00000001833e4a98 = 0x7fff;
  uVar4 = (~uRam00000001833e49e8 + 0x740e4a1fc6cf1179) *
          ((uRam00000001833e4a68 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833e4a68 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001833e4980) + (uVar4 & uRam00000001833e4980);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e4998 =
       func_0x00018efdca20((uVar4 | 0x740e4a1f42ed325d) + (uVar4 & 0x740e4a1f42ed325d));
  uRam00000001833e49d0 = uRam00000001833e49d0 + 0x8bf1b5e03930ee88 ^ 0xda8b48e1bcd8bd97;
  uRam00000001833e4a68 = uRam00000001833e4a28 * 0x2d30c56d363faa29;
  uRam00000001833e4a28 = uRam00000001833e4a68 ^ uRam00000001833e49d0;
  uRam00000001833e4a58 = 0x8bf1b5e03930ee88;
  uVar4 = (uRam00000001833e4af0 ^ _UNK_1827e4620) + uRam00000001833e4948 + 0x84225cda;
  uVar10 = (uRam00000001833e4948 ^ _UNK_1827e4628) + uRam00000001833e4af0 + 0x740e4a1fc6cf1178;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e4af0 ^ _UNK_1827e4620;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833e4948 ^ _UNK_1827e4628;
  uRam00000001833e4ae8 =
       func_0x00018efdca20((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001833e4af0 + 0x740e4a1fc6cf1178) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e4948 + 0x84225cda));
  uVar4 = (uRam00000001833e4ae8 ^ 0x740e4a1fc6cf0000) << 0x1f |
          (uRam00000001833e4ae8 ^ 0x740e4a1fc6cf0000) >> 0x21;
  uRam00000001833e4a60 = uRam00000001833e49a8 ^ uVar4 ^ 0x740e4a1fc6cf9177;
  uRam00000001833e4a40 = (uRam00000001833e4a40 ^ uVar4) + 0x740e4a1fc6cf9177 ^ 0xb901032fc1511a0d;
  uRam00000001833e4988 = (uRam00000001833e4988 * 0x4e8c2d1573dbf71f ^ uRam00000001833e4a40) + uVar4;
  uRam00000001833e4a30 = uRam00000001833e4988 ^ uRam00000001833e4a40;
  uRam00000001833e4ad0 = 0x740e4a1fc6cf9177;
  uRam00000001833e4ae0 = func_0x00018efdca20(uRam00000001833e49c8 ^ 0x14dc253ac63ed375);
  uVar10 = uRam00000001833e4ae0 ^ 0x2f39d5255cd1e938;
  uVar4 = uVar10 >> 1 | uVar10;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ~(0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar10
           ) & 0x740e4a1fc6cf9177;
  uRam00000001833e4a30 = uRam00000001833e4910 ^ uVar4 ^ 0x7fff;
  uRam00000001833e4ad8 = (uRam00000001833e4ad8 ^ uVar4) + 0x7fff ^ 0x2b1148c24108a;
  uRam00000001833e4900 = (uRam00000001833e4900 * -0x9becd41deed29e1 ^ uRam00000001833e4ad8) + uVar4;
  uRam00000001833e4930 = uRam00000001833e4900 ^ uRam00000001833e4ad8;
  uRam00000001833e4a00 = 0x7fff;
  uVar4 = (~uRam00000001833e4980 + 0xf6942bedf3c4077c) *
          ((uRam00000001833e4a68 ^ 0xbbb5efff79dedcc8) +
          (uRam00000001833e4a68 & 0x3bb5efff79dedcc8) * 2);
  uVar4 = (uVar4 | uRam00000001833e4ae8) + (uVar4 & uRam00000001833e4ae8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e4ac8 =
       func_0x00018efdca20((uVar4 | 0x4d21c4128a1adbb3) + (uVar4 & 0x4d21c4128a1adbb3));
  uVar4 = (uRam00000001833e4ac8 ^ 0xbbb5effffdfcffed) & 0x7fffffffffff;
  uVar10 = uVar4 - ((uRam00000001833e4ac8 ^ 0xbbb5effffdfcffed) >> 1 & 0x155555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar4;
  uRam00000001833e4948 = uRam00000001833e4908 ^ uVar4 ^ 0xb24a1bedf1c10768;
  uRam00000001833e4ae0 = (uRam00000001833e4ae0 ^ uVar4) + 0xb24a1bedf1c10768 ^ 0xb90287f264d6c1f6;
  uRam00000001833e4920 = (uRam00000001833e4920 * 0x2b3254bbaf18c9b9 ^ uRam00000001833e4ae0) + uVar4;
  uRam00000001833e4940 = uRam00000001833e4920 ^ uRam00000001833e4ae0;
  uRam00000001833e4a40 = uRam00000001833e4a28 ^ 0xb24a1bedf1c10768;
  uRam00000001833e4980 = 0xb24a1bedf1c10768;
  uRam00000001833e4ab8 = func_0x00018efdca20(uRam00000001833e4968 ^ 0xea720869343ead0);
  uRam00000001833e4a88 =
       (uRam00000001833e4a88 ^ uRam00000001833e4ab8 & 0x7fffffffffffffff) + 0x4d21c4120e38f896 ^
       0x8339b0ac7ce83701;
  uRam00000001833e4948 =
       (uRam00000001833e4948 * -0x4641ee7e98fc78dd ^ uRam00000001833e4a88) +
       (uRam00000001833e4ab8 & 0x7fffffffffffffff);
  uRam00000001833e4a40 = uRam00000001833e4948 ^ uRam00000001833e4a88;
  uRam00000001833e4a48 = 0x4d21c4120e38f896;
  uRam00000001833e4988 = func_0x00018efdca20(uRam00000001833e4928 ^ 0x382cf6971e6e8e66);
  uVar4 = (uRam00000001833e4988 ^ 0x4d21c4120e38f896) * -0x18f156bccff2e3df;
  uRam00000001833e4900 = uRam00000001833e4960 ^ uVar4 ^ 0xb24a1bedf1c10768;
  uRam00000001833e4a70 = (uRam00000001833e4a70 ^ uVar4) + 0xb24a1bedf1c10768 ^ 0x438b5d527e300c51;
  uRam00000001833e49f8 = (uRam00000001833e49f8 * -0xe69a9957b80295 ^ uRam00000001833e4a70) + uVar4;
  uRam00000001833e4aa8 = uRam00000001833e49f8 ^ uRam00000001833e4a70;
  uRam00000001833e4958 = 0xb24a1bedf1c10768;
  uVar4 = (uRam00000001833e4930 ^ _UNK_1827e4630) + uRam00000001833e4af0 + 0xb24a1bed75e3244d;
  uVar10 = (uRam00000001833e4af0 ^ _UNK_1827e4638) + uRam00000001833e4930 + 0xb24a1bedf1c10768;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e4930 ^ _UNK_1827e4630;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833e4af0 ^ _UNK_1827e4638;
  uVar4 = func_0x00018efdca20((uVar10 << 0x1d | uVar10 >> 0x23) -
                              (uRam00000001833e4930 + 0xb24a1bedf1c10768) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) -
                              (uRam00000001833e4af0 + 0xb24a1bed75e3244d));
  uVar10 = (uVar4 ^ 0x2364a80dfb06da40) >> 1 | uVar4 ^ 0x2364a80dfb06da40;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uRam00000001833e4918 =
       uVar4 ^ 0x912eb3e00ac7dd28 ^
       (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2;
  uRam00000001833e4a90 = uRam00000001833e4a90 ^ uRam00000001833e4918 ^ 0xa51d4e5d363d449b;
  uRam00000001833e49b8 = (uVar4 * -0x26054650baf042a9 ^ uRam00000001833e4a90) + uRam00000001833e4918
  ;
  uRam00000001833e4ae0 = uRam00000001833e49b8 ^ uRam00000001833e4a90;
  uRam00000001833e4a58 = 0;
  uVar4 = ((uRam00000001833e4ab8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833e4ab8 & 0x84225cda) * 2) * -uRam00000001833e4a38;
  uVar4 = (uVar4 | uRam00000001833e4a08) + (uVar4 & uRam00000001833e4a08);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e4938 =
       func_0x00018efdca20((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uRam00000001833e4af8 = uRam00000001833e4a98 ^ uRam00000001833e4938 ^ 0x7fff;
  uRam00000001833e4a50 = (uRam00000001833e4a50 ^ uRam00000001833e4938) + 0x7fff ^ 0x6729d89df241689b
  ;
  uRam00000001833e4918 =
       (uRam00000001833e4918 * -0x5e30c978339f55c3 ^ uRam00000001833e4a50) + uRam00000001833e4938;
  uRam00000001833e4940 = uRam00000001833e4918 ^ uRam00000001833e4a50;
  uRam00000001833e4ab8 = 0x7fff;
  uVar4 = ~uRam00000001833e4998 *
          ((uRam00000001833e4a58 ^ 0xbbb5efff79dedcc8) +
          (uRam00000001833e4a58 & 0x3bb5efff79dedcc8) * 2);
  uVar4 = (uVar4 | uRam00000001833e4900) + (uVar4 & uRam00000001833e4900);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e4980 =
       func_0x00018efdca20((uVar4 | 0x444a100086212337) + (uVar4 & 0x444a100086212337));
  uRam00000001833e49d8 =
       (uRam00000001833e49d8 ^ uRam00000001833e4980 ^ 0xbbb5effffdfcffed) + 0x444a100002030012 ^
       0x2bd60ab41a0ca392;
  uRam00000001833e4af0 =
       (uRam00000001833e4af0 * 0x7a82fedb7a42ab2f ^ uRam00000001833e49d8) +
       (uRam00000001833e4980 ^ 0xbbb5effffdfcffed);
  uRam00000001833e4ab0 = uRam00000001833e4af0 ^ uRam00000001833e49d8;
  uRam00000001833e49f0 = 0x444a100002030012;
  uRam00000001833e4918 = func_0x00018efdca20(uRam00000001833e4a68 + 0x4734e536ba9ca57e ^ 0xce);
  uVar4 = uRam00000001833e4918 >> 1 | uRam00000001833e4918;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001833e4918;
  uRam00000001833e49e0 = uRam00000001833e49e0 ^ uVar4 ^ 0x1dfc3bcdd4d66359;
  uRam00000001833e4a08 = (uRam00000001833e4a08 * 0x40f6567bedc2e6af ^ uRam00000001833e49e0) + uVar4;
  uRam00000001833e4950 = 0;
  uVar4 = (uRam00000001833e4a80 ^ 0x84225cda) + uRam00000001833e4960 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e4a80 ^ 0x84225cda;
  uVar10 = ((uRam00000001833e4960 + uRam00000001833e4a80) * 0x2000 |
           uRam00000001833e4960 + uRam00000001833e4a80 >> 0x33) ^ uRam00000001833e4960;
  uRam00000001833e49e8 =
       func_0x00018efdca20((uVar10 << 0x1d | uVar10 >> 0x23) - uRam00000001833e4a80 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e4960 + 0x84225cda));
  uVar4 = uRam00000001833e49e8 - (uRam00000001833e49e8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001833e49e8) << 0x2b | uRam00000001833e49e8 >> 0x15;
  uRam00000001833e4a70 = uRam00000001833e4958 ^ uVar4 ^ 0x7fff;
  uRam00000001833e49b0 = (uRam00000001833e4a68 ^ uVar4) + 0x7fff ^ 0x1254d49957f6528f;
  uRam00000001833e4a68 = (uRam00000001833e4a68 * -0x1fe3d8a2aabb24bd ^ uRam00000001833e49b0) + uVar4
  ;
  uRam00000001833e49b0 = uRam00000001833e4a68 ^ uRam00000001833e49b0;
  uRam00000001833e49f0 = 0x7fff;
  uRam00000001833e4a08 = func_0x00018efdca20(uRam00000001833e4900 ^ 0x1eff7c1affdd52);
  uVar10 = uRam00000001833e4a08 ^ 0xb189ca0e4d9dd2b4;
  uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar10;
  uRam00000001833e4a38 = uRam00000001833e4a38 ^ uVar10 ^ 0x8674dbea92faaf9f;
  uRam00000001833e49a8 =
       (uRam00000001833e49a8 * -0x6f480191f9496349 ^ uRam00000001833e4a38) + uVar10;
  uRam00000001833e4960 = uRam00000001833e49a8 ^ uRam00000001833e4a38;
  uRam00000001833e4a70 = 0;
  uRam00000001833e4a20 = func_0x00018efdca20(uRam00000001833e4aa0 + 0xffa4007c260021ff ^ 0x52);
  auVar8 = _UNK_1800170c0;
  uVar4 = uRam00000001833e4a20 & 0xfffffffff8000000;
  uRam00000001833e4920 = uRam00000001833e4a48 ^ uVar4 ^ 0x7fff;
  uRam00000001833e4a10 = (uRam00000001833e4a10 ^ uVar4) + 0x7fff ^ 0x5f87db31e2bfd12a;
  uRam00000001833e4a98 = (uRam00000001833e4a98 * -0x44b5f56ec8a3b933 ^ uRam00000001833e4a10) + uVar4
  ;
  uRam00000001833e4968 = uRam00000001833e4a98 ^ uRam00000001833e4a10;
  auVar9._8_8_ = _UNK_18019c088;
  auVar9._0_8_ = param_4 ^ 0x84222325;
  uRam00000001833e4978 = 0x7fff;
  auVar6 = pshufb(auVar9 ^ _UNK_1827e4640,_UNK_1800170c0);
  uVar10 = auVar6._8_8_ + auVar6._0_8_;
  uVar4 = uVar10 + uRam00000001833e4998;
  if (auVar6._4_4_ < 0) {
    uVar4 = uRam00000001833e4948 ^ uVar10;
  }
  uRam00000001833e4a28 = func_0x00018efdca20(SUB161(auVar9 ^ _UNK_1827e4640,5) ^ uVar4);
  uVar4 = param_4 * 0x7fff ^ uRam00000001833e4a28;
  uVar4 = uVar4 << 0x18 | uVar4 >> 0x28;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar2;
  uRam00000001833e4a80 = (uRam00000001833e4a80 ^ uVar4) + uVar10 ^ 0xffd66f1131394d39;
  uRam00000001833e4930 = (uRam00000001833e4930 * 0x5c7e7cb48ecefbb5 ^ uRam00000001833e4a80) + uVar4;
  uRam00000001833e49d0 = uRam00000001833e4930 ^ uRam00000001833e4a80;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar2 ^ 0x84222325;
  auVar6._8_4_ = param_3;
  auVar6._12_4_ = 0;
  auVar9 = pshufb(auVar6 ^ _UNK_1827e4650,auVar8);
  uVar5 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar5 + uRam00000001833e4968;
  if (auVar9._4_4_ < 0) {
    uVar4 = uRam00000001833e4ad0 ^ uVar5;
  }
  uRam00000001833e4a90 = uVar10;
  uRam00000001833e4a28 = func_0x00018efdca20(SUB161(auVar6 ^ _UNK_1827e4650,5) ^ uVar4);
  uVar10 = (uVar10 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001833e49f8 =
       (uRam00000001833e49f8 ^ uRam00000001833e4a28 & 0x7fffffffffffffff) + uVar10 ^
       0x44eb1c4b091fcc97;
  uRam00000001833e49b0 =
       (uRam00000001833e49b0 * -0x5a12d42c89e1d64b ^ uRam00000001833e49f8) +
       (uRam00000001833e4a28 & 0x7fffffffffffffff);
  uRam00000001833e4980 = uRam00000001833e49b0 ^ uRam00000001833e49f8;
  uVar5 = uVar10 & 0xffffffff;
  uVar4 = (~uRam00000001833e4968 + 0x4793ee1d) *
          ((uRam00000001833e4ac8 ^ 0x8422165a) +
          (ulonglong)((uint)uRam00000001833e4ac8 & 0x8422165a) * 2);
  uVar4 = (uVar4 | uRam00000001833e4938) + (uVar4 & uRam00000001833e4938);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e4ad0 = uVar5;
  uRam00000001833e4a60 =
       func_0x00018efdca20((uVar4 | 0xc3b1f846) + (ulonglong)((uint)uVar4 & 0xc3b1f846));
  uVar4 = uRam00000001833e4a60 ^ 0x1163;
  uRam00000001833e4a48 =
       (uRam00000001833e4998 ^ uVar4 ^ 0x4794239b ^ uVar4) + 0x4794239b ^ 0x3579bc37693736bc;
  uRam00000001833e4a10 = (uRam00000001833e4a10 * 0x5a2a7aa8967a4093 ^ uRam00000001833e4a48) + uVar4;
  uRam00000001833e4a28 = uRam00000001833e4a10 ^ uRam00000001833e4a48;
  uRam00000001833e4990 = 0x4794239b;
  uVar4 = (uRam00000001833e4998 ^ _UNK_1827e4660) + uRam00000001833e4908 + 0xc3b600be;
  uVar11 = (uRam00000001833e4908 ^ _UNK_1827e4668) + uRam00000001833e4998 + 0xb86c11e4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e4998 ^ _UNK_1827e4660;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001833e4908 ^ _UNK_1827e4668;
  uRam00000001833e49c8 =
       func_0x00018efdca20((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam00000001833e4998 + 0xb86c11e4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e4908 + 0xc3b600be));
  uRam00000001833e4ac0 =
       (uRam00000001833e4ac0 ^ uRam00000001833e49c8 & 0x7fffffffffffff) + 0x10000357f ^
       0xaaa048910fd26df2;
  uRam00000001833e4ad8 =
       (uRam00000001833e4ad8 * -0x3d9fe905268e55b ^ uRam00000001833e4ac0) +
       (uRam00000001833e49c8 & 0x7fffffffffffff);
  uRam00000001833e4af8 = 0x357f;
  uVar4 = (~uRam00000001833e4a30 + 0x9fcc8021) *
          ((uRam00000001833e49d8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833e49d8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001833e4af0) + (uVar4 & uRam00000001833e4af0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e4ae0 =
       func_0x00018efdca20((uVar4 | 0x1beea305) + (ulonglong)((uint)uVar4 & 0x1beea305));
  uRam00000001833e4988 =
       (uRam00000001833e4988 ^ uRam00000001833e4ae0 & 0xffffffffff000000) - 0x9fcc8020 ^
       0x6eb4ac673f93f471;
  uRam00000001833e49c0 =
       (uRam00000001833e49c0 * -0x4ba816f812a92003 ^ uRam00000001833e4988) +
       (uRam00000001833e4ae0 & 0xffffffffff000000);
  uRam00000001833e4a40 = uRam00000001833e49c0 ^ uRam00000001833e4988;
  uRam00000001833e4a20 = 0x60337fe0;
  uRam00000001833e4a48 = func_0x00018efdca20(uRam00000001833e4ae8 ^ 0xffa7003b4a00b22f);
  uVar4 = uRam00000001833e4a48 >> 1 | uRam00000001833e4a48;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uRam00000001833e4a48 ^ 0x9fccb59f ^
          (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80;
  uVar4 = uVar4 << 0x29 | uVar4 >> 0x17;
  uRam00000001833e4960 = uRam00000001833e4900 ^ uVar4 ^ 0x10000357f;
  uRam00000001833e4a18 = (uRam00000001833e4a18 ^ uVar4) + 0x10000357f ^ 0x7cf5450fe5139c3b;
  uRam00000001833e4ab8 = (uRam00000001833e4ab8 * -0x75387656d123a289 ^ uRam00000001833e4a18) + uVar4
  ;
  uRam00000001833e4ac8 = uRam00000001833e4ab8 ^ uRam00000001833e4a18;
  uRam00000001833e4a38 = 0x357f;
  uVar4 = (uRam00000001833e4a30 ^ _UNK_1827e4670) + uRam00000001833e49c0 + 0x7edfdeaf;
  uVar11 = (uRam00000001833e49c0 ^ _UNK_1827e4678) + uRam00000001833e4a30 + 0x53414ee;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e4a30 ^ _UNK_1827e4670;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001833e49c0 ^ _UNK_1827e4678;
  uRam00000001833e4988 =
       func_0x00018efdca20((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam00000001833e4a30 + 0x53414ee) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e49c0 + 0x7edfdeaf));
  uVar4 = uRam00000001833e4988 * 0x61d0f4f30165d4b9;
  uRam00000001833e4960 = uRam00000001833e4a38 ^ uVar4 ^ 0x100321278;
  uRam00000001833e4a98 = (uRam00000001833e4a98 ^ uVar4) + 0x100321278 ^ 0xd6ee4a4750277b98;
  uRam00000001833e4aa0 = (uRam00000001833e4aa0 * 0x487add36d8d56485 ^ uRam00000001833e4a98) + uVar4;
  uRam00000001833e4a30 = uRam00000001833e4aa0 ^ uRam00000001833e4a98;
  uRam00000001833e49a0 = 0x321278;
  uVar4 = func_0x00018efdca20(uRam00000001833e4a10 + 0xff1f00292aff7eff ^ 0xb9);
  uRam00000001833e4ad8 = uRam00000001833e4948 ^ uVar4 ^ 0x100321278;
  uRam00000001833e49d8 = (uRam00000001833e49d8 ^ uVar4) + 0x100321278 ^ 0x92d58d8dc70a7552;
  uRam00000001833e4a98 = (uRam00000001833e4a98 * -0x707ad51b09d43e43 ^ uRam00000001833e49d8) + uVar4
  ;
  uRam00000001833e4990 = uRam00000001833e4a98 ^ uRam00000001833e49d8;
  uRam00000001833e4a30 = 0x321278;
  uRam00000001833e4a08 = func_0x00018efdca20(uRam00000001833e4ac8 + 0xffdcff8422ffe1ff ^ 0x59);
  uRam00000001833e4a90 = uRam00000001833e4a08 ^ 0x9cb38070a38;
  uRam00000001833e49b8 = uRam00000001833e49b8 ^ uRam00000001833e4a90 ^ 0x5f41e9dacd4920a4;
  uRam00000001833e49c8 =
       (uRam00000001833e49c8 * 0x338089824ac0a653 ^ uRam00000001833e49b8) + uRam00000001833e4a90;
  uRam00000001833e4ac8 = uRam00000001833e49c8 ^ uRam00000001833e49b8;
  uRam00000001833e49a0 = 0;
  uVar4 = (uRam00000001833e4a58 ^ 0x8422165a) + uRam00000001833e4a30 + 0x8422165a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e4a58 ^ 0x8422165a;
  uVar11 = ((uRam00000001833e4a30 + uRam00000001833e4a58) * 0x2000 |
           uRam00000001833e4a30 + uRam00000001833e4a58 >> 0x33) ^ uRam00000001833e4a30;
  uRam00000001833e4ac8 =
       func_0x00018efdca20((uVar11 << 0x1d | uVar11 >> 0x23) - uRam00000001833e4a58 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e4a30 + 0x8422165a));
  uRam00000001833e4a00 = uRam00000001833e4950 ^ uRam00000001833e4ac8 ^ 0x357f;
  uRam00000001833e4a78 = (uRam00000001833e4a78 ^ uRam00000001833e4ac8) + 0x357f ^ 0x92aaaa25f68a0264
  ;
  uRam00000001833e4a18 =
       (uRam00000001833e4a18 * -0x47021cb6b198dd73 ^ uRam00000001833e4a78) + uRam00000001833e4ac8;
  uRam00000001833e4af8 = uRam00000001833e4a18 ^ uRam00000001833e4a78;
  uRam00000001833e4a50 = 0x357f;
  uVar4 = (~uRam00000001833e49e0 + 0x100000000) *
          ((uRam00000001833e4900 ^ 0x7edfdeaf) +
          (ulonglong)((uint)uRam00000001833e4900 & 0x7edfdeaf) * 2);
  uVar4 = (uVar4 | uRam00000001833e4980) + (uVar4 & uRam00000001833e4980);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833e4a20 =
       func_0x00018efdca20((uVar4 | 0x81202150) + (ulonglong)((uint)uVar4 & 0x81202150));
  uRam00000001833e49a0 =
       (uRam00000001833e49a0 ^ uRam00000001833e4a20) + 0x5020275 ^ 0x9d3529a8cf703268;
  uRam00000001833e4990 =
       (uRam00000001833e4990 * 0x44790133b08074a9 ^ uRam00000001833e49a0) + uRam00000001833e4a20;
  uRam00000001833e49a0 = uRam00000001833e4990 ^ uRam00000001833e49a0;
  uRam00000001833e4a68 = 0x5020275;
  uVar4 = (uRam00000001833e49a0 ^ _UNK_1827e4680) + uRam00000001833e49f8 + 0x7edfdeaf;
  uVar11 = (uRam00000001833e49f8 ^ _UNK_1827e4688) + uRam00000001833e49a0 + 0x5020275;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e49a0 ^ _UNK_1827e4680;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001833e49f8 ^ _UNK_1827e4688;
  uRam00000001833e49d8 =
       func_0x00018efdca20((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam00000001833e49a0 + 0x5020275) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e49f8 + 0x7edfdeaf));
  uVar4 = (ulonglong)(~(uint)uRam00000001833e49d8 & 0xfafdfd8a);
  uRam00000001833e4a80 = uRam00000001833e4a80 ^ uVar4 ^ 0x62630a53998b08ab;
  uRam00000001833e4a48 =
       (uRam00000001833e4a48 * 0x4c68cf7be13f727f ^ uRam00000001833e4a80) + uVar4 ^
       uRam00000001833e4a80;
  uRam00000001833e4928 = 0;
  uVar4 = (uRam00000001833e4ac0 ^ 0x8422165a) + uRam00000001833e4ac0 + 0x8422165a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e4ac0 ^ 0x8422165a;
  uVar11 = (uRam00000001833e4ac0 << 0xe | (uRam00000001833e4ac0 & 0x7fffffffffffffff) >> 0x32) ^
           uRam00000001833e4ac0;
  uRam00000001833e4998 =
       func_0x00018efdca20((uVar11 << 0x1d | uVar11 >> 0x23) - uRam00000001833e4ac0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e4ac0 + 0x8422165a));
  uVar4 = uRam00000001833e4998 & 0x7fffffffffffffff;
  uRam00000001833e49c8 = uRam00000001833e4938 ^ uVar4 ^ 0x357f;
  uRam00000001833e4ae8 = (uRam00000001833e4ae8 ^ uVar4) + 0x357f ^ 0xe441dd790fd9d7a5;
  uRam00000001833e4908 = (uRam00000001833e4908 * 0x239402159865c93f ^ uRam00000001833e4ae8) + uVar4;
  uRam00000001833e4918 = uRam00000001833e4908 ^ uRam00000001833e4ae8;
  uRam00000001833e4a38 = 0x357f;
  uVar4 = (uRam00000001833e49f8 ^ 0x8422165a) + uRam00000001833e4988 + 0x8422165a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833e49f8 ^ 0x8422165a;
  uVar11 = ((uRam00000001833e4988 + uRam00000001833e49f8) * 0x2000 |
           uRam00000001833e4988 + uRam00000001833e49f8 >> 0x33) ^ uRam00000001833e4988;
  uRam00000001833e4a40 =
       func_0x00018efdca20((uVar11 << 0x1d | uVar11 >> 0x23) - uRam00000001833e49f8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833e4988 + 0x8422165a));
  uVar4 = uRam00000001833e4a40 << 0x36 | uRam00000001833e4a40 >> 10;
  uRam00000001833e49f0 = uRam00000001833e4970 ^ uVar4 ^ 0x357f;
  uRam00000001833e4a90 = (uRam00000001833e4a90 ^ uVar4) + 0x357f ^ 0x2eb3cfc16993b1c6;
  uRam00000001833e4ae8 = (uRam00000001833e4ae8 * -0x5ab963eb161f79 ^ uRam00000001833e4a90) + uVar4;
  uRam00000001833e4af0 = uRam00000001833e4ae8 ^ uRam00000001833e4a90;
  auVar7._8_8_ = _UNK_1827e4698;
  auVar7._0_8_ = uVar5 ^ 0x84222325;
  uRam00000001833e4a70 = 0x357f;
  auVar8 = pshufb(auVar7 ^ _UNK_1827e46a0,auVar8);
  uVar11 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar11 + uRam00000001833e4ab8;
  if (auVar8._4_4_ < 0) {
    uVar4 = uRam00000001833e4988 ^ uVar11;
  }
  uVar4 = func_0x00018efdca20(SUB161(auVar7 ^ _UNK_1827e46a0,5) ^ uVar4);
  lVar3 = uVar5 - ((uint)uVar10 & 0x357f) * 2;
  uRam00000001833e4ad8 = (uRam00000001833e4ad8 ^ uVar4) + lVar3 + 0x357f ^ 0x4f1a328ca98b3bbe;
  uRam00000001833e4910 = (uRam00000001833e4910 * 0x73baea24c41f4ad1 ^ uRam00000001833e4ad8) + uVar4;
  uRam00000001833e4ae8 = uRam00000001833e4910 ^ uRam00000001833e4ad8;
  uRam00000001833e4ab8 = lVar3 + 0x357fU & 0xffffffff;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x7089,0x13d);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018efd3873 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827e27a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; Dt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18efdcab0, runtime 6ffff6becab0) =====

void FUN_18efdcab0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018efdcafb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827e47d0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bh; Du (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18efddac0, runtime 6ffff6bedac0) =====

void FUN_18efddac0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018efddb49 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827e4d90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; _e08a76d36db0a6ffacf3e754f4e33af5 ()V (handler @ image 18efe07d0, runtime 6ffff6bf07d0) =====

void FUN_18efe07d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018efe08b8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827e5d90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; bV (Lsixtwo/lC;)V (handler @ image 18efccc10, runtime 6ffff6bdcc10) =====

void FUN_18efccc10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x245,0xe);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018efcccb5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827e0e10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bh; dk (DDLsixtwo/mA;)Z (handler @ image 18eff6970, runtime 6ffff6c06970) =====

void FUN_18eff6970(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x7089,0x13d);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018eff6a69 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827e8820 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



