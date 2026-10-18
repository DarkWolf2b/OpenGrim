// ===== Lsixtwo/fD; _5b68228b901343062102411937de5c37 ()V (handler @ image 18af10ab0, runtime 6ffff2b20ab0) =====

void FUN_18af10ab0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af10b98 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a05c18 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fD; aSH (Lsixtwo/gz;)V (handler @ image 18aefa9c0, runtime 6ffff2b0a9c0) =====

void FUN_18aefa9c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x142f2,0x328);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aefaa8d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819fff80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fD; aSI ()Ljava/lang/Boolean; (handler @ image 18af01b00, runtime 6ffff2b11b00) =====

void FUN_18af01b00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018af01b20 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a023f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fD; aSJ (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18af01f50, runtime 6ffff2b11f50) =====

undefined8 FUN_18af01f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fD; aSK (IJ)I (handler @ image 18af01fe0, runtime 6ffff2b11fe0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01fe0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = (uRam000000018327dbd0 ^ _UNK_181a044a0) + uRam000000018327da60 + 0x858f41708f9e8609;
  uVar6 = (uRam000000018327da60 ^ _UNK_181a044a8) + uRam000000018327dbd0 + 0xc9a8aac42b93b7f5;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327dbd0 ^ _UNK_181a044a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327da60 ^ _UNK_181a044a8;
  uRam000000018327de78 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327dbd0 + 0xc9a8aac42b93b7f5) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327da60 + 0x858f41708f9e8609));
  uVar5 = (uRam000000018327de78 ^ 0xd22dd36051e0871c) & 0x7fffffffffffffff;
  uRam000000018327dc90 = (uRam000000018327dc90 ^ uVar5) + 0xcdafebf42bbfb7fd ^ 0xcd825520c0390d17;
  uRam000000018327dce0 = (uRam000000018327dce0 * -0x291988d2441e3761 ^ uRam000000018327dc90) + uVar5
  ;
  uRam000000018327d9e8 = uRam000000018327dce0 ^ uRam000000018327dc90;
  uRam000000018327d9a0 = 0xcdafebf42bbfb7fd;
  uVar5 = (~uRam000000018327de58 + 0x965c619022525c01) *
          ((uRam000000018327dd48 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327dd48 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018327ded8) + (uVar5 & uRam000000018327ded8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327de98 =
       func_0x00018af0cd00((uVar5 | 0x965c6190a67000da) + (uVar5 & 0x965c6190a67000da));
  uVar5 = uRam000000018327de98 & 0x7fffffffffffffff;
  uRam000000018327db28 = uRam000000018327dbe8 ^ uVar5 ^ 0x965c61902252dbff;
  uRam000000018327dd28 = (uRam000000018327dd28 ^ uVar5) + 0x965c61902252dbff ^ 0xefb59e2ff6f9e5c1;
  uRam000000018327da58 = (uRam000000018327da58 * -0x193273a7777e2827 ^ uRam000000018327dd28) + uVar5
  ;
  uRam000000018327dd30 = uRam000000018327da58 ^ uRam000000018327dd28;
  uRam000000018327dc38 = 0x965c61902252dbff;
  uRam000000018327daf8 = func_0x00018af0cd00(uRam000000018327dea8 + 0x44d4b93445a1d4e8 ^ 0x50);
  uVar5 = ~uRam000000018327daf8 << 0x13 | ~uRam000000018327daf8 >> 0x2d;
  uRam000000018327db90 = uRam000000018327dde8 ^ uVar5 ^ 0x7fff;
  uRam000000018327dc60 = (uRam000000018327dc60 ^ uVar5) + 0x7fff ^ 0xc3d204683bb74e8;
  uRam000000018327dcd0 = (uRam000000018327dcd0 * 0x40e743ed5dd1e49f ^ uRam000000018327dc60) + uVar5;
  uRam000000018327de10 = uRam000000018327dcd0 ^ uRam000000018327dc60;
  uRam000000018327dd58 = 0x7fff;
  uVar5 = (uRam000000018327db08 ^ _UNK_181a044b0) + uRam000000018327dce0 + 0x84222325;
  uVar6 = (uRam000000018327dce0 ^ _UNK_181a044b8) + uRam000000018327db08 + 0xef6a58a4c08ed14;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327db08 ^ _UNK_181a044b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327dce0 ^ _UNK_181a044b8;
  uRam000000018327dda8 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327db08 + 0xef6a58a4c08ed14) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327dce0 + 0x84222325));
  uVar5 = uRam000000018327de78 - (uRam000000018327de78 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018327de78;
  uRam000000018327ded0 = (uRam000000018327ded0 ^ uVar5) + 0xf1095a75b3f712ec ^ 0xad644786886c5b8c;
  uRam000000018327d950 = (uRam000000018327d950 * -0x7e2ca8b260963dd7 ^ uRam000000018327ded0) + uVar5
  ;
  uRam000000018327dc28 = uRam000000018327d950 ^ uRam000000018327ded0;
  uRam000000018327da20 = 0xf1095a75b3f712ec;
  uVar5 = (uRam000000018327dc00 ^ _UNK_181a044c0) + uRam000000018327dc50 + 0x84225cda;
  uVar6 = (uRam000000018327dc50 ^ _UNK_181a044c8) + uRam000000018327dc00 + 0xef6a58a4c08ed14;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327dc00 ^ _UNK_181a044c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327dc50 ^ _UNK_181a044c8;
  uRam000000018327da88 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327dc00 + 0xef6a58a4c08ed14) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327dc50 + 0x84225cda));
  uRam000000018327da60 = uRam000000018327dd38 ^ uRam000000018327da88 ^ 0xef6a58a4c096d13;
  uRam000000018327dd08 =
       (uRam000000018327dd08 ^ uRam000000018327da88) + 0xef6a58a4c096d13 ^ 0xc5c88b13d5905719;
  uRam000000018327d9b8 =
       (uRam000000018327d9b8 * 0x33beab63e9865b45 ^ uRam000000018327dd08) + uRam000000018327da88;
  uRam000000018327d908 = uRam000000018327d9b8 ^ uRam000000018327dd08;
  uRam000000018327dbc0 = 0xef6a58a4c096d13;
  uVar5 = (~uRam000000018327d9a0 + 0xf1095a75b3f712ed) *
          ((uRam000000018327ddc8 ^ 0xef6a58ac82b4e36) +
          (uRam000000018327ddc8 & 0xef6a58ac82b4e36) * 2);
  uVar5 = (uVar5 | uRam000000018327d9a8) + (uVar5 & uRam000000018327d9a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dd40 =
       func_0x00018af0cd00((uVar5 | 0xffffffff7bdc5cda) + (uVar5 & 0xffffffff7bdc5cda));
  uVar5 = (uRam000000018327dd40 ^ 0xffffffffffff7fff) << 0x39 |
          (uRam000000018327dd40 ^ 0xffffffffffff7fff) >> 7;
  uRam000000018327de68 = uRam000000018327da60 ^ uVar5 ^ 0x7fff;
  uRam000000018327dd80 = (uRam000000018327dd80 ^ uVar5) + 0x7fff ^ 0x4d6e067657a4a5f1;
  uRam000000018327dd20 = (uRam000000018327dd20 * 0x176ff8d803749dc1 ^ uRam000000018327dd80) + uVar5;
  uRam000000018327dbd8 = uRam000000018327dd20 ^ uRam000000018327dd80;
  uRam000000018327dc80 = 0x7fff;
  uVar5 = (~uRam000000018327db58 + 0x1f6eb9c4ba9cba61) *
          ((uRam000000018327daf8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327daf8 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018327dbc0) + (uVar5 & uRam000000018327dbc0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327ddf8 =
       func_0x00018af0cd00((uVar5 | 0x1f6eb9c43ebee6ba) + (uVar5 & 0x1f6eb9c43ebee6ba));
  uVar5 = (uRam000000018327ddf8 ^ 0x1f6eb9c4ba9cffff) << 0x22 |
          (uRam000000018327ddf8 ^ 0x1f6eb9c4ba9cffff) >> 0x1e;
  uRam000000018327deb0 = uRam000000018327dc40 ^ uVar5 ^ 0x1f6eb9c4ba9d3a5f;
  uRam000000018327da88 = (uRam000000018327db78 ^ uVar5) + 0x1f6eb9c4ba9d3a5f ^ 0x1d80cce5472416ba;
  uRam000000018327dcf8 = (uRam000000018327dcf8 * -0x1f31664a5e04ad17 ^ uRam000000018327da88) + uVar5
  ;
  uRam000000018327da88 = uRam000000018327dcf8 ^ uRam000000018327da88;
  uRam000000018327db78 = 0x1f6eb9c4ba9d3a5f;
  uVar5 = (uRam000000018327daf0 ^ _UNK_181a044d0) + uRam000000018327d960 + 0xcdafebf4af9d94d8;
  uVar6 = (uRam000000018327d960 ^ _UNK_181a044d8) + uRam000000018327daf0 + 0xbddb8f8f5731b26e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327daf0 ^ _UNK_181a044d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327d960 ^ _UNK_181a044d8;
  uRam000000018327dc60 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327daf0 + 0xbddb8f8f5731b26e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327d960 + 0xcdafebf4af9d94d8));
  uVar6 = uRam000000018327dc60 ^ 0xfdffefff7fbfb7ff;
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
  uRam000000018327de88 = uRam000000018327de18 ^ uVar6 ^ 0x8b8b7b8382f16a6b;
  uRam000000018327dc98 = (uRam000000018327dc98 ^ uVar6) + 0x8b8b7b8382f16a6b ^ 0x886e48326bb46e93;
  uRam000000018327dde8 = (uRam000000018327dde8 * -0x569828133457f4e5 ^ uRam000000018327dc98) + uVar6
  ;
  uRam000000018327da20 = uRam000000018327dde8 ^ uRam000000018327dc98;
  uRam000000018327dcd8 = 0x8b8b7b8382f16a6b;
  uRam000000018327dcc8 = func_0x00018af0cd00(uRam000000018327dcb0 + 0x1721d388a99b63cf ^ 0x13);
  uVar5 = (uRam000000018327dcc8 & 0xffffffffc0000000) -
          (uRam000000018327dcc8 >> 1 & 0x5555555540000000);
  uVar5 = (uVar5 & 0x3333333300000000) + (uVar5 >> 2 & 0x3333333330000000);
  uVar5 = (uRam000000018327dcc8 & 0xffffffffc0000000) +
          (((uVar5 >> 4) + uVar5 & 0xf0f0f0f03000000) * 0x101010101010101 >> 0x38) * 2 &
          0x3fffffffc00001fe;
  uRam000000018327d940 = (uRam000000018327d940 ^ uVar5) + 0x8d8b8b840331b26c ^ 0x30680a43c30351a7;
  uRam000000018327d9e8 = (uRam000000018327d9e8 * 0x76ac318a5ba1814f ^ uRam000000018327d940) + uVar5;
  uRam000000018327dd28 = uRam000000018327d9e8 ^ uRam000000018327d940;
  uRam000000018327db88 = 0x8d8b8b840331b26c;
  uVar5 = (uRam000000018327d930 ^ _UNK_181a044e0) + uRam000000018327ded8 + 0x7074647bf8ac26b6;
  uVar6 = (uRam000000018327ded8 ^ _UNK_181a044e8) + uRam000000018327d930 + 0x1b171708066364d8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327d930 ^ _UNK_181a044e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327ded8 ^ _UNK_181a044e8;
  uRam000000018327dbb0 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327d930 + 0x1b171708066364d8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327ded8 + 0x7074647bf8ac26b6));
  uVar5 = uRam000000018327dbb0 ^ 0x7b77777b7eef65db;
  uRam000000018327d910 = uRam000000018327da88 ^ uVar5 ^ 0x8b8b7b8382f16a6b;
  uRam000000018327dad8 = (uRam000000018327dad8 ^ uVar5) + 0x8b8b7b8382f16a6b ^ 0x980fb6afbe3e4b23;
  uRam000000018327dc68 = (uRam000000018327dc68 * 0x1724a02738138fc7 ^ uRam000000018327dad8) + uVar5;
  uRam000000018327dc20 = uRam000000018327dc68 ^ uRam000000018327dad8;
  uRam000000018327dc48 = uRam000000018327dbe0 ^ 0x8b8b7b8382f16a6b;
  uRam000000018327de90 = 0x8b8b7b8382f16a6b;
  uVar5 = ((uRam000000018327dc18 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327dc18 & 0x84225cda) * 2) * -uRam000000018327dd98;
  uVar5 = (uVar5 | uRam000000018327dde8) + (uVar5 & uRam000000018327dde8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327de98 =
       func_0x00018af0cd00((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam000000018327de98 & 0xfffffffffff;
  uRam000000018327dc88 = uRam000000018327dc90 ^ uVar5 ^ 0x7fff;
  uRam000000018327dd20 = (uRam000000018327dd20 ^ uVar5) + 0x7fff ^ 0x97a27b1ee4072d44;
  uRam000000018327db28 = (uRam000000018327db28 * 0x1b7882e355c1e839 ^ uRam000000018327dd20) + uVar5;
  uRam000000018327dc58 = uRam000000018327db28 ^ uRam000000018327dd20;
  uRam000000018327ddd8 = 0x7fff;
  uVar5 = (uRam000000018327dc08 ^ _UNK_181a044f0) + uRam000000018327d940 + 0xcdafebf4af9d94d8;
  uVar6 = (uRam000000018327d940 ^ _UNK_181a044f8) + uRam000000018327dc08 + 0x3250140bd4404802;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327dc08 ^ _UNK_181a044f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327d940 ^ _UNK_181a044f8;
  uRam000000018327db50 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327dc08 + 0x3250140bd4404802) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327d940 + 0xcdafebf4af9d94d8));
  uVar5 = (uRam000000018327db50 << 0x28 | uRam000000018327db50 >> 0x18) >> 0xc |
          (uRam000000018327db50 >> 0x18) << 0x34;
  uRam000000018327da60 = uRam000000018327da60 ^ uVar5 ^ 0xc71ada5f0cba8aad;
  uRam000000018327dd60 = (uRam000000018327dd60 * 0x41e03ffa15cf96ab ^ uRam000000018327da60) + uVar5;
  uRam000000018327d920 = uRam000000018327dd60 ^ uRam000000018327da60;
  uRam000000018327deb0 = 0;
  uRam000000018327dec0 = func_0x00018af0cd00(uRam000000018327db30 ^ 0x44007ba5ffe11f);
  uVar5 = uRam000000018327dec0 & 0x7fffffffffffffff ^ 0x7fff;
  uRam000000018327db18 = uRam000000018327da78 ^ uVar5 ^ 0x7fff;
  uRam000000018327d918 = (uRam000000018327d918 ^ uVar5) + 0x7fff ^ 0x3169474bdf266960;
  uRam000000018327de58 = (uRam000000018327de58 * 0x16012b8fd4de6b73 ^ uRam000000018327d918) + uVar5;
  uRam000000018327de78 = uRam000000018327de58 ^ uRam000000018327d918;
  uRam000000018327d938 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam000000018327da20;
  lVar3 = (param_4 ^ 0x84222325) + uRam000000018327dab8;
  uVar6 = uVar5 + lVar3;
  uVar8 = (uRam000000018327dab8 ^ 0x7fff) + uRam000000018327da20 + 0x7fff;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018327dab8 ^ 0x7fff;
  uRam000000018327ddf0 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327da20 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018327de20 = (ulonglong)uVar2;
  uRam000000018327db18 =
       (uRam000000018327db18 ^ uRam000000018327ddf0) + uRam000000018327de20 ^ 0xea7337ee11e7b18c;
  uRam000000018327de68 =
       (uRam000000018327de68 * -0xf5e676ce1fe85df ^ uRam000000018327db18) + uRam000000018327ddf0;
  uRam000000018327de50 = uRam000000018327de68 ^ uRam000000018327db18;
  uVar5 = uRam000000018327de20 ^ 0x84222325 ^ uRam000000018327dc70;
  uVar6 = param_3 ^ uRam000000018327dd78;
  lVar4 = (uRam000000018327de20 ^ 0x84222325) + uRam000000018327dd78;
  lVar3 = uRam000000018327dc70 + param_3;
  uVar8 = uVar5 + lVar4;
  uVar7 = uVar6 + lVar3;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uRam000000018327dd70 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) - lVar3 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar2 = uVar2 ^ param_3;
  uVar8 = (ulonglong)uVar2;
  uRam000000018327da50 = (uRam000000018327da50 ^ uRam000000018327dd70) + uVar8 ^ 0x7cb97e65b80153a4;
  uRam000000018327da70 =
       (uRam000000018327da70 * 0xb5a7ef0b33713e1 ^ uRam000000018327da50) + uRam000000018327dd70;
  uRam000000018327de10 = uRam000000018327da70 ^ uRam000000018327da50;
  uVar5 = (~uRam000000018327d990 + 0x267898eb) *
          ((uRam000000018327dcd8 ^ 0x52e3a139) +
          (ulonglong)((uint)uRam000000018327dcd8 & 0x52e3a139) * 2);
  uVar5 = (uVar5 | uRam000000018327dde0) + (uVar5 & uRam000000018327dde0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327da20 = uVar8;
  uRam000000018327dd48 =
       func_0x00018af0cd00((uVar5 | 0x749b39d3) + (ulonglong)((uint)uVar5 & 0x749b39d3));
  uVar5 = (uRam000000018327dd48 * 0x79034f886dcc6273 & 0xfff) << 0x22 |
          uRam000000018327dd48 * 0x79034f886dcc6273 >> 0x1e;
  uRam000000018327da60 = (uRam000000018327da60 ^ uVar5) + 0xf6f99afe ^ 0xcabf96e540f57de8;
  uRam000000018327dc28 = (uRam000000018327dc28 * 0x65a4ce53fbc6b937 ^ uRam000000018327da60) + uVar5;
  uRam000000018327de60 = uRam000000018327dc28 ^ uRam000000018327da60;
  uRam000000018327ddd8 = 0xf6f99afe;
  uVar5 = (~uRam000000018327dd00 + 0xbcdcc133) *
          ((uRam000000018327da20 ^ 0x8714d2c9) +
          (ulonglong)((uint)uRam000000018327da20 & 0x8714d2c9) * 2);
  uVar5 = (uVar5 | uRam000000018327dbf0) + (uVar5 & uRam000000018327dbf0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327daf0 =
       func_0x00018af0cd00((uVar5 | 0x3bc813fb) + (ulonglong)((uint)uVar5 & 0x3bc813fb));
  uRam000000018327dca0 =
       (uRam000000018327dca0 ^ uRam000000018327daf0 & 0x1fffffffff) + 0xbfea30de ^
       0x2e821602a71923dd;
  uRam000000018327da60 =
       (uRam000000018327da60 * -0x48275100ae9ce023 ^ uRam000000018327dca0) +
       (uRam000000018327daf0 & 0x1fffffffff);
  uRam000000018327dea0 = uRam000000018327da60 ^ uRam000000018327dca0;
  uRam000000018327dae0 = 0xbfea30de;
  uRam000000018327d958 = func_0x00018af0cd00(uRam000000018327db78 ^ 0xff83007d0d002337);
  uRam000000018327dd60 = uRam000000018327dd60 - 0x97ea030 ^ 0x69c8839ebc004b9f;
  uRam000000018327de98 = uRam000000018327ddf0 * -0x2bc1a86d09b4c245;
  uRam000000018327ddf0 = uRam000000018327de98 ^ uRam000000018327dd60;
  uRam000000018327da98 = uRam000000018327db70 ^ 0xfffffffff6815fd0;
  uRam000000018327d910 = 0xf6815fd0;
  uVar5 = (uRam000000018327d9f8 ^ _UNK_181a04500) + uRam000000018327da08 + 0x84222901;
  uVar6 = (uRam000000018327da08 ^ _UNK_181a04508) + uRam000000018327d9f8 + 0x97ea030;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327d9f8 ^ _UNK_181a04500;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327da08 ^ _UNK_181a04508;
  lRam000000018327d980 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327d9f8 + 0x97ea030) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327da08 + 0x84222901));
  uVar5 = lRam000000018327d980 * -0x4aafba2ddac15a5b;
  uRam000000018327db60 = uRam000000018327da88 ^ uVar5 ^ 0x97eaa54;
  uRam000000018327daf0 = (uRam000000018327daf0 ^ uVar5) + 0x97eaa54 ^ 0xa27dcc13d09a0f79;
  uRam000000018327d900 = (uRam000000018327d900 * -0x62b205c4ec13003b ^ uRam000000018327daf0) + uVar5
  ;
  uRam000000018327db10 = uRam000000018327d900 ^ uRam000000018327daf0;
  uRam000000018327db28 = 0x97eaa54;
  uVar5 = (~uRam000000018327dbb8 + 0xa31d5691) *
          ((uRam000000018327dd00 ^ 0x84222901) +
          (ulonglong)((uint)uRam000000018327dd00 & 0x84222901) * 2);
  uVar5 = (uVar5 | uRam000000018327de98) + (uVar5 & uRam000000018327de98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dae8 =
       func_0x00018af0cd00((uVar5 | 0x273f7f91) + (ulonglong)((uint)uVar5 & 0x273f7f91));
  uRam000000018327de88 = uRam000000018327d918 ^ uRam000000018327dae8 ^ 0xa31d60b4;
  uRam000000018327dea8 =
       (uRam000000018327dea8 ^ uRam000000018327dae8) + 0xa31d60b4 ^ 0x4524c3ec90c4dc7;
  uRam000000018327daa0 =
       (uRam000000018327daa0 * -0x41ae2481a6a87f33 ^ uRam000000018327dea8) + uRam000000018327dae8;
  uRam000000018327de50 = uRam000000018327daa0 ^ uRam000000018327dea8;
  uRam000000018327d910 = 0xa31d60b4;
  uVar5 = (uRam000000018327d988 ^ _UNK_181a04510) + uRam000000018327de28 + 0x84222325;
  uVar6 = (uRam000000018327de28 ^ _UNK_181a04518) + uRam000000018327d988 + 0x52280bb0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327d988 ^ _UNK_181a04510;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327de28 ^ _UNK_181a04518;
  uRam000000018327dea8 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327d988 + 0x52280bb0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327de28 + 0x84222325));
  uRam000000018327dce0 =
       (uRam000000018327dce0 ^ uRam000000018327dab0 & 0x7fffffffffffffff) - 0x52280bb0 ^
       0x38b9db4b290918f9;
  uRam000000018327db78 =
       (uRam000000018327db78 * 0x72a4ad92c8456423 ^ uRam000000018327dce0) +
       (uRam000000018327dab0 & 0x7fffffffffffffff);
  uRam000000018327dc88 = uRam000000018327db78 ^ uRam000000018327dce0;
  uRam000000018327ddc8 = 0xadd7f450;
  uVar5 = (~uRam000000018327dd90 + 0x52280bb1) *
          ((uRam000000018327dc90 ^ 0x84222901) +
          (ulonglong)((uint)uRam000000018327dc90 & 0x84222901) * 2);
  uVar5 = (uVar5 | uRam000000018327ddb0) + (uVar5 & uRam000000018327ddb0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327db08 =
       func_0x00018af0cd00((uVar5 | 0xd60a22b1) + (ulonglong)((uint)uVar5 & 0xd60a22b1));
  uVar5 = (ulonglong)(~(uint)uRam000000018327db08 & 0xa24);
  uRam000000018327da90 = uRam000000018327dcb0 ^ uVar5 ^ 0x522815d4;
  uRam000000018327dc50 = (uRam000000018327dc50 ^ uVar5) + 0x522815d4 ^ 0x2af63072c659cd0d;
  uRam000000018327dac8 = (uRam000000018327dac8 * -0x40ef111a8ba34f45 ^ uRam000000018327dc50) + uVar5
  ;
  uRam000000018327d908 = uRam000000018327dac8 ^ uRam000000018327dc50;
  uRam000000018327da70 = 0x522815d4;
  lVar3 = func_0x00018af0cd00(uRam000000018327da08 ^ 0xff86ffc4fcffd03e);
  uVar5 = lVar3 * -0x1204cebf52b9c84b;
  uRam000000018327dbb0 = uRam000000018327db30 ^ uVar5 ^ 0x1b6e3cbdc;
  uRam000000018327dbb8 = (uRam000000018327dbb8 ^ uVar5) + 0x1b6e3cbdc ^ 0xd4abeaac311cd71f;
  uRam000000018327dda8 = (uRam000000018327dda8 * -0x55c0bbf27410cb8b ^ uRam000000018327dbb8) + uVar5
  ;
  uRam000000018327dd50 = uRam000000018327dda8 ^ uRam000000018327dbb8;
  uRam000000018327d908 = 0xb6e3cbdc;
  uVar5 = func_0x00018af0cd00(uRam000000018327dbf0 + 0x7900bb05000eff ^ 0x29);
  uRam000000018327de80 = (uVar5 ^ uVar5 & 0xffffffffffff8000) + 0x4913aa20 ^ 0x680df0ea53e47965;
  uRam000000018327db00 =
       (uRam000000018327db00 * 0x18a2c74217428d0f ^ uRam000000018327de80) +
       (uVar5 & 0xffffffffffff8000);
  uRam000000018327de98 = uRam000000018327db00 ^ uRam000000018327de80;
  uRam000000018327dde8 = 0x4913aa20;
  uRam000000018327de70 = func_0x00018af0cd00(uRam000000018327dad0 ^ 0x57ff5fa700208d);
  uVar5 = uRam000000018327de70 ^ 0x4913aa20;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  uRam000000018327db58 = uRam000000018327d958 ^ uVar5 ^ 0xb6e3cbdc;
  uRam000000018327d990 = (uRam000000018327d990 ^ uVar5) + 0xb6e3cbdc ^ 0x5ea00fda4616df38;
  uRam000000018327da40 = (uRam000000018327da40 * -0x1cda5a8a8edf34b ^ uRam000000018327d990) + uVar5;
  uRam000000018327de28 = uRam000000018327da40 ^ uRam000000018327d990;
  uRam000000018327d9b8 = 0xb6e3cbdc;
  uVar5 = (~uRam000000018327da10 + 0xb6e3cbdd) *
          ((uRam000000018327dc78 ^ 0x32c1e8f9) +
          (ulonglong)((uint)uRam000000018327dc78 & 0x32c1e8f9) * 2);
  uVar5 = (uVar5 | uRam000000018327ded8) + (uVar5 & uRam000000018327ded8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dc68 =
       func_0x00018af0cd00((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018327ddf8 = uRam000000018327ddf8 ^ uRam000000018327dc68 ^ 0xd3b2cf9fba7b6738;
  uRam000000018327d940 =
       (uRam000000018327d940 * 0x67f9621c5be51945 ^ uRam000000018327ddf8) + uRam000000018327dc68;
  uRam000000018327dd10 = uRam000000018327d940 ^ uRam000000018327ddf8;
  uRam000000018327ddc8 = 0;
  uVar5 = (~uRam000000018327dea8 + 0x100000000) *
          ((uRam000000018327dca0 ^ 0x72dbb9db) +
          (ulonglong)((uint)uRam000000018327dca0 & 0x72dbb9db) * 2);
  uVar5 = (uVar5 | uRam000000018327dac0) + (uVar5 & uRam000000018327dac0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dd90 = uRam000000018327dc68;
  uRam000000018327da58 =
       func_0x00018af0cd00((uVar5 | 0x8d244624) + (ulonglong)((uint)uVar5 & 0x8d244624));
  uRam000000018327dd50 =
       (uRam000000018327dd50 ^ uRam000000018327da58 ^ 0x9066501) + 0x9066501 ^ 0xb0d15c66ab699048;
  uRam000000018327de20 =
       (uRam000000018327de20 * 0x37d561425b18bdff ^ uRam000000018327dd50) +
       (uRam000000018327da58 ^ 0x9066501);
  uRam000000018327dd88 = uRam000000018327de20 ^ uRam000000018327dd50;
  uRam000000018327de00 = 0x9066501;
  uVar5 = (~uRam000000018327db78 + 0x9066502) *
          ((uRam000000018327db20 ^ 0x72dbb9db) +
          (ulonglong)((uint)uRam000000018327db20 & 0x72dbb9db) * 2);
  uVar5 = (uVar5 | uRam000000018327da78) + (uVar5 & uRam000000018327da78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dae8 =
       func_0x00018af0cd00((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uVar5 = uRam000000018327dae8 << 0x25 | uRam000000018327dae8 >> 0x1b;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar5;
  uRam000000018327dbe0 = uRam000000018327dbe0 ^ uVar5 ^ 0xd6d1ebe3092eb7f3;
  uRam000000018327dab0 = (uRam000000018327dab0 * 0x6c1874f615146c9d ^ uRam000000018327dbe0) + uVar5;
  uRam000000018327db98 = uRam000000018327dab0 ^ uRam000000018327dbe0;
  uRam000000018327dca0 = 0;
  uVar5 = ((uRam000000018327dd90 ^ 0x84222901) +
          (ulonglong)((uint)uRam000000018327dd90 & 0x84222901) * 2) * -uRam000000018327ddf8;
  uVar5 = (uVar5 | uRam000000018327de70) + (uVar5 & uRam000000018327de70);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327da78 =
       func_0x00018af0cd00((uVar5 | 0x84222901) + (ulonglong)((uint)uVar5 & 0x84222901));
  uVar5 = uRam000000018327da78 << 0x33 | uRam000000018327da78 >> 0xd;
  uRam000000018327de98 = uRam000000018327dbf0 ^ uVar5 ^ 0xa24;
  uRam000000018327dcc8 = (uRam000000018327dc18 ^ uVar5) + 0xa24 ^ 0x655445e675551ada;
  uRam000000018327db48 = (uRam000000018327db48 * -0x74a4a123511d2763 ^ uRam000000018327dcc8) + uVar5
  ;
  uRam000000018327dcc8 = uRam000000018327db48 ^ uRam000000018327dcc8;
  uRam000000018327dc18 = 0xa24;
  uRam000000018327dae0 = func_0x00018af0cd00(lRam000000018327da68 + 0x1cff8422ffe1ffU ^ 0x99);
  uRam000000018327ddf0 =
       uRam000000018327ddf0 ^ uRam000000018327dae0 & 0xffffffffffffffc0 ^ 0x7935dfda584e3214;
  uRam000000018327db28 =
       (uRam000000018327db28 * -0x61ae1080b398603d ^ uRam000000018327ddf0) +
       (uRam000000018327dae0 & 0xffffffffffffffc0);
  uRam000000018327dd80 = uRam000000018327db28 ^ uRam000000018327ddf0;
  uRam000000018327d9c0 = 0;
  uVar5 = (~uRam000000018327dc30 + 0xa25) *
          ((uVar8 ^ 0x84222325 ^ uRam000000018327d940) +
          (ulonglong)((uint)uRam000000018327d940 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam000000018327de80) + (uVar5 & uRam000000018327de80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327d900 =
       func_0x00018af0cd00((uVar8 ^ 0x84222901 | uVar5) +
                           (ulonglong)((uint)(uVar8 ^ 0x84222901) & (uint)uVar5));
  uVar5 = (uVar8 ^ (uVar8 | 0xa24) ^ uRam000000018327d900) * 0x75da65f48d3b0105;
  lVar3 = uVar8 - (uVar2 & 0xa24) * 2;
  uRam000000018327dd98 = (uRam000000018327dd98 ^ uVar5) + lVar3 + 0xa24 ^ 0x3dca39956885db44;
  uRam000000018327dc20 = (uRam000000018327dc20 * 0xa479430c7cb9077 ^ uRam000000018327dd98) + uVar5;
  uRam000000018327dc50 = uRam000000018327dc20 ^ uRam000000018327dd98;
  uRam000000018327d998 = lVar3 + 0xa24U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x142f2,0x328);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af0402d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a02640 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fD; aSL (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18af0cd90, runtime 6ffff2b1cd90) =====

void FUN_18af0cd90(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018af0cddb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a04640 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fD; aSM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18af0dda0, runtime 6ffff2b1dda0) =====

void FUN_18af0dda0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af0de29 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a04c00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



