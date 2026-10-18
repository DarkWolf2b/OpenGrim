// ===== Lsixtwo/fm; _a79e8a844e8815af838bfc52c5fb090e ()V (handler @ image 18c39e740, runtime 6ffff3fae740) =====

void FUN_18c39e740(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c39e828 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e6c0e8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKA (Ljava/util/List;ZZ)Z (handler @ image 18c36e5a0, runtime 6ffff3f7e5a0) =====

void FUN_18c36e5a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c36e664 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e60770 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKB (Lnet/minecraft/class_243;Lnet/minecraft/class_243;)Lnet/minecraft/class_243; (handler @ image 18c3741f0, runtime 6ffff3f841f0) =====

void FUN_18c3741f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3742b4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e62510 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKC (Lsixtwo/mc;Lnet/minecraft/class_243;)Lnet/minecraft/class_243; (handler @ image 18c3788f0, runtime 6ffff3f888f0) =====

void FUN_18c3788f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12545,0x2ec);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c378949 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e63970 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKD (Lsixtwo/mc;Lnet/minecraft/class_243;)Lnet/minecraft/class_243; (handler @ image 18c378c60, runtime 6ffff3f88c60) =====

void FUN_18c378c60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12545,0x2ec);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c378cb9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e63aa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKE (Lnet/minecraft/class_742;)Z (handler @ image 18c378fd0, runtime 6ffff3f88fd0) =====

void FUN_18c378fd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c379025 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e63be0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKF (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18c3799d0, runtime 6ffff3f899d0) =====

undefined8 FUN_18c3799d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fm; aKG (IJ)I (handler @ image 18c379a60, runtime 6ffff3f89a60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c379a60(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar11 [16];
  
  uVar6 = (~uRam00000001832fca20 + 0x8b410084c5a5fde9) *
          ((uRam00000001832fca38 ^ 0x5a0f0783ff5ad8fc) +
          (uRam00000001832fca38 & 0x5a0f0783ff5ad8fc) * 2);
  uVar6 = (uVar6 | uRam00000001832fcc68) + (uVar6 & uRam00000001832fcc68);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832fc9b8 =
       func_0x00018c384650((uVar6 | 0xd14e07073aff2514) + (uVar6 & 0xd14e07073aff2514));
  uRam00000001832fca60 =
       (uRam00000001832fca60 ^ uRam00000001832fc9b8 & 0x7fffffffffffffff) + 0xdb4f0787fffdfff9 ^
       0xba01db38aa6cef80;
  uRam00000001832fcaf8 =
       (uRam00000001832fcaf8 * 0x5c464acc629a0735 ^ uRam00000001832fca60) +
       (uRam00000001832fc9b8 & 0x7fffffffffffffff);
  uRam00000001832fcb80 = uRam00000001832fcaf8 ^ uRam00000001832fca60;
  uRam00000001832fc9a8 = 0xdb4f0787fffdfff9;
  uVar6 = (uRam00000001832fc980 ^ _UNK_181e65eb0) + uRam00000001832fc9c8 + 0x84222325;
  uVar12 = (uRam00000001832fc9c8 ^ _UNK_181e65eb8) + uRam00000001832fc980 + 0x6eea7404e0ff5ae8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fc980 ^ _UNK_181e65eb0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001832fc9c8 ^ _UNK_181e65eb8;
  uRam00000001832fc9b0 =
       func_0x00018c384650((uVar12 << 0x1d | uVar12 >> 0x23) -
                           (uRam00000001832fc980 + 0x6eea7404e0ff5ae8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fc9c8 + 0x84222325));
  uVar6 = (uRam00000001832fc9b0 & 0x1ffffffff) -
          (ulonglong)((uint)(uRam00000001832fc9b0 >> 1) & 0x55555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001832fc9b0 & 0x1ffffffff;
  uRam00000001832fcad8 = (uRam00000001832fcad8 ^ uVar6) + 0x91158bfb1f00a518 ^ 0xe14462752a02bd0e;
  uRam00000001832fcb10 = (uRam00000001832fcb10 * -0x7a08c6a808f30a4f ^ uRam00000001832fcad8) + uVar6
  ;
  uRam00000001832fcae8 = uRam00000001832fcb10 ^ uRam00000001832fcad8;
  uRam00000001832fcb18 = 0x91158bfb1f00a518;
  uVar6 = (uRam00000001832fc980 ^ _UNK_181e65ec0) + uRam00000001832fc9b0 + 0x84225cda;
  uVar12 = (uRam00000001832fc9b0 ^ _UNK_181e65ec8) + uRam00000001832fc980 + 0x6eea7404e0ff5ae8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fc980 ^ _UNK_181e65ec0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001832fc9b0 ^ _UNK_181e65ec8;
  uRam00000001832fccb0 =
       func_0x00018c384650((uVar12 << 0x1d | uVar12 >> 0x23) -
                           (uRam00000001832fc980 + 0x6eea7404e0ff5ae8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fc9b0 + 0x84225cda));
  uVar6 = (uRam00000001832fccb0 ^ 0xa7404e0ff7fff) & 0xfffffffffffff;
  uRam00000001832fca38 = uRam00000001832fca10 ^ uVar6 ^ 0x6eea7404e0ffdae7;
  uRam00000001832fc9b0 = (uRam00000001832fc9b0 ^ uVar6) + 0x6eea7404e0ffdae7 ^ 0xb3963707eac33b3b;
  uRam00000001832fc9d8 = (uRam00000001832fc9d8 * 0x5032ad8a3014e5ab ^ uRam00000001832fc9b0) + uVar6;
  uRam00000001832fc960 = uRam00000001832fc9d8 ^ uRam00000001832fc9b0;
  uRam00000001832fc9b8 = 0x6eea7404e0ffdae7;
  uVar6 = (~uRam00000001832fcbb0 + 0x91158bfb1f00a519) *
          ((uRam00000001832fc970 ^ 0x6eea740464ddf9c2) +
          (uRam00000001832fc970 & 0x6eea740464ddf9c2) * 2);
  uVar6 = (uVar6 | uRam00000001832fcbd8) + (uVar6 & uRam00000001832fcbd8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832fcad8 =
       func_0x00018c384650((uVar6 | 0xffffffff7bdd5cda) + (uVar6 & 0xffffffff7bdd5cda));
  uVar12 = uRam00000001832fcad8 ^ 0x91158bfb1f002518;
  uVar6 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar12 = (uint)bVar1 + (uint)bVar1 ^ uVar12;
  uRam00000001832fcbd8 = uRam00000001832fcae8 ^ uVar12 ^ 0x7fff;
  uRam00000001832fc960 = (uRam00000001832fc960 ^ uVar12) + 0x7fff ^ 0x7921f22a5cff7ae7;
  uRam00000001832fcbf0 = (uRam00000001832fcbf0 * 0x9e642389bb1065d ^ uRam00000001832fc960) + uVar12;
  uRam00000001832fcaa8 = uRam00000001832fcbf0 ^ uRam00000001832fc960;
  uRam00000001832fcaf8 = 0x7fff;
  uVar6 = (uRam00000001832fc918 ^ _UNK_181e65ed0) + uRam00000001832fcb58 + 0x84222325;
  uVar12 = (uRam00000001832fcb58 ^ _UNK_181e65ed8) + uRam00000001832fc918 + 0x94ff1b367457fdf8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fc918 ^ _UNK_181e65ed0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001832fcb58 ^ _UNK_181e65ed8;
  uRam00000001832fcbb0 =
       func_0x00018c384650((uVar12 << 0x1d | uVar12 >> 0x23) -
                           (uRam00000001832fc918 + 0x94ff1b367457fdf8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fcb58 + 0x84222325));
  uVar6 = uRam00000001832fcbb0 >> 1 | uRam00000001832fcbb0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001832fcbb0;
  uRam00000001832fca48 = (uRam00000001832fca48 ^ uVar6) + 0x6b00e4c98ba80208 ^ 0x6b4e5fe8ec8d3d43;
  uRam00000001832fc910 = (uRam00000001832fc910 * 0x227ba8c917071d6b ^ uRam00000001832fca48) + uVar6;
  uRam00000001832fc9a0 = uRam00000001832fc910 ^ uRam00000001832fca48;
  uRam00000001832fc988 = 0x6b00e4c98ba80208;
  uRam00000001832fcac8 = func_0x00018c384650(uRam00000001832fc9e8 ^ 0x12606fafddf57243);
  uVar6 = uRam00000001832fcac8 ^ 0x94ff1b367457ffff;
  uRam00000001832fc9d0 = uRam00000001832fcc00 ^ uVar6 ^ 0x94ff1b3674587df7;
  uRam00000001832fcbe0 = (uRam00000001832fcbe0 ^ uVar6) + 0x94ff1b3674587df7 ^ 0xcf6f3a39e2757b3d;
  uRam00000001832fcb30 = (uRam00000001832fcb30 * -0x7fafaf0300d0f253 ^ uRam00000001832fcbe0) + uVar6
  ;
  uRam00000001832fcbb0 = uRam00000001832fcb30 ^ uRam00000001832fcbe0;
  uRam00000001832fcca8 = 0x94ff1b3674587df7;
  uRam00000001832fcc30 = func_0x00018c384650(uRam00000001832fcaa0 ^ 0xa9074a8334addac7);
  uVar12 = _UNK_181e65ee8;
  uVar6 = _UNK_181e65ee0;
  uVar4 = uRam00000001832fcc30 ^ 0x51cbd5d70bc8540e;
  uRam00000001832fcb10 = uRam00000001832fcbf8 ^ uVar4 ^ 0x51cbd5d70bc8d40d;
  uRam00000001832fcba8 = (uRam00000001832fcba8 ^ uVar4) + 0x51cbd5d70bc8d40d ^ 0x2916f23f23edfe5d;
  uRam00000001832fca00 = (uRam00000001832fca00 * 0x4551d3c80826e885 ^ uRam00000001832fcba8) + uVar4;
  uRam00000001832fcc60 = uRam00000001832fca00 ^ uRam00000001832fcba8;
  uRam00000001832fcca0 = 0x51cbd5d70bc8d40d;
  uVar4 = (uRam00000001832fcc30 ^ _UNK_181e65ee0) + uRam00000001832fca68 + 0xdb4f07877bdfdcdc;
  uVar13 = (uRam00000001832fca68 ^ _UNK_181e65ee8) + uRam00000001832fcc30 + 0x128507195159fa47;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832fcc30 ^ _UNK_181e65ee0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uRam00000001832fca68 ^ _UNK_181e65ee8;
  uRam00000001832fcae8 =
       func_0x00018c384650((uVar13 << 0x1d | uVar13 >> 0x23) -
                           (uRam00000001832fcc30 + 0x128507195159fa47) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832fca68 + 0xdb4f07877bdfdcdc));
  uVar4 = uRam00000001832fcae8 ^ 0xdbcf079ffffdffff;
  uRam00000001832fc9a0 = uRam00000001832fcb88 ^ uVar4 ^ 0xedd40ea15157fa40;
  uRam00000001832fcb88 = (uRam00000001832fcb88 ^ uVar4) + 0xedd40ea15157fa40 ^ 0xfd2dfa47f2a2527d;
  uRam00000001832fcab0 = (uRam00000001832fcab0 * -0x40ad7e9d129f6a6f ^ uRam00000001832fcb88) + uVar4
  ;
  uRam00000001832fccd8 = uRam00000001832fcab0 ^ uRam00000001832fcb88;
  uRam00000001832fcb80 = 0xedd40ea15157fa40;
  uVar4 = uRam00000001832fcbe8 ^ uVar6;
  uVar13 = uRam00000001832fc9b8 ^ uVar12;
  uVar10 = uVar4 + uRam00000001832fc9b8 + 0xdb4f07877bdfdcdc;
  uVar14 = uVar13 + uRam00000001832fcbe8 + 0x128507195159fa47;
  uVar4 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar4;
  uVar13 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar13;
  uRam00000001832fcbc8 =
       func_0x00018c384650((uVar13 << 0x1d | uVar13 >> 0x23) -
                           (uRam00000001832fcbe8 + 0x128507195159fa47) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832fc9b8 + 0xdb4f07877bdfdcdc));
  uVar4 = (uRam00000001832fcbc8 ^ 0x16b81252d1fc280f) * -0x68311350eb89fa77;
  uRam00000001832fccc0 = (uRam00000001832fccc0 ^ uVar4) + 0xc9ca009eaea405be ^ 0xb929742ae41d252f;
  uRam00000001832fcc50 = (uRam00000001832fcc50 * 0x24bf5ad3721ffd27 ^ uRam00000001832fccc0) + uVar4;
  uRam00000001832fca20 = uRam00000001832fcc50 ^ uRam00000001832fccc0;
  uRam00000001832fcb98 = 0xc9ca009eaea405be;
  uVar6 = uRam00000001832fccc0 ^ uVar6;
  uVar12 = uRam00000001832fcb38 ^ uVar12;
  uVar4 = uVar6 + uRam00000001832fcb38 + 0xdb4f07877bdfdcdc;
  uVar13 = uVar12 + uRam00000001832fccc0 + 0x128507195159fa47;
  uVar6 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6;
  uVar12 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar12;
  uRam00000001832fc970 =
       func_0x00018c384650((uVar12 << 0x1d | uVar12 >> 0x23) -
                           (uRam00000001832fccc0 + 0x128507195159fa47) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832fcb38 + 0xdb4f07877bdfdcdc));
  uVar6 = uRam00000001832fc970 << 0x38 | uRam00000001832fc970 >> 8;
  uRam00000001832fc910 = (uRam00000001832fc910 ^ uVar6) + 0x120507015159fa41 ^ 0x6c9388227cd1d920;
  uRam00000001832fcbc0 = (uRam00000001832fcbc0 * 0x1b611725866b4f59 ^ uRam00000001832fc910) + uVar6;
  uRam00000001832fc9b8 = uRam00000001832fcbc0 ^ uRam00000001832fc910;
  uRam00000001832fcc38 = 0x120507015159fa41;
  uRam00000001832fcc50 = func_0x00018c384650(lRam00000001832fcc90 + 0xffcc008455ffddffU ^ 0x3e);
  uVar6 = uRam00000001832fcc50 ^ 0x7fff;
  uVar12 = uVar6 >> 1 | uVar6;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (~((uint)uVar6 ^
            (0x40 - (uint)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 8) & 0x7fff) << 0x2c;
  uRam00000001832fc9b8 = uRam00000001832fcca8 ^ uVar6 ^ 0x7fff;
  uRam00000001832fca58 = (uRam00000001832fca58 ^ uVar6) + 0x7fff ^ 0x3235af75b6a417ee;
  uRam00000001832fcab0 = (uRam00000001832fcab0 * 0x23cad70d4f2408f3 ^ uRam00000001832fca58) + uVar6;
  uRam00000001832fc930 = uRam00000001832fcab0 ^ uRam00000001832fca58;
  uRam00000001832fcc98 = 0x7fff;
  uVar6 = (~uRam00000001832fcbf8 + 0x24b0f87800020007) *
          ((uRam00000001832fcb20 ^ 0xdb4f07877bdfdcdc) +
          (uRam00000001832fcb20 & 0x5b4f07877bdfdcdc) * 2);
  uVar6 = (uVar6 | uRam00000001832fcc20) + (uVar6 & uRam00000001832fcc20);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832fc9b0 =
       func_0x00018c384650((uVar6 | 0xffffffff7bdddcda) + (uVar6 & 0xffffffff7bdddcda));
  uRam00000001832fc9f0 =
       uRam00000001832fc9f0 ^ uRam00000001832fc9b0 ^ 0xdb4f0787fffdfff9 ^ 0xa6a52d166e8858ce;
  uRam00000001832fc9f8 =
       (uRam00000001832fc9f8 * 0x621c47f0b6e2002d ^ uRam00000001832fc9f0) +
       (uRam00000001832fc9b0 ^ 0xdb4f0787fffdfff9);
  uRam00000001832fcae0 = uRam00000001832fc9f8 ^ uRam00000001832fc9f0;
  uRam00000001832fcad8 = 0;
  uVar6 = (~uRam00000001832fc988 + 0x5a0f07837b78fbda) *
          ((uRam00000001832fca20 ^ 0x5a0f0783ff5ad8fc) +
          (uRam00000001832fca20 & 0x5a0f0783ff5ad8fc) * 2);
  uVar6 = (uVar6 | uRam00000001832fca60) + (uVar6 & uRam00000001832fca60);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832fc9d8 =
       func_0x00018c384650((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uRam00000001832fcb78 =
       uRam00000001832fcb78 ^ uRam00000001832fc9d8 ^ 0x5a0f07837b78fbd9 ^ 0x78931481d578a56c;
  uRam00000001832fcb30 =
       (uRam00000001832fcb30 * -0x752d78d40ca144e7 ^ uRam00000001832fcb78) +
       (uRam00000001832fc9d8 ^ 0x5a0f07837b78fbd9);
  uRam00000001832fcaa8 = uRam00000001832fcb30 ^ uRam00000001832fcb78;
  uRam00000001832fcc18 = 0;
  uVar6 = (uRam00000001832fc9c0 ^ 0x84225cda) + uRam00000001832fc9f8 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fc9c0 ^ 0x84225cda;
  uVar12 = ((uRam00000001832fc9f8 + uRam00000001832fc9c0) * 0x2000 |
           uRam00000001832fc9f8 + uRam00000001832fc9c0 >> 0x33) ^ uRam00000001832fc9f8;
  uRam00000001832fca80 =
       func_0x00018c384650((uVar12 << 0x1d | uVar12 >> 0x23) - uRam00000001832fc9c0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fc9f8 + 0x84225cda));
  auVar11 = _UNK_1800170c0;
  uVar6 = ~(ulonglong)((uint)(uRam00000001832fca80 >> 0x3a) | (int)uRam00000001832fca80 << 6) &
          0x7fff;
  uRam00000001832fcb90 = uRam00000001832fc918 ^ uVar6 ^ 0x7fff;
  uRam00000001832fc9e0 = (uRam00000001832fc9e0 ^ uVar6) + 0x7fff ^ 0xeed117df871231fb;
  uRam00000001832fcac8 = (uRam00000001832fcac8 * -0x2cb3b13c4e255a21 ^ uRam00000001832fc9e0) + uVar6
  ;
  uRam00000001832fcbd0 = uRam00000001832fcac8 ^ uRam00000001832fc9e0;
  auVar8._8_8_ = _UNK_18019c088;
  auVar8._0_8_ = param_4 ^ 0x84222325;
  uRam00000001832fcb98 = 0x7fff;
  auVar9 = pshufb(auVar8 ^ _UNK_181e65ef0,_UNK_1800170c0);
  uVar12 = auVar9._8_8_ + auVar9._0_8_;
  uVar6 = uVar12 + uRam00000001832fc9a0;
  if (auVar9._4_4_ < 0) {
    uVar6 = uRam00000001832fcb38 ^ uVar12;
  }
  uVar6 = func_0x00018c384650(SUB161(auVar8 ^ _UNK_181e65ef0,5) ^ uVar6);
  uVar12 = uVar6 >> 1 | uVar6;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar6 = ~((0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
            0x10 ^ uVar6) & param_4;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar12 = (ulonglong)uVar3;
  uRam00000001832fcab0 = (uRam00000001832fcab0 ^ uVar6) + uVar12 ^ 0x1a8c34e7eb038978;
  uRam00000001832fc918 = (uRam00000001832fc918 * -0x4c800e7dd0ab1e3d ^ uRam00000001832fcab0) + uVar6
  ;
  uRam00000001832fcbd8 = uRam00000001832fc918 ^ uRam00000001832fcab0;
  auVar9._4_4_ = 0;
  auVar9._0_4_ = uVar3 ^ 0x84222325;
  auVar9._8_4_ = param_3;
  auVar9._12_4_ = 0;
  auVar11 = pshufb(auVar9 ^ _UNK_181e65f00,auVar11);
  uVar4 = auVar11._8_8_ + auVar11._0_8_;
  uVar6 = uVar4 + uRam00000001832fcc08;
  if (auVar11._4_4_ < 0) {
    uVar6 = uRam00000001832fca88 ^ uVar4;
  }
  uRam00000001832fc9d0 = uVar12;
  uRam00000001832fcc88 = func_0x00018c384650(SUB161(auVar9 ^ _UNK_181e65f00,5) ^ uVar6);
  uVar12 = (uVar12 + param_3) - (ulonglong)((param_3 & uVar3) * 2);
  uRam00000001832fcc70 =
       (uRam00000001832fcc70 ^ uRam00000001832fcc88 & 0xffffffffffffff00) + uVar12 ^
       0xe5497d7c52a1a3e0;
  uRam00000001832fca30 =
       (uRam00000001832fca30 * 0x6d5b1e7a231ae60f ^ uRam00000001832fcc70) +
       (uRam00000001832fcc88 & 0xffffffffffffff00);
  uRam00000001832fcaf8 = uRam00000001832fca30 ^ uRam00000001832fcc70;
  uVar12 = uVar12 & 0xffffffff;
  uRam00000001832fc900 = uVar12;
  uRam00000001832fcc68 = func_0x00018c384650(uRam00000001832fc980 + 0xff35001f0d004dff ^ 0x1b);
  uRam00000001832fcc58 =
       (uRam00000001832fcc58 ^ uRam00000001832fcc68) + 0xf7fdfe94 ^ 0x15752a57fbd3c484;
  uRam00000001832fcb70 =
       (uRam00000001832fcb70 * -0x69efecefeeeb6d49 ^ uRam00000001832fcc58) + uRam00000001832fcc68;
  uRam00000001832fca80 = uRam00000001832fcb70 ^ uRam00000001832fcc58;
  uRam00000001832fca20 = 0xf7fdfe94;
  uVar6 = (~uRam00000001832fcac0 + 0xd2e4890b) *
          ((uRam00000001832fc9c8 ^ 0xab762f82) +
          (ulonglong)((uint)uRam00000001832fc9c8 & 0xab762f82) * 2);
  uVar6 = (uVar6 | uRam00000001832fc9b0) + (uVar6 & uRam00000001832fc9b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832fcc08 =
       func_0x00018c384650((uVar6 | 0x7992a688) + (ulonglong)((uint)uVar6 & 0x7992a688));
  uVar6 = (ulonglong)
          (~((uint)(uRam00000001832fcc08 << 0x1c) | (uint)(uRam00000001832fcc08 >> 0x24)) &
          0x2f540ca7);
  uRam00000001832fc908 = (uRam00000001832fc908 ^ uVar6) + 0xfdb085ad ^ 0x9b9317b8a6f6f474;
  uRam00000001832fcaf8 = (uRam00000001832fcaf8 * 0xca0ed662b89cbbb ^ uRam00000001832fc908) + uVar6;
  uRam00000001832fcbb8 = uRam00000001832fcaf8 ^ uRam00000001832fc908;
  uRam00000001832fcb88 = 0xfdb085ad;
  uVar6 = (uRam00000001832fc940 ^ _UNK_181e65f10) + uRam00000001832fcb70 + 0x84220525;
  uVar4 = (uRam00000001832fcb70 ^ _UNK_181e65f18) + uRam00000001832fc940 + 0x4c9e4450;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fc940 ^ _UNK_181e65f10;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832fcb70 ^ _UNK_181e65f18;
  uRam00000001832fcb68 =
       func_0x00018c384650((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832fc940 + 0x4c9e4450) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fcb70 + 0x84220525));
  uVar6 = uRam00000001832fcb68 ^ 0xb5f7e23e000;
  uRam00000001832fcb18 = uRam00000001832fcc98 ^ uVar6 ^ 0x4c9e6a50;
  uRam00000001832fcb20 = (uRam00000001832fcb20 ^ uVar6) + 0x4c9e6a50 ^ 0xb449acc6063adb0f;
  uRam00000001832fc900 = (uRam00000001832fc900 * -0x2187ad406c3ceb29 ^ uRam00000001832fcb20) + uVar6
  ;
  uRam00000001832fcc28 = uRam00000001832fc900 ^ uRam00000001832fcb20;
  uRam00000001832fc930 = uRam00000001832fcbb8 ^ 0x4c9e6a50;
  uRam00000001832fcc80 = 0x4c9e6a50;
  uRam00000001832fca80 = func_0x00018c384650(uRam00000001832fcb88 ^ 0xff71fff6c4ff5a73);
  uVar6 = (ulonglong)(~(uint)uRam00000001832fca80 & 0x4c9e6a50);
  uRam00000001832fc9b8 = uRam00000001832fcba0 ^ uVar6 ^ 0x100002600;
  uRam00000001832fc9c0 = (uRam00000001832fc9c0 ^ uVar6) + 0x100002600 ^ 0xb86da1fab4bf1b63;
  uRam00000001832fcb60 = (uRam00000001832fcb60 * 0x28b24dba50832aa5 ^ uRam00000001832fc9c0) + uVar6;
  uRam00000001832fcc18 = uRam00000001832fcb60 ^ uRam00000001832fc9c0;
  uRam00000001832fcae0 = 0x2600;
  uRam00000001832fcb90 = func_0x00018c384650(0x7fff9d8effbaea);
  uVar6 = uRam00000001832fcb90 >> 1 | uRam00000001832fcb90;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001832fcb90;
  uRam00000001832fcc88 = (uRam00000001832fcc88 ^ uVar6) - 0xe14da392 ^ 0x52e088969b9f3e32;
  uRam00000001832fca88 = (uRam00000001832fca88 * 0x68f35e103f292fe1 ^ uRam00000001832fcc88) + uVar6;
  uRam00000001832fcc78 = uRam00000001832fca88 ^ uRam00000001832fcc88;
  uRam00000001832fc9f0 = 0x1eb25c6e;
  uRam00000001832fc9a8 = func_0x00018c384650(uRam00000001832fc970 ^ 0xff5dffe5770014d5);
  uVar6 = uRam00000001832fc9a8 ^ 0x21718647ac00;
  uRam00000001832fcbc8 = uRam00000001832fc958 ^ uVar6 ^ 0xe14dc992;
  uRam00000001832fcb70 = (uRam00000001832fcb70 ^ uVar6) + 0xe14dc992 ^ 0xdb6d0e6ffb007fb1;
  uRam00000001832fca00 = (uRam00000001832fca00 * 0x39288466d31a6463 ^ uRam00000001832fcb70) + uVar6;
  uRam00000001832fca78 = uRam00000001832fca00 ^ uRam00000001832fcb70;
  uRam00000001832fccf0 = 0xe14dc992;
  uRam00000001832fca60 = func_0x00018c384650(uRam00000001832fcbb0 + 0xff76003a29002cff ^ 0xf6);
  uVar6 = uRam00000001832fca60 ^ 0x1eb2146c;
  uRam00000001832fcb40 = uRam00000001832fccc0 ^ uVar6 ^ 0x100002600;
  uRam00000001832fca70 = (uRam00000001832fca70 ^ uVar6) + 0x100002600 ^ 0x3ee7e0915f2226d4;
  uRam00000001832fcc38 = (uRam00000001832fcc38 * 0x20c49328dcdfd05f ^ uRam00000001832fca70) + uVar6;
  uRam00000001832fcba0 = uRam00000001832fcc38 ^ uRam00000001832fca70;
  uRam00000001832fc900 = 0x2600;
  uRam00000001832fc958 = func_0x00018c384650(uRam00000001832fc908 + 0xffd9ffc5ab00bbff ^ 0x7f);
  uVar3 = ~(uint)uRam00000001832fc958 & 0x88130e98;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          (ulonglong)uVar3;
  uRam00000001832fc940 = uRam00000001832fca18 ^ uVar6 ^ 0x100002600;
  uRam00000001832fc9f0 = (uRam00000001832fc9f0 ^ uVar6) + 0x100002600 ^ 0x47492d76ae3dfb4c;
  uRam00000001832fcc88 = (uRam00000001832fcc88 * 0x2e34934b4aa3093d ^ uRam00000001832fc9f0) + uVar6;
  uRam00000001832fcab8 = uRam00000001832fcc88 ^ uRam00000001832fc9f0;
  uRam00000001832fca88 = 0x2600;
  uVar6 = (uRam00000001832fc9b0 ^ _UNK_181e65f20) + uRam00000001832fc9b0 + 0x73dfddb1;
  uVar4 = (uRam00000001832fc9b0 ^ _UNK_181e65f28) + uRam00000001832fc9b0 + 0xfdb085ad;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fc9b0 ^ _UNK_181e65f20;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832fc9b0 ^ _UNK_181e65f28;
  uRam00000001832fcb60 =
       func_0x00018c384650((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832fc9b0 + 0xfdb085ad) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fc9b0 + 0x73dfddb1));
  uVar6 = uRam00000001832fcb60 ^ 0xf7fdfe94;
  uRam00000001832fcc40 = uRam00000001832fcad8 ^ uVar6 ^ 0x1f5ae8441;
  uRam00000001832fca30 = (uRam00000001832fca30 ^ uVar6) + 0x1f5ae8441 ^ 0xc31865bd244a0421;
  uRam00000001832fca68 = (uRam00000001832fca68 * 0x776702ced55f553d ^ uRam00000001832fca30) + uVar6;
  uRam00000001832fcb48 = uRam00000001832fca68 ^ uRam00000001832fca30;
  uRam00000001832fc948 = 0xf5ae8441;
  uRam00000001832fcbc8 = func_0x00018c384650(uRam00000001832fca58 + 0x47ff8e1c0054ff ^ 0x67);
  uVar6 = (uRam00000001832fcbc8 ^ 0xf5c104b5d5a7ee04) & 0x7fffffffffffffff ^ 0xf7fdfe94;
  uRam00000001832fca98 = (uRam00000001832fca98 ^ uVar6) + 0xa4d7b39 ^ 0xdf94ecba56c022f0;
  uRam00000001832fca30 = (uRam00000001832fca30 * -0x10e8f988f5905249 ^ uRam00000001832fca98) + uVar6
  ;
  uRam00000001832fcc28 = uRam00000001832fca30 ^ uRam00000001832fca98;
  uRam00000001832fcb68 = 0xa4d7b39;
  uRam00000001832fc950 = func_0x00018c384650(uRam00000001832fcc28 + 0x4effdaebfff5ff ^ 0x44);
  uVar6 = (uRam00000001832fc950 & 0xffffffffffffe) << 0x35 |
          (uRam00000001832fc950 & 0xffffffffffffe) >> 0xb;
  uRam00000001832fcab8 = uRam00000001832fcad0 ^ uVar6 ^ 0xf5ae8441;
  uRam00000001832fca30 = (uRam00000001832fca30 ^ uVar6) + 0xf5ae8441 ^ 0xbc75bb5bc5c41252;
  uRam00000001832fc958 = (uRam00000001832fc958 * -0x663960a962d3e235 ^ uRam00000001832fca30) + uVar6
  ;
  uRam00000001832fccf0 = uRam00000001832fc958 ^ uRam00000001832fca30;
  uRam00000001832fcc10 = 0xf5ae8441;
  uVar6 = (~uRam00000001832fcb58 + 0xf5ae8442) *
          ((uRam00000001832fccd0 ^ 0x718ca764) +
          (ulonglong)((uint)uRam00000001832fccd0 & 0x718ca764) * 2);
  uVar6 = (uVar6 | uRam00000001832fc940) + (uVar6 & uRam00000001832fc940);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832fc900 =
       func_0x00018c384650((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uRam00000001832fcb30 = uRam00000001832fc900 << 6 | uRam00000001832fc900 >> 0x3a;
  uRam00000001832fca80 = uRam00000001832fca80 ^ uRam00000001832fcb30 ^ 0x671a098645d2de50;
  uRam00000001832fca90 =
       (uRam00000001832fca90 * -0x2d9a873d10db2e5d ^ uRam00000001832fca80) + uRam00000001832fcb30;
  uRam00000001832fcc80 = uRam00000001832fca90 ^ uRam00000001832fca80;
  uRam00000001832fccd8 = 0;
  uVar6 = (uRam00000001832fccc0 ^ _UNK_181e65f30) + uRam00000001832fcaa0 + 0x73dfddb1;
  uVar4 = (uRam00000001832fcaa0 ^ _UNK_181e65f38) + uRam00000001832fccc0 + 0xffffffff;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fccc0 ^ _UNK_181e65f30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832fcaa0 ^ _UNK_181e65f38;
  uRam00000001832fca38 =
       func_0x00018c384650((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832fccc0 + 0xffffffff) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fcaa0 + 0x73dfddb1));
  uRam00000001832fcaa0 =
       (uRam00000001832fcaa0 ^ uRam00000001832fca38 & 0xfffffffff0000000) + 0x802016b ^
       0x281a037a8c88eed5;
  uRam00000001832fcb20 =
       (uRam00000001832fcb20 * -0x245ffe235b9c0a5d ^ uRam00000001832fcaa0) +
       (uRam00000001832fca38 & 0xfffffffff0000000);
  uRam00000001832fcc08 = uRam00000001832fcb20 ^ uRam00000001832fcaa0;
  uRam00000001832fcc70 = 0x802016b;
  uVar6 = (uRam00000001832fcc98 ^ _UNK_181e65f40) + uRam00000001832fcc68 + 0x73dfddb1;
  uVar4 = (uRam00000001832fcc68 ^ _UNK_181e65f48) + uRam00000001832fcc98 + 0x802016b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fcc98 ^ _UNK_181e65f40;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832fcc68 ^ _UNK_181e65f48;
  uRam00000001832fccd8 =
       func_0x00018c384650((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832fcc98 + 0x802016b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fcc68 + 0x73dfddb1));
  uVar6 = uRam00000001832fccd8 >> 1 | uRam00000001832fccd8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001832fccd8;
  uRam00000001832fca20 = uRam00000001832fca20 ^ uVar6 ^ 0xabba002127d877bc;
  uRam00000001832fcca8 = (uRam00000001832fcca8 * -0x6dd74e551e406699 ^ uRam00000001832fca20) + uVar6
  ;
  uRam00000001832fcb38 = uRam00000001832fcca8 ^ uRam00000001832fca20;
  uRam00000001832fccc8 = 0;
  uVar6 = (uRam00000001832fcc18 ^ 0x84220525) + uRam00000001832fcc60 + 0x84220525;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fcc18 ^ 0x84220525;
  uVar4 = ((uRam00000001832fcc60 + uRam00000001832fcc18) * 0x2000 |
          uRam00000001832fcc60 + uRam00000001832fcc18 >> 0x33) ^ uRam00000001832fcc60;
  uRam00000001832fcb40 =
       func_0x00018c384650((uVar4 << 0x1d | uVar4 >> 0x23) - uRam00000001832fcc18 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fcc60 + 0x84220525));
  uVar6 = uRam00000001832fcb40 << 0x1e | uRam00000001832fcb40 >> 0x22;
  uRam00000001832fc908 = uRam00000001832fcad8 ^ uVar6 ^ 0x2600;
  uRam00000001832fcca8 = (uRam00000001832fcca8 ^ uVar6) + 0x2600 ^ 0x5dad4fbf44f0fd6a;
  uRam00000001832fcaa0 = (uRam00000001832fcaa0 * -0x135ce8ed3527918f ^ uRam00000001832fcca8) + uVar6
  ;
  uRam00000001832fccc8 = uRam00000001832fcaa0 ^ uRam00000001832fcca8;
  uRam00000001832fca88 = 0x2600;
  uVar6 = (uRam00000001832fcc88 ^ _UNK_181e65f50) + uRam00000001832fca60 + 0xf29b93b1;
  uVar4 = (uRam00000001832fca60 ^ _UNK_181e65f58) + uRam00000001832fcc88 + 0x76b9b094;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832fcc88 ^ _UNK_181e65f50;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832fca60 ^ _UNK_181e65f58;
  uRam00000001832fcbe0 =
       func_0x00018c384650((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832fcc88 + 0x76b9b094) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832fca60 + 0xf29b93b1));
  uRam00000001832fcbf0 =
       uRam00000001832fcbf0 ^ uRam00000001832fcbe0 * 0x428618936f4a3089 ^ 0xf8d4552def26efe3;
  uRam00000001832fcbd0 =
       (uRam00000001832fcbd0 * -0x68d178ca2c887853 ^ uRam00000001832fcbf0) +
       uRam00000001832fcbe0 * 0x428618936f4a3089;
  uRam00000001832fcbc8 = uRam00000001832fcbd0 ^ uRam00000001832fcbf0;
  uRam00000001832fc978 = 0;
  uVar6 = uVar12 ^ 0x84222325 ^ uRam00000001832fcba0;
  lVar7 = (uVar12 ^ 0x84222325) + uRam00000001832fca60;
  uVar4 = uVar6 + lVar7;
  uVar13 = (uRam00000001832fca60 ^ 0x2600) + uRam00000001832fcba0 + 0x2600;
  uVar6 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6;
  uVar4 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uRam00000001832fca60 ^ 0x2600;
  uRam00000001832fcac0 =
       func_0x00018c384650((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832fcba0 + 0x2600) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  uVar6 = (uVar12 | 0x2600) ^ uRam00000001832fcac0;
  uRam00000001832fc9c8 = uVar12 ^ 0x2600;
  uRam00000001832fc940 = (uRam00000001832fc940 ^ uVar6) + uRam00000001832fc9c8 ^ 0xc3bf8cf62880bf5;
  uRam00000001832fc908 = (uRam00000001832fc908 * 0x1a072be7e08e407f ^ uRam00000001832fc940) + uVar6;
  uRam00000001832fc988 = uRam00000001832fc908 ^ uRam00000001832fc940;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c37bda1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e64050 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18c3846e0, runtime 6ffff3f946e0) =====

void FUN_18c3846e0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018c38472b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e66060 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fm; aKI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18c3856f0, runtime 6ffff3f956f0) =====

void FUN_18c3856f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c385779 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e66620 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKJ (IJ)J (handler @ image 18c38beb0, runtime 6ffff3f9beb0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38beb0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  
  uVar2 = func_0x00018c39a970(uRam00000001832fd328 ^ 0x13ad0a9d65365b69);
  uVar2 = uVar2 << 0x1f | uVar2 >> 0x21;
  uRam00000001832fd498 = (uRam00000001832fd498 ^ uVar2) + 0x46f2c9c218b1313e ^ 0x29b5cb9aa4b790fd;
  uRam00000001832fd358 = (uRam00000001832fd358 * 0x628bf20332792b09 ^ uRam00000001832fd498) + uVar2;
  uRam00000001832fd4f8 = uRam00000001832fd358 ^ uRam00000001832fd498;
  uRam00000001832fd310 = 0x46f2c9c218b1313e;
  uRam00000001832fd4f8 = func_0x00018c39a970(uRam00000001832fd3e0 ^ 0x26df31f07ee63fb);
  uVar2 = ((uRam00000001832fd4f8 ^ 0x7fff) << 0xb | uRam00000001832fd4f8 >> 0x35) *
          0x5c2e2f78275468af;
  uRam00000001832fd3b0 = uRam00000001832fd388 ^ uVar2 ^ 0xb90d363de74f4ec1;
  uRam00000001832fd3c0 = (uRam00000001832fd3c0 ^ uVar2) + 0xb90d363de74f4ec1 ^ 0x1ac7763a765ba027;
  uRam00000001832fd408 = (uRam00000001832fd408 * 0x56d96e1b883d9cbd ^ uRam00000001832fd3c0) + uVar2;
  uRam00000001832fd4a0 = uRam00000001832fd408 ^ uRam00000001832fd3c0;
  uRam00000001832fd350 = uRam00000001832fd498 ^ 0xb90d363de74f4ec1;
  uRam00000001832fd438 = 0xb90d363de74f4ec1;
  uVar2 = (~uRam00000001832fd3c0 + 0x46f2c9c218b1313f) *
          ((uRam00000001832fd340 ^ 0xb90d363d636d6de4) +
          (uRam00000001832fd340 & 0x390d363d636d6de4) * 2);
  uVar2 = (uVar2 | uRam00000001832fd378) + (uVar2 & uRam00000001832fd378);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd3d0 =
       func_0x00018c39a970((uVar2 | 0xffffffff7bdc5cda) + (uVar2 & 0xffffffff7bdc5cda));
  uVar2 = uRam00000001832fd3e8 >> 1 | uRam00000001832fd3e8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001832fd3e8;
  uRam00000001832fd3c0 = uRam00000001832fd480 ^ uVar2 ^ 0x7fff;
  uRam00000001832fd460 = (uRam00000001832fd460 ^ uVar2) + 0x7fff ^ 0x975f946fecabb884;
  uRam00000001832fd4b8 = (uRam00000001832fd4b8 * -0xcf5c18f74c6616b ^ uRam00000001832fd460) + uVar2;
  uRam00000001832fd360 = uRam00000001832fd4b8 ^ uRam00000001832fd460;
  uRam00000001832fd400 = 0x7fff;
  uVar2 = (~uRam00000001832fd300 + 0x91708cc7e8195c21) *
          ((uRam00000001832fd398 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832fd398 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam00000001832fd480) + (uVar2 & uRam00000001832fd480);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd460 =
       func_0x00018c39a970((uVar2 | 0x91708cc76c3b7f05) + (uVar2 & 0x91708cc76c3b7f05));
  uRam00000001832fd3f8 =
       (uRam00000001832fd3f8 ^ uRam00000001832fd460) + 0x6e8f733817e6a3e0 ^ 0x6d2602fe793ef7c8;
  uRam00000001832fd300 =
       (uRam00000001832fd300 * 0x6017c40c1e5a420f ^ uRam00000001832fd3f8) + uRam00000001832fd460;
  uRam00000001832fd4c8 = uRam00000001832fd300 ^ uRam00000001832fd3f8;
  uRam00000001832fd428 = 0x6e8f733817e6a3e0;
  uVar2 = (~uRam00000001832fd410 + 0x296fc9bd4bdc3af5) *
          ((uRam00000001832fd318 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832fd318 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam00000001832fd350) + (uVar2 & uRam00000001832fd350);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd4e8 =
       func_0x00018c39a970((uVar2 | 0x296fc9bdcffe19d1) + (uVar2 & 0x296fc9bdcffe19d1));
  uRam00000001832fd348 =
       (uRam00000001832fd348 ^ uRam00000001832fd4e8 * 0x40b4e951e2061017) + 0xd6903642b423c50c ^
       0x2d2f2a125b5ae0d6;
  uRam00000001832fd490 =
       (uRam00000001832fd490 * 0x17d78c3d8bb41c1f ^ uRam00000001832fd348) +
       uRam00000001832fd4e8 * 0x40b4e951e2061017;
  uRam00000001832fd468 = uRam00000001832fd490 ^ uRam00000001832fd348;
  uRam00000001832fd328 = 0xd6903642b423c50c;
  uVar2 = (~uRam00000001832fd468 + 0x296fc9bd4bdc3af5) *
          ((uRam00000001832fd460 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832fd460 & 0x84225cda) * 2);
  uVar2 = (uVar2 | uRam00000001832fd4f0) + (uVar2 & uRam00000001832fd4f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd318 =
       func_0x00018c39a970((uVar2 | 0x296fc9bdcffe662e) + (uVar2 & 0x296fc9bdcffe662e));
  uVar2 = (uRam00000001832fd318 ^ 0xbb6edc30d19dc50c) << 0x1a |
          (uRam00000001832fd318 ^ 0xbb6edc30d19dc50c) >> 0x26;
  uRam00000001832fd398 = uRam00000001832fd350 ^ uVar2 ^ 0x296fc9bd4bdcbaf3;
  uRam00000001832fd468 = (uRam00000001832fd468 ^ uVar2) + 0x296fc9bd4bdcbaf3 ^ 0x338e99d81131f496;
  uRam00000001832fd3a0 = (uRam00000001832fd3a0 * -0xa507f18686b9121 ^ uRam00000001832fd468) + uVar2;
  uRam00000001832fd478 = uRam00000001832fd3a0 ^ uRam00000001832fd468;
  uRam00000001832fd330 = 0x296fc9bd4bdcbaf3;
  uVar2 = (uRam00000001832fd4e0 ^ _UNK_181e6a7c0) + uRam00000001832fd4e0 + 0x296fc9bdcffe99d6;
  uVar9 = (uRam00000001832fd4e0 ^ _UNK_181e6a7c8) + uRam00000001832fd4e0 + 0xd6903642b423c50c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832fd4e0 ^ _UNK_181e6a7c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832fd4e0 ^ _UNK_181e6a7c8;
  uRam00000001832fd428 =
       func_0x00018c39a970((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001832fd4e0 + 0xd6903642b423c50c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001832fd4e0 + 0x296fc9bdcffe99d6));
  uVar2 = uRam00000001832fd428 << 0x3e | uRam00000001832fd428 >> 2;
  uRam00000001832fd370 = uRam00000001832fd3e0 ^ uVar2 ^ 0x7fff;
  uRam00000001832fd328 = (uRam00000001832fd328 ^ uVar2) + 0x7fff ^ 0xc2fccf7e4e915a09;
  uRam00000001832fd480 = (uRam00000001832fd480 * 0x1a60ff9f648f86ff ^ uRam00000001832fd328) + uVar2;
  uRam00000001832fd398 = uRam00000001832fd480 ^ uRam00000001832fd328;
  uRam00000001832fd390 = uRam00000001832fd458 ^ 0x7fff;
  uRam00000001832fd378 = 0x7fff;
  uVar2 = (~uRam00000001832fd318 + 0x56ad9782e4d913a9) *
          ((uRam00000001832fd3d8 ^ 0xf8bdbbff3bdf9c5e) +
          (uRam00000001832fd3d8 & 0x78bdbbff3bdf9c5e) * 2);
  uVar2 = (uVar2 | uRam00000001832fd310) + (uVar2 & uRam00000001832fd310);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd4e0 =
       func_0x00018c39a970((uVar2 | 0xae102c7ddf068ff6) + (uVar2 & 0xae102c7ddf068ff6));
  uVar2 = uRam00000001832fd4e0 >> 1 | uRam00000001832fd4e0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001832fd4e0;
  uVar2 = uVar2 << 0x31 | uVar2 >> 0xf;
  uRam00000001832fd4a0 = uRam00000001832fd408 ^ uVar2 ^ 0x4f6b5382a4d6d323;
  uRam00000001832fd490 = (uRam00000001832fd490 ^ uVar2) + 0x4f6b5382a4d6d323 ^ 0x49d0f5a04dc627f0;
  uRam00000001832fd460 = (uRam00000001832fd460 * -0x279dffaf388b5e5b ^ uRam00000001832fd490) + uVar2
  ;
  uRam00000001832fd3c0 = uRam00000001832fd460 ^ uRam00000001832fd490;
  uRam00000001832fd388 = 0x4f6b5382a4d6d323;
  uVar2 = (~uRam00000001832fd378 + 0x56ad9782e4d913a9) *
          ((uRam00000001832fd3c0 ^ 0xf8bdbbff3bdf9c5e) +
          (uRam00000001832fd3c0 & 0x78bdbbff3bdf9c5e) * 2);
  uVar2 = (uVar2 | uRam00000001832fd398) + (uVar2 & uRam00000001832fd398);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd390 =
       func_0x00018c39a970((uVar2 | 0xae102c7ddf068ff6) + (uVar2 & 0xae102c7ddf068ff6));
  uVar9 = uRam00000001832fd390 ^ 0xaf975ad3110376c3;
  uVar2 = uVar9 >> 1 | uVar9;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar9;
  uRam00000001832fd3b0 = (uRam00000001832fd3b0 ^ uVar9) + 0x50ad9382a4d91328 ^ 0xec064435c3be80e8;
  uRam00000001832fd478 = (uRam00000001832fd478 * 0x7775211cf94c03c9 ^ uRam00000001832fd3b0) + uVar9;
  uRam00000001832fd460 = uRam00000001832fd478 ^ uRam00000001832fd3b0;
  uRam00000001832fd320 = uRam00000001832fd4b8 ^ 0x50ad9382a4d91328;
  uRam00000001832fd300 = 0x50ad9382a4d91328;
  uRam00000001832fd370 = func_0x00018c39a970(uRam00000001832fd4d8 + 0x78a74b6da1fb7400 ^ 0x33);
  uRam00000001832fd3a0 = uRam00000001832fd450 ^ uRam00000001832fd370 ^ 0x4f6b5382a4d6d323;
  uRam00000001832fd3c0 =
       (uRam00000001832fd3c0 ^ uRam00000001832fd370) + 0x4f6b5382a4d6d323 ^ 0xbefcb31319820b45;
  uRam00000001832fd478 =
       (uRam00000001832fd478 * 0x3f44e027fb85fe8d ^ uRam00000001832fd3c0) + uRam00000001832fd370;
  uRam00000001832fd4b8 = uRam00000001832fd478 ^ uRam00000001832fd3c0;
  uRam00000001832fd300 = 0x4f6b5382a4d6d323;
  uVar2 = (~uRam00000001832fd308 + 0x4f6b5382a4d6d324) *
          ((uRam00000001832fd458 ^ 0x4f6b538220f4f006) +
          (uRam00000001832fd458 & 0x4f6b538220f4f006) * 2);
  uVar2 = (uVar2 | uRam00000001832fd338) + (uVar2 & uRam00000001832fd338);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd310 =
       func_0x00018c39a970((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam00000001832fd390 = uRam00000001832fd310 ^ 0x3a7d145684a6b6c9;
  uRam00000001832fd400 = uRam00000001832fd400 ^ uRam00000001832fd390 ^ 0x68bb144cfcd591ae;
  uRam00000001832fd458 =
       (uRam00000001832fd458 * -0x5cf07e4f50db600b ^ uRam00000001832fd400) + uRam00000001832fd390;
  uRam00000001832fd380 = uRam00000001832fd458 ^ uRam00000001832fd400;
  uRam00000001832fd4e8 = 0;
  uVar2 = ~uRam00000001832fd488 *
          ((uRam00000001832fd3d0 ^ 0xf8bdbbff3bdf9c5e) +
          (uRam00000001832fd3d0 & 0x78bdbbff3bdf9c5e) * 2);
  uVar2 = (uVar2 | uRam00000001832fd4c0) + (uVar2 & uRam00000001832fd4c0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd4e8 =
       func_0x00018c39a970((uVar2 | 0x7424400c42063a1) + (uVar2 & 0x7424400c42063a1));
  uRam00000001832fd4b0 =
       (uRam00000001832fd4b0 ^ uRam00000001832fd4e8 & 0xffffffffffff0000) + 0x742440040024084 ^
       0x6425f1f5456d1988;
  uRam00000001832fd3a0 =
       (uRam00000001832fd3a0 * 0x28e7ce00fc4f1b33 ^ uRam00000001832fd4b0) +
       (uRam00000001832fd4e8 & 0xffffffffffff0000);
  uRam00000001832fd428 = uRam00000001832fd3a0 ^ uRam00000001832fd4b0;
  uRam00000001832fd438 = 0x742440040024084;
  uVar2 = (~uRam00000001832fd458 + 0x742440040024085) *
          ((uRam00000001832fd4f0 ^ 0xf8bdbbff3bdf9c5e) +
          (uRam00000001832fd4f0 & 0x78bdbbff3bdf9c5e) * 2);
  uVar2 = (uVar2 | uRam00000001832fd4c8) + (uVar2 & uRam00000001832fd4c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd3e8 =
       func_0x00018c39a970((uVar2 | 0xffffffff7bdddcda) + (uVar2 & 0xffffffff7bdddcda));
  uRam00000001832fd340 =
       uRam00000001832fd340 ^ uRam00000001832fd3e8 * -0x2b88ed1fda4e5373 ^ 0x9ae4e0e399834a7c;
  uRam00000001832fd3e0 =
       (uRam00000001832fd3e0 * 0x7a96a1686821205f ^ uRam00000001832fd340) +
       uRam00000001832fd3e8 * -0x2b88ed1fda4e5373;
  uRam00000001832fd3f0 = uRam00000001832fd3e0 ^ uRam00000001832fd340;
  uRam00000001832fd3f8 = 0;
  uVar2 = ((uRam00000001832fd358 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832fd358 & 0x84225cda) * 2) * -uRam00000001832fd448;
  uVar2 = (uVar2 | uRam00000001832fd358) + (uVar2 & uRam00000001832fd358);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd4c0 =
       func_0x00018c39a970((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uRam00000001832fd378 = uRam00000001832fd480 ^ uRam00000001832fd380 ^ 0x7fff;
  uRam00000001832fd458 = (uRam00000001832fd458 ^ uRam00000001832fd380) + 0x7fff ^ 0x4d118c06a8135853
  ;
  uRam00000001832fd4d0 =
       (uRam00000001832fd4d0 * 0x50d29fed3646031d ^ uRam00000001832fd458) + uRam00000001832fd380;
  uRam00000001832fd4e8 = uRam00000001832fd4d0 ^ uRam00000001832fd458;
  uRam00000001832fd398 = 0x7fff;
  uVar2 = (uRam00000001832fd348 ^ _UNK_181e6a7d0) + uRam00000001832fd490 + 0x68b5b35f9bdf1e14;
  uVar9 = (uRam00000001832fd490 ^ _UNK_181e6a7d8) + uRam00000001832fd348 + 0x68b5b35f1ffd3d31;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832fd348 ^ _UNK_181e6a7d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832fd490 ^ _UNK_181e6a7d8;
  uRam00000001832fd4b8 =
       func_0x00018c39a970((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001832fd348 + 0x68b5b35f1ffd3d31) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001832fd490 + 0x68b5b35f9bdf1e14));
  uVar2 = (uRam00000001832fd4b8 ^ 0x3ccf3fb1df7a6361) << 0x23 |
          (uRam00000001832fd4b8 ^ 0x3ccf3fb1df7a6361) >> 0x1d;
  uVar9 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar2;
  uRam00000001832fd4a8 = uRam00000001832fd4a8 ^ uVar2 ^ 0xc1d176981ce523e6;
  uRam00000001832fd3a8 = (uRam00000001832fd3a8 * 0x1ef7acf7fe39a5ab ^ uRam00000001832fd4a8) + uVar2;
  uRam00000001832fd378 = uRam00000001832fd3a8 ^ uRam00000001832fd4a8;
  uRam00000001832fd470 = 0;
  uVar2 = (uRam00000001832fd380 ^ _UNK_181e6a7e0) + uRam00000001832fd308 + 0x16bbe0a1;
  uVar9 = (uRam00000001832fd308 ^ _UNK_181e6a7e8) + uRam00000001832fd380 + 0x8935fd9a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832fd380 ^ _UNK_181e6a7e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832fd308 ^ _UNK_181e6a7e8;
  param_3 = param_4 & 0x7fff ^ param_3;
  uRam00000001832fd318 =
       func_0x00018c39a970((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001832fd380 + 0x8935fd9a) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001832fd308 + 0x16bbe0a1));
  uVar3 = ((uint)uRam00000001832fd318 ^ 0x9290c284) & 0x9299c384;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar2 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          (ulonglong)uVar3;
  uRam00000001832fd448 = (uRam00000001832fd448 ^ uVar2) + 0x9bbdff9e ^ 0xf566eb4194a7f7ae;
  uRam00000001832fd328 = (uRam00000001832fd328 * -0x1bda8aadaba68b91 ^ uRam00000001832fd448) + uVar2
  ;
  uRam00000001832fd488 = uRam00000001832fd328 ^ uRam00000001832fd448;
  uRam00000001832fd4e8 = 0x9bbdff9e;
  uVar2 = (uRam00000001832fd400 ^ _UNK_181e6a7f0) + uRam00000001832fd408 + 0x40171cda;
  uVar9 = (uRam00000001832fd408 ^ _UNK_181e6a7f8) + uRam00000001832fd400 + 0x4ed4bc6d;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832fd400 ^ _UNK_181e6a7f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832fd408 ^ _UNK_181e6a7f8;
  uRam00000001832fd398 =
       func_0x00018c39a970((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001832fd400 + 0x4ed4bc6d) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001832fd408 + 0x40171cda));
  uRam00000001832fd4f8 =
       (uRam00000001832fd4f8 ^ uRam00000001832fd398 & 0xfffffffffe000000) + 0x8ae18392 ^
       0x4a55b04f3e47b5da;
  uRam00000001832fd4e0 =
       (uRam00000001832fd4e0 * -0x1bf44e26d8ce931b ^ uRam00000001832fd4f8) +
       (uRam00000001832fd398 & 0xfffffffffe000000);
  uRam00000001832fd388 = uRam00000001832fd4e0 ^ uRam00000001832fd4f8;
  uRam00000001832fd370 = 0x8ae18392;
  uRam00000001832fd490 = func_0x00018c39a970(uRam00000001832fd338 ^ 0x32002374ff969d);
  uRam00000001832fd378 =
       (uRam00000001832fd378 ^ uRam00000001832fd490 & 0xffffffffffffffe0) - 0x614b71b0 ^
       0x81b9c7599c5ea4d1;
  uRam00000001832fd358 =
       (uRam00000001832fd358 * -0x7a653545c8c28f1d ^ uRam00000001832fd378) +
       (uRam00000001832fd490 & 0xffffffffffffffe0);
  uRam00000001832fd3a0 = uRam00000001832fd358 ^ uRam00000001832fd378;
  uRam00000001832fd3d8 = uRam00000001832fd410 ^ 0xffffffff9eb48e50;
  uRam00000001832fd3b8 = 0x9eb48e50;
  uRam00000001832fd3e0 = func_0x00018c39a970(uRam00000001832fd448 + 0x1900a5520016ff ^ 0x9b);
  uVar2 = (uRam00000001832fd3e0 ^ 0x614b79f3) & 0xffffffffff ^ 0x49c3;
  uRam00000001832fd388 = uRam00000001832fd3a0 ^ uVar2 ^ 0x614bbb73;
  uRam00000001832fd438 = (uRam00000001832fd438 ^ uVar2) + 0x614bbb73 ^ 0xe85ff694de0c8a06;
  uRam00000001832fd3d0 = (uRam00000001832fd3d0 * 0x3158f6c7d0d22975 ^ uRam00000001832fd438) + uVar2;
  uRam00000001832fd468 = uRam00000001832fd3d0 ^ uRam00000001832fd438;
  uRam00000001832fd338 = 0x614bbb73;
  uRam00000001832fd418 = func_0x00018c39a970(uRam00000001832fd440 + 0xff35001139fff3ff ^ 0x39);
  uVar2 = uRam00000001832fd418 >> 1 | uRam00000001832fd418;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001832fd418;
  uRam00000001832fd498 = (uRam00000001832fd498 ^ uVar2) - 0xf73ee86f ^ 0x5126c4e3fd2080fc;
  uRam00000001832fd448 = (uRam00000001832fd448 * 0x7772e63ab85cdff7 ^ uRam00000001832fd498) + uVar2;
  uRam00000001832fd380 = uRam00000001832fd448 ^ uRam00000001832fd498;
  uRam00000001832fd450 = 0x8c11791;
  uVar2 = (~uRam00000001832fd4f0 + 0x8c11792) *
          ((uRam00000001832fd468 ^ 0x731d1117) +
          (ulonglong)((uint)uRam00000001832fd468 & 0x731d1117) * 2);
  uVar2 = (uVar2 | uRam00000001832fd490) + (uVar2 & uRam00000001832fd490);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd418 =
       func_0x00018c39a970((uVar2 | 0x7bdc0686) + (ulonglong)((uint)uVar2 & 0x7bdc0686));
  uVar2 = uRam00000001832fd418 << 0x3c | uRam00000001832fd418 >> 4;
  uRam00000001832fd3f0 = uRam00000001832fd340 ^ uVar2 ^ 0x1000049c3;
  uRam00000001832fd4c0 = (uRam00000001832fd4c0 ^ uVar2) + 0x1000049c3 ^ 0x5753fe3b62f4c89;
  uRam00000001832fd440 = (uRam00000001832fd440 * 0x6072b6198ce86d35 ^ uRam00000001832fd4c0) + uVar2;
  uRam00000001832fd360 = uRam00000001832fd440 ^ uRam00000001832fd4c0;
  uRam00000001832fd320 = 0x49c3;
  uVar2 = (uRam00000001832fd470 ^ _UNK_181e6a800) + uRam00000001832fd3a8 + 0x84222325;
  uVar9 = (uRam00000001832fd3a8 ^ _UNK_181e6a808) + uRam00000001832fd470 + 0xff977c68;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832fd470 ^ _UNK_181e6a800;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832fd3a8 ^ _UNK_181e6a808;
  uRam00000001832fd350 =
       func_0x00018c39a970((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001832fd470 + 0xff977c68) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001832fd3a8 + 0x84222325));
  uVar2 = uRam00000001832fd350 >> 1 | uRam00000001832fd350;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001832fd350;
  uRam00000001832fd408 = (uRam00000001832fd408 ^ uVar2) - 0xff977c68 ^ 0x2ffb12c2ba5548ef;
  uRam00000001832fd3b8 = (uRam00000001832fd3b8 * 0x42b25f0913d669a5 ^ uRam00000001832fd408) + uVar2;
  uRam00000001832fd420 = uRam00000001832fd3b8 ^ uRam00000001832fd408;
  uRam00000001832fd318 = 0x688398;
  uRam00000001832fd380 = func_0x00018c39a970(uRam00000001832fd338 + 0x11ffd68e00b2ff ^ 0x9e);
  uVar2 = uRam00000001832fd380 & 0xfffffffffffffffe;
  uRam00000001832fd300 = uRam00000001832fd408 ^ uVar2 ^ 0xff97c62b;
  uRam00000001832fd330 = (uRam00000001832fd330 ^ uVar2) + 0xff97c62b ^ 0x5405877e8a047240;
  uRam00000001832fd350 = (uRam00000001832fd350 * -0xa4cdd46f1b36dc7 ^ uRam00000001832fd330) + uVar2;
  uRam00000001832fd378 = uRam00000001832fd350 ^ uRam00000001832fd330;
  uRam00000001832fd480 = 0xff97c62b;
  uVar2 = (~uRam00000001832fd320 + 0x688399) *
          ((uRam00000001832fd498 ^ 0x7bb5e50e) +
          (ulonglong)((uint)uRam00000001832fd498 & 0x7bb5e50e) * 2);
  uVar2 = (uVar2 | uRam00000001832fd4f8) + (uVar2 & uRam00000001832fd4f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd4b0 =
       func_0x00018c39a970((uVar2 | 0x7bdd6696) + (ulonglong)((uint)uVar2 & 0x7bdd6696));
  uVar2 = ((uRam00000001832fd4b0 ^ 0x68590aedfdaa88) & 0x7fffffffffffffff ^ 0xff97c62b) &
          0xfffffffffffff;
  uRam00000001832fd478 = uRam00000001832fd308 ^ uVar2 ^ 0x1000049c3;
  uRam00000001832fd4a0 = (uRam00000001832fd4a0 ^ uVar2) + 0x1000049c3 ^ 0x165fc2f5ae833d63;
  uRam00000001832fd3d8 = (uRam00000001832fd3d8 * -0x460e81a5b9b66a49 ^ uRam00000001832fd4a0) + uVar2
  ;
  uRam00000001832fd458 = uRam00000001832fd3d8 ^ uRam00000001832fd4a0;
  uRam00000001832fd3c8 = uRam00000001832fd428 ^ 0x1000049c3;
  uRam00000001832fd360 = 0x49c3;
  uVar2 = (~uRam00000001832fd3a8 + 0x8ae18393) *
          ((uRam00000001832fd3b0 ^ 0x1f9fdcbb) +
          (ulonglong)((uint)uRam00000001832fd3b0 & 0x1f9fdcbb) * 2);
  uVar2 = (uVar2 | uRam00000001832fd480) + (uVar2 & uRam00000001832fd480);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd340 =
       func_0x00018c39a970((uVar2 | 0x957e5f29) + (ulonglong)((uint)uVar2 & 0x957e5f29));
  uVar2 = uRam00000001832fd340 << 0x13 | (uRam00000001832fd340 & 0x7fffffffffffffff) >> 0x2d;
  uRam00000001832fd3e8 = uRam00000001832fd390 ^ uVar2 ^ 0x1269f8330;
  uRam00000001832fd3a8 = (uRam00000001832fd3a8 ^ uVar2) + 0x1269f8330 ^ 0xb561afea06dab880;
  uRam00000001832fd358 = (uRam00000001832fd358 * 0x7a6f2bcfa73db2b9 ^ uRam00000001832fd3a8) + uVar2;
  uRam00000001832fd4e8 = uRam00000001832fd358 ^ uRam00000001832fd3a8;
  uRam00000001832fd458 = 0x269f8330;
  uVar2 = func_0x00018c39a970(uRam00000001832fd4f8 + 0x44ff9528ff81ff ^ 0x57);
  uVar9 = uVar2 << 0x2a | uVar2 >> 0x16;
  uVar2 = (uVar2 ^ uVar9) + 0x8aa18392;
  uRam00000001832fd4f8 = uVar2 ^ 0x458efcd128bb116f;
  uRam00000001832fd378 = (uRam00000001832fd378 * -0x5b121e3af40d7013 ^ uRam00000001832fd4f8) + uVar9
  ;
  uRam00000001832fd308 = uRam00000001832fd378 ^ uRam00000001832fd4f8;
  uRam00000001832fd330 = 0x8aa18392;
  uVar2 = (~uRam00000001832fd468 + 0x15430725) *
          ((uVar2 ^ 0x458efcd1bdc54e46) + (ulonglong)((uint)uRam00000001832fd4f8 & 0x957e5f29) * 2);
  uVar2 = (uVar2 | uRam00000001832fd4d0) + (uVar2 & uRam00000001832fd4d0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832fd4e0 =
       func_0x00018c39a970((uVar2 | 0x803d580d) + (ulonglong)((uint)uVar2 & 0x803d580d));
  uVar2 = uRam00000001832fd4e0 ^ 0x17121dd6b89c5b0;
  uRam00000001832fd448 = uRam00000001832fd3d8 ^ uVar2 ^ 0x269f8330;
  uRam00000001832fd4c8 = (uRam00000001832fd4c8 ^ uVar2) + 0x269f8330 ^ 0xb9b674fd3506a7a0;
  uRam00000001832fd430 = (uRam00000001832fd430 * -0xf291b3c03db5173 ^ uRam00000001832fd4c8) + uVar2;
  uRam00000001832fd3d8 = uRam00000001832fd430 ^ uRam00000001832fd4c8;
  uRam00000001832fd378 = 0x269f8330;
  uVar2 = (uRam00000001832fd4c0 ^ _UNK_181e6a810) + uRam00000001832fd498 + 0xa2bda015;
  uVar9 = (uRam00000001832fd498 ^ _UNK_181e6a818) + uRam00000001832fd4c0 + 0x269f8330;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832fd4c0 ^ _UNK_181e6a810;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832fd498 ^ _UNK_181e6a818;
  uVar2 = func_0x00018c39a970((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001832fd4c0 + 0x269f8330)
                              ^ (uVar2 << 0x1d | uVar2 >> 0x23) -
                                (uRam00000001832fd498 + 0xa2bda015));
  uRam00000001832fd460 = uVar2 ^ 0x269f8330;
  uRam00000001832fd378 = uRam00000001832fd378 ^ uRam00000001832fd460 ^ 0x1d2aa29f87d7cc0a;
  uRam00000001832fd4a0 = (uVar2 * 0xf4d9fed7f84f7a5 ^ uRam00000001832fd378) + uRam00000001832fd460;
  uRam00000001832fd408 = uRam00000001832fd4a0 ^ uRam00000001832fd378;
  uRam00000001832fd478 = 0;
  uVar2 = (uRam00000001832fd3f0 ^ _UNK_181e6a820) + uRam00000001832fd3c0 + 0x1f9fdcbb;
  uVar9 = (uRam00000001832fd3c0 ^ _UNK_181e6a828) + uRam00000001832fd3f0 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832fd3f0 ^ _UNK_181e6a820;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832fd3c0 ^ _UNK_181e6a828;
  uRam00000001832fd350 =
       func_0x00018c39a970((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001832fd3f0 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001832fd3c0 + 0x1f9fdcbb));
  uVar2 = (uRam00000001832fd350 ^ 0xffffffff) & 0x7fffffffffffffff;
  uRam00000001832fd368 = (uRam00000001832fd368 ^ uVar2) + 0x64420061 ^ 0x7da25fc8ea55dec8;
  uRam00000001832fd3a0 = (uRam00000001832fd3a0 * -0xc78267edced7f7f ^ uRam00000001832fd368) + uVar2;
  uRam00000001832fd408 = uRam00000001832fd3a0 ^ uRam00000001832fd368;
  uRam00000001832fd430 = 0x64420061;
  uRam00000001832fd340 = func_0x00018c39a970(uRam00000001832fd4b0 ^ 0xffabffc6c600b217);
  uRam00000001832fd328 =
       uRam00000001832fd328 ^ uRam00000001832fd340 & 0x7fffffffffffffff ^ 0x988cc229c968f65a;
  uRam00000001832fd3b0 =
       (uRam00000001832fd3b0 * 0xe9d0f90c734944b ^ uRam00000001832fd328) +
       (uRam00000001832fd340 & 0x7fffffffffffffff);
  uRam00000001832fd3c0 = uRam00000001832fd3b0 ^ uRam00000001832fd328;
  uRam00000001832fd338 = 0;
  uRam00000001832fd398 = func_0x00018c39a970(uRam00000001832fd440 + 0x1cff841d001dff ^ 0x39);
  uVar2 = uRam00000001832fd398 - (uRam00000001832fd398 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam00000001832fd398;
  uRam00000001832fd450 = uRam00000001832fd450 ^ uVar2 ^ 0xb58cdf28dc5196fd;
  uRam00000001832fd350 = (uRam00000001832fd350 * -0x579c63dfe9ea1adf ^ uRam00000001832fd450) + uVar2
  ;
  uRam00000001832fd468 = uRam00000001832fd350 ^ uRam00000001832fd450;
  uRam00000001832fd498 = 0;
  uRam00000001832fd3f0 = func_0x00018c39a970(uRam00000001832fd4d8 ^ 0x55ff8321ffe149);
  uRam00000001832fd360 = uRam00000001832fd3a8 ^ uRam00000001832fd3f0 ^ 0x49c3;
  uRam00000001832fd3b8 = (uRam00000001832fd3b8 ^ uRam00000001832fd3f0) + 0x49c3 ^ 0x84edcdd2c0fe717c
  ;
  uRam00000001832fd450 =
       (uRam00000001832fd450 * -0x56d1491956e103 ^ uRam00000001832fd3b8) + uRam00000001832fd3f0;
  uRam00000001832fd4a8 = uRam00000001832fd450 ^ uRam00000001832fd3b8;
  uVar9 = (ulonglong)param_3;
  auVar7._8_8_ = _UNK_181e6a838;
  auVar7._0_8_ = uVar9 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _UNK_181e6a840,_UNK_1800170c0);
  uRam00000001832fd3a0 = 0x49c3;
  uVar6 = auVar8._8_8_ + auVar8._0_8_;
  uVar2 = uVar6 + uRam00000001832fd3e8;
  if (auVar8._4_4_ < 0) {
    uVar2 = uRam00000001832fd3b0 ^ uVar6;
  }
  uRam00000001832fd3a8 = func_0x00018c39a970(SUB161(auVar7 ^ _UNK_181e6a840,5) ^ uVar2);
  uVar6 = (uVar9 | 0x49c3) ^ uRam00000001832fd3a8;
  uVar2 = uVar6 >> 1 | uVar6;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar6;
  lVar5 = uVar9 - (param_3 & 0x49c3) * 2;
  uRam00000001832fd300 = (uRam00000001832fd300 ^ uVar6) + lVar5 + 0x49c3 ^ 0x2371840ea4f3ae92;
  uRam00000001832fd4d8 = (uRam00000001832fd4d8 * 0x34befd6e553ac3c5 ^ uRam00000001832fd300) + uVar6;
  uRam00000001832fd4b8 = uRam00000001832fd4d8 ^ uRam00000001832fd300;
  uRam00000001832fd390 = lVar5 + 0x49c3U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c38e149 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e68818 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J (handler @ image 18c39aa00, runtime 6ffff3faaa00) =====

void FUN_18c39aa00(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018c39aa4b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e6aaa0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fm; aKL (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18c39ba30, runtime 6ffff3faba30) =====

void FUN_18c39ba30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c39bab9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e6b070 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKp (Lsixtwo/gv;)V (handler @ image 18c34dc20, runtime 6ffff3f5dc20) =====

void FUN_18c34dc20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c34dcea did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e56060 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKq (Lsixtwo/gH$th;)V (handler @ image 18c353ba0, runtime 6ffff3f63ba0) =====

void FUN_18c353ba0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c353c8e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e57e88 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKr ()V (handler @ image 18c388400, runtime 6ffff3f98400) =====

void FUN_18c388400(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3884c1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e675a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKs ()Z (handler @ image 18c3c8530, runtime 6ffff3fd8530) =====

void FUN_18c3c8530(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3c8618 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e6f190 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKt ()V (handler @ image 18c3d2cf0, runtime 6ffff3fe2cf0) =====

void FUN_18c3d2cf0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3d2de9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e72350 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKu ()V (handler @ image 18c3dbee0, runtime 6ffff3febee0) =====

void FUN_18c3dbee0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3dbfa1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e75630 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKv ()V (handler @ image 18c3e0f70, runtime 6ffff3ff0f70) =====

void FUN_18c3e0f70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3e1031 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e76e50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKw (Lnet/minecraft/class_1684;)Lnet/minecraft/class_2338; (handler @ image 18c3e4e90, runtime 6ffff3ff4e90) =====

void FUN_18c3e4e90(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3e4f86 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e78010 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fm; aKx (Lnet/minecraft/class_2338;)D (handler @ image 18c3ee300, runtime 6ffff3ffe300) =====

void FUN_18c3ee300(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x98a3,0x1b0);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3ee387 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e7aab0 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}



// ===== Lsixtwo/fm; aKy (Lnet/minecraft/class_2338;)F (handler @ image 18c3effb0, runtime 6ffff3ffffb0) =====

void FUN_18c3effb0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x98a3,0x1b0);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c3f001b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e7b528 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}



// ===== Lsixtwo/fm; aKz ()Lnet/minecraft/class_2338; (handler @ image 18c360a10, runtime 6ffff3f70a10) =====

void FUN_18c360a10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x123d5,0x2ea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c360b0f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e5beb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



