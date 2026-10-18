// ===== Lsixtwo/J; _1a6f26e3e4126fbd19826f02aaf7c123 ()V (handler @ image 19055cd40, runtime 6ffff816cd40) =====

void FUN_19055cd40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x245,0xe);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3600,0xba);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019054aa5d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ccb820 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



