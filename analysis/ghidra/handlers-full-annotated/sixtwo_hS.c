// ===== Lsixtwo/hS; _295c28c4cfe2461aeff9e32735025125 ()V (handler @ image 189bb04a0, runtime 6ffff17c04a0) =====

void FUN_189bb04a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189bb057c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814e06c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hS; beX ()Lsixtwo/hZ; (handler @ image 189b68560, runtime 6ffff1778560) =====

void FUN_189b68560(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16454,0x3ad);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189b68645 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814d23b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hS; beY (Lsixtwo/hX;)V (handler @ image 189b73ce0, runtime 6ffff1783ce0) =====

void FUN_189b73ce0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16454,0x3ad);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189b73daa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814d55a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hS; beZ (Lsixtwo/hL;)V (handler @ image 189b7b9d0, runtime 6ffff178b9d0) =====

void FUN_189b7b9d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15ef1,0x39b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189b7ba1f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814d7e00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hS; bfa (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 189b7bc60, runtime 6ffff178bc60) =====

undefined8 FUN_189b7bc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/hS; bfb ([B)Ljava/lang/String; (handler @ image 189b7bcf0, runtime 6ffff178bcf0) =====

void FUN_189b7bcf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000189b7bd90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814d8080 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hS; bfc (IJ)Ljava/lang/String; (handler @ image 189ba5f40, runtime 6ffff17b5f40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189ba5f40(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar8 = (uRam000000018323d180 ^ _UNK_1814df1c0) + uRam000000018323cfb0 + 0xba5f2702257d0107;
  uVar10 = (uRam000000018323cfb0 ^ _UNK_1814df1c8) + uRam000000018323d180 + 0x13c2316ccf27875c;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323d180 ^ _UNK_1814df1c0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323cfb0 ^ _UNK_1814df1c8;
  uRam000000018323d010 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018323d180 + 0x13c2316ccf27875c) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018323cfb0 + 0xba5f2702257d0107));
  uVar8 = (uRam000000018323d010 & 0xffffffff) << 0x16 | uRam000000018323d010 >> 0x2a;
  uRam000000018323d440 = (uRam000000018323d440 ^ uVar8) + 0xbbdf376eef7fa77e ^ 0x10b4b523a134759;
  uRam000000018323d0b8 = (uRam000000018323d0b8 * -0x397943596b20822d ^ uRam000000018323d440) + uVar8
  ;
  uRam000000018323d0a0 = uRam000000018323d0b8 ^ uRam000000018323d440;
  uRam000000018323d080 = 0xbbdf376eef7fa77e;
  uVar8 = (~uRam000000018323d358 + 0x4bcc39357779e99e) *
          ((uRam000000018323d048 ^ 0x80c6c2bed0d9ef51) +
          (uRam000000018323d048 & 0xc6c2bed0d9ef51) * 2);
  uVar8 = (uVar8 | uRam000000018323cfb0) + (uVar8 & uRam000000018323cfb0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323cf48 =
       func_0x000189baca60((uVar8 | 0xcb0afb8ba7a006cc) + (uVar8 & 0xcb0afb8ba7a006cc));
  uRam000000018323d220 =
       (uRam000000018323d220 ^ uRam000000018323cf48 ^ 0xcbcefbbf77fbedfd) + 0xcb0afb8b238225e9 ^
       0x703284893c72f8dd;
  uRam000000018323d478 =
       (uRam000000018323d478 * 0x186b24fbd28aeb6b ^ uRam000000018323d220) +
       (uRam000000018323cf48 ^ 0xcbcefbbf77fbedfd);
  uRam000000018323cfa0 = uRam000000018323d478 ^ uRam000000018323d220;
  lRam000000018323d4b8 = 0xcb0afb8b238225e9;
  uVar8 = (uRam000000018323cf78 ^ _UNK_1814df1d0) + uRam000000018323cf18 + 0x84222325;
  uVar10 = (uRam000000018323cf18 ^ _UNK_1814df1d8) + uRam000000018323cf78 + 0xc40af23d767edea4;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323cf78 ^ _UNK_1814df1d0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323cf18 ^ _UNK_1814df1d8;
  uRam000000018323d140 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018323cf78 + 0xc40af23d767edea4) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018323cf18 + 0x84222325));
  uRam000000018323cf18 =
       ((uRam000000018323d140 >> 4) * 2 ^ uRam000000018323cf18) + 0x3bf50dc28981215c ^
       0x2bbd6163ed82997c;
  uRam000000018323d020 =
       (uRam000000018323d020 * -0x4c1f556d2e8f73e7 ^ uRam000000018323cf18) +
       (uRam000000018323d140 >> 4) * 2;
  uRam000000018323d488 = uRam000000018323cf18 ^ uRam000000018323d020;
  uRam000000018323d408 = 0x3bf50dc28981215c;
  uVar8 = (uRam000000018323d4b0 ^ _UNK_1814df1e0) + uRam000000018323d0b0 + 0x84225cda;
  uVar10 = (uRam000000018323d0b0 ^ _UNK_1814df1e8) + uRam000000018323d4b0 + 0xc40af23d767edea4;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323d4b0 ^ _UNK_1814df1e0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323d0b0 ^ _UNK_1814df1e8;
  uRam000000018323cf90 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018323d4b0 + 0xc40af23d767edea4) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018323d0b0 + 0x84225cda));
  uVar8 = (ulonglong)(~(uint)uRam000000018323cf90 & 0x7fff | 3);
  uRam000000018323d4d8 = uRam000000018323cf08 ^ uVar8 ^ 0xc40af23d767f5ea3;
  uRam000000018323d0c8 = (uRam000000018323d0c8 ^ uVar8) + 0xc40af23d767f5ea3 ^ 0x1961d021955e2318;
  uRam000000018323d050 = (uRam000000018323d050 * -0x7f38fe2030484cb5 ^ uRam000000018323d0c8) + uVar8
  ;
  uRam000000018323d020 = uRam000000018323d050 ^ uRam000000018323d0c8;
  uRam000000018323d4d0 = 0xc40af23d767f5ea3;
  uVar8 = (~uRam000000018323d198 + 0x3bf50dc28981215d) *
          ((uRam000000018323d358 ^ 0xc40af23df25d7d86) +
          (uRam000000018323d358 & 0x440af23df25d7d86) * 2);
  uVar8 = (uVar8 | uRam000000018323d330) + (uVar8 & uRam000000018323d330);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323cf30 =
       func_0x000189baca60((uVar8 | 0xffffffff7bdc5cda) + (uVar8 & 0xffffffff7bdc5cda));
  uVar8 = (uRam000000018323cf30 ^ 0x3fffffffffff7fff) & 0x3fffffffffffffff;
  uRam000000018323d258 = uRam000000018323cfd8 ^ uVar8 ^ 0x7fff;
  uRam000000018323cf58 = (uRam000000018323cf58 ^ uVar8) + 0x7fff ^ 0xca9e5001380bb53d;
  uRam000000018323d140 = (uRam000000018323d140 * 0x3b0b7b7d72dc7ac7 ^ uRam000000018323cf58) + uVar8;
  uRam000000018323d438 = uRam000000018323d140 ^ uRam000000018323cf58;
  uRam000000018323d050 = 0x7fff;
  uVar8 = (~uRam000000018323d340 + 0xef345103eed9c511) *
          ((uRam000000018323d210 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018323d210 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018323d458) + (uVar8 & uRam000000018323d458);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323d000 =
       func_0x000189baca60((uVar8 | 0xef3451036afbe635) + (uVar8 & 0xef3451036afbe635));
  uVar8 = uRam000000018323d000 >> 1 | uRam000000018323d000;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018323d000;
  uRam000000018323d1f8 = (uRam000000018323d1f8 ^ uVar8) + 0x10cbaefc11263af0 ^ 0xc5fe2b63c3f30311;
  uRam000000018323d388 = (uRam000000018323d388 * 0x1f7b4ed72ea45533 ^ uRam000000018323d1f8) + uVar8;
  uRam000000018323d130 = uRam000000018323d388 ^ uRam000000018323d1f8;
  uRam000000018323d328 = 0x10cbaefc11263af0;
  uVar8 = (uRam000000018323d3c8 ^ _UNK_1814df1f0) + uRam000000018323d410 + 0x84225cda;
  uVar10 = (uRam000000018323d410 ^ _UNK_1814df1f8) + uRam000000018323d3c8 + 0xef345103eed9c510;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323d3c8 ^ _UNK_1814df1f0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323d410 ^ _UNK_1814df1f8;
  uRam000000018323d3e8 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018323d3c8 + 0xef345103eed9c510) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018323d410 + 0x84225cda));
  uRam000000018323d230 = uRam000000018323cf98 ^ uRam000000018323d3e8 ^ 0xef345103eeda450f;
  uRam000000018323cf40 =
       (uRam000000018323cf40 ^ uRam000000018323d3e8) + 0xef345103eeda450f ^ 0x82dac897732d8122;
  uRam000000018323d3f8 =
       (uRam000000018323d3f8 * -0x27a958f3b8e8c1b7 ^ uRam000000018323cf40) + uRam000000018323d3e8;
  uRam000000018323d2b0 = uRam000000018323d3f8 ^ uRam000000018323cf40;
  uRam000000018323d168 = 0xef345103eeda450f;
  uVar8 = (~uRam000000018323d488 + 0x10cbaefc11263af1) *
          ((uRam000000018323d310 ^ 0xef3451036af8662a) +
          (uRam000000018323d310 & 0x6f3451036af8662a) * 2);
  uVar8 = (uVar8 | uRam000000018323cf70) + (uVar8 & uRam000000018323cf70);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323d270 =
       func_0x000189baca60((uVar8 | 0xffffffff7bde5cda) + (uVar8 & 0xffffffff7bde5cda));
  uVar8 = (uRam000000018323d270 ^ 0x9189f78d9c000000) & 0xfffffffffc000000;
  uRam000000018323d3e0 = uRam000000018323d0c0 ^ uVar8 ^ 0x7fff;
  uRam000000018323cfa0 = (uRam000000018323d050 ^ uVar8) + 0x7fff ^ 0x1c7ce9700d71cb23;
  uRam000000018323d318 = (uRam000000018323d318 * 0x459f3dac42597379 ^ uRam000000018323cfa0) + uVar8;
  uRam000000018323cfa0 = uRam000000018323d318 ^ uRam000000018323cfa0;
  uRam000000018323d050 = 0x7fff;
  uVar8 = (uRam000000018323d0b0 ^ _UNK_1814df200) + uRam000000018323d1b8 + 0x84222325;
  uVar10 = (uRam000000018323d1b8 ^ _UNK_1814df208) + uRam000000018323d0b0 + 0xde03e8947913a160;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323d0b0 ^ _UNK_1814df200;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323d1b8 ^ _UNK_1814df208;
  uRam000000018323d148 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018323d0b0 + 0xde03e8947913a160) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018323d1b8 + 0x84222325));
  uRam000000018323cf10 = uRam000000018323cf10 + 0x21fc176b86ec5ea0 ^ 0xbc38ec5e49e567d3;
  uRam000000018323cff0 = uRam000000018323d170 * -0x1e07e4d2263367c1;
  uRam000000018323d170 = uRam000000018323cff0 ^ uRam000000018323cf10;
  uRam000000018323d0b8 = 0x21fc176b86ec5ea0;
  uVar8 = (~uRam000000018323d438 + 0x21fc176b86ec5ea1) *
          ((uRam000000018323d048 ^ 0xde03e894fd36027a) +
          (uRam000000018323d048 & 0x5e03e894fd36027a) * 2);
  uVar8 = (uVar8 | uRam000000018323d148) + (uVar8 & uRam000000018323d148);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  lRam000000018323d4b8 =
       func_0x000189baca60((uVar8 | 0xffffffff7bda5cda) + (uVar8 & 0xffffffff7bda5cda));
  uVar8 = lRam000000018323d4b8 * 0x87f5bd33dc0534d;
  uRam000000018323d4a0 = uRam000000018323d040 ^ uVar8 ^ 0x7fff;
  uRam000000018323d370 = (uRam000000018323d370 ^ uVar8) + 0x7fff ^ 0xd933556ed412cbaa;
  uRam000000018323d1f8 = (uRam000000018323d1f8 * 0x41560857568f8e83 ^ uRam000000018323d370) + uVar8;
  uRam000000018323d130 = uRam000000018323d1f8 ^ uRam000000018323d370;
  uRam000000018323cfb0 = 0x7fff;
  uRam000000018323cf98 = func_0x000189baca60(uRam000000018323d318 ^ 0xe2a1d2b7aec3cba5);
  uVar8 = (uRam000000018323cf98 & 0xffffffffffff) - (uRam000000018323cf98 >> 1 & 0x555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (ulonglong)
          ((uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2)
          ^ uRam000000018323cf98 & 0xffffffffffff;
  uRam000000018323d3c8 = (uRam000000018323d3c8 ^ uVar8) + 0x86ea32fa1301cd67 ^ 0x48fcdb80efba3b93;
  uRam000000018323d388 = (uRam000000018323d388 * 0x1572d80a4958f1db ^ uRam000000018323d3c8) + uVar8;
  uRam000000018323d1f0 = uRam000000018323d388 ^ uRam000000018323d3c8;
  uRam000000018323d298 = 0x86ea32fa1301cd67;
  uRam000000018323d370 = func_0x000189baca60(uRam000000018323d0d8 + 0x30da40f99e95555d ^ 0xa0);
  uVar8 = uRam000000018323d370 ^ 0x76d5eef5cefdcad7;
  uRam000000018323cf78 = uRam000000018323d4b0 ^ uVar8 ^ 0x86ea32fa1301cd67;
  uRam000000018323d2c0 = (uRam000000018323d2c0 ^ uVar8) + 0x86ea32fa1301cd67 ^ 0x6eaf3c274633a4aa;
  uRam000000018323d390 = (uRam000000018323d390 * 0x57b2834929499203 ^ uRam000000018323d2c0) + uVar8;
  uRam000000018323d458 = uRam000000018323d390 ^ uRam000000018323d2c0;
  uRam000000018323d198 = 0x86ea32fa1301cd67;
  uRam000000018323d420 = func_0x000189baca60(uRam000000018323d148 + 0x1eff8422ffddff ^ 0x65);
  uRam000000018323cf68 = uRam000000018323d420 << 0xf | uRam000000018323d420 >> 0x31;
  uRam000000018323d2d0 = uRam000000018323d2d0 ^ uRam000000018323cf68 ^ 0xc408991a7d7ee46c;
  uRam000000018323d000 =
       (uRam000000018323d000 * 0x26d5294b00070155 ^ uRam000000018323d2d0) + uRam000000018323cf68;
  uRam000000018323d070 = uRam000000018323d000 ^ uRam000000018323d2d0;
  uRam000000018323d0a0 = 0;
  uVar8 = ((uRam000000018323d3c8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018323d3c8 & 0x84225cda) * 2) * -lRam000000018323cfa8;
  uVar8 = (uVar8 | uRam000000018323d450) + (uVar8 & uRam000000018323d450);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323d210 =
       func_0x000189baca60((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uVar8 = uRam000000018323d210 >> 1 | uRam000000018323d210;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018323d210 ^ 0x7fff;
  uRam000000018323d228 = uRam000000018323d338 ^ uVar8 ^ 0x7fff;
  uRam000000018323d370 = (uRam000000018323d370 ^ uVar8) + 0x7fff ^ 0x2a2ed3d809cc556a;
  uRam000000018323d408 = (uRam000000018323d408 * 0xe1cb19f06777c45 ^ uRam000000018323d370) + uVar8;
  uRam000000018323d460 = uRam000000018323d408 ^ uRam000000018323d370;
  uRam000000018323d100 = 0x7fff;
  uRam000000018323d4f8 = func_0x000189baca60(uRam000000018323cf80 + 0x8f08df735c479dbb ^ 0x9d);
  uVar8 = ~uRam000000018323d4f8 & 0xbbdf376eef7fa77e;
  uVar10 = uVar8 - (~uRam000000018323d4f8 >> 1 & 0x5545111555155115);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar8;
  uRam000000018323d338 = (uRam000000018323d338 ^ uVar8) + 0x4420c89110805881 ^ 0x7baba970d8b3e792;
  uRam000000018323d4f0 = (uRam000000018323d4f0 * -0x421bdc46dd3c3231 ^ uRam000000018323d338) + uVar8
  ;
  uRam000000018323d188 = uRam000000018323d4f0 ^ uRam000000018323d338;
  uRam000000018323d218 = 0x4420c89110805881;
  uRam000000018323d178 = func_0x000189baca60(uRam000000018323d100 ^ 0xffdbff84d6001d50);
  uVar8 = (uRam000000018323d178 & 0xfffffffffffffc00) -
          (uRam000000018323d178 >> 1 & 0x5555555555555400);
  uVar8 = (uVar8 & 0x3333333333333000) + (uVar8 >> 2 & 0x3333333333333300);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f00) * 0x101010101010101 >> 0x38) << 4 ^
          uRam000000018323d178 & 0xfffffffffffffc00;
  uRam000000018323d4f0 = uRam000000018323cf20 ^ uVar8 ^ 0x7fff;
  uRam000000018323cfe0 = (uRam000000018323cfe0 ^ uVar8) + 0x7fff ^ 0x33425e12367f6b0d;
  uRam000000018323d288 = (uRam000000018323d288 * -0x58d428466ab083db ^ uRam000000018323cfe0) + uVar8
  ;
  uRam000000018323d278 = uRam000000018323d288 ^ uRam000000018323cfe0;
  uRam000000018323d358 = 0x7fff;
  uRam000000018323d050 = func_0x000189baca60(uRam000000018323d460 + 0x230083daffddff ^ 0x88);
  uVar8 = (uRam000000018323d050 ^ 0x1490000) & 0x2a15f2222;
  uRam000000018323d0e0 = uRam000000018323d0e0 ^ uVar8 ^ 0x87c29f292b499ac4;
  uRam000000018323cf88 = (uRam000000018323cf88 * 0x272b076e337acfa3 ^ uRam000000018323d0e0) + uVar8;
  uRam000000018323cf98 = uRam000000018323cf88 ^ uRam000000018323d0e0;
  uRam000000018323d150 = 0;
  uVar8 = ((uRam000000018323d328 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018323d328 & 0x84225cda) * 2) * -uRam000000018323d088;
  uVar8 = (uVar8 | uRam000000018323d080) + (uVar8 & uRam000000018323d080);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323d3e8 =
       func_0x000189baca60((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uVar8 = uRam000000018323d3e8 & 0x7fffffffffffffff;
  uRam000000018323d1b8 = uRam000000018323d438 ^ uVar8 ^ 0x7fff;
  uRam000000018323d208 = (uRam000000018323d208 ^ uVar8) + 0x7fff ^ 0x92e4e618acd167ad;
  uRam000000018323d0d0 = (uRam000000018323d0d0 * 0x4c1cd775cdaf70fd ^ uRam000000018323d208) + uVar8;
  uRam000000018323d4a0 = uRam000000018323d0d0 ^ uRam000000018323d208;
  uRam000000018323d118 = 0x7fff;
  uVar8 = (~uRam000000018323d000 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam000000018323d108) +
          ((param_4 ^ 0x84222325) & uRam000000018323d108) * 2);
  uVar8 = (uVar8 | uRam000000018323d470) + (uVar8 & uRam000000018323d470);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323cff0 =
       func_0x000189baca60((param_4 ^ 0x84225cda | uVar8) + (uVar8 & (param_4 ^ 0x84225cda)));
  uVar8 = (param_4 | 0x7fff) ^ uRam000000018323cff0;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar3;
  uRam000000018323d078 = (uRam000000018323d078 ^ uVar8) + uVar4 ^ 0xd6af3feb1c928d9a;
  uRam000000018323cf80 = (uRam000000018323cf80 * 0x31f2d3acf3e2cbc9 ^ uRam000000018323d078) + uVar8;
  uRam000000018323d3f8 = uRam000000018323cf80 ^ uRam000000018323d078;
  uVar10 = (ulonglong)param_3;
  uVar8 = uVar4 ^ 0x84222325 ^ uRam000000018323d230;
  lVar5 = (uVar4 ^ 0x84222325) + uRam000000018323cf18;
  uVar9 = uVar8 + lVar5;
  uVar11 = (uVar10 ^ uRam000000018323cf18) + uRam000000018323d230 + uVar10;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uVar9 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar10 ^ uRam000000018323cf18;
  uRam000000018323d348 = uVar4;
  uRam000000018323d0d8 =
       func_0x000189baca60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018323d230 + uVar10) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar5);
  uVar8 = uRam000000018323d0d8 << 0x26 | uRam000000018323d0d8 >> 0x1a;
  uVar4 = (uVar4 + uVar10) - (ulonglong)((param_3 & uVar3) * 2);
  uRam000000018323d1f8 = (uRam000000018323d1f8 ^ uVar8) + uVar4 ^ 0x4c886cb8abd8fb2;
  uRam000000018323d128 = (uRam000000018323d128 * 0x3984bf86f68e63b1 ^ uRam000000018323d1f8) + uVar8;
  uRam000000018323d098 = uRam000000018323d128 ^ uRam000000018323d1f8;
  uVar4 = uVar4 & 0xffffffff;
  uVar8 = (uRam000000018323d3e8 ^ _UNK_1814df210) + uRam000000018323d240 + 0xaf1b9f09;
  uVar10 = (uRam000000018323d240 ^ _UNK_1814df218) + uRam000000018323d3e8 + 0x5c6254bd;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323d3e8 ^ _UNK_1814df210;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323d240 ^ _UNK_1814df218;
  uRam000000018323cf48 = uVar4;
  uRam000000018323d0e8 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018323d3e8 + 0x5c6254bd) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018323d240 + 0xaf1b9f09));
  uRam000000018323d000 =
       (uRam000000018323d000 ^ uRam000000018323d0e8 & 0xffffffffffffe000) + 0x7f7bfcbd ^
       0xc42c47969a2a3707;
  uRam000000018323d108 =
       (uRam000000018323d108 * -0x59716015cb7c7503 ^ uRam000000018323d000) +
       (uRam000000018323d0e8 & 0xffffffffffffe000);
  uRam000000018323cfd0 = uRam000000018323d108 ^ uRam000000018323d000;
  uRam000000018323d3f8 = 0x7f7bfcbd;
  uVar8 = (~uRam000000018323d358 + 0x5998f606) *
          ((uRam000000018323d030 ^ 0xeb7a0b89) +
          (ulonglong)((uint)uRam000000018323d030 & 0xeb7a0b89) * 2);
  uVar8 = (uVar8 | uRam000000018323d198) + (uVar8 & uRam000000018323d198);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323d3e0 =
       func_0x000189baca60((uVar8 | 0xb2e2fd8c) + (ulonglong)((uint)uVar8 & 0xb2e2fd8c));
  uVar8 = uRam000000018323d3e0 - (uRam000000018323d3e0 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam000000018323d3e0;
  uRam000000018323d3b0 = (uRam000000018323d3b0 ^ uVar8) + 0x36c0dea9 ^ 0x39d3e39f565aafec;
  uRam000000018323d2e0 = (uRam000000018323d2e0 * -0x65ffc7c2d53fe60b ^ uRam000000018323d3b0) + uVar8
  ;
  uRam000000018323d0f0 = uRam000000018323d2e0 ^ uRam000000018323d3b0;
  uRam000000018323d3f0 = 0x36c0dea9;
  uRam000000018323d4a0 = func_0x000189baca60(uRam000000018323d280 + 0xff4e001ba400a9ff ^ 0xb6);
  uVar8 = uRam000000018323d4a0 & 0x1fffffffff;
  uRam000000018323d1b8 = uRam000000018323cf58 ^ uVar8 ^ 0xe8892149;
  uRam000000018323d3e0 = (uRam000000018323d3e0 ^ uVar8) + 0xe8892149 ^ 0xcc45ca66f4205ed0;
  uRam000000018323d118 = (uRam000000018323d118 * -0x54ea9fa2c1a61669 ^ uRam000000018323d3e0) + uVar8
  ;
  uRam000000018323cfd8 = uRam000000018323d118 ^ uRam000000018323d3e0;
  uRam000000018323d418 = 0xe8892149;
  uRam000000018323d488 = func_0x000189baca60(uRam000000018323d078 + 0x26ffaa6c0033ff ^ 10);
  uVar8 = uRam000000018323d488 << 0x3d | uRam000000018323d488 >> 3;
  uRam000000018323d258 = uRam000000018323d0b8 ^ uVar8 ^ 0x100004f09;
  uRam000000018323d0f0 = (uRam000000018323d0f0 ^ uVar8) + 0x100004f09 ^ 0x93af7c581d6a81e9;
  uRam000000018323d498 = (uRam000000018323d498 * 0x1f083ae75919952b ^ uRam000000018323d0f0) + uVar8;
  uRam000000018323d118 = uRam000000018323d498 ^ uRam000000018323d0f0;
  uRam000000018323d2d8 = 0x4f09;
  uRam000000018323d078 = func_0x000189baca60(uRam000000018323cf40 + 0xff87002fd40035ff ^ 0x93);
  uRam000000018323d418 = uRam000000018323cf38 ^ uRam000000018323d078 ^ 0xb4693419;
  uRam000000018323d4f0 =
       (uRam000000018323d4f0 ^ uRam000000018323d078) + 0xb4693419 ^ 0xf9caeeb5d052b551;
  uRam000000018323d408 =
       (uRam000000018323d408 * -0x3ccd80aa3ebcc22f ^ uRam000000018323d4f0) + uRam000000018323d078 ^
       uRam000000018323d4f0;
  uRam000000018323d088 = 0xb4693419;
  uRam000000018323cfb8 = func_0x000189baca60(uRam000000018323d208 ^ 0xfff2ffd4cc00a3a0);
  uVar8 = uRam000000018323cfb8 ^ 0x4b971af0;
  uRam000000018323d460 = uRam000000018323d2b0 ^ uVar8 ^ 0x100004f09;
  uRam000000018323d308 = (uRam000000018323d308 ^ uVar8) + 0x100004f09 ^ 0x6691f5fbc4f55c78;
  uRam000000018323cf98 = (uRam000000018323cf98 * -0x221e4f6a90e84f03 ^ uRam000000018323d308) + uVar8
  ;
  uRam000000018323d0d0 = uRam000000018323cf98 ^ uRam000000018323d308;
  uRam000000018323d400 = uRam000000018323d300 ^ 0x100004f09;
  uRam000000018323d090 = 0x4f09;
  uRam000000018323d020 = func_0x000189baca60(uRam000000018323cf10 + 0xffc1005a64ff89ff ^ 0x77);
  uVar8 = ((uRam000000018323d020 ^ 0x2b5860c0) & 0x3ffff) << 0x2d |
          (uRam000000018323d020 ^ 0x2b5860c0) >> 0x13;
  uRam000000018323d318 = (uRam000000018323d318 ^ uVar8) - 0x2b5860c0 ^ 0x9581ed0654c5d036;
  uRam000000018323d118 = (uRam000000018323d118 * -0x33f950b5dcfa4bcd ^ uRam000000018323d318) + uVar8
  ;
  uRam000000018323d2d8 = uRam000000018323d118 ^ uRam000000018323d318;
  uRam000000018323d1e8 = 0xd4a79f40;
  uRam000000018323d1e0 = func_0x000189baca60(uRam000000018323cfc0 ^ 0xfff3ff9c5c00797a);
  uVar8 = uRam000000018323d1e0 ^ 0x2b5860c0;
  uRam000000018323d170 = uRam000000018323d3b0 ^ uVar8 ^ 0x2b58afc9;
  uRam000000018323cf00 = (uRam000000018323cf00 ^ uVar8) + 0x2b58afc9 ^ 0x3dc11a637ac57df5;
  uRam000000018323d020 = (uRam000000018323d020 * 0x68bfb9ceedca2cfd ^ uRam000000018323cf00) + uVar8;
  uRam000000018323d190 = uRam000000018323d020 ^ uRam000000018323cf00;
  uRam000000018323d1d8 = 0x2b58afc9;
  uVar8 = (~uRam000000018323d2d0 + 0xd4a79f41) *
          ((uRam000000018323d080 ^ 0xaf7a8cec) +
          (ulonglong)((uint)uRam000000018323d080 & 0xaf7a8cec) * 2);
  uVar8 = (uVar8 | uRam000000018323d158) + (uVar8 & uRam000000018323d158);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323d268 =
       func_0x000189baca60((uVar8 | 0x7bdd13ac) + (ulonglong)((uint)uVar8 & 0x7bdd13ac));
  uVar8 = uRam000000018323d268 >> 1 | uRam000000018323d268;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = 0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018323d268;
  uRam000000018323d488 = uRam000000018323d408 ^ uVar8 ^ 0x100004f09;
  uRam000000018323d4f8 = (uRam000000018323d4f8 ^ uVar8) + 0x100004f09 ^ 0x2a1b0163ef1a125c;
  uRam000000018323cff0 = (uRam000000018323cff0 * 0x77dc2e0047e95f1b ^ uRam000000018323d4f8) + uVar8;
  uRam000000018323cfc8 = uRam000000018323cff0 ^ uRam000000018323d4f8;
  uRam000000018323d000 = 0x4f09;
  uRam000000018323d148 = func_0x000189baca60(uRam000000018323d4d8 + 0xffcd10ff96ff ^ 0x3d);
  uVar8 = (uRam000000018323d148 ^ 0x1b44332f19c40000) & 0xfffffffffffc0000;
  uVar10 = uVar8 >> 1 | uVar8;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar8;
  uRam000000018323d238 = uRam000000018323d0f8 ^ uVar8 ^ 0xb63cdb66;
  uRam000000018323cf60 = (uRam000000018323cf60 ^ uVar8) + 0xb63cdb66 ^ 0x7a2ef6e4a73f64c6;
  uRam000000018323cf08 = (uRam000000018323cf08 * -0x636c1b9406d52e2f ^ uRam000000018323cf60) + uVar8
  ;
  uRam000000018323d338 = uRam000000018323cf08 ^ uRam000000018323cf60;
  uRam000000018323d190 = 0xb63cdb66;
  uRam000000018323d080 = func_0x000189baca60(uRam000000018323cf08 ^ 0xfffeffcacf0096ea);
  uVar8 = uRam000000018323d080 - (uRam000000018323d080 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (ulonglong)
          (~((uint)uRam000000018323d080 ^
            (uint)((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5)) &
          0x7f7bfcbd);
  uRam000000018323d280 = (uRam000000018323d280 ^ uVar8) + 0x49bb2214 ^ 0x836f8e17181f8b02;
  uRam000000018323d310 = (uRam000000018323d310 * -0x3e4d8ad015229e31 ^ uRam000000018323d280) + uVar8
  ;
  uRam000000018323cfc0 = uRam000000018323d310 ^ uRam000000018323d280;
  uRam000000018323d230 = 0x49bb2214;
  uVar8 = (uRam000000018323d2d8 ^ _UNK_1814df220) + uRam000000018323d3a0 + 0xcd990131;
  uVar10 = (uRam000000018323d3a0 ^ _UNK_1814df228) + uRam000000018323d2d8 + 0x6c81b952;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323d2d8 ^ _UNK_1814df220;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323d3a0 ^ _UNK_1814df228;
  uRam000000018323d108 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018323d2d8 + 0x6c81b952) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018323d3a0 + 0xcd990131));
  uRam000000018323d430 = uRam000000018323d030 ^ uRam000000018323d108 ^ 0xb63cdb66;
  uRam000000018323cff8 =
       (uRam000000018323cff8 ^ uRam000000018323d108) + 0xb63cdb66 ^ 0x45eb87137683361f;
  uRam000000018323d3f8 =
       (uRam000000018323d3f8 * 0x1b1ed306ba45991d ^ uRam000000018323cff8) + uRam000000018323d108;
  uRam000000018323d2d0 = uRam000000018323d3f8 ^ uRam000000018323cff8;
  uRam000000018323d480 = 0xb63cdb66;
  uVar8 = (uRam000000018323cf08 ^ _UNK_1814df230) + uRam000000018323d4c8 + 0x321ef843;
  uVar10 = (uRam000000018323d4c8 ^ _UNK_1814df238) + uRam000000018323cf08 + 0xb63cdb66;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323cf08 ^ _UNK_1814df230;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323d4c8 ^ _UNK_1814df238;
  uRam000000018323d428 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018323cf08 + 0xb63cdb66) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018323d4c8 + 0x321ef843));
  uRam000000018323d330 = uRam000000018323d428 & 0x3ffffffffff;
  uRam000000018323d198 = uRam000000018323d198 ^ uRam000000018323d330 ^ 0x7531a66a7e27e10b;
  uRam000000018323d430 =
       (uRam000000018323d430 * -0x5f0ce9facf2ee7ff ^ uRam000000018323d198) + uRam000000018323d330;
  uRam000000018323d1f0 = uRam000000018323d430 ^ uRam000000018323d198;
  uRam000000018323cfc0 = 0;
  uVar8 = ((uRam000000018323cf98 ^ 0x84226c2c) +
          (ulonglong)((uint)uRam000000018323cf98 & 0x84226c2c) * 2) * -uRam000000018323d1f0;
  uVar8 = (uVar8 | uRam000000018323d488) + (uVar8 & uRam000000018323d488);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018323cf30 =
       func_0x000189baca60((uVar8 | 0x84226c2c) + (ulonglong)((uint)uVar8 & 0x84226c2c));
  uRam000000018323cfe0 = uRam000000018323d280 ^ uRam000000018323cf30 ^ 0x4f09;
  uRam000000018323d4a8 = (uRam000000018323d4a8 ^ uRam000000018323cf30) + 0x4f09 ^ 0x33fc9e7f6a505e29
  ;
  uRam000000018323d200 =
       (uRam000000018323d200 * -0x437153fe8bf77f91 ^ uRam000000018323d4a8) + uRam000000018323cf30;
  uRam000000018323d368 = uRam000000018323d200 ^ uRam000000018323d4a8;
  uRam000000018323d3d0 = 0x4f09;
  uRam000000018323cf28 = func_0x000189baca60(uRam000000018323d4f0 ^ 0xff440067da005c31);
  uVar8 = uRam000000018323cf28 >> 1 | uRam000000018323cf28;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ~(ulonglong)
           ((uint)uRam000000018323cf28 ^
           (0x40 - (uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38)) * 4) & 0x7f7bfcbd;
  uRam000000018323cf90 = uRam000000018323cf90 ^ uVar8 ^ 0xf55b429e75a869fa;
  uRam000000018323d288 = (uRam000000018323d288 * -0x6276dcd9aa78b659 ^ uRam000000018323cf90) + uVar8
  ;
  uRam000000018323d088 = uRam000000018323d288 ^ uRam000000018323cf90;
  uRam000000018323d4e8 = 0;
  uVar8 = (uRam000000018323d1a8 ^ 0x84226c2c) + uRam000000018323d150 + 0x84226c2c;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018323d1a8 ^ 0x84226c2c;
  uVar10 = ((uRam000000018323d150 + uRam000000018323d1a8) * 0x2000 |
           uRam000000018323d150 + uRam000000018323d1a8 >> 0x33) ^ uRam000000018323d150;
  uRam000000018323d228 =
       func_0x000189baca60((uVar10 << 0x1d | uVar10 >> 0x23) - uRam000000018323d1a8 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018323d150 + 0x84226c2c));
  uVar8 = uRam000000018323d228 - (uRam000000018323d228 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar1 + (uint)bVar1 ^ uRam000000018323d228;
  uRam000000018323d2f8 = uRam000000018323d268 ^ uVar8 ^ 0x4f09;
  uRam000000018323d478 = (uRam000000018323d478 ^ uVar8) + 0x4f09 ^ 0x9e1249add109edf1;
  uRam000000018323d408 = (uRam000000018323d408 * -0x61dde21c47eecf6d ^ uRam000000018323d478) + uVar8
  ;
  uRam000000018323d138 = uRam000000018323d408 ^ uRam000000018323d478;
  uRam000000018323d300 = 0x4f09;
  uRam000000018323d498 = func_0x000189baca60(lRam000000018323d380 + 0x1cff7be4ffe1ffU ^ 10);
  uRam000000018323d0b0 =
       uRam000000018323d0b0 ^ uRam000000018323d498 & 0x1ffffffff ^ 0x7cce4f5847aadbb3;
  uRam000000018323cfd0 =
       (uRam000000018323cfd0 * 0x6f4b1f268540ecb ^ uRam000000018323d0b0) +
       (uRam000000018323d498 & 0x1ffffffff);
  uRam000000018323d418 = uRam000000018323cfd0 ^ uRam000000018323d0b0;
  auVar6._8_8_ = _UNK_1814df248;
  auVar6._0_8_ = uVar4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_1814df250,_UNK_1800170c0);
  uRam000000018323d2a0 = 0;
  uVar10 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar10 + uRam000000018323d178;
  if (auVar7._4_4_ < 0) {
    uVar8 = uRam000000018323d258 ^ uVar10;
  }
  uRam000000018323d2e8 = func_0x000189baca60(SUB161(auVar6 ^ _UNK_1814df250,5) ^ uVar8);
  uRam000000018323d340 = uVar4 ^ 0x4f09;
  uRam000000018323d460 =
       (uRam000000018323d460 ^ uRam000000018323d2e8 & 0x1ffffffff) + uRam000000018323d340 ^
       0x282d5652efbf7575;
  uRam000000018323d370 =
       (uRam000000018323d370 * 0x59df585b839290f9 ^ uRam000000018323d460) +
       (uRam000000018323d2e8 & 0x1ffffffff);
  uRam000000018323d118 = uRam000000018323d370 ^ uRam000000018323d460;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16454,0x3ad);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ba859b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814dd838 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hS; bfd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 189bacaf0, runtime 6ffff17bcaf0) =====

void FUN_189bacaf0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000189bacb2c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814df2a0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hS; bfe (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 189bad9e0, runtime 6ffff17bd9e0) =====

void FUN_189bad9e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189bada5d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814df7e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



