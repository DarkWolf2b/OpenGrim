// ===== Lsixtwo/dC; _0e4bb2ce906b33207e6d0df4d0a853af ()V (handler @ image 18dfa1aa0, runtime 6ffff5bb1aa0) =====

void FUN_18dfa1aa0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dfa1b88 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18243edd8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dC; akA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18dffd9b0, runtime 6ffff5c0d9b0) =====

void FUN_18dffd9b0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dffda39 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18244c190 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dC; akr (Lsixtwo/gl;)V (handler @ image 18df99450, runtime 6ffff5ba9450) =====

void FUN_18df99450(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x910a,0x19a);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018df994e5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18243b8d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dC; aks (Lsixtwo/gt;)V (handler @ image 18df9f980, runtime 6ffff5baf980) =====

void FUN_18df9f980(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x910a,0x19a);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018df9f9dc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18243e000 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dC; akt (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18dfbd8b0, runtime 6ffff5bcd8b0) =====

undefined8 FUN_18dfbd8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/dC; aku ([B)Ljava/lang/String; (handler @ image 18dfbd940, runtime 6ffff5bcd940) =====

void FUN_18dfbd940(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018dfbd9e3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182441780 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dC; akv (IJ)Ljava/lang/String; (handler @ image 18dfe6840, runtime 6ffff5bf6840) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dfe6840(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uRam0000000183398810 = func_0x00018dfedd60(uRam00000001833987d0 + 0x86f2064a6093fc79 ^ 0xf5);
  uRam0000000183398878 =
       (uRam0000000183398878 ^ uRam0000000183398810 ^ 0xab1fb5bff9f13fbd) + 0x8a0e949f71212d85 ^
       0xd54b38282a041ffa;
  uRam0000000183398bd0 =
       (uRam0000000183398bd0 * 0x699d014608d92a95 ^ uRam0000000183398878) +
       (uRam0000000183398810 ^ 0xab1fb5bff9f13fbd);
  uRam0000000183398cd8 = uRam0000000183398bd0 ^ uRam0000000183398878;
  uRam0000000183398aa0 = 0x8a0e949f71212d85;
  uVar3 = (uRam0000000183398ba0 ^ _UNK_1824485b0) + uRam00000001833988e0 + 0x84222325;
  uVar4 = (uRam00000001833988e0 ^ _UNK_1824485b8) + uRam0000000183398ba0 + 0xceec10c55de40fe;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398ba0 ^ _UNK_1824485b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833988e0 ^ _UNK_1824485b8;
  uRam0000000183398948 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183398ba0 + 0xceec10c55de40fe) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833988e0 + 0x84222325));
  uVar3 = uRam0000000183398948 - (uRam0000000183398948 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183398948;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar4;
  uRam0000000183398b68 = (uRam0000000183398b68 ^ uVar4) + 0xf3113ef3aa21bf02 ^ 0xd006da9f8ce328b0;
  uRam0000000183398958 = (uRam0000000183398958 * 0x43593e23eac8789f ^ uRam0000000183398b68) + uVar4;
  uRam0000000183398ac8 = uRam0000000183398958 ^ uRam0000000183398b68;
  uRam0000000183398b08 = 0xf3113ef3aa21bf02;
  uVar3 = (uRam0000000183398848 ^ _UNK_1824485c0) + uRam0000000183398970 + 0x84225cda;
  uVar4 = (uRam0000000183398970 ^ _UNK_1824485c8) + uRam0000000183398848 + 0xceec10c55de40fe;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398848 ^ _UNK_1824485c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398970 ^ _UNK_1824485c8;
  uRam0000000183398aa0 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183398848 + 0xceec10c55de40fe) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398970 + 0x84225cda));
  uVar3 = uRam0000000183398aa0 - (uRam0000000183398aa0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183398aa0;
  uRam0000000183398800 = uRam0000000183398cf0 ^ uVar3 ^ 0xceec10c55dec0fd;
  uRam00000001833988e0 = (uRam00000001833988e0 ^ uVar3) + 0xceec10c55dec0fd ^ 0x5c9d0fd19b60bcfd;
  uRam0000000183398c00 = (uRam0000000183398c00 * -0x69299d33cd613f23 ^ uRam00000001833988e0) + uVar3
  ;
  uRam00000001833989f8 = uRam0000000183398c00 ^ uRam00000001833988e0;
  uRam00000001833988a0 = 0xceec10c55dec0fd;
  uVar3 = (~uRam0000000183398c40 + 0xf3113ef3aa21bf03) *
          ((uRam0000000183398cc0 ^ 0xceec10cd1fce3d8) +
          (uRam0000000183398cc0 & 0xceec10cd1fce3d8) * 2);
  uVar3 = (uVar3 | uRam0000000183398ae0) + (uVar3 & uRam0000000183398ae0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183398c78 =
       func_0x00018dfedd60((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar3 = (uRam0000000183398c78 ^ 0xbc7e2a2fc05744fa) * 0x60046272faaf0b6d;
  uRam0000000183398938 = uRam0000000183398b58 ^ uVar3 ^ 0x7fff;
  uRam0000000183398990 = (uRam0000000183398990 ^ uVar3) + 0x7fff ^ 0xfcd44ef6f9160f7;
  uRam0000000183398a30 = (uRam0000000183398a30 * 0x5436b36e2ba0ff27 ^ uRam0000000183398990) + uVar3;
  uRam0000000183398c80 = uRam0000000183398a30 ^ uRam0000000183398990;
  uRam0000000183398a68 = 0x7fff;
  uVar3 = (uRam0000000183398a88 ^ _UNK_1824485d0) + uRam0000000183398c48 + 0x84222325;
  uVar4 = (uRam0000000183398c48 ^ _UNK_1824485d8) + uRam0000000183398a88 + 0xcb6abde027472cf4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398a88 ^ _UNK_1824485d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398c48 ^ _UNK_1824485d8;
  uRam0000000183398a18 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183398a88 + 0xcb6abde027472cf4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398c48 + 0x84222325));
  uRam00000001833987f0 =
       (uRam00000001833987f0 ^ uRam0000000183398a18 * 0x3fa6a7df7ae2a435) + 0x3495421fd8b8d30c ^
       0xb702b947c00b8796;
  uRam0000000183398ce0 =
       (uRam0000000183398ce0 * 0x20bdaa7e2963c1fd ^ uRam00000001833987f0) +
       uRam0000000183398a18 * 0x3fa6a7df7ae2a435;
  uRam0000000183398768 = uRam0000000183398ce0 ^ uRam00000001833987f0;
  uRam0000000183398aa8 = 0x3495421fd8b8d30c;
  uRam0000000183398838 = func_0x00018dfedd60(uRam0000000183398a90 + 0x9fefda62da42a5b8 ^ 0x80);
  uRam0000000183398b08 = uRam00000001833989b0 ^ uRam0000000183398700 ^ 0xcb6abde02747acf3;
  uRam0000000183398a28 =
       (uRam0000000183398a28 ^ uRam0000000183398700) + 0xcb6abde02747acf3 ^ 0xb43369e2953844b2;
  uRam0000000183398b58 =
       (uRam0000000183398b58 * 0x331e57f336f9951 ^ uRam0000000183398a28) + uRam0000000183398700;
  uRam0000000183398970 = uRam0000000183398b58 ^ uRam0000000183398a28;
  uRam0000000183398710 = 0xcb6abde02747acf3;
  uVar3 = (uRam0000000183398cd0 ^ _UNK_1824485e0) + uRam0000000183398aa8 + 0x84222325;
  uVar4 = (uRam0000000183398aa8 ^ _UNK_1824485e8) + uRam0000000183398cd0 + 0xc88f38a4068ff70;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398cd0 ^ _UNK_1824485e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398aa8 ^ _UNK_1824485e8;
  lRam0000000183398808 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183398cd0 + 0xc88f38a4068ff70) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398aa8 + 0x84222325));
  uRam0000000183398aa8 =
       (uRam0000000183398aa8 ^ lRam0000000183398808 * -0x5c993784c0fce64b) + 0xf3770c75bf970090 ^
       0x3e4973048300ee46;
  uRam00000001833988a8 =
       (uRam00000001833988a8 * -0x39ddd89242f14c7f ^ uRam0000000183398aa8) +
       lRam0000000183398808 * -0x5c993784c0fce64b;
  uRam0000000183398ca8 = uRam00000001833988a8 ^ uRam0000000183398aa8;
  uRam0000000183398ac0 = 0xf3770c75bf970090;
  uVar3 = (~uRam0000000183398be0 + 0xc88f38a4068ff71) *
          ((uRam0000000183398bf8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183398bf8 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183398858) + (uVar3 & uRam0000000183398858);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183398a00 =
       func_0x00018dfedd60((uVar3 | 0xc88f38ac44aa3aa) + (uVar3 & 0xc88f38ac44aa3aa));
  uVar3 = uRam0000000183398a00 ^ 0x7fff;
  uRam0000000183398968 = uRam0000000183398af8 ^ uVar3 ^ 0xc88f38a40697f6f;
  uRam0000000183398a80 = (uRam0000000183398a80 ^ uVar3) + 0xc88f38a40697f6f ^ 0x1091fd026c0a07bf;
  uRam0000000183398830 = (uRam0000000183398830 * -0x1d8ea52de876ac89 ^ uRam0000000183398a80) + uVar3
  ;
  uRam00000001833989d0 = uRam0000000183398830 ^ uRam0000000183398a80;
  uRam00000001833988f8 = 0xc88f38a40697f6f;
  uVar3 = (~uRam0000000183398878 + 0xf3770c75bf970091) *
          ((uRam0000000183398c30 ^ 0xc88f38ac44b5c4a) +
          (uRam0000000183398c30 & 0xc88f38ac44b5c4a) * 2);
  uVar3 = (uVar3 | uRam0000000183398a08) + (uVar3 & uRam0000000183398a08);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833989a0 =
       func_0x00018dfedd60((uVar3 | 0xffffffff7bdc5cda) + (uVar3 & 0xffffffff7bdc5cda));
  uRam0000000183398b30 = (uRam00000001833989a0 ^ 0xd56d23cd36d0ae70) & 0x7fffffffffffffff;
  uRam0000000183398b58 = (uRam0000000183398b58 ^ uRam0000000183398b30) + 0x7fff ^ 0x4e8bff330784de66
  ;
  uRam0000000183398b30 =
       ((uRam00000001833989d0 ^ uRam0000000183398b30 ^ 0x7fff) * 0x61bc6fb6dee6bfdb ^
       uRam0000000183398b58) + uRam0000000183398b30;
  uRam0000000183398b48 = uRam0000000183398b30 ^ uRam0000000183398b58;
  uRam0000000183398c20 = 0x7fff;
  uVar3 = (~uRam0000000183398740 + 0x8a0e949f71212d86) *
          ((uRam0000000183398840 ^ 0x7f49abda6b5d1cc0) +
          (uRam0000000183398840 & 0x7f49abda6b5d1cc0) * 2);
  uVar3 = (uVar3 | uRam0000000183398700) + (uVar3 & uRam0000000183398700);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183398b10 =
       func_0x00018dfedd60((uVar3 | 0xf5473f451a7c3145) + (uVar3 & 0xf5473f451a7c3145));
  uRam0000000183398cd8 = uRam0000000183398880 ^ uRam00000001833987b8 ^ 0x958407a60a06d6a;
  uRam0000000183398b08 =
       (uRam0000000183398b08 ^ uRam00000001833987b8) + 0x958407a60a06d6a ^ 0x20dc1d7e8507b2fc;
  uRam0000000183398c10 =
       (uRam0000000183398c10 * 0x1440e2dd2ff1faed ^ uRam0000000183398b08) + uRam00000001833987b8;
  uRam0000000183398a58 = uRam0000000183398c10 ^ uRam0000000183398b08;
  uRam0000000183398960 = uRam0000000183398b48 ^ 0x958407a60a06d6a;
  uRam0000000183398af0 = 0x958407a60a06d6a;
  uRam00000001833987b8 = func_0x00018dfedd60(uRam00000001833988a8 ^ 0xbd30c6e5c52e8305);
  uVar3 = (uRam00000001833987b8 ^ 0xfbfdfff7f3fe5) & 0x1fffffffffffff;
  uRam0000000183398b28 = (uRam0000000183398b28 ^ uVar3) + 0xa08809a61212d85 ^ 0x121d47d1db333df2;
  uRam0000000183398928 = (uRam0000000183398928 * -0x238cead56286f6b5 ^ uRam0000000183398b28) + uVar3
  ;
  uRam0000000183398af0 = uRam0000000183398928 ^ uRam0000000183398b28;
  uRam0000000183398870 = uRam0000000183398700 ^ 0xa08809a61212d85;
  uRam0000000183398a28 = 0xa08809a61212d85;
  uRam0000000183398a20 = func_0x00018dfedd60(uRam0000000183398770 ^ 0x716a4d37bf21e290);
  uVar3 = uRam0000000183398a20 ^ 0xf5573f75de5e5b6a;
  uRam00000001833987d0 = uRam0000000183398898 ^ uVar3 ^ 0x958407a60a06d6a;
  uRam0000000183398c90 = (uRam0000000183398c90 ^ uVar3) + 0x958407a60a06d6a ^ 0xf60bfce527c3d91b;
  uRam0000000183398b30 = (uRam0000000183398b30 * -0x18dac9b2f8b6f697 ^ uRam0000000183398c90) + uVar3
  ;
  uRam0000000183398c28 = uRam0000000183398b30 ^ uRam0000000183398c90;
  uRam0000000183398c30 = 0x958407a60a06d6a;
  uVar3 = (uRam0000000183398b80 ^ _UNK_1824485f0) + uRam0000000183398b60 + 0x958407ae4824e4f;
  uVar4 = (uRam0000000183398b60 ^ _UNK_1824485f8) + uRam0000000183398b80 + 0x958407a60a06d6a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398b80 ^ _UNK_1824485f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398b60 ^ _UNK_1824485f8;
  uRam0000000183398c78 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183398b80 + 0x958407a60a06d6a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183398b60 + 0x958407ae4824e4f));
  uRam00000001833989f0 = uRam0000000183398c78 & 0x958407a60a06d6a;
  uRam0000000183398728 = uRam0000000183398728 ^ uRam00000001833989f0 ^ 0x6cddd16cc0cca0e3;
  uRam0000000183398cf0 =
       (uRam0000000183398cf0 * 0x7352313243c129e3 ^ uRam0000000183398728) + uRam00000001833989f0;
  uRam0000000183398a38 = uRam0000000183398cf0 ^ uRam0000000183398728;
  uRam00000001833988a0 = 0;
  uRam00000001833989b0 = func_0x00018dfedd60(uRam0000000183398be8 + 0x2bff8349ffddff ^ 0x60);
  uVar3 = uRam00000001833989b0 & 0x7fffffffffffffff;
  uRam0000000183398b48 = uRam0000000183398728 ^ uVar3 ^ 0x7fff;
  uRam0000000183398780 = (uRam0000000183398780 ^ uVar3) + 0x7fff ^ 0x12e444c9a5cb8b59;
  uRam0000000183398820 = (uRam0000000183398820 * -0x587481775b26510f ^ uRam0000000183398780) + uVar3
  ;
  uRam0000000183398ca0 = uRam0000000183398820 ^ uRam0000000183398780;
  uRam0000000183398988 = 0x7fff;
  uVar3 = (uRam00000001833987e8 ^ _UNK_182448600) + uRam0000000183398ae8 + 0x7f49abda6b5d1cc0;
  uVar4 = (uRam0000000183398ae8 ^ _UNK_182448608) + (uRam00000001833987e8 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833987e8 ^ _UNK_182448600;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398ae8 ^ _UNK_182448608;
  uRam0000000183398b50 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833987e8 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183398ae8 + 0x7f49abda6b5d1cc0));
  uVar3 = ~uRam0000000183398b50;
  uVar4 = (uVar3 & 0x3fffffffffff) - (uVar3 >> 1 & 0x155555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3) &
          0x7fffffffff;
  uRam0000000183398a18 = (uRam0000000183398a18 ^ uVar3) + 0x80b654251080c01a ^ 0x59aedd9dfa530b14;
  uRam0000000183398c70 = (uRam0000000183398c70 * 0x6522417de112ae87 ^ uRam0000000183398a18) + uVar3;
  uRam0000000183398788 = uRam0000000183398c70 ^ uRam0000000183398a18;
  uRam0000000183398950 = 0x80b654251080c01a;
  uVar3 = (~uRam0000000183398888 + 0x80b654251080c01b) *
          ((uRam0000000183398c28 ^ 0x7f49abda6b5d1cc0) +
          (uRam0000000183398c28 & 0x7f49abda6b5d1cc0) * 2);
  uVar3 = (uVar3 | uRam0000000183398958) + (uVar3 & uRam0000000183398958);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183398bb0 =
       func_0x00018dfedd60((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uRam0000000183398c08 =
       uRam0000000183398c08 ^ uRam0000000183398bb0 ^ 0x7f49abdaef7f3fe5 ^ 0xdf99807a6cef40fc;
  uRam0000000183398b98 =
       (uRam0000000183398b98 * -0x47949f2038676eb ^ uRam0000000183398c08) +
       (uRam0000000183398bb0 ^ 0x7f49abdaef7f3fe5);
  uRam00000001833989a0 = uRam0000000183398b98 ^ uRam0000000183398c08;
  uRam0000000183398bc0 = 0;
  uVar3 = (uRam0000000183398b80 ^ 0x84225cda) + uRam0000000183398818 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398b80 ^ 0x84225cda;
  uVar4 = ((uRam0000000183398818 + uRam0000000183398b80) * 0x2000 |
          uRam0000000183398818 + uRam0000000183398b80 >> 0x33) ^ uRam0000000183398818;
  uRam0000000183398760 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183398b80 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398818 + 0x84225cda));
  uVar3 = uRam0000000183398760 << 2 | uRam0000000183398760 >> 0x3e;
  uRam0000000183398880 = uRam0000000183398a28 ^ uVar3 ^ 0x7fff;
  uRam0000000183398a90 = (uRam0000000183398a90 ^ uVar3) + 0x7fff ^ 0xbc024fc1fc7b6d4a;
  uRam00000001833988c8 = (uRam00000001833988c8 * 0x41fe248dcaba324d ^ uRam0000000183398a90) + uVar3;
  uRam0000000183398920 = uRam00000001833988c8 ^ uRam0000000183398a90;
  uRam00000001833989c8 = 0x7fff;
  uRam0000000183398c60 = func_0x00018dfedd60(uRam0000000183398bd0 ^ 0x2300841b001d8e);
  uRam0000000183398b58 =
       uRam0000000183398b58 ^ uRam0000000183398c60 & 0x35400a5a6a393fe5 ^ 0x546a25033a9d2dd7;
  uRam0000000183398c10 =
       (uRam0000000183398c10 * -0x61f9edbc633fb17b ^ uRam0000000183398b58) +
       (uRam0000000183398c60 & 0x35400a5a6a393fe5);
  uRam0000000183398ae8 = uRam0000000183398c10 ^ uRam0000000183398b58;
  uRam00000001833987a8 = 0;
  uRam0000000183398c00 = uRam0000000183398ae8;
  lRam00000001833989a8 = func_0x00018dfedd60(uRam0000000183398c40 ^ 0x2bff84aa00211c);
  uVar3 = (ulonglong)
          (~((uint)(lRam00000001833989a8 << 0xc) | (uint)((ulonglong)lRam00000001833989a8 >> 0x34))
          & 0x7fff);
  uRam0000000183398730 = uRam0000000183398c28 ^ uVar3 ^ 0x7fff;
  uRam0000000183398c10 = (uRam0000000183398c10 ^ uVar3) + 0x7fff ^ 0x41ec1f3f421aa13a;
  uRam0000000183398b28 = (uRam0000000183398b28 * -0x274b2cbf5dd23485 ^ uRam0000000183398c10) + uVar3
  ;
  uRam0000000183398890 = uRam0000000183398b28 ^ uRam0000000183398c10;
  uRam0000000183398888 = 0x7fff;
  uVar3 = param_4 ^ 0x84222325 ^ uRam0000000183398a78;
  lVar2 = (param_4 ^ 0x84222325) + uRam0000000183398a48;
  uVar4 = uVar3 + lVar2;
  uVar5 = (uRam0000000183398a48 ^ 0x7fff) + uRam0000000183398a78 + 0x7fff;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183398a48 ^ 0x7fff;
  uRam0000000183398750 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183398a78 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uRam0000000183398870 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam0000000183398a68 =
       (uRam0000000183398a68 ^ uRam0000000183398750 * 0x560aef7362357be7) + uRam0000000183398870 ^
       0xabc33e9d4c5dc7af;
  uRam0000000183398bd8 =
       (uRam0000000183398bd8 * -0x6925e57027b751b3 ^ uRam0000000183398a68) +
       uRam0000000183398750 * 0x560aef7362357be7;
  uRam0000000183398838 = uRam0000000183398bd8 ^ uRam0000000183398a68;
  uRam0000000183398c20 = func_0x00018dfedd60(uRam0000000183398a78 ^ 0xffb20002b9ff7697);
  uRam0000000183398af0 =
       (uRam0000000183398af0 ^ uRam0000000183398c20 ^ 0x82082561) + 0x8fab6fe3 ^ 0xfdb9014b49d010b0;
  uRam0000000183398768 =
       (uRam0000000183398768 * -0x5772a6903c9de91d ^ uRam0000000183398af0) +
       (uRam0000000183398c20 ^ 0x82082561);
  uRam0000000183398a88 = uRam0000000183398768 ^ uRam0000000183398af0;
  uRam00000001833988e8 = 0x8fab6fe3;
  uVar3 = (uRam00000001833989c0 ^ _UNK_182448610) + uRam0000000183398960 + 0x79a4d539;
  uVar4 = (uRam0000000183398960 ^ _UNK_182448618) + uRam00000001833989c0 + 0xc23707b3;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833989c0 ^ _UNK_182448610;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398960 ^ _UNK_182448618;
  uRam00000001833988f8 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833989c0 + 0xc23707b3) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398960 + 0x79a4d539));
  uRam0000000183398850 =
       (uRam0000000183398850 ^ uRam00000001833988f8 ^ 0xffb7f7bf) + 0x3fb1f1af ^ 0x8a2e8e33ebe79b7c;
  uRam00000001833987a8 =
       (uRam00000001833987a8 * 0x784728a326b3e293 ^ uRam0000000183398850) +
       (uRam00000001833988f8 ^ 0xffb7f7bf);
  uRam00000001833987c8 = uRam00000001833987a8 ^ uRam0000000183398850;
  uRam0000000183398a98 = 0x3fb1f1af;
  uVar3 = (~uRam00000001833988d0 + 0xcf6ede8c) *
          ((uRam0000000183398b58 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183398b58 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183398720) + (uVar3 & uRam0000000183398720);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833987b0 =
       func_0x00018dfedd60((uVar3 | 0x4b4cfdae) + (ulonglong)((uint)uVar3 & 0x4b4cfdae));
  uRam00000001833989d8 =
       (uRam00000001833989d8 ^ uRam00000001833987b0 ^ 0xcf6ede8b) - 0xcf6ede8b ^ 0x501989035880b590;
  uRam0000000183398bd8 =
       (uRam0000000183398bd8 * 0x10fc300a9dbbaed7 ^ uRam00000001833989d8) +
       (uRam00000001833987b0 ^ 0xcf6ede8b);
  uRam0000000183398710 = uRam0000000183398bd8 ^ uRam00000001833989d8;
  uRam0000000183398c70 = 0x30912175;
  uVar3 = (~uRam0000000183398b80 + 0xcf6ede8c) *
          ((uRam0000000183398ce0 ^ 0x8422059e) +
          (ulonglong)((uint)uRam0000000183398ce0 & 0x8422059e) * 2);
  uVar3 = (uVar3 | uRam0000000183398a48) + (uVar3 & uRam0000000183398a48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183398768 =
       func_0x00018dfedd60((uVar3 | 0x4b4cdb15) + (ulonglong)((uint)uVar3 & 0x4b4cdb15));
  uVar3 = uRam0000000183398768 & 0x1fffffffffffffff;
  uRam00000001833988f8 = uRam0000000183398918 ^ uVar3 ^ 0xcf6f0546;
  uRam0000000183398880 = (uRam0000000183398880 ^ uVar3) + 0xcf6f0546 ^ 0x1fc4b4f83258fd4;
  uRam00000001833989b0 = (uRam00000001833989b0 * 0x1dc6442772e29f3d ^ uRam0000000183398880) + uVar3;
  uRam0000000183398c08 = uRam00000001833989b0 ^ uRam0000000183398880;
  uRam0000000183398958 = 0xcf6f0546;
  uVar3 = (~uRam0000000183398930 + 0x30912176) *
          ((uRam0000000183398750 ^ 0x4b4d2663) +
          (ulonglong)((uint)uRam0000000183398750 & 0x4b4d2663) * 2);
  uVar3 = (uVar3 | uRam0000000183398c18) + (uVar3 & uRam0000000183398c18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833987c8 =
       func_0x00018dfedd60((uVar3 | 0x7bdc0716) + (ulonglong)((uint)uVar3 & 0x7bdc0716));
  uVar3 = uRam00000001833987c8 ^ 0x275a69fb0a804f8b;
  uRam0000000183398738 = uRam0000000183398bd0 ^ uVar3 ^ 0x1000026bb;
  uRam0000000183398cf8 = (uRam0000000183398cf8 ^ uVar3) + 0x1000026bb ^ 0xaf6c664fe52975e1;
  uRam0000000183398c50 = (uRam0000000183398c50 * -0x4dc88920aecdae69 ^ uRam0000000183398cf8) + uVar3
  ;
  uRam0000000183398b58 = uRam0000000183398c50 ^ uRam0000000183398cf8;
  uRam0000000183398c00 = 0x26bb;
  uRam0000000183398bb0 = func_0x00018dfedd60(lRam0000000183398980 + 0x1800564a001bffU ^ 0x7c);
  uVar3 = uRam0000000183398bb0 - (uRam0000000183398bb0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183398bb0;
  uRam0000000183398a30 = uRam00000001833989c8 ^ uVar3 ^ 0x5a46448b;
  uRam00000001833988f0 = (uRam00000001833988f0 ^ uVar3) + 0x5a46448b ^ 0x221c8ef7efb084a3;
  uRam0000000183398948 = (uRam0000000183398948 * -0x169d323b7dfa63b7 ^ uRam00000001833988f0) + uVar3
  ;
  uRam0000000183398b60 = uRam0000000183398948 ^ uRam00000001833988f0;
  uRam0000000183398af8 = 0x5a46448b;
  uVar3 = (uRam0000000183398b90 ^ _UNK_182448620) + uRam0000000183398c88 + 0xde6467ae;
  uVar4 = (uRam0000000183398c88 ^ _UNK_182448628) + uRam0000000183398b90 + 0xa5b9e230;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398b90 ^ _UNK_182448620;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398c88 ^ _UNK_182448628;
  uRam0000000183398750 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183398b90 + 0xa5b9e230) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398c88 + 0xde6467ae));
  uVar3 = uRam0000000183398750 ^ 0x3a70d6b815229010;
  uRam00000001833988a8 = uRam0000000183398b90 ^ uVar3 ^ 0x1000026bb;
  uRam0000000183398710 = (uRam0000000183398710 ^ uVar3) + 0x1000026bb ^ 0xe125364100945e65;
  uRam0000000183398cc0 = (uRam0000000183398cc0 * -0x2070f058bdbfb29f ^ uRam0000000183398710) + uVar3
  ;
  uRam0000000183398748 = uRam0000000183398cc0 ^ uRam0000000183398710;
  uRam0000000183398c58 = 0x26bb;
  uVar3 = (uRam00000001833987c8 ^ _UNK_182448630) + uRam0000000183398748 + 0x84222325;
  uVar4 = (uRam0000000183398748 ^ _UNK_182448638) + uRam00000001833987c8 + 0xb9905770;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833987c8 ^ _UNK_182448630;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398748 ^ _UNK_182448638;
  uRam0000000183398738 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833987c8 + 0xb9905770) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398748 + 0x84222325));
  uVar3 = uRam0000000183398738 << 0x1f | uRam0000000183398738 >> 0x21;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar3;
  uVar4 = (uRam0000000183398c00 ^ uVar3) - 0xb9905770;
  uRam0000000183398c00 = uVar4 ^ 0xab7128efcf45685f;
  uRam0000000183398b58 = (uRam0000000183398b58 * 0x591426aa9e90a86b ^ uRam0000000183398c00) + uVar3;
  uRam0000000183398cd8 = uRam0000000183398b58 ^ uRam0000000183398c00;
  uRam0000000183398a10 = 0x466fa890;
  uRam0000000183398af0 = func_0x00018dfedd60(uVar4 ^ 0x54a328d5ed45058f);
  uVar3 = (uRam0000000183398af0 ^ 0xb9905140) * 0x39c466dbfe2405b1;
  uRam00000001833987d8 = uRam0000000183398900 ^ uVar3 ^ 0xb9907e2b;
  uRam0000000183398cd8 = (uRam0000000183398cd8 ^ uVar3) + 0xb9907e2b ^ 0x75aa636aaa3bf19d;
  uRam0000000183398830 = (uRam0000000183398830 * -0x1a68b7f064fdc20d ^ uRam0000000183398cd8) + uVar3
  ;
  uRam0000000183398990 = uRam0000000183398830 ^ uRam0000000183398cd8;
  uRam0000000183398a90 = 0xb9907e2b;
  uVar3 = (uRam00000001833987c8 ^ _UNK_182448640) + uRam00000001833989b8 + 0x3db25d0e;
  uVar4 = (uRam00000001833989b8 ^ _UNK_182448648) + uRam00000001833987c8 + 0x466fa890;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833987c8 ^ _UNK_182448640;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833989b8 ^ _UNK_182448648;
  uRam0000000183398bc8 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833987c8 + 0x466fa890) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833989b8 + 0x3db25d0e));
  uVar3 = (uRam0000000183398bc8 ^ 0x466fa890) << 0x26 | (uRam0000000183398bc8 ^ 0x466fa890) >> 0x1a;
  uRam0000000183398700 = uRam0000000183398ae8 ^ uVar3 ^ 0x1000026bb;
  uRam0000000183398cf8 = (uRam0000000183398cf8 ^ uVar3) + 0x1000026bb ^ 0xf34c533413841256;
  uRam0000000183398be0 = (uRam0000000183398be0 * -0x364078f85ce6acc1 ^ uRam0000000183398cf8) + uVar3
  ;
  uRam0000000183398ab0 = uRam0000000183398be0 ^ uRam0000000183398cf8;
  uRam0000000183398b00 = 0x26bb;
  uRam0000000183398908 = func_0x00018dfedd60(uRam0000000183398a38 ^ 0xff73000c170007cf);
  uRam0000000183398828 = uRam0000000183398ab0 ^ uRam0000000183398908 ^ 0xcf5d6192;
  uRam0000000183398c30 =
       (uRam0000000183398c30 ^ uRam0000000183398908) + 0xcf5d6192 ^ 0xd34e0a15b166b58d;
  uRam0000000183398ae8 =
       (uRam0000000183398ae8 * 0x735544745cc06c31 ^ uRam0000000183398c30) + uRam0000000183398908;
  uRam0000000183398918 = uRam0000000183398ae8 ^ uRam0000000183398c30;
  uRam0000000183398b38 = 0xcf5d6192;
  uRam0000000183398908 = func_0x00018dfedd60(uRam0000000183398b50 + 0xff92fff4690027ff ^ 0xb7);
  uVar3 = (ulonglong)(~(uint)uRam0000000183398908 & 0x8fab6fe3);
  uRam0000000183398c88 = (uRam0000000183398c88 ^ uVar3) + 0xb01a9e4c ^ 0x11f137f26b804250;
  uRam0000000183398aa8 = (uRam0000000183398aa8 * -0x529a2d8af249b65b ^ uRam0000000183398c88) + uVar3
  ;
  uRam0000000183398928 = uRam0000000183398aa8 ^ uRam0000000183398c88;
  uRam0000000183398cf8 = 0xb01a9e4c;
  uVar3 = (uRam0000000183398778 ^ _UNK_182448650) + uRam0000000183398768 + 0xb894cc6;
  uVar4 = (uRam0000000183398768 ^ _UNK_182448658) + uRam0000000183398778 + 0x3fb1f1af;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398778 ^ _UNK_182448650;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398768 ^ _UNK_182448658;
  uRam0000000183398780 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183398778 + 0x3fb1f1af) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398768 + 0xb894cc6));
  uRam0000000183398ca8 =
       (uRam0000000183398ca8 ^ uRam0000000183398780 & 0x1ffffffff) + 0xfa161a3 ^ 0x709e2f949bf4788c;
  uRam0000000183398ae8 =
       (uRam0000000183398ae8 * -0x56f26fd7bad0157f ^ uRam0000000183398ca8) +
       (uRam0000000183398780 & 0x1ffffffff);
  uRam0000000183398830 = uRam0000000183398ae8 ^ uRam0000000183398ca8;
  uRam0000000183398c18 = 0xfa161a3;
  uVar3 = (~uRam0000000183398ac0 + 0x1f42c347) *
          ((uRam0000000183398c00 ^ 0x3438bd69) +
          (ulonglong)((uint)uRam0000000183398c00 & 0x3438bd69) * 2);
  uVar3 = (uVar3 | uRam00000001833989d0) + (uVar3 & uRam00000001833989d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183398cb0 =
       func_0x00018dfedd60((uVar3 | 0x2b7a7e2f) + (ulonglong)((uint)uVar3 & 0x2b7a7e2f));
  uVar3 = uRam0000000183398cb0 & 0x7fffffffffffffff;
  uRam0000000183398b58 = uRam00000001833988e8 ^ uVar3 ^ 0xcf5d6192;
  uRam00000001833989c8 = (uRam00000001833989c8 ^ uVar3) + 0xcf5d6192 ^ 0x5755a7241eec1f03;
  uRam0000000183398800 = (uRam0000000183398800 * 0x7c909f726cfb2fd9 ^ uRam00000001833989c8) + uVar3;
  uRam0000000183398bd8 = uRam0000000183398800 ^ uRam00000001833989c8;
  uRam00000001833989c0 = 0xcf5d6192;
  uVar3 = (uRam0000000183398cc0 ^ _UNK_182448660) + uRam0000000183398b48 + 0x4b7f42b7;
  uVar4 = (uRam0000000183398b48 ^ _UNK_182448668) + uRam0000000183398cc0 + 0xcf5d6192;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398cc0 ^ _UNK_182448660;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398b48 ^ _UNK_182448668;
  uRam00000001833988e8 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183398cc0 + 0xcf5d6192) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398b48 + 0x4b7f42b7));
  uRam00000001833989d0 = uRam00000001833988e8 ^ 0xcf5d6192;
  uRam0000000183398a10 = uRam0000000183398a10 ^ uRam00000001833989d0 ^ 0xd1c62589a7ad10e9;
  uRam0000000183398ad0 =
       (uRam0000000183398ad0 * 0x37f1eb721b0e2e09 ^ uRam0000000183398a10) + uRam00000001833989d0;
  uRam0000000183398898 = uRam0000000183398ad0 ^ uRam0000000183398a10;
  uRam0000000183398960 = 0;
  uVar3 = (~uRam0000000183398b08 + 0x100000000) *
          ((uRam00000001833989f0 ^ 0xb894cc6) +
          (ulonglong)((uint)uRam00000001833989f0 & 0xb894cc6) * 2);
  uVar3 = (uVar3 | uRam0000000183398b80) + (uVar3 & uRam0000000183398b80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183398ce8 =
       func_0x00018dfedd60((uVar3 | 0xf476b339) + (ulonglong)((uint)uVar3 & 0xf476b339));
  uVar3 = (uRam0000000183398ce8 ^ 0x8fab6fe27054901d) << 0x29 |
          (uRam0000000183398ce8 ^ 0x8fab6fe27054901d) >> 0x17;
  uRam00000001833989b8 = (uRam00000001833989b8 ^ uVar3) + 0x7054901c ^ 0xd4c26e3c4a2e4b48;
  uRam0000000183398750 = (uRam0000000183398750 * 0x2fa3da890a89566f ^ uRam00000001833989b8) + uVar3;
  uRam0000000183398870 = uRam0000000183398750 ^ uRam00000001833989b8;
  uRam0000000183398840 = 0x7054901c;
  uVar3 = (uRam0000000183398810 ^ _UNK_182448670) + uRam0000000183398858 + 0xb894cc6;
  uVar4 = (uRam0000000183398858 ^ _UNK_182448678) + uRam0000000183398810 + 0x7054901c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398810 ^ _UNK_182448670;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398858 ^ _UNK_182448678;
  uRam0000000183398cf8 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183398810 + 0x7054901c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398858 + 0xb894cc6));
  uVar3 = (uRam0000000183398cf8 & 0x7fffffffffffffff) * 0x7eac7bd1d7c065e1;
  uRam0000000183398c68 = uRam0000000183398c68 ^ uVar3 ^ 0x27041b13250ca53d;
  uRam0000000183398b98 = (uRam0000000183398b98 * 0x3d270c248c503615 ^ uRam0000000183398c68) + uVar3;
  uRam00000001833988e8 = uRam0000000183398b98 ^ uRam0000000183398c68;
  uRam0000000183398cb0 = 0;
  uVar3 = ((uRam0000000183398a48 ^ 0x8422059e) +
          (ulonglong)((uint)uRam0000000183398a48 & 0x8422059e) * 2) * -uRam0000000183398740;
  uVar3 = (uVar3 | uRam0000000183398b48) + (uVar3 & uRam0000000183398b48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183398b30 =
       func_0x00018dfedd60((uVar3 | 0x8422059e) + (ulonglong)((uint)uVar3 & 0x8422059e));
  uVar3 = uRam0000000183398b30 << 0x1f | uRam0000000183398b30 >> 0x21 & 0xfffffffffffffc00;
  uRam0000000183398ce8 = uRam0000000183398b70 ^ uVar3 ^ 0x26bb;
  uRam0000000183398be8 = (uRam0000000183398be8 ^ uVar3) + 0x26bb ^ 0x1eac75757fb1df89;
  uRam00000001833989b0 = (uRam00000001833989b0 * 0x7dfb763b106a9d95 ^ uRam0000000183398be8) + uVar3;
  uRam0000000183398970 = uRam00000001833989b0 ^ uRam0000000183398be8;
  uRam0000000183398b00 = 0x26bb;
  uVar3 = (uRam0000000183398a30 ^ _UNK_182448680) + uRam0000000183398bf0 + 0xb2a0444;
  uVar4 = (uRam0000000183398bf0 ^ _UNK_182448688) + uRam0000000183398a30 + 0x8f082761;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183398a30 ^ _UNK_182448680;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398bf0 ^ _UNK_182448688;
  uRam00000001833989b0 =
       func_0x00018dfedd60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183398a30 + 0x8f082761) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183398bf0 + 0xb2a0444));
  uVar3 = uRam00000001833989b0 << 0x37 | uRam00000001833989b0 >> 9;
  uRam00000001833987e8 = uRam00000001833987e8 ^ uVar3 ^ 0xd5806db873df39b2;
  uRam0000000183398730 = (uRam0000000183398730 * -0x6d3debf570cbf7c3 ^ uRam00000001833987e8) + uVar3
  ;
  uRam0000000183398ae8 = uRam0000000183398730 ^ uRam00000001833987e8;
  uRam0000000183398968 = 0;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x910a,0x19a);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dfe908d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182446c28 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dC; akw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18dfeddf0, runtime 6ffff5bfddf0) =====

void FUN_18dfeddf0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018dfede2c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1824487d0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dC; akx (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18dfeece0, runtime 6ffff5bfece0) =====

void FUN_18dfeece0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dfeed5d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182448d10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dC; aky (IJ)I (handler @ image 18dff17a0, runtime 6ffff5c017a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dff17a0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = (~uRam0000000183398fe8 + 0xf18fd7cc60ae5146) *
          ((uRam0000000183398e38 ^ 0x6c62c1b53433d189) +
          (uRam0000000183398e38 & 0x6c62c1b53433d189) * 2);
  uVar6 = (uVar6 | uRam0000000183398fb0) + (uVar6 & uRam0000000183398fb0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398e38 =
       func_0x00018dffc910((uVar6 | 0x9ded1679549d80cc) + (uVar6 & 0x9ded1679549d80cc));
  uVar6 = uRam0000000183398fa8 >> 1 | uRam0000000183398fa8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam0000000183398fa8;
  uRam0000000183399060 = (uRam0000000183399060 ^ uVar6) + 0xfdefd7fdf0bff3ed ^ 0xf5c61edcaa1695d5;
  uRam0000000183398fd8 = (uRam0000000183398fd8 * -0x74c43834d9009531 ^ uRam0000000183399060) + uVar6
  ;
  uRam0000000183398e50 = uRam0000000183398fd8 ^ uRam0000000183399060;
  uRam0000000183398ea0 = 0xfdefd7fdf0bff3ed;
  uRam0000000183398f18 = func_0x00018dffc910(uRam00000001833990b0 + 0x615e6c9cb357199f ^ 0x4d);
  uVar6 = uRam0000000183398f18 >> 1 | uRam0000000183398f18;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = uRam0000000183398f18 ^ 0x125be197fba9adb5 ^
          (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10;
  uRam00000001833990d8 = (uRam00000001833990d8 ^ uVar6) + 0xa0f4bb6661388171 ^ 0x821fe25655db7cf4;
  uRam0000000183398d60 = (uRam0000000183398d60 * 0x544961001c6a36b3 ^ uRam00000001833990d8) + uVar6;
  uRam0000000183398fe8 = uRam0000000183398d60 ^ uRam00000001833990d8;
  uRam0000000183398ff0 = 0xa0f4bb6661388171;
  uVar6 = (~uRam0000000183398f68 + 0x565e578b3cc3481) *
          ((uRam0000000183398f98 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183398f98 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183398d00) + (uVar6 & uRam0000000183398d00);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398de0 =
       func_0x00018dffc910((uVar6 | 0x565e57837ee17a5) + (uVar6 & 0x565e57837ee17a5));
  uRam0000000183398f68 =
       (uRam0000000183398f68 ^ uRam0000000183398de0) + 0xfa9a1a874c33cb80 ^ 0x4cb3d4d493eeaf3e;
  uRam0000000183398fb8 =
       (uRam0000000183398ee0 * 0x3ba8c0621eecc7e1 ^ uRam0000000183398f68) + uRam0000000183398de0 ^
       uRam0000000183398f68;
  uRam0000000183398ee0 = -0x565e578b3cc3480;
  uVar6 = (~uRam0000000183398d90 + 0x565e578b3cc3481) *
          ((uRam00000001833990f8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833990f8 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam0000000183398fe0) + (uVar6 & uRam0000000183398fe0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398f48 =
       func_0x00018dffc910((uVar6 | 0x565e57837ee685a) + (uVar6 & 0x565e57837ee685a));
  uVar6 = uRam0000000183398f48 ^ 0x565e578b3cc3480;
  uRam0000000183398fe8 = uRam0000000183399030 ^ uVar6 ^ 0x565e578b3ccb47f;
  uRam0000000183398e68 = (uRam0000000183398e68 ^ uVar6) + 0x565e578b3ccb47f ^ 0x991528db10c5573d;
  uRam0000000183398e38 = (uRam0000000183398e38 * 0x202f7974cd341dd7 ^ uRam0000000183398e68) + uVar6;
  uRam0000000183398f88 = uRam0000000183398e38 ^ uRam0000000183398e68;
  uRam0000000183399000 = 0x565e578b3ccb47f;
  uVar6 = (~uRam0000000183398ea8 + 0xfa9a1a874c33cb81) *
          ((uRam0000000183398e08 ^ 0x565e57837ee975a) +
          (uRam0000000183398e08 & 0x565e57837ee975a) * 2);
  uVar6 = (uVar6 | uRam0000000183398d40) + (uVar6 & uRam0000000183398d40);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398f58 =
       func_0x00018dffc910((uVar6 | 0xffffffff7bdd5cda) + (uVar6 & 0xffffffff7bdd5cda));
  uVar6 = (uRam0000000183398f58 & 0x1fffffffffff800) * 0x80;
  uVar4 = uVar6 + (uRam0000000183398f58 & 0x155555555555000) * -0x40;
  uVar4 = (uVar4 & 0x3333333333300000) + (uVar4 >> 2 & 0x3333333333330000);
  uVar6 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0000) * 0x101010101010101 >> 0x38) << 6 | uVar6;
  uRam0000000183398e68 = uRam0000000183398f18 ^ uVar6 ^ 0x7fff;
  uRam0000000183398da8 = (uRam0000000183398da8 ^ uVar6) + 0x7fff ^ 0xd30e81209d61e71c;
  uRam0000000183399018 = (uRam0000000183399018 * -0x6e28fe17a698ac57 ^ uRam0000000183398da8) + uVar6
  ;
  uRam00000001833990f8 = uRam0000000183399018 ^ uRam0000000183398da8;
  uRam00000001833990c0 = 0x7fff;
  uVar6 = (~uRam0000000183398db8 + 0x8b75bc8128b47a4e) *
          ((uRam0000000183398ea0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183398ea0 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183398da8) + (uVar6 & uRam0000000183398da8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398f90 =
       func_0x00018dffc910((uVar6 | 0x8b75bc81ac965968) + (uVar6 & 0x8b75bc81ac965968));
  uRam0000000183399008 =
       (uRam0000000183398d60 ^ uRam0000000183398f90) + 0x748a437ed74b85b3 ^ 0xc4dbc984eeb9ce79;
  uRam0000000183398eb0 =
       (uRam0000000183398eb0 * 0x31d48deece6d563 ^ uRam0000000183399008) + uRam0000000183398f90;
  uRam0000000183399008 = uRam0000000183398eb0 ^ uRam0000000183399008;
  uRam0000000183398d60 = 0x748a437ed74b85b3;
  uVar6 = (~uRam0000000183398d58 + 0x8b75bc8128b47a4e) *
          ((uRam0000000183398f30 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183398f30 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam0000000183398ff0) + (uVar6 & uRam0000000183398ff0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398d60 =
       func_0x00018dffc910((uVar6 | 0x8b75bc81ac962697) + (uVar6 & 0x8b75bc81ac962697));
  uVar6 = uRam0000000183398d60 >> 1 | uRam0000000183398d60;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (~((uint)uRam0000000183398d60 ^
            (0x40 - (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x20) & 0x7fff);
  uRam0000000183398f60 = uRam00000001833990d8 ^ uVar6 ^ 0x8b75bc8128b4fa4c;
  uRam00000001833990c8 = (uRam00000001833990c8 ^ uVar6) + 0x8b75bc8128b4fa4c ^ 0x347e4735e09d67c7;
  uRam0000000183398ee0 = (uRam0000000183398ee0 * -0x53e2850840d04f1f ^ uRam00000001833990c8) + uVar6
  ;
  uRam0000000183398fc8 = uRam0000000183398ee0 ^ uRam00000001833990c8;
  uRam0000000183399078 = 0x8b75bc8128b4fa4c;
  uRam0000000183398ef8 = func_0x00018dffc910(uRam0000000183398f58 ^ 0xb3344b9562252d3);
  uVar6 = ~uRam0000000183398ef8 & 0x8b75bc8128b4fa4c;
  uRam00000001833990e8 = uRam0000000183398da0 ^ uVar6 ^ 0x7fff;
  uRam0000000183398fb8 = (uRam0000000183398fb8 ^ uVar6) + 0x7fff ^ 0x20df18ade1ae6c4d;
  uRam0000000183399090 = (uRam0000000183399090 * 0x545c22d58d44f393 ^ uRam0000000183398fb8) + uVar6;
  uRam0000000183398d40 = uRam0000000183399090 ^ uRam0000000183398fb8;
  uRam0000000183398da0 = 0x7fff;
  uVar6 = (~uRam0000000183398fd8 + 0xa22575ce2bbc799) *
          ((uRam0000000183398e90 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183398e90 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183398fb0) + (uVar6 & uRam0000000183398fb0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398fb8 =
       func_0x00018dffc910((uVar6 | 0xa22575c6699e4bd) + (uVar6 & 0xa22575c6699e4bd));
  uRam00000001833990c0 =
       (uRam00000001833990c0 ^ uRam0000000183398fb8) + 0xf5dda8a31d443868 ^ 0xe828c242089da435;
  uRam0000000183399050 =
       (uRam0000000183399050 * 0x6d8d3cfc076dadd9 ^ uRam00000001833990c0) + uRam0000000183398fb8;
  uRam0000000183399020 = uRam0000000183399050 ^ uRam00000001833990c0;
  uRam0000000183398d38 = 0xf5dda8a31d443868;
  uVar6 = (~uRam00000001833990f0 + 0xa22575ce2bbc799) *
          ((uRam0000000183399040 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183399040 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam0000000183399050) + (uVar6 & uRam0000000183399050);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398f00 =
       func_0x00018dffc910((uVar6 | 0xa22575c66999b42) + (uVar6 & 0xa22575c66999b42));
  uVar6 = (uRam0000000183398f00 ^ 0x218c1a0101103868) -
          ((uRam0000000183398f00 ^ 0x218c1a0101103868) >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = uRam0000000183398f00 ^ 0x2bae4d5de3abfff0 ^
          (ulonglong)
          ((uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2)
  ;
  uRam0000000183398ed0 = uRam0000000183398e40 ^ uVar6 ^ 0xa22575ce2bc4797;
  uRam0000000183398d30 = (uRam0000000183398d30 ^ uVar6) + 0xa22575ce2bc4797 ^ 0xe29d1adbca30ff73;
  uRam0000000183398d20 = (uRam0000000183398d20 * -0x61b1c4877bc2c327 ^ uRam0000000183398d30) + uVar6
  ;
  uRam0000000183398d90 = uRam0000000183398d20 ^ uRam0000000183398d30;
  uRam0000000183398ef8 = 0xa22575ce2bc4797;
  uVar6 = (~uRam0000000183398f08 + 0xa0f4bb6661388172) *
          ((uRam0000000183398ff8 ^ 0xfdefd7fd749dd0c8) +
          (uRam0000000183398ff8 & 0x7defd7fd749dd0c8) * 2);
  uVar6 = (uVar6 | uRam0000000183398f08) + (uVar6 & uRam0000000183398f08);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183399088 =
       func_0x00018dffc910((uVar6 | 0x5d1b6c9b15a551b9) + (uVar6 & 0x5d1b6c9b15a551b9));
  uVar6 = uRam0000000183399088 ^ 0xfdfffffff1bff3fd;
  uVar4 = uVar6 >> 1 | uVar6;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar6;
  uVar6 = (uVar6 << 4 | uVar6 >> 0x3c) ^ 0xfdefd7fdf0bff3ed;
  uRam0000000183398dd0 = (uRam0000000183398dd0 ^ uVar6) + 0x9ee4936451f8755e ^ 0x76674619292a25a3;
  uRam0000000183399038 = (uRam0000000183399038 * -0x1f323128f598f141 ^ uRam0000000183398dd0) + uVar6
  ;
  uRam0000000183398ff8 = uRam0000000183399038 ^ uRam0000000183398dd0;
  uRam0000000183398d50 = 0x9ee4936451f8755e;
  uRam0000000183399040 = func_0x00018dffc910(uRam0000000183398e98 ^ 0x84b1070d87535a30);
  uRam0000000183399078 =
       (uRam0000000183399078 ^ uRam0000000183399040) + 0x5d1b6c9b9187729c ^ 0xdf487d791eb1e2f8;
  uRam0000000183398ee8 =
       (uRam0000000183398ee8 * -0x284ec3387a61b82b ^ uRam0000000183399078) + uRam0000000183399040 ^
       uRam0000000183399078;
  lRam0000000183398dc0 = 0x5d1b6c9b9187729c;
  uVar6 = (uRam0000000183398ff0 ^ _UNK_18244ba70) + uRam0000000183398fc8 + 0xfdefd7fd749dd0c8;
  uVar4 = (uRam0000000183398fc8 ^ _UNK_18244ba78) + uRam0000000183398ff0 + 0xa0f4bb6661388171;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183398ff0 ^ _UNK_18244ba70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398fc8 ^ _UNK_18244ba78;
  uRam0000000183398f10 =
       func_0x00018dffc910((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183398ff0 + 0xa0f4bb6661388171) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183398fc8 + 0xfdefd7fd749dd0c8));
  uVar6 = (uRam0000000183398f10 ^ 0xfdfffffff1bff3fd) * 0x7ebdef8fe9858a1;
  uRam0000000183398e60 = (uRam0000000183398e60 ^ uVar6) + 0xa0e4936460388161 ^ 0x6c0e35edafd2d855;
  uRam0000000183398fb8 = (uRam0000000183398fb8 * -0x7148c195f4a31a0b ^ uRam0000000183398e60) + uVar6
  ;
  uRam0000000183398dd0 = uRam0000000183398fb8 ^ uRam0000000183398e60;
  uRam0000000183398f78 = 0xa0e4936460388161;
  uVar6 = (~uRam0000000183398f40 + 0x41c926c8c07102c3) *
          ((uRam0000000183398de0 ^ 0x5d1b6c9b15a551b9) +
          (uRam0000000183398de0 & 0x5d1b6c9b15a551b9) * 2);
  uVar6 = (uVar6 | uRam0000000183398eb0) + (uVar6 & uRam0000000183398eb0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398f80 =
       func_0x00018dffc910((uVar6 | 0x1cd24a53d5d4537b) + (uVar6 & 0x1cd24a53d5d4537b));
  uVar6 = (uRam0000000183398f80 & 0xfffffffff) << 0x1b | uRam0000000183398f80 >> 0x25;
  uRam0000000183398e20 = uRam0000000183398e80 ^ uVar6 ^ 0x9ee4936451f8755e;
  uRam0000000183398d48 = (uRam0000000183398d48 ^ uVar6) + 0x9ee4936451f8755e ^ 0x92f14d21b07cf825;
  uRam0000000183398d88 = (uRam0000000183398d88 * -0x1710d1b0d0317d41 ^ uRam0000000183398d48) + uVar6
  ;
  uRam0000000183398fd0 = uRam0000000183398d88 ^ uRam0000000183398d48;
  uRam0000000183398fe8 = 0x9ee4936451f8755e;
  uVar6 = (uRam0000000183399050 ^ _UNK_18244ba80) + uRam0000000183398da8 + 0x9ee49364d5da567b;
  uVar4 = (uRam0000000183398da8 ^ _UNK_18244ba88) + uRam0000000183399050 + 0x9ee4936451f8755e;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183399050 ^ _UNK_18244ba80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398da8 ^ _UNK_18244ba88;
  uRam0000000183398dc8 =
       func_0x00018dffc910((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183399050 + 0x9ee4936451f8755e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183398da8 + 0x9ee49364d5da567b));
  uRam0000000183399090 = ~uRam0000000183398dc8 & 0x9ee4936451f87558;
  uRam0000000183398d70 = uRam0000000183398d70 ^ uRam0000000183399090 ^ 0x9cd0e35ad350396f;
  uRam0000000183399048 =
       (uRam0000000183399048 * 0x3811093d703391f5 ^ uRam0000000183398d70) + uRam0000000183399090;
  uRam00000001833990c0 = uRam0000000183399048 ^ uRam0000000183398d70;
  uRam00000001833990d8 = 0;
  uVar6 = ((uRam0000000183398fb8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183398fb8 & 0x84225cda) * 2) * -lRam0000000183399058;
  uVar6 = (uVar6 | uRam0000000183398d08) + (uVar6 & uRam0000000183398d08);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398e08 =
       func_0x00018dffc910((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = uRam0000000183398e08 & 0x7fffffffffff;
  uRam0000000183398f30 = uRam0000000183398ef0 ^ uVar6 ^ 0x7fff;
  uRam0000000183398e38 = (uRam0000000183398e38 ^ uVar6) + 0x7fff ^ 0xd9f52836fc8cd472;
  uRam0000000183398f58 = (uRam0000000183398f58 * 0x6a04afff8b8bbc1f ^ uRam0000000183398e38) + uVar6;
  uRam0000000183398ec8 = uRam0000000183398f58 ^ uRam0000000183398e38;
  uRam00000001833990c8 = 0x7fff;
  uVar6 = ~uRam0000000183398f18 *
          ((uRam0000000183398fc0 ^ 0xfdefd7fd749dd0c8) +
          (uRam0000000183398fc0 & 0x7defd7fd749dd0c8) * 2);
  uVar6 = (uVar6 | uRam0000000183399088) + (uVar6 & uRam0000000183399088);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398e08 =
       func_0x00018dffc910((uVar6 | 0x21028028b622f37) + (uVar6 & 0x21028028b622f37));
  uVar6 = (uRam0000000183398e08 & 1) << 0x3e | uRam0000000183398e08 >> 2;
  uRam0000000183398df0 = (uRam0000000183398df0 ^ uVar6) + 0x21028020f400c12 ^ 0xcf4036a327966fa5;
  uRam00000001833990f0 = (uRam00000001833990f0 * 0x5f52b16473eae35d ^ uRam0000000183398df0) + uVar6;
  uRam0000000183398d68 = uRam00000001833990f0 ^ uRam0000000183398df0;
  uRam0000000183398eb0 = 0x21028020f400c12;
  uVar6 = ((uRam0000000183398d48 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183398d48 & 0x84225cda) * 2) * -lRam0000000183398e00;
  uVar6 = (uVar6 | uRam0000000183399030) + (uVar6 & uRam0000000183399030);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398fa0 =
       func_0x00018dffc910((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = (uRam0000000183398eb8 ^ uRam0000000183398fa0 ^ 0x7fff ^ uRam0000000183398fa0) + 0x7fff;
  uRam0000000183398fd8 = uVar6 ^ 0x8da1acab968b142;
  uRam0000000183398e20 =
       (uRam0000000183398e20 * -0x26cd88241914780d ^ uRam0000000183398fd8) + uRam0000000183398fa0;
  uRam0000000183399010 = uRam0000000183398e20 ^ uRam0000000183398fd8;
  uRam0000000183398df0 = 0x7fff;
  uRam0000000183398d88 = func_0x00018dffc910(uVar6 ^ 0xf706e54e9b976c46);
  uVar6 = (uRam0000000183398d88 ^ 0x1b5b011f280) & 0x3fffffffffc0 ^ 0x6c62c1b5b011f2ac;
  uRam0000000183398d50 = uRam0000000183398d50 ^ uVar6 ^ 0xa79ea303deb6e776;
  uRam0000000183399098 = (uRam0000000183399098 * -0x39f6e38d452b601b ^ uRam0000000183398d50) + uVar6
  ;
  uRam0000000183398d20 = uRam0000000183399098 ^ uRam0000000183398d50;
  uRam0000000183398df8 = 0;
  uVar6 = (uRam0000000183398e08 ^ 0x84225cda) + uRam0000000183398f78 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183398e08 ^ 0x84225cda;
  uVar4 = ((uRam0000000183398f78 + uRam0000000183398e08) * 0x2000 |
          uRam0000000183398f78 + uRam0000000183398e08 >> 0x33) ^ uRam0000000183398f78;
  uRam0000000183398fd8 =
       func_0x00018dffc910((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183398e08 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183398f78 + 0x84225cda));
  uVar6 = uRam0000000183398fd8 & 0x7fffffffff;
  uRam0000000183398d70 = uRam0000000183398ef8 ^ uVar6 ^ 0x7fff;
  uRam0000000183398dd8 = (uRam0000000183398dd8 ^ uVar6) + 0x7fff ^ 0x87084976b28ae9d2;
  uRam0000000183398ee8 = (uRam0000000183398ee8 * 0xc583946eac471bd ^ uRam0000000183398dd8) + uVar6;
  uRam0000000183399080 = uRam0000000183398ee8 ^ uRam0000000183398dd8;
  uRam0000000183398ec8 = 0x7fff;
  uVar6 = (~uRam0000000183398f88 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183398e08) +
          ((param_4 ^ 0x84222325) & uRam0000000183398e08) * 2);
  uVar6 = (uVar6 | uRam0000000183398e80) + (uVar6 & uRam0000000183398e80);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183399008 =
       func_0x00018dffc910((param_4 ^ 0x84225cda | uVar6) + (uVar6 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uRam0000000183399088 = (ulonglong)uVar2;
  uRam0000000183398ef8 =
       (uRam0000000183398ef8 ^ uRam00000001833990b0 & 0xfffffffffffffffc) + uRam0000000183399088 ^
       0x9ef12321fc16fed5;
  uRam0000000183398f58 =
       (uRam0000000183398f58 * 0x7e50d7af8b7f4001 ^ uRam0000000183398ef8) +
       (uRam00000001833990b0 & 0xfffffffffffffffc);
  uRam0000000183398d00 = uRam0000000183398f58 ^ uRam0000000183398ef8;
  uVar2 = uVar2 ^ param_3;
  uVar6 = (~uRam0000000183398e88 + 0x74d757b3) *
          ((uRam0000000183398f08 ^ 0x5e125251) +
          (ulonglong)((uint)uRam0000000183398f08 & 0x5e125251) * 2);
  uVar6 = (uVar6 | uRam0000000183398f50) + (uVar6 & uRam0000000183398f50);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398f58 =
       func_0x00018dffc910((uVar6 | 0x2ac505e3) + (ulonglong)((uint)uVar6 & 0x2ac505e3));
  uRam0000000183398e60 =
       (uRam0000000183398e60 ^ uRam0000000183398f58 ^ 0x63957cd6de993fdc) + 0xfef777f6 ^
       0x270b65d701544cae;
  uRam0000000183399048 =
       (uRam0000000183399048 * 0x1cadd3f0fd7f0f49 ^ uRam0000000183398e60) +
       (uRam0000000183398f58 ^ 0x63957cd6de993fdc);
  uRam0000000183398db0 = uRam0000000183399048 ^ uRam0000000183398e60;
  uRam0000000183398e80 = 0xfef777f6;
  uRam0000000183398f40 = func_0x00018dffc910(uRam0000000183398e98 ^ 0x29fdffd05e);
  uRam0000000183398dc8 =
       (uRam0000000183398dc8 ^ uRam0000000183398f40) + 0x72f3232b ^ 0x80e0640effbae76d;
  uRam0000000183399088 =
       (uRam0000000183399088 * 0x75af2311b360ee0b ^ uRam0000000183398dc8) + uRam0000000183398f40;
  uRam0000000183398f50 = uRam0000000183399088 ^ uRam0000000183398dc8;
  uRam0000000183398fb0 = 0x72f3232b;
  uVar6 = (~uRam0000000183398ee0 + 0x100bd101) *
          ((uRam0000000183399090 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183399090 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183399030) + (uVar6 & uRam0000000183399030);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398d88 =
       func_0x00018dffc910((uVar6 | 0x9429f225) + (ulonglong)((uint)uVar6 & 0x9429f225));
  uRam0000000183398ff0 =
       (uRam0000000183398ff0 ^ uRam0000000183398d88 & 0x7fffffffffffffff) - 0x100bd100 ^
       0x75d70193cfbbcc40;
  uRam0000000183398fc8 =
       (uRam0000000183398fc8 * 0x19e27c807344ec4f ^ uRam0000000183398ff0) +
       (uRam0000000183398d88 & 0x7fffffffffffffff);
  uRam0000000183398e58 = uRam0000000183398fc8 ^ uRam0000000183398ff0;
  uRam0000000183398e40 = 0xeff42f00;
  uVar6 = (uRam0000000183398d30 ^ _UNK_18244ba90) + uRam0000000183398e28 + 0x84220583;
  uVar4 = (uRam0000000183398e28 ^ _UNK_18244ba98) + uRam0000000183398d30 + 0x100bd100;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183398d30 ^ _UNK_18244ba90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398e28 ^ _UNK_18244ba98;
  uRam0000000183398f00 =
       func_0x00018dffc910((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183398d30 + 0x100bd100) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183398e28 + 0x84220583));
  uVar3 = ~(uint)uRam0000000183398f00 & 0x26a6;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          (ulonglong)uVar3;
  uRam0000000183398fb8 = uRam0000000183398f60 ^ uVar6 ^ 0x100bf7a6;
  uRam0000000183398dc8 = (uRam0000000183398dc8 ^ uVar6) + 0x100bf7a6 ^ 0xd8e42608f8990f74;
  uRam0000000183398f80 = (uRam0000000183398f80 * -0x3b67746e5f78ea9f ^ uRam0000000183398dc8) + uVar6
  ;
  uRam0000000183398f40 = uRam0000000183398f80 ^ uRam0000000183398dc8;
  uRam0000000183398e28 = 0x100bf7a6;
  uRam0000000183398fd0 = func_0x00018dffc910(uRam0000000183398fd8 + 0xa7007a7cffc2ff ^ 200);
  uRam0000000183398da8 = uRam0000000183398e50 ^ uRam0000000183398fd0 ^ 0x1000026a6;
  uRam0000000183398ec0 =
       (uRam0000000183398ec0 ^ uRam0000000183398fd0) + 0x1000026a6 ^ 0x37562b854e275dec;
  uRam0000000183398fe0 =
       (uRam0000000183398fe0 * -0x17899143c71e5343 ^ uRam0000000183398ec0) + uRam0000000183398fd0;
  uRam0000000183398e28 = uRam0000000183398fe0 ^ uRam0000000183398ec0;
  uRam0000000183398ed0 = 0x26a6;
  uVar6 = (uRam00000001833990d8 ^ _UNK_18244baa0) + uRam00000001833990d8 + 0x84222325;
  uVar4 = (uRam00000001833990d8 ^ _UNK_18244baa8) + uRam00000001833990d8 + 0x462e2cf4;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833990d8 ^ _UNK_18244baa0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833990d8 ^ _UNK_18244baa8;
  uRam0000000183398de8 =
       func_0x00018dffc910((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833990d8 + 0x462e2cf4) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001833990d8 + 0x84222325));
  uVar6 = uRam0000000183398de8 >> 1 | uRam0000000183398de8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam0000000183398de8) & 0xffffffffffe00000;
  uRam0000000183398fc8 = (uRam0000000183398fc8 ^ uVar6) - 0x462e2cf4 ^ 0x79fe31f86a3fb989;
  uRam0000000183398f10 = (uRam0000000183398f10 * 0x6af8d4174d718db5 ^ uRam0000000183398fc8) + uVar6;
  uRam0000000183398fe8 = uRam0000000183398f10 ^ uRam0000000183398fc8;
  uRam0000000183398e58 = 0xb9d1d30c;
  uRam0000000183398ef8 = func_0x00018dffc910(uRam0000000183398f00 ^ 0x26ffbd8efffb39);
  uVar6 = uRam0000000183398ef8 ^ 0x462e2ef6;
  uVar4 = uVar6 >> 1 | uVar6;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6) * -0x67cbaf0d73f651d7;
  uRam0000000183399008 = uRam00000001833990e8 ^ uVar6 ^ 0x462e539a;
  uRam0000000183398ec8 = (uRam0000000183398ec8 ^ uVar6) + 0x462e539a ^ 0x69823f5384baacfb;
  uRam0000000183399028 = (uRam0000000183399028 * 0x6b7441b06ebcef1b ^ uRam0000000183398ec8) + uVar6;
  uRam0000000183398ff8 = uRam0000000183399028 ^ uRam0000000183398ec8;
  uRam00000001833990f8 = 0x462e539a;
  uRam0000000183398ea0 = func_0x00018dffc910(uRam0000000183398e48 + 0xff61002ab300ccff ^ 0xaf);
  uVar6 = uRam0000000183398ea0 & 0xfffffffffffff800;
  uRam0000000183399090 = uRam0000000183398dd8 ^ uVar6 ^ 0x1000026a6;
  uRam0000000183399020 = (uRam0000000183399020 ^ uVar6) + 0x1000026a6 ^ 0x197f39e17f30e113;
  uRam0000000183398f08 = (uRam0000000183398f08 * -0x1b4be2414cb43937 ^ uRam0000000183399020) + uVar6
  ;
  uRam0000000183399020 = uRam0000000183398f08 ^ uRam0000000183399020;
  uRam0000000183399030 = 0x26a6;
  uVar6 = (uRam00000001833990b0 ^ _UNK_18244bab0) + uRam0000000183398ec0 + 0x84222325;
  uVar4 = (uRam0000000183398ec0 ^ _UNK_18244bab8) + uRam00000001833990b0 + 0x481c0590;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833990b0 ^ _UNK_18244bab0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398ec0 ^ _UNK_18244bab8;
  uRam0000000183398e48 =
       func_0x00018dffc910((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833990b0 + 0x481c0590) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183398ec0 + 0x84222325));
  uRam0000000183398ed0 =
       (uRam0000000183398ed0 ^ uRam0000000183398e48) - 0x481c0590 ^ 0xd67fbca442c32194;
  uRam0000000183398ed8 =
       (uRam0000000183398ed8 * 0x7c19510ac42d12a3 ^ uRam0000000183398ed0) + uRam0000000183398e48;
  uRam0000000183398f60 = uRam0000000183398ed8 ^ uRam0000000183398ed0;
  uRam0000000183398e08 = 0xb7e3fa70;
  uRam0000000183398e70 = func_0x00018dffc910(uRam0000000183398d80 ^ 0xff0b006b62ff4216);
  uVar6 = uRam0000000183399010 ^ 0x481c2c36;
  uRam0000000183398df8 = uRam0000000183398e38 ^ uVar6 ^ 0x1000026a6;
  uRam0000000183398f98 = (uRam0000000183398f98 ^ uVar6) + 0x1000026a6 ^ 0xba5249ec04a96f59;
  uRam0000000183399030 = (uRam0000000183399030 * 0x1170c740af9d8575 ^ uRam0000000183398f98) + uVar6;
  uRam00000001833990f8 = uRam0000000183399030 ^ uRam0000000183398f98;
  uRam0000000183398e48 = 0x26a6;
  uVar6 = (~uRam0000000183398ea8 + 0x72f3232c) *
          ((uRam0000000183398e98 ^ 0x7ad554d3) +
          (ulonglong)((uint)uRam0000000183398e98 & 0x7ad554d3) * 2);
  uVar6 = (uVar6 | uRam0000000183398e38) + (uVar6 & uRam0000000183398e38);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398ff8 =
       func_0x00018dffc910((uVar6 | 0x82677f8) + (ulonglong)((uint)uVar6 & 0x82677f8));
  uVar6 = uRam0000000183398ff8 & 0xfffffffff8000000 ^ 0xfef777f6;
  uRam0000000183398d08 = uRam00000001833990e0 ^ uVar6 ^ 0x171ea9b21;
  uRam0000000183398d20 = (uRam0000000183398d20 ^ uVar6) + 0x171ea9b21 ^ 0xa31ee404a20a6035;
  uRam0000000183398fc8 = (uRam0000000183398fc8 * -0x789219d394293521 ^ uRam0000000183398d20) + uVar6
  ;
  uRam0000000183398fc0 = uRam0000000183398fc8 ^ uRam0000000183398d20;
  uRam00000001833990c0 = 0x71ea9b21;
  uRam0000000183399098 = func_0x00018dffc910(uRam0000000183399090 + 0x70fff7180025ff ^ 0x43);
  uVar6 = uRam0000000183399098 ^ 0xfef777ff;
  uVar6 = ((uVar6 << 0x25 | uVar6 >> 0x1b) >> 1 | (uVar6 >> 0x1b) << 0x3f) ^ 0xfef777f6;
  uRam0000000183398d00 = (uRam0000000183398d00 ^ uVar6) + 0x8c0454dd ^ 0xf8759d0ea9a811df;
  uRam0000000183398e68 = (uRam0000000183398e68 * 0x2e4b2ef3953e02c1 ^ uRam0000000183398d00) + uVar6;
  uRam00000001833990d8 = uRam0000000183398e68 ^ uRam0000000183398d00;
  uRam00000001833990b8 = 0x8c0454dd;
  uVar6 = (~uRam0000000183398e20 + 0xe5e64645) *
          ((uRam0000000183398d50 ^ 0x82677f8) +
          (ulonglong)((uint)uRam0000000183398d50 & 0x82677f8) * 2);
  uVar6 = (uVar6 | uRam0000000183399028) + (uVar6 & uRam0000000183399028);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183398fd0 =
       func_0x00018dffc910((uVar6 | 0xedc031bc) + (ulonglong)((uint)uVar6 & 0xedc031bc));
  uVar6 = uRam0000000183398fd0 << 0x13 | (uRam0000000183398fd0 & 0x7fffffffffffffff) >> 0x2d;
  uRam00000001833990a0 = uRam0000000183399020 ^ uVar6 ^ 0x171ea9b21;
  uRam0000000183399028 = (uRam0000000183399028 ^ uVar6) + 0x171ea9b21 ^ 0x57cbc2cc71e600ca;
  uRam00000001833990e8 = (uRam00000001833990e8 * -0x592775ecb44538c7 ^ uRam0000000183399028) + uVar6
  ;
  uRam0000000183398e68 = uRam00000001833990e8 ^ uRam0000000183399028;
  lRam0000000183399058 = 0x71ea9b21;
  uRam0000000183398e28 = func_0x00018dffc910(uRam0000000183399098 + 0x22ff8422ffe1ff ^ 0x6b);
  uRam0000000183398fd0 = uRam0000000183398e28 ^ 0x71ea9b21;
  uRam0000000183398f10 = uRam0000000183398f10 ^ uRam0000000183398fd0 ^ 0xf18a882aaae4620a;
  uRam0000000183399020 =
       (uRam0000000183399020 * 0x314122bc095073db ^ uRam0000000183398f10) + uRam0000000183398fd0;
  uRam0000000183399070 = uRam0000000183399020 ^ uRam0000000183398f10;
  uRam0000000183398fa0 = 0;
  uVar6 = (uRam0000000183398d88 ^ _UNK_18244bac0) + uRam0000000183398f20 + 0x7ad554d3;
  uVar4 = (uRam0000000183398f20 ^ _UNK_18244bac8) + uRam0000000183398d88 + 0x1088809;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183398d88 ^ _UNK_18244bac0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183398f20 ^ _UNK_18244bac8;
  uRam0000000183398fb0 =
       func_0x00018dffc910((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183398d88 + 0x1088809) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183398f20 + 0x7ad554d3));
  uVar6 = uRam0000000183398fb0 >> 1 | uRam0000000183398fb0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183398fb0;
  uRam0000000183398de8 = uRam0000000183398de8 ^ uVar6 ^ 0x542e402f91dd1f92;
  uRam0000000183398fa0 = (uRam0000000183398fa0 * 0x4a9b82051c13bfa5 ^ uRam0000000183398de8) + uVar6;
  uRam0000000183399060 = uRam0000000183398fa0 ^ uRam0000000183398de8;
  uRam0000000183398d60 = 0;
  uRam0000000183399038 = func_0x00018dffc910(lRam0000000183398dc0 + 0x50083830021ffU ^ 0xfc);
  uVar6 = uRam0000000183399038 << 0x38 | uRam0000000183399038 >> 8;
  uRam00000001833990b8 = uRam00000001833990d8 ^ uVar6 ^ 0x26a6;
  uRam0000000183398fe8 = (uRam0000000183398fe8 ^ uVar6) + 0x26a6 ^ 0xeeae7832c83c1aca;
  uRam0000000183398f50 = (uRam0000000183398f50 * 0x2fcc395621620649 ^ uRam0000000183398fe8) + uVar6;
  uRam0000000183398ef0 = uRam0000000183398f50 ^ uRam0000000183398fe8;
  uRam0000000183398ed8 = 0x26a6;
  uVar4 = (ulonglong)uVar2;
  uVar6 = uVar4 ^ 0x84222325 ^ uRam0000000183398f88;
  lVar7 = (uVar4 ^ 0x84222325) + uRam0000000183399018;
  uVar8 = uVar6 + lVar7;
  uVar9 = (uRam0000000183399018 ^ 0x26a6) + uRam0000000183398f88 + 0x26a6;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar6;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183399018 ^ 0x26a6;
  uRam0000000183398d58 =
       func_0x00018dffc910((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183398f88 + 0x26a6) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  uVar6 = (uVar4 | 0x26a6) ^ uRam0000000183398d58;
  lVar7 = uVar4 - (uVar2 & 0x26a6) * 2;
  uRam0000000183398d18 = (uRam0000000183398d18 ^ uVar6) + lVar7 + 0x26a6 ^ 0x1ecef687ca5a2213;
  uRam0000000183398d60 = (uRam0000000183398d60 * -0x43a9bd1f14e641db ^ uRam0000000183398d18) + uVar6
  ;
  uRam0000000183398ef8 = uRam0000000183398d60 ^ uRam0000000183398d18;
  uRam0000000183398ed0 = lVar7 + 0x26a6U & 0xffffffff;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x910a,0x19a);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dff3f74 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182449c10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dC; akz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18dffc9a0, runtime 6ffff5c0c9a0) =====

void FUN_18dffc9a0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018dffc9eb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18244bbd0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



