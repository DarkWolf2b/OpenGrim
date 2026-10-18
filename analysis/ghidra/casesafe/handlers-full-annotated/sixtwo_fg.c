// ===== Lsixtwo/fg; _c2d16b45399409694f8093f4da338ef6 ()V (handler @ image 18ca17400, runtime 6ffff4627400) =====

void FUN_18ca17400(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ca174e8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fdaa68 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fg; aIS (Lsixtwo/gA;)V (handler @ image 18c9ecc70, runtime 6ffff45fcc70) =====

void FUN_18c9ecc70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e00,0x18d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c9ecd58 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fcf3b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fg; aIT (Lnet/minecraft/class_1297;)Z (handler @ image 18ca073a0, runtime 6ffff46173a0) =====

void FUN_18ca073a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e00,0x18d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ca073fa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fd6e70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fg; aIU ()Lnet/minecraft/class_1657; (handler @ image 18ca36650, runtime 6ffff4646650) =====

void FUN_18ca36650(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ca36670 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fddd60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fg; aIV ([I)V (handler @ image 18ca36850, runtime 6ffff4646850) =====

void FUN_18ca36850(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e00,0x18d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ca3689a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fdde40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fg; aIW ()[I (handler @ image 18ca369d0, runtime 6ffff46469d0) =====

void FUN_18ca369d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e00,0x18d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ca36a16 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fddee0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fg; aIX (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18ca36b60, runtime 6ffff4646b60) =====

undefined8 FUN_18ca36b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fg; aIY ([B)Ljava/lang/String; (handler @ image 18ca36bf0, runtime 6ffff4646bf0) =====

void FUN_18ca36bf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018ca36c90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fde100 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fg; aIZ (IJ)Ljava/lang/String; (handler @ image 18ca5f5f0, runtime 6ffff466f5f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ca5f5f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  
  uVar3 = (~uRam0000000183329f40 + 0xe48cb9ce5aa93573) *
          ((uRam000000018332a130 ^ 0x29b14c2005a9bda2) +
          (uRam000000018332a130 & 0x29b14c2005a9bda2) * 2);
  uVar3 = (uVar3 | uRam000000018332a1c8) + (uVar3 & uRam000000018332a1c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329ef0 =
       func_0x00018ca66940((uVar3 | 0xcd3df5ee5f0088d0) + (uVar3 & 0xcd3df5ee5f0088d0));
  uVar3 = (uRam0000000183329ef0 ^ 0xedbdfdeedbabbff7) << 0x31 |
          (uRam0000000183329ef0 ^ 0xedbdfdeedbabbff7) >> 0xf;
  uRam0000000183329e78 = (uRam0000000183329e78 ^ uVar3) + 0xedbdfdeedbabbff7 ^ 0x3e13a0345f1bb088;
  uRam0000000183329ec0 = (uRam0000000183329ec0 * 0x4b2dd9e8e240451d ^ uRam0000000183329e78) + uVar3;
  uRam000000018332a258 = uRam0000000183329ec0 ^ uRam0000000183329e78;
  uRam0000000183329f98 = 0xedbdfdeedbabbff7;
  uVar3 = (uRam0000000183329eb0 ^ _UNK_181fe4910) + uRam000000018332a0c8 + 0x68c07ab14223d51b;
  uVar8 = (uRam000000018332a0c8 ^ _UNK_181fe4918) + uRam0000000183329eb0 + 0x35b3125cd1565d0b;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183329eb0 ^ _UNK_181fe4910;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332a0c8 ^ _UNK_181fe4918;
  uRam000000018332a210 =
       func_0x00018ca66940((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183329eb0 + 0x35b3125cd1565d0b) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018332a0c8 + 0x68c07ab14223d51b));
  uRam0000000183329f08 =
       (uRam0000000183329f08 ^ ~uRam000000018332a210 & 0x68c07ab1c601f63e) + 0x5d7368ed1757ab35 ^
       0x9e815f76918d2d78;
  uRam000000018332a1d8 =
       (uRam000000018332a1d8 * -0x3320bbeb2103bb89 ^ uRam0000000183329f08) +
       (~uRam000000018332a210 & 0x68c07ab1c601f63e);
  uRam0000000183329d10 = uRam000000018332a1d8 ^ uRam0000000183329f08;
  uRam0000000183329f60 = 0x5d7368ed1757ab35;
  uVar3 = (~uRam000000018332a200 + 0xc05045947618321d) *
          ((uRam0000000183329f18 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183329f18 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018332a0f0) + (uVar3 & uRam000000018332a0f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329da0 =
       func_0x00018ca66940((uVar3 | 0xc0504594f23a1139) + (uVar3 & 0xc0504594f23a1139));
  uRam000000018332a3c8 =
       (uRam000000018332a3c8 ^ uRam0000000183329da0) + 0x3fafba6b89e7cde4 ^ 0x1adf71c7af884bd0;
  uRam000000018332a240 =
       (uRam000000018332a240 * 0x69de5e8cc7070ced ^ uRam000000018332a3c8) + uRam0000000183329da0;
  uRam000000018332a148 = uRam000000018332a240 ^ uRam000000018332a3c8;
  uRam0000000183329fc8 = 0x3fafba6b89e7cde4;
  uVar3 = (~uRam0000000183329f30 + 0x3fafba6b89e7cde5) *
          ((uRam0000000183329e28 ^ 0xc0504594f23a913e) +
          (uRam0000000183329e28 & 0x40504594f23a913e) * 2);
  uVar3 = (uVar3 | uRam000000018332a168) + (uVar3 & uRam000000018332a168);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329de0 =
       func_0x00018ca66940((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar8 = uRam0000000183329de0 ^ 0x41210bc6941cf2e8;
  uVar3 = uVar8 >> 1 | uVar8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar8;
  uRam0000000183329d98 = uRam0000000183329fa0 ^ uVar8 ^ 0x7fff;
  uRam0000000183329f98 = (uRam0000000183329f98 ^ uVar8) + 0x7fff ^ 0xc4ff2786f1711065;
  uRam0000000183329ec0 = (uRam0000000183329ec0 * 0x2f7179775f9ad16b ^ uRam0000000183329f98) + uVar8;
  uRam0000000183329f60 = uRam0000000183329ec0 ^ uRam0000000183329f98;
  uRam0000000183329d50 = 0x7fff;
  uRam0000000183329fb8 = func_0x00018ca66940(uRam000000018332a4e8 ^ 0xc59f1095a2425784);
  uVar3 = ((uRam0000000183329fb8 ^ 0xf16e42504c414248) & 0x7ff) << 0x34 |
          (uRam0000000183329fb8 ^ 0xf16e42504c414248) >> 0xc;
  uRam000000018332a408 = uRam0000000183329e28 ^ uVar3 ^ 0x321046fd129b3db7;
  uRam000000018332a4e0 = (uRam000000018332a4e0 ^ uVar3) + 0x321046fd129b3db7 ^ 0xfc0c67351cc9ab2e;
  uRam0000000183329e28 = (uRam0000000183329e28 * 0x5087ba63344e54a1 ^ uRam000000018332a4e0) + uVar3;
  uRam0000000183329d80 = uRam0000000183329e28 ^ uRam000000018332a4e0;
  uRam000000018332a168 = 0x321046fd129b3db7;
  uRam000000018332a168 = func_0x00018ca66940(uRam000000018332a368 ^ 0x56ac94c53ab5dbbc);
  uVar3 = uRam000000018332a168 & 0xffffffffffc00000;
  uRam000000018332a290 = uRam0000000183329e60 ^ uVar3 ^ 0x7fff;
  uRam0000000183329e48 = (uRam0000000183329e48 ^ uVar3) + 0x7fff ^ 0x2fad4aee8f9a76dd;
  uRam000000018332a478 = (uRam000000018332a478 * -0x75e3d17f0348b0cb ^ uRam0000000183329e48) + uVar3
  ;
  uRam000000018332a090 = uRam000000018332a478 ^ uRam0000000183329e48;
  uRam0000000183329d70 = 0x7fff;
  uVar3 = (~uRam0000000183329e90 + 0xc75aacc2055c6515) *
          ((uRam000000018332a3f0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018332a3f0 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018332a440) + (uVar3 & uRam000000018332a440);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329e90 =
       func_0x00018ca66940((uVar3 | 0xc75aacc2817e4631) + (uVar3 & 0xc75aacc2817e4631));
  uRam0000000183329e38 =
       (uRam0000000183329e38 ^ uRam0000000183329e90) + 0x38a5533dfaa39aec ^ 0x7a52dadb49f499b8;
  uRam000000018332a440 =
       (uRam000000018332a440 * 0x7e11b2f20f97ae9 ^ uRam0000000183329e38) + uRam0000000183329e90;
  uRam0000000183329e18 = uRam000000018332a440 ^ uRam0000000183329e38;
  uRam0000000183329f10 = 0x38a5533dfaa39aec;
  uVar3 = (~uRam0000000183329d38 + 0xc75aacc2055c6515) *
          ((uRam000000018332a2d8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018332a2d8 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183329d50) + (uVar3 & uRam0000000183329d50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329ef0 =
       func_0x00018ca66940((uVar3 | 0xc75aacc2817e39ce) + (uVar3 & 0xc75aacc2817e39ce));
  uVar3 = uRam0000000183329ef0 >> 1 | uRam0000000183329ef0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183329ef0;
  uRam000000018332a280 = uRam000000018332a258 ^ uVar3 ^ 0xc75aacc2055ce513;
  uRam000000018332a468 = (uRam000000018332a468 ^ uVar3) + 0xc75aacc2055ce513 ^ 0xa9e8328ef11939f0;
  uRam0000000183329dd0 = (uRam0000000183329dd0 * 0x69bea717da5d1e8f ^ uRam000000018332a468) + uVar3;
  uRam000000018332a030 = uRam0000000183329dd0 ^ uRam000000018332a468;
  uRam0000000183329dc8 = 0xc75aacc2055ce513;
  uVar3 = (uRam000000018332a090 ^ _UNK_181fe4920) + uRam000000018332a1b8 + 0xc75aacc2817ec636;
  uVar8 = (uRam000000018332a1b8 ^ _UNK_181fe4928) + uRam000000018332a090 + 0x38a5533dfaa39aec;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018332a090 ^ _UNK_181fe4920;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332a1b8 ^ _UNK_181fe4928;
  uRam0000000183329e98 =
       func_0x00018ca66940((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018332a090 + 0x38a5533dfaa39aec) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018332a1b8 + 0xc75aacc2817ec636));
  uVar3 = (uRam0000000183329e98 ^ 0xc75aacc2055ce513) << 0x1a |
          (uRam0000000183329e98 ^ 0xc75aacc2055ce513) >> 0x26;
  uRam000000018332a350 = uRam0000000183329ec8 ^ uVar3 ^ 0x7fff;
  uRam000000018332a130 = (uRam000000018332a130 ^ uVar3) + 0x7fff ^ 0xa7efe10f2b56e60f;
  uRam000000018332a3b0 = (uRam000000018332a3b0 * 0x7e6f02ec2bfb9f8b ^ uRam000000018332a130) + uVar3;
  uRam000000018332a458 = uRam000000018332a3b0 ^ uRam000000018332a130;
  uRam000000018332a348 = 0x7fff;
  uRam0000000183329f40 = func_0x00018ca66940(uRam0000000183329dd0 + 0x2f545b8608d356f ^ 0x39);
  uVar3 = (uRam0000000183329f40 ^ 0x30b9885a0204d4) & 0xedbdfdeedbabbff7;
  uRam000000018332a0d8 = (uRam000000018332a0d8 ^ uVar3) + 0x4d3168ec1303ab35 ^ 0xeb9ac22e005279da;
  uRam0000000183329f38 = (uRam0000000183329f38 * -0x8eaa8a3df42b833 ^ uRam000000018332a0d8) + uVar3;
  uRam000000018332a080 = uRam0000000183329f38 ^ uRam000000018332a0d8;
  uRam0000000183329d18 = 0x4d3168ec1303ab35;
  uVar3 = (uRam0000000183329ea0 ^ _UNK_181fe4930) + uRam0000000183329de8 + 0xb0ce950348de37e7;
  uVar8 = (uRam0000000183329de8 ^ _UNK_181fe4938) + uRam0000000183329ea0 + 0x9a62d1d82607566a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183329ea0 ^ _UNK_181fe4930;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183329de8 ^ _UNK_181fe4938;
  uRam000000018332a088 =
       func_0x00018ca66940((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183329ea0 + 0x9a62d1d82607566a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183329de8 + 0xb0ce950348de37e7));
  uVar3 = uRam000000018332a088 ^ 0x9a62d1d82607566a;
  uRam0000000183329e00 = uRam000000018332a080 ^ uVar3 ^ 0x4b3166dbf3036b2c;
  uRam0000000183329fa8 = (uRam0000000183329fa8 ^ uVar3) + 0x4b3166dbf3036b2c ^ 0x367124455487d607;
  uRam000000018332a098 = (uRam000000018332a098 * -0x41b1cd7e99677643 ^ uRam0000000183329fa8) + uVar3
  ;
  uRam000000018332a478 = uRam000000018332a098 ^ uRam0000000183329fa8;
  uRam000000018332a400 = 0x4b3166dbf3036b2c;
  uRam0000000183329d58 = func_0x00018ca66940(uRam0000000183329f18 + 0xffe1007be4ffe1ff ^ 0xa1);
  uRam000000018332a4d8 = uRam0000000183329d58 ^ 0x36c7eac937e5cf90;
  uVar3 = uRam000000018332a4d8 >> 1 | uRam000000018332a4d8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam000000018332a4d8 =
       (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
       uRam000000018332a4d8;
  uRam000000018332a1a8 = uRam000000018332a1a8 ^ uRam000000018332a4d8 ^ 0x7c1a581d93406d11;
  uRam000000018332a068 =
       (uRam000000018332a068 * 0x63991172fe939c27 ^ uRam000000018332a1a8) + uRam000000018332a4d8;
  uRam000000018332a000 = uRam000000018332a068 ^ uRam000000018332a1a8;
  uRam000000018332a270 = 0;
  uRam0000000183329d80 = func_0x00018ca66940(uRam000000018332a468 ^ 0xffac0083a5ffe117);
  uRam000000018332a3f8 = uRam000000018332a268 ^ uRam000000018332a230 ^ 0x7fff;
  uRam000000018332a440 = (uRam000000018332a440 ^ uRam000000018332a230) + 0x7fff ^ 0xa79255dfbf6b151a
  ;
  uRam000000018332a1b0 =
       (uRam000000018332a1b0 * -0x723fdcc42850d1eb ^ uRam000000018332a440) + uRam000000018332a230;
  uRam0000000183329e08 = uRam000000018332a1b0 ^ uRam000000018332a440;
  uRam000000018332a0f0 = 0x7fff;
  uVar3 = ~uRam000000018332a410 *
          ((uRam000000018332a148 ^ 0xedbdfdee5f899cd2) +
          (uRam000000018332a148 & 0x6dbdfdee5f899cd2) * 2);
  uVar3 = (uVar3 | uRam000000018332a140) + (uVar3 & uRam000000018332a140);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018332a430 =
       func_0x00018ca66940((uVar3 | 0x12420211a076632d) + (uVar3 & 0x12420211a076632d));
  uVar3 = (uRam000000018332a430 & 0xffffffff) * (_UNK_181fe4940 & 0xffffffff) +
          ((ulonglong)_UNK_181fe4950 * (uRam000000018332a430 & 0xffffffff) +
           (uRam000000018332a430 >> 0x20) * (_UNK_181fe4940 & 0xffffffff) << 0x20) &
          0x7fffffffffffffff;
  uRam000000018332a0b0 = (uRam000000018332a0b0 ^ uVar3) + 0x1242021124544008 ^ 0x9bdac9c89eecd714;
  uRam000000018332a118 = (uRam000000018332a118 * -0x62688326cd13161d ^ uRam000000018332a0b0) + uVar3
  ;
  uRam000000018332a068 = uRam000000018332a118 ^ uRam000000018332a0b0;
  uRam0000000183329db0 = 0x1242021124544008;
  uVar3 = (~uRam000000018332a1c8 + 0x1242021124544009) *
          ((uRam0000000183329e28 ^ 0xedbdfdee5f899cd2) +
          (uRam0000000183329e28 & 0x6dbdfdee5f899cd2) * 2);
  uVar3 = (uVar3 | uRam000000018332a328) + (uVar3 & uRam000000018332a328);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018332a098 =
       func_0x00018ca66940((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uRam000000018332a068 =
       uRam000000018332a068 ^ uRam000000018332a098 & 0x3fffffffffff ^ 0xe4f8c7f18edb24d0;
  uRam000000018332a060 =
       (uRam000000018332a060 * 0x4a5bd1dc5f07461b ^ uRam000000018332a068) +
       (uRam000000018332a098 & 0x3fffffffffff);
  uRam000000018332a120 = uRam000000018332a060 ^ uRam000000018332a068;
  uRam0000000183329ed0 = 0;
  uRam000000018332a068 = func_0x00018ca66940(uRam0000000183329ef8 + 0xffac008355ffe1ff ^ 4);
  uVar3 = uRam000000018332a068 ^ 0x7fff;
  uRam0000000183329d20 = uRam0000000183329e68 ^ uVar3 ^ 0x7fff;
  uRam0000000183329f70 = (uRam0000000183329f70 ^ uVar3) + 0x7fff ^ 0xedfcaa45a35a43d1;
  uRam000000018332a4e8 = (uRam000000018332a4e8 * 0x42568dfea1ed8d0b ^ uRam0000000183329f70) + uVar3;
  uRam0000000183329d10 = uRam000000018332a4e8 ^ uRam0000000183329f70;
  uRam000000018332a200 = 0x7fff;
  uVar3 = (uRam0000000183329d38 ^ _UNK_181fe4960) + uRam0000000183329f68 + 0x29b14c2005a9bda2;
  uVar8 = (uRam0000000183329f68 ^ _UNK_181fe4968) + uRam0000000183329d38 + 0x29b14c20818b9e87;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183329d38 ^ _UNK_181fe4960;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183329f68 ^ _UNK_181fe4968;
  uRam0000000183329ea8 =
       func_0x00018ca66940((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183329d38 + 0x29b14c20818b9e87) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183329f68 + 0x29b14c2005a9bda2));
  uRam000000018332a168 =
       uRam000000018332a168 ^ uRam0000000183329ea8 ^ 0x29b14c20818b9e87 ^ 0xcc12c6a39c459e64;
  uRam000000018332a4f8 =
       (uRam000000018332a4f8 * 0x479a2acc39b926a9 ^ uRam000000018332a168) +
       (uRam0000000183329ea8 ^ 0x29b14c20818b9e87);
  uRam0000000183329da8 = uRam000000018332a4f8 ^ uRam000000018332a168;
  uRam000000018332a0a0 = 0;
  uVar3 = ((uRam0000000183329d98 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183329d98 & 0x84225cda) * 2) * -uRam000000018332a030;
  uVar3 = (uVar3 | uRam000000018332a2e8) + (uVar3 & uRam000000018332a2e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018332a080 =
       func_0x00018ca66940((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = (uRam000000018332a080 ^ 0x7fff) & 0xfffffffffff;
  uRam000000018332a280 = uRam0000000183329d60 ^ uVar3 ^ 0x7fff;
  uRam0000000183329e18 = (uRam0000000183329e18 ^ uVar3) + 0x7fff ^ 0x4aeb3a733beaa40;
  uRam0000000183329ee8 = (uRam0000000183329ee8 * -0x74c21500c23309c3 ^ uRam0000000183329e18) + uVar3
  ;
  uRam000000018332a1f0 = uRam0000000183329ee8 ^ uRam0000000183329e18;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_181fe4970,_UNK_1800170c0);
  lRam000000018332a170 = 0x7fff;
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar8 + lRam000000018332a108;
  if (auVar7._4_4_ < 0) {
    uVar3 = uRam000000018332a250 ^ uVar8;
  }
  uRam0000000183329fa8 = func_0x00018ca66940(SUB161(auVar6 ^ _UNK_181fe4970,5) ^ uVar3);
  uVar2 = (uint)param_4 & 0x7fff;
  uVar8 = (ulonglong)uVar2;
  uRam0000000183329ee8 = (uRam0000000183329ee8 ^ uRam0000000183329fa8) + uVar8 ^ 0xaeaa85d87af94205;
  uRam000000018332a138 =
       (uRam000000018332a138 * 0x6bb08240867b1803 ^ uRam0000000183329ee8) + uRam0000000183329fa8;
  uRam000000018332a0d8 = uRam000000018332a138 ^ uRam0000000183329ee8;
  uVar5 = (ulonglong)param_3;
  uVar4 = uVar8 ^ 0x84222325;
  uVar3 = ((uRam000000018332a1c0 ^ uVar4) +
          (ulonglong)((uint)uRam000000018332a1c0 & (uint)uVar4) * 2) *
          (uVar5 - uRam0000000183329ea8);
  uVar3 = (uVar3 | uRam000000018332a230) + (uVar3 & uRam000000018332a230);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329e18 = uVar8;
  uRam000000018332a380 =
       func_0x00018ca66940((uVar4 ^ uVar5 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ uVar5) & (uint)uVar3));
  uVar8 = (uVar8 + uVar5) - (ulonglong)((param_3 & uVar2) * 2);
  uRam000000018332a218 = (uRam000000018332a218 ^ uRam000000018332a420) + uVar8 ^ 0xb318864dfcdffb53;
  uRam000000018332a048 =
       (uRam000000018332a048 * -0x5e37bde151fedc17 ^ uRam000000018332a218) + uRam000000018332a420;
  uRam0000000183329d98 = uRam000000018332a048 ^ uRam000000018332a218;
  uVar8 = uVar8 & 0xffffffff;
  uRam000000018332a070 = uVar8;
  uRam0000000183329fc8 = func_0x00018ca66940(uRam000000018332a228 ^ 0xffe3ff64a9ffbb2a);
  uVar3 = (ulonglong)(~(uint)uRam0000000183329fc8 & 0xd26188b9) * -0x6d7d6369925e724b;
  uRam0000000183329f10 = (uRam0000000183329f10 ^ uVar3) + 0xf2ff8fbf ^ 0x579135ae1a36a2e5;
  uRam0000000183329ed0 = (uRam0000000183329ed0 * -0x5ca1dab96796b1c1 ^ uRam0000000183329f10) + uVar3
  ;
  uRam0000000183329f18 = uRam0000000183329ed0 ^ uRam0000000183329f10;
  uRam000000018332a3d8 = 0xf2ff8fbf;
  uVar3 = (~uRam000000018332a468 + 0x2065c1f4) *
          ((uRam000000018332a278 ^ 0x4f399e85) +
          (ulonglong)((uint)uRam000000018332a278 & 0x4f399e85) * 2);
  uVar3 = (uVar3 | uRam000000018332a1a0) + (uVar3 & uRam000000018332a1a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329ff0 =
       func_0x00018ca66940((uVar3 | 0x6f5c5f76) + (ulonglong)((uint)uVar3 & 0x6f5c5f76));
  uRam000000018332a358 =
       (uRam000000018332a358 ^ uRam0000000183329ff0 ^ 0x19b43386856a9ee0) + 0xeb7e7c53 ^
       0x30e5c2ee700965bd;
  uRam000000018332a3a8 =
       (uRam000000018332a3a8 * 0x236917ef57f1893d ^ uRam000000018332a358) +
       (uRam0000000183329ff0 ^ 0x19b43386856a9ee0);
  uRam000000018332a468 = uRam000000018332a3a8 ^ uRam000000018332a358;
  uRam000000018332a330 = 0xeb7e7c53;
  uVar3 = (uRam0000000183329f80 ^ _UNK_181fe4980) + uRam000000018332a1e8 + 0x84222325;
  uVar4 = (uRam000000018332a1e8 ^ _UNK_181fe4988) + uRam0000000183329f80 + 0xaf4d7065;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183329f80 ^ _UNK_181fe4980;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018332a1e8 ^ _UNK_181fe4988;
  uRam000000018332a1a8 =
       func_0x00018ca66940((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183329f80 + 0xaf4d7065) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018332a1e8 + 0x84222325));
  uVar3 = (uRam000000018332a1a8 & 0xffffffff) * (_UNK_181fe4990 & 0xffffffff) +
          ((ulonglong)_UNK_181fe49a0 * (uRam000000018332a1a8 & 0xffffffff) +
           (uRam000000018332a1a8 >> 0x20) * (_UNK_181fe4990 & 0xffffffff) << 0x20) &
          0x7fffffffffffffff;
  uRam0000000183329f48 = (uRam0000000183329f48 ^ uVar3) - 0xaf4d7065 ^ 0xe681ab389915aff5;
  uRam000000018332a010 = (uRam000000018332a010 * -0x35d2e2801051b29d ^ uRam0000000183329f48) + uVar3
  ;
  uRam000000018332a330 = uRam000000018332a010 ^ uRam0000000183329f48;
  uRam000000018332a4b8 = 0x50b28f9b;
  uRam0000000183329d28 = func_0x00018ca66940(uRam0000000183329dc0 ^ 0x380015a6006e8a);
  uVar3 = uRam0000000183329d28 >> 1 | (ulonglong)((uRam0000000183329d28 & 1) != 0) << 0x3f;
  uRam000000018332a000 = uRam000000018332a438 ^ uVar3 ^ 0xaf4d8c53;
  uRam0000000183329f68 = (uRam0000000183329f68 ^ uVar3) + 0xaf4d8c53 ^ 0x79ca26963c7aed0c;
  uRam0000000183329d10 = (uRam0000000183329d10 * -0x7981512f12e8956b ^ uRam0000000183329f68) + uVar3
  ;
  uRam0000000183329dd8 = uRam0000000183329d10 ^ uRam0000000183329f68;
  uRam0000000183329f60 = uRam000000018332a228 ^ 0xaf4d8c53;
  uRam000000018332a4f8 = 0xaf4d8c53;
  uVar3 = (uRam000000018332a338 ^ _UNK_181fe49b0) + uRam000000018332a138 + 0x2b6faf76;
  uVar4 = (uRam000000018332a138 ^ _UNK_181fe49b8) + uRam000000018332a338 + 0x50b28f9b;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018332a338 ^ _UNK_181fe49b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018332a138 ^ _UNK_181fe49b8;
  uRam0000000183329dd8 =
       func_0x00018ca66940((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018332a338 + 0x50b28f9b) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018332a138 + 0x2b6faf76));
  uVar3 = uRam0000000183329dd8 << 0x2f | uRam0000000183329dd8 >> 0x11;
  uRam000000018332a018 = uRam000000018332a050 ^ uVar3 ^ 0x100001bee;
  uRam000000018332a230 = (uRam000000018332a230 ^ uVar3) + 0x100001bee ^ 0x2ad4ee1204dc1110;
  uRam000000018332a300 = (uRam000000018332a300 * 0x30cc3cb13c741a91 ^ uRam000000018332a230) + uVar3;
  uRam000000018332a2a8 = uRam000000018332a300 ^ uRam000000018332a230;
  uRam000000018332a050 = 0x1bee;
  uRam000000018332a1a8 = func_0x00018ca66940(uRam000000018332a0f8 ^ 0xff87ff3d4b00bfb1);
  uVar3 = uRam000000018332a1a8 >> 1 | uRam000000018332a1a8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam000000018332a1a8 ^ 0x47e2b000;
  uRam0000000183329df0 = uRam0000000183329f90 ^ uVar3 ^ 0x47e2cbee;
  uRam000000018332a1e8 = (uRam000000018332a2f0 ^ uVar3) + 0x47e2cbee ^ 0x4447840b32d456ec;
  uRam000000018332a2f0 = (uRam000000018332a2f0 * 0x2502cb2be399124d ^ uRam000000018332a1e8) + uVar3;
  uRam000000018332a1e8 = uRam000000018332a2f0 ^ uRam000000018332a1e8;
  uRam0000000183329db0 = 0x47e2cbee;
  uVar3 = (~uRam000000018332a0a8 + 0xb81d5001) *
          ((uRam000000018332a4e8 ^ 0xc3c0e8cb) +
          (ulonglong)((uint)uRam000000018332a4e8 & 0xc3c0e8cb) * 2);
  uVar3 = (uVar3 | uRam000000018332a068) + (uVar3 & uRam000000018332a068);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329fa0 =
       func_0x00018ca66940((uVar3 | 0x7bddb8cb) + (ulonglong)((uint)uVar3 & 0x7bddb8cb));
  uVar3 = uRam0000000183329fa0 >> 1 | uRam0000000183329fa0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183329fa0;
  uRam0000000183329ea0 = uRam0000000183329e78 ^ uVar3 ^ 0x100001bee;
  uRam000000018332a230 = (uRam000000018332a230 ^ uVar3) + 0x100001bee ^ 0xbc8c61e76caaa45d;
  uRam000000018332a238 = (uRam000000018332a238 * -0x1a498928b09e5001 ^ uRam000000018332a230) + uVar3
  ;
  uRam0000000183329d68 = uRam000000018332a238 ^ uRam000000018332a230;
  uRam0000000183329e58 = 0x1bee;
  uRam0000000183329e28 = func_0x00018ca66940(uRam000000018332a128 ^ 0xffc1ffe29cff9ea5);
  uVar3 = uRam0000000183329e28 << 0x37 | (uRam0000000183329e28 & 0x7fffffffffffffff) >> 9;
  uRam000000018332a2e0 = (uRam000000018332a2e0 ^ uVar3) - 0x7a837d80 ^ 0xf66dc1a773c23344;
  uRam000000018332a1a8 = (uRam000000018332a1a8 * -0x52731d71aec3049f ^ uRam000000018332a2e0) + uVar3
  ;
  uRam0000000183329e50 = uRam000000018332a1a8 ^ uRam000000018332a2e0;
  uRam0000000183329ff0 = 0x857c8280;
  uVar3 = (uRam0000000183329f78 ^ _UNK_181fe49c0) + uRam000000018332a1c0 + 0x842238cb;
  uVar4 = (uRam000000018332a1c0 ^ _UNK_181fe49c8) + uRam0000000183329f78 + 0x7a837d80;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183329f78 ^ _UNK_181fe49c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018332a1c0 ^ _UNK_181fe49c8;
  uRam0000000183329ef8 =
       func_0x00018ca66940((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183329f78 + 0x7a837d80) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018332a1c0 + 0x842238cb));
  uVar3 = uRam0000000183329ef8 >> 1 | uRam0000000183329ef8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183329ef8;
  uRam000000018332a4a0 = uRam000000018332a0b8 ^ uVar3 ^ 0x7a83996e;
  uRam000000018332a250 = (uRam000000018332a250 ^ uVar3) + 0x7a83996e ^ 0xd4c08ab3bb33e79b;
  uRam000000018332a4b8 = (uRam000000018332a4b8 * 0x2dc3695fb661701d ^ uRam000000018332a250) + uVar3;
  uRam000000018332a360 = uRam000000018332a4b8 ^ uRam000000018332a250;
  uRam000000018332a248 = 0x7a83996e;
  uRam000000018332a030 = func_0x00018ca66940(lRam0000000183329f50 + 0xffd800093affb4ffU ^ 0xd7);
  uRam0000000183329fd8 = uRam0000000183329f38 ^ uRam000000018332a030 ^ 0x100001bee;
  uRam0000000183329d70 =
       (uRam0000000183329d70 ^ uRam000000018332a030) + 0x100001bee ^ 0xf63d5daab7afa5d6;
  uRam0000000183329d58 =
       (uRam0000000183329d58 * 0x34bf600dbba03f2d ^ uRam0000000183329d70) + uRam000000018332a030;
  uRam000000018332a038 = uRam0000000183329d58 ^ uRam0000000183329d70;
  lRam0000000183329f50 = 0x1bee;
  uVar3 = (~uRam000000018332a280 + 0xeb7e7c54) *
          ((uRam000000018332a1e0 ^ 0x76ddac9a) +
          (ulonglong)((uint)uRam000000018332a1e0 & 0x76ddac9a) * 2);
  uVar3 = (uVar3 | uRam0000000183329d60) + (uVar3 & uRam0000000183329d60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018332a208 =
       func_0x00018ca66940((uVar3 | 0x9da3d0c9) + (ulonglong)((uint)uVar3 & 0x9da3d0c9));
  uVar3 = (uRam0000000183329f70 >> 0x17) * 8;
  uRam000000018332a0e8 = uRam000000018332a4a0 ^ uVar3 ^ 0x1de7e0c12;
  uRam000000018332a438 = (uVar3 ^ uRam000000018332a438) + 0x1de7e0c12 ^ 0xf224c5c1021bb96f;
  uRam000000018332a420 =
       (uRam000000018332a420 * 0x2cd54295c4229bb5 ^ uRam000000018332a438) +
       (uRam0000000183329f70 >> 0x17) * 8;
  uRam000000018332a430 = uRam000000018332a438 ^ uRam000000018332a420;
  uRam0000000183329df8 = uRam000000018332a388 ^ 0x1de7e0c12;
  uRam0000000183329f08 = 0xde7e0c12;
  uVar3 = (~uRam000000018332a480 + 0xeb7e7c54) *
          ((uRam000000018332a010 ^ 0x76ddac9a) +
          (ulonglong)((uint)uRam000000018332a010 & 0x76ddac9a) * 2);
  uVar3 = (uVar3 | uRam000000018332a080) + (uVar3 & uRam000000018332a080);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018332a2b8 =
       func_0x00018ca66940((uVar3 | 0x9da3d0c9) + (ulonglong)((uint)uVar3 & 0x9da3d0c9));
  uVar3 = (uRam000000018332a2b8 ^ 0xfbffffff) & 0x1fffffffffff ^ 0xf2ff8fbf;
  uRam0000000183329ee8 = (uRam0000000183329ee8 ^ uVar3) + 0xe27e0c13 ^ 0xbc1f922225e9adbe;
  uRam0000000183329da0 = (uRam0000000183329da0 * 0x1df6a1d47a0fd919 ^ uRam0000000183329ee8) + uVar3;
  uRam000000018332a048 = uRam0000000183329da0 ^ uRam0000000183329ee8;
  uRam0000000183329ee0 = 0xe27e0c13;
  uVar3 = (uRam000000018332a430 ^ _UNK_181fe49d0) + uRam0000000183329fb0 + 0x9da3d0c9;
  uVar4 = (uRam0000000183329fb0 ^ _UNK_181fe49d8) + uRam000000018332a430 + 0xc4fc1826;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018332a430 ^ _UNK_181fe49d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183329fb0 ^ _UNK_181fe49d8;
  lRam000000018332a170 =
       func_0x00018ca66940((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018332a430 + 0xc4fc1826) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183329fb0 + 0x9da3d0c9));
  uVar3 = lRam000000018332a170 * -0x45534e13a69167cf;
  uRam000000018332a028 = uRam000000018332a380 ^ uVar3 ^ 0xde7e0c12;
  uRam0000000183329f60 = (uRam0000000183329f60 ^ uVar3) + 0xde7e0c12 ^ 0x4cf34fedc5bc2059;
  uRam0000000183329e30 = (uRam0000000183329e30 * -0x522a5a49179a7d9d ^ uRam0000000183329f60) + uVar3
  ;
  uRam0000000183329ed8 = uRam0000000183329e30 ^ uRam0000000183329f60;
  uRam0000000183329d88 = 0xde7e0c12;
  uVar3 = (uRam000000018332a250 ^ _UNK_181fe49e0) + uRam0000000183329fe8 + 0x5a5c2f37;
  uVar4 = (uRam0000000183329fe8 ^ _UNK_181fe49e8) + uRam000000018332a250 + 0xde7e0c12;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018332a250 ^ _UNK_181fe49e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183329fe8 ^ _UNK_181fe49e8;
  uRam000000018332a3f8 =
       func_0x00018ca66940((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018332a250 + 0xde7e0c12) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183329fe8 + 0x5a5c2f37));
  uRam000000018332a058 = uRam000000018332a3f8 ^ 0xc15edaffc437bd56;
  uVar3 = uRam000000018332a058 >> 1 | uRam000000018332a058;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam000000018332a058 =
       (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
       uRam000000018332a058;
  uRam000000018332a298 = uRam000000018332a298 ^ uRam000000018332a058 ^ 0x54b65fd7285b20c;
  uRam0000000183329df0 =
       (uRam0000000183329df0 * -0x6497f1fbfdca52d5 ^ uRam000000018332a298) + uRam000000018332a058;
  uRam000000018332a398 = uRam0000000183329df0 ^ uRam000000018332a298;
  uRam0000000183329dc0 = 0;
  uRam000000018332a110 = func_0x00018ca66940(uRam0000000183329dc8 ^ 0xffd7ff834affe15a);
  uVar3 = (uRam000000018332a110 ^ 0x1b00) & 0xffffffffffffff00;
  uRam0000000183329fa8 = uRam0000000183329fa8 ^ uVar3 ^ 0x1bee;
  uRam000000018332a338 = (uRam000000018332a338 ^ uVar3) + 0x1bee ^ 0xc822fa183cea874b;
  uRam000000018332a0c0 = (uRam000000018332a0c0 * 0x30174b41516753cd ^ uRam000000018332a338) + uVar3;
  uRam0000000183329ee8 = uRam000000018332a0c0 ^ uRam000000018332a338;
  uRam0000000183329d78 = 0x1bee;
  uRam000000018332a2a8 = func_0x00018ca66940(uRam000000018332a388 ^ 0xffceff88e30021b1);
  uRam000000018332a4a8 =
       (uRam000000018332a4a8 ^ uRam000000018332a2a8 ^ 0xf2ff8fbe0d007041) + 0xd007040 ^
       0xcba113c6b2c99aae;
  uRam0000000183329fd8 =
       (uRam0000000183329fd8 * -0x3674f6b3b5cb2f37 ^ uRam000000018332a4a8) +
       (uRam000000018332a2a8 ^ 0xf2ff8fbe0d007041);
  uRam000000018332a468 = uRam0000000183329fd8 ^ uRam000000018332a4a8;
  uRam000000018332a128 = 0xd007040;
  uVar3 = ((uRam0000000183329dd0 ^ 0x842238cb) +
          (ulonglong)((uint)uRam0000000183329dd0 & 0x842238cb) * 2) * -uRam000000018332a470;
  uVar3 = (uVar3 | uRam0000000183329e78) + (uVar3 & uRam0000000183329e78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329e10 =
       func_0x00018ca66940((uVar3 | 0x842238cb) + (ulonglong)((uint)uVar3 & 0x842238cb));
  uVar3 = (ulonglong)(~(uint)uRam0000000183329e10 & 0x1bee);
  uRam000000018332a380 = uRam0000000183329ec0 ^ uVar3 ^ 0x1bee;
  uRam0000000183329d10 = (uRam0000000183329d10 ^ uVar3) + 0x1bee ^ 0x4a0a29c8f4592fde;
  uRam000000018332a1c8 = (uRam000000018332a1c8 * -0x24c4e7c67ae2ed3 ^ uRam0000000183329d10) + uVar3;
  uRam000000018332a0d8 = uRam000000018332a1c8 ^ uRam0000000183329d10;
  uRam0000000183329d00 = 0x1bee;
  uVar3 = (~uRam000000018332a408 + 0xd26188ba) *
          ((uRam0000000183329f48 ^ 0x5643ab9c) +
          (ulonglong)((uint)uRam0000000183329f48 & 0x5643ab9c) * 2);
  uVar3 = (uVar3 | uRam000000018332a428) + (uVar3 & uRam000000018332a428);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018332a470 =
       func_0x00018ca66940((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam0000000183329d38 = uRam0000000183329d38 ^ uRam000000018332a470 ^ 0x4df284c3a2bfa00b;
  uRam0000000183329ee8 =
       (uRam0000000183329ee8 * -0x756dfc168df15643 ^ uRam0000000183329d38) + uRam000000018332a470;
  uRam0000000183329e48 = uRam0000000183329ee8 ^ uRam0000000183329d38;
  uRam000000018332a010 = 0;
  uVar3 = (~uRam000000018332a258 + 0x1bef) *
          ((uVar8 ^ 0x84222325 ^ uRam000000018332a158) +
          (ulonglong)((uint)uRam000000018332a158 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | uRam000000018332a0d0) + (uVar3 & uRam000000018332a0d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183329e10 =
       func_0x00018ca66940((uVar8 ^ 0x842238cb | uVar3) +
                           (ulonglong)((uint)(uVar8 ^ 0x842238cb) & (uint)uVar3));
  uVar3 = uRam0000000183329e10 >> 1 | uRam0000000183329e10;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183329e10;
  uRam000000018332a1f0 = uVar8 ^ 0x1bee;
  uRam0000000183329dc0 = (uRam0000000183329dc0 ^ uVar3) + uRam000000018332a1f0 ^ 0x841f929f9c7bee46;
  uRam000000018332a078 = (uRam000000018332a078 * -0x378d596c62f8f911 ^ uRam0000000183329dc0) + uVar3
  ;
  uRam000000018332a388 = uRam000000018332a078 ^ uRam0000000183329dc0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e00,0x18d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ca61f26 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fe2f88 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fg; aJa (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18ca669d0, runtime 6ffff46769d0) =====

void FUN_18ca669d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ca66a0c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fe4b00 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fg; aJb (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ca678c0, runtime 6ffff46778c0) =====

void FUN_18ca678c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ca6793d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fe5040 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fg; aJc (IJ)I (handler @ image 18ca080d0, runtime 6ffff46180d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ca080d0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  
  uRam0000000183328b60 = func_0x00018ca13650(uRam00000001833287b0 ^ 0xe55829814a6d2fcb);
  uVar4 = (uRam0000000183328b60 ^ 0xb894955650a220dc) << 0x2a |
          (uRam0000000183328b60 ^ 0xb894955650a220dc) >> 0x16;
  uRam00000001833288e0 = (uRam00000001833288e0 ^ uVar4) + 0xbad69f7e56f2bbfe ^ 0x21aa9c82cef9e4aa;
  uRam0000000183328af8 = (uRam0000000183328af8 * -0x1f90f07b71b53cc3 ^ uRam00000001833288e0) + uVar4
  ;
  uRam0000000183328be0 = uRam0000000183328af8 ^ uRam00000001833288e0;
  uRam0000000183328b68 = 0xbad69f7e56f2bbfe;
  uVar4 = (~uRam0000000183328b48 + 0x51be738deb1d6789) *
          ((uRam0000000183328930 ^ 0xe1b49ded85e38fac) +
          (uRam0000000183328930 & 0x61b49ded85e38fac) * 2);
  uVar4 = (uVar4 | uRam0000000183328980) + (uVar4 & uRam0000000183328980);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328a40 =
       func_0x00018ca13650((uVar4 | 0xb00aee606efee824) + (uVar4 & 0xb00aee606efee824));
  uVar4 = (uRam0000000183328a40 << 0x2d | uRam0000000183328a40 >> 0x13) >> 0x1b |
          (uRam0000000183328a40 >> 0x13) << 0x25;
  uRam00000001833288b8 = (uRam00000001833288b8 ^ uVar4) + 0xb00aee60eadccb01 ^ 0xa8958382ff14c921;
  uRam0000000183328780 = (uRam0000000183328780 * -0x4120888974e8511b ^ uRam00000001833288b8) + uVar4
  ;
  uRam0000000183328ad8 = uRam0000000183328780 ^ uRam00000001833288b8;
  uRam0000000183328b70 = 0xb00aee60eadccb01;
  uRam00000001833288e0 = func_0x00018ca13650(uRam00000001833287b8 ^ 0x7f80bc35bda1f3d9);
  uVar4 = (uRam00000001833288e0 & 0xffffffffff800000) -
          (uRam00000001833288e0 >> 1 & 0x5555555555400000);
  uVar4 = (uVar4 & 0x3333333333000000) + (uVar4 >> 2 & 0x3333333333300000);
  uVar4 = (uRam00000001833288e0 & 0xffffffffff800000) >> 0xe |
          ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f030000) * 0x101010101010101 & 0xff00000000000000;
  uRam0000000183328958 = (uRam0000000183328958 ^ uVar4) + 0x48235d7c81c95c20 ^ 0xa80561ae77fa7003;
  uRam0000000183328bf0 = (uRam0000000183328bf0 * -0x14faa67038385025 ^ uRam0000000183328958) + uVar4
  ;
  uRam0000000183328aa0 = uRam0000000183328bf0 ^ uRam0000000183328958;
  uRam0000000183328cc8 = 0x48235d7c81c95c20;
  uVar4 = (~uRam0000000183328be0 + 0xb7dca2837e36a3e1) *
          ((uRam0000000183328b58 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183328b58 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183328748) + (uVar4 & uRam0000000183328748);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328b78 =
       func_0x00018ca13650((uVar4 | 0xb7dca283fa14ff3a) + (uVar4 & 0xb7dca283fa14ff3a));
  uVar4 = (ulonglong)
          (~((((uint)uRam0000000183328b78 ^ 0xd3b95c20) & 0x7fffffff) * 0x4d5d7c49) & 0x7fff);
  uRam0000000183328810 = uRam0000000183328aa0 ^ uVar4 ^ 0xb7dca2837e3723df;
  uRam00000001833289e8 = (uRam00000001833289e8 ^ uVar4) + 0xb7dca2837e3723df ^ 0xc01b9e5e98411fa4;
  uRam0000000183328920 = (uRam0000000183328920 * -0x159bae0059bfa43d ^ uRam00000001833289e8) + uVar4
  ;
  uRam0000000183328898 = uRam0000000183328920 ^ uRam00000001833289e8;
  uRam0000000183328c20 = 0xb7dca2837e3723df;
  uVar4 = (~uRam0000000183328ba0 + 0x36392dc17906e3a) *
          ((uRam0000000183328860 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183328860 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183328728) + (uVar4 & uRam0000000183328728);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328a48 =
       func_0x00018ca13650((uVar4 | 0x36392dc93b24d1c) + (uVar4 & 0x36392dc93b24d1c));
  uRam0000000183328ad0 =
       (uRam0000000183328ad0 ^ 0x36392dc17906e39) + 0xfc9c6d23e86f91c7 ^ 0xfcc40c2a83d07d6a;
  uRam0000000183328890 =
       (uRam0000000183328890 * -0x2c87541a054a090b ^ uRam0000000183328ad0) + 0x36392dc17906e39;
  uRam00000001833289e0 = uRam0000000183328890 ^ uRam0000000183328ad0;
  uRam00000001833289d8 = 0xfc9c6d23e86f91c7;
  uRam0000000183328868 = func_0x00018ca13650(uRam0000000183328ba0 + 0xdbf25d6fdd91b202 ^ 0xbf);
  uVar4 = uRam0000000183328868 << 0xc | (uRam0000000183328868 & 0x7fffffffffffffff) >> 0x34;
  uRam0000000183328820 = uRam00000001833288d0 ^ uVar4 ^ 0x36392dc1790ee38;
  uRam0000000183328cb8 = (uRam0000000183328cb8 ^ uVar4) + 0x36392dc1790ee38 ^ 0xfe917011cc90aae6;
  uRam00000001833289a0 = (uRam00000001833289a0 * 0x65664180abbb8bff ^ uRam0000000183328cb8) + uVar4;
  uRam00000001833289c8 = uRam00000001833289a0 ^ uRam0000000183328cb8;
  uRam0000000183328b98 = 0x36392dc1790ee38;
  uVar4 = (uRam0000000183328c30 ^ _UNK_181fd9270) + uRam0000000183328890 + 0x84222325;
  uVar10 = (uRam0000000183328890 ^ _UNK_181fd9278) + uRam0000000183328c30 + 0x3fbfc71761ca8e54;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183328c30 ^ _UNK_181fd9270;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183328890 ^ _UNK_181fd9278;
  uRam0000000183328c40 =
       func_0x00018ca13650((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183328c30 + 0x3fbfc71761ca8e54) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183328890 + 0x84222325));
  uRam0000000183328ad8 =
       (uRam0000000183328ad8 ^ uRam0000000183328c40 ^ 0x3fbfc71761ca8e54) + 0xc04038e89e3571ac ^
       0xd4d43fee6d36c416;
  uRam0000000183328c30 =
       (uRam0000000183328c30 * -0x7d7e6ab643afb865 ^ uRam0000000183328ad8) +
       (uRam0000000183328c40 ^ 0x3fbfc71761ca8e54);
  uRam0000000183328788 = uRam0000000183328c30 ^ uRam0000000183328ad8;
  uRam00000001833287f8 = 0xc04038e89e3571ac;
  uVar4 = (uRam0000000183328c30 ^ _UNK_181fd9280) + uRam0000000183328950 + 0x3fbfc717e5e92d76;
  uVar10 = (uRam0000000183328950 ^ _UNK_181fd9288) + uRam0000000183328c30 + 0xc04038e89e3571ac;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183328c30 ^ _UNK_181fd9280;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183328950 ^ _UNK_181fd9288;
  uRam00000001833287f0 =
       func_0x00018ca13650((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183328c30 + 0xc04038e89e3571ac) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183328950 + 0x3fbfc717e5e92d76));
  uVar4 = uRam00000001833287f0 ^ 0xfffffffffffe7fff;
  uRam00000001833288e0 = uRam00000001833289c8 ^ uVar4 ^ 0x7fff;
  uRam0000000183328990 = (uRam0000000183328990 ^ uVar4) + 0x7fff ^ 0xe8b9b1a7ed5d1dd0;
  uRam00000001833288b8 = (uRam00000001833288b8 * 0x6037d736ea50d69 ^ uRam0000000183328990) + uVar4;
  uRam0000000183328b68 = uRam00000001833288b8 ^ uRam0000000183328990;
  uRam0000000183328ab8 = 0x7fff;
  uVar4 = (~uRam0000000183328b88 + 0xb00aee60eadccb02) *
          ((uRam0000000183328a78 ^ 0xbad69f7ed2d098db) +
          (uRam0000000183328a78 & 0x3ad69f7ed2d098db) * 2);
  uVar4 = (uVar4 | uRam0000000183328ca8) + (uVar4 & uRam0000000183328ca8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328b40 =
       func_0x00018ca13650((uVar4 | 0xadc711e380c53da) + (uVar4 & 0xadc711e380c53da));
  uRam0000000183328bc8 =
       (uRam0000000183328bc8 ^ uRam0000000183328b40 ^ 0xbad69f7e56f2bbfe) + 0xadc711ebc2e70ff ^
       0x3da620603fcaf95c;
  uRam0000000183328c18 =
       (uRam0000000183328c18 * -0x38f75dd1e6c35a5b ^ uRam0000000183328bc8) +
       (uRam0000000183328b40 ^ 0xbad69f7e56f2bbfe);
  uRam0000000183328a98 = uRam0000000183328c18 ^ uRam0000000183328bc8;
  uRam0000000183328c40 = 0xadc711ebc2e70ff;
  uRam00000001833287b8 = func_0x00018ca13650(uRam00000001833287a0 ^ 0x5dc32784d5ac6c54);
  uVar4 = uRam00000001833287b8 ^ 0x6add7ddebdaf76ff;
  uRam0000000183328bd8 = uRam0000000183328bf0 ^ uVar4 ^ 0x6ae18ddf41cf86ff;
  uRam0000000183328ad8 = (uRam0000000183328ae0 ^ uVar4) + 0x6ae18ddf41cf86ff ^ 0x6602817cb42b6964;
  uRam00000001833287d8 = (uRam00000001833287d8 * -0x1c5787cba3d6ed01 ^ uRam0000000183328ad8) + uVar4
  ;
  uRam0000000183328ad8 = uRam00000001833287d8 ^ uRam0000000183328ad8;
  uRam0000000183328bf0 = uRam0000000183328930 ^ 0x6ae18ddf41cf86ff;
  uRam0000000183328ae0 = 0x6ae18ddf41cf86ff;
  uVar4 = (~uRam0000000183328750 + 0x6ae18ddf41cf8700) *
          ((uRam0000000183328c50 ^ 0x6ae18ddfc5eda5da) +
          (uRam0000000183328c50 & 0x6ae18ddfc5eda5da) * 2);
  uVar4 = (uVar4 | 0x6ae18ddf41cf86ff) + (uVar4 & 0x6ae18ddf41cf86ff);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328700 =
       func_0x00018ca13650((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam0000000183328b08 = uRam0000000183328700 << 0x36 | uRam0000000183328700 >> 10;
  uRam00000001833288f0 = uRam00000001833288f0 ^ uRam0000000183328b08 ^ 0xe74fb11de2834bb2;
  uRam00000001833287d8 =
       (uRam00000001833287d8 * -0x7eb540b6bf3fd103 ^ uRam00000001833288f0) + uRam0000000183328b08;
  uRam0000000183328888 = uRam00000001833287d8 ^ uRam00000001833288f0;
  uRam00000001833289b0 = 0;
  uRam0000000183328b10 = func_0x00018ca13650(uRam00000001833288a0 + 0x54008355ffddff ^ 0x9f);
  uVar4 = uRam0000000183328b10 >> 1 | uRam0000000183328b10;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183328b10;
  uRam0000000183328858 = uRam0000000183328740 ^ uVar4 ^ 0x7fff;
  uRam0000000183328b70 = (uRam0000000183328b70 ^ uVar4) + 0x7fff ^ 0x51d5250f2b7b5cd;
  uRam0000000183328808 = (uRam0000000183328808 * 0x1e0e1b39cb6b7573 ^ uRam0000000183328b70) + uVar4;
  uRam0000000183328978 = uRam0000000183328808 ^ uRam0000000183328b70;
  uRam0000000183328880 = 0x7fff;
  uRam0000000183328bd8 = func_0x00018ca13650(uRam0000000183328790 + 0x80e728eae45fef44 ^ 0x74);
  uRam0000000183328878 =
       (uRam0000000183328878 ^ uRam0000000183328bd8) + 0x45296081a90d4401 ^ 0x232b3daa2bd7be7c;
  uRam0000000183328790 =
       (uRam0000000183328790 * -0x13e0971a6743dd15 ^ uRam0000000183328878) + uRam0000000183328bd8;
  uRam00000001833288a8 = uRam0000000183328790 ^ uRam0000000183328878;
  uRam00000001833289d8 = 0x45296081a90d4401;
  uVar4 = (uRam0000000183328980 ^ _UNK_181fd9290) + uRam0000000183328af8 + 0xbad69f7ed2d098db;
  uVar10 = (uRam0000000183328af8 ^ _UNK_181fd9298) + uRam0000000183328980 + 0x45296081a90d4401;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183328980 ^ _UNK_181fd9290;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183328af8 ^ _UNK_181fd9298;
  uRam00000001833289e8 =
       func_0x00018ca13650((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183328980 + 0x45296081a90d4401) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183328af8 + 0xbad69f7ed2d098db));
  uRam0000000183328ca0 =
       uRam0000000183328ca0 ^ uRam00000001833289e8 & 0x7fffffffffffffff ^ 0xd402c8b084bc69d9;
  uRam0000000183328710 =
       (uRam0000000183328710 * -0x70c0f055200657f5 ^ uRam0000000183328ca0) +
       (uRam00000001833289e8 & 0x7fffffffffffffff);
  uRam00000001833287e8 = uRam0000000183328710 ^ uRam0000000183328ca0;
  uRam0000000183328878 = 0;
  uVar4 = (uRam0000000183328a90 ^ _UNK_181fd92a0) + uRam0000000183328c28 + 0xb8949556d48003f9;
  uVar10 = (uRam0000000183328c28 ^ _UNK_181fd92a8) + uRam0000000183328a90 + 0xb894955650a220dc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183328a90 ^ _UNK_181fd92a0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183328c28 ^ _UNK_181fd92a8;
  uRam0000000183328910 =
       func_0x00018ca13650((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183328a90 + 0xb894955650a220dc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183328c28 + 0xb8949556d48003f9));
  uRam0000000183328cf8 =
       uRam0000000183328cf8 ^ uRam0000000183328910 ^ 0x3ef3e7071aa7bd10 ^ 0x1774d0d811e82ae6;
  uRam0000000183328960 =
       (uRam0000000183328960 * 0x30673860f5a28793 ^ uRam0000000183328cf8) +
       (uRam0000000183328910 ^ 0x3ef3e7071aa7bd10);
  uRam0000000183328a08 = uRam0000000183328960 ^ uRam0000000183328cf8;
  uRam0000000183328940 = 0;
  uRam0000000183328ce0 = func_0x00018ca13650(uRam0000000183328c10 ^ 0xffc40084a5ffdd07);
  auVar9 = _UNK_1800170c0;
  uVar4 = (uRam0000000183328ce0 ^ 0x7fff) << 0x1b | uRam0000000183328ce0 >> 0x25;
  uRam0000000183328820 = uRam0000000183328aa8 ^ uVar4 ^ 0x7fff;
  uRam0000000183328780 = (uRam0000000183328780 ^ uVar4) + 0x7fff ^ 0xb6920a26d1ac587d;
  uRam0000000183328768 = (uRam0000000183328768 * -0x2c66f5d934fb5a5b ^ uRam0000000183328780) + uVar4
  ;
  uRam0000000183328a78 = uRam0000000183328768 ^ uRam0000000183328780;
  auVar7._8_8_ = _UNK_18019c088;
  auVar7._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183328cf8 = 0x7fff;
  auVar8 = pshufb(auVar7 ^ _UNK_181fd92b0,_UNK_1800170c0);
  uVar10 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar10 + uRam00000001833287d8;
  if (auVar8._4_4_ < 0) {
    uVar4 = uRam0000000183328cb8 ^ uVar10;
  }
  uRam0000000183328b68 = func_0x00018ca13650(SUB161(auVar7 ^ _UNK_181fd92b0,5) ^ uVar4);
  uVar4 = (param_4 ^ uRam0000000183328b68) << 3 | (param_4 ^ uRam0000000183328b68) >> 0x3d;
  uVar3 = (uint)param_4 & 0x7fff;
  uRam0000000183328a30 = (ulonglong)uVar3;
  uRam0000000183328748 = (uRam0000000183328748 ^ uVar4) + uRam0000000183328a30 ^ 0xcb22ce368d5b1364;
  uRam0000000183328a60 = (uRam0000000183328a60 * -0x39892a5d91eafef5 ^ uRam0000000183328748) + uVar4
  ;
  uRam0000000183328c48 = uRam0000000183328a60 ^ uRam0000000183328748;
  uVar4 = (uRam0000000183328738 ^ _UNK_181fd92c0) + uRam0000000183328b88 + 0x84222325;
  uVar10 = (uRam0000000183328b88 ^ _UNK_181fd92c8) + uRam0000000183328738 + 0xccc98bf7;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183328738 ^ _UNK_181fd92c0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183328b88 ^ _UNK_181fd92c8;
  uVar3 = uVar3 ^ param_3;
  uRam0000000183328920 =
       func_0x00018ca13650((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183328738 + 0xccc98bf7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183328b88 + 0x84222325));
  uVar4 = (uRam0000000183328920 ^ 0xccc98bf7) & 0x1fffffffffff;
  uRam0000000183328ce0 = (uRam0000000183328ce0 ^ uVar4) - 0xccc98bf7 ^ 0x4e1e14eb0c0bc056;
  uRam0000000183328710 = (uRam0000000183328710 * -0x608ae1bd4e3220f3 ^ uRam0000000183328ce0) + uVar4
  ;
  uRam00000001833288f0 = uRam0000000183328710 ^ uRam0000000183328ce0;
  uRam00000001833288e0 = 0x33367409;
  uVar4 = (uRam0000000183328bc8 ^ _UNK_181fd92d0) + uRam00000001833287d8 + 0x84225b95;
  uVar10 = (uRam00000001833287d8 ^ _UNK_181fd92d8) + uRam0000000183328bc8 + 0xccc98bf7;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183328bc8 ^ _UNK_181fd92d0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833287d8 ^ _UNK_181fd92d8;
  uRam0000000183328ad0 =
       func_0x00018ca13650((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183328bc8 + 0xccc98bf7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001833287d8 + 0x84225b95));
  uVar4 = uRam0000000183328ad0 ^ 0x78b0;
  uVar10 = uVar4 >> 1 | uVar4;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar4;
  uRam0000000183328bc0 = uRam0000000183328b40 ^ uVar4 ^ 0xccca04a7;
  uRam00000001833289e0 = (uRam00000001833289e0 ^ uVar4) + 0xccca04a7 ^ 0xad8256968f1a8843;
  uRam0000000183328ca8 =
       (uRam0000000183328ca8 * -0x18ac3fa94413bd23 ^ uRam00000001833289e0) + uVar4 ^
       uRam00000001833289e0;
  uRam0000000183328838 = 0xccca04a7;
  uRam0000000183328708 = func_0x00018ca13650(uRam0000000183328ba8 ^ 0xffacffc4d7006e3c);
  uRam0000000183328928 =
       (uRam0000000183328928 ^ uRam0000000183328708) - 0xc3bdf6fe ^ 0x6cb8ebef67a27a3d;
  uRam0000000183328ba8 =
       (uRam0000000183328ba8 * 0x3c91ceb2b7d225e9 ^ uRam0000000183328928) + uRam0000000183328708;
  uRam0000000183328bc0 = uRam0000000183328ba8 ^ uRam0000000183328928;
  uRam00000001833287b0 = 0x3c420902;
  uVar4 = (~uRam00000001833289e0 + 0xc3bdf6ff) *
          ((uRam0000000183328c88 ^ 0x84225b95) +
          (ulonglong)((uint)uRam0000000183328c88 & 0x84225b95) * 2);
  uVar4 = (uVar4 | uRam00000001833287e8) + (uVar4 & uRam00000001833287e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328a30 =
       func_0x00018ca13650((uVar4 | 0x479fad6b) + (ulonglong)((uint)uVar4 & 0x479fad6b));
  uVar4 = uRam0000000183328a30 - (uRam0000000183328a30 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183328a30) * -0x3b4f4dc47cab8705 ^ 0x78b0;
  uRam0000000183328c30 = uRam0000000183328930 ^ uVar4 ^ 0xc3be6fae;
  uRam0000000183328c68 = (uRam0000000183328c68 ^ uVar4) + 0xc3be6fae ^ 0x69eb1f9bcb137a64;
  uRam0000000183328b78 = (uRam0000000183328b78 * -0x5ed8203bfd4bb9e7 ^ uRam0000000183328c68) + uVar4
  ;
  uRam00000001833287f0 = uRam0000000183328b78 ^ uRam0000000183328c68;
  uRam0000000183328790 = 0xc3be6fae;
  uVar4 = (uRam0000000183328bb8 ^ _UNK_181fd92e0) + uRam0000000183328870 + 0x84222325;
  uVar10 = (uRam0000000183328870 ^ _UNK_181fd92e8) + uRam0000000183328bb8 + 0xd529b8e1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183328bb8 ^ _UNK_181fd92e0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183328870 ^ _UNK_181fd92e8;
  uRam0000000183328998 =
       func_0x00018ca13650((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183328bb8 + 0xd529b8e1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183328870 + 0x84222325));
  uVar4 = uRam0000000183328998 - (uRam0000000183328998 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam0000000183328998) << 0x14 | uRam0000000183328998 >> 0x2c;
  uRam0000000183328788 = (uRam0000000183328788 ^ uVar4) - 0xd529b8e1 ^ 0x46597a421c264898;
  uRam0000000183328828 = (uRam0000000183328828 * -0x25bb14dece849af9 ^ uRam0000000183328788) + uVar4
  ;
  uRam0000000183328708 = uRam0000000183328828 ^ uRam0000000183328788;
  uRam0000000183328a08 = 0x2ad6471f;
  uVar4 = (~uRam0000000183328b58 + 0xd529b8e2) *
          ((uRam0000000183328ca0 ^ 0x84225b95) +
          (ulonglong)((uint)uRam0000000183328ca0 & 0x84225b95) * 2);
  uVar4 = (uVar4 | uRam0000000183328a70) + (uVar4 & uRam0000000183328a70);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328860 =
       func_0x00018ca13650((uVar4 | 0x510be374) + (ulonglong)((uint)uVar4 & 0x510be374));
  uVar4 = uRam0000000183328860 - (uRam0000000183328860 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (ulonglong)
          (~((uint)uRam0000000183328860 ^
            (uint)((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2)) &
          0x78b0);
  uRam00000001833287d0 = uRam0000000183328bb8 ^ uVar4 ^ 0xd52a3191;
  uRam0000000183328970 = (uRam0000000183328970 ^ uVar4) + 0xd52a3191 ^ 0xcc6b26624acb6cc5;
  uRam0000000183328a48 = (uRam0000000183328a48 * 0x31699d4d4da7bef9 ^ uRam0000000183328970) + uVar4;
  uRam0000000183328af8 = uRam0000000183328a48 ^ uRam0000000183328970;
  uRam0000000183328b50 = 0xd52a3191;
  uVar4 = (~uRam0000000183328890 + 0x4505ed1d) *
          ((uRam0000000183328c10 ^ 0x6ac1d4d8) +
          (ulonglong)((uint)uRam0000000183328c10 & 0x6ac1d4d8) * 2);
  uVar4 = (uVar4 | uRam00000001833288c8) + (uVar4 & uRam00000001833288c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328820 =
       func_0x00018ca13650((uVar4 | 0x2fc439c4) + (ulonglong)((uint)uVar4 & 0x2fc439c4));
  uVar4 = (uRam0000000183328820 ^ 0xefe7fffd) & 0x1ffffffffff;
  uRam0000000183328740 = uRam0000000183328780 ^ uVar4 ^ 0x133e9e519;
  uRam0000000183328860 = (uRam0000000183328860 ^ uVar4) + 0x133e9e519 ^ 0xdc45a222423e176b;
  uRam00000001833287e8 = (uRam00000001833287e8 * -0x36bb65665bf83787 ^ uRam0000000183328860) + uVar4
  ;
  uRam0000000183328ac0 = uRam00000001833287e8 ^ uRam0000000183328860;
  uRam0000000183328b80 = 0x33e9e519;
  uVar4 = (~uRam00000001833289f8 + 0x4505ed1d) *
          ((uRam0000000183328a98 ^ 0x6ac1d4d8) +
          (ulonglong)((uint)uRam0000000183328a98 & 0x6ac1d4d8) * 2);
  uVar4 = (uVar4 | uRam0000000183328b10) + (uVar4 & uRam0000000183328b10);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328708 =
       func_0x00018ca13650((uVar4 | 0x2fc439c4) + (ulonglong)((uint)uVar4 & 0x2fc439c4));
  uVar4 = uRam0000000183328708 >> 1 | uRam0000000183328708;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183328708;
  uRam0000000183328870 = (uRam0000000183328870 ^ uVar4) + 0x4401e51c ^ 0xc5812baed6b369f1;
  uRam00000001833287f0 = (uRam00000001833287f0 * 0x54f166a7021b98b5 ^ uRam0000000183328870) + uVar4;
  uRam0000000183328c20 = uRam00000001833287f0 ^ uRam0000000183328870;
  uRam0000000183328840 = 0x4401e51c;
  uVar4 = (~uRam0000000183328818 + 0x8803ca39) *
          ((uRam0000000183328758 ^ 0x2fc439c4) +
          (ulonglong)((uint)uRam0000000183328758 & 0x2fc439c4) * 2);
  uVar4 = (uVar4 | uRam00000001833289a8) + (uVar4 & uRam00000001833289a8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183328be8 =
       func_0x00018ca13650((uVar4 | 0xa7c7f3fc) + (ulonglong)((uint)uVar4 & 0xa7c7f3fc));
  uVar4 = uRam0000000183328be8 ^ 0xabe61ae1;
  uRam0000000183328be0 = uRam0000000183328980 ^ uVar4 ^ 0x133e9e519;
  uRam0000000183328768 = (uRam0000000183328768 ^ uVar4) + 0x133e9e519 ^ 0x9fe87257859c1b3c;
  uRam0000000183328b28 = (uRam0000000183328b28 * -0x450820390767497f ^ uRam0000000183328768) + uVar4
  ;
  uRam00000001833289c8 = uRam0000000183328b28 ^ uRam0000000183328768;
  uRam0000000183328908 = 0x33e9e519;
  uRam0000000183328710 = func_0x00018ca13650(uRam0000000183328c70 ^ 0x1f007bdd002183);
  uVar4 = uRam0000000183328710 - (uRam0000000183328710 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uRam0000000183328a30 =
       (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
       uRam0000000183328710;
  uRam00000001833288a0 = uRam00000001833288a0 ^ uRam0000000183328a30 ^ 0xf749bb6cab7a1b5b;
  uRam0000000183328990 =
       (uRam0000000183328990 * 0x4d6985b8df291ebb ^ uRam00000001833288a0) + uRam0000000183328a30;
  uRam0000000183328ad8 = uRam0000000183328990 ^ uRam00000001833288a0;
  uRam0000000183328b70 = 0;
  uRam0000000183328998 = func_0x00018ca13650(uRam0000000183328828 ^ 0x46ff7b93001d6d);
  uVar4 = uRam0000000183328998 ^ 0x78b0;
  uRam00000001833289a8 = uRam0000000183328830 ^ uVar4 ^ 0x78b0;
  uRam0000000183328a88 = (uRam0000000183328a88 ^ uVar4) + 0x78b0 ^ 0xa24b90b3266eb5a0;
  uRam00000001833287a0 = (uRam00000001833287a0 * 0x6802d4cf91ed371 ^ uRam0000000183328a88) + uVar4;
  uRam0000000183328c88 = uRam00000001833287a0 ^ uRam0000000183328a88;
  uRam0000000183328768 = 0x78b0;
  uVar4 = (~uRam0000000183328b28 + 0x100000000) *
          ((uRam0000000183328bf0 ^ 0x6ac1d4d8) +
          (ulonglong)((uint)uRam0000000183328bf0 & 0x6ac1d4d8) * 2);
  uVar4 = (uVar4 | uRam00000001833287c8) + (uVar4 & uRam00000001833287c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lVar5 = func_0x00018ca13650((uVar4 | 0x953e2b27) + (ulonglong)((uint)uVar4 & 0x953e2b27));
  uRam0000000183328990 =
       (ulonglong)(~(((uint)lVar5 ^ 0x111c0803) * 0x4fdbb4a5) & 0xeee3f7fd) ^ 0xeee3f7fd;
  uRam00000001833287e0 =
       (uRam00000001833287e0 ^ uRam0000000183328990) + 0x111c0802 ^ 0xed09dac1a23b0c88;
  uRam0000000183328990 = (lVar5 * -0x79b5632d72a93a3d ^ uRam00000001833287e0) + uRam0000000183328990
  ;
  uRam0000000183328bc8 = uRam0000000183328990 ^ uRam00000001833287e0;
  uRam00000001833287f8 = 0x111c0802;
  uVar4 = (uRam0000000183328740 ^ _UNK_181fd92f0) + uRam0000000183328cf0 + 0x6ac1d4d8;
  uVar10 = (uRam0000000183328cf0 ^ _UNK_181fd92f8) + uRam0000000183328740 + 0x111c0802;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183328740 ^ _UNK_181fd92f0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183328cf0 ^ _UNK_181fd92f8;
  uRam0000000183328bb8 =
       func_0x00018ca13650((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183328740 + 0x111c0802) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183328cf0 + 0x6ac1d4d8));
  uRam0000000183328a18 =
       uRam0000000183328a18 ^ uRam0000000183328bb8 ^ 0xff74bdffb2fdff8 ^ 0xe9017a2f12db7ca9;
  uRam00000001833287b0 =
       (uRam00000001833287b0 * -0x27a684a69d3e8fc1 ^ uRam0000000183328a18) +
       (uRam0000000183328bb8 ^ 0xff74bdffb2fdff8);
  uRam0000000183328b90 = uRam00000001833287b0 ^ uRam0000000183328a18;
  uRam00000001833289f8 = 0;
  uRam0000000183328820 = func_0x00018ca13650(uRam0000000183328c90 ^ 0xffe3007c1b001dab);
  uVar4 = (uRam0000000183328820 ^ 0xeee222fd) & 0x7fffffffff;
  uRam0000000183328b78 = uRam0000000183328b78 ^ uVar4 ^ 0xc3a71001b73c7abb;
  uRam0000000183328cf8 = (uRam0000000183328cf8 * -0x24409d5324821191 ^ uRam0000000183328b78) + uVar4
  ;
  uRam0000000183328b50 = uRam0000000183328cf8 ^ uRam0000000183328b78;
  uRam0000000183328760 = 0;
  uRam0000000183328b18 = func_0x00018ca13650(uRam00000001833288b0 ^ 0xffcaff849300217e);
  uVar4 = uRam0000000183328b18 - (uRam0000000183328b18 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183328b18;
  uRam0000000183328978 = uRam0000000183328848 ^ uVar4 ^ 0x78b0;
  uRam00000001833288b0 = (uRam00000001833288b0 ^ uVar4) + 0x78b0 ^ 0xd30a7192b44bbefb;
  uRam0000000183328970 = (uRam0000000183328970 * 0x2d027adf7c6bb03f ^ uRam00000001833288b0) + uVar4;
  uRam0000000183328b90 = uRam0000000183328970 ^ uRam00000001833288b0;
  uVar10 = (ulonglong)uVar3;
  auVar8._8_8_ = _UNK_181fd9308;
  auVar8._0_8_ = uVar10 ^ 0x84222325;
  uRam00000001833287e0 = 0x78b0;
  auVar9 = pshufb(auVar8 ^ _UNK_181fd9310,auVar9);
  uVar6 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar6 + lRam00000001833289b8;
  if (auVar9._4_4_ < 0) {
    uVar4 = uRam0000000183328c68 ^ uVar6;
  }
  uRam00000001833289a8 = func_0x00018ca13650(SUB161(auVar8 ^ _UNK_181fd9310,5) ^ uVar4);
  uVar4 = ~(ulonglong)((uint)uRam00000001833289a8 & 0xfffff800) & uVar10;
  lVar5 = uVar10 - (uVar3 & 0x78b0) * 2;
  uRam0000000183328a60 = (uRam0000000183328a60 ^ uVar4) + lVar5 + 0x78b0 ^ 0x93f90eadae424b78;
  uRam0000000183328c58 = (uRam0000000183328c58 * 0x26c1018703736a37 ^ uRam0000000183328a60) + uVar4;
  uRam0000000183328c28 = uRam0000000183328c58 ^ uRam0000000183328a60;
  uRam0000000183328ab8 = lVar5 + 0x78b0U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e00,0x18d);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ca0a24e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fd7410 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fg; aJd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ca136e0, runtime 6ffff46236e0) =====

void FUN_18ca136e0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ca1372b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fd9480 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fg; aJe (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ca146f0, runtime 6ffff46246f0) =====

void FUN_18ca146f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ca14779 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fd9a40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



