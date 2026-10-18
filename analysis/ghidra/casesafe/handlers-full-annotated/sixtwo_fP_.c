// ===== Lsixtwo/fP; YO ()V (handler @ image 18a93f520, runtime 6ffff254f520) =====

void FUN_18a93f520(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a93f56a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c9480 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; _7245cca305cbe0dcc8523eb205bc7722 ()V (handler @ image 18a98b3b0, runtime 6ffff259b3b0) =====

void FUN_18a98b3b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a98b4bc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818d7828 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWA ([B)Ljava/lang/String; (handler @ image 18a948bb0, runtime 6ffff2558bb0) =====

void FUN_18a948bb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018a948c50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818cbf90 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fP; aWB (IJ)Ljava/lang/String; (handler @ image 18a971830, runtime 6ffff2581830) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a971830(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar4 = (~uRam0000000183263770 + 0x1c257bc5ace4b4e3) *
          ((uRam0000000183263958 ^ 0x25e2dac39897991e) +
          (uRam0000000183263958 & 0x25e2dac39897991e) * 2);
  uVar4 = (uVar4 | uRam0000000183263a58) + (uVar4 & uRam0000000183263a58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263668 =
       func_0x00018a9782c0((uVar4 | 0x39c7a10634732dfc) + (uVar4 & 0x39c7a10634732dfc));
  uVar4 = (uRam0000000183263668 ^ 0x7ffa3cf9fea0000) & 0xffffffffffe0000;
  uRam00000001832637c0 = (uRam00000001832637c0 ^ uVar4) + 0x3de7fbc7bcf5befb ^ 0xb214c1ab3c7af0d9;
  uRam00000001832638e8 = (uRam00000001832638e8 * -0x38d38291099bf98d ^ uRam00000001832637c0) + uVar4
  ;
  uRam00000001832637e0 = uRam00000001832638e8 ^ uRam00000001832637c0;
  uRam0000000183263818 = 0x3de7fbc7bcf5befb;
  uRam0000000183263918 = func_0x00018a9782c0(uRam0000000183263a80 + 0x2d29d184a631830 ^ 0xcb);
  uRam0000000183263ae8 =
       (uRam0000000183263ae8 ^ uRam0000000183263918 & 0x7ffffffffe000000) + 0xdfa3a31dac1bd16b ^
       0xfe69c53d93f5b348;
  uRam00000001832637c8 =
       (uRam00000001832637c8 * -0x19306f0b3f1851d5 ^ uRam0000000183263ae8) +
       (uRam0000000183263918 & 0x7ffffffffe000000);
  uRam00000001832637e0 = uRam00000001832637c8 ^ uRam0000000183263ae8;
  uRam00000001832639c8 = 0xdfa3a31dac1bd16b;
  uVar4 = (uRam0000000183263720 ^ _UNK_1818d2a40) + uRam0000000183263708 + 0x84222325;
  uVar8 = (uRam0000000183263708 ^ _UNK_1818d2a48) + uRam0000000183263720 + 0x8048689c4334be88;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263720 ^ _UNK_1818d2a40;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183263708 ^ _UNK_1818d2a48;
  uRam00000001832636e0 =
       func_0x00018a9782c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183263720 + 0x8048689c4334be88) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263708 + 0x84222325));
  uRam0000000183263938 =
       (uRam0000000183263938 ^ uRam00000001832636e0) + 0x7fb79763bccb4178 ^ 0xd62521d42b39a22f;
  uRam0000000183263580 =
       (uRam0000000183263580 * -0x727b8ab70495b705 ^ uRam0000000183263938) + uRam00000001832636e0;
  uRam0000000183263af0 = uRam0000000183263580 ^ uRam0000000183263938;
  uRam0000000183263520 = 0x7fb79763bccb4178;
  uRam00000001832638a0 = func_0x00018a9782c0(uRam0000000183263a18 ^ 0x64a247c151e7f1c7);
  uVar4 = (uRam00000001832638a0 ^ 0xb405b8fe1c0f4178) & 0x7fffffffffffffff;
  uRam0000000183263548 = uRam0000000183263810 ^ uVar4 ^ 0x8048689c43353e87;
  uRam0000000183263a58 = (uRam0000000183263a58 ^ uVar4) + 0x8048689c43353e87 ^ 0x60e1ff56c37b8053;
  uRam0000000183263a00 = (uRam0000000183263a00 * 0x1ab44401d079c637 ^ uRam0000000183263a58) + uVar4;
  uRam0000000183263530 = uRam0000000183263a00 ^ uRam0000000183263a58;
  uRam0000000183263780 = 0x8048689c43353e87;
  uRam0000000183263618 = func_0x00018a9782c0(uRam00000001832638d0 ^ 0x5f337d0b39ac23d8);
  uVar4 = (uRam0000000183263618 << 0x2d | uRam0000000183263618 >> 0x13) ^ 0x7fb79763bccb4178;
  uRam00000001832638c0 = uRam0000000183263790 ^ uVar4 ^ 0x7fff;
  uRam00000001832637b0 = (uRam00000001832637b0 ^ uVar4) + 0x7fff ^ 0x27e5627d44095157;
  uRam00000001832635a0 = (uRam00000001832635a0 * 0x3477a9dac4962d07 ^ uRam00000001832637b0) + uVar4;
  uRam0000000183263598 = uRam00000001832635a0 ^ uRam00000001832637b0;
  uRam0000000183263900 = 0x7fff;
  uVar4 = (uRam00000001832637c8 ^ _UNK_1818d2a50) + uRam0000000183263620 + 0x84222325;
  uVar8 = (uRam0000000183263620 ^ _UNK_1818d2a58) + uRam00000001832637c8 + 0xfc2e35da9bf01ab8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832637c8 ^ _UNK_1818d2a50;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183263620 ^ _UNK_1818d2a58;
  uRam0000000183263740 =
       func_0x00018a9782c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001832637c8 + 0xfc2e35da9bf01ab8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263620 + 0x84222325));
  uVar8 = _UNK_1818d2a68;
  uVar4 = _UNK_1818d2a60;
  uVar3 = uRam0000000183263740 << 0x33 | uRam0000000183263740 >> 0xd;
  uRam0000000183263580 = (uRam0000000183263580 ^ uVar3) + 0x3d1ca25640fe548 ^ 0xd7aaf06a57e4fdff;
  uRam00000001832638c8 = (uRam00000001832638c8 * 0x7d7f0ce76075df99 ^ uRam0000000183263580) + uVar3;
  uRam00000001832636b0 = uRam00000001832638c8 ^ uRam0000000183263580;
  uRam00000001832639d0 = 0x3d1ca25640fe548;
  uVar3 = (uRam0000000183263958 ^ _UNK_1818d2a60) + uRam0000000183263a00 + 0x3de7fbc738d79dde;
  uVar9 = (uRam0000000183263a00 ^ _UNK_1818d2a68) + uRam0000000183263958 + 0xdfa3a31dac1bd16b;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183263958 ^ _UNK_1818d2a60;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183263a00 ^ _UNK_1818d2a68;
  uRam00000001832637e8 =
       func_0x00018a9782c0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183263958 + 0xdfa3a31dac1bd16b) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183263a00 + 0x3de7fbc738d79dde));
  uVar3 = uRam00000001832637e8 << 0x3c | uRam00000001832637e8 >> 4;
  uRam00000001832635f0 = uRam0000000183263a70 ^ uVar3 ^ 0x1d8b9ee569119066;
  uRam00000001832638f0 = (uRam00000001832638f0 ^ uVar3) + 0x1d8b9ee569119066 ^ 0x5579fb627c21bf76;
  uRam0000000183263868 = (uRam0000000183263868 * -0x5d86f8906ca96e1d ^ uRam00000001832638f0) + uVar3
  ;
  uRam0000000183263678 = uRam0000000183263868 ^ uRam00000001832638f0;
  uRam0000000183263648 = 0x1d8b9ee569119066;
  uVar3 = (uRam0000000183263890 ^ uVar4) + uRam00000001832638b8 + 0x3de7fbc738d79dde;
  uVar9 = (uRam00000001832638b8 ^ uVar8) + uRam0000000183263890 + 0xdfa3a31dac1bd16b;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183263890 ^ uVar4;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832638b8 ^ uVar8;
  uRam0000000183263808 =
       func_0x00018a9782c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183263890 + 0xdfa3a31dac1bd16b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832638b8 + 0x3de7fbc738d79dde));
  uRam0000000183263928 =
       (uRam0000000183263928 ^ uRam0000000183263808 & 0x7fffffffffffffff) + 0xe24458da10ee6f90 ^
       0x4c89a04286e3e583;
  uRam0000000183263918 =
       (uRam0000000183263918 * 0xf0c1d1d398e6639 ^ uRam0000000183263928) +
       (uRam0000000183263808 & 0x7fffffffffffffff);
  uRam0000000183263620 = uRam0000000183263918 ^ uRam0000000183263928;
  uRam0000000183263608 = 0xe24458da10ee6f90;
  uRam00000001832637e0 = func_0x00018a9782c0(uRam0000000183263918 + 0x511bfebc20f218d6 ^ 0xe9);
  uVar4 = (uRam00000001832637e0 & 0x3ffffffffff) >> 1 | uRam00000001832637e0 & 0x3ffffffffff;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001832637e0 & 0x3ffffffffff;
  uRam0000000183263528 = uRam00000001832639f0 ^ uVar4 ^ 0x1d8b9ee569119066;
  uRam0000000183263600 = (uRam0000000183263600 ^ uVar4) + 0x1d8b9ee569119066 ^ 0xe535e8d187ffeea9;
  uRam0000000183263ab0 = (uRam0000000183263ab0 * 0x58ffb4665ca9de41 ^ uRam0000000183263600) + uVar4;
  uRam0000000183263790 = uRam0000000183263ab0 ^ uRam0000000183263600;
  uRam00000001832636f0 = 0x1d8b9ee569119066;
  uRam0000000183263990 = func_0x00018a9782c0(uRam0000000183263af8 ^ 0xffe3007bdaffe1aa);
  uRam00000001832635e0 = uRam0000000183263990 & 0x1d8b9ee569119066;
  uRam0000000183263720 = uRam0000000183263720 ^ uRam00000001832635e0 ^ 0x56d36ce3085bfdbb;
  uRam0000000183263888 =
       (uRam0000000183263888 * -0x27b1ecae94dc33eb ^ uRam0000000183263720) + uRam00000001832635e0;
  uRam00000001832635c8 = uRam0000000183263888 ^ uRam0000000183263720;
  uRam0000000183263968 = 0;
  uVar4 = (~uRam0000000183263560 + 0xc2180438430a4105) *
          ((uRam0000000183263988 ^ 0x3de7fbc738d79dde) +
          (uRam0000000183263988 & 0x3de7fbc738d79dde) * 2);
  uVar4 = (uVar4 | uRam0000000183263688) + (uVar4 & uRam0000000183263688);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263a68 =
       func_0x00018a9782c0((uVar4 | 0xffffffff7bdddcda) + (uVar4 & 0xffffffff7bdddcda));
  uRam0000000183263688 =
       uRam0000000183263688 ^ ~uRam0000000183263a68 & 0xffffffffff ^ 0xb409dba4dc415d87;
  uRam00000001832639e0 =
       (uRam00000001832639e0 * -0x6f966b7342548aa7 ^ uRam0000000183263688) +
       (~uRam0000000183263a68 & 0xffffffffff);
  uRam0000000183263a00 = uRam00000001832639e0 ^ uRam0000000183263688;
  uRam0000000183263540 = 0;
  uRam0000000183263a08 = func_0x00018a9782c0(lRam0000000183263960 + 0x5bff842a001dffU ^ 0x88);
  uRam0000000183263610 = uRam0000000183263500 ^ uRam0000000183263a08 ^ 0x7fff;
  uRam00000001832635e0 = (uRam00000001832635e0 ^ uRam0000000183263a08) + 0x7fff ^ 0xbd24be281de26eaf
  ;
  uRam00000001832638b8 =
       (uRam00000001832638b8 * -0x52014e9461a66a71 ^ uRam00000001832635e0) + uRam0000000183263a08;
  uRam0000000183263738 = uRam00000001832638b8 ^ uRam00000001832635e0;
  uRam0000000183263ae0 = 0x7fff;
  uRam0000000183263af8 = func_0x00018a9782c0(uRam0000000183263660 ^ 0xffe1007be3001df2);
  uVar4 = (uRam0000000183263af8 ^ 0xf6a739fc6e7c999) & 0xfffffffffffffff;
  uRam0000000183263628 = uRam0000000183263628 ^ uVar4 ^ 0x938057b24e66b86;
  uRam0000000183263a80 = (uRam0000000183263a80 * 0x1d66906eecc5ef45 ^ uRam0000000183263628) + uVar4;
  uRam0000000183263a70 = uRam0000000183263a80 ^ uRam0000000183263628;
  uRam0000000183263a28 = 0;
  uVar4 = ((uRam00000001832635e0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832635e0 & 0x84225cda) * 2) * -uRam00000001832635f0;
  uVar4 = (uVar4 | uRam00000001832637b8) + (uVar4 & uRam00000001832637b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263a60 =
       func_0x00018a9782c0((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = (ulonglong)((~(uint)uRam0000000183263a60 & 0x7fff) << 0xe);
  uRam0000000183263660 = uRam00000001832639f0 ^ uVar4 ^ 0x7fff;
  uRam00000001832637d0 = (uRam00000001832637d0 ^ uVar4) + 0x7fff ^ 0xbfbc0670ecfc99b9;
  uRam0000000183263818 = (uRam0000000183263818 * 0x9dfb981bb634027 ^ uRam00000001832637d0) + uVar4;
  uRam0000000183263a50 = uRam0000000183263818 ^ uRam00000001832637d0;
  uRam0000000183263590 = 0x7fff;
  uVar4 = (~uRam0000000183263978 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183263878) +
          ((param_4 ^ 0x84222325) & uRam0000000183263878) * 2);
  uVar4 = (uVar4 | uRam0000000183263550) + (uVar4 & uRam0000000183263550);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263620 =
       func_0x00018a9782c0((param_4 ^ 0x84225cda | uVar4) + (uVar4 & (param_4 ^ 0x84225cda)));
  uVar4 = uRam0000000183263620 - (uRam0000000183263620 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183263620;
  uVar4 = uVar8 >> 1 | uVar8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar8;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar3 = (ulonglong)uVar2;
  uRam0000000183263aa0 = (uRam0000000183263aa0 ^ uVar8) + uVar3 ^ 0x682bffae96eadd77;
  uRam0000000183263958 = (uRam0000000183263958 * 0x33f1e75bcd4e70ff ^ uRam0000000183263aa0) + uVar8;
  uRam0000000183263970 = uRam0000000183263958 ^ uRam0000000183263aa0;
  uVar8 = (ulonglong)param_3;
  uVar4 = uVar3 ^ 0x84222325 ^ uRam0000000183263a28;
  lVar5 = (uVar3 ^ 0x84222325) + uRam0000000183263a60;
  uVar9 = uVar4 + lVar5;
  uVar10 = (uVar8 ^ uRam0000000183263a60) + uRam0000000183263a28 + uVar8;
  uVar4 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar4;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar8 ^ uRam0000000183263a60;
  uRam0000000183263668 = uVar3;
  uRam0000000183263790 =
       func_0x00018a9782c0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183263a28 + uVar8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar3 = (uVar3 + uVar8) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183263630 =
       (uRam0000000183263630 ^ uRam0000000183263790 * 0x14ce42da4cc7e1d3) + uVar3 ^
       0x8047fd815c7265fd;
  uRam0000000183263a90 =
       (uRam0000000183263a90 * 0x2552b4e239698e3d ^ uRam0000000183263630) +
       uRam0000000183263790 * 0x14ce42da4cc7e1d3;
  uRam0000000183263a68 = uRam0000000183263a90 ^ uRam0000000183263630;
  uVar3 = uVar3 & 0xffffffff;
  uVar4 = (~uRam0000000183263670 + 0x6b37c5c4) *
          ((uRam00000001832635d0 ^ 0xdde4353e) +
          (ulonglong)((uint)uRam00000001832635d0 & 0xdde4353e) * 2);
  uVar4 = (uVar4 | uRam0000000183263718) + (uVar4 & uRam0000000183263718);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263508 = uVar3;
  uRam0000000183263aa8 =
       func_0x00018a9782c0((uVar4 | 0xb6d3f0fd) + (ulonglong)((uint)uVar4 & 0xb6d3f0fd));
  uRam0000000183263518 =
       (uRam0000000183263518 ^ uRam0000000183263aa8 & 0xffffffffffc00000) + 0x7bf7d7db ^
       0x24603e7e323ac84e;
  uRam00000001832639d0 =
       (uRam00000001832639d0 * -0x2d92a7bcaf8c40bd ^ uRam0000000183263518) +
       (uRam0000000183263aa8 & 0xffffffffffc00000);
  uRam00000001832636d8 = uRam00000001832639d0 ^ uRam0000000183263518;
  uRam0000000183263698 = 0x7bf7d7db;
  uVar4 = (~uRam0000000183263958 + 0xba48c4a0) *
          ((uRam0000000183263928 ^ 0x9f0a85c2) +
          (ulonglong)((uint)uRam0000000183263928 & 0x9f0a85c2) * 2);
  uVar4 = (uVar4 | uRam0000000183263860) + (uVar4 & uRam0000000183263860);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832637d0 =
       func_0x00018a9782c0((uVar4 | 0x2542415d) + (ulonglong)((uint)uVar4 & 0x2542415d));
  uVar2 = ~(uint)uRam00000001832637d0 & 0x1b28a6e7;
  uVar4 = (ulonglong)(uVar2 >> 0x18) | (ulonglong)uVar2 << 0x28;
  uRam00000001832639c0 = (uRam00000001832639c0 ^ uVar4) + 0xa1606278 ^ 0xeecd0e00b36b50d2;
  uRam0000000183263870 = (uRam0000000183263870 * -0x497db7d0649d5975 ^ uRam00000001832639c0) + uVar4
  ;
  uRam0000000183263610 = uRam0000000183263870 ^ uRam00000001832639c0;
  uRam0000000183263548 = 0xa1606278;
  uVar4 = (~uRam00000001832637f8 + 0x56992f61) *
          ((uRam0000000183263730 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183263730 & 0x84222325) * 2);
  uVar4 = (uVar4 | 0xa1606278) + (uVar4 & 0xa1606278);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263ae8 =
       func_0x00018a9782c0((uVar4 | 0xd2bb0c45) + (ulonglong)((uint)uVar4 & 0xd2bb0c45));
  uVar8 = uRam0000000183263ae8 * -0x7269c2f6b675b071;
  uVar4 = uVar8 >> 1 | uVar8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar8;
  uRam0000000183263ac0 = (uRam0000000183263ac0 ^ uVar8) - 0x56992f60 ^ 0x6250700224a4f9b6;
  uRam0000000183263710 = (uRam0000000183263710 * 0x1e917f07e4264603 ^ uRam0000000183263ac0) + uVar8;
  uRam0000000183263998 = uRam0000000183263710 ^ uRam0000000183263ac0;
  uRam0000000183263628 = 0xa966d0a0;
  uVar4 = (~uRam0000000183263670 + 0xa9a13462) *
          ((uRam0000000183263730 ^ 0x842263de) +
          (ulonglong)((uint)uRam0000000183263730 & 0x842263de) * 2);
  uVar4 = (uVar4 | uRam0000000183263640) + (uVar4 & uRam0000000183263640);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263af0 =
       func_0x00018a9782c0((uVar4 | 0x2d8357bf) + (ulonglong)((uint)uVar4 & 0x2d8357bf));
  uRam0000000183263a88 = uRam0000000183263870 ^ uRam0000000183263648 ^ 0xa9a1755c;
  uRam0000000183263a08 =
       (uRam0000000183263a08 ^ uRam0000000183263648) + 0xa9a1755c ^ 0xd29db375a27cd631;
  uRam00000001832637b0 =
       (uRam00000001832637b0 * 0x49529ea8a1ff6b3d ^ uRam0000000183263a08) + uRam0000000183263648;
  uRam0000000183263820 = uRam00000001832637b0 ^ uRam0000000183263a08;
  uRam00000001832637e8 = 0xa9a1755c;
  uVar4 = (~uRam00000001832639d8 + 0x565ecba0) *
          ((uRam0000000183263808 ^ 0x2d835679) +
          (ulonglong)((uint)uRam0000000183263808 & 0x2d835679) * 2);
  uVar4 = (uVar4 | uRam00000001832639e0) + (uVar4 & uRam00000001832639e0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832637e8 =
       func_0x00018a9782c0((uVar4 | 0x7bdd9de6) + (ulonglong)((uint)uVar4 & 0x7bdd9de6));
  uVar4 = uRam00000001832637e8 & 0x7fffffffffffffff;
  uRam00000001832637c0 = uRam0000000183263a20 ^ uVar4 ^ 0x1000040fb;
  uRam00000001832635b8 = (uRam00000001832635b8 ^ uVar4) + 0x1000040fb ^ 0xbe3badc05d1129b4;
  uRam0000000183263788 = (uRam0000000183263788 * 0xdb1fb3cd0a3a34b ^ uRam00000001832635b8) + uVar4;
  uRam0000000183263848 = uRam0000000183263788 ^ uRam00000001832635b8;
  uRam0000000183263ac0 = 0x40fb;
  uRam00000001832638c8 = func_0x00018a9782c0(uRam0000000183263a38 ^ 0xffa9ffe66800203e);
  uRam0000000183263a68 =
       (uRam0000000183263a68 ^ uRam00000001832638c8 * 0x443b09a7c119e7b7) - 0xaa01498d ^
       0xf88192a0bf2de3a4;
  uRam0000000183263500 =
       (uRam0000000183263500 * 0x2a527670f3eb609d ^ uRam0000000183263a68) +
       uRam00000001832638c8 * 0x443b09a7c119e7b7;
  uRam0000000183263ac0 = uRam0000000183263500 ^ uRam0000000183263a68;
  uRam0000000183263798 = 0x55feb673;
  uRam00000001832639f0 = func_0x00018a9782c0(uRam0000000183263550 + 0x2a002a4effe0ff ^ 0x6e);
  uVar4 = uRam00000001832639f0 >> 1 | uRam00000001832639f0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001832639f0;
  uVar4 = (uVar4 & 0xffffffffffffff80) << 0x2c | uVar4 >> 0x14;
  uRam0000000183263840 = uRam0000000183263628 ^ uVar4 ^ 0xaa018a88;
  uRam0000000183263a50 = (uRam0000000183263a50 ^ uVar4) + 0xaa018a88 ^ 0x9f5c906775bcd3df;
  uRam00000001832638d0 = (uRam00000001832638d0 * 0x714bf3f142c91a9 ^ uRam0000000183263a50) + uVar4;
  uRam00000001832636c8 = uRam00000001832638d0 ^ uRam0000000183263a50;
  uRam0000000183263938 = 0xaa018a88;
  uRam0000000183263a48 = func_0x00018a9782c0(uRam0000000183263660 ^ 0xffe50074c9ffbc23);
  uVar4 = uRam0000000183263a48 >> 1 | uRam0000000183263a48;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183263a48;
  uRam00000001832638e0 = uRam00000001832635a0 ^ uVar4 ^ 0x1000040fb;
  uRam0000000183263738 = (uRam0000000183263738 ^ uVar4) + 0x1000040fb ^ 0xe03d073402f065db;
  uRam00000001832637b8 = (uRam00000001832637b8 * 0x2d3048ccfb5d15c5 ^ uRam0000000183263738) + uVar4;
  uRam0000000183263898 = uRam00000001832637b8 ^ uRam0000000183263738;
  uRam00000001832636c8 = 0x40fb;
  uVar4 = (uRam0000000183263640 ^ _UNK_1818d2a70) + uRam0000000183263510 + 0xffd5f4fe;
  uVar8 = (uRam0000000183263510 ^ _UNK_1818d2a78) + uRam0000000183263640 + 0xa1606278;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263640 ^ _UNK_1818d2a70;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183263510 ^ _UNK_1818d2a78;
  uRam0000000183263800 =
       func_0x00018a9782c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183263640 + 0xa1606278) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263510 + 0xffd5f4fe));
  uVar4 = (uRam0000000183263800 ^ 0xa1606278) & 0x7fffffffffffffff;
  uRam00000001832636b0 = uRam0000000183263948 ^ uVar4 ^ 0x11d583a53;
  uRam0000000183263968 = (uRam0000000183263968 ^ uVar4) + 0x11d583a53 ^ 0x35f82807b7aa013b;
  uRam0000000183263588 = (uRam0000000183263588 * -0xf6d5ef9d2783ae1 ^ uRam0000000183263968) + uVar4;
  uRam00000001832638b8 = uRam0000000183263588 ^ uRam0000000183263968;
  uRam0000000183263a40 = 0x1d583a53;
  uVar4 = (~uRam0000000183263860 + 0xa1606279) *
          ((uRam0000000183263a18 ^ 0xffd5f4fe) +
          (ulonglong)((uint)uRam0000000183263a18 & 0xffd5f4fe) * 2);
  uVar4 = (uVar4 | uRam0000000183263918) + (uVar4 & uRam0000000183263918);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263998 =
       func_0x00018a9782c0((uVar4 | 0x5eb59686) + (ulonglong)((uint)uVar4 & 0x5eb59686));
  uVar4 = uRam0000000183263998 << 0xd | uRam0000000183263998 >> 0x33;
  uRam0000000183263520 = (uRam0000000183263520 ^ uVar4) + 0xda97b5a3 ^ 0xb43c6d0dd9cb87a5;
  uRam0000000183263798 = (uRam0000000183263798 * 0x600b40ad5f622b03 ^ uRam0000000183263520) + uVar4;
  uRam0000000183263808 = uRam0000000183263798 ^ uRam0000000183263520;
  uRam0000000183263ad8 = 0xda97b5a3;
  uRam0000000183263a68 = func_0x00018a9782c0(lRam0000000183263538 + 0xff8e003a820072ffU ^ 0xb4);
  uRam0000000183263618 =
       (uRam0000000183263618 ^ uRam0000000183263a68 & 0x7fffffffffffffff) + 0x21604258 ^
       0x83a60f1de78bc500;
  uRam00000001832635b8 =
       (uRam00000001832635b8 * -0x7cb607192875f545 ^ uRam0000000183263618) +
       (uRam0000000183263a68 & 0x7fffffffffffffff);
  uRam0000000183263758 = uRam00000001832635b8 ^ uRam0000000183263618;
  uRam0000000183263660 = 0x21604258;
  uVar4 = (uRam0000000183263830 ^ _UNK_1818d2a80) + uRam00000001832636b8 + 0x997a1976;
  uVar8 = (uRam00000001832636b8 ^ _UNK_1818d2a88) + uRam0000000183263830 + 0x1d583a53;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263830 ^ _UNK_1818d2a80;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832636b8 ^ _UNK_1818d2a88;
  uRam00000001832637b8 =
       func_0x00018a9782c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183263830 + 0x1d583a53) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832636b8 + 0x997a1976));
  uRam0000000183263a38 = (uRam00000001832637b8 ^ 0x35d1b9ee9018cba) & 0x7fffffffffffffff;
  uRam0000000183263890 = uRam0000000183263890 ^ uRam0000000183263a38 ^ 0x25408564c67c05d2;
  uRam0000000183263680 =
       (uRam0000000183263680 * 0x552a9a8989cd0f77 ^ uRam0000000183263890) + uRam0000000183263a38;
  uRam00000001832636f8 = uRam0000000183263680 ^ uRam0000000183263890;
  uRam0000000183263a00 = 0;
  uVar4 = (uRam00000001832635f8 ^ 0x842263de) + uRam0000000183263760 + 0x842263de;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832635f8 ^ 0x842263de;
  uVar8 = ((uRam0000000183263760 + uRam00000001832635f8) * 0x2000 |
          uRam0000000183263760 + uRam00000001832635f8 >> 0x33) ^ uRam0000000183263760;
  uRam0000000183263830 =
       func_0x00018a9782c0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001832635f8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263760 + 0x842263de));
  uRam0000000183263890 = uRam00000001832637e0 ^ uRam0000000183263830 ^ 0x40fb;
  uRam0000000183263610 = (uRam0000000183263610 ^ uRam0000000183263830) + 0x40fb ^ 0x52ee8c8393fb25c7
  ;
  uRam00000001832636c0 =
       (uRam00000001832636c0 * -0x2f204a1ecca2b03b ^ uRam0000000183263610) + uRam0000000183263830;
  uRam00000001832636f0 = uRam00000001832636c0 ^ uRam0000000183263610;
  uRam0000000183263530 = 0x40fb;
  uRam0000000183263860 = func_0x00018a9782c0(uRam0000000183263988 ^ 0xbbffaad9ffa287);
  uVar4 = uRam0000000183263860 << 0x2b | uRam0000000183263860 >> 0x15;
  uRam0000000183263588 = uRam0000000183263588 ^ uVar4 ^ 0xe2591d468576510c;
  uRam00000001832638f0 = (uRam00000001832638f0 * -0x2a95b1368b303f21 ^ uRam0000000183263588) + uVar4
  ;
  uRam00000001832639a8 = uRam00000001832638f0 ^ uRam0000000183263588;
  uRam0000000183263a80 = 0;
  uVar4 = (uRam00000001832636c0 ^ 0x842263de) + uRam0000000183263940 + 0x842263de;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832636c0 ^ 0x842263de;
  uVar8 = ((uRam0000000183263940 + uRam00000001832636c0) * 0x2000 |
          uRam0000000183263940 + uRam00000001832636c0 >> 0x33) ^ uRam0000000183263940;
  uRam0000000183263868 =
       func_0x00018a9782c0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001832636c0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263940 + 0x842263de));
  uVar4 = uRam0000000183263868 << 8 | uRam0000000183263868 >> 0x38;
  uVar8 = uVar4 >> 1 | uVar4;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4;
  uRam0000000183263828 = uRam0000000183263af8 ^ uVar4 ^ 0x40fb;
  uRam0000000183263690 = (uRam0000000183263690 ^ uVar4) + 0x40fb ^ 0xe1084ba8db20d243;
  uRam00000001832638a0 = (uRam00000001832638a0 * -0x51b7eb42371d65c1 ^ uRam0000000183263690) + uVar4
  ;
  uRam0000000183263550 = uRam00000001832638a0 ^ uRam0000000183263690;
  uRam00000001832637a0 = 0x40fb;
  uRam0000000183263648 = func_0x00018a9782c0(uRam0000000183263730 + 0xffe2ff83db001dff ^ 0x43);
  uRam00000001832636e0 =
       uRam00000001832636e0 ^ uRam0000000183263648 ^ 0x59c6161b ^ 0x8adc025f417d7022;
  uRam0000000183263820 =
       (uRam0000000183263820 * -0x120529aa0977613d ^ uRam00000001832636e0) +
       (uRam0000000183263648 ^ 0x59c6161b);
  uRam00000001832637c8 = uRam0000000183263820 ^ uRam00000001832636e0;
  uRam0000000183263a08 = 0;
  uRam0000000183263928 = func_0x00018a9782c0(uRam0000000183263508 ^ 0x20ff84c9ffdd53);
  uVar4 = uRam0000000183263928 & 0xfffffffffffe0000;
  uRam00000001832638a0 = uRam0000000183263920 ^ uVar4 ^ 0x40fb;
  uRam0000000183263758 = (uRam0000000183263758 ^ uVar4) + 0x40fb ^ 0xb499e2afa575db35;
  uRam0000000183263848 = (uRam0000000183263848 * 0x190865223eeb6a3d ^ uRam0000000183263758) + uVar4;
  uRam00000001832637e8 = uRam0000000183263848 ^ uRam0000000183263758;
  auVar6._8_8_ = _UNK_1818d2a98;
  auVar6._0_8_ = uVar3 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_1818d2aa0,_UNK_1800170c0);
  uRam0000000183263628 = 0x40fb;
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar8 + uRam00000001832638a0;
  if (auVar7._4_4_ < 0) {
    uVar4 = uRam00000001832636e8 ^ uVar8;
  }
  uRam0000000183263660 = func_0x00018a9782c0(SUB161(auVar6 ^ _UNK_1818d2aa0,5) ^ uVar4);
  uVar4 = (uVar3 * 0x40fb ^ uRam0000000183263660) & 0x7fff00000;
  uRam00000001832638b0 = uVar3 ^ 0x40fb;
  uRam0000000183263a08 = (uRam0000000183263a08 ^ uVar4) + uRam00000001832638b0 ^ 0xd2ed115ea6766311;
  uRam0000000183263a80 = (uRam0000000183263a80 * 0x7ade3a264c7506b9 ^ uRam0000000183263a08) + uVar4;
  uRam0000000183263750 = uRam0000000183263a80 ^ uRam0000000183263a08;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a973a22 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818d10b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18a978350, runtime 6ffff2588350) =====

void FUN_18a978350(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018a97838c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818d2c00 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fP; aWD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18a979240, runtime 6ffff2589240) =====

void FUN_18a979240(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a9792bd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818d3140 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWE (IJ)I (handler @ image 18a97bd00, runtime 6ffff258bd00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97bd00(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = (uRam0000000183263cd8 ^ _UNK_1818d5ea0) + uRam0000000183263dc0 + 0x77e2e6e3a22ca79e;
  uVar5 = (uRam0000000183263dc0 ^ _UNK_1818d5ea8) + uRam0000000183263cd8 + 0x5ce45f8506b70e91;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263cd8 ^ _UNK_1818d5ea0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263dc0 ^ _UNK_1818d5ea8;
  uRam0000000183263c70 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183263cd8 + 0x5ce45f8506b70e91) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183263dc0 + 0x77e2e6e3a22ca79e));
  uRam0000000183263b98 =
       (uRam0000000183263b98 ^ uRam0000000183263c70 & 0x1ffffffff) + 0x7fe6ffe726bf8ebb ^
       0xf5fc6c3132562e41;
  uRam0000000183264068 =
       (uRam0000000183264068 * -0x205466c7b9a743bd ^ uRam0000000183263b98) +
       (uRam0000000183263c70 & 0x1ffffffff);
  uRam0000000183263dc0 = uRam0000000183264068 ^ uRam0000000183263b98;
  uRam0000000183263c90 = 0x7fe6ffe726bf8ebb;
  uVar4 = (~uRam0000000183263d10 + 0x28ae6554d7382d41) *
          ((uRam0000000183263d28 ^ 0xa7780989aeb7cb1a) +
          (uRam0000000183263d28 & 0x27780989aeb7cb1a) * 2);
  uVar4 = (uVar4 | uRam0000000183263e30) + (uVar4 & uRam0000000183263e30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263cb0 =
       func_0x00018a987140((uVar4 | 0x8fd66cdd798fe65a) + (uVar4 & 0x8fd66cdd798fe65a));
  uVar4 = uRam0000000183263cb0 << 0x3b | uRam0000000183263cb0 >> 5;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar4;
  uRam00000001832640d8 = (uRam00000001832640d8 ^ uVar4) + 0x8fd66cddfdadc57f ^ 0x4642ed24f10e56da;
  uRam0000000183264030 = (uRam0000000183264030 * 0x3c63d30272427649 ^ uRam00000001832640d8) + uVar4;
  uRam0000000183263f20 = uRam0000000183264030 ^ uRam00000001832640d8;
  uRam0000000183263c28 = 0x8fd66cddfdadc57f;
  uRam0000000183263b88 = func_0x00018a987140(uRam0000000183263c68 ^ 0x9bfc21a5f2265141);
  uRam0000000183263ba0 =
       (uRam0000000183263ba0 ^ uRam0000000183263b88 & 0xfffffffffff80000) + 0xc0ddc553a18fd0d5 ^
       0x1c83f6dca9ad7b6a;
  uRam0000000183263ba8 =
       (uRam0000000183263ba8 * -0x2f610e42e755bb29 ^ uRam0000000183263ba0) +
       (uRam0000000183263b88 & 0xfffffffffff80000);
  uRam00000001832640b0 = uRam0000000183263ba8 ^ uRam0000000183263ba0;
  uRam0000000183264080 = 0xc0ddc553a18fd0d5;
  uRam0000000183264078 = func_0x00018a987140(lRam0000000183263cc8 + 0x6bcf1e3a90e5d236U ^ 0x15);
  uVar5 = uRam0000000183264078 ^ 0x3f223aac5e707fff;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar5) *
          -0x5c654856376ae2fd;
  uRam0000000183263b78 = uRam0000000183263d78 ^ uVar4 ^ 0x3f223aac5e70af2a;
  uRam0000000183263bf0 = (uRam0000000183264048 ^ uVar4) + 0x3f223aac5e70af2a ^ 0x9c91b5a586b35662;
  uRam0000000183264048 = (uRam0000000183264048 * 0x80d3a72510f86e1 ^ uRam0000000183263bf0) + uVar4;
  uRam0000000183263bf0 = uRam0000000183264048 ^ uRam0000000183263bf0;
  uRam0000000183263be0 = 0x3f223aac5e70af2a;
  uVar4 = (uRam0000000183263f40 ^ _UNK_1818d5eb0) + uRam0000000183263db8 + 0x3f223aacda528c0f;
  uVar5 = (uRam0000000183263db8 ^ _UNK_1818d5eb8) + uRam0000000183263f40 + 0xc0ddc553a18fd0d5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263f40 ^ _UNK_1818d5eb0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263db8 ^ _UNK_1818d5eb8;
  uRam0000000183263c80 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183263f40 + 0xc0ddc553a18fd0d5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183263db8 + 0x3f223aacda528c0f));
  uRam0000000183263b70 = uRam0000000183263c78 ^ uRam0000000183263d38 ^ 0x7fff;
  uRam0000000183263b40 = (uRam0000000183263b40 ^ uRam0000000183263d38) + 0x7fff ^ 0xf1e59f6dde55ee1f
  ;
  uRam0000000183263fd8 =
       (uRam0000000183263fd8 * -0x1d380839693b30eb ^ uRam0000000183263b40) + uRam0000000183263d38;
  uRam0000000183263f48 = uRam0000000183263fd8 ^ uRam0000000183263b40;
  uRam0000000183263bd0 = 0x7fff;
  uRam0000000183263ba8 = func_0x00018a987140(uRam0000000183264098 + 0xba73d13352a262a8 ^ 0xa2);
  uRam0000000183263e80 =
       (uRam0000000183263e80 ^ uRam0000000183263ba8 ^ 0xbb37a24650c0b797) + 0x44c85db9af3f4869 ^
       0x9cd290fb8e1cbbf9;
  uRam0000000183263c60 =
       (uRam0000000183263c60 * -0x1dfa15b6636e10fb ^ uRam0000000183263e80) +
       (uRam0000000183263ba8 ^ 0xbb37a24650c0b797);
  uRam0000000183263fc0 = uRam0000000183263c60 ^ uRam0000000183263e80;
  uRam0000000183263b30 = 0x44c85db9af3f4869;
  uVar4 = (uRam0000000183263c98 ^ _UNK_1818d5ec0) + uRam0000000183263e78 + 0x84225cda;
  uVar5 = (uRam0000000183263e78 ^ _UNK_1818d5ec8) + uRam0000000183263c98 + 0xbb37a24650c0b797;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263c98 ^ _UNK_1818d5ec0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263e78 ^ _UNK_1818d5ec8;
  uRam0000000183263f70 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183263c98 + 0xbb37a24650c0b797) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263e78 + 0x84225cda));
  uRam0000000183263ca0 = uRam0000000183263f20 ^ uRam0000000183263fa0 ^ 0xbb37a24650c13796;
  uRam0000000183263d50 =
       (uRam0000000183263d50 ^ uRam0000000183263fa0) + 0xbb37a24650c13796 ^ 0x3668153ac28d57cd;
  uRam0000000183263ec0 =
       (uRam0000000183263ec0 * -0x494d713d6e41160b ^ uRam0000000183263d50) + uRam0000000183263fa0;
  uRam0000000183263df8 = uRam0000000183263ec0 ^ uRam0000000183263d50;
  uRam0000000183264018 = 0xbb37a24650c13796;
  uRam0000000183263f88 = func_0x00018a987140(lRam0000000183263f28 + 0xeb5b596b2a57a364U ^ 0xab);
  uVar4 = (uRam0000000183263f88 ^ 0x41f9f37faecbfc86) & 0x7fffffffffffffff;
  uRam0000000183263da8 = uRam0000000183264058 ^ uVar4 ^ 0x7fff;
  uRam0000000183263fc8 = (uRam0000000183263fc8 ^ uVar4) + 0x7fff ^ 0x3b00eccd465a1d06;
  uRam0000000183263d68 = (uRam0000000183263d68 * -0x4917e4d0834ac3c3 ^ uRam0000000183263fc8) + uVar4
  ;
  uRam0000000183263f00 = uRam0000000183263d68 ^ uRam0000000183263fc8;
  uRam0000000183263f18 = 0x7fff;
  uVar4 = (~uRam0000000183263cc0 + 0xebf5390d90334d9c) *
          ((uRam0000000183263ef0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183263ef0 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183263c48) + (uVar4 & uRam0000000183263c48);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263f88 =
       func_0x00018a987140((uVar4 | 0xebf5390d14116ebe) + (uVar4 & 0xebf5390d14116ebe));
  uRam0000000183263bb0 =
       (uRam0000000183263bb0 ^ uRam0000000183264060) + 0x140ac6f26fccb265 ^ 0x183c25ef2ebcdb2;
  uRam0000000183264028 =
       (uRam0000000183264028 * -0x3562fd6eaaae015f ^ uRam0000000183263bb0) + uRam0000000183264060;
  uRam0000000183264098 = uRam0000000183264028 ^ uRam0000000183263bb0;
  uRam0000000183263fa0 = 0x140ac6f26fccb265;
  uVar4 = (~uRam0000000183263eb0 + 0xebf5390d90334d9c) *
          ((uRam0000000183264090 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183264090 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183263ea8) + (uVar4 & uRam0000000183263ea8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263ea8 =
       func_0x00018a987140((uVar4 | 0xebf5390d14111141) + (uVar4 & 0xebf5390d14111141));
  uVar4 = uRam0000000183263ea8 * 0x2e52c1cb14815a75;
  uRam0000000183263b08 = uRam0000000183264030 ^ uVar4 ^ 0xebf5390d9033cd9a;
  uRam0000000183263f18 = (uRam0000000183263f18 ^ uVar4) + 0xebf5390d9033cd9a ^ 0x185d75a28a3cc8fe;
  uRam0000000183263fd8 = (uRam0000000183263fd8 * -0x6c7a86604706097b ^ uRam0000000183263f18) + uVar4
  ;
  uRam0000000183263b98 = uRam0000000183263fd8 ^ uRam0000000183263f18;
  uRam00000001832640b8 = 0xebf5390d9033cd9a;
  uVar4 = (uRam0000000183263e58 ^ _UNK_1818d5ed0) + uRam0000000183263ef0 + 0xebf5390d1411eebf;
  uVar5 = (uRam0000000183263ef0 ^ _UNK_1818d5ed8) + uRam0000000183263e58 + 0x140ac6f26fccb265;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263e58 ^ _UNK_1818d5ed0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263ef0 ^ _UNK_1818d5ed8;
  uRam0000000183263f00 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183263e58 + 0x140ac6f26fccb265) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183263ef0 + 0xebf5390d1411eebf));
  uRam0000000183263b58 = uRam0000000183263dc8 ^ uRam0000000183263ef0 ^ 0x7fff;
  uRam0000000183263f48 = (uRam0000000183263f48 ^ uRam0000000183263ef0) + 0x7fff ^ 0x629967d3ed160164
  ;
  uRam0000000183263b40 =
       (uRam0000000183263b40 * -0x3daae703273b162f ^ uRam0000000183263f48) + uRam0000000183263ef0;
  uRam0000000183264050 = uRam0000000183263b40 ^ uRam0000000183263f48;
  uRam0000000183263df8 = 0x7fff;
  uRam0000000183263b10 = func_0x00018a987140(uRam0000000183263b88 ^ 0xc9e7efdea08ecfd6);
  uVar4 = ~uRam0000000183263b10 & 0x7fe6ffe726bf8ebb;
  uRam0000000183263ec8 = uRam0000000183263f78 ^ uVar4 ^ 0xfbd6cc5246d543a;
  uRam0000000183263cd8 = (uRam0000000183263cd8 ^ uVar4) + 0xfbd6cc5246d543a ^ 0x46e3ad5533e297d3;
  uRam0000000183263e68 = (uRam0000000183263e68 * 0x3da90239f7a518c1 ^ uRam0000000183263cd8) + uVar4;
  uRam0000000183263fa0 = uRam0000000183263e68 ^ uRam0000000183263cd8;
  uRam0000000183263ec0 = 0xfbd6cc5246d543a;
  uVar4 = (uRam0000000183263c38 ^ _UNK_1818d5ee0) + uRam0000000183263e78 + 0x7fe6ffe7a29dad9e;
  uVar5 = (uRam0000000183263e78 ^ _UNK_1818d5ee8) + uRam0000000183263c38 + 0x8fd66cddfdadc57f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263c38 ^ _UNK_1818d5ee0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263e78 ^ _UNK_1818d5ee8;
  uRam0000000183263be8 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183263c38 + 0x8fd66cddfdadc57f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183263e78 + 0x7fe6ffe7a29dad9e));
  uVar4 = uRam0000000183263be8 >> 1 | uRam0000000183263be8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183263be8;
  uRam0000000183264090 = (uRam0000000183264090 ^ uVar4) + 0xfc66cc524ad843b ^ 0x6fa66a44076797d7;
  uRam0000000183263bd8 = (uRam0000000183263bd8 * -0x1c342d7a6244e099 ^ uRam0000000183264090) + uVar4
  ;
  uRam0000000183263e30 = uRam0000000183263bd8 ^ uRam0000000183264090;
  uRam0000000183263de0 = 0xfc66cc524ad843b;
  uVar4 = (uRam0000000183263c60 ^ _UNK_1818d5ef0) + uRam0000000183263bc8 + 0xf030933a5f3068e1;
  uVar5 = (uRam0000000183263bc8 ^ _UNK_1818d5ef8) + uRam0000000183263c60 + 0x1f8cd98a495b0876;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263c60 ^ _UNK_1818d5ef0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263bc8 ^ _UNK_1818d5ef8;
  uRam0000000183263de0 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183263c60 + 0x1f8cd98a495b0876) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183263bc8 + 0xf030933a5f3068e1));
  uVar4 = uRam0000000183263de0 - (uRam0000000183263de0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uRam0000000183263de0 ^ 0xf030933adb124bc4 ^
          (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6;
  uVar4 = uVar4 << 0x39 | uVar4 >> 7;
  uRam0000000183263c30 = uRam0000000183263b20 ^ uVar4 ^ 0xfbd6cc5246d543a;
  uRam0000000183263dd8 = (uRam0000000183263dd8 ^ uVar4) + 0xfbd6cc5246d543a ^ 0xb47534d0acc15ced;
  uRam0000000183263d98 = (uRam0000000183263d98 * 0x2510dfa6f722c92d ^ uRam0000000183263dd8) + uVar4;
  uRam0000000183263e40 = uRam0000000183263d98 ^ uRam0000000183263dd8;
  uRam0000000183263cd8 = 0xfbd6cc5246d543a;
  uVar4 = (~uRam0000000183263c60 + 0xfbd6cc5246d543b) *
          ((uRam0000000183263c68 ^ 0xfbd6cc5a04f771f) +
          (uRam0000000183263c68 & 0xfbd6cc5a04f771f) * 2);
  uVar4 = (uVar4 | uRam0000000183263f18) + (uVar4 & uRam0000000183263f18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263d28 =
       func_0x00018a987140((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam0000000183264080 = uRam0000000183264080 ^ uRam0000000183263d28 ^ 0x8241ea828814499b;
  uRam0000000183263c48 =
       (uRam0000000183263c48 * -0x74d101a18be0cef7 ^ uRam0000000183264080) + uRam0000000183263d28;
  uRam00000001832640d8 = uRam0000000183263c48 ^ uRam0000000183264080;
  uRam0000000183263c98 = 0;
  uVar4 = ~uRam0000000183263f30 *
          ((uRam0000000183263c70 ^ 0x7fe6ffe7a29dad9e) +
          (uRam0000000183263c70 & 0x7fe6ffe7a29dad9e) * 2);
  uVar4 = (uVar4 | uRam0000000183263b80) + (uVar4 & uRam0000000183263b80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263e98 = uRam0000000183263d28;
  uRam0000000183263eb0 =
       func_0x00018a987140((uVar4 | 0x801900185d625261) + (uVar4 & 0x801900185d625261));
  uRam0000000183263d20 =
       (uRam0000000183263d20 ^ uRam0000000183263eb0 ^ 0x80190018d9407145) + 0x80190018d9407144 ^
       0xfd979b52ea39c64e;
  uRam0000000183263b10 =
       (uRam0000000183263d90 * 0x132c251c92538669 ^ uRam0000000183263d20) +
       (uRam0000000183263eb0 ^ 0x80190018d9407145) ^ uRam0000000183263d20;
  uRam0000000183263d90 = 0x80190018d9407144;
  uVar4 = (uRam0000000183263c48 ^ _UNK_1818d5f00) + uRam0000000183263b18 + 0x7fe6ffe7a29dad9e;
  uVar5 = (uRam0000000183263b18 ^ _UNK_1818d5f08) + uRam0000000183263c48 + 0x80190018d9407144;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263c48 ^ _UNK_1818d5f00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263b18 ^ _UNK_1818d5f08;
  uRam0000000183263dd0 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183263c48 + 0x80190018d9407144) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183263b18 + 0x7fe6ffe7a29dad9e));
  uRam0000000183263e30 =
       uRam0000000183263e30 ^ uRam0000000183263dd0 & 0x3fffffffff ^ 0xec4f358367efd9ee;
  uRam0000000183263e90 =
       (uRam0000000183263e90 * 0x35d26f3aca71d4d7 ^ uRam0000000183263e30) +
       (uRam0000000183263dd0 & 0x3fffffffff);
  uRam0000000183263df0 = uRam0000000183263e90 ^ uRam0000000183263e30;
  uRam0000000183263b68 = 0;
  uVar4 = (uRam0000000183263b20 ^ 0x84225cda) + uRam0000000183263d10 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263b20 ^ 0x84225cda;
  uVar5 = ((uRam0000000183263d10 + uRam0000000183263b20) * 0x2000 |
          uRam0000000183263d10 + uRam0000000183263b20 >> 0x33) ^ uRam0000000183263d10;
  uRam0000000183263b10 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) - uRam0000000183263b20 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263d10 + 0x84225cda));
  uVar4 = uRam0000000183263b10 & 0x3fffffffffffffff;
  uRam0000000183264048 = uRam0000000183263c58 ^ uVar4 ^ 0x7fff;
  uRam0000000183264018 = (uRam0000000183264018 ^ uVar4) + 0x7fff ^ 0x38e2a88f8d3c27f6;
  uRam0000000183263da8 = (uRam0000000183263da8 * 0x6c5fc5f3f0641295 ^ uRam0000000183264018) + uVar4;
  uRam0000000183263d80 = uRam0000000183263da8 ^ uRam0000000183264018;
  uRam0000000183263e78 = 0x7fff;
  uVar4 = (uRam0000000183264068 ^ _UNK_1818d5f10) + uRam0000000183263f70 + 0x77e2e6e3a22ca79e;
  uVar5 = (uRam0000000183263f70 ^ _UNK_1818d5f18) + uRam0000000183264068 + 0x77e2e6e3260e84bb;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183264068 ^ _UNK_1818d5f10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263f70 ^ _UNK_1818d5f18;
  uRam0000000183263e38 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183264068 + 0x77e2e6e3260e84bb) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183263f70 + 0x77e2e6e3a22ca79e));
  uRam0000000183263f20 =
       uRam0000000183263f20 ^ uRam0000000183263e38 ^ 0x77e2e6e3260e84bb ^ 0xfa0bfbf9b896b725;
  uRam0000000183264018 =
       (uRam0000000183264018 * -0x2444179cbef2a3a5 ^ uRam0000000183263f20) +
       (uRam0000000183263e38 ^ 0x77e2e6e3260e84bb);
  uRam0000000183263d80 = uRam0000000183264018 ^ uRam0000000183263f20;
  uRam0000000183263bc8 = 0;
  uRam0000000183263da8 = func_0x00018a987140(uRam0000000183263e58 + 0x4bff7c45ffddff ^ 0x36);
  uRam0000000183263bb8 = uRam0000000183263f30 ^ uRam0000000183263fb8 ^ 0x7fff;
  uRam0000000183263d18 = (uRam0000000183263d18 ^ uRam0000000183263fb8) + 0x7fff ^ 0x41bcbbb23617a4d6
  ;
  uRam0000000183263ca8 =
       (uRam0000000183263ca8 * 0x25fd17c6b4be7587 ^ uRam0000000183263d18) + uRam0000000183263fb8;
  uRam0000000183263c78 = uRam0000000183263ca8 ^ uRam0000000183263d18;
  uRam0000000183263f80 = 0x7fff;
  uVar4 = param_4 ^ 0x84222325 ^ uRam00000001832640a0;
  lVar3 = (param_4 ^ 0x84222325) + uRam00000001832640c8;
  uVar5 = uVar4 + lVar3;
  uVar6 = (uRam00000001832640c8 ^ 0x7fff) + uRam00000001832640a0 + 0x7fff;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832640c8 ^ 0x7fff;
  uRam0000000183263de8 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832640a0 + 0x7fff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar4 = ((param_4 | 0x7fff) ^ uRam0000000183263de8) & 0xfffffffffffff;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar6 = (ulonglong)uVar2;
  uRam0000000183263c10 = (uRam0000000183263c10 ^ uVar4) + uVar6 ^ 0xa834df38f362a177;
  uRam0000000183263c00 = (uRam0000000183263c00 * -0x79a3ed02d259671 ^ uRam0000000183263c10) + uVar4;
  uRam0000000183263cf0 = uRam0000000183263c00 ^ uRam0000000183263c10;
  uVar5 = uVar6 ^ 0x84222325;
  uVar4 = ((uRam0000000183263e48 ^ uVar5) +
          (ulonglong)((uint)uRam0000000183263e48 & (uint)uVar5) * 2) *
          ((ulonglong)param_3 - lRam0000000183263e18);
  uVar4 = (uVar4 | uRam0000000183263fd0) + (uVar4 & uRam0000000183263fd0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar5 = uVar5 ^ param_3;
  uRam0000000183263b70 = uVar6;
  uRam0000000183263dc0 =
       func_0x00018a987140((uVar5 | uVar4) + (ulonglong)((uint)uVar5 & (uint)uVar4));
  uVar4 = (uVar6 ^ uRam0000000183263dc0 & 0x7fffffffffffffff) << 6 |
          (uRam0000000183263dc0 & 0x7fffffffffffffff) >> 0x3a;
  uRam0000000183263b48 = (ulonglong)(uVar2 ^ param_3);
  uRam0000000183263d90 = (uRam0000000183263d90 ^ uVar4) + uRam0000000183263b48 ^ 0xaa42b7273e30e8e5;
  uRam0000000183263da8 = (uRam0000000183263da8 * -0x9f1dbb96daa0289 ^ uRam0000000183263d90) + uVar4;
  uRam0000000183263f68 = uRam0000000183263da8 ^ uRam0000000183263d90;
  uVar4 = (uRam0000000183264038 ^ _UNK_1818d5f20) + uRam0000000183263b60 + 0x4ea2db46;
  uVar5 = (uRam0000000183263b60 ^ _UNK_1818d5f28) + uRam0000000183264038 + 0xb9792a15;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183264038 ^ _UNK_1818d5f20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263b60 ^ _UNK_1818d5f28;
  uRam0000000183263ce0 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183264038 + 0xb9792a15) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263b60 + 0x4ea2db46));
  uVar4 = (ulonglong)(~(uint)uRam0000000183263ce0 & 0xca80f863);
  uRam0000000183263de0 = (uRam0000000183263de0 ^ uVar4) + 0xfbf9fa77 ^ 0x64a50abe75d221cf;
  uRam0000000183263ef0 = (uRam0000000183263ef0 * 0x38da9e76ce24769f ^ uRam0000000183263de0) + uVar4;
  uRam0000000183263fa8 = uRam0000000183263ef0 ^ uRam0000000183263de0;
  uRam0000000183263b80 = 0xfbf9fa77;
  uRam0000000183263ea8 = func_0x00018a987140(uRam0000000183263f18 + 0x6008be5ff8bff ^ 0xe1);
  uVar4 = uRam0000000183263ea8 << 0x30 | uRam0000000183263ea8 >> 0x10;
  uRam0000000183263d58 = (uRam0000000183263d58 ^ uVar4) + 0x33b619cf ^ 0xa314e64eb801c724;
  uRam0000000183263b20 = (uRam0000000183263b20 * 0x715d4895318b7395 ^ uRam0000000183263d58) + uVar4;
  uRam0000000183263cb8 = uRam0000000183263b20 ^ uRam0000000183263d58;
  uRam0000000183263e88 = 0x33b619cf;
  uRam0000000183263be0 = func_0x00018a987140(uRam0000000183263d80 ^ 0x1700a1cdffaa54);
  uRam0000000183263d78 =
       (uRam0000000183263d78 ^ uRam0000000183263bf0) - 0x26d5346b ^ 0x8842983909d95aea;
  uRam0000000183263d18 =
       (uRam0000000183263d18 * 0x2f64e3da2c575a3d ^ uRam0000000183263d78) + uRam0000000183263bf0;
  uRam0000000183263ce8 = uRam0000000183263d18 ^ uRam0000000183263d78;
  uRam0000000183263c30 = 0xd92acb95;
  uVar4 = (uRam0000000183263bd8 ^ _UNK_1818d5f30) + uRam0000000183263d80 + 0x84224651;
  uVar5 = (uRam0000000183263d80 ^ _UNK_1818d5f38) + uRam0000000183263bd8 + 0x26d5346b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263bd8 ^ _UNK_1818d5f30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183263d80 ^ _UNK_1818d5f38;
  uRam0000000183263cb8 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183263bd8 + 0x26d5346b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263d80 + 0x84224651));
  uRam0000000183264078 = uRam0000000183263ee0 ^ uRam0000000183263cb8 ^ 0x26d599df;
  uRam0000000183263c50 =
       (uRam0000000183263c50 ^ uRam0000000183263cb8) + 0x26d599df ^ 0xacb75a5cc4bd6bcc;
  uRam0000000183264010 =
       (uRam0000000183264010 * -0x640c672325cb0335 ^ uRam0000000183263c50) + uRam0000000183263cb8;
  uRam0000000183264018 = uRam0000000183264010 ^ uRam0000000183263c50;
  uRam00000001832640d8 = 0x26d599df;
  uRam0000000183263c90 = func_0x00018a987140(uRam0000000183263f68 + 0xffceffc698ff32ff ^ 0xa6);
  uRam0000000183264040 = uRam0000000183263dd0 ^ uRam0000000183263b38 ^ 0x100006574;
  uRam0000000183264080 =
       (uRam0000000183264080 ^ uRam0000000183263b38) + 0x100006574 ^ 0xc6f34f2b5fcc493f;
  uRam0000000183263ba0 =
       (uRam0000000183263ba0 * 0x178cd53a7ea2085f ^ uRam0000000183264080) + uRam0000000183263b38;
  uRam0000000183263db8 = uRam0000000183263ba0 ^ uRam0000000183264080;
  uRam00000001832640d8 = 0x6574;
  uRam0000000183264068 = func_0x00018a987140(uRam0000000183263f80 + 0xff2f008861003aff ^ 0x42);
  uRam00000001832640b0 =
       (uRam00000001832640b0 ^ uRam0000000183264068) - 0xd65f2ca ^ 0x959ae796579e1034;
  uRam0000000183263bc0 =
       (uRam0000000183263bc0 * 0x69847b0f7ca1e3ef ^ uRam00000001832640b0) + uRam0000000183264068;
  uRam0000000183263fa0 = uRam0000000183263bc0 ^ uRam00000001832640b0;
  uRam0000000183263c20 = 0xf29a0d36;
  uVar4 = (~uRam0000000183263e50 + 0xd65f2cb) *
          ((uRam0000000183263ca8 ^ 0x84224651) +
          (ulonglong)((uint)uRam0000000183263ca8 & 0x84224651) * 2);
  uVar4 = (uVar4 | uRam0000000183263dd0) + (uVar4 & uRam0000000183263dd0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263b00 =
       func_0x00018a987140((uVar4 | 0x8947b49b) + (ulonglong)((uint)uVar4 & 0x8947b49b));
  uVar4 = (uRam0000000183263b00 ^ 0x54f4afbb588) * 0x20d491b2d08819c9;
  uRam0000000183263c30 = uRam0000000183263fe0 ^ uVar4 ^ 0xd66583e;
  uRam0000000183263fa8 = (uRam0000000183263fa8 ^ uVar4) + 0xd66583e ^ 0x5c55ae1251af1b77;
  uRam00000001832640c0 = (uRam00000001832640c0 * -0x219d6c9ca0f35f3d ^ uRam0000000183263fa8) + uVar4
  ;
  uRam0000000183264058 = uRam00000001832640c0 ^ uRam0000000183263fa8;
  uRam0000000183263ce8 = 0xd66583e;
  uVar4 = (~uRam0000000183263d68 + 0xf29a0d37) *
          ((uRam0000000183263e00 ^ 0x89447b1b) +
          (ulonglong)((uint)uRam0000000183263e00 & 0x89447b1b) * 2);
  uVar4 = (uVar4 | uRam0000000183263d08) + (uVar4 & uRam0000000183263d08);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263fd0 =
       func_0x00018a987140((uVar4 | 0x7bde762d) + (ulonglong)((uint)uVar4 & 0x7bde762d));
  uRam0000000183263f50 = uRam0000000183263d90 ^ uRam0000000183263fd0 ^ 0x100006574;
  uRam0000000183263b38 =
       (uRam0000000183263b38 ^ uRam0000000183263fd0) + 0x100006574 ^ 0xee00908c7f0f60a0;
  uRam0000000183263ff8 =
       (uRam0000000183263ff8 * -0x3c6c6a5c1bf1780d ^ uRam0000000183263b38) + uRam0000000183263fd0;
  uRam0000000183263e78 = uRam0000000183263ff8 ^ uRam0000000183263b38;
  uRam0000000183263b08 = 0x6574;
  uRam0000000183263e48 = func_0x00018a987140(lRam0000000183263e18 + 0x800232dffe9ffU ^ 0x6c);
  uVar5 = uRam0000000183263e48 ^ 0xe1183b13;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5;
  uVar4 = uVar5 << 0x14 | uVar5 >> 0x2c;
  uRam0000000183263f70 = (uRam0000000183263f70 ^ uVar4) - 0xe1183b13 ^ 0x796abcd6b2f63ad1;
  uRam0000000183263b48 = (uRam0000000183263b48 * -0x21fdcf7824122b31 ^ uRam0000000183263f70) + uVar4
  ;
  uRam0000000183263ba0 = uRam0000000183263b48 ^ uRam0000000183263f70;
  uRam0000000183263eb0 = 0x1ee7c4ed;
  uRam0000000183263d38 = func_0x00018a987140(uRam0000000183263ed8 ^ 0xffbcfffb4300cc43);
  uVar4 = (ulonglong)(~(uint)uRam0000000183263d38 & 0xe118a087) << 0x13 ^ 0xe118a087;
  uRam0000000183263e40 = uRam00000001832640f8 ^ uVar4 ^ 0x100006574;
  uRam0000000183263ce8 = (uRam0000000183263ce8 ^ uVar4) + 0x100006574 ^ 0x39680df242aa22;
  uRam0000000183263df8 = (uRam0000000183263df8 * -0x561bfbccdf6b640d ^ uRam0000000183263ce8) + uVar4
  ;
  uRam0000000183264028 = uRam0000000183263df8 ^ uRam0000000183263ce8;
  uRam0000000183263bf8 = 0x6574;
  uVar4 = (uRam0000000183264088 ^ _UNK_1818d5f40) + uRam00000001832640d8 + 0x7fdbd952;
  uVar5 = (uRam00000001832640d8 ^ _UNK_1818d5f48) + uRam0000000183264088 + 0x33b619cf;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183264088 ^ _UNK_1818d5f40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832640d8 ^ _UNK_1818d5f48;
  uRam0000000183263cf0 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183264088 + 0x33b619cf) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832640d8 + 0x7fdbd952));
  uVar4 = (uRam0000000183263cf0 ^ 0xfbf9fa77) << 0x25 | (uRam0000000183263cf0 ^ 0xfbf9fa77) >> 0x1b;
  uRam0000000183263ca0 = (uRam0000000183263ca0 ^ uVar4) + 0xc84fe3b8 ^ 0x9c197227eeb8fb5f;
  uRam0000000183264040 = (uRam0000000183264040 * -0x592f664152946d1d ^ uRam0000000183263ca0) + uVar4
  ;
  uRam0000000183263df8 = uRam0000000183264040 ^ uRam0000000183263ca0;
  uRam0000000183263c08 = 0xc84fe3b8;
  uVar4 = (~uRam0000000183264048 + 0x2fb01447) *
          ((uRam0000000183263d18 ^ 0xab923763) +
          (ulonglong)((uint)uRam0000000183263d18 & 0xab923763) * 2);
  uVar4 = (uVar4 | uRam0000000183263d58) + (uVar4 & uRam0000000183263d58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263fd0 =
       func_0x00018a987140((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam0000000183263bc0 = uRam0000000183263fd0 ^ 0x8e2208dba6b1762;
  uRam0000000183263d38 = uRam0000000183263d38 ^ uRam0000000183263bc0 ^ 0x273f9c93ad166772;
  uRam0000000183263c00 =
       (uRam0000000183263c00 * -0x3525248a264153e5 ^ uRam0000000183263d38) + uRam0000000183263bc0;
  uRam0000000183263de0 = uRam0000000183263c00 ^ uRam0000000183263d38;
  uRam0000000183263be0 = 0;
  uVar4 = (uRam0000000183263ff8 ^ 0x84224651) + uRam0000000183263f80 + 0x84224651;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263ff8 ^ 0x84224651;
  uVar5 = ((uRam0000000183263f80 + uRam0000000183263ff8) * 0x2000 |
          uRam0000000183263f80 + uRam0000000183263ff8 >> 0x33) ^ uRam0000000183263f80;
  uRam0000000183264028 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) - uRam0000000183263ff8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183263f80 + 0x84224651));
  uVar4 = (uRam0000000183264028 ^ 0x6574) << 5 | uRam0000000183264028 >> 0x3b;
  uRam0000000183263ed8 = uRam0000000183263b08 ^ uVar4 ^ 0x6574;
  uRam0000000183263b58 = (uRam0000000183263b58 ^ uVar4) + 0x6574 ^ 0x3168d3be1852c614;
  uRam0000000183263e08 = (uRam0000000183263e08 * -0x1e2f5528b66395d5 ^ uRam0000000183263b58) + uVar4
  ;
  uRam0000000183264080 = uRam0000000183263e08 ^ uRam0000000183263b58;
  uRam0000000183263f50 = 0x6574;
  uVar4 = (uRam0000000183263bd8 ^ _UNK_1818d5f50) + uRam0000000183264020 + 0x7fdbd952;
  uVar5 = (uRam0000000183264020 ^ _UNK_1818d5f58) + uRam0000000183263bd8 + 0x4060588;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183263bd8 ^ _UNK_1818d5f50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183264020 ^ _UNK_1818d5f58;
  uRam0000000183264030 =
       func_0x00018a987140((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183263bd8 + 0x4060588) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183264020 + 0x7fdbd952));
  uVar4 = (uRam0000000183264030 ^ 0x4060588) * -0x7a0d1b867c50378f;
  uRam0000000183263d80 = uRam0000000183263d80 ^ uVar4 ^ 0x472ef561b4c09456;
  uRam0000000183264078 = (uRam0000000183264078 * 0x238aa0119c46a5c9 ^ uRam0000000183263d80) + uVar4;
  uRam0000000183263c60 = uRam0000000183264078 ^ uRam0000000183263d80;
  lRam0000000183263d60 = 0;
  uVar4 = ((uRam0000000183263e78 ^ 0x84224651) +
          (ulonglong)((uint)uRam0000000183263e78 & 0x84224651) * 2) * -uRam00000001832640f8;
  uVar4 = (uVar4 | uRam0000000183263bb8) + (uVar4 & uRam0000000183263bb8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263db0 =
       func_0x00018a987140((uVar4 | 0x84224651) + (ulonglong)((uint)uVar4 & 0x84224651));
  uVar4 = uRam0000000183263db0 ^ 0x6574;
  uRam0000000183263e78 = uRam0000000183263ea0 ^ uVar4 ^ 0x6574;
  uRam0000000183263cd8 = (uRam0000000183263cd8 ^ uVar4) + 0x6574 ^ 0xaddb8e9c115480e4;
  uRam0000000183263b98 = (uRam0000000183263b98 * -0x28999944e54e8289 ^ uRam0000000183263cd8) + uVar4
  ;
  uRam0000000183263c08 = uRam0000000183263b98 ^ uRam0000000183263cd8;
  uRam0000000183263d38 = 0x6574;
  uVar4 = ((uRam0000000183263c28 ^ 0x84224651) +
          (ulonglong)((uint)uRam0000000183263c28 & 0x84224651) * 2) * -lRam0000000183263d60;
  uVar4 = (uVar4 | uRam0000000183263d50) + (uVar4 & uRam0000000183263d50);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183263dc0 =
       func_0x00018a987140((uVar4 | 0x84224651) + (ulonglong)((uint)uVar4 & 0x84224651));
  uVar4 = uRam0000000183263dc0 << 0x20 | (uRam0000000183263dc0 & 0x7fffffffffffffff) >> 0x20;
  uRam0000000183263ee0 =
       (uRam0000000183263ef0 ^ uVar4 ^ 0x6574 ^ uVar4) + 0x6574 ^ 0xf2cfe6f9f4d0da16;
  uRam0000000183264090 = (uRam0000000183264090 * 0x5a10432a72f959d7 ^ uRam0000000183263ee0) + uVar4;
  uRam0000000183263d78 = uRam0000000183264090 ^ uRam0000000183263ee0;
  uRam0000000183263d48 = 0x6574;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a97e3d5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818d4040 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18a9871d0, runtime 6ffff25971d0) =====

void FUN_18a9871d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018a98721b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818d6040 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fP; aWG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18a9881e0, runtime 6ffff25981e0) =====

void FUN_18a9881e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a988269 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818d6600 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWp ()V (handler @ image 18a98aef0, runtime 6ffff259aef0) =====

void FUN_18a98aef0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018a98af12 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818d7580 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fP; aWq ()V (handler @ image 18a9abbf0, runtime 6ffff25bbbf0) =====

void FUN_18a9abbf0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018a9abc12 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818daee0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fP; aWr (Lsixtwo/gN;)V (handler @ image 18a9ac0b0, runtime 6ffff25bc0b0) =====

void FUN_18a9ac0b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a9ac0fa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818db0d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWs (Lsixtwo/gM;)V (handler @ image 18a9ac2a0, runtime 6ffff25bc2a0) =====

void FUN_18a9ac2a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a9ac2ea did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818db170 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWt (Lsixtwo/gL$tk;)V (handler @ image 18a9ac490, runtime 6ffff25bc490) =====

void FUN_18a9ac490(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a9ac554 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818db230 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWu (I)V (handler @ image 18a9b1800, runtime 6ffff25c1800) =====

void FUN_18a9b1800(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a9b18c4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818dcbe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWv ()V (handler @ image 18a9b6090, runtime 6ffff25c6090) =====

void FUN_18a9b6090(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a9b6151 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818de030 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWw ()Ljava/lang/String; (handler @ image 18a9b94e0, runtime 6ffff25c94e0) =====

void FUN_18a9b94e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a9b95f7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818df090 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWx (Ljava/lang/String;)V (handler @ image 18a93f810, runtime 6ffff254f810) =====

void FUN_18a93f810(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a93f8ec did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c9590 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWy (Ljava/util/List;Ljava/lang/Integer;)Z (handler @ image 18a9487d0, runtime 6ffff25587d0) =====

void FUN_18a9487d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcd,6);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a94882c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818cbcc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fP; aWz (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18a948b20, runtime 6ffff2558b20) =====

undefined8 FUN_18a948b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fP; aaj ()V (handler @ image 18a93f230, runtime 6ffff254f230) =====

void FUN_18a93f230(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a93f27a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c9380 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



