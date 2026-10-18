// ===== Lsixtwo/el; _e46056dffe9d6e6edddd85a8c13dc18b ()V (handler @ image 18d20b5b0, runtime 6ffff4e1b5b0) =====

void FUN_18d20b5b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d20b698 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182182df0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/el; atb (Lsixtwo/gH$th;)V (handler @ image 18d1e1600, runtime 6ffff4df1600) =====

void FUN_18d1e1600(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xce02,0x236);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1e16c1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821774e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/el; atc ()V (handler @ image 18d1e7660, runtime 6ffff4df7660) =====

void FUN_18d1e7660(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xce02,0x236);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1e774b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821792b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/el; atd ()V (handler @ image 18d1f7d80, runtime 6ffff4e07d80) =====

void FUN_18d1f7d80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xce02,0x236);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1f7e3e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18217e0f8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/el; ate (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d1fc540, runtime 6ffff4e0c540) =====

undefined8 FUN_18d1fc540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/el; atf (IJ)I (handler @ image 18d1fc5d0, runtime 6ffff4e0c5d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1fc5d0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (uRam000000018334f6b0 ^ _UNK_182181680) + uRam000000018334f288 + 0x67a82a7c0b5ee5ae;
  uVar5 = (uRam000000018334f288 ^ _UNK_182181688) + uRam000000018334f6b0 + 0xa16468448ae60192;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f6b0 ^ _UNK_182181680;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f288 ^ _UNK_182181688;
  uRam000000018334f4a0 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334f6b0 + 0xa16468448ae60192) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018334f288 + 0x67a82a7c0b5ee5ae));
  uVar4 = uRam000000018334f4a0 >> 0x18 ^ 0x67a82a7c8f;
  lVar2 = uVar4 * 0x1000000;
  uVar4 = lVar2 + (uVar4 & 0xaaaaaaaaaa) * -0x800000;
  uVar4 = (uVar4 & 0x3333333333000000) + (uVar4 >> 2 & 0x3333333333000000);
  uVar4 = lVar2 + (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f000000) * 0x101010101010101 >> 0x38) * 4;
  uRam000000018334f4b8 = (uRam000000018334f4b8 ^ uVar4) + 0xe7ec6a7c8ffec79b ^ 0xd17318854c9a5c9;
  uRam000000018334f470 = (uRam000000018334f470 * -0x6e34b620db3b535b ^ uRam000000018334f4b8) + uVar4
  ;
  uRam000000018334f5f8 = uRam000000018334f470 ^ uRam000000018334f4b8;
  uRam000000018334f440 = 0xe7ec6a7c8ffec79b;
  uVar4 = (uRam000000018334f2c0 ^ _UNK_182181690) + uRam000000018334f5d8 + 0xc205fc13d6f6400;
  uVar5 = (uRam000000018334f5d8 ^ _UNK_182181698) + uRam000000018334f2c0 + 0x8dc61835c901d03f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f2c0 ^ _UNK_182181690;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f5d8 ^ _UNK_182181698;
  uVar4 = func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) -
                              (uRam000000018334f2c0 + 0x8dc61835c901d03f) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) -
                              (uRam000000018334f5d8 + 0xc205fc13d6f6400));
  uVar4 = (uVar4 ^ 0x474d900db7f7921b) & 0x7fffffffffffffff ^ 0x8dc61835c901d03f;
  uRam000000018334f638 = (uRam000000018334f638 ^ uVar4) + 0x81e647f4704c971a ^ 0xdc6c2e313411c48c;
  uRam000000018334f6c8 = (uRam000000018334f6c8 * -0x661249928e4ca0b5 ^ uRam000000018334f638) + uVar4
  ;
  uRam000000018334f248 = uRam000000018334f6c8 ^ uRam000000018334f638;
  uRam000000018334f530 = -0x7e19b80b8fb368e6;
  uVar4 = (~uRam000000018334f320 + 0xce3139629f41a20e) *
          ((uRam000000018334f6f8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018334f6f8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018334f340) + (uVar4 & uRam000000018334f340);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f400 =
       func_0x00018d207800((uVar4 | 0xce3139621b638128) + (uVar4 & 0xce3139621b638128));
  uVar4 = uRam000000018334f400 ^ 0xce3139629f41a20d;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  uRam000000018334f130 = (uRam000000018334f130 ^ uVar4) + 0x31cec69d60be5df3 ^ 0x6c83e1dcd586f769;
  uRam000000018334f128 = (uRam000000018334f128 * -0x3347bdcd12d25269 ^ uRam000000018334f130) + uVar4
  ;
  uRam000000018334f2d8 = uRam000000018334f128 ^ uRam000000018334f130;
  uRam000000018334f5a0 = 0x31cec69d60be5df3;
  uVar4 = (uRam000000018334f1a8 ^ _UNK_1821816a0) + uRam000000018334f6f8 + 0x84225cda;
  uVar5 = (uRam000000018334f6f8 ^ _UNK_1821816a8) + uRam000000018334f1a8 + 0xce3139629f41a20d;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f1a8 ^ _UNK_1821816a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f6f8 ^ _UNK_1821816a8;
  uRam000000018334f1c0 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334f1a8 + 0xce3139629f41a20d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334f6f8 + 0x84225cda));
  uVar4 = (ulonglong)((uint)uRam000000018334f1c0 & 0x7fff);
  uRam000000018334f568 = uRam000000018334f648 ^ uVar4 ^ 0xce3139629f42220c;
  uRam000000018334f2e0 = (uRam000000018334f2e0 ^ uVar4) + 0xce3139629f42220c ^ 0x8680463a8a5eb93e;
  uRam000000018334f178 = (uRam000000018334f178 * -0x748dde19d8e5c841 ^ uRam000000018334f2e0) + uVar4
  ;
  uRam000000018334f120 = uRam000000018334f178 ^ uRam000000018334f2e0;
  uRam000000018334f508 = 0xce3139629f42220c;
  uVar4 = (~uRam000000018334f4e8 + 0x31cec69d60be5df4) *
          ((uRam000000018334f388 ^ 0xce3139621b600129) +
          (uRam000000018334f388 & 0x4e3139621b600129) * 2);
  uVar4 = (uVar4 | uRam000000018334f130) + (uVar4 & uRam000000018334f130);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f6c8 =
       func_0x00018d207800((uVar4 | 0xffffffff7bde5cda) + (uVar4 & 0xffffffff7bde5cda));
  uVar4 = uRam000000018334f6c8 & 0x3ffffffffffff;
  uRam000000018334f238 = uRam000000018334f340 ^ uVar4 ^ 0x7fff;
  uRam000000018334f650 = (uRam000000018334f650 ^ uVar4) + 0x7fff ^ 0x7e0e44dc0b54972c;
  uRam000000018334f6a8 = (uRam000000018334f6a8 * 0x2c668011337343f3 ^ uRam000000018334f650) + uVar4;
  uRam000000018334f340 = uRam000000018334f6a8 ^ uRam000000018334f650;
  uRam000000018334f600 = 0x7fff;
  uVar4 = (~uRam000000018334f470 + 0xc4a627311630909a) *
          ((uRam000000018334f1d0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018334f1d0 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam000000018334f500) + (uVar4 & uRam000000018334f500);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f508 =
       func_0x00018d207800((uVar4 | 0xc4a627319212cc43) + (uVar4 & 0xc4a627319212cc43));
  uVar4 = (uRam000000018334f508 ^ 0xc4a627311630ffff) & 0x7fffffffffffffff;
  uRam000000018334f6d8 =
       (uRam000000018334f4b0 ^ uVar4 ^ 0xc4a6273116311098 ^ uVar4) + 0xc4a6273116311098 ^
       0xf1f5c157a47404a0;
  uRam000000018334f5c0 = (uRam000000018334f5c0 * 0x5393fb15ec06681d ^ uRam000000018334f6d8) + uVar4;
  uRam000000018334f3b8 = uRam000000018334f5c0 ^ uRam000000018334f6d8;
  uRam000000018334f140 = uRam000000018334f628 ^ 0xc4a6273116311098;
  uRam000000018334f158 = 0xc4a6273116311098;
  uVar4 = (~uRam000000018334f4a0 + 0x3b59d8cee9cf6f68) *
          ((uRam000000018334f640 ^ 0xc4a62731921333bd) +
          (uRam000000018334f640 & 0x44a62731921333bd) * 2);
  uVar4 = (uVar4 | uRam000000018334f5f8) + (uVar4 & uRam000000018334f5f8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f670 =
       func_0x00018d207800((uVar4 | 0xffffffff7bdc5cda) + (uVar4 & 0xffffffff7bdc5cda));
  uRam000000018334f318 = uRam000000018334f5b8 ^ uRam000000018334f670 ^ 0x7fff;
  uRam000000018334f380 = (uRam000000018334f380 ^ uRam000000018334f670) + 0x7fff ^ 0x3fb1046ebfc0661a
  ;
  uRam000000018334f600 =
       (uRam000000018334f600 * -0x7ce928939cdbd89 ^ uRam000000018334f380) + uRam000000018334f670;
  uRam000000018334f5e8 = uRam000000018334f600 ^ uRam000000018334f380;
  uRam000000018334f2d8 = 0x7fff;
  uRam000000018334f188 = func_0x00018d207800(uRam000000018334f1a8 ^ 0xb95753f44cb25759);
  uVar5 = uRam000000018334f188 ^ 0xebb4564b99da4a9a;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5;
  uRam000000018334f548 = (uRam000000018334f548 ^ uVar5) + 0x144ba9b46625b566 ^ 0x84df4e6e0f90d381;
  uRam000000018334f5f8 = (uRam000000018334f5f8 * -0x2685ff47d34ef3b9 ^ uRam000000018334f548) + uVar5
  ;
  uRam000000018334f5c8 = uRam000000018334f5f8 ^ uRam000000018334f548;
  uRam000000018334f320 = 0x144ba9b46625b566;
  uVar4 = (~uRam000000018334f6e0 + 0xebb4564b99da4a9b) *
          ((uRam000000018334f558 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018334f558 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam000000018334f2c8) + (uVar4 & uRam000000018334f2c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f130 =
       func_0x00018d207800((uVar4 | 0xebb4564b1df81640) + (uVar4 & 0xebb4564b1df81640));
  uVar5 = uRam000000018334f130 ^ 0xebb4564b99da7fff;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5 ^ 0x7fff;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar4;
  uRam000000018334f390 = uRam000000018334f4e8 ^ uVar4 ^ 0xebb4564b99daca99;
  uRam000000018334f620 = (uRam000000018334f620 ^ uVar4) + 0xebb4564b99daca99 ^ 0xae698bf976f72ac;
  uRam000000018334f528 = (uRam000000018334f528 * 0x5112858bd8416263 ^ uRam000000018334f620) + uVar4;
  uRam000000018334f2c8 = uRam000000018334f528 ^ uRam000000018334f620;
  uRam000000018334f448 = 0xebb4564b99daca99;
  uVar4 = (uRam000000018334f628 ^ _UNK_1821816b0) + 0xd3a0c0c7a5b7af57;
  uVar5 = (_UNK_1821816b8 ^ 0xebb4564b99daca99) + uRam000000018334f628 + 0x81e647f4704c971a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f628 ^ _UNK_1821816b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _UNK_1821816b8 ^ 0xebb4564b99daca99;
  uRam000000018334f5a0 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334f628 + 0x81e647f4704c971a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) + 0x2c5f3f385a4850a9);
  uRam000000018334f2a0 =
       (uRam000000018334f2a0 ^ ~uRam000000018334f5a0 & 0xe7ec6a7c8ffec79b) + 0x660a2d88ffb25081 ^
       0x45f7f8901fb9e069;
  uRam000000018334f1f0 =
       (uRam000000018334f1f0 * -0x389418e0383efa87 ^ uRam000000018334f2a0) +
       (~uRam000000018334f5a0 & 0xe7ec6a7c8ffec79b);
  uRam000000018334f4f0 = uRam000000018334f1f0 ^ uRam000000018334f2a0;
  uRam000000018334f4c0 = 0x660a2d88ffb25081;
  uRam000000018334f608 = func_0x00018d207800(uRam000000018334f2c0 ^ 0x780ef58664228fdf);
  uVar4 = (uRam000000018334f608 & 0xfffffffff0000000) -
          (uRam000000018334f608 >> 1 & 0x5555555550000000);
  uVar4 = (uVar4 & 0x3333333330000000) + (uVar4 >> 2 & 0x3333333330000000);
  uVar4 = (uRam000000018334f608 & 0xfffffffff0000000) +
          (((uVar4 >> 4) + uVar4 & 0xf0f0f0f07000000) * 0x101010101010101 >> 0x38) * 2;
  uRam000000018334f2e8 = (uRam000000018334f2e8 ^ uVar4) + 0x81e44274004c871a ^ 0x34ba1f3dd2aaab90;
  uRam000000018334f4d0 = (uRam000000018334f4d0 * -0x2683db37fbf0b7b9 ^ uRam000000018334f2e8) + uVar4
  ;
  uRam000000018334f250 = uRam000000018334f4d0 ^ uRam000000018334f2e8;
  lRam000000018334f510 = -0x7e1bbd8bffb378e6;
  uVar4 = (uRam000000018334f698 ^ _UNK_1821816c0) + uRam000000018334f1c8 + 0x69d2b27184697d90;
  uVar5 = (uRam000000018334f1c8 ^ _UNK_1821816c8) + uRam000000018334f698 + 0x69d2b271004b5eb5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f698 ^ _UNK_1821816c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f1c8 ^ _UNK_1821816c8;
  uRam000000018334f600 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334f698 + 0x69d2b271004b5eb5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018334f1c8 + 0x69d2b27184697d90));
  uRam000000018334f170 = uRam000000018334f170 ^ uRam000000018334f600 ^ 0x881bdd123d9f7d9e;
  uRam000000018334f530 =
       (uRam000000018334f530 * 0x7774829d841dd325 ^ uRam000000018334f170) + uRam000000018334f600;
  uRam000000018334f550 = uRam000000018334f530 ^ uRam000000018334f170;
  uRam000000018334f1a8 = 0;
  uVar4 = ((uRam000000018334f3a8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018334f3a8 & 0x84225cda) * 2) * -uRam000000018334f2b8;
  uVar4 = (uVar4 | uRam000000018334f540) + (uVar4 & uRam000000018334f540);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f668 = uRam000000018334f600;
  uRam000000018334f678 =
       func_0x00018d207800((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = uRam000000018334f678 - (uRam000000018334f678 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018334f678;
  uRam000000018334f688 = uRam000000018334f628 ^ uVar4 ^ 0x7fff;
  uRam000000018334f3a8 = (uRam000000018334f3a8 ^ uVar4) + 0x7fff ^ 0xe27f59d4d5e3e955;
  uRam000000018334f4f8 = (uRam000000018334f4f8 * -0x459335e78890ec95 ^ uRam000000018334f3a8) + uVar4
  ;
  uRam000000018334f148 = uRam000000018334f4f8 ^ uRam000000018334f3a8;
  uRam000000018334f418 = 0x7fff;
  uRam000000018334f658 = func_0x00018d207800(uRam000000018334f670 ^ 0x1d00841d0021e5);
  uRam000000018334f120 =
       uRam000000018334f120 ^ uRam000000018334f658 & 0xfffffffffffffff8 ^ 0x5b71881979ad4099;
  uRam000000018334f2c0 =
       (uRam000000018334f2c0 * 0x12c1eb56127b45a1 ^ uRam000000018334f120) +
       (uRam000000018334f658 & 0xfffffffffffffff8);
  uRam000000018334f690 = uRam000000018334f2c0 ^ uRam000000018334f120;
  uRam000000018334f5c8 = 0;
  uVar4 = (uRam000000018334f160 ^ 0x84225cda) + uRam000000018334f278 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f160 ^ 0x84225cda;
  uVar5 = ((uRam000000018334f278 + uRam000000018334f160) * 0x2000 |
          uRam000000018334f278 + uRam000000018334f160 >> 0x33) ^ uRam000000018334f278;
  lRam000000018334f3d8 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018334f160 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334f278 + 0x84225cda));
  uVar4 = lRam000000018334f3d8 * -0x784e4ab79e57840f;
  uRam000000018334f518 = uRam000000018334f698 ^ uVar4 ^ 0x7fff;
  uRam000000018334f600 = (uRam000000018334f600 ^ uVar4) + 0x7fff ^ 0x51445d13f1cec2c5;
  uRam000000018334f2b8 = (uRam000000018334f2b8 * 0x5dceaa7d6d1a061f ^ uRam000000018334f600) + uVar4;
  uRam000000018334f670 = uRam000000018334f2b8 ^ uRam000000018334f600;
  uRam000000018334f328 = 0x7fff;
  param_4 = param_4 & 0x7fff;
  uVar5 = (ulonglong)param_4 ^ 0x84222325;
  uVar4 = ((uRam000000018334f130 ^ uVar5) +
          (ulonglong)((uint)uRam000000018334f130 & (uint)uVar5) * 2) *
          (param_3 - uRam000000018334f348);
  uVar4 = (uVar4 | uRam000000018334f208) + (uVar4 & uRam000000018334f208);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar5 = uVar5 ^ param_3;
  uRam000000018334f3f0 =
       func_0x00018d207800((uVar5 | uVar4) + (ulonglong)((uint)uVar5 & (uint)uVar4));
  uVar4 = ~((param_3 ^ param_4) ^ uRam000000018334f3f0) & (ulonglong)param_4;
  uVar3 = (ulonglong)(param_4 ^ param_3);
  uRam000000018334f230 = (uRam000000018334f230 ^ uVar4) + uVar3 ^ 0xac2650029a6e36dc;
  uRam000000018334f6e8 = (uRam000000018334f6e8 * -0x19029d286007bd79 ^ uRam000000018334f230) + uVar4
  ;
  uRam000000018334f5f8 = uRam000000018334f6e8 ^ uRam000000018334f230;
  uRam000000018334f228 = uVar3;
  uRam000000018334f1d8 = func_0x00018d207800(uRam000000018334f5d8 + 0xbaffaf12ffd6ff ^ 0x21);
  uVar4 = uRam000000018334f1d8 >> 1 | uRam000000018334f1d8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uRam000000018334f1d8) * -0x18cbd61260ab7f5b;
  uRam000000018334f658 = (uRam000000018334f490 ^ uVar4) + 0xffd5ff48 ^ 0xc27622ac2cdce1a;
  uRam000000018334f5b0 = (uRam000000018334f5b0 * -0x4eb467eba2dc59f1 ^ uRam000000018334f658) + uVar4
  ;
  uRam000000018334f658 = uRam000000018334f5b0 ^ uRam000000018334f658;
  uRam000000018334f490 = 0xffd5ff48;
  uVar4 = (uRam000000018334f540 ^ _UNK_1821816d0) + uRam000000018334f2f8 + 0x5dfa5273;
  uVar5 = (uRam000000018334f2f8 ^ _UNK_1821816d8) + uRam000000018334f540 + 0xce09d4d8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f540 ^ _UNK_1821816d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f2f8 ^ _UNK_1821816d8;
  uRam000000018334f1f8 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334f540 + 0xce09d4d8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334f2f8 + 0x5dfa5273));
  uRam000000018334f298 =
       (uRam000000018334f298 ^ uRam000000018334f1f8 ^ 0xd9d87156) + 0x17d1a58e ^ 0xe3ba6f90e14a6d80;
  uRam000000018334f6e0 =
       (uRam000000018334f6e0 * 0x581a2f1ae33afc4f ^ uRam000000018334f298) +
       (uRam000000018334f1f8 ^ 0xd9d87156);
  uRam000000018334f5e8 = uRam000000018334f6e0 ^ uRam000000018334f298;
  uRam000000018334f578 = 0x17d1a58e;
  uVar4 = (uRam000000018334f5d0 ^ _UNK_1821816e0) + uRam000000018334f170 + 0x84222325;
  uVar5 = (uRam000000018334f170 ^ _UNK_1821816e8) + uRam000000018334f5d0 + 0xb62bd000;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f5d0 ^ _UNK_1821816e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f170 ^ _UNK_1821816e8;
  uRam000000018334f4a0 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334f5d0 + 0xb62bd000) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334f170 + 0x84222325));
  uVar4 = uRam000000018334f4a0 >> 1 | uRam000000018334f4a0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018334f4a0;
  uRam000000018334f480 = (uRam000000018334f480 ^ uVar4) - 0xb62bd000 ^ 0xbb7ba45449e7ef37;
  uRam000000018334f5d0 = (uRam000000018334f5d0 * -0x1a63a8727317b6a5 ^ uRam000000018334f480) + uVar4
  ;
  uRam000000018334f2b8 = uRam000000018334f5d0 ^ uRam000000018334f480;
  uRam000000018334f408 = 0x49d43000;
  uVar4 = (uRam000000018334f1a0 ^ _UNK_1821816f0) + uRam000000018334f500 + 0x320e2d28;
  uVar5 = (uRam000000018334f500 ^ _UNK_1821816f8) + uRam000000018334f1a0 + 0x49d43000;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f1a0 ^ _UNK_1821816f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f500 ^ _UNK_1821816f8;
  uRam000000018334f488 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334f1a0 + 0x49d43000) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334f500 + 0x320e2d28));
  uVar4 = uRam000000018334f488 - (uRam000000018334f488 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018334f488;
  uRam000000018334f3a0 = uRam000000018334f5a8 ^ uVar4 ^ 0x100003e0d;
  uRam000000018334f4f8 = (uRam000000018334f4f8 ^ uVar4) + 0x100003e0d ^ 0x3c2b88a3a3926e3f;
  uRam000000018334f2d8 = (uRam000000018334f2d8 * 0x22a20600816c1ca7 ^ uRam000000018334f4f8) + uVar4;
  uRam000000018334f5c0 = uRam000000018334f2d8 ^ uRam000000018334f4f8;
  uRam000000018334f210 = 0x3e0d;
  uVar4 = (~uRam000000018334f1b8 + 0xbd42749d) *
          ((uRam000000018334f4e8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018334f4e8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018334f678) + (uVar4 & uRam000000018334f678);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f590 =
       func_0x00018d207800((uVar4 | 0x396057b9) + (ulonglong)((uint)uVar4 & 0x396057b9));
  uVar4 = (uRam000000018334f590 & 0x3ffffffffe0000) * 0x400;
  uRam000000018334f3f8 = (uRam000000018334f3f8 ^ uVar4) - 0xbd42749c ^ 0x21eacb39317f607;
  lRam000000018334f1e0 = (lRam000000018334f1e0 * -0x251429ba03728369 ^ uRam000000018334f3f8) + uVar4
  ;
  uRam000000018334f5e0 = 0x42bd8b64;
  uVar4 = (uRam000000018334f100 ^ _UNK_182181700) + uRam000000018334f108 + 0x3960918c;
  uVar5 = (uRam000000018334f108 ^ _UNK_182181708) + uRam000000018334f100 + 0x42bd8b64;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f100 ^ _UNK_182181700;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f108 ^ _UNK_182181708;
  uRam000000018334f1d8 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334f100 + 0x42bd8b64) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334f108 + 0x3960918c));
  uVar4 = uRam000000018334f1d8 >> 1 | uRam000000018334f1d8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018334f1d8;
  uRam000000018334f230 =
       (uRam000000018334f1b8 ^ uVar4 ^ 0x100003e0d ^ uVar4) + 0x100003e0d ^ 0xd3325531a2a6424a;
  uRam000000018334f3f8 = (uRam000000018334f3f8 * 0x6123cae2d553d463 ^ uRam000000018334f230) + uVar4;
  uRam000000018334f458 = uRam000000018334f3f8 ^ uRam000000018334f230;
  uRam000000018334f2a8 = uRam000000018334f650 ^ 0x100003e0d;
  uRam000000018334f6b0 = 0x3e0d;
  uVar4 = (~uRam000000018334f4f0 + 0x4fecc701) *
          ((uRam000000018334f598 ^ 0x34315428) +
          (ulonglong)((uint)uRam000000018334f598 & 0x34315428) * 2);
  uVar4 = (uVar4 | uRam000000018334f530) + (uVar4 & uRam000000018334f530);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f2d8 =
       func_0x00018d207800((uVar4 | 0x7bdd9328) + (ulonglong)((uint)uVar4 & 0x7bdd9328));
  uVar4 = uRam000000018334f2d8 & 0xffffffffffc00000;
  uRam000000018334f240 = uRam000000018334f2f0 ^ uVar4 ^ 0x100003e0d;
  uRam000000018334f528 = (uRam000000018334f528 ^ uVar4) + 0x100003e0d ^ 0xfc959b8a9d7900a6;
  uRam000000018334f5b0 = (uRam000000018334f5b0 * 0x633c07b260c084df ^ uRam000000018334f528) + uVar4;
  uRam000000018334f3b8 = uRam000000018334f5b0 ^ uRam000000018334f528;
  uRam000000018334f310 = 0x3e0d;
  uVar4 = (~uRam000000018334f628 + 0x17d1a58f) *
          ((uRam000000018334f520 ^ 0x7bf7dc6d) +
          (ulonglong)((uint)uRam000000018334f520 & 0x7bf7dc6d) * 2);
  uVar4 = (uVar4 | uRam000000018334f180) + (uVar4 & uRam000000018334f180);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f1a0 =
       func_0x00018d207800((uVar4 | 0x6c2679e3) + (ulonglong)((uint)uVar4 & 0x6c2679e3));
  uVar4 = uRam000000018334f1a0 ^ 0x17cdbd17b80501f0;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) >> 0x14 | (uVar4 >> 0x2b) << 0x2c;
  uRam000000018334f5f8 = uRam000000018334f1a8 ^ uVar4 ^ 0x117a7a4d6;
  uRam000000018334f120 = (uRam000000018334f120 ^ uVar4) + 0x117a7a4d6 ^ 0x79aa6bd42c9c1c72;
  uRam000000018334f1b8 = (uRam000000018334f1b8 * -0x6bd28c6a42ef7c51 ^ uRam000000018334f120) + uVar4
  ;
  uRam000000018334f2a8 = uRam000000018334f1b8 ^ uRam000000018334f120;
  uRam000000018334f340 = 0x17a7a4d6;
  uRam000000018334f208 = func_0x00018d207800(uRam000000018334f6a0 ^ 0x90063a2ffddc0);
  uVar4 = uRam000000018334f208 >> 1 | uRam000000018334f208;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018334f208;
  uVar4 = uVar4 << 0x34 | uVar4 >> 0xc;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar4;
  uRam000000018334f140 = (uRam000000018334f140 ^ uVar4) + 0xe8045ac6 ^ 0xe16101ba27d21200;
  uRam000000018334f170 = (uRam000000018334f170 * -0x65d4fad79e41fe5b ^ uRam000000018334f140) + uVar4
  ;
  uRam000000018334f198 = uRam000000018334f170 ^ uRam000000018334f140;
  uRam000000018334f238 = 0xe8045ac6;
  uRam000000018334f6d0 = func_0x00018d207800(uRam000000018334f330 + 0xfff7002322ffddff ^ 0xf5);
  uRam000000018334f400 =
       (uRam000000018334f400 ^ uRam000000018334f5d8) + 0x17d1a508 ^ 0x6b045a56ae1dcaad;
  uRam000000018334f2a8 =
       (uRam000000018334f2a8 * 0x3def759afd8aa91f ^ uRam000000018334f400) + uRam000000018334f5d8;
  uRam000000018334f4a0 = uRam000000018334f2a8 ^ uRam000000018334f400;
  uRam000000018334f678 = 0x17d1a508;
  uVar4 = (~uRam000000018334f6e0 + 0x2fa34a11) *
          ((uRam000000018334f670 ^ 0x6c2679e3) +
          (ulonglong)((uint)uRam000000018334f670 & 0x6c2679e3) * 2);
  uVar4 = (uVar4 | uRam000000018334f6d8) + (uVar4 & uRam000000018334f6d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f670 =
       func_0x00018d207800((uVar4 | 0x438533f3) + (ulonglong)((uint)uVar4 & 0x438533f3));
  uVar4 = uRam000000018334f670 & 0xffffffffff000000 ^ 0x2fa34a10;
  uRam000000018334f468 = uRam000000018334f2e0 ^ uVar4 ^ 0x117a7a4d6;
  uRam000000018334f6f0 = (uRam000000018334f6f0 ^ uVar4) + 0x117a7a4d6 ^ 0x41e51ac81e6370da;
  uRam000000018334f358 = (uRam000000018334f358 * -0x3fe897489bf07ff9 ^ uRam000000018334f6f0) + uVar4
  ;
  uRam000000018334f4a8 = uRam000000018334f358 ^ uRam000000018334f6f0;
  uRam000000018334f490 = 0x17a7a4d6;
  uRam000000018334f290 = func_0x00018d207800(lRam000000018334f510 + 0xfffb0083d7ffddffU ^ 0xd);
  uVar4 = (ulonglong)(~(uint)uRam000000018334f290 & 0x3e0d);
  uRam000000018334f3e8 = uRam000000018334f508 ^ uVar4 ^ 0x3e0d;
  uRam000000018334f6a8 = (uRam000000018334f6a8 ^ uVar4) + 0x3e0d ^ 0xffe1f8e0a364f7f5;
  uRam000000018334f358 = (uRam000000018334f358 * -0x2eebe16af2640e8b ^ uRam000000018334f6a8) + uVar4
  ;
  uRam000000018334f5b0 = uRam000000018334f358 ^ uRam000000018334f6a8;
  uRam000000018334f280 = 0x3e0d;
  uVar4 = (uRam000000018334f320 ^ _UNK_182181710) + uRam000000018334f340 + 0x7bf7dc6d;
  uVar5 = (uRam000000018334f340 ^ _UNK_182181718) + uRam000000018334f320 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f320 ^ _UNK_182181710;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334f340 ^ _UNK_182181718;
  uRam000000018334f5c0 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334f320 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334f340 + 0x7bf7dc6d));
  uVar4 = (uRam000000018334f5c0 ^ 0x2a0000) & 0xfffffffffffffc00;
  uRam000000018334f330 = (uRam000000018334f330 ^ uVar4) + 0x2a00b7 ^ 0x8ffeef45581e3508;
  uRam000000018334f200 = (uRam000000018334f200 * -0x1cb86992c45978ad ^ uRam000000018334f330) + uVar4
  ;
  uRam000000018334f588 = uRam000000018334f200 ^ uRam000000018334f330;
  uRam000000018334f288 = 0x2a00b7;
  uRam000000018334f210 = func_0x00018d207800(uRam000000018334f680 ^ 0xbc006859ffcc11);
  uVar4 = (ulonglong)(~(uint)(uRam000000018334f210 >> 9) & 0xffd5ff48);
  uRam000000018334f3c0 = uRam000000018334f3c0 ^ uVar4 ^ 0xb096336c9e465773;
  uRam000000018334f520 = (uRam000000018334f520 * 0x5dcf6d6bf054c517 ^ uRam000000018334f3c0) + uVar4;
  uRam000000018334f178 = uRam000000018334f520 ^ uRam000000018334f3c0;
  uRam000000018334f3f8 = 0;
  uRam000000018334f600 = func_0x00018d207800(uRam000000018334f1d8 + 0x30084280021ff ^ 0x7a);
  uVar4 = uRam000000018334f600 ^ 0x3e0d;
  uRam000000018334f6c8 = uRam000000018334f378 ^ uVar4 ^ 0x3e0d;
  uRam000000018334f2c8 = (uRam000000018334f2c8 ^ uVar4) + 0x3e0d ^ 0x9ee10f9874fe79ef;
  uRam000000018334f268 = (uRam000000018334f268 * -0x3301ece005cef5c7 ^ uRam000000018334f2c8) + uVar4
  ;
  uRam000000018334f348 = uRam000000018334f268 ^ uRam000000018334f2c8;
  uRam000000018334f1c0 = 0x3e0d;
  uVar4 = (uRam000000018334f3a0 ^ 0x84221d28) + uRam000000018334f5a8 + 0x84221d28;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334f3a0 ^ 0x84221d28;
  uVar5 = ((uRam000000018334f5a8 + uRam000000018334f3a0) * 0x2000 |
          uRam000000018334f5a8 + uRam000000018334f3a0 >> 0x33) ^ uRam000000018334f5a8;
  uRam000000018334f5c0 =
       func_0x00018d207800((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018334f3a0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334f5a8 + 0x84221d28));
  uVar4 = (uRam000000018334f5c0 & 0xfffffffffff) * 0x7a52e972775f23f;
  uRam000000018334f6d8 = uRam000000018334f6b0 ^ uVar4 ^ 0x3e0d;
  uRam000000018334f4c0 = (uRam000000018334f4c0 ^ uVar4) + 0x3e0d ^ 0xcce4514569d06021;
  uRam000000018334f3a0 = (uRam000000018334f3a0 * -0x525daf7ce8974cb ^ uRam000000018334f4c0) + uVar4;
  uRam000000018334f6e0 = uRam000000018334f3a0 ^ uRam000000018334f4c0;
  uRam000000018334f6d0 = 0x3e0d;
  uVar4 = (~uRam000000018334f358 + 0x3e0e) *
          ((uVar3 ^ 0x84222325 ^ uRam000000018334f6d8) +
          (ulonglong)((uint)uRam000000018334f6d8 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uRam000000018334f348) + (uVar4 & uRam000000018334f348);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334f2a0 =
       func_0x00018d207800((uVar3 ^ 0x84221d28 | uVar4) +
                           (ulonglong)((uint)(uVar3 ^ 0x84221d28) & (uint)uVar4));
  uVar4 = uVar3 ^ uRam000000018334f2a0 & 0xffffffffffffff80;
  uRam000000018334f188 = uVar3 ^ 0x3e0d;
  uRam000000018334f550 = (uRam000000018334f550 ^ uVar4) + uRam000000018334f188 ^ 0x53a06c5ec79bfed;
  uRam000000018334f148 = (uRam000000018334f148 * -0x40298f92ab95eeeb ^ uRam000000018334f550) + uVar4
  ;
  uRam000000018334f690 = uRam000000018334f148 ^ uRam000000018334f550;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xce02,0x236);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1feb77 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18217f820 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/el; atg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d207890, runtime 6ffff4e17890) =====

void FUN_18d207890(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d2078db did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182181840 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/el; ath (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d2088a0, runtime 6ffff4e188a0) =====

void FUN_18d2088a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d208929 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182181e00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



