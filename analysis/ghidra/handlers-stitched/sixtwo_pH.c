// ===== STITCHED CORPUS: sixtwo.pH =====
// handlers: 14  continuation blocks: 127  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x19c088', '0x74e320', '0x74e328', '0x74e330', '0x74e338', '0x74e340', '0x74e348', '0x74e350', '0x74e358', '0x74e360', '0x74e368', '0x74e370', '0x74e380', '0x74e390', '0x74e398', '0x74e3a0', '0x74e3a8', '0x74e3b0', '0x74e3b8']

// ===== Lsixtwo/pH; _6028afdec40f03798ed6bfedfc283347 ()V (handler @ image 185fd50c0, runtime 6fffedbe50c0) =====

void FUN_185fd50c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185fd519c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18074f940 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/pH; cSE ()Ljava/util/List; (handler @ image 185fdb390, runtime 6fffedbeb390) =====

void FUN_185fdb390(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000185fdb3b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180750e90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pH; cSF ()Z (handler @ image 185fdb590, runtime 6fffedbeb590) =====

void FUN_185fdb590(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000185fdb5b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180750f70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pH; cSG ()F (handler @ image 185fdb790, runtime 6fffedbeb790) =====

void FUN_185fdb790(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000185fdb7b5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180751050 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pH; cSH (Ljava/util/List;)Lsixtwo/pH; (handler @ image 185fdb9a0, runtime 6fffedbeb9a0) =====

void FUN_185fdb9a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000185fdb9c5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180751130 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pH; cSI (Z)Lsixtwo/pH; (handler @ image 185fdbba0, runtime 6fffedbebba0) =====

void FUN_185fdbba0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000185fdbbc5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180751210 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pH; cSJ (F)Lsixtwo/pH; (handler @ image 185fdbda0, runtime 6fffedbebda0) =====

void FUN_185fdbda0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000185fdbdc8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807512f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pH; cSK (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 185fdbfb0, runtime 6fffedbebfb0) =====

undefined8 FUN_185fdbfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/pH; cSL ([B)Ljava/lang/String; (handler @ image 185fdc040, runtime 6fffedbec040) =====

void FUN_185fdc040(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000185fdc0e0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180751550 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pH; cSM (IJ)Ljava/lang/String; (handler @ image 185fca9d0, runtime 6fffedbda9d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fca9d0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar9 [16];
  
  uVar5 = (~uRam000000018310d160 + 0x81c851cbf7e8cd9c) *
          ((uRam000000018310d4d8 ^ 0xe6ce1c5ac56eeb75) +
          (uRam000000018310d4d8 & 0x66ce1c5ac56eeb75) * 2);
  uVar5 = (uVar5 | uRam000000018310d000) + (uVar5 & uRam000000018310d000);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018310cf08 =
       func_0x000185fd1680((uVar5 | 0x67064d91328626ee) + (uVar5 & 0x67064d91328626ee));
  uVar5 = (uRam000000018310cf08 ^ 0x33abe655870) * -0x7a7206ecde2893dd & 0x7ffffffffff;
  uRam000000018310d238 = (uRam000000018310d238 ^ uVar5) + 0xe7ce5ddbf7eccddb ^ 0xb316e35346b2e8da;
  uRam000000018310cf48 = (uRam000000018310cf48 * -0x1d6082895f92c761 ^ uRam000000018310d238) + uVar5
  ;
  uRam000000018310d4a0 = 0xe7ce5ddbf7eccddb;
  uVar5 = (uRam000000018310cf00 ^ _UNK_18074e320) + uRam000000018310d3e0 + 0x2b4a60934bfcb5f5;
  uVar10 = (uRam000000018310d3e0 ^ _UNK_18074e328) + uRam000000018310cf00 + 0x2f2fbff760aecf96;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018310cf00 ^ _UNK_18074e320;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018310d3e0 ^ _UNK_18074e328;
  uRam000000018310cf50 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018310cf00 + 0x2f2fbff760aecf96) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018310d3e0 + 0x2b4a60934bfcb5f5));
  uVar10 = uRam000000018310cf50 ^ 0x4259f6420204906;
  uVar5 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar10;
  uRam000000018310d2c0 = (uRam000000018310d2c0 ^ uVar10) + 0x465df64af705946 ^ 0x4a5e192f50dad8df;
  uRam000000018310cfa8 = (uRam000000018310cfa8 * 0x30f7593d1b5f697 ^ uRam000000018310d2c0) + uVar10;
  uRam000000018310d1c8 = uRam000000018310cfa8 ^ uRam000000018310d2c0;
  uRam000000018310d2f8 = 0x465df64af705946;
  uVar5 = (uRam000000018310d418 ^ _UNK_18074e330) + uRam000000018310d430 + 0x84222325;
  uVar10 = (uRam000000018310d430 ^ _UNK_18074e338) + uRam000000018310d418 + 0x8555fb01612c0500;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018310d418 ^ _UNK_18074e330;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018310d430 ^ _UNK_18074e338;
  uRam000000018310d1d8 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018310d418 + 0x8555fb01612c0500) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018310d430 + 0x84222325));
  uVar5 = (uRam000000018310d1d8 ^ 0x8555fb01612c0500) * 0xf61bb562001fbf7;
  uRam000000018310d1b0 = (uRam000000018310d1b0 ^ uVar5) + 0x7aaa04fe9ed3fb00 ^ 0x8ebba38eff244dbe;
  uRam000000018310d250 = (uRam000000018310d250 * 0x3bc1436930e6227b ^ uRam000000018310d1b0) + uVar5;
  uRam000000018310d290 = uRam000000018310d250 ^ uRam000000018310d1b0;
  uRam000000018310d238 = 0x7aaa04fe9ed3fb00;
  uVar5 = (~uRam000000018310d2a8 + 0x8555fb01612c0501) *
          ((uRam000000018310d370 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018310d370 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018310d310) + (uVar5 & uRam000000018310d310);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018310d080 =
       func_0x000185fd1680((uVar5 | 0x8555fb01e50e59da) + (uVar5 & 0x8555fb01e50e59da));
  uRam000000018310d4e0 = uRam000000018310d330 ^ uRam000000018310d080 ^ 0x8555fb01612c84ff;
  uRam000000018310d438 =
       (uRam000000018310d438 ^ uRam000000018310d080) + 0x8555fb01612c84ff ^ 0x2747d8dc4f30c7e5;
  uRam000000018310d008 =
       (uRam000000018310d008 * 0x4e88edabd5bd166b ^ uRam000000018310d438) + uRam000000018310d080;
  uRam000000018310d360 = uRam000000018310d008 ^ uRam000000018310d438;
  uRam000000018310d410 = 0x8555fb01612c84ff;
  uVar5 = (uRam000000018310d328 ^ _UNK_18074e340) + uRam000000018310d270 + 0x84222325;
  uVar10 = (uRam000000018310d270 ^ _UNK_18074e348) + uRam000000018310d328 + 0xec056c546b543e00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018310d328 ^ _UNK_18074e340;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018310d270 ^ _UNK_18074e348;
  uRam000000018310d458 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018310d328 + 0xec056c546b543e00) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018310d270 + 0x84222325));
  uRam000000018310d4f0 = uRam000000018310d080 * -0x4792c736cef0ccbd;
  uRam000000018310d1d0 = uRam000000018310d1d0 + 0x13fa93ab94abc200 ^ 0x4ed3bf4e214bdb1;
  uRam000000018310d080 = uRam000000018310d4f0 ^ uRam000000018310d1d0;
  uRam000000018310d208 = uRam000000018310cf70 ^ 0x13fa93ab94abc200;
  uRam000000018310d418 = 0x13fa93ab94abc200;
  uVar5 = (~uRam000000018310cf70 + 0xec056c546b543e01) *
          ((uRam000000018310cf28 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018310cf28 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018310d2d8) + (uVar5 & uRam000000018310d2d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018310d010 =
       func_0x000185fd1680((uVar5 | 0xec056c54ef7662da) + (uVar5 & 0xec056c54ef7662da));
  uVar5 = uRam000000018310d010 << 0x1c | uRam000000018310d010 >> 0x24;
  uRam000000018310d140 = uRam000000018310d4e0 ^ uVar5 ^ 0xec056c546b54bdff;
  uRam000000018310d4d0 = (uRam000000018310d4d0 ^ uVar5) + 0xec056c546b54bdff ^ 0x293c92c08cbc842b;
  uRam000000018310d4e0 = (uRam000000018310d4e0 * -0x1a9ef35ebfbb1ac3 ^ uRam000000018310d4d0) + uVar5
  ;
  uRam000000018310d020 = uRam000000018310d4e0 ^ uRam000000018310d4d0;
  uRam000000018310cf88 = -0x13fa93ab94ab4201;
  uVar5 = func_0x000185fd1680(uRam000000018310d4e0 ^ 0xb334590a59225a51);
  uVar5 = (uVar5 ^ 0xe405004062000000) & 0xec056c546b500000;
  uRam000000018310d1e0 = uRam000000018310d4d0 ^ uVar5 ^ 0x7fff;
  uRam000000018310d448 = (uRam000000018310d448 ^ uVar5) + 0x7fff ^ 0x7f8198f20cf2b051;
  uRam000000018310d440 = (uRam000000018310d440 * 0xefd71cdae8a9295 ^ uRam000000018310d448) + uVar5;
  uRam000000018310d400 = uRam000000018310d440 ^ uRam000000018310d448;
  uRam000000018310d3a8 = 0x7fff;
  uVar5 = (~uRam000000018310d330 + 0xb86069450dba8f01) *
          ((uRam000000018310d128 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018310d128 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018310d210) + (uVar5 & uRam000000018310d210);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018310d128 =
       func_0x000185fd1680((uVar5 | 0xb86069458998d3da) + (uVar5 & 0xb86069458998d3da));
  uVar5 = uRam000000018310d128 ^ 0x7fff;
  uRam000000018310d110 = uRam000000018310d478 ^ uVar5 ^ 0xb86069450dbb0eff;
  uRam000000018310d1a8 = (uRam000000018310d1a8 ^ uVar5) + 0xb86069450dbb0eff ^ 0x95d71abb0b4118f1;
  uRam000000018310d100 = (uRam000000018310d100 * -0x52a45550360668b5 ^ uRam000000018310d1a8) + uVar5
  ;
  uRam000000018310d210 = uRam000000018310d100 ^ uRam000000018310d1a8;
  uRam000000018310d0d0 = 0xb86069450dbb0eff;
  uRam000000018310cf38 = func_0x000185fd1680(uRam000000018310d138 + 0x8b74a844578262de ^ 0x4b);
  uVar10 = _UNK_18074e358;
  uVar5 = _UNK_18074e350;
  uVar4 = uRam000000018310cf38 - (uRam000000018310cf38 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = ((uint)bVar1 + (uint)bVar1 ^ uRam000000018310cf38) & 0x7fffffffffffffff;
  uRam000000018310d488 = uRam000000018310d250 ^ uVar4 ^ 0xec343d40a75d2721;
  uRam000000018310d280 = (uRam000000018310d280 ^ uVar4) + 0xec343d40a75d2721 ^ 0x80e0c8d8658c459b;
  uRam000000018310d400 = (uRam000000018310d400 * -0x2831d0fc34936a63 ^ uRam000000018310d280) + uVar4
  ;
  uRam000000018310d140 = uRam000000018310d400 ^ uRam000000018310d280;
  uRam000000018310d4a0 = 0xec343d40a75d2721;
  uVar4 = (uRam000000018310d180 ^ _UNK_18074e350) + uRam000000018310d188 + 0xe7ce5ddb73ceeefe;
  uVar11 = (uRam000000018310d188 ^ _UNK_18074e358) + uRam000000018310d180 + 0x465df64af705946;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018310d180 ^ _UNK_18074e350;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018310d188 ^ _UNK_18074e358;
  uRam000000018310cf48 =
       func_0x000185fd1680((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam000000018310d180 + 0x465df64af705946) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018310d188 + 0xe7ce5ddb73ceeefe));
  uRam000000018310cf58 =
       (uRam000000018310cf58 ^ uRam000000018310cf48 ^ 0xe7ce5ddbf7eccddb) + 0xe3ab82bf589c949d ^
       0xe9546d1a9236868e;
  uRam000000018310cf20 =
       (uRam000000018310cf20 * 0x76d90f3e53c7f69d ^ uRam000000018310cf58) +
       (uRam000000018310cf48 ^ 0xe7ce5ddbf7eccddb);
  uRam000000018310d138 = uRam000000018310cf20 ^ uRam000000018310cf58;
  lRam000000018310cff8 = 0xe3ab82bf589c949d;
  uVar4 = (uRam000000018310d050 ^ uVar5) + uRam000000018310d338 + 0xe7ce5ddb73ceeefe;
  uVar11 = (uRam000000018310d338 ^ uVar10) + uRam000000018310d050 + 0x465df64af705946;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018310d050 ^ uVar5;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018310d338 ^ uVar10;
  uRam000000018310cf48 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018310d050 + 0x465df64af705946) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018310d338 + 0xe7ce5ddb73ceeefe));
  uRam000000018310d128 =
       (uRam000000018310d128 ^ uRam000000018310cf48) + 0x4445d40a7604942 ^ 0x25f2c1c0b05c6476;
  uRam000000018310d388 =
       (uRam000000018310d388 * -0x9c9c90d5fb0949d ^ uRam000000018310d128) + uRam000000018310cf48 ^
       uRam000000018310d128;
  uRam000000018310d458 = 0x4445d40a7604942;
  uVar5 = ~uRam000000018310d268 *
          ((uRam000000018310d058 ^ 0xe7ce5ddb73ceeefe) +
          (uRam000000018310d058 & 0x67ce5ddb73ceeefe) * 2);
  uVar5 = (uVar5 | uRam000000018310d338) + (uVar5 & uRam000000018310d338);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018310d168 =
       func_0x000185fd1680((uVar5 | 0x1831a2248c311101) + (uVar5 & 0x1831a2248c311101));
  uRam000000018310cfa8 =
       (uRam000000018310cfa8 ^ uRam000000018310d260) + 0x1831a22408133224 ^ 0x8a5df1695dde602d;
  uRam000000018310d020 =
       (uRam000000018310d020 * 0x3eb66f4ef6d2a93f ^ uRam000000018310cfa8) + uRam000000018310d260;
  uRam000000018310cf08 = uRam000000018310d020 ^ uRam000000018310cfa8;
  uRam000000018310d008 = 0x1831a22408133224;
  uRam000000018310cf10 = func_0x000185fd1680(uRam000000018310d1f0 ^ 0xaa2b50c7c670aabe);
  uRam000000018310d098 =
       uRam000000018310d098 ^ uRam000000018310cf10 & 0xe7ce5ddbf7eccddb ^ 0x8d41dfd35957c5f2;
  uRam000000018310cf48 =
       (uRam000000018310cf48 * -0x5f8eb194b4fefeff ^ uRam000000018310d098) +
       (uRam000000018310cf10 & 0xe7ce5ddbf7eccddb);
  uRam000000018310d058 = uRam000000018310cf48 ^ uRam000000018310d098;
  uRam000000018310d1d0 = 0;
  uVar5 = (uRam000000018310d480 ^ _UNK_18074e360) + uRam000000018310d2e8 + 0xe6ce1c5ac56eeb75;
  uVar10 = (uRam000000018310d2e8 ^ _UNK_18074e368) + uRam000000018310d480 + 0xe6ce1c5a414cc850;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018310d480 ^ _UNK_18074e360;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018310d2e8 ^ _UNK_18074e368;
  uRam000000018310d040 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018310d480 + 0xe6ce1c5a414cc850) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018310d2e8 + 0xe6ce1c5ac56eeb75));
  uRam000000018310cfa8 =
       uRam000000018310cfa8 ^ uRam000000018310d040 & 0xffffffffff800000 ^ 0xa6fb0ed3614b9900;
  uRam000000018310d278 =
       (uRam000000018310d278 * 0x3ae37dff88761421 ^ uRam000000018310cfa8) +
       (uRam000000018310d040 & 0xffffffffff800000);
  uRam000000018310d110 = uRam000000018310d278 ^ uRam000000018310cfa8;
  uRam000000018310d4b0 = 0;
  uVar5 = ((uRam000000018310d2d8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018310d2d8 & 0x84225cda) * 2) * -uRam000000018310d010;
  uVar5 = (uVar5 | uRam000000018310d0a0) + (uVar5 & uRam000000018310d0a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  lRam000000018310cff8 =
       func_0x000185fd1680((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  auVar9 = _UNK_1800170c0;
  uVar5 = (ulonglong)(~(uint)lRam000000018310cff8 & 0x7fff);
  uRam000000018310d038 = uRam000000018310d1c0 ^ uVar5 ^ 0x7fff;
  uRam000000018310d228 = (uRam000000018310d228 ^ uVar5) + 0x7fff ^ 0xb481e9e1a8f30641;
  uRam000000018310d4d0 = (uRam000000018310d4d0 * -0xa6fa781af0fcfcd ^ uRam000000018310d228) + uVar5;
  uRam000000018310cfb8 = uRam000000018310d4d0 ^ uRam000000018310d228;
  auVar7._8_8_ = _UNK_18019c088;
  auVar7._0_8_ = param_4 ^ 0x84222325;
  uRam000000018310d258 = 0x7fff;
  auVar8 = pshufb(auVar7 ^ _UNK_18074e370,_UNK_1800170c0);
  uVar10 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar10 + uRam000000018310d478;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam000000018310d120 ^ uVar10;
  }
  uRam000000018310cf30 = func_0x000185fd1680(SUB161(auVar7 ^ _UNK_18074e370,5) ^ uVar5);
  uVar3 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar3;
  uRam000000018310d4b8 =
       (uRam000000018310d4b8 ^ param_4 ^ uRam000000018310cf30) + uVar10 ^ 0xcb6647d29a8890bc;
  uRam000000018310cf88 =
       (uRam000000018310cf88 * -0x25fe754608d6f9cb ^ uRam000000018310d4b8) +
       (param_4 ^ uRam000000018310cf30);
  uRam000000018310d118 = uRam000000018310cf88 ^ uRam000000018310d4b8;
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar3 ^ 0x84222325;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = 0;
  auVar9 = pshufb(auVar8 ^ _UNK_18074e380,auVar9);
  uVar4 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar4 + uRam000000018310cf48;
  if (auVar9._4_4_ < 0) {
    uVar5 = uRam000000018310d020 ^ uVar4;
  }
  uRam000000018310d0b8 = uVar10;
  uRam000000018310d290 = func_0x000185fd1680(SUB161(auVar8 ^ _UNK_18074e380,5) ^ uVar5);
  uVar5 = uVar10 ^ (((ulonglong)((uVar3 | param_3) ^ (uint)uRam000000018310d290) & 0x3fffffff) <<
                    0x18 | uRam000000018310d290 >> 0x28);
  uVar4 = (uVar10 + param_3) - (ulonglong)((param_3 & uVar3) * 2);
  uRam000000018310d258 = (uRam000000018310d258 ^ uVar5) + uVar4 ^ 0x2463d8419f16ab89;
  uRam000000018310cf68 = (uRam000000018310cf68 * -0x60d7b83860440bb ^ uRam000000018310d258) + uVar5;
  uRam000000018310d3c8 = uRam000000018310cf68 ^ uRam000000018310d258;
  uVar4 = uVar4 & 0xffffffff;
  uRam000000018310d0f0 = uVar4;
  uRam000000018310cf10 = func_0x000185fd1680(uRam000000018310d398 ^ 0xffbb0055fd003026);
  uRam000000018310d180 =
       (uRam000000018310d180 ^ uRam000000018310cf10) + 0xff7deffd ^ 0xb1f89e212c4c208d;
  uRam000000018310d330 =
       (uRam000000018310d330 * 0x52d788c3bc585b35 ^ uRam000000018310d180) + uRam000000018310cf10;
  uRam000000018310d3f8 = uRam000000018310d330 ^ uRam000000018310d180;
  uRam000000018310cf68 = 0xff7deffd;
  uRam000000018310d378 = func_0x000185fd1680(uRam000000018310d2a0 ^ 0xff4d003183ffaa40);
  uVar5 = (uRam000000018310d378 & 0xfffffffffff) >> 1 | uRam000000018310d378 & 0xfffffffffff;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam000000018310d378 & 0xfffffffffff;
  uRam000000018310d438 = (uRam000000018310d438 ^ uVar5) + 0xd65fd0a9 ^ 0x53d48bf60cb8b1ce;
  uRam000000018310d0f8 = (uRam000000018310d0f8 * -0x6d96235139081e89 ^ uRam000000018310d438) + uVar5
  ;
  uRam000000018310d060 = uRam000000018310d0f8 ^ uRam000000018310d438;
  uRam000000018310d1d0 = 0xd65fd0a9;
  uRam000000018310d3b0 = func_0x000185fd1680(uRam000000018310d378 + 0xff41ffdec4ff60ff ^ 0x29);
  uVar5 = (ulonglong)(~(uint)uRam000000018310d3b0 & 0x7011) * -0x41af6b9cbc955727;
  uRam000000018310d298 = uRam000000018310d330 ^ uVar5 ^ 0xabc20584;
  uRam000000018310d360 = (uRam000000018310d360 ^ uVar5) + 0xabc20584 ^ 0x9dacac4ff0462d2f;
  uRam000000018310d1d8 = (uRam000000018310d1d8 * -0x2015d8e18c00c8bf ^ uRam000000018310d360) + uVar5
  ;
  uRam000000018310d0d8 = uRam000000018310d1d8 ^ uRam000000018310d360;
  uRam000000018310d498 = 0xabc20584;
  uRam000000018310d000 = func_0x000185fd1680(lRam000000018310cff8 + 0x4c002aec003dffU ^ 10);
  uVar5 = uRam000000018310d000 >> 1 | uRam000000018310d000;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           uRam000000018310d000;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           uVar10;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar10;
  uRam000000018310d418 = uRam000000018310d150 ^ uVar10 ^ 0x100007011;
  uRam000000018310d080 = (uRam000000018310d080 ^ uVar10) + 0x100007011 ^ 0xb61ec0a5ff2a53fe;
  uRam000000018310d1d8 = (uRam000000018310d1d8 * 0x1bb29717b86886b1 ^ uRam000000018310d080) + uVar10
  ;
  uRam000000018310d2f8 = uRam000000018310d1d8 ^ uRam000000018310d080;
  uRam000000018310d098 = 0x7011;
  uVar5 = (uRam000000018310d4a8 ^ _UNK_18074e390) + uRam000000018310d070 + 0x84222325;
  uVar10 = (uRam000000018310d070 ^ _UNK_18074e398) + uRam000000018310d4a8 + 0xa332eb0c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018310d4a8 ^ _UNK_18074e390;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018310d070 ^ _UNK_18074e398;
  uRam000000018310cf68 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018310d4a8 + 0xa332eb0c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018310d070 + 0x84222325));
  uVar5 = uRam000000018310cf68 - (uRam000000018310cf68 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018310cf68) & 0x7fffffffffffffff;
  uRam000000018310d180 = (uRam000000018310d180 ^ uVar5) - 0xa332eb0c ^ 0x66e37c28ee15b890;
  uRam000000018310d098 = (uRam000000018310d098 * -0x3f0cf42202b93b6f ^ uRam000000018310d180) + uVar5
  ;
  uRam000000018310d090 = uRam000000018310d098 ^ uRam000000018310d180;
  uRam000000018310d230 = 0x5ccd14f4;
  uVar5 = (uRam000000018310cf08 ^ _UNK_18074e3a0) + uRam000000018310d2a8 + 0x84225334;
  uVar10 = (uRam000000018310d2a8 ^ _UNK_18074e3a8) + uRam000000018310cf08 + 0xa332eb0c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018310cf08 ^ _UNK_18074e3a0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018310d2a8 ^ _UNK_18074e3a8;
  uRam000000018310d0d8 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018310cf08 + 0xa332eb0c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018310d2a8 + 0x84225334));
  uVar5 = uRam000000018310d0d8 >> 1 | (ulonglong)((uRam000000018310d0d8 & 1) != 0) << 0x3f;
  uRam000000018310d440 = uRam000000018310d340 ^ uVar5 ^ 0xa3335b1d;
  uRam000000018310d2d0 = (uRam000000018310d2d0 ^ uVar5) + 0xa3335b1d ^ 0xdc0621abeb6da6e6;
  uRam000000018310d0a0 = (uRam000000018310d0a0 * 0x383d284035bae749 ^ uRam000000018310d2d0) + uVar5;
  uRam000000018310d288 = uRam000000018310d0a0 ^ uRam000000018310d2d0;
  uRam000000018310d020 = 0xa3335b1d;
  uRam000000018310d278 = func_0x000185fd1680(uRam000000018310d3e0 + 0x640069bbff53ff ^ 0x37);
  uVar5 = (uRam000000018310d278 ^ 0xffff5ffd) << 0x1c | uRam000000018310d278 >> 0x24;
  uRam000000018310d3c0 = uRam000000018310cf58 ^ uVar5 ^ 0x100007011;
  uRam000000018310d168 = (uRam000000018310d168 ^ uVar5) + 0x100007011 ^ 0x27625b7abad2bba1;
  uRam000000018310d408 = (uRam000000018310d408 * -0x4f0cc695ba998bbf ^ uRam000000018310d168) + uVar5
  ;
  uRam000000018310d240 = uRam000000018310d408 ^ uRam000000018310d168;
  uRam000000018310d0c8 = 0x7011;
  uRam000000018310cfc0 = func_0x000185fd1680(uRam000000018310d3b8 ^ 0xc7ffc912008f90);
  uVar5 = uRam000000018310cfc0 >> 1 | uRam000000018310cfc0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018310cfc0;
  uRam000000018310d498 = (uRam000000018310d498 ^ uVar5) - 0x5d92fb37 ^ 0xe46257d148732b85;
  uRam000000018310d468 = (uRam000000018310d468 * 0x2139c6190b6b4501 ^ uRam000000018310d498) + uVar5;
  uRam000000018310d1a8 = uRam000000018310d468 ^ uRam000000018310d498;
  uRam000000018310d1f8 = 0xa26d04c9;
  uVar5 = (~uRam000000018310d480 + 0xd65fd0aa) *
          ((uRam000000018310cfd0 ^ 0x7b5fccd8) +
          (ulonglong)((uint)uRam000000018310cfd0 & 0x7b5fccd8) * 2);
  uVar5 = (uVar5 | uRam000000018310d0d0) + (uVar5 & uRam000000018310d0d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018310d0d8 =
       func_0x000185fd1680((uVar5 | 0xad001c71) + (ulonglong)((uint)uVar5 & 0xad001c71));
  uVar5 = uRam000000018310d0d8 >> 1 | uRam000000018310d0d8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
           ^ uRam000000018310d0d8;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
           ^ uVar10;
  uRam000000018310cf00 = (uRam000000018310cf00 ^ uVar10) + 0x29223f54 ^ 0xb786e718a3207213;
  uRam000000018310d408 = (uRam000000018310d408 * 0x1f4695a6f1aac855 ^ uRam000000018310cf00) + uVar10
  ;
  uRam000000018310d288 = uRam000000018310d408 ^ uRam000000018310cf00;
  uRam000000018310cfc0 = 0x29223f54;
  uVar5 = (uRam000000018310d130 ^ _UNK_18074e3b0) + uRam000000018310d020 + 0x7b5fccd8;
  uVar10 = (uRam000000018310d020 ^ _UNK_18074e3b8) + uRam000000018310d130 + 0xd65fd0a9;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018310d130 ^ _UNK_18074e3b0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018310d020 ^ _UNK_18074e3b8;
  uRam000000018310d138 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018310d130 + 0xd65fd0a9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018310d020 + 0x7b5fccd8));
  uRam000000018310d2c0 =
       (uRam000000018310d2c0 ^ uRam000000018310d138 & 0xffffffffffffc000) + 0xd65dc0a9 ^
       0x856aef97fa928ed0;
  uRam000000018310d110 =
       (uRam000000018310d110 * -0x2918ae94a406e025 ^ uRam000000018310d2c0) +
       (uRam000000018310d138 & 0xffffffffffffc000);
  uRam000000018310cfe0 = uRam000000018310d110 ^ uRam000000018310d2c0;
  uRam000000018310cfe8 = 0xd65dc0a9;
  uRam000000018310d4e0 = func_0x000185fd1680(lRam000000018310d0c0 + 0xff8500011cff76ffU ^ 0x2a);
  uVar5 = uRam000000018310d4e0 ^ 0x1bc12358081fa3bc;
  uRam000000018310d220 = uRam000000018310d300 ^ uVar5 ^ 0xd5ddc0a6;
  uRam000000018310d230 = (uRam000000018310d230 ^ uVar5) + 0xd5ddc0a6 ^ 0x2af3560c53721b6c;
  uRam000000018310d328 = (uRam000000018310d328 * -0x76cc9c462f30f941 ^ uRam000000018310d230) + uVar5
  ;
  uRam000000018310d140 = uRam000000018310d328 ^ uRam000000018310d230;
  uRam000000018310d0d0 = 0xd5ddc0a6;
  uVar5 = (~uRam000000018310d470 + 0xd5ddc0a7) *
          ((uRam000000018310cf70 ^ 0x51ffe383) +
          (ulonglong)((uint)uRam000000018310cf70 & 0x51ffe383) * 2);
  uVar5 = (uVar5 | uRam000000018310d4f8) + (uVar5 & uRam000000018310d4f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018310d298 =
       func_0x000185fd1680((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018310d2e8 = uRam000000018310d2e8 ^ uRam000000018310d298 ^ 0x29b0a989a98d014e;
  uRam000000018310d0c8 =
       (uRam000000018310d0c8 * -0x2f86dd1e486bab93 ^ uRam000000018310d2e8) + uRam000000018310d298;
  uRam000000018310cfb0 = uRam000000018310d0c8 ^ uRam000000018310d2e8;
  uRam000000018310d250 = 0;
  uVar5 = (uRam000000018310d098 ^ 0x84225334) + uRam000000018310d140 + 0x84225334;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018310d098 ^ 0x84225334;
  uVar10 = ((uRam000000018310d140 + uRam000000018310d098) * 0x2000 |
           uRam000000018310d140 + uRam000000018310d098 >> 0x33) ^ uRam000000018310d140;
  uRam000000018310d3a0 = uRam000000018310d298;
  lRam000000018310d380 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) - uRam000000018310d098 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018310d140 + 0x84225334));
  uVar5 = lRam000000018310d380 * -0x2ae780f05c4f945b & 0xfffffffffffffff0;
  uRam000000018310cf18 = uRam000000018310d4f8 ^ uVar5 ^ 0x7011;
  uRam000000018310d1e8 = (uRam000000018310d1e8 ^ uVar5) + 0x7011 ^ 0x94ed744a3391b155;
  uRam000000018310cfa8 = (uRam000000018310cfa8 * -0x6f583ffdbd177a73 ^ uRam000000018310d1e8) + uVar5
  ;
  uRam000000018310d1b0 = uRam000000018310cfa8 ^ uRam000000018310d1e8;
  uRam000000018310cfb0 = 0x7011;
  uVar5 = (~uRam000000018310cf98 + 0x821003) *
          ((uRam000000018310d2f0 ^ 0x7b5fccd8) +
          (ulonglong)((uint)uRam000000018310d2f0 & 0x7b5fccd8) * 2);
  uVar5 = (uVar5 | uRam000000018310cfb8) + (uVar5 & uRam000000018310cfb8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018310d080 =
       func_0x000185fd1680((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uVar5 = (uRam000000018310d080 ^ 0xffffffff) << 0x28 | (uRam000000018310d080 ^ 0xffffffff) >> 0x18;
  uRam000000018310d4d0 = uRam000000018310d4d0 ^ uVar5 ^ 0x4debee5e124973e2;
  uRam000000018310d1d0 = (uRam000000018310d1d0 * -0x523b3041c6ef3119 ^ uRam000000018310d4d0) + uVar5
  ;
  uRam000000018310d1f0 = uRam000000018310d1d0 ^ uRam000000018310d4d0;
  uRam000000018310d0b8 = 0;
  uRam000000018310d470 = func_0x000185fd1680(uRam000000018310d4c0 + 0x1eff841cffe1ff ^ 0x7b);
  uVar5 = uRam000000018310d470 << 0x29 | uRam000000018310d470 >> 0x17;
  uRam000000018310cf38 = uRam000000018310cf38 ^ uVar5 ^ 0xce8434b6e713a7bb;
  uRam000000018310d478 = (uRam000000018310d478 * -0x22f1514a0fb85ac9 ^ uRam000000018310cf38) + uVar5
  ;
  uRam000000018310d310 = uRam000000018310d478 ^ uRam000000018310cf38;
  uRam000000018310d1a8 = 0;
  uRam000000018310d4c0 = func_0x000185fd1680(uRam000000018310d098 ^ 0x2f008414001d42);
  uVar5 = uRam000000018310d4c0 << 0x3a | uRam000000018310d4c0 >> 6;
  uRam000000018310cfc8 = uRam000000018310d1c8 ^ uVar5 ^ 0x7011;
  uRam000000018310d458 = (uRam000000018310d458 ^ uVar5) + 0x7011 ^ 0x9bb974c95abb7b94;
  uRam000000018310d470 = (uRam000000018310d470 * -0x6fdee9586cce5c57 ^ uRam000000018310d458) + uVar5
  ;
  uRam000000018310d048 = uRam000000018310d470 ^ uRam000000018310d458;
  uRam000000018310d308 = 0x7011;
  uVar5 = uVar4 ^ 0x84222325 ^ uRam000000018310d348;
  lVar6 = (uVar4 ^ 0x84222325) + uRam000000018310d050;
  uVar10 = uVar5 + lVar6;
  uVar11 = (uRam000000018310d050 ^ 0x7011) + uRam000000018310d348 + 0x7011;
  uVar5 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar5;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018310d050 ^ 0x7011;
  uRam000000018310d1b8 =
       func_0x000185fd1680((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018310d348 + 0x7011) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar5 = uVar4 * 0x7011 ^ uRam000000018310d1b8;
  uRam000000018310d2d8 = uVar4 ^ 0x7011;
  uRam000000018310d410 = (uRam000000018310d410 ^ uVar5) + uRam000000018310d2d8 ^ 0xbf04aea2baa099fd;
  uRam000000018310d118 = (uRam000000018310d118 * -0x1275c75cadb142e7 ^ uRam000000018310d410) + uVar5
  ;
  uRam000000018310d250 = uRam000000018310d118 ^ uRam000000018310d410;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1fda7,0x4e3)
      /* POOL[0x1fda7,0x4e3]: ; | SLKrr | sixtwo/pG | AvBoP | cTD | cSu | sixtwo/pH | AohCi | Lsixtwo/pH; | cSD | sxRkB | cSx | (Ljava/lang/String;ILjava/lang/String;)V | cSw | ()[Lsixtwo/pF; | sJrRh | SQOHK | sixtwo/pL | Gjlkp | OAcWY | cSK | DkZQO | cSM | OxPZz | KUOEq | cSL | sixtwo/pI$vA | QVsEO | UaqaR | kJJrH | ZQFxo | cTd | (Lsixtwo/pF;)Lsixtwo/pI$vA; | cTf | cSR | (Lsixtwo/pF;)Lsixtwo/pH; | cSB | (Lsixtwo/pH;)Lsixtwo/pG; | cSC | dxx | cSy | cST | (Lsixtwo/pF;Lsixtwo/pH;)V | cTp | (Ljava/lang/String;)Lsixtwo/pL; | cSF | dxw | cTt | (Ljava/lang/Float;)Lsixtwo/pL; | cSG | dxv | cTb | (Lsixtwo/py;)Lcom/google/gson/Json */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185fccdca did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18074c998 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/pH; cSN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 185fd1710, runtime 6fffedbe1710) =====

void FUN_185fd1710(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000185fd174c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18074e510 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pH; cSO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 185fd2600, runtime 6fffedbe2600) =====

void FUN_185fd2600(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185fd267d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18074ea50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/pH; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 185faa1f0, runtime 6fffedbba1f0) =====

void FUN_185faa1f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1fda7,0x4e3)
      /* POOL[0x1fda7,0x4e3]: ; | SLKrr | sixtwo/pG | AvBoP | cTD | cSu | sixtwo/pH | AohCi | Lsixtwo/pH; | cSD | sxRkB | cSx | (Ljava/lang/String;ILjava/lang/String;)V | cSw | ()[Lsixtwo/pF; | sJrRh | SQOHK | sixtwo/pL | Gjlkp | OAcWY | cSK | DkZQO | cSM | OxPZz | KUOEq | cSL | sixtwo/pI$vA | QVsEO | UaqaR | kJJrH | ZQFxo | cTd | (Lsixtwo/pF;)Lsixtwo/pI$vA; | cTf | cSR | (Lsixtwo/pF;)Lsixtwo/pH; | cSB | (Lsixtwo/pH;)Lsixtwo/pG; | cSC | dxx | cSy | cST | (Lsixtwo/pF;Lsixtwo/pH;)V | cTp | (Ljava/lang/String;)Lsixtwo/pL; | cSF | dxw | cTt | (Ljava/lang/Float;)Lsixtwo/pL; | cSG | dxv | cTb | (Lsixtwo/py;)Lcom/google/gson/Json */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185faa2e7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180743680 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/pH; toJson ()Lcom/google/gson/JsonObject; (handler @ image 185fb9930, runtime 6fffedbc9930) =====

void FUN_185fb9930(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1fda7,0x4e3)
      /* POOL[0x1fda7,0x4e3]: ; | SLKrr | sixtwo/pG | AvBoP | cTD | cSu | sixtwo/pH | AohCi | Lsixtwo/pH; | cSD | sxRkB | cSx | (Ljava/lang/String;ILjava/lang/String;)V | cSw | ()[Lsixtwo/pF; | sJrRh | SQOHK | sixtwo/pL | Gjlkp | OAcWY | cSK | DkZQO | cSM | OxPZz | KUOEq | cSL | sixtwo/pI$vA | QVsEO | UaqaR | kJJrH | ZQFxo | cTd | (Lsixtwo/pF;)Lsixtwo/pI$vA; | cTf | cSR | (Lsixtwo/pF;)Lsixtwo/pH; | cSB | (Lsixtwo/pH;)Lsixtwo/pG; | cSC | dxx | cSy | cST | (Lsixtwo/pF;Lsixtwo/pH;)V | cTp | (Ljava/lang/String;)Lsixtwo/pL; | cSF | dxw | cTt | (Ljava/lang/Float;)Lsixtwo/pL; | cSG | dxv | cTb | (Lsixtwo/py;)Lcom/google/gson/Json */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185fb9a0c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180747dc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x5faa2ea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185faa2ea(void)

{
  FUN_190ddce00();
  (*_DAT_180743f18)();
  return;
}


// ----- block @ rva 0x5fafdf3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fafdf3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180744c88)();
  return;
}


// ----- block @ rva 0x5fafe56 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fafe56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180744c68)();
  return;
}


// ----- block @ rva 0x5fb03f5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fb03f5(void)

{
  FUN_190dd72e0();
  (*_DAT_180744398)();
  return;
}


// ----- block @ rva 0x5fb045d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fb045d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fb0979 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fb0979(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fb183a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fb183a(void)

{
  FUN_190dd72e0();
  (*_DAT_180744678)();
  return;
}


// ----- block @ rva 0x5fb4019 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fb4019(void)

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


// ----- block @ rva 0x5fb451e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fb451e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fb97a1 -----

void FUN_185fb97a1(void)

{
  return;
}


// ----- block @ rva 0x5fb980d -----

void FUN_185fb980d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fb9a0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fb9a0f(void)

{
  FUN_190ddce00();
  (*_DAT_180747ff8)();
  return;
}


// ----- block @ rva 0x5fc1782 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fc1782(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1807486a8)();
  return;
}


// ----- block @ rva 0x5fc2036 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fc2036(void)

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


// ----- block @ rva 0x5fc2247 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fc2247(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fc5988 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fc5988(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fc61a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fc61a6(void)

{
  FUN_190dd9df0();
  (*_DAT_180748aa8)();
  return;
}


// ----- block @ rva 0x5fc9857 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fc9857(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fca693 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fca693(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fca7fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fca7fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180749088)();
  return;
}


// ----- block @ rva 0x5fca83c -----

void FUN_185fca83c(void)

{
  return;
}


// ----- block @ rva 0x5fca8a8 -----

void FUN_185fca8a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fccdcd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fccdcd(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fccf76 -----

void FUN_185fccf76(void)

{
  return;
}


// ----- block @ rva 0x5fcdb55 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fcdb55(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fcdec3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fcdec3(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fce4b7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_185fcd406(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fcf11f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_185fcd406(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd01ec -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd01ec(void)

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


// ----- block @ rva 0x5fd0f59 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd0f59(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd12b6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd12b6(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd1305 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1305(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd174f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd174f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd17a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd17a3(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd1950 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1950(void)

{
  FUN_190ddfc90();
  (*_DAT_18074e968)();
  return;
}


// ----- block @ rva 0x5fd1b2c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd1b2c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd1e23 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1e23(void)

{
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = in_stack_00000030;
  FUN_190dd72e0();
  (*_DAT_18074e5a8)();
  return;
}


// ----- block @ rva 0x5fd1f3c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1f3c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd1fa2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd1fa2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000068 = 0;
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd20e4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd20e4(void)

{
  FUN_190dd72e0();
  (*_DAT_18074e528)();
  return;
}


// ----- block @ rva 0x5fd210c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd210c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd214a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd214a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_18074e878)();
  return;
}


// ----- block @ rva 0x5fd24d3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd24d3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18074e7d8)();
  return;
}


// ----- block @ rva 0x5fd2508 -----

void FUN_185fd2508(void)

{
  return;
}


// ----- block @ rva 0x5fd2516 -----

void FUN_185fd2516(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fd2680 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd2680(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_18074f678)();
  return;
}


// ----- block @ rva 0x5fd2831 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd2831(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd2963 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd2963(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd2ef3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd2ef3(void)

{
  (*_DAT_18074f858)();
  return;
}


// ----- block @ rva 0x5fd30c1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd30c1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd40aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd40aa(void)

{
  (*_DAT_18074f748)();
  return;
}


// ----- block @ rva 0x5fd420c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd420c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18074f3d8)();
  return;
}


// ----- block @ rva 0x5fd45a9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd45a9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd4f5d -----

void FUN_185fd4f5d(void)

{
  return;
}


// ----- block @ rva 0x5fd4f71 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd4f71(void)

{
  (*_DAT_18074f858)();
  return;
}


// ----- block @ rva 0x5fd4f7c -----

void FUN_185fd4f7c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fd519f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd519f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fd54e9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd54e9(void)

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


// ----- block @ rva 0x5fd569e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd569e(void)

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


// ----- block @ rva 0x5fd58ec -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fd58ec(void)

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


// ----- block @ rva 0x5fd77ca -----

void thunk_FUN_185fd5321(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x5fd85bc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fd85bc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = in_stack_00000048;
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fda0b1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fda0b1(void)

{
  char cVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  uint unaff_R15D;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = (ulonglong)unaff_R15D ^ 0x84222325;
  uVar2 = (~_DAT_18310da58 + 2) *
          ((_DAT_18310d500 ^ uVar2) + (ulonglong)((uint)_DAT_18310d500 & (uint)uVar2) * 2);
  uVar3 = (uVar2 | _DAT_18310d728) + (uVar2 & _DAT_18310d728);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar2 = (ulonglong)unaff_R15D ^ 0x84222324;
  _DAT_18310d918 = func_0x000185fdb300((uVar2 | uVar3) + (ulonglong)((uint)uVar2 & (uint)uVar3));
  uVar7 = unaff_R15D & _DAT_18001a990;
  uVar5 = unaff_R15D | _DAT_18001a990;
  uVar8 = unaff_R15D ^ _DAT_18001a990;
  lVar6 = ((ulonglong)unaff_R15D * (ulonglong)_DAT_180750dc0 << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_180750db0;
  lVar4 = ((ulonglong)uVar8 * (ulonglong)_DAT_180750e40 << 0x20) +
          (ulonglong)uVar8 * (ulonglong)_DAT_180750e30 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180750e20 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180750e10 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_180750e00 << 0x20 |
          (ulonglong)uVar7 * (ulonglong)_DAT_180750df0) +
          ((ulonglong)unaff_R15D * (ulonglong)_DAT_180750de0 << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_180750dd0 + lVar6;
  uVar2 = _DAT_18310d918 & 0x1ffffffff;
  _DAT_18310d6a8 =
       ((((ulonglong)uVar8 * (ulonglong)_DAT_180750da0 << 0x20) +
         (ulonglong)uVar8 * (ulonglong)_DAT_180750d90 +
         ((ulonglong)uVar5 * (ulonglong)_DAT_180750d80 << 0x20) +
         (ulonglong)uVar5 * (ulonglong)_DAT_180750d70 +
         ((ulonglong)uVar7 * (ulonglong)_DAT_180750d60 << 0x20 |
         (ulonglong)uVar7 * (ulonglong)_DAT_180750d50) +
         ((ulonglong)unaff_R15D * (ulonglong)_DAT_180750d40 << 0x20) +
         (ulonglong)unaff_R15D * (ulonglong)_DAT_180750d30 + lVar6) - lVar4) + 0xbf8ae61b603bd176;
  _DAT_18310d9e0 = _DAT_18310d718 ^ uVar2 ^ _DAT_18310d6a8;
  _DAT_18310da28 = (_DAT_18310da28 ^ uVar2) + _DAT_18310d6a8 ^ 0x7cc530358398cd9;
  _DAT_18310d5f8 = (_DAT_18310d5f8 * -0x39f5ad5355b0052b ^ _DAT_18310da28) + uVar2;
  _DAT_18310d760 = _DAT_18310d5f8 ^ _DAT_18310da28;
  _DAT_18310d6a8 = _DAT_18310d6a8 & 0xffffffff;
  FUN_190dd72e0(lVar4,*_DAT_18301ee50 + 0x2e9,0x12);
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdac81 -----

void thunk_FUN_185fd5321(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x5fdb116 -----

void FUN_185fdb116(void)

{
  return;
}


// ----- block @ rva 0x5fdb3b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb3b3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdb3ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb3ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180750f08)();
  return;
}


// ----- block @ rva 0x5fdb411 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb411(void)

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


// ----- block @ rva 0x5fdb426 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb426(void)

{
  FUN_190dd72e0();
  (*_DAT_180750ef8)();
  return;
}


// ----- block @ rva 0x5fdb44e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb44e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdb4a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb4a2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdb4c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb4c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180750ee8)();
  return;
}


// ----- block @ rva 0x5fdb4ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb4ed(void)

{
  (*_DAT_180750f28)();
  return;
}


// ----- block @ rva 0x5fdb4fe -----

void FUN_185fdb4fe(void)

{
  return;
}


// ----- block @ rva 0x5fdb506 -----

void FUN_185fdb506(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fdb5b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb5b3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdb5ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb5ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180750ff8)();
  return;
}


// ----- block @ rva 0x5fdb626 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb626(void)

{
  FUN_190dd72e0();
  (*_DAT_180750f98)();
  return;
}


// ----- block @ rva 0x5fdb64e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb64e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdb66f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb66f(void)

{
  FUN_190dd9df0();
  (*_DAT_180750fb8)();
  return;
}


// ----- block @ rva 0x5fdb6a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb6a2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdb6c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb6c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetBooleanField /*0x300*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180751008)();
  return;
}


// ----- block @ rva 0x5fdb6fc -----

void FUN_185fdb6fc(void)

{
  return;
}


// ----- block @ rva 0x5fdb704 -----

void FUN_185fdb704(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fdb7b8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb7b8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdb7f4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb7f4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1807510b8)();
  return;
}


// ----- block @ rva 0x5fdb819 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb819(void)

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


// ----- block @ rva 0x5fdb831 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb831(void)

{
  FUN_190dd72e0();
  (*_DAT_1807510e8)();
  return;
}


// ----- block @ rva 0x5fdb87d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb87d(void)

{
  FUN_190dd9df0();
  (*_DAT_1807510c8)();
  return;
}


// ----- block @ rva 0x5fdb8b0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdb8b0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdb8fe -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb8fe(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180751098)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x5fdb90e -----

void FUN_185fdb90e(void)

{
  return;
}


// ----- block @ rva 0x5fdb91b -----

void FUN_185fdb91b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fdb9c8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdb9c8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdba26 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdba26(void)

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


// ----- block @ rva 0x5fdba3b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdba3b(void)

{
  FUN_190dd72e0();
  (*_DAT_180751188)();
  return;
}


// ----- block @ rva 0x5fdba63 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdba63(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdba84 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdba84(void)

{
  FUN_190dd9df0();
  (*_DAT_180751158)();
  return;
}


// ----- block @ rva 0x5fdbab7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdbab7(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdbadb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbadb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180751178)();
  return;
}


// ----- block @ rva 0x5fdbb02 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbb02(void)

{
  (*_DAT_180751168)();
  return;
}


// ----- block @ rva 0x5fdbb13 -----

void FUN_185fdbb13(void)

{
  return;
}


// ----- block @ rva 0x5fdbb1d -----

void FUN_185fdbb1d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fdbbc8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbbc8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdbc01 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbc01(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1807512a8)();
  return;
}


// ----- block @ rva 0x5fdbc3b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbc3b(void)

{
  FUN_190dd72e0();
  (*_DAT_180751228)();
  return;
}


// ----- block @ rva 0x5fdbc63 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdbc63(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdbc84 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbc84(void)

{
  FUN_190dd9df0();
  (*_DAT_180751298)();
  return;
}


// ----- block @ rva 0x5fdbcdb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbcdb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetBooleanField /*0x348*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180751278)();
  return;
}


// ----- block @ rva 0x5fdbd02 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbd02(void)

{
  (*_DAT_180751258)();
  return;
}


// ----- block @ rva 0x5fdbd13 -----

void FUN_185fdbd13(void)

{
  return;
}


// ----- block @ rva 0x5fdbd1d -----

void FUN_185fdbd1d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fdbdcb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbdcb(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdbe04 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbe04(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180751328)();
  return;
}


// ----- block @ rva 0x5fdbe29 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdbe29(void)

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


// ----- block @ rva 0x5fdbe3e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbe3e(void)

{
  FUN_190dd72e0();
  (*_DAT_180751388)();
  return;
}


// ----- block @ rva 0x5fdbe87 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbe87(void)

{
  FUN_190dd9df0();
  (*_DAT_180751358)();
  return;
}


// ----- block @ rva 0x5fdbeba -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185fdbeba(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5fdbf05 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fdbf05(void)

{
  (*_DAT_180751368)();
  return;
}


// ----- block @ rva 0x5fdbf16 -----

void FUN_185fdbf16(void)

{
  return;
}


// ----- block @ rva 0x5fdbf23 -----

void FUN_185fdbf23(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5fdc0e3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185fdc119 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185fdc0e3(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x5fdc136 -----

void FUN_185fdc136(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x40) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x000185fdc165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180751970 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x5fe896e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185fe896e(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  longlong *unaff_R15;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_XMM11_Da;
  
  lVar3 = (**(code **)(unaff_R15 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x60) = (int)*(char *)(lVar3 + *(int *)(unaff_RBP + 0x68));
  (**(code **)(unaff_R15 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  *(undefined4 *)(unaff_RBP + 0x70) = 6;
  *(undefined8 *)(unaff_RBP + 0x60) = unaff_RBX;
  uVar4 = unaff_R14 ^ unaff_R13 ^ _DAT_18310db10;
  lVar3 = (unaff_R14 ^ unaff_R13) + _DAT_18310dcd8;
  uVar5 = uVar4 + lVar3;
  uVar6 = (_DAT_18310dcd8 ^ 2) + _DAT_18310db10 + 2;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18310dcd8 ^ 2;
  _DAT_18310db60 =
       func_0x000186003ac0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18310db10 + 2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar1 = (uint)unaff_R14;
  uVar8 = uVar1 & _DAT_180017990;
  uVar9 = uVar1 | _DAT_180017990;
  uVar7 = uVar1 ^ unaff_XMM11_Da;
  lVar3 = ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752080 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752070;
  uVar4 = _DAT_18310db60 * -0x1a64725c32008e9d << 0x2e |
          (ulonglong)(_DAT_18310db60 * -0x1a64725c32008e9d) >> 0x12;
  uVar5 = ((((ulonglong)uVar9 * (ulonglong)_DAT_180752030 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_180752020 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_180752030 << 0x20 |
            (ulonglong)uVar8 * (ulonglong)_DAT_180752020) +
            ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752010 << 0x20) +
            (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752000 + lVar3 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_180752050 + _DAT_180752060 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180752040) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_180752120 + _DAT_180752130 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180752110 + lVar3 +
          ((ulonglong)(uVar1 ^ _DAT_180017990) * (ulonglong)_DAT_180752100 << 0x20) +
          (ulonglong)(uVar1 ^ _DAT_180017990) * (ulonglong)_DAT_1807520f0 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_1807520e0 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_1807520d0 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_1807520c0 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_1807520b0) +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1807520a0 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180752090)) + 0x3ad8659d9c146770;
  _DAT_18310dc50 = _DAT_18310dbf0 ^ uVar4 ^ uVar5;
  _DAT_18310db90 = (_DAT_18310db90 ^ uVar4) + uVar5 ^ 0x4aa3823a890f154c;
  _DAT_18310dc80 = (_DAT_18310dc80 * -0x601b08abd72270d9 ^ _DAT_18310db90) + uVar4;
  _DAT_18310dc98 = _DAT_18310dc80 ^ _DAT_18310db90;
  _DAT_18310dc58 = uVar5 & 0xffffffff;
  *(int *)(unaff_RBP + 0x68) = (int)uVar5;
  iVar2 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5feff82 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185feff82(void)

{
  char cVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x18);
  *(undefined4 *)(unaff_RBP + 0x78) = 0;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_EDI;
  FUN_190ddfc90();
  cVar1 = (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5ff021c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ff021c(void)

{
  char cVar1;
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5ff0482 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185ff0482(longlong param_1)

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

