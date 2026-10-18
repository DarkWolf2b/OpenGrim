// ===== Lsixtwo/eb; _c89bc81489898b6443a5a3cac69e0e03 ()V (handler @ image 18d712d60, runtime 6ffff5322d60) =====

void FUN_18d712d60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d712e48 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18227a9c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eb; aro (Lsixtwo/gH$th;)V (handler @ image 18d6f2650, runtime 6ffff5302650) =====

void FUN_18d6f2650(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc1f7,0x213);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d6f273e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182270000 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eb; arp ()Ljava/lang/Boolean; (handler @ image 18d70c280, runtime 6ffff531c280) =====

void FUN_18d70c280(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc1f7,0x213);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d70c341 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182278950 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eb; arq ()Ljava/lang/Boolean; (handler @ image 18d72ef50, runtime 6ffff533ef50) =====

void FUN_18d72ef50(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018d72ef70 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18227d600 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eb; arr (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d72f3a0, runtime 6ffff533f3a0) =====

undefined8 FUN_18d72f3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/eb; ars ([B)Ljava/lang/String; (handler @ image 18d72f430, runtime 6ffff533f430) =====

void FUN_18d72f430(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018d72f4d3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18227d960 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eb; art (IJ)Ljava/lang/String; (handler @ image 18d758f20, runtime 6ffff5368f20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d758f20(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = (uRam0000000183365378 ^ _UNK_182284a40) + uRam0000000183365428 + 0x2e489c75b3457763;
  uVar10 = (uRam0000000183365428 ^ _UNK_182284a48) + uRam0000000183365378 + 0x9f4ee78b42e4599f;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183365378 ^ _UNK_182284a40;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183365428 ^ _UNK_182284a48;
  uRam00000001833656a8 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183365378 + 0x9f4ee78b42e4599f) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183365428 + 0x2e489c75b3457763));
  uRam0000000183365800 =
       (uRam0000000183365800 ^ uRam00000001833656a8 ^ 0x29ed48a658b6f93c) + 0xb1067bfe75830dd9 ^
       0xe5a2c740aeb5175e;
  uRam00000001833652e0 =
       (uRam00000001833652e0 * 0xb327b985078e90d ^ uRam0000000183365800) +
       (uRam00000001833656a8 ^ 0x29ed48a658b6f93c);
  uRam0000000183365808 = uRam00000001833652e0 ^ uRam0000000183365800;
  uRam00000001833656e0 = 0xb1067bfe75830dd9;
  uVar9 = (~uRam0000000183365820 + 0x43f41016c940c8a8) *
          ((uRam0000000183365810 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183365810 & 0x84222325) * 2);
  uVar9 = (uVar9 | uRam0000000183365168) + (uVar9 & uRam0000000183365168);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam0000000183365578 =
       func_0x00018d75fe80((uVar9 | 0x43f410164d62eb82) + (uVar9 & 0x43f410164d62eb82));
  uRam0000000183365568 = uRam0000000183365568 + 0xbc0befe936bf3759 ^ 0x63b5d41add569ae6;
  uRam0000000183365328 = uRam0000000183365500 * -0x1457951a48796115;
  uRam0000000183365500 = uRam0000000183365328 ^ uRam0000000183365568;
  uRam00000001833657c8 = 0xbc0befe936bf3759;
  uVar9 = (uRam0000000183365420 ^ _UNK_182284a50) + uRam00000001833655d8 + 0x84225cda;
  uVar10 = (uRam00000001833655d8 ^ _UNK_182284a58) + uRam0000000183365420 + 0x43f41016c940c8a7;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183365420 ^ _UNK_182284a50;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833655d8 ^ _UNK_182284a58;
  uRam0000000183365530 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183365420 + 0x43f41016c940c8a7) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001833655d8 + 0x84225cda));
  uVar9 = (uRam0000000183365530 * 0x2582c2c55c7b43ee |
          (ulonglong)((longlong)(uRam0000000183365530 * 0x12c16162ae3da1f7) < 0)) ^
          0x43f41016c940c8a7;
  uRam00000001833653a8 = uRam0000000183365878 ^ uVar9 ^ 0x43f41016c94148a6;
  uRam0000000183365640 = (uRam0000000183365640 ^ uVar9) + 0x43f41016c94148a6 ^ 0x60399e1aa7f50e9e;
  uRam0000000183365898 = (uRam0000000183365898 * -0x384fcb57b09c27af ^ uRam0000000183365640) + uVar9
  ;
  uRam0000000183365658 = uRam0000000183365898 ^ uRam0000000183365640;
  uRam0000000183365198 = 0x43f41016c94148a6;
  uRam00000001833651f8 = func_0x00018d75fe80(lRam0000000183365228 + 0xebcd89a559cccf8U ^ 0x4e);
  uVar9 = uRam00000001833651f8 ^ 0xffffffffffff7fff;
  uVar10 = uVar9 >> 1 | uVar9;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar9 = ~((0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
            0x80 ^ uVar9) & 0x43f41016c94148a6;
  uRam0000000183365530 = uRam00000001833652a0 ^ uVar9 ^ 0x7fff;
  uRam0000000183365158 = (uRam0000000183365158 ^ uVar9) + 0x7fff ^ 0x6c101a0ec562aa4;
  uRam0000000183365508 = (uRam0000000183365508 * 0x475744d4eefeaed3 ^ uRam0000000183365158) + uVar9;
  uRam00000001833658d0 = uRam0000000183365508 ^ uRam0000000183365158;
  uRam00000001833651d0 = 0x7fff;
  uVar9 = (uRam0000000183365708 ^ _UNK_182284a60) + uRam0000000183365318 + 0x84222325;
  uVar10 = (uRam0000000183365318 ^ _UNK_182284a68) + uRam0000000183365708 + 0x5d85491d159a960c;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183365708 ^ _UNK_182284a60;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183365318 ^ _UNK_182284a68;
  uRam0000000183365370 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183365708 + 0x5d85491d159a960c) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183365318 + 0x84222325));
  uRam0000000183365520 = uRam0000000183365530 * -0x6c50a41efe38e54f;
  uRam0000000183365720 = uRam0000000183365720 + 0xa27ab6e2ea6569f4 ^ 0xdc0a0a54e7331412;
  uRam0000000183365530 = uRam0000000183365520 ^ uRam0000000183365720;
  uRam0000000183365140 = 0xa27ab6e2ea6569f4;
  uVar9 = (uRam00000001833652f8 ^ _UNK_182284a70) + uRam0000000183365600 + 0x84225cda;
  uVar10 = (uRam0000000183365600 ^ _UNK_182284a78) + uRam00000001833652f8 + 0x5d85491d159a960c;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833652f8 ^ _UNK_182284a70;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183365600 ^ _UNK_182284a78;
  uRam00000001833658c0 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001833652f8 + 0x5d85491d159a960c) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183365600 + 0x84225cda));
  uVar9 = (uRam00000001833658c0 & 0x7fffffffffffff80) -
          ((uRam00000001833658c0 & 0x7fffffffffffff80) >> 1 & 0x1555555555555540);
  uVar9 = (uVar9 & 0x3333333333333300) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f07) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001833658c0 & 0x7fffffffffffff80;
  uRam00000001833654e8 = uRam00000001833651c8 ^ uVar9 ^ 0x5d85491d159b160b;
  uRam00000001833653a8 = (uRam00000001833653a8 ^ uVar9) + 0x5d85491d159b160b ^ 0x725e2733eca1c70b;
  uRam00000001833654c8 = (uRam00000001833654c8 * 0x7b45ca9e15d40587 ^ uRam00000001833653a8) + uVar9;
  uRam0000000183365378 = uRam00000001833654c8 ^ uRam00000001833653a8;
  uRam0000000183365628 = 0x5d85491d159b160b;
  uRam00000001833656d8 = func_0x00018d75fe80(lRam0000000183365338 + 0xaa19c9e129585bd3U ^ 0xc0);
  uVar9 = ((uRam00000001833656d8 ^ 0x2c7fa7d66afe19cc) << 0x37 |
          (uRam00000001833656d8 ^ 0x2c7fa7d66afe19cc) >> 9) * -0x26cb770b839ba48d;
  uRam00000001833657c0 = (uRam00000001833657c0 ^ uVar9) + 0xd38058299501e634 ^ 0xbcad9b1bf97b347d;
  uRam00000001833652b0 =
       (uRam0000000183365818 * -0x5d23740991c14929 ^ uRam00000001833657c0) + uVar9 ^
       uRam00000001833657c0;
  uRam0000000183365818 = 0xd38058299501e634;
  uRam00000001833657c8 = func_0x00018d75fe80(lRam00000001833651f0 + 0x7f540cfb451fd5d6U ^ 0xf);
  uVar9 = uRam00000001833657c8 & 0xfffffffffffffff0;
  uVar10 = uVar9 >> 1 | uVar9;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar9;
  uRam00000001833658c8 = uRam00000001833656e8 ^ uVar9 ^ 0x7fff;
  uRam0000000183365320 = (uRam0000000183365320 ^ uVar9) + 0x7fff ^ 0xf61e3fd28183095a;
  uRam00000001833655f8 = (uRam00000001833655f8 * -0x4da55e829db2d6d ^ uRam0000000183365320) + uVar9;
  uRam0000000183365850 = uRam00000001833655f8 ^ uRam0000000183365320;
  uRam0000000183365498 = 0x7fff;
  uVar9 = (uRam0000000183365608 ^ _UNK_182284a80) + uRam00000001833654d8 + 0xdfafaf976ffc71ba;
  uVar10 = (uRam00000001833654d8 ^ _UNK_182284a88) + uRam0000000183365608 + 0xb1067bfe75830dd9;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183365608 ^ _UNK_182284a80;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833654d8 ^ _UNK_182284a88;
  uRam0000000183365598 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183365608 + 0xb1067bfe75830dd9) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001833654d8 + 0xdfafaf976ffc71ba));
  uVar9 = uRam0000000183365598 ^ 0xffafffffffdf5fdf;
  uVar10 = uVar9 >> 1 | uVar9;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar9;
  uRam0000000183365140 = uRam0000000183365770 ^ uVar9 ^ 0x90b62b9661616078;
  uRam00000001833651d8 = (uRam00000001833651d8 ^ uVar9) + 0x90b62b9661616078 ^ 0x83f28888f5924109;
  uRam0000000183365198 = (uRam0000000183365198 * -0x3d15fb29c1123e85 ^ uRam00000001833651d8) + uVar9
  ;
  uRam0000000183365418 = uRam0000000183365198 ^ uRam00000001833651d8;
  uRam0000000183365630 = 0x90b62b9661616078;
  uVar9 = (~uRam00000001833655b0 + 0xb1067bfe75830dda) *
          ((uRam0000000183365230 ^ 0xdfafaf976ffc71ba) +
          (uRam0000000183365230 & 0x5fafaf976ffc71ba) * 2);
  uVar9 = (uVar9 | uRam00000001833651a0) + (uVar9 & uRam00000001833651a0);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam00000001833652e8 =
       func_0x00018d75fe80((uVar9 | 0x6ea9d4691a7f7c63) + (uVar9 & 0x6ea9d4691a7f7c63));
  uRam0000000183365660 =
       (uRam0000000183365660 ^ uRam00000001833652e8) + 0x6ea9d4699e5d5f46 ^ 0xdadd62044a490c72;
  uRam0000000183365418 =
       (uRam0000000183365418 * -0x8bb85f556663bf9 ^ uRam0000000183365660) + uRam00000001833652e8;
  uRam0000000183365720 = uRam0000000183365418 ^ uRam0000000183365660;
  uRam0000000183365500 = uRam0000000183365640 ^ 0x6ea9d4699e5d5f46;
  uRam0000000183365118 = 0x6ea9d4699e5d5f46;
  uRam00000001833652d8 = func_0x00018d75fe80(uRam0000000183365660 + 0xe6ac9705e32ba2a5 ^ 0x83);
  uVar9 = (uRam00000001833652d8 ^ 0xffafffffffdf5fdf) << 6 |
          (uRam00000001833652d8 ^ 0xffafffffffdf5fdf) >> 0x3a;
  uRam00000001833652a0 = (uRam00000001833652a0 ^ uVar9) + 0x91062b9661820099 ^ 0xb702fe731ad2565e;
  uRam0000000183365608 = (uRam0000000183365608 * -0xae2cd11ceba20ad ^ uRam00000001833652a0) + uVar9;
  uRam0000000183365118 = uRam0000000183365608 ^ uRam00000001833652a0;
  uRam0000000183365578 = 0x91062b9661820099;
  uVar9 = (~uRam00000001833654d0 + 0x220c572cc3040133) *
          ((uRam0000000183365330 ^ 0x6ea9d4691a7f7c63) +
          (uRam0000000183365330 & 0x6ea9d4691a7f7c63) * 2);
  uVar9 = (uVar9 | uRam0000000183365708) + (uVar9 & uRam0000000183365708);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam0000000183365680 =
       func_0x00018d75fe80((uVar9 | 0x4ca58345d97b7d51) + (uVar9 & 0x4ca58345d97b7d51));
  uVar9 = uRam0000000183365680 ^ 0x6eadd76ddf5d5f76;
  uRam00000001833657c8 = uRam00000001833651d0 ^ uVar9 ^ 0x90b62b9661616078;
  uRam0000000183365238 = (uRam0000000183365238 ^ uVar9) + 0x90b62b9661616078 ^ 0xfd2539ce1b16315a;
  uRam00000001833658e0 = (uRam00000001833658e0 * 0x6b39a3c684812233 ^ uRam0000000183365238) + uVar9;
  uRam00000001833657e0 = uRam00000001833658e0 ^ uRam0000000183365238;
  uRam0000000183365798 = 0x90b62b9661616078;
  uVar9 = (uRam00000001833651c8 ^ _UNK_182284a90) + uRam0000000183365368 + 0x90b62b96e543435d;
  uVar10 = (uRam0000000183365368 ^ _UNK_182284a98) + uRam00000001833651c8 + 0x90b62b9661616078;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833651c8 ^ _UNK_182284a90;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183365368 ^ _UNK_182284a98;
  uRam00000001833652a0 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001833651c8 + 0x90b62b9661616078) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183365368 + 0x90b62b96e543435d));
  uVar9 = uRam00000001833652a0 - (uRam00000001833652a0 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uRam0000000183365110 =
       (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
       uRam00000001833652a0;
  uRam0000000183365628 = uRam0000000183365628 ^ uRam0000000183365110 ^ 0x319e3e92ab80352e;
  uRam00000001833657c8 =
       (uRam00000001833657c8 * 0x602e39e24b4c87 ^ uRam0000000183365628) + uRam0000000183365110;
  uRam0000000183365818 = uRam00000001833657c8 ^ uRam0000000183365628;
  lRam0000000183365358 = 0;
  uVar9 = (uRam0000000183365350 ^ _UNK_182284aa0) + uRam00000001833652b0 + 0xdfafaf976ffc71ba;
  uVar10 = (uRam00000001833652b0 ^ _UNK_182284aa8) + (uRam0000000183365350 - 1);
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183365350 ^ _UNK_182284aa0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833652b0 ^ _UNK_182284aa8;
  lRam0000000183365648 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183365350 - 1) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001833652b0 + 0xdfafaf976ffc71ba));
  uRam0000000183365278 =
       (uRam0000000183365278 ^ lRam0000000183365648 * -0x592a8417cc465a01) + 0x205050681421ad60 ^
       0xd8fecd28e5788189;
  uRam00000001833653b0 =
       (uRam00000001833653b0 * 0x77b0e66f5de49d31 ^ uRam0000000183365278) +
       lRam0000000183365648 * -0x592a8417cc465a01;
  uRam00000001833653d0 = uRam00000001833653b0 ^ uRam0000000183365278;
  uRam0000000183365688 = 0x205050681421ad60;
  uVar9 = (~uRam0000000183365300 + 0x205050681421ad61) *
          ((uRam0000000183365158 ^ 0xdfafaf976ffc71ba) +
          (uRam0000000183365158 & 0x5fafaf976ffc71ba) * 2);
  uVar9 = (uVar9 | uRam00000001833655d8) + (uVar9 & uRam00000001833655d8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam0000000183365698 =
       func_0x00018d75fe80((uVar9 | 0xffffffff7bdddcda) + (uVar9 & 0xffffffff7bdddcda));
  uVar9 = (uRam0000000183365698 ^ 0x2050506814200000) & 0xfffffffffff80000;
  uRam00000001833651e8 = uRam00000001833651e8 ^ uVar9 ^ 0x17857ef12fabc439;
  uRam0000000183365840 = (uRam0000000183365840 * -0x43bbba092f57634d ^ uRam00000001833651e8) + uVar9
  ;
  uRam0000000183365890 = uRam0000000183365840 ^ uRam00000001833651e8;
  uRam0000000183365310 = 0;
  uVar9 = ((uRam0000000183365830 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183365830 & 0x84225cda) * 2) * -lRam00000001833657f0;
  uVar9 = (uVar9 | uRam0000000183365238) + (uVar9 & uRam0000000183365238);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam00000001833658a0 =
       func_0x00018d75fe80((uVar9 | 0x84225cda) + (ulonglong)((uint)uVar9 & 0x84225cda));
  uVar9 = uRam00000001833658a0 & 0xffffffffffffe000;
  uRam0000000183365500 = uRam0000000183365780 ^ uVar9 ^ 0x7fff;
  uRam0000000183365570 = (uRam0000000183365570 ^ uVar9) + 0x7fff ^ 0x73b82c961da9cf11;
  uRam00000001833653e8 = (uRam00000001833653e8 * -0x1c234444fcb434e3 ^ uRam0000000183365570) + uVar9
  ;
  uRam00000001833658f8 = uRam00000001833653e8 ^ uRam0000000183365570;
  uRam0000000183365510 = 0x7fff;
  uRam0000000183365598 = func_0x00018d75fe80(uRam00000001833652a0 + 0x1cff8422ffe1ff ^ 0x6b);
  uRam0000000183365108 = uRam0000000183365108 ^ uRam0000000183365598 ^ 0x6273a1fa71c4ba32;
  uRam0000000183365368 =
       (uRam0000000183365368 * 0x107b08f08830ac15 ^ uRam0000000183365108) + uRam0000000183365598;
  uRam0000000183365328 = uRam0000000183365368 ^ uRam0000000183365108;
  uRam00000001833652f0 = 0;
  uVar9 = ((uRam0000000183365718 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183365718 & 0x84225cda) * 2) * -uRam0000000183365430;
  uVar9 = (uVar9 | uRam0000000183365578) + (uVar9 & uRam0000000183365578);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam0000000183365670 =
       func_0x00018d75fe80((uVar9 | 0x84225cda) + (ulonglong)((uint)uVar9 & 0x84225cda));
  auVar8 = _UNK_1800170c0;
  uVar9 = uRam0000000183365670 & 0xffffffffff800000;
  uRam0000000183365188 = uRam0000000183365698 ^ uVar9 ^ 0x7fff;
  uRam0000000183365128 = (uRam0000000183365128 ^ uVar9) + 0x7fff ^ 0xe384ab018a2db3a;
  uRam0000000183365660 = (uRam0000000183365660 * -0x50fae72a981818eb ^ uRam0000000183365128) + uVar9
  ;
  uRam0000000183365190 = uRam0000000183365660 ^ uRam0000000183365128;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183365528 = 0x7fff;
  auVar7 = pshufb(auVar6 ^ _UNK_182284ab0,_UNK_1800170c0);
  uVar10 = auVar7._8_8_ + auVar7._0_8_;
  uVar9 = uVar10 + uRam0000000183365890;
  if (auVar7._4_4_ < 0) {
    uVar9 = uRam0000000183365168 ^ uVar10;
  }
  uRam00000001833652b0 = func_0x00018d75fe80(SUB161(auVar6 ^ _UNK_182284ab0,5) ^ uVar9);
  uVar2 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar2;
  uRam00000001833652e8 =
       (uRam00000001833652e8 ^ uRam00000001833652b0 ^ 0x7fff) + uVar10 ^ 0xba0bf90cdbe903a2;
  uRam0000000183365110 =
       (uRam0000000183365110 * 0x512c3b5aedf7e655 ^ uRam00000001833652e8) +
       (uRam00000001833652b0 ^ 0x7fff);
  uRam0000000183365880 = uRam0000000183365110 ^ uRam00000001833652e8;
  uVar3 = (ulonglong)param_3;
  uVar5 = uVar10 ^ 0x84222325;
  uVar9 = ((uRam00000001833654b8 ^ uVar5) +
          (ulonglong)((uint)uRam00000001833654b8 & (uint)uVar5) * 2) *
          (uVar3 - uRam0000000183365720);
  uVar9 = (uVar9 | uRam0000000183365490) + (uVar9 & uRam0000000183365490);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam00000001833657d0 = uVar10;
  uRam0000000183365470 =
       func_0x00018d75fe80((uVar5 ^ uVar3 | uVar9) +
                           (ulonglong)((uint)(uVar5 ^ uVar3) & (uint)uVar9));
  uVar3 = (uVar10 + uVar3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183365508 =
       (uRam0000000183365508 ^ uRam0000000183365470 & 0xffffffffc0000000) + uVar3 ^
       0x1e5db7de255920d9;
  uRam0000000183365770 =
       (uRam0000000183365770 * -0x9f1851df4fea105 ^ uRam0000000183365508) +
       (uRam0000000183365470 & 0xffffffffc0000000);
  uRam0000000183365390 = uRam0000000183365770 ^ uRam0000000183365508;
  uVar5 = uVar3 & 0xffffffff;
  uRam0000000183365278 = uVar5;
  uRam00000001833652f0 = func_0x00018d75fe80(lRam00000001833656d0 + 0x55004f60ffb6ffU ^ 0x4b);
  uVar9 = (ulonglong)(~(uint)uRam00000001833652f0 & 0x4ac095a6);
  uRam00000001833654a0 = (uRam00000001833654a0 ^ uVar9) + 0xdef5dfae ^ 0xfb385f169addfc85;
  uRam0000000183365708 = (uRam0000000183365708 * -0x5a4e3eba190f3c5b ^ uRam00000001833654a0) + uVar9
  ;
  uRam00000001833658f8 = uRam0000000183365708 ^ uRam00000001833654a0;
  uRam00000001833658e0 = 0xdef5dfae;
  uRam00000001833657c0 = func_0x00018d75fe80(uRam0000000183365248 ^ 0xff86ffbafaffdf5c);
  uVar9 = (uRam00000001833657c0 & 0x7fffffffffffffff) * 0xebf15f7f14e579b ^ 0xd113deb5;
  uRam0000000183365118 = (uRam0000000183365118 ^ uVar9) + 0xc902a41e ^ 0x15748439f34db25;
  uRam0000000183365580 = (uRam0000000183365580 * 0x7ed6a1b9f9507823 ^ uRam0000000183365118) + uVar9;
  uRam00000001833658e0 = uRam0000000183365580 ^ uRam0000000183365118;
  uRam0000000183365758 = 0xc902a41e;
  uVar9 = (~uRam00000001833654d0 + 0x794784e5) *
          ((uRam0000000183365580 ^ 0x8422214e) +
          (ulonglong)((uint)uRam0000000183365580 & 0x8422214e) * 2);
  uVar9 = (uVar9 | uRam0000000183365278) + (uVar9 & uRam0000000183365278);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam0000000183365280 =
       func_0x00018d75fe80((uVar9 | 0xfd65a5aa) + (ulonglong)((uint)uVar9 & 0xfd65a5aa));
  uVar9 = (ulonglong)(~(uint)uRam0000000183365280 & 0x26b);
  uRam0000000183365478 = uRam0000000183365408 ^ uVar9 ^ 0x7947874f;
  uRam0000000183365268 = (uRam0000000183365268 ^ uVar9) + 0x7947874f ^ 0x3b5e4889707473f;
  uRam0000000183365688 = (uRam0000000183365688 * -0xa76317179ecea69 ^ uRam0000000183365268) + uVar9;
  uRam0000000183365170 = uRam0000000183365688 ^ uRam0000000183365268;
  uRam00000001833654f8 = 0x7947874f;
  uVar9 = (~uRam00000001833655f0 + 0x86b87b1d) *
          ((uRam0000000183365120 ^ 0xfd65a46a) +
          (ulonglong)((uint)uRam0000000183365120 & 0xfd65a46a) * 2);
  uVar9 = (uVar9 | uRam00000001833655d0) + (uVar9 & uRam00000001833655d0);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam0000000183365708 =
       func_0x00018d75fe80((uVar9 | 0x7bdddf76) + (ulonglong)((uint)uVar9 & 0x7bdddf76));
  uRam0000000183365650 = uRam0000000183365270 ^ uRam0000000183365828 ^ 0x10000026b;
  uRam00000001833655d0 =
       (uRam00000001833655d0 ^ uRam0000000183365828) + 0x10000026b ^ 0xcfc25234028308d3;
  uRam00000001833655c8 =
       (uRam00000001833655c8 * 0x14ba39effc57f031 ^ uRam00000001833655d0) + uRam0000000183365828;
  uRam0000000183365210 = uRam00000001833655c8 ^ uRam00000001833655d0;
  uRam00000001833655f0 = 0x26b;
  uVar9 = (~uRam0000000183365468 + 0xb8592c35) *
          ((uRam0000000183365828 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183365828 & 0x84222325) * 2);
  uVar9 = (uVar9 | uRam00000001833654b8) + (uVar9 & uRam00000001833654b8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam0000000183365318 =
       func_0x00018d75fe80((uVar9 | 0x3c7b0f11) + (ulonglong)((uint)uVar9 & 0x3c7b0f11));
  uVar9 = uRam0000000183365318 << 0x2c | uRam0000000183365318 >> 0x14;
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar9;
  uRam00000001833653d0 = (uRam00000001833653d0 ^ uVar9) - 0xb8592c34 ^ 0xae487444f20d8a4d;
  uRam0000000183365740 = (uRam0000000183365740 * 0x2e4c59c865448025 ^ uRam00000001833653d0) + uVar9;
  uRam00000001833655c8 = uRam0000000183365740 ^ uRam00000001833653d0;
  uRam00000001833658c8 = 0x47a6d3cc;
  uVar9 = (~uRam0000000183365318 + 0x6259ecbb) *
          ((uRam0000000183365560 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183365560 & 0x84222325) * 2);
  uVar9 = (uVar9 | uRam0000000183365678) + (uVar9 & uRam0000000183365678);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  lRam0000000183365358 =
       func_0x00018d75fe80((uVar9 | 0xe67bcf9f) + (ulonglong)((uint)uVar9 & 0xe67bcf9f));
  uRam0000000183365538 =
       (uRam0000000183365538 ^ lRam0000000183365358 * -0x44533462b8946323) - 0x6259ecba ^
       0x483b652cd01e0f3b;
  uRam0000000183365190 =
       (uRam0000000183365190 * 0x558513c923ff44e5 ^ uRam0000000183365538) +
       lRam0000000183365358 * -0x44533462b8946323;
  uRam00000001833654d0 = uRam0000000183365190 ^ uRam0000000183365538;
  uRam0000000183365680 = 0x9da61346;
  uVar9 = (uRam0000000183365400 ^ _UNK_182284ac0) + uRam0000000183365100 + 0x8422214e;
  uVar10 = (uRam0000000183365100 ^ _UNK_182284ac8) + uRam0000000183365400 + 0x6259ecba;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183365400 ^ _UNK_182284ac0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183365100 ^ _UNK_182284ac8;
  uRam0000000183365280 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183365400 + 0x6259ecba) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183365100 + 0x8422214e));
  uVar9 = uRam0000000183365280 ^ 0x6259eed1;
  uRam0000000183365348 = uRam0000000183365250 ^ uVar9 ^ 0x6259ef25;
  uRam0000000183365738 = (uRam0000000183365738 ^ uVar9) + 0x6259ef25 ^ 0xf240fe84d034ecd8;
  uRam0000000183365518 = (uRam0000000183365518 * -0x1f407498a1bdd489 ^ uRam0000000183365738) + uVar9
  ;
  uRam00000001833651c0 = uRam0000000183365518 ^ uRam0000000183365738;
  uRam00000001833655c0 = 0x6259ef25;
  uVar9 = (~uRam00000001833655c8 + 0xc902a41f) *
          ((uRam00000001833656a8 ^ 0x5ad7fc8b) +
          (ulonglong)((uint)uRam00000001833656a8 & 0x5ad7fc8b) * 2);
  uVar9 = (uVar9 | uRam0000000183365530) + (uVar9 & uRam0000000183365530);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam0000000183365168 =
       func_0x00018d75fe80((uVar9 | 0x93d55895) + (ulonglong)((uint)uVar9 & 0x93d55895));
  uRam00000001833657c0 =
       (uRam00000001833657c0 ^ uRam0000000183365168 ^ 0xdef5dfae) + 0x17f77bb0 ^ 0xc18375227a6ec910;
  uRam0000000183365420 =
       (uRam0000000183365420 * 0x7eb0e5b2a4e712f3 ^ uRam00000001833657c0) +
       (uRam0000000183365168 ^ 0xdef5dfae);
  uRam00000001833653f0 = uRam0000000183365420 ^ uRam00000001833657c0;
  uRam0000000183365478 = 0x17f77bb0;
  uRam0000000183365120 = func_0x00018d75fe80(0x1cff8433089a33);
  uRam0000000183365640 =
       (uRam0000000183365120 << 0x28 | uRam0000000183365120 >> 0x18) << 0x11 |
       (uRam0000000183365120 & 0xffffff) >> 7;
  uRam0000000183365870 = uRam0000000183365870 ^ uRam0000000183365640 ^ 0x85b27bfe47cd401f;
  uRam0000000183365820 =
       (uRam0000000183365820 * 0x619ee9767153b365 ^ uRam0000000183365870) + uRam0000000183365640;
  uRam00000001833658e8 = uRam0000000183365820 ^ uRam0000000183365870;
  uRam0000000183365718 = 0;
  uVar9 = (uRam0000000183365340 ^ 0x8422214e) + uRam0000000183365610 + 0x8422214e;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183365340 ^ 0x8422214e;
  uVar10 = ((uRam0000000183365610 + uRam0000000183365340) * 0x2000 |
           uRam0000000183365610 + uRam0000000183365340 >> 0x33) ^ uRam0000000183365610;
  uRam00000001833654a8 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) - uRam0000000183365340 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183365610 + 0x8422214e));
  uVar9 = (uRam00000001833654a8 ^ 0x268) & 0xfffffffffffffffc;
  uRam0000000183365818 = uRam0000000183365828 ^ uVar9 ^ 0x26b;
  uRam0000000183365120 = (uRam0000000183365120 ^ uVar9) + 0x26b ^ 0x5ce2cb72f3ad928;
  uRam0000000183365620 = (uRam0000000183365620 * -0x731b629ceed71bf7 ^ uRam0000000183365120) + uVar9
  ;
  uRam00000001833656b8 = uRam0000000183365620 ^ uRam0000000183365120;
  uRam00000001833658a8 = 0x26b;
  uVar9 = (uRam0000000183365660 ^ _UNK_182284ad0) + uRam00000001833651a0 + 0x5ad7fc8b;
  uVar10 = (uRam00000001833651a0 ^ _UNK_182284ad8) + uRam0000000183365660 + 0xffffffff;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183365660 ^ _UNK_182284ad0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833651a0 ^ _UNK_182284ad8;
  uRam00000001833654f8 =
       func_0x00018d75fe80((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183365660 + 0xffffffff) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001833651a0 + 0x5ad7fc8b));
  uVar9 = uRam00000001833654f8 - (uRam00000001833654f8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001833654f8;
  uRam0000000183365768 = (uRam0000000183365768 ^ uVar9) + 0x210a2051 ^ 0x3839632fa403f70b;
  uRam0000000183365868 = (uRam0000000183365868 * 0x6eafa7d4e7721259 ^ uRam0000000183365768) + uVar9;
  uRam0000000183365430 = uRam0000000183365868 ^ uRam0000000183365768;
  uRam00000001833651f8 = 0x210a2051;
  uRam00000001833657a8 = func_0x00018d75fe80(lRam0000000183365548 + 0x1f007c49ffddffU ^ 0x9a);
  uVar9 = uRam00000001833657a8 & 0x7fffffffffffffc0;
  uRam0000000183365800 = uRam00000001833656b8 ^ uVar9 ^ 0x26b;
  uRam0000000183365410 = (uRam0000000183365410 ^ uVar9) + 0x26b ^ 0xf287aac8259e7095;
  uRam00000001833654f8 = (uRam00000001833654f8 * -0x56a0200e6d785e9f ^ uRam0000000183365410) + uVar9
  ;
  uRam0000000183365180 = uRam00000001833654f8 ^ uRam0000000183365410;
  uRam00000001833656b8 = 0x26b;
  uRam00000001833652b8 = func_0x00018d75fe80(uRam00000001833654b0 + 0x1cff83e50021ff ^ 0x3b);
  uRam0000000183365360 =
       uRam0000000183365360 ^ uRam00000001833652b8 ^ 0x4ac095a6 ^ 0x31896d5b52550c05;
  uRam00000001833651c8 =
       (uRam00000001833651c8 * 0x5ab432c3225c7d39 ^ uRam0000000183365360) +
       (uRam00000001833652b8 ^ 0x4ac095a6);
  uRam0000000183365848 = uRam00000001833651c8 ^ uRam0000000183365360;
  uRam00000001833652f8 = 0;
  uRam0000000183365870 = func_0x00018d75fe80(uRam00000001833656b8 + 0x21008445ffddff ^ 0x85);
  uVar9 = uRam0000000183365870 >> 1 | uRam0000000183365870;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183365870;
  uVar9 = (uVar9 & 0xffffff) << 0x14 | uVar9 >> 0x2c;
  uRam00000001833656b8 = uRam0000000183365630 ^ uVar9 ^ 0x26b;
  uRam0000000183365290 = (uRam0000000183365290 ^ uVar9) + 0x26b ^ 0x3c38e865b0b11a92;
  uRam0000000183365828 = (uRam0000000183365828 * -0x5a3b1d2e6e304e97 ^ uRam0000000183365290) + uVar9
  ;
  uRam00000001833657a0 = uRam0000000183365828 ^ uRam0000000183365290;
  auVar7._8_8_ = _UNK_182284ae8;
  auVar7._0_8_ = uVar5 ^ 0x84222325;
  uRam0000000183365310 = 0x26b;
  auVar8 = pshufb(auVar7 ^ _UNK_182284af0,auVar8);
  uVar10 = auVar8._8_8_ + auVar8._0_8_;
  uVar9 = uVar10 + uRam0000000183365198;
  if (auVar8._4_4_ < 0) {
    uVar9 = uRam0000000183365730 ^ uVar10;
  }
  uRam00000001833654b0 = func_0x00018d75fe80(SUB161(auVar7 ^ _UNK_182284af0,5) ^ uVar9);
  uVar9 = uRam00000001833654b0 >> 1 | uRam00000001833654b0;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = ((0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001833654b0) * 0x52cd97a32b2df6af;
  lVar4 = uVar5 - ((uint)uVar3 & 0x26b) * 2;
  uRam0000000183365748 = (uRam0000000183365748 ^ uVar9) + lVar4 + 0x26b ^ 0xa70dec485eb9b9e9;
  uRam0000000183365800 = (uRam0000000183365800 * -0x5aa8ee5b02eeaa13 ^ uRam0000000183365748) + uVar9
  ;
  uRam0000000183365678 = uRam0000000183365800 ^ uRam0000000183365748;
  uRam00000001833657b0 = lVar4 + 0x26bU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc1f7,0x213);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d75b3be did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822830b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eb; aru (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18d75ff10, runtime 6ffff536ff10) =====

void FUN_18d75ff10(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d75ff4c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182284c80 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eb; arv (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d760e00, runtime 6ffff5370e00) =====

void FUN_18d760e00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d760e7d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822851c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eb; arw (IJ)I (handler @ image 18d7638c0, runtime 6ffff53738c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7638c0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (uRam0000000183365aa0 ^ _UNK_182287f20) + uRam0000000183365a48 + 0x84222325;
  uVar4 = (uRam0000000183365a48 ^ _UNK_182287f28) + uRam0000000183365aa0 + 0xa8244d6d3a523b10;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365aa0 ^ _UNK_182287f20;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365a48 ^ _UNK_182287f28;
  uRam0000000183365c78 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183365aa0 + 0xa8244d6d3a523b10) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365a48 + 0x84222325));
  uVar3 = (uRam0000000183365c78 ^ 0xa8244d6d3a523b10) >> 1 |
          uRam0000000183365c78 ^ 0xa8244d6d3a523b10;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam0000000183365c78 ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40;
  uRam0000000183365e60 = (uRam0000000183365e60 ^ uVar3) + 0x57dbb292c5adc4f0 ^ 0xfe6f187f91e81fc0;
  uRam00000001833659d0 = (uRam00000001833659d0 * -0x4d45f17cad6a2e7 ^ uRam0000000183365e60) + uVar3;
  uRam0000000183365c98 = uRam00000001833659d0 ^ uRam0000000183365e60;
  uRam0000000183365a48 = 0x57dbb292c5adc4f0;
  uVar3 = (uRam0000000183365ad8 ^ _UNK_182287f30) + uRam0000000183365bb8 + 0x84225cda;
  uVar4 = (uRam0000000183365bb8 ^ _UNK_182287f38) + uRam0000000183365ad8 + 0xa8244d6d3a523b10;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365ad8 ^ _UNK_182287f30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365bb8 ^ _UNK_182287f38;
  uRam0000000183365e30 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183365ad8 + 0xa8244d6d3a523b10) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365bb8 + 0x84225cda));
  uVar3 = (ulonglong)((uint)~((int)uRam0000000183365e30 * 2) >> 1 & 0x7fff);
  uRam0000000183365e10 = uRam0000000183365a50 ^ uVar3 ^ 0xa8244d6d3a52bb0f;
  uRam0000000183365930 = (uRam0000000183365930 ^ uVar3) + 0xa8244d6d3a52bb0f ^ 0x7cd5c945b750eac8;
  uRam0000000183365be8 = (uRam0000000183365be8 * 0x3e4f9a23a184ebcb ^ uRam0000000183365930) + uVar3;
  uRam0000000183365ac0 = uRam0000000183365be8 ^ uRam0000000183365930;
  uRam0000000183365948 = 0xa8244d6d3a52bb0f;
  uVar3 = (uRam0000000183365ab8 ^ _UNK_182287f40) + uRam00000001833659f0 + 0xa8244d6dbe70982a;
  uVar4 = (uRam00000001833659f0 ^ _UNK_182287f48) + uRam0000000183365ab8 + 0x57dbb292c5adc4f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365ab8 ^ _UNK_182287f40;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833659f0 ^ _UNK_182287f48;
  uVar3 = func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) -
                              (uRam0000000183365ab8 + 0x57dbb292c5adc4f0) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) -
                              (uRam00000001833659f0 + 0xa8244d6dbe70982a));
  uVar3 = uVar3 ^ 0x1e322a1bc2bb611f;
  uRam00000001833659b0 = uRam0000000183365ba0 ^ uVar3 ^ 0x7fff;
  uRam0000000183365af8 = (uRam0000000183365af8 ^ uVar3) + 0x7fff ^ 0x3110a5bcd560664b;
  uRam0000000183365e58 = (uRam0000000183365e58 * 0x2708ab53ec9a7f0d ^ uRam0000000183365af8) + uVar3;
  uRam0000000183365e88 = uRam0000000183365e58 ^ uRam0000000183365af8;
  uRam0000000183365e78 = 0x7fff;
  uRam0000000183365b60 = func_0x00018d76eda0(uRam0000000183365cb8 ^ 0x5a7d583c39ec61ef);
  uVar3 = uRam0000000183365b60 & 0x7fffffffffffffff;
  uRam0000000183365a48 = uRam00000001833659e8 ^ uVar3 ^ 0x5cdb1ca548415a0f;
  uRam0000000183365b08 = (uRam0000000183365b08 ^ uVar3) + 0x5cdb1ca548415a0f ^ 0x6f72ee2582039280;
  uRam0000000183365a18 = (uRam0000000183365a18 * -0x55b4677a8a7a6ef ^ uRam0000000183365b08) + uVar3;
  uRam0000000183365e30 = uRam0000000183365a18 ^ uRam0000000183365b08;
  uRam0000000183365e00 = 0x5cdb1ca548415a0f;
  uRam0000000183365d10 = func_0x00018d76eda0(uRam0000000183365d80 + 0x94a32e975955db04 ^ 0x2a);
  uVar3 = uRam0000000183365c30 - (uRam0000000183365c30 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183365c30;
  uRam0000000183365b78 = uRam0000000183365e08 ^ uVar3 ^ 0x7fff;
  uRam0000000183365e28 = (uRam0000000183365e28 ^ uVar3) + 0x7fff ^ 0xaa93a9ae8c6dedff;
  uRam0000000183365938 = (uRam0000000183365938 * 0x2b42da51068e63f1 ^ uRam0000000183365e28) + uVar3;
  uRam0000000183365c60 = uRam0000000183365938 ^ uRam0000000183365e28;
  uRam0000000183365c00 = 0x7fff;
  uRam0000000183365980 = func_0x00018d76eda0(uRam0000000183365e60 ^ 0xfa97727c33bf174e);
  uRam0000000183365d30 =
       (uRam0000000183365d30 ^ uRam0000000183365980 & 0xffffffff8000) + 0x908d430a000ab4e9 ^
       0x38217a28128e0ce7;
  uRam0000000183365ee0 =
       (uRam0000000183365ee0 * -0x787036d5635c227b ^ uRam0000000183365d30) +
       (uRam0000000183365980 & 0xffffffff8000);
  uRam0000000183365d90 = uRam0000000183365ee0 ^ uRam0000000183365d30;
  uRam0000000183365d40 = 0x908d430a000ab4e9;
  uVar3 = (uRam0000000183365a78 ^ _UNK_182287f50) + uRam0000000183365ea8 + 0xfa3aff9e5e0d6898;
  uVar4 = (uRam0000000183365ea8 ^ _UNK_182287f58) + uRam0000000183365a78 + 0x6ab7bc94da25ff54;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365a78 ^ _UNK_182287f50;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365ea8 ^ _UNK_182287f58;
  uRam0000000183365ac8 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183365a78 + 0x6ab7bc94da25ff54) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183365ea8 + 0xfa3aff9e5e0d6898));
  uVar3 = (uRam0000000183365ac8 ^ 0xfabfff9eda2ffffd) << 0x32 |
          (uRam0000000183365ac8 ^ 0xfabfff9eda2ffffd) >> 0xe;
  uRam0000000183365b90 = (uRam0000000183365b90 ^ uVar3) + 0x6a32bc94da254b14 ^ 0x62d7b4c2cba82416;
  uRam0000000183365910 = (uRam0000000183365910 * -0x71bb551864c032cb ^ uRam0000000183365b90) + uVar3
  ;
  uRam0000000183365ad0 = uRam0000000183365910 ^ uRam0000000183365b90;
  uRam0000000183365928 = 0x6a32bc94da254b14;
  uVar3 = (uRam0000000183365908 ^ _UNK_182287f60) + uRam0000000183365ae0 + 0x908d430a842897cc;
  uVar4 = (uRam0000000183365ae0 ^ _UNK_182287f68) + uRam0000000183365908 + 0xd4657929b44a9628;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365908 ^ _UNK_182287f60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365ae0 ^ _UNK_182287f68;
  uRam0000000183365cb8 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183365908 + 0xd4657929b44a9628) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183365ae0 + 0x908d430a842897cc));
  uVar3 = uRam0000000183365cb8 & 0x7fffffffffffffff;
  uRam0000000183365ea8 = uRam0000000183365bc8 ^ uVar3 ^ 0x64f2bc33b4554b11;
  uRam0000000183365e60 = (uRam0000000183365e60 ^ uVar3) + 0x64f2bc33b4554b11 ^ 0x8396bd841bf64a32;
  uRam0000000183365a48 = (uRam0000000183365a48 * -0x12697f1c398cdc57 ^ uRam0000000183365e60) + uVar3
  ;
  uRam0000000183365c68 = uRam0000000183365a48 ^ uRam0000000183365e60;
  uRam0000000183365df8 = 0x64f2bc33b4554b11;
  uVar3 = func_0x00018d76eda0(lRam0000000183365d78 + 0xffe2ff7be4ffddffU ^ 0x46);
  uRam0000000183365b38 = (uVar3 ^ 0x2492103320000000) & 0x64f2bc33b0000000 ^ 0x64f2bc33b4554b11;
  uRam0000000183365c10 = uRam0000000183365c10 ^ uRam0000000183365b38 ^ 0x1a2473937f2b9925;
  uRam00000001833659b0 =
       (uRam00000001833659b0 * 0x78a238c97980f88b ^ uRam0000000183365c10) + uRam0000000183365b38;
  uRam0000000183365e00 = uRam00000001833659b0 ^ uRam0000000183365c10;
  uRam0000000183365e68 = 0;
  uVar3 = (uRam0000000183365b80 ^ 0x84225cda) + uRam0000000183365e70 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365b80 ^ 0x84225cda;
  uVar4 = ((uRam0000000183365e70 + uRam0000000183365b80) * 0x2000 |
          uRam0000000183365e70 + uRam0000000183365b80 >> 0x33) ^ uRam0000000183365e70;
  uRam0000000183365c00 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183365b80 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365e70 + 0x84225cda));
  uVar3 = ((uRam0000000183365c00 ^ 0x7fff) & 0x7fffffffffffff) * 0x20;
  uRam0000000183365b40 = uRam0000000183365ef0 ^ uVar3 ^ 0x7fff;
  uRam0000000183365ce8 = (uRam0000000183365ce8 ^ uVar3) + 0x7fff ^ 0xa4886e583c18150c;
  uRam0000000183365998 = (uRam0000000183365998 * 0x654fbfbd8c488255 ^ uRam0000000183365ce8) + uVar3;
  uRam0000000183365b60 = uRam0000000183365998 ^ uRam0000000183365ce8;
  uRam0000000183365e30 = 0x7fff;
  uVar3 = (uRam0000000183365cb0 ^ _UNK_182287f70) + uRam0000000183365bb0 + 0xfa3aff9e5e0d6898;
  uVar4 = (uRam0000000183365bb0 ^ _UNK_182287f78) + uRam0000000183365cb0 + 0x5c5006125d0b442;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365cb0 ^ _UNK_182287f70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365bb0 ^ _UNK_182287f78;
  uRam0000000183365c38 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183365cb0 + 0x5c5006125d0b442) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183365bb0 + 0xfa3aff9e5e0d6898));
  uRam0000000183365e60 =
       uRam0000000183365e60 ^ uRam0000000183365c38 ^ 0x5c5006125d0b442 ^ 0x3f0be73498b8de75;
  uRam0000000183365da0 =
       (uRam0000000183365da0 * -0x27d8d92214101705 ^ uRam0000000183365e60) +
       (uRam0000000183365c38 ^ 0x5c5006125d0b442);
  uRam0000000183365c88 = uRam0000000183365da0 ^ uRam0000000183365e60;
  uRam0000000183365af0 = 0;
  uVar3 = (uRam0000000183365cb8 ^ 0x84225cda) + uRam0000000183365de0 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365cb8 ^ 0x84225cda;
  uVar4 = ((uRam0000000183365de0 + uRam0000000183365cb8) * 0x2000 |
          uRam0000000183365de0 + uRam0000000183365cb8 >> 0x33) ^ uRam0000000183365de0;
  uRam0000000183365c98 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183365cb8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365de0 + 0x84225cda));
  uVar3 = uRam0000000183365c98 & 0x7fffffffffffffff;
  uRam0000000183365d00 = uRam0000000183365a90 ^ uVar3 ^ 0x7fff;
  uRam00000001833659d8 = (uRam00000001833659d8 ^ uVar3) + 0x7fff ^ 0x134c1da5880435cf;
  uRam0000000183365c10 = (uRam0000000183365c10 * 0x7e5c3066f1ea6fc9 ^ uRam00000001833659d8) + uVar3;
  uRam00000001833659d8 = uRam0000000183365c10 ^ uRam00000001833659d8;
  uRam0000000183365e20 = 0x7fff;
  uRam0000000183365a00 = func_0x00018d76eda0(uRam0000000183365900 ^ 0x34007c46001d80);
  uVar3 = uRam0000000183365a00 >> 1 | uRam0000000183365a00;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~((uint)uRam0000000183365a00 ^
            (0x40 - (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 2) & 0x7fff) ^ 0x7fff;
  uRam0000000183365980 = uRam0000000183365c88 ^ uVar3 ^ 0x7fff;
  uRam0000000183365aa0 = (uRam0000000183365aa0 ^ uVar3) + 0x7fff ^ 0xd72d6c0084f95e64;
  uRam0000000183365a30 = (uRam0000000183365a30 * -0x10ac04bdf25ff88d ^ uRam0000000183365aa0) + uVar3
  ;
  uRam0000000183365c88 = uRam0000000183365a30 ^ uRam0000000183365aa0;
  uRam0000000183365af8 = 0x7fff;
  uVar3 = param_4 ^ 0x84222325 ^ uRam0000000183365cc0;
  lVar2 = (param_4 ^ 0x84222325) + uRam0000000183365e28;
  uVar4 = uVar3 + lVar2;
  uVar5 = (uRam0000000183365e28 ^ 0x7fff) + uRam0000000183365cc0 + 0x7fff;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183365e28 ^ 0x7fff;
  uRam0000000183365ae0 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183365cc0 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar3 = (param_4 * 0x7fff ^ uRam0000000183365ae0) & 0x7ffffffffff;
  uRam0000000183365d88 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam0000000183365a00 = (uRam0000000183365a00 ^ uVar3) + uRam0000000183365d88 ^ 0x32cc4cc5b5a0c42e;
  uRam0000000183365928 = (uRam0000000183365928 * 0x1222cb0a4d298f27 ^ uRam0000000183365a00) + uVar3;
  uRam0000000183365bf8 = uRam0000000183365928 ^ uRam0000000183365a00;
  uVar3 = (~uRam0000000183365978 + 0xb55dcfa) *
          ((uRam0000000183365e50 ^ 0x967dddcf) +
          (ulonglong)((uint)uRam0000000183365e50 & 0x967dddcf) * 2);
  uVar3 = (uVar3 | uRam0000000183365ee8) + (uVar3 & uRam0000000183365ee8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183365b10 =
       func_0x00018d76eda0((uVar3 | 0x9d280136) + (ulonglong)((uint)uVar3 & 0x9d280136));
  uVar3 = uRam0000000183365b10 << 0x25 | uRam0000000183365b10 >> 0x1b;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3) & 0x1ffffffffffffff;
  uRam0000000183365c20 = (uRam0000000183365c20 ^ uVar3) + 0x190a2213 ^ 0xfd6a4bdbee0e3f34;
  uRam0000000183365cd0 = (uRam0000000183365cd0 * -0x4a792d7828589ead ^ uRam0000000183365c20) + uVar3
  ;
  uRam0000000183365bd0 = uRam0000000183365cd0 ^ uRam0000000183365c20;
  uRam0000000183365bc0 = 0x190a2213;
  uVar3 = (uRam0000000183365cc0 ^ _UNK_182287f80) + uRam0000000183365948 + 0x84222325;
  uVar4 = (uRam0000000183365948 ^ _UNK_182287f88) + uRam0000000183365cc0 + 0x51733000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365cc0 ^ _UNK_182287f80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365948 ^ _UNK_182287f88;
  uRam0000000183365b08 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183365cc0 + 0x51733000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365948 + 0x84222325));
  uRam0000000183365d70 =
       (uRam0000000183365d70 ^ uRam0000000183365b08 ^ 0x51733000) - 0x51733000 ^ 0xd9d329fb66fbf967;
  uRam0000000183365998 =
       (uRam0000000183365998 * -0x2af8d0cedac7c93b ^ uRam0000000183365d70) +
       (uRam0000000183365b08 ^ 0x51733000);
  uRam0000000183365a48 = uRam0000000183365998 ^ uRam0000000183365d70;
  uRam0000000183365a78 = 0xae8cd000;
  uVar3 = (uRam0000000183365b48 ^ _UNK_182287f90) + uRam0000000183365dd8 + 0x84223a0f;
  uVar4 = (uRam0000000183365dd8 ^ _UNK_182287f98) + uRam0000000183365b48 + 0x51733000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365b48 ^ _UNK_182287f90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365dd8 ^ _UNK_182287f98;
  uRam0000000183365c28 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183365b48 + 0x51733000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365dd8 + 0x84223a0f));
  uVar4 = uRam0000000183365c28 ^ 0x8019c95f92a;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4;
  uRam0000000183365da8 = uRam0000000183365b68 ^ uVar4 ^ 0x5173492a;
  uRam0000000183365960 = (uRam0000000183365960 ^ uVar4) + 0x5173492a ^ 0x1047e45207a872e3;
  uRam0000000183365e80 = (uRam0000000183365e80 * 0x5e00327a88781913 ^ uRam0000000183365960) + uVar4;
  uRam0000000183365d88 = uRam0000000183365e80 ^ uRam0000000183365960;
  uRam0000000183365c50 = 0x5173492a;
  uVar3 = (uRam00000001833659c0 ^ _UNK_182287fa0) + uRam0000000183365c88 + 0xd5516a0f;
  uVar4 = (uRam0000000183365c88 ^ _UNK_182287fa8) + uRam00000001833659c0 + 0xae8cd000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833659c0 ^ _UNK_182287fa0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365c88 ^ _UNK_182287fa8;
  uRam0000000183365c80 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833659c0 + 0xae8cd000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365c88 + 0xd5516a0f));
  uVar3 = uRam0000000183365c80 - (uRam0000000183365c80 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam0000000183365c80) & 0x7fffffffffffffff;
  uRam0000000183365b78 = uRam00000001833659a0 ^ uVar3 ^ 0x10000192a;
  uRam0000000183365a10 = (uRam0000000183365a10 ^ uVar3) + 0x10000192a ^ 0xbef7f61b8047c387;
  uRam0000000183365b20 = (uRam0000000183365b20 * 0x4e450eb27ff31ae9 ^ uRam0000000183365a10) + uVar3;
  uRam00000001833659d8 = uRam0000000183365b20 ^ uRam0000000183365a10;
  uRam0000000183365b60 = 0x192a;
  uVar3 = (uRam0000000183365938 ^ _UNK_182287fb0) + uRam0000000183365d80 + 0x84222325;
  uVar4 = (uRam0000000183365d80 ^ _UNK_182287fb8) + uRam0000000183365938 + 0xedf5d7f4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365938 ^ _UNK_182287fb0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365d80 ^ _UNK_182287fb8;
  uRam0000000183365b68 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183365938 + 0xedf5d7f4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365d80 + 0x84222325));
  uVar3 = uRam0000000183365b68 ^ 0xedf5d7f4;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  uRam0000000183365dd0 = (uRam0000000183365dd0 ^ uVar3) - 0xedf5d7f4 ^ 0x4c2f79756b823b00;
  uRam0000000183365ad0 = (uRam0000000183365ad0 * -0x72f0c4ff75a69643 ^ uRam0000000183365dd0) + uVar3
  ;
  uRam0000000183365cc8 = uRam0000000183365ad0 ^ uRam0000000183365dd0;
  uRam0000000183365d10 = uRam0000000183365b48 ^ 0xffffffff120a280c;
  uRam0000000183365b90 = 0x120a280c;
  uRam0000000183365988 = func_0x00018d76eda0(uRam0000000183365a10 + 0xff9b005884ff2aff ^ 0xb);
  uVar4 = uRam0000000183365988 ^ 0x17640c6c4208;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar4;
  uRam0000000183365c28 = uRam00000001833659c8 ^ uVar4 ^ 0xedf5f11e;
  uRam0000000183365ec0 = (uRam0000000183365ec0 ^ uVar4) + 0xedf5f11e ^ 0xd094b332daad2690;
  uRam0000000183365970 = (uRam0000000183365970 * -0x16282bf3801ced57 ^ uRam0000000183365ec0) + uVar4
  ;
  uRam0000000183365d60 = uRam0000000183365970 ^ uRam0000000183365ec0;
  uRam0000000183365bd8 = 0xedf5f11e;
  uVar3 = (uRam00000001833659a8 ^ _UNK_182287fc0) + uRam00000001833659b8 + 0x69d7d23b;
  uVar4 = (uRam00000001833659b8 ^ _UNK_182287fc8) + uRam00000001833659a8 + 0x120a280c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833659a8 ^ _UNK_182287fc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833659b8 ^ _UNK_182287fc8;
  uRam0000000183365ee8 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833659a8 + 0x120a280c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833659b8 + 0x69d7d23b));
  uVar3 = (ulonglong)(((uint)uRam0000000183365ee8 ^ 0xedf5d112) & 0xedf5f11e);
  uRam0000000183365c08 = uRam00000001833659a8 ^ uVar3 ^ 0x10000192a;
  uRam0000000183365930 = (uRam0000000183365930 ^ uVar3) + 0x10000192a ^ 0xa002b20411f4bebc;
  uRam0000000183365b40 = (uRam0000000183365b40 * -0x626cea361efce1b1 ^ uRam0000000183365930) + uVar3
  ;
  uRam0000000183365b80 = uRam0000000183365b40 ^ uRam0000000183365930;
  uRam00000001833659a0 = 0x192a;
  uVar3 = (~uRam0000000183365b58 + 0xce43fc81) *
          ((uRam0000000183365c10 ^ 0x84223a0f) +
          (ulonglong)((uint)uRam0000000183365c10 & 0x84223a0f) * 2);
  uVar3 = (uVar3 | uRam0000000183365a10) + (uVar3 & uRam0000000183365a10);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183365c38 =
       func_0x00018d76eda0((uVar3 | 0x4a61c68f) + (ulonglong)((uint)uVar3 & 0x4a61c68f));
  uRam0000000183365ca0 = uRam0000000183365a98 ^ uRam0000000183365c38 ^ 0xce4415aa;
  uRam0000000183365e08 =
       (uRam0000000183365e08 ^ uRam0000000183365c38) + 0xce4415aa ^ 0xcf489df696e47c19;
  uRam0000000183365a10 =
       (uRam0000000183365a10 * -0x772f47b0df2068f5 ^ uRam0000000183365e08) + uRam0000000183365c38;
  uRam0000000183365ab0 = uRam0000000183365a10 ^ uRam0000000183365e08;
  uRam0000000183365de8 = 0xce4415aa;
  uVar3 = (~uRam0000000183365cc0 + 0x31bc0381) *
          ((uRam0000000183365980 ^ 0x4a66368f) +
          (ulonglong)((uint)uRam0000000183365980 & 0x4a66368f) * 2);
  uVar3 = (uVar3 | uRam0000000183365e68) + (uVar3 & uRam0000000183365e68);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183365c48 =
       func_0x00018d76eda0((uVar3 | 0x7bda350f) + (ulonglong)((uint)uVar3 & 0x7bda350f));
  uVar3 = (uRam0000000183365c48 << 0x12 | uRam0000000183365c48 >> 0x2e) << 0x25 |
          (uRam0000000183365c48 << 0x12 & 0xffffffffffff) >> 0x1b;
  uRam0000000183365a40 = uRam00000001833659a0 ^ uVar3 ^ 0x10000192a;
  uRam0000000183365a10 = (uRam0000000183365a10 ^ uVar3) + 0x10000192a ^ 0x6bdf2b670e7e242f;
  uRam0000000183365dc0 = (uRam0000000183365dc0 * -0x2302efd6aafbe931 ^ uRam0000000183365a10) + uVar3
  ;
  uRam0000000183365c60 = uRam0000000183365dc0 ^ uRam0000000183365a10;
  uRam0000000183365990 = 0x192a;
  uRam0000000183365b90 = func_0x00018d76eda0(uRam0000000183365b38 ^ 0xffb600b061004e1a);
  uVar4 = _UNK_182287fd8;
  uVar3 = _UNK_182287fd0;
  uRam0000000183365bf0 = uRam0000000183365a28 ^ uRam0000000183365b90 ^ 0x8671fddc;
  uRam0000000183365b78 =
       (uRam0000000183365b78 ^ uRam0000000183365b90) + 0x8671fddc ^ 0xdf042cc4f8e57fe2;
  uRam0000000183365b50 =
       (uRam0000000183365b50 * -0xe22e883b8439977 ^ uRam0000000183365b78) + uRam0000000183365b90;
  uRam0000000183365cc8 = uRam0000000183365b50 ^ uRam0000000183365b78;
  uRam0000000183365c50 = 0x8671fddc;
  uVar5 = (uRam0000000183365e78 ^ _UNK_182287fd0) + uRam0000000183365a90 + 0xe945f8ec;
  uVar6 = (uRam0000000183365a90 ^ _UNK_182287fd8) + uRam0000000183365e78 + 0x190a2213;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183365e78 ^ _UNK_182287fd0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183365a90 ^ _UNK_182287fd8;
  uRam0000000183365c08 =
       func_0x00018d76eda0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183365e78 + 0x190a2213) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183365a90 + 0xe945f8ec));
  uVar5 = (uRam0000000183365c08 ^ 0x6d67dbc9) << 0x33 |
          ((uRam0000000183365c08 ^ 0x6d67dbc9) & 0xfffffffffffffff) >> 0xd;
  uRam00000001833659e0 = (uRam00000001833659e0 ^ uVar5) + 0x746df9da ^ 0x3ea3b3205cd7bece;
  uRam0000000183365938 = (uRam0000000183365938 * 0x457c0e4849af33d ^ uRam00000001833659e0) + uVar5;
  uRam0000000183365de8 = uRam0000000183365938 ^ uRam00000001833659e0;
  uRam0000000183365a80 = 0x746df9da;
  uVar5 = (uRam0000000183365b38 ^ uVar3) + uRam00000001833659c0 + 0xe945f8ec;
  uVar6 = (uRam00000001833659c0 ^ uVar4) + uRam0000000183365b38 + 0x190a2213;
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183365b38 ^ uVar3;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833659c0 ^ uVar4;
  uRam0000000183365940 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183365b38 + 0x190a2213) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833659c0 + 0xe945f8ec));
  uVar3 = uRam0000000183365940 & 0xffffffffffffffc0 ^ 0x6d67dbc9;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555544);
  uVar4 = (uVar4 & 0x3333333333333301) + (uVar4 >> 2 & 0x3333333333333331);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f07) * 0x101010101010101 >> 0x38) << 6 ^ uVar3;
  uRam0000000183365b00 = (uRam0000000183365b00 ^ uVar3) + 0x9020201 ^ 0xe004e6e3d024e7dc;
  uRam0000000183365d98 = (uRam0000000183365d98 * -0x3352e76cbb7b143d ^ uRam0000000183365b00) + uVar3
  ;
  uRam0000000183365a08 = uRam0000000183365d98 ^ uRam0000000183365b00;
  uRam0000000183365c88 = 0x9020201;
  uVar3 = (uRam0000000183365ea8 ^ _UNK_182287fe0) + uRam0000000183365a50 + 0xf04fdaff;
  uVar4 = (uRam0000000183365a50 ^ _UNK_182287fe8) + uRam0000000183365ea8 + 0x12040402;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365ea8 ^ _UNK_182287fe0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183365a50 ^ _UNK_182287fe8;
  uRam0000000183365b28 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183365ea8 + 0x12040402) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365a50 + 0xf04fdaff));
  uVar3 = uRam0000000183365b28 >> 1 | uRam0000000183365b28;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uRam0000000183365b28) & 0x7fffffffffffff;
  uRam0000000183365eb8 = uRam0000000183365b88 ^ uVar3 ^ 0x8671fddc;
  uRam0000000183365910 = (uRam0000000183365910 ^ uVar3) + 0x8671fddc ^ 0x522c5e4f4e24bb4a;
  uRam0000000183365b50 = (uRam0000000183365b50 * 0x28713456992d0ed1 ^ uRam0000000183365910) + uVar3;
  uRam0000000183365ae8 = uRam0000000183365b50 ^ uRam0000000183365910;
  uRam0000000183365ed8 = 0x8671fddc;
  uRam0000000183365e88 = func_0x00018d76eda0(lRam0000000183365aa8 + 0xffdeff7c24ffddffU ^ 0xc2);
  uVar3 = uRam0000000183365e88 >> 1 | uRam0000000183365e88;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183365e88;
  uRam0000000183365e70 = uVar3 << 2 | (uVar3 & 0x7fffffffffffffff) >> 0x3e;
  uRam0000000183365d40 = uRam0000000183365d40 ^ uRam0000000183365e70 ^ 0x6314fcc5fafed172;
  uRam00000001833659f0 =
       (uRam00000001833659f0 * 0xb8bb4913e77587 ^ uRam0000000183365d40) + uRam0000000183365e70;
  uRam00000001833659b8 = uRam00000001833659f0 ^ uRam0000000183365d40;
  uRam0000000183365c18 = 0;
  uVar3 = (uRam0000000183365c80 ^ 0x84223a0f) + uRam0000000183365c60 + 0x84223a0f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365c80 ^ 0x84223a0f;
  uVar4 = ((uRam0000000183365c60 + uRam0000000183365c80) * 0x2000 |
          uRam0000000183365c60 + uRam0000000183365c80 >> 0x33) ^ uRam0000000183365c60;
  uRam0000000183365d10 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183365c80 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365c60 + 0x84223a0f));
  uVar3 = uRam0000000183365d10 & 0x7fffffffffffffff;
  uRam0000000183365cb8 = uRam0000000183365dd0 ^ uVar3 ^ 0x192a;
  uRam00000001833659b8 = (uRam00000001833659b8 ^ uVar3) + 0x192a ^ 0xd3b30139796186cd;
  uRam0000000183365d28 = (uRam0000000183365d28 * -0x1d588bae5c04182b ^ uRam00000001833659b8) + uVar3
  ;
  uRam0000000183365df0 = uRam0000000183365d28 ^ uRam00000001833659b8;
  uRam0000000183365cd8 = uRam0000000183365a10 ^ 0x192a;
  uRam0000000183365be0 = 0x192a;
  uRam0000000183365e00 = func_0x00018d76eda0(uRam0000000183365de8 + 0x22ff7bdb0021ff ^ 0xd7);
  uVar3 = (ulonglong)((uint)uRam0000000183365e00 & 0x6067dbc0);
  uRam0000000183365c38 = uRam0000000183365c38 ^ uVar3 ^ 0x57c577d1e2341172;
  uRam0000000183365d98 = (uRam0000000183365d98 * -0x261f8c8e23f3c575 ^ uRam0000000183365c38) + uVar3
  ;
  uRam0000000183365908 = uRam0000000183365d98 ^ uRam0000000183365c38;
  uRam0000000183365d90 = 0;
  uVar3 = (uRam0000000183365ac8 ^ 0x84223a0f) + uRam0000000183365b88 + 0x84223a0f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183365ac8 ^ 0x84223a0f;
  uVar4 = ((uRam0000000183365b88 + uRam0000000183365ac8) * 0x2000 |
          uRam0000000183365b88 + uRam0000000183365ac8 >> 0x33) ^ uRam0000000183365b88;
  uRam0000000183365db8 =
       func_0x00018d76eda0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183365ac8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183365b88 + 0x84223a0f));
  uVar3 = uRam0000000183365db8 - (uRam0000000183365db8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183365db8;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar4;
  uRam0000000183365b78 = uRam0000000183365b90 ^ uVar4 ^ 0x192a;
  uRam0000000183365e08 = (uRam0000000183365e08 ^ uVar4) + 0x192a ^ 0x877ca77ba5cbb61;
  uRam0000000183365a08 = (uRam0000000183365a08 * -0x19ccce20799fcd91 ^ uRam0000000183365e08) + uVar4
  ;
  uRam0000000183365ae0 = uRam0000000183365a08 ^ uRam0000000183365e08;
  uRam0000000183365ba0 = 0x192a;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc1f7,0x213);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d765dff did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822860c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eb; arx (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d76ee30, runtime 6ffff537ee30) =====

void FUN_18d76ee30(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d76ee7b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182288180 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eb; ary (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d710050, runtime 6ffff5320050) =====

void FUN_18d710050(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d7100d9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822799b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



