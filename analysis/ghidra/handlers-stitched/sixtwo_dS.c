// ===== STITCHED CORPUS: sixtwo.dS =====
// handlers: 7  continuation blocks: 66  unresolved table targets: 0
// tables not in tables.json: ['0x231ca98', '0x231caa8', '0x231cab8', '0x231cac8', '0x231cad8', '0x231cae8', '0x231caf8', '0x231cb08', '0x231cb38', '0x231cb48', '0x231cb58', '0x231cf58', '0x231cf68', '0x231cf78', '0x231cf88', '0x231cf98', '0x231cfa8', '0x231cfb8', '0x231cfc8', '0x231cfd8']

// ===== Lsixtwo/dS; _3323b79ccdee7f922ab8849d424294e5 ()V (handler @ image 18da71250, runtime 6ffff5681250) =====

void FUN_18da71250(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018da71338 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182320788 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dS; apC (Lsixtwo/hm;)V (handler @ image 18da56430, runtime 6ffff5666430) =====

void FUN_18da56430(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb64b,0x1f8)
      /* POOL[0xb64b,0x1f8]: Z | apq | Hsjeq | UoJZc | apz | YVFTe | apr | sixtwo/dS | bOPYi | apE | apD | UeXgv | Shkca | xmgVN | sixtwo/hm | bcN | gcmeH | WY | diX | apy | net/minecraft/class_259 | method_1073 | ()Lnet/minecraft/class_265; | bcS | (Lnet/minecraft/class_265;)V | FoNvc | MVuFv | field_1886 | MuwUi | kpzZC | apF | sixtwo/dT | HYicB | apJ | method_1434 | QxDnA | method_2910 | sixtwo/dU | dneZD | kzZLu | gipBo | BxkdK | method_7261 | apS | field_7513 | Lnet/minecraft/class_1536; | method_2918 | (Lnet/minecraft/class_1657;Lnet/minecraft/class_1297;)V | eKQLo | net/minecraft/class_1536 | method_23317 | OZKKQ | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018da564f4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182319840 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dS; apD ()Z (handler @ image 18da5afa0, runtime 6ffff566afa0) =====

void FUN_18da5afa0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb64b,0x1f8)
      /* POOL[0xb64b,0x1f8]: Z | apq | Hsjeq | UoJZc | apz | YVFTe | apr | sixtwo/dS | bOPYi | apE | apD | UeXgv | Shkca | xmgVN | sixtwo/hm | bcN | gcmeH | WY | diX | apy | net/minecraft/class_259 | method_1073 | ()Lnet/minecraft/class_265; | bcS | (Lnet/minecraft/class_265;)V | FoNvc | MVuFv | field_1886 | MuwUi | kpzZC | apF | sixtwo/dT | HYicB | apJ | method_1434 | QxDnA | method_2910 | sixtwo/dU | dneZD | kzZLu | gipBo | BxkdK | method_7261 | apS | field_7513 | Lnet/minecraft/class_1536; | method_2918 | (Lnet/minecraft/class_1657;Lnet/minecraft/class_1297;)V | eKQLo | net/minecraft/class_1536 | method_23317 | OZKKQ | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018da5b06a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18231afa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dS; apE (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18da61ba0, runtime 6ffff5671ba0) =====

undefined8 FUN_18da61ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/dS; apF (IJ)I (handler @ image 18da61c30, runtime 6ffff5671c30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da61c30(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (~uRam0000000183375458 + 0x897ff49332833019) *
          ((uRam00000001833754c0 ^ 0xea0d46285c4ce0e9) +
          (uRam00000001833754c0 & 0x6a0d46285c4ce0e9) * 2);
  uVar4 = (uVar4 | uRam00000001833754d8) + (uVar4 & uRam00000001833754d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833754a8 =
       func_0x00018da6d4a0((uVar4 | 0x6372b2bb6ecfd0f1) + (uVar4 & 0x6372b2bb6ecfd0f1));
  uRam0000000183375340 =
       (uRam0000000183375340 ^ ~uRam00000001833754a8 & 0xea0d4628d86ec3cc) + 0xeb7ff6bbfaeff3dc ^
       0x4b3d116ff388d7e;
  uRam00000001833754e0 =
       (uRam00000001833754e0 * 0x2c32afb65d412021 ^ uRam0000000183375340) +
       (~uRam00000001833754a8 & 0xea0d4628d86ec3cc);
  uRam00000001833753b0 = uRam00000001833754e0 ^ uRam0000000183375340;
  uRam0000000183375300 = 0xeb7ff6bbfaeff3dc;
  uVar4 = (~uRam00000001833753e0 + 0xc2e8e2c1adfce22c) *
          ((uRam00000001833754f0 ^ 0xeb9de622ec8d6192) +
          (uRam00000001833754f0 & 0x6b9de622ec8d6192) * 2);
  uVar4 = (uVar4 | uRam00000001833753a8) + (uVar4 & uRam00000001833753a8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833753e8 =
       func_0x00018da6d4a0((uVar4 | 0x297504e3417183b9) + (uVar4 & 0x297504e3417183b9));
  uRam0000000183375478 =
       (uRam0000000183375478 ^ uRam0000000183375440) + 0x297504e3c553a09c ^ 0xb15f311a025d4870;
  uRam0000000183375358 =
       (uRam0000000183375358 * -0x397c71d0b5d018bf ^ uRam0000000183375478) + uRam0000000183375440;
  uRam00000001833753b8 = uRam0000000183375358 ^ uRam0000000183375478;
  uRam0000000183375490 = 0x297504e3c553a09c;
  uRam0000000183375338 = func_0x00018da6d4a0(uRam0000000183375438 + 0x29c744472da011a7 ^ 0xb5);
  uRam0000000183375428 =
       (uRam0000000183375428 ^ uRam0000000183375338) + 0x273b5f09b4ef9b30 ^ 0x57baa4628cfa4a15;
  uRam00000001833754c0 =
       (uRam00000001833754c0 * 0x451888a4ed9311f3 ^ uRam0000000183375428) + uRam0000000183375338;
  uRam00000001833753b0 = uRam00000001833754c0 ^ uRam0000000183375428;
  uRam0000000183375488 = 0x273b5f09b4ef9b30;
  uRam0000000183375410 = func_0x00018da6d4a0(uRam0000000183375350 + 0xb5d83bc0f9a01247 ^ 0x26);
  uRam0000000183375358 = uRam00000001833754b8 ^ uRam0000000183375410 ^ 0xd8c4a0f64b10e4cf;
  uRam0000000183375478 =
       (uRam0000000183375478 ^ uRam0000000183375410) + 0xd8c4a0f64b10e4cf ^ 0x739f2532cc894ca0;
  uRam00000001833754a0 =
       (uRam00000001833754a0 * -0xb0e22430d73e327 ^ uRam0000000183375478) + uRam0000000183375410;
  uRam0000000183375480 = uRam00000001833754a0 ^ uRam0000000183375478;
  uRam00000001833754c0 = 0xd8c4a0f64b10e4cf;
  uVar4 = (~uRam00000001833754d0 + 0x273b5f09b4ef9b31) *
          ((uRam00000001833753a0 ^ 0xd8c4a0f6cf32c7ea) +
          (uRam00000001833753a0 & 0x58c4a0f6cf32c7ea) * 2);
  uVar4 = (uVar4 | uRam0000000183375300) + (uVar4 & uRam0000000183375300);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183375380 =
       func_0x00018da6d4a0((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = ~uRam0000000183375380;
  uRam0000000183375468 = uRam0000000183375358 ^ uVar4 ^ 0x7fff;
  uRam00000001833754c0 = (uRam00000001833754c0 ^ uVar4) + 0x7fff ^ 0xe5f4455ac102ba41;
  uRam0000000183375330 = (uRam0000000183375330 * -0x7caf6ade40260783 ^ uRam00000001833754c0) + uVar4
  ;
  uRam0000000183375438 = uRam0000000183375330 ^ uRam00000001833754c0;
  uRam0000000183375410 = 0x7fff;
  uRam0000000183375490 = func_0x00018da6d4a0(uRam0000000183375370 + 0xb76e31204452e83d ^ 0x8f);
  uRam00000001833753f0 =
       (uRam00000001833753f0 ^ uRam0000000183375490 ^ 0xc2d1b3c8a4d9bd69) + 0x3d2e4c375b264297 ^
       0x67233263feeb9797;
  uRam0000000183375360 =
       (uRam0000000183375360 * 0x56b5c5fbf1816b83 ^ uRam00000001833753f0) +
       (uRam0000000183375490 ^ 0xc2d1b3c8a4d9bd69);
  uRam00000001833753d8 = uRam0000000183375360 ^ uRam00000001833753f0;
  uRam0000000183375370 = 0x3d2e4c375b264297;
  uVar4 = (~uRam00000001833754a0 + 0xc2d1b3c8a4d9bd6a) *
          ((uRam0000000183375470 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183375470 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183375318) + (uVar4 & uRam0000000183375318);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183375438 =
       func_0x00018da6d4a0((uVar4 | 0xc2d1b3c820fbe1b3) + (uVar4 & 0xc2d1b3c820fbe1b3));
  uVar4 = (uRam0000000183375438 ^ 0x17129ea439dac280) & 0xffffffffffffffc0;
  uRam0000000183375308 = uRam0000000183375440 ^ uVar4 ^ 0xc2d1b3c8a4da3d68;
  uRam00000001833753c8 = (uRam00000001833753c8 ^ uVar4) + 0xc2d1b3c8a4da3d68 ^ 0xbcb1450420d08141;
  uRam00000001833754f0 = (uRam00000001833754f0 * 0x3a59acb8fe74ad51 ^ uRam00000001833753c8) + uVar4;
  uRam00000001833753b0 = uRam00000001833754f0 ^ uRam00000001833753c8;
  uRam0000000183375380 = -0x3d2e4c375b25c298;
  uVar4 = (uRam0000000183375440 ^ _UNK_18231eff0) + uRam00000001833753a0 + 0xc2d1b3c820f81e4d;
  uVar5 = (uRam00000001833753a0 ^ _UNK_18231eff8) + uRam0000000183375440 + 0x3d2e4c375b264297;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183375440 ^ _UNK_18231eff0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833753a0 ^ _UNK_18231eff8;
  uRam0000000183375400 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183375440 + 0x3d2e4c375b264297) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001833753a0 + 0xc2d1b3c820f81e4d));
  uVar4 = ~uRam0000000183375400 & 0xc2d1b3c8a4da3d68;
  uRam0000000183375440 = uRam00000001833753b0 ^ uVar4 ^ 0x7fff;
  uRam0000000183375368 = (uRam0000000183375368 ^ uVar4) + 0x7fff ^ 0x3132f06729ef0fe4;
  uRam00000001833754f8 = (uRam00000001833754f8 * -0x643950c9fce5e6f5 ^ uRam0000000183375368) + uVar4
  ;
  uRam0000000183375300 = uRam00000001833754f8 ^ uRam0000000183375368;
  uRam0000000183375330 = 0x7fff;
  uVar4 = (~uRam0000000183375300 + 0x75a51998d50cd875) *
          ((uRam00000001833754c0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833754c0 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183375490) + (uVar4 & uRam0000000183375490);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lVar3 = func_0x00018da6d4a0((uVar4 | 0x75a51998512efb51) + (uVar4 & 0x75a51998512efb51));
  uVar5 = lVar3 * -0x7ab6af6aaab3e187;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar5;
  uRam0000000183375420 = (uRam0000000183375420 ^ uVar5) + 0x8a5ae6672af3278c ^ 0xfb93543c6a657a5e;
  uRam00000001833753a0 = (uRam00000001833753a0 * 0x1b3ea081f3e7c649 ^ uRam0000000183375420) + uVar5;
  uRam0000000183375410 = uRam00000001833753a0 ^ uRam0000000183375420;
  uRam0000000183375480 = 0x8a5ae6672af3278c;
  uVar4 = (uRam0000000183375438 ^ _UNK_18231f000) + uRam0000000183375470 + 0x84225cda;
  uVar5 = (uRam0000000183375470 ^ _UNK_18231f008) + uRam0000000183375438 + 0x75a51998d50cd874;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183375438 ^ _UNK_18231f000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183375470 ^ _UNK_18231f008;
  lVar3 = func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) -
                              (uRam0000000183375438 + 0x75a51998d50cd874) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183375470 + 0x84225cda))
  ;
  uRam00000001833754a0 = (ulonglong)(~(uint)lVar3 & 0x7fff) * -0x550b68d551b6d41f;
  uRam0000000183375478 = uRam0000000183375408 ^ uRam00000001833754a0 ^ 0x75a51998d50d5873;
  uRam0000000183375348 =
       (uRam0000000183375348 ^ uRam00000001833754a0) + 0x75a51998d50d5873 ^ 0xe31b9481af00f34;
  uRam00000001833754a0 = (lVar3 * -0x253c1aa6eefc1fe5 ^ uRam0000000183375348) + uRam00000001833754a0
  ;
  uRam0000000183375300 = uRam00000001833754a0 ^ uRam0000000183375348;
  uRam0000000183375310 = 0x75a51998d50d5873;
  uRam0000000183375338 = func_0x00018da6d4a0(uRam0000000183375330 + 0x8f5c97092a1a2b92 ^ 0x8d);
  uVar4 = uRam0000000183375338 & 0x3ffffffff;
  uRam0000000183375378 = uRam0000000183375358 ^ uVar4 ^ 0x7fff;
  uRam0000000183375390 = (uRam0000000183375390 ^ uVar4) + 0x7fff ^ 0xb38b18785bc8f3fe;
  uRam0000000183375490 = (uRam0000000183375490 * 0x61161078127ac741 ^ uRam0000000183375390) + uVar4;
  uRam00000001833753e8 = uRam0000000183375490 ^ uRam0000000183375390;
  uRam00000001833753d8 = 0x7fff;
  uVar4 = (uRam0000000183375368 ^ _UNK_18231f010) + uRam00000001833753f8 + 0xeb7ff6bb7ecdd0f9;
  uVar5 = (uRam00000001833753f8 ^ _UNK_18231f018) + uRam0000000183375368 + 0x297504e3c553a09c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183375368 ^ _UNK_18231f010;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833753f8 ^ _UNK_18231f018;
  uRam0000000183375400 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183375368 + 0x297504e3c553a09c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001833753f8 + 0xeb7ff6bb7ecdd0f9));
  uRam0000000183375458 =
       (uRam0000000183375458 ^ ~uRam0000000183375400 & 0xeb7ff6bbfaeff3dc) + 0xc20af2583fbc5340 ^
       0x629f7b3776b1145b;
  uRam00000001833754d8 =
       (uRam00000001833754d8 * -0x8d594e65a27c263 ^ uRam0000000183375458) +
       (~uRam0000000183375400 & 0xeb7ff6bbfaeff3dc);
  uRam00000001833754d0 = uRam00000001833754d8 ^ uRam0000000183375458;
  uRam00000001833753f8 = 0xc20af2583fbc5340;
  uRam00000001833754b0 = func_0x00018da6d4a0(uRam0000000183375408 ^ 0x37b005b69cb27de2);
  uVar4 = uRam00000001833754b0 << 0x27 | uRam00000001833754b0 >> 0x19;
  uRam0000000183375438 = (uRam0000000183375438 ^ uVar4) + 0x297504a3c043a09c ^ 0x47f92c0e4bc4c85a;
  uRam0000000183375340 = (uRam0000000183375340 * -0x45345b84735c3f41 ^ uRam0000000183375438) + uVar4
  ;
  uRam0000000183375328 = uRam0000000183375340 ^ uRam0000000183375438;
  uRam00000001833754e0 = 0x297504a3c043a09c;
  uRam0000000183375450 = func_0x00018da6d4a0(uRam0000000183375410 ^ 0xf930a0154416e766);
  uVar4 = uRam0000000183375450 ^ 0xc20af2583fbc5340;
  uRam00000001833753a0 = uRam00000001833753c8 ^ uVar4 ^ 0x14f4fb9fc0439478;
  uRam0000000183375410 = (uRam0000000183375410 ^ uVar4) + 0x14f4fb9fc0439478 ^ 0x814ffd565a1ba8d0;
  uRam0000000183375430 = (uRam0000000183375430 * 0x1b181b876b626723 ^ uRam0000000183375410) + uVar4;
  uRam0000000183375390 = uRam0000000183375430 ^ uRam0000000183375410;
  uRam0000000183375300 = 0x14f4fb9fc0439478;
  uVar4 = (~uRam00000001833754b8 + 0x14f4fb9fc0439479) *
          ((uRam0000000183375360 ^ 0x14f4fb9f4461b75d) +
          (uRam0000000183375360 & 0x14f4fb9f4461b75d) * 2);
  uVar4 = (uVar4 | uRam0000000183375358) + (uVar4 & uRam0000000183375358);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183375320 =
       func_0x00018da6d4a0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam00000001833754c0 = (uRam0000000183375320 & 0x3fffffffff) * 0x800;
  uRam0000000183375328 = uRam0000000183375328 ^ uRam00000001833754c0 ^ 0xac64f502f212b8a9;
  uRam00000001833754c0 =
       ((uRam0000000183375320 & 0x3fffffffff) * -0x7ec8834bc34c3800 ^ uRam0000000183375328) +
       uRam00000001833754c0;
  uRam0000000183375358 = uRam00000001833754c0 ^ uRam0000000183375328;
  uRam0000000183375410 = 0;
  uVar4 = func_0x00018da6d4a0(uRam0000000183375370 ^ 0xffd4008335ffe102);
  uVar4 = (ulonglong)((uint)uVar4 ^ 0x7fff) << 0x28 | uVar4 >> 0x18;
  uRam0000000183375318 = uRam00000001833754c8 ^ uVar4 ^ 0x7fff;
  uRam0000000183375480 = (uRam0000000183375480 ^ uVar4) + 0x7fff ^ 0x14dab8639c88eb53;
  uRam0000000183375358 = (uRam0000000183375358 * -0xbd0b10325fc3077 ^ uRam0000000183375480) + uVar4;
  uRam0000000183375308 = uRam0000000183375358 ^ uRam0000000183375480;
  uRam00000001833753b0 = 0x7fff;
  uVar4 = (uRam0000000183375458 ^ _UNK_18231f020) + uRam00000001833754c0 + 0xeb7ff6bb7ecdd0f9;
  uVar5 = (uRam00000001833754c0 ^ _UNK_18231f028) + (uRam0000000183375458 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183375458 ^ _UNK_18231f020;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833754c0 ^ _UNK_18231f028;
  uRam0000000183375350 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183375458 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001833754c0 + 0xeb7ff6bb7ecdd0f9));
  uRam00000001833754c8 =
       (uRam00000001833754c8 ^ uRam0000000183375350) + 0x1480094405100c23 ^ 0x7fed1ec9f6145267;
  uRam00000001833754a0 =
       (uRam00000001833754a0 * 0x2b920df842d297d3 ^ uRam00000001833754c8) + uRam0000000183375350;
  uRam0000000183375440 = uRam00000001833754a0 ^ uRam00000001833754c8;
  uRam00000001833754e8 = 0x1480094405100c23;
  uRam0000000183375410 = func_0x00018da6d4a0(uRam0000000183375310 + 0x833494daa522d41c ^ 0x11);
  uVar4 = (uRam0000000183375410 ^ 0x1480094405100c23) * 0x1cee237522489199;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4;
  uRam0000000183375318 = uRam0000000183375318 ^ uVar4 ^ 0xd676706d08be4f99;
  uRam0000000183375330 = (uRam0000000183375330 * 0x4c8f27139eeac6dd ^ uRam0000000183375318) + uVar4;
  uRam00000001833754a8 = uRam0000000183375330 ^ uRam0000000183375318;
  uRam0000000183375428 = 0;
  uRam0000000183375378 = func_0x00018da6d4a0(uRam0000000183375408 ^ 0x43ff83b9ffe1e8);
  uVar4 = uRam0000000183375378 << 0x16 | uRam0000000183375378 >> 0x2a;
  uRam0000000183375440 = uRam0000000183375498 ^ uVar4 ^ 0x7fff;
  uRam0000000183375308 = (uRam0000000183375308 ^ uVar4) + 0x7fff ^ 0x19f6d721c0bae215;
  uRam00000001833753e0 = (uRam00000001833753e0 * 0x5ee56d4b48a9e4bf ^ uRam0000000183375308) + uVar4;
  uRam0000000183375438 = uRam00000001833753e0 ^ uRam0000000183375308;
  uRam0000000183375488 = 0x7fff;
  uVar4 = (_UNK_18231f030 ^ 0x7fff) + uRam0000000183375368 + 0xea0d46285c4ce0e9;
  uVar5 = (uRam0000000183375368 ^ _UNK_18231f038) + 0xea0d4628d86f43cb;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _UNK_18231f030 ^ 0x7fff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183375368 ^ _UNK_18231f038;
  uRam00000001833753f8 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) + 0x15f2b9d72790bc35 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183375368 + 0xea0d46285c4ce0e9));
  uRam0000000183375410 =
       uRam0000000183375410 ^ uRam00000001833753f8 ^ 0x556e9c3dc17ea95c ^ 0x66ff700ff068d8;
  uRam00000001833754a8 =
       (uRam00000001833754a8 * -0x1ba3fef87c72f0cb ^ uRam0000000183375410) +
       (uRam00000001833753f8 ^ 0x556e9c3dc17ea95c);
  uRam0000000183375360 = uRam00000001833754a8 ^ uRam0000000183375410;
  uRam00000001833754d0 = 0;
  uVar4 = (uRam0000000183375340 ^ 0x84225cda) + uRam00000001833753d0 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183375340 ^ 0x84225cda;
  uVar5 = ((uRam00000001833753d0 + uRam0000000183375340) * 0x2000 |
          uRam00000001833753d0 + uRam0000000183375340 >> 0x33) ^ uRam00000001833753d0;
  uRam00000001833753c8 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam0000000183375340 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833753d0 + 0x84225cda));
  uVar4 = uRam00000001833753c8 & 0xfffffffffffffff8;
  uRam0000000183375320 = uRam0000000183375410 ^ uVar4 ^ 0x7fff;
  uRam00000001833753d0 = (uRam00000001833753d0 ^ uVar4) + 0x7fff ^ 0x1307742a9c38006a;
  uRam0000000183375470 = (uRam0000000183375470 * 0x406bc62c54e7872d ^ uRam00000001833753d0) + uVar4;
  uRam0000000183375458 = uRam0000000183375470 ^ uRam00000001833753d0;
  uRam0000000183375440 = 0x7fff;
  uVar4 = (~uRam0000000183375480 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001833753b8) +
          ((param_4 ^ 0x84222325) & uRam00000001833753b8) * 2);
  uVar4 = (uVar4 | uRam00000001833753c0) + (uVar4 & uRam00000001833753c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183375438 =
       func_0x00018da6d4a0((param_4 ^ 0x84225cda | uVar4) + (uVar4 & (param_4 ^ 0x84225cda)));
  uVar4 = ~((param_4 | 0x7fff) ^ uRam0000000183375438) & param_4 & 0x7fffffffffff;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001833754f0 = (ulonglong)uVar2;
  uRam0000000183375348 = (uRam0000000183375348 ^ uVar4) + uRam00000001833754f0 ^ 0x39db689353c176e6;
  uRam00000001833753f8 = (uRam00000001833753f8 * 0xe6eb6095141220d ^ uRam0000000183375348) + uVar4;
  uRam0000000183375360 = uRam00000001833753f8 ^ uRam0000000183375348;
  uRam0000000183375450 = func_0x00018da6d4a0(uRam0000000183375410 ^ 0x35006a7c00068a);
  uRam00000001833753c0 =
       (uRam00000001833753c0 ^ uRam00000001833754d0) + 0xebfbfef7 ^ 0x32dfb5ef3d501e44;
  uRam0000000183375388 =
       (uRam0000000183375388 * 0x4187ce80cdc4c9bd ^ uRam00000001833753c0) + uRam00000001833754d0;
  uRam0000000183375378 = uRam0000000183375388 ^ uRam00000001833753c0;
  uRam0000000183375330 = 0xebfbfef7;
  uRam00000001833753b8 = func_0x00018da6d4a0(uRam0000000183375350 ^ 0xffa20044abff664e);
  uRam0000000183375310 =
       (uRam0000000183375488 ^ uRam00000001833753b8 & 0x7fffffffffffffff) + 0xdbbbddf9 ^
       0xad17baa68d416838;
  uRam0000000183375488 =
       (uRam0000000183375488 * 0x37ab1cc5265975bd ^ uRam0000000183375310) +
       (uRam00000001833753b8 & 0x7fffffffffffffff);
  uRam0000000183375310 = uRam0000000183375488 ^ uRam0000000183375310;
  uRam0000000183375390 = 0xdbbbddf9;
  uVar4 = (uRam0000000183375408 ^ _UNK_18231f040) + uRam0000000183375300 + 0x84222325;
  uVar5 = (uRam0000000183375300 ^ _UNK_18231f048) + uRam0000000183375408 + 0xfdd88e84;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183375408 ^ _UNK_18231f040;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183375300 ^ _UNK_18231f048;
  uRam0000000183375480 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183375408 + 0xfdd88e84) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183375300 + 0x84222325));
  uRam0000000183375450 =
       (uRam0000000183375450 ^ uRam0000000183375400) - 0xfdd88e84 ^ 0xcaa500f520060abb;
  uRam0000000183375380 =
       (uRam0000000183375380 * -0x29e013f8483a2bd9 ^ uRam0000000183375450) + uRam0000000183375400;
  uRam0000000183375330 = uRam0000000183375380 ^ uRam0000000183375450;
  uRam0000000183375448 = 0x227717c;
  uRam00000001833754b0 = func_0x00018da6d4a0(uRam0000000183375490 + 0xff4700090d0085ff ^ 0xdb);
  uVar4 = ((uRam00000001833754b0 << 0x33 | uRam00000001833754b0 >> 0xd) ^ 0xfdd88e84) &
          0xfffffffffffff;
  uRam00000001833754b8 = uRam0000000183375370 ^ uVar4 ^ 0xfdd90130;
  uRam00000001833754f8 = (uRam00000001833754f8 ^ uVar4) + 0xfdd90130 ^ 0x45f10a99c405b072;
  uRam0000000183375358 = (uRam0000000183375358 * 0x6497435f8db84f85 ^ uRam00000001833754f8) + uVar4;
  uRam0000000183375458 = uRam0000000183375358 ^ uRam00000001833754f8;
  uRam0000000183375438 = 0xfdd90130;
  uRam0000000183375360 = func_0x00018da6d4a0(uRam0000000183375370 ^ uVar4 ^ 0xffccffc7ab26527b);
  uVar4 = uRam0000000183375360 ^ 0x222ce99b12bc270;
  uRam0000000183375438 = uRam00000001833754b8 ^ uVar4 ^ 0x1000072ac;
  uRam0000000183375440 = (uRam0000000183375440 ^ uVar4) + 0x1000072ac ^ 0x65d08483c4080cb4;
  uRam0000000183375348 = (uRam0000000183375348 * -0x3b5f96167ba938d9 ^ uRam0000000183375440) + uVar4
  ;
  uRam0000000183375300 = uRam0000000183375348 ^ uRam0000000183375440;
  uRam0000000183375358 = 0x72ac;
  uVar4 = (uRam00000001833753d8 ^ _UNK_18231f050) + uRam00000001833753b8 + 0x84222325;
  uVar5 = (uRam00000001833753b8 ^ _UNK_18231f058) + uRam00000001833753d8 + 0x3303b3;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833753d8 ^ _UNK_18231f050;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833753b8 ^ _UNK_18231f058;
  uRam0000000183375478 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833753d8 + 0x3303b3) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833753b8 + 0x84222325));
  uVar4 = uRam0000000183375478 << 0x2b | uRam0000000183375478 >> 0x15;
  uRam0000000183375300 = (uRam0000000183375300 ^ uVar4) - 0x3303b3 ^ 0xf934ea24a9716a21;
  uRam0000000183375410 = (uRam0000000183375410 * -0xfa4de5413cdf45 ^ uRam0000000183375300) + uVar4;
  uRam00000001833753b8 = uRam0000000183375410 ^ uRam0000000183375300;
  uRam0000000183375428 = 0xffccfc4d;
  uRam0000000183375400 = func_0x00018da6d4a0(uRam00000001833753b0 ^ 0x2e008429fff03d);
  uVar4 = (uRam0000000183375400 ^ 0x3373b0) & 0xfffffffffffffff0 ^ 0x72ac;
  uRam0000000183375408 = uRam0000000183375428 ^ uVar4 ^ 0x33765f;
  uRam0000000183375480 = (uRam0000000183375480 ^ uVar4) + 0x33765f ^ 0xb18414fbfcbcf25c;
  uRam0000000183375380 = (uRam0000000183375380 * 0x73e445911704b93b ^ uRam0000000183375480) + uVar4;
  uRam0000000183375378 = uRam0000000183375380 ^ uRam0000000183375480;
  uRam0000000183375438 = 0x33765f;
  uVar4 = (~uRam00000001833754d0 + 0x8d6b4ad0) *
          ((uRam0000000183375368 ^ 0x84225189) +
          (ulonglong)((uint)uRam0000000183375368 & 0x84225189) * 2);
  uVar4 = (uVar4 | uRam0000000183375318) + (uVar4 & uRam0000000183375318);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833753b0 =
       func_0x00018da6d4a0((uVar4 | 0x9491b46) + (ulonglong)((uint)uVar4 & 0x9491b46));
  uVar4 = uRam00000001833753b0 << 0x22 | uRam00000001833753b0 >> 0x1e;
  uRam0000000183375308 = uRam00000001833753c8 ^ uVar4 ^ 0x8d6bbd7b;
  uRam0000000183375428 = (uRam0000000183375428 ^ uVar4) + 0x8d6bbd7b ^ 0xc087db8e48ee1d4f;
  uRam0000000183375448 = (uRam0000000183375448 * -0xff42545bc555d19 ^ uRam0000000183375428) + uVar4;
  uRam00000001833754f8 = uRam0000000183375448 ^ uRam0000000183375428;
  uRam0000000183375358 = 0x8d6bbd7b;
  uRam00000001833754c8 = func_0x00018da6d4a0(uRam0000000183375318 ^ 0xffe5001b1aff3ae4);
  uVar4 = uRam00000001833754c8 ^ 0x7294b531;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4;
  uRam0000000183375398 = uRam0000000183375460 ^ uVar4 ^ 0x1000072ac;
  uRam0000000183375460 = (uRam0000000183375460 ^ uVar4) + 0x1000072ac ^ 0x622db7bff6ced852;
  uRam0000000183375338 = (uRam0000000183375338 * 0xf8ba4a2e88dfd21 ^ uRam0000000183375460) + uVar4;
  uRam0000000183375420 = uRam0000000183375338 ^ uRam0000000183375460;
  uRam0000000183375368 = 0x72ac;
  uVar4 = (uRam00000001833754e8 ^ _UNK_18231f060) + uRam0000000183375490 + 0x6fd9ddd2;
  uVar5 = (uRam0000000183375490 ^ _UNK_18231f068) + uRam00000001833754e8 + 0xdbbbddf9;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833754e8 ^ _UNK_18231f060;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183375490 ^ _UNK_18231f068;
  uRam00000001833754f8 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833754e8 + 0xdbbbddf9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183375490 + 0x6fd9ddd2));
  uRam0000000183375480 =
       (uRam0000000183375480 ^ uRam00000001833754f8 ^ 0x20402206) + 0x3040230e ^ 0x3f33efb5645c9507;
  uRam0000000183375448 =
       (uRam0000000183375448 * 0x64814bcd7ae2c81d ^ uRam0000000183375480) +
       (uRam00000001833754f8 ^ 0x20402206);
  uRam0000000183375460 = uRam0000000183375448 ^ uRam0000000183375480;
  uRam00000001833753e0 = 0x3040230e;
  uRam00000001833754f8 = func_0x00018da6d4a0(uRam00000001833753b0 ^ 0x73d7005dc1);
  uVar4 = (uRam00000001833754f8 ^ 0xfbfbffff) & 0xfffffffffff ^ 0xdbbbddf9;
  uVar4 = uVar4 << 0x3d | uVar4 >> 3;
  uRam0000000183375358 = (uRam0000000183375358 ^ uVar4) + 0xcbbbdcf1 ^ 0x1efda888599bf94c;
  uRam0000000183375498 = (uRam0000000183375498 * -0x5df89f356551e30d ^ uRam0000000183375358) + uVar4
  ;
  uRam0000000183375328 = uRam0000000183375498 ^ uRam0000000183375358;
  uRam0000000183375468 = 0xcbbbdcf1;
  uVar4 = (~uRam0000000183375350 + 0x9777b9e3) *
          ((uRam0000000183375320 ^ 0xb462002b) +
          (ulonglong)((uint)uRam0000000183375320 & 0xb462002b) * 2);
  uVar4 = (uVar4 | uRam00000001833753e8) + (uVar4 & uRam00000001833753e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833753a8 =
       func_0x00018da6d4a0((uVar4 | 0x2315b9c9) + (ulonglong)((uint)uVar4 & 0x2315b9c9));
  uVar4 = uRam00000001833753d8 ^ 0x3040230e;
  uRam00000001833753e8 = uRam0000000183375430 ^ uVar4 ^ 0xc7b7dcf0;
  uRam0000000183375398 = (uRam0000000183375398 ^ uVar4) + 0xc7b7dcf0 ^ 0x5e72b42f225be3bf;
  uRam00000001833753c8 = (uRam00000001833753c8 * 0x70840e3e9321a29b ^ uRam0000000183375398) + uVar4;
  uRam0000000183375430 = uRam00000001833753c8 ^ uRam0000000183375398;
  uRam00000001833753b8 = 0xc7b7dcf0;
  uRam00000001833754b8 = func_0x00018da6d4a0(uRam0000000183375370 ^ 0x1f008423001d73);
  uRam00000001833753f0 = uRam00000001833754b8 ^ 0x9bcf5d8a7a7abdf0;
  uRam00000001833754e0 = uRam00000001833754e0 ^ uRam00000001833753f0 ^ 0x59b1f0a62328d473;
  uRam0000000183375338 =
       (uRam0000000183375338 * -0x45c3f4471fc6f18d ^ uRam00000001833754e0) + uRam00000001833753f0;
  uRam0000000183375498 = uRam0000000183375338 ^ uRam00000001833754e0;
  uRam00000001833753c8 = 0;
  uVar4 = (uRam0000000183375460 ^ _UNK_18231f070) + uRam0000000183375400 + 0x6fd9ddd2;
  uVar5 = (uRam0000000183375400 ^ _UNK_18231f078) + uRam0000000183375460 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183375460 ^ _UNK_18231f070;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183375400 ^ _UNK_18231f078;
  lVar3 = func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183375460 + 0xffffffff)
                              ^ (uVar4 << 0x1d | uVar4 >> 0x23) -
                                (uRam0000000183375400 + 0x6fd9ddd2));
  uRam00000001833754e8 = (ulonglong)((uint)lVar3 & 0xebfbfef7);
  uRam00000001833753f0 =
       (uRam00000001833753f0 ^ uRam00000001833754e8) + 0x14040108 ^ 0xfcb5e0e410c8daf6;
  uRam00000001833754e8 = (lVar3 * -0x171517c1b2d22a31 ^ uRam00000001833753f0) + uRam00000001833754e8
  ;
  uRam00000001833753a0 = uRam00000001833754e8 ^ uRam00000001833753f0;
  uRam0000000183375488 = 0x14040108;
  uVar4 = (~uRam00000001833754f8 + 0x14040109) *
          ((uRam0000000183375338 ^ 0x6fd9ddd2) +
          (ulonglong)((uint)uRam0000000183375338 & 0x6fd9ddd2) * 2);
  uVar4 = (uVar4 | uRam0000000183375418) + (uVar4 & uRam0000000183375418);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183375338 =
       func_0x00018da6d4a0((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda));
  uRam00000001833754b0 =
       uRam00000001833754b0 ^ uRam0000000183375338 & 0x1ffffffff8000 ^ 0x4c73be4b857ce59;
  uRam0000000183375320 =
       (uRam0000000183375320 * -0x7748321c2b020dab ^ uRam00000001833754b0) +
       (uRam0000000183375338 & 0x1ffffffff8000);
  uRam0000000183375380 = uRam0000000183375320 ^ uRam00000001833754b0;
  uRam0000000183375330 = 0;
  uVar4 = (uRam0000000183375430 ^ 0x84225189) + uRam00000001833754a8 + 0x84225189;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183375430 ^ 0x84225189;
  uVar5 = ((uRam00000001833754a8 + uRam0000000183375430) * 0x2000 |
          uRam00000001833754a8 + uRam0000000183375430 >> 0x33) ^ uRam00000001833754a8;
  uRam0000000183375480 =
       func_0x00018da6d4a0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam0000000183375430 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833754a8 + 0x84225189));
  uVar4 = (uRam0000000183375480 << 0xc | uRam0000000183375480 >> 0x34) << 0x30 |
          (uRam0000000183375480 & 0xfffffffffffff) >> 4;
  uRam0000000183375330 = uRam0000000183375360 ^ uVar4 ^ 0x72ac;
  uRam00000001833753c8 = (uRam00000001833753c8 ^ uVar4) + 0x72ac ^ 0xf035c3034fc8d411;
  uRam00000001833754e8 = (uRam00000001833754e8 * 0x603997c0da89f809 ^ uRam00000001833753c8) + uVar4;
  uRam00000001833753c8 = uRam00000001833754e8 ^ uRam00000001833753c8;
  uRam0000000183375468 = 0x72ac;
  uRam0000000183375450 = func_0x00018da6d4a0(uRam0000000183375450 + 0xffdcff7c1b001dff ^ 0xdb);
  uVar4 = (uRam0000000183375450 ^ 0x68d0cc77) & 0x7fffffffffffffff;
  uRam00000001833754f8 = uRam00000001833754f8 ^ uVar4 ^ 0x3bc4542249e8d05a;
  uRam0000000183375308 = (uRam0000000183375308 * -0x179ba96af7088457 ^ uRam00000001833754f8) + uVar4
  ;
  uRam00000001833754f0 = uRam0000000183375308 ^ uRam00000001833754f8;
  uRam00000001833753f8 = 0;
  uVar5 = (ulonglong)(uVar2 ^ param_3);
  uVar4 = (~uRam0000000183375380 + 0x72ad) *
          ((uVar5 ^ 0x84222325 ^ uRam00000001833753a8) +
          (ulonglong)((uint)uRam00000001833753a8 & (uint)(uVar5 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uRam00000001833753c8) + (uVar4 & uRam00000001833753c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183375488 =
       func_0x00018da6d4a0((uVar5 ^ 0x84225189 | uVar4) +
                           (ulonglong)((uint)(uVar5 ^ 0x84225189) & (uint)uVar4));
  uRam0000000183375458 = uVar5 ^ 0x72ac;
  uRam0000000183375360 =
       (uRam0000000183375360 ^ uRam0000000183375420 & 0x7fffffffffffffff) + uRam0000000183375458 ^
       0x6c56347ba767a822;
  uRam00000001833753b0 =
       (uRam00000001833753b0 * 0x5e106af232604427 ^ uRam0000000183375360) +
       (uRam0000000183375420 & 0x7fffffffffffffff);
  uRam0000000183375350 = uRam00000001833753b0 ^ uRam0000000183375360;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb64b,0x1f8)
      /* POOL[0xb64b,0x1f8]: Z | apq | Hsjeq | UoJZc | apz | YVFTe | apr | sixtwo/dS | bOPYi | apE | apD | UeXgv | Shkca | xmgVN | sixtwo/hm | bcN | gcmeH | WY | diX | apy | net/minecraft/class_259 | method_1073 | ()Lnet/minecraft/class_265; | bcS | (Lnet/minecraft/class_265;)V | FoNvc | MVuFv | field_1886 | MuwUi | kpzZC | apF | sixtwo/dT | HYicB | apJ | method_1434 | QxDnA | method_2910 | sixtwo/dU | dneZD | kzZLu | gipBo | BxkdK | method_7261 | apS | field_7513 | Lnet/minecraft/class_1536; | method_2918 | (Lnet/minecraft/class_1657;Lnet/minecraft/class_1297;)V | eKQLo | net/minecraft/class_1536 | method_23317 | OZKKQ | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018da64147 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18231d190 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dS; apG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18da6d530, runtime 6ffff567d530) =====

void FUN_18da6d530(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018da6d57b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18231f1b0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/dS; apH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18da6e540, runtime 6ffff567e540) =====

void FUN_18da6e540(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018da6e5c9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18231f770 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xda564f7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da564f7(void)

{
  FUN_190ddce00();
  (*_DAT_182319ad8)();
  return;
}


// ----- block @ rva 0xda592ff -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da592ff(void)

{
  FUN_190dd72e0();
  (*_DAT_18231a168)();
  return;
}


// ----- block @ rva 0xda59425 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da59425(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
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


// ----- block @ rva 0xda59619 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da59619(void)

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


// ----- block @ rva 0xda59c12 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da59c12(void)

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


// ----- block @ rva 0xda5a1e3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da5a1e3(void)

{
  (*_DAT_18231a338)();
  return;
}


// ----- block @ rva 0xda5a7c5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da5a7c5(void)

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


// ----- block @ rva 0xda5ab32 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da5ab32(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18231a348)();
  return;
}


// ----- block @ rva 0xda5ad47 -----

void FUN_18da5ad47(void)

{
  return;
}


// ----- block @ rva 0xda5adb3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da5adb3(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18231a158)();
  return;
}


// ----- block @ rva 0xda5ae16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da5ae16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182319d08)();
  return;
}


// ----- block @ rva 0xda5ae7c -----

void FUN_18da5ae7c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xda5b06d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da5b06d(void)

{
  FUN_190ddce00();
  (*_DAT_18231c318)();
  return;
}


// ----- block @ rva 0xda5b155 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da5b155(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong *unaff_RSI;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar17;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar18;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar25;
  undefined1 auVar26 [16];
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulonglong uVar41;
  undefined1 auVar42 [16];
  uint uVar43;
  undefined1 auVar44 [16];
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulonglong uStack0000000000000090;
  ulonglong in_stack_00000098;
  uint uStack00000000000000b0;
  
  uVar6 = _DAT_18231af58;
  uVar3 = _DAT_18231af50;
  uStack0000000000000090 = _DAT_18231af50 ^ 0x84222325;
  uVar9 = (uStack0000000000000090 ^ in_RAX) + uStack0000000000000090 + param_1;
  uVar17 = (param_1 ^ 0x2abae7a6392a9505) + in_RAX + 0x2abae7a6392a9505;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uStack0000000000000090 ^ in_RAX;
  uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ param_1 ^ 0x2abae7a6392a9505;
  _DAT_183375190 =
       func_0x00018da61b10((uVar17 << 0x1d | uVar17 >> 0x23) - (in_RAX + 0x2abae7a6392a9505) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (uStack0000000000000090 + param_1));
  uVar17 = uVar3 | 0x2abae7a6392a9505;
  _DAT_183375080 =
       (_DAT_183375080 ^ _DAT_183375190 ^ 0x2abae7a6392a9505) + uVar17 ^ 0x5893d1a546f9277c;
  _DAT_1833751f8 =
       (_DAT_1833751f8 * -0x283f9e14ee98c3cb ^ _DAT_183375080) +
       (_DAT_183375190 ^ 0x2abae7a6392a9505);
  _DAT_1833751e0 = _DAT_1833751f8 ^ _DAT_183375080;
  uVar9 = uVar6 ^ 0x84222325 ^ _DAT_183374fa8;
  lVar4 = (uVar6 ^ 0x84222325) + _DAT_183374f40;
  uVar18 = uVar9 + lVar4;
  uVar23 = (_DAT_183374f40 ^ 0x7d39da38ae84bfe7) + _DAT_183374fa8 + 0x7d39da38ae84bfe7;
  uVar9 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar9;
  uVar18 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ _DAT_183374f40 ^ 0x7d39da38ae84bfe7;
  _DAT_183375018 = uVar17;
  _DAT_183375000 =
       func_0x00018da61b10((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_183374fa8 + 0x7d39da38ae84bfe7)
                           ^ (uVar9 << 0x1d | uVar9 >> 0x23) - lVar4);
  uVar9 = uVar6 * 0x7d39da38ae84bfe7 ^ _DAT_183375000;
  uVar6 = uVar6 + 0x7d39da38ae84bfe7 + (uVar6 & 0x7d39da38ae84bfe7) * -2;
  _DAT_183375240 = (_DAT_183375240 ^ uVar9) + uVar6 ^ 0x70082901a6588ec;
  _DAT_183374f60 = (_DAT_183374f60 * -0x6da62ae958e01e13 ^ _DAT_183375240) + uVar9;
  _DAT_183374ff8 = _DAT_183374f60 ^ _DAT_183375240;
  uVar3 = uVar3 * uVar3;
  uVar23 = uVar3 * -0x68b84229d6a1382a;
  auVar11._8_8_ = uVar23;
  auVar11._0_8_ = _DAT_18001b640;
  auVar10 = pshufb(auVar11 ^ _DAT_18231c720,_DAT_1800170c0);
  uVar18 = auVar10._8_8_ + auVar10._0_8_;
  uVar9 = uVar18 + _DAT_183375228;
  if (auVar10._4_4_ < 0) {
    uVar9 = _DAT_1833750e8 ^ uVar18;
  }
  _DAT_183375208 = uVar6;
  _DAT_183375058 = func_0x00018da61b10(SUB161(auVar11 ^ _DAT_18231c720,5) ^ uVar9);
  uVar9 = (_DAT_183375058 & 0x3fffffffffffffff) * -0x63a8c2ba9f9ecd27;
  uVar18 = uVar3 * 0x68b84229d6a1382a;
  _DAT_183375210 = (_DAT_183375210 ^ uVar9) + uVar3 * 0x68b84229d6a1382a ^ 0x8db70adc74467a31;
  _DAT_183375110 = (_DAT_183375110 * -0x25f4225766c1e07f ^ _DAT_183375210) + uVar9;
  _DAT_183374f70 = _DAT_183375110 ^ _DAT_183375210;
  uVar9 = (_DAT_183374f38 ^ 0xea332bb922a) + _DAT_1833750b8 + 0xea332bb922a;
  uVar24 = (uVar23 ^ _DAT_1833750b8) + _DAT_183374f38 + uVar23;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183374f38 ^ 0xea332bb922a;
  uVar24 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ uVar23 ^ _DAT_1833750b8;
  _DAT_1833752f0 = uVar18;
  _DAT_183375070 =
       func_0x00018da61b10((uVar24 << 0x1d | uVar24 >> 0x23) - (_DAT_183374f38 + uVar23) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833750b8 + 0xea332bb922a));
  uVar8 = (uint)(uVar23 >> 0x20);
  auVar20._8_4_ = (int)uVar23;
  auVar20._0_8_ = uVar23;
  auVar20._12_4_ = uVar8;
  uVar25 = SUB164(auVar20 & _DAT_18231c730,0);
  uVar24 = SUB168(auVar20 & _DAT_18231c730,0);
  uVar7 = SUB164(auVar20 | _DAT_18231c730,0);
  uVar41 = SUB168(auVar20 | _DAT_18231c730,0);
  uVar27 = SUB164(_DAT_18231c730 ^ auVar20,0);
  auVar46._8_4_ = 0xffffffff;
  auVar46._0_8_ = 0xffffffffffffffff;
  auVar46._12_4_ = 0xffffffff;
  uVar16 = SUB164(auVar20 ^ auVar46,0);
  uVar9 = _DAT_183375070 & 0x1ffffffff;
  lVar4 = (ulonglong)_DAT_18231c7b0 * (uVar23 & 0xffffffff) +
          ((ulonglong)_DAT_18231c7c0 * (uVar23 & 0xffffffff) +
           (ulonglong)uVar8 * (ulonglong)_DAT_18231c7b0 << 0x20);
  uVar41 = (((ulonglong)uVar16 * (ulonglong)_DAT_18231c7a0 +
             ((SUB168(auVar20 ^ auVar46,0) >> 0x20) * (ulonglong)_DAT_18231c7a0 +
              (ulonglong)_DAT_18231c740 * (ulonglong)uVar16 << 0x20) +
             (ulonglong)uVar27 * (ulonglong)_DAT_18231c770 +
             ((SUB168(_DAT_18231c730 ^ auVar20,0) >> 0x20) * (ulonglong)_DAT_18231c770 +
              (ulonglong)_DAT_18231c760 * (ulonglong)uVar27 << 0x20) +
             (ulonglong)uVar25 * (ulonglong)_DAT_18231c770 +
             ((uVar24 >> 0x20) * (ulonglong)_DAT_18231c770 +
              (ulonglong)uVar25 * (ulonglong)_DAT_18231c760 << 0x20) +
             (ulonglong)_DAT_18231c750 * (uVar23 & 0xffffffff) +
             ((ulonglong)uVar8 * (ulonglong)_DAT_18231c750 +
              (uVar23 & 0xffffffff) * (ulonglong)_DAT_18231c740 << 0x20) + lVar4 +
            (ulonglong)_DAT_18231c780 * (ulonglong)uVar7 +
            ((ulonglong)_DAT_18231c790 * (ulonglong)uVar7 +
             (uVar41 >> 0x20) * (ulonglong)_DAT_18231c780 << 0x20)) -
           ((ulonglong)uVar7 * (ulonglong)_DAT_18231c800 +
            ((uVar41 >> 0x20) * (ulonglong)_DAT_18231c800 +
             (ulonglong)_DAT_18231c7f0 * (ulonglong)uVar7 << 0x20) +
            (ulonglong)uVar25 * (ulonglong)_DAT_18231c800 +
            ((uVar24 >> 0x20) * (ulonglong)_DAT_18231c800 +
             (ulonglong)uVar25 * (ulonglong)_DAT_18231c7f0 << 0x20) +
            (uVar23 & 0xffffffff) * (ulonglong)_DAT_18231c7d0 +
            ((ulonglong)_DAT_18231c7e0 * (uVar23 & 0xffffffff) +
             (ulonglong)uVar8 * (ulonglong)_DAT_18231c7d0 << 0x20) + lVar4)) + _DAT_18231c810;
  _DAT_183375010 = _DAT_183374f68 ^ uVar9 ^ uVar41;
  _DAT_1833751d0 = (_DAT_1833751d0 ^ uVar9) + uVar41 ^ 0x47e2fcf5fc060ed0;
  _DAT_183375110 = (_DAT_183375110 * -0x2c6f13ee5fcfb68b ^ _DAT_1833751d0) + uVar9;
  _DAT_183375268 = _DAT_183375110 ^ _DAT_1833751d0;
  _DAT_183374f48 = _DAT_183375130 ^ uVar41;
  uVar9 = uVar41 ^ 0x84222325 ^ _DAT_183375188;
  lVar5 = (uVar41 ^ 0x84222325) + _DAT_183375010;
  lVar4 = _DAT_183375188 + uVar3 * 0x68b84229d6a1382a;
  uVar23 = uVar9 + lVar5;
  uVar24 = (uVar18 ^ _DAT_183375010) + lVar4;
  uVar9 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ uVar9;
  uVar23 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ uVar18 ^ _DAT_183375010;
  _DAT_183374fa0 = uVar41;
  _DAT_183375048 =
       func_0x00018da61b10((uVar23 << 0x1d | uVar23 >> 0x23) - lVar4 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar5);
  uVar9 = _DAT_183375048 >> 1 | _DAT_183375048;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183375048 ^ uVar41;
  uVar25 = (uint)(uVar41 >> 0x20);
  auVar28._8_4_ = (int)uVar41;
  auVar28._0_8_ = uVar41;
  auVar28._12_4_ = uVar25;
  uVar7 = (uint)(uVar18 >> 0x20);
  auVar47._8_4_ = (int)uVar18;
  auVar47._0_8_ = uVar18;
  auVar47._12_4_ = uVar7;
  auVar50._0_8_ = uVar41 | uVar18;
  uVar8 = SUB164(auVar28 & auVar47,0);
  uVar23 = SUB168(auVar28 & auVar47,0);
  uVar16 = SUB164(auVar28 ^ auVar47,0);
  uVar24 = SUB168(auVar28 ^ auVar47,0);
  uVar24 = ((ulonglong)_DAT_18231c860 * (ulonglong)uVar16 +
            ((ulonglong)_DAT_18231c870 * (ulonglong)uVar16 +
             (uVar24 >> 0x20) * (ulonglong)_DAT_18231c860 << 0x20) +
           (ulonglong)_DAT_18231c840 * (ulonglong)uVar8 +
           ((ulonglong)_DAT_18231c850 * (ulonglong)uVar8 +
            (uVar23 >> 0x20) * (ulonglong)_DAT_18231c840 << 0x20) +
           (ulonglong)_DAT_18231c830 * (uVar18 & 0xffffffff) +
           ((ulonglong)uVar7 * (ulonglong)_DAT_18231c830 +
            (ulonglong)_DAT_18231c820 * (uVar18 & 0xffffffff) << 0x20) +
           (uVar41 & 0xffffffff) * (ulonglong)_DAT_18231c830 +
           ((ulonglong)uVar25 * (ulonglong)_DAT_18231c830 +
            (uVar41 & 0xffffffff) * (ulonglong)_DAT_18231c820 << 0x20)) -
           ((ulonglong)uVar16 * (_DAT_18231c900 & 0xffffffff) +
            ((ulonglong)_DAT_18231c910 * (ulonglong)uVar16 +
             (uVar24 >> 0x20) * (_DAT_18231c900 & 0xffffffff) << 0x20) +
            (auVar50._0_8_ & 0xffffffff) * (ulonglong)_DAT_18231c8e0 +
            ((ulonglong)_DAT_18231c8f0 * (auVar50._0_8_ & 0xffffffff) +
             (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_18231c8e0 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_18231c8c0 +
           ((ulonglong)_DAT_18231c8d0 * (ulonglong)uVar8 +
            (uVar23 >> 0x20) * (ulonglong)_DAT_18231c8c0 << 0x20) +
           (uVar18 & 0xffffffff) * (ulonglong)_DAT_18231c8b0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_18231c8b0 +
            (ulonglong)_DAT_18231c8a0 * (uVar18 & 0xffffffff) << 0x20) +
           (uVar41 & 0xffffffff) * (ulonglong)_DAT_18231c8b0 +
           ((ulonglong)uVar25 * (ulonglong)_DAT_18231c8b0 +
            (uVar41 & 0xffffffff) * (ulonglong)_DAT_18231c8a0 << 0x20));
  _DAT_1833751b8 = _DAT_183374fe0 ^ uVar9 ^ uVar24;
  _DAT_183374fe8 = (_DAT_183374fe8 ^ uVar9) + uVar24 ^ 0x354d651503e6f52e;
  _DAT_183375178 = (_DAT_183375178 * 0x616a6c81e176cc1b ^ _DAT_183374fe8) + uVar9;
  _DAT_183375190 = _DAT_183375178 ^ _DAT_183374fe8;
  _DAT_1833751f0 = _DAT_1833751c0 ^ uVar24;
  lVar4 = _DAT_18231af58 * _DAT_18231af58;
  uVar23 = lVar4 * 0x61b96e46bf4dd9c2;
  auVar10._8_8_ = uVar23;
  auVar10._0_8_ = _DAT_18001b640;
  auVar11 = pshufb(auVar10 ^ _DAT_18231c920,_DAT_1800170c0);
  uVar18 = auVar11._8_8_ + auVar11._0_8_;
  uVar9 = uVar18 + _DAT_183375218;
  if (auVar11._4_4_ < 0) {
    uVar9 = _DAT_183375290 ^ uVar18;
  }
  _DAT_1833750f0 = uVar24;
  _DAT_183375040 = func_0x00018da61b10(SUB161(auVar10 ^ _DAT_18231c920,5) ^ uVar9);
  uVar9 = (_DAT_183375040 << 0x39 | _DAT_183375040 >> 7) >> 2 | (_DAT_183375040 >> 7) << 0x3e;
  uVar41 = lVar4 * -0x61b96e46bf4dd9c2;
  _DAT_1833752e8 = (_DAT_1833752e8 ^ uVar9) + lVar4 * -0x61b96e46bf4dd9c2 ^ 0x9f045ca54cbc274b;
  _DAT_183375268 = (_DAT_183375268 * 0x4f358f396b74e0d9 ^ _DAT_1833752e8) + uVar9;
  _DAT_183375058 = _DAT_183375268 ^ _DAT_1833752e8;
  uVar18 = uVar24 ^ 0x84222325;
  uVar9 = ((_DAT_183375288 ^ uVar18) + (uVar18 & _DAT_183375288) * 2) * (uVar23 - _DAT_1833752c0);
  uVar9 = (uVar9 | _DAT_183374fe8) + (uVar9 & _DAT_183374fe8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183374f78 = uVar41;
  _DAT_183375130 = func_0x00018da61b10((uVar18 ^ uVar23 | uVar9) + (uVar9 & (uVar18 ^ uVar23)));
  uVar27 = (uint)(uVar24 >> 0x20);
  auVar29._8_4_ = (int)uVar24;
  auVar29._0_8_ = uVar24;
  auVar29._12_4_ = uVar27;
  uVar8 = (uint)(uVar23 >> 0x20);
  auVar26._8_4_ = (int)uVar23;
  auVar26._0_8_ = uVar23;
  auVar26._12_4_ = uVar8;
  uVar9 = (uVar24 & 0xffffffff) * (uVar23 & 0xffffffff) +
          ((ulonglong)uVar27 * (uVar23 & 0xffffffff) + (uVar24 & 0xffffffff) * (ulonglong)uVar8 <<
          0x20);
  uVar25 = SUB164(auVar29 & auVar26,0);
  uVar18 = SUB168(auVar29 & auVar26,0);
  uVar16 = SUB164(auVar29 | auVar26,0);
  uVar45 = SUB168(auVar29 | auVar26,0);
  uVar7 = SUB164(auVar29 ^ auVar26,0);
  auVar50._0_8_ = SUB168(auVar29 ^ auVar26,0);
  uVar38 = SUB164(auVar26 ^ _DAT_18001a710,0);
  lVar5 = (uVar9 & 0xffffffff) * (ulonglong)_DAT_18231c9f0 +
          ((ulonglong)_DAT_18231ca00 * (uVar9 & 0xffffffff) +
           (uVar9 >> 0x20) * (ulonglong)_DAT_18231c9f0 << 0x20);
  uVar9 = (_DAT_183375130 << 0x39 | _DAT_183375130 >> 7) * 0x3f1432b2bab56bff;
  uVar24 = (((ulonglong)uVar38 * (_DAT_18231c970 & 0xffffffff) +
             ((ulonglong)_DAT_18231c9e0 * (ulonglong)uVar38 +
              (SUB168(auVar26 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_18231c970 & 0xffffffff) << 0x20)
             + (ulonglong)_DAT_18231c9c0 * (ulonglong)uVar7 +
               ((ulonglong)_DAT_18231c9d0 * (ulonglong)uVar7 +
                (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_18231c9c0 << 0x20) +
               (ulonglong)_DAT_18231c9a0 * (ulonglong)uVar16 +
               ((ulonglong)_DAT_18231c9b0 * (ulonglong)uVar16 +
                (uVar45 >> 0x20) * (ulonglong)_DAT_18231c9a0 << 0x20) +
               (ulonglong)_DAT_18231c980 * (ulonglong)uVar25 +
               ((ulonglong)_DAT_18231c990 * (ulonglong)uVar25 +
                (uVar18 >> 0x20) * (ulonglong)_DAT_18231c980 << 0x20) +
               (ulonglong)_DAT_18231c950 * (uVar23 & 0xffffffff) +
               ((ulonglong)_DAT_18231c960 * (uVar23 & 0xffffffff) +
                (ulonglong)uVar8 * (ulonglong)_DAT_18231c950 << 0x20) +
               (ulonglong)_DAT_18231c930 * (uVar24 & 0xffffffff) +
               ((ulonglong)_DAT_18231c940 * (uVar24 & 0xffffffff) +
                (ulonglong)uVar27 * (ulonglong)_DAT_18231c930 << 0x20) + lVar5) -
           ((ulonglong)uVar7 * (ulonglong)_DAT_18231ca70 +
            ((ulonglong)_DAT_18231ca80 * (ulonglong)uVar7 +
             (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_18231ca70 << 0x20) +
            (ulonglong)uVar16 * (ulonglong)_DAT_18231ca50 +
            ((ulonglong)_DAT_18231ca60 * (ulonglong)uVar16 +
             (uVar45 >> 0x20) * (ulonglong)_DAT_18231ca50 << 0x20) +
            (ulonglong)uVar25 * (ulonglong)_DAT_18231ca30 +
            ((ulonglong)_DAT_18231ca40 * (ulonglong)uVar25 +
             (uVar18 >> 0x20) * (ulonglong)_DAT_18231ca30 << 0x20) +
            (uVar23 & 0xffffffff) * (ulonglong)_DAT_18231ca20 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_18231ca20 +
             (ulonglong)_DAT_18231ca10 * (uVar23 & 0xffffffff) << 0x20) +
            (uVar24 & 0xffffffff) * (ulonglong)_DAT_18231ca20 +
            ((ulonglong)uVar27 * (ulonglong)_DAT_18231ca20 +
             (uVar24 & 0xffffffff) * (ulonglong)_DAT_18231ca10 << 0x20) + lVar5)) + _DAT_18231c970;
  _DAT_183375060 = _DAT_183375020 ^ uVar9 ^ uVar24;
  _DAT_183374f60 = (_DAT_183374f60 ^ uVar9) + uVar24 ^ 0x629c4e09fd1f455d;
  _DAT_183375280 = (_DAT_183375280 * 0x758557249691d5f3 ^ _DAT_183374f60) + uVar9;
  _DAT_1833752c8 = _DAT_183375280 ^ _DAT_183374f60;
  uVar9 = uVar24 ^ 0x84222325 ^ _DAT_1833752e0;
  lVar5 = (uVar24 ^ 0x84222325) + _DAT_183375290;
  lVar4 = _DAT_1833752e0 + lVar4 * -0x61b96e46bf4dd9c2;
  uVar18 = uVar9 + lVar5;
  uVar23 = (uVar41 ^ _DAT_183375290) + lVar4;
  uVar9 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar9;
  uVar18 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ uVar41 ^ _DAT_183375290;
  _DAT_1833752d0 = uVar24;
  _DAT_183375140 =
       func_0x00018da61b10((uVar18 << 0x1d | uVar18 >> 0x23) - lVar4 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar5);
  uVar7 = (uint)(uVar41 >> 0x20);
  auVar30._8_4_ = (int)uVar41;
  auVar30._0_8_ = uVar41;
  auVar30._12_4_ = uVar7;
  uVar9 = uVar41 ^ uVar24 ^ _DAT_183375140;
  uVar25 = (uint)(uVar24 >> 0x20);
  auVar35._8_4_ = (int)uVar24;
  auVar35._0_8_ = uVar24;
  auVar35._12_4_ = uVar25;
  auVar10 = auVar35 & auVar30;
  auVar11 = auVar35 | auVar30;
  uVar23 = auVar30._8_8_;
  uVar18 = auVar10._8_8_;
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  auVar30 = auVar30 ^ auVar49;
  uVar8 = auVar30._0_4_;
  uVar16 = auVar30._8_4_;
  auVar50._0_8_ = auVar30._8_8_ >> 0x20;
  auVar42._0_8_ =
       (((_DAT_18231cad0 & 0xffffffff) * (ulonglong)uVar8 +
         ((_DAT_18231cb00 & 0xffffffff) * (ulonglong)uVar8 +
          (auVar30._0_8_ >> 0x20) * (_DAT_18231cad0 & 0xffffffff) << 0x20) +
        (ulonglong)auVar11._0_4_ * (ulonglong)_DAT_18231caf0 +
        ((auVar11._0_8_ >> 0x20) * (ulonglong)_DAT_18231caf0 +
         (_DAT_18231cae0 & 0xffffffff) * (ulonglong)auVar11._0_4_ << 0x20) +
        (ulonglong)auVar10._0_4_ * (ulonglong)_DAT_18231caf0 +
        ((auVar10._0_8_ >> 0x20) * (ulonglong)_DAT_18231caf0 +
         (ulonglong)auVar10._0_4_ * (_DAT_18231cae0 & 0xffffffff) << 0x20) +
        (_DAT_18231cab0 & 0xffffffff) * (uVar41 & 0xffffffff) +
        ((_DAT_18231cac0 & 0xffffffff) * (uVar41 & 0xffffffff) +
         (ulonglong)uVar7 * (_DAT_18231cab0 & 0xffffffff) << 0x20) +
        (uVar24 & 0xffffffff) * (ulonglong)_DAT_18231ca90 +
        ((_DAT_18231caa0 & 0xffffffff) * (uVar24 & 0xffffffff) +
         (ulonglong)uVar25 * (ulonglong)_DAT_18231ca90 << 0x20)) -
       ((ulonglong)uVar8 * (_DAT_18231cb40 & 0xffffffff) +
        ((auVar30._0_8_ >> 0x20) * (_DAT_18231cb40 & 0xffffffff) +
         (_DAT_18231cb30 & 0xffffffff) * (ulonglong)uVar8 << 0x20) +
       (uVar41 & 0xffffffff) * (_DAT_18231cb40 & 0xffffffff) +
       ((ulonglong)uVar7 * (_DAT_18231cb40 & 0xffffffff) +
        (uVar41 & 0xffffffff) * (_DAT_18231cb30 & 0xffffffff) << 0x20))) + _DAT_18231cb50;
  auVar42._8_8_ =
       (((_UNK_18231cad8 & 0xffffffff) * (ulonglong)uVar16 +
         ((_UNK_18231cb08 & 0xffffffff) * (ulonglong)uVar16 +
          auVar50._0_8_ * (_UNK_18231cad8 & 0xffffffff) << 0x20) +
        (auVar11._8_8_ & 0xffffffff) * (ulonglong)_UNK_18231caf8 +
        ((auVar11._8_8_ >> 0x20) * (ulonglong)_UNK_18231caf8 +
         (_UNK_18231cae8 & 0xffffffff) * (ulonglong)auVar11._8_4_ << 0x20) +
        (uVar18 & 0xffffffff) * (ulonglong)_UNK_18231caf8 +
        ((uVar18 >> 0x20) * (ulonglong)_UNK_18231caf8 +
         (uVar18 & 0xffffffff) * (_UNK_18231cae8 & 0xffffffff) << 0x20) +
        (_UNK_18231cab8 & 0xffffffff) * (uVar41 & 0xffffffff) +
        ((_UNK_18231cac8 & 0xffffffff) * (uVar41 & 0xffffffff) +
         (uVar23 >> 0x20) * (_UNK_18231cab8 & 0xffffffff) << 0x20) +
        (auVar35._8_8_ & 0xffffffff) * (ulonglong)_UNK_18231ca98 +
        ((_UNK_18231caa8 & 0xffffffff) * (uVar24 & 0xffffffff) +
         (auVar35._8_8_ >> 0x20) * (ulonglong)_UNK_18231ca98 << 0x20)) -
       ((auVar30._8_8_ & 0xffffffff) * (_UNK_18231cb48 & 0xffffffff) +
        (auVar50._0_8_ * (_UNK_18231cb48 & 0xffffffff) +
         (_UNK_18231cb38 & 0xffffffff) * (ulonglong)uVar16 << 0x20) +
       (uVar23 & 0xffffffff) * (_UNK_18231cb48 & 0xffffffff) +
       ((uVar23 >> 0x20) * (_UNK_18231cb48 & 0xffffffff) +
        (uVar23 & 0xffffffff) * (_UNK_18231cb38 & 0xffffffff) << 0x20))) + _UNK_18231cb58;
  _DAT_183374fd8 = _DAT_183374fb0 ^ uVar9 ^ auVar42._0_8_;
  _DAT_1833751d0 = (_DAT_1833751d0 ^ uVar9) + auVar42._0_8_ ^ 0x69f709b97e57cc96;
  _DAT_183375090 = (_DAT_183375068 * -0xf9f41c87791e5ed ^ _DAT_1833751d0) + uVar9 ^ _DAT_1833751d0;
  lVar4 = _DAT_18231af58 * _DAT_18231af50;
  uVar23 = lVar4 * -0x337ebe49d8dd7fb9;
  auVar12._8_8_ = uVar23;
  auVar12._0_8_ = _DAT_18001b640;
  auVar11 = pshufb(auVar12 ^ _DAT_18231cb60,_DAT_1800170c0);
  uVar18 = auVar11._8_8_ + auVar11._0_8_;
  uVar9 = uVar18 + _DAT_1833752d0;
  if (auVar11._4_4_ < 0) {
    uVar9 = _DAT_183374f38 ^ uVar18;
  }
  _DAT_183375068 = auVar42._0_8_;
  _DAT_183374fe8 = func_0x00018da61b10(SUB161(auVar12 ^ _DAT_18231cb60,5) ^ uVar9);
  _DAT_183374fb8 =
       (_DAT_183374fb8 ^ _DAT_183374fe0) + lVar4 * 0x337ebe49d8dd7fb9 ^ 0x4d03c19dce4f8e01;
  _DAT_183375290 =
       (_DAT_183374f18 * 0x1c1593815bb5bc2b ^ _DAT_183374fb8) + _DAT_183374fe0 ^ _DAT_183374fb8;
  uVar9 = auVar42._0_8_ ^ 0x84222325 ^ _DAT_1833750a8;
  lVar5 = (auVar42._0_8_ ^ 0x84222325) + _DAT_183374f80;
  uVar18 = uVar9 + lVar5;
  uVar24 = (uVar23 ^ _DAT_183374f80) + _DAT_1833750a8 + uVar23;
  uVar9 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar9;
  uVar18 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ uVar23 ^ _DAT_183374f80;
  _DAT_183374f18 = lVar4 * 0x337ebe49d8dd7fb9;
  _DAT_183374fb0 =
       func_0x00018da61b10((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_1833750a8 + uVar23) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar5);
  uVar38 = (uint)(auVar42._0_8_ >> 0x20);
  auVar31._8_4_ = (int)auVar42._0_8_;
  auVar31._0_8_ = auVar42._0_8_;
  auVar31._12_4_ = uVar38;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar23;
  uVar8 = (uint)(uVar23 >> 0x20);
  auVar36._8_4_ = (int)uVar23;
  auVar36._0_8_ = uVar23;
  auVar36._12_4_ = uVar8;
  uVar27 = SUB164(auVar31 & auVar36,0);
  uVar41 = SUB168(auVar31 & auVar36,0);
  uVar25 = SUB164(auVar31 | auVar36,0);
  uVar24 = SUB168(auVar31 | auVar36,0);
  uVar16 = SUB164(auVar31 ^ auVar36,0);
  uVar18 = SUB168(auVar31 ^ auVar36,0);
  uVar43 = SUB164(auVar42 ^ auVar49,0);
  auVar37._8_4_ = 0xffffffff;
  auVar37._0_8_ = 0xffffffffffffffff;
  auVar37._12_4_ = 0xffffffff;
  auVar11 = CONCAT88(auVar50._8_8_,auVar50._0_8_) ^ auVar37;
  uVar7 = auVar11._0_4_;
  uVar9 = auVar42._0_8_ * uVar23 ^ _DAT_183374fb0;
  _DAT_1833751c8 =
       (((ulonglong)uVar43 * (ulonglong)_DAT_18231cbb0 +
         ((ulonglong)_DAT_18231cc20 * (ulonglong)uVar43 +
          (SUB168(auVar42 ^ auVar49,0) >> 0x20) * (ulonglong)_DAT_18231cbb0 << 0x20) +
        (ulonglong)_DAT_18231cc00 * (ulonglong)uVar16 +
        ((ulonglong)_DAT_18231cc10 * (ulonglong)uVar16 +
         (uVar18 >> 0x20) * (ulonglong)_DAT_18231cc00 << 0x20) +
        (ulonglong)_DAT_18231cbe0 * (ulonglong)uVar25 +
        ((ulonglong)_DAT_18231cbf0 * (ulonglong)uVar25 +
         (uVar24 >> 0x20) * (ulonglong)_DAT_18231cbe0 << 0x20) +
        (ulonglong)_DAT_18231cbc0 * (ulonglong)uVar27 +
        ((ulonglong)_DAT_18231cbd0 * (ulonglong)uVar27 +
         (uVar41 >> 0x20) * (ulonglong)_DAT_18231cbc0 << 0x20) +
        (ulonglong)_DAT_18231cb90 * (uVar23 & 0xffffffff) +
        ((ulonglong)_DAT_18231cba0 * (uVar23 & 0xffffffff) +
         (ulonglong)uVar8 * (ulonglong)_DAT_18231cb90 << 0x20) +
        (auVar42._0_8_ & 0xffffffff) * (ulonglong)_DAT_18231cb70 +
        ((ulonglong)_DAT_18231cb80 * (auVar42._0_8_ & 0xffffffff) +
         (ulonglong)uVar38 * (ulonglong)_DAT_18231cb70 << 0x20)) -
       ((ulonglong)uVar7 * (ulonglong)_DAT_18231cc60 +
        ((auVar11._0_8_ >> 0x20) * (ulonglong)_DAT_18231cc60 +
         (ulonglong)_DAT_18231cc50 * (ulonglong)uVar7 << 0x20) +
        (ulonglong)uVar16 * (ulonglong)_DAT_18231cc80 +
        ((uVar18 >> 0x20) * (ulonglong)_DAT_18231cc80 +
         (ulonglong)_DAT_18231cc70 * (ulonglong)uVar16 << 0x20) +
        (ulonglong)uVar27 * (ulonglong)_DAT_18231cc80 +
        ((uVar41 >> 0x20) * (ulonglong)_DAT_18231cc80 +
         (ulonglong)uVar27 * (ulonglong)_DAT_18231cc70 << 0x20) +
        (uVar23 & 0xffffffff) * (ulonglong)_DAT_18231cc60 +
        ((ulonglong)uVar8 * (ulonglong)_DAT_18231cc60 +
         (uVar23 & 0xffffffff) * (ulonglong)_DAT_18231cc50 << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_18231cc90 +
       ((ulonglong)_DAT_18231cca0 * (ulonglong)uVar25 + (uVar24 >> 0x20) * (ulonglong)_DAT_18231cc90
       << 0x20))) + 0x370afb3ad40baced;
  _DAT_1833751f8 = _DAT_183375040 ^ uVar9 ^ _DAT_1833751c8;
  _DAT_183374f48 = (_DAT_183374f48 ^ uVar9) + _DAT_1833751c8 ^ 0x8eee13c3764b9ed3;
  _DAT_1833750c0 = (_DAT_1833750c0 * -0x5e4cdc1228805a31 ^ _DAT_183374f48) + uVar9;
  _DAT_1833752a8 = _DAT_1833750c0 ^ _DAT_183374f48;
  lVar4 = _DAT_1833751c8 + lVar4 * 0x337ebe49d8dd7fb9;
  uVar9 = uVar6 + uVar17;
  uVar24 = uVar17 ^ 0x84222325;
  uVar18 = ((_DAT_1833751f8 ^ uVar24) + (uVar24 & _DAT_1833751f8) * 2) * (uVar6 - _DAT_1833751f0);
  uVar18 = (uVar18 | _DAT_183374f60) + (uVar18 & _DAT_183374f60);
  uVar18 = uVar18 * 0x2000 ^ uVar18;
  uVar18 = uVar18 >> 7 ^ uVar18;
  uVar18 = uVar18 << 0x11 ^ uVar18;
  _DAT_183374f00 = func_0x00018da61b10((uVar24 ^ uVar6 | uVar18) + (uVar18 & (uVar24 ^ uVar6)));
  uVar18 = ~_DAT_183374f00 & uVar17 & 0x7fffffffffffffff;
  uVar41 = uVar17 ^ uVar6;
  _DAT_1833752a0 = (_DAT_1833752a0 ^ uVar18) + uVar41 ^ 0x945c5423823244f3;
  _DAT_183374f78 = (_DAT_183374f78 * -0x39228c652492325d ^ _DAT_1833752a0) + uVar18;
  _DAT_183375280 = _DAT_183374f78 ^ _DAT_1833752a0;
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = uVar24;
  auVar11 = pshufb(auVar13 ^ _DAT_18231ccb0,_DAT_1800170c0);
  uVar23 = auVar11._8_8_ + auVar11._0_8_;
  uVar18 = uVar23 + _DAT_183374f00;
  if (auVar11._4_4_ < 0) {
    uVar18 = _DAT_1833750f0 ^ uVar23;
  }
  _DAT_1833752e8 = uVar41;
  _DAT_183375148 = func_0x00018da61b10(SUB161(auVar13 ^ _DAT_18231ccb0,5) ^ uVar18);
  uVar18 = _DAT_183375148 * 0x776ccd7291f16bcb & 0x7fffffffffffffff;
  uVar6 = uVar6 & uVar17;
  _DAT_183375020 = (_DAT_183375020 ^ uVar18) + uVar6 ^ 0xead18c6799c29a06;
  _DAT_183374f10 = (_DAT_183374f10 * -0x4c40a94bbdee39b5 ^ _DAT_183375020) + uVar18;
  _DAT_183375120 = _DAT_183374f10 ^ _DAT_183375020;
  uVar18 = uVar41 ^ 0x84222325;
  uVar23 = uVar18 ^ uVar6 * 2;
  uVar18 = ((_DAT_1833750a8 ^ uVar18) + (uVar18 & _DAT_1833750a8) * 2) *
           (uVar6 * 2 - _DAT_183374f08);
  uVar18 = (uVar18 | _DAT_183375218) + (uVar18 & _DAT_183375218);
  uVar18 = uVar18 * 0x2000 ^ uVar18;
  uVar18 = uVar18 >> 7 ^ uVar18;
  uVar18 = uVar18 << 0x11 ^ uVar18;
  _DAT_183375048 = uVar6;
  _DAT_183375208 = func_0x00018da61b10((uVar23 | uVar18) + (uVar18 & uVar23));
  _DAT_1833750c0 = _DAT_183375208 * 0x11dba247285216b1;
  uVar7 = (uint)(uVar41 >> 0x20);
  auVar44._8_4_ = (int)uVar41;
  auVar44._0_8_ = uVar41;
  auVar44._12_4_ = uVar7;
  auVar32._8_4_ = (int)uVar6;
  auVar32._0_8_ = uVar6;
  auVar32._12_4_ = (int)(uVar6 >> 0x20);
  uVar6 = uVar6 * 2;
  auVar33._8_8_ = auVar32._8_8_ * 2;
  auVar33._0_8_ = uVar6;
  uVar27 = (uint)(uVar6 >> 0x20);
  uVar18 = (uVar41 & 0xffffffff) * (uVar6 & 0xffffffff) +
           ((uVar41 & 0xffffffff) * (ulonglong)uVar27 + (ulonglong)uVar7 * (uVar6 & 0xffffffff) <<
           0x20);
  uVar43 = SUB164(auVar44 & auVar33,0);
  uVar25 = SUB164(auVar44 | auVar33,0);
  uVar16 = SUB164(auVar44 ^ auVar33,0);
  uVar8 = SUB164(auVar44 ^ auVar37,0);
  uVar38 = SUB164(auVar33 ^ _DAT_18001a710,0);
  uVar23 = SUB168(auVar33 ^ _DAT_18001a710,0);
  lVar5 = (uVar18 & 0xffffffff) * (ulonglong)_DAT_18231cd60 +
          ((ulonglong)_DAT_18231cd70 * (uVar18 & 0xffffffff) +
           (uVar18 >> 0x20) * (ulonglong)_DAT_18231cd60 << 0x20);
  uVar41 = (((ulonglong)_DAT_18231cd50 * (ulonglong)uVar38 +
             ((uVar23 >> 0x20) * (ulonglong)_DAT_18231cd50 +
              (ulonglong)_DAT_18231cce0 * (ulonglong)uVar38 << 0x20) +
             (ulonglong)uVar8 * (ulonglong)_DAT_18231cd40 +
             ((SUB168(auVar44 ^ auVar37,0) >> 0x20) * (ulonglong)_DAT_18231cd40 +
              (ulonglong)_DAT_18231ccc0 * (ulonglong)uVar8 << 0x20) +
             (ulonglong)uVar16 * (ulonglong)_DAT_18231cd10 +
             ((SUB168(auVar44 ^ auVar33,0) >> 0x20) * (ulonglong)_DAT_18231cd10 +
              (ulonglong)_DAT_18231cd00 * (ulonglong)uVar16 << 0x20) +
             (ulonglong)uVar43 * (ulonglong)_DAT_18231cd10 +
             ((SUB168(auVar44 & auVar33,0) >> 0x20) * (ulonglong)_DAT_18231cd10 +
              (ulonglong)uVar43 * (ulonglong)_DAT_18231cd00 << 0x20) +
             (ulonglong)_DAT_18231ccf0 * (uVar6 & 0xffffffff) +
             ((ulonglong)uVar27 * (ulonglong)_DAT_18231ccf0 +
              (uVar6 & 0xffffffff) * (ulonglong)_DAT_18231cce0 << 0x20) +
             (uVar41 & 0xffffffff) * (ulonglong)_DAT_18231ccd0 +
             ((ulonglong)uVar7 * (ulonglong)_DAT_18231ccd0 +
              (uVar41 & 0xffffffff) * (ulonglong)_DAT_18231ccc0 << 0x20) +
             (ulonglong)uVar25 * (ulonglong)_DAT_18231cd20 +
             ((ulonglong)_DAT_18231cd30 * (ulonglong)uVar25 +
              (SUB168(auVar44 | auVar33,0) >> 0x20) * (ulonglong)_DAT_18231cd20 << 0x20) + lVar5) -
           ((ulonglong)uVar38 * (ulonglong)_DAT_18231cd90 +
            ((uVar23 >> 0x20) * (ulonglong)_DAT_18231cd90 +
             (ulonglong)_DAT_18231cd80 * (ulonglong)uVar38 << 0x20) +
            (uVar6 & 0xffffffff) * (ulonglong)_DAT_18231cd90 +
            ((ulonglong)uVar27 * (ulonglong)_DAT_18231cd90 +
             (uVar6 & 0xffffffff) * (ulonglong)_DAT_18231cd80 << 0x20) + lVar5)) + _DAT_18231cda0;
  _DAT_1833750f0 = (_DAT_1833750f0 ^ _DAT_1833750c0) + uVar41 ^ 0xe5ffa8fb1215515a;
  _DAT_1833750c0 =
       ((_DAT_1833750e0 ^ _DAT_1833750c0 ^ uVar41) * 0x659ad227d4d5538b ^ _DAT_1833750f0) +
       _DAT_1833750c0;
  _DAT_183375210 = _DAT_1833750c0 ^ _DAT_1833750f0;
  uVar6 = uVar9 ^ 0x84222325 ^ _DAT_183374f50;
  lVar5 = (uVar9 ^ 0x84222325) + _DAT_183374fa8;
  uVar18 = uVar6 + lVar5;
  uVar23 = (uVar41 ^ _DAT_183374fa8) + uVar41 + _DAT_183374f50;
  uVar6 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar6;
  uVar18 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ uVar41 ^ _DAT_183374fa8;
  _DAT_183375290 = uVar41;
  _DAT_1833751c8 =
       func_0x00018da61b10((uVar18 << 0x1d | uVar18 >> 0x23) - (uVar41 + _DAT_183374f50) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar5);
  auVar11 = _DAT_1800170c0;
  uVar6 = _DAT_1833751c8 & 0xffffffffffffffe0 ^ uVar41;
  uVar16 = (uint)(uVar9 >> 0x20);
  auVar34._8_4_ = (int)uVar9;
  auVar34._0_8_ = uVar9;
  auVar34._12_4_ = uVar16;
  uVar27 = (uint)(uVar41 >> 0x20);
  auVar19._8_4_ = (int)uVar41;
  auVar19._0_8_ = uVar41;
  auVar19._12_4_ = uVar27;
  auVar47 = auVar34 & auVar19;
  uVar7 = auVar47._0_4_;
  uVar38 = SUB164(auVar34 | auVar19,0);
  auVar50._0_8_ = SUB168(auVar34 | auVar19,0);
  uVar25 = SUB164(auVar34 ^ auVar19,0);
  uVar23 = SUB168(auVar34 ^ auVar19,0);
  auVar39._8_4_ = 0xffffffff;
  auVar39._0_8_ = 0xffffffffffffffff;
  auVar39._12_4_ = 0xffffffff;
  uVar8 = SUB164(auVar34 ^ auVar39,0);
  uVar43 = SUB164(auVar19 ^ auVar39,0);
  uVar18 = SUB168(auVar19 ^ auVar39,0);
  uStack00000000000000b0 = auVar47._4_4_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar24;
  auVar48._8_4_ = 0xffffffff;
  auVar48._0_8_ = 0xffffffffffffffff;
  auVar48._12_4_ = 0xffffffff;
  auVar10 = pblendw(auVar1,auVar48,0xf0);
  auVar20 = pshufb(auVar10 ^ _DAT_18231cf30,_DAT_1800170c0);
  _DAT_183375148 =
       (((ulonglong)_DAT_18231ce40 * (ulonglong)uVar43 +
         ((uVar18 >> 0x20) * (ulonglong)_DAT_18231ce40 +
          (ulonglong)_DAT_18231cdd0 * (ulonglong)uVar43 << 0x20) +
         (ulonglong)uVar8 * (ulonglong)_DAT_18231ce30 +
         ((SUB168(auVar34 ^ auVar39,0) >> 0x20) * (ulonglong)_DAT_18231ce30 +
          (ulonglong)_DAT_18231cdb0 * (ulonglong)uVar8 << 0x20) +
         (ulonglong)_DAT_18231ce00 * (ulonglong)uVar25 +
         ((uVar23 >> 0x20) * (ulonglong)_DAT_18231ce00 +
          (ulonglong)_DAT_18231cdf0 * (ulonglong)uVar25 << 0x20) +
         (ulonglong)uVar7 * (ulonglong)_DAT_18231ce00 +
         ((auVar47._0_8_ >> 0x20) * (ulonglong)_DAT_18231ce00 +
          (ulonglong)uVar7 * (ulonglong)_DAT_18231cdf0 << 0x20) +
         (ulonglong)_DAT_18231cde0 * (uVar41 & 0xffffffff) +
         ((ulonglong)uVar27 * (ulonglong)_DAT_18231cde0 +
          (uVar41 & 0xffffffff) * (ulonglong)_DAT_18231cdd0 << 0x20) +
         (ulonglong)_DAT_18231cdc0 * (uVar9 & 0xffffffff) +
         ((ulonglong)uVar16 * (ulonglong)_DAT_18231cdc0 +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_18231cdb0 << 0x20) +
        (ulonglong)_DAT_18231ce10 * (ulonglong)uVar38 +
        ((ulonglong)_DAT_18231ce20 * (ulonglong)uVar38 +
         (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_18231ce10 << 0x20)) -
       ((ulonglong)uVar43 * (ulonglong)_DAT_18231ceb0 +
        ((ulonglong)_DAT_18231cf20 * (ulonglong)uVar43 +
         (uVar18 >> 0x20) * (ulonglong)_DAT_18231ceb0 << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_18231cf00 +
       ((ulonglong)_DAT_18231cf10 * (ulonglong)uVar25 + (uVar23 >> 0x20) * (ulonglong)_DAT_18231cf00
       << 0x20) +
       (ulonglong)uVar38 * (ulonglong)_DAT_18231cee0 +
       ((ulonglong)_DAT_18231cef0 * (ulonglong)uVar38 +
        (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_18231cee0 << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_18231cec0 +
       ((ulonglong)_DAT_18231ced0 * (ulonglong)uVar7 +
        (ulonglong)uStack00000000000000b0 * (ulonglong)_DAT_18231cec0 << 0x20) +
       (uVar41 & 0xffffffff) * (ulonglong)_DAT_18231ce90 +
       ((ulonglong)_DAT_18231cea0 * (uVar41 & 0xffffffff) +
        (ulonglong)uVar27 * (ulonglong)_DAT_18231ce90 << 0x20) +
       (uVar9 & 0xffffffff) * (ulonglong)_DAT_18231ce70 +
       ((ulonglong)_DAT_18231ce80 * (uVar9 & 0xffffffff) +
        (ulonglong)uVar16 * (ulonglong)_DAT_18231ce70 << 0x20))) + 0xe009176a026d379;
  _DAT_183375150 = _DAT_183375148 ^ uVar6;
  _DAT_183374fa0 = (_DAT_183374fa0 ^ uVar6) + _DAT_183375148 ^ 0x3de91fd3d731fe92;
  _DAT_183375090 = (_DAT_183375090 * -0x794f54d51a69747b ^ _DAT_183374fa0) + uVar6;
  uVar18 = _DAT_183375148 + lVar4;
  uVar9 = auVar20._8_8_ + auVar20._0_8_;
  uVar6 = uVar9 + _DAT_183375038;
  if (auVar20._4_4_ < 0) {
    uVar6 = _DAT_1833751e0 ^ uVar9;
  }
  _DAT_183374ff8 = func_0x00018da61b10(SUB161(auVar10 ^ _DAT_18231cf30,5) ^ uVar6);
  uVar6 = (_DAT_183374ff8 << 0x30 | _DAT_183374ff8 >> 0x10) ^ uVar17;
  _DAT_1833752e8 = ~uVar17;
  _DAT_1833750d0 = (_DAT_1833750d0 ^ uVar6) + _DAT_1833752e8 ^ 0x658d113eada1e0a9;
  _DAT_183375020 = (_DAT_183375020 * 0x52d29d02ee606dfd ^ _DAT_1833750d0) + uVar6;
  _DAT_183375050 = _DAT_183375020 ^ _DAT_1833750d0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar18 ^ 0x84222325;
  auVar11 = pshufb(auVar14 ^ _DAT_18231cf40,auVar11);
  uVar9 = auVar11._8_8_ + auVar11._0_8_;
  uVar6 = uVar9 + _DAT_183374f60;
  if (auVar11._4_4_ < 0) {
    uVar6 = _DAT_183374fc0 ^ uVar9;
  }
  _DAT_183375130 = func_0x00018da61b10(SUB161(auVar14 ^ _DAT_18231cf40,5) ^ uVar6);
  uVar7 = (uint)(uVar18 >> 0x20);
  auVar15._8_4_ = (int)uVar18;
  auVar15._0_8_ = uVar18;
  auVar15._12_4_ = uVar7;
  uVar6 = auVar15._8_8_ >> 0x20;
  auVar48 = auVar15 ^ auVar48;
  auVar40._0_8_ =
       (((ulonglong)auVar48._0_4_ * (_DAT_18231cf90 & 0xffffffff) +
         ((_DAT_18231cfc0 & 0xffffffff) * (ulonglong)auVar48._0_4_ +
          (auVar48._0_8_ >> 0x20) * (_DAT_18231cf90 & 0xffffffff) << 0x20) +
        (_DAT_18231cfa0 & 0xffffffff) * (uVar18 & 0xffffffff) +
        ((_DAT_18231cfb0 & 0xffffffff) * (uVar18 & 0xffffffff) +
         (ulonglong)uVar7 * (_DAT_18231cfa0 & 0xffffffff) << 0x20) +
        (_DAT_18231cf70 & 0xffffffff) * (uVar18 & 0xffffffff) +
        ((_DAT_18231cf80 & 0xffffffff) * (uVar18 & 0xffffffff) +
         (ulonglong)uVar7 * (_DAT_18231cf70 & 0xffffffff) << 0x20) +
        (_DAT_18231cf50 & 0xffffffff) * (uVar18 & 0xffffffff) +
        ((_DAT_18231cf60 & 0xffffffff) * (uVar18 & 0xffffffff) +
         (ulonglong)uVar7 * (_DAT_18231cf50 & 0xffffffff) << 0x20)) -
       ((uVar18 & 0xffffffff) * (ulonglong)_DAT_18231d010 +
        ((_DAT_18231d020 & 0xffffffff) * (uVar18 & 0xffffffff) +
         (ulonglong)uVar7 * (ulonglong)_DAT_18231d010 << 0x20) +
       (_DAT_18231cff0 & 0xffffffff) * (uVar18 & 0xffffffff) +
       ((_DAT_18231d000 & 0xffffffff) * (uVar18 & 0xffffffff) +
        (ulonglong)uVar7 * (_DAT_18231cff0 & 0xffffffff) << 0x20) +
       (_DAT_18231cfd0 & 0xffffffff) * (uVar18 & 0xffffffff) +
       ((_DAT_18231cfe0 & 0xffffffff) * (uVar18 & 0xffffffff) +
        (ulonglong)uVar7 * (_DAT_18231cfd0 & 0xffffffff) << 0x20))) + _DAT_18231cf90;
  auVar40._8_8_ =
       (((auVar48._8_8_ & 0xffffffff) * (_UNK_18231cf98 & 0xffffffff) +
         ((_UNK_18231cfc8 & 0xffffffff) * (ulonglong)auVar48._8_4_ +
          (auVar48._8_8_ >> 0x20) * (_UNK_18231cf98 & 0xffffffff) << 0x20) +
        (_UNK_18231cfa8 & 0xffffffff) * (uVar18 & 0xffffffff) +
        ((_UNK_18231cfb8 & 0xffffffff) * (uVar18 & 0xffffffff) +
         uVar6 * (_UNK_18231cfa8 & 0xffffffff) << 0x20) +
        (_UNK_18231cf78 & 0xffffffff) * (uVar18 & 0xffffffff) +
        ((_UNK_18231cf88 & 0xffffffff) * (uVar18 & 0xffffffff) +
         uVar6 * (_UNK_18231cf78 & 0xffffffff) << 0x20) +
        (_UNK_18231cf58 & 0xffffffff) * (uVar18 & 0xffffffff) +
        ((_UNK_18231cf68 & 0xffffffff) * (uVar18 & 0xffffffff) +
         uVar6 * (_UNK_18231cf58 & 0xffffffff) << 0x20)) -
       ((auVar15._8_8_ & 0xffffffff) * (ulonglong)_UNK_18231d018 +
        ((_UNK_18231d028 & 0xffffffff) * (uVar18 & 0xffffffff) + uVar6 * _UNK_18231d018 << 0x20) +
       (_UNK_18231cff8 & 0xffffffff) * (uVar18 & 0xffffffff) +
       ((_UNK_18231d008 & 0xffffffff) * (uVar18 & 0xffffffff) +
        uVar6 * (_UNK_18231cff8 & 0xffffffff) << 0x20) +
       (_UNK_18231cfd8 & 0xffffffff) * (uVar18 & 0xffffffff) +
       ((_UNK_18231cfe8 & 0xffffffff) * (uVar18 & 0xffffffff) +
        uVar6 * (_UNK_18231cfd8 & 0xffffffff) << 0x20))) + _UNK_18231cf98;
  _DAT_183375250 = _DAT_1833751e0 ^ _DAT_183374fd8 ^ auVar40._0_8_;
  _DAT_183374f38 = (_DAT_183374f38 ^ _DAT_183374fd8) + auVar40._0_8_ ^ 0x48e184842512bb98;
  _DAT_1833752e0 = (_DAT_1833752e0 * -0x61fd2deaf6ace6d ^ _DAT_183374f38) + _DAT_183374fd8;
  _DAT_1833751b8 = _DAT_1833752e0 ^ _DAT_183374f38;
  uVar6 = (uStack0000000000000090 ^ _DAT_1833752d0) + uStack0000000000000090 + _DAT_183374f60;
  uVar9 = (_DAT_18231af50 ^ _DAT_183374f60) + _DAT_18231af50 + _DAT_1833752d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uStack0000000000000090 ^ _DAT_1833752d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18231af50 ^ _DAT_183374f60;
  _DAT_183375128 = auVar40._0_8_;
  uVar6 = func_0x00018da61b10((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18231af50 + _DAT_1833752d0) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) -
                              (uStack0000000000000090 + _DAT_183374f60));
  _DAT_183374f88 = _DAT_183374f88 ^ uVar3 ^ uVar6 ^ 0x94d0ecf24f39b17;
  _DAT_183374f98 = (uVar6 * -0x34410c29114c1539 ^ _DAT_183374f88) + (uVar3 ^ uVar6);
  _DAT_1833750b0 = _DAT_183374f98 ^ _DAT_183374f88;
  _DAT_183374f00 = _DAT_183375278;
  _DAT_1833750c0 = 0;
  uVar6 = auVar40._0_8_ ^ 0x84222325 ^ _DAT_1833750a0;
  lVar4 = (auVar40._0_8_ ^ 0x84222325) + _DAT_183374fd8;
  uVar3 = uVar6 + lVar4;
  uVar6 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6;
  uVar3 = ((_DAT_183374fd8 + _DAT_1833750a0) * 0x2000 | _DAT_183374fd8 + _DAT_1833750a0 >> 0x33) ^
          _DAT_183374fd8;
  _DAT_1833751f8 =
       func_0x00018da61b10((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1833750a0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar4);
  uVar6 = _DAT_1833751f8 - (_DAT_1833751f8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1833751f8) << 0x14 | _DAT_1833751f8 >> 0x2c;
  auVar21._8_4_ = 0xffffffff;
  auVar21._0_8_ = 0xffffffffffffffff;
  auVar21._12_4_ = 0xffffffff;
  uVar7 = SUB164(auVar21 ^ auVar40,0);
  uVar3 = (((ulonglong)_DAT_18231d050 * (auVar40._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_18231d060 * (auVar40._0_8_ & 0xffffffff) +
             (auVar40._0_8_ >> 0x20) * (ulonglong)_DAT_18231d050 << 0x20) +
           (ulonglong)_DAT_18231d030 * (auVar40._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_18231d040 * (auVar40._0_8_ & 0xffffffff) +
            (auVar40._0_8_ >> 0x20) * (ulonglong)_DAT_18231d030 << 0x20)) -
          ((ulonglong)uVar7 * (ulonglong)_DAT_18231d0b0 +
           ((ulonglong)_DAT_18231d0c0 * (ulonglong)uVar7 +
            (SUB168(auVar21 ^ auVar40,0) >> 0x20) * (ulonglong)_DAT_18231d0b0 << 0x20) +
          (auVar40._0_8_ & 0xffffffff) * (ulonglong)_DAT_18231d090 +
          ((ulonglong)_DAT_18231d0a0 * (auVar40._0_8_ & 0xffffffff) +
           (auVar40._0_8_ >> 0x20) * (ulonglong)_DAT_18231d090 << 0x20) +
          (ulonglong)_DAT_18231d070 * (auVar40._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_18231d080 * (auVar40._0_8_ & 0xffffffff) +
           (auVar40._0_8_ >> 0x20) * (ulonglong)_DAT_18231d070 << 0x20))) + 0x63b6952958da0873;
  _DAT_183375028 = _DAT_1833750c0 ^ uVar6 ^ uVar3;
  _DAT_183375228 = (_DAT_183375228 ^ uVar6) + uVar3 ^ 0x56a92c9281ec57f4;
  _DAT_183375130 = (_DAT_183375130 * -0x445c172508da05af ^ _DAT_183375228) + uVar6;
  _DAT_183375050 = _DAT_183375130 ^ _DAT_183375228;
  auVar22._8_8_ = uVar3;
  auVar22._0_8_ = in_stack_00000098 ^ 0x84222325;
  auVar11 = pshufb(auVar22 ^ _DAT_18231d0d0,_DAT_1800170c0);
  uVar9 = auVar11._8_8_ + auVar11._0_8_;
  uVar6 = uVar9 + _DAT_183375230;
  if (auVar11._4_4_ < 0) {
    uVar6 = _DAT_183374ff8 ^ uVar9;
  }
  _DAT_183374f98 = uVar3;
  _DAT_1833751d8 = func_0x00018da61b10(SUB161(auVar22 ^ _DAT_18231d0d0,5) ^ uVar6);
  uVar6 = _DAT_1833751d8 << 0x39 | _DAT_1833751d8 >> 7;
  _DAT_1833752a8 = in_stack_00000098 + uVar3 + (uVar3 & in_stack_00000098) * -2;
  _DAT_183375220 = (_DAT_183375220 ^ uVar6) + _DAT_1833752a8 ^ 0x9a1fe13ea94d6e7c;
  _DAT_183375270 = (_DAT_183375270 * -0x531adb76a8e77107 ^ _DAT_183375220) + uVar6;
  _DAT_183375178 = _DAT_183375270 ^ _DAT_183375220;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x8eb9,0x192);
  cVar2 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xda5e225 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da5e225(void)

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


// ----- block @ rva 0xda5e76c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da5e76c(void)

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


// ----- block @ rva 0xda5e847 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da5e847(void)

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


// ----- block @ rva 0xda5ef14 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da5ef14(void)

{
  (*_DAT_18231c508)();
  return;
}


// ----- block @ rva 0xda5f6ce -----

void FUN_18da5f6ce(void)

{
  return;
}


// ----- block @ rva 0xda602e3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da602e3(void)

{
  (*_DAT_18231baf8)();
  return;
}


// ----- block @ rva 0xda60346 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da60346(void)

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


// ----- block @ rva 0xda60561 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da60561(void)

{
  (*_DAT_18231c148)();
  return;
}


// ----- block @ rva 0xda61a97 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da61a97(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_18231c228)();
  return;
}


// ----- block @ rva 0xda61aa8 -----

void FUN_18da61aa8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xda6414a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6414a(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xda642ee -----

void FUN_18da642ee(void)

{
  return;
}


// ----- block @ rva 0xda645e4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da645e4(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *unaff_R13;
  int iStack0000000000000050;
  ulonglong uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  iStack0000000000000050 = 3;
  uStack0000000000000060 = 0x20;
  uStack0000000000000058 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_RSI >> 0x20);
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xda65080 -----

undefined8 thunk_FUN_18da6530a(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xda65273 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da65273(void)

{
  int iVar1;
  char unaff_SIL;
  undefined4 unaff_00000034;
  longlong *in_stack_00000030;
  int iStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  iStack0000000000000050 = 7;
  uStack0000000000000058 = CONCAT44(unaff_00000034,(int)unaff_SIL);
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xda6690a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da6690a(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xda67266 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18da68dc6(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xda68d0c -----

undefined8 thunk_FUN_18da6530a(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xda6d021 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6d021(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xda6d57e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6d57e(void)

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


// ----- block @ rva 0xda6d5d2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da6d5d2(void)

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


// ----- block @ rva 0xda6d5f9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6d5f9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18231f4a8)();
  return;
}


// ----- block @ rva 0xda6d65b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6d65b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectArrayElement /*0x568*/))();
  (*_DAT_18231f378)();
  return;
}


// ----- block @ rva 0xda6db9c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6db9c(void)

{
  FUN_190de3220();
  (*_DAT_18231f1c8)();
  return;
}


// ----- block @ rva 0xda6dbcf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da6dbcf(void)

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


// ----- block @ rva 0xda6de10 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6de10(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_18231f4c8)();
  return;
}


// ----- block @ rva 0xda6e180 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da6e180(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xda6e263 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6e263(void)

{
  FUN_190de3220();
  (*_DAT_18231f388)();
  return;
}


// ----- block @ rva 0xda6e302 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6e302(void)

{
  FUN_190dd72e0();
  (*_DAT_18231f3a8)();
  return;
}


// ----- block @ rva 0xda6e411 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6e411(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18231f5c8)();
  return;
}


// ----- block @ rva 0xda6e445 -----

void FUN_18da6e445(void)

{
  return;
}


// ----- block @ rva 0xda6e454 -----

void FUN_18da6e454(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xda6e5cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6e5cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_18231f888)();
  return;
}


// ----- block @ rva 0xda6ec11 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da6ec11(void)

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


// ----- block @ rva 0xda6f043 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6f043(void)

{
  (*_DAT_1823205d8)();
  return;
}


// ----- block @ rva 0xda6fb02 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6fb02(void)

{
  FUN_190ddfc90();
  (*_DAT_18231fdf8)();
  return;
}


// ----- block @ rva 0xda6fd22 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6fd22(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0xda6fd78 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da6fd78(void)

{
  (*_DAT_182320578)();
  return;
}


// ----- block @ rva 0xda7031f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da7031f(void)

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


// ----- block @ rva 0xda70566 -----

void FUN_18da70566(void)

{
  return;
}


// ----- block @ rva 0xda7106d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da7106d(void)

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


// ----- block @ rva 0xda710a4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18da710a4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1823204b8)();
  return;
}


// ----- block @ rva 0xda7110a -----

void FUN_18da7110a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xda7133b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018da71391 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18da7133b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xda713fe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018da71415 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18da713fe(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xda71860 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018da718d1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18da71860(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xda729d8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018da729ef */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18da729d8(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xda72fcc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018da7302e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18da72fcc(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000060;
  undefined8 uStack0000000000000068;
  
  uStack0000000000000068 = in_stack_00000060;
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xda7aee2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da7aee2(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xda8293b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18da8293b(void)

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


// ----- block @ rva 0xda89dcc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018da89de3 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18da89dcc(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xda89ff3 -----

void FUN_18da89ff3(void)

{
  return;
}

