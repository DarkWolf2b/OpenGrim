// ===== Lsixtwo/es; _e247605082268ca529ec3d4615a01be3 ()V (handler @ image 18ceb0200, runtime 6ffff4ac0200) =====

void FUN_18ceb0200(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ceb02e8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820c57f8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/es; aup (Lsixtwo/hd;)V (handler @ image 18ce9a5a0, runtime 6ffff4aaa5a0) =====

void FUN_18ce9a5a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd62f,0x24f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ce9a664 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820c0680 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/es; auq (Lsixtwo/hq;)V (handler @ image 18ce9dc10, runtime 6ffff4aadc10) =====

void FUN_18ce9dc10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd62f,0x24f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ce9dcd4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820c1490 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/es; aur (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18cea0e30, runtime 6ffff4ab0e30) =====

undefined8 FUN_18cea0e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/es; aus (IJ)I (handler @ image 18cea0ec0, runtime 6ffff4ab0ec0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cea0ec0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = (uRam0000000183342f58 ^ _UNK_1820c4070) + uRam0000000183342ec0 + 0xba751a7d7bb63c57;
  uVar6 = (uRam0000000183342ec0 ^ _UNK_1820c4078) + uRam0000000183342f58 + 0x8ea24cd102d03e09;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183342f58 ^ _UNK_1820c4070;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183342ec0 ^ _UNK_1820c4078;
  uRam00000001833432c0 =
       func_0x00018ceac450((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183342f58 + 0x8ea24cd102d03e09) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183342ec0 + 0xba751a7d7bb63c57));
  uRam0000000183343180 =
       (uRam0000000183343180 ^ uRam00000001833432c0 ^ 0x34d756acfd44217b) + 0x34d756acfd44217b ^
       0x3a09cb029c475c4f;
  uRam0000000183343310 =
       (uRam0000000183343310 * 0x4c0f08f97cf2f3e7 ^ uRam0000000183343180) +
       (uRam00000001833432c0 ^ 0x34d756acfd44217b);
  uRam0000000183343140 = uRam0000000183343310 ^ uRam0000000183343180;
  uRam0000000183342e10 = 0x34d756acfd44217b;
  uRam0000000183343050 = func_0x00018ceac450(uRam0000000183343288 + 0xb08e265a9c8631df ^ 1);
  uRam0000000183342e60 = uRam0000000183342e60 + 0x9fa68520d1ab5278 ^ 0xa60cb86a01380ecd;
  uRam00000001833430b8 = uRam00000001833430b8 * -0x4f71c0306ae70685;
  uRam00000001833432d0 = 0x9fa68520d1ab5278;
  uVar5 = (~uRam0000000183343248 + 0x60597adf2e54ad89) *
          ((uRam0000000183343240 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183343240 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001833431e0) + (uVar5 & uRam00000001833431e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833430d0 =
       func_0x00018ceac450((uVar5 | 0x60597adfaa76f152) + (uVar5 & 0x60597adfaa76f152));
  uVar5 = uRam00000001833430d0 ^ 0x7fff;
  uRam0000000183342dc0 = uRam0000000183343028 ^ uVar5 ^ 0x60597adf2e552d87;
  uRam00000001833432f0 = (uRam00000001833432f0 ^ uVar5) + 0x60597adf2e552d87 ^ 0xfa4acac59db8e7be;
  uRam0000000183342d98 = (uRam0000000183342d98 * 0x3e69f3b7f7c3fba9 ^ uRam00000001833432f0) + uVar5;
  uRam0000000183343478 = uRam0000000183342d98 ^ uRam00000001833432f0;
  uRam0000000183342e28 = 0x60597adf2e552d87;
  uVar5 = (uRam0000000183343050 ^ _UNK_1820c4080) + uRam0000000183342ec0 + 0x60597adfaa770ea2;
  uVar6 = (uRam0000000183342ec0 ^ _UNK_1820c4088) + uRam0000000183343050 + 0x9fa68520d1ab5278;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183343050 ^ _UNK_1820c4080;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183342ec0 ^ _UNK_1820c4088;
  uRam00000001833433b8 =
       func_0x00018ceac450((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183343050 + 0x9fa68520d1ab5278) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183342ec0 + 0x60597adfaa770ea2));
  uVar5 = uRam00000001833433b8 ^ 0x850b6665a0af9548;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar5) >> 1 | uRam00000001833433b8 << 0x3f) ^ 0x60597adf2e552d87;
  uRam0000000183343390 = uRam00000001833434d8 ^ uVar5 ^ 0x7fff;
  uRam0000000183342fb0 = (uRam0000000183342fb0 ^ uVar5) + 0x7fff ^ 0x5d3e7fd151b35680;
  uRam0000000183342f80 = (uRam0000000183342f80 * -0x17fd8c401c1e6781 ^ uRam0000000183342fb0) + uVar5
  ;
  uRam0000000183342f68 = uRam0000000183342f80 ^ uRam0000000183342fb0;
  uRam00000001833430e0 = 0x7fff;
  uRam0000000183343150 = func_0x00018ceac450(uRam0000000183343188 + 0xbd0da6885d5eb89a ^ 0xc2);
  uRam0000000183342d00 =
       (uRam0000000183342d00 ^ uRam0000000183343150 ^ 0xa5bfa6cdfce53640) + 0x5a405932031ac9c0 ^
       0xffaa921ae8ab894a;
  uRam0000000183343400 =
       (uRam0000000183343400 * -0x46a37b3f27d986f3 ^ uRam0000000183342d00) +
       (uRam0000000183343150 ^ 0xa5bfa6cdfce53640);
  uRam0000000183343468 = uRam0000000183343400 ^ uRam0000000183342d00;
  uRam0000000183342e28 = uRam00000001833431a8 ^ 0x5a405932031ac9c0;
  uRam0000000183342fc0 = 0x5a405932031ac9c0;
  uRam0000000183343028 = func_0x00018ceac450(lRam0000000183343108 + 0x3d1590a879623a9aU ^ 0x1c);
  uRam0000000183342d78 = uRam0000000183343268 ^ uRam0000000183343100 ^ 0xa5bfa6cdfce5b63f;
  uRam0000000183343018 =
       (uRam0000000183343018 ^ uRam0000000183343100) + 0xa5bfa6cdfce5b63f ^ 0x2ba0aeb41391e15c;
  uRam0000000183343430 =
       (uRam0000000183343430 * 0x2a714fa347aa104b ^ uRam0000000183343018) + uRam0000000183343100;
  uRam00000001833434a8 = uRam0000000183343430 ^ uRam0000000183343018;
  uRam0000000183343388 = 0xa5bfa6cdfce5b63f;
  uVar5 = (~uRam00000001833431d8 + 0x5a405932031ac9c1) *
          ((uRam0000000183343028 ^ 0xa5bfa6cd78c7951a) +
          (uRam0000000183343028 & 0x25bfa6cd78c7951a) * 2);
  uVar5 = (uVar5 | uRam0000000183342dd0) + (uVar5 & uRam0000000183342dd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833433e8 =
       func_0x00018ceac450((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = uRam00000001833433e8 >> 1 | uRam00000001833433e8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001833433e8;
  uRam0000000183343138 = uRam0000000183343498 ^ uVar5 ^ 0x7fff;
  uRam0000000183342f08 = (uRam0000000183342f08 ^ uVar5) + 0x7fff ^ 0xf6a02321230375ce;
  uRam0000000183343218 = (uRam0000000183343218 * 0x7d73330a31cceb15 ^ uRam0000000183342f08) + uVar5;
  uRam0000000183342ed0 = uRam0000000183343218 ^ uRam0000000183342f08;
  uRam0000000183342dd0 = 0x7fff;
  uVar5 = (~uRam00000001833430c0 + 0xa8d465a090fb3c81) *
          ((uRam00000001833432c8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833432c8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183343138) + (uVar5 & uRam0000000183343138);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183342f58 =
       func_0x00018ceac450((uVar5 | 0xa8d465a014d91fa5) + (uVar5 & 0xa8d465a014d91fa5));
  uRam0000000183343450 =
       (uRam0000000183343450 ^ uRam0000000183342f58) + 0x572b9a5f6f04c380 ^ 0x657bdae545b5d539;
  uRam0000000183342d20 =
       (uRam0000000183342d20 * -0x1c66098b26454899 ^ uRam0000000183343450) + uRam0000000183342f58;
  uRam00000001833434a0 = uRam0000000183342d20 ^ uRam0000000183343450;
  uRam00000001833431a0 = 0x572b9a5f6f04c380;
  uRam00000001833431f8 = func_0x00018ceac450(uRam0000000183342d20 + 0x9fe0ac0bc65bd857 ^ 0xe8);
  uRam0000000183342d28 = uRam0000000183342e38 ^ uRam00000001833431f8 ^ 0xa8d465a090fbbc7f;
  uRam0000000183342da0 =
       (uRam0000000183342da0 ^ uRam00000001833431f8) + 0xa8d465a090fbbc7f ^ 0x61c7580c46f73032;
  uRam00000001833434f8 =
       (uRam00000001833434f8 * -0x45d847a6ecbc618d ^ uRam0000000183342da0) + uRam00000001833431f8;
  uRam0000000183342e88 = uRam00000001833434f8 ^ uRam0000000183342da0;
  uRam0000000183342e80 = uRam0000000183343158 ^ 0xa8d465a090fbbc7f;
  uRam00000001833433b0 = 0xa8d465a090fbbc7f;
  uVar5 = (uRam0000000183342e70 ^ _UNK_1820c4090) + uRam00000001833431b8 + 0xa8d465a014d99f5a;
  uVar6 = (uRam00000001833431b8 ^ _UNK_1820c4098) + uRam0000000183342e70 + 0x572b9a5f6f04c380;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183342e70 ^ _UNK_1820c4090;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833431b8 ^ _UNK_1820c4098;
  uRam0000000183343478 =
       func_0x00018ceac450((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183342e70 + 0x572b9a5f6f04c380) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833431b8 + 0xa8d465a014d99f5a));
  uVar5 = ~uRam0000000183343478 & 0xa8d465a090fbbc7f;
  uRam00000001833430b8 = uRam0000000183343370 ^ uVar5 ^ 0x7fff;
  uRam00000001833432b8 = (uRam00000001833432b8 ^ uVar5) + 0x7fff ^ 0x859f66fc57816b7f;
  uRam0000000183343078 = (uRam0000000183343078 * 0x2e7b62f031a7851f ^ uRam00000001833432b8) + uVar5;
  uRam0000000183342d00 = uRam0000000183343078 ^ uRam00000001833432b8;
  uRam0000000183342f70 = 0x7fff;
  uRam0000000183342ff0 = func_0x00018ceac450(uRam0000000183342ea0 ^ 0x4d3ad7815f47d189);
  uVar5 = uRam0000000183342ff0 >> 1 | uRam0000000183342ff0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183342ff0;
  uRam00000001833434c0 = uRam00000001833433c0 ^ uVar5 ^ 0x33d745abf87c217a;
  uRam0000000183343080 = (uRam0000000183343080 ^ uVar5) + 0x33d745abf87c217a ^ 0x4bbeb9408edbbcc2;
  uRam0000000183342e10 = (uRam0000000183342e10 * 0x5d392cd7e8a515d9 ^ uRam0000000183343080) + uVar5;
  uRam0000000183343178 = uRam0000000183342e10 ^ uRam0000000183343080;
  uRam0000000183343328 = 0x33d745abf87c217a;
  uVar5 = (~uRam0000000183342d30 + 0x34d756acfd44217c) *
          ((uRam0000000183342d00 ^ 0xfeffeefe7f15dcda) +
          (uRam0000000183342d00 & 0x7effeefe7f15dcda) * 2);
  uVar5 = (uVar5 | uRam0000000183342f50) + (uVar5 & uRam0000000183342f50);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183342e98 =
       func_0x00018ceac450((uVar5 | 0xca28b8528251fda1) + (uVar5 & 0xca28b8528251fda1));
  uRam00000001833432e0 =
       (uRam00000001833432e0 ^ uRam0000000183342e98 & 0xffffffffc0000000) + 0x34d746acf904217b ^
       0x4eae91bf96eed7ba;
  uRam0000000183342e10 =
       (uRam0000000183342e10 * -0x4d31f37708410777 ^ uRam00000001833432e0) +
       (uRam0000000183342e98 & 0xffffffffc0000000);
  uRam00000001833431a8 = uRam0000000183342e10 ^ uRam00000001833432e0;
  uRam0000000183342d98 = uRam0000000183343218 ^ 0x34d746acf904217b;
  uRam0000000183343498 = 0x34d746acf904217b;
  uVar5 = (uRam0000000183342da0 ^ _UNK_1820c40a0) + uRam00000001833434f8 + 0xca28b8528251fda1;
  uVar6 = (uRam00000001833434f8 ^ _UNK_1820c40a8) + uRam0000000183342da0 + 0x69ae8d59f20842f6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183342da0 ^ _UNK_1820c40a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833434f8 ^ _UNK_1820c40a8;
  uRam0000000183343290 =
       func_0x00018ceac450((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183342da0 + 0x69ae8d59f20842f6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833434f8 + 0xca28b8528251fda1));
  uVar5 = uRam0000000183343290 ^ 0xca28b8520673de84;
  uRam0000000183343388 = uRam0000000183343060 ^ uVar5 ^ 0x33d745abf87c217a;
  uRam0000000183343400 = (uRam0000000183343400 ^ uVar5) + 0x33d745abf87c217a ^ 0x2d6492e38657cf4d;
  uRam00000001833434e0 = (uRam00000001833434e0 * -0x21e711b599236ebb ^ uRam0000000183343400) + uVar5
  ;
  uRam00000001833432f8 = uRam00000001833434e0 ^ uRam0000000183343400;
  uRam0000000183342fd0 = 0x33d745abf87c217a;
  uRam00000001833431c0 = func_0x00018ceac450(uRam00000001833432c0 + 0xffe10083dd0021ff ^ 0x98);
  uRam0000000183342ee0 =
       (uRam00000001833431c0 & 0x3ffffffff8000) << 0x18 |
       (uRam00000001833431c0 & 0x3ffffffff8000) >> 0x28;
  uRam0000000183343428 = uRam0000000183343428 ^ uRam0000000183342ee0 ^ 0x665172c47faed05b;
  uRam0000000183343188 =
       (uRam0000000183343188 * -0x14d7d115a52c8ab1 ^ uRam0000000183343428) + uRam0000000183342ee0;
  uRam00000001833434c8 = uRam0000000183343188 ^ uRam0000000183343428;
  uRam00000001833433a8 = 0;
  uVar5 = (uRam00000001833434e8 ^ _UNK_1820c40b0) + uRam0000000183342f80 + 0xfeffeefe7f15dcda;
  uVar6 = (uRam0000000183342f80 ^ _UNK_1820c40b8) + (uRam00000001833434e8 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833434e8 ^ _UNK_1820c40b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183342f80 ^ _UNK_1820c40b8;
  uRam0000000183342f98 =
       func_0x00018ceac450((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001833434e8 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183342f80 + 0xfeffeefe7f15dcda));
  uVar6 = uRam0000000183342f98 ^ 0xfeffeefefb37ffff;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar6;
  uRam0000000183342f20 = (uRam0000000183342f20 ^ uVar6) + 0x100110104c80000 ^ 0x76de3dfeda77554f;
  uRam0000000183343448 = (uRam0000000183343448 * 0x23af4c90c0214717 ^ uRam0000000183342f20) + uVar6;
  uRam0000000183343418 = uRam0000000183343448 ^ uRam0000000183342f20;
  uRam00000001833433a8 = 0x100110104c80000;
  uRam0000000183343428 = func_0x00018ceac450(uRam0000000183342d30 ^ 0x123c6b7459304d8c);
  uVar5 = (uRam0000000183343428 ^ 0x655912befb000000) & 0xffffffffffc00000;
  uRam00000001833431b8 = uRam00000001833431b8 ^ uVar5 ^ 0xd340b155913c6e30;
  uRam0000000183342f18 = (uRam0000000183342f18 * -0x253ef2f453378e87 ^ uRam00000001833431b8) + uVar5
  ;
  uRam0000000183343360 = uRam0000000183342f18 ^ uRam00000001833431b8;
  uRam00000001833430b0 = 0;
  uVar5 = ((uRam0000000183342fa0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183342fa0 & 0x84225cda) * 2) * -uRam00000001833434f8;
  uVar5 = (uVar5 | uRam00000001833430e8) + (uVar5 & uRam00000001833430e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833433e8 =
       func_0x00018ceac450((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uRam0000000183342ed8 = uRam00000001833434e8 ^ uRam00000001833432d0 ^ 0x7fff;
  uRam0000000183342d20 = (uRam0000000183342d20 ^ uRam00000001833432d0) + 0x7fff ^ 0x104740176e7a3d53
  ;
  uRam0000000183342d78 =
       (uRam0000000183342d78 * 0x6e09d2963058df5 ^ uRam0000000183342d20) + uRam00000001833432d0;
  uRam00000001833432d0 = uRam0000000183342d78 ^ uRam0000000183342d20;
  uRam0000000183343158 = uRam0000000183343478 ^ 0x7fff;
  uRam0000000183343140 = 0x7fff;
  uVar5 = (uRam0000000183342e58 ^ _UNK_1820c40c0) + uRam0000000183342e28 + 0x62db4cfa1e37b583;
  uVar6 = (uRam0000000183342e28 ^ _UNK_1820c40c8) + uRam0000000183342e58 + 0x62db4cfa9a1596a6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183342e58 ^ _UNK_1820c40c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183342e28 ^ _UNK_1820c40c8;
  uRam0000000183343200 =
       func_0x00018ceac450((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183342e58 + 0x62db4cfa9a1596a6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183342e28 + 0x62db4cfa1e37b583));
  uVar5 = uRam0000000183343200 ^ 0x62db4cfa9a1596a6;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar5;
  uRam0000000183343080 = uRam0000000183343080 ^ uVar5 ^ 0xa6f11f426cee3c43;
  uRam0000000183342e90 = (uRam0000000183342e90 * -0x6de9306f6e5ae1d1 ^ uRam0000000183343080) + uVar5
  ;
  uRam0000000183343228 = uRam0000000183342e90 ^ uRam0000000183343080;
  uRam00000001833432b8 = 0;
  uRam0000000183342fb8 = func_0x00018ceac450(uRam0000000183342f20 + 0x54007c260021ff ^ 0x44);
  uVar5 = (ulonglong)(~(uint)uRam0000000183342fb8 & 0x7fff);
  uRam0000000183343010 = uRam0000000183342fa8 ^ uVar5 ^ 0x7fff;
  uRam0000000183342de0 = (uRam0000000183342de0 ^ uVar5) + 0x7fff ^ 0x4ea87705b87ff67b;
  uRam00000001833433b8 = (uRam00000001833433b8 * -0x1e2daaf67658b231 ^ uRam0000000183342de0) + uVar5
  ;
  uRam0000000183342f70 = uRam00000001833433b8 ^ uRam0000000183342de0;
  uRam00000001833433c0 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam0000000183342fe0;
  lVar4 = (param_4 ^ 0x84222325) + uRam0000000183342f30;
  uVar6 = uVar5 + lVar4;
  uVar7 = (uRam0000000183342f30 ^ 0x7fff) + uRam0000000183342fe0 + 0x7fff;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183342f30 ^ 0x7fff;
  uRam0000000183343350 =
       func_0x00018ceac450((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183342fe0 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar5 = uRam0000000183343350 >> 1 | uRam0000000183343350;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam0000000183343350;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001833431c0 = (ulonglong)uVar2;
  uRam0000000183343260 = (uRam0000000183343260 ^ uVar5) + uRam00000001833431c0 ^ 0xddddbbe675b1de7c;
  uRam00000001833431e8 = (uRam00000001833431e8 * -0x729b6f890849ae03 ^ uRam0000000183343260) + uVar5
  ;
  uRam0000000183343378 = uRam00000001833431e8 ^ uRam0000000183343260;
  uVar6 = uRam00000001833431c0 ^ 0x84222325;
  uVar5 = ((uRam0000000183342e38 ^ uVar6) +
          (ulonglong)((uint)uRam0000000183342e38 & (uint)uVar6) * 2) *
          ((ulonglong)param_3 - lRam0000000183343308);
  uVar5 = (uVar5 | uRam0000000183342ef0) + (uVar5 & uRam0000000183342ef0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar6 = uVar6 ^ param_3;
  uRam00000001833433a0 =
       func_0x00018ceac450((uVar6 | uVar5) + (ulonglong)((uint)uVar6 & (uint)uVar5));
  uVar6 = (ulonglong)(uVar2 ^ param_3);
  uRam0000000183343218 = (uRam0000000183343218 ^ uRam00000001833433a0) + uVar6 ^ 0xfe680b09511c571;
  uRam00000001833434c0 =
       (uRam00000001833434c0 * -0x68b806b94b3b005b ^ uRam0000000183343218) + uRam00000001833433a0;
  uRam0000000183343320 = uRam00000001833434c0 ^ uRam0000000183343218;
  uVar5 = (uRam0000000183342eb8 ^ _UNK_1820c40d0) + uRam0000000183342e90 + 0x5808599b;
  uVar7 = (uRam0000000183342e90 ^ _UNK_1820c40d8) + uRam0000000183342eb8 + 0x638b4b68;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183342eb8 ^ _UNK_1820c40d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183342e90 ^ _UNK_1820c40d8;
  uRam0000000183343160 = uVar6;
  uRam00000001833431a0 =
       func_0x00018ceac450((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183342eb8 + 0x638b4b68) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183342e90 + 0x5808599b));
  uVar2 = ((uint)uRam00000001833431a0 ^ 0x9c203096) & 0xdc2a7abe;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar5 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          (ulonglong)uVar2;
  uRam0000000183342f08 = (uRam0000000183342f08 ^ uVar5) + 0xffab7bfe ^ 0x2634830a926d73e1;
  uRam0000000183342e20 = (uRam0000000183342e20 * -0x2a060a146d7bbbf3 ^ uRam0000000183342f08) + uVar5
  ;
  uRam00000001833434a0 = uRam0000000183342e20 ^ uRam0000000183342f08;
  uRam00000001833430b8 = 0xffab7bfe;
  uVar5 = (~uRam0000000183343378 + 0x9d4fa3b0) *
          ((uRam00000001833433c0 ^ 0xb783a5a4) +
          (ulonglong)((uint)uRam00000001833433c0 & 0xb783a5a4) * 2);
  uVar5 = (uVar5 | uRam00000001833433f8) + (uVar5 & uRam00000001833433f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833430e8 =
       func_0x00018ceac450((uVar5 | 0x2acc060b) + (ulonglong)((uint)uVar5 & 0x2acc060b));
  uVar5 = (uRam00000001833430e8 ^ 0xbfefa7af) & 0x1ffffffffffff ^ 0x9d4fa3af;
  uRam0000000183343158 = (uRam0000000183343158 ^ uVar5) + 0xaeee252e ^ 0x354c09e41b11f5d8;
  uRam0000000183343090 = (uRam0000000183343090 * -0x5ee9be7638839351 ^ uRam0000000183343158) + uVar5
  ;
  uRam0000000183343180 = uRam0000000183343090 ^ uRam0000000183343158;
  uRam0000000183343360 = uRam0000000183342d30 ^ 0xaeee252e;
  uRam0000000183343010 = 0xaeee252e;
  uVar5 = (~uRam00000001833430d0 + 0xb9a389d5) *
          ((uRam00000001833431a8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833431a8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183342f78) + (uVar5 & uRam0000000183342f78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183343240 =
       func_0x00018ceac450((uVar5 | 0x3d81aaf1) + (ulonglong)((uint)uVar5 & 0x3d81aaf1));
  uRam0000000183342d78 =
       (uRam0000000183342d78 ^ uRam0000000183343240) - 0xb9a389d4 ^ 0x830cc409517c1a26;
  uRam00000001833431f0 =
       (uRam00000001833431f0 * -0x2784bfcd556221fb ^ uRam0000000183342d78) + uRam0000000183343240;
  uRam0000000183342f80 = uRam00000001833431f0 ^ uRam0000000183342d78;
  uRam0000000183343288 = uRam0000000183343338 ^ 0xffffffff465c762c;
  uRam0000000183342ea0 = 0x465c762c;
  uVar5 = (~uRam0000000183342f50 + 0x465c762d) *
          ((uRam0000000183343398 ^ 0x3d81ba5f) +
          (ulonglong)((uint)uRam0000000183343398 & 0x3d81ba5f) * 2);
  uVar5 = (uVar5 | uRam0000000183342f40) + (uVar5 & uRam0000000183342f40);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183343360 =
       func_0x00018ceac450((uVar5 | 0x7bddcc73) + (ulonglong)((uint)uVar5 & 0x7bddcc73));
  uVar5 = uRam0000000183343360 * 0x4dbd1b7b0beadb9;
  uRam0000000183343330 = uRam0000000183342e40 ^ uVar5 ^ 0x100000fa6;
  uRam0000000183343100 = (uRam0000000183343100 ^ uVar5) + 0x100000fa6 ^ 0x788204de621646f2;
  uRam0000000183342d00 = (uRam0000000183342d00 * 0x230fca64b0e587eb ^ uRam0000000183343100) + uVar5;
  uRam0000000183343098 = uRam0000000183342d00 ^ uRam0000000183343100;
  uRam00000001833430e8 = 0xfa6;
  uRam00000001833431b8 = func_0x00018ceac450(uRam0000000183342e48 + 0xff8b003113ffffff ^ 0x81);
  uVar5 = (uRam00000001833431b8 << 0x2b | uRam00000001833431b8 >> 0x15) ^ 0xb522b1f7;
  uRam0000000183343168 = uRam0000000183342d00 ^ uVar5 ^ 0xb522c19d;
  uRam00000001833434c0 = (uRam00000001833434c0 ^ uVar5) + 0xb522c19d ^ 0x52bc6ece1db73a33;
  uRam00000001833430c8 = (uRam00000001833430c8 * -0x7a6348280285a8c9 ^ uRam00000001833434c0) + uVar5
  ;
  uRam0000000183343028 = uRam00000001833430c8 ^ uRam00000001833434c0;
  uRam00000001833433a0 = 0xb522c19d;
  uVar5 = (uRam0000000183343238 ^ _UNK_1820c40e0) + uRam0000000183342e20 + 0x3100e2b8;
  uVar7 = (uRam0000000183342e20 ^ _UNK_1820c40e8) + uRam0000000183343238 + 0x4add4e09;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183343238 ^ _UNK_1820c40e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183342e20 ^ _UNK_1820c40e8;
  uRam0000000183343398 =
       func_0x00018ceac450((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183343238 + 0x4add4e09) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183342e20 + 0x3100e2b8));
  uVar5 = uRam0000000183343398 - (uRam0000000183343398 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~((uint)uRam0000000183343398 ^
            (uint)((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2)) &
          0xb522c19d);
  uRam0000000183343090 = uRam0000000183342d38 ^ uVar5 ^ 0x100000fa6;
  uRam0000000183343100 = (uRam0000000183343100 ^ uVar5) + 0x100000fa6 ^ 0x4f8724b713f62a21;
  uRam00000001833432d8 = (uRam00000001833432d8 * -0x78a2905edc262f7 ^ uRam0000000183343100) + uVar5;
  uRam0000000183343468 = uRam00000001833432d8 ^ uRam0000000183343100;
  uRam0000000183342db8 = 0xfa6;
  uVar5 = (~uRam0000000183343480 + 0x511df6df) *
          ((uRam0000000183343448 ^ 0x84222c83) +
          (ulonglong)((uint)uRam0000000183343448 & 0x84222c83) * 2);
  uVar5 = (uVar5 | uRam0000000183343150) + (uVar5 & uRam0000000183343150);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183343028 =
       func_0x00018ceac450((uVar5 | 0xd53fda5d) + (ulonglong)((uint)uVar5 & 0xd53fda5d));
  uVar5 = uRam0000000183343028 << 2 | uRam0000000183343028 >> 0x3e;
  uRam0000000183342fe0 = uRam00000001833434a0 ^ uVar5 ^ 0x511e0684;
  uRam00000001833431b8 = (uRam00000001833431b8 ^ uVar5) + 0x511e0684 ^ 0xb17c4dbc5d7345ed;
  uRam0000000183342d78 = (uRam0000000183342d78 * 0x6fbcb01a5322dd3b ^ uRam00000001833431b8) + uVar5;
  uRam0000000183342d58 = uRam0000000183342d78 ^ uRam00000001833431b8;
  uRam0000000183343008 = 0x511e0684;
  uVar5 = (~uRam0000000183342dc0 + 0xaee20923) *
          ((uRam00000001833430d8 ^ 0xd53c25a1) +
          (ulonglong)((uint)uRam00000001833430d8 & 0xd53c25a1) * 2);
  uVar5 = (uVar5 | uRam0000000183343070) + (uVar5 & uRam0000000183343070);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183342ff8 =
       func_0x00018ceac450((uVar5 | 0x7bde2c83) + (ulonglong)((uint)uVar5 & 0x7bde2c83));
  uVar5 = (uRam0000000183342ff8 & 0x7fffffffffffffff) * 0x4f3c52259fc218b7;
  uRam0000000183343298 = uRam0000000183342ed8 ^ uVar5 ^ 0x100000fa6;
  uRam0000000183343340 = (uRam0000000183343340 ^ uVar5) + 0x100000fa6 ^ 0xb12de2e4edfcdebc;
  uRam0000000183343468 = (uRam0000000183343468 * 0x1eb83bd81090e781 ^ uRam0000000183343340) + uVar5;
  uRam0000000183342ea0 = uRam0000000183343468 ^ uRam0000000183343340;
  uRam0000000183342e00 = 0xfa6;
  uRam0000000183343068 = func_0x00018ceac450(uRam0000000183343098 ^ 0xffb500d32d002008);
  uVar5 = (uRam0000000183343068 ^ 0xaeb464d5a3dffda4) << 0x33 |
          (uRam0000000183343068 ^ 0xaeb464d5a3dffda4) >> 0xd;
  uRam0000000183343020 = uRam0000000183342f18 ^ uVar5 ^ 0x1ae99a12c;
  uRam0000000183342e20 = (uRam0000000183342e20 ^ uVar5) + 0x1ae99a12c ^ 0xe0c4353a7a494555;
  uRam00000001833430e8 = (uRam00000001833430e8 * 0x60d9783358d99767 ^ uRam0000000183342e20) + uVar5;
  uRam0000000183342f10 = uRam00000001833430e8 ^ uRam0000000183342e20;
  uRam0000000183342e28 = 0xae99a12c;
  uRam00000001833432b0 = func_0x00018ceac450(uRam0000000183342ed8 ^ 0x44ffb32b002023);
  uRam0000000183343438 =
       (uRam0000000183343438 ^ uRam0000000183342d98 ^ 0xffab7bfe) + 0x51455ed0 ^ 0xef5c2687c5c587b7;
  uRam0000000183342f58 =
       (uRam0000000183342f58 * -0x1505a799b7696097 ^ uRam0000000183343438) +
       (uRam0000000183342d98 ^ 0xffab7bfe);
  uRam0000000183342dd0 = uRam0000000183342f58 ^ uRam0000000183343438;
  uRam00000001833431b8 = 0x51455ed0;
  uVar5 = (~uRam0000000183343318 + 0xaeee252f) *
          ((uRam0000000183343290 ^ 0x7b8958db) +
          (ulonglong)((uint)uRam0000000183343290 & 0x7b8958db) * 2);
  uVar5 = (uVar5 | uRam00000001833432c0) + (uVar5 & uRam00000001833432c0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833433d0 =
       func_0x00018ceac450((uVar5 | 0xd5677df5) + (ulonglong)((uint)uVar5 & 0xd5677df5));
  uVar5 = (ulonglong)(~(uint)uRam00000001833433d0 & 0xffab7bfe) ^ 0xaeee252e;
  uRam0000000183342f30 = (uRam0000000183342f30 ^ uVar5) + 0xaeaa212e ^ 0x8c37c3b564c99934;
  uRam00000001833434e8 = (uRam00000001833434e8 * -0x6f65d07404a8eaa3 ^ uRam0000000183342f30) + uVar5
  ;
  uRam0000000183343178 = uRam00000001833434e8 ^ uRam0000000183342f30;
  uRam0000000183342e40 = 0xaeaa212e;
  uRam0000000183343118 = func_0x00018ceac450(lRam0000000183343130 + 0xffccff7858ffd0ffU ^ 0x20);
  uVar5 = (ulonglong)(~(uint)uRam0000000183343118 & 0x51455ed0);
  uRam0000000183342d30 = uRam0000000183343478 ^ uVar5 ^ 0xae99a12c;
  uRam0000000183343498 = (uRam0000000183343498 ^ uVar5) + 0xae99a12c ^ 0xf2a94dab3d10e417;
  uRam0000000183342f00 = (uRam0000000183342f00 * -0x1904c5c0fe5af1fb ^ uRam0000000183343498) + uVar5
  ;
  uRam0000000183342d50 = uRam0000000183342f00 ^ uRam0000000183343498;
  uRam0000000183342fd8 = 0xae99a12c;
  uVar5 = (uRam0000000183342e98 ^ _UNK_1820c40f0) + uRam0000000183343220 + 0x2abb8209;
  uVar7 = (uRam0000000183343220 ^ _UNK_1820c40f8) + uRam0000000183342e98 + 0xae99a12c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183342e98 ^ _UNK_1820c40f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183343220 ^ _UNK_1820c40f8;
  uRam0000000183343478 =
       func_0x00018ceac450((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183342e98 + 0xae99a12c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183343220 + 0x2abb8209));
  uRam0000000183343280 =
       (uRam0000000183343478 ^ 0x77153349dc105f90) << 0x30 |
       (uRam0000000183343478 ^ 0x77153349dc105f90) >> 0x10;
  uRam0000000183342ee0 = uRam0000000183342ee0 ^ uRam0000000183343280 ^ 0xa55b8d89eb779283;
  uRam0000000183343000 =
       (uRam0000000183343000 * -0x665668ae422dab93 ^ uRam0000000183342ee0) + uRam0000000183343280;
  uRam0000000183343110 = uRam0000000183343000 ^ uRam0000000183342ee0;
  uRam0000000183343098 = 0;
  uVar5 = (uRam0000000183342e98 ^ 0x84222c83) + uRam00000001833430c8 + 0x84222c83;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183342e98 ^ 0x84222c83;
  uVar7 = ((uRam00000001833430c8 + uRam0000000183342e98) * 0x2000 |
          uRam00000001833430c8 + uRam0000000183342e98 >> 0x33) ^ uRam00000001833430c8;
  uRam0000000183342f70 =
       func_0x00018ceac450((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183342e98 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833430c8 + 0x84222c83));
  uVar5 = (ulonglong)(~(uint)uRam0000000183342f70 & 0xfa6);
  uRam0000000183343420 = uRam0000000183342e50 ^ uVar5 ^ 0xfa6;
  uRam0000000183343340 = (uRam0000000183343340 ^ uVar5) + 0xfa6 ^ 0xe98d333157506d97;
  uRam0000000183342d98 = (uRam0000000183342d98 * 0x3dfa73e7136eaa93 ^ uRam0000000183343340) + uVar5;
  uRam0000000183343028 = uRam0000000183342d98 ^ uRam0000000183343340;
  uRam0000000183342e38 = 0xfa6;
  uRam0000000183343038 = func_0x00018ceac450(lRam0000000183343170 + 0xff5b007c1bfff5ffU ^ 6);
  uVar5 = (uRam0000000183343038 ^ 0xfffffffc) & 0xfffffffffffffffc;
  uRam0000000183343250 = (uRam0000000183343250 ^ uVar5) + 0x548401 ^ 0x50b5f32592ea5a73;
  uRam0000000183342e20 = (uRam0000000183342e20 * -0x4361ab278bf52db ^ uRam0000000183343250) + uVar5;
  uRam0000000183342e28 = uRam0000000183342e20 ^ uRam0000000183343250;
  uRam00000001833430d0 = 0x548401;
  uVar5 = (uRam00000001833431a0 ^ _UNK_1820c4100) + uRam0000000183342f00 + 0x7b8958db;
  uVar7 = (uRam0000000183342f00 ^ _UNK_1820c4108) + uRam00000001833431a0 + 0x548401;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833431a0 ^ _UNK_1820c4100;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183342f00 ^ _UNK_1820c4108;
  uRam0000000183342e80 =
       func_0x00018ceac450((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833431a0 + 0x548401) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183342f00 + 0x7b8958db));
  uRam00000001833432a8 =
       uRam00000001833432a8 ^ uRam0000000183342ea8 ^ 0xffab7bfe ^ 0x36cadaf463c01b3d;
  uRam0000000183343300 =
       (uRam0000000183343300 * 0x563537cf9dac7133 ^ uRam00000001833432a8) +
       (uRam0000000183342ea8 ^ 0xffab7bfe);
  uRam0000000183342ef0 = uRam0000000183343300 ^ uRam00000001833432a8;
  uRam0000000183343070 = uRam0000000183343178;
  uRam0000000183342f38 = 0;
  uRam0000000183343270 = func_0x00018ceac450(uRam0000000183342fc0 ^ 0x1bff847cffe1ed);
  uVar5 = uRam0000000183343270 & 0xfffffffffffffff;
  uRam0000000183343380 = uRam00000001833431e0 ^ uVar5 ^ 0xfa6;
  uRam00000001833430b0 = (uRam00000001833430b0 ^ uVar5) + 0xfa6 ^ 0x72b06c65740fbaf8;
  uRam0000000183343180 = (uRam0000000183343180 * -0xc1e0230b5a1537b ^ uRam00000001833430b0) + uVar5;
  uRam00000001833432b0 = uRam0000000183343180 ^ uRam00000001833430b0;
  uRam00000001833430a8 = 0xfa6;
  uVar5 = (uRam0000000183343200 ^ _UNK_1820c4110) + uRam00000001833430f0 + 0x5808599b;
  uVar7 = (uRam00000001833430f0 ^ _UNK_1820c4118) + uRam0000000183343200 + 0xdc2a7abe;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183343200 ^ _UNK_1820c4110;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833430f0 ^ _UNK_1820c4118;
  uRam0000000183343450 =
       func_0x00018ceac450((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183343200 + 0xdc2a7abe) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833430f0 + 0x5808599b));
  uVar5 = (uRam0000000183343450 ^ 0xdc2a7abe) & 0xffffffffffffff;
  uRam0000000183342dc8 = uRam0000000183342dc8 ^ uVar5 ^ 0xe1595cbb4a7550c3;
  uRam0000000183342d00 = (uRam0000000183342d00 * 0x45166545e7990649 ^ uRam0000000183342dc8) + uVar5;
  uRam00000001833431a8 = uRam0000000183342d00 ^ uRam0000000183342dc8;
  uRam0000000183343480 = 0;
  uVar5 = ((uRam0000000183343428 ^ 0x84222c83) +
          (ulonglong)((uint)uRam0000000183343428 & 0x84222c83) * 2) * -uRam00000001833432a8;
  uVar5 = (uVar5 | uRam0000000183343298) + (uVar5 & uRam0000000183343298);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833434f0 =
       func_0x00018ceac450((uVar5 | 0x84222c83) + (ulonglong)((uint)uVar5 & 0x84222c83));
  uVar5 = uRam00000001833434f0 & 0x3ffffffffff;
  uRam00000001833432d0 = uRam0000000183343110 ^ uVar5 ^ 0xfa6;
  uRam00000001833433d8 = (uRam00000001833433d8 ^ uVar5) + 0xfa6 ^ 0x172f4a73a2720172;
  uRam0000000183342e48 = (uRam0000000183342e48 * -0x68c964d2e24cc7f3 ^ uRam00000001833433d8) + uVar5
  ;
  uRam00000001833430f8 = uRam0000000183342e48 ^ uRam00000001833433d8;
  uRam0000000183342ff8 = 0xfa6;
  uVar5 = uVar6 ^ 0x84222325 ^ uRam00000001833434d8;
  lVar4 = (uVar6 ^ 0x84222325) + uRam0000000183343038;
  uVar7 = uVar5 + lVar4;
  uVar8 = (uRam0000000183343038 ^ 0xfa6) + uRam00000001833434d8 + 0xfa6;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183343038 ^ 0xfa6;
  uRam00000001833434f0 =
       func_0x00018ceac450((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833434d8 + 0xfa6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar5 = uRam00000001833434f0 << 5 | uRam00000001833434f0 >> 0x3b;
  uRam0000000183343088 = uVar6 ^ 0xfa6;
  uRam0000000183342d00 = (uRam0000000183342d00 ^ uVar5) + uRam0000000183343088 ^ 0xc4a36ffe36d68fa0;
  uRam0000000183342f40 = (uRam0000000183342f40 * 0x7ac6f43e0ce2a2b7 ^ uRam0000000183342d00) + uVar5;
  uRam0000000183342f90 = uRam0000000183342f40 ^ uRam0000000183342d00;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd62f,0x24f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cea38fa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820c2210 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/es; aut (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ceac4e0, runtime 6ffff4abc4e0) =====

void FUN_18ceac4e0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ceac52b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820c4220 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/es; auu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18cead4f0, runtime 6ffff4abd4f0) =====

void FUN_18cead4f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cead579 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820c47e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



