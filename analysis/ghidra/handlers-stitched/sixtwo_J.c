// ===== STITCHED CORPUS: sixtwo.J =====
// handlers: 23  continuation blocks: 238  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x1960828', '0x19c088', '0x1fa0c8', '0x2cc4280', '0x2cc4c08', '0x2cc4c18', '0x2cc5348', '0x2cc5358', '0x2cc5368', '0x2cc5378', '0x2ccb210', '0x2ccb218', '0x2ccb220', '0x2cce580', '0x2cce588', '0x2cce590', '0x2cce598', '0x2cce5a0', '0x2cce5a8']

// ===== Lsixtwo/J; _1a6f26e3e4126fbd19826f02aaf7c123 ()V (handler @ image 19055cd40, runtime 6ffff816cd40) =====

void FUN_19055cd40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019055ce28 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ccfe40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; bV (Lsixtwo/lC;)V (handler @ image 1904f4310, runtime 6ffff8104310) =====

void FUN_1904f4310(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x245,0xe)
      /* POOL[0x245,0xe]: java/lang/inv */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001904f43b5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cb8060 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; dk (DDLsixtwo/mA;)Z (handler @ image 1904f59c0, runtime 6ffff81059c0) =====

void FUN_1904f59c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba)
      /* POOL[0x3600,0xba]: lC;Ljava/lang/Runnable;)V | RUYIs | sixtwo/J | gu | nXrOu | fS | NvUoI | [Lsixtwo/au; | jYdgZ | sixtwo/au | oh | kJ | (Lsixtwo/lq;)Lsixtwo/Z; | IzFhM | kK | (F)Lsixtwo/Z; | kL | (I)Lsixtwo/Z; | sixtwo/rj | XzDkv | Lsixtwo/rj; */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001904f5a91 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cb87e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; gA (IJ)I (handler @ image 19054d4a0, runtime 6ffff815d4a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054d4a0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  
  uVar4 = (~uRam0000000183468128 + 0x33fd467e467cb7cc) *
          ((uRam0000000183467f68 ^ 0xf8d750a4c0a8b9ca) +
          (uRam0000000183467f68 & 0x78d750a4c0a8b9ca) * 2);
  uVar4 = (uVar4 | uRam0000000183467e08) + (uVar4 & uRam0000000183467e08);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183468020 =
       func_0x000190558da0((uVar4 | 0xcb2a16da86d40e01) + (uVar4 & 0xcb2a16da86d40e01));
  uVar4 = uRam0000000183468020 - (uRam0000000183468020 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183468020;
  uRam0000000183468208 = (uRam0000000183468208 ^ uVar4) + 0xfbff56fe46febfef ^ 0x6ca26d5d3de3c9f4;
  uRam00000001834680e0 = (uRam00000001834680e0 * 0x23c1847a3e7342a3 ^ uRam0000000183468208) + uVar4;
  uRam0000000183468258 = uRam00000001834680e0 ^ uRam0000000183468208;
  uRam0000000183467d48 = 0xfbff56fe46febfef;
  uVar4 = (uRam0000000183468180 ^ _UNK_182cce580) + uRam0000000183467eb8 + 0x2badb311971e2fb6;
  uVar7 = (uRam0000000183467eb8 ^ _UNK_182cce588) + uRam0000000183468180 + 0xd2266018fa92a19c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183468180 ^ _UNK_182cce580;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183467eb8 ^ _UNK_182cce588;
  uRam0000000183467f30 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183468180 + 0xd2266018fa92a19c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183467eb8 + 0x2badb311971e2fb6));
  uVar4 = uRam0000000183467f30 - (uRam0000000183467f30 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uRam0000000183467f30 ^ 0x2badb311133c0c93 ^
          (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2;
  uRam00000001834682a0 = (uRam00000001834682a0 ^ uVar4) + 0xf98bd309e9aead0f ^ 0x6815b1bb78f7809c;
  uRam0000000183468188 = (uRam0000000183468188 * -0x22aab5ec2aa063b9 ^ uRam00000001834682a0) + uVar4
  ;
  uRam00000001834680a0 = uRam0000000183468188 ^ uRam00000001834682a0;
  uRam0000000183467fa8 = 0xf98bd309e9aead0f;
  uVar4 = (~uRam0000000183468038 + 0xd0451affbad926de) *
          ((uRam00000001834682f0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001834682f0 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183468108) + (uVar4 & uRam0000000183468108);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183468010 =
       func_0x000190558da0((uVar4 | 0xd0451aff3efb7a07) + (uVar4 & 0xd0451aff3efb7a07));
  uVar4 = uRam0000000183468010 - (uRam0000000183468010 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183468010;
  uRam00000001834680a8 = uRam0000000183468248 ^ uVar4 ^ 0xd0451affbad9a6dc;
  uRam0000000183468200 = (uRam0000000183468200 ^ uVar4) + 0xd0451affbad9a6dc ^ 0x3073118280cf94f1;
  uRam00000001834680b0 = (uRam00000001834680b0 * 0x4a6431738c1aef97 ^ uRam0000000183468200) + uVar4;
  uRam0000000183468050 = uRam00000001834680b0 ^ uRam0000000183468200;
  uRam00000001834682e0 = 0xd0451affbad9a6dc;
  uRam0000000183467eb8 = func_0x000190558da0(uRam0000000183468248 ^ uVar4 ^ 0xe56600767f41630c);
  uVar4 = uRam0000000183467eb8 << 0x23 | uRam0000000183467eb8 >> 0x1d;
  uRam0000000183467f90 = uRam0000000183468068 ^ uVar4 ^ 0x7fff;
  uRam0000000183467ff8 = (uRam0000000183467ff8 ^ uVar4) + 0x7fff ^ 0x5fcf834d3869c1b9;
  uRam00000001834681f0 = (uRam00000001834681f0 * -0xf3a9728ba386987 ^ uRam0000000183467ff8) + uVar4;
  uRam0000000183468210 = uRam00000001834681f0 ^ uRam0000000183467ff8;
  uRam0000000183467dd0 = 0x7fff;
  uRam0000000183467e50 = func_0x000190558da0(uRam0000000183467d08 + 0x5731fd01283aa753 ^ 0x99);
  uVar4 = uRam0000000183467e50 >> 1 | uRam0000000183467e50;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam0000000183467e50;
  uVar4 = uVar7 >> 1 | uVar7;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar7;
  uRam0000000183468190 = (uRam0000000183468190 ^ uVar7) + 0x3f8380675a4ee23 ^ 0x140e16cc73e429b2;
  uRam0000000183468298 = (uRam0000000183468298 * 0x581bc6bdcd03da6d ^ uRam0000000183468190) + uVar7;
  uRam00000001834682a8 = uRam0000000183468298 ^ uRam0000000183468190;
  uRam00000001834681c8 = 0x3f8380675a4ee23;
  uVar4 = (~uRam0000000183468030 + 0x9e76a6afb496b4c) *
          ((uRam0000000183467dd8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183467dd8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183468250) + (uVar4 & uRam0000000183468250);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183467d90 =
       func_0x000190558da0((uVar4 | 0x9e76a6a7f6b486e) + (uVar4 & 0x9e76a6a7f6b486e));
  uRam0000000183467ec0 = uRam0000000183467ec0 + 0xf618959504b694b5 ^ 0xf42f8cb83c0794d0;
  uRam0000000183468180 = uRam0000000183467fc0 * -0x66f471a728df0349;
  uRam0000000183467fc0 = uRam0000000183468180 ^ uRam0000000183467ec0;
  uRam0000000183468110 = 0xf618959504b694b5;
  uVar4 = (~uRam0000000183467f48 + 0x9e76a6afb496b4c) *
          ((uRam0000000183467ff0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183467ff0 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183467d68) + (uVar4 & uRam0000000183467d68);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001834682c8 =
       func_0x000190558da0((uVar4 | 0x9e76a6a7f6b3791) + (uVar4 & 0x9e76a6a7f6b3791));
  uVar4 = uRam00000001834682c8 >> 1 | uRam00000001834682c8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001834682c8;
  uRam0000000183467e20 = uRam0000000183467e30 ^ uVar4 ^ 0x9e76a6afb49eb4a;
  uRam0000000183468080 = (uRam0000000183468080 ^ uVar4) + 0x9e76a6afb49eb4a ^ 0x99478d5c3b638fc4;
  uRam0000000183468228 = (uRam0000000183468228 * -0x7bfcbb12f57ceff ^ uRam0000000183468080) + uVar4;
  uRam0000000183467f58 = uRam0000000183468228 ^ uRam0000000183468080;
  uRam0000000183467f30 = 0x9e76a6afb49eb4a;
  uRam00000001834681f8 = func_0x000190558da0(uRam0000000183467df8 + 0x6f336e86b9e43d24 ^ 0x72);
  uVar4 = ~uRam00000001834681f8 & 0x9e76a6afb49eb4a;
  uRam0000000183467ef8 = uRam0000000183468090 ^ uVar4 ^ 0x7fff;
  uRam0000000183468178 = (uRam0000000183468178 ^ uVar4) + 0x7fff ^ 0xfe07ed2c5e06dd2d;
  uRam0000000183467fd0 = (uRam0000000183467fd0 * 0x42959199482f28a9 ^ uRam0000000183468178) + uVar4;
  uRam0000000183467e90 = uRam0000000183467fd0 ^ uRam0000000183468178;
  uRam0000000183468250 = uRam0000000183468298 ^ 0x7fff;
  uRam0000000183467d70 = 0x7fff;
  uVar4 = (~uRam0000000183467d60 + 0xf98bd309e9aead10) *
          ((uRam0000000183468038 ^ 0xfbff56fec2dc9cca) +
          (uRam0000000183468038 & 0x7bff56fec2dc9cca) * 2);
  uVar4 = (uVar4 | uRam0000000183468220) + (uVar4 & uRam0000000183468220);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183468288 =
       func_0x000190558da0((uVar4 | 0x27485f72b7231c5) + (uVar4 & 0x27485f72b7231c5));
  uVar4 = uRam0000000183468288 >> 1 | uRam0000000183468288;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183468288;
  uRam0000000183467f78 = (uRam0000000183467f78 ^ uVar4) + 0x27485f7af5012e0 ^ 0x44440f15cae556e1;
  uRam0000000183467fb0 = (uRam0000000183467fb0 * -0xeadfb54ad7c5033 ^ uRam0000000183467f78) + uVar4;
  uRam0000000183468210 = uRam0000000183467fb0 ^ uRam0000000183467f78;
  uRam0000000183468070 = 0x27485f7af5012e0;
  uVar4 = (~uRam0000000183468100 + 0xf98bd309e9aead10) *
          ((uRam0000000183467f68 ^ 0xfbff56fec2dc9cca) +
          (uRam0000000183467f68 & 0x7bff56fec2dc9cca) * 2);
  uVar4 = (uVar4 | 0x27485f7af5012e0) + (uVar4 & 0x27485f7af5012e0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183467eb8 =
       func_0x000190558da0((uVar4 | 0x27485f72b7231c5) + (uVar4 & 0x27485f72b7231c5));
  uRam0000000183468278 =
       (uRam0000000183468278 ^ uRam0000000183467eb8 ^ 0xf98bd309e9aead0f) + 0xf98b520840aead0f ^
       0xdd9fe7cb6a2dcceb;
  uRam0000000183467fa0 =
       (uRam0000000183467fa0 * 0x7d5f46fb8d143675 ^ uRam0000000183468278) +
       (uRam0000000183467eb8 ^ 0xf98bd309e9aead0f);
  uRam0000000183467df8 = uRam0000000183467fa0 ^ uRam0000000183468278;
  uRam0000000183467f98 = 0xf98b520840aead0f;
  uRam00000001834680d8 = func_0x000190558da0(lRam0000000183468088 + 0x23007c22ffe1ffU ^ 0x3a);
  uRam00000001834680d0 = uRam00000001834680d8 & 0x1fffffffffffff;
  uRam0000000183467e30 = uRam0000000183467e30 ^ uRam00000001834680d0 ^ 0xb6bd0fef9bf8d47d;
  uRam00000001834682f0 =
       (uRam00000001834682f0 * 0x414966cffd5d4013 ^ uRam0000000183467e30) + uRam00000001834680d0;
  uRam0000000183468220 = uRam00000001834682f0 ^ uRam0000000183467e30;
  uRam0000000183467f60 = 0;
  uVar4 = (uRam0000000183467ee0 ^ _UNK_182cce590) + uRam0000000183467f80 + 0xfbff56fec2dc9cca;
  uVar7 = (uRam0000000183467f80 ^ _UNK_182cce598) + (uRam0000000183467ee0 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183467ee0 ^ _UNK_182cce590;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183467f80 ^ _UNK_182cce598;
  uRam0000000183467e78 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183467ee0 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183467f80 + 0xfbff56fec2dc9cca));
  uRam0000000183467f08 =
       (uRam0000000183467f08 ^ uRam0000000183467e78) + 0x400a901b9014010 ^ 0x4658eddf018f72b0;
  uRam0000000183468040 =
       (uRam0000000183468040 * -0x79e10ca5927c4b73 ^ uRam0000000183467f08) + uRam0000000183467e78;
  uRam00000001834680d8 = uRam0000000183468040 ^ uRam0000000183467f08;
  uRam0000000183468168 = 0x400a901b9014010;
  uVar4 = (uRam0000000183467fb0 ^ _UNK_182cce5a0) + uRam0000000183468138 + 0xfbff56fec2dc9cca;
  uVar7 = (uRam0000000183468138 ^ _UNK_182cce5a8) + uRam0000000183467fb0 + 0x400a901b9014010;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183467fb0 ^ _UNK_182cce5a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183468138 ^ _UNK_182cce5a8;
  uRam0000000183467e30 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183467fb0 + 0x400a901b9014010) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183468138 + 0xfbff56fec2dc9cca));
  uRam0000000183467eb8 =
       uRam0000000183467eb8 ^ uRam0000000183467e30 ^ 0x400a901b9014010 ^ 0xfa6cb82ead6737e1;
  uRam0000000183467e68 =
       (uRam0000000183467e68 * -0xeeb6ef49501b361 ^ uRam0000000183467eb8) +
       (uRam0000000183467e30 ^ 0x400a901b9014010);
  uRam00000001834682a0 = uRam0000000183467e68 ^ uRam0000000183467eb8;
  uRam00000001834680f8 = 0;
  uVar4 = ((uRam0000000183467dd8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183467dd8 & 0x84225cda) * 2) * -uRam0000000183467d60;
  uVar4 = (uVar4 | uRam0000000183468200) + (uVar4 & uRam0000000183468200);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183467d78 =
       func_0x000190558da0((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = uRam0000000183467d78 >> 1 | uRam0000000183467d78;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183467d78;
  uVar4 = uVar4 << 0x1e | uVar4 >> 0x22;
  uRam0000000183467d90 = uRam0000000183467e20 ^ uVar4 ^ 0x7fff;
  uRam0000000183467e30 = (uRam0000000183467e30 ^ uVar4) + 0x7fff ^ 0x765cfb8430e73086;
  uRam0000000183468168 = (uRam0000000183468168 * 0x13563e47a9fef8af ^ uRam0000000183467e30) + uVar4;
  uRam0000000183468178 = uRam0000000183468168 ^ uRam0000000183467e30;
  uRam0000000183468208 = 0x7fff;
  uVar4 = (uRam0000000183467d60 ^ _UNK_182cce5b0) + uRam00000001834681b8 + 0xf8d750a4c0a8b9ca;
  uVar7 = (uRam00000001834681b8 ^ _UNK_182cce5b8) + uRam0000000183467d60 + 0xf8d750a4448a9aef;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183467d60 ^ _UNK_182cce5b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001834681b8 ^ _UNK_182cce5b8;
  uRam0000000183468158 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183467d60 + 0xf8d750a4448a9aef) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001834681b8 + 0xf8d750a4c0a8b9ca));
  uVar4 = uRam0000000183468158 << 0x1f | uRam0000000183468158 >> 0x21;
  uRam00000001834680f8 = uRam00000001834680f8 ^ uVar4 ^ 0xdc4fc647662ffb5c;
  uRam0000000183467e58 = (uRam0000000183467e58 * -0x725c32d7e7f92b9f ^ uRam00000001834680f8) + uVar4
  ;
  uRam0000000183468298 = uRam0000000183467e58 ^ uRam00000001834680f8;
  uRam0000000183467d20 = 0;
  uVar4 = ((uRam0000000183467d68 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183467d68 & 0x84225cda) * 2) * -lRam0000000183467f28;
  uVar4 = (uVar4 | uRam0000000183467d60) + (uVar4 & uRam0000000183467d60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183468140 =
       func_0x000190558da0((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = (uRam0000000183468140 & 0xffffffffffff) - (uRam0000000183468140 >> 1 & 0x555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183468140 & 0xffffffffffff;
  uRam0000000183467f60 = uRam0000000183468058 ^ uVar4 ^ 0x7fff;
  uRam00000001834681d8 = (uRam00000001834681d8 ^ uVar4) + 0x7fff ^ 0xfa8998cbe4d9d135;
  uRam0000000183468100 = (uRam0000000183468100 * -0x74dec1e01176688b ^ uRam00000001834681d8) + uVar4
  ;
  uRam0000000183468070 = uRam0000000183468100 ^ uRam00000001834681d8;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _UNK_182cce5c0,_UNK_1800170c0);
  uRam0000000183468018 = 0x7fff;
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar4 = uVar7 + lRam00000001834681e0;
  if (auVar6._4_4_ < 0) {
    uVar4 = uRam0000000183468270 ^ uVar7;
  }
  uRam00000001834682a8 = func_0x000190558da0(SUB161(auVar5 ^ _UNK_182cce5c0,5) ^ uVar4);
  uVar4 = uRam00000001834682a8 - (uRam00000001834682a8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001834682a8;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam0000000183467ff8 = (ulonglong)uVar2;
  uRam0000000183468240 = (uRam0000000183468240 ^ uVar4) + uRam0000000183467ff8 ^ 0xb46cc9793828b3da;
  uRam0000000183468288 = (uRam0000000183468288 * 0x42046ca3b8b52135 ^ uRam0000000183468240) + uVar4;
  uRam0000000183467e00 = uRam0000000183468288 ^ uRam0000000183468240;
  uVar2 = uVar2 ^ param_3;
  uVar4 = (~uRam0000000183467d40 + 0xfb23569a) *
          ((uRam0000000183467eb8 ^ 0x26d819cf) +
          (ulonglong)((uint)uRam0000000183467eb8 & 0x26d819cf) * 2);
  uVar4 = (uVar4 | uRam0000000183468120) + (uVar4 & uRam0000000183468120);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183468010 =
       func_0x000190558da0((uVar4 | 0xddfb4f56) + (ulonglong)((uint)uVar4 & 0xddfb4f56));
  uRam0000000183468258 =
       (uRam0000000183468258 ^ uRam0000000183468010 ^ 0xa2fa3aea) + 0xfbfb7efb ^ 0xb446427605c9a513;
  uRam0000000183467d90 =
       (uRam0000000183467d90 * 0x688c0c303f4d9cad ^ uRam0000000183468258) +
       (uRam0000000183468010 ^ 0xa2fa3aea);
  uRam0000000183468230 = uRam0000000183467d90 ^ uRam0000000183468258;
  lRam00000001834681e0 = 0xfbfb7efb;
  uVar4 = (uRam0000000183468230 ^ _UNK_182cce5d0) + uRam00000001834682e0 + 0xf4302aba;
  uVar7 = (uRam00000001834682e0 ^ _UNK_182cce5d8) + uRam0000000183468230 + 0xb35cc839;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183468230 ^ _UNK_182cce5d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001834682e0 ^ _UNK_182cce5d8;
  uRam0000000183467e20 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183468230 + 0xb35cc839) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001834682e0 + 0xf4302aba));
  uVar4 = ((uRam0000000183467e20 ^ 0xf35ec9bf) << 0x37 | (uRam0000000183467e20 ^ 0xf35ec9bf) >> 9) ^
          0xb35cc839;
  uRam0000000183467d28 = (uRam0000000183467d28 ^ uVar4) + 0xc34ec1a6 ^ 0x693b0e80a53ef1f1;
  uRam00000001834680b0 = (uRam00000001834680b0 * 0x3151b83b789986bb ^ uRam0000000183467d28) + uVar4;
  uRam0000000183467d48 = uRam00000001834680b0 ^ uRam0000000183467d28;
  uRam0000000183467fe8 = 0xc34ec1a6;
  uVar4 = (~uRam0000000183467d20 + 0x1849f905) *
          ((uRam0000000183467d90 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183467d90 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183468250) + (uVar4 & uRam0000000183468250);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001834681f8 =
       func_0x000190558da0((uVar4 | 0x9c6bda21) + (ulonglong)((uint)uVar4 & 0x9c6bda21));
  uVar4 = uRam00000001834681f8 << 0x2b | uRam00000001834681f8 >> 0x15;
  uRam0000000183467f00 = (uRam0000000183467f00 ^ uVar4) - 0x1849f904 ^ 0xc41afae84009a23;
  uRam0000000183468028 = (uRam0000000183468028 * -0x424ae792fb150ab5 ^ uRam0000000183467f00) + uVar4
  ;
  uRam00000001834681b0 = uRam0000000183468028 ^ uRam0000000183467f00;
  uRam0000000183468128 = 0xe7b606fc;
  uRam0000000183467e10 = func_0x000190558da0(uRam0000000183467d38 ^ 0x140009370021cd);
  uVar4 = (uRam0000000183467e10 ^ 0x15fc3f736c6ea368) & 0x7fffffffffffffff ^ 0xe7b606fc;
  uRam0000000183467e90 = uRam00000001834681c8 ^ uVar4 ^ 0x1000040a2;
  uRam0000000183468110 = (uRam0000000183468110 ^ uVar4) + 0x1000040a2 ^ 0xeb9bb4414ed99776;
  uRam0000000183468118 = (uRam0000000183468118 * -0x347690de776319 ^ uRam0000000183468110) + uVar4;
  uRam0000000183467f78 = uRam0000000183468118 ^ uRam0000000183468110;
  uRam0000000183467e28 = 0x40a2;
  uVar4 = (uRam0000000183468210 ^ _UNK_182cce5e0) + uRam0000000183467e98 + 0x84222325;
  uVar7 = (uRam0000000183467e98 ^ _UNK_182cce5e8) + uRam0000000183468210 + 0x5bd87b99;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183468210 ^ _UNK_182cce5e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183467e98 ^ _UNK_182cce5e8;
  uRam0000000183467fe0 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183468210 + 0x5bd87b99) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183467e98 + 0x84222325));
  uVar4 = uRam0000000183467fe0 - (uRam0000000183467fe0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183467fe0;
  uRam0000000183467ff0 = (uRam0000000183467ff0 ^ uVar4) - 0x5bd87b99 ^ 0x760a3e164e093248;
  uRam00000001834682c8 = (uRam00000001834682c8 * 0x7aeef9196c9b44e5 ^ uRam0000000183467ff0) + uVar4;
  uRam00000001834682e8 = uRam00000001834682c8 ^ uRam0000000183467ff0;
  uRam0000000183468140 = 0xa4278467;
  uVar4 = (uRam00000001834681d8 ^ _UNK_182cce5f0) + uRam0000000183468138 + 0x84226387;
  uVar7 = (uRam0000000183468138 ^ _UNK_182cce5f8) + uRam00000001834681d8 + 0x5bd87b99;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001834681d8 ^ _UNK_182cce5f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183468138 ^ _UNK_182cce5f8;
  uRam0000000183467fa8 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001834681d8 + 0x5bd87b99) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183468138 + 0x84226387));
  uVar4 = (uRam0000000183467fa8 & 0xfffffffffffc0000) + 0x40a2;
  uRam0000000183468190 = uRam0000000183467f70 ^ uVar4 ^ 0x5bd8bc3b;
  uRam0000000183467f00 = (uVar4 ^ uRam0000000183467f00) + 0x5bd8bc3b ^ 0x1587691e703bb6fa;
  uRam0000000183468250 =
       (uRam0000000183467fa8 & 0xfffffffffffc0000) +
       (uRam0000000183468250 * -0x5261cbad10a1e6f1 ^ uRam0000000183467f00) + 0x40a2;
  uRam0000000183467f78 = uRam0000000183467f00 ^ uRam0000000183468250;
  uRam0000000183468068 = 0x5bd8bc3b;
  uVar4 = (uRam0000000183467f00 ^ _UNK_182cce600) + uRam0000000183468120 + 0xdffa9f1e;
  uVar7 = (uRam0000000183468120 ^ _UNK_182cce608) + uRam0000000183467f00 + 0xa4278467;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183467f00 ^ _UNK_182cce600;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183468120 ^ _UNK_182cce608;
  uRam0000000183467fc8 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183467f00 + 0xa4278467) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183468120 + 0xdffa9f1e));
  uVar4 = uRam0000000183467fc8 ^ 0xa4278467;
  uRam0000000183467f00 = uRam0000000183468158 ^ uVar4 ^ 0x1000040a2;
  uRam0000000183467d28 = (uRam0000000183467d28 ^ uVar4) + 0x1000040a2 ^ 0x2b0842f5fdb14183;
  uRam0000000183467f78 = (uRam0000000183467f78 * -0x44d367db61c53067 ^ uRam0000000183467d28) + uVar4
  ;
  uRam0000000183468290 = uRam0000000183467f78 ^ uRam0000000183467d28;
  uRam0000000183467e70 = 0x40a2;
  uVar4 = (uRam0000000183467dc8 ^ _UNK_182cce610) + uRam0000000183467df8 + 0x84226387;
  uVar7 = (uRam0000000183467df8 ^ _UNK_182cce618) + uRam0000000183467dc8 + 0xc164e746;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183467dc8 ^ _UNK_182cce610;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183467df8 ^ _UNK_182cce618;
  lRam0000000183468000 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183467dc8 + 0xc164e746) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183467df8 + 0x84226387));
  uVar4 = lRam0000000183468000 * -0x76257c2da40a7d1d;
  uRam00000001834682e0 = uRam0000000183468040 ^ uVar4 ^ 0xc16527e8;
  uRam00000001834682d8 = (uRam00000001834682d8 ^ uVar4) + 0xc16527e8 ^ 0x8aaae06c0fd166c;
  uRam0000000183468130 = (uRam0000000183468130 * -0x2e36f0b80bd5a919 ^ uRam00000001834682d8) + uVar4
  ;
  uRam0000000183468090 = uRam0000000183468130 ^ uRam00000001834682d8;
  uRam0000000183468138 = 0xc16527e8;
  uRam0000000183468138 = func_0x000190558da0(uRam0000000183468108 ^ 0xff940063b8006a48);
  uRam00000001834680c0 =
       (uRam00000001834680c0 ^ uRam0000000183467d08) + 0xc34a40a2 ^ 0xf7f8961fd96f6bca;
  uRam0000000183467e38 =
       (uRam0000000183467e38 * 0x4d78a161e6044bb ^ uRam00000001834680c0) + uRam0000000183467d08;
  uRam0000000183468058 = uRam0000000183467e38 ^ uRam00000001834680c0;
  uRam0000000183468018 = 0xc34a40a2;
  uVar4 = (uRam0000000183468068 ^ _UNK_182cce620) + uRam0000000183467f30 + 0xbc979c78;
  uVar7 = (uRam0000000183467f30 ^ _UNK_182cce628) + uRam0000000183468068 + 0x86948144;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183468068 ^ _UNK_182cce620;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183467f30 ^ _UNK_182cce628;
  uRam0000000183467ee0 =
       func_0x000190558da0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183468068 + 0x86948144) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183467f30 + 0xbc979c78));
  uVar4 = (ulonglong)(~(uint)uRam0000000183467ee0 & 0x38b5bf5d) ^ 0x86948144;
  uRam0000000183467ec0 = uRam0000000183468298 ^ uVar4 ^ 0xbf4a40a1;
  uRam0000000183467d10 = (uRam0000000183467d10 ^ uVar4) + 0xbf4a40a1 ^ 0x20733154ae72170e;
  uRam00000001834682a8 = (uRam00000001834682a8 * -0x259649d6667c02a3 ^ uRam0000000183467d10) + uVar4
  ;
  uRam0000000183468228 = uRam00000001834682a8 ^ uRam0000000183467d10;
  uRam0000000183468098 = 0xbf4a40a1;
  uVar4 = (~uRam0000000183468050 + 0xbf4a40a2) *
          ((uRam0000000183467f38 ^ 0x3b686384) +
          (ulonglong)((uint)uRam0000000183467f38 & 0x3b686384) * 2);
  uVar4 = (uVar4 | uRam0000000183468148) + (uVar4 & uRam0000000183468148);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001834680b8 =
       func_0x000190558da0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam00000001834681c0 = uRam00000001834680b8 ^ 0xbf4a40a1;
  uRam0000000183468168 = uRam0000000183468168 ^ uRam00000001834681c0 ^ 0xa3163ad916862b8d;
  uRam0000000183468298 =
       (uRam0000000183468298 * -0x518a58d7ff1fe633 ^ uRam0000000183468168) + uRam00000001834681c0;
  uRam00000001834681f8 = uRam0000000183468298 ^ uRam0000000183468168;
  lRam00000001834681e0 = 0;
  uVar4 = ((uRam0000000183468260 ^ 0x84226387) +
          (ulonglong)((uint)uRam0000000183468260 & 0x84226387) * 2) * -uRam0000000183468158;
  uVar4 = (uVar4 | uRam0000000183468050) + (uVar4 & uRam0000000183468050);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183467f20 =
       func_0x000190558da0((uVar4 | 0x84226387) + (ulonglong)((uint)uVar4 & 0x84226387));
  uVar4 = uRam0000000183467f20 >> 1 | uRam0000000183467f20;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183467f20;
  uRam0000000183467dd8 = uRam0000000183467e68 ^ uVar4 ^ 0x40a2;
  uRam0000000183467fc0 = (uRam0000000183467fc0 ^ uVar4) + 0x40a2 ^ 0x76f27943e69c98da;
  uRam0000000183467e20 = (uRam0000000183467e20 * -0x363f3f9b44e0de25 ^ uRam0000000183467fc0) + uVar4
  ;
  uRam0000000183467db8 = uRam0000000183467e20 ^ uRam0000000183467fc0;
  uRam0000000183468278 = 0x40a2;
  uVar4 = ((uRam0000000183468130 ^ 0x84226387) +
          (ulonglong)((uint)uRam0000000183468130 & 0x84226387) * 2) * -uRam0000000183467ff8;
  uVar4 = (uVar4 | uRam0000000183468188) + (uVar4 & uRam0000000183468188);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183467f98 =
       func_0x000190558da0((uVar4 | 0x84226387) + (ulonglong)((uint)uVar4 & 0x84226387));
  uVar4 = (ulonglong)(~(uint)((ulonglong)uRam0000000183467f98 >> 0x25) & 0x40a2);
  uRam00000001834682b8 = uRam0000000183467ff8 ^ uVar4 ^ 0x40a2;
  uRam00000001834682c0 = (uRam00000001834682c0 ^ uVar4) + 0x40a2 ^ 0xfe9c6cacc8a37757;
  uRam00000001834680c8 = (uRam00000001834680c8 * -0x78d8650f90951d3 ^ uRam00000001834682c0) + uVar4;
  uRam0000000183468058 = uRam00000001834680c8 ^ uRam00000001834682c0;
  uRam0000000183467e40 = uRam0000000183467ea8 ^ 0x40a2;
  uRam0000000183468138 = 0x40a2;
  uVar4 = (~uRam0000000183467ea0 + 0xa2fa3aeb) *
          ((uRam0000000183467e98 ^ 0x26d819cf) +
          (ulonglong)((uint)uRam0000000183467e98 & 0x26d819cf) * 2);
  uVar4 = (uVar4 | uRam0000000183467f88) + (uVar4 & uRam0000000183467f88);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001834681d8 =
       func_0x000190558da0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uVar4 = uRam00000001834681d8 >> 1 | uRam00000001834681d8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001834681d8;
  uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar7;
  uRam0000000183467e90 = uRam0000000183467e90 ^ uVar7 ^ 0x24e9df62ffa76810;
  uRam0000000183467de0 = (uRam0000000183467de0 * 0x17a66d5f58f4236f ^ uRam0000000183467e90) + uVar7;
  uRam0000000183468298 = uRam0000000183467de0 ^ uRam0000000183467e90;
  uRam0000000183467e50 = 0;
  uVar7 = (ulonglong)uVar2;
  uVar4 = (~uRam0000000183467da0 + 0x40a3) *
          ((uVar7 ^ 0x84222325 ^ uRam0000000183468258) +
          (ulonglong)((uint)uRam0000000183468258 & (uint)(uVar7 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uRam0000000183467dd0) + (uVar4 & uRam0000000183467dd0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183468128 =
       func_0x000190558da0((uVar7 ^ 0x84226387 | uVar4) +
                           (ulonglong)((uint)(uVar7 ^ 0x84226387) & (uint)uVar4));
  lVar3 = uVar7 - (uVar2 & 0x40a2) * 2;
  uRam00000001834680a8 = lVar3 + 0x40a2;
  uRam0000000183468078 =
       (uRam0000000183468078 ^ uRam0000000183468128 & 0x7fffffffffffffff) + lVar3 + 0x40a2 ^
       0x2843f6abbb48fcb0;
  uRam0000000183467fb0 =
       (uRam0000000183467fb0 * 0x6017b032356580eb ^ uRam0000000183468078) +
       (uRam0000000183468128 & 0x7fffffffffffffff);
  uRam0000000183467f20 = uRam0000000183467fb0 ^ uRam0000000183468078;
  uRam00000001834681a0 = uRam0000000183467d70 ^ uRam00000001834680a8;
  uRam00000001834680a8 = uRam00000001834680a8 & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba)
      /* POOL[0x3600,0xba]: lC;Ljava/lang/Runnable;)V | RUYIs | sixtwo/J | gu | nXrOu | fS | NvUoI | [Lsixtwo/au; | jYdgZ | sixtwo/au | oh | kJ | (Lsixtwo/lq;)Lsixtwo/Z; | IzFhM | kK | (F)Lsixtwo/Z; | kL | (I)Lsixtwo/Z; | sixtwo/rj | XzDkv | Lsixtwo/rj; */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019054f8b9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ccc720 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; gB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 190559030, runtime 6ffff8169030) =====

void FUN_190559030(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00019055907b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cce890 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 19055a040, runtime 6ffff816a040) =====

void FUN_19055a040(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019055a0c9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ccee50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; gj ()Lsixtwo/ri; (handler @ image 190558e30, runtime 6ffff8168e30) =====

void FUN_190558e30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000190558e50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cce7b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gk ()Lsixtwo/ri; (handler @ image 190571e90, runtime 6ffff8181e90) =====

void FUN_190571e90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000190571eb0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cd24c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gl ()Lsixtwo/ri; (handler @ image 190572090, runtime 6ffff8182090) =====

void FUN_190572090(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001905720b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cd25a0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gm ()Lsixtwo/rk; (handler @ image 190572290, runtime 6ffff8182290) =====

void FUN_190572290(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001905722b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cd2680 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gn ()Lsixtwo/rk; (handler @ image 190572490, runtime 6ffff8182490) =====

void FUN_190572490(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001905724b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cd2760 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; go ()Lsixtwo/rk; (handler @ image 190572690, runtime 6ffff8182690) =====

void FUN_190572690(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001905726b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cd2840 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gp ()Lsixtwo/gg; (handler @ image 190572890, runtime 6ffff8182890) =====

void FUN_190572890(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001905728b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cd2920 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gq ()I (handler @ image 190572a90, runtime 6ffff8182a90) =====

void FUN_190572a90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000190572ab0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cd2a00 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gr (I)Lsixtwo/J; (handler @ image 190500280, runtime 6ffff8110280) =====

void FUN_190500280(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001905002a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cbc270 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gs (Lsixtwo/lC;)V (handler @ image 190500480, runtime 6ffff8110480) =====

void FUN_190500480(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba)
      /* POOL[0x3600,0xba]: lC;Ljava/lang/Runnable;)V | RUYIs | sixtwo/J | gu | nXrOu | fS | NvUoI | [Lsixtwo/au; | jYdgZ | sixtwo/au | oh | kJ | (Lsixtwo/lq;)Lsixtwo/Z; | IzFhM | kK | (F)Lsixtwo/Z; | kL | (I)Lsixtwo/Z; | sixtwo/rj | XzDkv | Lsixtwo/rj; */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019050057b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cbc390 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; gt ([I)V (handler @ image 190518c70, runtime 6ffff8128c70) =====

void FUN_190518c70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba)
      /* POOL[0x3600,0xba]: lC;Ljava/lang/Runnable;)V | RUYIs | sixtwo/J | gu | nXrOu | fS | NvUoI | [Lsixtwo/au; | jYdgZ | sixtwo/au | oh | kJ | (Lsixtwo/lq;)Lsixtwo/Z; | IzFhM | kK | (F)Lsixtwo/Z; | kL | (I)Lsixtwo/Z; | sixtwo/rj | XzDkv | Lsixtwo/rj; */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190518cba did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cc3c50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; gu ()[I (handler @ image 190518df0, runtime 6ffff8128df0) =====

void FUN_190518df0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba)
      /* POOL[0x3600,0xba]: lC;Ljava/lang/Runnable;)V | RUYIs | sixtwo/J | gu | nXrOu | fS | NvUoI | [Lsixtwo/au; | jYdgZ | sixtwo/au | oh | kJ | (Lsixtwo/lq;)Lsixtwo/Z; | IzFhM | kK | (F)Lsixtwo/Z; | kL | (I)Lsixtwo/Z; | sixtwo/rj | XzDkv | Lsixtwo/rj; */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190518e36 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cc3cf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; gv (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 190518f80, runtime 6ffff8128f80) =====

undefined8 FUN_190518f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/J; gw ([B)Ljava/lang/String; (handler @ image 190519010, runtime 6ffff8129010) =====

void FUN_190519010(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001905190b3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cc3f10 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gx (IJ)Ljava/lang/String; (handler @ image 190543540, runtime 6ffff8153540) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190543540(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar9;
  
  uVar5 = (uRam0000000183467c50 ^ _UNK_182ccb210) + uRam0000000183467ad0 + 0x84222325;
  uVar8 = (uRam0000000183467ad0 ^ _UNK_182ccb218) + uRam0000000183467c50 + 0xd0dac936f3f46e7c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467c50 ^ _UNK_182ccb210;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183467ad0 ^ _UNK_182ccb218;
  uRam0000000183467ab0 =
       func_0x000190549a60((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183467c50 + 0xd0dac936f3f46e7c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183467ad0 + 0x84222325));
  uRam0000000183467cc8 = uRam0000000183467cc8 + 0x2f2536c90c0b9184 ^ 0x8d9286794a613d14;
  uRam0000000183467960 = uRam0000000183467b70 * -0x26d268b65b3352f5;
  uRam0000000183467b70 = uRam0000000183467960 ^ uRam0000000183467cc8;
  uRam0000000183467c40 = 0x2f2536c90c0b9184;
  uVar5 = (uRam0000000183467978 ^ _UNK_182ccb220) + uRam0000000183467a88 + 0x84222325;
  uVar8 = (uRam0000000183467a88 ^ _UNK_182ccb228) + uRam0000000183467978 + 0xc4efc6d4805d8ebb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467978 ^ _UNK_182ccb220;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183467a88 ^ _UNK_182ccb228;
  uRam0000000183467c70 =
       func_0x000190549a60((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183467978 + 0xc4efc6d4805d8ebb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183467a88 + 0x84222325));
  uRam0000000183467928 = uRam0000000183467aa8 * -0x7fc5f249e759cdc1;
  uRam00000001834679d8 = uRam00000001834679d8 + 0x3b10392b7fa27145 ^ 0x408d364e4f257785;
  uRam0000000183467aa8 = uRam0000000183467928 ^ uRam00000001834679d8;
  uRam0000000183467b08 = 0x3b10392b7fa27145;
  uRam0000000183467c88 = func_0x000190549a60(uRam0000000183467970 ^ 0xd4ceab0460c60025);
  uVar5 = uRam0000000183467c88 * 0x70be4e7f363e4a7;
  uRam0000000183467c30 = uRam0000000183467b50 ^ uVar5 ^ 0xc4efc6d4805e0eba;
  uRam0000000183467ba8 = (uRam0000000183467ba8 ^ uVar5) + 0xc4efc6d4805e0eba ^ 0xf1ae67e51b8a5f45;
  uRam0000000183467928 = (uRam0000000183467928 * -0x67bd289fb800d56f ^ uRam0000000183467ba8) + uVar5
  ;
  uRam0000000183467990 = uRam0000000183467928 ^ uRam0000000183467ba8;
  uRam0000000183467c00 = -0x3b10392b7fa1f146;
  uVar5 = (uRam0000000183467a60 ^ _UNK_182ccb230) + uRam0000000183467b00 + 0xc4efc6d4047c2d9f;
  uVar8 = (uRam0000000183467b00 ^ _UNK_182ccb238) + uRam0000000183467a60 + 0x3b10392b7fa27145;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467a60 ^ _UNK_182ccb230;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183467b00 ^ _UNK_182ccb238;
  uRam0000000183467a70 =
       func_0x000190549a60((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183467a60 + 0x3b10392b7fa27145) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183467b00 + 0xc4efc6d4047c2d9f));
  uVar5 = ((uRam0000000183467a70 ^ 0xffffffff003e7fff) & 0x3fffff) << 0x20 |
          (uRam0000000183467a70 ^ 0xffffffff003e7fff) >> 0x20;
  uRam0000000183467a40 = uRam0000000183467a50 ^ uVar5 ^ 0x7fff;
  uRam0000000183467b18 = (uRam0000000183467b18 ^ uVar5) + 0x7fff ^ 0x89b5a9d42139e43d;
  uRam0000000183467b50 = (uRam0000000183467b50 * 0x397a01ce905762d7 ^ uRam0000000183467b18) + uVar5;
  uRam0000000183467bc8 = uRam0000000183467b50 ^ uRam0000000183467b18;
  uRam0000000183467a10 = 0x7fff;
  uVar5 = (~uRam0000000183467bf8 + 0x2e4884a3ae94c0a1) *
          ((uRam0000000183467bc0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183467bc0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183467bc8) + (uVar5 & uRam0000000183467bc8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x000190549a60((uVar5 | 0x2e4884a32ab6e385) + (uVar5 & 0x2e4884a32ab6e385));
  uVar5 = (uVar5 ^ 0x2e4884a3ae94c0a0) << 7 | (uVar5 ^ 0x2e4884a3ae94c0a0) >> 0x39;
  uRam0000000183467ac8 = (uRam0000000183467ac8 ^ uVar5) + 0xd1b77b5c516b3f60 ^ 0xa89eef62f615bd5;
  uRam0000000183467c00 = (uRam0000000183467c00 * -0x3bacd5834ad7ae1 ^ uRam0000000183467ac8) + uVar5;
  uRam0000000183467c48 = uRam0000000183467c00 ^ uRam0000000183467ac8;
  uRam0000000183467a50 = 0xd1b77b5c516b3f60;
  uRam0000000183467b58 = func_0x000190549a60(uRam0000000183467cb8 + 0x9e8bb7da59848e19 ^ 0xe);
  uVar5 = uRam0000000183467b58 << 0x38 | uRam0000000183467b58 >> 8;
  uVar8 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  uRam0000000183467a68 = uRam0000000183467a40 ^ uVar5 ^ 0x2e4884a3ae95409f;
  uRam0000000183467900 = (uRam0000000183467900 ^ uVar5) + 0x2e4884a3ae95409f ^ 0x101cb910852ec31b;
  uRam0000000183467a80 = (uRam0000000183467a80 * 0x4de8b0ff151553d3 ^ uRam0000000183467900) + uVar5;
  uRam0000000183467cc8 = uRam0000000183467a80 ^ uRam0000000183467900;
  uRam0000000183467ca0 = 0x2e4884a3ae95409f;
  uVar5 = (uRam0000000183467ce8 ^ _UNK_182ccb240) + uRam0000000183467ce0 + 0x76febe3f7ba93ed7;
  uVar8 = (uRam0000000183467ce0 ^ _UNK_182ccb248) + uRam0000000183467ce8 + 0x756f39fc427bbf78;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467ce8 ^ _UNK_182ccb240;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183467ce0 ^ _UNK_182ccb248;
  uRam0000000183467b58 =
       func_0x000190549a60((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183467ce8 + 0x756f39fc427bbf78) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183467ce0 + 0x76febe3f7ba93ed7));
  uVar5 = (uRam0000000183467b58 ^ 0xdc86ef705bd39770) << 10 |
          (uRam0000000183467b58 ^ 0xdc86ef705bd39770) >> 0x36;
  uRam0000000183467b30 = uRam0000000183467ad8 ^ uVar5 ^ 0xec6df83c4206dd6a;
  uRam00000001834679d8 = (uRam00000001834679d8 ^ uVar5) + 0xec6df83c4206dd6a ^ 0x36d8bfb956355e82;
  uRam0000000183467cc8 = (uRam0000000183467cc8 * -0xad73f65c6b52d53 ^ uRam00000001834679d8) + uVar5;
  uRam0000000183467920 = uRam0000000183467cc8 ^ uRam00000001834679d8;
  uRam0000000183467910 = 0xec6df83c4206dd6a;
  uRam0000000183467b68 = func_0x000190549a60(uRam0000000183467a90 ^ 0xc27f71079778cd0c);
  uRam00000001834679f8 =
       (uRam00000001834679f8 ^ uRam0000000183467b68 ^ 0x76febe3fff8b1df2) + 0x39187c3bdf0a28a ^
       0xd973e85fb0525e10;
  uRam0000000183467900 =
       (uRam0000000183467900 * 0x18379de2d939d485 ^ uRam00000001834679f8) +
       (uRam0000000183467b68 ^ 0x76febe3fff8b1df2);
  uRam00000001834679b8 = uRam0000000183467900 ^ uRam00000001834679f8;
  uRam0000000183467a08 = 0x39187c3bdf0a28a;
  uVar5 = (~uRam0000000183467a58 + 0x756f39fc427bbf79) *
          ((uRam0000000183467a70 ^ 0x76febe3f7ba93ed7) +
          (uRam0000000183467a70 & 0x76febe3f7ba93ed7) * 2);
  uVar5 = (uVar5 | uRam0000000183467b50) + (uVar5 & uRam0000000183467b50);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  lVar3 = func_0x000190549a60((uVar5 | 0x39187c339d281af) + (uVar5 & 0x39187c339d281af));
  uRam0000000183467b70 =
       (uRam0000000183467b70 ^ uRam0000000183467be8) + 0x746e383c420b1d70 ^ 0x5c633ed49758e2d6;
  uRam0000000183467970 = (lVar3 * 0x5a76a1509c3a691d ^ uRam0000000183467b70) + uRam0000000183467be8;
  uRam0000000183467ba0 = uRam0000000183467970 ^ uRam0000000183467b70;
  uRam0000000183467a58 = 0x746e383c420b1d70;
  uRam0000000183467a10 = func_0x000190549a60(uRam0000000183467c10 ^ 0x9688bc4d3b3343ff);
  uVar5 = (uRam0000000183467a10 ^ 0x310034395302080) & 0x39187c3bdf0a28a;
  uRam00000001834679e8 = uRam0000000183467cb8 ^ uVar5 ^ 0xec6df83c4206dd6a;
  uRam0000000183467bb8 = (uRam0000000183467bb8 ^ uVar5) + 0xec6df83c4206dd6a ^ 0x5f71ba17390642af;
  uRam0000000183467c98 = (uRam0000000183467c98 * 0x3da084bdc46f15a1 ^ uRam0000000183467bb8) + uVar5;
  uRam0000000183467a08 = uRam0000000183467c98 ^ uRam0000000183467bb8;
  uRam0000000183467b88 = 0xec6df83c4206dd6a;
  uRam0000000183467c40 = func_0x000190549a60(uRam0000000183467a58 ^ 0x24008436001d3d);
  uVar5 = (uRam0000000183467c40 ^ 0x7fff) << 0x38 | (uRam0000000183467c40 ^ 0x7fff) >> 8;
  uRam0000000183467950 = uRam0000000183467b20 ^ uVar5 ^ 0x7fff;
  uRam0000000183467b00 = (uRam0000000183467b00 ^ uVar5) + 0x7fff ^ 0x43aab16e6da4357c;
  uRam00000001834679b8 = (uRam00000001834679b8 * -0xa66b21600997663 ^ uRam0000000183467b00) + uVar5;
  uRam0000000183467968 = uRam00000001834679b8 ^ uRam0000000183467b00;
  uRam00000001834679d0 = 0x7fff;
  uVar5 = (uRam0000000183467ae8 ^ _UNK_182ccb250) + uRam0000000183467bd0 + 0x76febe3f7ba93ed7;
  uVar8 = (uRam0000000183467bd0 ^ _UNK_182ccb258) + (uRam0000000183467ae8 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467ae8 ^ _UNK_182ccb250;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183467bd0 ^ _UNK_182ccb258;
  uRam0000000183467b90 =
       func_0x000190549a60((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183467ae8 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183467bd0 + 0x76febe3f7ba93ed7));
  uVar5 = (uRam0000000183467b90 ^ 0x890141c00074e20e) << 0x19 |
          (uRam0000000183467b90 ^ 0x890141c00074e20e) >> 0x27;
  uRam0000000183467b00 = (uRam0000000183467b00 ^ uVar5) + 0x890141c00074e20d ^ 0x347d94d856ffc2d5;
  uRam0000000183467cb0 = (uRam0000000183467cb0 * 0x386d2fa222420ce9 ^ uRam0000000183467b00) + uVar5;
  uRam0000000183467a80 = uRam0000000183467cb0 ^ uRam0000000183467b00;
  uRam0000000183467c60 = 0x890141c00074e20d;
  uVar5 = (uRam0000000183467918 ^ 0x84225cda) + uRam0000000183467c48 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467918 ^ 0x84225cda;
  uVar8 = ((uRam0000000183467c48 + uRam0000000183467918) * 0x2000 |
          uRam0000000183467c48 + uRam0000000183467918 >> 0x33) ^ uRam0000000183467c48;
  uRam0000000183467b10 =
       func_0x000190549a60((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183467918 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183467c48 + 0x84225cda));
  uRam00000001834679d8 = uRam0000000183467c90 ^ uRam0000000183467b10 ^ 0x7fff;
  uRam0000000183467c90 = (uRam0000000183467c90 ^ uRam0000000183467b10) + 0x7fff ^ 0xc69fa93d26f1b863
  ;
  uRam0000000183467c68 =
       (uRam0000000183467c68 * -0x33be52a885824fd ^ uRam0000000183467c90) + uRam0000000183467b10;
  uRam0000000183467a58 = uRam0000000183467c68 ^ uRam0000000183467c90;
  uRam0000000183467b88 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam0000000183467c58;
  lVar3 = (param_4 ^ 0x84222325) + uRam0000000183467a28;
  uVar8 = uVar5 + lVar3;
  uVar9 = (uRam0000000183467a28 ^ 0x7fff) + uRam0000000183467c58 + 0x7fff;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183467a28 ^ 0x7fff;
  uRam0000000183467968 =
       func_0x000190549a60((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183467c58 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar4 = (uint)param_4 & 0x7fff;
  uVar8 = (ulonglong)uVar4;
  uRam0000000183467a10 = (uRam0000000183467a10 ^ uRam0000000183467968) + uVar8 ^ 0x600c6d2a8595face;
  uRam0000000183467bc8 =
       (uRam0000000183467bc8 * -0x210c4ce9b60f40dd ^ uRam0000000183467a10) + uRam0000000183467968;
  uRam00000001834679a0 = uRam0000000183467bc8 ^ uRam0000000183467a10;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar4 ^ 0x84222325;
  auVar6._8_8_ = param_3 & 0xffffffff;
  auVar7 = pshufb(auVar6 ^ _UNK_182ccb260,_UNK_1800170c0);
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar5 = uVar9 + uRam0000000183467cf0;
  if (auVar7._4_4_ < 0) {
    uVar5 = uRam0000000183467978 ^ uVar9;
  }
  uRam0000000183467c90 = uVar8;
  uRam0000000183467c18 = func_0x000190549a60(SUB161(auVar6 ^ _UNK_182ccb260,5) ^ uVar5);
  uVar8 = uVar8 ^ param_3 & 0xffffffff;
  uRam0000000183467a68 =
       (uRam0000000183467a68 ^ uRam0000000183467c18 & 0x7fffffffffffffff) + uVar8 ^
       0xe7097fa9b640a4b9;
  uRam0000000183467a70 =
       (uRam0000000183467a70 * -0x5d623448d6819dd5 ^ uRam0000000183467a68) +
       (uRam0000000183467c18 & 0x7fffffffffffffff);
  uRam0000000183467a68 = uRam0000000183467a70 ^ uRam0000000183467a68;
  uVar5 = (~uRam0000000183467920 + 0xd4d7e1d4) *
          ((uRam0000000183467978 ^ 0x62d40009) +
          (ulonglong)((uint)uRam0000000183467978 & 0x62d40009) * 2);
  uVar5 = (uVar5 | uRam0000000183467af0) + (uVar5 & uRam0000000183467af0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183467c08 = uVar8;
  uRam0000000183467cf0 =
       func_0x000190549a60((uVar5 | 0xb603e1da) + (ulonglong)((uint)uVar5 & 0xb603e1da));
  uVar5 = (uRam0000000183467cf0 ^ 0xf6f7e3ff) & 0x7fffffffffff8000;
  uRam00000001834679f0 = (uRam00000001834679f0 ^ uVar5) + 0xf6f7e3ff ^ 0x2d39fd4e5ff7efd9;
  uRam0000000183467ba8 = (uRam0000000183467ba8 * -0x72f242805814b9df ^ uRam00000001834679f0) + uVar5
  ;
  uRam0000000183467ad8 = uRam0000000183467ba8 ^ uRam00000001834679f0;
  uRam0000000183467b38 = 0xf6f7e3ff;
  uRam0000000183467b60 = func_0x000190549a60(uRam0000000183467900 + 0xe00bdde00c8ff ^ 0x8d);
  uRam0000000183467cf8 =
       (uRam0000000183467cf8 ^ uRam0000000183467b60 & 0xfffffffffffffffc) + 0x4aeb1dc7 ^
       0xf346848f247461a;
  uRam0000000183467950 =
       (uRam0000000183467950 * 0x6a291f7bb8fe27ad ^ uRam0000000183467cf8) +
       (uRam0000000183467b60 & 0xfffffffffffffffc);
  uRam0000000183467b50 = 0x4aeb1dc7;
  uVar5 = (uRam0000000183467938 ^ _UNK_182ccb270) + uRam0000000183467ac0 + 0x84222325;
  uVar9 = (uRam0000000183467ac0 ^ _UNK_182ccb278) + uRam0000000183467938 + 0xbffef800;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467938 ^ _UNK_182ccb270;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183467ac0 ^ _UNK_182ccb278;
  uVar5 = func_0x000190549a60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183467938 + 0xbffef800)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam0000000183467ac0 + 0x84222325));
  uVar5 = ((uVar5 ^ 0xbffef800) & 0x7fffffffffffffff) * 0x7290ac00bb3a4997;
  uRam0000000183467960 = (uRam0000000183467960 ^ uVar5) - 0xbffef800 ^ 0x45d79c003af7100e;
  uRam0000000183467a58 = (uRam0000000183467a58 * 0x4eda08042b987847 ^ uRam0000000183467960) + uVar5;
  uRam0000000183467cb0 = uRam0000000183467a58 ^ uRam0000000183467960;
  uRam0000000183467928 = 0x40010800;
  uRam00000001834679f8 = func_0x000190549a60(uRam0000000183467a40 + 0x84ffd4bb0053ff ^ 0xb);
  uVar5 = uRam00000001834679f8 ^ 0xbffefeea;
  uRam0000000183467a90 = uRam0000000183467c70 ^ uVar5 ^ 0xbfff56ea;
  uRam0000000183467900 = (uRam0000000183467900 ^ uVar5) + 0xbfff56ea ^ 0xf6858aaf3dfe6211;
  uRam00000001834679d8 = (uRam00000001834679d8 * 0x1f172d4df840db1b ^ uRam0000000183467900) + uVar5;
  uRam0000000183467940 = uRam00000001834679d8 ^ uRam0000000183467900;
  uRam00000001834679f0 = 0xbfff56ea;
  uRam0000000183467960 = func_0x000190549a60(uRam0000000183467948 ^ 0x1009488ff6436);
  uVar5 = (uRam0000000183467960 ^ 0x3fc720ac) << 0x25 | (uRam0000000183467960 ^ 0x3fc720ac) >> 0x1b;
  uRam0000000183467c98 = (uRam0000000183467c98 ^ uVar5) - 0x3fc720ac ^ 0x6d432881a59b9f1e;
  uRam0000000183467bd0 = (uRam0000000183467bd0 * 0x1a99e2192cd0f01b ^ uRam0000000183467c98) + uVar5;
  uRam0000000183467948 = uRam0000000183467bd0 ^ uRam0000000183467c98;
  uRam00000001834679a8 = 0xc038df54;
  uVar5 = (uRam0000000183467c10 ^ _UNK_182ccb280) + uRam0000000183467b88 + 0x84227dcf;
  uVar9 = (uRam0000000183467b88 ^ _UNK_182ccb288) + uRam0000000183467c10 + 0x3fc720ac;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467c10 ^ _UNK_182ccb280;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183467b88 ^ _UNK_182ccb288;
  uRam00000001834679b8 =
       func_0x000190549a60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183467c10 + 0x3fc720ac) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183467b88 + 0x84227dcf));
  uVar9 = uRam00000001834679b8 * -0x20f0bfc7414142f7;
  uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar9 = (uint)bVar1 + (uint)bVar1 ^ uVar9;
  uRam0000000183467950 = uRam0000000183467c90 ^ uVar9 ^ 0x3fc77f96;
  uRam0000000183467bc8 = (uRam0000000183467bc8 ^ uVar9) + 0x3fc77f96 ^ 0x256a3d2139197f85;
  uRam0000000183467b08 = (uRam0000000183467b08 * -0xa4aecaa056899db ^ uRam0000000183467bc8) + uVar9;
  uRam00000001834679c8 = uRam0000000183467b08 ^ uRam0000000183467bc8;
  uRam0000000183467b18 = 0x3fc77f96;
  uVar5 = (~uRam0000000183467bf8 + 0xc038df55) *
          ((uRam0000000183467cf0 ^ 0xbbe55cb3) +
          (ulonglong)((uint)uRam0000000183467cf0 & 0xbbe55cb3) * 2);
  uVar5 = (uVar5 | uRam0000000183467a00) + (uVar5 & uRam0000000183467a00);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183467bb0 =
       func_0x000190549a60((uVar5 | 0x7bdd83e7) + (ulonglong)((uint)uVar5 & 0x7bdd83e7));
  uVar5 = uRam0000000183467bb0 ^ 0x3fc72082;
  uRam0000000183467cb8 = uRam0000000183467b38 ^ uVar5 ^ 0x100005eea;
  uRam0000000183467c00 = (uRam0000000183467c00 ^ uVar5) + 0x100005eea ^ 0x9546141c734660d4;
  uRam00000001834679b8 = (uRam00000001834679b8 * -0x6f59d1cfcb2aba9 ^ uRam0000000183467c00) + uVar5;
  uRam0000000183467cf0 = uRam00000001834679b8 ^ uRam0000000183467c00;
  uRam0000000183467cc0 = 0x5eea;
  uRam0000000183467cd8 = func_0x000190549a60(uRam0000000183467a58 ^ 0x30008d45003daf);
  uRam0000000183467b58 =
       (uRam0000000183467b58 ^ uRam0000000183467cd8) - 0x9645360 ^ 0x7d1146ec4c9762d7;
  uRam0000000183467a20 =
       (uRam0000000183467a20 * 0x2fc688c761ef3e4b ^ uRam0000000183467b58) + uRam0000000183467cd8;
  uRam00000001834679d0 = uRam0000000183467a20 ^ uRam0000000183467b58;
  uRam0000000183467ad0 = 0xf69baca0;
  uVar5 = (~uRam00000001834679b0 + 0x9645361) *
          ((uRam0000000183467968 ^ 0x84227dcf) +
          (ulonglong)((uint)uRam0000000183467968 & 0x84227dcf) * 2);
  uVar5 = (uVar5 | uRam0000000183467920) + (uVar5 & uRam0000000183467920);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183467bd8 =
       func_0x000190549a60((uVar5 | 0x8d462eaf) + (ulonglong)((uint)uVar5 & 0x8d462eaf));
  uVar5 = uRam0000000183467bd8 << 0x15 | uRam0000000183467bd8 >> 0x2b;
  uRam0000000183467c00 = uRam0000000183467c38 ^ uVar5 ^ 0x964b24a;
  uRam0000000183467c18 = (uRam0000000183467c18 ^ uVar5) + 0x964b24a ^ 0x3e22e12eab8a0aa6;
  uRam0000000183467b20 = (uRam0000000183467b20 * 0x750de4dc9eb4a1df ^ uRam0000000183467c18) + uVar5;
  uRam0000000183467918 = uRam0000000183467b20 ^ uRam0000000183467c18;
  uRam0000000183467cd8 = 0x964b24a;
  uVar5 = (~uRam0000000183467b98 + 0xf69baca1) *
          ((uRam0000000183467c78 ^ 0x8d46916f) +
          (ulonglong)((uint)uRam0000000183467c78 & 0x8d46916f) * 2);
  uVar5 = (uVar5 | uRam00000001834679b0) + (uVar5 & uRam00000001834679b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183467aa0 =
       func_0x000190549a60((uVar5 | 0x7bdd3dcf) + (ulonglong)((uint)uVar5 & 0x7bdd3dcf));
  uVar5 = (ulonglong)(~(uint)uRam00000001834679d8 & 0x964b24a);
  uRam0000000183467c98 = uRam0000000183467980 ^ uVar5 ^ 0x100005eea;
  uRam0000000183467a98 = (uRam0000000183467a98 ^ uVar5) + 0x100005eea ^ 0x908dc3964ca63140;
  uRam0000000183467a60 = (uRam0000000183467a60 * -0x26f383ed1642122f ^ uRam0000000183467a98) + uVar5
  ;
  uRam0000000183467be0 = uRam0000000183467a60 ^ uRam0000000183467a98;
  uRam0000000183467970 = 0x5eea;
  lRam0000000183467ab8 = func_0x000190549a60(uRam0000000183467bf8 + 0xffbd00280affc9ff ^ 0x37);
  uVar5 = (ulonglong)(~(uint)lRam0000000183467ab8 & 0xf6f7e3ff);
  uRam0000000183467cc0 = uRam0000000183467bc0 ^ uVar5 ^ 0x141e301c6;
  uRam0000000183467af0 = (uRam0000000183467af0 ^ uVar5) + 0x141e301c6 ^ 0x4d998e9ad319303f;
  uRam0000000183467998 = (uRam0000000183467998 * -0x6081083119c81c83 ^ uRam0000000183467af0) + uVar5
  ;
  uRam0000000183467c38 = uRam0000000183467998 ^ uRam0000000183467af0;
  uRam0000000183467cd8 = 0x41e301c6;
  uVar5 = (uRam0000000183467c88 ^ _UNK_182ccb290) + uRam0000000183467c70 + 0x72d5c0da;
  uVar9 = (uRam0000000183467c70 ^ _UNK_182ccb298) + uRam0000000183467c88 + 0x4aeb1dc7;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183467c88 ^ _UNK_182ccb290;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183467c70 ^ _UNK_182ccb298;
  uRam0000000183467ba0 =
       func_0x000190549a60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183467c88 + 0x4aeb1dc7) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183467c70 + 0x72d5c0da));
  uVar5 = uRam0000000183467ba0 >> 1 | uRam0000000183467ba0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~((uint)(0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                   >> 0x18) ^ (uint)(uRam0000000183467ba0 >> 0x18)) & 0xf6f7e3ff);
  uRam0000000183467aa0 = (uRam0000000183467aa0 ^ uVar5) + 0x42e301c7 ^ 0x43136d03d1e8083f;
  uRam00000001834679c8 = (uRam00000001834679c8 * -0x94c981f13bf7b77 ^ uRam0000000183467aa0) + uVar5;
  uRam0000000183467c40 = uRam00000001834679c8 ^ uRam0000000183467aa0;
  uRam0000000183467a78 = 0x42e301c7;
  uRam0000000183467b20 = func_0x000190549a60(lRam0000000183467ab8 + 0x74ff7c350021ffU ^ 0xc3);
  uVar5 = uRam0000000183467b20 * 0x38333e098f6ed3cb ^ 0x5eea;
  uRam0000000183467960 = uRam00000001834679b0 ^ uVar5 ^ 0x5eea;
  uRam0000000183467b08 = (uRam0000000183467b08 ^ uVar5) + 0x5eea ^ 0xb4102dc485ef744;
  uRam0000000183467bb0 =
       (uRam0000000183467bb0 * -0x67b7931ffaf80e2f ^ uRam0000000183467b08) + uVar5 ^
       uRam0000000183467b08;
  uRam00000001834679f8 = 0x5eea;
  uRam0000000183467cc8 = func_0x000190549a60(uRam0000000183467900 ^ 0xffdcff8322ffe904);
  uVar5 = uRam0000000183467cc8 - (uRam0000000183467cc8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183467cc8;
  uRam0000000183467a88 = (uRam0000000183467a88 ^ uVar5) + 0x9081c00 ^ 0x1e313d2dfad158c6;
  uRam00000001834679c8 = (uRam00000001834679c8 * -0x20e36a48fba661a3 ^ uRam0000000183467a88) + uVar5
  ;
  uRam0000000183467b40 = uRam00000001834679c8 ^ uRam0000000183467a88;
  uRam0000000183467bf0 = 0x9081c00;
  uVar5 = (~uRam0000000183467bd8 + 0x9081c01) *
          ((uRam0000000183467a78 ^ 0x72d5c0da) +
          (ulonglong)((uint)uRam0000000183467a78 & 0x72d5c0da) * 2);
  uVar5 = (uVar5 | uRam0000000183467a30) + (uVar5 & uRam0000000183467a30);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183467a38 =
       func_0x000190549a60((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uRam0000000183467bf8 =
       uRam0000000183467bf8 ^ uRam0000000183467a38 & 0x1fffffffffffffc0 ^ 0xbe23acb65c803d17;
  uRam0000000183467bc0 =
       (uRam0000000183467bc0 * 0x2a8b1164cb8faff5 ^ uRam0000000183467bf8) +
       (uRam0000000183467a38 & 0x1fffffffffffffc0);
  uRam0000000183467a40 = uRam0000000183467bc0 ^ uRam0000000183467bf8;
  uRam0000000183467be8 = 0;
  uRam00000001834679a0 = func_0x000190549a60(uRam0000000183467918 + 0xff8b00843b0021ff ^ 8);
  uRam00000001834679b0 = uRam0000000183467980 ^ uRam00000001834679a0 ^ 0x5eea;
  uRam0000000183467910 = (uRam0000000183467910 ^ uRam00000001834679a0) + 0x5eea ^ 0x7732c61d1e788006
  ;
  lRam0000000183467ae0 =
       (lRam0000000183467ae0 * 0x74b9635e8da3acdf ^ uRam0000000183467910) + uRam00000001834679a0;
  uRam0000000183467c10 = 0x5eea;
  uVar5 = (~uRam0000000183467bb8 + 0xe6f6232d) *
          ((uRam0000000183467cf8 ^ 0x62d40009) +
          (ulonglong)((uint)uRam0000000183467cf8 & 0x62d40009) * 2);
  uVar5 = (uVar5 | uRam0000000183467b98) + (uVar5 & uRam0000000183467b98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183467c50 =
       func_0x000190549a60((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = uRam0000000183467c50 >> 0x13 & 0xfffffffffffff800;
  uRam0000000183467958 = uRam0000000183467958 ^ uVar5 ^ 0xfc0fcedbda051a5d;
  uRam0000000183467bc0 = (uRam0000000183467bc0 * 0x46057d4fa414dee7 ^ uRam0000000183467958) + uVar5;
  uRam00000001834679e0 = uRam0000000183467bc0 ^ uRam0000000183467958;
  uRam0000000183467b78 = 0;
  uRam0000000183467bd0 = func_0x000190549a60(uRam00000001834679b8 ^ 0xffcd007bcb002146);
  uRam0000000183467950 = uRam00000001834679e0 ^ uRam0000000183467bd0 ^ 0x5eea;
  uRam0000000183467bb0 = (uRam0000000183467bb0 ^ uRam0000000183467bd0) + 0x5eea ^ 0x50c73ffca970659f
  ;
  uRam0000000183467bc0 =
       (uRam0000000183467bc0 * 0x768da35e7077c2cd ^ uRam0000000183467bb0) + uRam0000000183467bd0;
  uRam0000000183467c98 = uRam0000000183467bc0 ^ uRam0000000183467bb0;
  uRam0000000183467a60 = 0x5eea;
  uVar5 = (~uRam0000000183467a88 + 0x5eeb) *
          ((uVar8 ^ 0x84222325 ^ uRam0000000183467a40) +
          (ulonglong)((uint)uRam0000000183467a40 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam0000000183467908) + (uVar5 & uRam0000000183467908);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183467958 =
       func_0x000190549a60((uVar8 ^ 0x84227dcf | uVar5) +
                           (ulonglong)((uint)(uVar8 ^ 0x84227dcf) & (uint)uVar5));
  uVar5 = uVar8 ^ uRam0000000183467958 ^ 0x5eea;
  uRam0000000183467968 = uVar8 ^ 0x5eea;
  uRam0000000183467918 = (uRam0000000183467918 ^ uVar5) + uRam0000000183467968 ^ 0xcb6522fb3ad949b8;
  uRam0000000183467c28 = (uRam0000000183467c28 * -0x122758ad294165cf ^ uRam0000000183467918) + uVar5
  ;
  uRam0000000183467a00 = uRam0000000183467c28 ^ uRam0000000183467918;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba)
      /* POOL[0x3600,0xba]: lC;Ljava/lang/Runnable;)V | RUYIs | sixtwo/J | gu | nXrOu | fS | NvUoI | [Lsixtwo/au; | jYdgZ | sixtwo/au | oh | kJ | (Lsixtwo/lq;)Lsixtwo/Z; | IzFhM | kK | (F)Lsixtwo/Z; | kL | (I)Lsixtwo/Z; | sixtwo/rj | XzDkv | Lsixtwo/rj; */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001905455a7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cc9888 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/J; gy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 190549af0, runtime 6ffff8159af0) =====

void FUN_190549af0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000190549b2c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ccb2e0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/J; gz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 19054a9e0, runtime 6ffff815a9e0) =====

void FUN_19054a9e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019054aa5d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ccb820 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x104f43b8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f43b8(void)

{
  FUN_190ddfc90();
  (*_DAT_182cb8208)();
  return;
}


// ----- block @ rva 0x104f44a6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1904f44a6(void)

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


// ----- block @ rva 0x104f4698 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f4698(void)

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


// ----- block @ rva 0x104f4a13 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f4a13(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_182cb8428)();
  return;
}


// ----- block @ rva 0x104f4e96 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f4e96(void)

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


// ----- block @ rva 0x104f4ed7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f4ed7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_182cb8498)();
  return;
}


// ----- block @ rva 0x104f53cf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f53cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_182cb86e8)();
  return;
}


// ----- block @ rva 0x104f579a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f579a(void)

{
  FUN_190dd72e0();
  (*_DAT_182cb84e8)();
  return;
}


// ----- block @ rva 0x104f587d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f587d(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(unaff_RSI + JNI->NewGlobalRef /*0xa8*/))();
  FUN_190dcd3d0(0x54,uVar1);
  (*_DAT_182cb81b8)();
  return;
}


// ----- block @ rva 0x104f58c8 -----

void FUN_1904f58c8(void)

{
  return;
}


// ----- block @ rva 0x104f58dc -----

void FUN_1904f58dc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x104f5a94 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904f5a94(void)

{
  FUN_190ddce00();
  (*_DAT_182cb8a08)();
  return;
}


// ----- block @ rva 0x104f99cf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1904f99cf(void)

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


// ----- block @ rva 0x104fa712 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1904fa712(void)

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


// ----- block @ rva 0x104fb04d -----

void FUN_1904fb04d(void)

{
  return;
}


// ----- block @ rva 0x104fb6dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904fb6dc(void)

{
  FUN_190dd9df0();
  (*_DAT_182cba588)();
  return;
}


// ----- block @ rva 0x104fdd7b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1904fdd7b(void)

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


// ----- block @ rva 0x104fe445 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1904fe445(void)

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


// ----- block @ rva 0x104fedd4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1904fedd4(void)

{
  FUN_190ddfc90();
  (*_DAT_182cbb298)();
  return;
}


// ----- block @ rva 0x104ff795 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1904ff795(void)

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


// ----- block @ rva 0x10500144 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190500144(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_182cbaff8)();
  return;
}


// ----- block @ rva 0x10500155 -----

void FUN_190500155(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x105002a8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905002a8(void)

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


// ----- block @ rva 0x105002e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905002e1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cbc298)();
  return;
}


// ----- block @ rva 0x10500306 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190500306(void)

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


// ----- block @ rva 0x1050031b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19050031b(void)

{
  FUN_190dd72e0();
  (*_DAT_182cbc2e8)();
  return;
}


// ----- block @ rva 0x10500343 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190500343(void)

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


// ----- block @ rva 0x10500364 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190500364(void)

{
  FUN_190dd9df0();
  (*_DAT_182cbc2d8)();
  return;
}


// ----- block @ rva 0x10500397 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190500397(void)

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


// ----- block @ rva 0x105003bb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905003bb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetIntField /*0x368*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cbc2f8)();
  return;
}


// ----- block @ rva 0x105003f3 -----

void FUN_1905003f3(void)

{
  return;
}


// ----- block @ rva 0x105003fd -----

void FUN_1905003fd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x1050057e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19050057e(void)

{
  FUN_190ddce00();
  (*_DAT_182cbfe78)();
  return;
}


// ----- block @ rva 0x10503c2a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190503c2a(void)

{
  longlong in_stack_00000068;
  
  switch(in_stack_00000068 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10509753 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190509753(void)

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


// ----- block @ rva 0x1050a455 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19050a455(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10510173 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190510173(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190dd9df0(in_stack_00000038,&stack0x00000048,*_DAT_18301ee50 + 0x3800,*_DAT_18301ee50 + 0x2b4f
                ,0x1ad);
  (*_DAT_182cbcba8)();
  return;
}


// ----- block @ rva 0x1051042f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19051042f(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182cc0c88)();
  return;
}


// ----- block @ rva 0x105104ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1905104ce(void)

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


// ----- block @ rva 0x10510701 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190510701(void)

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


// ----- block @ rva 0x10511968 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190511968(void)

{
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50,0);
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
  (*_DAT_182cc0038)();
  return;
}


// ----- block @ rva 0x10511b20 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190511b20(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->Throw /*0x68*/))();
  (*_DAT_182cc0e08)();
  return;
}


// ----- block @ rva 0x10518a4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518a4c(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->CallVoidMethodA /*0x1f8*/))(in_stack_00000038);
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
  (*_DAT_182cc0e98)();
  return;
}


// ----- block @ rva 0x10518a77 -----

void FUN_190518a77(void)

{
  return;
}


// ----- block @ rva 0x10518cbd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518cbd(void)

{
  FUN_190ddce00();
  (*_DAT_182cc3ca8)();
  return;
}


// ----- block @ rva 0x10518cf0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190518cf0(void)

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


// ----- block @ rva 0x10518d14 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190518d14(void)

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


// ----- block @ rva 0x10518d35 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518d35(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetStaticObjectField /*0x4d0*/))();
  (*_DAT_182cc3c98)();
  return;
}


// ----- block @ rva 0x10518d52 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518d52(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cc3c88)();
  return;
}


// ----- block @ rva 0x10518d64 -----

void FUN_190518d64(void)

{
  return;
}


// ----- block @ rva 0x10518d6c -----

void FUN_190518d6c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x10518d9a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518d9a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182cc3ce8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x10518da6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190518da6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10518dc3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518dc3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_182cc3cd8)();
  return;
}


// ----- block @ rva 0x10518dcc -----

void FUN_190518dcc(void)

{
  return;
}


// ----- block @ rva 0x10518e39 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518e39(void)

{
  FUN_190ddce00();
  (*_DAT_182cc3d38)();
  return;
}


// ----- block @ rva 0x10518e6c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190518e6c(void)

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


// ----- block @ rva 0x10518e90 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190518e90(void)

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


// ----- block @ rva 0x10518eb1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518eb1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_182cc3d28)();
  return;
}


// ----- block @ rva 0x10518ecb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518ecb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cc3d48)();
  return;
}


// ----- block @ rva 0x10518eeb -----

void FUN_190518eeb(void)

{
  return;
}


// ----- block @ rva 0x10518ef2 -----

void FUN_190518ef2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x10518f2a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190518f2a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182cc3d68)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x10518f36 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190518f36(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10518f5d -----

undefined4 * FUN_190518f5d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x105190b6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001905190ed */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1905190b6(void)

{
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x1051910b -----

void FUN_19051910b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar1 = (**(code **)(unaff_R12 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
                    /* WARNING: Could not recover jumptable at 0x000190519141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182cc4280 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x10519210 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190519210(void)

{
  undefined1 auVar1 [16];
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong lVar2;
  longlong in_R9;
  ulonglong unaff_R12;
  ulonglong unaff_R14;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint uVar8;
  uint unaff_XMM15_Da;
  
  uVar4 = (_DAT_183467158 ^ _DAT_182cc4c00) + _DAT_183466fa0 + 0x8422231e;
  uVar6 = (_DAT_183466fa0 ^ _UNK_182cc4c08) + _DAT_183467158 + 0x37;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183467158 ^ _DAT_182cc4c00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183466fa0 ^ _UNK_182cc4c08;
  _DAT_183467248 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183467158 + 0x37) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183466fa0 + 0x8422231e));
  _DAT_183466f90 = (_DAT_183466f90 ^ _DAT_183467248 ^ 0x37) + 0x3f ^ 0x768f6e741b8cdd8e;
  _DAT_183467198 = (_DAT_183467198 * -0x778c2c61ba97ffd9 ^ _DAT_183466f90) + (_DAT_183467248 ^ 0x37)
  ;
  _DAT_183467288 = _DAT_183467198 ^ _DAT_183466f90;
  _DAT_183467150 = 0x3f;
  uVar4 = (~_DAT_183466f40 + 0x4c) *
          ((_DAT_183467190 ^ 0x842223b7) + (ulonglong)((uint)_DAT_183467190 & 0x842223b7) * 2);
  uVar4 = (uVar4 | _DAT_183467100) + (uVar4 & _DAT_183467100);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183466f98 = func_0x0001905434b0((uVar4 | 0x842223fc) + (ulonglong)((uint)uVar4 & 0x842223fc))
  ;
  uVar4 = (_DAT_183466f98 << 0x15 | _DAT_183466f98 >> 0x2b) * -0x6ac995597de11d2f;
  _DAT_183467078 = (_DAT_183467078 ^ uVar4) + 0xd9 ^ 0xb189484e7df71d04;
  _DAT_183467140 = (_DAT_183467140 * -0x1ab3f6999302bda9 ^ _DAT_183467078) + uVar4;
  _DAT_1834672d8 = _DAT_183467140 ^ _DAT_183467078;
  _DAT_1834671e0 = 0xd9;
  uVar4 = (_DAT_182cc4c10 ^ 0xd9) + _DAT_183467100 + unaff_R12;
  uVar6 = (_DAT_183467100 ^ _UNK_182cc4c18) + 0x17f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_182cc4c10 ^ 0xd9;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183467100 ^ _UNK_182cc4c18;
  _DAT_183467050 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - 0x17f ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183467100 + unaff_R12));
  uVar4 = _DAT_183467050 & 0x1fffffffffffff;
  _DAT_1834671c8 = _DAT_183466fa8 ^ uVar4;
  _DAT_183466f18 = _DAT_1834671c8 ^ 0xd6;
  _DAT_183467010 = (_DAT_183467010 ^ uVar4) + 0xd6 ^ 0x47a7770554888096;
  _DAT_183467120 = (_DAT_183467120 * -0x624699224b22c9c9 ^ _DAT_183467010) + uVar4;
  _DAT_183467178 = _DAT_183467120 ^ _DAT_183467010;
  _DAT_183467148 = 0xd6;
  uVar4 = (_DAT_183467290 ^ _DAT_181960820) + _DAT_183467280 + 0x842223f3;
  uVar6 = (_DAT_183467280 ^ _UNK_181960828) + _DAT_183467290 + 0x5a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183467290 ^ _DAT_181960820;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183467280 ^ _UNK_181960828;
  _DAT_183467128 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183467290 + 0x5a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183467280 + 0x842223f3));
  uVar4 = _DAT_183467128 ^ 0x4bea;
  _DAT_183466fb0 = _DAT_183467128 ^ uVar4 ^ 0x130;
  _DAT_183467078 = (_DAT_183467078 ^ uVar4) + 0x130 ^ 0xa286d53b3c5e808b;
  _DAT_1834670f8 = (_DAT_1834670f8 * 0xeaed79ead17538f ^ _DAT_183467078) + uVar4;
  _DAT_1834672e8 = _DAT_1834670f8 ^ _DAT_183467078;
  _DAT_183466fd8 = 0x30;
  uVar4 = (~_DAT_183466fa8 + 0x39) *
          ((_DAT_183466f98 ^ unaff_R12) + (ulonglong)((uint)_DAT_183466f98 & 0x84222315) * 2);
  uVar4 = (uVar4 | _DAT_183467000) + (uVar4 & _DAT_183467000);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1834670b0 = func_0x0001905434b0((uVar4 | 0x8422232d) + (ulonglong)((uint)uVar4 & 0x8422232d))
  ;
  uVar4 = ((ulonglong)((uint)_DAT_1834670b0 ^ 0x38) << 0x36 | _DAT_1834670b0 >> 10) ^ 0x30;
  _DAT_183467188 = _DAT_183467130 ^ uVar4 ^ 0x68;
  _DAT_183467108 = (_DAT_183467108 ^ uVar4) + 0x68 ^ 0x6a46214189b5a4f8;
  _DAT_183467048 = (_DAT_183467048 * -0x11cb7fb9191469e5 ^ _DAT_183467108) + uVar4;
  _DAT_183467200 = _DAT_183467048 ^ _DAT_183467108;
  _DAT_183467038 = 0x68;
  uVar4 = (_DAT_183467180 ^ _DAT_1808f6b50) + _DAT_183467270 + 0x8422234d;
  uVar6 = (_DAT_183467270 ^ _UNK_1808f6b58) + _DAT_183467180 + 200;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183467180 ^ _DAT_1808f6b50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183467270 ^ _UNK_1808f6b58;
  _DAT_183467118 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183467180 + 200) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183467270 + 0x8422234d));
  _DAT_183467070 = _DAT_183467260 ^ _DAT_183467118 ^ 0x130;
  _DAT_183466f48 = (_DAT_183466f48 ^ _DAT_183467118) + 0x130 ^ 0x2254e2b976c45fba;
  _DAT_183467158 = (_DAT_183467158 * 0x381e6503757f6851 ^ _DAT_183466f48) + _DAT_183467118;
  _DAT_183467168 = _DAT_183467158 ^ _DAT_183466f48;
  _DAT_1834672e8 = 0x30;
  uVar4 = ((_DAT_183467148 ^ unaff_R14) + (ulonglong)((uint)_DAT_183467148 & 0x84222325) * 2) *
          -0x20;
  uVar4 = (uVar4 | _DAT_183467158) + (uVar4 & _DAT_183467158);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1834671f0 = func_0x0001905434b0((uVar4 | 0x84222335) + (ulonglong)((uint)uVar4 & 0x84222335))
  ;
  _DAT_1834671b0 = (_DAT_1834671b0 ^ _DAT_1834671f0) - 0x10 ^ 0x9445ff6115d2feab;
  _DAT_1834670c8 = (_DAT_1834670c8 * -0x417a191491c08d97 ^ _DAT_1834671b0) + _DAT_1834671f0;
  _DAT_183467210 = _DAT_1834670c8 ^ _DAT_1834671b0;
  _DAT_183467030 = 0xf0;
  uVar4 = (_DAT_183466fd0 ^ _DAT_1801fa0c0) + _DAT_183467098 + unaff_R12;
  uVar6 = (_DAT_183467098 ^ _UNK_1801fa0c8) + _DAT_183466fd0 + 0x10;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183466fd0 ^ _DAT_1801fa0c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183467098 ^ _UNK_1801fa0c8;
  _DAT_1834670f0 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183466fd0 + 0x10) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183467098 + unaff_R12));
  uVar4 = (_DAT_1834670f0 ^ 0x300) * 0x2003d923c84daad1;
  _DAT_1834672f8 = _DAT_183466fb8 ^ uVar4 ^ 0x40;
  _DAT_183466fc8 = (_DAT_183466fc8 ^ uVar4) + 0x40 ^ 0x2ae3cd5e0b1b0dd8;
  _DAT_1834672a0 = (_DAT_1834672a0 * 0x3de50d4a0e4ca723 ^ _DAT_183466fc8) + uVar4;
  _DAT_1834670a8 = _DAT_1834672a0 ^ _DAT_183466fc8;
  _DAT_183466fa8 = 0x40;
  uVar4 = (~_DAT_183466f90 + 0xf1) *
          ((_DAT_183467280 ^ 0x84222365) + (ulonglong)((uint)_DAT_183467280 & 0x84222365) * 2);
  uVar4 = (uVar4 | _DAT_183466fe8) + (uVar4 & _DAT_183466fe8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183467148 = func_0x0001905434b0((uVar4 | 0x84222395) + (ulonglong)((uint)uVar4 & 0x84222395))
  ;
  _DAT_1834671d8 = _DAT_183467170 ^ _DAT_183467148 ^ 0x130;
  _DAT_1834670a8 = (_DAT_1834670a8 ^ _DAT_183467148) + 0x130 ^ 0x7df650d64d7ab803;
  _DAT_183467138 = (_DAT_183467138 * 0x4537d1fcf43acfaf ^ _DAT_1834670a8) + _DAT_183467148;
  _DAT_183466f00 = _DAT_183467138 ^ _DAT_1834670a8;
  _DAT_183467228 = 0x30;
  _DAT_183467028 = func_0x0001905434b0(_DAT_183466f80 + 0xffdcff83beffe1ff ^ 0x1c);
  uVar4 = (ulonglong)(((uint)_DAT_183467028 & 0x7fffffff ^ 0x26) & 0x3f);
  _DAT_183466ff0 = _DAT_183467250 ^ uVar4 ^ 0x118;
  _DAT_183466f98 = (_DAT_183466f98 ^ uVar4) + 0x118 ^ 0x862d2b3c2b8b4937;
  _DAT_183466fd0 = (_DAT_183466fd0 * -0x44edf80b9c6ead13 ^ _DAT_183466f98) + uVar4;
  _DAT_183466fe0 = _DAT_183466fd0 ^ _DAT_183466f98;
  _DAT_183467158 = 0x18;
  uVar4 = (~_DAT_1834670f0 + 0xda) *
          ((_DAT_183467248 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183467248 & 0x8422231a) * 2);
  uVar4 = (uVar4 | _DAT_183467098) + (uVar4 & _DAT_183467098);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183467060 = func_0x0001905434b0((uVar4 | unaff_RBX) + (ulonglong)((uint)uVar4 & 0x842223c3));
  _DAT_1834671d0 =
       (_DAT_1834671d0 ^ _DAT_183467060 & 0xffffffffffe00000) + 0x19 ^ 0x180ad8534869eb9d;
  _DAT_1834672a8 =
       (_DAT_1834672a8 * 0x1298895582839f53 ^ _DAT_1834671d0) +
       (_DAT_183467060 & 0xffffffffffe00000);
  _DAT_183467270 = _DAT_1834672a8 ^ _DAT_1834671d0;
  _DAT_183466fc0 = 0x19;
  uVar4 = (~_DAT_183467278 + 0x33) *
          ((_DAT_183467058 ^ unaff_RBX) + (ulonglong)((uint)_DAT_183467058 & 0x842223c3) * 2);
  uVar4 = (uVar4 | _DAT_183467238) + (uVar4 & _DAT_183467238);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183467178 = func_0x0001905434b0((uVar4 | 0x842223f1) + (ulonglong)((uint)uVar4 & 0x842223f1))
  ;
  uVar4 = _DAT_183467178 ^ 0x2cec;
  _DAT_183467130 = _DAT_1834670a8 ^ uVar4 ^ 0x118;
  _DAT_183467060 = (_DAT_183467060 ^ uVar4) + 0x118 ^ 0x751d8d50bb9808db;
  _DAT_183466fd0 = (_DAT_183466fd0 * -0x3c6df55686657a3d ^ _DAT_183467060) + uVar4;
  _DAT_1834671f8 = _DAT_183466fd0 ^ _DAT_183467060;
  _DAT_183467208 = 0x18;
  uVar4 = (_DAT_183467118 ^ _DAT_180a9fdc0) + _DAT_183466f68 + 0x8422233d;
  uVar6 = (_DAT_183466f68 ^ _UNK_180a9fdc8) + _DAT_183467118 + 0x18;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183467118 ^ _DAT_180a9fdc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183466f68 ^ _UNK_180a9fdc8;
  _DAT_1834670f8 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183467118 + 0x18) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183466f68 + 0x8422233d));
  _DAT_183467268 = _DAT_1834670f8 & 0x7ffffffffffffc00;
  _DAT_1834670e8 = _DAT_1834670e8 ^ _DAT_183467268 ^ 0x90c7810746e7f29f;
  _DAT_183466ff8 = (_DAT_183466ff8 * 0x21c53462283fa01d ^ _DAT_1834670e8) + _DAT_183467268;
  _DAT_183467080 = _DAT_183466ff8 ^ _DAT_1834670e8;
  _DAT_183466f10 = 0;
  _DAT_183467280 = func_0x0001905434b0(_DAT_183466f60 + 0x20ff84da001dffU ^ 0xbc);
  _DAT_183467120 = _DAT_183467120 ^ _DAT_183467280 ^ 0x657ba38e3c035f0;
  _DAT_183467158 = (_DAT_183467158 * -0x47031b81166794ef ^ _DAT_183467120) + _DAT_183467280;
  _DAT_183466fc0 = _DAT_183467158 ^ _DAT_183467120;
  _DAT_183467030 = _DAT_1834670d0;
  _DAT_183467148 = 0;
  uVar4 = (_DAT_183467210 ^ unaff_R12) + _DAT_183466f70 + unaff_R12;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183467210 ^ unaff_R12;
  uVar6 = ((_DAT_183466f70 + _DAT_183467210) * 0x2000 | _DAT_183466f70 + _DAT_183467210 >> 0x33) ^
          _DAT_183466f70;
  _DAT_183467140 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183467210 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183466f70 + unaff_R12));
  uVar4 = _DAT_183467140 ^ 0x30;
  _DAT_1834670e8 = _DAT_183467090 ^ uVar4 ^ 0x30;
  _DAT_1834671e8 = (_DAT_1834671e8 ^ uVar4) + 0x30 ^ 0x3a07b5562429b3cf;
  _DAT_183467218 = (_DAT_183467218 * -0x1ba963e1711ebb57 ^ _DAT_1834671e8) + uVar4;
  _DAT_1834671c8 = _DAT_183467218 ^ _DAT_1834671e8;
  _DAT_183467290 = 0x30;
  uVar4 = (~_DAT_183467278 + 0x3c) *
          ((_DAT_183466f58 ^ 0x8422231e) + (ulonglong)((uint)_DAT_183466f58 & 0x8422231e) * 2);
  uVar4 = (uVar4 | _DAT_183466f78) + (uVar4 & _DAT_183466f78);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183467200 = func_0x0001905434b0((uVar4 | unaff_R14) + (ulonglong)((uint)uVar4 & 0x84222325));
  _DAT_183467048 = _DAT_183467048 ^ _DAT_183467200 & 0x7ffffffffffc0000 ^ 0xa7fd4ef79901cce8;
  _DAT_183467170 =
       (_DAT_183467170 * -0x7e960dc65d179f1f ^ _DAT_183467048) +
       (_DAT_183467200 & 0x7ffffffffffc0000);
  _DAT_1834671c0 = _DAT_183467170 ^ _DAT_183467048;
  _DAT_183467258 = 0;
  uVar4 = ((_DAT_1834671c0 ^ unaff_R12) + (ulonglong)((uint)_DAT_1834671c0 & 0x84222315) * 2) *
          -_DAT_183467190;
  uVar4 = (uVar4 | _DAT_183467018) + (uVar4 & _DAT_183467018);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1834670e8 = func_0x0001905434b0((uVar4 | unaff_R12) + (ulonglong)((uint)uVar4 & 0x84222315));
  uVar4 = _DAT_1834670e8 & 0x1ffffffff ^ 0x30;
  _DAT_1834670f8 = _DAT_1834671c8 ^ uVar4 ^ 0x30;
  _DAT_183467238 = (_DAT_183467238 ^ uVar4) + 0x30 ^ 0xfd6aa36e9305d15a;
  _DAT_1834671d8 = (_DAT_1834671d8 * 0x64128b6ce87ca803 ^ _DAT_183467238) + uVar4;
  _DAT_183466f80 = _DAT_1834671d8 ^ _DAT_183467238;
  _DAT_1834672d0 = 0x30;
  uVar4 = (ulonglong)(unaff_ESI + (uint)((ulonglong)unaff_ESI * in_R9 >> 0x23) * -10 & 0xff);
  uVar6 = uVar4 ^ unaff_R14 ^ _DAT_183467078;
  lVar2 = (uVar4 ^ unaff_R14) + _DAT_183466fd8;
  uVar5 = uVar6 + lVar2;
  uVar7 = (_DAT_183466fd8 ^ 0x30) + _DAT_183467078 + 0x30;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183466fd8 ^ 0x30;
  _DAT_183466f38 =
       func_0x0001905434b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183467078 + 0x30) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar2);
  uVar6 = uVar4 | 0x30;
  uVar4 = _DAT_183466f38 ^ uVar6 ^ uVar4;
  _DAT_183466f90 = (_DAT_183466f90 ^ uVar4) + uVar6 ^ 0xb7fc5932851f4441;
  _DAT_1834671d8 = (_DAT_1834671d8 * 0x6c1394f2fe56a3a1 ^ _DAT_183466f90) + uVar4;
  _DAT_183466f08 = _DAT_1834671d8 ^ _DAT_183466f90;
  uVar4 = in_RAX ^ unaff_R14 ^ _DAT_183467148;
  lVar2 = (in_RAX ^ unaff_R14) + _DAT_183467028;
  uVar5 = uVar4 + lVar2;
  uVar7 = ~_DAT_183467028 + (_DAT_183467148 - 1);
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ ~_DAT_183467028;
  _DAT_183467160 = uVar6;
  _DAT_183467018 =
       func_0x0001905434b0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183467148 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  uVar8 = (uint)(in_RAX >> 0x20);
  auVar1._8_4_ = (int)in_RAX;
  auVar1._0_8_ = in_RAX;
  auVar1._12_4_ = uVar8;
  uVar5 = SUB168(auVar1 ^ _DAT_18001a710,0);
  uVar3 = SUB164(auVar1 ^ _DAT_18001a710,0);
  lVar2 = ((in_RAX & 0xffffffff) * (ulonglong)_DAT_182cc4c90 +
           (ulonglong)uVar8 * (ulonglong)unaff_XMM9_Da << 0x20) +
          (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM9_Da;
  uVar4 = _DAT_183467018 & 0x7ffffffffffffff8;
  _DAT_183467070 =
       ((((in_RAX & 0xffffffff) * (ulonglong)_DAT_182cc4c50 +
          (in_RAX >> 0x20) * (ulonglong)_DAT_182cc4c40 << 0x20) +
         (in_RAX & 0xffffffff) * (ulonglong)_DAT_182cc4c40 +
         ((in_RAX & 0xffffffff) * (ulonglong)_DAT_182cc4c30 +
          (in_RAX >> 0x20) * (ulonglong)_DAT_182cc4c20 << 0x20) +
         (in_RAX & 0xffffffff) * (ulonglong)_DAT_182cc4c20 + lVar2 +
        (ulonglong)uVar3 * (ulonglong)unaff_XMM7_Da +
        ((ulonglong)uVar3 * (ulonglong)_DAT_182cc4c70 + (uVar5 >> 0x20) * (ulonglong)unaff_XMM7_Da
        << 0x20)) -
       ((ulonglong)uVar3 * (ulonglong)unaff_XMM8_Da +
        ((ulonglong)uVar3 * (ulonglong)_DAT_182cc4d10 + (uVar5 >> 0x20) * (ulonglong)unaff_XMM8_Da
        << 0x20) + lVar2 +
       (ulonglong)uVar3 * (ulonglong)unaff_XMM10_Da +
       ((ulonglong)uVar3 * (ulonglong)_DAT_182cc4d00 + (uVar5 >> 0x20) * (ulonglong)unaff_XMM10_Da
       << 0x20) +
       ((in_RAX & 0xffffffff) * (ulonglong)_DAT_182cc4cd0 +
        (ulonglong)uVar8 * (ulonglong)unaff_XMM15_Da << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM15_Da +
       ((in_RAX & 0xffffffff) * (ulonglong)_DAT_182cc4cb0 +
        (ulonglong)uVar8 * (ulonglong)unaff_XMM11_Da << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM11_Da)) + 0xb6c9689d8fdb6c33;
  _DAT_183466fb8 = _DAT_1834670a8 ^ uVar4 ^ _DAT_183467070;
  _DAT_1834671e8 = (_DAT_1834671e8 ^ uVar4) + _DAT_183467070 ^ 0x33d1bb471b4e275e;
  _DAT_1834671b0 = (_DAT_1834671b0 * 0xa1c53a86082cc7b ^ _DAT_1834671e8) + uVar4;
  _DAT_183466fc0 = _DAT_1834671b0 ^ _DAT_1834671e8;
  *(char *)(unaff_RBP + -0x50 + _DAT_183467070) = (char)uVar6;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10521b66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_190521b66(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  uint unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  
  _DAT_183466fc8 = func_0x0001905434b0(_DAT_183466fd0 + 0x5d1745ff5413fc5eU ^ 8);
  _DAT_1834670c8 =
       (_DAT_1834670c8 ^ _DAT_183466fc8 ^ 0x4740179521ba8335) + 0xa3cafc5f8b264848 ^
       0xb3336510f4fdb471;
  _DAT_183467050 =
       (_DAT_183467050 * -0x5069d06041f4b ^ _DAT_1834670c8) + (_DAT_183466fc8 ^ 0x4740179521ba8335);
  _DAT_183467148 = _DAT_183467050 ^ _DAT_1834670c8;
  _DAT_183467248 = _DAT_183466f10 ^ 0xa3cafc5f8b264848;
  _DAT_183467040 = -0x5c3503a074d9b7b8;
  uVar5 = (_DAT_1834671c8 ^ _DAT_182cc5340) + _DAT_1834670e0 + 0x84222325;
  uVar6 = (_DAT_1834670e0 ^ _UNK_182cc5348) + _DAT_1834671c8 + 0x9f3ee9824930e220;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834671c8 ^ _DAT_182cc5340;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1834670e0 ^ _UNK_182cc5348;
  _DAT_183467230 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1834671c8 + 0x9f3ee9824930e220) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1834670e0 + 0x84222325));
  _DAT_183467248 =
       (_DAT_183467248 ^ _DAT_183467230 & 0xffffffffffff8000) + 0x60c1167db6cf1de0 ^
       0x5ca16a5d8f9547d4;
  _DAT_183467078 =
       (_DAT_183467078 * 0x40b7d96e7094b37d ^ _DAT_183467248) +
       (_DAT_183467230 & 0xffffffffffff8000);
  _DAT_183467220 = _DAT_183467078 ^ _DAT_183467248;
  _DAT_183467290 = 0x60c1167db6cf1de0;
  _DAT_183467138 = func_0x0001905434b0(_DAT_183466f30 ^ 0x944d10f0baced6d2);
  uVar5 = (_DAT_183467138 ^ 0xdc7153f4b7dc5060) * -0x262494f4dfed025;
  _DAT_183467100 = (_DAT_183467100 ^ uVar5) + 0x238eac0b4823afa0 ^ 0x35158ad1b1837066;
  _DAT_1834671f8 = (_DAT_1834671f8 * -0x3c1e064107f04a75 ^ _DAT_183467100) + uVar5;
  _DAT_183466f28 = _DAT_1834671f8 ^ _DAT_183467100;
  _DAT_183466f48 = 0x238eac0b4823afa0;
  uVar5 = (_DAT_183467210 ^ _DAT_182cc5350) + _DAT_183466f20 + 0x8422230d;
  uVar6 = (_DAT_183466f20 ^ _UNK_182cc5358) + _DAT_183467210 + 0xdc7153f4b7dc5060;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183467210 ^ _DAT_182cc5350;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183466f20 ^ _UNK_182cc5358;
  _DAT_183466f38 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183467210 + 0xdc7153f4b7dc5060) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183466f20 + 0x8422230d));
  uVar5 = _DAT_183466f38 >> 1 | _DAT_183466f38;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_RDI >> 0x38)) * 0x80 ^
          _DAT_183466f38;
  _DAT_1834672b0 = _DAT_183467060 ^ uVar5 ^ 0xdc7153f4b7dc5088;
  _DAT_183466f18 = (_DAT_183466f18 ^ uVar5) + 0xdc7153f4b7dc5088 ^ 0x6a1d66bc06eacc4f;
  _DAT_1834670c8 = (_DAT_1834670c8 * -0x6f88d7a544d26c31 ^ _DAT_183466f18) + uVar5;
  _DAT_183467188 = _DAT_1834670c8 ^ _DAT_183466f18;
  _DAT_183467030 = 0xdc7153f4b7dc5088;
  _DAT_183466fe0 = func_0x0001905434b0(_DAT_183467070 + 0x6b3b1b5b035fd4dc ^ 0xaf);
  _DAT_183466fc0 = _DAT_183466fc8 ^ _DAT_183466fe0 ^ 0x28;
  _DAT_183467208 = (_DAT_183467208 ^ _DAT_183466fe0) + 0x28 ^ 0x22c3ef0be6bca968;
  _DAT_183467158 = (_DAT_183467158 * 0x68f44cd7d3b46bf ^ _DAT_183467208) + _DAT_183466fe0;
  _DAT_183467008 = _DAT_183467158 ^ _DAT_183467208;
  _DAT_1834671c0 = 0x28;
  uVar5 = (_DAT_183467250 ^ _DAT_182cc5360) + _DAT_1834672a0 + 0x84222325;
  uVar6 = (_DAT_1834672a0 ^ _UNK_182cc5368) + _DAT_183467250 + 0xb08516bdd55cd5ca;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183467250 ^ _DAT_182cc5360;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1834672a0 ^ _UNK_182cc5368;
  _DAT_183466f78 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183467250 + 0xb08516bdd55cd5ca) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1834672a0 + 0x84222325));
  _DAT_183467250 =
       (_DAT_183467250 ^ _DAT_183466f78 ^ 0xb08516bdd55cd5ca) + 0x4f7ae9422aa32a36 ^
       0xe616f65b4442cf1e;
  _DAT_183467070 =
       (_DAT_183467070 * -0x78df124839ace31f ^ _DAT_183467250) +
       (_DAT_183466f78 ^ 0xb08516bdd55cd5ca);
  _DAT_183467058 = _DAT_183467070 ^ _DAT_183467250;
  _DAT_1834672d0 = 0x4f7ae9422aa32a36;
  uVar5 = (~_DAT_183466fb0 + 0xb08516bdd55cd5cb) *
          ((_DAT_1834670a0 ^ 0x8422230d) + (ulonglong)((uint)_DAT_1834670a0 & 0x8422230d) * 2);
  uVar5 = (uVar5 | _DAT_183466f10) + (uVar5 & _DAT_183466f10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1834672a8 = func_0x0001905434b0((uVar5 | 0xb08516bd517ef6c7) + (uVar5 & 0xb08516bd517ef6c7));
  uVar5 = _DAT_1834672a8 >> 1 | _DAT_1834672a8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_RDI >> 0x38)) * 0x80 ^
          _DAT_1834672a8;
  _DAT_1834671b0 = _DAT_183467288 ^ uVar5 ^ 0xb08516bdd55cd5f2;
  _DAT_183466f00 = (_DAT_183466f00 ^ uVar5) + 0xb08516bdd55cd5f2 ^ 0xebe47d3fc056c88a;
  _DAT_183466f20 = (_DAT_183466f20 * -0x7075561248865655 ^ _DAT_183466f00) + uVar5;
  _DAT_183467240 = _DAT_183466f20 ^ _DAT_183466f00;
  _DAT_183467278 = 0xb08516bdd55cd5f2;
  uVar5 = (~_DAT_183466f38 + 0x4f7ae9422aa32a37) *
          ((_DAT_183467150 ^ 0xb08516bd517ef6d7) + (_DAT_183467150 & 0x308516bd517ef6d7) * 2);
  uVar5 = (uVar5 | _DAT_1834672b0) + (uVar5 & _DAT_1834672b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1834670b0 = func_0x0001905434b0((uVar5 | 0xffffffff7bdddce1) + (uVar5 & 0xffffffff7bdddce1));
  uVar5 = _DAT_1834670b0 & 0x7fffffffffffffff;
  _DAT_1834671a8 = _DAT_183467110 ^ uVar5 ^ 0x28;
  _DAT_1834672a0 = (_DAT_1834672a0 ^ uVar5) + 0x28 ^ 0x57f20391c960d2f0;
  _DAT_183467218 = (_DAT_183467218 * 0xadd8da8fa4428b ^ _DAT_1834672a0) + uVar5;
  _DAT_183467208 = _DAT_183467218 ^ _DAT_1834672a0;
  _DAT_183467058 = 0x28;
  uVar5 = (~_DAT_1834672b0 + 0xa3cafc5f8b264849) *
          ((_DAT_183466f00 ^ 0xf655f77b73ed59cf) + (_DAT_183466f00 & 0x7655f77b73ed59cf) * 2);
  uVar5 = (uVar5 | _DAT_183466f58) + (uVar5 & _DAT_183466f58);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183466fa0 = func_0x0001905434b0((uVar5 | 0x559f0b24f8cb1187) + (uVar5 & 0x559f0b24f8cb1187));
  _DAT_183467228 =
       (_DAT_183467228 ^ _DAT_183466fa0 ^ 0xf655f77bf7cf7aea) + 0x559f0b247ce932a2 ^
       0xacb7f46b8d89e910;
  _DAT_1834671f8 =
       (_DAT_1834671f8 * -0x12474889b1f87851 ^ _DAT_183467228) +
       (_DAT_183466fa0 ^ 0xf655f77bf7cf7aea);
  _DAT_1834672b8 = _DAT_1834671f8 ^ _DAT_183467228;
  _DAT_183466f30 = 0x559f0b247ce932a2;
  uVar5 = (~_DAT_1834671a8 + 0xa3cafc5f8b264849) *
          ((_DAT_183467068 ^ 0xf655f77b73ed59cf) + (_DAT_183467068 & 0x7655f77b73ed59cf) * 2);
  uVar5 = (uVar5 | _DAT_183467058) + (uVar5 & _DAT_183467058);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183467240 = func_0x0001905434b0((uVar5 | 0x559f0b24f8cb1187) + (uVar5 & 0x559f0b24f8cb1187));
  uVar5 = _DAT_183467240 - (_DAT_183467240 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_183467240;
  _DAT_183467048 = (_DAT_183467048 ^ uVar5) + 0xa240f45b83064848 ^ 0xe6a86b8dcda438c;
  _DAT_183467178 = (_DAT_183467178 * 0x5d8f7c0718a2e62b ^ _DAT_183467048) + uVar5;
  _DAT_183467150 = _DAT_183467178 ^ _DAT_183467048;
  _DAT_183467098 = 0xa240f45b83064848;
  uVar5 = (_DAT_1834671c0 ^ _DAT_182cc5370) + _DAT_183467010 + 0x559f0b24f8cb1187;
  uVar6 = (_DAT_183467010 ^ _UNK_182cc5378) + _DAT_1834671c0 + 0x4481e8b7060c9090;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834671c0 ^ _DAT_182cc5370;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183467010 ^ _UNK_182cc5378;
  _DAT_183467158 =
       func_0x0001905434b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1834671c0 + 0x4481e8b7060c9090) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183467010 + 0x559f0b24f8cb1187));
  uVar5 = _DAT_183467158 ^ 0x559f0b247ce932a2;
  _DAT_1834670a0 = _DAT_1834671a8 ^ uVar5 ^ 0x9a20f3db82f5c332;
  _DAT_183467010 = (_DAT_183467010 ^ uVar5) + 0x9a20f3db82f5c332 ^ 0xa328ef56e7ce9d05;
  _DAT_183467008 = (_DAT_183467008 * 0xe75f54d74b57969 ^ _DAT_183467010) + uVar5;
  _DAT_1834671d8 = _DAT_183467008 ^ _DAT_183467010;
  _DAT_183467078 = _DAT_183467028 ^ 0x9a20f3db82f5c332;
  _DAT_1834672e0 = 0x9a20f3db82f5c332;
  uVar5 = (~_DAT_1834670c8 + 0x9a20f3db82f5c333) *
          ((_DAT_183467038 ^ 0x9a20f3db06d7e017) + (_DAT_183467038 & 0x1a20f3db06d7e017) * 2);
  uVar5 = (uVar5 | _DAT_1834672a0) + (uVar5 & _DAT_1834672a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183466fb8 = func_0x0001905434b0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_183467150 =
       ((_DAT_183466fb8 ^ 0xd88b69b9fa8935c4) & 0xf) << 0x3b |
       (_DAT_183466fb8 ^ 0xd88b69b9fa8935c4) >> 5;
  _DAT_183467080 = _DAT_183467080 ^ _DAT_183467150 ^ 0x6a89b9677d5f6aff;
  _DAT_183466fc8 = (_DAT_183466fc8 * 0xbe2479cbe19f691 ^ _DAT_183467080) + _DAT_183467150;
  _DAT_183467088 = _DAT_183466fc8 ^ _DAT_183467080;
  _DAT_1834671f0 = 0;
  _DAT_183466f68 = func_0x0001905434b0(_DAT_183467098 ^ 0x22ff7c0b0021fa);
  uVar5 = _DAT_183466f68 ^ 0x28;
  _DAT_1834671f0 = _DAT_183466f38 ^ uVar5 ^ 0x28;
  _DAT_183466fa8 = (_DAT_183466fa8 ^ uVar5) + 0x28 ^ 0xcae7135b4637e418;
  _DAT_183466f10 = (_DAT_183466f10 * 0x7929b052385c0049 ^ _DAT_183466fa8) + uVar5;
  _DAT_183466fe0 = _DAT_183466f10 ^ _DAT_183466fa8;
  _DAT_183466fd0 = 0x28;
  uVar5 = (~_DAT_1834672b8 + 0x9aa088408308516) *
          ((_DAT_1834672f0 ^ 0xf655f77b73ed59cf) + (_DAT_1834672f0 & 0x7655f77b73ed59cf) * 2);
  uVar5 = (uVar5 | _DAT_183467098) + (uVar5 & _DAT_183467098);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183467140 = func_0x0001905434b0((uVar5 | 0xffffffff7bdddcda) + (uVar5 & 0xffffffff7bdddcda));
  uVar5 = (_DAT_183467140 ^ 0x7ac0a732) & 0xfffffffff;
  _DAT_183467060 = _DAT_183467060 ^ uVar5 ^ 0xdb9148cd822ee803;
  _DAT_183467040 = (_DAT_183467040 * 0x6326b57cdece8ea9 ^ _DAT_183467060) + uVar5;
  _DAT_183466f60 = _DAT_183467040 ^ _DAT_183467060;
  _DAT_183467190 = 0;
  _DAT_1834670b0 = func_0x0001905434b0(_DAT_1834672b0 + 0x1cff841affe1ff ^ 0x6e);
  _DAT_183467248 = _DAT_183467248 ^ _DAT_1834670b0 ^ 0x7651f57ba5cb7ac2 ^ 0xf4a3b6af072db124;
  _DAT_183466ff8 =
       (_DAT_183466ff8 * -0x5c961e17bb04392d ^ _DAT_183467248) +
       (_DAT_1834670b0 ^ 0x7651f57ba5cb7ac2);
  _DAT_183467260 = _DAT_183466ff8 ^ _DAT_183467248;
  _DAT_183467080 = 0;
  uVar5 = *(ulonglong *)(unaff_RBP + 0x78);
  uVar6 = (~_DAT_1834672a8 + 0x29) *
          ((uVar5 ^ 0x84222325 ^ _DAT_183466fc8) + ((uVar5 ^ 0x84222325) & _DAT_183466fc8) * 2);
  uVar6 = (uVar6 | _DAT_183466f68) + (uVar6 & _DAT_183466f68);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1834670c8 =
       func_0x0001905434b0((uVar5 ^ 0x8422230d | uVar6) + (uVar6 & (uVar5 ^ 0x8422230d)));
  uVar3 = unaff_XMM9_Da & (uint)DAT_180063540;
  auVar1._4_4_ = unaff_XMM9_Db;
  auVar1._0_4_ = unaff_XMM9_Da;
  auVar1._8_4_ = unaff_XMM9_Dc;
  auVar1._12_4_ = unaff_XMM9_Dd;
  auVar2._4_4_ = unaff_XMM9_Db;
  auVar2._0_4_ = unaff_XMM9_Da;
  auVar2._8_4_ = unaff_XMM9_Dc;
  auVar2._12_4_ = unaff_XMM9_Dd;
  uVar4 = SUB164(auVar1 | _DAT_180063540,0);
  uVar7 = SUB164(_DAT_180063540 ^ auVar2,0);
  uVar8 = SUB168(_DAT_180063540 ^ auVar2,0);
  uVar6 = (uVar5 | 0x28) ^ _DAT_1834670c8;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar6;
  auVar10._8_4_ = 0xffffffff;
  auVar10._0_8_ = 0xffffffffffffffff;
  auVar10._12_4_ = 0xffffffff;
  auVar10 = *(undefined1 (*) [16])(unaff_RBP + 0x10) ^ auVar10;
  uVar9 = auVar10._0_4_;
  _DAT_1834672f8 =
       (ulonglong)_DAT_182cc53e0 * (ulonglong)uVar7 +
       ((ulonglong)_DAT_182cc53f0 * (ulonglong)uVar7 + (uVar8 >> 0x20) * (ulonglong)_DAT_182cc53e0
       << 0x20) +
       (ulonglong)uVar4 * (ulonglong)_DAT_182cc53c0 +
       ((ulonglong)_DAT_182cc53d0 * (ulonglong)uVar4 +
        (SUB168(auVar1 | _DAT_180063540,0) >> 0x20) * (ulonglong)_DAT_182cc53c0 << 0x20) +
       ((ulonglong)_DAT_182cc53b0 * (ulonglong)uVar3 << 0x20) +
       (ulonglong)_DAT_182cc53a0 * (ulonglong)uVar3 +
       ((ulonglong)_DAT_182cc5390 * (ulonglong)unaff_XMM9_Da +
        (ulonglong)_DAT_182cc5380 * (ulonglong)*(uint *)(unaff_RBP + 0x50) << 0x20) +
       (ulonglong)unaff_XMM9_Da * (ulonglong)_DAT_182cc5380 +
       (-((ulonglong)uVar9 * (_DAT_182cc5460 & 0xffffffff) +
         ((ulonglong)_DAT_182cc5490 * (ulonglong)uVar9 +
          (auVar10._0_8_ >> 0x20) * (_DAT_182cc5460 & 0xffffffff) << 0x20)) -
       ((ulonglong)uVar7 * (ulonglong)_DAT_182cc5470 +
        ((ulonglong)_DAT_182cc5480 * (ulonglong)uVar7 + (uVar8 >> 0x20) * (ulonglong)_DAT_182cc5470
        << 0x20) +
       ((ulonglong)uVar3 * (ulonglong)_DAT_182cc5450 << 0x20) +
       (ulonglong)_DAT_182cc5440 * (ulonglong)uVar3 +
       ((ulonglong)unaff_XMM9_Da * (ulonglong)_DAT_182cc5430 +
        (ulonglong)*(uint *)(unaff_RBP + 0x50) * (ulonglong)_DAT_182cc5420 << 0x20) +
       (ulonglong)unaff_XMM9_Da * (ulonglong)_DAT_182cc5420)) + 0x2bec654302dad3c0;
  _DAT_183466f38 = _DAT_183467090 ^ uVar6 ^ _DAT_1834672f8;
  _DAT_183466fc0 = (_DAT_183466fc0 ^ uVar6) + _DAT_1834672f8 ^ 0x9a2ffdb1cdede446;
  _DAT_183467160 = (_DAT_183467160 * 0x10e12bc93c88845 ^ _DAT_183466fc0) + uVar6;
  _DAT_183466fe8 = _DAT_183467160 ^ _DAT_183466fc0;
  func_0x000180001044(*(undefined8 *)(unaff_RBP + 0xc0),_DAT_1834672f8);
  return 0;
}


// ----- block @ rva 0x1052df82 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19052df82(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  longlong *unaff_R12;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 unaff_XMM7 [16];
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  
  *(undefined2 *)(unaff_RBP + 0x70) = *(undefined2 *)(unaff_RBP + 0xa0);
  (**(code **)(unaff_R12 + JNI->SetCharArrayRegion /*0x688*/))();
  iVar1 = *(int *)(unaff_RBP + 0x78);
  uVar2 = *(uint *)(unaff_RBP + 0x74);
  auVar5._8_8_ = _UNK_180062bf8;
  auVar5._0_8_ = (ulonglong)uVar2 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_182cc4ac0,unaff_XMM7);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar4 + _DAT_183467090;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_1834672b8 ^ uVar4;
  }
  _DAT_1834671a8 = func_0x0001905434b0(SUB161(auVar5 ^ _DAT_182cc4ac0,5) ^ uVar3);
  uVar8 = uVar2 & unaff_XMM13_Da;
  uVar9 = uVar2 ^ unaff_XMM13_Da;
  lVar7 = ((ulonglong)uVar2 * (ulonglong)_DAT_182cc4b60 << 0x20) +
          (ulonglong)uVar2 * (ulonglong)_DAT_182cc4b50;
  uVar3 = ((((ulonglong)(uVar2 ^ unaff_XMM10_Da) * (ulonglong)unaff_XMM14_Da + _DAT_182cc4b40 <<
            0x20) + (ulonglong)(uVar2 ^ unaff_XMM10_Da) * (ulonglong)_DAT_182cc4b30 +
            ((ulonglong)uVar9 * (ulonglong)unaff_XMM12_Da << 0x20) +
            (ulonglong)uVar9 * (ulonglong)unaff_XMM9_Da +
            ((ulonglong)uVar8 * (ulonglong)unaff_XMM12_Da << 0x20 |
            (ulonglong)uVar8 * (ulonglong)unaff_XMM9_Da) +
            (ulonglong)uVar2 * (ulonglong)_DAT_182cc4ae0 +
            ((ulonglong)uVar2 * (ulonglong)unaff_XMM14_Da << 0x20) + lVar7 +
           ((ulonglong)(uVar2 | unaff_XMM13_Da) * (ulonglong)_DAT_182cc4b20 << 0x20) +
           (ulonglong)(uVar2 | unaff_XMM13_Da) * (ulonglong)_DAT_182cc4b10) -
          (((ulonglong)uVar9 * (ulonglong)_DAT_182cc4bc0 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_182cc4bb0 + lVar7 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_182cc4ba0 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_182cc4b90) +
          ((ulonglong)uVar2 * (ulonglong)_DAT_182cc4b80 << 0x20) +
          (ulonglong)uVar2 * (ulonglong)_DAT_182cc4b70)) + 0x5314b27d41f2092b;
  _DAT_183466fb8 = _DAT_183466f80 ^ _DAT_1834671a8 ^ uVar3;
  _DAT_183467118 = (_DAT_183467118 ^ _DAT_1834671a8) + uVar3 ^ 0x42f3324081c52aad;
  _DAT_1834670a0 = (_DAT_1834670a0 * 0xd40331b24b88c4d ^ _DAT_183467118) + _DAT_1834671a8;
  _DAT_1834670a8 = _DAT_1834670a0 ^ _DAT_183467118;
  _DAT_183467228 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x90) = (int)uVar3;
  *(int *)(unaff_RBP + 0x98) = iVar1;
  switch((int)uVar3 < iVar1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x1052dfb8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19052dfb8(uint param_1)

{
  int in_EAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 unaff_XMM7 [16];
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  
  auVar3._8_8_ = _UNK_180062bf8;
  auVar3._0_8_ = (ulonglong)param_1 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_182cc4ac0,unaff_XMM7);
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar2 + _DAT_183467090;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_1834672b8 ^ uVar2;
  }
  _DAT_1834671a8 = func_0x0001905434b0(SUB161(auVar3 ^ _DAT_182cc4ac0,5) ^ uVar1);
  uVar6 = param_1 & unaff_XMM13_Da;
  uVar7 = param_1 ^ unaff_XMM13_Da;
  lVar5 = ((ulonglong)param_1 * (ulonglong)_DAT_182cc4b60 << 0x20) +
          (ulonglong)param_1 * (ulonglong)_DAT_182cc4b50;
  uVar1 = ((((ulonglong)(param_1 ^ unaff_XMM10_Da) * (ulonglong)unaff_XMM14_Da + _DAT_182cc4b40 <<
            0x20) + (ulonglong)(param_1 ^ unaff_XMM10_Da) * (ulonglong)_DAT_182cc4b30 +
            ((ulonglong)uVar7 * (ulonglong)unaff_XMM12_Da << 0x20) +
            (ulonglong)uVar7 * (ulonglong)unaff_XMM9_Da +
            ((ulonglong)uVar6 * (ulonglong)unaff_XMM12_Da << 0x20 |
            (ulonglong)uVar6 * (ulonglong)unaff_XMM9_Da) +
            (ulonglong)param_1 * (ulonglong)_DAT_182cc4ae0 +
            ((ulonglong)param_1 * (ulonglong)unaff_XMM14_Da << 0x20) + lVar5 +
           ((ulonglong)(param_1 | unaff_XMM13_Da) * (ulonglong)_DAT_182cc4b20 << 0x20) +
           (ulonglong)(param_1 | unaff_XMM13_Da) * (ulonglong)_DAT_182cc4b10) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_182cc4bc0 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_182cc4bb0 + lVar5 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_182cc4ba0 << 0x20 |
          (ulonglong)uVar6 * (ulonglong)_DAT_182cc4b90) +
          ((ulonglong)param_1 * (ulonglong)_DAT_182cc4b80 << 0x20) +
          (ulonglong)param_1 * (ulonglong)_DAT_182cc4b70)) + 0x5314b27d41f2092b;
  _DAT_183466fb8 = _DAT_183466f80 ^ _DAT_1834671a8 ^ uVar1;
  _DAT_183467118 = (_DAT_183467118 ^ _DAT_1834671a8) + uVar1 ^ 0x42f3324081c52aad;
  _DAT_1834670a0 = (_DAT_1834670a0 * 0xd40331b24b88c4d ^ _DAT_183467118) + _DAT_1834671a8;
  _DAT_1834670a8 = _DAT_1834670a0 ^ _DAT_183467118;
  _DAT_183467228 = uVar1 & 0xffffffff;
  *(int *)(unaff_RBP + 0x90) = (int)uVar1;
  *(int *)(unaff_RBP + 0x98) = in_EAX;
  switch((int)uVar1 < in_EAX) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x1052e4d4 -----

undefined8 FUN_19052e4d4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x1052e51f -----

undefined8 FUN_19052e51f(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(unaff_RBX + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x1052e531 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19052e531(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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


// ----- block @ rva 0x1052e68c -----

void FUN_19052e68c(void)

{
  return;
}


// ----- block @ rva 0x1052e7e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19052e7e2(longlong param_1)

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


// ----- block @ rva 0x105455aa -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905455aa(void)

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


// ----- block @ rva 0x10545768 -----

void FUN_190545768(void)

{
  return;
}


// ----- block @ rva 0x105458bc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905458bc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
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


// ----- block @ rva 0x10545ae5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190545ae5(void)

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


// ----- block @ rva 0x10546564 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190546564(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  cVar1 = (**(code **)(unaff_R12 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10546885 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_190545b91(void)

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


// ----- block @ rva 0x10547407 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190547407(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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


// ----- block @ rva 0x1054752c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054752c(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->SetObjectArrayElement /*0x570*/))();
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


// ----- block @ rva 0x10547b9d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190547b9d(void)

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


// ----- block @ rva 0x10548f95 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190548f95(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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


// ----- block @ rva 0x10548fe4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190548fe4(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->GetObjectArrayElement /*0x568*/))();
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(unaff_R12 + JNI->NewString /*0x518*/))();
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


// ----- block @ rva 0x10549424 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190549424(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10549a9a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190549a9a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182ccb2d8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x10549aa6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190549aa6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10549ac3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190549ac3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_182ccb2b8)();
  return;
}


// ----- block @ rva 0x10549acc -----

void FUN_190549acc(void)

{
  return;
}


// ----- block @ rva 0x10549acd -----

undefined4 * FUN_190549acd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x10549b2f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190549b2f(void)

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


// ----- block @ rva 0x10549b83 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190549b83(void)

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


// ----- block @ rva 0x10549d30 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190549d30(void)

{
  FUN_190ddfc90();
  (*_DAT_182ccb4c8)();
  return;
}


// ----- block @ rva 0x10549e7d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190549e7d(void)

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


// ----- block @ rva 0x10549fcf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190549fcf(void)

{
  FUN_190ddfc90();
  (*_DAT_182ccb448)();
  return;
}


// ----- block @ rva 0x1054a23a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19054a23a(void)

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


// ----- block @ rva 0x1054a25b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054a25b(void)

{
  FUN_190de3220();
  (*_DAT_182ccb418)();
  return;
}


// ----- block @ rva 0x1054a4c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054a4c4(void)

{
  FUN_190dd72e0();
  (*_DAT_182ccb398)();
  return;
}


// ----- block @ rva 0x1054a52a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054a52a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_182ccb4f8)();
  return;
}


// ----- block @ rva 0x1054a738 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19054a738(void)

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


// ----- block @ rva 0x1054a8b3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054a8b3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182ccb6f8)();
  return;
}


// ----- block @ rva 0x1054a8e8 -----

void FUN_19054a8e8(void)

{
  return;
}


// ----- block @ rva 0x1054aa60 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054aa60(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_182ccb868)();
  return;
}


// ----- block @ rva 0x1054aa7f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054aa7f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000140;
  
  uStack0000000000000060 = in_stack_00000140;
  FUN_190ddfc90();
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


// ----- block @ rva 0x1054affd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054affd(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x538))();
  FUN_184117d50();
  (*_DAT_182ccc578)();
  return;
}


// ----- block @ rva 0x1054b2d3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054b2d3(void)

{
  (*_DAT_182ccc568)();
  return;
}


// ----- block @ rva 0x1054b668 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054b668(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182ccc248)();
  return;
}


// ----- block @ rva 0x1054bfb0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054bfb0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182ccc5c8)();
  return;
}


// ----- block @ rva 0x1054c306 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054c306(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_182ccbbd8)();
  return;
}


// ----- block @ rva 0x1054c560 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19054c560(void)

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


// ----- block @ rva 0x1054c914 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054c914(void)

{
  (*_DAT_182ccc5f8)();
  return;
}


// ----- block @ rva 0x1054d1c5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054d1c5(void)

{
  (*_DAT_182ccc5f8)();
  return;
}


// ----- block @ rva 0x1054d2d6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054d2d6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182ccc038)();
  return;
}


// ----- block @ rva 0x1054d331 -----

void FUN_19054d331(void)

{
  return;
}


// ----- block @ rva 0x1054d350 -----

void FUN_19054d350(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x1054f8bc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19054f8bc(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x1054fa58 -----

void FUN_19054fa58(void)

{
  return;
}


// ----- block @ rva 0x1054fac1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19054fac1(void)

{
  int iVar1;
  longlong *unaff_R14;
  int iStack0000000000000050;
  ulonglong uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined8 in_stack_00000078;
  
  iStack0000000000000050 = 0;
  uStack0000000000000060 = 0x38;
  uStack0000000000000058 = (ulonglong)(uint)(int)(char)((ulonglong)in_stack_00000078 >> 0x38);
  iVar1 = (**(code **)(unaff_R14 + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10551b70 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_190554561(void)

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


// ----- block @ rva 0x1055250f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055250f(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190ddce00(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0x38be,*_DAT_18301ee50 + 0x847,
                0x1ba);
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


// ----- block @ rva 0x1055281b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055281b(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10552a59 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_190554561(void)

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


// ----- block @ rva 0x1055719c -----

undefined8 thunk_FUN_190550a84(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x10558771 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190558771(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10558b0d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190558b0d(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddfc90();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10558e53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190558e53(void)

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


// ----- block @ rva 0x10558e8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190558e8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cce7d8)();
  return;
}


// ----- block @ rva 0x10558eb1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190558eb1(void)

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


// ----- block @ rva 0x10558ec6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190558ec6(void)

{
  FUN_190dd72e0();
  (*_DAT_182cce848)();
  return;
}


// ----- block @ rva 0x10558f0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190558f0f(void)

{
  FUN_190dd9df0();
  (*_DAT_182cce7e8)();
  return;
}


// ----- block @ rva 0x10558f42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190558f42(void)

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


// ----- block @ rva 0x10558f66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190558f66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cce7c8)();
  return;
}


// ----- block @ rva 0x10558f8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190558f8d(void)

{
  (*_DAT_182cce838)();
  return;
}


// ----- block @ rva 0x10558f9e -----

void FUN_190558f9e(void)

{
  return;
}


// ----- block @ rva 0x10558fa6 -----

void FUN_190558fa6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x1055907e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055907e(void)

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


// ----- block @ rva 0x105590d2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1905590d2(void)

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


// ----- block @ rva 0x10559480 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190559480(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  (*_DAT_182ccec58)();
  return;
}


// ----- block @ rva 0x1055954e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055954e(void)

{
  FUN_190ddfc90();
  (*_DAT_182ccedb8)();
  return;
}


// ----- block @ rva 0x10559763 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190559763(void)

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


// ----- block @ rva 0x105599bd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905599bd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_182cced08)();
  return;
}


// ----- block @ rva 0x10559ac7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190559ac7(void)

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


// ----- block @ rva 0x10559d96 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190559d96(void)

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


// ----- block @ rva 0x10559f11 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190559f11(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cce8f8)();
  return;
}


// ----- block @ rva 0x10559f35 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190559f35(void)

{
  (*_DAT_182cced98)();
  return;
}


// ----- block @ rva 0x10559f45 -----

void FUN_190559f45(void)

{
  return;
}


// ----- block @ rva 0x10559f54 -----

void FUN_190559f54(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x1055a0cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055a0cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_182ccf2c8)();
  return;
}


// ----- block @ rva 0x1055a59f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19055a59f(void)

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


// ----- block @ rva 0x1055a68e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19055a68e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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


// ----- block @ rva 0x1055ada6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055ada6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182ccfca8)();
  return;
}


// ----- block @ rva 0x1055b5d5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19055b5d5(void)

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


// ----- block @ rva 0x1055bea5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055bea5(void)

{
  (*_DAT_182ccfd78)();
  return;
}


// ----- block @ rva 0x1055c05a -----

void FUN_19055c05a(void)

{
  return;
}


// ----- block @ rva 0x1055c11d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055c11d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182ccf848)();
  return;
}


// ----- block @ rva 0x1055c335 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055c335(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182ccef18)();
  return;
}


// ----- block @ rva 0x1055c823 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055c823(void)

{
  (*_DAT_182ccfd48)();
  return;
}


// ----- block @ rva 0x1055c929 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19055c929(void)

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


// ----- block @ rva 0x1055ca92 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19055ca92(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182ccf398)();
  return;
}


// ----- block @ rva 0x1055ce2b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00019055ce81 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19055ce2b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x1055d3e5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00019055d41b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19055d3e5(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x1055d423 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00019055d462 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19055d423(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x1055d4e5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00019055d4fc */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19055d4e5(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x1056029c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001905602d6 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19056029c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x10561c66 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190561c66(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x1056247e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19056247e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined4 uStack0000000000000160;
  
  uStack0000000000000100 = 0x855eaa60;
  rdtsc();
  uStack0000000000000150 = 0x2d004f00530049;
  rdtsc();
  uStack0000000000000158 = 0x39003500380038;
  rdtsc();
  uStack0000000000000160 = 0x31002d;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
  FUN_190ddfc90();
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


// ----- block @ rva 0x105695bd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1905695bd(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R15;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 3;
  uStack0000000000000078 = 0x20;
  uStack0000000000000070 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_R15 >> 0x20);
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000068 < 0 || iVar1 <= iStack0000000000000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10571afc -----

void thunk_FUN_19055f3ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x10571c22 -----

void FUN_190571c22(void)

{
  return;
}


// ----- block @ rva 0x10571eb3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190571eb3(void)

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


// ----- block @ rva 0x10571eec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190571eec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2548)();
  return;
}


// ----- block @ rva 0x10571f26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190571f26(void)

{
  FUN_190dd72e0();
  (*_DAT_182cd2508)();
  return;
}


// ----- block @ rva 0x10571f4e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190571f4e(void)

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


// ----- block @ rva 0x10571f6f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190571f6f(void)

{
  FUN_190dd9df0();
  (*_DAT_182cd2538)();
  return;
}


// ----- block @ rva 0x10571fa2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190571fa2(void)

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


// ----- block @ rva 0x10571fed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190571fed(void)

{
  (*_DAT_182cd24e8)();
  return;
}


// ----- block @ rva 0x10571ffe -----

void FUN_190571ffe(void)

{
  return;
}


// ----- block @ rva 0x10572006 -----

void FUN_190572006(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x105720b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905720b3(void)

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


// ----- block @ rva 0x105720ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905720ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd25f8)();
  return;
}


// ----- block @ rva 0x10572111 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190572111(void)

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


// ----- block @ rva 0x10572126 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572126(void)

{
  FUN_190dd72e0();
  (*_DAT_182cd2608)();
  return;
}


// ----- block @ rva 0x1057214e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19057214e(void)

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


// ----- block @ rva 0x1057216f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19057216f(void)

{
  FUN_190dd9df0();
  (*_DAT_182cd2628)();
  return;
}


// ----- block @ rva 0x105721c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905721c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2618)();
  return;
}


// ----- block @ rva 0x105721ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905721ed(void)

{
  (*_DAT_182cd25c8)();
  return;
}


// ----- block @ rva 0x105721fe -----

void FUN_1905721fe(void)

{
  return;
}


// ----- block @ rva 0x10572206 -----

void FUN_190572206(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x105722b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905722b3(void)

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


// ----- block @ rva 0x105722ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905722ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2708)();
  return;
}


// ----- block @ rva 0x10572326 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572326(void)

{
  FUN_190dd72e0();
  (*_DAT_182cd26e8)();
  return;
}


// ----- block @ rva 0x1057234e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19057234e(void)

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


// ----- block @ rva 0x1057236f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19057236f(void)

{
  FUN_190dd9df0();
  (*_DAT_182cd26f8)();
  return;
}


// ----- block @ rva 0x105723a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1905723a2(void)

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


// ----- block @ rva 0x105723ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905723ed(void)

{
  (*_DAT_182cd26c8)();
  return;
}


// ----- block @ rva 0x105723fe -----

void FUN_1905723fe(void)

{
  return;
}


// ----- block @ rva 0x10572406 -----

void FUN_190572406(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x105724b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905724b3(void)

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


// ----- block @ rva 0x10572511 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190572511(void)

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


// ----- block @ rva 0x10572526 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572526(void)

{
  FUN_190dd72e0();
  (*_DAT_182cd27c8)();
  return;
}


// ----- block @ rva 0x1057254e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19057254e(void)

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


// ----- block @ rva 0x105725a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1905725a2(void)

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


// ----- block @ rva 0x105725c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905725c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2788)();
  return;
}


// ----- block @ rva 0x105725ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905725ed(void)

{
  (*_DAT_182cd2778)();
  return;
}


// ----- block @ rva 0x105725fe -----

void FUN_1905725fe(void)

{
  return;
}


// ----- block @ rva 0x10572606 -----

void FUN_190572606(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x105726b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905726b3(void)

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


// ----- block @ rva 0x105726ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905726ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2858)();
  return;
}


// ----- block @ rva 0x10572711 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190572711(void)

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


// ----- block @ rva 0x10572726 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572726(void)

{
  FUN_190dd72e0();
  (*_DAT_182cd28c8)();
  return;
}


// ----- block @ rva 0x105727a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1905727a2(void)

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


// ----- block @ rva 0x105727c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905727c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2878)();
  return;
}


// ----- block @ rva 0x105727ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905727ed(void)

{
  (*_DAT_182cd2868)();
  return;
}


// ----- block @ rva 0x105727fe -----

void FUN_1905727fe(void)

{
  return;
}


// ----- block @ rva 0x10572806 -----

void FUN_190572806(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x105728b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905728b3(void)

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


// ----- block @ rva 0x105728ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905728ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2998)();
  return;
}


// ----- block @ rva 0x10572911 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190572911(void)

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


// ----- block @ rva 0x10572926 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572926(void)

{
  FUN_190dd72e0();
  (*_DAT_182cd2958)();
  return;
}


// ----- block @ rva 0x1057294e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19057294e(void)

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


// ----- block @ rva 0x1057296f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19057296f(void)

{
  FUN_190dd9df0();
  (*_DAT_182cd2978)();
  return;
}


// ----- block @ rva 0x105729a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1905729a2(void)

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


// ----- block @ rva 0x105729ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1905729ed(void)

{
  (*_DAT_182cd29b8)();
  return;
}


// ----- block @ rva 0x105729fe -----

void FUN_1905729fe(void)

{
  return;
}


// ----- block @ rva 0x10572a06 -----

void FUN_190572a06(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x10572ab3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572ab3(void)

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


// ----- block @ rva 0x10572aec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572aec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2a68)();
  return;
}


// ----- block @ rva 0x10572b11 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190572b11(void)

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


// ----- block @ rva 0x10572b26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572b26(void)

{
  FUN_190dd72e0();
  (*_DAT_182cd2a18)();
  return;
}


// ----- block @ rva 0x10572b4e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190572b4e(void)

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


// ----- block @ rva 0x10572b6f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572b6f(void)

{
  FUN_190dd9df0();
  (*_DAT_182cd2a88)();
  return;
}


// ----- block @ rva 0x10572bc6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572bc6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182cd2a58)();
  return;
}


// ----- block @ rva 0x10572bec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190572bec(void)

{
  (*_DAT_182cd2a98)();
  return;
}


// ----- block @ rva 0x10572bfc -----

void FUN_190572bfc(void)

{
  return;
}


// ----- block @ rva 0x10572c04 -----

void FUN_190572c04(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

