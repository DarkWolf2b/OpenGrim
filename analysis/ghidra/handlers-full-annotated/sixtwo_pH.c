// ===== Lsixtwo/pH; _6028afdec40f03798ed6bfedfc283347 ()V (handler @ image 185fd50c0, runtime 6fffedbe50c0) =====

void FUN_185fd50c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1fda7,0x4e3);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1fda7,0x4e3);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1fda7,0x4e3);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185fb9a0c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180747dc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



