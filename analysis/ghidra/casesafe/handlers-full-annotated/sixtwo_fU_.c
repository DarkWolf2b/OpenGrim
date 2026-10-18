// ===== Lsixtwo/fU; _9ca8788c776fc65a0475168085a13724 ()V (handler @ image 18a7f5280, runtime 6ffff2405280) =====

void FUN_18a7f5280(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a7f5368 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18188a240 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fU; aXP (Lsixtwo/gy;)V (handler @ image 18a7a1bc0, runtime 6ffff23b1bc0) =====

void FUN_18a7a1bc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15283,0x34e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a7a1cb1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181878660 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fU; aXQ (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18a7c0690, runtime 6ffff23d0690) =====

undefined8 FUN_18a7c0690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fU; aXR ([B)Ljava/lang/String; (handler @ image 18a7c0720, runtime 6ffff23d0720) =====

void FUN_18a7c0720(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018a7c07c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181881690 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fU; aXS (IJ)Ljava/lang/String; (handler @ image 18a7eab60, runtime 6ffff23fab60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7eab60(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar8 = (uRam000000018325a4b8 ^ _UNK_181888c10) + uRam000000018325a0e8 + 0x4582cb076c134419;
  uVar10 = (uRam000000018325a0e8 ^ _UNK_181888c18) + uRam000000018325a4b8 + 0x43c5c50e85cf2368;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018325a4b8 ^ _UNK_181888c10;
  uVar11 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018325a0e8 ^ _UNK_181888c18;
  uVar10 = (ulonglong)param_3;
  uRam000000018325a0f8 =
       func_0x00018a7f1840((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam000000018325a4b8 + 0x43c5c50e85cf2368) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018325a0e8 + 0x4582cb076c134419));
  uVar8 = (uRam000000018325a0f8 ^ 0x43c5c50e85cf2368) & 0x7fffffffffffffff;
  uRam000000018325a1b8 = (uRam000000018325a1b8 ^ uVar8) + 0x6470e096dfe4454 ^ 0x96ab037e380589e7;
  uRam000000018325a4f0 = (uRam000000018325a4f0 * -0x2ecbf1a2402dd971 ^ uRam000000018325a1b8) + uVar8
  ;
  uRam000000018325a6e0 = uRam000000018325a4f0 ^ uRam000000018325a1b8;
  lRam000000018325a6d0 = 0x6470e096dfe4454;
  uRam000000018325a248 = func_0x00018a7f1840(uRam000000018325a6b8 + 0x9faed21494b4bed9 ^ 0xef);
  uRam000000018325a668 = uRam000000018325a370 ^ 0xea3fd4e078e21292;
  uRam000000018325a1f8 = (uRam000000018325a1f8 ^ 0x7fff) + 0xea3fd4e078e26d6d ^ 0x4616f724483c8d53;
  uRam000000018325a098 = (uRam000000018325a098 * 0x4e148931965d76e9 ^ uRam000000018325a1f8) + 0x7fff
  ;
  uRam000000018325a070 = uRam000000018325a098 ^ uRam000000018325a1f8;
  uRam0000000183259f38 = 0xea3fd4e078e26d6d;
  uRam000000018325a4f8 = func_0x00018a7f1840(uRam000000018325a5b0 ^ 0xd2db6178462439d0);
  uVar8 = uRam000000018325a4f8 & 0x7ffffffffffffe0;
  uRam0000000183259f98 = uRam000000018325a308 ^ uVar8 ^ 0x7fff;
  uRam000000018325a0c0 = (uRam000000018325a0c0 ^ uVar8) + 0x7fff ^ 0xcd0d692a72000bba;
  uRam000000018325a1a8 = (uRam000000018325a1a8 * 0x562e63e15970339b ^ uRam000000018325a0c0) + uVar8;
  uRam0000000183259ff0 = uRam000000018325a1a8 ^ uRam000000018325a0c0;
  uRam0000000183259f88 = 0x7fff;
  lRam000000018325a6d0 = func_0x00018a7f1840(uRam0000000183259f78 ^ 0x6be7d5db05734488);
  uRam000000018325a430 =
       (uRam000000018325a430 ^ lRam000000018325a6d0 * 0x73b5aaf2f22c4d31) + 0x87158c6b9e82f5e0 ^
       0x1a4d11e08ac6d021;
  uRam000000018325a5f8 =
       (uRam000000018325a5f8 * -0x1966cf224493fcc1 ^ uRam000000018325a430) +
       lRam000000018325a6d0 * 0x73b5aaf2f22c4d31;
  uRam000000018325a1d0 = uRam000000018325a5f8 ^ uRam000000018325a430;
  uRam0000000183259f18 = 0x87158c6b9e82f5e0;
  uVar8 = (~uRam000000018325a220 + 0x87158c6b9e82f5e1) *
          ((uRam000000018325a3a8 ^ 0x78ea7394e55fa93a) +
          (uRam000000018325a3a8 & 0x78ea7394e55fa93a) * 2);
  uVar8 = (uVar8 | uRam0000000183259f30) + (uVar8 & uRam0000000183259f30);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a4a8 =
       func_0x00018a7f1840((uVar8 | 0xffffffff7bdd5cda) + (uVar8 & 0xffffffff7bdd5cda));
  uVar8 = uRam000000018325a4a8 << 0x15 | uRam000000018325a4a8 >> 0x2b;
  uRam000000018325a3a8 = uRam000000018325a520 ^ uVar8 ^ 0x7fff;
  uRam000000018325a530 = (uRam000000018325a530 ^ uVar8) + 0x7fff ^ 0x124e27c4074ebdf0;
  uRam0000000183259f78 = (uRam0000000183259f78 * -0x4f49f52938523be3 ^ uRam000000018325a530) + uVar8
  ;
  uRam000000018325a040 = uRam0000000183259f78 ^ uRam000000018325a530;
  uRam000000018325a0c0 = 0x7fff;
  uVar8 = (uRam000000018325a650 ^ _UNK_181888c20) + uRam000000018325a5f0 + 0x84222325;
  uVar11 = (uRam000000018325a5f0 ^ _UNK_181888c28) + uRam000000018325a650 + 0x3ca68ab299cff0c8;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018325a650 ^ _UNK_181888c20;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018325a5f0 ^ _UNK_181888c28;
  uRam000000018325a080 =
       func_0x00018a7f1840((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam000000018325a650 + 0x3ca68ab299cff0c8) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018325a5f0 + 0x84222325));
  uRam000000018325a248 =
       (uRam000000018325a248 ^ uRam000000018325a080 * -0x19d977e6a616ab11) + 0xc359754d66300f38 ^
       0x2566f09d7dddba32;
  uRam000000018325a608 =
       (uRam000000018325a608 * 0x3737189f89deaf41 ^ uRam000000018325a248) +
       uRam000000018325a080 * -0x19d977e6a616ab11;
  uRam000000018325a490 = uRam000000018325a608 ^ uRam000000018325a248;
  uRam000000018325a4c8 = 0xc359754d66300f38;
  uVar8 = (~uRam000000018325a200 + 0x3ca68ab299cff0c9) *
          ((uRam000000018325a0f0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018325a0f0 & 0x84225cda) * 2);
  uVar8 = (uVar8 | uRam000000018325a0a8) + (uVar8 & uRam000000018325a0a8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a490 =
       func_0x00018a7f1840((uVar8 | 0x3ca68ab21dedac12) + (uVar8 & 0x3ca68ab21dedac12));
  uVar8 = uRam000000018325a490 ^ 0x3ca68ab299cff0c8;
  uRam000000018325a6b0 = uRam0000000183259fc0 ^ uVar8 ^ 0x3ca68ab299d070c7;
  uRam000000018325a578 = (uRam000000018325a578 ^ uVar8) + 0x3ca68ab299d070c7 ^ 0xb0055221e2f3a526;
  uRam000000018325a180 = (uRam000000018325a180 * 0x12d7d274f8ca8d0f ^ uRam000000018325a578) + uVar8;
  uRam000000018325a250 = uRam000000018325a180 ^ uRam000000018325a578;
  uRam000000018325a5d8 = 0x3ca68ab299d070c7;
  uVar8 = (~uRam000000018325a210 + 0xc359754d66300f39) *
          ((uRam000000018325a5d0 ^ 0x3ca68ab21df253e2) +
          (uRam000000018325a5d0 & 0x3ca68ab21df253e2) * 2);
  uVar8 = (uVar8 | uRam000000018325a230) + (uVar8 & uRam000000018325a230);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a658 =
       func_0x00018a7f1840((uVar8 | 0xffffffff7bc25cda) + (uVar8 & 0xffffffff7bc25cda));
  uVar8 = uRam000000018325a658 ^ 0xc359754d66200f38;
  uRam000000018325a060 = uRam000000018325a480 ^ uVar8 ^ 0x7fff;
  uRam000000018325a628 = (uRam000000018325a628 ^ uVar8) + 0x7fff ^ 0x9b928f6096ab845c;
  uRam000000018325a528 = (uRam000000018325a528 * -0x5bfaf8d4ce83def5 ^ uRam000000018325a628) + uVar8
  ;
  uRam000000018325a2b8 = uRam000000018325a528 ^ uRam000000018325a628;
  uRam000000018325a2d0 = 0x7fff;
  uRam000000018325a6e0 = func_0x00018a7f1840(uRam0000000183259f38 + 0xae8da77241df1c36 ^ 0x30);
  uVar8 = uRam000000018325a6e0 ^ 0xdfff6f7b7bf9faaf;
  uRam000000018325a2c0 = uRam000000018325a678 ^ uVar8 ^ 0xe6467d84e9f83f03;
  uRam000000018325a188 = (uRam000000018325a188 ^ uVar8) + 0xe6467d84e9f83f03 ^ 0xc7b8b4b2c5a81865;
  uRam000000018325a018 = (uRam000000018325a018 * -0x38c0072df51202a9 ^ uRam000000018325a188) + uVar8
  ;
  uRam000000018325a180 = uRam000000018325a018 ^ uRam000000018325a188;
  uRam000000018325a5d0 = -0x19b9827b1607c0fd;
  uVar8 = (uRam0000000183259f48 ^ _UNK_181888c30) + uRam0000000183259fe0 + 0xdfff6f7bffdbd98a;
  uVar11 = (uRam0000000183259fe0 ^ _UNK_181888c38) + uRam0000000183259f48 + 0x6470e096dfe4454;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183259f48 ^ _UNK_181888c30;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183259fe0 ^ _UNK_181888c38;
  lRam000000018325a388 =
       func_0x00018a7f1840((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam0000000183259f48 + 0x6470e096dfe4454) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183259fe0 + 0xdfff6f7bffdbd98a));
  uRam000000018325a3a0 =
       (uRam000000018325a3a0 ^ lRam000000018325a388 * 0x1b040f072e043b93) + 0xd9b861721607befb ^
       0xf85ed7386d59cfae;
  uRam000000018325a390 =
       (uRam000000018325a390 * 0x538c12eb855b4409 ^ uRam000000018325a3a0) +
       lRam000000018325a388 * 0x1b040f072e043b93;
  uRam000000018325a230 = uRam000000018325a390 ^ uRam000000018325a3a0;
  uRam000000018325a220 = uRam000000018325a380 ^ 0xd9b861721607befb;
  uRam000000018325a2f0 = 0xd9b861721607befb;
  uRam000000018325a220 = func_0x00018a7f1840(lRam000000018325a6c8 + 0x4e74a88d2a2123a8U ^ 0xd3);
  uRam000000018325a570 =
       (uRam000000018325a570 ^ uRam000000018325a220 & 0x3fffffffffff) + 0x6470e0969f84004 ^
       0x121140ffcf73eccb;
  uRam000000018325a148 =
       (uRam000000018325a148 * 0x19072dabb46e42df ^ uRam000000018325a570) +
       (uRam000000018325a220 & 0x3fffffffffff);
  uRam000000018325a260 = uRam000000018325a148 ^ uRam000000018325a570;
  uRam000000018325a360 = 0x6470e0969f84004;
  uVar8 = (~uRam000000018325a618 + 0xc8e1c12d3f08009) *
          ((uRam000000018325a068 ^ 0xd9b8617292259dde) +
          (uRam000000018325a068 & 0x59b8617292259dde) * 2);
  uVar8 = (uVar8 | uRam000000018325a1a8) + (uVar8 & uRam000000018325a1a8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a6b8 =
       func_0x00018a7f1840((uVar8 | 0xd5367d6041d51dd6) + (uVar8 & 0xd5367d6041d51dd6));
  uRam000000018325a550 = uRam000000018325a678 ^ uRam000000018325a6b8 ^ 0xe6467d84e9f83f03;
  uRam000000018325a5c8 =
       (uRam000000018325a5c8 ^ uRam000000018325a6b8) + 0xe6467d84e9f83f03 ^ 0x887cc3a59852ff7d;
  uRam000000018325a088 =
       (uRam000000018325a088 * 0x6008b28d65112cb1 ^ uRam000000018325a5c8) + uRam000000018325a6b8;
  uRam000000018325a178 = uRam000000018325a088 ^ uRam000000018325a5c8;
  uRam0000000183259f88 = 0xe6467d84e9f83f03;
  uVar8 = (~uRam000000018325a090 + 0xe6467d84e9f83f04) *
          ((uRam000000018325a1c0 ^ 0xe6467d846dda1c26) +
          (uRam000000018325a1c0 & 0x66467d846dda1c26) * 2);
  uVar8 = (uVar8 | uRam000000018325a518) + (uVar8 & uRam000000018325a518);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a4d8 =
       func_0x00018a7f1840((uVar8 | 0x84222325) + (ulonglong)((uint)uVar8 & 0x84222325));
  uRam000000018325a5c8 = (uRam000000018325a4d8 ^ 0xe9f83f03) & 0x3ffffffff;
  uRam000000018325a300 = uRam000000018325a300 ^ uRam000000018325a5c8 ^ 0xe8658966f3a73567;
  uRam000000018325a510 =
       (uRam000000018325a510 * 0x6c8eae94a48a9113 ^ uRam000000018325a300) + uRam000000018325a5c8;
  uRam000000018325a068 = uRam000000018325a510 ^ uRam000000018325a300;
  uRam000000018325a4f8 = 0;
  uRam000000018325a390 = func_0x00018a7f1840(uRam000000018325a068 ^ 0x5bff7c2a00217e);
  uVar8 = uRam000000018325a390 * 0x5282099a52fa753f;
  uRam000000018325a630 = uRam000000018325a060 ^ uVar8 ^ 0x7fff;
  uRam000000018325a210 = (uRam000000018325a210 ^ uVar8) + 0x7fff ^ 0xd7637005e9b260f6;
  uRam000000018325a5d0 = (uRam000000018325a5d0 * -0x205b3d5f6e85c837 ^ uRam000000018325a210) + uVar8
  ;
  uRam000000018325a490 = uRam000000018325a5d0 ^ uRam000000018325a210;
  uRam000000018325a368 = 0x7fff;
  uRam0000000183259ff8 = func_0x00018a7f1840(uRam000000018325a098 ^ 0x1eff7be4ffddc8);
  uVar8 = (uRam0000000183259ff8 ^ 0x1fbd4e1a52f93aa9) & 0x1fffffffffffff;
  uRam000000018325a1d8 = uRam000000018325a1d8 ^ uVar8 ^ 0x7fa33f2f9179a777;
  uRam000000018325a4a8 = (uRam000000018325a4a8 * 0x735bfd00abf359 ^ uRam000000018325a1d8) + uVar8;
  uRam000000018325a088 = uRam000000018325a4a8 ^ uRam000000018325a1d8;
  uRam000000018325a2f8 = 0;
  uVar8 = ((uRam000000018325a318 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018325a318 & 0x84225cda) * 2) * -uRam0000000183259f48;
  uVar8 = (uVar8 | uRam000000018325a358) + (uVar8 & uRam000000018325a358);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a048 =
       func_0x00018a7f1840((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  auVar7 = _UNK_1800170c0;
  uVar8 = uRam000000018325a048 - (uRam000000018325a048 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar1 + (uint)bVar1 ^ uRam000000018325a048;
  uRam000000018325a098 = uRam000000018325a058 ^ uVar8 ^ 0x7fff;
  uRam000000018325a6a0 = (uRam000000018325a6a0 ^ uVar8) + 0x7fff ^ 0xfbfbaa9be76c06c4;
  uRam000000018325a118 = (uRam000000018325a118 * 0x3adc314582a5b29f ^ uRam000000018325a6a0) + uVar8;
  uRam000000018325a008 = uRam000000018325a118 ^ uRam000000018325a6a0;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  uRam000000018325a308 = 0x7fff;
  auVar6 = pshufb(auVar5 ^ _UNK_181888c40,_UNK_1800170c0);
  uVar11 = auVar6._8_8_ + auVar6._0_8_;
  uVar8 = uVar11 + uRam000000018325a1b8;
  if (auVar6._4_4_ < 0) {
    uVar8 = uRam000000018325a498 ^ uVar11;
  }
  uRam000000018325a198 = func_0x00018a7f1840(SUB161(auVar5 ^ _UNK_181888c40,5) ^ uVar8);
  uVar11 = param_4 * 0x7fff ^ uRam000000018325a198;
  uVar8 = uVar11 >> 1 | uVar11;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (param_4 ^
          (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar11) * -0x1c19302dd7dbcfe5;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar11 = (ulonglong)uVar3;
  uRam000000018325a080 = (uRam000000018325a080 ^ uVar8) + uVar11 ^ 0x7ec06c0b877e85e2;
  uRam000000018325a5c8 = (uRam000000018325a5c8 * 0x4e9c1246e0046b91 ^ uRam000000018325a080) + uVar8;
  uRam000000018325a1a8 = uRam000000018325a5c8 ^ uRam000000018325a080;
  uVar8 = uVar11 ^ 0x84222325 ^ uRam000000018325a6b0;
  lVar4 = (uVar11 ^ 0x84222325) + uRam000000018325a628;
  uVar9 = uVar8 + lVar4;
  uVar12 = (uVar10 ^ uRam000000018325a628) + uRam000000018325a6b0 + uVar10;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uVar9 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar10 ^ uRam000000018325a628;
  uRam000000018325a370 = uVar11;
  uRam000000018325a6b8 =
       func_0x00018a7f1840((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018325a6b0 + uVar10) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar4);
  uVar8 = (uRam000000018325a6b8 & 0xffffffffe0000000) << 5 | uRam000000018325a6b8 >> 0x3b;
  uVar9 = (uVar11 + uVar10) - (ulonglong)((param_3 & uVar3) * 2);
  uRam000000018325a590 = (uRam000000018325a590 ^ uVar8) + uVar9 ^ 0xd0b36881633c352c;
  uRam0000000183259fe8 = (uRam0000000183259fe8 * -0x318cdbd8b59f2951 ^ uRam000000018325a590) + uVar8
  ;
  uRam000000018325a290 = uRam0000000183259fe8 ^ uRam000000018325a590;
  uVar10 = uVar9 & 0xffffffff;
  uVar8 = (~uRam000000018325a460 + 0x67129493) *
          ((uRam000000018325a0f8 ^ 0xe3779da6) +
          (ulonglong)((uint)uRam000000018325a0f8 & 0xe3779da6) * 2);
  uVar8 = (uVar8 | uRam000000018325a320) + (uVar8 & uRam000000018325a320);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183259f40 = uVar10;
  uRam0000000183259f00 =
       func_0x00018a7f1840((uVar8 | 0x84650934) + (ulonglong)((uint)uVar8 & 0x84650934));
  uVar8 = (ulonglong)(~(uint)uRam0000000183259f00 & 0x6755be83) ^ 0x6755be83;
  uRam000000018325a4b8 = (uRam000000018325a4b8 ^ uVar8) + 0x472a11 ^ 0x103ae52bd7168709;
  uRam000000018325a6e8 = (uRam000000018325a6e8 * 0x63c3d5bd526977c5 ^ uRam000000018325a4b8) + uVar8;
  uRam0000000183259f90 = uRam000000018325a6e8 ^ uRam000000018325a4b8;
  uRam000000018325a2e0 = 0x472a11;
  uVar8 = (~uRam000000018325a2a0 + 0xa0651581) *
          ((uRam0000000183259f50 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183259f50 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018325a4b8) + (uVar8 & uRam000000018325a4b8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a3f0 =
       func_0x00018a7f1840((uVar8 | 0x244736a5) + (ulonglong)((uint)uVar8 & 0x244736a5));
  uRam000000018325a050 = uRam000000018325a1f8 * -0x63a41313900e4fed;
  uRam000000018325a6f8 = uRam000000018325a6f8 - 0xa0651580 ^ 0x4fe6d6f5645422de;
  uRam000000018325a1f8 = uRam000000018325a050 ^ uRam000000018325a6f8;
  uRam0000000183259f10 = 0x5f9aea80;
  uVar8 = (~uRam000000018325a368 + 0xa0651581) *
          ((uRam000000018325a598 ^ 0x84224099) +
          (ulonglong)((uint)uRam000000018325a598 & 0x84224099) * 2);
  uVar8 = (uVar8 | uRam000000018325a3c8) + (uVar8 & uRam000000018325a3c8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a360 =
       func_0x00018a7f1840((uVar8 | 0x24475519) + (ulonglong)((uint)uVar8 & 0x24475519));
  uVar8 = uRam0000000183259f98 ^ 0xa0651580;
  uRam000000018325a678 = uRam000000018325a3e8 ^ uVar8 ^ 0xa065793c;
  uRam000000018325a518 = (uRam000000018325a518 ^ uVar8) + 0xa065793c ^ 0x77c3fb17bf544c86;
  uRam000000018325a3d8 = (uRam000000018325a3d8 * 0x478a954beab07331 ^ uRam000000018325a518) + uVar8;
  uRam000000018325a138 = uRam000000018325a3d8 ^ uRam000000018325a518;
  uRam000000018325a170 = 0xa065793c;
  uVar8 = (~uRam000000018325a078 + 0x5f9aea81) *
          ((uRam0000000183259fd8 ^ 0x24475a19) +
          (ulonglong)((uint)uRam0000000183259fd8 & 0x24475a19) * 2);
  uVar8 = (uVar8 | uRam000000018325a4b0) + (uVar8 & uRam000000018325a4b0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a2f0 =
       func_0x00018a7f1840((uVar8 | 0x7bddb099) + (ulonglong)((uint)uVar8 & 0x7bddb099));
  uVar8 = uRam000000018325a2f0 & 0x3fffffffffffffff;
  uRam000000018325a6d8 = uRam0000000183259f10 ^ uVar8 ^ 0x1000063bc;
  uRam000000018325a690 = (uRam000000018325a690 ^ uVar8) + 0x1000063bc ^ 0x97c525934ed7eb90;
  uRam000000018325a618 = (uRam000000018325a618 * -0x7d68afa8a173b62d ^ uRam000000018325a690) + uVar8
  ;
  uRam000000018325a108 = uRam000000018325a618 ^ uRam000000018325a690;
  uRam000000018325a3f8 = 0x63bc;
  uVar8 = (uRam000000018325a0a0 ^ _UNK_181888c50) + uRam000000018325a4e8 + 0x84222325;
  uVar11 = (uRam000000018325a4e8 ^ _UNK_181888c58) + uRam000000018325a0a0 + 0xcdd69a85;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018325a0a0 ^ _UNK_181888c50;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018325a4e8 ^ _UNK_181888c58;
  uRam000000018325a1b8 =
       func_0x00018a7f1840((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018325a0a0 + 0xcdd69a85) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018325a4e8 + 0x84222325));
  uRam000000018325a0c0 =
       (uRam000000018325a0c0 ^ uRam000000018325a3a0) - 0xcdd69a85 ^ 0xdd2d21e08c3e1140;
  uRam000000018325a5a0 =
       (uRam000000018325a5a0 * 0x340d4a0aaaaf465b ^ uRam000000018325a0c0) + uRam000000018325a3a0;
  uRam000000018325a0e0 = uRam000000018325a5a0 ^ uRam000000018325a0c0;
  uRam000000018325a308 = 0x3229657b;
  uRam000000018325a5d0 = func_0x00018a7f1840(uRam000000018325a3c0 + 0x57ffeb02ffc4ff ^ 0x74);
  uVar8 = uRam000000018325a5d0 << 0x1a | uRam000000018325a5d0 >> 0x26;
  uRam000000018325a350 = uRam0000000183259fa8 ^ uVar8 ^ 0x1000063bc;
  uRam000000018325a198 = (uRam000000018325a198 ^ uVar8) + 0x1000063bc ^ 0x8b6c783b617d454d;
  uRam000000018325a460 = (uRam000000018325a460 * 0x7cc98e6cca69e8af ^ uRam000000018325a198) + uVar8;
  uRam000000018325a368 = uRam000000018325a460 ^ uRam000000018325a198;
  uRam000000018325a180 = 0x63bc;
  uRam000000018325a438 = func_0x00018a7f1840(uRam0000000183259fe8 + 0x8bff7b450055ff ^ 0x96);
  uRam000000018325a4d8 =
       (uRam000000018325a4d8 ^ uRam000000018325a438) - 0xf78b760 ^ 0xbc8e873a24ae5fb0;
  uRam000000018325a3d8 =
       (uRam000000018325a3d8 * -0x5eb5a535323438dd ^ uRam000000018325a4d8) + uRam000000018325a438;
  uRam000000018325a620 = uRam000000018325a3d8 ^ uRam000000018325a4d8;
  uRam000000018325a318 = 0xf08748a0;
  uVar8 = (uRam000000018325a558 ^ _UNK_181888c60) + uRam000000018325a550 + 0x8b5b3839;
  uVar11 = (uRam000000018325a550 ^ _UNK_181888c68) + uRam000000018325a558 + 0xf08748a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018325a558 ^ _UNK_181888c60;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018325a550 ^ _UNK_181888c68;
  uRam000000018325a4a0 =
       func_0x00018a7f1840((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018325a558 + 0xf08748a0) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018325a550 + 0x8b5b3839));
  uVar8 = uRam000000018325a4a0 >> 1 | uRam000000018325a4a0;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018325a4a0) * -0xe6b5d152cce78ab;
  uRam000000018325a060 = uRam0000000183259fb8 ^ uVar8 ^ 0x1000063bc;
  uRam0000000183259f88 = (uRam0000000183259f88 ^ uVar8) + 0x1000063bc ^ 0x6bfa47ae3400c583;
  uRam000000018325a580 = (uRam000000018325a580 * 0x4a55483b4fd31e99 ^ uRam0000000183259f88) + uVar8;
  uRam000000018325a248 = uRam000000018325a580 ^ uRam0000000183259f88;
  uRam000000018325a5f8 = 0x63bc;
  uRam000000018325a0a8 = func_0x00018a7f1840(uRam000000018325a420 ^ 0xff22000937ff45f9);
  uVar8 = uRam000000018325a0a8 ^ 0x472a11;
  uRam0000000183259fa0 = uRam000000018325a350 ^ uVar8 ^ 0xfc2719fd;
  uRam000000018325a660 = (uRam000000018325a660 ^ uVar8) + 0xfc2719fd ^ 0x928b547e52da27c3;
  uRam000000018325a148 = (uRam000000018325a148 * -0x2b8471ec83a49b0b ^ uRam000000018325a660) + uVar8
  ;
  uRam0000000183259f00 = uRam000000018325a148 ^ uRam000000018325a660;
  uRam000000018325a510 = 0xfc2719fd;
  uVar3 = func_0x00018a7f1840(uRam000000018325a5b0 ^ 0xe2004858009592);
  uRam000000018325a128 =
       (uRam000000018325a128 ^ ~uVar3 & 0xfbdfefec) + 0xfb98c5fd ^ 0x4a304f99e7fe04e2;
  uRam000000018325a600 =
       (uRam000000018325a600 * -0x32ecf7cde213d2bd ^ uRam000000018325a128) +
       (ulonglong)(~uVar3 & 0xfbdfefec);
  uRam000000018325a270 = uRam000000018325a600 ^ uRam000000018325a128;
  uRam0000000183259f98 = 0xfb98c5fd;
  uVar8 = (uRam000000018325a6f0 ^ _UNK_181888c70) + uRam000000018325a1d0 + 0x7ffdccc9;
  uVar11 = (uRam000000018325a1d0 ^ _UNK_181888c78) + uRam000000018325a6f0 + 0x472a11;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018325a6f0 ^ _UNK_181888c70;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018325a1d0 ^ _UNK_181888c78;
  uRam000000018325a518 =
       func_0x00018a7f1840((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018325a6f0 + 0x472a11) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018325a1d0 + 0x7ffdccc9));
  uVar8 = uRam000000018325a518 >> 1 | uRam000000018325a518;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam000000018325a518;
  uRam000000018325a310 = (uRam000000018325a310 ^ uVar8) + 0x472a00 ^ 0x107f8e61a5ac6d04;
  uRam000000018325a688 = (uRam000000018325a688 * -0x604957b7e9f83bcf ^ uRam000000018325a310) + uVar8
  ;
  uRam000000018325a1b0 = uRam000000018325a688 ^ uRam000000018325a310;
  uRam000000018325a6a0 = 0x472a00;
  uVar8 = (uRam000000018325a438 ^ _UNK_181888c80) + uRam000000018325a3c8 + 0x7fbae6d8;
  uVar11 = (uRam000000018325a3c8 ^ _UNK_181888c88) + uRam000000018325a438 + 0x8e5400;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018325a438 ^ _UNK_181888c80;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018325a3c8 ^ _UNK_181888c88;
  uRam000000018325a0d8 =
       func_0x00018a7f1840((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018325a438 + 0x8e5400) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018325a3c8 + 0x7fbae6d8));
  uVar8 = uRam000000018325a0d8 & 0x7f80000000;
  uRam000000018325a0f8 = uRam000000018325a6a0 ^ uVar8 ^ 0xfc2719fd;
  uRam000000018325a120 = (uRam000000018325a120 ^ uVar8) + 0xfc2719fd ^ 0x41cc637ba8805fa2;
  uRam000000018325a5d0 = (uRam000000018325a5d0 * -0x2d91aa8a645742c9 ^ uRam000000018325a120) + uVar8
  ;
  uRam000000018325a4a8 = uRam000000018325a5d0 ^ uRam000000018325a120;
  uRam000000018325a3a0 = 0xfc2719fd;
  uRam000000018325a580 = func_0x00018a7f1840(uRam000000018325a1d8 ^ 0x23007c1d001da9);
  uRam000000018325a200 =
       (uRam000000018325a580 & 0x7fffffffffffffe0) << 9 |
       (uRam000000018325a580 & 0x7fffffffffffffe0) >> 0x37;
  uRam000000018325a520 = uRam000000018325a520 ^ uRam000000018325a200 ^ 0xec5fa0363e92625d;
  uRam000000018325a368 =
       (uRam000000018325a368 * -0x3a4986d9f95a92d5 ^ uRam000000018325a520) + uRam000000018325a200;
  uRam000000018325a2b8 = uRam000000018325a368 ^ uRam000000018325a520;
  uRam0000000183259f78 = 0;
  uVar8 = (~uRam0000000183259ff0 + 0x100000000) *
          ((uRam000000018325a3f0 ^ 0x7ffdccc9) +
          (ulonglong)((uint)uRam000000018325a3f0 & 0x7ffdccc9) * 2);
  uVar8 = (uVar8 | uRam000000018325a158) + (uVar8 & uRam000000018325a158);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a128 =
       func_0x00018a7f1840((uVar8 | 0x80023336) + (ulonglong)((uint)uVar8 & 0x80023336));
  uVar8 = (uRam0000000183259f50 ^ uRam000000018325a128 ^ 0xfbdfefec) + 0x4201013;
  uRam0000000183259f50 = uVar8 ^ 0xaadf83e78fd97582;
  uRam000000018325a158 =
       (uRam000000018325a158 * 0x5293ab527887ab9d ^ uRam0000000183259f50) +
       (uRam000000018325a128 ^ 0xfbdfefec);
  uRam000000018325a6e8 = uRam000000018325a158 ^ uRam0000000183259f50;
  uRam000000018325a000 = 0x4201013;
  uVar8 = ((uVar8 ^ 0xaadf83e70bfb351b) + (ulonglong)((uint)uRam0000000183259f50 & 0x84224099) * 2)
          * -uRam000000018325a350;
  uVar8 = (uVar8 | uRam000000018325a3c0) + (uVar8 & uRam000000018325a3c0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a658 =
       func_0x00018a7f1840((uVar8 | 0x84224099) + (ulonglong)((uint)uVar8 & 0x84224099));
  uRam000000018325a358 = uRam000000018325a4f8 ^ uRam000000018325a2b8 ^ 0x63bc;
  uRam000000018325a390 = (uRam000000018325a390 ^ uRam000000018325a2b8) + 0x63bc ^ 0x1daf0f2916235b3f
  ;
  uRam000000018325a218 =
       (uRam000000018325a218 * -0x4f63e4195a62c183 ^ uRam000000018325a390) + uRam000000018325a2b8;
  uRam000000018325a160 = uRam000000018325a218 ^ uRam000000018325a390;
  uRam000000018325a3d8 = 0x63bc;
  uVar8 = (~uRam000000018325a528 + 0x3bd8e2c9) *
          ((uRam0000000183259f38 ^ 0xbffac1ed) +
          (ulonglong)((uint)uRam0000000183259f38 & 0xbffac1ed) * 2);
  uVar8 = (uVar8 | uRam0000000183259fc8) + (uVar8 & uRam0000000183259fc8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  lRam000000018325a398 =
       func_0x00018a7f1840((uVar8 | 0x84222325) + (ulonglong)((uint)uVar8 & 0x84222325));
  uRam000000018325a648 =
       uRam000000018325a648 ^ lRam000000018325a398 * -0x2d22f0ffb8ca81df ^ 0x525e403e40289af5;
  uRam000000018325a1f0 =
       (uRam000000018325a1f0 * -0xcd26855fca99747 ^ uRam000000018325a648) +
       lRam000000018325a398 * -0x2d22f0ffb8ca81df;
  uRam000000018325a3f8 = uRam000000018325a1f0 ^ uRam000000018325a648;
  uRam000000018325a5d8 = 0;
  uVar8 = ((uRam000000018325a3a0 ^ 0x84224099) +
          (ulonglong)((uint)uRam000000018325a3a0 & 0x84224099) * 2) * -lRam000000018325a458;
  uVar8 = (uVar8 | uRam000000018325a300) + (uVar8 & uRam000000018325a300);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018325a120 =
       func_0x00018a7f1840((uVar8 | 0x84224099) + (ulonglong)((uint)uVar8 & 0x84224099));
  uVar8 = uRam000000018325a120 << 0x39 | uRam000000018325a120 >> 7;
  uRam000000018325a128 = uRam000000018325a070 ^ uVar8 ^ 0x63bc;
  uRam0000000183259fb0 = (uRam0000000183259fb0 ^ uVar8) + 0x63bc ^ 0xc4c75ae403daaf3d;
  uRam000000018325a6e0 = (uRam000000018325a6e0 * -0x53226774e2cb02f9 ^ uRam0000000183259fb0) + uVar8
  ;
  uRam000000018325a468 = uRam000000018325a6e0 ^ uRam0000000183259fb0;
  auVar6._8_8_ = _UNK_181888c98;
  auVar6._0_8_ = uVar10 ^ 0x84222325;
  uRam000000018325a438 = 0x63bc;
  auVar7 = pshufb(auVar6 ^ _UNK_181888ca0,auVar7);
  uVar11 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar11 + uRam0000000183259f38;
  if (auVar7._4_4_ < 0) {
    uVar8 = uRam000000018325a670 ^ uVar11;
  }
  uRam000000018325a280 = func_0x00018a7f1840(SUB161(auVar6 ^ _UNK_181888ca0,5) ^ uVar8);
  lVar4 = uVar10 - ((uint)uVar9 & 0x63bc) * 2;
  uRam000000018325a1d8 =
       (uRam000000018325a1d8 ^ uRam000000018325a280) + lVar4 + 0x63bc ^ 0x9e8a67127f0f817f;
  uRam0000000183259fd8 =
       (uRam0000000183259fd8 * -0x3add0fc47b0d9f73 ^ uRam000000018325a1d8) + uRam000000018325a280;
  uRam0000000183259fc0 = uRam0000000183259fd8 ^ uRam000000018325a1d8;
  uRam000000018325a4a0 = lVar4 + 0x63bcU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15283,0x34e);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a7ecec3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181887288 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fU; aXT (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18a7f18d0, runtime 6ffff24018d0) =====

void FUN_18a7f18d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018a7f190c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181888df0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fU; aXU (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18a7f27c0, runtime 6ffff24027c0) =====

void FUN_18a7f27c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a7f283d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181889320 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



